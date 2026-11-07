#include "funcs.h"

void F_00525ca0(CPU *c) {
  NATIVE_HOOK(0x525ca0u) REGS; LOADALL;
L_00525ca0:;
  /* 00525ca0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00525ca1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00525ca3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00525ca5 push 0x61bef8 */ { u32 v_ = 0x61bef8u; esp -= 4; M32(esp) = v_; }
  /* 00525caa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00525cb0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00525cb1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00525cb8 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00525cbb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00525cbc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00525cbd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00525cbf lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00525cc2 call 0x601e91 */ esp -= 4; M32(esp) = 0x525cc7u; SAVEALL; F_00601e91(c); ABI_CHECK(0x601e91u, 0x525cc2u); RETCHK(0x525cc7u, 0x525cc2u); LOADALL;
  /* 00525cc7 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00525cce mov eax, dword ptr [0x9be37c] */ { const u32 m_ = (u32)(0x9be37cu); eax = (u32)(M32(m_)); }
  /* 00525cd3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00525cd5 mov edi, dword ptr [0x9b8b6c] */ { const u32 m_ = (u32)(0x9b8b6cu); edi = (u32)(M32(m_)); }
  /* 00525cdb mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 00525cde jne 0x525d0b */ if (!ZF_) goto L_00525d0b;
  /* 00525ce0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00525ce2 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00525ce5 call 0x601e91 */ esp -= 4; M32(esp) = 0x525ceau; SAVEALL; F_00601e91(c); ABI_CHECK(0x601e91u, 0x525ce5u); RETCHK(0x525ceau, 0x525ce5u); LOADALL;
  /* 00525cea mov eax, dword ptr [0x9be37c] */ { const u32 m_ = (u32)(0x9be37cu); eax = (u32)(M32(m_)); }
  /* 00525cef test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00525cf1 jne 0x525d03 */ if (!ZF_) goto L_00525d03;
  /* 00525cf3 mov eax, dword ptr [0x6945e4] */ { const u32 m_ = (u32)(0x6945e4u); eax = (u32)(M32(m_)); }
  /* 00525cf8 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00525cf9 mov dword ptr [0x6945e4], eax */ { const u32 m_ = (u32)(0x6945e4u); M32(m_) = (u32)(eax); }
  /* 00525cfe mov dword ptr [0x9be37c], eax */ { const u32 m_ = (u32)(0x9be37cu); M32(m_) = (u32)(eax); }
L_00525d03:;
  /* 00525d03 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00525d06 call 0x601eb4 */ esp -= 4; M32(esp) = 0x525d0bu; SAVEALL; F_00601eb4(c); ABI_CHECK(0x601eb4u, 0x525d06u); RETCHK(0x525d0bu, 0x525d06u); LOADALL;
L_00525d0b:;
  /* 00525d0b mov eax, dword ptr [0x9be37c] */ { const u32 m_ = (u32)(0x9be37cu); eax = (u32)(M32(m_)); }
  /* 00525d10 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00525d13 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00525d14 call 0x601af8 */ esp -= 4; M32(esp) = 0x525d19u; SAVEALL; F_00601af8(c); ABI_CHECK(0x601af8u, 0x525d14u); RETCHK(0x525d19u, 0x525d14u); LOADALL;
  /* 00525d19 mov esi, eax */ { esi = (u32)(eax); }
  /* 00525d1b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00525d1d jne 0x525d66 */ if (!ZF_) goto L_00525d66;
  /* 00525d1f test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00525d21 je 0x525d27 */ if (ZF_) goto L_00525d27;
  /* 00525d23 mov esi, edi */ { esi = (u32)(edi); }
  /* 00525d25 jmp 0x525d66 */ goto L_00525d66;
L_00525d27:;
  /* 00525d27 lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00525d2a call 0x526160 */ esp -= 4; M32(esp) = 0x525d2fu; SAVEALL; F_00526160(c); ABI_CHECK(0x526160u, 0x525d2au); RETCHK(0x525d2fu, 0x525d2au); LOADALL;
  /* 00525d2f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00525d32 jne 0x525d4f */ if (!ZF_) goto L_00525d4f;
  /* 00525d34 push 0x64e820 */ { u32 v_ = 0x64e820u; esp -= 4; M32(esp) = v_; }
  /* 00525d39 lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00525d3c call 0x5fea70 */ esp -= 4; M32(esp) = 0x525d41u; SAVEALL; F_005fea70(c); ABI_CHECK(0x5fea70u, 0x525d3cu); RETCHK(0x525d41u, 0x525d3cu); LOADALL;
  /* 00525d41 push 0x657b68 */ { u32 v_ = 0x657b68u; esp -= 4; M32(esp) = v_; }
  /* 00525d46 lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00525d49 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00525d4a call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
L_00525d4f:;
  /* 00525d4f mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 00525d52 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00525d54 mov dword ptr [0x9b8b6c], esi */ { const u32 m_ = (u32)(0x9b8b6cu); M32(m_) = (u32)(esi); }
  /* 00525d5a call 0x4b0e80 */ esp -= 4; M32(esp) = 0x525d5fu; SAVEALL; F_004b0e80(c); ABI_CHECK(0x4b0e80u, 0x525d5au); RETCHK(0x525d5fu, 0x525d5au); LOADALL;
  /* 00525d5f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00525d61 call 0x601b70 */ esp -= 4; M32(esp) = 0x525d66u; SAVEALL; F_00601b70(c); ABI_CHECK(0x601b70u, 0x525d61u); RETCHK(0x525d66u, 0x525d61u); LOADALL;
L_00525d66:;
  /* 00525d66 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00525d69 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00525d70 call 0x601eb4 */ esp -= 4; M32(esp) = 0x525d75u; SAVEALL; F_00601eb4(c); ABI_CHECK(0x601eb4u, 0x525d70u); RETCHK(0x525d75u, 0x525d70u); LOADALL;
  /* 00525d75 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00525d78 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00525d79 mov eax, esi */ { eax = (u32)(esi); }
  /* 00525d7b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00525d7c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00525d83 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00525d85 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00525d86 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00525d90(CPU *c) {
  NATIVE_HOOK(0x525d90u) REGS; LOADALL;
L_00525d90:;
  /* 00525d90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00525d91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00525d93 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00525d95 push 0x625f68 */ { u32 v_ = 0x625f68u; esp -= 4; M32(esp) = v_; }
  /* 00525d9a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00525da0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00525da1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00525da8 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00525dab mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00525dae mov cl, byte ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00525db0 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00525db5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00525db6 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00525db9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00525dba mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 00525dbd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00525dbe xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00525dc0 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00525dc2 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00525dc5 je 0x525de0 */ if (ZF_) goto L_00525de0;
  /* 00525dc7 mov al, cl */ { eax = (eax & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 00525dc9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00525dd0:;
  /* 00525dd0 cmp al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00525dd2 jne 0x525dd5 */ if (!ZF_) goto L_00525dd5;
  /* 00525dd4 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_00525dd5:;
  /* 00525dd5 mov al, byte ptr [edx + 1] */ { const u32 m_ = (u32)(edx + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00525dd8 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00525dd9 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00525ddb jne 0x525dd0 */ if (!ZF_) goto L_00525dd0;
  /* 00525ddd mov dword ptr [ebp + 0x10], esi */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esi); }
L_00525de0:;
  /* 00525de0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00525de1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00525de2 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00525de5 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 00525dec mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 00525def mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 00525df3 call 0x4ff860 */ esp -= 4; M32(esp) = 0x525df8u; SAVEALL; F_004ff860(c); ABI_CHECK(0x4ff860u, 0x525df3u); RETCHK(0x525df8u, 0x525df3u); LOADALL;
  /* 00525df8 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00525dfb mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00525dfe mov dword ptr [ebp - 0x38], 0xfffffffe */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0xfffffffeu); }
  /* 00525e05 mov dword ptr [ebp - 0x34], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x1u); }
  /* 00525e0c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00525e10:;
  /* 00525e10 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00525e13 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00525e15 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00525e17 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00525e19 mov byte ptr [ebp - 0x2d], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)(0x0u); }
  /* 00525e1d jbe 0x526074 */ if ((CF_|ZF_)) goto L_00526074;
L_00525e23:;
  /* 00525e23 mov al, byte ptr [esi + edx] */ { const u32 m_ = (u32)(esi + edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00525e26 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00525e28 je 0x525e3d */ if (ZF_) goto L_00525e3d;
  /* 00525e2a mov cl, byte ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00525e2c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00525e30:;
  /* 00525e30 cmp al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00525e32 je 0x525e3d */ if (ZF_) goto L_00525e3d;
  /* 00525e34 mov al, byte ptr [esi + edx + 1] */ { const u32 m_ = (u32)(esi + edx + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00525e38 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00525e39 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00525e3b jne 0x525e30 */ if (!ZF_) goto L_00525e30;
L_00525e3d:;
  /* 00525e3d mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00525e40 cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00525e43 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00525e46 jae 0x525e4b */ if (!CF_) goto L_00525e4b;
  /* 00525e48 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_00525e4b:;
  /* 00525e4b cmp byte ptr [eax + edi], 0 */ { const u32 m_ = (u32)(eax + edi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00525e4f je 0x525e67 */ if (ZF_) goto L_00525e67;
  /* 00525e51 cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00525e54 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00525e57 jae 0x525e5c */ if (!CF_) goto L_00525e5c;
  /* 00525e59 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_00525e5c:;
  /* 00525e5c movsx eax, byte ptr [eax + edi] */ { const u32 m_ = (u32)(eax + edi); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 00525e60 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00525e62 jmp 0x525fbd */ goto L_00525fbd;
L_00525e67:;
  /* 00525e67 mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 00525e6a add esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00525e6c mov al, byte ptr [esi + edx] */ { const u32 m_ = (u32)(esi + edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00525e6f cmp al, byte ptr [edx] */ { const u32 m_ = (u32)(edx); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00525e71 je 0x525f9e */ if (ZF_) goto L_00525f9e;
  /* 00525e77 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00525e79 je 0x525f9e */ if (ZF_) goto L_00525f9e;
  /* 00525e7f mov al, byte ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00525e82 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00525e84 jne 0x525ec6 */ if (!ZF_) goto L_00525ec6;
  /* 00525e86 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 00525e88 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00525e8a je 0x525eb9 */ if (ZF_) goto L_00525eb9;
  /* 00525e8c mov edx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 00525e8f mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 00525e91 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00525e93 je 0x525eaa */ if (ZF_) goto L_00525eaa;
  /* 00525e95 mov ebx, dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); ebx = (u32)(M32(m_)); }
  /* 00525e98 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 00525e9a mov ebx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ebx = (u32)(M32(m_)); }
  /* 00525e9c add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00525e9e cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00525ea0 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00525ea3 jae 0x525eaa */ if (!CF_) goto L_00525eaa;
  /* 00525ea5 movzx eax, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M8(m_)); }
  /* 00525ea8 jmp 0x525eaf */ goto L_00525eaf;
L_00525eaa:;
  /* 00525eaa mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00525eac call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x525eafu; SAVEALL; call_ind(c, t_); RETCHK(0x525eafu, 0x525eacu); LOADALL; }
L_00525eaf:;
  /* 00525eaf cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00525eb2 je 0x525eb9 */ if (ZF_) goto L_00525eb9;
  /* 00525eb4 mov byte ptr [ebx + 5], al */ { const u32 m_ = (u32)(ebx + 0x5u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00525eb7 jmp 0x525ebf */ goto L_00525ebf;
L_00525eb9:;
  /* 00525eb9 mov dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x0u); }
L_00525ebf:;
  /* 00525ebf mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00525ec2 mov byte ptr [ebx + 4], 1 */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)(0x1u); }
L_00525ec6:;
  /* 00525ec6 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00525ec9 mov al, byte ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00525ecc test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00525ece jne 0x525f1e */ if (!ZF_) goto L_00525f1e;
  /* 00525ed0 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00525ed2 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 00525ed4 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00525ed6 je 0x525f0b */ if (ZF_) goto L_00525f0b;
  /* 00525ed8 mov eax, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); eax = (u32)(M32(m_)); }
  /* 00525edb mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00525edd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00525edf je 0x525ef9 */ if (ZF_) goto L_00525ef9;
  /* 00525ee1 mov edx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 00525ee4 mov ebx, dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); ebx = (u32)(M32(m_)); }
  /* 00525ee7 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 00525ee9 mov ebx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ebx = (u32)(M32(m_)); }
  /* 00525eeb add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00525eed cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00525eef mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00525ef2 jae 0x525ef9 */ if (!CF_) goto L_00525ef9;
  /* 00525ef4 movzx eax, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M8(m_)); }
  /* 00525ef7 jmp 0x525efe */ goto L_00525efe;
L_00525ef9:;
  /* 00525ef9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00525efb call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x525efeu; SAVEALL; call_ind(c, t_); RETCHK(0x525efeu, 0x525efbu); LOADALL; }
L_00525efe:;
  /* 00525efe cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00525f01 je 0x525f0b */ if (ZF_) goto L_00525f0b;
  /* 00525f03 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00525f06 mov byte ptr [ecx + 5], al */ { const u32 m_ = (u32)(ecx + 0x5u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00525f09 jmp 0x525f14 */ goto L_00525f14;
L_00525f0b:;
  /* 00525f0b mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00525f0e mov dword ptr [edx], 0 */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0x0u); }
L_00525f14:;
  /* 00525f14 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00525f17 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00525f1a mov byte ptr [eax + 4], 1 */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)(0x1u); }
L_00525f1e:;
  /* 00525f1e mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 00525f20 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00525f22 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00525f25 jne 0x525f46 */ if (!ZF_) goto L_00525f46;
  /* 00525f27 cmp dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00525f29 jne 0x525f4b */ if (!ZF_) goto L_00525f4b;
L_00525f2b:;
  /* 00525f2b mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 00525f2e cmp ecx, 0x7f */ { u32 a_ = ecx, b_ = 0x7fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00525f31 jb 0x525f38 */ if (CF_) goto L_00525f38;
  /* 00525f33 mov ecx, 0x7f */ { ecx = (u32)(0x7fu); }
L_00525f38:;
  /* 00525f38 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00525f3c mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00525f3f jae 0x525fba */ if (!CF_) goto L_00525fba;
  /* 00525f41 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00525f44 jmp 0x525fba */ goto L_00525fba;
L_00525f46:;
  /* 00525f46 cmp dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00525f49 jne 0x525f2b */ if (!ZF_) goto L_00525f2b;
L_00525f4b:;
  /* 00525f4b mov al, byte ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00525f4e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00525f50 jne 0x525f90 */ if (!ZF_) goto L_00525f90;
  /* 00525f52 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00525f54 je 0x525f83 */ if (ZF_) goto L_00525f83;
  /* 00525f56 mov edx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 00525f59 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 00525f5b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00525f5d je 0x525f74 */ if (ZF_) goto L_00525f74;
  /* 00525f5f mov ebx, dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); ebx = (u32)(M32(m_)); }
  /* 00525f62 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 00525f64 mov ebx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ebx = (u32)(M32(m_)); }
  /* 00525f66 add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00525f68 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00525f6a mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00525f6d jae 0x525f74 */ if (!CF_) goto L_00525f74;
  /* 00525f6f movzx eax, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M8(m_)); }
  /* 00525f72 jmp 0x525f79 */ goto L_00525f79;
L_00525f74:;
  /* 00525f74 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00525f76 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x525f79u; SAVEALL; call_ind(c, t_); RETCHK(0x525f79u, 0x525f76u); LOADALL; }
L_00525f79:;
  /* 00525f79 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00525f7c je 0x525f83 */ if (ZF_) goto L_00525f83;
  /* 00525f7e mov byte ptr [ebx + 5], al */ { const u32 m_ = (u32)(ebx + 0x5u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00525f81 jmp 0x525f89 */ goto L_00525f89;
L_00525f83:;
  /* 00525f83 mov dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x0u); }
L_00525f89:;
  /* 00525f89 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00525f8c mov byte ptr [ebx + 4], 1 */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)(0x1u); }
L_00525f90:;
  /* 00525f90 mov cl, byte ptr [esi + edx] */ { const u32 m_ = (u32)(esi + edx); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00525f93 cmp cl, byte ptr [ebx + 5] */ { const u32 m_ = (u32)(ebx + 0x5u); u32 a_ = (ecx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00525f96 jne 0x525f2b */ if (!ZF_) goto L_00525f2b;
  /* 00525f98 mov byte ptr [ebp - 0x2d], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)(0x1u); }
  /* 00525f9c jmp 0x525fbd */ goto L_00525fbd;
L_00525f9e:;
  /* 00525f9e cmp ecx, 0x7f */ { u32 a_ = ecx, b_ = 0x7fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00525fa1 mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 00525fa4 jb 0x525fab */ if (CF_) goto L_00525fab;
  /* 00525fa6 mov ecx, 0x7f */ { ecx = (u32)(0x7fu); }
L_00525fab:;
  /* 00525fab cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00525faf mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00525fb2 jae 0x525fb7 */ if (!CF_) goto L_00525fb7;
  /* 00525fb4 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_00525fb7:;
  /* 00525fb7 mov dword ptr [ebp - 0x38], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(edi); }
L_00525fba:;
  /* 00525fba mov byte ptr [eax + edi], cl */ { const u32 m_ = (u32)(eax + edi); M8(m_) = (u8)((ecx & 0xffu)); }
L_00525fbd:;
  /* 00525fbd mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00525fc0 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00525fc1 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00525fc3 jb 0x525e23 */ if (CF_) goto L_00525e23;
  /* 00525fc9 mov al, byte ptr [ebp - 0x2d] */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00525fcc test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00525fce je 0x526074 */ if (ZF_) goto L_00526074;
  /* 00525fd4 mov al, byte ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00525fd7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00525fd9 jne 0x526018 */ if (!ZF_) goto L_00526018;
  /* 00525fdb mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 00525fdd test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00525fdf je 0x52600b */ if (ZF_) goto L_0052600b;
  /* 00525fe1 mov edx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 00525fe4 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 00525fe6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00525fe8 je 0x525ffc */ if (ZF_) goto L_00525ffc;
  /* 00525fea mov esi, dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); esi = (u32)(M32(m_)); }
  /* 00525fed mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 00525fef mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 00525ff1 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00525ff3 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00525ff5 jae 0x525ffc */ if (!CF_) goto L_00525ffc;
  /* 00525ff7 movzx eax, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M8(m_)); }
  /* 00525ffa jmp 0x526001 */ goto L_00526001;
L_00525ffc:;
  /* 00525ffc mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00525ffe call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526001u; SAVEALL; call_ind(c, t_); RETCHK(0x526001u, 0x525ffeu); LOADALL; }
L_00526001:;
  /* 00526001 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00526004 je 0x52600b */ if (ZF_) goto L_0052600b;
  /* 00526006 mov byte ptr [ebx + 5], al */ { const u32 m_ = (u32)(ebx + 0x5u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00526009 jmp 0x526011 */ goto L_00526011;
L_0052600b:;
  /* 0052600b mov dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x0u); }
L_00526011:;
  /* 00526011 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00526014 mov byte ptr [ebx + 4], 1 */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)(0x1u); }
L_00526018:;
  /* 00526018 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052601b mov cl, byte ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052601e test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00526020 jne 0x526068 */ if (!ZF_) goto L_00526068;
  /* 00526022 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00526024 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00526026 je 0x526055 */ if (ZF_) goto L_00526055;
  /* 00526028 mov edx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (u32)(M32(m_)); }
  /* 0052602b mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 0052602d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052602f je 0x526043 */ if (ZF_) goto L_00526043;
  /* 00526031 mov esi, dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); esi = (u32)(M32(m_)); }
  /* 00526034 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 00526036 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 00526038 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052603a cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052603c jae 0x526043 */ if (!CF_) goto L_00526043;
  /* 0052603e movzx eax, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M8(m_)); }
  /* 00526041 jmp 0x526048 */ goto L_00526048;
L_00526043:;
  /* 00526043 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00526045 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526048u; SAVEALL; call_ind(c, t_); RETCHK(0x526048u, 0x526045u); LOADALL; }
L_00526048:;
  /* 00526048 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052604b je 0x526055 */ if (ZF_) goto L_00526055;
  /* 0052604d mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00526050 mov byte ptr [ecx + 5], al */ { const u32 m_ = (u32)(ecx + 0x5u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00526053 jmp 0x52605e */ goto L_0052605e;
L_00526055:;
  /* 00526055 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00526058 mov dword ptr [edx], 0 */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0x0u); }
L_0052605e:;
  /* 0052605e mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00526061 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00526064 mov byte ptr [eax + 4], 1 */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)(0x1u); }
L_00526068:;
  /* 00526068 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 0052606a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052606c mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0052606e jne 0x5260a2 */ if (!ZF_) goto L_005260a2;
  /* 00526070 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00526072 jne 0x5260a6 */ if (!ZF_) goto L_005260a6;
L_00526074:;
  /* 00526074 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00526078 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00526079 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052607a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052607b jb 0x526089 */ if (CF_) goto L_00526089;
  /* 0052607d mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00526080 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00526081 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x526086u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x526081u); RETCHK(0x526086u, 0x526081u); LOADALL;
  /* 00526086 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00526089:;
  /* 00526089 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052608c mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 0052608f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00526096 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00526099 call 0x61af31 */ esp -= 4; M32(esp) = 0x52609eu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x526099u); RETCHK(0x52609eu, 0x526099u); LOADALL;
  /* 0052609e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005260a0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005260a1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005260a2:;
  /* 005260a2 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005260a4 jne 0x526074 */ if (!ZF_) goto L_00526074;
L_005260a6:;
  /* 005260a6 mov esi, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); esi = (u32)(M32(m_)); }
  /* 005260a9 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005260aa test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005260ac mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 005260af je 0x5260f7 */ if (ZF_) goto L_005260f7;
  /* 005260b1 mov eax, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); eax = (u32)(M32(m_)); }
  /* 005260b4 cmp dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005260b7 je 0x5260da */ if (ZF_) goto L_005260da;
  /* 005260b9 mov esi, dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); esi = (u32)(M32(m_)); }
  /* 005260bc mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005260be mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 005260c0 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005260c2 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005260c4 jae 0x5260da */ if (!CF_) goto L_005260da;
  /* 005260c6 mov eax, dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); eax = (u32)(M32(m_)); }
  /* 005260c9 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005260cb mov ecx, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005260ce mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005260d0 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 005260d3 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 005260d5 movzx eax, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M8(m_)); }
  /* 005260d8 jmp 0x5260e2 */ goto L_005260e2;
L_005260da:;
  /* 005260da mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005260dc call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5260dfu; SAVEALL; call_ind(c, t_); RETCHK(0x5260dfu, 0x5260dcu); LOADALL; }
  /* 005260df mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
L_005260e2:;
  /* 005260e2 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005260e5 je 0x5260f7 */ if (ZF_) goto L_005260f7;
  /* 005260e7 mov byte ptr [ebx + 4], 0 */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 005260eb mov dword ptr [ebp - 0x38], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0xffffffffu); }
  /* 005260f2 jmp 0x525e10 */ goto L_00525e10;
L_005260f7:;
  /* 005260f7 mov dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x0u); }
  /* 005260fd mov byte ptr [ebx + 4], 1 */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)(0x1u); }
  /* 00526101 mov dword ptr [ebp - 0x38], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0xffffffffu); }
  /* 00526108 jmp 0x525e10 */ goto L_00525e10;
}

void F_00526110(CPU *c) {
  NATIVE_HOOK(0x526110u) REGS; LOADALL;
L_00526110:;
  /* 00526110 mov al, byte ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00526113 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00526115 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00526116 jne 0x52611f */ if (!ZF_) goto L_0052611f;
  /* 00526118 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0052611a call 0x525c50 */ esp -= 4; M32(esp) = 0x52611fu; SAVEALL; F_00525c50(c); ABI_CHECK(0x525c50u, 0x52611au); RETCHK(0x52611fu, 0x52611au); LOADALL;
L_0052611f:;
  /* 0052611f mov al, byte ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00526122 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00526124 jne 0x52612d */ if (!ZF_) goto L_0052612d;
  /* 00526126 mov esi, edi */ { esi = (u32)(edi); }
  /* 00526128 call 0x525c50 */ esp -= 4; M32(esp) = 0x52612du; SAVEALL; F_00525c50(c); ABI_CHECK(0x525c50u, 0x526128u); RETCHK(0x52612du, 0x526128u); LOADALL;
L_0052612d:;
  /* 0052612d cmp dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00526130 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00526132 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00526133 jne 0x526145 */ if (!ZF_) goto L_00526145;
  /* 00526135 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00526137 je 0x526149 */ if (ZF_) goto L_00526149;
L_00526139:;
  /* 00526139 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052613b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052613d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052613f sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 00526142 mov al, cl */ { eax = (eax & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 00526144 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00526145:;
  /* 00526145 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00526147 je 0x526139 */ if (ZF_) goto L_00526139;
L_00526149:;
  /* 00526149 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0052614e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00526150 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00526152 sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 00526155 mov al, cl */ { eax = (eax & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 00526157 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00526160(CPU *c) {
  NATIVE_HOOK(0x526160u) REGS; LOADALL;
L_00526160:;
  /* 00526160 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00526161 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00526163 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00526165 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0052616a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00526170 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00526171 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00526178 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00526179 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052617b je 0x5261a8 */ if (ZF_) goto L_005261a8;
  /* 0052617d cmp dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00526180 jne 0x5261a8 */ if (!ZF_) goto L_005261a8;
  /* 00526182 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00526184 call 0x5fe934 */ esp -= 4; M32(esp) = 0x526189u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x526184u); RETCHK(0x526189u, 0x526184u); LOADALL;
  /* 00526189 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052618c mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0052618f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00526191 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00526198 je 0x5261a4 */ if (ZF_) goto L_005261a4;
  /* 0052619a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052619c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052619d call 0x5261c0 */ esp -= 4; M32(esp) = 0x5261a2u; SAVEALL; F_005261c0(c); ABI_CHECK(0x5261c0u, 0x52619du); RETCHK(0x5261a2u, 0x52619du); LOADALL;
  /* 005261a2 jmp 0x5261a6 */ goto L_005261a6;
L_005261a4:;
  /* 005261a4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005261a6:;
  /* 005261a6 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
L_005261a8:;
  /* 005261a8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005261ab mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 005261b0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005261b7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005261b9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005261ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005261c0(CPU *c) {
  NATIVE_HOOK(0x5261c0u) REGS; LOADALL;
L_005261c0:;
  /* 005261c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005261c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005261c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005261c5 push 0x61b3c8 */ { u32 v_ = 0x61b3c8u; esp -= 4; M32(esp) = v_; }
  /* 005261ca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005261d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005261d1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005261d8 sub esp, 0x74 */ { u32 a_ = esp, b_ = 0x74u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005261db mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005261de push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005261df mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005261e2 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005261e5 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005261ec push 0x64e82c */ { u32 v_ = 0x64e82cu; esp -= 4; M32(esp) = v_; }
  /* 005261f1 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 005261f4 mov dword ptr [esi], 0x652ed8 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x652ed8u); }
  /* 005261fa call 0x601cf4 */ esp -= 4; M32(esp) = 0x5261ffu; SAVEALL; F_00601cf4(c); ABI_CHECK(0x601cf4u, 0x5261fau); RETCHK(0x5261ffu, 0x5261fau); LOADALL;
  /* 005261ff call 0x6016ee */ esp -= 4; M32(esp) = 0x526204u; SAVEALL; F_006016ee(c); ABI_CHECK(0x6016eeu, 0x5261ffu); RETCHK(0x526204u, 0x5261ffu); LOADALL;
  /* 00526204 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00526207 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052620a mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
  /* 0052620d call 0x601c31 */ esp -= 4; M32(esp) = 0x526212u; SAVEALL; F_00601c31(c); ABI_CHECK(0x601c31u, 0x52620du); RETCHK(0x526212u, 0x52620du); LOADALL;
  /* 00526212 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00526215 mov eax, esi */ { eax = (u32)(esi); }
  /* 00526217 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00526218 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052621f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00526221 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00526222 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00526230(CPU *c) {
  NATIVE_HOOK(0x526230u) REGS; LOADALL;
L_00526230:;
  /* 00526230 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00526231 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00526233 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00526234 mov ecx, dword ptr [0x7a6e2c] */ { const u32 m_ = (u32)(0x7a6e2cu); ecx = (u32)(M32(m_)); }
  /* 0052623a xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0052623c cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052623e mov dword ptr [eax], 0x652f34 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x652f34u); }
  /* 00526244 mov dword ptr [eax + 0x78], edx */ { const u32 m_ = (u32)(eax + 0x78u); M32(m_) = (u32)(edx); }
  /* 00526247 mov dword ptr [eax + 0x80], 3 */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(0x3u); }
  /* 00526251 mov dword ptr [eax + 0x84], edx */ { const u32 m_ = (u32)(eax + 0x84u); M32(m_) = (u32)(edx); }
  /* 00526257 mov dword ptr [eax + 0x88], edx */ { const u32 m_ = (u32)(eax + 0x88u); M32(m_) = (u32)(edx); }
  /* 0052625d je 0x52626a */ if (ZF_) goto L_0052626a;
  /* 0052625f cmp dword ptr [ecx + 0x10], 1 */ { const u32 m_ = (u32)(ecx + 0x10u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00526263 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00526268 je 0x52626f */ if (ZF_) goto L_0052626f;
L_0052626a:;
  /* 0052626a mov ecx, 2 */ { ecx = (u32)(0x2u); }
L_0052626f:;
  /* 0052626f fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 00526275 mov dword ptr [eax + 0x7c], ecx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(ecx); }
  /* 00526278 fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0052627e mov dword ptr [eax + 0x18], edx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(edx); }
  /* 00526281 mov dword ptr [eax + 0x1c], edx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(edx); }
  /* 00526284 mov dword ptr [eax + 0x34], edx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(edx); }
  /* 00526287 mov dword ptr [eax + 0x54], edx */ { const u32 m_ = (u32)(eax + 0x54u); M32(m_) = (u32)(edx); }
  /* 0052628a fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 00526290 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00526292 fst dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); }
  /* 00526295 fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 0052629b fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 005262a1 fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 005262a4 fmul dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005262aa mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005262ad mov dword ptr [eax + 0x24], ecx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(ecx); }
  /* 005262b0 mov dword ptr [eax + 0x5c], ecx */ { const u32 m_ = (u32)(eax + 0x5cu); M32(m_) = (u32)(ecx); }
  /* 005262b3 fst dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); }
  /* 005262b6 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005262b9 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005262bb mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 005262be fstp dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005262c1 mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 005262c4 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 005262c6 mov dword ptr [eax + 0x4c], ecx */ { const u32 m_ = (u32)(eax + 0x4cu); M32(m_) = (u32)(ecx); }
  /* 005262c9 fstp dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005262cc mov dword ptr [eax + 0x68], ecx */ { const u32 m_ = (u32)(eax + 0x68u); M32(m_) = (u32)(ecx); }
  /* 005262cf mov ecx, 0x3f800000 */ { ecx = (u32)(0x3f800000u); }
  /* 005262d4 fstp dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005262d7 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005262da mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 005262dd fstp dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005262e0 mov dword ptr [eax + 0x44], ecx */ { const u32 m_ = (u32)(eax + 0x44u); M32(m_) = (u32)(ecx); }
  /* 005262e3 mov dword ptr [eax + 0x60], ecx */ { const u32 m_ = (u32)(eax + 0x60u); M32(m_) = (u32)(ecx); }
  /* 005262e6 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 005262e9 mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 005262ec mov dword ptr [eax + 0x48], ecx */ { const u32 m_ = (u32)(eax + 0x48u); M32(m_) = (u32)(ecx); }
  /* 005262ef mov dword ptr [eax + 0x64], ecx */ { const u32 m_ = (u32)(eax + 0x64u); M32(m_) = (u32)(ecx); }
  /* 005262f2 mov dword ptr [eax + 0x38], ecx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(ecx); }
  /* 005262f5 mov dword ptr [eax + 0x50], ecx */ { const u32 m_ = (u32)(eax + 0x50u); M32(m_) = (u32)(ecx); }
  /* 005262f8 mov dword ptr [eax + 0x6c], ecx */ { const u32 m_ = (u32)(eax + 0x6cu); M32(m_) = (u32)(ecx); }
  /* 005262fb mov dword ptr [eax + 0x70], ecx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(ecx); }
  /* 005262fe mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00526300 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00526301 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00526310(CPU *c) {
  NATIVE_HOOK(0x526310u) REGS; LOADALL;
L_00526310:;
  /* 00526310 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00526311 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00526313 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00526314 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00526316 call 0x526340 */ esp -= 4; M32(esp) = 0x52631bu; SAVEALL; F_00526340(c); ABI_CHECK(0x526340u, 0x526316u); RETCHK(0x52631bu, 0x526316u); LOADALL;
  /* 0052631b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052631f je 0x52632a */ if (ZF_) goto L_0052632a;
  /* 00526321 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00526322 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x526327u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x526322u); RETCHK(0x526327u, 0x526322u); LOADALL;
  /* 00526327 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052632a:;
  /* 0052632a mov eax, esi */ { eax = (u32)(esi); }
  /* 0052632c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052632d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052632e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00526340(CPU *c) {
  NATIVE_HOOK(0x526340u) REGS; LOADALL;
L_00526340:;
  /* 00526340 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00526342 mov dword ptr [ecx], 0x652f34 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x652f34u); }
  /* 00526348 mov dword ptr [ecx + 0x78], eax */ { const u32 m_ = (u32)(ecx + 0x78u); M32(m_) = (u32)(eax); }
  /* 0052634b mov dword ptr [ecx + 0x84], eax */ { const u32 m_ = (u32)(ecx + 0x84u); M32(m_) = (u32)(eax); }
  /* 00526351 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00526360(CPU *c) {
  NATIVE_HOOK(0x526360u) REGS; LOADALL;
L_00526360:;
  /* 00526360 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00526361 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00526363 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00526365 push 0x656e48 */ { u32 v_ = 0x656e48u; esp -= 4; M32(esp) = v_; }
  /* 0052636a push 0x5fee56 */ { u32 v_ = 0x5fee56u; esp -= 4; M32(esp) = v_; }
  /* 0052636f mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00526375 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00526376 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052637d sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00526380 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00526381 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00526382 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00526383 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 00526386 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00526388 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0052638f mov eax, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); eax = (u32)(M32(m_)); }
  /* 00526395 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00526397 jne 0x526483 */ if (!ZF_) goto L_00526483;
  /* 0052639d mov eax, dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); eax = (u32)(M32(m_)); }
  /* 005263a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005263a1 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005263a3 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005263a9 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5263acu; SAVEALL; call_ind(c, t_); RETCHK(0x5263acu, 0x5263a9u); LOADALL; }
  /* 005263ac push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005263ae push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 005263b0 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005263b6 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5263b9u; SAVEALL; call_ind(c, t_); RETCHK(0x5263b9u, 0x5263b6u); LOADALL; }
  /* 005263b9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005263bb push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 005263bd mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005263c2 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5263c5u; SAVEALL; call_ind(c, t_); RETCHK(0x5263c5u, 0x5263c2u); LOADALL; }
  /* 005263c5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005263c7 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005263c9 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005263cf call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5263d2u; SAVEALL; call_ind(c, t_); RETCHK(0x5263d2u, 0x5263cfu); LOADALL; }
  /* 005263d2 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005263d5 mov eax, dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); eax = (u32)(M32(m_)); }
  /* 005263d8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005263da je 0x5263ff */ if (ZF_) goto L_005263ff;
  /* 005263dc mov edx, dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); edx = (u32)(M32(m_)); }
  /* 005263df push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005263e0 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 005263e2 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005263e7 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5263eau; SAVEALL; call_ind(c, t_); RETCHK(0x5263eau, 0x5263e7u); LOADALL; }
  /* 005263ea mov ecx, dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); ecx = (u32)(M32(m_)); }
  /* 005263f0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005263f1 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005263f3 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005263f9 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5263fcu; SAVEALL; call_ind(c, t_); RETCHK(0x5263fcu, 0x5263f9u); LOADALL; }
  /* 005263fc add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005263ff:;
  /* 005263ff mov esi, dword ptr [esi + 0x88] */ { const u32 m_ = (u32)(esi + 0x88u); esi = (u32)(M32(m_)); }
  /* 00526405 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00526406 je 0x526423 */ if (ZF_) goto L_00526423;
  /* 00526408 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0052640a push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0052640c mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00526411 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526414u; SAVEALL; call_ind(c, t_); RETCHK(0x526414u, 0x526411u); LOADALL; }
  /* 00526414 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00526416 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00526418 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0052641e call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526421u; SAVEALL; call_ind(c, t_); RETCHK(0x526421u, 0x52641eu); LOADALL; }
  /* 00526421 jmp 0x52643c */ goto L_0052643c;
L_00526423:;
  /* 00526423 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00526425 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00526427 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0052642d call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526430u; SAVEALL; call_ind(c, t_); RETCHK(0x526430u, 0x52642du); LOADALL; }
  /* 00526430 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00526432 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00526434 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00526439 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52643cu; SAVEALL; call_ind(c, t_); RETCHK(0x52643cu, 0x526439u); LOADALL; }
L_0052643c:;
  /* 0052643c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052643f mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00526442 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00526443 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00526446 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00526447 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052644a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052644b mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052644e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052644f mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00526452 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00526453 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00526458 call dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52645bu; SAVEALL; call_ind(c, t_); RETCHK(0x52645bu, 0x526458u); LOADALL; }
  /* 0052645b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052645d push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0052645f mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00526465 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526468u; SAVEALL; call_ind(c, t_); RETCHK(0x526468u, 0x526465u); LOADALL; }
  /* 00526468 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052646a push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0052646c mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00526472 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526475u; SAVEALL; call_ind(c, t_); RETCHK(0x526475u, 0x526472u); LOADALL; }
  /* 00526475 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00526478 jmp 0x526483 */ goto L_00526483;
L_00526483:;
  /* 00526483 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0052648a mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0052648d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00526494 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00526495 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00526496 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00526497 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00526499 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052649a ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_0052647a(CPU *c) {
  NATIVE_HOOK(0x52647au) REGS; LOADALL;
L_0052647a:;
  /* 0052647a mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0052647f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00526480(CPU *c) {
  NATIVE_HOOK(0x526480u) REGS; LOADALL;
L_00526480:;
  /* 00526480 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 00526483 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0052648a mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0052648d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00526494 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00526495 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00526496 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00526497 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00526499 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052649a ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_005264a0(CPU *c) {
  NATIVE_HOOK(0x5264a0u) REGS; LOADALL;
L_005264a0:;
  /* 005264a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005264a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005264a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005264a5 push 0x656e38 */ { u32 v_ = 0x656e38u; esp -= 4; M32(esp) = v_; }
  /* 005264aa push 0x5fee56 */ { u32 v_ = 0x5fee56u; esp -= 4; M32(esp) = v_; }
  /* 005264af mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005264b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005264b6 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005264bd sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005264c0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005264c1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005264c2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005264c3 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 005264c6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005264c8 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005264cf mov eax, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); eax = (u32)(M32(m_)); }
  /* 005264d5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005264d7 jne 0x5265ae */ if (!ZF_) goto L_005265ae;
  /* 005264dd mov eax, dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); eax = (u32)(M32(m_)); }
  /* 005264e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005264e1 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005264e3 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005264e9 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5264ecu; SAVEALL; call_ind(c, t_); RETCHK(0x5264ecu, 0x5264e9u); LOADALL; }
  /* 005264ec push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005264ee push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 005264f0 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005264f6 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5264f9u; SAVEALL; call_ind(c, t_); RETCHK(0x5264f9u, 0x5264f6u); LOADALL; }
  /* 005264f9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005264fb push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 005264fd mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00526502 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526505u; SAVEALL; call_ind(c, t_); RETCHK(0x526505u, 0x526502u); LOADALL; }
  /* 00526505 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00526507 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00526509 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0052650f call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526512u; SAVEALL; call_ind(c, t_); RETCHK(0x526512u, 0x52650fu); LOADALL; }
  /* 00526512 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00526515 mov eax, dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); eax = (u32)(M32(m_)); }
  /* 00526518 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052651a je 0x52653f */ if (ZF_) goto L_0052653f;
  /* 0052651c mov edx, dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); edx = (u32)(M32(m_)); }
  /* 0052651f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00526520 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00526522 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00526527 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52652au; SAVEALL; call_ind(c, t_); RETCHK(0x52652au, 0x526527u); LOADALL; }
  /* 0052652a mov ecx, dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); ecx = (u32)(M32(m_)); }
  /* 00526530 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00526531 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00526533 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00526539 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52653cu; SAVEALL; call_ind(c, t_); RETCHK(0x52653cu, 0x526539u); LOADALL; }
  /* 0052653c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052653f:;
  /* 0052653f mov eax, dword ptr [esi + 0x88] */ { const u32 m_ = (u32)(esi + 0x88u); eax = (u32)(M32(m_)); }
  /* 00526545 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00526546 je 0x526563 */ if (ZF_) goto L_00526563;
  /* 00526548 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0052654a push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0052654c mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00526551 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526554u; SAVEALL; call_ind(c, t_); RETCHK(0x526554u, 0x526551u); LOADALL; }
  /* 00526554 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00526556 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00526558 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0052655e call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526561u; SAVEALL; call_ind(c, t_); RETCHK(0x526561u, 0x52655eu); LOADALL; }
  /* 00526561 jmp 0x52657c */ goto L_0052657c;
L_00526563:;
  /* 00526563 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00526565 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00526567 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0052656d call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526570u; SAVEALL; call_ind(c, t_); RETCHK(0x526570u, 0x52656du); LOADALL; }
  /* 00526570 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00526572 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00526574 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00526579 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52657cu; SAVEALL; call_ind(c, t_); RETCHK(0x52657cu, 0x526579u); LOADALL; }
L_0052657c:;
  /* 0052657c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052657f push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00526581 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00526584 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00526585 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00526587 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0052658d call dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526590u; SAVEALL; call_ind(c, t_); RETCHK(0x526590u, 0x52658du); LOADALL; }
  /* 00526590 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00526592 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00526594 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0052659a call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52659du; SAVEALL; call_ind(c, t_); RETCHK(0x52659du, 0x52659au); LOADALL; }
  /* 0052659d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052659f push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005265a1 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005265a6 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5265a9u; SAVEALL; call_ind(c, t_); RETCHK(0x5265a9u, 0x5265a6u); LOADALL; }
  /* 005265a9 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005265ac jmp 0x5265bf */ goto L_005265bf;
L_005265ae:;
  /* 005265ae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005265af call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x5265b1u; SAVEALL; call_ind(c, t_); RETCHK(0x5265b1u, 0x5265afu); LOADALL; }
  /* 005265b1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005265b4 jmp 0x5265bf */ goto L_005265bf;
L_005265bf:;
  /* 005265bf mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005265c6 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005265c9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005265d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005265d1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005265d2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005265d3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005265d5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005265d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005265b6(CPU *c) {
  NATIVE_HOOK(0x5265b6u) REGS; LOADALL;
L_005265b6:;
  /* 005265b6 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005265bb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005265bc(CPU *c) {
  NATIVE_HOOK(0x5265bcu) REGS; LOADALL;
L_005265bc:;
  /* 005265bc mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 005265bf mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005265c6 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005265c9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005265d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005265d1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005265d2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005265d3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005265d5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005265d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005265e0(CPU *c) {
  NATIVE_HOOK(0x5265e0u) REGS; LOADALL;
L_005265e0:;
  /* 005265e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005265e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005265e3 sub esp, 0x7c */ { u32 a_ = esp, b_ = 0x7cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005265e6 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005265e9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005265ea push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005265ec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005265ed lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 005265f0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005265f1 lea edx, [ebp - 0x7c] */ edx = (u32)((u32)(ebp + 0xffffff84u));
  /* 005265f4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005265f5 mov dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x0u); }
  /* 005265fc mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 00526603 mov dword ptr [ebp - 4], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3f800000u); }
  /* 0052660a call 0x5aefe0 */ esp -= 4; M32(esp) = 0x52660fu; SAVEALL; F_005aefe0(c); ABI_CHECK(0x5aefe0u, 0x52660au); RETCHK(0x52660fu, 0x52660au); LOADALL;
  /* 0052660f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00526612 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00526615 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00526617 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00526619 jle 0x526666 */ if ((ZF_|LT_)) goto L_00526666;
  /* 0052661b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052661c lea esi, [ebp - 0x3c] */ esi = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0052661f nop */ ;
L_00526620:;
  /* 00526620 fld dword ptr [ebx + edi*8] */ { const u32 m_ = (u32)(ebx + edi * 8u); FPUSH((double)MF32(m_)); }
  /* 00526623 lea eax, [ebp - 0x7c] */ eax = (u32)((u32)(ebp + 0xffffff84u));
  /* 00526626 fsub dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00526629 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052662a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052662b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052662c fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052662e mov dword ptr [esi + 8], 0x3f800000 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x3f800000u); }
  /* 00526635 fld dword ptr [ebx + edi*8 + 4] */ { const u32 m_ = (u32)(ebx + edi * 8u + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00526639 fsub dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0052663c fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052663f call 0x5aac00 */ esp -= 4; M32(esp) = 0x526644u; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x52663fu); RETCHK(0x526644u, 0x52663fu); LOADALL;
  /* 00526644 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00526647 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052664a fadd dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052664c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052664f inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00526650 add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00526653 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00526655 fstp dword ptr [ebx + edi*8 - 8] */ { const u32 m_ = (u32)(ebx + edi * 8u + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526659 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0052665c fadd dword ptr [esi - 8] */ { const u32 m_ = (u32)(esi + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052665f fstp dword ptr [ebx + edi*8 - 4] */ { const u32 m_ = (u32)(ebx + edi * 8u + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526663 jl 0x526620 */ if (LT_) goto L_00526620;
  /* 00526665 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00526666:;
  /* 00526666 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00526667 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00526669 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052666a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00526670(CPU *c) {
  NATIVE_HOOK(0x526670u) REGS; LOADALL;
L_00526670:;
  /* 00526670 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00526671 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00526673 fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 00526679 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052667c fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00526682 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00526685 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 00526688 mov dword ptr [eax + 0x40], edx */ { const u32 m_ = (u32)(eax + 0x40u); M32(m_) = (u32)(edx); }
  /* 0052668b fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0052668e fsub dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00526694 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 00526696 fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00526699 fst dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); MF32(m_) = (float)ST(0); }
  /* 0052669c fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 005266a2 fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 005266a8 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005266ab fsub dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005266b1 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 005266b3 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005266b6 fst dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); MF32(m_) = (float)ST(0); }
  /* 005266b9 fstp dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005266bc fstp dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005266bf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005266c0 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005266d0(CPU *c) {
  NATIVE_HOOK(0x5266d0u) REGS; LOADALL;
L_005266d0:;
  /* 005266d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005266d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005266d3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005266d6 fld dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); FPUSH((double)MF32(m_)); }
  /* 005266d9 fsub dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005266dc fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005266df fld dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); FPUSH((double)MF32(m_)); }
  /* 005266e2 fsub dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005266e5 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005266e8 fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 005266ee fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 005266f4 fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 005266f7 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005266fa fst dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); }
  /* 005266fd fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526700 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 00526703 fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 00526709 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0052670c fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00526712 fst dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); }
  /* 00526715 fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00526718 fst dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); }
  /* 0052671b fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0052671e fsub dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00526724 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00526727 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 00526729 fst dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); MF32(m_) = (float)ST(0); }
  /* 0052672c fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0052672f fsub dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00526735 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00526738 fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052673b fst dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); MF32(m_) = (float)ST(0); }
  /* 0052673e fxch st(2) */ { double t_ = ST(0); ST(0) = ST(2); ST(2) = t_; }
  /* 00526740 fstp dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526743 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00526745 fstp dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526748 fstp dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052674b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052674d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052674e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00526760(CPU *c) {
  NATIVE_HOOK(0x526760u) REGS; LOADALL;
L_00526760:;
  /* 00526760 fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 00526766 fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0052676c fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0052676e fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00526770 fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526773 fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 00526779 fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0052677f fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00526781 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00526784 fstp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526787 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00526789 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052678c fstp dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052678f fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00526791 fmul dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00526794 fstp dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526797 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00526799 fmul dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052679c fstp dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052679f fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 005267a1 fmul dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005267a4 fstp dword ptr [ecx + 0x40] */ { const u32 m_ = (u32)(ecx + 0x40u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005267a7 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005267a9 fmul dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005267ac fstp dword ptr [ecx + 0x58] */ { const u32 m_ = (u32)(ecx + 0x58u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005267af fmul dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005267b2 fstp dword ptr [ecx + 0x5c] */ { const u32 m_ = (u32)(ecx + 0x5cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005267b5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005267c0(CPU *c) {
  NATIVE_HOOK(0x5267c0u) REGS; LOADALL;
L_005267c0:;
  /* 005267c0 lea eax, [esi + 8] */ eax = (u32)((u32)(esi + 0x8u));
  /* 005267c3 call 0x526230 */ esp -= 4; M32(esp) = 0x5267c8u; SAVEALL; F_00526230(c); ABI_CHECK(0x526230u, 0x5267c3u); RETCHK(0x5267c8u, 0x5267c3u); LOADALL;
  /* 005267c8 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 005267ce mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005267d5 mov eax, esi */ { eax = (u32)(esi); }
  /* 005267d7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005267e0(CPU *c) {
  NATIVE_HOOK(0x5267e0u) REGS; LOADALL;
L_005267e0:;
  /* 005267e0 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005267e3 jmp 0x526340 */ SAVEALL; F_00526340(c); return;
}

void F_005267f0(CPU *c) {
  NATIVE_HOOK(0x5267f0u) REGS; LOADALL;
L_005267f0:;
  /* 005267f0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005267f2 je 0x526809 */ if (ZF_) goto L_00526809;
  /* 005267f4 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005267f6 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 005267f9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005267fb je 0x526809 */ if (ZF_) goto L_00526809;
  /* 005267fd mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005267ff test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00526801 je 0x526809 */ if (ZF_) goto L_00526809;
  /* 00526803 mov dword ptr [ecx + 0x80], eax */ { const u32 m_ = (u32)(ecx + 0x80u); M32(m_) = (u32)(eax); }
L_00526809:;
  /* 00526809 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00526810(CPU *c) {
  NATIVE_HOOK(0x526810u) REGS; LOADALL;
L_00526810:;
  /* 00526810 mov eax, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); eax = (u32)(M32(m_)); }
  /* 00526816 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00526820(CPU *c) {
  NATIVE_HOOK(0x526820u) REGS; LOADALL;
L_00526820:;
  /* 00526820 mov dword ptr [eax + 0x88], ecx */ { const u32 m_ = (u32)(eax + 0x88u); M32(m_) = (u32)(ecx); }
  /* 00526826 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00526830(CPU *c) {
  NATIVE_HOOK(0x526830u) REGS; LOADALL;
L_00526830:;
  /* 00526830 mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 00526836 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00526840(CPU *c) {
  NATIVE_HOOK(0x526840u) REGS; LOADALL;
L_00526840:;
  /* 00526840 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00526841 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00526843 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00526846 mov dl, byte ptr [eax + 3] */ { const u32 m_ = (u32)(eax + 0x3u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00526849 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052684a mov bl, byte ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052684d mov byte ptr [ebp - 8], bl */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00526850 mov bl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00526853 mov al, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00526855 mov byte ptr [ebp - 4], al */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00526858 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052685a mov ah, dl */ { eax = (eax & 0xffff00ffu) | (((u32)((edx & 0xffu)) & 0xffu) << 8); }
  /* 0052685c movzx edx, bl */ { edx = (u32)((ebx & 0xffu)); }
  /* 0052685f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00526860 mov al, byte ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00526863 shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00526866 or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00526868 movzx edx, byte ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M8(m_)); }
  /* 0052686c shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052686f or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00526871 mov dword ptr [ecx + 0x1c], eax */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00526874 mov dword ptr [ecx + 0x38], eax */ { const u32 m_ = (u32)(ecx + 0x38u); M32(m_) = (u32)(eax); }
  /* 00526877 mov dword ptr [ecx + 0x54], eax */ { const u32 m_ = (u32)(ecx + 0x54u); M32(m_) = (u32)(eax); }
  /* 0052687a mov dword ptr [ecx + 0x70], eax */ { const u32 m_ = (u32)(ecx + 0x70u); M32(m_) = (u32)(eax); }
  /* 0052687d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052687f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00526880 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00526890(CPU *c) {
  NATIVE_HOOK(0x526890u) REGS; LOADALL;
L_00526890:;
  /* 00526890 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00526891 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00526893 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00526894 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00526895 mov esi, edx */ { esi = (u32)(edx); }
  /* 00526897 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00526899 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052689a mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0052689d mov dh, byte ptr [edi + 3] */ { const u32 m_ = (u32)(edi + 0x3u); edx = (edx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 005268a0 movzx ebx, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); ebx = (u32)(M8(m_)); }
  /* 005268a4 mov dl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005268a6 movzx edi, byte ptr [edi + 2] */ { const u32 m_ = (u32)(edi + 0x2u); edi = (u32)(M8(m_)); }
  /* 005268aa shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005268ad or edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005268af shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005268b2 or edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005268b4 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005268b7 mov dword ptr [edi + 0x1c], edx */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(edx); }
  /* 005268ba movzx ebx, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ebx = (u32)(M8(m_)); }
  /* 005268be xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005268c0 mov dh, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); edx = (edx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 005268c3 mov dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005268c5 movzx esi, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); esi = (u32)(M8(m_)); }
  /* 005268c9 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005268cc or edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005268ce shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005268d1 or edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005268d3 mov dword ptr [edi + 0x38], edx */ { const u32 m_ = (u32)(edi + 0x38u); M32(m_) = (u32)(edx); }
  /* 005268d6 movzx esi, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); esi = (u32)(M8(m_)); }
  /* 005268da xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005268dc mov dh, byte ptr [ecx + 3] */ { const u32 m_ = (u32)(ecx + 0x3u); edx = (edx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 005268df mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005268e1 movzx ecx, byte ptr [ecx + 2] */ { const u32 m_ = (u32)(ecx + 0x2u); ecx = (u32)(M8(m_)); }
  /* 005268e5 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005268e8 or edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005268ea shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005268ed or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005268ef mov dword ptr [edi + 0x54], edx */ { const u32 m_ = (u32)(edi + 0x54u); M32(m_) = (u32)(edx); }
  /* 005268f2 movzx ecx, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (u32)(M8(m_)); }
  /* 005268f6 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005268f8 mov dh, byte ptr [eax + 3] */ { const u32 m_ = (u32)(eax + 0x3u); edx = (edx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 005268fb mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005268fd movzx eax, byte ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); eax = (u32)(M8(m_)); }
  /* 00526901 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00526904 or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00526906 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00526909 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0052690b mov dword ptr [edi + 0x70], edx */ { const u32 m_ = (u32)(edi + 0x70u); M32(m_) = (u32)(edx); }
  /* 0052690e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052690f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00526910 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00526911 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00526912 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00526920(CPU *c) {
  NATIVE_HOOK(0x526920u) REGS; LOADALL;
L_00526920:;
  /* 00526920 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00526921 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00526923 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00526926 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00526927 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00526928 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0052692b fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 0052692d mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00526930 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00526933 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 00526935 fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 0052693b mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052693e fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00526944 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 00526947 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 00526949 mov edx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052694c mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 0052694f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00526951 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00526954 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 00526957 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 0052695a mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 0052695d mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00526960 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00526961 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00526962 fst dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); }
  /* 00526965 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00526967 fstp dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052696a fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 00526970 fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00526976 fst dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); }
  /* 00526979 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0052697b fstp dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052697e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00526980 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00526982 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00526985 fmul dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00526988 fstp dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052698b fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0052698e fmul dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00526991 fstp dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526994 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00526997 fmul dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052699a fstp dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052699d fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005269a0 fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005269a3 fstp dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005269a6 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005269a9 fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005269ac fstp dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005269af fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005269b2 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005269b5 fstp dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005269b8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005269ba pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005269bb ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005269c0(CPU *c) {
  NATIVE_HOOK(0x5269c0u) REGS; LOADALL;
L_005269c0:;
  /* 005269c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005269c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005269c3 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005269c6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005269c9 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005269cb mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 005269cd fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005269d0 fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 005269d2 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005269d5 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 005269d7 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005269da mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 005269dd fstp dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005269e0 fstp dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005269e3 fstp dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005269e6 fstp dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005269e9 fstp dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005269ec fstp dword ptr [eax + 0x74] */ { const u32 m_ = (u32)(eax + 0x74u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005269ef fstp dword ptr [eax + 0x78] */ { const u32 m_ = (u32)(eax + 0x78u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005269f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005269f3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00526a00(CPU *c) {
  NATIVE_HOOK(0x526a00u) REGS; LOADALL;
L_00526a00:;
  /* 00526a00 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00526a03 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00526a06 jmp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00526a10(CPU *c) {
  NATIVE_HOOK(0x526a10u) REGS; LOADALL;
L_00526a10:;
  /* 00526a10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00526a11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00526a13 cmp dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00526a16 je 0x526a70 */ if (ZF_) goto L_00526a70;
  /* 00526a18 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00526a1b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00526a1c lea esi, [eax + 8] */ esi = (u32)((u32)(eax + 0x8u));
  /* 00526a1f mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00526a22 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00526a23 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00526a24 mov eax, esi */ { eax = (u32)(esi); }
  /* 00526a26 call 0x5266d0 */ esp -= 4; M32(esp) = 0x526a2bu; SAVEALL; F_005266d0(c); ABI_CHECK(0x5266d0u, 0x526a26u); RETCHK(0x526a2bu, 0x526a26u); LOADALL;
  /* 00526a2b mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00526a2e mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00526a31 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00526a32 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00526a33 mov eax, esi */ { eax = (u32)(esi); }
  /* 00526a35 call 0x526670 */ esp -= 4; M32(esp) = 0x526a3au; SAVEALL; F_00526670(c); ABI_CHECK(0x526670u, 0x526a35u); RETCHK(0x526a3au, 0x526a35u); LOADALL;
  /* 00526a3a mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00526a3d mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 00526a40 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00526a42 mov dword ptr [esi + 0x18], ecx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ecx); }
  /* 00526a45 mov ecx, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 00526a48 mov dword ptr [esi + 0x1c], edx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(edx); }
  /* 00526a4b mov edx, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); edx = (u32)(M32(m_)); }
  /* 00526a4e mov dword ptr [esi + 0x38], ecx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ecx); }
  /* 00526a51 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00526a53 mov dword ptr [esi + 0x34], eax */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(eax); }
  /* 00526a56 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00526a59 mov dword ptr [esi + 0x50], edx */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(edx); }
  /* 00526a5c mov edx, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); edx = (u32)(M32(m_)); }
  /* 00526a5f mov dword ptr [esi + 0x6c], ecx */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(ecx); }
  /* 00526a62 mov dword ptr [esi + 0x54], eax */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(eax); }
  /* 00526a65 mov dword ptr [esi + 0x70], edx */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(edx); }
  /* 00526a68 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00526a6a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00526a6c call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526a6fu; SAVEALL; call_ind(c, t_); RETCHK(0x526a6fu, 0x526a6cu); LOADALL; }
  /* 00526a6f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00526a70:;
  /* 00526a70 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00526a71 ret 0x20 */ c->popped = M32(esp); esp += 36u; SAVEALL; return;
}

void F_00526a80(CPU *c) {
  NATIVE_HOOK(0x526a80u) REGS; LOADALL;
L_00526a80:;
  /* 00526a80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00526a81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00526a83 cmp dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00526a86 je 0x526aa1 */ if (ZF_) goto L_00526aa1;
  /* 00526a88 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00526a8b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00526a8c mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00526a8f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00526a90 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00526a93 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00526a94 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00526a97 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00526a98 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00526a99 lea ecx, [eax + 8] */ ecx = (u32)((u32)(eax + 0x8u));
  /* 00526a9c call 0x526360 */ esp -= 4; M32(esp) = 0x526aa1u; SAVEALL; F_00526360(c); ABI_CHECK(0x526360u, 0x526a9cu); RETCHK(0x526aa1u, 0x526a9cu); LOADALL;
L_00526aa1:;
  /* 00526aa1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00526aa2 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00526ab0(CPU *c) {
  NATIVE_HOOK(0x526ab0u) REGS; LOADALL;
L_00526ab0:;
  /* 00526ab0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00526ab1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00526ab3 call 0x5267f0 */ esp -= 4; M32(esp) = 0x526ab8u; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x526ab3u); RETCHK(0x526ab8u, 0x526ab3u); LOADALL;
  /* 00526ab8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00526abb mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00526abe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00526abf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00526ad0(CPU *c) {
  NATIVE_HOOK(0x526ad0u) REGS; LOADALL;
L_00526ad0:;
  /* 00526ad0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00526ad1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00526ad3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00526ad6 cmp al, 0x30 */ { u32 a_ = (eax & 0xffu), b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00526ad8 jl 0x526ae0 */ if (LT_) goto L_00526ae0;
  /* 00526ada cmp al, 0x39 */ { u32 a_ = (eax & 0xffu), b_ = 0x39u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00526adc jg 0x526ae0 */ if (!(ZF_|LT_)) goto L_00526ae0;
  /* 00526ade add al, 0xd0 */ { u32 a_ = (eax & 0xffu), b_ = 0xd0u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_00526ae0:;
  /* 00526ae0 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00526ae3 fild dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)(s32)M32(m_)); }
  /* 00526ae6 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00526ae8 jge 0x526af0 */ if (!LT_) goto L_00526af0;
  /* 00526aea fadd dword ptr [0x656f48] */ { const u32 m_ = (u32)(0x656f48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_00526af0:;
  /* 00526af0 fdivr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 00526af6 movsx eax, al */ { eax = (u32)((u32)sxt((eax & 0xffu), 1) & 0xffffffffu); }
  /* 00526af9 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00526afc fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00526aff fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00526b01 fst dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); }
  /* 00526b04 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00526b06 fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 00526b08 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526b0b fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00526b11 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00526b13 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00526b15 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00526b18 je 0x526b50 */ if (ZF_) goto L_00526b50;
  /* 00526b1a fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00526b1d fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00526b23 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00526b25 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00526b28 je 0x526b50 */ if (ZF_) goto L_00526b50;
  /* 00526b2a mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00526b2d mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00526b30 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00526b35 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00526b36 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00526b39 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00526b3b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00526b3c mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00526b3f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00526b40 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00526b43 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00526b44 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00526b47 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00526b48 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00526b49 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00526b4b call 0x526a10 */ esp -= 4; M32(esp) = 0x526b50u; SAVEALL; F_00526a10(c); ABI_CHECK(0x526a10u, 0x526b4bu); RETCHK(0x526b50u, 0x526b4bu); LOADALL;
L_00526b50:;
  /* 00526b50 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00526b52 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00526b53 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00526b60(CPU *c) {
  NATIVE_HOOK(0x526b60u) REGS; LOADALL;
L_00526b60:;
  /* 00526b60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00526b61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00526b63 mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 00526b66 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00526b68 je 0x526bbd */ if (ZF_) goto L_00526bbd;
  /* 00526b6a mov eax, edx */ { eax = (u32)(edx); }
  /* 00526b6c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00526b6d lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
L_00526b70:;
  /* 00526b70 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00526b72 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00526b73 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00526b75 jne 0x526b70 */ if (!ZF_) goto L_00526b70;
  /* 00526b77 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00526b79 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00526b7a mov edi, eax */ { edi = (u32)(eax); }
  /* 00526b7c xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00526b7e test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00526b80 jle 0x526bbb */ if ((ZF_|LT_)) goto L_00526bbb;
  /* 00526b82 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 00526b85 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00526b86 fadd dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00526b89 mov ebx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ebx = (u32)(M32(m_)); }
  /* 00526b8c fstp dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526b8f jmp 0x526b94 */ goto L_00526b94;
L_00526b91:;
  /* 00526b91 mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
L_00526b94:;
  /* 00526b94 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00526b97 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00526b9a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00526b9b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00526b9c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00526b9f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00526ba0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00526ba3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00526ba4 mov al, byte ptr [esi + edx] */ { const u32 m_ = (u32)(esi + edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00526ba7 call 0x526ad0 */ esp -= 4; M32(esp) = 0x526bacu; SAVEALL; F_00526ad0(c); ABI_CHECK(0x526ad0u, 0x526ba7u); RETCHK(0x526bacu, 0x526ba7u); LOADALL;
  /* 00526bac fld dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); FPUSH((double)MF32(m_)); }
  /* 00526baf fadd dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00526bb2 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00526bb3 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00526bb5 fstp dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526bb8 jl 0x526b91 */ if (LT_) goto L_00526b91;
  /* 00526bba pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00526bbb:;
  /* 00526bbb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00526bbc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00526bbd:;
  /* 00526bbd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00526bbe ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00526bd0(CPU *c) {
  NATIVE_HOOK(0x526bd0u) REGS; LOADALL;
L_00526bd0:;
  /* 00526bd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00526bd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00526bd3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00526bd6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00526bd7 mov esi, eax */ { esi = (u32)(eax); }
  /* 00526bd9 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00526bdc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00526bdd add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00526be0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00526be1 mov eax, esi */ { eax = (u32)(esi); }
  /* 00526be3 call 0x5266d0 */ esp -= 4; M32(esp) = 0x526be8u; SAVEALL; F_005266d0(c); ABI_CHECK(0x5266d0u, 0x526be3u); RETCHK(0x526be8u, 0x526be3u); LOADALL;
  /* 00526be8 fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 00526bee fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00526bf4 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00526bf7 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00526bfa mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00526bfd mov dword ptr [esi + 0x20], edx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edx); }
  /* 00526c00 mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 00526c03 mov dword ptr [esi + 0x40], eax */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(eax); }
  /* 00526c06 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00526c08 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 00526c0b fsub dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00526c11 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 00526c13 fadd dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00526c16 fst dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); }
  /* 00526c19 fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 00526c1f fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00526c25 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 00526c28 fsub dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00526c2e fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 00526c30 fadd dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00526c33 fst dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); MF32(m_) = (float)ST(0); }
  /* 00526c36 fstp dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526c39 fstp dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526c3c mov dword ptr [esi + 0x18], ecx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ecx); }
  /* 00526c3f mov ecx, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 00526c42 mov dword ptr [esi + 0x1c], edx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(edx); }
  /* 00526c45 mov edx, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); edx = (u32)(M32(m_)); }
  /* 00526c48 mov dword ptr [esi + 0x38], ecx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ecx); }
  /* 00526c4b mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00526c4d mov dword ptr [esi + 0x34], eax */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(eax); }
  /* 00526c50 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00526c53 mov dword ptr [esi + 0x50], edx */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(edx); }
  /* 00526c56 mov edx, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); edx = (u32)(M32(m_)); }
  /* 00526c59 mov dword ptr [esi + 0x6c], ecx */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(ecx); }
  /* 00526c5c mov dword ptr [esi + 0x54], eax */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(eax); }
  /* 00526c5f mov dword ptr [esi + 0x70], edx */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(edx); }
  /* 00526c62 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00526c64 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00526c66 call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526c69u; SAVEALL; call_ind(c, t_); RETCHK(0x526c69u, 0x526c66u); LOADALL; }
  /* 00526c69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00526c6a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00526c6b ret 0x20 */ c->popped = M32(esp); esp += 36u; SAVEALL; return;
}

void F_00526c70(CPU *c) {
  NATIVE_HOOK(0x526c70u) REGS; LOADALL;
L_00526c70:;
  /* 00526c70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00526c71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00526c73 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00526c74 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00526c76 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00526c79 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00526c7b call 0x526760 */ esp -= 4; M32(esp) = 0x526c80u; SAVEALL; F_00526760(c); ABI_CHECK(0x526760u, 0x526c7bu); RETCHK(0x526c80u, 0x526c7bu); LOADALL;
  /* 00526c80 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00526c83 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00526c86 mov edx, eax */ { edx = (u32)(eax); }
  /* 00526c88 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 00526c8b mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00526c8e mov dword ptr [esi + 0x1c], ecx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 00526c91 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00526c94 mov dword ptr [esi + 0x38], eax */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(eax); }
  /* 00526c97 mov dword ptr [esi + 0x50], ecx */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(ecx); }
  /* 00526c9a mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00526c9c mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00526c9f mov dword ptr [esi + 0x34], edx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(edx); }
  /* 00526ca2 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00526ca5 mov dword ptr [esi + 0x70], ecx */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(ecx); }
  /* 00526ca8 mov dword ptr [esi + 0x54], edx */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(edx); }
  /* 00526cab mov dword ptr [esi + 0x6c], eax */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(eax); }
  /* 00526cae mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00526cb0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00526cb2 call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526cb5u; SAVEALL; call_ind(c, t_); RETCHK(0x526cb5u, 0x526cb2u); LOADALL; }
  /* 00526cb5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00526cb6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00526cb7 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00526cc0(CPU *c) {
  NATIVE_HOOK(0x526cc0u) REGS; LOADALL;
L_00526cc0:;
  /* 00526cc0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00526cc1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00526cc3 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00526cc6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00526cc8 call 0x526760 */ esp -= 4; M32(esp) = 0x526ccdu; SAVEALL; F_00526760(c); ABI_CHECK(0x526760u, 0x526cc8u); RETCHK(0x526ccdu, 0x526cc8u); LOADALL;
  /* 00526ccd fld dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00526cd0 fld dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00526cd3 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00526cd5 fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00526cd8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00526cda fld dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00526cdd fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00526ce0 fld dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00526ce3 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 00526ce5 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 00526ce8 fstp dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526ceb fstp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526cee fstp dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526cf1 fstp dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526cf4 fstp dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526cf7 fstp dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526cfa fstp dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526cfd mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00526cff pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00526d00 jmp dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00526d10(CPU *c) {
  NATIVE_HOOK(0x526d10u) REGS; LOADALL;
L_00526d10:;
  /* 00526d10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00526d11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00526d13 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00526d15 push 0x656e28 */ { u32 v_ = 0x656e28u; esp -= 4; M32(esp) = v_; }
  /* 00526d1a push 0x5fee56 */ { u32 v_ = 0x5fee56u; esp -= 4; M32(esp) = v_; }
  /* 00526d1f mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00526d25 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00526d26 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00526d2d sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00526d30 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00526d31 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00526d32 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00526d33 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 00526d36 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00526d39 wait */ ;
  /* 00526d3a mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00526d41 fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 00526d47 fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00526d4d fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00526d50 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00526d52 fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526d55 fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 00526d5b fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00526d61 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00526d64 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00526d66 fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526d69 mov dword ptr [ebp - 0x48], 0x454cc000 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x454cc000u); }
  /* 00526d70 mov dword ptr [ebp - 0x44], 0x3e2aaaab */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x3e2aaaabu); }
  /* 00526d77 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00526d79 fmul dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00526d7c fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526d7f fmul dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00526d82 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526d85 mov dword ptr [ebp - 0x2c], 0x454cc000 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x454cc000u); }
  /* 00526d8c mov dword ptr [ebp - 0x28], 0x3e2aaaab */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x3e2aaaabu); }
  /* 00526d93 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00526d95 mov ch, byte ptr [eax + 3] */ { const u32 m_ = (u32)(eax + 0x3u); ecx = (ecx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 00526d98 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00526d9a shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00526d9d movzx edx, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (u32)(M8(m_)); }
  /* 00526da1 or ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00526da3 shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00526da6 movzx edx, byte ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); edx = (u32)(M8(m_)); }
  /* 00526daa mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00526dac or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00526dae mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 00526db1 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 00526db4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00526db6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00526db8 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00526dbd call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526dc0u; SAVEALL; call_ind(c, t_); RETCHK(0x526dc0u, 0x526dbdu); LOADALL; }
  /* 00526dc0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00526dc2 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00526dc4 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00526dca call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526dcdu; SAVEALL; call_ind(c, t_); RETCHK(0x526dcdu, 0x526dcau); LOADALL; }
  /* 00526dcd push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00526dcf push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00526dd1 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00526dd7 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526ddau; SAVEALL; call_ind(c, t_); RETCHK(0x526ddau, 0x526dd7u); LOADALL; }
  /* 00526dda push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00526ddc push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00526dde mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00526de3 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526de6u; SAVEALL; call_ind(c, t_); RETCHK(0x526de6u, 0x526de3u); LOADALL; }
  /* 00526de6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00526de8 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00526dea mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00526df0 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526df3u; SAVEALL; call_ind(c, t_); RETCHK(0x526df3u, 0x526df0u); LOADALL; }
  /* 00526df3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00526df5 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00526df7 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00526dfd call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526e00u; SAVEALL; call_ind(c, t_); RETCHK(0x526e00u, 0x526dfdu); LOADALL; }
  /* 00526e00 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00526e02 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00526e04 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00526e06 lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00526e09 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00526e0a mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00526e10 call dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526e13u; SAVEALL; call_ind(c, t_); RETCHK(0x526e13u, 0x526e10u); LOADALL; }
  /* 00526e13 add esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00526e16 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00526e18 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00526e1a mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00526e20 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526e23u; SAVEALL; call_ind(c, t_); RETCHK(0x526e23u, 0x526e20u); LOADALL; }
  /* 00526e23 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00526e25 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00526e27 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00526e2c call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526e2fu; SAVEALL; call_ind(c, t_); RETCHK(0x526e2fu, 0x526e2cu); LOADALL; }
  /* 00526e2f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00526e31 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00526e33 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00526e39 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526e3cu; SAVEALL; call_ind(c, t_); RETCHK(0x526e3cu, 0x526e39u); LOADALL; }
  /* 00526e3c add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00526e3f wait */ ;
  /* 00526e40 jmp 0x526e4b */ goto L_00526e4b;
L_00526e4b:;
  /* 00526e4b mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00526e52 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00526e55 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00526e5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00526e5d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00526e5e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00526e5f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00526e61 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00526e62 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_00526e42(CPU *c) {
  NATIVE_HOOK(0x526e42u) REGS; LOADALL;
L_00526e42:;
  /* 00526e42 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00526e47 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00526e48(CPU *c) {
  NATIVE_HOOK(0x526e48u) REGS; LOADALL;
L_00526e48:;
  /* 00526e48 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 00526e4b mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00526e52 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00526e55 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00526e5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00526e5d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00526e5e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00526e5f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00526e61 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00526e62 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_00526e70(CPU *c) {
  NATIVE_HOOK(0x526e70u) REGS; LOADALL;
L_00526e70:;
  /* 00526e70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00526e71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00526e73 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00526e75 push 0x656e18 */ { u32 v_ = 0x656e18u; esp -= 4; M32(esp) = v_; }
  /* 00526e7a push 0x5fee56 */ { u32 v_ = 0x5fee56u; esp -= 4; M32(esp) = v_; }
  /* 00526e7f mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00526e85 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00526e86 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00526e8d sub esp, 0x9c */ { u32 a_ = esp, b_ = 0x9cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00526e93 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00526e94 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00526e95 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00526e96 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 00526e99 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00526e9c wait */ ;
  /* 00526e9d mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00526ea4 fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 00526eaa fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00526eb0 fst dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); }
  /* 00526eb3 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00526eb5 fst dword ptr [ebp - 0xac] */ { const u32 m_ = (u32)(ebp + 0xffffff54u); MF32(m_) = (float)ST(0); }
  /* 00526ebb fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 00526ec1 fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00526ec7 fst dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); }
  /* 00526eca fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00526ecd fst dword ptr [ebp - 0xa8] */ { const u32 m_ = (u32)(ebp + 0xffffff58u); MF32(m_) = (float)ST(0); }
  /* 00526ed3 mov dword ptr [ebp - 0xa4], 0x454cc000 */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(0x454cc000u); }
  /* 00526edd mov dword ptr [ebp - 0xa0], 0x3e2aaaab */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(0x3e2aaaabu); }
  /* 00526ee7 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 00526eea fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00526eed fst dword ptr [ebp - 0x90] */ { const u32 m_ = (u32)(ebp + 0xffffff70u); MF32(m_) = (float)ST(0); }
  /* 00526ef3 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00526ef5 fstp dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526efb mov dword ptr [ebp - 0x88], 0x454cc000 */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(0x454cc000u); }
  /* 00526f05 mov dword ptr [ebp - 0x84], 0x3e2aaaab */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(0x3e2aaaabu); }
  /* 00526f0f fstp dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526f12 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 00526f15 fmul dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00526f18 fst dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); MF32(m_) = (float)ST(0); }
  /* 00526f1b mov dword ptr [ebp - 0x6c], 0x454cc000 */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(0x454cc000u); }
  /* 00526f22 mov dword ptr [ebp - 0x68], 0x3e2aaaab */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(0x3e2aaaabu); }
  /* 00526f29 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 00526f2b fstp dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526f2e fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526f31 mov dword ptr [ebp - 0x50], 0x454cc000 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x454cc000u); }
  /* 00526f38 mov dword ptr [ebp - 0x4c], 0x3e2aaaab */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(0x3e2aaaabu); }
  /* 00526f3f fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00526f41 fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526f44 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00526f47 mov dword ptr [ebp - 0x34], 0x454cc000 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x454cc000u); }
  /* 00526f4e mov dword ptr [ebp - 0x30], 0x3e2aaaab */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0x3e2aaaabu); }
  /* 00526f55 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00526f57 mov ch, byte ptr [eax + 3] */ { const u32 m_ = (u32)(eax + 0x3u); ecx = (ecx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 00526f5a mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00526f5c shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00526f5f movzx edx, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (u32)(M8(m_)); }
  /* 00526f63 or ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00526f65 shl ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00526f68 movzx edx, byte ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); edx = (u32)(M8(m_)); }
  /* 00526f6c mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00526f6e or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00526f70 mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 00526f76 mov dword ptr [ebp - 0x80], eax */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M32(m_) = (u32)(eax); }
  /* 00526f79 mov dword ptr [ebp - 0x64], eax */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(eax); }
  /* 00526f7c mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 00526f7f mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 00526f82 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00526f84 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00526f86 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00526f8b call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526f8eu; SAVEALL; call_ind(c, t_); RETCHK(0x526f8eu, 0x526f8bu); LOADALL; }
  /* 00526f8e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00526f90 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00526f92 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00526f98 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526f9bu; SAVEALL; call_ind(c, t_); RETCHK(0x526f9bu, 0x526f98u); LOADALL; }
  /* 00526f9b push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00526f9d push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00526f9f mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00526fa5 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526fa8u; SAVEALL; call_ind(c, t_); RETCHK(0x526fa8u, 0x526fa5u); LOADALL; }
  /* 00526fa8 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00526faa push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00526fac mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00526fb1 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526fb4u; SAVEALL; call_ind(c, t_); RETCHK(0x526fb4u, 0x526fb1u); LOADALL; }
  /* 00526fb4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00526fb6 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00526fb8 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00526fbe call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526fc1u; SAVEALL; call_ind(c, t_); RETCHK(0x526fc1u, 0x526fbeu); LOADALL; }
  /* 00526fc1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00526fc3 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00526fc5 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00526fcb call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526fceu; SAVEALL; call_ind(c, t_); RETCHK(0x526fceu, 0x526fcbu); LOADALL; }
  /* 00526fce push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00526fd0 lea eax, [ebp - 0xac] */ eax = (u32)((u32)(ebp + 0xffffff54u));
  /* 00526fd6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00526fd7 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00526fd9 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00526fdf call dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526fe2u; SAVEALL; call_ind(c, t_); RETCHK(0x526fe2u, 0x526fdfu); LOADALL; }
  /* 00526fe2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00526fe4 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00526fe6 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00526fec call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526fefu; SAVEALL; call_ind(c, t_); RETCHK(0x526fefu, 0x526fecu); LOADALL; }
  /* 00526fef add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00526ff2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00526ff4 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00526ff6 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00526ffb call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x526ffeu; SAVEALL; call_ind(c, t_); RETCHK(0x526ffeu, 0x526ffbu); LOADALL; }
  /* 00526ffe push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00527000 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00527002 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00527008 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52700bu; SAVEALL; call_ind(c, t_); RETCHK(0x52700bu, 0x527008u); LOADALL; }
  /* 0052700b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052700e wait */ ;
  /* 0052700f jmp 0x52701a */ goto L_0052701a;
L_0052701a:;
  /* 0052701a mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00527021 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00527024 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052702b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052702c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052702d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052702e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00527030 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00527031 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00527011(CPU *c) {
  NATIVE_HOOK(0x527011u) REGS; LOADALL;
L_00527011:;
  /* 00527011 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00527016 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00527017(CPU *c) {
  NATIVE_HOOK(0x527017u) REGS; LOADALL;
L_00527017:;
  /* 00527017 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 0052701a mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00527021 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00527024 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052702b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052702c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052702d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052702e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00527030 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00527031 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00527040(CPU *c) {
  NATIVE_HOOK(0x527040u) REGS; LOADALL;
L_00527040:;
  /* 00527040 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00527041 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00527043 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00527045 push 0x656e08 */ { u32 v_ = 0x656e08u; esp -= 4; M32(esp) = v_; }
  /* 0052704a push 0x5fee56 */ { u32 v_ = 0x5fee56u; esp -= 4; M32(esp) = v_; }
  /* 0052704f mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00527055 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527056 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052705d sub esp, 0x84 */ { u32 a_ = esp, b_ = 0x84u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00527063 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00527064 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00527065 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00527066 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 00527069 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052706c wait */ ;
  /* 0052706d mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00527074 fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 0052707a fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00527080 fst dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); }
  /* 00527083 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00527085 fst dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); MF32(m_) = (float)ST(0); }
  /* 0052708b fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 00527091 fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00527097 fst dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); }
  /* 0052709a fmul dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052709d fst dword ptr [ebp - 0x90] */ { const u32 m_ = (u32)(ebp + 0xffffff70u); MF32(m_) = (float)ST(0); }
  /* 005270a3 mov dword ptr [ebp - 0x8c], 0x454cc000 */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M32(m_) = (u32)(0x454cc000u); }
  /* 005270ad mov dword ptr [ebp - 0x88], 0x3e2aaaab */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(0x3e2aaaabu); }
  /* 005270b7 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 005270ba fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005270bd fst dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); }
  /* 005270c0 fstp dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005270c3 fstp dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005270c6 mov dword ptr [ebp - 0x70], 0x454cc000 */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(0x454cc000u); }
  /* 005270cd mov dword ptr [ebp - 0x6c], 0x3e2aaaab */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(0x3e2aaaabu); }
  /* 005270d4 fstp dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005270d7 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 005270da fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005270dd fst dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); MF32(m_) = (float)ST(0); }
  /* 005270e0 mov dword ptr [ebp - 0x54], 0x454cc000 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x454cc000u); }
  /* 005270e7 mov dword ptr [ebp - 0x50], 0x3e2aaaab */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x3e2aaaabu); }
  /* 005270ee mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 005270f1 mov dword ptr [ebp - 0x40], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ecx); }
  /* 005270f4 fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005270f7 mov dword ptr [ebp - 0x38], 0x454cc000 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x454cc000u); }
  /* 005270fe mov dword ptr [ebp - 0x34], 0x3e2aaaab */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x3e2aaaabu); }
  /* 00527105 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00527107 mov dh, byte ptr [eax + 3] */ { const u32 m_ = (u32)(eax + 0x3u); edx = (edx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 0052710a mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052710c shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052710f movzx ecx, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (u32)(M8(m_)); }
  /* 00527113 or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00527115 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00527118 movzx ecx, byte ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); ecx = (u32)(M8(m_)); }
  /* 0052711c mov eax, edx */ { eax = (u32)(edx); }
  /* 0052711e or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00527120 mov dword ptr [ebp - 0x84], eax */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(eax); }
  /* 00527126 mov dword ptr [ebp - 0x68], eax */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(eax); }
  /* 00527129 mov dword ptr [ebp - 0x4c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(eax); }
  /* 0052712c mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 0052712f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00527131 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00527133 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00527139 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52713cu; SAVEALL; call_ind(c, t_); RETCHK(0x52713cu, 0x527139u); LOADALL; }
  /* 0052713c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052713e push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00527140 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00527145 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527148u; SAVEALL; call_ind(c, t_); RETCHK(0x527148u, 0x527145u); LOADALL; }
  /* 00527148 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052714b cmp dword ptr [ebp + 0xc], 1 */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052714f jne 0x52716d */ if (!ZF_) goto L_0052716d;
  /* 00527151 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00527153 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00527155 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0052715b call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52715eu; SAVEALL; call_ind(c, t_); RETCHK(0x52715eu, 0x52715bu); LOADALL; }
  /* 0052715e push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00527160 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00527162 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00527168 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52716bu; SAVEALL; call_ind(c, t_); RETCHK(0x52716bu, 0x527168u); LOADALL; }
  /* 0052716b jmp 0x527186 */ goto L_00527186;
L_0052716d:;
  /* 0052716d push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0052716f push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00527171 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00527176 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527179u; SAVEALL; call_ind(c, t_); RETCHK(0x527179u, 0x527176u); LOADALL; }
  /* 00527179 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0052717b push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0052717d mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00527183 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527186u; SAVEALL; call_ind(c, t_); RETCHK(0x527186u, 0x527183u); LOADALL; }
L_00527186:;
  /* 00527186 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00527189 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052718b push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0052718d mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00527193 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527196u; SAVEALL; call_ind(c, t_); RETCHK(0x527196u, 0x527193u); LOADALL; }
  /* 00527196 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00527198 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0052719a mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0052719f call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5271a2u; SAVEALL; call_ind(c, t_); RETCHK(0x5271a2u, 0x52719fu); LOADALL; }
  /* 005271a2 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005271a4 lea ecx, [ebp - 0x94] */ ecx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 005271aa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005271ab push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005271ad mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005271b3 call dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5271b6u; SAVEALL; call_ind(c, t_); RETCHK(0x5271b6u, 0x5271b3u); LOADALL; }
  /* 005271b6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005271b8 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 005271ba mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005271bf call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5271c2u; SAVEALL; call_ind(c, t_); RETCHK(0x5271c2u, 0x5271bfu); LOADALL; }
  /* 005271c2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005271c4 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005271c6 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005271cc call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5271cfu; SAVEALL; call_ind(c, t_); RETCHK(0x5271cfu, 0x5271ccu); LOADALL; }
  /* 005271cf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005271d1 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 005271d3 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005271d9 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5271dcu; SAVEALL; call_ind(c, t_); RETCHK(0x5271dcu, 0x5271d9u); LOADALL; }
  /* 005271dc add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005271df wait */ ;
  /* 005271e0 jmp 0x5271eb */ goto L_005271eb;
L_005271eb:;
  /* 005271eb mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005271f2 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005271f5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005271fc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005271fd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005271fe pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005271ff mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00527201 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00527202 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005271e2(CPU *c) {
  NATIVE_HOOK(0x5271e2u) REGS; LOADALL;
L_005271e2:;
  /* 005271e2 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005271e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005271e8(CPU *c) {
  NATIVE_HOOK(0x5271e8u) REGS; LOADALL;
L_005271e8:;
  /* 005271e8 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 005271eb mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005271f2 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005271f5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005271fc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005271fd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005271fe pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005271ff mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00527201 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00527202 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00527210(CPU *c) {
  NATIVE_HOOK(0x527210u) REGS; LOADALL;
L_00527210:;
  /* 00527210 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00527211 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00527213 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00527215 push 0x656df8 */ { u32 v_ = 0x656df8u; esp -= 4; M32(esp) = v_; }
  /* 0052721a push 0x5fee56 */ { u32 v_ = 0x5fee56u; esp -= 4; M32(esp) = v_; }
  /* 0052721f mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00527225 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527226 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052722d sub esp, 0x84 */ { u32 a_ = esp, b_ = 0x84u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00527233 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00527234 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00527235 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00527236 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 00527239 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052723c mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0052723f mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00527242 wait */ ;
  /* 00527243 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0052724a fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 00527250 fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00527256 fst dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); }
  /* 00527259 fmul dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052725b fst dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); MF32(m_) = (float)ST(0); }
  /* 00527261 fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 00527267 fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0052726d fst dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); }
  /* 00527270 fmul dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00527273 fst dword ptr [ebp - 0x90] */ { const u32 m_ = (u32)(ebp + 0xffffff70u); MF32(m_) = (float)ST(0); }
  /* 00527279 mov dword ptr [ebp - 0x8c], 0x454cc000 */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M32(m_) = (u32)(0x454cc000u); }
  /* 00527283 mov dword ptr [ebp - 0x88], 0x3e2aaaab */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(0x3e2aaaabu); }
  /* 0052728d fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 00527290 fmul dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00527293 fst dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); }
  /* 00527296 fstp dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00527299 fstp dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052729c mov dword ptr [ebp - 0x70], 0x454cc000 */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(0x454cc000u); }
  /* 005272a3 mov dword ptr [ebp - 0x6c], 0x3e2aaaab */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(0x3e2aaaabu); }
  /* 005272aa fstp dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005272ad fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 005272b0 fmul dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005272b3 fst dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); MF32(m_) = (float)ST(0); }
  /* 005272b6 mov dword ptr [ebp - 0x54], 0x454cc000 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x454cc000u); }
  /* 005272bd mov dword ptr [ebp - 0x50], 0x3e2aaaab */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x3e2aaaabu); }
  /* 005272c4 mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 005272c7 mov dword ptr [ebp - 0x40], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(edx); }
  /* 005272ca fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005272cd mov dword ptr [ebp - 0x38], 0x454cc000 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x454cc000u); }
  /* 005272d4 mov dword ptr [ebp - 0x34], 0x3e2aaaab */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x3e2aaaabu); }
  /* 005272db xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005272dd mov dh, byte ptr [edi + 3] */ { const u32 m_ = (u32)(edi + 0x3u); edx = (edx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 005272e0 mov dl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005272e2 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005272e5 movzx ebx, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); ebx = (u32)(M8(m_)); }
  /* 005272e9 or edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005272eb shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005272ee movzx edi, byte ptr [edi + 2] */ { const u32 m_ = (u32)(edi + 0x2u); edi = (u32)(M8(m_)); }
  /* 005272f2 or edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005272f4 mov dword ptr [ebp - 0x84], edx */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(edx); }
  /* 005272fa xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005272fc mov dh, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); edx = (edx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 005272ff mov dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00527301 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00527304 movzx edi, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edi = (u32)(M8(m_)); }
  /* 00527308 or edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0052730a shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052730d movzx esi, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); esi = (u32)(M8(m_)); }
  /* 00527311 or edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00527313 mov dword ptr [ebp - 0x68], edx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(edx); }
  /* 00527316 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00527318 mov dh, byte ptr [ecx + 3] */ { const u32 m_ = (u32)(ecx + 0x3u); edx = (edx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 0052731b mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052731d shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00527320 movzx esi, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); esi = (u32)(M8(m_)); }
  /* 00527324 or edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00527326 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00527329 movzx ecx, byte ptr [ecx + 2] */ { const u32 m_ = (u32)(ecx + 0x2u); ecx = (u32)(M8(m_)); }
  /* 0052732d or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0052732f mov dword ptr [ebp - 0x4c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(edx); }
  /* 00527332 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00527334 mov dh, byte ptr [eax + 3] */ { const u32 m_ = (u32)(eax + 0x3u); edx = (edx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 00527337 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00527339 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052733c movzx ecx, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (u32)(M8(m_)); }
  /* 00527340 or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00527342 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00527345 movzx eax, byte ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); eax = (u32)(M8(m_)); }
  /* 00527349 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0052734b mov dword ptr [ebp - 0x30], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(edx); }
  /* 0052734e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00527350 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00527352 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00527358 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52735bu; SAVEALL; call_ind(c, t_); RETCHK(0x52735bu, 0x527358u); LOADALL; }
  /* 0052735b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052735d push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0052735f mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00527365 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527368u; SAVEALL; call_ind(c, t_); RETCHK(0x527368u, 0x527365u); LOADALL; }
  /* 00527368 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052736b cmp dword ptr [ebp + 0x14], 1 */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052736f jne 0x52738c */ if (!ZF_) goto L_0052738c;
  /* 00527371 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00527373 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00527375 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0052737a call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52737du; SAVEALL; call_ind(c, t_); RETCHK(0x52737du, 0x52737au); LOADALL; }
  /* 0052737d push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0052737f push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00527381 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00527387 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52738au; SAVEALL; call_ind(c, t_); RETCHK(0x52738au, 0x527387u); LOADALL; }
  /* 0052738a jmp 0x5273a5 */ goto L_005273a5;
L_0052738c:;
  /* 0052738c push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0052738e push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00527390 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00527396 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527399u; SAVEALL; call_ind(c, t_); RETCHK(0x527399u, 0x527396u); LOADALL; }
  /* 00527399 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0052739b push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0052739d mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005273a2 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5273a5u; SAVEALL; call_ind(c, t_); RETCHK(0x5273a5u, 0x5273a2u); LOADALL; }
L_005273a5:;
  /* 005273a5 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005273a8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005273aa push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 005273ac mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005273b2 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5273b5u; SAVEALL; call_ind(c, t_); RETCHK(0x5273b5u, 0x5273b2u); LOADALL; }
  /* 005273b5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005273b7 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005273b9 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005273bf call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5273c2u; SAVEALL; call_ind(c, t_); RETCHK(0x5273c2u, 0x5273bfu); LOADALL; }
  /* 005273c2 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005273c4 lea eax, [ebp - 0x94] */ eax = (u32)((u32)(ebp + 0xffffff6cu));
  /* 005273ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005273cb push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005273cd mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005273d3 call dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5273d6u; SAVEALL; call_ind(c, t_); RETCHK(0x5273d6u, 0x5273d3u); LOADALL; }
  /* 005273d6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005273d8 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 005273da mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 005273e0 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5273e3u; SAVEALL; call_ind(c, t_); RETCHK(0x5273e3u, 0x5273e0u); LOADALL; }
  /* 005273e3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005273e5 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005273e7 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005273ec call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5273efu; SAVEALL; call_ind(c, t_); RETCHK(0x5273efu, 0x5273ecu); LOADALL; }
  /* 005273ef push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005273f1 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 005273f3 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005273f9 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5273fcu; SAVEALL; call_ind(c, t_); RETCHK(0x5273fcu, 0x5273f9u); LOADALL; }
  /* 005273fc add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005273ff wait */ ;
  /* 00527400 jmp 0x52740b */ goto L_0052740b;
L_0052740b:;
  /* 0052740b mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00527412 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00527415 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052741c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052741d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052741e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052741f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00527421 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00527422 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00527402(CPU *c) {
  NATIVE_HOOK(0x527402u) REGS; LOADALL;
L_00527402:;
  /* 00527402 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00527407 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00527408(CPU *c) {
  NATIVE_HOOK(0x527408u) REGS; LOADALL;
L_00527408:;
  /* 00527408 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 0052740b mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00527412 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00527415 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052741c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052741d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052741e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052741f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00527421 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00527422 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00527430(CPU *c) {
  NATIVE_HOOK(0x527430u) REGS; LOADALL;
L_00527430:;
  /* 00527430 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00527431 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00527433 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00527435 push 0x656de8 */ { u32 v_ = 0x656de8u; esp -= 4; M32(esp) = v_; }
  /* 0052743a push 0x5fee56 */ { u32 v_ = 0x5fee56u; esp -= 4; M32(esp) = v_; }
  /* 0052743f mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00527445 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527446 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052744d sub esp, 0x124 */ { u32 a_ = esp, b_ = 0x124u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00527453 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00527454 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00527455 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00527456 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 00527459 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052745b mov edi, edx */ { edi = (u32)(edx); }
  /* 0052745d wait */ ;
  /* 0052745e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00527460 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00527463 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527465 je 0x52756c */ if (ZF_) goto L_0052756c;
  /* 0052746b cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052746d je 0x52756c */ if (ZF_) goto L_0052756c;
L_00527473:;
  /* 00527473 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 00527476 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00527479 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052747b jge 0x5274e1 */ if (!LT_) goto L_005274e1;
  /* 0052747d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052747f imul ecx, ecx, 0x1c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x1cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00527482 fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 00527488 fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0052748e fmul dword ptr [edi + eax*8] */ { const u32 m_ = (u32)(edi + eax * 8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00527491 fstp dword ptr [ebp + ecx - 0x134] */ { const u32 m_ = (u32)(ebp + ecx + 0xfffffeccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00527498 fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 0052749e fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 005274a4 fmul dword ptr [edi + eax*8 + 4] */ { const u32 m_ = (u32)(edi + eax * 8u + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005274a8 fstp dword ptr [ebp + ecx - 0x130] */ { const u32 m_ = (u32)(ebp + ecx + 0xfffffed0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005274af mov dword ptr [ebp + ecx - 0x12c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + ecx + 0xfffffed4u); M32(m_) = (u32)(0x3f800000u); }
  /* 005274ba xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005274bc mov dh, byte ptr [esi + eax*4 + 3] */ { const u32 m_ = (u32)(esi + eax * 4u + 0x3u); edx = (edx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 005274c0 mov dl, byte ptr [esi + eax*4] */ { const u32 m_ = (u32)(esi + eax * 4u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005274c3 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005274c6 movzx ebx, byte ptr [esi + eax*4 + 1] */ { const u32 m_ = (u32)(esi + eax * 4u + 0x1u); ebx = (u32)(M8(m_)); }
  /* 005274cb or edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005274cd shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005274d0 movzx ebx, byte ptr [esi + eax*4 + 2] */ { const u32 m_ = (u32)(esi + eax * 4u + 0x2u); ebx = (u32)(M8(m_)); }
  /* 005274d5 or edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005274d7 mov dword ptr [ebp + ecx - 0x124], edx */ { const u32 m_ = (u32)(ebp + ecx + 0xfffffedcu); M32(m_) = (u32)(edx); }
  /* 005274de inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005274df jmp 0x527473 */ goto L_00527473;
L_005274e1:;
  /* 005274e1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005274e3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005274e5 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 005274ea call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5274edu; SAVEALL; call_ind(c, t_); RETCHK(0x5274edu, 0x5274eau); LOADALL; }
  /* 005274ed push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005274ef push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 005274f1 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 005274f7 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5274fau; SAVEALL; call_ind(c, t_); RETCHK(0x5274fau, 0x5274f7u); LOADALL; }
  /* 005274fa push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 005274fc push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 005274fe mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00527504 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527507u; SAVEALL; call_ind(c, t_); RETCHK(0x527507u, 0x527504u); LOADALL; }
  /* 00527507 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00527509 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0052750b mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00527510 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527513u; SAVEALL; call_ind(c, t_); RETCHK(0x527513u, 0x527510u); LOADALL; }
  /* 00527513 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00527515 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00527517 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0052751d call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527520u; SAVEALL; call_ind(c, t_); RETCHK(0x527520u, 0x52751du); LOADALL; }
  /* 00527520 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00527522 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00527524 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0052752a call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52752du; SAVEALL; call_ind(c, t_); RETCHK(0x52752du, 0x52752au); LOADALL; }
  /* 0052752d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052752e lea eax, [ebp - 0x134] */ eax = (u32)((u32)(ebp + 0xfffffeccu));
  /* 00527534 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527535 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00527537 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0052753d call dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527540u; SAVEALL; call_ind(c, t_); RETCHK(0x527540u, 0x52753du); LOADALL; }
  /* 00527540 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00527542 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00527544 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0052754a call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52754du; SAVEALL; call_ind(c, t_); RETCHK(0x52754du, 0x52754au); LOADALL; }
  /* 0052754d add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00527550 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00527552 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00527554 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00527559 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52755cu; SAVEALL; call_ind(c, t_); RETCHK(0x52755cu, 0x527559u); LOADALL; }
  /* 0052755c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052755e push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00527560 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00527566 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527569u; SAVEALL; call_ind(c, t_); RETCHK(0x527569u, 0x527566u); LOADALL; }
  /* 00527569 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052756c:;
  /* 0052756c wait */ ;
  /* 0052756d jmp 0x527578 */ goto L_00527578;
L_00527578:;
  /* 00527578 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0052757f mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00527582 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00527589 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052758a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052758b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052758c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052758e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052758f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052756f(CPU *c) {
  NATIVE_HOOK(0x52756fu) REGS; LOADALL;
L_0052756f:;
  /* 0052756f mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00527574 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00527575(CPU *c) {
  NATIVE_HOOK(0x527575u) REGS; LOADALL;
L_00527575:;
  /* 00527575 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 00527578 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0052757f mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00527582 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00527589 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052758a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052758b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052758c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052758e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052758f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005275a0(CPU *c) {
  NATIVE_HOOK(0x5275a0u) REGS; LOADALL;
L_005275a0:;
  /* 005275a0 mov dword ptr [eax + 0x90], 1 */ { const u32 m_ = (u32)(eax + 0x90u); M32(m_) = (u32)(0x1u); }
  /* 005275aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005275b0(CPU *c) {
  NATIVE_HOOK(0x5275b0u) REGS; LOADALL;
L_005275b0:;
  /* 005275b0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005275b1 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005275b3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005275b4 mov dword ptr [edi], 0x652f3c */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x652f3cu); }
  /* 005275ba mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 005275bd lea esi, [edi + 0x10] */ esi = (u32)((u32)(edi + 0x10u));
  /* 005275c0 mov dword ptr [edi + 8], 0x64d178 */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(0x64d178u); }
  /* 005275c7 mov dword ptr [edi + 0xc], ebx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 005275ca call 0x5267c0 */ esp -= 4; M32(esp) = 0x5275cfu; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x5275cau); RETCHK(0x5275cfu, 0x5275cau); LOADALL;
  /* 005275cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005275d0 mov dword ptr [edi + 0xa4], ebx */ { const u32 m_ = (u32)(edi + 0xa4u); M32(m_) = (u32)(ebx); }
  /* 005275d6 mov dword ptr [edi + 0xa8], ebx */ { const u32 m_ = (u32)(edi + 0xa8u); M32(m_) = (u32)(ebx); }
  /* 005275dc mov eax, edi */ { eax = (u32)(edi); }
  /* 005275de pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005275df ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005275e0(CPU *c) {
  NATIVE_HOOK(0x5275e0u) REGS; LOADALL;
L_005275e0:;
  /* 005275e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005275e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005275e3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005275e4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005275e6 call 0x527610 */ esp -= 4; M32(esp) = 0x5275ebu; SAVEALL; F_00527610(c); ABI_CHECK(0x527610u, 0x5275e6u); RETCHK(0x5275ebu, 0x5275e6u); LOADALL;
  /* 005275eb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005275ef je 0x5275fa */ if (ZF_) goto L_005275fa;
  /* 005275f1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005275f2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5275f7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5275f2u); RETCHK(0x5275f7u, 0x5275f2u); LOADALL;
  /* 005275f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005275fa:;
  /* 005275fa mov eax, esi */ { eax = (u32)(esi); }
  /* 005275fc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005275fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005275fe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00527610(CPU *c) {
  NATIVE_HOOK(0x527610u) REGS; LOADALL;
L_00527610:;
  /* 00527610 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00527611 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00527613 mov dword ptr [esi], 0x652f3c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x652f3cu); }
  /* 00527619 call 0x527a80 */ esp -= 4; M32(esp) = 0x52761eu; SAVEALL; F_00527a80(c); ABI_CHECK(0x527a80u, 0x527619u); RETCHK(0x52761eu, 0x527619u); LOADALL;
  /* 0052761e lea ecx, [esi + 0x10] */ ecx = (u32)((u32)(esi + 0x10u));
  /* 00527621 call 0x5267e0 */ esp -= 4; M32(esp) = 0x527626u; SAVEALL; F_005267e0(c); ABI_CHECK(0x5267e0u, 0x527621u); RETCHK(0x527626u, 0x527621u); LOADALL;
  /* 00527626 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 00527629 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052762a jmp 0x529300 */ SAVEALL; F_00529300(c); return;
}

void F_00527630(CPU *c) {
  NATIVE_HOOK(0x527630u) REGS; LOADALL;
L_00527630:;
  /* 00527630 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00527631 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00527633 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00527636 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00527637 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00527638 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00527639 mov esi, edx */ { esi = (u32)(edx); }
  /* 0052763b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0052763d mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0052763f call 0x527a80 */ esp -= 4; M32(esp) = 0x527644u; SAVEALL; F_00527a80(c); ABI_CHECK(0x527a80u, 0x52763fu); RETCHK(0x527644u, 0x52763fu); LOADALL;
  /* 00527644 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00527646 je 0x527666 */ if (ZF_) goto L_00527666;
  /* 00527648 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052764b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052764d mov dword ptr [esi + 0xa4], eax */ { const u32 m_ = (u32)(esi + 0xa4u); M32(m_) = (u32)(eax); }
  /* 00527653 lea eax, [esi + 8] */ eax = (u32)((u32)(esi + 0x8u));
  /* 00527656 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00527657 mov dword ptr [esi + 0xa8], ebx */ { const u32 m_ = (u32)(esi + 0xa8u); M32(m_) = (u32)(ebx); }
  /* 0052765d call 0x529310 */ esp -= 4; M32(esp) = 0x527662u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x52765du); RETCHK(0x527662u, 0x52765du); LOADALL;
  /* 00527662 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00527664 jne 0x527671 */ if (!ZF_) goto L_00527671;
L_00527666:;
  /* 00527666 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00527667 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00527668 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0052766a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052766b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052766d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052766e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00527671:;
  /* 00527671 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00527673 imul edi, edi, 0x1c0 */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x1c0u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00527679 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052767a call 0x5fe9ce */ esp -= 4; M32(esp) = 0x52767fu; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x52767au); RETCHK(0x52767fu, 0x52767au); LOADALL;
  /* 0052767f mov edx, eax */ { edx = (u32)(eax); }
  /* 00527681 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00527683 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 00527686 mov edi, edx */ { edi = (u32)(edx); }
  /* 00527688 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0052768a shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052768d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052768f rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00527691 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00527693 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00527696 rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 00527698 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052769b xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0052769d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005276a0 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005276a2 mov dword ptr [ebp + 8], edi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edi); }
  /* 005276a5 jle 0x52778c */ if ((ZF_|LT_)) goto L_0052778c;
  /* 005276ab mov ecx, 0x3f800000 */ { ecx = (u32)(0x3f800000u); }
  /* 005276b0 or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_005276b3:;
  /* 005276b3 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005276b6 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005276b8 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 005276bb fmul dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005276c1 fst dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); }
  /* 005276c4 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 005276ca fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 005276cc fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005276cf fld dword ptr [0x656db4] */ { const u32 m_ = (u32)(0x656db4u); FPUSH((double)MF32(m_)); }
  /* 005276d5 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 005276d7 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005276da fadd dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_005276e0:;
  /* 005276e0 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005276e3 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005276e6 mov dword ptr [eax + 0x10], edi */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(edi); }
  /* 005276e9 fild dword ptr [esi + 0xa8] */ { const u32 m_ = (u32)(esi + 0xa8u); FPUSH((double)(s32)M32(m_)); }
  /* 005276ef add eax, 0x1c */ { u32 a_ = eax, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005276f2 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005276f5 fmul dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005276fb mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005276fe mov dword ptr [eax + 0x10], edi */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(edi); }
  /* 00527701 add eax, 0x1c */ { u32 a_ = eax, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00527704 fdivr dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 00527707 add eax, 0x1c */ { u32 a_ = eax, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052770a add eax, 0x1c */ { u32 a_ = eax, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052770d inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052770e cmp edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527711 fstp dword ptr [eax - 0x5c] */ { const u32 m_ = (u32)(eax + 0xffffffa4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00527714 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00527717 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0052771a fmul dword ptr [0x656d94] */ { const u32 m_ = (u32)(0x656d94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00527720 fst dword ptr [eax - 0x58] */ { const u32 m_ = (u32)(eax + 0xffffffa8u); MF32(m_) = (float)ST(0); }
  /* 00527723 fild dword ptr [esi + 0xa8] */ { const u32 m_ = (u32)(esi + 0xa8u); FPUSH((double)(s32)M32(m_)); }
  /* 00527729 mov dword ptr [eax - 0x30], ecx */ { const u32 m_ = (u32)(eax + 0xffffffd0u); M32(m_) = (u32)(ecx); }
  /* 0052772c mov dword ptr [eax - 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0xffffffd4u); M32(m_) = (u32)(ecx); }
  /* 0052772f mov dword ptr [eax - 0x28], edi */ { const u32 m_ = (u32)(eax + 0xffffffd8u); M32(m_) = (u32)(edi); }
  /* 00527732 fmul dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00527738 fdivr dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 0052773b fstp dword ptr [eax - 0x40] */ { const u32 m_ = (u32)(eax + 0xffffffc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052773e fst dword ptr [eax - 0x3c] */ { const u32 m_ = (u32)(eax + 0xffffffc4u); MF32(m_) = (float)ST(0); }
  /* 00527741 fild dword ptr [esi + 0xa8] */ { const u32 m_ = (u32)(esi + 0xa8u); FPUSH((double)(s32)M32(m_)); }
  /* 00527747 mov dword ptr [eax - 0x14], ecx */ { const u32 m_ = (u32)(eax + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0052774a mov dword ptr [eax - 0x10], ecx */ { const u32 m_ = (u32)(eax + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 0052774d mov dword ptr [eax - 0xc], edi */ { const u32 m_ = (u32)(eax + 0xfffffff4u); M32(m_) = (u32)(edi); }
  /* 00527750 fmul dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00527756 fdivr dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 00527759 fstp dword ptr [eax - 0x24] */ { const u32 m_ = (u32)(eax + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052775c fst dword ptr [eax - 0x20] */ { const u32 m_ = (u32)(eax + 0xffffffe0u); MF32(m_) = (float)ST(0); }
  /* 0052775f fild dword ptr [esi + 0xa8] */ { const u32 m_ = (u32)(esi + 0xa8u); FPUSH((double)(s32)M32(m_)); }
  /* 00527765 fmul dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052776b fdivr st(2) */ ST(0) = FR(ST(2) / ST(0));
  /* 0052776d fstp dword ptr [eax - 8] */ { const u32 m_ = (u32)(eax + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00527770 fstp dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00527773 jl 0x5276e0 */ if (LT_) goto L_005276e0;
  /* 00527779 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052777c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0052777e inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052777f cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527781 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 00527784 jl 0x5276b3 */ if (LT_) goto L_005276b3;
  /* 0052778a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_0052778c:;
  /* 0052778c lea ebx, [esi + 8] */ ebx = (u32)((u32)(esi + 0x8u));
  /* 0052778f lea ecx, [esi + 0x10] */ ecx = (u32)((u32)(esi + 0x10u));
  /* 00527792 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00527794 call 0x5267f0 */ esp -= 4; M32(esp) = 0x527799u; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x527794u); RETCHK(0x527799u, 0x527794u); LOADALL;
  /* 00527799 push 0x44160000 */ { u32 v_ = 0x44160000u; esp -= 4; M32(esp) = v_; }
  /* 0052779e push 0x44480000 */ { u32 v_ = 0x44480000u; esp -= 4; M32(esp) = v_; }
  /* 005277a3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005277a4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005277a5 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 005277a8 call 0x52cec0 */ esp -= 4; M32(esp) = 0x5277adu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x5277a8u); RETCHK(0x5277adu, 0x5277a8u); LOADALL;
  /* 005277ad mov ecx, dword ptr [esi + 0xa4] */ { const u32 m_ = (u32)(esi + 0xa4u); ecx = (u32)(M32(m_)); }
  /* 005277b3 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005277b5 je 0x5277c0 */ if (ZF_) goto L_005277c0;
  /* 005277b7 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005277b9 lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 005277bc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005277bd call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5277c0u; SAVEALL; call_ind(c, t_); RETCHK(0x5277c0u, 0x5277bdu); LOADALL; }
L_005277c0:;
  /* 005277c0 mov eax, dword ptr [0x7a6e2c] */ { const u32 m_ = (u32)(0x7a6e2cu); eax = (u32)(M32(m_)); }
  /* 005277c5 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005277c7 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 005277cc je 0x527873 */ if (ZF_) goto L_00527873;
  /* 005277d2 cmp dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005277d5 je 0x5277e0 */ if (ZF_) goto L_005277e0;
  /* 005277d7 cmp dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005277da jne 0x527873 */ if (!ZF_) goto L_00527873;
L_005277e0:;
  /* 005277e0 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 005277e3 fsub dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005277e6 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005277ec fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005277ee test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005277f1 je 0x5277fb */ if (ZF_) goto L_005277fb;
  /* 005277f3 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005277f5 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 005277f8 fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005277fb:;
  /* 005277fb mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005277fe cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527800 je 0x52780c */ if (ZF_) goto L_0052780c;
  /* 00527802 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00527804 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 00527807 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052780a jmp 0x52780f */ goto L_0052780f;
L_0052780c:;
  /* 0052780c mov dword ptr [ebp + 8], edi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edi); }
L_0052780f:;
  /* 0052780f fisub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)(s32)M32(m_)); }
  /* 00527812 fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 00527814 fcomp dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0052781a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0052781c test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052781f jp 0x527873 */ if (PF_) goto L_00527873;
  /* 00527821 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00527824 fsub dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00527827 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0052782d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0052782f test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00527832 je 0x52783c */ if (ZF_) goto L_0052783c;
  /* 00527834 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00527836 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 00527839 fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0052783c:;
  /* 0052783c mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052783f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527841 je 0x52784d */ if (ZF_) goto L_0052784d;
  /* 00527843 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00527845 mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 00527848 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052784b jmp 0x527850 */ goto L_00527850;
L_0052784d:;
  /* 0052784d mov dword ptr [ebp + 8], edi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edi); }
L_00527850:;
  /* 00527850 fisub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)(s32)M32(m_)); }
  /* 00527853 fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 00527855 fcomp dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0052785b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0052785d test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00527860 jp 0x527873 */ if (PF_) goto L_00527873;
  /* 00527862 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00527863 mov dword ptr [esi + 0x94], ecx */ { const u32 m_ = (u32)(esi + 0x94u); M32(m_) = (u32)(ecx); }
  /* 00527869 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052786a mov al, cl */ { eax = (eax & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 0052786c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052786d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052786f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00527870 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00527873:;
  /* 00527873 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00527874 mov dword ptr [esi + 0x94], 2 */ { const u32 m_ = (u32)(esi + 0x94u); M32(m_) = (u32)(0x2u); }
  /* 0052787e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052787f mov al, cl */ { eax = (eax & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 00527881 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00527882 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00527884 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00527885 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00527890(CPU *c) {
  NATIVE_HOOK(0x527890u) REGS; LOADALL;
L_00527890:;
  /* 00527890 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00527891 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00527893 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00527896 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00527897 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00527899 mov eax, edi */ { eax = (u32)(edi); }
  /* 0052789b call 0x527a50 */ esp -= 4; M32(esp) = 0x5278a0u; SAVEALL; F_00527a50(c); ABI_CHECK(0x527a50u, 0x52789bu); RETCHK(0x5278a0u, 0x52789bu); LOADALL;
  /* 005278a0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005278a2 je 0x527a3e */ if (ZF_) goto L_00527a3e;
  /* 005278a8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005278a9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005278aa jmp 0x62ce70 */ goto L_0062ce70;
L_005278b4:;
  /* 005278b4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005278b6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005278b8 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005278bb call 0x52cec0 */ esp -= 4; M32(esp) = 0x5278c0u; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x5278bbu); RETCHK(0x5278c0u, 0x5278bbu); LOADALL;
  /* 005278c0 mov eax, dword ptr [edi + 0xa4] */ { const u32 m_ = (u32)(edi + 0xa4u); eax = (u32)(M32(m_)); }
  /* 005278c6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005278c8 je 0x5278ec */ if (ZF_) goto L_005278ec;
  /* 005278ca mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005278cc mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005278ce lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005278d1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005278d2 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5278d5u; SAVEALL; call_ind(c, t_); RETCHK(0x5278d5u, 0x5278d2u); LOADALL; }
  /* 005278d5 mov eax, dword ptr [edi + 0xa4] */ { const u32 m_ = (u32)(edi + 0xa4u); eax = (u32)(M32(m_)); }
  /* 005278db call 0x507890 */ esp -= 4; M32(esp) = 0x5278e0u; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x5278dbu); RETCHK(0x5278e0u, 0x5278dbu); LOADALL;
  /* 005278e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005278e1 lea esi, [ebp - 0x18] */ esi = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005278e4 call 0x52cf90 */ esp -= 4; M32(esp) = 0x5278e9u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x5278e4u); RETCHK(0x5278e9u, 0x5278e4u); LOADALL;
  /* 005278e9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005278ec:;
  /* 005278ec fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 005278ef fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005278f2 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005278f8 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005278fa test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005278fd je 0x527907 */ if (ZF_) goto L_00527907;
  /* 005278ff fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00527901 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00527904 fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00527907:;
  /* 00527907 fidiv dword ptr [edi + 0xa8] */ { const u32 m_ = (u32)(edi + 0xa8u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 0052790d fmul dword ptr [0x656d94] */ { const u32 m_ = (u32)(0x656d94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00527913 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00527916 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 00527918 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052791b fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0052791e fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 00527920 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00527923 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00527925 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00527928 fadd dword ptr [0x656f5c] */ { const u32 m_ = (u32)(0x656f5cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0052792e fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00527931 fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00527934 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0052793a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0052793c test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052793f je 0x527949 */ if (ZF_) goto L_00527949;
  /* 00527941 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00527943 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00527946 fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00527949:;
  /* 00527949 fmul dword ptr [0x656d94] */ { const u32 m_ = (u32)(0x656d94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0052794f mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00527952 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00527955 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00527958 imul esi, esi, 0x1c0 */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x1c0u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052795e fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 00527960 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00527963 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00527966 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 00527968 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 0052796b fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052796e mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00527971 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00527973 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00527975 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00527977 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0052797a fadd dword ptr [0x656f5c] */ { const u32 m_ = (u32)(0x656f5cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00527980 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00527983 fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 00527989 fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0052798f fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00527992 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00527994 fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00527997 fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 0052799a fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0052799c fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052799f fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 005279a2 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 005279a4 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005279a7 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 005279a9 fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 005279af fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
L_005279b5:;
  /* 005279b5 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005279b8 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 005279ba fmul dword ptr [ebp + ecx*4 - 0x28] */ { const u32 m_ = (u32)(ebp + ecx * 4u + 0xffffffd8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005279be mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 005279c0 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 005279c3 add eax, 0x1c */ { u32 a_ = eax, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005279c6 fst dword ptr [eax - 0x18] */ { const u32 m_ = (u32)(eax + 0xffffffe8u); MF32(m_) = (float)ST(0); }
  /* 005279c9 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 005279cb mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 005279ce fst dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); }
  /* 005279d1 add eax, 0x1c */ { u32 a_ = eax, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005279d4 fst dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); }
  /* 005279d7 add eax, 0x1c */ { u32 a_ = eax, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005279da mov dword ptr [eax - 0x1c], edx */ { const u32 m_ = (u32)(eax + 0xffffffe4u); M32(m_) = (u32)(edx); }
  /* 005279dd fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 005279df fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005279e1 add eax, 0x1c */ { u32 a_ = eax, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005279e4 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005279e5 cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005279e8 fstp dword ptr [eax - 0x18] */ { const u32 m_ = (u32)(eax + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005279eb jl 0x5279b5 */ if (LT_) goto L_005279b5;
  /* 005279ed mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005279f0 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005279f2 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005279f4 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005279f6 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005279f8 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005279fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005279fb lea ebx, [edi + 0x10] */ ebx = (u32)((u32)(edi + 0x10u));
  /* 005279fe push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00527a00 mov edx, 0x68810c */ { edx = (u32)(0x68810cu); }
  /* 00527a05 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00527a07 call 0x526a80 */ esp -= 4; M32(esp) = 0x527a0cu; SAVEALL; F_00526a80(c); ABI_CHECK(0x526a80u, 0x527a07u); RETCHK(0x527a0cu, 0x527a07u); LOADALL;
  /* 00527a0c mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00527a0f push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00527a11 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00527a13 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00527a15 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00527a16 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00527a18 mov edx, 0x68811c */ { edx = (u32)(0x68811cu); }
  /* 00527a1d mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00527a1f call 0x526a80 */ esp -= 4; M32(esp) = 0x527a24u; SAVEALL; F_00526a80(c); ABI_CHECK(0x526a80u, 0x527a1fu); RETCHK(0x527a24u, 0x527a1fu); LOADALL;
  /* 00527a24 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00527a27 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00527a29 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00527a2b add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00527a2d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00527a2e push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00527a30 mov edx, 0x68812c */ { edx = (u32)(0x68812cu); }
  /* 00527a35 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00527a37 call 0x526a80 */ esp -= 4; M32(esp) = 0x527a3cu; SAVEALL; F_00526a80(c); ABI_CHECK(0x526a80u, 0x527a37u); RETCHK(0x527a3cu, 0x527a37u); LOADALL;
  /* 00527a3c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00527a3d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00527a3e:;
  /* 00527a3e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00527a3f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00527a41 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00527a42 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0062ce70:;
  /* 0062ce70 push dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0062ce76 push dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0062ce7c jmp 0x5278b4 */ goto L_005278b4;
}

void F_00527a50(CPU *c) {
  NATIVE_HOOK(0x527a50u) REGS; LOADALL;
L_00527a50:;
  /* 00527a50 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00527a53 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00527a55 je 0x527a6e */ if (ZF_) goto L_00527a6e;
  /* 00527a57 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00527a5a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00527a5c je 0x527a6e */ if (ZF_) goto L_00527a6e;
  /* 00527a5e mov ecx, dword ptr [eax + 0xa8] */ { const u32 m_ = (u32)(eax + 0xa8u); ecx = (u32)(M32(m_)); }
  /* 00527a64 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00527a66 je 0x527a6e */ if (ZF_) goto L_00527a6e;
  /* 00527a68 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00527a6d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00527a6e:;
  /* 00527a6e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00527a70 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00527a80(CPU *c) {
  NATIVE_HOOK(0x527a80u) REGS; LOADALL;
L_00527a80:;
  /* 00527a80 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00527a83 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00527a84 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00527a86 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527a88 je 0x527a96 */ if (ZF_) goto L_00527a96;
  /* 00527a8a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527a8b call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x527a90u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x527a8bu); RETCHK(0x527a90u, 0x527a8bu); LOADALL;
  /* 00527a90 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00527a93 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
L_00527a96:;
  /* 00527a96 mov dword ptr [esi + 0xa8], edi */ { const u32 m_ = (u32)(esi + 0xa8u); M32(m_) = (u32)(edi); }
  /* 00527a9c mov dword ptr [esi + 0xa4], edi */ { const u32 m_ = (u32)(esi + 0xa4u); M32(m_) = (u32)(edi); }
  /* 00527aa2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00527aa3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00527ac0(CPU *c) {
  NATIVE_HOOK(0x527ac0u) REGS; LOADALL;
L_00527ac0:;
  /* 00527ac0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00527ac1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00527ac3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00527ac6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00527ac8 mov dword ptr [ebx], 0x652f44 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x652f44u); }
  /* 00527ace jne 0x527ad9 */ if (!ZF_) goto L_00527ad9;
  /* 00527ad0 mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00527ad3 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00527ad5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00527ad6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00527ad9:;
  /* 00527ad9 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 00527adc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00527ae0:;
  /* 00527ae0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00527ae2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00527ae3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00527ae5 jne 0x527ae0 */ if (!ZF_) goto L_00527ae0;
  /* 00527ae7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00527ae8 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00527aea lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 00527aed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00527aee lea edi, [esi + esi] */ edi = (u32)((u32)(esi + esi));
  /* 00527af1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00527af2 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x527af7u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x527af2u); RETCHK(0x527af7u, 0x527af2u); LOADALL;
  /* 00527af7 mov edx, eax */ { edx = (u32)(eax); }
  /* 00527af9 mov dword ptr [ebx + 4], edx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00527afc mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00527afe mov edi, edx */ { edi = (u32)(edx); }
  /* 00527b00 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00527b02 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00527b05 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00527b07 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00527b09 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00527b0c mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00527b0e mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00527b11 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00527b14 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00527b15 rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 00527b17 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00527b1a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00527b1d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527b1e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00527b1f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00527b20 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00527b22 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00527b23 call dword ptr [0x62e174] */ { const u32 m_ = (u32)(0x62e174u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527b29u; SAVEALL; call_ind(c, t_); RETCHK(0x527b29u, 0x527b23u); LOADALL; }
  /* 00527b29 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00527b2a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00527b2b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00527b2d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00527b2e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00527b70(CPU *c) {
  NATIVE_HOOK(0x527b70u) REGS; LOADALL;
L_00527b70:;
  /* 00527b70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00527b71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00527b73 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00527b74 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00527b76 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00527b79 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00527b7b mov dword ptr [esi], 0x652f44 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x652f44u); }
  /* 00527b81 je 0x527b93 */ if (ZF_) goto L_00527b93;
  /* 00527b83 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527b84 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x527b89u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x527b84u); RETCHK(0x527b89u, 0x527b84u); LOADALL;
  /* 00527b89 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00527b8c mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
L_00527b93:;
  /* 00527b93 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00527b97 je 0x527ba2 */ if (ZF_) goto L_00527ba2;
  /* 00527b99 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00527b9a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x527b9fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x527b9au); RETCHK(0x527b9fu, 0x527b9au); LOADALL;
  /* 00527b9f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00527ba2:;
  /* 00527ba2 mov eax, esi */ { eax = (u32)(esi); }
  /* 00527ba4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00527ba5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00527ba6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00527bb0(CPU *c) {
  NATIVE_HOOK(0x527bb0u) REGS; LOADALL;
L_00527bb0:;
  /* 00527bb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00527bb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00527bb3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00527bb6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00527bb8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527bb9 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00527bbc mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00527bbf mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00527bc2 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00527bc5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527bc6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00527bc7 mov dword ptr [ebp - 0x10], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x1u); }
  /* 00527bce call 0x5fe770 */ esp -= 4; M32(esp) = 0x527bd3u; SAVEALL; F_005fe770(c); ABI_CHECK(0x5fe770u, 0x527bceu); RETCHK(0x527bd3u, 0x527bceu); LOADALL;
  /* 00527bd3 mov eax, esi */ { eax = (u32)(esi); }
  /* 00527bd5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00527bd7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00527bd8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00527bf0(CPU *c) {
  NATIVE_HOOK(0x527bf0u) REGS; LOADALL;
L_00527bf0:;
  /* 00527bf0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00527bf1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00527bf3 mov esi, eax */ { esi = (u32)(eax); }
  /* 00527bf5 call dword ptr [0x62e07c] */ { const u32 m_ = (u32)(0x62e07cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527bfbu; SAVEALL; call_ind(c, t_); RETCHK(0x527bfbu, 0x527bf5u); LOADALL; }
  /* 00527bfb mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 00527bfd xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00527bff mov dword ptr [esi + 0x30], 0 */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(0x0u); }
  /* 00527c06 mov dword ptr [esi + 0x34], 0 */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(0x0u); }
  /* 00527c0d lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 00527c10 mov edx, eax */ { edx = (u32)(eax); }
  /* 00527c12 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 00527c14 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00527c17 mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00527c1a mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00527c1d mov dword ptr [edx + 0x10], ecx */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00527c20 mov dword ptr [edx + 0x14], ecx */ { const u32 m_ = (u32)(edx + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00527c23 mov dword ptr [edx + 0x18], ecx */ { const u32 m_ = (u32)(edx + 0x18u); M32(m_) = (u32)(ecx); }
  /* 00527c26 mov dword ptr [edx + 0x1c], ecx */ { const u32 m_ = (u32)(edx + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 00527c29 mov dword ptr [edx + 0x20], ecx */ { const u32 m_ = (u32)(edx + 0x20u); M32(m_) = (u32)(ecx); }
  /* 00527c2c mov dword ptr [edx + 0x24], ecx */ { const u32 m_ = (u32)(edx + 0x24u); M32(m_) = (u32)(ecx); }
  /* 00527c2f mov dword ptr [eax], 0x28 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x28u); }
  /* 00527c35 cmp dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527c38 mov dword ptr [esi + 8], 0x40 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x40u); }
  /* 00527c3f mov dword ptr [esi + 0xc], 0xffffffe0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0xffffffe0u); }
  /* 00527c46 mov word ptr [esi + 0x10], 1 */ { const u32 m_ = (u32)(esi + 0x10u); M16(m_) = (u16)(0x1u); }
  /* 00527c4c mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00527c4f mov word ptr [esi + 0x12], 0x20 */ { const u32 m_ = (u32)(esi + 0x12u); M16(m_) = (u16)(0x20u); }
  /* 00527c55 je 0x527c8b */ if (ZF_) goto L_00527c8b;
  /* 00527c57 call 0x527cd0 */ esp -= 4; M32(esp) = 0x527c5cu; SAVEALL; F_00527cd0(c); ABI_CHECK(0x527cd0u, 0x527c57u); RETCHK(0x527c5cu, 0x527c57u); LOADALL;
  /* 00527c5c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00527c5e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00527c60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527c61 call dword ptr [0x62e078] */ { const u32 m_ = (u32)(0x62e078u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527c67u; SAVEALL; call_ind(c, t_); RETCHK(0x527c67u, 0x527c61u); LOADALL; }
  /* 00527c67 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00527c69 push 0xffffff */ { u32 v_ = 0xffffffu; esp -= 4; M32(esp) = v_; }
  /* 00527c6e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00527c6f call dword ptr [0x62e074] */ { const u32 m_ = (u32)(0x62e074u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527c75u; SAVEALL; call_ind(c, t_); RETCHK(0x527c75u, 0x527c6fu); LOADALL; }
  /* 00527c75 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00527c77 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00527c79 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00527c7a call dword ptr [0x62e094] */ { const u32 m_ = (u32)(0x62e094u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527c80u; SAVEALL; call_ind(c, t_); RETCHK(0x527c80u, 0x527c7au); LOADALL; }
  /* 00527c80 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00527c82 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00527c84 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527c85 call dword ptr [0x62e090] */ { const u32 m_ = (u32)(0x62e090u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527c8bu; SAVEALL; call_ind(c, t_); RETCHK(0x527c8bu, 0x527c85u); LOADALL; }
L_00527c8b:;
  /* 00527c8b mov eax, esi */ { eax = (u32)(esi); }
  /* 00527c8d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00527c8e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00527c90(CPU *c) {
  NATIVE_HOOK(0x527c90u) REGS; LOADALL;
L_00527c90:;
  /* 00527c90 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00527c92 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00527c94 je 0x527cae */ if (ZF_) goto L_00527cae;
  /* 00527c96 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00527c98 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527c99 call dword ptr [0x62e080] */ { const u32 m_ = (u32)(0x62e080u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527c9fu; SAVEALL; call_ind(c, t_); RETCHK(0x527c9fu, 0x527c99u); LOADALL; }
  /* 00527c9f mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00527ca1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527ca2 call dword ptr [0x62e06c] */ { const u32 m_ = (u32)(0x62e06cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527ca8u; SAVEALL; call_ind(c, t_); RETCHK(0x527ca8u, 0x527ca2u); LOADALL; }
  /* 00527ca8 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
L_00527cae:;
  /* 00527cae mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 00527cb1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00527cb3 je 0x527cca */ if (ZF_) goto L_00527cca;
  /* 00527cb5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527cb6 call dword ptr [0x62e068] */ { const u32 m_ = (u32)(0x62e068u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527cbcu; SAVEALL; call_ind(c, t_); RETCHK(0x527cbcu, 0x527cb6u); LOADALL; }
  /* 00527cbc mov dword ptr [esi + 0x30], 0 */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(0x0u); }
  /* 00527cc3 mov dword ptr [esi + 0x34], 0 */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(0x0u); }
L_00527cca:;
  /* 00527cca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00527cd0(CPU *c) {
  NATIVE_HOOK(0x527cd0u) REGS; LOADALL;
L_00527cd0:;
  /* 00527cd0 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00527cd2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00527cd4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00527cd5 mov edi, dword ptr [0x62e080] */ { const u32 m_ = (u32)(0x62e080u); edi = (u32)(M32(m_)); }
  /* 00527cdb je 0x527ce2 */ if (ZF_) goto L_00527ce2;
  /* 00527cdd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00527cdf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527ce0 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x527ce2u; SAVEALL; call_ind(c, t_); RETCHK(0x527ce2u, 0x527ce0u); LOADALL; }
L_00527ce2:;
  /* 00527ce2 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 00527ce5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00527ce7 je 0x527cf0 */ if (ZF_) goto L_00527cf0;
  /* 00527ce9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527cea call dword ptr [0x62e068] */ { const u32 m_ = (u32)(0x62e068u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527cf0u; SAVEALL; call_ind(c, t_); RETCHK(0x527cf0u, 0x527ceau); LOADALL; }
L_00527cf0:;
  /* 00527cf0 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00527cf2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00527cf4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00527cf6 lea eax, [esi + 0x34] */ eax = (u32)((u32)(esi + 0x34u));
  /* 00527cf9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527cfa push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00527cfc lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00527cff push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00527d00 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00527d01 call dword ptr [0x62e064] */ { const u32 m_ = (u32)(0x62e064u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527d07u; SAVEALL; call_ind(c, t_); RETCHK(0x527d07u, 0x527d01u); LOADALL; }
  /* 00527d07 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00527d09 mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 00527d0c je 0x527d14 */ if (ZF_) goto L_00527d14;
  /* 00527d0e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527d0f mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00527d11 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527d12 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x527d14u; SAVEALL; call_ind(c, t_); RETCHK(0x527d14u, 0x527d12u); LOADALL; }
L_00527d14:;
  /* 00527d14 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00527d15 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00527d20(CPU *c) {
  NATIVE_HOOK(0x527d20u) REGS; LOADALL;
L_00527d20:;
  /* 00527d20 mov cl, byte ptr [0x9b9290] */ { const u32 m_ = (u32)(0x9b9290u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00527d26 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00527d2b test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00527d2d jne 0x527d54 */ if (!ZF_) goto L_00527d54;
  /* 00527d2f mov edx, dword ptr [0x9b9290] */ { const u32 m_ = (u32)(0x9b9290u); edx = (u32)(M32(m_)); }
  /* 00527d35 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00527d37 mov eax, 0x9b9258 */ { eax = (u32)(0x9b9258u); }
  /* 00527d3c mov dword ptr [0x9b9290], edx */ { const u32 m_ = (u32)(0x9b9290u); M32(m_) = (u32)(edx); }
  /* 00527d42 call 0x527bf0 */ esp -= 4; M32(esp) = 0x527d47u; SAVEALL; F_00527bf0(c); ABI_CHECK(0x527bf0u, 0x527d42u); RETCHK(0x527d47u, 0x527d42u); LOADALL;
  /* 00527d47 push 0x62c5f0 */ { u32 v_ = 0x62c5f0u; esp -= 4; M32(esp) = v_; }
  /* 00527d4c call 0x5fe916 */ esp -= 4; M32(esp) = 0x527d51u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x527d4cu); RETCHK(0x527d51u, 0x527d4cu); LOADALL;
  /* 00527d51 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00527d54:;
  /* 00527d54 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00527d56 je 0x527d65 */ if (ZF_) goto L_00527d65;
  /* 00527d58 mov eax, dword ptr [0x9b9258] */ { const u32 m_ = (u32)(0x9b9258u); eax = (u32)(M32(m_)); }
  /* 00527d5d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00527d5e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00527d5f call dword ptr [0x62e080] */ { const u32 m_ = (u32)(0x62e080u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x527d65u; SAVEALL; call_ind(c, t_); RETCHK(0x527d65u, 0x527d5fu); LOADALL; }
L_00527d65:;
  /* 00527d65 mov eax, 0x9b9258 */ { eax = (u32)(0x9b9258u); }
  /* 00527d6a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00527d70(CPU *c) {
  NATIVE_HOOK(0x527d70u) REGS; LOADALL;
L_00527d70:;
  /* 00527d70 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00527d71 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00527d72 mov esi, eax */ { esi = (u32)(eax); }
  /* 00527d74 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00527d79 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527d7b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00527d7c mov edx, eax */ { edx = (u32)(eax); }
  /* 00527d7e mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00527d80 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 00527d82 je 0x527d93 */ if (ZF_) goto L_00527d93;
L_00527d84:;
  /* 00527d84 sar ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00527d86 shl eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00527d88 cmp ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527d8b jne 0x527d84 */ if (!ZF_) goto L_00527d84;
  /* 00527d8d cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527d8f je 0x527d93 */ if (ZF_) goto L_00527d93;
  /* 00527d91 shl eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_00527d93:;
  /* 00527d93 cmp esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527d96 je 0x527da7 */ if (ZF_) goto L_00527da7;
L_00527d98:;
  /* 00527d98 sar esi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00527d9a shl edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00527d9c cmp esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527d9f jne 0x527d98 */ if (!ZF_) goto L_00527d98;
  /* 00527da1 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527da3 je 0x527da7 */ if (ZF_) goto L_00527da7;
  /* 00527da5 shl edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
L_00527da7:;
  /* 00527da7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00527da8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00527da9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00527daa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00527db0(CPU *c) {
  NATIVE_HOOK(0x527db0u) REGS; LOADALL;
L_00527db0:;
  /* 00527db0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00527db1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00527db3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00527db6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00527db7 mov edi, eax */ { edi = (u32)(eax); }
  /* 00527db9 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00527dbc mov ecx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (u32)(M32(m_)); }
  /* 00527dbf test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00527dc1 je 0x528067 */ if (ZF_) goto L_00528067;
  /* 00527dc7 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 00527dca push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00527dcb mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00527dce xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00527dd0 mov ch, byte ptr [esi + 0x23] */ { const u32 m_ = (u32)(esi + 0x23u); ecx = (ecx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 00527dd3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00527dd5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00527dd7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00527dd8 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00527ddb mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 00527dde call 0x5ab2d0 */ esp -= 4; M32(esp) = 0x527de3u; SAVEALL; F_005ab2d0(c); ABI_CHECK(0x5ab2d0u, 0x527ddeu); RETCHK(0x527de3u, 0x527ddeu); LOADALL;
  /* 00527de3 mov edx, eax */ { edx = (u32)(eax); }
  /* 00527de5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00527de8 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00527dea mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 00527ded je 0x528066 */ if (ZF_) goto L_00528066;
  /* 00527df3 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00527df6 cmp eax, 0x300 */ { u32 a_ = eax, b_ = 0x300u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527dfb je 0x527f05 */ if (ZF_) goto L_00527f05;
  /* 00527e01 cmp eax, 0x200 */ { u32 a_ = eax, b_ = 0x200u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527e06 je 0x527f05 */ if (ZF_) goto L_00527f05;
  /* 00527e0c cmp eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527e11 je 0x527f05 */ if (ZF_) goto L_00527f05;
  /* 00527e17 cmp eax, 0xa00 */ { u32 a_ = eax, b_ = 0xa00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527e1c je 0x527f05 */ if (ZF_) goto L_00527f05;
  /* 00527e22 cmp eax, 0x500 */ { u32 a_ = eax, b_ = 0x500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527e27 jne 0x52805d */ if (!ZF_) goto L_0052805d;
  /* 00527e2d movzx ecx, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); ecx = (u32)(M8(m_)); }
  /* 00527e31 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00527e33 mov ah, byte ptr [edi + 3] */ { const u32 m_ = (u32)(edi + 0x3u); eax = (eax & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 00527e36 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 00527e3d mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00527e3f shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00527e42 or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00527e44 movzx ecx, byte ptr [edi + 2] */ { const u32 m_ = (u32)(edi + 0x2u); ecx = (u32)(M8(m_)); }
  /* 00527e48 shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00527e4b or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00527e4d mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00527e50 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00527e53 mov ecx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (u32)(M32(m_)); }
  /* 00527e56 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00527e59 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00527e5c mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 00527e5f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00527e61 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 00527e64 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 00527e67 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00527e6a mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 00527e6d jle 0x527ed2 */ if ((ZF_|LT_)) goto L_00527ed2;
  /* 00527e6f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00527e72 lea edx, [ecx*4] */ edx = (u32)((u32)(ecx * 4u));
  /* 00527e79 mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 00527e7c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00527e80:;
  /* 00527e80 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00527e83 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 00527e86 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
L_00527e89:;
  /* 00527e89 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00527e8b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00527e8d or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00527e8f cmovne edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); if (!ZF_) { edx = (u32)(M32(m_)); } }
  /* 00527e93 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 00527e95 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00527e98 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00527e9b dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00527e9c jne 0x527e89 */ if (!ZF_) goto L_00527e89;
  /* 00527e9e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00527ea0 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00527ea3 sub ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00527ea6 repne stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00527ea8 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 00527eab mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 00527eae mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00527eb1 mov edx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edx = (u32)(M32(m_)); }
  /* 00527eb4 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00527eb7 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00527eba add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00527ebc mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00527ebf add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00527ec1 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00527ec2 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527ec4 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00527ec7 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 00527eca mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00527ecd jl 0x527e80 */ if (LT_) goto L_00527e80;
  /* 00527ecf mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
L_00527ed2:;
  /* 00527ed2 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00527ed5 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00527ed8 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00527edb sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00527edd imul ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00527ee1 shl ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00527ee4 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00527ee6 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00527ee9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00527eeb rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00527eed mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00527eef and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00527ef2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00527ef3 rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 00527ef5 call 0x5aaf30 */ esp -= 4; M32(esp) = 0x527efau; SAVEALL; F_005aaf30(c); ABI_CHECK(0x5aaf30u, 0x527ef5u); RETCHK(0x527efau, 0x527ef5u); LOADALL;
  /* 00527efa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00527efd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00527efe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00527eff mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00527f01 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00527f02 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00527f05:;
  /* 00527f05 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00527f08 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00527f0a cmp eax, 0x300 */ { u32 a_ = eax, b_ = 0x300u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527f0f jne 0x527f44 */ if (!ZF_) goto L_00527f44;
  /* 00527f11 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00527f13 movzx si, byte ptr [edi + 3] */ { const u32 m_ = (u32)(edi + 0x3u); esi = (esi & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 00527f18 and al, 0xf0 */ { u32 a_ = (eax & 0xffu), b_ = 0xf0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00527f1a movzx cx, al */ { ecx = (ecx & 0xffff0000u) | ((u32)((eax & 0xffu)) & 0xffffu); }
  /* 00527f1e mov al, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00527f21 and al, 0xf0 */ { u32 a_ = (eax & 0xffu), b_ = 0xf0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00527f23 and esi, 0xfff0 */ { u32 a_ = esi, b_ = 0xfff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00527f29 shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00527f2c or esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00527f2e mov cl, byte ptr [edi + 2] */ { const u32 m_ = (u32)(edi + 0x2u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00527f31 shr cl, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = (ecx & 0xffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 7) & 1u; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 00527f34 or al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00527f36 movzx ax, al */ { eax = (eax & 0xffff0000u) | ((u32)((eax & 0xffu)) & 0xffffu); }
  /* 00527f3a shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00527f3d or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00527f3f jmp 0x527fe1 */ goto L_00527fe1;
L_00527f44:;
  /* 00527f44 cmp eax, 0x200 */ { u32 a_ = eax, b_ = 0x200u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527f49 jne 0x527f75 */ if (!ZF_) goto L_00527f75;
  /* 00527f4b movzx si, byte ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (esi & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 00527f4f mov cl, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00527f52 and cl, 0xfc */ { u32 a_ = (ecx & 0xffu), b_ = 0xfcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00527f55 movzx ax, cl */ { eax = (eax & 0xffff0000u) | ((u32)((ecx & 0xffu)) & 0xffffu); }
  /* 00527f59 mov cl, byte ptr [edi + 2] */ { const u32 m_ = (u32)(edi + 0x2u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00527f5c and esi, 0xfff8 */ { u32 a_ = esi, b_ = 0xfff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00527f62 shl esi, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00527f65 shr cl, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = (ecx & 0xffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 7) & 1u; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 00527f68 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00527f6a movzx ax, cl */ { eax = (eax & 0xffff0000u) | ((u32)((ecx & 0xffu)) & 0xffffu); }
  /* 00527f6e shl esi, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00527f71 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00527f73 jmp 0x527fe1 */ goto L_00527fe1;
L_00527f75:;
  /* 00527f75 cmp eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527f7a jne 0x527fb4 */ if (!ZF_) goto L_00527fb4;
  /* 00527f7c movzx si, byte ptr [edi + 3] */ { const u32 m_ = (u32)(edi + 0x3u); esi = (esi & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 00527f81 mov cl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00527f83 and cl, 0xf8 */ { u32 a_ = (ecx & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00527f86 movzx ax, cl */ { eax = (eax & 0xffff0000u) | ((u32)((ecx & 0xffu)) & 0xffffu); }
  /* 00527f8a mov cl, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00527f8d and esi, 0xff80 */ { u32 a_ = esi, b_ = 0xff80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00527f93 shl esi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00527f95 and cl, 0xf8 */ { u32 a_ = (ecx & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00527f98 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00527f9a movzx ax, cl */ { eax = (eax & 0xffff0000u) | ((u32)((ecx & 0xffu)) & 0xffffu); }
  /* 00527f9e mov cl, byte ptr [edi + 2] */ { const u32 m_ = (u32)(edi + 0x2u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00527fa1 shl esi, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00527fa4 shr cl, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = (ecx & 0xffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 7) & 1u; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 00527fa7 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00527fa9 movzx ax, cl */ { eax = (eax & 0xffff0000u) | ((u32)((ecx & 0xffu)) & 0xffffu); }
  /* 00527fad shl esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00527fb0 or esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00527fb2 jmp 0x527fe1 */ goto L_00527fe1;
L_00527fb4:;
  /* 00527fb4 cmp eax, 0xa00 */ { u32 a_ = eax, b_ = 0xa00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00527fb9 jne 0x527fe1 */ if (!ZF_) goto L_00527fe1;
  /* 00527fbb mov cl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00527fbd mov al, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00527fc0 and cl, 0xf8 */ { u32 a_ = (ecx & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00527fc3 and al, 0xf8 */ { u32 a_ = (eax & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00527fc5 movzx si, cl */ { esi = (esi & 0xffff0000u) | ((u32)((ecx & 0xffu)) & 0xffffu); }
  /* 00527fc9 movzx cx, al */ { ecx = (ecx & 0xffff0000u) | ((u32)((eax & 0xffu)) & 0xffffu); }
  /* 00527fcd mov al, byte ptr [edi + 2] */ { const u32 m_ = (u32)(edi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00527fd0 shr al, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = (eax & 0xffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 7) & 1u; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 00527fd3 shl esi, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00527fd6 or esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00527fd8 movzx cx, al */ { ecx = (ecx & 0xffff0000u) | ((u32)((eax & 0xffu)) & 0xffffu); }
  /* 00527fdc shl esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00527fdf or esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_00527fe1:;
  /* 00527fe1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00527fe4 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00527fe7 imul ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00527feb shl ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00527fed mov edi, edx */ { edi = (u32)(edx); }
  /* 00527fef mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00527ff1 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00527ff4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00527ff6 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00527ff8 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00527ffa and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00527ffd rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 00527fff mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00528002 mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 00528005 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00528007 mov eax, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); eax = (u32)(M32(m_)); }
  /* 0052800a mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0052800d mov dword ptr [ebp + 8], 0 */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 00528014 jle 0x52805a */ if ((ZF_|LT_)) goto L_0052805a;
L_00528016:;
  /* 00528016 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 00528019 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0052801b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052801d jle 0x528036 */ if ((ZF_|LT_)) goto L_00528036;
  /* 0052801f nop */ ;
L_00528020:;
  /* 00528020 cmp dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528023 je 0x528028 */ if (ZF_) goto L_00528028;
  /* 00528025 mov word ptr [ecx], si */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((esi & 0xffffu)); }
L_00528028:;
  /* 00528028 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0052802b add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052802e add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00528031 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00528032 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528034 jl 0x528020 */ if (LT_) goto L_00528020;
L_00528036:;
  /* 00528036 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 00528039 mov edi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edi = (u32)(M32(m_)); }
  /* 0052803c sub edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0052803e lea eax, [eax + edi*4] */ eax = (u32)((u32)(eax + edi * 4u));
  /* 00528041 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00528044 mov edi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edi = (u32)(M32(m_)); }
  /* 00528047 sub edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00528049 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052804c lea ecx, [ecx + edi*2] */ ecx = (u32)((u32)(ecx + edi * 2u));
  /* 0052804f mov edi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edi = (u32)(M32(m_)); }
  /* 00528052 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00528053 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528055 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 00528058 jl 0x528016 */ if (LT_) goto L_00528016;
L_0052805a:;
  /* 0052805a mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
L_0052805d:;
  /* 0052805d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052805e call 0x5aaf30 */ esp -= 4; M32(esp) = 0x528063u; SAVEALL; F_005aaf30(c); ABI_CHECK(0x5aaf30u, 0x52805eu); RETCHK(0x528063u, 0x52805eu); LOADALL;
  /* 00528063 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00528066:;
  /* 00528066 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00528067:;
  /* 00528067 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00528068 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052806a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052806b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00528070(CPU *c) {
  NATIVE_HOOK(0x528070u) REGS; LOADALL;
L_00528070:;
  /* 00528070 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00528071 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00528073 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00528076 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528077 mov esi, eax */ { esi = (u32)(eax); }
  /* 00528079 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052807c mov ecx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (u32)(M32(m_)); }
  /* 0052807f xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00528081 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528083 je 0x528510 */ if (ZF_) goto L_00528510;
  /* 00528089 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052808c mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0052808f cmp dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528092 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00528093 jle 0x5280ae */ if ((ZF_|LT_)) goto L_005280ae;
  /* 00528095 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00528098 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052809b mov edi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edi = (u32)(M32(m_)); }
  /* 0052809e mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 005280a1 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005280a3 mov dword ptr [ebp - 0x30], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(edx); }
  /* 005280a6 mov dword ptr [ebp - 0x28], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edi); }
  /* 005280a9 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 005280ac jmp 0x5280c8 */ goto L_005280c8;
L_005280ae:;
  /* 005280ae mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005280b1 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005280b4 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005280b7 mov dword ptr [ebp - 0x30], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ecx); }
  /* 005280ba add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005280bc mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 005280bf mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005280c2 mov dword ptr [ebp - 0x20], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edx); }
  /* 005280c5 mov dword ptr [ebp - 0x28], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ecx); }
L_005280c8:;
  /* 005280c8 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005280cb cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005280cd mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 005280d0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005280d1 jle 0x5280df */ if ((ZF_|LT_)) goto L_005280df;
  /* 005280d3 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005280d5 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 005280d8 mov dword ptr [ebp - 0x2c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edx); }
  /* 005280db add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005280dd jmp 0x5280ec */ goto L_005280ec;
L_005280df:;
  /* 005280df mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005280e2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005280e4 mov dword ptr [ebp - 0x2c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ecx); }
  /* 005280e7 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005280e9 mov dword ptr [ebp - 0x24], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ecx); }
L_005280ec:;
  /* 005280ec mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005280ef xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005280f1 mov ch, byte ptr [edi + 0x23] */ { const u32 m_ = (u32)(edi + 0x23u); ecx = (ecx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 005280f4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005280f6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005280f7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005280f8 mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 005280fb mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 005280fe mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 00528101 call 0x5ab2d0 */ esp -= 4; M32(esp) = 0x528106u; SAVEALL; F_005ab2d0(c); ABI_CHECK(0x5ab2d0u, 0x528101u); RETCHK(0x528106u, 0x528101u); LOADALL;
  /* 00528106 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00528109 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052810b mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0052810e je 0x52850e */ if (ZF_) goto L_0052850e;
  /* 00528114 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00528117 cmp eax, 0x300 */ { u32 a_ = eax, b_ = 0x300u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052811c je 0x528283 */ if (ZF_) goto L_00528283;
  /* 00528122 cmp eax, 0x200 */ { u32 a_ = eax, b_ = 0x200u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528127 je 0x528283 */ if (ZF_) goto L_00528283;
  /* 0052812d cmp eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528132 je 0x528283 */ if (ZF_) goto L_00528283;
  /* 00528138 cmp eax, 0xa00 */ { u32 a_ = eax, b_ = 0xa00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052813d je 0x528283 */ if (ZF_) goto L_00528283;
  /* 00528143 cmp eax, 0x500 */ { u32 a_ = eax, b_ = 0x500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528148 jne 0x528505 */ if (!ZF_) goto L_00528505;
  /* 0052814e movzx ecx, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (u32)(M8(m_)); }
  /* 00528152 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00528154 mov ah, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 00528157 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052815a mov edx, dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); edx = (u32)(M32(m_)); }
  /* 0052815d mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052815f shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00528162 or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00528164 movzx ecx, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); ecx = (u32)(M8(m_)); }
  /* 00528168 shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052816b or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052816d mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00528170 imul ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00528174 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 00528177 shl ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052817a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052817c mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0052817f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00528181 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00528184 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00528186 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00528188 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 0052818b and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052818e rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 00528190 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00528193 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 00528196 mov edi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edi = (u32)(M32(m_)); }
  /* 00528199 imul eax, ebx */ { s64 p_ = (s64)(s32)eax * (s64)(s32)ebx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052819c add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052819e lea eax, [esi + eax*4] */ eax = (u32)((u32)(esi + eax * 4u));
  /* 005281a1 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 005281a4 cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005281a6 jge 0x5281ee */ if (!LT_) goto L_005281ee;
  /* 005281a8 sub esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005281aa mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
L_005281ad:;
  /* 005281ad mov esi, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esi = (u32)(M32(m_)); }
  /* 005281b0 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005281b2 mov ebx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ebx = (u32)(M32(m_)); }
  /* 005281b5 jge 0x5281d0 */ if (!LT_) goto L_005281d0;
  /* 005281b7 sub esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005281b9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005281c0:;
  /* 005281c0 cmp dword ptr [edx], 0 */ { const u32 m_ = (u32)(edx); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005281c3 je 0x5281c7 */ if (ZF_) goto L_005281c7;
  /* 005281c5 mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
L_005281c7:;
  /* 005281c7 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005281ca add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005281cd dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005281ce jne 0x5281c0 */ if (!ZF_) goto L_005281c0;
L_005281d0:;
  /* 005281d0 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 005281d3 mov esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); esi = (u32)(M32(m_)); }
  /* 005281d6 sub esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005281d9 mov ebx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ebx = (u32)(M32(m_)); }
  /* 005281dc lea edx, [edx + esi*4] */ edx = (u32)((u32)(edx + esi * 4u));
  /* 005281df mov esi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); esi = (u32)(M32(m_)); }
  /* 005281e2 sub esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005281e4 add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005281e6 lea eax, [eax + esi*4] */ eax = (u32)((u32)(eax + esi * 4u));
  /* 005281e9 dec dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005281ec jne 0x5281ad */ if (!ZF_) goto L_005281ad;
L_005281ee:;
  /* 005281ee mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005281f1 movzx edx, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (u32)(M8(m_)); }
  /* 005281f5 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005281f8 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005281fa mov bh, byte ptr [eax + 3] */ { const u32 m_ = (u32)(eax + 0x3u); ebx = (ebx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 005281fd mov edi, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); edi = (u32)(M32(m_)); }
  /* 00528200 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 00528203 mov bl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00528205 movzx eax, byte ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); eax = (u32)(M8(m_)); }
  /* 00528209 shl ebx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0052820c or ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0052820e mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00528211 shl ebx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00528214 or ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00528216 mov eax, dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); eax = (u32)(M32(m_)); }
  /* 00528219 mov edx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edx = (u32)(M32(m_)); }
  /* 0052821c imul ecx, edx */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)edx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052821f add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00528221 lea ecx, [esi + ecx*4] */ ecx = (u32)((u32)(esi + ecx * 4u));
  /* 00528224 mov esi, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); esi = (u32)(M32(m_)); }
  /* 00528227 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528229 mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 0052822c jge 0x528502 */ if (!LT_) goto L_00528502;
  /* 00528232 sub esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00528234 mov dword ptr [ebp + 0x14], esi */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(esi); }
  /* 00528237 jmp 0x528240 */ goto L_00528240;
L_00528239:;
  /* 00528239 mov ebx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ebx = (u32)(M32(m_)); }
  /* 0052823c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00528240:;
  /* 00528240 mov esi, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); esi = (u32)(M32(m_)); }
  /* 00528243 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528245 jge 0x528260 */ if (!LT_) goto L_00528260;
  /* 00528247 mov edx, esi */ { edx = (u32)(esi); }
  /* 00528249 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052824b jmp 0x528250 */ goto L_00528250;
L_00528250:;
  /* 00528250 cmp dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528253 je 0x528257 */ if (ZF_) goto L_00528257;
  /* 00528255 mov dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ebx); }
L_00528257:;
  /* 00528257 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052825a add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052825d dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052825e jne 0x528250 */ if (!ZF_) goto L_00528250;
L_00528260:;
  /* 00528260 mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 00528263 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 00528266 sub edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00528269 lea eax, [eax + edx*4] */ eax = (u32)((u32)(eax + edx * 4u));
  /* 0052826c mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0052826f mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 00528272 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00528274 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00528276 lea ecx, [ecx + edx*4] */ ecx = (u32)((u32)(ecx + edx * 4u));
  /* 00528279 dec dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052827c jne 0x528239 */ if (!ZF_) goto L_00528239;
  /* 0052827e jmp 0x528502 */ goto L_00528502;
L_00528283:;
  /* 00528283 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00528285 cmp eax, 0x300 */ { u32 a_ = eax, b_ = 0x300u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052828a jne 0x5282bf */ if (!ZF_) goto L_005282bf;
  /* 0052828c mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052828e movzx dx, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); edx = (edx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 00528293 and al, 0xf0 */ { u32 a_ = (eax & 0xffu), b_ = 0xf0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00528295 movzx cx, al */ { ecx = (ecx & 0xffff0000u) | ((u32)((eax & 0xffu)) & 0xffffu); }
  /* 00528299 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052829c and al, 0xf0 */ { u32 a_ = (eax & 0xffu), b_ = 0xf0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0052829e and edx, 0xfff0 */ { u32 a_ = edx, b_ = 0xfff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005282a4 shl edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005282a7 or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005282a9 mov cl, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005282ac shr cl, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = (ecx & 0xffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 7) & 1u; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 005282af or al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005282b1 movzx ax, al */ { eax = (eax & 0xffff0000u) | ((u32)((eax & 0xffu)) & 0xffffu); }
  /* 005282b5 shl edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005282b8 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005282ba jmp 0x52835c */ goto L_0052835c;
L_005282bf:;
  /* 005282bf cmp eax, 0x200 */ { u32 a_ = eax, b_ = 0x200u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005282c4 jne 0x5282f0 */ if (!ZF_) goto L_005282f0;
  /* 005282c6 movzx dx, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 005282ca mov cl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005282cd and cl, 0xfc */ { u32 a_ = (ecx & 0xffu), b_ = 0xfcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005282d0 movzx ax, cl */ { eax = (eax & 0xffff0000u) | ((u32)((ecx & 0xffu)) & 0xffffu); }
  /* 005282d4 mov cl, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005282d7 and edx, 0xfff8 */ { u32 a_ = edx, b_ = 0xfff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005282dd shl edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005282e0 shr cl, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = (ecx & 0xffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 7) & 1u; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 005282e3 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005282e5 movzx ax, cl */ { eax = (eax & 0xffff0000u) | ((u32)((ecx & 0xffu)) & 0xffffu); }
  /* 005282e9 shl edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005282ec or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005282ee jmp 0x52835c */ goto L_0052835c;
L_005282f0:;
  /* 005282f0 cmp eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005282f5 jne 0x52832f */ if (!ZF_) goto L_0052832f;
  /* 005282f7 movzx dx, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); edx = (edx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 005282fc mov cl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005282fe and cl, 0xf8 */ { u32 a_ = (ecx & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00528301 movzx ax, cl */ { eax = (eax & 0xffff0000u) | ((u32)((ecx & 0xffu)) & 0xffffu); }
  /* 00528305 mov cl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00528308 and edx, 0xff80 */ { u32 a_ = edx, b_ = 0xff80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0052830e shl edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00528310 and cl, 0xf8 */ { u32 a_ = (ecx & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00528313 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00528315 movzx ax, cl */ { eax = (eax & 0xffff0000u) | ((u32)((ecx & 0xffu)) & 0xffffu); }
  /* 00528319 mov cl, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052831c shl edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052831f shr cl, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = (ecx & 0xffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 7) & 1u; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 00528322 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00528324 movzx ax, cl */ { eax = (eax & 0xffff0000u) | ((u32)((ecx & 0xffu)) & 0xffffu); }
  /* 00528328 shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052832b or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0052832d jmp 0x52835c */ goto L_0052835c;
L_0052832f:;
  /* 0052832f cmp eax, 0xa00 */ { u32 a_ = eax, b_ = 0xa00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528334 jne 0x52835c */ if (!ZF_) goto L_0052835c;
  /* 00528336 mov cl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00528338 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052833b and cl, 0xf8 */ { u32 a_ = (ecx & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0052833e and al, 0xf8 */ { u32 a_ = (eax & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00528340 movzx dx, cl */ { edx = (edx & 0xffff0000u) | ((u32)((ecx & 0xffu)) & 0xffffu); }
  /* 00528344 movzx cx, al */ { ecx = (ecx & 0xffff0000u) | ((u32)((eax & 0xffu)) & 0xffffu); }
  /* 00528348 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052834b shr al, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = (eax & 0xffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 7) & 1u; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 0052834e shl edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00528351 or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00528353 movzx cx, al */ { ecx = (ecx & 0xffff0000u) | ((u32)((eax & 0xffu)) & 0xffffu); }
  /* 00528357 shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052835a or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_0052835c:;
  /* 0052835c mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052835f imul ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00528363 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00528366 mov esi, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); esi = (u32)(M32(m_)); }
  /* 00528369 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 0052836c shl ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052836e mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00528370 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00528373 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00528375 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00528377 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00528379 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 0052837c and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052837f rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 00528381 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00528384 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 00528387 mov edi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edi = (u32)(M32(m_)); }
  /* 0052838a mov ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ecx = (u32)(M32(m_)); }
  /* 0052838d imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00528390 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00528392 lea eax, [ebx + eax*2] */ eax = (u32)((u32)(ebx + eax * 2u));
  /* 00528395 mov ebx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ebx = (u32)(M32(m_)); }
  /* 00528398 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052839a jge 0x5283e2 */ if (!LT_) goto L_005283e2;
  /* 0052839c sub ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0052839e mov edi, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edi = (u32)(M32(m_)); }
  /* 005283a1 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
L_005283a4:;
  /* 005283a4 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005283a6 jge 0x5283c1 */ if (!LT_) goto L_005283c1;
  /* 005283a8 sub edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005283aa lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_005283b0:;
  /* 005283b0 cmp dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005283b3 je 0x5283b8 */ if (ZF_) goto L_005283b8;
  /* 005283b5 mov word ptr [eax], dx */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)((edx & 0xffffu)); }
L_005283b8:;
  /* 005283b8 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005283bb add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005283be dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005283bf jne 0x5283b0 */ if (!ZF_) goto L_005283b0;
L_005283c1:;
  /* 005283c1 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 005283c4 mov edi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edi = (u32)(M32(m_)); }
  /* 005283c7 sub edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005283ca lea esi, [esi + edi*4] */ esi = (u32)((u32)(esi + edi * 4u));
  /* 005283cd mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005283d0 mov ebx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ebx = (u32)(M32(m_)); }
  /* 005283d3 mov edi, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edi = (u32)(M32(m_)); }
  /* 005283d6 sub ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005283d8 add ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005283da lea eax, [eax + ebx*2] */ eax = (u32)((u32)(eax + ebx * 2u));
  /* 005283dd dec dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005283e0 jne 0x5283a4 */ if (!ZF_) goto L_005283a4;
L_005283e2:;
  /* 005283e2 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 005283e5 cmp eax, 0x300 */ { u32 a_ = eax, b_ = 0x300u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005283ea jne 0x52841f */ if (!ZF_) goto L_0052841f;
  /* 005283ec mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 005283ef mov cl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005283f1 movzx dx, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); edx = (edx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 005283f6 and cl, 0xf0 */ { u32 a_ = (ecx & 0xffu), b_ = 0xf0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005283f9 movzx ax, cl */ { eax = (eax & 0xffff0000u) | ((u32)((ecx & 0xffu)) & 0xffffu); }
  /* 005283fd mov cl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00528400 and cl, 0xf0 */ { u32 a_ = (ecx & 0xffu), b_ = 0xf0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00528403 and edx, 0xfff0 */ { u32 a_ = edx, b_ = 0xfff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00528409 shl edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052840c or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0052840e mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00528411 shr al, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = (eax & 0xffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 7) & 1u; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 00528414 shl edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00528417 or cl, al */ { u32 a_ = (ecx & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00528419 movzx cx, cl */ { ecx = (ecx & 0xffff0000u) | ((u32)((ecx & 0xffu)) & 0xffffu); }
  /* 0052841d jmp 0x52849a */ goto L_0052849a;
L_0052841f:;
  /* 0052841f cmp eax, 0x200 */ { u32 a_ = eax, b_ = 0x200u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528424 jne 0x528447 */ if (!ZF_) goto L_00528447;
  /* 00528426 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00528429 mov cl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052842c movzx dx, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 00528430 and cl, 0xfc */ { u32 a_ = (ecx & 0xffu), b_ = 0xfcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00528433 movzx cx, cl */ { ecx = (ecx & 0xffff0000u) | ((u32)((ecx & 0xffu)) & 0xffffu); }
  /* 00528437 and edx, 0xfff8 */ { u32 a_ = edx, b_ = 0xfff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0052843d shl edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00528440 or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00528442 shl edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00528445 jmp 0x528490 */ goto L_00528490;
L_00528447:;
  /* 00528447 cmp eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052844c jne 0x52846b */ if (!ZF_) goto L_0052846b;
  /* 0052844e mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00528451 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00528453 movzx dx, byte ptr [eax + 3] */ { const u32 m_ = (u32)(eax + 0x3u); edx = (edx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 00528458 and cl, 0xf8 */ { u32 a_ = (ecx & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0052845b movzx cx, cl */ { ecx = (ecx & 0xffff0000u) | ((u32)((ecx & 0xffu)) & 0xffffu); }
  /* 0052845f and edx, 0xff80 */ { u32 a_ = edx, b_ = 0xff80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00528465 shl edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00528467 or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00528469 jmp 0x52847e */ goto L_0052847e;
L_0052846b:;
  /* 0052846b cmp eax, 0xa00 */ { u32 a_ = eax, b_ = 0xa00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528470 jne 0x52849c */ if (!ZF_) goto L_0052849c;
  /* 00528472 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00528475 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00528477 and dl, 0xf8 */ { u32 a_ = (edx & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0052847a movzx dx, dl */ { edx = (edx & 0xffff0000u) | ((u32)((edx & 0xffu)) & 0xffffu); }
L_0052847e:;
  /* 0052847e mov cl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00528481 and cl, 0xf8 */ { u32 a_ = (ecx & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00528484 movzx cx, cl */ { ecx = (ecx & 0xffff0000u) | ((u32)((ecx & 0xffu)) & 0xffffu); }
  /* 00528488 shl edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052848b or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0052848d shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
L_00528490:;
  /* 00528490 mov al, byte ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00528493 shr al, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = (eax & 0xffu); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 7) & 1u; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 00528496 movzx cx, al */ { ecx = (ecx & 0xffff0000u) | ((u32)((eax & 0xffu)) & 0xffffu); }
L_0052849a:;
  /* 0052849a or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_0052849c:;
  /* 0052849c mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052849f mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005284a2 mov esi, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); esi = (u32)(M32(m_)); }
  /* 005284a5 mov ebx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ebx = (u32)(M32(m_)); }
  /* 005284a8 imul ecx, esi */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)esi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005284ab mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 005284ae mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005284b1 mov eax, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); eax = (u32)(M32(m_)); }
  /* 005284b4 add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005284b6 lea ecx, [edi + ecx*2] */ ecx = (u32)((u32)(edi + ecx * 2u));
  /* 005284b9 mov edi, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edi = (u32)(M32(m_)); }
  /* 005284bc cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005284be jge 0x528502 */ if (!LT_) goto L_00528502;
  /* 005284c0 sub edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005284c2 mov esi, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); esi = (u32)(M32(m_)); }
  /* 005284c5 mov dword ptr [ebp + 0x14], edi */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(edi); }
L_005284c8:;
  /* 005284c8 cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005284ca jge 0x5284e1 */ if (!LT_) goto L_005284e1;
  /* 005284cc sub esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005284ce mov edi, edi */ { edi = (u32)(edi); }
L_005284d0:;
  /* 005284d0 cmp dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005284d3 je 0x5284d8 */ if (ZF_) goto L_005284d8;
  /* 005284d5 mov word ptr [ecx], dx */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((edx & 0xffffu)); }
L_005284d8:;
  /* 005284d8 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005284db add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005284de dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005284df jne 0x5284d0 */ if (!ZF_) goto L_005284d0;
L_005284e1:;
  /* 005284e1 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 005284e4 mov esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); esi = (u32)(M32(m_)); }
  /* 005284e7 sub esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005284ea lea eax, [eax + esi*4] */ eax = (u32)((u32)(eax + esi * 4u));
  /* 005284ed mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005284f0 mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 005284f3 mov esi, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); esi = (u32)(M32(m_)); }
  /* 005284f6 sub edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005284f8 add edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005284fa lea ecx, [ecx + edi*2] */ ecx = (u32)((u32)(ecx + edi * 2u));
  /* 005284fd dec dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00528500 jne 0x5284c8 */ if (!ZF_) goto L_005284c8;
L_00528502:;
  /* 00528502 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
L_00528505:;
  /* 00528505 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00528506 call 0x5aaf30 */ esp -= 4; M32(esp) = 0x52850bu; SAVEALL; F_005aaf30(c); ABI_CHECK(0x5aaf30u, 0x528506u); RETCHK(0x52850bu, 0x528506u); LOADALL;
  /* 0052850b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052850e:;
  /* 0052850e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052850f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00528510:;
  /* 00528510 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00528511 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00528513 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00528514 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00528520(CPU *c) {
  NATIVE_HOOK(0x528520u) REGS; LOADALL;
L_00528520:;
  /* 00528520 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00528521 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00528523 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00528526 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528527 mov esi, eax */ { esi = (u32)(eax); }
  /* 00528529 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0052852b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052852d cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052852f jne 0x52853a */ if (!ZF_) goto L_0052853a;
  /* 00528531 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00528533 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00528534 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00528536 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00528537 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_0052853a:;
  /* 0052853a mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0052853d mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00528540 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00528543 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00528546 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00528547 mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 0052854a lea ebx, [eax + 1] */ ebx = (u32)((u32)(eax + 0x1u));
  /* 0052854d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00528550:;
  /* 00528550 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00528552 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00528553 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00528555 jne 0x528550 */ if (!ZF_) goto L_00528550;
  /* 00528557 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0052855a or edx, 0x400 */ { u32 a_ = edx, b_ = 0x400u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00528560 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528561 sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00528563 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00528566 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528567 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528568 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0052856b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052856e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052856f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528570 call dword ptr [0x62e548] */ { const u32 m_ = (u32)(0x62e548u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x528576u; SAVEALL; call_ind(c, t_); RETCHK(0x528576u, 0x528570u); LOADALL; }
  /* 00528576 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 00528579 cmp dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052857c je 0x528668 */ if (ZF_) goto L_00528668;
  /* 00528582 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00528585 cmp dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528588 je 0x528668 */ if (ZF_) goto L_00528668;
  /* 0052858e mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00528591 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00528594 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00528596 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528598 jl 0x5285a2 */ if (LT_) goto L_005285a2;
  /* 0052859a cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052859c jle 0x5285bd */ if ((ZF_|LT_)) goto L_005285bd;
  /* 0052859e cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005285a0 jg 0x5285a4 */ if (!(ZF_|LT_)) goto L_005285a4;
L_005285a2:;
  /* 005285a2 mov ebx, eax */ { ebx = (u32)(eax); }
L_005285a4:;
  /* 005285a4 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005285a6 jg 0x5285aa */ if (!(ZF_|LT_)) goto L_005285aa;
  /* 005285a8 mov ecx, edx */ { ecx = (u32)(edx); }
L_005285aa:;
  /* 005285aa neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005285ac mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 005285af mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005285b2 call 0x527cd0 */ esp -= 4; M32(esp) = 0x5285b7u; SAVEALL; F_00527cd0(c); ABI_CHECK(0x527cd0u, 0x5285b2u); RETCHK(0x5285b7u, 0x5285b2u); LOADALL;
  /* 005285b7 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 005285ba mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
L_005285bd:;
  /* 005285bd mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005285c0 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005285c2 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005285c5 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005285c8 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005285cb add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005285cd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005285cf mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005285d2 call dword ptr [0x62e08c] */ { const u32 m_ = (u32)(0x62e08cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5285d8u; SAVEALL; call_ind(c, t_); RETCHK(0x5285d8u, 0x5285d2u); LOADALL; }
  /* 005285d8 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005285da mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005285dc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005285dd lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 005285e0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005285e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005285e2 call dword ptr [0x62e550] */ { const u32 m_ = (u32)(0x62e550u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5285e8u; SAVEALL; call_ind(c, t_); RETCHK(0x5285e8u, 0x5285e2u); LOADALL; }
  /* 005285e8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005285e9 call dword ptr [0x62e068] */ { const u32 m_ = (u32)(0x62e068u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5285efu; SAVEALL; call_ind(c, t_); RETCHK(0x5285efu, 0x5285e9u); LOADALL; }
  /* 005285ef mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005285f1 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005285f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005285f4 call dword ptr [0x62e058] */ { const u32 m_ = (u32)(0x62e058u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5285fau; SAVEALL; call_ind(c, t_); RETCHK(0x5285fau, 0x5285f4u); LOADALL; }
  /* 005285fa mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005285fd mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00528600 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528601 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00528604 lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 00528607 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528608 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0052860a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052860b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052860c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052860d call dword ptr [0x62e548] */ { const u32 m_ = (u32)(0x62e548u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x528613u; SAVEALL; call_ind(c, t_); RETCHK(0x528613u, 0x52860du); LOADALL; }
  /* 00528613 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00528616 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 00528619 cdq */ edx = (u32)((s32)eax >> 31);
  /* 0052861a mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0052861c mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052861f xor ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00528621 sub ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00528623 add ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00528625 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00528626 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00528628 xor ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052862a sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052862c add ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052862f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00528631 call 0x527d70 */ esp -= 4; M32(esp) = 0x528636u; SAVEALL; F_00527d70(c); ABI_CHECK(0x527d70u, 0x528631u); RETCHK(0x528636u, 0x528631u); LOADALL;
  /* 00528636 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00528638 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052863a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052863b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052863c call 0x5ab230 */ esp -= 4; M32(esp) = 0x528641u; SAVEALL; F_005ab230(c); ABI_CHECK(0x5ab230u, 0x52863cu); RETCHK(0x528641u, 0x52863cu); LOADALL;
  /* 00528641 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00528644 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00528647 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00528649 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0052864b je 0x52865e */ if (ZF_) goto L_0052865e;
  /* 0052864d mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00528650 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528651 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528652 lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 00528655 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528656 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528657 mov eax, edi */ { eax = (u32)(edi); }
  /* 00528659 call 0x528070 */ esp -= 4; M32(esp) = 0x52865eu; SAVEALL; F_00528070(c); ABI_CHECK(0x528070u, 0x528659u); RETCHK(0x52865eu, 0x528659u); LOADALL;
L_0052865e:;
  /* 0052865e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052865f mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00528661 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00528662 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00528664 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00528665 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_00528668:;
  /* 00528668 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00528669 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0052866b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052866c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052866e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052866f ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00528680(CPU *c) {
  NATIVE_HOOK(0x528680u) REGS; LOADALL;
L_00528680:;
  /* 00528680 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00528681 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00528683 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00528686 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00528687 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528688 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052868a mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0052868c mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0052868e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00528690 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528692 jne 0x52869e */ if (!ZF_) goto L_0052869e;
  /* 00528694 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00528695 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00528697 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00528698 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052869a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052869b ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_0052869e:;
  /* 0052869e mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005286a1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005286a2 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005286a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005286a6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005286a9 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 005286ac mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 005286af mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005286b2 call 0x5feb00 */ esp -= 4; M32(esp) = 0x5286b7u; SAVEALL; F_005feb00(c); ABI_CHECK(0x5feb00u, 0x5286b2u); RETCHK(0x5286b7u, 0x5286b2u); LOADALL;
  /* 005286b7 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 005286ba add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005286bd or edx, 0x400 */ { u32 a_ = edx, b_ = 0x400u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005286c3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005286c4 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005286c6 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 005286c9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005286ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005286cb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005286cc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005286cd mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 005286d0 call dword ptr [0x62e54c] */ { const u32 m_ = (u32)(0x62e54cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5286d6u; SAVEALL; call_ind(c, t_); RETCHK(0x5286d6u, 0x5286d0u); LOADALL; }
  /* 005286d6 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 005286d9 cmp dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005286dc je 0x52879d */ if (ZF_) goto L_0052879d;
  /* 005286e2 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 005286e5 cmp dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005286e8 je 0x52879d */ if (ZF_) goto L_0052879d;
  /* 005286ee mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005286f1 mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 005286f4 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005286f6 cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005286f8 jl 0x528702 */ if (LT_) goto L_00528702;
  /* 005286fa cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005286fc jle 0x52871d */ if ((ZF_|LT_)) goto L_0052871d;
  /* 005286fe cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528700 jg 0x528704 */ if (!(ZF_|LT_)) goto L_00528704;
L_00528702:;
  /* 00528702 mov edi, ecx */ { edi = (u32)(ecx); }
L_00528704:;
  /* 00528704 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528706 jg 0x52870a */ if (!(ZF_|LT_)) goto L_0052870a;
  /* 00528708 mov eax, edx */ { eax = (u32)(edx); }
L_0052870a:;
  /* 0052870a neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0052870c mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 0052870f mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 00528712 call 0x527cd0 */ esp -= 4; M32(esp) = 0x528717u; SAVEALL; F_00527cd0(c); ABI_CHECK(0x527cd0u, 0x528712u); RETCHK(0x528717u, 0x528712u); LOADALL;
  /* 00528717 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0052871a mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
L_0052871d:;
  /* 0052871d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052871f mov dword ptr [ebx + 4], ecx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00528722 mov dword ptr [ebx + 8], edx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(edx); }
  /* 00528725 call dword ptr [0x62e08c] */ { const u32 m_ = (u32)(0x62e08cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52872bu; SAVEALL; call_ind(c, t_); RETCHK(0x52872bu, 0x528725u); LOADALL; }
  /* 0052872b mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0052872d mov edi, eax */ { edi = (u32)(eax); }
  /* 0052872f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00528730 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00528733 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528734 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528735 call dword ptr [0x62e550] */ { const u32 m_ = (u32)(0x62e550u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52873bu; SAVEALL; call_ind(c, t_); RETCHK(0x52873bu, 0x528735u); LOADALL; }
  /* 0052873b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052873c call dword ptr [0x62e068] */ { const u32 m_ = (u32)(0x62e068u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x528742u; SAVEALL; call_ind(c, t_); RETCHK(0x528742u, 0x52873cu); LOADALL; }
  /* 00528742 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00528744 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00528746 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528747 call dword ptr [0x62e058] */ { const u32 m_ = (u32)(0x62e058u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52874du; SAVEALL; call_ind(c, t_); RETCHK(0x52874du, 0x528747u); LOADALL; }
  /* 0052874d mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00528750 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00528753 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528754 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00528757 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0052875a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052875b mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0052875d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052875e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052875f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528760 call dword ptr [0x62e54c] */ { const u32 m_ = (u32)(0x62e54cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x528766u; SAVEALL; call_ind(c, t_); RETCHK(0x528766u, 0x528760u); LOADALL; }
  /* 00528766 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00528769 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 0052876c call 0x527d70 */ esp -= 4; M32(esp) = 0x528771u; SAVEALL; F_00527d70(c); ABI_CHECK(0x527d70u, 0x52876cu); RETCHK(0x528771u, 0x52876cu); LOADALL;
  /* 00528771 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00528773 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00528775 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528776 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528777 call 0x5ab230 */ esp -= 4; M32(esp) = 0x52877cu; SAVEALL; F_005ab230(c); ABI_CHECK(0x5ab230u, 0x528777u); RETCHK(0x52877cu, 0x528777u); LOADALL;
  /* 0052877c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052877f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00528781 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 00528783 je 0x528792 */ if (ZF_) goto L_00528792;
  /* 00528785 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528786 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00528789 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052878a lea ebx, [ebp - 0x10] */ ebx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0052878d call 0x527db0 */ esp -= 4; M32(esp) = 0x528792u; SAVEALL; F_00527db0(c); ABI_CHECK(0x527db0u, 0x52878du); RETCHK(0x528792u, 0x52878du); LOADALL;
L_00528792:;
  /* 00528792 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00528793 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00528794 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00528796 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00528797 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00528799 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052879a ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_0052879d:;
  /* 0052879d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052879e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052879f xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005287a1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005287a2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005287a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005287a5 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_005287b0(CPU *c) {
  NATIVE_HOOK(0x5287b0u) REGS; LOADALL;
L_005287b0:;
  /* 005287b0 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005287b2 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005287b4 shr eax, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005287b7 mov dh, al */ { edx = (edx & 0xffff00ffu) | (((u32)((eax & 0xffu)) & 0xffu) << 8); }
  /* 005287b9 movzx eax, ch */ { eax = (u32)(((ecx >> 8) & 0xffu)); }
  /* 005287bc mov dl, cl */ { edx = (edx & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 005287be shr ecx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005287c1 movzx ecx, cl */ { ecx = (u32)((ecx & 0xffu)); }
  /* 005287c4 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005287c7 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005287c9 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005287cc or edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005287ce mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 005287d0 mov eax, esi */ { eax = (u32)(esi); }
  /* 005287d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005287e0(CPU *c) {
  NATIVE_HOOK(0x5287e0u) REGS; LOADALL;
L_005287e0:;
  /* 005287e0 mov word ptr [edi], 0x30 */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)(0x30u); }
  /* 005287e5 mov ecx, dword ptr [0x6501e8] */ { const u32 m_ = (u32)(0x6501e8u); ecx = (u32)(M32(m_)); }
  /* 005287eb lea eax, [edi + 0x10] */ eax = (u32)((u32)(edi + 0x10u));
  /* 005287ee mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005287f0 mov dl, byte ptr [0x6501ec] */ { const u32 m_ = (u32)(0x6501ecu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005287f6 mov byte ptr [eax + 4], dl */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 005287f9 mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 005287fe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005287ff lea esi, [edi + 0x54] */ esi = (u32)((u32)(edi + 0x54u));
  /* 00528802 mov dword ptr [edi + 0x30], 0x18 */ { const u32 m_ = (u32)(edi + 0x30u); M32(m_) = (u32)(0x18u); }
  /* 00528809 mov dword ptr [edi + 0x34], 1 */ { const u32 m_ = (u32)(edi + 0x34u); M32(m_) = (u32)(0x1u); }
  /* 00528810 mov dword ptr [edi + 0x38], eax */ { const u32 m_ = (u32)(edi + 0x38u); M32(m_) = (u32)(eax); }
  /* 00528813 mov dword ptr [edi + 0x3c], eax */ { const u32 m_ = (u32)(edi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 00528816 mov dword ptr [edi + 0x40], 0 */ { const u32 m_ = (u32)(edi + 0x40u); M32(m_) = (u32)(0x0u); }
  /* 0052881d mov dword ptr [edi + 0x44], 0 */ { const u32 m_ = (u32)(edi + 0x44u); M32(m_) = (u32)(0x0u); }
  /* 00528824 mov dword ptr [edi + 0x48], 0xffffffff */ { const u32 m_ = (u32)(edi + 0x48u); M32(m_) = (u32)(0xffffffffu); }
  /* 0052882b mov dword ptr [edi + 0x4c], 0xaf000000 */ { const u32 m_ = (u32)(edi + 0x4cu); M32(m_) = (u32)(0xaf000000u); }
  /* 00528832 mov dword ptr [edi + 0x50], 0x3f800000 */ { const u32 m_ = (u32)(edi + 0x50u); M32(m_) = (u32)(0x3f800000u); }
  /* 00528839 call 0x527bb0 */ esp -= 4; M32(esp) = 0x52883eu; SAVEALL; F_00527bb0(c); ABI_CHECK(0x527bb0u, 0x528839u); RETCHK(0x52883eu, 0x528839u); LOADALL;
  /* 0052883e mov dword ptr [edi + 0x58], 0 */ { const u32 m_ = (u32)(edi + 0x58u); M32(m_) = (u32)(0x0u); }
  /* 00528845 mov eax, edi */ { eax = (u32)(edi); }
  /* 00528847 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00528848 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00528850(CPU *c) {
  NATIVE_HOOK(0x528850u) REGS; LOADALL;
L_00528850:;
  /* 00528850 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00528851 mov edi, esi */ { edi = (u32)(esi); }
  /* 00528853 mov eax, edx */ { eax = (u32)(edx); }
  /* 00528855 sub edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
L_00528857:;
  /* 00528857 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00528859 mov byte ptr [edi + eax], cl */ { const u32 m_ = (u32)(edi + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0052885c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052885d test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052885f jne 0x528857 */ if (!ZF_) goto L_00528857;
  /* 00528861 lea eax, [edx + 0x10] */ eax = (u32)((u32)(edx + 0x10u));
  /* 00528864 lea edi, [esi + 0x10] */ edi = (u32)((u32)(esi + 0x10u));
  /* 00528867 sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00528869 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00528870:;
  /* 00528870 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00528872 mov byte ptr [edi + eax], cl */ { const u32 m_ = (u32)(edi + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00528875 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00528876 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00528878 jne 0x528870 */ if (!ZF_) goto L_00528870;
  /* 0052887a mov eax, dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); eax = (u32)(M32(m_)); }
  /* 0052887d mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 00528880 mov ecx, dword ptr [edx + 0x38] */ { const u32 m_ = (u32)(edx + 0x38u); ecx = (u32)(M32(m_)); }
  /* 00528883 mov dword ptr [esi + 0x38], ecx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ecx); }
  /* 00528886 mov eax, dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); eax = (u32)(M32(m_)); }
  /* 00528889 mov dword ptr [esi + 0x34], eax */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(eax); }
  /* 0052888c mov ecx, dword ptr [edx + 0x3c] */ { const u32 m_ = (u32)(edx + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 0052888f mov dword ptr [esi + 0x3c], ecx */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 00528892 mov eax, dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); eax = (u32)(M32(m_)); }
  /* 00528895 mov dword ptr [esi + 0x40], eax */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(eax); }
  /* 00528898 mov ecx, dword ptr [edx + 0x44] */ { const u32 m_ = (u32)(edx + 0x44u); ecx = (u32)(M32(m_)); }
  /* 0052889b mov dword ptr [esi + 0x44], ecx */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(ecx); }
  /* 0052889e mov eax, dword ptr [edx + 0x4c] */ { const u32 m_ = (u32)(edx + 0x4cu); eax = (u32)(M32(m_)); }
  /* 005288a1 mov dword ptr [esi + 0x4c], eax */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(eax); }
  /* 005288a4 mov ecx, dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); ecx = (u32)(M32(m_)); }
  /* 005288a7 mov dword ptr [esi + 0x48], ecx */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(ecx); }
  /* 005288aa mov edx, dword ptr [edx + 0x50] */ { const u32 m_ = (u32)(edx + 0x50u); edx = (u32)(M32(m_)); }
  /* 005288ad mov dword ptr [esi + 0x50], edx */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(edx); }
  /* 005288b0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005288b1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005288e0(CPU *c) {
  NATIVE_HOOK(0x5288e0u) REGS; LOADALL;
L_005288e0:;
  /* 005288e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005288e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005288e3 mov cl, byte ptr [0x9b9414] */ { const u32 m_ = (u32)(0x9b9414u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005288e9 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005288ee test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005288f0 jne 0x528919 */ if (!ZF_) goto L_00528919;
  /* 005288f2 mov edx, dword ptr [0x9b9414] */ { const u32 m_ = (u32)(0x9b9414u); edx = (u32)(M32(m_)); }
  /* 005288f8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005288f9 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005288fb mov edi, 0x9b93b8 */ { edi = (u32)(0x9b93b8u); }
  /* 00528900 mov dword ptr [0x9b9414], edx */ { const u32 m_ = (u32)(0x9b9414u); M32(m_) = (u32)(edx); }
  /* 00528906 call 0x5287e0 */ esp -= 4; M32(esp) = 0x52890bu; SAVEALL; F_005287e0(c); ABI_CHECK(0x5287e0u, 0x528906u); RETCHK(0x52890bu, 0x528906u); LOADALL;
  /* 0052890b push 0x62c600 */ { u32 v_ = 0x62c600u; esp -= 4; M32(esp) = v_; }
  /* 00528910 call 0x5fe916 */ esp -= 4; M32(esp) = 0x528915u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x528910u); RETCHK(0x528915u, 0x528910u); LOADALL;
  /* 00528915 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00528918 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00528919:;
  /* 00528919 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052891c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052891d mov esi, 0x9b93b8 */ { esi = (u32)(0x9b93b8u); }
  /* 00528922 call 0x528850 */ esp -= 4; M32(esp) = 0x528927u; SAVEALL; F_00528850(c); ABI_CHECK(0x528850u, 0x528922u); RETCHK(0x528927u, 0x528922u); LOADALL;
  /* 00528927 mov eax, 0x9b93b8 */ { eax = (u32)(0x9b93b8u); }
  /* 0052892c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052892d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052892e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00528930(CPU *c) {
  NATIVE_HOOK(0x528930u) REGS; LOADALL;
L_00528930:;
  /* 00528930 mov edx, dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); edx = (u32)(M32(m_)); }
  /* 00528933 lea ecx, [eax + 0x10] */ ecx = (u32)((u32)(eax + 0x10u));
  /* 00528936 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528937 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00528939 mov eax, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); eax = (u32)(M32(m_)); }
  /* 0052893c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052893e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00528940 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00528942 push 0x86 */ { u32 v_ = 0x86u; esp -= 4; M32(esp) = v_; }
  /* 00528947 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00528949 neg edx */ { u32 a_ = edx; u32 r_ = (0u - a_) & 0xffffffffu; edx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0052894b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052894d sbb edx, edx */ { u32 a_ = edx, b_ = edx; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); edx = (u32)(r_); }
  /* 0052894f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00528951 and edx, 0x12c */ { u32 a_ = edx, b_ = 0x12cu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00528957 add edx, 0x190 */ { u32 a_ = edx, b_ = 0x190u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052895d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052895e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00528960 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00528962 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00528964 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528965 call dword ptr [0x62e05c] */ { const u32 m_ = (u32)(0x62e05cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52896bu; SAVEALL; call_ind(c, t_); RETCHK(0x52896bu, 0x528965u); LOADALL; }
  /* 0052896b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00528970(CPU *c) {
  NATIVE_HOOK(0x528970u) REGS; LOADALL;
L_00528970:;
  /* 00528970 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00528971 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00528973 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00528975 push 0x61db08 */ { u32 v_ = 0x61db08u; esp -= 4; M32(esp) = v_; }
  /* 0052897a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00528980 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528981 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00528988 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052898b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052898c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052898d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052898e mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00528990 mov edi, edx */ { edi = (u32)(edx); }
  /* 00528992 call 0x543680 */ esp -= 4; M32(esp) = 0x528997u; SAVEALL; F_00543680(c); ABI_CHECK(0x543680u, 0x528992u); RETCHK(0x528997u, 0x528992u); LOADALL;
  /* 00528997 call 0x543d00 */ esp -= 4; M32(esp) = 0x52899cu; SAVEALL; F_00543d00(c); ABI_CHECK(0x543d00u, 0x528997u); RETCHK(0x52899cu, 0x528997u); LOADALL;
  /* 0052899c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052899f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005289a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005289a1 lea ebx, [ebp - 0x1c] */ ebx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 005289a4 mov dword ptr [edi + 0x58], eax */ { const u32 m_ = (u32)(edi + 0x58u); M32(m_) = (u32)(eax); }
  /* 005289a7 call 0x527ac0 */ esp -= 4; M32(esp) = 0x5289acu; SAVEALL; F_00527ac0(c); ABI_CHECK(0x527ac0u, 0x5289a7u); RETCHK(0x5289acu, 0x5289a7u); LOADALL;
  /* 005289ac mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005289af mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005289b6 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005289b9 mov ebx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ebx = (u32)(M32(m_)); }
  /* 005289bc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005289bd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005289be push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005289bf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005289c0 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005289c2 call 0x528ae0 */ esp -= 4; M32(esp) = 0x5289c7u; SAVEALL; F_00528ae0(c); ABI_CHECK(0x528ae0u, 0x5289c2u); RETCHK(0x5289c7u, 0x5289c2u); LOADALL;
  /* 005289c7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005289c9 je 0x5289f1 */ if (ZF_) goto L_005289f1;
  /* 005289cb test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005289cd je 0x528a94 */ if (ZF_) goto L_00528a94;
  /* 005289d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005289d4 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x5289d9u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x5289d4u); RETCHK(0x5289d9u, 0x5289d4u); LOADALL;
  /* 005289d9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005289dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005289dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005289de mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005289e0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005289e1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005289e4 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005289eb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005289ed pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005289ee ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005289f1:;
  /* 005289f1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005289f2 lea ebx, [ebp - 0x14] */ ebx = (u32)((u32)(ebp + 0xffffffecu));
  /* 005289f5 call 0x500b40 */ esp -= 4; M32(esp) = 0x5289fau; SAVEALL; F_00500b40(c); ABI_CHECK(0x500b40u, 0x5289f5u); RETCHK(0x5289fau, 0x5289f5u); LOADALL;
  /* 005289fa mov eax, edi */ { eax = (u32)(edi); }
  /* 005289fc call 0x528930 */ esp -= 4; M32(esp) = 0x528a01u; SAVEALL; F_00528930(c); ABI_CHECK(0x528930u, 0x5289fcu); RETCHK(0x528a01u, 0x5289fcu); LOADALL;
  /* 00528a01 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00528a03 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00528a05 je 0x528aa9 */ if (ZF_) goto L_00528aa9;
  /* 00528a0b mov eax, dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); eax = (u32)(M32(m_)); }
  /* 00528a0e mov byte ptr [ebp + 8], al */ { const u32 m_ = (u32)(ebp + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00528a11 mov byte ptr [ebp + 9], ah */ { const u32 m_ = (u32)(ebp + 0x9u); M8(m_) = (u8)(((eax >> 8) & 0xffu)); }
  /* 00528a14 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00528a16 shr eax, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00528a19 mov byte ptr [ebp + 0xb], al */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00528a1c mov eax, dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); eax = (u32)(M32(m_)); }
  /* 00528a1f mov edi, dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); edi = (u32)(M32(m_)); }
  /* 00528a22 shr ecx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00528a25 mov byte ptr [ebp + 0xa], cl */ { const u32 m_ = (u32)(ebp + 0xau); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00528a28 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00528a2b mov byte ptr [ebp + 8], al */ { const u32 m_ = (u32)(ebp + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00528a2e mov byte ptr [ebp + 9], ah */ { const u32 m_ = (u32)(ebp + 0x9u); M8(m_) = (u8)(((eax >> 8) & 0xffu)); }
  /* 00528a31 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00528a33 shr eax, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00528a36 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528a37 shr ecx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00528a3a mov byte ptr [ebp + 0xb], al */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00528a3d mov byte ptr [ebp + 0xa], cl */ { const u32 m_ = (u32)(ebp + 0xau); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00528a40 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00528a43 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00528a45 lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 00528a48 mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 00528a4b mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00528a4e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528a4f shr edi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 00528a51 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528a52 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00528a54 mov dword ptr [ebp - 0x28], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edx); }
  /* 00528a57 mov dword ptr [ebp - 0x24], edi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edi); }
  /* 00528a5a mov dword ptr [ebp - 0x20], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edi); }
  /* 00528a5d call 0x527d20 */ esp -= 4; M32(esp) = 0x528a62u; SAVEALL; F_00527d20(c); ABI_CHECK(0x527d20u, 0x528a5du); RETCHK(0x528a62u, 0x528a5du); LOADALL;
  /* 00528a62 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00528a65 lea edi, [ebp - 0x28] */ edi = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00528a68 call 0x528520 */ esp -= 4; M32(esp) = 0x528a6du; SAVEALL; F_00528520(c); ABI_CHECK(0x528520u, 0x528a68u); RETCHK(0x528a6du, 0x528a68u); LOADALL;
  /* 00528a6d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00528a6e call dword ptr [0x62e068] */ { const u32 m_ = (u32)(0x62e068u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x528a74u; SAVEALL; call_ind(c, t_); RETCHK(0x528a74u, 0x528a6eu); LOADALL; }
  /* 00528a74 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00528a77 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00528a79 je 0x528a84 */ if (ZF_) goto L_00528a84;
  /* 00528a7b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528a7c call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x528a81u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x528a7cu); RETCHK(0x528a81u, 0x528a7cu); LOADALL;
  /* 00528a81 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00528a84:;
  /* 00528a84 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00528a87 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00528a89 je 0x528a94 */ if (ZF_) goto L_00528a94;
  /* 00528a8b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528a8c call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x528a91u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x528a8cu); RETCHK(0x528a91u, 0x528a8cu); LOADALL;
  /* 00528a91 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00528a94:;
  /* 00528a94 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00528a95 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00528a96 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00528a98 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00528a99 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00528a9c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00528aa3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00528aa5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00528aa6 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00528aa9:;
  /* 00528aa9 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00528aac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00528aae je 0x528ab9 */ if (ZF_) goto L_00528ab9;
  /* 00528ab0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528ab1 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x528ab6u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x528ab1u); RETCHK(0x528ab6u, 0x528ab1u); LOADALL;
  /* 00528ab6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00528ab9:;
  /* 00528ab9 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00528abc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00528abe je 0x528ac9 */ if (ZF_) goto L_00528ac9;
  /* 00528ac0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528ac1 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x528ac6u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x528ac1u); RETCHK(0x528ac6u, 0x528ac1u); LOADALL;
  /* 00528ac6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00528ac9:;
  /* 00528ac9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00528acc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00528acd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00528ace xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00528ad0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00528ad1 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00528ad8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00528ada pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00528adb ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00528ae0(CPU *c) {
  NATIVE_HOOK(0x528ae0u) REGS; LOADALL;
L_00528ae0:;
  /* 00528ae0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00528ae1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00528ae3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00528ae5 push 0x61b508 */ { u32 v_ = 0x61b508u; esp -= 4; M32(esp) = v_; }
  /* 00528aea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00528af0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528af1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00528af8 sub esp, 0x98 */ { u32 a_ = esp, b_ = 0x98u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00528afe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00528aff push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528b00 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00528b01 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00528b03 mov ebx, dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); ebx = (u32)(M32(m_)); }
  /* 00528b06 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00528b08 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00528b0a cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528b0c setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00528b0f lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 00528b12 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528b13 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528b14 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00528b17 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 00528b1a call 0x5fe710 */ esp -= 4; M32(esp) = 0x528b1fu; SAVEALL; F_005fe710(c); ABI_CHECK(0x5fe710u, 0x528b1au); RETCHK(0x528b1fu, 0x528b1au); LOADALL;
  /* 00528b1f mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 00528b22 lea edx, [edi + 0x10] */ edx = (u32)((u32)(edi + 0x10u));
  /* 00528b25 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00528b28 mov eax, dword ptr [edi + 0x58] */ { const u32 m_ = (u32)(edi + 0x58u); eax = (u32)(M32(m_)); }
  /* 00528b2b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528b2c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528b2d lea ebx, [ebp - 0x7c] */ ebx = (u32)((u32)(ebp + 0xffffff84u));
  /* 00528b30 call 0x527ac0 */ esp -= 4; M32(esp) = 0x528b35u; SAVEALL; F_00527ac0(c); ABI_CHECK(0x527ac0u, 0x528b30u); RETCHK(0x528b35u, 0x528b30u); LOADALL;
  /* 00528b35 mov ebx, dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); ebx = (u32)(M32(m_)); }
  /* 00528b38 lea ecx, [ebp - 0x5c] */ ecx = (u32)((u32)(ebp + 0xffffffa4u));
  /* 00528b3b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528b3c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528b3d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00528b3e mov dword ptr [ebp - 0x5c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(esi); }
  /* 00528b41 call 0x5fe752 */ esp -= 4; M32(esp) = 0x528b46u; SAVEALL; F_005fe752(c); ABI_CHECK(0x5fe752u, 0x528b41u); RETCHK(0x528b46u, 0x528b41u); LOADALL;
  /* 00528b46 lea edx, [ebp - 0x64] */ edx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00528b49 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528b4a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528b4b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528b4c mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 00528b4f mov dword ptr [ebp - 0x64], esi */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(esi); }
  /* 00528b52 call 0x5fe704 */ esp -= 4; M32(esp) = 0x528b57u; SAVEALL; F_005fe704(c); ABI_CHECK(0x5fe704u, 0x528b52u); RETCHK(0x528b57u, 0x528b52u); LOADALL;
  /* 00528b57 fild dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); FPUSH((double)(s32)M32(m_)); }
  /* 00528b5a mov dword ptr [ebp - 0x60], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(eax); }
  /* 00528b5d mov eax, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); eax = (u32)(M32(m_)); }
  /* 00528b60 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00528b62 jge 0x528b6a */ if (!LT_) goto L_00528b6a;
  /* 00528b64 fadd dword ptr [0x656f48] */ { const u32 m_ = (u32)(0x656f48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_00528b6a:;
  /* 00528b6a mov ecx, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ecx = (u32)(M32(m_)); }
  /* 00528b6d fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00528b70 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00528b73 fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 00528b76 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528b77 mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 00528b7a lea edx, [ebp - 0x8c] */ edx = (u32)((u32)(ebp + 0xffffff74u));
  /* 00528b80 fstp dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00528b86 fild dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 00528b89 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528b8a mov edx, dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); edx = (u32)(M32(m_)); }
  /* 00528b8d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528b8e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00528b91 fstp dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00528b94 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528b95 mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 00528b98 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528b99 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00528b9b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528b9c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528b9d mov dword ptr [ebp - 0x8c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M32(m_) = (u32)(0x0u); }
  /* 00528ba7 mov dword ptr [ebp - 0x88], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(0x0u); }
  /* 00528bb1 call 0x5fe71c */ esp -= 4; M32(esp) = 0x528bb6u; SAVEALL; F_005fe71c(c); ABI_CHECK(0x5fe71cu, 0x528bb1u); RETCHK(0x528bb6u, 0x528bb1u); LOADALL;
  /* 00528bb6 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528bb8 je 0x528bfa */ if (ZF_) goto L_00528bfa;
  /* 00528bba mov edx, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); edx = (u32)(M32(m_)); }
  /* 00528bbd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528bbe mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 00528bc1 call 0x5fe70a */ esp -= 4; M32(esp) = 0x528bc6u; SAVEALL; F_005fe70a(c); ABI_CHECK(0x5fe70au, 0x528bc1u); RETCHK(0x528bc6u, 0x528bc1u); LOADALL;
  /* 00528bc6 mov eax, dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); eax = (u32)(M32(m_)); }
  /* 00528bc9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528bca call 0x5fe758 */ esp -= 4; M32(esp) = 0x528bcfu; SAVEALL; F_005fe758(c); ABI_CHECK(0x5fe758u, 0x528bcau); RETCHK(0x528bcfu, 0x528bcau); LOADALL;
  /* 00528bcf cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528bd1 je 0x528bdc */ if (ZF_) goto L_00528bdc;
  /* 00528bd3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00528bd4 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x528bd9u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x528bd4u); RETCHK(0x528bd9u, 0x528bd4u); LOADALL;
  /* 00528bd9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00528bdc:;
  /* 00528bdc mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 00528bdf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528be0 call 0x5fe716 */ esp -= 4; M32(esp) = 0x528be5u; SAVEALL; F_005fe716(c); ABI_CHECK(0x5fe716u, 0x528be0u); RETCHK(0x528be5u, 0x528be0u); LOADALL;
  /* 00528be5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00528be6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00528be7 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00528be9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00528bea mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00528bed mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00528bf4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00528bf6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00528bf7 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_00528bfa:;
  /* 00528bfa mov edx, dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); edx = (u32)(M32(m_)); }
  /* 00528bfd fild dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); FPUSH((double)(s32)M32(m_)); }
  /* 00528c00 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00528c02 mov dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x0u); }
  /* 00528c09 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 00528c10 mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 00528c17 mov dword ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x0u); }
  /* 00528c1e mov dword ptr [ebp - 0x44], esi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esi); }
  /* 00528c21 mov dword ptr [ebp - 0x48], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(esi); }
  /* 00528c24 mov dword ptr [ebp - 0x4c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(esi); }
  /* 00528c27 mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 00528c2a jge 0x528c32 */ if (!LT_) goto L_00528c32;
  /* 00528c2c fadd dword ptr [0x656f48] */ { const u32 m_ = (u32)(0x656f48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_00528c32:;
  /* 00528c32 mov eax, dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); eax = (u32)(M32(m_)); }
  /* 00528c35 fild dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); FPUSH((double)(s32)M32(m_)); }
  /* 00528c38 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00528c3a jge 0x528c42 */ if (!LT_) goto L_00528c42;
  /* 00528c3c fadd dword ptr [0x656f48] */ { const u32 m_ = (u32)(0x656f48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_00528c42:;
  /* 00528c42 mov edx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edx = (u32)(M32(m_)); }
  /* 00528c45 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00528c47 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528c48 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528c49 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00528c4c fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00528c4f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528c50 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528c51 call 0x5fe74c */ esp -= 4; M32(esp) = 0x528c56u; SAVEALL; F_005fe74c(c); ABI_CHECK(0x5fe74cu, 0x528c51u); RETCHK(0x528c56u, 0x528c51u); LOADALL;
  /* 00528c56 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528c58 je 0x528c5d */ if (ZF_) goto L_00528c5d;
  /* 00528c5a mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
L_00528c5d:;
  /* 00528c5d fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 00528c60 mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 00528c63 fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 00528c65 mov dword ptr [ebp - 0x4c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(esi); }
  /* 00528c68 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 00528c6b fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 00528c6d fadd dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00528c70 mov dword ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x0u); }
  /* 00528c77 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00528c7a fadd dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00528c7d fadd dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00528c80 mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 00528c87 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00528c8a fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 00528c8d fadd dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00528c93 call 0x61b154 */ esp -= 4; M32(esp) = 0x528c98u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x528c93u); RETCHK(0x528c98u, 0x528c93u); LOADALL;
  /* 00528c98 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 00528c9b fadd dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00528ca1 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00528ca3 mov dword ptr [ebp - 0x48], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(ebx); }
  /* 00528ca6 call 0x61b154 */ esp -= 4; M32(esp) = 0x528cabu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x528ca6u); RETCHK(0x528cabu, 0x528ca6u); LOADALL;
  /* 00528cab fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 00528cb1 fdiv dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00528cb4 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 00528cb7 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 00528cba fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00528cbc fstp dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00528cbf fmul dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00528cc2 fstp dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00528cc5 fld dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); FPUSH((double)MF32(m_)); }
  /* 00528cc8 fadd dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00528cce call 0x61b154 */ esp -= 4; M32(esp) = 0x528cd3u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x528cceu); RETCHK(0x528cd3u, 0x528cceu); LOADALL;
  /* 00528cd3 fld dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); FPUSH((double)MF32(m_)); }
  /* 00528cd6 fadd dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00528cdc mov dword ptr [ebp - 0x94], eax */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(eax); }
  /* 00528ce2 call 0x61b154 */ esp -= 4; M32(esp) = 0x528ce7u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x528ce2u); RETCHK(0x528ce7u, 0x528ce2u); LOADALL;
  /* 00528ce7 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 00528cea mov dword ptr [ebp - 0x90], eax */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M32(m_) = (u32)(eax); }
  /* 00528cf0 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00528cf3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528cf4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528cf5 push 0x26200a */ { u32 v_ = 0x26200au; esp -= 4; M32(esp) = v_; }
  /* 00528cfa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528cfb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528cfc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00528cfd mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 00528d00 call 0x5fe75e */ esp -= 4; M32(esp) = 0x528d05u; SAVEALL; F_005fe75e(c); ABI_CHECK(0x5fe75eu, 0x528d00u); RETCHK(0x528d05u, 0x528d00u); LOADALL;
  /* 00528d05 mov eax, dword ptr [ebp - 0x90] */ { const u32 m_ = (u32)(ebp + 0xffffff70u); eax = (u32)(M32(m_)); }
  /* 00528d0b mov ecx, dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); ecx = (u32)(M32(m_)); }
  /* 00528d11 lea edx, [ebp + 0x10] */ edx = (u32)((u32)(ebp + 0x10u));
  /* 00528d14 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528d15 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528d16 push 0x26200a */ { u32 v_ = 0x26200au; esp -= 4; M32(esp) = v_; }
  /* 00528d1b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528d1c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528d1d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528d1e mov dword ptr [ebp + 0x10], esi */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esi); }
  /* 00528d21 call 0x5fe75e */ esp -= 4; M32(esp) = 0x528d26u; SAVEALL; F_005fe75e(c); ABI_CHECK(0x5fe75eu, 0x528d21u); RETCHK(0x528d26u, 0x528d21u); LOADALL;
  /* 00528d26 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00528d28 call 0x5fe6ce */ esp -= 4; M32(esp) = 0x528d2du; SAVEALL; F_005fe6ce(c); ABI_CHECK(0x5fe6ceu, 0x528d28u); RETCHK(0x528d2du, 0x528d28u); LOADALL;
  /* 00528d2d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00528d2f cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528d31 je 0x528d4d */ if (ZF_) goto L_00528d4d;
  /* 00528d33 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00528d36 lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 00528d39 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528d3a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528d3b mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 00528d3e call 0x5fe722 */ esp -= 4; M32(esp) = 0x528d43u; SAVEALL; F_005fe722(c); ABI_CHECK(0x5fe722u, 0x528d3eu); RETCHK(0x528d43u, 0x528d3eu); LOADALL;
  /* 00528d43 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00528d46 mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00528d49 mov dword ptr [ebx], ecx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(ecx); }
  /* 00528d4b jmp 0x528d4f */ goto L_00528d4f;
L_00528d4d:;
  /* 00528d4d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_00528d4f:;
  /* 00528d4f push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00528d51 call 0x5fe6ce */ esp -= 4; M32(esp) = 0x528d56u; SAVEALL; F_005fe6ce(c); ABI_CHECK(0x5fe6ceu, 0x528d51u); RETCHK(0x528d56u, 0x528d51u); LOADALL;
  /* 00528d56 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528d58 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00528d5b mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 00528d5e je 0x528d7b */ if (ZF_) goto L_00528d7b;
  /* 00528d60 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00528d63 lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 00528d66 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528d67 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528d68 call 0x5fe722 */ esp -= 4; M32(esp) = 0x528d6du; SAVEALL; F_005fe722(c); ABI_CHECK(0x5fe722u, 0x528d68u); RETCHK(0x528d6du, 0x528d68u); LOADALL;
  /* 00528d6d mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00528d70 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00528d73 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00528d76 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00528d78 mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
L_00528d7b:;
  /* 00528d7b mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00528d7d push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00528d7f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528d80 call 0x5fe72e */ esp -= 4; M32(esp) = 0x528d85u; SAVEALL; F_005fe72e(c); ABI_CHECK(0x5fe72eu, 0x528d80u); RETCHK(0x528d85u, 0x528d80u); LOADALL;
  /* 00528d85 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528d87 je 0x528d8c */ if (ZF_) goto L_00528d8c;
  /* 00528d89 mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
L_00528d8c:;
  /* 00528d8c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00528d8f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00528d91 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00528d93 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528d94 call 0x5fe72e */ esp -= 4; M32(esp) = 0x528d99u; SAVEALL; F_005fe72e(c); ABI_CHECK(0x5fe72eu, 0x528d94u); RETCHK(0x528d99u, 0x528d94u); LOADALL;
  /* 00528d99 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528d9b je 0x528da3 */ if (ZF_) goto L_00528da3;
  /* 00528d9d mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00528da0 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
L_00528da3:;
  /* 00528da3 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 00528da9 lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00528dac fdiv dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00528daf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528db0 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 00528db3 fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 00528db6 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00528db8 fst dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); }
  /* 00528dbb mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00528dbe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528dbf fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00528dc2 mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 00528dc5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528dc6 fst dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); }
  /* 00528dc9 mov edx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); edx = (u32)(M32(m_)); }
  /* 00528dcc fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00528dcf mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00528dd2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528dd3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528dd4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528dd5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528dd6 call 0x5fe6d4 */ esp -= 4; M32(esp) = 0x528ddbu; SAVEALL; F_005fe6d4(c); ABI_CHECK(0x5fe6d4u, 0x528dd6u); RETCHK(0x528ddbu, 0x528dd6u); LOADALL;
  /* 00528ddb mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00528dde mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00528de1 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 00528de3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528de4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528de5 call 0x5fe734 */ esp -= 4; M32(esp) = 0x528deau; SAVEALL; F_005fe734(c); ABI_CHECK(0x5fe734u, 0x528de5u); RETCHK(0x528deau, 0x528de5u); LOADALL;
  /* 00528dea cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528dec je 0x528df4 */ if (ZF_) goto L_00528df4;
  /* 00528dee mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00528df1 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
L_00528df4:;
  /* 00528df4 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00528df7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528df8 call 0x5fe6da */ esp -= 4; M32(esp) = 0x528dfdu; SAVEALL; F_005fe6da(c); ABI_CHECK(0x5fe6dau, 0x528df8u); RETCHK(0x528dfdu, 0x528df8u); LOADALL;
  /* 00528dfd mov ecx, dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 00528e00 lea esi, [ebp - 0x54] */ esi = (u32)((u32)(ebp + 0xffffffacu));
  /* 00528e03 call 0x5287b0 */ esp -= 4; M32(esp) = 0x528e08u; SAVEALL; F_005287b0(c); ABI_CHECK(0x5287b0u, 0x528e03u); RETCHK(0x528e08u, 0x528e03u); LOADALL;
  /* 00528e08 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00528e0a lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00528e0d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528e0e xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00528e10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528e11 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 00528e14 call 0x5fe6e6 */ esp -= 4; M32(esp) = 0x528e19u; SAVEALL; F_005fe6e6(c); ABI_CHECK(0x5fe6e6u, 0x528e14u); RETCHK(0x528e19u, 0x528e14u); LOADALL;
  /* 00528e19 fild dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); FPUSH((double)(s32)M32(m_)); }
  /* 00528e1c mov edx, dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); edx = (u32)(M32(m_)); }
  /* 00528e1f test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00528e21 jge 0x528e29 */ if (!LT_) goto L_00528e29;
  /* 00528e23 fadd dword ptr [0x656f48] */ { const u32 m_ = (u32)(0x656f48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_00528e29:;
  /* 00528e29 lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00528e2c fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00528e2f mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00528e32 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528e33 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528e34 mov dword ptr [ebp - 0x40], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(esi); }
  /* 00528e37 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 00528e3a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528e3b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528e3c call 0x5fe6f2 */ esp -= 4; M32(esp) = 0x528e41u; SAVEALL; F_005fe6f2(c); ABI_CHECK(0x5fe6f2u, 0x528e3cu); RETCHK(0x528e41u, 0x528e3cu); LOADALL;
  /* 00528e41 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528e42 mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 00528e45 call 0x5fe6e0 */ esp -= 4; M32(esp) = 0x528e4au; SAVEALL; F_005fe6e0(c); ABI_CHECK(0x5fe6e0u, 0x528e45u); RETCHK(0x528e4au, 0x528e45u); LOADALL;
  /* 00528e4a mov edx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); edx = (u32)(M32(m_)); }
  /* 00528e4d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00528e4f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528e50 call 0x5fe6fe */ esp -= 4; M32(esp) = 0x528e55u; SAVEALL; F_005fe6fe(c); ABI_CHECK(0x5fe6feu, 0x528e50u); RETCHK(0x528e55u, 0x528e50u); LOADALL;
  /* 00528e55 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00528e57 je 0x528e5c */ if (ZF_) goto L_00528e5c;
  /* 00528e59 mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
L_00528e5c:;
  /* 00528e5c mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00528e5f mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 00528e62 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00528e65 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00528e67 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528e68 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528e69 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528e6a call 0x5fe73a */ esp -= 4; M32(esp) = 0x528e6fu; SAVEALL; F_005fe73a(c); ABI_CHECK(0x5fe73au, 0x528e6au); RETCHK(0x528e6fu, 0x528e6au); LOADALL;
  /* 00528e6f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00528e71 je 0x528e76 */ if (ZF_) goto L_00528e76;
  /* 00528e73 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
L_00528e76:;
  /* 00528e76 mov ecx, dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 00528e79 lea esi, [ebp - 0x18] */ esi = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00528e7c call 0x5287b0 */ esp -= 4; M32(esp) = 0x528e81u; SAVEALL; F_005287b0(c); ABI_CHECK(0x5287b0u, 0x528e7cu); RETCHK(0x528e81u, 0x528e7cu); LOADALL;
  /* 00528e81 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00528e83 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00528e86 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528e87 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528e88 mov dword ptr [ebp - 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x0u); }
  /* 00528e8f call 0x5fe6e6 */ esp -= 4; M32(esp) = 0x528e94u; SAVEALL; F_005fe6e6(c); ABI_CHECK(0x5fe6e6u, 0x528e8fu); RETCHK(0x528e94u, 0x528e8fu); LOADALL;
  /* 00528e94 mov edx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edx = (u32)(M32(m_)); }
  /* 00528e97 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00528e9a mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 00528e9d mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00528e9f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528ea0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528ea1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528ea2 call 0x5fe740 */ esp -= 4; M32(esp) = 0x528ea7u; SAVEALL; F_005fe740(c); ABI_CHECK(0x5fe740u, 0x528ea2u); RETCHK(0x528ea7u, 0x528ea2u); LOADALL;
  /* 00528ea7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00528ea9 je 0x528eb1 */ if (ZF_) goto L_00528eb1;
  /* 00528eab mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00528eae mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
L_00528eb1:;
  /* 00528eb1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528eb2 call 0x5fe6e0 */ esp -= 4; M32(esp) = 0x528eb7u; SAVEALL; F_005fe6e0(c); ABI_CHECK(0x5fe6e0u, 0x528eb2u); RETCHK(0x528eb7u, 0x528eb2u); LOADALL;
  /* 00528eb7 mov eax, dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); eax = (u32)(M32(m_)); }
  /* 00528eba xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00528ebc cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528ebe jne 0x528f28 */ if (!ZF_) goto L_00528f28;
  /* 00528ec0 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00528ec3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528ec4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528ec5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528ec6 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00528ecb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528ecc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528ecd push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00528ed2 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 00528ed5 call 0x5fe6d4 */ esp -= 4; M32(esp) = 0x528edau; SAVEALL; F_005fe6d4(c); ABI_CHECK(0x5fe6d4u, 0x528ed5u); RETCHK(0x528edau, 0x528ed5u); LOADALL;
  /* 00528eda mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00528edd mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00528edf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528ee0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528ee1 call 0x5fe734 */ esp -= 4; M32(esp) = 0x528ee6u; SAVEALL; F_005fe734(c); ABI_CHECK(0x5fe734u, 0x528ee1u); RETCHK(0x528ee6u, 0x528ee1u); LOADALL;
  /* 00528ee6 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528ee8 je 0x528eed */ if (ZF_) goto L_00528eed;
  /* 00528eea mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
L_00528eed:;
  /* 00528eed mov eax, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); eax = (u32)(M32(m_)); }
  /* 00528ef0 mov ecx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); ecx = (u32)(M32(m_)); }
  /* 00528ef3 mov edx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 00528ef6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528ef7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528ef8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528ef9 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00528efb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528efc mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 00528eff push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528f00 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 00528f03 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528f04 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528f05 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528f06 mov edx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edx = (u32)(M32(m_)); }
  /* 00528f09 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528f0a mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00528f0d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528f0e mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 00528f10 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528f11 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528f12 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528f13 call 0x5fe746 */ esp -= 4; M32(esp) = 0x528f18u; SAVEALL; F_005fe746(c); ABI_CHECK(0x5fe746u, 0x528f13u); RETCHK(0x528f18u, 0x528f13u); LOADALL;
  /* 00528f18 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528f1a je 0x528f1f */ if (ZF_) goto L_00528f1f;
  /* 00528f1c mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
L_00528f1f:;
  /* 00528f1f mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00528f22 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528f23 call 0x5fe6da */ esp -= 4; M32(esp) = 0x528f28u; SAVEALL; F_005fe6da(c); ABI_CHECK(0x5fe6dau, 0x528f23u); RETCHK(0x528f28u, 0x528f23u); LOADALL;
L_00528f28:;
  /* 00528f28 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 00528f2b jmp 0x528f30 */ goto L_00528f30;
L_00528f2d:;
  /* 00528f2d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00528f2f nop */ ;
L_00528f30:;
  /* 00528f30 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00528f33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528f34 mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 00528f37 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528f38 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528f39 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00528f3e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528f3f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528f40 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00528f45 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 00528f48 call 0x5fe6d4 */ esp -= 4; M32(esp) = 0x528f4du; SAVEALL; F_005fe6d4(c); ABI_CHECK(0x5fe6d4u, 0x528f48u); RETCHK(0x528f4du, 0x528f48u); LOADALL;
  /* 00528f4d mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00528f50 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00528f52 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528f53 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528f54 call 0x5fe734 */ esp -= 4; M32(esp) = 0x528f59u; SAVEALL; F_005fe734(c); ABI_CHECK(0x5fe734u, 0x528f54u); RETCHK(0x528f59u, 0x528f54u); LOADALL;
  /* 00528f59 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528f5b je 0x528f60 */ if (ZF_) goto L_00528f60;
  /* 00528f5d mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
L_00528f60:;
  /* 00528f60 mov ecx, dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); ecx = (u32)(M32(m_)); }
  /* 00528f63 lea esi, [ebp - 0x18] */ esi = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00528f66 call 0x5287b0 */ esp -= 4; M32(esp) = 0x528f6bu; SAVEALL; F_005287b0(c); ABI_CHECK(0x5287b0u, 0x528f66u); RETCHK(0x528f6bu, 0x528f66u); LOADALL;
  /* 00528f6b mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00528f6d lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00528f70 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528f71 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528f72 mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 00528f79 call 0x5fe6e6 */ esp -= 4; M32(esp) = 0x528f7eu; SAVEALL; F_005fe6e6(c); ABI_CHECK(0x5fe6e6u, 0x528f79u); RETCHK(0x528f7eu, 0x528f79u); LOADALL;
  /* 00528f7e mov edx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edx = (u32)(M32(m_)); }
  /* 00528f81 mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 00528f84 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00528f86 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528f87 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528f88 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528f89 call 0x5fe740 */ esp -= 4; M32(esp) = 0x528f8eu; SAVEALL; F_005fe740(c); ABI_CHECK(0x5fe740u, 0x528f89u); RETCHK(0x528f8eu, 0x528f89u); LOADALL;
  /* 00528f8e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00528f90 je 0x528f95 */ if (ZF_) goto L_00528f95;
  /* 00528f92 mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
L_00528f95:;
  /* 00528f95 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528f96 call 0x5fe6e0 */ esp -= 4; M32(esp) = 0x528f9bu; SAVEALL; F_005fe6e0(c); ABI_CHECK(0x5fe6e0u, 0x528f96u); RETCHK(0x528f9bu, 0x528f96u); LOADALL;
  /* 00528f9b mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00528f9e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00528f9f call 0x5fe6da */ esp -= 4; M32(esp) = 0x528fa4u; SAVEALL; F_005fe6da(c); ABI_CHECK(0x5fe6dau, 0x528f9fu); RETCHK(0x528fa4u, 0x528f9fu); LOADALL;
  /* 00528fa4 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00528fa7 mov ecx, dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); ecx = (u32)(M32(m_)); }
  /* 00528faa inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00528fab cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00528fad mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00528fb0 jbe 0x528f2d */ if ((CF_|ZF_)) goto L_00528f2d;
  /* 00528fb6 mov eax, dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); eax = (u32)(M32(m_)); }
  /* 00528fb9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00528fbb je 0x52902f */ if (ZF_) goto L_0052902f;
  /* 00528fbd lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00528fc0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00528fc1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00528fc3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00528fc5 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00528fca push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00528fcc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00528fce push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00528fd3 mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 00528fda call 0x5fe6d4 */ esp -= 4; M32(esp) = 0x528fdfu; SAVEALL; F_005fe6d4(c); ABI_CHECK(0x5fe6d4u, 0x528fdau); RETCHK(0x528fdfu, 0x528fdau); LOADALL;
  /* 00528fdf mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 00528fe2 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00528fe4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00528fe5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00528fe6 call 0x5fe734 */ esp -= 4; M32(esp) = 0x528febu; SAVEALL; F_005fe734(c); ABI_CHECK(0x5fe734u, 0x528fe6u); RETCHK(0x528febu, 0x528fe6u); LOADALL;
  /* 00528feb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00528fed je 0x528ff2 */ if (ZF_) goto L_00528ff2;
  /* 00528fef mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
L_00528ff2:;
  /* 00528ff2 mov ecx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); ecx = (u32)(M32(m_)); }
  /* 00528ff5 mov edx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); edx = (u32)(M32(m_)); }
  /* 00528ff8 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 00528ffb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00528ffd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00528fff push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00529001 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00529003 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529004 mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 00529007 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00529008 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 0052900b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052900d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052900f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529010 mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 00529013 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529014 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00529017 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00529018 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0052901a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052901b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052901c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052901d call 0x5fe746 */ esp -= 4; M32(esp) = 0x529022u; SAVEALL; F_005fe746(c); ABI_CHECK(0x5fe746u, 0x52901du); RETCHK(0x529022u, 0x52901du); LOADALL;
  /* 00529022 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00529024 je 0x529029 */ if (ZF_) goto L_00529029;
  /* 00529026 mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
L_00529029:;
  /* 00529029 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052902a call 0x5fe6da */ esp -= 4; M32(esp) = 0x52902fu; SAVEALL; F_005fe6da(c); ABI_CHECK(0x5fe6dau, 0x52902au); RETCHK(0x52902fu, 0x52902au); LOADALL;
L_0052902f:;
  /* 0052902f mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 00529032 mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 00529035 call 0x527d70 */ esp -= 4; M32(esp) = 0x52903au; SAVEALL; F_00527d70(c); ABI_CHECK(0x527d70u, 0x529035u); RETCHK(0x52903au, 0x529035u); LOADALL;
  /* 0052903a push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0052903c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052903e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052903f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529040 call 0x5ab230 */ esp -= 4; M32(esp) = 0x529045u; SAVEALL; F_005ab230(c); ABI_CHECK(0x5ab230u, 0x529040u); RETCHK(0x529045u, 0x529040u); LOADALL;
  /* 00529045 mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 00529048 mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 0052904b mov edx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); edx = (u32)(M32(m_)); }
  /* 0052904e mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00529051 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00529054 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00529056 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 00529058 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0052905b mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052905e je 0x529098 */ if (ZF_) goto L_00529098;
  /* 00529060 lea eax, [ebp - 0xa4] */ eax = (u32)((u32)(ebp + 0xffffff5cu));
  /* 00529066 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529067 push 0x26200a */ { u32 v_ = 0x26200au; esp -= 4; M32(esp) = v_; }
  /* 0052906c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052906e lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00529071 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529072 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00529073 call 0x5fe764 */ esp -= 4; M32(esp) = 0x529078u; SAVEALL; F_005fe764(c); ABI_CHECK(0x5fe764u, 0x529073u); RETCHK(0x529078u, 0x529073u); LOADALL;
  /* 00529078 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052907a jne 0x529098 */ if (!ZF_) goto L_00529098;
  /* 0052907c mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0052907e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052907f lea eax, [ebp - 0xa4] */ eax = (u32)((u32)(ebp + 0xffffff5cu));
  /* 00529085 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529086 call 0x529110 */ esp -= 4; M32(esp) = 0x52908bu; SAVEALL; F_00529110(c); ABI_CHECK(0x529110u, 0x529086u); RETCHK(0x52908bu, 0x529086u); LOADALL;
  /* 0052908b lea ecx, [ebp - 0xa4] */ ecx = (u32)((u32)(ebp + 0xffffff5cu));
  /* 00529091 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529092 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00529093 call 0x5fe76a */ esp -= 4; M32(esp) = 0x529098u; SAVEALL; F_005fe76a(c); ABI_CHECK(0x5fe76au, 0x529093u); RETCHK(0x529098u, 0x529093u); LOADALL;
L_00529098:;
  /* 00529098 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0052909a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052909b call 0x5fe728 */ esp -= 4; M32(esp) = 0x5290a0u; SAVEALL; F_005fe728(c); ABI_CHECK(0x5fe728u, 0x52909bu); RETCHK(0x5290a0u, 0x52909bu); LOADALL;
  /* 005290a0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005290a1 call 0x5fe6c8 */ esp -= 4; M32(esp) = 0x5290a6u; SAVEALL; F_005fe6c8(c); ABI_CHECK(0x5fe6c8u, 0x5290a1u); RETCHK(0x5290a6u, 0x5290a1u); LOADALL;
  /* 005290a6 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 005290a9 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005290ab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005290ac call 0x5fe728 */ esp -= 4; M32(esp) = 0x5290b1u; SAVEALL; F_005fe728(c); ABI_CHECK(0x5fe728u, 0x5290acu); RETCHK(0x5290b1u, 0x5290acu); LOADALL;
  /* 005290b1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005290b2 call 0x5fe6c8 */ esp -= 4; M32(esp) = 0x5290b7u; SAVEALL; F_005fe6c8(c); ABI_CHECK(0x5fe6c8u, 0x5290b2u); RETCHK(0x5290b7u, 0x5290b2u); LOADALL;
  /* 005290b7 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 005290ba push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005290bb call 0x5fe6f8 */ esp -= 4; M32(esp) = 0x5290c0u; SAVEALL; F_005fe6f8(c); ABI_CHECK(0x5fe6f8u, 0x5290bbu); RETCHK(0x5290c0u, 0x5290bbu); LOADALL;
  /* 005290c0 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005290c3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005290c4 call 0x5fe6ec */ esp -= 4; M32(esp) = 0x5290c9u; SAVEALL; F_005fe6ec(c); ABI_CHECK(0x5fe6ecu, 0x5290c4u); RETCHK(0x5290c9u, 0x5290c4u); LOADALL;
  /* 005290c9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005290ca call 0x5fe6ec */ esp -= 4; M32(esp) = 0x5290cfu; SAVEALL; F_005fe6ec(c); ABI_CHECK(0x5fe6ecu, 0x5290cau); RETCHK(0x5290cfu, 0x5290cau); LOADALL;
  /* 005290cf mov eax, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 005290d2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005290d3 call 0x5fe70a */ esp -= 4; M32(esp) = 0x5290d8u; SAVEALL; F_005fe70a(c); ABI_CHECK(0x5fe70au, 0x5290d3u); RETCHK(0x5290d8u, 0x5290d3u); LOADALL;
  /* 005290d8 mov ecx, dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); ecx = (u32)(M32(m_)); }
  /* 005290db push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005290dc call 0x5fe758 */ esp -= 4; M32(esp) = 0x5290e1u; SAVEALL; F_005fe758(c); ABI_CHECK(0x5fe758u, 0x5290dcu); RETCHK(0x5290e1u, 0x5290dcu); LOADALL;
  /* 005290e1 mov eax, dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); eax = (u32)(M32(m_)); }
  /* 005290e4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005290e6 je 0x5290f1 */ if (ZF_) goto L_005290f1;
  /* 005290e8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005290e9 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x5290eeu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x5290e9u); RETCHK(0x5290eeu, 0x5290e9u); LOADALL;
  /* 005290ee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005290f1:;
  /* 005290f1 mov edx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edx = (u32)(M32(m_)); }
  /* 005290f4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005290f5 call 0x5fe716 */ esp -= 4; M32(esp) = 0x5290fau; SAVEALL; F_005fe716(c); ABI_CHECK(0x5fe716u, 0x5290f5u); RETCHK(0x5290fau, 0x5290f5u); LOADALL;
  /* 005290fa mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005290fd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005290fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005290ff mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00529101 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00529102 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00529109 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052910b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052910c ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00529110(CPU *c) {
  NATIVE_HOOK(0x529110u) REGS; LOADALL;
L_00529110:;
  /* 00529110 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529111 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529113 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00529116 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00529119 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052911a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0052911c mov bh, byte ptr [eax + 0x23] */ { const u32 m_ = (u32)(eax + 0x23u); ebx = (ebx & 0xffff00ffu) | (((u32)(M8(m_)) & 0xffu) << 8); }
  /* 0052911f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00529120 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00529123 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00529125 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00529127 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529128 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0052912b call 0x5ab2d0 */ esp -= 4; M32(esp) = 0x529130u; SAVEALL; F_005ab2d0(c); ABI_CHECK(0x5ab2d0u, 0x52912bu); RETCHK(0x529130u, 0x52912bu); LOADALL;
  /* 00529130 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00529133 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00529135 je 0x5292f6 */ if (ZF_) goto L_005292f6;
  /* 0052913b cmp ebx, 0x300 */ { u32 a_ = ebx, b_ = 0x300u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529141 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529142 je 0x5291bd */ if (ZF_) goto L_005291bd;
  /* 00529144 cmp ebx, 0x200 */ { u32 a_ = ebx, b_ = 0x200u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052914a je 0x5291bd */ if (ZF_) goto L_005291bd;
  /* 0052914c cmp ebx, 0x100 */ { u32 a_ = ebx, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529152 je 0x5291bd */ if (ZF_) goto L_005291bd;
  /* 00529154 cmp ebx, 0xa00 */ { u32 a_ = ebx, b_ = 0xa00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052915a je 0x5291bd */ if (ZF_) goto L_005291bd;
  /* 0052915c cmp ebx, 0x500 */ { u32 a_ = ebx, b_ = 0x500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529162 jne 0x5292e9 */ if (!ZF_) goto L_005292e9;
  /* 00529168 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0052916a mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052916d mov esi, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); esi = (u32)(M32(m_)); }
  /* 00529170 shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00529173 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00529175 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00529178 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 0052917f jbe 0x5292e9 */ if ((CF_|ZF_)) goto L_005292e9;
L_00529185:;
  /* 00529185 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00529187 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00529189 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052918c mov edi, eax */ { edi = (u32)(eax); }
  /* 0052918e rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00529190 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00529192 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00529195 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00529197 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052919a mov ebx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); ebx = (u32)(M32(m_)); }
  /* 0052919d mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 005291a0 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 005291a3 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005291a6 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005291a8 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005291aa mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 005291ad inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005291ae cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005291b0 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 005291b3 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 005291b6 jb 0x529185 */ if (CF_) goto L_00529185;
  /* 005291b8 jmp 0x5292e9 */ goto L_005292e9;
L_005291bd:;
  /* 005291bd mov esi, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); esi = (u32)(M32(m_)); }
  /* 005291c0 mov edx, eax */ { edx = (u32)(eax); }
  /* 005291c2 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005291c5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005291c7 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 005291ce jbe 0x5292e9 */ if ((CF_|ZF_)) goto L_005292e9;
  /* 005291d4 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005291d6 jmp 0x5291e0 */ goto L_005291e0;
L_005291e0:;
  /* 005291e0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005291e2 mov dword ptr [ebp + 8], 0 */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 005291e9 jbe 0x5292cc */ if ((CF_|ZF_)) goto L_005292cc;
  /* 005291ef nop */ ;
L_005291f0:;
  /* 005291f0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005291f2 cmp ebx, 0x300 */ { u32 a_ = ebx, b_ = 0x300u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005291f8 jne 0x529229 */ if (!ZF_) goto L_00529229;
  /* 005291fa mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005291fc mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005291fe mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00529200 shr ebx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00529203 shr eax, 0xc */ { u32 n_ = (12u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00529206 and ebx, 0xf0 */ { u32 a_ = ebx, b_ = 0xf0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0052920c and eax, 0xf00 */ { u32 a_ = eax, b_ = 0xf00u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00529211 or eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00529213 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00529215 shr ebx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00529218 shr ecx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052921b and ebx, 0xf */ { u32 a_ = ebx, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0052921e and ecx, 0xf000 */ { u32 a_ = ecx, b_ = 0xf000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00529224 jmp 0x5292ab */ goto L_005292ab;
L_00529229:;
  /* 00529229 cmp ebx, 0x200 */ { u32 a_ = ebx, b_ = 0x200u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052922f jne 0x529250 */ if (!ZF_) goto L_00529250;
  /* 00529231 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00529233 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00529235 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00529237 shr eax, 0xd */ { u32 n_ = (13u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052923a shr ebx, 0xb */ { u32 n_ = (11u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0052923d shr ecx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00529240 and eax, 0x7e0 */ { u32 a_ = eax, b_ = 0x7e0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00529245 and ebx, 0x1f */ { u32 a_ = ebx, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00529248 and ecx, 0xf800 */ { u32 a_ = ecx, b_ = 0xf800u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052924e jmp 0x5292ab */ goto L_005292ab;
L_00529250:;
  /* 00529250 cmp ebx, 0x100 */ { u32 a_ = ebx, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529256 jne 0x529286 */ if (!ZF_) goto L_00529286;
  /* 00529258 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0052925a mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0052925c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0052925e shr eax, 0xe */ { u32 n_ = (14u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00529261 shr ebx, 0xb */ { u32 n_ = (11u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00529264 and ebx, 0x1f */ { u32 a_ = ebx, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00529267 shr ecx, 0x11 */ { u32 n_ = (17u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052926a and eax, 0x3e0 */ { u32 a_ = eax, b_ = 0x3e0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052926f or eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00529271 and ecx, 0x7c00 */ { u32 a_ = ecx, b_ = 0x7c00u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00529277 or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00529279 mov cl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052927b and cl, 0xf8 */ { u32 a_ = (ecx & 0xffu), b_ = 0xf8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0052927e xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00529280 mov bh, cl */ { ebx = (ebx & 0xffff00ffu) | (((u32)((ecx & 0xffu)) & 0xffu) << 8); }
  /* 00529282 or eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00529284 jmp 0x5292af */ goto L_005292af;
L_00529286:;
  /* 00529286 cmp ebx, 0xa00 */ { u32 a_ = ebx, b_ = 0xa00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052928c jne 0x5292b2 */ if (!ZF_) goto L_005292b2;
  /* 0052928e mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00529290 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00529292 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00529294 shr eax, 0xe */ { u32 n_ = (14u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00529297 shr ebx, 0xb */ { u32 n_ = (11u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0052929a shr ecx, 0x11 */ { u32 n_ = (17u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052929d and eax, 0x3e0 */ { u32 a_ = eax, b_ = 0x3e0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005292a2 and ebx, 0x1f */ { u32 a_ = ebx, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005292a5 and ecx, 0x7c00 */ { u32 a_ = ecx, b_ = 0x7c00u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_005292ab:;
  /* 005292ab or eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005292ad or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005292af:;
  /* 005292af mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
L_005292b2:;
  /* 005292b2 mov word ptr [edx], ax */ { const u32 m_ = (u32)(edx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005292b5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005292b8 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 005292ba add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005292bd add edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005292c0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005292c1 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005292c3 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005292c6 jb 0x5291f0 */ if (CF_) goto L_005291f0;
L_005292cc:;
  /* 005292cc mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005292cf mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005292d2 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005292d4 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005292d6 lea edx, [edx + ecx*2] */ edx = (u32)((u32)(edx + ecx * 2u));
  /* 005292d9 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 005292dc inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005292dd cmp ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005292e0 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 005292e3 jb 0x5291e0 */ if (CF_) goto L_005291e0;
L_005292e9:;
  /* 005292e9 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005292ec push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005292ed call 0x5aaf30 */ esp -= 4; M32(esp) = 0x5292f2u; SAVEALL; F_005aaf30(c); ABI_CHECK(0x5aaf30u, 0x5292edu); RETCHK(0x5292f2u, 0x5292edu); LOADALL;
  /* 005292f2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005292f5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_005292f6:;
  /* 005292f6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005292f7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005292f8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005292fa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005292fb ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00529300(CPU *c) {
  NATIVE_HOOK(0x529300u) REGS; LOADALL;
L_00529300:;
  /* 00529300 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529301 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00529303 mov dword ptr [ecx], 0x64d178 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64d178u); }
  /* 00529309 call 0x5293f0 */ esp -= 4; M32(esp) = 0x52930eu; SAVEALL; F_005293f0(c); ABI_CHECK(0x5293f0u, 0x529309u); RETCHK(0x52930eu, 0x529309u); LOADALL;
  /* 0052930e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052930f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00529310(CPU *c) {
  NATIVE_HOOK(0x529310u) REGS; LOADALL;
L_00529310:;
  /* 00529310 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529311 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529313 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529314 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00529315 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529316 mov esi, eax */ { esi = (u32)(eax); }
  /* 00529318 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052931b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052931d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052931e je 0x529362 */ if (ZF_) goto L_00529362;
  /* 00529320 lea edi, [eax + 0x10] */ edi = (u32)((u32)(eax + 0x10u));
  /* 00529323 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
L_00529326:;
  /* 00529326 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00529328 mov bl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052932a mov cl, dl */ { ecx = (ecx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 0052932c cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052932e jne 0x52934e */ if (!ZF_) goto L_0052934e;
  /* 00529330 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00529332 je 0x52934a */ if (ZF_) goto L_0052934a;
  /* 00529334 mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00529337 mov bl, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052933a mov cl, dl */ { ecx = (ecx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 0052933c cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052933e jne 0x52934e */ if (!ZF_) goto L_0052934e;
  /* 00529340 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00529343 add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00529346 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00529348 jne 0x529326 */ if (!ZF_) goto L_00529326;
L_0052934a:;
  /* 0052934a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052934c jmp 0x529353 */ goto L_00529353;
L_0052934e:;
  /* 0052934e sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00529350 sbb eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
L_00529353:;
  /* 00529353 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00529355 jne 0x529362 */ if (!ZF_) goto L_00529362;
  /* 00529357 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00529358 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00529359 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0052935b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052935c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052935e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052935f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00529362:;
  /* 00529362 mov edi, dword ptr [0x7a6d94] */ { const u32 m_ = (u32)(0x7a6d94u); edi = (u32)(M32(m_)); }
  /* 00529368 call 0x5aca20 */ esp -= 4; M32(esp) = 0x52936du; SAVEALL; F_005aca20(c); ABI_CHECK(0x5aca20u, 0x529368u); RETCHK(0x52936du, 0x529368u); LOADALL;
  /* 0052936d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0052936f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00529370 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00529373 call 0x5aca00 */ esp -= 4; M32(esp) = 0x529378u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x529373u); RETCHK(0x529378u, 0x529373u); LOADALL;
  /* 00529378 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052937b call 0x5293f0 */ esp -= 4; M32(esp) = 0x529380u; SAVEALL; F_005293f0(c); ABI_CHECK(0x5293f0u, 0x52937bu); RETCHK(0x529380u, 0x52937bu); LOADALL;
  /* 00529380 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00529383 cmp byte ptr [edi], 0 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00529386 jne 0x52939c */ if (!ZF_) goto L_0052939c;
  /* 00529388 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00529389 call 0x5aca00 */ esp -= 4; M32(esp) = 0x52938eu; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x529389u); RETCHK(0x52938eu, 0x529389u); LOADALL;
  /* 0052938e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00529391 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00529392 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00529393 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00529395 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00529396 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529398 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529399 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0052939c:;
  /* 0052939c push 0x652f48 */ { u32 v_ = 0x652f48u; esp -= 4; M32(esp) = v_; }
  /* 005293a1 call 0x5b17e0 */ esp -= 4; M32(esp) = 0x5293a6u; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x5293a1u); RETCHK(0x5293a6u, 0x5293a1u); LOADALL;
  /* 005293a6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005293a8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005293a9 call 0x5aca30 */ esp -= 4; M32(esp) = 0x5293aeu; SAVEALL; F_005aca30(c); ABI_CHECK(0x5aca30u, 0x5293a9u); RETCHK(0x5293aeu, 0x5293a9u); LOADALL;
  /* 005293ae mov cl, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005293b1 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005293b4 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005293b6 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005293b9 je 0x5293c2 */ if (ZF_) goto L_005293c2;
  /* 005293bb mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005293bd call 0x5450c0 */ esp -= 4; M32(esp) = 0x5293c2u; SAVEALL; F_005450c0(c); ABI_CHECK(0x5450c0u, 0x5293bdu); RETCHK(0x5293c2u, 0x5293bdu); LOADALL;
L_005293c2:;
  /* 005293c2 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005293c5 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005293c8 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005293ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005293cb setne bl */ { ebx = (ebx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005293ce call 0x5aca00 */ esp -= 4; M32(esp) = 0x5293d3u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x5293ceu); RETCHK(0x5293d3u, 0x5293ceu); LOADALL;
  /* 005293d3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005293d6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005293d7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005293d8 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 005293da pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005293db mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005293dd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005293de ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005293f0(CPU *c) {
  NATIVE_HOOK(0x5293f0u) REGS; LOADALL;
L_005293f0:;
  /* 005293f0 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005293f3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005293f5 je 0x529407 */ if (ZF_) goto L_00529407;
  /* 005293f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005293f8 call 0x5ac7e0 */ esp -= 4; M32(esp) = 0x5293fdu; SAVEALL; F_005ac7e0(c); ABI_CHECK(0x5ac7e0u, 0x5293f8u); RETCHK(0x5293fdu, 0x5293f8u); LOADALL;
  /* 005293fd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00529400 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
L_00529407:;
  /* 00529407 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00529410(CPU *c) {
  NATIVE_HOOK(0x529410u) REGS; LOADALL;
L_00529410:;
  /* 00529410 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00529413 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00529415 mov dword ptr [ecx], ecx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ecx); }
  /* 00529417 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052941a mov dword ptr [ecx + 4], ecx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0052941d cmp eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529420 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 00529427 je 0x529445 */ if (ZF_) goto L_00529445;
  /* 00529429 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052942a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00529430:;
  /* 00529430 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 00529432 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529433 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x529438u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x529433u); RETCHK(0x529438u, 0x529433u); LOADALL;
  /* 00529438 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052943b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052943e cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529440 mov eax, edi */ { eax = (u32)(edi); }
  /* 00529442 jne 0x529430 */ if (!ZF_) goto L_00529430;
  /* 00529444 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00529445:;
  /* 00529445 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00529450(CPU *c) {
  NATIVE_HOOK(0x529450u) REGS; LOADALL;
L_00529450:;
  /* 00529450 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00529452 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00529454 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00529455 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00529457 call 0x404140 */ esp -= 4; M32(esp) = 0x52945cu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x529457u); RETCHK(0x52945cu, 0x529457u); LOADALL;
  /* 0052945c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052945e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00529460 lea eax, [edi + 0x1c] */ eax = (u32)((u32)(edi + 0x1cu));
  /* 00529463 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529464 lea ecx, [esi + 0x1c] */ ecx = (u32)((u32)(esi + 0x1cu));
  /* 00529467 call 0x404140 */ esp -= 4; M32(esp) = 0x52946cu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x529467u); RETCHK(0x52946cu, 0x529467u); LOADALL;
  /* 0052946c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052946e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00529470 lea ecx, [edi + 0x38] */ ecx = (u32)((u32)(edi + 0x38u));
  /* 00529473 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529474 lea ecx, [esi + 0x38] */ ecx = (u32)((u32)(esi + 0x38u));
  /* 00529477 call 0x404140 */ esp -= 4; M32(esp) = 0x52947cu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x529477u); RETCHK(0x52947cu, 0x529477u); LOADALL;
  /* 0052947c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052947e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00529480 lea edx, [edi + 0x70] */ edx = (u32)((u32)(edi + 0x70u));
  /* 00529483 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00529484 lea ecx, [esi + 0x70] */ ecx = (u32)((u32)(esi + 0x70u));
  /* 00529487 call 0x404140 */ esp -= 4; M32(esp) = 0x52948cu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x529487u); RETCHK(0x52948cu, 0x529487u); LOADALL;
  /* 0052948c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052948e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00529490 lea eax, [edi + 0x54] */ eax = (u32)((u32)(edi + 0x54u));
  /* 00529493 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529494 lea ecx, [esi + 0x54] */ ecx = (u32)((u32)(esi + 0x54u));
  /* 00529497 call 0x404140 */ esp -= 4; M32(esp) = 0x52949cu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x529497u); RETCHK(0x52949cu, 0x529497u); LOADALL;
  /* 0052949c mov ecx, dword ptr [edi + 0x8c] */ { const u32 m_ = (u32)(edi + 0x8cu); ecx = (u32)(M32(m_)); }
  /* 005294a2 mov dword ptr [esi + 0x8c], ecx */ { const u32 m_ = (u32)(esi + 0x8cu); M32(m_) = (u32)(ecx); }
  /* 005294a8 mov edx, dword ptr [edi + 0x90] */ { const u32 m_ = (u32)(edi + 0x90u); edx = (u32)(M32(m_)); }
  /* 005294ae mov dword ptr [esi + 0x90], edx */ { const u32 m_ = (u32)(esi + 0x90u); M32(m_) = (u32)(edx); }
  /* 005294b4 mov eax, dword ptr [edi + 0x94] */ { const u32 m_ = (u32)(edi + 0x94u); eax = (u32)(M32(m_)); }
  /* 005294ba mov dword ptr [esi + 0x94], eax */ { const u32 m_ = (u32)(esi + 0x94u); M32(m_) = (u32)(eax); }
  /* 005294c0 mov cl, byte ptr [edi + 0x98] */ { const u32 m_ = (u32)(edi + 0x98u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005294c6 mov byte ptr [esi + 0x98], cl */ { const u32 m_ = (u32)(esi + 0x98u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005294cc mov dl, byte ptr [edi + 0x99] */ { const u32 m_ = (u32)(edi + 0x99u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005294d2 mov byte ptr [esi + 0x99], dl */ { const u32 m_ = (u32)(esi + 0x99u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 005294d8 mov al, byte ptr [edi + 0x9a] */ { const u32 m_ = (u32)(edi + 0x9au); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005294de mov byte ptr [esi + 0x9a], al */ { const u32 m_ = (u32)(esi + 0x9au); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005294e4 mov cl, byte ptr [edi + 0x9b] */ { const u32 m_ = (u32)(edi + 0x9bu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005294ea mov byte ptr [esi + 0x9b], cl */ { const u32 m_ = (u32)(esi + 0x9bu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005294f0 mov eax, esi */ { eax = (u32)(esi); }
  /* 005294f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00529500(CPU *c) {
  NATIVE_HOOK(0x529500u) REGS; LOADALL;
L_00529500:;
  /* 00529500 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529501 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529503 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00529505 push 0x620116 */ { u32 v_ = 0x620116u; esp -= 4; M32(esp) = v_; }
  /* 0052950a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00529510 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529511 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00529518 sub esp, 0xac */ { u32 a_ = esp, b_ = 0xacu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052951e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00529523 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00529524 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529525 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00529528 mov dword ptr [esi], 0x652f60 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x652f60u); }
  /* 0052952e add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00529531 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00529532 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00529535 mov dword ptr [ebp - 0xb8], esi */ { const u32 m_ = (u32)(ebp + 0xffffff48u); M32(m_) = (u32)(esi); }
  /* 0052953b call 0x52bff0 */ esp -= 4; M32(esp) = 0x529540u; SAVEALL; F_0052bff0(c); ABI_CHECK(0x52bff0u, 0x52953bu); RETCHK(0x529540u, 0x52953bu); LOADALL;
  /* 00529540 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00529543 mov byte ptr [eax + 0xad], 1 */ { const u32 m_ = (u32)(eax + 0xadu); M8(m_) = (u8)(0x1u); }
  /* 0052954a mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052954d mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 00529550 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00529553 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 00529555 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00529558 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0052955a mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052955d mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00529560 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00529563 call 0x518bb0 */ esp -= 4; M32(esp) = 0x529568u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x529563u); RETCHK(0x529568u, 0x529563u); LOADALL;
  /* 00529568 call 0x518320 */ esp -= 4; M32(esp) = 0x52956du; SAVEALL; F_00518320(c); ABI_CHECK(0x518320u, 0x529568u); RETCHK(0x52956du, 0x529568u); LOADALL;
  /* 0052956d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052956f mov eax, 0x64e38c */ { eax = (u32)(0x64e38cu); }
  /* 00529574 call 0x560ba0 */ esp -= 4; M32(esp) = 0x529579u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x529574u); RETCHK(0x529579u, 0x529574u); LOADALL;
  /* 00529579 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052957b mov eax, 0x64e384 */ { eax = (u32)(0x64e384u); }
  /* 00529580 call 0x560ba0 */ esp -= 4; M32(esp) = 0x529585u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x529580u); RETCHK(0x529585u, 0x529580u); LOADALL;
  /* 00529585 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00529587 mov eax, 0x653078 */ { eax = (u32)(0x653078u); }
  /* 0052958c call 0x560ba0 */ esp -= 4; M32(esp) = 0x529591u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x52958cu); RETCHK(0x529591u, 0x52958cu); LOADALL;
  /* 00529591 mov ecx, 0xf */ { ecx = (u32)(0xfu); }
  /* 00529596 mov dword ptr [ebp - 0x94], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(ecx); }
  /* 0052959c mov dword ptr [ebp - 0x98], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(ebx); }
  /* 005295a2 mov byte ptr [ebp - 0xa8], bl */ { const u32 m_ = (u32)(ebp + 0xffffff58u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005295a8 mov dword ptr [ebp - 0x78], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff88u); M32(m_) = (u32)(ecx); }
  /* 005295ab mov dword ptr [ebp - 0x7c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(ebx); }
  /* 005295ae mov byte ptr [ebp - 0x8c], bl */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005295b4 mov dword ptr [ebp - 0x5c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(ecx); }
  /* 005295b7 mov dword ptr [ebp - 0x60], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(ebx); }
  /* 005295ba mov byte ptr [ebp - 0x70], bl */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005295bd mov dword ptr [ebp - 0x40], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ecx); }
  /* 005295c0 mov dword ptr [ebp - 0x44], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(ebx); }
  /* 005295c3 mov byte ptr [ebp - 0x54], bl */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005295c6 mov dword ptr [ebp - 0x24], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ecx); }
  /* 005295c9 mov dword ptr [ebp - 0x28], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ebx); }
  /* 005295cc mov byte ptr [ebp - 0x38], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005295cf mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 005295d3 mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 005295d6 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005295d8 mov dword ptr [ebp - 0xb0], edi */ { const u32 m_ = (u32)(ebp + 0xffffff50u); M32(m_) = (u32)(edi); }
  /* 005295de je 0x5297df */ if (ZF_) goto L_005297df;
  /* 005295e4 jmp 0x5295f0 */ goto L_005295f0;
L_005295e6:;
  /* 005295e6 mov edi, dword ptr [ebp - 0xb0] */ { const u32 m_ = (u32)(ebp + 0xffffff50u); edi = (u32)(M32(m_)); }
  /* 005295ec lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005295f0:;
  /* 005295f0 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005295f2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005295f4 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5295f7u; SAVEALL; call_ind(c, t_); RETCHK(0x5295f7u, 0x5295f4u); LOADALL; }
  /* 005295f7 mov esi, eax */ { esi = (u32)(eax); }
  /* 005295f9 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005295fb je 0x5297ce */ if (ZF_) goto L_005297ce;
  /* 00529601 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529602 mov eax, 0x653070 */ { eax = (u32)(0x653070u); }
  /* 00529607 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52960cu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x529607u); RETCHK(0x52960cu, 0x529607u); LOADALL;
  /* 0052960c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052960e lea edi, [ecx + 1] */ edi = (u32)((u32)(ecx + 0x1u));
L_00529611:;
  /* 00529611 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00529613 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00529614 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00529616 jne 0x529611 */ if (!ZF_) goto L_00529611;
  /* 00529618 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052961a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052961b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052961c lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00529622 call 0x404420 */ esp -= 4; M32(esp) = 0x529627u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x529622u); RETCHK(0x529627u, 0x529622u); LOADALL;
  /* 00529627 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529628 mov eax, 0x6515a0 */ { eax = (u32)(0x6515a0u); }
  /* 0052962d call 0x560ed0 */ esp -= 4; M32(esp) = 0x529632u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52962du); RETCHK(0x529632u, 0x52962du); LOADALL;
  /* 00529632 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00529634 lea edi, [ecx + 1] */ edi = (u32)((u32)(ecx + 0x1u));
L_00529637:;
  /* 00529637 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00529639 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052963a cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052963c jne 0x529637 */ if (!ZF_) goto L_00529637;
  /* 0052963e sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00529640 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529641 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529642 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 00529648 call 0x404420 */ esp -= 4; M32(esp) = 0x52964du; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x529648u); RETCHK(0x52964du, 0x529648u); LOADALL;
  /* 0052964d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052964e mov eax, 0x653064 */ { eax = (u32)(0x653064u); }
  /* 00529653 call 0x560ed0 */ esp -= 4; M32(esp) = 0x529658u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x529653u); RETCHK(0x529658u, 0x529653u); LOADALL;
  /* 00529658 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052965a lea edi, [ecx + 1] */ edi = (u32)((u32)(ecx + 0x1u));
  /* 0052965d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00529660:;
  /* 00529660 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00529662 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00529663 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00529665 jne 0x529660 */ if (!ZF_) goto L_00529660;
  /* 00529667 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00529669 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052966a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052966b lea ecx, [ebp - 0x74] */ ecx = (u32)((u32)(ebp + 0xffffff8cu));
  /* 0052966e call 0x404420 */ esp -= 4; M32(esp) = 0x529673u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x52966eu); RETCHK(0x529673u, 0x52966eu); LOADALL;
  /* 00529673 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529674 mov eax, 0x653058 */ { eax = (u32)(0x653058u); }
  /* 00529679 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52967eu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x529679u); RETCHK(0x52967eu, 0x529679u); LOADALL;
  /* 0052967e cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529680 je 0x52968e */ if (ZF_) goto L_0052968e;
  /* 00529682 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529683 call 0x5fe92e */ esp -= 4; M32(esp) = 0x529688u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x529683u); RETCHK(0x529688u, 0x529683u); LOADALL;
  /* 00529688 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052968b mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
L_0052968e:;
  /* 0052968e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052968f mov eax, 0x65304c */ { eax = (u32)(0x65304cu); }
  /* 00529694 call 0x560ed0 */ esp -= 4; M32(esp) = 0x529699u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x529694u); RETCHK(0x529699u, 0x529694u); LOADALL;
  /* 00529699 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052969b je 0x5296a9 */ if (ZF_) goto L_005296a9;
  /* 0052969d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052969e call 0x5fe92e */ esp -= 4; M32(esp) = 0x5296a3u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52969eu); RETCHK(0x5296a3u, 0x52969eu); LOADALL;
  /* 005296a3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005296a6 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_005296a9:;
  /* 005296a9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005296aa mov eax, 0x653044 */ { eax = (u32)(0x653044u); }
  /* 005296af call 0x560ed0 */ esp -= 4; M32(esp) = 0x5296b4u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5296afu); RETCHK(0x5296b4u, 0x5296afu); LOADALL;
  /* 005296b4 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005296b6 je 0x5296c4 */ if (ZF_) goto L_005296c4;
  /* 005296b8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005296b9 call 0x5fe92e */ esp -= 4; M32(esp) = 0x5296beu; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x5296b9u); RETCHK(0x5296beu, 0x5296b9u); LOADALL;
  /* 005296be add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005296c1 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_005296c4:;
  /* 005296c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005296c5 mov eax, 0x65303c */ { eax = (u32)(0x65303cu); }
  /* 005296ca call 0x560ed0 */ esp -= 4; M32(esp) = 0x5296cfu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5296cau); RETCHK(0x5296cfu, 0x5296cau); LOADALL;
  /* 005296cf cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005296d1 je 0x5296e4 */ if (ZF_) goto L_005296e4;
  /* 005296d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005296d4 call 0x5fe92e */ esp -= 4; M32(esp) = 0x5296d9u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x5296d4u); RETCHK(0x5296d9u, 0x5296d4u); LOADALL;
  /* 005296d9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005296dc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005296de setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005296e1 mov byte ptr [ebp - 0x14], cl */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M8(m_) = (u8)((ecx & 0xffu)); }
L_005296e4:;
  /* 005296e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005296e5 mov eax, 0x653030 */ { eax = (u32)(0x653030u); }
  /* 005296ea call 0x560ed0 */ esp -= 4; M32(esp) = 0x5296efu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5296eau); RETCHK(0x5296efu, 0x5296eau); LOADALL;
  /* 005296ef cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005296f1 je 0x529704 */ if (ZF_) goto L_00529704;
  /* 005296f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005296f4 call 0x5fe92e */ esp -= 4; M32(esp) = 0x5296f9u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x5296f4u); RETCHK(0x5296f9u, 0x5296f4u); LOADALL;
  /* 005296f9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005296fc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005296fe setne dl */ { edx = (edx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00529701 mov byte ptr [ebp - 0x11], dl */ { const u32 m_ = (u32)(ebp + 0xffffffefu); M8(m_) = (u8)((edx & 0xffu)); }
L_00529704:;
  /* 00529704 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529705 mov eax, 0x642888 */ { eax = (u32)(0x642888u); }
  /* 0052970a call 0x560ed0 */ esp -= 4; M32(esp) = 0x52970fu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52970au); RETCHK(0x52970fu, 0x52970au); LOADALL;
  /* 0052970f cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529711 je 0x529724 */ if (ZF_) goto L_00529724;
  /* 00529713 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529714 call 0x5fe92e */ esp -= 4; M32(esp) = 0x529719u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x529714u); RETCHK(0x529719u, 0x529714u); LOADALL;
  /* 00529719 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052971c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052971e setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00529721 mov byte ptr [ebp - 0x13], al */ { const u32 m_ = (u32)(ebp + 0xffffffedu); M8(m_) = (u8)((eax & 0xffu)); }
L_00529724:;
  /* 00529724 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529725 mov eax, 0x650c44 */ { eax = (u32)(0x650c44u); }
  /* 0052972a call 0x560ed0 */ esp -= 4; M32(esp) = 0x52972fu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52972au); RETCHK(0x52972fu, 0x52972au); LOADALL;
  /* 0052972f cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529731 je 0x529744 */ if (ZF_) goto L_00529744;
  /* 00529733 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529734 call 0x5fe92e */ esp -= 4; M32(esp) = 0x529739u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x529734u); RETCHK(0x529739u, 0x529734u); LOADALL;
  /* 00529739 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052973c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052973e setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00529741 mov byte ptr [ebp - 0x12], cl */ { const u32 m_ = (u32)(ebp + 0xffffffeeu); M8(m_) = (u8)((ecx & 0xffu)); }
L_00529744:;
  /* 00529744 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529745 mov eax, 0x653028 */ { eax = (u32)(0x653028u); }
  /* 0052974a call 0x560ed0 */ esp -= 4; M32(esp) = 0x52974fu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52974au); RETCHK(0x52974fu, 0x52974au); LOADALL;
  /* 0052974f mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00529751 lea edi, [ecx + 1] */ edi = (u32)((u32)(ecx + 0x1u));
L_00529754:;
  /* 00529754 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00529756 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00529757 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00529759 jne 0x529754 */ if (!ZF_) goto L_00529754;
  /* 0052975b sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052975d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052975e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052975f lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00529762 call 0x404420 */ esp -= 4; M32(esp) = 0x529767u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x529762u); RETCHK(0x529767u, 0x529762u); LOADALL;
  /* 00529767 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529768 mov eax, 0x65301c */ { eax = (u32)(0x65301cu); }
  /* 0052976d call 0x560ed0 */ esp -= 4; M32(esp) = 0x529772u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52976du); RETCHK(0x529772u, 0x52976du); LOADALL;
  /* 00529772 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00529774 lea edi, [ecx + 1] */ edi = (u32)((u32)(ecx + 0x1u));
L_00529777:;
  /* 00529777 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00529779 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052977a cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052977c jne 0x529777 */ if (!ZF_) goto L_00529777;
  /* 0052977e sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00529780 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529781 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529782 lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00529785 call 0x404420 */ esp -= 4; M32(esp) = 0x52978au; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x529785u); RETCHK(0x52978au, 0x529785u); LOADALL;
  /* 0052978a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052978b mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 00529790 call 0x560ed0 */ esp -= 4; M32(esp) = 0x529795u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x529790u); RETCHK(0x529795u, 0x529790u); LOADALL;
  /* 00529795 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529797 je 0x5297c8 */ if (ZF_) goto L_005297c8;
  /* 00529799 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052979a call 0x5fe92e */ esp -= 4; M32(esp) = 0x52979fu; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52979au); RETCHK(0x52979fu, 0x52979au); LOADALL;
  /* 0052979f mov ebx, dword ptr [ebp - 0xb8] */ { const u32 m_ = (u32)(ebp + 0xffffff48u); ebx = (u32)(M32(m_)); }
  /* 005297a5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005297a8 lea ecx, [ebp - 0xb4] */ ecx = (u32)((u32)(ebp + 0xffffff4cu));
  /* 005297ae mov dword ptr [ebp - 0xb4], eax */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); M32(m_) = (u32)(eax); }
  /* 005297b4 call 0x52a9c0 */ esp -= 4; M32(esp) = 0x5297b9u; SAVEALL; F_0052a9c0(c); ABI_CHECK(0x52a9c0u, 0x5297b4u); RETCHK(0x5297b9u, 0x5297b4u); LOADALL;
  /* 005297b9 lea edi, [ebp - 0xac] */ edi = (u32)((u32)(ebp + 0xffffff54u));
  /* 005297bf mov esi, eax */ { esi = (u32)(eax); }
  /* 005297c1 call 0x529450 */ esp -= 4; M32(esp) = 0x5297c6u; SAVEALL; F_00529450(c); ABI_CHECK(0x529450u, 0x5297c1u); RETCHK(0x5297c6u, 0x5297c1u); LOADALL;
  /* 005297c6 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_005297c8:;
  /* 005297c8 mov edi, dword ptr [ebp - 0xb0] */ { const u32 m_ = (u32)(ebp + 0xffffff50u); edi = (u32)(M32(m_)); }
L_005297ce:;
  /* 005297ce mov edi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edi = (u32)(M32(m_)); }
  /* 005297d1 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005297d3 mov dword ptr [ebp - 0xb0], edi */ { const u32 m_ = (u32)(ebp + 0xffffff50u); M32(m_) = (u32)(edi); }
  /* 005297d9 jne 0x5295e6 */ if (!ZF_) goto L_005295e6;
L_005297df:;
  /* 005297df lea esi, [ebp - 0xac] */ esi = (u32)((u32)(ebp + 0xffffff54u));
  /* 005297e5 call 0x529870 */ esp -= 4; M32(esp) = 0x5297eau; SAVEALL; F_00529870(c); ABI_CHECK(0x529870u, 0x5297e5u); RETCHK(0x5297eau, 0x5297e5u); LOADALL;
  /* 005297ea mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005297ed mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005297f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005297f1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005297f2 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005297f9 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005297fc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005297fd call 0x61af31 */ esp -= 4; M32(esp) = 0x529802u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x5297fdu); RETCHK(0x529802u, 0x5297fdu); LOADALL;
  /* 00529802 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529804 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529805 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00529810(CPU *c) {
  NATIVE_HOOK(0x529810u) REGS; LOADALL;
L_00529810:;
  /* 00529810 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529811 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529813 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529814 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00529816 call 0x529910 */ esp -= 4; M32(esp) = 0x52981bu; SAVEALL; F_00529910(c); ABI_CHECK(0x529910u, 0x529816u); RETCHK(0x52981bu, 0x529816u); LOADALL;
  /* 0052981b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052981f je 0x52982a */ if (ZF_) goto L_0052982a;
  /* 00529821 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529822 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x529827u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x529822u); RETCHK(0x529827u, 0x529822u); LOADALL;
  /* 00529827 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052982a:;
  /* 0052982a mov eax, esi */ { eax = (u32)(esi); }
  /* 0052982c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052982d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052982e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00529870(CPU *c) {
  NATIVE_HOOK(0x529870u) REGS; LOADALL;
L_00529870:;
  /* 00529870 cmp dword ptr [esi + 0x88], 0x10 */ { const u32 m_ = (u32)(esi + 0x88u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529877 jb 0x529885 */ if (CF_) goto L_00529885;
  /* 00529879 mov eax, dword ptr [esi + 0x74] */ { const u32 m_ = (u32)(esi + 0x74u); eax = (u32)(M32(m_)); }
  /* 0052987c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052987d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x529882u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52987du); RETCHK(0x529882u, 0x52987du); LOADALL;
  /* 00529882 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00529885:;
  /* 00529885 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00529886 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00529888 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00529889 mov edi, 0xf */ { edi = (u32)(0xfu); }
  /* 0052988e mov dword ptr [esi + 0x88], edi */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(edi); }
  /* 00529894 mov dword ptr [esi + 0x84], ebx */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(ebx); }
  /* 0052989a mov byte ptr [esi + 0x74], bl */ { const u32 m_ = (u32)(esi + 0x74u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052989d cmp dword ptr [esi + 0x6c], 0x10 */ { const u32 m_ = (u32)(esi + 0x6cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005298a1 jb 0x5298af */ if (CF_) goto L_005298af;
  /* 005298a3 mov ecx, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); ecx = (u32)(M32(m_)); }
  /* 005298a6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005298a7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5298acu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5298a7u); RETCHK(0x5298acu, 0x5298a7u); LOADALL;
  /* 005298ac add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005298af:;
  /* 005298af mov dword ptr [esi + 0x6c], edi */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(edi); }
  /* 005298b2 mov dword ptr [esi + 0x68], ebx */ { const u32 m_ = (u32)(esi + 0x68u); M32(m_) = (u32)(ebx); }
  /* 005298b5 mov byte ptr [esi + 0x58], bl */ { const u32 m_ = (u32)(esi + 0x58u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005298b8 cmp dword ptr [esi + 0x50], 0x10 */ { const u32 m_ = (u32)(esi + 0x50u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005298bc jb 0x5298ca */ if (CF_) goto L_005298ca;
  /* 005298be mov edx, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); edx = (u32)(M32(m_)); }
  /* 005298c1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005298c2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5298c7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5298c2u); RETCHK(0x5298c7u, 0x5298c2u); LOADALL;
  /* 005298c7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005298ca:;
  /* 005298ca mov dword ptr [esi + 0x50], edi */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(edi); }
  /* 005298cd mov dword ptr [esi + 0x4c], ebx */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(ebx); }
  /* 005298d0 mov byte ptr [esi + 0x3c], bl */ { const u32 m_ = (u32)(esi + 0x3cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005298d3 cmp dword ptr [esi + 0x34], 0x10 */ { const u32 m_ = (u32)(esi + 0x34u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005298d7 jb 0x5298e5 */ if (CF_) goto L_005298e5;
  /* 005298d9 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 005298dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005298dd call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5298e2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5298ddu); RETCHK(0x5298e2u, 0x5298ddu); LOADALL;
  /* 005298e2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005298e5:;
  /* 005298e5 mov dword ptr [esi + 0x34], edi */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(edi); }
  /* 005298e8 mov dword ptr [esi + 0x30], ebx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(ebx); }
  /* 005298eb mov byte ptr [esi + 0x20], bl */ { const u32 m_ = (u32)(esi + 0x20u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005298ee cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005298f2 jb 0x529900 */ if (CF_) goto L_00529900;
  /* 005298f4 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005298f7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005298f8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5298fdu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5298f8u); RETCHK(0x5298fdu, 0x5298f8u); LOADALL;
  /* 005298fd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00529900:;
  /* 00529900 mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
  /* 00529903 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00529906 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00529907 mov byte ptr [esi + 4], bl */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052990a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052990b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00529910(CPU *c) {
  NATIVE_HOOK(0x529910u) REGS; LOADALL;
L_00529910:;
  /* 00529910 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529911 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529913 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00529915 push 0x62115b */ { u32 v_ = 0x62115bu; esp -= 4; M32(esp) = v_; }
  /* 0052991a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00529920 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529921 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00529928 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529929 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052992a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052992b mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 0052992e mov dword ptr [ecx], 0x652f60 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x652f60u); }
  /* 00529934 lea esi, [ecx + 4] */ esi = (u32)((u32)(ecx + 0x4u));
  /* 00529937 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00529939 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0052993c mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052993f mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00529942 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529943 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00529945 call 0x52ae20 */ esp -= 4; M32(esp) = 0x52994au; SAVEALL; F_0052ae20(c); ABI_CHECK(0x52ae20u, 0x529945u); RETCHK(0x52994au, 0x529945u); LOADALL;
  /* 0052994a mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052994d mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 00529950 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00529953 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 00529956 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 00529958 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052995b mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052995e mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00529965 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00529968 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052996a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052996b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052996c lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0052996f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00529970 call 0x52b2e0 */ esp -= 4; M32(esp) = 0x529975u; SAVEALL; F_0052b2e0(c); ABI_CHECK(0x52b2e0u, 0x529970u); RETCHK(0x529975u, 0x529970u); LOADALL;
  /* 00529975 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00529978 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529979 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52997eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x529979u); RETCHK(0x52997eu, 0x529979u); LOADALL;
  /* 0052997e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00529981 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00529984 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 00529987 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 0052998a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052998b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052998c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00529993 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529995 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529996 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005299a0(CPU *c) {
  NATIVE_HOOK(0x5299a0u) REGS; LOADALL;
L_005299a0:;
  /* 005299a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005299a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005299a3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005299a9 mov cl, byte ptr [0x9be184] */ { const u32 m_ = (u32)(0x9be184u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005299af push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005299b1 push 0x6240ee */ { u32 v_ = 0x6240eeu; esp -= 4; M32(esp) = v_; }
  /* 005299b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005299b7 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005299bc test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005299be mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005299c5 jne 0x5299eb */ if (!ZF_) goto L_005299eb;
  /* 005299c7 or dword ptr [0x9be184], eax */ { const u32 m_ = (u32)(0x9be184u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005299cd push 0x9be174 */ { u32 v_ = 0x9be174u; esp -= 4; M32(esp) = v_; }
  /* 005299d2 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005299d9 call 0x529500 */ esp -= 4; M32(esp) = 0x5299deu; SAVEALL; F_00529500(c); ABI_CHECK(0x529500u, 0x5299d9u); RETCHK(0x5299deu, 0x5299d9u); LOADALL;
  /* 005299de push 0x62c640 */ { u32 v_ = 0x62c640u; esp -= 4; M32(esp) = v_; }
  /* 005299e3 call 0x5fe916 */ esp -= 4; M32(esp) = 0x5299e8u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x5299e3u); RETCHK(0x5299e8u, 0x5299e3u); LOADALL;
  /* 005299e8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005299eb:;
  /* 005299eb mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005299ee mov eax, 0x9be174 */ { eax = (u32)(0x9be174u); }
  /* 005299f3 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005299fa mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005299fc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005299fd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00529a00(CPU *c) {
  NATIVE_HOOK(0x529a00u) REGS; LOADALL;
L_00529a00:;
  /* 00529a00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529a01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529a03 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529a04 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00529a07 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00529a09 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529a0b mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00529a0e je 0x529a5e */ if (ZF_) goto L_00529a5e;
L_00529a10:;
  /* 00529a10 mov cl, byte ptr [eax + 0xaa] */ { const u32 m_ = (u32)(eax + 0xaau); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00529a16 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00529a18 je 0x529a4e */ if (ZF_) goto L_00529a4e;
  /* 00529a1a mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00529a1d cmp dword ptr [eax + 0x9c], ecx */ { const u32 m_ = (u32)(eax + 0x9cu); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529a23 jg 0x529a4e */ if (!(ZF_|LT_)) goto L_00529a4e;
  /* 00529a25 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00529a27 je 0x529a33 */ if (ZF_) goto L_00529a33;
  /* 00529a29 mov cl, byte ptr [eax + 0xa8] */ { const u32 m_ = (u32)(eax + 0xa8u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00529a2f test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00529a31 je 0x529a4e */ if (ZF_) goto L_00529a4e;
L_00529a33:;
  /* 00529a33 mov cl, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00529a36 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00529a38 jne 0x529a44 */ if (!ZF_) goto L_00529a44;
  /* 00529a3a mov cl, byte ptr [eax + 0xa9] */ { const u32 m_ = (u32)(eax + 0xa9u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00529a40 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00529a42 jne 0x529a4e */ if (!ZF_) goto L_00529a4e;
L_00529a44:;
  /* 00529a44 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00529a46 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00529a49 call 0x52ac10 */ esp -= 4; M32(esp) = 0x529a4eu; SAVEALL; F_0052ac10(c); ABI_CHECK(0x52ac10u, 0x529a49u); RETCHK(0x529a4eu, 0x529a49u); LOADALL;
L_00529a4e:;
  /* 00529a4e lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00529a51 call 0x4a82f0 */ esp -= 4; M32(esp) = 0x529a56u; SAVEALL; F_004a82f0(c); ABI_CHECK(0x4a82f0u, 0x529a51u); RETCHK(0x529a56u, 0x529a51u); LOADALL;
  /* 00529a56 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00529a59 cmp eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529a5c jne 0x529a10 */ if (!ZF_) goto L_00529a10;
L_00529a5e:;
  /* 00529a5e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529a60 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529a61 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00529a70(CPU *c) {
  NATIVE_HOOK(0x529a70u) REGS; LOADALL;
L_00529a70:;
  /* 00529a70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529a71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529a73 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529a74 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529a75 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00529a78 lea esi, [edi + 4] */ esi = (u32)((u32)(edi + 0x4u));
  /* 00529a7b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529a7c mov eax, esi */ { eax = (u32)(esi); }
  /* 00529a7e call 0x52b520 */ esp -= 4; M32(esp) = 0x529a83u; SAVEALL; F_0052b520(c); ABI_CHECK(0x52b520u, 0x529a7eu); RETCHK(0x529a83u, 0x529a7eu); LOADALL;
  /* 00529a83 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00529a86 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529a88 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00529a8b je 0x529a9a */ if (ZF_) goto L_00529a9a;
  /* 00529a8d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00529a90 cmp ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529a93 jl 0x529a9a */ if (LT_) goto L_00529a9a;
  /* 00529a95 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00529a98 jmp 0x529aa0 */ goto L_00529aa0;
L_00529a9a:;
  /* 00529a9a mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 00529a9d lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
L_00529aa0:;
  /* 00529aa0 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00529aa2 cmp eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529aa5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00529aa6 je 0x529ab1 */ if (ZF_) goto L_00529ab1;
  /* 00529aa8 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00529aab mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529aad pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529aae ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00529ab1:;
  /* 00529ab1 mov eax, 0x68a57c */ { eax = (u32)(0x68a57cu); }
  /* 00529ab6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529ab8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529ab9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00529ac0(CPU *c) {
  NATIVE_HOOK(0x529ac0u) REGS; LOADALL;
L_00529ac0:;
  /* 00529ac0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529ac1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529ac3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529ac4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529ac5 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00529ac8 lea esi, [edi + 4] */ esi = (u32)((u32)(edi + 0x4u));
  /* 00529acb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529acc mov eax, esi */ { eax = (u32)(esi); }
  /* 00529ace call 0x52b520 */ esp -= 4; M32(esp) = 0x529ad3u; SAVEALL; F_0052b520(c); ABI_CHECK(0x52b520u, 0x529aceu); RETCHK(0x529ad3u, 0x529aceu); LOADALL;
  /* 00529ad3 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00529ad6 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529ad8 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00529adb je 0x529aea */ if (ZF_) goto L_00529aea;
  /* 00529add mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00529ae0 cmp ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529ae3 jl 0x529aea */ if (LT_) goto L_00529aea;
  /* 00529ae5 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00529ae8 jmp 0x529af0 */ goto L_00529af0;
L_00529aea:;
  /* 00529aea mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 00529aed lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
L_00529af0:;
  /* 00529af0 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00529af2 cmp eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529af5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00529af6 je 0x529b01 */ if (ZF_) goto L_00529b01;
  /* 00529af8 add eax, 0x2c */ { u32 a_ = eax, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00529afb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529afd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529afe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00529b01:;
  /* 00529b01 mov eax, 0x68a57c */ { eax = (u32)(0x68a57cu); }
  /* 00529b06 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529b08 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529b09 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00529b10(CPU *c) {
  NATIVE_HOOK(0x529b10u) REGS; LOADALL;
L_00529b10:;
  /* 00529b10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529b11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529b13 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529b14 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529b15 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00529b18 lea esi, [edi + 4] */ esi = (u32)((u32)(edi + 0x4u));
  /* 00529b1b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529b1c mov eax, esi */ { eax = (u32)(esi); }
  /* 00529b1e call 0x52b520 */ esp -= 4; M32(esp) = 0x529b23u; SAVEALL; F_0052b520(c); ABI_CHECK(0x52b520u, 0x529b1eu); RETCHK(0x529b23u, 0x529b1eu); LOADALL;
  /* 00529b23 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00529b26 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529b28 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00529b2b je 0x529b3a */ if (ZF_) goto L_00529b3a;
  /* 00529b2d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00529b30 cmp ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529b33 jl 0x529b3a */ if (LT_) goto L_00529b3a;
  /* 00529b35 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00529b38 jmp 0x529b40 */ goto L_00529b40;
L_00529b3a:;
  /* 00529b3a mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 00529b3d lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
L_00529b40:;
  /* 00529b40 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00529b42 cmp eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529b45 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00529b46 je 0x529b51 */ if (ZF_) goto L_00529b51;
  /* 00529b48 add eax, 0x48 */ { u32 a_ = eax, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00529b4b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529b4d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529b4e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00529b51:;
  /* 00529b51 mov eax, 0x68a57c */ { eax = (u32)(0x68a57cu); }
  /* 00529b56 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529b58 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529b59 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00529b60(CPU *c) {
  NATIVE_HOOK(0x529b60u) REGS; LOADALL;
L_00529b60:;
  /* 00529b60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529b61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529b63 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529b64 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529b65 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00529b68 lea esi, [edi + 4] */ esi = (u32)((u32)(edi + 0x4u));
  /* 00529b6b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529b6c mov eax, esi */ { eax = (u32)(esi); }
  /* 00529b6e call 0x52b520 */ esp -= 4; M32(esp) = 0x529b73u; SAVEALL; F_0052b520(c); ABI_CHECK(0x52b520u, 0x529b6eu); RETCHK(0x529b73u, 0x529b6eu); LOADALL;
  /* 00529b73 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00529b76 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529b78 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00529b7b je 0x529b8a */ if (ZF_) goto L_00529b8a;
  /* 00529b7d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00529b80 cmp ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529b83 jl 0x529b8a */ if (LT_) goto L_00529b8a;
  /* 00529b85 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00529b88 jmp 0x529b90 */ goto L_00529b90;
L_00529b8a:;
  /* 00529b8a mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 00529b8d lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
L_00529b90:;
  /* 00529b90 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00529b92 cmp eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529b95 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00529b96 je 0x529ba3 */ if (ZF_) goto L_00529ba3;
  /* 00529b98 add eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00529b9d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529b9f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529ba0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00529ba3:;
  /* 00529ba3 mov eax, 0x68a57c */ { eax = (u32)(0x68a57cu); }
  /* 00529ba8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529baa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529bab ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00529bb0(CPU *c) {
  NATIVE_HOOK(0x529bb0u) REGS; LOADALL;
L_00529bb0:;
  /* 00529bb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529bb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529bb3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529bb4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529bb5 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00529bb8 lea esi, [edi + 4] */ esi = (u32)((u32)(edi + 0x4u));
  /* 00529bbb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529bbc mov eax, esi */ { eax = (u32)(esi); }
  /* 00529bbe call 0x52b520 */ esp -= 4; M32(esp) = 0x529bc3u; SAVEALL; F_0052b520(c); ABI_CHECK(0x52b520u, 0x529bbeu); RETCHK(0x529bc3u, 0x529bbeu); LOADALL;
  /* 00529bc3 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00529bc6 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529bc8 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00529bcb je 0x529bda */ if (ZF_) goto L_00529bda;
  /* 00529bcd mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00529bd0 cmp ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529bd3 jl 0x529bda */ if (LT_) goto L_00529bda;
  /* 00529bd5 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00529bd8 jmp 0x529be0 */ goto L_00529be0;
L_00529bda:;
  /* 00529bda mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 00529bdd lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
L_00529be0:;
  /* 00529be0 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00529be2 cmp eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529be5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00529be6 je 0x529bf1 */ if (ZF_) goto L_00529bf1;
  /* 00529be8 add eax, 0x64 */ { u32 a_ = eax, b_ = 0x64u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00529beb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529bed pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529bee ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00529bf1:;
  /* 00529bf1 mov eax, 0x68a57c */ { eax = (u32)(0x68a57cu); }
  /* 00529bf6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529bf8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529bf9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00529c00(CPU *c) {
  NATIVE_HOOK(0x529c00u) REGS; LOADALL;
L_00529c00:;
  /* 00529c00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529c01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529c03 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529c04 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529c05 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00529c08 lea esi, [edi + 4] */ esi = (u32)((u32)(edi + 0x4u));
  /* 00529c0b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529c0c mov eax, esi */ { eax = (u32)(esi); }
  /* 00529c0e call 0x52b520 */ esp -= 4; M32(esp) = 0x529c13u; SAVEALL; F_0052b520(c); ABI_CHECK(0x52b520u, 0x529c0eu); RETCHK(0x529c13u, 0x529c0eu); LOADALL;
  /* 00529c13 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00529c16 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529c18 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00529c1b je 0x529c2a */ if (ZF_) goto L_00529c2a;
  /* 00529c1d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00529c20 cmp ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529c23 jl 0x529c2a */ if (LT_) goto L_00529c2a;
  /* 00529c25 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00529c28 jmp 0x529c30 */ goto L_00529c30;
L_00529c2a:;
  /* 00529c2a mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 00529c2d lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
L_00529c30:;
  /* 00529c30 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00529c32 cmp eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529c35 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00529c36 je 0x529c44 */ if (ZF_) goto L_00529c44;
  /* 00529c38 mov eax, dword ptr [eax + 0x9c] */ { const u32 m_ = (u32)(eax + 0x9cu); eax = (u32)(M32(m_)); }
  /* 00529c3e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529c40 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529c41 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00529c44:;
  /* 00529c44 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00529c49 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529c4b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529c4c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00529c50(CPU *c) {
  NATIVE_HOOK(0x529c50u) REGS; LOADALL;
L_00529c50:;
  /* 00529c50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529c51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529c53 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529c54 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529c55 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00529c58 lea esi, [edi + 4] */ esi = (u32)((u32)(edi + 0x4u));
  /* 00529c5b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529c5c mov eax, esi */ { eax = (u32)(esi); }
  /* 00529c5e call 0x52b520 */ esp -= 4; M32(esp) = 0x529c63u; SAVEALL; F_0052b520(c); ABI_CHECK(0x52b520u, 0x529c5eu); RETCHK(0x529c63u, 0x529c5eu); LOADALL;
  /* 00529c63 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00529c66 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529c68 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00529c6b je 0x529c7a */ if (ZF_) goto L_00529c7a;
  /* 00529c6d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00529c70 cmp ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529c73 jl 0x529c7a */ if (LT_) goto L_00529c7a;
  /* 00529c75 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00529c78 jmp 0x529c80 */ goto L_00529c80;
L_00529c7a:;
  /* 00529c7a mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 00529c7d lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
L_00529c80:;
  /* 00529c80 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00529c82 cmp eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529c85 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00529c86 je 0x529c94 */ if (ZF_) goto L_00529c94;
  /* 00529c88 mov eax, dword ptr [eax + 0xa0] */ { const u32 m_ = (u32)(eax + 0xa0u); eax = (u32)(M32(m_)); }
  /* 00529c8e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529c90 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529c91 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00529c94:;
  /* 00529c94 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00529c96 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529c98 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529c99 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00529ca0(CPU *c) {
  NATIVE_HOOK(0x529ca0u) REGS; LOADALL;
L_00529ca0:;
  /* 00529ca0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529ca1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529ca3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529ca4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529ca5 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00529ca8 lea esi, [edi + 4] */ esi = (u32)((u32)(edi + 0x4u));
  /* 00529cab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529cac mov eax, esi */ { eax = (u32)(esi); }
  /* 00529cae call 0x52b520 */ esp -= 4; M32(esp) = 0x529cb3u; SAVEALL; F_0052b520(c); ABI_CHECK(0x52b520u, 0x529caeu); RETCHK(0x529cb3u, 0x529caeu); LOADALL;
  /* 00529cb3 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00529cb6 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529cb8 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00529cbb je 0x529cca */ if (ZF_) goto L_00529cca;
  /* 00529cbd mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00529cc0 cmp ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529cc3 jl 0x529cca */ if (LT_) goto L_00529cca;
  /* 00529cc5 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00529cc8 jmp 0x529cd0 */ goto L_00529cd0;
L_00529cca:;
  /* 00529cca mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 00529ccd lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
L_00529cd0:;
  /* 00529cd0 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00529cd2 cmp eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529cd5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00529cd6 je 0x529ce4 */ if (ZF_) goto L_00529ce4;
  /* 00529cd8 mov eax, dword ptr [eax + 0xa4] */ { const u32 m_ = (u32)(eax + 0xa4u); eax = (u32)(M32(m_)); }
  /* 00529cde mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529ce0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529ce1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00529ce4:;
  /* 00529ce4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00529ce6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529ce8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529ce9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00529cf0(CPU *c) {
  NATIVE_HOOK(0x529cf0u) REGS; LOADALL;
L_00529cf0:;
  /* 00529cf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529cf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529cf3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529cf4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529cf5 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00529cf8 lea esi, [edi + 4] */ esi = (u32)((u32)(edi + 0x4u));
  /* 00529cfb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529cfc mov eax, esi */ { eax = (u32)(esi); }
  /* 00529cfe call 0x52b520 */ esp -= 4; M32(esp) = 0x529d03u; SAVEALL; F_0052b520(c); ABI_CHECK(0x52b520u, 0x529cfeu); RETCHK(0x529d03u, 0x529cfeu); LOADALL;
  /* 00529d03 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00529d06 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529d08 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00529d0b je 0x529d1a */ if (ZF_) goto L_00529d1a;
  /* 00529d0d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00529d10 cmp ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529d13 jl 0x529d1a */ if (LT_) goto L_00529d1a;
  /* 00529d15 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00529d18 jmp 0x529d20 */ goto L_00529d20;
L_00529d1a:;
  /* 00529d1a mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 00529d1d lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
L_00529d20:;
  /* 00529d20 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00529d22 cmp eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529d25 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00529d26 je 0x529d34 */ if (ZF_) goto L_00529d34;
  /* 00529d28 mov al, byte ptr [eax + 0xab] */ { const u32 m_ = (u32)(eax + 0xabu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00529d2e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529d30 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529d31 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00529d34:;
  /* 00529d34 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00529d36 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529d38 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529d39 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00529d40(CPU *c) {
  NATIVE_HOOK(0x529d40u) REGS; LOADALL;
L_00529d40:;
  /* 00529d40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529d41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529d43 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00529d45 push 0x6200eb */ { u32 v_ = 0x6200ebu; esp -= 4; M32(esp) = v_; }
  /* 00529d4a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00529d50 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529d51 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00529d58 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529d59 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00529d5a mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00529d5d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529d5e lea esi, [ebx + 4] */ esi = (u32)((u32)(ebx + 0x4u));
  /* 00529d61 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00529d62 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00529d64 mov dword ptr [ebx], 0x652f5c */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x652f5cu); }
  /* 00529d6a mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 00529d6d mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 00529d70 mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
  /* 00529d73 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00529d76 call 0x518bb0 */ esp -= 4; M32(esp) = 0x529d7bu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x529d76u); RETCHK(0x529d7bu, 0x529d76u); LOADALL;
  /* 00529d7b call 0x518320 */ esp -= 4; M32(esp) = 0x529d80u; SAVEALL; F_00518320(c); ABI_CHECK(0x518320u, 0x529d7bu); RETCHK(0x529d80u, 0x529d7bu); LOADALL;
  /* 00529d80 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00529d82 mov eax, 0x64e38c */ { eax = (u32)(0x64e38cu); }
  /* 00529d87 call 0x560ba0 */ esp -= 4; M32(esp) = 0x529d8cu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x529d87u); RETCHK(0x529d8cu, 0x529d87u); LOADALL;
  /* 00529d8c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00529d8e cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529d90 je 0x529e40 */ if (ZF_) goto L_00529e40;
  /* 00529d96 mov eax, 0x64e384 */ { eax = (u32)(0x64e384u); }
  /* 00529d9b call 0x560ba0 */ esp -= 4; M32(esp) = 0x529da0u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x529d9bu); RETCHK(0x529da0u, 0x529d9bu); LOADALL;
  /* 00529da0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00529da2 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529da4 je 0x529e40 */ if (ZF_) goto L_00529e40;
  /* 00529daa mov eax, 0x6440f4 */ { eax = (u32)(0x6440f4u); }
  /* 00529daf call 0x560ba0 */ esp -= 4; M32(esp) = 0x529db4u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x529dafu); RETCHK(0x529db4u, 0x529dafu); LOADALL;
  /* 00529db4 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529db6 je 0x529e40 */ if (ZF_) goto L_00529e40;
  /* 00529dbc mov ebx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ebx = (u32)(M32(m_)); }
  /* 00529dbf cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529dc1 je 0x529e2a */ if (ZF_) goto L_00529e2a;
  /* 00529dc3 jmp 0x529dc7 */ goto L_00529dc7;
L_00529dc5:;
  /* 00529dc5 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_00529dc7:;
  /* 00529dc7 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00529dc9 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00529dcb call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x529dceu; SAVEALL; call_ind(c, t_); RETCHK(0x529dceu, 0x529dcbu); LOADALL; }
  /* 00529dce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529dcf mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 00529dd4 call 0x560ed0 */ esp -= 4; M32(esp) = 0x529dd9u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x529dd4u); RETCHK(0x529dd9u, 0x529dd4u); LOADALL;
  /* 00529dd9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529dda call 0x5fe92e */ esp -= 4; M32(esp) = 0x529ddfu; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x529ddau); RETCHK(0x529ddfu, 0x529ddau); LOADALL;
  /* 00529ddf mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00529de2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00529de5 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529de7 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00529dea je 0x529df4 */ if (ZF_) goto L_00529df4;
  /* 00529dec mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 00529def sub edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00529df1 sar edi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
L_00529df4:;
  /* 00529df4 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00529df6 je 0x529e11 */ if (ZF_) goto L_00529e11;
  /* 00529df8 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 00529dfb sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00529dfd sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00529e00 cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529e02 jae 0x529e11 */ if (!CF_) goto L_00529e11;
  /* 00529e04 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00529e07 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 00529e09 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00529e0c mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00529e0f jmp 0x529e23 */ goto L_00529e23;
L_00529e11:;
  /* 00529e11 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00529e14 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529e15 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529e16 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00529e19 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00529e1e call 0x4d2620 */ esp -= 4; M32(esp) = 0x529e23u; SAVEALL; F_004d2620(c); ABI_CHECK(0x4d2620u, 0x529e1eu); RETCHK(0x529e23u, 0x529e1eu); LOADALL;
L_00529e23:;
  /* 00529e23 mov ebx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ebx = (u32)(M32(m_)); }
  /* 00529e26 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00529e28 jne 0x529dc5 */ if (!ZF_) goto L_00529dc5;
L_00529e2a:;
  /* 00529e2a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00529e2d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00529e2e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00529e2f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00529e30 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00529e33 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00529e3a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529e3c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529e3d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00529e40:;
  /* 00529e40 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00529e43 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00529e44 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00529e45 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00529e47 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00529e48 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00529e4f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529e51 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529e52 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00529e60(CPU *c) {
  NATIVE_HOOK(0x529e60u) REGS; LOADALL;
L_00529e60:;
  /* 00529e60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529e61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529e63 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529e64 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00529e66 call 0x529e90 */ esp -= 4; M32(esp) = 0x529e6bu; SAVEALL; F_00529e90(c); ABI_CHECK(0x529e90u, 0x529e66u); RETCHK(0x529e6bu, 0x529e66u); LOADALL;
  /* 00529e6b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00529e6f je 0x529e7a */ if (ZF_) goto L_00529e7a;
  /* 00529e71 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529e72 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x529e77u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x529e72u); RETCHK(0x529e77u, 0x529e72u); LOADALL;
  /* 00529e77 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00529e7a:;
  /* 00529e7a mov eax, esi */ { eax = (u32)(esi); }
  /* 00529e7c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00529e7d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529e7e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00529e90(CPU *c) {
  NATIVE_HOOK(0x529e90u) REGS; LOADALL;
L_00529e90:;
  /* 00529e90 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529e91 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00529e93 mov dword ptr [esi], 0x652f5c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x652f5cu); }
  /* 00529e99 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00529e9c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00529e9e je 0x529ea9 */ if (ZF_) goto L_00529ea9;
  /* 00529ea0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529ea1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x529ea6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x529ea1u); RETCHK(0x529ea6u, 0x529ea1u); LOADALL;
  /* 00529ea6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00529ea9:;
  /* 00529ea9 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 00529eb0 mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 00529eb7 mov dword ptr [esi + 0x10], 0 */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(0x0u); }
  /* 00529ebe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00529ebf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00529ec0(CPU *c) {
  NATIVE_HOOK(0x529ec0u) REGS; LOADALL;
L_00529ec0:;
  /* 00529ec0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529ec1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529ec3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00529ec9 mov cl, byte ptr [0x9be0b0] */ { const u32 m_ = (u32)(0x9be0b0u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00529ecf push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00529ed1 push 0x62113e */ { u32 v_ = 0x62113eu; esp -= 4; M32(esp) = v_; }
  /* 00529ed6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529ed7 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00529edc test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00529ede mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00529ee5 jne 0x529f0b */ if (!ZF_) goto L_00529f0b;
  /* 00529ee7 or dword ptr [0x9be0b0], eax */ { const u32 m_ = (u32)(0x9be0b0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 00529eed push 0x9be09c */ { u32 v_ = 0x9be09cu; esp -= 4; M32(esp) = v_; }
  /* 00529ef2 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00529ef9 call 0x529d40 */ esp -= 4; M32(esp) = 0x529efeu; SAVEALL; F_00529d40(c); ABI_CHECK(0x529d40u, 0x529ef9u); RETCHK(0x529efeu, 0x529ef9u); LOADALL;
  /* 00529efe push 0x62c680 */ { u32 v_ = 0x62c680u; esp -= 4; M32(esp) = v_; }
  /* 00529f03 call 0x5fe916 */ esp -= 4; M32(esp) = 0x529f08u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x529f03u); RETCHK(0x529f08u, 0x529f03u); LOADALL;
  /* 00529f08 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00529f0b:;
  /* 00529f0b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00529f0e mov eax, 0x9be09c */ { eax = (u32)(0x9be09cu); }
  /* 00529f13 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00529f1a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00529f1c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529f1d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00529f20(CPU *c) {
  NATIVE_HOOK(0x529f20u) REGS; LOADALL;
L_00529f20:;
  /* 00529f20 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00529f23 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00529f25 jne 0x529f2a */ if (!ZF_) goto L_00529f2a;
  /* 00529f27 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00529f29 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00529f2a:;
  /* 00529f2a mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 00529f2d sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00529f2f sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00529f32 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00529f40(CPU *c) {
  NATIVE_HOOK(0x529f40u) REGS; LOADALL;
L_00529f40:;
  /* 00529f40 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00529f42 jl 0x529f5f */ if (LT_) goto L_00529f5f;
  /* 00529f44 mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00529f47 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00529f49 je 0x529f5f */ if (ZF_) goto L_00529f5f;
  /* 00529f4b mov eax, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); eax = (u32)(M32(m_)); }
  /* 00529f4e sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00529f50 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00529f53 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529f55 jae 0x529f5f */ if (!CF_) goto L_00529f5f;
  /* 00529f57 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00529f59 lea eax, [eax + esi*4] */ eax = (u32)((u32)(eax + esi * 4u));
  /* 00529f5c mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00529f5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00529f5f:;
  /* 00529f5f or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00529f62 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00529f70(CPU *c) {
  NATIVE_HOOK(0x529f70u) REGS; LOADALL;
L_00529f70:;
  /* 00529f70 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00529f71 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529f72 mov esi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); esi = (u32)(M32(m_)); }
  /* 00529f75 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00529f77:;
  /* 00529f77 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00529f79 je 0x529f97 */ if (ZF_) goto L_00529f97;
  /* 00529f7b mov ecx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00529f7e sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00529f80 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00529f83 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529f85 jae 0x529f97 */ if (!CF_) goto L_00529f97;
  /* 00529f87 mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00529f8a mov ebx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); ebx = (u32)(M32(m_)); }
  /* 00529f8d cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00529f8f lea ecx, [ecx + eax*4] */ ecx = (u32)((u32)(ecx + eax * 4u));
  /* 00529f92 je 0x529f9a */ if (ZF_) goto L_00529f9a;
  /* 00529f94 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00529f95 jmp 0x529f77 */ goto L_00529f77;
L_00529f97:;
  /* 00529f97 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00529f9a:;
  /* 00529f9a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00529f9b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00529f9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00529fa0(CPU *c) {
  NATIVE_HOOK(0x529fa0u) REGS; LOADALL;
L_00529fa0:;
  /* 00529fa0 mov dword ptr [esi], 0x652f58 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x652f58u); }
  /* 00529fa6 call 0x52c4d0 */ esp -= 4; M32(esp) = 0x529fabu; SAVEALL; F_0052c4d0(c); ABI_CHECK(0x52c4d0u, 0x529fa6u); RETCHK(0x529fabu, 0x529fa6u); LOADALL;
  /* 00529fab mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00529fae mov byte ptr [eax + 0x49], 1 */ { const u32 m_ = (u32)(eax + 0x49u); M8(m_) = (u8)(0x1u); }
  /* 00529fb2 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00529fb5 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 00529fb8 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00529fbb mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 00529fbd mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00529fc0 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 00529fc3 mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 00529fca mov eax, esi */ { eax = (u32)(esi); }
  /* 00529fcc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00529fd0(CPU *c) {
  NATIVE_HOOK(0x529fd0u) REGS; LOADALL;
L_00529fd0:;
  /* 00529fd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529fd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529fd3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529fd4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00529fd6 call 0x52a030 */ esp -= 4; M32(esp) = 0x529fdbu; SAVEALL; F_0052a030(c); ABI_CHECK(0x52a030u, 0x529fd6u); RETCHK(0x529fdbu, 0x529fd6u); LOADALL;
  /* 00529fdb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00529fdf je 0x529fea */ if (ZF_) goto L_00529fea;
  /* 00529fe1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529fe2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x529fe7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x529fe2u); RETCHK(0x529fe7u, 0x529fe2u); LOADALL;
  /* 00529fe7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00529fea:;
  /* 00529fea mov eax, esi */ { eax = (u32)(esi); }
  /* 00529fec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00529fed pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00529fee ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052a030(CPU *c) {
  NATIVE_HOOK(0x52a030u) REGS; LOADALL;
L_0052a030:;
  /* 0052a030 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052a031 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052a033 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052a035 push 0x62111b */ { u32 v_ = 0x62111bu; esp -= 4; M32(esp) = v_; }
  /* 0052a03a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052a040 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a041 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052a048 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a049 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a04a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052a04c mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 0052a04f mov dword ptr [esi], 0x652f58 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x652f58u); }
  /* 0052a055 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052a057 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0052a05e call 0x52a0b0 */ esp -= 4; M32(esp) = 0x52a063u; SAVEALL; F_0052a0b0(c); ABI_CHECK(0x52a0b0u, 0x52a05eu); RETCHK(0x52a063u, 0x52a05eu); LOADALL;
  /* 0052a063 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0052a06a mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052a06d mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052a06f add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052a072 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a073 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a074 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0052a077 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a078 call 0x52b660 */ esp -= 4; M32(esp) = 0x52a07du; SAVEALL; F_0052b660(c); ABI_CHECK(0x52b660u, 0x52a078u); RETCHK(0x52a07du, 0x52a078u); LOADALL;
  /* 0052a07d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052a080 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a081 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52a086u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52a081u); RETCHK(0x52a086u, 0x52a081u); LOADALL;
  /* 0052a086 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052a089 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052a08c mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0052a093 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0052a09a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052a09b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052a0a2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052a0a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052a0a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052a0b0(CPU *c) {
  NATIVE_HOOK(0x52a0b0u) REGS; LOADALL;
L_0052a0b0:;
  /* 0052a0b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052a0b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052a0b3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a0b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a0b5 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052a0b7 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052a0ba mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052a0bc cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a0be mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0052a0c1 je 0x52a0df */ if (ZF_) goto L_0052a0df;
L_0052a0c3:;
  /* 0052a0c3 mov eax, dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); eax = (u32)(M32(m_)); }
  /* 0052a0c6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a0c7 call 0x5ab020 */ esp -= 4; M32(esp) = 0x52a0ccu; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x52a0c7u); RETCHK(0x52a0ccu, 0x52a0c7u); LOADALL;
  /* 0052a0cc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052a0cf lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052a0d2 call 0x52bb70 */ esp -= 4; M32(esp) = 0x52a0d7u; SAVEALL; F_0052bb70(c); ABI_CHECK(0x52bb70u, 0x52a0d2u); RETCHK(0x52a0d7u, 0x52a0d2u); LOADALL;
  /* 0052a0d7 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0052a0da cmp eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a0dd jne 0x52a0c3 */ if (!ZF_) goto L_0052a0c3;
L_0052a0df:;
  /* 0052a0df mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052a0e2 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052a0e5 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052a0e8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052a0e9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052a0eb call 0x52aff0 */ esp -= 4; M32(esp) = 0x52a0f0u; SAVEALL; F_0052aff0(c); ABI_CHECK(0x52aff0u, 0x52a0ebu); RETCHK(0x52a0f0u, 0x52a0ebu); LOADALL;
  /* 0052a0f0 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052a0f3 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052a0f6 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052a0f9 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0052a100 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 0052a102 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052a105 mov dword ptr [esi + 8], esi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0052a108 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052a109 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052a10b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052a10c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052a110(CPU *c) {
  NATIVE_HOOK(0x52a110u) REGS; LOADALL;
L_0052a110:;
  /* 0052a110 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052a111 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052a113 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052a119 mov cl, byte ptr [0x9be170] */ { const u32 m_ = (u32)(0x9be170u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052a11f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052a121 push 0x6240ce */ { u32 v_ = 0x6240ceu; esp -= 4; M32(esp) = v_; }
  /* 0052a126 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a127 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0052a12c test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052a12e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052a135 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a136 jne 0x52a15c */ if (!ZF_) goto L_0052a15c;
  /* 0052a138 or dword ptr [0x9be170], eax */ { const u32 m_ = (u32)(0x9be170u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0052a13e mov esi, 0x9be160 */ { esi = (u32)(0x9be160u); }
  /* 0052a143 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0052a14a call 0x529fa0 */ esp -= 4; M32(esp) = 0x52a14fu; SAVEALL; F_00529fa0(c); ABI_CHECK(0x529fa0u, 0x52a14au); RETCHK(0x52a14fu, 0x52a14au); LOADALL;
  /* 0052a14f push 0x62c690 */ { u32 v_ = 0x62c690u; esp -= 4; M32(esp) = v_; }
  /* 0052a154 call 0x5fe916 */ esp -= 4; M32(esp) = 0x52a159u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x52a154u); RETCHK(0x52a159u, 0x52a154u); LOADALL;
  /* 0052a159 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052a15c:;
  /* 0052a15c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052a15f mov eax, 0x9be160 */ { eax = (u32)(0x9be160u); }
  /* 0052a164 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052a16b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052a16c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052a16e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052a16f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052a170(CPU *c) {
  NATIVE_HOOK(0x52a170u) REGS; LOADALL;
L_0052a170:;
  /* 0052a170 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052a171 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052a173 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052a175 push 0x6200d0 */ { u32 v_ = 0x6200d0u; esp -= 4; M32(esp) = v_; }
  /* 0052a17a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052a180 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a181 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052a188 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052a18b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0052a190 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0052a193 call 0x518bb0 */ esp -= 4; M32(esp) = 0x52a198u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x52a193u); RETCHK(0x52a198u, 0x52a193u); LOADALL;
  /* 0052a198 call 0x518320 */ esp -= 4; M32(esp) = 0x52a19du; SAVEALL; F_00518320(c); ABI_CHECK(0x518320u, 0x52a198u); RETCHK(0x52a19du, 0x52a198u); LOADALL;
  /* 0052a19d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052a19f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052a1a1 je 0x52a1d1 */ if (ZF_) goto L_0052a1d1;
  /* 0052a1a3 mov eax, 0x64e38c */ { eax = (u32)(0x64e38cu); }
  /* 0052a1a8 call 0x560ba0 */ esp -= 4; M32(esp) = 0x52a1adu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x52a1a8u); RETCHK(0x52a1adu, 0x52a1a8u); LOADALL;
  /* 0052a1ad mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052a1af test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052a1b1 je 0x52a1d1 */ if (ZF_) goto L_0052a1d1;
  /* 0052a1b3 mov eax, 0x64e384 */ { eax = (u32)(0x64e384u); }
  /* 0052a1b8 call 0x560ba0 */ esp -= 4; M32(esp) = 0x52a1bdu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x52a1b8u); RETCHK(0x52a1bdu, 0x52a1b8u); LOADALL;
  /* 0052a1bd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052a1bf test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052a1c1 je 0x52a1d1 */ if (ZF_) goto L_0052a1d1;
  /* 0052a1c3 mov eax, 0x653010 */ { eax = (u32)(0x653010u); }
  /* 0052a1c8 call 0x560ba0 */ esp -= 4; M32(esp) = 0x52a1cdu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x52a1c8u); RETCHK(0x52a1cdu, 0x52a1c8u); LOADALL;
  /* 0052a1cd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052a1cf jne 0x52a1d8 */ if (!ZF_) goto L_0052a1d8;
L_0052a1d1:;
  /* 0052a1d1 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0052a1d3 jmp 0x52a2bc */ goto L_0052a2bc;
L_0052a1d8:;
  /* 0052a1d8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052a1d9 mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 0052a1e0 mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 0052a1e7 mov byte ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)(0x0u); }
  /* 0052a1eb mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0052a1f2 mov ebx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ebx = (u32)(M32(m_)); }
  /* 0052a1f5 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052a1f7 je 0x52a2b9 */ if (ZF_) goto L_0052a2b9;
  /* 0052a1fd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a1fe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052a1ff nop */ ;
L_0052a200:;
  /* 0052a200 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0052a202 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0052a204 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52a207u; SAVEALL; call_ind(c, t_); RETCHK(0x52a207u, 0x52a204u); LOADALL; }
  /* 0052a207 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052a209 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052a20b je 0x52a29a */ if (ZF_) goto L_0052a29a;
  /* 0052a211 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a212 mov eax, 0x6515a0 */ { eax = (u32)(0x6515a0u); }
  /* 0052a217 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52a21cu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52a217u); RETCHK(0x52a21cu, 0x52a217u); LOADALL;
  /* 0052a21c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052a21e lea edi, [ecx + 1] */ edi = (u32)((u32)(ecx + 0x1u));
L_0052a221:;
  /* 0052a221 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052a223 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052a224 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052a226 jne 0x52a221 */ if (!ZF_) goto L_0052a221;
  /* 0052a228 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052a22a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a22b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a22c lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0052a22f call 0x404420 */ esp -= 4; M32(esp) = 0x52a234u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x52a22fu); RETCHK(0x52a234u, 0x52a22fu); LOADALL;
  /* 0052a234 cmp dword ptr [ebp - 0x18], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a238 mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 0052a23b jae 0x52a240 */ if (!CF_) goto L_0052a240;
  /* 0052a23d lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
L_0052a240:;
  /* 0052a240 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a241 call 0x5ab540 */ esp -= 4; M32(esp) = 0x52a246u; SAVEALL; F_005ab540(c); ABI_CHECK(0x5ab540u, 0x52a241u); RETCHK(0x52a246u, 0x52a241u); LOADALL;
  /* 0052a246 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052a249 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052a24b mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0052a24e je 0x52a29a */ if (ZF_) goto L_0052a29a;
  /* 0052a250 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a251 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 0052a256 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52a25bu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52a256u); RETCHK(0x52a25bu, 0x52a256u); LOADALL;
  /* 0052a25b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a25c lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0052a25f call 0x403060 */ esp -= 4; M32(esp) = 0x52a264u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x52a25fu); RETCHK(0x52a264u, 0x52a25fu); LOADALL;
  /* 0052a264 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052a267 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052a26a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a26b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0052a26e mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0052a272 call 0x52aab0 */ esp -= 4; M32(esp) = 0x52a277u; SAVEALL; F_0052aab0(c); ABI_CHECK(0x52aab0u, 0x52a272u); RETCHK(0x52a277u, 0x52a272u); LOADALL;
  /* 0052a277 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052a279 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052a27b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052a27d lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0052a280 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052a281 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052a283 call 0x404140 */ esp -= 4; M32(esp) = 0x52a288u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x52a283u); RETCHK(0x52a288u, 0x52a283u); LOADALL;
  /* 0052a288 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0052a28b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0052a28e mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0052a291 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0052a295 call 0x43ee60 */ esp -= 4; M32(esp) = 0x52a29au; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x52a295u); RETCHK(0x52a29au, 0x52a295u); LOADALL;
L_0052a29a:;
  /* 0052a29a mov ebx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ebx = (u32)(M32(m_)); }
  /* 0052a29d test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052a29f jne 0x52a200 */ if (!ZF_) goto L_0052a200;
  /* 0052a2a5 cmp dword ptr [ebp - 0x18], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a2a9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052a2aa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052a2ab jb 0x52a2b9 */ if (CF_) goto L_0052a2b9;
  /* 0052a2ad mov ecx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ecx = (u32)(M32(m_)); }
  /* 0052a2b0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a2b1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52a2b6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52a2b1u); RETCHK(0x52a2b6u, 0x52a2b1u); LOADALL;
  /* 0052a2b6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052a2b9:;
  /* 0052a2b9 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0052a2bb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0052a2bc:;
  /* 0052a2bc mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052a2bf mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052a2c6 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0052a2c9 call 0x61af31 */ esp -= 4; M32(esp) = 0x52a2ceu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x52a2c9u); RETCHK(0x52a2ceu, 0x52a2c9u); LOADALL;
  /* 0052a2ce mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052a2d0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052a2d1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052a2e0(CPU *c) {
  NATIVE_HOOK(0x52a2e0u) REGS; LOADALL;
L_0052a2e0:;
  /* 0052a2e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052a2e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052a2e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a2e4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052a2e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a2e6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052a2e8 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052a2eb lea ebx, [ebp - 4] */ ebx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052a2ee call 0x52abb0 */ esp -= 4; M32(esp) = 0x52a2f3u; SAVEALL; F_0052abb0(c); ABI_CHECK(0x52abb0u, 0x52a2eeu); RETCHK(0x52a2f3u, 0x52a2eeu); LOADALL;
  /* 0052a2f3 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0052a2f6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052a2f7 add eax, 0x28 */ { u32 a_ = eax, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052a2fa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052a2fb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052a2fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052a2fe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052a300(CPU *c) {
  NATIVE_HOOK(0x52a300u) REGS; LOADALL;
L_0052a300:;
  /* 0052a300 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052a301 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052a303 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a304 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052a307 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052a309 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a30b mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0052a30e je 0x52a32b */ if (ZF_) goto L_0052a32b;
L_0052a310:;
  /* 0052a310 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052a313 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a314 mov eax, edi */ { eax = (u32)(edi); }
  /* 0052a316 call 0x4030f0 */ esp -= 4; M32(esp) = 0x52a31bu; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x52a316u); RETCHK(0x52a31bu, 0x52a316u); LOADALL;
  /* 0052a31b lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052a31e call 0x52bb70 */ esp -= 4; M32(esp) = 0x52a323u; SAVEALL; F_0052bb70(c); ABI_CHECK(0x52bb70u, 0x52a31eu); RETCHK(0x52a323u, 0x52a31eu); LOADALL;
  /* 0052a323 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0052a326 cmp eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a329 jne 0x52a310 */ if (!ZF_) goto L_0052a310;
L_0052a32b:;
  /* 0052a32b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052a32d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052a32e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052a330(CPU *c) {
  NATIVE_HOOK(0x52a330u) REGS; LOADALL;
L_0052a330:;
  /* 0052a330 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052a331 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052a333 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a334 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052a335 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a336 lea esi, [edi + 4] */ esi = (u32)((u32)(edi + 0x4u));
  /* 0052a339 lea ebx, [ebp - 4] */ ebx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052a33c call 0x52abb0 */ esp -= 4; M32(esp) = 0x52a341u; SAVEALL; F_0052abb0(c); ABI_CHECK(0x52abb0u, 0x52a33cu); RETCHK(0x52a341u, 0x52a33cu); LOADALL;
  /* 0052a341 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0052a344 cmp eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a347 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052a348 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052a349 jne 0x52a351 */ if (!ZF_) goto L_0052a351;
  /* 0052a34b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052a34d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052a34f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052a350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052a351:;
  /* 0052a351 add eax, 0x28 */ { u32 a_ = eax, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052a354 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052a356 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052a357 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052a360(CPU *c) {
  NATIVE_HOOK(0x52a360u) REGS; LOADALL;
L_0052a360:;
  /* 0052a360 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052a361 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052a363 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052a365 push 0x6200b0 */ { u32 v_ = 0x6200b0u; esp -= 4; M32(esp) = v_; }
  /* 0052a36a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052a370 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a371 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052a378 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052a37b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0052a380 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052a381 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0052a383 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a384 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0052a387 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0052a38a mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0052a38d mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0052a390 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0052a393 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0052a396 call 0x518bb0 */ esp -= 4; M32(esp) = 0x52a39bu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x52a396u); RETCHK(0x52a39bu, 0x52a396u); LOADALL;
  /* 0052a39b call 0x518320 */ esp -= 4; M32(esp) = 0x52a3a0u; SAVEALL; F_00518320(c); ABI_CHECK(0x518320u, 0x52a39bu); RETCHK(0x52a3a0u, 0x52a39bu); LOADALL;
  /* 0052a3a0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052a3a2 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a3a4 je 0x52a4e6 */ if (ZF_) goto L_0052a4e6;
  /* 0052a3aa mov eax, 0x64e38c */ { eax = (u32)(0x64e38cu); }
  /* 0052a3af call 0x560ba0 */ esp -= 4; M32(esp) = 0x52a3b4u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x52a3afu); RETCHK(0x52a3b4u, 0x52a3afu); LOADALL;
  /* 0052a3b4 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052a3b6 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a3b8 je 0x52a4e6 */ if (ZF_) goto L_0052a4e6;
  /* 0052a3be mov eax, 0x64e384 */ { eax = (u32)(0x64e384u); }
  /* 0052a3c3 call 0x560ba0 */ esp -= 4; M32(esp) = 0x52a3c8u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x52a3c3u); RETCHK(0x52a3c8u, 0x52a3c3u); LOADALL;
  /* 0052a3c8 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052a3ca cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a3cc je 0x52a4e6 */ if (ZF_) goto L_0052a4e6;
  /* 0052a3d2 mov eax, 0x653004 */ { eax = (u32)(0x653004u); }
  /* 0052a3d7 call 0x560ba0 */ esp -= 4; M32(esp) = 0x52a3dcu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x52a3d7u); RETCHK(0x52a3dcu, 0x52a3d7u); LOADALL;
  /* 0052a3dc mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052a3de cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a3e0 je 0x52a4e6 */ if (ZF_) goto L_0052a4e6;
  /* 0052a3e6 mov eax, 0x652ff8 */ { eax = (u32)(0x652ff8u); }
  /* 0052a3eb call 0x560ba0 */ esp -= 4; M32(esp) = 0x52a3f0u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x52a3ebu); RETCHK(0x52a3f0u, 0x52a3ebu); LOADALL;
  /* 0052a3f0 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a3f2 je 0x52a4e6 */ if (ZF_) goto L_0052a4e6;
  /* 0052a3f8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052a3f9 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0052a400 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0052a403 mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052a406 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0052a40a mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 0052a40d cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a40f je 0x52a4e2 */ if (ZF_) goto L_0052a4e2;
L_0052a415:;
  /* 0052a415 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0052a417 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052a419 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52a41cu; SAVEALL; call_ind(c, t_); RETCHK(0x52a41cu, 0x52a419u); LOADALL; }
  /* 0052a41c mov esi, eax */ { esi = (u32)(eax); }
  /* 0052a41e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a41f mov eax, 0x653070 */ { eax = (u32)(0x653070u); }
  /* 0052a424 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52a429u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52a424u); RETCHK(0x52a429u, 0x52a424u); LOADALL;
  /* 0052a429 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052a42b lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
  /* 0052a42e mov edi, edi */ { edi = (u32)(edi); }
L_0052a430:;
  /* 0052a430 mov bl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052a432 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052a433 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052a435 jne 0x52a430 */ if (!ZF_) goto L_0052a430;
  /* 0052a437 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052a439 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a43a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a43b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0052a43e call 0x404420 */ esp -= 4; M32(esp) = 0x52a443u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x52a43eu); RETCHK(0x52a443u, 0x52a43eu); LOADALL;
  /* 0052a443 push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 0052a448 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052a44a call 0x560fd0 */ esp -= 4; M32(esp) = 0x52a44fu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x52a44au); RETCHK(0x52a44fu, 0x52a44au); LOADALL;
  /* 0052a44f mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0052a451 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 0052a456 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052a458 call 0x560fd0 */ esp -= 4; M32(esp) = 0x52a45du; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x52a458u); RETCHK(0x52a45du, 0x52a458u); LOADALL;
  /* 0052a45d mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 0052a460 push 0x652ff0 */ { u32 v_ = 0x652ff0u; esp -= 4; M32(esp) = v_; }
  /* 0052a465 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052a467 call 0x560fd0 */ esp -= 4; M32(esp) = 0x52a46cu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x52a467u); RETCHK(0x52a46cu, 0x52a467u); LOADALL;
  /* 0052a46c cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a470 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 0052a473 jae 0x52a478 */ if (!CF_) goto L_0052a478;
  /* 0052a475 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
L_0052a478:;
  /* 0052a478 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a479 mov ecx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ecx = (u32)(M32(m_)); }
  /* 0052a47c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052a47e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052a480 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052a482 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0052a484 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052a486 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052a488 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052a48a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052a48c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a48d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052a48f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052a491 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a492 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052a493 call dword ptr [0x62e05c] */ { const u32 m_ = (u32)(0x62e05cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52a499u; SAVEALL; call_ind(c, t_); RETCHK(0x52a499u, 0x52a493u); LOADALL; }
  /* 0052a499 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052a49c mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 0052a49f lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0052a4a2 call 0x52ac10 */ esp -= 4; M32(esp) = 0x52a4a7u; SAVEALL; F_0052ac10(c); ABI_CHECK(0x52ac10u, 0x52a4a2u); RETCHK(0x52a4a7u, 0x52a4a2u); LOADALL;
  /* 0052a4a7 mov edi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edi = (u32)(M32(m_)); }
  /* 0052a4aa test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052a4ac jne 0x52a415 */ if (!ZF_) goto L_0052a415;
  /* 0052a4b2 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a4b6 jb 0x52a4c4 */ if (CF_) goto L_0052a4c4;
  /* 0052a4b8 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 0052a4bb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052a4bc call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52a4c1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52a4bcu); RETCHK(0x52a4c1u, 0x52a4bcu); LOADALL;
  /* 0052a4c1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052a4c4:;
  /* 0052a4c4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
L_0052a4c7:;
  /* 0052a4c7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0052a4c8:;
  /* 0052a4c8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052a4cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052a4cc mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052a4d3 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0052a4d6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052a4d7 call 0x61af31 */ esp -= 4; M32(esp) = 0x52a4dcu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x52a4d7u); RETCHK(0x52a4dcu, 0x52a4d7u); LOADALL;
  /* 0052a4dc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052a4de pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052a4df ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052a4e2:;
  /* 0052a4e2 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052a4e4 jmp 0x52a4c7 */ goto L_0052a4c7;
L_0052a4e6:;
  /* 0052a4e6 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052a4e8 jmp 0x52a4c8 */ goto L_0052a4c8;
}

void F_0052a4f0(CPU *c) {
  NATIVE_HOOK(0x52a4f0u) REGS; LOADALL;
L_0052a4f0:;
  /* 0052a4f0 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052a4f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a4f4 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052a4f7 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a4f9 je 0x52a51c */ if (ZF_) goto L_0052a51c;
  /* 0052a4fb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052a4fc mov ebx, dword ptr [0x62e068] */ { const u32 m_ = (u32)(0x62e068u); ebx = (u32)(M32(m_)); }
L_0052a502:;
  /* 0052a502 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0052a504 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052a506 je 0x52a511 */ if (ZF_) goto L_0052a511;
  /* 0052a508 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a509 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x52a50bu; SAVEALL; call_ind(c, t_); RETCHK(0x52a50bu, 0x52a509u); LOADALL; }
  /* 0052a50b mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
L_0052a511:;
  /* 0052a511 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052a514 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052a517 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a519 jne 0x52a502 */ if (!ZF_) goto L_0052a502;
  /* 0052a51b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0052a51c:;
  /* 0052a51c mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052a51f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052a521 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052a522 je 0x52a52d */ if (ZF_) goto L_0052a52d;
  /* 0052a524 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a525 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52a52au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52a525u); RETCHK(0x52a52au, 0x52a525u); LOADALL;
  /* 0052a52a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052a52d:;
  /* 0052a52d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052a52f mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052a532 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052a535 mov dword ptr [edi + 0xc], eax */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0052a538 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052a540(CPU *c) {
  NATIVE_HOOK(0x52a540u) REGS; LOADALL;
L_0052a540:;
  /* 0052a540 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052a541 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052a543 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052a549 mov cl, byte ptr [0x9be098] */ { const u32 m_ = (u32)(0x9be098u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052a54f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052a551 push 0x6210fe */ { u32 v_ = 0x6210feu; esp -= 4; M32(esp) = v_; }
  /* 0052a556 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a557 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0052a55c test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052a55e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052a565 jne 0x52a58b */ if (!ZF_) goto L_0052a58b;
  /* 0052a567 or dword ptr [0x9be098], eax */ { const u32 m_ = (u32)(0x9be098u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0052a56d push 0x9be088 */ { u32 v_ = 0x9be088u; esp -= 4; M32(esp) = v_; }
  /* 0052a572 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0052a579 call 0x52a360 */ esp -= 4; M32(esp) = 0x52a57eu; SAVEALL; F_0052a360(c); ABI_CHECK(0x52a360u, 0x52a579u); RETCHK(0x52a57eu, 0x52a579u); LOADALL;
  /* 0052a57e push 0x62c6a0 */ { u32 v_ = 0x62c6a0u; esp -= 4; M32(esp) = v_; }
  /* 0052a583 call 0x5fe916 */ esp -= 4; M32(esp) = 0x52a588u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x52a583u); RETCHK(0x52a588u, 0x52a583u); LOADALL;
  /* 0052a588 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052a58b:;
  /* 0052a58b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052a58e mov eax, 0x9be088 */ { eax = (u32)(0x9be088u); }
  /* 0052a593 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052a59a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052a59c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052a59d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052a5a0(CPU *c) {
  NATIVE_HOOK(0x52a5a0u) REGS; LOADALL;
L_0052a5a0:;
  /* 0052a5a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052a5a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052a5a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a5a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a5a5 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052a5a7 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052a5aa test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052a5ac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052a5ad mov edi, eax */ { edi = (u32)(eax); }
  /* 0052a5af je 0x52a5bd */ if (ZF_) goto L_0052a5bd;
  /* 0052a5b1 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052a5b4 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052a5b6 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052a5b9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052a5bb jne 0x52a5ef */ if (!ZF_) goto L_0052a5ef;
L_0052a5bd:;
  /* 0052a5bd push 0x6501e8 */ { u32 v_ = 0x6501e8u; esp -= 4; M32(esp) = v_; }
  /* 0052a5c2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052a5c4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052a5c6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052a5c8 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0052a5ca push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052a5cc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052a5ce push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052a5d0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052a5d2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052a5d4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052a5d6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052a5d8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052a5da push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0052a5dc call dword ptr [0x62e05c] */ { const u32 m_ = (u32)(0x62e05cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52a5e2u; SAVEALL; call_ind(c, t_); RETCHK(0x52a5e2u, 0x52a5dcu); LOADALL; }
  /* 0052a5e2 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0052a5e5 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052a5e8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052a5ea call 0x52ac10 */ esp -= 4; M32(esp) = 0x52a5efu; SAVEALL; F_0052ac10(c); ABI_CHECK(0x52ac10u, 0x52a5eau); RETCHK(0x52a5efu, 0x52a5eau); LOADALL;
L_0052a5ef:;
  /* 0052a5ef mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052a5f2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052a5f4 je 0x52a606 */ if (ZF_) goto L_0052a606;
  /* 0052a5f6 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052a5f9 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052a5fb sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052a5fe cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a600 jb 0x52a620 */ if (CF_) goto L_0052a620;
  /* 0052a602 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052a604 jne 0x52a615 */ if (!ZF_) goto L_0052a615;
L_0052a606:;
  /* 0052a606 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0052a608 mov eax, dword ptr [ecx + esi*4 - 4] */ { const u32 m_ = (u32)(ecx + esi * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0052a60c lea edi, [esi - 1] */ edi = (u32)((u32)(esi + 0xffffffffu));
  /* 0052a60f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052a610 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052a611 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052a613 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052a614 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052a615:;
  /* 0052a615 mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0052a618 sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052a61a sar esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0052a61d lea edi, [esi - 1] */ edi = (u32)((u32)(esi + 0xffffffffu));
L_0052a620:;
  /* 0052a620 mov eax, dword ptr [ecx + edi*4] */ { const u32 m_ = (u32)(ecx + edi * 4u); eax = (u32)(M32(m_)); }
  /* 0052a623 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052a624 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052a625 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052a627 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052a628 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052a630(CPU *c) {
  NATIVE_HOOK(0x52a630u) REGS; LOADALL;
L_0052a630:;
  /* 0052a630 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052a631 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052a633 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052a635 push 0x620090 */ { u32 v_ = 0x620090u; esp -= 4; M32(esp) = v_; }
  /* 0052a63a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052a640 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a641 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052a648 sub esp, 0x74 */ { u32 a_ = esp, b_ = 0x74u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052a64b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0052a650 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052a651 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0052a653 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052a654 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0052a657 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0052a65a mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0052a65d mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0052a660 mov dword ptr [edi + 0xc], ebx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0052a663 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0052a666 call 0x518bb0 */ esp -= 4; M32(esp) = 0x52a66bu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x52a666u); RETCHK(0x52a66bu, 0x52a666u); LOADALL;
  /* 0052a66b call 0x518390 */ esp -= 4; M32(esp) = 0x52a670u; SAVEALL; F_00518390(c); ABI_CHECK(0x518390u, 0x52a66bu); RETCHK(0x52a670u, 0x52a66bu); LOADALL;
  /* 0052a670 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052a672 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a674 je 0x52a847 */ if (ZF_) goto L_0052a847;
  /* 0052a67a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a67b mov eax, 0x652fe4 */ { eax = (u32)(0x652fe4u); }
  /* 0052a680 call 0x560ba0 */ esp -= 4; M32(esp) = 0x52a685u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x52a680u); RETCHK(0x52a685u, 0x52a680u); LOADALL;
  /* 0052a685 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052a687 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a689 je 0x52a843 */ if (ZF_) goto L_0052a843;
  /* 0052a68f mov dword ptr [ebp - 0x68], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(0xfu); }
  /* 0052a696 mov dword ptr [ebp - 0x6c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(ebx); }
  /* 0052a699 mov byte ptr [ebp - 0x7c], bl */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052a69c lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0052a69f mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0052a6a3 call 0x500c50 */ esp -= 4; M32(esp) = 0x52a6a8u; SAVEALL; F_00500c50(c); ABI_CHECK(0x500c50u, 0x52a6a3u); RETCHK(0x52a6a8u, 0x52a6a3u); LOADALL;
  /* 0052a6a8 mov eax, 0x64fdd8 */ { eax = (u32)(0x64fdd8u); }
  /* 0052a6ad mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052a6af call 0x560ba0 */ esp -= 4; M32(esp) = 0x52a6b4u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x52a6afu); RETCHK(0x52a6b4u, 0x52a6afu); LOADALL;
  /* 0052a6b4 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052a6b6 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a6b8 je 0x52a825 */ if (ZF_) goto L_0052a825;
  /* 0052a6be mov edi, edi */ { edi = (u32)(edi); }
L_0052a6c0:;
  /* 0052a6c0 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0052a6c2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052a6c4 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52a6c7u; SAVEALL; call_ind(c, t_); RETCHK(0x52a6c7u, 0x52a6c4u); LOADALL; }
  /* 0052a6c7 mov esi, eax */ { esi = (u32)(eax); }
  /* 0052a6c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a6ca mov eax, 0x648990 */ { eax = (u32)(0x648990u); }
  /* 0052a6cf call 0x560ed0 */ esp -= 4; M32(esp) = 0x52a6d4u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52a6cfu); RETCHK(0x52a6d4u, 0x52a6cfu); LOADALL;
  /* 0052a6d4 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a6d6 je 0x52a6e7 */ if (ZF_) goto L_0052a6e7;
  /* 0052a6d8 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0052a6da push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a6db lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0052a6de push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a6df call 0x5fe7ca */ esp -= 4; M32(esp) = 0x52a6e4u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x52a6dfu); RETCHK(0x52a6e4u, 0x52a6dfu); LOADALL;
  /* 0052a6e4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052a6e7:;
  /* 0052a6e7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a6e8 mov eax, 0x652fdc */ { eax = (u32)(0x652fdcu); }
  /* 0052a6ed call 0x560ed0 */ esp -= 4; M32(esp) = 0x52a6f2u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52a6edu); RETCHK(0x52a6f2u, 0x52a6edu); LOADALL;
  /* 0052a6f2 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a6f4 je 0x52a705 */ if (ZF_) goto L_0052a705;
  /* 0052a6f6 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 0052a6f8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a6f9 lea edx, [ebp - 0x54] */ edx = (u32)((u32)(ebp + 0xffffffacu));
  /* 0052a6fc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052a6fd call 0x5fe7ca */ esp -= 4; M32(esp) = 0x52a702u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x52a6fdu); RETCHK(0x52a702u, 0x52a6fdu); LOADALL;
  /* 0052a702 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052a705:;
  /* 0052a705 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a706 mov eax, 0x652fd0 */ { eax = (u32)(0x652fd0u); }
  /* 0052a70b call 0x560ed0 */ esp -= 4; M32(esp) = 0x52a710u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52a70bu); RETCHK(0x52a710u, 0x52a70bu); LOADALL;
  /* 0052a710 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a712 je 0x52a720 */ if (ZF_) goto L_0052a720;
  /* 0052a714 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a715 call 0x5fe92e */ esp -= 4; M32(esp) = 0x52a71au; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52a715u); RETCHK(0x52a71au, 0x52a715u); LOADALL;
  /* 0052a71a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052a71d mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
L_0052a720:;
  /* 0052a720 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a721 mov eax, 0x652fc8 */ { eax = (u32)(0x652fc8u); }
  /* 0052a726 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52a72bu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52a726u); RETCHK(0x52a72bu, 0x52a726u); LOADALL;
  /* 0052a72b cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a72d je 0x52a73b */ if (ZF_) goto L_0052a73b;
  /* 0052a72f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a730 call 0x5fe92e */ esp -= 4; M32(esp) = 0x52a735u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52a730u); RETCHK(0x52a735u, 0x52a730u); LOADALL;
  /* 0052a735 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052a738 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
L_0052a73b:;
  /* 0052a73b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a73c mov eax, 0x652fbc */ { eax = (u32)(0x652fbcu); }
  /* 0052a741 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52a746u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52a741u); RETCHK(0x52a746u, 0x52a741u); LOADALL;
  /* 0052a746 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a748 je 0x52a756 */ if (ZF_) goto L_0052a756;
  /* 0052a74a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a74b call 0x5fe92e */ esp -= 4; M32(esp) = 0x52a750u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52a74bu); RETCHK(0x52a750u, 0x52a74bu); LOADALL;
  /* 0052a750 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052a753 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
L_0052a756:;
  /* 0052a756 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a757 mov eax, 0x652fb0 */ { eax = (u32)(0x652fb0u); }
  /* 0052a75c call 0x560ed0 */ esp -= 4; M32(esp) = 0x52a761u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52a75cu); RETCHK(0x52a761u, 0x52a75cu); LOADALL;
  /* 0052a761 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a763 je 0x52a771 */ if (ZF_) goto L_0052a771;
  /* 0052a765 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a766 call 0x5fe92e */ esp -= 4; M32(esp) = 0x52a76bu; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52a766u); RETCHK(0x52a76bu, 0x52a766u); LOADALL;
  /* 0052a76b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052a76e mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
L_0052a771:;
  /* 0052a771 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a772 mov eax, 0x652fa8 */ { eax = (u32)(0x652fa8u); }
  /* 0052a777 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52a77cu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52a777u); RETCHK(0x52a77cu, 0x52a777u); LOADALL;
  /* 0052a77c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a77e je 0x52a78c */ if (ZF_) goto L_0052a78c;
  /* 0052a780 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a781 call 0x5fe92e */ esp -= 4; M32(esp) = 0x52a786u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52a781u); RETCHK(0x52a786u, 0x52a781u); LOADALL;
  /* 0052a786 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052a789 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
L_0052a78c:;
  /* 0052a78c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a78d mov eax, 0x652f98 */ { eax = (u32)(0x652f98u); }
  /* 0052a792 call 0x560ed0 */ esp -= 4; M32(esp) = 0x52a797u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52a792u); RETCHK(0x52a797u, 0x52a792u); LOADALL;
  /* 0052a797 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a799 je 0x52a7a7 */ if (ZF_) goto L_0052a7a7;
  /* 0052a79b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a79c call 0x5fe92e */ esp -= 4; M32(esp) = 0x52a7a1u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x52a79cu); RETCHK(0x52a7a1u, 0x52a79cu); LOADALL;
  /* 0052a7a1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052a7a4 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
L_0052a7a7:;
  /* 0052a7a7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a7a8 mov eax, 0x652f8c */ { eax = (u32)(0x652f8cu); }
  /* 0052a7ad call 0x560ed0 */ esp -= 4; M32(esp) = 0x52a7b2u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52a7adu); RETCHK(0x52a7b2u, 0x52a7adu); LOADALL;
  /* 0052a7b2 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a7b4 je 0x52a7c8 */ if (ZF_) goto L_0052a7c8;
  /* 0052a7b6 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0052a7b9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a7ba push 0x652f84 */ { u32 v_ = 0x652f84u; esp -= 4; M32(esp) = v_; }
  /* 0052a7bf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a7c0 call 0x5feaac */ esp -= 4; M32(esp) = 0x52a7c5u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52a7c0u); RETCHK(0x52a7c5u, 0x52a7c0u); LOADALL;
  /* 0052a7c5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052a7c8:;
  /* 0052a7c8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a7c9 mov eax, 0x652f78 */ { eax = (u32)(0x652f78u); }
  /* 0052a7ce call 0x560ed0 */ esp -= 4; M32(esp) = 0x52a7d3u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52a7ceu); RETCHK(0x52a7d3u, 0x52a7ceu); LOADALL;
  /* 0052a7d3 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a7d5 je 0x52a7e9 */ if (ZF_) goto L_0052a7e9;
  /* 0052a7d7 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0052a7da push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052a7db push 0x652f84 */ { u32 v_ = 0x652f84u; esp -= 4; M32(esp) = v_; }
  /* 0052a7e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a7e1 call 0x5feaac */ esp -= 4; M32(esp) = 0x52a7e6u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x52a7e1u); RETCHK(0x52a7e6u, 0x52a7e1u); LOADALL;
  /* 0052a7e6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052a7e9:;
  /* 0052a7e9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a7ea mov eax, 0x652f6c */ { eax = (u32)(0x652f6cu); }
  /* 0052a7ef call 0x560ed0 */ esp -= 4; M32(esp) = 0x52a7f4u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x52a7efu); RETCHK(0x52a7f4u, 0x52a7efu); LOADALL;
  /* 0052a7f4 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a7f6 je 0x52a804 */ if (ZF_) goto L_0052a804;
  /* 0052a7f8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a7f9 call 0x5fea82 */ esp -= 4; M32(esp) = 0x52a7feu; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x52a7f9u); RETCHK(0x52a7feu, 0x52a7f9u); LOADALL;
  /* 0052a7fe fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0052a801 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052a804:;
  /* 0052a804 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052a807 lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0052a80a call 0x52ac60 */ esp -= 4; M32(esp) = 0x52a80fu; SAVEALL; F_0052ac60(c); ABI_CHECK(0x52ac60u, 0x52a80au); RETCHK(0x52a80fu, 0x52a80au); LOADALL;
  /* 0052a80f mov eax, 0x64fdd8 */ { eax = (u32)(0x64fdd8u); }
  /* 0052a814 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052a816 call 0x560c00 */ esp -= 4; M32(esp) = 0x52a81bu; SAVEALL; F_00560c00(c); ABI_CHECK(0x560c00u, 0x52a816u); RETCHK(0x52a81bu, 0x52a816u); LOADALL;
  /* 0052a81b mov edi, eax */ { edi = (u32)(eax); }
  /* 0052a81d cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a81f jne 0x52a6c0 */ if (!ZF_) goto L_0052a6c0;
L_0052a825:;
  /* 0052a825 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
L_0052a828:;
  /* 0052a828 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0052a829:;
  /* 0052a829 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052a82c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052a82d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052a834 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0052a837 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052a838 call 0x61af31 */ esp -= 4; M32(esp) = 0x52a83du; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x52a838u); RETCHK(0x52a83du, 0x52a838u); LOADALL;
  /* 0052a83d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052a83f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052a840 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052a843:;
  /* 0052a843 mov eax, edi */ { eax = (u32)(edi); }
  /* 0052a845 jmp 0x52a828 */ goto L_0052a828;
L_0052a847:;
  /* 0052a847 mov eax, edi */ { eax = (u32)(edi); }
  /* 0052a849 jmp 0x52a829 */ goto L_0052a829;
}

void F_0052a850(CPU *c) {
  NATIVE_HOOK(0x52a850u) REGS; LOADALL;
L_0052a850:;
  /* 0052a850 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052a851 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052a853 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052a859 mov cl, byte ptr [0x9be084] */ { const u32 m_ = (u32)(0x9be084u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052a85f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052a861 push 0x6210de */ { u32 v_ = 0x6210deu; esp -= 4; M32(esp) = v_; }
  /* 0052a866 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a867 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0052a86c test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052a86e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052a875 jne 0x52a89b */ if (!ZF_) goto L_0052a89b;
  /* 0052a877 or dword ptr [0x9be084], eax */ { const u32 m_ = (u32)(0x9be084u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0052a87d push 0x9be074 */ { u32 v_ = 0x9be074u; esp -= 4; M32(esp) = v_; }
  /* 0052a882 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0052a889 call 0x52a630 */ esp -= 4; M32(esp) = 0x52a88eu; SAVEALL; F_0052a630(c); ABI_CHECK(0x52a630u, 0x52a889u); RETCHK(0x52a88eu, 0x52a889u); LOADALL;
  /* 0052a88e push 0x62c6b0 */ { u32 v_ = 0x62c6b0u; esp -= 4; M32(esp) = v_; }
  /* 0052a893 call 0x5fe916 */ esp -= 4; M32(esp) = 0x52a898u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x52a893u); RETCHK(0x52a898u, 0x52a893u); LOADALL;
  /* 0052a898 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052a89b:;
  /* 0052a89b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052a89e mov eax, 0x9be074 */ { eax = (u32)(0x9be074u); }
  /* 0052a8a3 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052a8aa mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052a8ac pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052a8ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052a8b0(CPU *c) {
  NATIVE_HOOK(0x52a8b0u) REGS; LOADALL;
L_0052a8b0:;
  /* 0052a8b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052a8b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052a8b3 sub esp, 0x5c */ { u32 a_ = esp, b_ = 0x5cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052a8b6 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0052a8bb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052a8bc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a8bd mov esi, edx */ { esi = (u32)(edx); }
  /* 0052a8bf mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0052a8c2 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052a8c5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052a8c6 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0052a8c8 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a8ca mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0052a8cc je 0x52a8e9 */ if (ZF_) goto L_0052a8e9;
  /* 0052a8ce mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052a8d1 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052a8d3 mov eax, 0x30c30c31 */ { eax = (u32)(0x30c30c31u); }
  /* 0052a8d8 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052a8da sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052a8dd mov eax, edx */ { eax = (u32)(edx); }
  /* 0052a8df shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052a8e2 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052a8e4 mov dword ptr [ebp - 0x5c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(eax); }
  /* 0052a8e7 jne 0x52a960 */ if (!ZF_) goto L_0052a960;
L_0052a8e9:;
  /* 0052a8e9 lea eax, [ebp - 0x58] */ eax = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0052a8ec call 0x500c50 */ esp -= 4; M32(esp) = 0x52a8f1u; SAVEALL; F_00500c50(c); ABI_CHECK(0x500c50u, 0x52a8ecu); RETCHK(0x52a8f1u, 0x52a8ecu); LOADALL;
  /* 0052a8f1 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0052a8f6 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0052a8f8 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0052a8fd mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 0052a900 mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 0052a903 mov dword ptr [ebp - 0xc], 0x9f000000 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x9f000000u); }
  /* 0052a90a mov dword ptr [ebp - 0x10], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xffffffffu); }
  /* 0052a911 mov dword ptr [ebp - 8], 0x40000000 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x40000000u); }
  /* 0052a918 mov dword ptr [ebp - 0x20], 3 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x3u); }
  /* 0052a91f mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 0052a922 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 0052a925 mov dword ptr [ebp - 0x28], 0x14 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x14u); }
  /* 0052a92c call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x52a932u; SAVEALL; call_ind(c, t_); RETCHK(0x52a932u, 0x52a92cu); LOADALL; }
  /* 0052a932 push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 0052a934 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a935 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0052a938 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052a939 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x52a93eu; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x52a939u); RETCHK(0x52a93eu, 0x52a939u); LOADALL;
  /* 0052a93e mov eax, dword ptr [0x652f68] */ { const u32 m_ = (u32)(0x652f68u); eax = (u32)(M32(m_)); }
  /* 0052a943 mov edx, dword ptr [0x652f64] */ { const u32 m_ = (u32)(0x652f64u); edx = (u32)(M32(m_)); }
  /* 0052a949 mov dword ptr [ebp - 0x54], eax */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(eax); }
  /* 0052a94c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052a94f lea eax, [ebp - 0x58] */ eax = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0052a952 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052a954 mov byte ptr [ebp - 0x29], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd7u); M8(m_) = (u8)(0x0u); }
  /* 0052a958 mov dword ptr [ebp - 0x58], edx */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(edx); }
  /* 0052a95b call 0x52ac60 */ esp -= 4; M32(esp) = 0x52a960u; SAVEALL; F_0052ac60(c); ABI_CHECK(0x52ac60u, 0x52a95bu); RETCHK(0x52a960u, 0x52a95bu); LOADALL;
L_0052a960:;
  /* 0052a960 mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 0052a963 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052a965 je 0x52a985 */ if (ZF_) goto L_0052a985;
  /* 0052a967 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052a96a sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052a96c mov eax, 0x30c30c31 */ { eax = (u32)(0x30c30c31u); }
  /* 0052a971 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052a973 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052a976 mov eax, edx */ { eax = (u32)(edx); }
  /* 0052a978 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052a97b add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052a97d cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a97f jb 0x52a9a2 */ if (CF_) goto L_0052a9a2;
  /* 0052a981 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052a983 jne 0x52a989 */ if (!ZF_) goto L_0052a989;
L_0052a985:;
  /* 0052a985 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052a987 jmp 0x52a99f */ goto L_0052a99f;
L_0052a989:;
  /* 0052a989 mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0052a98c sub esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052a98e mov eax, 0x30c30c31 */ { eax = (u32)(0x30c30c31u); }
  /* 0052a993 imul esi */ { s64 p_ = (s64)(s32)eax * (s32)esi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052a995 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052a998 mov eax, edx */ { eax = (u32)(edx); }
  /* 0052a99a shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052a99d add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0052a99f:;
  /* 0052a99f lea ebx, [eax - 1] */ ebx = (u32)((u32)(eax + 0xffffffffu));
L_0052a9a2:;
  /* 0052a9a2 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0052a9a5 imul ebx, ebx, 0x54 */ { s64 p_ = (s64)(s32)ebx * (s64)(s32)0x54u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052a9a8 add ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0052a9aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052a9ab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052a9ac mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052a9ae pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052a9af call 0x61af31 */ esp -= 4; M32(esp) = 0x52a9b4u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x52a9afu); RETCHK(0x52a9b4u, 0x52a9afu); LOADALL;
  /* 0052a9b4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052a9b6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052a9b7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052a9c0(CPU *c) {
  NATIVE_HOOK(0x52a9c0u) REGS; LOADALL;
L_0052a9c0:;
  /* 0052a9c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052a9c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052a9c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052a9c5 push 0x61daf6 */ { u32 v_ = 0x61daf6u; esp -= 4; M32(esp) = v_; }
  /* 0052a9ca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052a9d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052a9d1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052a9d8 sub esp, 0x140 */ { u32 a_ = esp, b_ = 0x140u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052a9de push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052a9df push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052a9e0 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0052a9e2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052a9e3 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052a9e5 call 0x52b520 */ esp -= 4; M32(esp) = 0x52a9eau; SAVEALL; F_0052b520(c); ABI_CHECK(0x52b520u, 0x52a9e5u); RETCHK(0x52a9eau, 0x52a9e5u); LOADALL;
  /* 0052a9ea mov esi, eax */ { esi = (u32)(eax); }
  /* 0052a9ec cmp esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a9ef je 0x52a9fc */ if (ZF_) goto L_0052a9fc;
  /* 0052a9f1 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0052a9f3 cmp eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052a9f6 jge 0x52aa99 */ if (!LT_) goto L_0052aa99;
L_0052a9fc:;
  /* 0052a9fc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052a9fe mov ecx, 0xf */ { ecx = (u32)(0xfu); }
  /* 0052aa03 mov dword ptr [ebp - 0x94], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(ecx); }
  /* 0052aa09 mov dword ptr [ebp - 0x98], eax */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(eax); }
  /* 0052aa0f mov byte ptr [ebp - 0xa8], al */ { const u32 m_ = (u32)(ebp + 0xffffff58u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052aa15 mov dword ptr [ebp - 0x78], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff88u); M32(m_) = (u32)(ecx); }
  /* 0052aa18 mov dword ptr [ebp - 0x7c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(eax); }
  /* 0052aa1b mov byte ptr [ebp - 0x8c], al */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052aa21 mov dword ptr [ebp - 0x5c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(ecx); }
  /* 0052aa24 mov dword ptr [ebp - 0x60], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(eax); }
  /* 0052aa27 mov byte ptr [ebp - 0x70], al */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052aa2a mov dword ptr [ebp - 0x40], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ecx); }
  /* 0052aa2d mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 0052aa30 mov byte ptr [ebp - 0x54], al */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052aa33 mov dword ptr [ebp - 0x24], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ecx); }
  /* 0052aa36 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 0052aa39 mov byte ptr [ebp - 0x38], al */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052aa3c mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0052aa3f mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 0052aa41 lea edx, [ebp - 0x148] */ edx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0052aa47 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052aa48 lea edi, [ebp - 0xac] */ edi = (u32)((u32)(ebp + 0xffffff54u));
  /* 0052aa4e mov dword ptr [ebp - 0x14c], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffeb4u); M32(m_) = (u32)(ecx); }
  /* 0052aa54 call 0x52b110 */ esp -= 4; M32(esp) = 0x52aa59u; SAVEALL; F_0052b110(c); ABI_CHECK(0x52b110u, 0x52aa54u); RETCHK(0x52aa59u, 0x52aa54u); LOADALL;
  /* 0052aa59 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052aa5a lea eax, [ebp - 0x14c] */ eax = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0052aa60 lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0052aa63 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0052aa65 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0052aa69 call 0x52ad00 */ esp -= 4; M32(esp) = 0x52aa6eu; SAVEALL; F_0052ad00(c); ABI_CHECK(0x52ad00u, 0x52aa69u); RETCHK(0x52aa6eu, 0x52aa69u); LOADALL;
  /* 0052aa6e mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 0052aa70 lea esi, [ebp - 0x148] */ esi = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0052aa76 call 0x529870 */ esp -= 4; M32(esp) = 0x52aa7bu; SAVEALL; F_00529870(c); ABI_CHECK(0x529870u, 0x52aa76u); RETCHK(0x52aa7bu, 0x52aa76u); LOADALL;
  /* 0052aa7b lea esi, [ebp - 0xac] */ esi = (u32)((u32)(ebp + 0xffffff54u));
  /* 0052aa81 call 0x529870 */ esp -= 4; M32(esp) = 0x52aa86u; SAVEALL; F_00529870(c); ABI_CHECK(0x529870u, 0x52aa81u); RETCHK(0x52aa86u, 0x52aa81u); LOADALL;
  /* 0052aa86 lea eax, [edi + 0x10] */ eax = (u32)((u32)(edi + 0x10u));
  /* 0052aa89 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052aa8a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052aa8b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052aa8e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052aa95 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052aa97 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052aa98 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052aa99:;
  /* 0052aa99 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052aa9c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052aa9d lea eax, [esi + 0x10] */ eax = (u32)((u32)(esi + 0x10u));
  /* 0052aaa0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052aaa1 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052aaa8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052aaaa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052aaab ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052aab0(CPU *c) {
  NATIVE_HOOK(0x52aab0u) REGS; LOADALL;
L_0052aab0:;
  /* 0052aab0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052aab1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052aab3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052aab5 push 0x61dad0 */ { u32 v_ = 0x61dad0u; esp -= 4; M32(esp) = v_; }
  /* 0052aaba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052aac0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052aac1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052aac8 sub esp, 0x60 */ { u32 a_ = esp, b_ = 0x60u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052aacb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052aacc mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0052aacf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052aad0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052aad1 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0052aad3 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052aad5 call 0x52b880 */ esp -= 4; M32(esp) = 0x52aadau; SAVEALL; F_0052b880(c); ABI_CHECK(0x52b880u, 0x52aad5u); RETCHK(0x52aadau, 0x52aad5u); LOADALL;
  /* 0052aada mov esi, eax */ { esi = (u32)(eax); }
  /* 0052aadc mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052aadf xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0052aae1 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052aae3 je 0x52ab0c */ if (ZF_) goto L_0052ab0c;
  /* 0052aae5 cmp dword ptr [esi + 0x24], 0x10 */ { const u32 m_ = (u32)(esi + 0x24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052aae9 mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0052aaec jb 0x52aaf3 */ if (CF_) goto L_0052aaf3;
  /* 0052aaee mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052aaf1 jmp 0x52aaf6 */ goto L_0052aaf6;
L_0052aaf3:;
  /* 0052aaf3 lea eax, [esi + 0x10] */ eax = (u32)((u32)(esi + 0x10u));
L_0052aaf6:;
  /* 0052aaf6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052aaf7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052aaf8 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0052aafb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052aafc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052aafd mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052aaff call 0x405de0 */ esp -= 4; M32(esp) = 0x52ab04u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x52aaffu); RETCHK(0x52ab04u, 0x52aaffu); LOADALL;
  /* 0052ab04 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ab06 jge 0x52ab90 */ if (!LT_) goto L_0052ab90;
L_0052ab0c:;
  /* 0052ab0c mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 0052ab13 mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 0052ab16 mov byte ptr [ebp - 0x2c], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052ab19 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0052ab1c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052ab1d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ab1e lea edx, [ebp - 0x6c] */ edx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0052ab21 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052ab22 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0052ab25 call 0x52b090 */ esp -= 4; M32(esp) = 0x52ab2au; SAVEALL; F_0052b090(c); ABI_CHECK(0x52b090u, 0x52ab25u); RETCHK(0x52ab2au, 0x52ab25u); LOADALL;
  /* 0052ab2a mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052ab2d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ab2e lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0052ab31 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0052ab35 call 0x52ae70 */ esp -= 4; M32(esp) = 0x52ab3au; SAVEALL; F_0052ae70(c); ABI_CHECK(0x52ae70u, 0x52ab35u); RETCHK(0x52ab3au, 0x52ab35u); LOADALL;
  /* 0052ab3a mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0052ab3c mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 0052ab3f mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 0052ab44 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ab46 jb 0x52ab54 */ if (CF_) goto L_0052ab54;
  /* 0052ab48 mov eax, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); eax = (u32)(M32(m_)); }
  /* 0052ab4b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ab4c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52ab51u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52ab4cu); RETCHK(0x52ab51u, 0x52ab4cu); LOADALL;
  /* 0052ab51 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052ab54:;
  /* 0052ab54 cmp dword ptr [ebp - 0x54], edi */ { const u32 m_ = (u32)(ebp + 0xffffffacu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ab57 mov dword ptr [ebp - 0x38], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0xfu); }
  /* 0052ab5e mov dword ptr [ebp - 0x3c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(ebx); }
  /* 0052ab61 mov byte ptr [ebp - 0x4c], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052ab64 jb 0x52ab72 */ if (CF_) goto L_0052ab72;
  /* 0052ab66 mov ecx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); ecx = (u32)(M32(m_)); }
  /* 0052ab69 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052ab6a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52ab6fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52ab6au); RETCHK(0x52ab6fu, 0x52ab6au); LOADALL;
  /* 0052ab6f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052ab72:;
  /* 0052ab72 cmp dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ab75 mov dword ptr [ebp - 0x54], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0xfu); }
  /* 0052ab7c mov dword ptr [ebp - 0x58], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(ebx); }
  /* 0052ab7f mov byte ptr [ebp - 0x68], bl */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052ab82 jb 0x52ab90 */ if (CF_) goto L_0052ab90;
  /* 0052ab84 mov edx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edx = (u32)(M32(m_)); }
  /* 0052ab87 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052ab88 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52ab8du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52ab88u); RETCHK(0x52ab8du, 0x52ab88u); LOADALL;
  /* 0052ab8d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052ab90:;
  /* 0052ab90 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052ab93 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052ab94 lea eax, [esi + 0x28] */ eax = (u32)((u32)(esi + 0x28u));
  /* 0052ab97 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052ab98 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052ab99 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052aba0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052aba2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052aba3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052abb0(CPU *c) {
  NATIVE_HOOK(0x52abb0u) REGS; LOADALL;
L_0052abb0:;
  /* 0052abb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052abb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052abb3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052abb6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052abb7 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052abb9 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052abbb call 0x52b880 */ esp -= 4; M32(esp) = 0x52abc0u; SAVEALL; F_0052b880(c); ABI_CHECK(0x52b880u, 0x52abbbu); RETCHK(0x52abc0u, 0x52abbbu); LOADALL;
  /* 0052abc0 cmp eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052abc3 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0052abc6 je 0x52abfa */ if (ZF_) goto L_0052abfa;
  /* 0052abc8 cmp dword ptr [eax + 0x24], 0x10 */ { const u32 m_ = (u32)(eax + 0x24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052abcc mov ecx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0052abcf jb 0x52abd6 */ if (CF_) goto L_0052abd6;
  /* 0052abd1 mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052abd4 jmp 0x52abd9 */ goto L_0052abd9;
L_0052abd6:;
  /* 0052abd6 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0052abd9:;
  /* 0052abd9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052abda push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052abdb mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0052abde push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052abdf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052abe1 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052abe3 call 0x405de0 */ esp -= 4; M32(esp) = 0x52abe8u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x52abe3u); RETCHK(0x52abe8u, 0x52abe3u); LOADALL;
  /* 0052abe8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052abea jl 0x52abfa */ if (LT_) goto L_0052abfa;
  /* 0052abec lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052abef mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052abf1 mov dword ptr [ebx], edx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edx); }
  /* 0052abf3 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052abf5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052abf6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052abf8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052abf9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052abfa:;
  /* 0052abfa mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052abfd lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0052ac00 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 0052ac03 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052ac05 mov dword ptr [ebx], edx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edx); }
  /* 0052ac07 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052ac09 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052ac0a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052ac0c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052ac0d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052ac10(CPU *c) {
  NATIVE_HOOK(0x52ac10u) REGS; LOADALL;
L_0052ac10:;
  /* 0052ac10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ac11 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ac12 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 0052ac15 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ac17 jne 0x52ac1d */ if (!ZF_) goto L_0052ac1d;
  /* 0052ac19 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0052ac1b jmp 0x52ac25 */ goto L_0052ac25;
L_0052ac1d:;
  /* 0052ac1d mov esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0052ac20 sub esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052ac22 sar esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
L_0052ac25:;
  /* 0052ac25 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ac27 je 0x52ac45 */ if (ZF_) goto L_0052ac45;
  /* 0052ac29 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052ac2c sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052ac2e sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052ac31 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ac33 jae 0x52ac45 */ if (!CF_) goto L_0052ac45;
  /* 0052ac35 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052ac38 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0052ac3a mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0052ac3c add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052ac3f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052ac40 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052ac43 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052ac44 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052ac45:;
  /* 0052ac45 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052ac48 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052ac49 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052ac4a mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0052ac4f call 0x4d2620 */ esp -= 4; M32(esp) = 0x52ac54u; SAVEALL; F_004d2620(c); ABI_CHECK(0x4d2620u, 0x52ac4fu); RETCHK(0x52ac54u, 0x52ac4fu); LOADALL;
  /* 0052ac54 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052ac55 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052ac56 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052ac60(CPU *c) {
  NATIVE_HOOK(0x52ac60u) REGS; LOADALL;
L_0052ac60:;
  /* 0052ac60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052ac61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052ac63 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052ac64 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052ac65 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ac66 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ac67 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0052ac69 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052ac6c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ac6e mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0052ac70 jne 0x52ac76 */ if (!ZF_) goto L_0052ac76;
  /* 0052ac72 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052ac74 jmp 0x52ac8c */ goto L_0052ac8c;
L_0052ac76:;
  /* 0052ac76 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052ac79 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052ac7b mov eax, 0x30c30c31 */ { eax = (u32)(0x30c30c31u); }
  /* 0052ac80 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052ac82 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052ac85 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0052ac87 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052ac8a add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0052ac8c:;
  /* 0052ac8c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ac8e je 0x52accd */ if (ZF_) goto L_0052accd;
  /* 0052ac90 mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052ac93 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052ac95 mov eax, 0x30c30c31 */ { eax = (u32)(0x30c30c31u); }
  /* 0052ac9a imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052ac9c sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052ac9f mov eax, edx */ { eax = (u32)(edx); }
  /* 0052aca1 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052aca4 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052aca6 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052aca8 jae 0x52accd */ if (!CF_) goto L_0052accd;
  /* 0052acaa mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0052acad mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0052acb0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052acb1 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0052acb6 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052acb8 call 0x52c7f0 */ esp -= 4; M32(esp) = 0x52acbdu; SAVEALL; F_0052c7f0(c); ABI_CHECK(0x52c7f0u, 0x52acb8u); RETCHK(0x52acbdu, 0x52acb8u); LOADALL;
  /* 0052acbd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052acc0 add esi, 0x54 */ { u32 a_ = esi, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052acc3 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0052acc6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052acc7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052acc8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052acc9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052accb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052accc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052accd:;
  /* 0052accd mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052acd0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052acd1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052acd2 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052acd5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052acd6 call 0x52b030 */ esp -= 4; M32(esp) = 0x52acdbu; SAVEALL; F_0052b030(c); ABI_CHECK(0x52b030u, 0x52acd6u); RETCHK(0x52acdbu, 0x52acd6u); LOADALL;
  /* 0052acdb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052acdc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052acdd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052acde mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052ace0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052ace1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052ad00(CPU *c) {
  NATIVE_HOOK(0x52ad00u) REGS; LOADALL;
L_0052ad00:;
  /* 0052ad00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052ad01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052ad03 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ad06 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052ad07 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ad08 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0052ad0a mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0052ad0c mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052ad0f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ad11 jne 0x52ad29 */ if (!ZF_) goto L_0052ad29;
  /* 0052ad13 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052ad16 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052ad17 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052ad19 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ad1a call 0x52b360 */ esp -= 4; M32(esp) = 0x52ad1fu; SAVEALL; F_0052b360(c); ABI_CHECK(0x52b360u, 0x52ad1au); RETCHK(0x52ad1fu, 0x52ad1au); LOADALL;
  /* 0052ad1f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052ad20 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052ad22 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052ad23 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052ad25 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052ad26 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052ad29:;
  /* 0052ad29 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052ad2c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052ad2f cmp ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ad31 jne 0x52ad51 */ if (!ZF_) goto L_0052ad51;
  /* 0052ad33 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0052ad35 cmp eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ad38 jge 0x52ae01 */ if (!LT_) goto L_0052ae01;
  /* 0052ad3e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052ad3f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052ad41 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ad42 call 0x52b360 */ esp -= 4; M32(esp) = 0x52ad47u; SAVEALL; F_0052b360(c); ABI_CHECK(0x52b360u, 0x52ad42u); RETCHK(0x52ad47u, 0x52ad42u); LOADALL;
  /* 0052ad47 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052ad48 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052ad4a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052ad4b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052ad4d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052ad4e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052ad51:;
  /* 0052ad51 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ad53 jne 0x52ad76 */ if (!ZF_) goto L_0052ad76;
  /* 0052ad55 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052ad58 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052ad5b cmp edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ad5d jge 0x52ae01 */ if (!LT_) goto L_0052ae01;
  /* 0052ad63 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
L_0052ad64:;
  /* 0052ad64 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052ad66 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ad67 call 0x52b360 */ esp -= 4; M32(esp) = 0x52ad6cu; SAVEALL; F_0052b360(c); ABI_CHECK(0x52b360u, 0x52ad67u); RETCHK(0x52ad6cu, 0x52ad67u); LOADALL;
  /* 0052ad6c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052ad6d mov eax, esi */ { eax = (u32)(esi); }
  /* 0052ad6f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052ad70 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052ad72 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052ad73 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052ad76:;
  /* 0052ad76 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0052ad78 cmp eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ad7b jge 0x52adb8 */ if (!LT_) goto L_0052adb8;
  /* 0052ad7d lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052ad80 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0052ad83 call 0x52c5f0 */ esp -= 4; M32(esp) = 0x52ad88u; SAVEALL; F_0052c5f0(c); ABI_CHECK(0x52c5f0u, 0x52ad83u); RETCHK(0x52ad88u, 0x52ad83u); LOADALL;
  /* 0052ad88 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0052ad8b mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0052ad8d cmp dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ad90 jge 0x52adb5 */ if (!LT_) goto L_0052adb5;
  /* 0052ad92 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052ad95 mov dl, byte ptr [eax + 0xad] */ { const u32 m_ = (u32)(eax + 0xadu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052ad9b test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052ad9d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052ad9e jne 0x52ad64 */ if (!ZF_) goto L_0052ad64;
  /* 0052ada0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052ada3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052ada5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ada6 call 0x52b360 */ esp -= 4; M32(esp) = 0x52adabu; SAVEALL; F_0052b360(c); ABI_CHECK(0x52b360u, 0x52ada6u); RETCHK(0x52adabu, 0x52ada6u); LOADALL;
  /* 0052adab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052adac mov eax, esi */ { eax = (u32)(esi); }
  /* 0052adae pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052adaf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052adb1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052adb2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052adb5:;
  /* 0052adb5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
L_0052adb8:;
  /* 0052adb8 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0052adba cmp dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052adbd jge 0x52ae01 */ if (!LT_) goto L_0052ae01;
  /* 0052adbf lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052adc2 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0052adc5 call 0x4a82f0 */ esp -= 4; M32(esp) = 0x52adcau; SAVEALL; F_004a82f0(c); ABI_CHECK(0x4a82f0u, 0x52adc5u); RETCHK(0x52adcau, 0x52adc5u); LOADALL;
  /* 0052adca mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0052adcd cmp eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052add0 je 0x52add9 */ if (ZF_) goto L_0052add9;
  /* 0052add2 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 0052add4 cmp ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052add7 jge 0x52ae01 */ if (!LT_) goto L_0052ae01;
L_0052add9:;
  /* 0052add9 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052addc mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052addf cmp byte ptr [edx + 0xad], 0 */ { const u32 m_ = (u32)(edx + 0xadu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052ade6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052ade7 jne 0x52ad64 */ if (!ZF_) goto L_0052ad64;
  /* 0052aded push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052adef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052adf0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052adf2 call 0x52b360 */ esp -= 4; M32(esp) = 0x52adf7u; SAVEALL; F_0052b360(c); ABI_CHECK(0x52b360u, 0x52adf2u); RETCHK(0x52adf7u, 0x52adf2u); LOADALL;
  /* 0052adf7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052adf8 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052adfa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052adfb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052adfd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052adfe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052ae01:;
  /* 0052ae01 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052ae02 lea ebx, [ebp - 8] */ ebx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0052ae05 mov eax, edi */ { eax = (u32)(edi); }
  /* 0052ae07 call 0x52b230 */ esp -= 4; M32(esp) = 0x52ae0cu; SAVEALL; F_0052b230(c); ABI_CHECK(0x52b230u, 0x52ae07u); RETCHK(0x52ae0cu, 0x52ae07u); LOADALL;
  /* 0052ae0c mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0052ae0e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052ae0f mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0052ae11 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052ae13 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052ae14 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052ae16 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052ae17 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052ae20(CPU *c) {
  NATIVE_HOOK(0x52ae20u) REGS; LOADALL;
L_0052ae20:;
  /* 0052ae20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052ae21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052ae23 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052ae24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ae25 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ae26 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0052ae29 mov al, byte ptr [edi + 0xad] */ { const u32 m_ = (u32)(edi + 0xadu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052ae2f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052ae31 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0052ae33 mov esi, edi */ { esi = (u32)(edi); }
  /* 0052ae35 jne 0x52ae60 */ if (!ZF_) goto L_0052ae60;
L_0052ae37:;
  /* 0052ae37 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052ae3a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052ae3b mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0052ae3d call 0x52ae20 */ esp -= 4; M32(esp) = 0x52ae42u; SAVEALL; F_0052ae20(c); ABI_CHECK(0x52ae20u, 0x52ae3du); RETCHK(0x52ae42u, 0x52ae3du); LOADALL;
  /* 0052ae42 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0052ae44 mov eax, edi */ { eax = (u32)(edi); }
  /* 0052ae46 call 0x52c790 */ esp -= 4; M32(esp) = 0x52ae4bu; SAVEALL; F_0052c790(c); ABI_CHECK(0x52c790u, 0x52ae46u); RETCHK(0x52ae4bu, 0x52ae46u); LOADALL;
  /* 0052ae4b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ae4c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52ae51u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52ae4cu); RETCHK(0x52ae51u, 0x52ae4cu); LOADALL;
  /* 0052ae51 mov al, byte ptr [esi + 0xad] */ { const u32 m_ = (u32)(esi + 0xadu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052ae57 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ae5a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052ae5c mov edi, esi */ { edi = (u32)(esi); }
  /* 0052ae5e je 0x52ae37 */ if (ZF_) goto L_0052ae37;
L_0052ae60:;
  /* 0052ae60 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052ae61 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052ae62 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052ae63 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052ae64 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052ae70(CPU *c) {
  NATIVE_HOOK(0x52ae70u) REGS; LOADALL;
L_0052ae70:;
  /* 0052ae70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052ae71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052ae73 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ae76 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052ae77 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052ae78 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0052ae7a mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052ae7d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0052ae7f mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052ae82 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ae84 jne 0x52ae99 */ if (!ZF_) goto L_0052ae99;
  /* 0052ae86 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052ae87 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052ae89 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052ae8a call 0x52b6e0 */ esp -= 4; M32(esp) = 0x52ae8fu; SAVEALL; F_0052b6e0(c); ABI_CHECK(0x52b6e0u, 0x52ae8au); RETCHK(0x52ae8fu, 0x52ae8au); LOADALL;
  /* 0052ae8f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052ae90 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052ae92 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052ae93 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052ae95 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052ae96 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052ae99:;
  /* 0052ae99 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052ae9c cmp eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052ae9e jne 0x52aede */ if (!ZF_) goto L_0052aede;
  /* 0052aea0 cmp dword ptr [eax + 0x24], 0x10 */ { const u32 m_ = (u32)(eax + 0x24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052aea4 mov ecx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0052aea7 jb 0x52aeae */ if (CF_) goto L_0052aeae;
  /* 0052aea9 mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052aeac jmp 0x52aeb1 */ goto L_0052aeb1;
L_0052aeae:;
  /* 0052aeae add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0052aeb1:;
  /* 0052aeb1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052aeb2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052aeb3 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 0052aeb6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052aeb7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052aeb9 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0052aebb call 0x405de0 */ esp -= 4; M32(esp) = 0x52aec0u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x52aebbu); RETCHK(0x52aec0u, 0x52aebbu); LOADALL;
  /* 0052aec0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052aec2 jge 0x52afcc */ if (!LT_) goto L_0052afcc;
  /* 0052aec8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
L_0052aec9:;
  /* 0052aec9 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052aecc push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052aece push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052aecf call 0x52b6e0 */ esp -= 4; M32(esp) = 0x52aed4u; SAVEALL; F_0052b6e0(c); ABI_CHECK(0x52b6e0u, 0x52aecfu); RETCHK(0x52aed4u, 0x52aecfu); LOADALL;
  /* 0052aed4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052aed5 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052aed7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052aed8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052aeda pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052aedb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052aede:;
  /* 0052aede cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052aee0 jne 0x52af10 */ if (!ZF_) goto L_0052af10;
  /* 0052aee2 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052aee5 add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052aee8 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052aeea call 0x405fe0 */ esp -= 4; M32(esp) = 0x52aeefu; SAVEALL; F_00405fe0(c); ABI_CHECK(0x405fe0u, 0x52aeeau); RETCHK(0x52aeefu, 0x52aeeau); LOADALL;
  /* 0052aeef test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052aef1 je 0x52afcc */ if (ZF_) goto L_0052afcc;
  /* 0052aef7 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052aefa mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052aefd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052aefe push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052af00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052af01 call 0x52b6e0 */ esp -= 4; M32(esp) = 0x52af06u; SAVEALL; F_0052b6e0(c); ABI_CHECK(0x52b6e0u, 0x52af01u); RETCHK(0x52af06u, 0x52af01u); LOADALL;
  /* 0052af06 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052af07 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052af09 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052af0a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052af0c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052af0d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052af10:;
  /* 0052af10 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052af13 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0052af15 call 0x405fe0 */ esp -= 4; M32(esp) = 0x52af1au; SAVEALL; F_00405fe0(c); ABI_CHECK(0x405fe0u, 0x52af15u); RETCHK(0x52af1au, 0x52af15u); LOADALL;
  /* 0052af1a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052af1c je 0x52af61 */ if (ZF_) goto L_0052af61;
  /* 0052af1e mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052af21 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0052af24 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052af27 call 0x52c670 */ esp -= 4; M32(esp) = 0x52af2cu; SAVEALL; F_0052c670(c); ABI_CHECK(0x52c670u, 0x52af27u); RETCHK(0x52af2cu, 0x52af27u); LOADALL;
  /* 0052af2c mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0052af2f add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052af32 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052af34 call 0x405fe0 */ esp -= 4; M32(esp) = 0x52af39u; SAVEALL; F_00405fe0(c); ABI_CHECK(0x405fe0u, 0x52af34u); RETCHK(0x52af39u, 0x52af34u); LOADALL;
  /* 0052af39 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052af3b je 0x52af61 */ if (ZF_) goto L_0052af61;
  /* 0052af3d mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0052af40 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052af43 mov dl, byte ptr [eax + 0x49] */ { const u32 m_ = (u32)(eax + 0x49u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052af46 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052af48 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052af49 je 0x52aec9 */ if (ZF_) goto L_0052aec9;
  /* 0052af4f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052af51 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052af52 call 0x52b6e0 */ esp -= 4; M32(esp) = 0x52af57u; SAVEALL; F_0052b6e0(c); ABI_CHECK(0x52b6e0u, 0x52af52u); RETCHK(0x52af57u, 0x52af52u); LOADALL;
  /* 0052af57 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052af58 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052af5a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052af5b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052af5d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052af5e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052af61:;
  /* 0052af61 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052af64 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052af66 add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052af69 call 0x405fe0 */ esp -= 4; M32(esp) = 0x52af6eu; SAVEALL; F_00405fe0(c); ABI_CHECK(0x405fe0u, 0x52af69u); RETCHK(0x52af6eu, 0x52af69u); LOADALL;
  /* 0052af6e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052af70 je 0x52afcc */ if (ZF_) goto L_0052afcc;
  /* 0052af72 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052af75 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052af78 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0052af7b call 0x52bb70 */ esp -= 4; M32(esp) = 0x52af80u; SAVEALL; F_0052bb70(c); ABI_CHECK(0x52bb70u, 0x52af7bu); RETCHK(0x52af80u, 0x52af7bu); LOADALL;
  /* 0052af80 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0052af83 cmp eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052af86 je 0x52af99 */ if (ZF_) goto L_0052af99;
  /* 0052af88 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052af8b mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0052af8d call 0x405fe0 */ esp -= 4; M32(esp) = 0x52af92u; SAVEALL; F_00405fe0(c); ABI_CHECK(0x405fe0u, 0x52af8du); RETCHK(0x52af92u, 0x52af8du); LOADALL;
  /* 0052af92 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052af94 je 0x52afcc */ if (ZF_) goto L_0052afcc;
  /* 0052af96 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
L_0052af99:;
  /* 0052af99 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052af9c mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052af9f cmp byte ptr [edx + 0x49], 0 */ { const u32 m_ = (u32)(edx + 0x49u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052afa3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052afa4 je 0x52afb8 */ if (ZF_) goto L_0052afb8;
  /* 0052afa6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052afa8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052afa9 call 0x52b6e0 */ esp -= 4; M32(esp) = 0x52afaeu; SAVEALL; F_0052b6e0(c); ABI_CHECK(0x52b6e0u, 0x52afa9u); RETCHK(0x52afaeu, 0x52afa9u); LOADALL;
  /* 0052afae pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052afaf mov eax, esi */ { eax = (u32)(esi); }
  /* 0052afb1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052afb2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052afb4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052afb5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052afb8:;
  /* 0052afb8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052afba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052afbb mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052afbd call 0x52b6e0 */ esp -= 4; M32(esp) = 0x52afc2u; SAVEALL; F_0052b6e0(c); ABI_CHECK(0x52b6e0u, 0x52afbdu); RETCHK(0x52afc2u, 0x52afbdu); LOADALL;
  /* 0052afc2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052afc3 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052afc5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052afc6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052afc8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052afc9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052afcc:;
  /* 0052afcc mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052afce push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052afcf lea ebx, [ebp - 8] */ ebx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0052afd2 call 0x52b560 */ esp -= 4; M32(esp) = 0x52afd7u; SAVEALL; F_0052b560(c); ABI_CHECK(0x52b560u, 0x52afd2u); RETCHK(0x52afd7u, 0x52afd2u); LOADALL;
  /* 0052afd7 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0052afd9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052afda mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0052afdc mov eax, esi */ { eax = (u32)(esi); }
  /* 0052afde pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052afdf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052afe1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052afe2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052aff0(CPU *c) {
  NATIVE_HOOK(0x52aff0u) REGS; LOADALL;
L_0052aff0:;
  /* 0052aff0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052aff1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052aff3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052aff4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052aff5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0052aff8 mov al, byte ptr [esi + 0x49] */ { const u32 m_ = (u32)(esi + 0x49u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052affb test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052affd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052affe mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0052b000 mov edi, esi */ { edi = (u32)(esi); }
  /* 0052b002 jne 0x52b028 */ if (!ZF_) goto L_0052b028;
L_0052b004:;
  /* 0052b004 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052b007 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b008 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0052b00a call 0x52aff0 */ esp -= 4; M32(esp) = 0x52b00fu; SAVEALL; F_0052aff0(c); ABI_CHECK(0x52aff0u, 0x52b00au); RETCHK(0x52b00fu, 0x52b00au); LOADALL;
  /* 0052b00f mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 0052b011 call 0x52c7a0 */ esp -= 4; M32(esp) = 0x52b016u; SAVEALL; F_0052c7a0(c); ABI_CHECK(0x52c7a0u, 0x52b011u); RETCHK(0x52b016u, 0x52b011u); LOADALL;
  /* 0052b016 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052b017 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52b01cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52b017u); RETCHK(0x52b01cu, 0x52b017u); LOADALL;
  /* 0052b01c mov al, byte ptr [edi + 0x49] */ { const u32 m_ = (u32)(edi + 0x49u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b01f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052b022 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b024 mov esi, edi */ { esi = (u32)(edi); }
  /* 0052b026 je 0x52b004 */ if (ZF_) goto L_0052b004;
L_0052b028:;
  /* 0052b028 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052b029 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052b02a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052b02b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052b02c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052b030(CPU *c) {
  NATIVE_HOOK(0x52b030u) REGS; LOADALL;
L_0052b030:;
  /* 0052b030 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052b031 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052b033 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b034 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0052b037 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052b038 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052b03b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052b03d je 0x52b05a */ if (ZF_) goto L_0052b05a;
  /* 0052b03f mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052b042 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052b044 mov eax, 0x30c30c31 */ { eax = (u32)(0x30c30c31u); }
  /* 0052b049 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052b04b sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052b04e mov eax, edx */ { eax = (u32)(edx); }
  /* 0052b050 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052b053 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052b055 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0052b058 jne 0x52b05e */ if (!ZF_) goto L_0052b05e;
L_0052b05a:;
  /* 0052b05a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0052b05c jmp 0x52b073 */ goto L_0052b073;
L_0052b05e:;
  /* 0052b05e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0052b060 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052b062 mov eax, 0x30c30c31 */ { eax = (u32)(0x30c30c31u); }
  /* 0052b067 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052b069 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052b06c mov esi, edx */ { esi = (u32)(edx); }
  /* 0052b06e shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0052b071 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0052b073:;
  /* 0052b073 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0052b076 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052b078 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b079 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b07a call 0x52b8e0 */ esp -= 4; M32(esp) = 0x52b07fu; SAVEALL; F_0052b8e0(c); ABI_CHECK(0x52b8e0u, 0x52b07au); RETCHK(0x52b07fu, 0x52b07au); LOADALL;
  /* 0052b07f imul esi, esi, 0x54 */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x54u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052b082 add esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052b085 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052b088 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0052b08a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052b08b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052b08c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052b08d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0052b090(CPU *c) {
  NATIVE_HOOK(0x52b090u) REGS; LOADALL;
L_0052b090:;
  /* 0052b090 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052b091 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052b093 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052b099 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052b09b push 0x626838 */ { u32 v_ = 0x626838u; esp -= 4; M32(esp) = v_; }
  /* 0052b0a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b0a1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052b0a4 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052b0ab push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b0ac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052b0ad mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0052b0b0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b0b1 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0052b0b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052b0b5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b0b6 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0052b0bd mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0052b0c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b0c1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052b0c3 mov byte ptr [esi + 4], bl */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052b0c6 call 0x404140 */ esp -= 4; M32(esp) = 0x52b0cbu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x52b0c6u); RETCHK(0x52b0cbu, 0x52b0c6u); LOADALL;
  /* 0052b0cb mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0052b0ce lea edi, [esi + 0x1c] */ edi = (u32)((u32)(esi + 0x1cu));
  /* 0052b0d1 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052b0d3 mov dword ptr [edi + 0x14], ebx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0052b0d6 mov dword ptr [edi + 0x18], 0xf */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0052b0dd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b0de mov byte ptr [edi + 4], bl */ { const u32 m_ = (u32)(edi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052b0e1 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0052b0e4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b0e5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052b0e7 call 0x404140 */ esp -= 4; M32(esp) = 0x52b0ecu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x52b0e7u); RETCHK(0x52b0ecu, 0x52b0e7u); LOADALL;
  /* 0052b0ec mov ecx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0052b0ef mov dword ptr [edi + 0x1c], ecx */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0052b0f2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052b0f5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052b0f6 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052b0f8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052b0f9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052b100 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052b101 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052b103 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052b104 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0052b110(CPU *c) {
  NATIVE_HOOK(0x52b110u) REGS; LOADALL;
L_0052b110:;
  /* 0052b110 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052b111 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052b113 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052b119 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052b11b push 0x61ba39 */ { u32 v_ = 0x61ba39u; esp -= 4; M32(esp) = v_; }
  /* 0052b120 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b121 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052b128 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b129 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052b12a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0052b12d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0052b12f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052b131 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b132 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0052b139 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0052b13c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b13d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052b13f mov byte ptr [esi + 4], bl */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052b142 call 0x404140 */ esp -= 4; M32(esp) = 0x52b147u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x52b142u); RETCHK(0x52b147u, 0x52b142u); LOADALL;
  /* 0052b147 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052b149 lea ecx, [esi + 0x1c] */ ecx = (u32)((u32)(esi + 0x1cu));
  /* 0052b14c mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0052b14f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b150 lea eax, [edi + 0x1c] */ eax = (u32)((u32)(edi + 0x1cu));
  /* 0052b153 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0052b15a mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0052b15d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b15e mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052b161 call 0x404140 */ esp -= 4; M32(esp) = 0x52b166u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x52b161u); RETCHK(0x52b166u, 0x52b161u); LOADALL;
  /* 0052b166 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052b168 lea ecx, [esi + 0x38] */ ecx = (u32)((u32)(esi + 0x38u));
  /* 0052b16b mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0052b16f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b170 lea edx, [edi + 0x38] */ edx = (u32)((u32)(edi + 0x38u));
  /* 0052b173 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0052b17a mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0052b17d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052b17e mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052b181 call 0x404140 */ esp -= 4; M32(esp) = 0x52b186u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x52b181u); RETCHK(0x52b186u, 0x52b181u); LOADALL;
  /* 0052b186 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052b188 lea ecx, [esi + 0x54] */ ecx = (u32)((u32)(esi + 0x54u));
  /* 0052b18b mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0052b18f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b190 lea eax, [edi + 0x54] */ eax = (u32)((u32)(edi + 0x54u));
  /* 0052b193 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0052b19a mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0052b19d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b19e mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052b1a1 call 0x404140 */ esp -= 4; M32(esp) = 0x52b1a6u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x52b1a1u); RETCHK(0x52b1a6u, 0x52b1a1u); LOADALL;
  /* 0052b1a6 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052b1a8 lea ecx, [esi + 0x70] */ ecx = (u32)((u32)(esi + 0x70u));
  /* 0052b1ab mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0052b1af push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b1b0 lea edx, [edi + 0x70] */ edx = (u32)((u32)(edi + 0x70u));
  /* 0052b1b3 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0052b1ba mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0052b1bd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052b1be mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052b1c1 call 0x404140 */ esp -= 4; M32(esp) = 0x52b1c6u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x52b1c1u); RETCHK(0x52b1c6u, 0x52b1c1u); LOADALL;
  /* 0052b1c6 mov eax, dword ptr [edi + 0x8c] */ { const u32 m_ = (u32)(edi + 0x8cu); eax = (u32)(M32(m_)); }
  /* 0052b1cc mov dword ptr [esi + 0x8c], eax */ { const u32 m_ = (u32)(esi + 0x8cu); M32(m_) = (u32)(eax); }
  /* 0052b1d2 mov ecx, dword ptr [edi + 0x90] */ { const u32 m_ = (u32)(edi + 0x90u); ecx = (u32)(M32(m_)); }
  /* 0052b1d8 mov dword ptr [esi + 0x90], ecx */ { const u32 m_ = (u32)(esi + 0x90u); M32(m_) = (u32)(ecx); }
  /* 0052b1de mov edx, dword ptr [edi + 0x94] */ { const u32 m_ = (u32)(edi + 0x94u); edx = (u32)(M32(m_)); }
  /* 0052b1e4 mov dword ptr [esi + 0x94], edx */ { const u32 m_ = (u32)(esi + 0x94u); M32(m_) = (u32)(edx); }
  /* 0052b1ea mov al, byte ptr [edi + 0x98] */ { const u32 m_ = (u32)(edi + 0x98u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b1f0 mov byte ptr [esi + 0x98], al */ { const u32 m_ = (u32)(esi + 0x98u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052b1f6 mov cl, byte ptr [edi + 0x99] */ { const u32 m_ = (u32)(edi + 0x99u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b1fc mov byte ptr [esi + 0x99], cl */ { const u32 m_ = (u32)(esi + 0x99u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0052b202 mov dl, byte ptr [edi + 0x9a] */ { const u32 m_ = (u32)(edi + 0x9au); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b208 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052b20b mov byte ptr [esi + 0x9a], dl */ { const u32 m_ = (u32)(esi + 0x9au); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0052b211 mov al, byte ptr [edi + 0x9b] */ { const u32 m_ = (u32)(edi + 0x9bu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b217 mov byte ptr [esi + 0x9b], al */ { const u32 m_ = (u32)(esi + 0x9bu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052b21d mov eax, esi */ { eax = (u32)(esi); }
  /* 0052b21f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052b220 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052b227 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052b228 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052b22a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052b22b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052b230(CPU *c) {
  NATIVE_HOOK(0x52b230u) REGS; LOADALL;
L_0052b230:;
  /* 0052b230 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052b231 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052b233 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052b236 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052b237 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b238 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052b23a mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052b23d mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b240 mov dl, byte ptr [eax + 0xad] */ { const u32 m_ = (u32)(eax + 0xadu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b246 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b248 mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0052b24a mov byte ptr [ebp - 8], cl */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0052b24d jne 0x52b273 */ if (!ZF_) goto L_0052b273;
  /* 0052b24f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052b252 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
L_0052b254:;
  /* 0052b254 cmp edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b257 setl cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((LT_) ? 1u : 0u) & 0xffu); }
  /* 0052b25a test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b25c mov esi, eax */ { esi = (u32)(eax); }
  /* 0052b25e mov byte ptr [ebp - 8], cl */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0052b261 je 0x52b267 */ if (ZF_) goto L_0052b267;
  /* 0052b263 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0052b265 jmp 0x52b26a */ goto L_0052b26a;
L_0052b267:;
  /* 0052b267 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
L_0052b26a:;
  /* 0052b26a cmp byte ptr [eax + 0xad], 0 */ { const u32 m_ = (u32)(eax + 0xadu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052b271 je 0x52b254 */ if (ZF_) goto L_0052b254;
L_0052b273:;
  /* 0052b273 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b275 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052b277 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0052b27a je 0x52b296 */ if (ZF_) goto L_0052b296;
  /* 0052b27c mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052b27f cmp esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b281 jne 0x52b28b */ if (!ZF_) goto L_0052b28b;
  /* 0052b283 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052b286 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b287 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052b289 jmp 0x52b2a5 */ goto L_0052b2a5;
L_0052b28b:;
  /* 0052b28b lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0052b28e call 0x52c5f0 */ esp -= 4; M32(esp) = 0x52b293u; SAVEALL; F_0052c5f0(c); ABI_CHECK(0x52c5f0u, 0x52b28eu); RETCHK(0x52b293u, 0x52b28eu); LOADALL;
  /* 0052b293 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
L_0052b296:;
  /* 0052b296 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052b299 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052b29c cmp edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b29e jge 0x52b2c2 */ if (!LT_) goto L_0052b2c2;
  /* 0052b2a0 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0052b2a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052b2a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
L_0052b2a5:;
  /* 0052b2a5 lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 0052b2a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052b2a9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052b2ab call 0x52b360 */ esp -= 4; M32(esp) = 0x52b2b0u; SAVEALL; F_0052b360(c); ABI_CHECK(0x52b360u, 0x52b2abu); RETCHK(0x52b2b0u, 0x52b2abu); LOADALL;
  /* 0052b2b0 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052b2b2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052b2b3 mov dword ptr [ebx], edx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edx); }
  /* 0052b2b5 mov byte ptr [ebx + 4], 1 */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)(0x1u); }
  /* 0052b2b9 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052b2bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052b2bc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052b2be pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052b2bf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052b2c2:;
  /* 0052b2c2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052b2c3 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 0052b2c5 mov byte ptr [ebx + 4], 0 */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0052b2c9 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052b2cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052b2cc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052b2ce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052b2cf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052b2e0(CPU *c) {
  NATIVE_HOOK(0x52b2e0u) REGS; LOADALL;
L_0052b2e0:;
  /* 0052b2e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052b2e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052b2e3 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052b2e6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052b2e9 cmp eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b2eb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b2ec mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0052b2ef jne 0x52b327 */ if (!ZF_) goto L_0052b327;
  /* 0052b2f1 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b2f3 jne 0x52b327 */ if (!ZF_) goto L_0052b327;
  /* 0052b2f5 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b2f8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b2f9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052b2fb call 0x52ae20 */ esp -= 4; M32(esp) = 0x52b300u; SAVEALL; F_0052ae20(c); ABI_CHECK(0x52ae20u, 0x52b2fbu); RETCHK(0x52b300u, 0x52b2fbu); LOADALL;
  /* 0052b300 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b303 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052b306 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b309 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0052b310 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 0052b312 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b315 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052b318 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052b31b mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0052b31d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052b320 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0052b322 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052b323 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052b324 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0052b327:;
  /* 0052b327 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b329 je 0x52b34d */ if (ZF_) goto L_0052b34d;
  /* 0052b32b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b32c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0052b330:;
  /* 0052b330 lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 0052b333 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052b335 call 0x4a82f0 */ esp -= 4; M32(esp) = 0x52b33au; SAVEALL; F_004a82f0(c); ABI_CHECK(0x4a82f0u, 0x52b335u); RETCHK(0x52b33au, 0x52b335u); LOADALL;
  /* 0052b33a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b33b lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 0052b33e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b33f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052b340 call 0x52bbd0 */ esp -= 4; M32(esp) = 0x52b345u; SAVEALL; F_0052bbd0(c); ABI_CHECK(0x52bbd0u, 0x52b340u); RETCHK(0x52b345u, 0x52b340u); LOADALL;
  /* 0052b345 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052b348 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b34a jne 0x52b330 */ if (!ZF_) goto L_0052b330;
  /* 0052b34c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0052b34d:;
  /* 0052b34d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052b350 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0052b352 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0052b354 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052b355 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052b356 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0052b360(CPU *c) {
  NATIVE_HOOK(0x52b360u) REGS; LOADALL;
L_0052b360:;
  /* 0052b360 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052b361 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052b363 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052b365 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 0052b36a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052b370 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b371 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052b378 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052b37b cmp dword ptr [edi + 8], 0x1999998 */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M32(m_), b_ = 0x1999998u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b382 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b383 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052b384 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052b386 jb 0x52b3cb */ if (CF_) goto L_0052b3cb;
  /* 0052b388 push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 0052b38a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0052b38c push 0x642714 */ { u32 v_ = 0x642714u; esp -= 4; M32(esp) = v_; }
  /* 0052b391 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0052b394 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 0052b39b mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0052b39e mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 0052b3a2 call 0x404420 */ esp -= 4; M32(esp) = 0x52b3a7u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x52b3a2u); RETCHK(0x52b3a7u, 0x52b3a2u); LOADALL;
  /* 0052b3a7 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0052b3aa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b3ab lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0052b3ae mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0052b3b1 call 0x4040e0 */ esp -= 4; M32(esp) = 0x52b3b6u; SAVEALL; F_004040e0(c); ABI_CHECK(0x4040e0u, 0x52b3b1u); RETCHK(0x52b3b6u, 0x52b3b1u); LOADALL;
  /* 0052b3b6 push 0x657ab8 */ { u32 v_ = 0x657ab8u; esp -= 4; M32(esp) = v_; }
  /* 0052b3bb lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0052b3be push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052b3bf mov dword ptr [ebp - 0x50], 0x63cf80 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x63cf80u); }
  /* 0052b3c6 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
L_0052b3cb:;
  /* 0052b3cb mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b3ce mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052b3d1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052b3d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b3d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052b3d5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b3d6 call 0x52c030 */ esp -= 4; M32(esp) = 0x52b3dbu; SAVEALL; F_0052c030(c); ABI_CHECK(0x52c030u, 0x52b3d6u); RETCHK(0x52b3dbu, 0x52b3d6u); LOADALL;
  /* 0052b3db mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0052b3de mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052b3e0 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b3e3 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052b3e4 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b3e6 mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0052b3e9 mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0052b3ec jne 0x52b3fb */ if (!ZF_) goto L_0052b3fb;
  /* 0052b3ee mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0052b3f1 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052b3f4 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0052b3f6 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b3f9 jmp 0x52b41a */ goto L_0052b41a;
L_0052b3fb:;
  /* 0052b3fb mov al, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b3fe test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b400 je 0x52b40f */ if (ZF_) goto L_0052b40f;
  /* 0052b402 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 0052b404 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b407 cmp esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b409 jne 0x52b41d */ if (!ZF_) goto L_0052b41d;
  /* 0052b40b mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052b40d jmp 0x52b41d */ goto L_0052b41d;
L_0052b40f:;
  /* 0052b40f mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0052b412 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b415 cmp esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b418 jne 0x52b41d */ if (!ZF_) goto L_0052b41d;
L_0052b41a:;
  /* 0052b41a mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_0052b41d:;
  /* 0052b41d mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052b420 mov bl, byte ptr [edx + 0xac] */ { const u32 m_ = (u32)(edx + 0xacu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b426 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b428 lea eax, [ecx + 4] */ eax = (u32)((u32)(ecx + 0x4u));
  /* 0052b42b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052b42d jne 0x52b4f0 */ if (!ZF_) goto L_0052b4f0;
L_0052b433:;
  /* 0052b433 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052b435 mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0052b438 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0052b43a cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b43c jne 0x52b4a0 */ if (!ZF_) goto L_0052b4a0;
  /* 0052b43e mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052b441 mov bl, byte ptr [edx + 0xac] */ { const u32 m_ = (u32)(edx + 0xacu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b447 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b449 jne 0x52b46e */ if (!ZF_) goto L_0052b46e;
L_0052b44b:;
  /* 0052b44b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052b44d mov byte ptr [ecx + 0xac], 1 */ { const u32 m_ = (u32)(ecx + 0xacu); M8(m_) = (u8)(0x1u); }
  /* 0052b454 mov byte ptr [edx + 0xac], 1 */ { const u32 m_ = (u32)(edx + 0xacu); M8(m_) = (u8)(0x1u); }
  /* 0052b45b mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052b45d mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052b460 mov byte ptr [ecx + 0xac], 0 */ { const u32 m_ = (u32)(ecx + 0xacu); M8(m_) = (u8)(0x0u); }
  /* 0052b467 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052b469 mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052b46c jmp 0x52b4d9 */ goto L_0052b4d9;
L_0052b46e:;
  /* 0052b46e cmp esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b471 jne 0x52b47b */ if (!ZF_) goto L_0052b47b;
  /* 0052b473 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b474 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052b476 call 0x52bf30 */ esp -= 4; M32(esp) = 0x52b47bu; SAVEALL; F_0052bf30(c); ABI_CHECK(0x52bf30u, 0x52b476u); RETCHK(0x52b47bu, 0x52b476u); LOADALL;
L_0052b47b:;
  /* 0052b47b mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b47e mov byte ptr [eax + 0xac], 1 */ { const u32 m_ = (u32)(eax + 0xacu); M8(m_) = (u8)(0x1u); }
  /* 0052b485 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052b488 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052b48b mov byte ptr [edx + 0xac], 0 */ { const u32 m_ = (u32)(edx + 0xacu); M8(m_) = (u8)(0x0u); }
  /* 0052b492 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b495 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052b498 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b499 call 0x52bf90 */ esp -= 4; M32(esp) = 0x52b49eu; SAVEALL; F_0052bf90(c); ABI_CHECK(0x52bf90u, 0x52b499u); RETCHK(0x52b49eu, 0x52b499u); LOADALL;
  /* 0052b49e jmp 0x52b4d9 */ goto L_0052b4d9;
L_0052b4a0:;
  /* 0052b4a0 mov bl, byte ptr [edx + 0xac] */ { const u32 m_ = (u32)(edx + 0xacu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b4a6 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b4a8 je 0x52b44b */ if (ZF_) goto L_0052b44b;
  /* 0052b4aa cmp esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b4ac jne 0x52b4b6 */ if (!ZF_) goto L_0052b4b6;
  /* 0052b4ae push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b4af mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052b4b1 call 0x52bf90 */ esp -= 4; M32(esp) = 0x52b4b6u; SAVEALL; F_0052bf90(c); ABI_CHECK(0x52bf90u, 0x52b4b1u); RETCHK(0x52b4b6u, 0x52b4b1u); LOADALL;
L_0052b4b6:;
  /* 0052b4b6 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b4b9 mov byte ptr [eax + 0xac], 1 */ { const u32 m_ = (u32)(eax + 0xacu); M8(m_) = (u8)(0x1u); }
  /* 0052b4c0 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052b4c3 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052b4c6 mov byte ptr [edx + 0xac], 0 */ { const u32 m_ = (u32)(edx + 0xacu); M8(m_) = (u8)(0x0u); }
  /* 0052b4cd mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b4d0 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052b4d3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b4d4 call 0x52bf30 */ esp -= 4; M32(esp) = 0x52b4d9u; SAVEALL; F_0052bf30(c); ABI_CHECK(0x52bf30u, 0x52b4d4u); RETCHK(0x52b4d9u, 0x52b4d4u); LOADALL;
L_0052b4d9:;
  /* 0052b4d9 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052b4dc mov dl, byte ptr [ecx + 0xac] */ { const u32 m_ = (u32)(ecx + 0xacu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b4e2 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b4e4 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 0052b4e7 je 0x52b433 */ if (ZF_) goto L_0052b433;
  /* 0052b4ed mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
L_0052b4f0:;
  /* 0052b4f0 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052b4f3 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b4f6 mov byte ptr [eax + 0xac], 1 */ { const u32 m_ = (u32)(eax + 0xacu); M8(m_) = (u8)(0x1u); }
  /* 0052b4fd mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052b500 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052b502 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052b505 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052b506 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052b507 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052b50e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052b510 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052b511 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0052b520(CPU *c) {
  NATIVE_HOOK(0x52b520u) REGS; LOADALL;
L_0052b520:;
  /* 0052b520 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052b521 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052b523 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b526 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052b529 mov dl, byte ptr [ecx + 0xad] */ { const u32 m_ = (u32)(ecx + 0xadu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b52f test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b531 jne 0x52b559 */ if (!ZF_) goto L_0052b559;
  /* 0052b533 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052b536 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 0052b538 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b539 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0052b540:;
  /* 0052b540 cmp dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b543 jge 0x52b54a */ if (!LT_) goto L_0052b54a;
  /* 0052b545 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052b548 jmp 0x52b54e */ goto L_0052b54e;
L_0052b54a:;
  /* 0052b54a mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0052b54c mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
L_0052b54e:;
  /* 0052b54e mov bl, byte ptr [ecx + 0xad] */ { const u32 m_ = (u32)(ecx + 0xadu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b554 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b556 je 0x52b540 */ if (ZF_) goto L_0052b540;
  /* 0052b558 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0052b559:;
  /* 0052b559 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052b55a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052b560(CPU *c) {
  NATIVE_HOOK(0x52b560u) REGS; LOADALL;
L_0052b560:;
  /* 0052b560 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052b561 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052b563 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052b566 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052b569 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052b56a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b56b mov edi, eax */ { edi = (u32)(eax); }
  /* 0052b56d mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b570 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052b573 cmp byte ptr [esi + 0x49], 0 */ { const u32 m_ = (u32)(esi + 0x49u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052b577 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052b579 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0052b57b mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0052b57e mov byte ptr [ebp - 0xc], al */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052b581 jne 0x52b5c6 */ if (!ZF_) goto L_0052b5c6;
L_0052b583:;
  /* 0052b583 cmp dword ptr [esi + 0x24], 0x10 */ { const u32 m_ = (u32)(esi + 0x24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b587 mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0052b58a mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0052b58d jb 0x52b594 */ if (CF_) goto L_0052b594;
  /* 0052b58f mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052b592 jmp 0x52b597 */ goto L_0052b597;
L_0052b594:;
  /* 0052b594 lea eax, [esi + 0x10] */ eax = (u32)((u32)(esi + 0x10u));
L_0052b597:;
  /* 0052b597 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052b598 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b599 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0052b59c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b59d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052b59f mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052b5a1 call 0x405de0 */ esp -= 4; M32(esp) = 0x52b5a6u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x52b5a1u); RETCHK(0x52b5a6u, 0x52b5a1u); LOADALL;
  /* 0052b5a6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052b5a8 setl al */ { eax = (eax & 0xffffff00u) | ((u32)((LT_) ? 1u : 0u) & 0xffu); }
  /* 0052b5ab test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b5ad mov byte ptr [ebp - 0xc], al */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052b5b0 je 0x52b5b6 */ if (ZF_) goto L_0052b5b6;
  /* 0052b5b2 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0052b5b4 jmp 0x52b5b9 */ goto L_0052b5b9;
L_0052b5b6:;
  /* 0052b5b6 mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
L_0052b5b9:;
  /* 0052b5b9 mov cl, byte ptr [esi + 0x49] */ { const u32 m_ = (u32)(esi + 0x49u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b5bc test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b5be je 0x52b583 */ if (ZF_) goto L_0052b583;
  /* 0052b5c0 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0052b5c3 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_0052b5c6:;
  /* 0052b5c6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b5c8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052b5ca mov dword ptr [ebp - 8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 0052b5cd je 0x52b601 */ if (ZF_) goto L_0052b601;
  /* 0052b5cf mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b5d2 cmp ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b5d4 jne 0x52b5f6 */ if (!ZF_) goto L_0052b5f6;
  /* 0052b5d6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b5d7 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0052b5d9 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0052b5dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b5dd mov edi, edx */ { edi = (u32)(edx); }
  /* 0052b5df call 0x52b6e0 */ esp -= 4; M32(esp) = 0x52b5e4u; SAVEALL; F_0052b6e0(c); ABI_CHECK(0x52b6e0u, 0x52b5dfu); RETCHK(0x52b5e4u, 0x52b5dfu); LOADALL;
  /* 0052b5e4 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052b5e6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052b5e7 mov dword ptr [ebx], ecx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(ecx); }
  /* 0052b5e9 mov byte ptr [ebx + 4], 1 */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)(0x1u); }
  /* 0052b5ed mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052b5ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052b5f0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052b5f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052b5f3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052b5f6:;
  /* 0052b5f6 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0052b5f9 call 0x52c670 */ esp -= 4; M32(esp) = 0x52b5feu; SAVEALL; F_0052c670(c); ABI_CHECK(0x52c670u, 0x52b5f9u); RETCHK(0x52b5feu, 0x52b5f9u); LOADALL;
  /* 0052b5fe mov esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); esi = (u32)(M32(m_)); }
L_0052b601:;
  /* 0052b601 cmp dword ptr [edi + 0x18], 0x10 */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b605 mov edx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); edx = (u32)(M32(m_)); }
  /* 0052b608 lea ecx, [esi + 0xc] */ ecx = (u32)((u32)(esi + 0xcu));
  /* 0052b60b jb 0x52b612 */ if (CF_) goto L_0052b612;
  /* 0052b60d mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b610 jmp 0x52b615 */ goto L_0052b615;
L_0052b612:;
  /* 0052b612 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
L_0052b615:;
  /* 0052b615 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052b616 mov edx, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); edx = (u32)(M32(m_)); }
  /* 0052b619 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b61a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052b61b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052b61d call 0x405de0 */ esp -= 4; M32(esp) = 0x52b622u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x52b61du); RETCHK(0x52b622u, 0x52b61du); LOADALL;
  /* 0052b622 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052b624 jge 0x52b64c */ if (!LT_) goto L_0052b64c;
  /* 0052b626 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 0052b629 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b62a mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0052b62d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b62e lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 0052b631 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052b632 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0052b635 call 0x52b6e0 */ esp -= 4; M32(esp) = 0x52b63au; SAVEALL; F_0052b6e0(c); ABI_CHECK(0x52b6e0u, 0x52b635u); RETCHK(0x52b63au, 0x52b635u); LOADALL;
  /* 0052b63a mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052b63c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052b63d mov dword ptr [ebx], edx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edx); }
  /* 0052b63f mov byte ptr [ebx + 4], 1 */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)(0x1u); }
  /* 0052b643 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052b645 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052b646 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052b648 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052b649 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052b64c:;
  /* 0052b64c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052b64d mov dword ptr [ebx], esi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(esi); }
  /* 0052b64f mov byte ptr [ebx + 4], 0 */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0052b653 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052b655 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052b656 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052b658 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052b659 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0052b660(CPU *c) {
  NATIVE_HOOK(0x52b660u) REGS; LOADALL;
L_0052b660:;
  /* 0052b660 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052b661 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052b663 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052b666 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052b669 cmp eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b66b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b66c mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0052b66f jne 0x52b6a7 */ if (!ZF_) goto L_0052b6a7;
  /* 0052b671 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b673 jne 0x52b6a7 */ if (!ZF_) goto L_0052b6a7;
  /* 0052b675 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b678 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b679 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052b67b call 0x52aff0 */ esp -= 4; M32(esp) = 0x52b680u; SAVEALL; F_0052aff0(c); ABI_CHECK(0x52aff0u, 0x52b67bu); RETCHK(0x52b680u, 0x52b67bu); LOADALL;
  /* 0052b680 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b683 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052b686 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b689 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0052b690 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 0052b692 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b695 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052b698 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052b69b mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0052b69d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052b6a0 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0052b6a2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052b6a3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052b6a4 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0052b6a7:;
  /* 0052b6a7 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b6a9 je 0x52b6cd */ if (ZF_) goto L_0052b6cd;
  /* 0052b6ab push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b6ac lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0052b6b0:;
  /* 0052b6b0 lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 0052b6b3 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052b6b5 call 0x52bb70 */ esp -= 4; M32(esp) = 0x52b6bau; SAVEALL; F_0052bb70(c); ABI_CHECK(0x52bb70u, 0x52b6b5u); RETCHK(0x52b6bau, 0x52b6b5u); LOADALL;
  /* 0052b6ba push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b6bb lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 0052b6be push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b6bf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052b6c0 call 0x52c0e0 */ esp -= 4; M32(esp) = 0x52b6c5u; SAVEALL; F_0052c0e0(c); ABI_CHECK(0x52c0e0u, 0x52b6c0u); RETCHK(0x52b6c5u, 0x52b6c0u); LOADALL;
  /* 0052b6c5 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052b6c8 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b6ca jne 0x52b6b0 */ if (!ZF_) goto L_0052b6b0;
  /* 0052b6cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0052b6cd:;
  /* 0052b6cd mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052b6d0 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0052b6d2 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0052b6d4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052b6d5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052b6d6 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0052b6e0(CPU *c) {
  NATIVE_HOOK(0x52b6e0u) REGS; LOADALL;
L_0052b6e0:;
  /* 0052b6e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052b6e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052b6e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052b6e5 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 0052b6ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052b6f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b6f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052b6f8 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052b6fb cmp dword ptr [edi + 8], 0x4444443 */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M32(m_), b_ = 0x4444443u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b702 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b703 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052b704 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052b706 jb 0x52b74b */ if (CF_) goto L_0052b74b;
  /* 0052b708 push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 0052b70a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0052b70c push 0x642714 */ { u32 v_ = 0x642714u; esp -= 4; M32(esp) = v_; }
  /* 0052b711 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0052b714 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 0052b71b mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0052b71e mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 0052b722 call 0x404420 */ esp -= 4; M32(esp) = 0x52b727u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x52b722u); RETCHK(0x52b727u, 0x52b722u); LOADALL;
  /* 0052b727 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0052b72a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b72b lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0052b72e mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0052b731 call 0x4040e0 */ esp -= 4; M32(esp) = 0x52b736u; SAVEALL; F_004040e0(c); ABI_CHECK(0x4040e0u, 0x52b731u); RETCHK(0x52b736u, 0x52b731u); LOADALL;
  /* 0052b736 push 0x657ab8 */ { u32 v_ = 0x657ab8u; esp -= 4; M32(esp) = v_; }
  /* 0052b73b lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0052b73e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052b73f mov dword ptr [ebp - 0x50], 0x63cf80 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x63cf80u); }
  /* 0052b746 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
L_0052b74b:;
  /* 0052b74b mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0052b74e mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b751 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052b753 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052b754 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b755 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052b756 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b757 call 0x52c510 */ esp -= 4; M32(esp) = 0x52b75cu; SAVEALL; F_0052c510(c); ABI_CHECK(0x52c510u, 0x52b757u); RETCHK(0x52b75cu, 0x52b757u); LOADALL;
  /* 0052b75c mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0052b75f mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052b761 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b764 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0052b765 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b767 mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0052b76a mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0052b76d jne 0x52b77f */ if (!ZF_) goto L_0052b77f;
  /* 0052b76f mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0052b772 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b775 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052b777 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052b77a mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0052b77d jmp 0x52b7a1 */ goto L_0052b7a1;
L_0052b77f:;
  /* 0052b77f mov al, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b782 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b784 je 0x52b793 */ if (ZF_) goto L_0052b793;
  /* 0052b786 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 0052b788 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b78b cmp esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b78d jne 0x52b7a1 */ if (!ZF_) goto L_0052b7a1;
  /* 0052b78f mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052b791 jmp 0x52b7a1 */ goto L_0052b7a1;
L_0052b793:;
  /* 0052b793 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0052b796 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b799 cmp esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b79c jne 0x52b7a1 */ if (!ZF_) goto L_0052b7a1;
  /* 0052b79e mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_0052b7a1:;
  /* 0052b7a1 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052b7a4 mov bl, byte ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b7a7 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b7a9 lea eax, [ecx + 4] */ eax = (u32)((u32)(ecx + 0x4u));
  /* 0052b7ac mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052b7ae jne 0x52b853 */ if (!ZF_) goto L_0052b853;
L_0052b7b4:;
  /* 0052b7b4 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052b7b6 mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0052b7b9 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0052b7bb cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b7bd jne 0x52b80f */ if (!ZF_) goto L_0052b80f;
  /* 0052b7bf mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052b7c2 mov bl, byte ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b7c5 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b7c7 jne 0x52b7e3 */ if (!ZF_) goto L_0052b7e3;
L_0052b7c9:;
  /* 0052b7c9 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052b7cb mov byte ptr [ecx + 0x48], 1 */ { const u32 m_ = (u32)(ecx + 0x48u); M8(m_) = (u8)(0x1u); }
  /* 0052b7cf mov byte ptr [edx + 0x48], 1 */ { const u32 m_ = (u32)(edx + 0x48u); M8(m_) = (u8)(0x1u); }
  /* 0052b7d3 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052b7d5 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052b7d8 mov byte ptr [ecx + 0x48], 0 */ { const u32 m_ = (u32)(ecx + 0x48u); M8(m_) = (u8)(0x0u); }
  /* 0052b7dc mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052b7de mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052b7e1 jmp 0x52b83f */ goto L_0052b83f;
L_0052b7e3:;
  /* 0052b7e3 cmp esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b7e6 jne 0x52b7f0 */ if (!ZF_) goto L_0052b7f0;
  /* 0052b7e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b7e9 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052b7eb call 0x52c3f0 */ esp -= 4; M32(esp) = 0x52b7f0u; SAVEALL; F_0052c3f0(c); ABI_CHECK(0x52c3f0u, 0x52b7ebu); RETCHK(0x52b7f0u, 0x52b7ebu); LOADALL;
L_0052b7f0:;
  /* 0052b7f0 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b7f3 mov byte ptr [eax + 0x48], 1 */ { const u32 m_ = (u32)(eax + 0x48u); M8(m_) = (u8)(0x1u); }
  /* 0052b7f7 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052b7fa mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052b7fd mov byte ptr [edx + 0x48], 0 */ { const u32 m_ = (u32)(edx + 0x48u); M8(m_) = (u8)(0x0u); }
  /* 0052b801 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b804 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052b807 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b808 call 0x52c470 */ esp -= 4; M32(esp) = 0x52b80du; SAVEALL; F_0052c470(c); ABI_CHECK(0x52c470u, 0x52b808u); RETCHK(0x52b80du, 0x52b808u); LOADALL;
  /* 0052b80d jmp 0x52b83f */ goto L_0052b83f;
L_0052b80f:;
  /* 0052b80f mov bl, byte ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b812 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b814 je 0x52b7c9 */ if (ZF_) goto L_0052b7c9;
  /* 0052b816 cmp esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b818 jne 0x52b822 */ if (!ZF_) goto L_0052b822;
  /* 0052b81a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b81b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052b81d call 0x52c470 */ esp -= 4; M32(esp) = 0x52b822u; SAVEALL; F_0052c470(c); ABI_CHECK(0x52c470u, 0x52b81du); RETCHK(0x52b822u, 0x52b81du); LOADALL;
L_0052b822:;
  /* 0052b822 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b825 mov byte ptr [eax + 0x48], 1 */ { const u32 m_ = (u32)(eax + 0x48u); M8(m_) = (u8)(0x1u); }
  /* 0052b829 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052b82c mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052b82f mov byte ptr [edx + 0x48], 0 */ { const u32 m_ = (u32)(edx + 0x48u); M8(m_) = (u8)(0x0u); }
  /* 0052b833 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b836 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052b839 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b83a call 0x52c3f0 */ esp -= 4; M32(esp) = 0x52b83fu; SAVEALL; F_0052c3f0(c); ABI_CHECK(0x52c3f0u, 0x52b83au); RETCHK(0x52b83fu, 0x52b83au); LOADALL;
L_0052b83f:;
  /* 0052b83f mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052b842 mov dl, byte ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b845 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b847 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 0052b84a je 0x52b7b4 */ if (ZF_) goto L_0052b7b4;
  /* 0052b850 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
L_0052b853:;
  /* 0052b853 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052b856 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b859 mov byte ptr [eax + 0x48], 1 */ { const u32 m_ = (u32)(eax + 0x48u); M8(m_) = (u8)(0x1u); }
  /* 0052b85d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052b860 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052b862 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052b865 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052b866 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052b867 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052b86e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052b870 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052b871 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0052b880(CPU *c) {
  NATIVE_HOOK(0x52b880u) REGS; LOADALL;
L_0052b880:;
  /* 0052b880 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052b881 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052b883 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052b884 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052b887 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052b888 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052b88b mov cl, byte ptr [esi + 0x49] */ { const u32 m_ = (u32)(esi + 0x49u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b88e test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b890 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0052b893 jne 0x52b8d8 */ if (!ZF_) goto L_0052b8d8;
  /* 0052b895 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b896 lea ebx, [edi + 4] */ ebx = (u32)((u32)(edi + 0x4u));
  /* 0052b899 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0052b8a0:;
  /* 0052b8a0 cmp dword ptr [edi + 0x18], 0x10 */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b8a4 mov edx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); edx = (u32)(M32(m_)); }
  /* 0052b8a7 lea ecx, [esi + 0xc] */ ecx = (u32)((u32)(esi + 0xcu));
  /* 0052b8aa jb 0x52b8b0 */ if (CF_) goto L_0052b8b0;
  /* 0052b8ac mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0052b8ae jmp 0x52b8b2 */ goto L_0052b8b2;
L_0052b8b0:;
  /* 0052b8b0 mov eax, ebx */ { eax = (u32)(ebx); }
L_0052b8b2:;
  /* 0052b8b2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052b8b3 mov edx, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); edx = (u32)(M32(m_)); }
  /* 0052b8b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b8b7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052b8b8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052b8ba call 0x405de0 */ esp -= 4; M32(esp) = 0x52b8bfu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x52b8bau); RETCHK(0x52b8bfu, 0x52b8bau); LOADALL;
  /* 0052b8bf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052b8c1 jge 0x52b8c8 */ if (!LT_) goto L_0052b8c8;
  /* 0052b8c3 mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0052b8c6 jmp 0x52b8cd */ goto L_0052b8cd;
L_0052b8c8:;
  /* 0052b8c8 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0052b8cb mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
L_0052b8cd:;
  /* 0052b8cd mov al, byte ptr [esi + 0x49] */ { const u32 m_ = (u32)(esi + 0x49u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052b8d0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052b8d2 je 0x52b8a0 */ if (ZF_) goto L_0052b8a0;
  /* 0052b8d4 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0052b8d7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0052b8d8:;
  /* 0052b8d8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052b8d9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052b8db pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052b8dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052b8e0(CPU *c) {
  NATIVE_HOOK(0x52b8e0u) REGS; LOADALL;
L_0052b8e0:;
  /* 0052b8e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052b8e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052b8e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052b8e5 push 0x61c6c0 */ { u32 v_ = 0x61c6c0u; esp -= 4; M32(esp) = v_; }
  /* 0052b8ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052b8f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052b8f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052b8f8 sub esp, 0x64 */ { u32 a_ = esp, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052b8fb mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0052b900 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052b901 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052b902 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052b903 mov ecx, 0x15 */ { ecx = (u32)(0x15u); }
  /* 0052b908 mov esi, edx */ { esi = (u32)(edx); }
  /* 0052b90a lea edi, [ebp - 0x68] */ edi = (u32)((u32)(ebp + 0xffffff98u));
  /* 0052b90d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0052b90f mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0052b912 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0052b915 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052b917 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0052b91a mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0052b91d jne 0x52b923 */ if (!ZF_) goto L_0052b923;
  /* 0052b91f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052b921 jmp 0x52b939 */ goto L_0052b939;
L_0052b923:;
  /* 0052b923 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052b926 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052b928 mov eax, 0x30c30c31 */ { eax = (u32)(0x30c30c31u); }
  /* 0052b92d imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052b92f sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052b932 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0052b934 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0052b937 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0052b939:;
  /* 0052b939 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 0052b93c test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052b93e je 0x52bb47 */ if (ZF_) goto L_0052bb47;
  /* 0052b944 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052b946 jne 0x52b94c */ if (!ZF_) goto L_0052b94c;
  /* 0052b948 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052b94a jmp 0x52b962 */ goto L_0052b962;
L_0052b94c:;
  /* 0052b94c mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052b94f sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052b951 mov eax, 0x30c30c31 */ { eax = (u32)(0x30c30c31u); }
  /* 0052b956 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052b958 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052b95b mov eax, edx */ { eax = (u32)(edx); }
  /* 0052b95d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052b960 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0052b962:;
  /* 0052b962 mov edx, 0x30c30c3 */ { edx = (u32)(0x30c30c3u); }
  /* 0052b967 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052b969 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b96b jae 0x52b972 */ if (!CF_) goto L_0052b972;
  /* 0052b96d call 0x49ac70 */ esp -= 4; M32(esp) = 0x52b972u; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x52b96du); RETCHK(0x52b972u, 0x52b96du); LOADALL;
L_0052b972:;
  /* 0052b972 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052b974 jne 0x52b97a */ if (!ZF_) goto L_0052b97a;
  /* 0052b976 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052b978 jmp 0x52b990 */ goto L_0052b990;
L_0052b97a:;
  /* 0052b97a mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052b97d sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052b97f mov eax, 0x30c30c31 */ { eax = (u32)(0x30c30c31u); }
  /* 0052b984 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052b986 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052b989 mov eax, edx */ { eax = (u32)(edx); }
  /* 0052b98b shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052b98e add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0052b990:;
  /* 0052b990 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052b992 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b994 jae 0x52ba96 */ if (!CF_) goto L_0052ba96;
  /* 0052b99a mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0052b99c shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052b99e mov edx, 0x30c30c3 */ { edx = (u32)(0x30c30c3u); }
  /* 0052b9a3 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052b9a5 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b9a7 jae 0x52b9ad */ if (!CF_) goto L_0052b9ad;
  /* 0052b9a9 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0052b9ab jmp 0x52b9af */ goto L_0052b9af;
L_0052b9ad:;
  /* 0052b9ad add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0052b9af:;
  /* 0052b9af test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052b9b1 jne 0x52b9b7 */ if (!ZF_) goto L_0052b9b7;
  /* 0052b9b3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052b9b5 jmp 0x52b9cd */ goto L_0052b9cd;
L_0052b9b7:;
  /* 0052b9b7 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052b9ba sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052b9bc mov eax, 0x30c30c31 */ { eax = (u32)(0x30c30c31u); }
  /* 0052b9c1 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052b9c3 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052b9c6 mov eax, edx */ { eax = (u32)(edx); }
  /* 0052b9c8 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052b9cb add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0052b9cd:;
  /* 0052b9cd add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052b9cf cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052b9d1 jae 0x52b9de */ if (!CF_) goto L_0052b9de;
  /* 0052b9d3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052b9d5 call 0x42d1c0 */ esp -= 4; M32(esp) = 0x52b9dau; SAVEALL; F_0042d1c0(c); ABI_CHECK(0x42d1c0u, 0x52b9d5u); RETCHK(0x52b9dau, 0x52b9d5u); LOADALL;
  /* 0052b9da mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052b9dc add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0052b9de:;
  /* 0052b9de imul ecx, ecx, 0x54 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x54u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052b9e1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052b9e2 mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0052b9e5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x52b9eau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x52b9e5u); RETCHK(0x52b9eau, 0x52b9e5u); LOADALL;
  /* 0052b9ea mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0052b9f1 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052b9f4 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052b9f7 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0052b9fa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052b9fb mov dword ptr [ebp - 0x6c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(eax); }
  /* 0052b9fe call 0x52c810 */ esp -= 4; M32(esp) = 0x52ba03u; SAVEALL; F_0052c810(c); ABI_CHECK(0x52c810u, 0x52b9feu); RETCHK(0x52ba03u, 0x52b9feu); LOADALL;
  /* 0052ba03 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052ba06 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ba09 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052ba0a lea ebx, [ebp - 0x68] */ ebx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0052ba0d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052ba0f mov dword ptr [ebp - 0x70], eax */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(eax); }
  /* 0052ba12 call 0x52c7f0 */ esp -= 4; M32(esp) = 0x52ba17u; SAVEALL; F_0052c7f0(c); ABI_CHECK(0x52c7f0u, 0x52ba12u); RETCHK(0x52ba17u, 0x52ba12u); LOADALL;
  /* 0052ba17 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052ba1a mov eax, dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); eax = (u32)(M32(m_)); }
  /* 0052ba1d mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0052ba20 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052ba22 imul ecx, ecx, 0x54 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x54u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052ba25 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ba28 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052ba29 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052ba2c add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052ba2e call 0x52c810 */ esp -= 4; M32(esp) = 0x52ba33u; SAVEALL; F_0052c810(c); ABI_CHECK(0x52c810u, 0x52ba2eu); RETCHK(0x52ba33u, 0x52ba2eu); LOADALL;
  /* 0052ba33 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0052ba36 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ba39 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ba3b jne 0x52ba41 */ if (!ZF_) goto L_0052ba41;
  /* 0052ba3d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0052ba3f jmp 0x52ba57 */ goto L_0052ba57;
L_0052ba41:;
  /* 0052ba41 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052ba44 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052ba46 mov eax, 0x30c30c31 */ { eax = (u32)(0x30c30c31u); }
  /* 0052ba4b imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052ba4d sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052ba50 mov eax, edx */ { eax = (u32)(edx); }
  /* 0052ba52 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052ba55 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0052ba57:;
  /* 0052ba57 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0052ba59 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052ba5b je 0x52ba66 */ if (ZF_) goto L_0052ba66;
  /* 0052ba5d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052ba5e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52ba63u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52ba5eu); RETCHK(0x52ba63u, 0x52ba5eu); LOADALL;
  /* 0052ba63 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0052ba66:;
  /* 0052ba66 mov eax, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); eax = (u32)(M32(m_)); }
  /* 0052ba69 imul edi, edi, 0x54 */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x54u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052ba6c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052ba6f add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052ba71 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0052ba73 mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0052ba76 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 0052ba79 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052ba7c jmp 0x52bb47 */ goto L_0052bb47;
L_0052ba96:;
  /* 0052ba96 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0052ba99 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052ba9c mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0052ba9e sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052baa0 mov eax, 0x30c30c31 */ { eax = (u32)(0x30c30c31u); }
  /* 0052baa5 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052baa7 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052baaa mov eax, edx */ { eax = (u32)(edx); }
  /* 0052baac shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052baaf add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052bab1 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052bab3 jae 0x52bb10 */ if (!CF_) goto L_0052bb10;
  /* 0052bab5 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052bab8 mov eax, edi */ { eax = (u32)(edi); }
  /* 0052baba imul eax, eax, 0x54 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x54u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052babd mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052bac0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052bac1 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052bac3 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0052bac5 call 0x52c810 */ esp -= 4; M32(esp) = 0x52bacau; SAVEALL; F_0052c810(c); ABI_CHECK(0x52c810u, 0x52bac5u); RETCHK(0x52bacau, 0x52bac5u); LOADALL;
  /* 0052baca mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0052bad1 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052bad4 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052bad7 mov eax, 0x30c30c31 */ { eax = (u32)(0x30c30c31u); }
  /* 0052badc imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052bade mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052bae1 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052bae4 mov eax, edx */ { eax = (u32)(edx); }
  /* 0052bae6 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052bae9 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052baeb sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0052baed mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052baf0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052baf1 lea ebx, [ebp - 0x68] */ ebx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0052baf4 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052baf6 call 0x52c7f0 */ esp -= 4; M32(esp) = 0x52bafbu; SAVEALL; F_0052c7f0(c); ABI_CHECK(0x52c7f0u, 0x52baf6u); RETCHK(0x52bafbu, 0x52baf6u); LOADALL;
  /* 0052bafb mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052bafe mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052bb01 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052bb03 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052bb06 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052bb09 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052bb0b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052bb0e jmp 0x52bb3f */ goto L_0052bb3f;
L_0052bb10:;
  /* 0052bb10 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052bb13 imul edi, edi, 0x54 */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x54u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052bb16 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0052bb18 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052bb1a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052bb1b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052bb1d mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052bb20 call 0x52c810 */ esp -= 4; M32(esp) = 0x52bb25u; SAVEALL; F_0052c810(c); ABI_CHECK(0x52c810u, 0x52bb20u); RETCHK(0x52bb25u, 0x52bb20u); LOADALL;
  /* 0052bb25 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052bb28 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052bb2b mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0052bb2e mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052bb30 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052bb33 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0052bb35 call 0x52c770 */ esp -= 4; M32(esp) = 0x52bb3au; SAVEALL; F_0052c770(c); ABI_CHECK(0x52c770u, 0x52bb35u); RETCHK(0x52bb3au, 0x52bb35u); LOADALL;
  /* 0052bb3a lea edx, [edi + esi] */ edx = (u32)((u32)(edi + esi));
  /* 0052bb3d mov eax, esi */ { eax = (u32)(esi); }
L_0052bb3f:;
  /* 0052bb3f lea ebx, [ebp - 0x68] */ ebx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0052bb42 call 0x52c750 */ esp -= 4; M32(esp) = 0x52bb47u; SAVEALL; F_0052c750(c); ABI_CHECK(0x52c750u, 0x52bb42u); RETCHK(0x52bb47u, 0x52bb42u); LOADALL;
L_0052bb47:;
  /* 0052bb47 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052bb4a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052bb51 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0052bb54 call 0x61af31 */ esp -= 4; M32(esp) = 0x52bb59u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x52bb54u); RETCHK(0x52bb59u, 0x52bb54u); LOADALL;
  /* 0052bb59 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052bb5a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052bb5b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052bb5c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052bb5e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052bb5f ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0052ba81(CPU *c) {
  NATIVE_HOOK(0x52ba81u) REGS; LOADALL;
L_0052ba81:;
  /* 0052ba81 mov edx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); edx = (u32)(M32(m_)); }
  /* 0052ba84 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052ba85 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52ba8au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52ba85u); RETCHK(0x52ba8au, 0x52ba85u); LOADALL;
  /* 0052ba8a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052ba8d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052ba8f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052ba91 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0052ba96 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0052ba99 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052ba9c mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0052ba9e sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052baa0 mov eax, 0x30c30c31 */ { eax = (u32)(0x30c30c31u); }
  /* 0052baa5 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052baa7 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052baaa mov eax, edx */ { eax = (u32)(edx); }
  /* 0052baac shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052baaf add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052bab1 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052bab3 jae 0x52bb10 */ if (!CF_) goto L_0052bb10;
  /* 0052bab5 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052bab8 mov eax, edi */ { eax = (u32)(edi); }
  /* 0052baba imul eax, eax, 0x54 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x54u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052babd mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052bac0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052bac1 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052bac3 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0052bac5 call 0x52c810 */ esp -= 4; M32(esp) = 0x52bacau; SAVEALL; F_0052c810(c); ABI_CHECK(0x52c810u, 0x52bac5u); RETCHK(0x52bacau, 0x52bac5u); LOADALL;
  /* 0052baca mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0052bad1 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052bad4 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052bad7 mov eax, 0x30c30c31 */ { eax = (u32)(0x30c30c31u); }
  /* 0052badc imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052bade mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052bae1 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052bae4 mov eax, edx */ { eax = (u32)(edx); }
  /* 0052bae6 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052bae9 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052baeb sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0052baed mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052baf0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052baf1 lea ebx, [ebp - 0x68] */ ebx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0052baf4 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052baf6 call 0x52c7f0 */ esp -= 4; M32(esp) = 0x52bafbu; SAVEALL; F_0052c7f0(c); ABI_CHECK(0x52c7f0u, 0x52baf6u); RETCHK(0x52bafbu, 0x52baf6u); LOADALL;
  /* 0052bafb mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052bafe mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052bb01 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052bb03 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052bb06 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052bb09 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052bb0b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052bb0e jmp 0x52bb3f */ goto L_0052bb3f;
L_0052bb10:;
  /* 0052bb10 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052bb13 imul edi, edi, 0x54 */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x54u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052bb16 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0052bb18 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052bb1a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052bb1b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052bb1d mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052bb20 call 0x52c810 */ esp -= 4; M32(esp) = 0x52bb25u; SAVEALL; F_0052c810(c); ABI_CHECK(0x52c810u, 0x52bb20u); RETCHK(0x52bb25u, 0x52bb20u); LOADALL;
  /* 0052bb25 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052bb28 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052bb2b mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0052bb2e mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052bb30 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052bb33 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0052bb35 call 0x52c770 */ esp -= 4; M32(esp) = 0x52bb3au; SAVEALL; F_0052c770(c); ABI_CHECK(0x52c770u, 0x52bb35u); RETCHK(0x52bb3au, 0x52bb35u); LOADALL;
  /* 0052bb3a lea edx, [edi + esi] */ edx = (u32)((u32)(edi + esi));
  /* 0052bb3d mov eax, esi */ { eax = (u32)(esi); }
L_0052bb3f:;
  /* 0052bb3f lea ebx, [ebp - 0x68] */ ebx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0052bb42 call 0x52c750 */ esp -= 4; M32(esp) = 0x52bb47u; SAVEALL; F_0052c750(c); ABI_CHECK(0x52c750u, 0x52bb42u); RETCHK(0x52bb47u, 0x52bb42u); LOADALL;
  /* 0052bb47 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052bb4a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052bb51 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0052bb54 call 0x61af31 */ esp -= 4; M32(esp) = 0x52bb59u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x52bb54u); RETCHK(0x52bb59u, 0x52bb54u); LOADALL;
  /* 0052bb59 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052bb5a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052bb5b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052bb5c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052bb5e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052bb5f ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0052ba8d(CPU *c) {
  NATIVE_HOOK(0x52ba8du) REGS; LOADALL;
L_0052ba8d:;
  /* 0052ba8d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052ba8f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0052ba91 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0052ba96 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0052ba99 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052ba9c mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0052ba9e sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052baa0 mov eax, 0x30c30c31 */ { eax = (u32)(0x30c30c31u); }
  /* 0052baa5 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052baa7 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052baaa mov eax, edx */ { eax = (u32)(edx); }
  /* 0052baac shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052baaf add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052bab1 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052bab3 jae 0x52bb10 */ if (!CF_) goto L_0052bb10;
  /* 0052bab5 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0052bab8 mov eax, edi */ { eax = (u32)(edi); }
  /* 0052baba imul eax, eax, 0x54 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x54u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052babd mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052bac0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052bac1 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052bac3 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0052bac5 call 0x52c810 */ esp -= 4; M32(esp) = 0x52bacau; SAVEALL; F_0052c810(c); ABI_CHECK(0x52c810u, 0x52bac5u); RETCHK(0x52bacau, 0x52bac5u); LOADALL;
  /* 0052baca mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0052bad1 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052bad4 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0052bad7 mov eax, 0x30c30c31 */ { eax = (u32)(0x30c30c31u); }
  /* 0052badc imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052bade mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0052bae1 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0052bae4 mov eax, edx */ { eax = (u32)(edx); }
  /* 0052bae6 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0052bae9 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0052baeb sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0052baed mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052baf0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052baf1 lea ebx, [ebp - 0x68] */ ebx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0052baf4 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0052baf6 call 0x52c7f0 */ esp -= 4; M32(esp) = 0x52bafbu; SAVEALL; F_0052c7f0(c); ABI_CHECK(0x52c7f0u, 0x52baf6u); RETCHK(0x52bafbu, 0x52baf6u); LOADALL;
  /* 0052bafb mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052bafe mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052bb01 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052bb03 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052bb06 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052bb09 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052bb0b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052bb0e jmp 0x52bb3f */ goto L_0052bb3f;
L_0052bb10:;
  /* 0052bb10 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052bb13 imul edi, edi, 0x54 */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x54u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0052bb16 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0052bb18 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0052bb1a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052bb1b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052bb1d mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052bb20 call 0x52c810 */ esp -= 4; M32(esp) = 0x52bb25u; SAVEALL; F_0052c810(c); ABI_CHECK(0x52c810u, 0x52bb20u); RETCHK(0x52bb25u, 0x52bb20u); LOADALL;
  /* 0052bb25 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052bb28 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052bb2b mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0052bb2e mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0052bb30 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052bb33 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0052bb35 call 0x52c770 */ esp -= 4; M32(esp) = 0x52bb3au; SAVEALL; F_0052c770(c); ABI_CHECK(0x52c770u, 0x52bb35u); RETCHK(0x52bb3au, 0x52bb35u); LOADALL;
  /* 0052bb3a lea edx, [edi + esi] */ edx = (u32)((u32)(edi + esi));
  /* 0052bb3d mov eax, esi */ { eax = (u32)(esi); }
L_0052bb3f:;
  /* 0052bb3f lea ebx, [ebp - 0x68] */ ebx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0052bb42 call 0x52c750 */ esp -= 4; M32(esp) = 0x52bb47u; SAVEALL; F_0052c750(c); ABI_CHECK(0x52c750u, 0x52bb42u); RETCHK(0x52bb47u, 0x52bb42u); LOADALL;
  /* 0052bb47 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052bb4a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052bb51 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0052bb54 call 0x61af31 */ esp -= 4; M32(esp) = 0x52bb59u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x52bb54u); RETCHK(0x52bb59u, 0x52bb54u); LOADALL;
  /* 0052bb59 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052bb5a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052bb5b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052bb5c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052bb5e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052bb5f ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0052bb70(CPU *c) {
  NATIVE_HOOK(0x52bb70u) REGS; LOADALL;
L_0052bb70:;
  /* 0052bb70 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 0052bb72 mov cl, byte ptr [eax + 0x49] */ { const u32 m_ = (u32)(eax + 0x49u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bb75 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052bb77 jne 0x52bbc6 */ if (!ZF_) goto L_0052bbc6;
  /* 0052bb79 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052bb7c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052bb7d mov bl, byte ptr [ecx + 0x49] */ { const u32 m_ = (u32)(ecx + 0x49u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bb80 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052bb82 jne 0x52bb9f */ if (!ZF_) goto L_0052bb9f;
  /* 0052bb84 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052bb86 mov bl, byte ptr [eax + 0x49] */ { const u32 m_ = (u32)(eax + 0x49u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bb89 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052bb8b jne 0x52bb9b */ if (!ZF_) goto L_0052bb9b;
  /* 0052bb8d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_0052bb90:;
  /* 0052bb90 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0052bb92 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052bb94 mov bl, byte ptr [eax + 0x49] */ { const u32 m_ = (u32)(eax + 0x49u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bb97 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052bb99 je 0x52bb90 */ if (ZF_) goto L_0052bb90;
L_0052bb9b:;
  /* 0052bb9b mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0052bb9d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052bb9e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0052bb9f:;
  /* 0052bb9f mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052bba2 mov cl, byte ptr [eax + 0x49] */ { const u32 m_ = (u32)(eax + 0x49u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bba5 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052bba7 jne 0x52bbc3 */ if (!ZF_) goto L_0052bbc3;
  /* 0052bba9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0052bbb0:;
  /* 0052bbb0 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 0052bbb2 cmp ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052bbb5 jne 0x52bbc3 */ if (!ZF_) goto L_0052bbc3;
  /* 0052bbb7 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0052bbb9 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052bbbc mov cl, byte ptr [eax + 0x49] */ { const u32 m_ = (u32)(eax + 0x49u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bbbf test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052bbc1 je 0x52bbb0 */ if (ZF_) goto L_0052bbb0;
L_0052bbc3:;
  /* 0052bbc3 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0052bbc5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0052bbc6:;
  /* 0052bbc6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0052bbd0(CPU *c) {
  NATIVE_HOOK(0x52bbd0u) REGS; LOADALL;
L_0052bbd0:;
  /* 0052bbd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052bbd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052bbd3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0052bbd5 push 0x620068 */ { u32 v_ = 0x620068u; esp -= 4; M32(esp) = v_; }
  /* 0052bbda mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0052bbe0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052bbe1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0052bbe8 sub esp, 0x4c */ { u32 a_ = esp, b_ = 0x4cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052bbeb mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0052bbee mov cl, byte ptr [eax + 0xad] */ { const u32 m_ = (u32)(eax + 0xadu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bbf4 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052bbf6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052bbf7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0052bbf8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0052bbf9 je 0x52bc3e */ if (ZF_) goto L_0052bc3e;
  /* 0052bbfb push 0x1b */ { u32 v_ = 0x1bu; esp -= 4; M32(esp) = v_; }
  /* 0052bbfd xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0052bbff push 0x6426f8 */ { u32 v_ = 0x6426f8u; esp -= 4; M32(esp) = v_; }
  /* 0052bc04 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0052bc07 mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 0052bc0e mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 0052bc11 mov byte ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)(0x0u); }
  /* 0052bc15 call 0x404420 */ esp -= 4; M32(esp) = 0x52bc1au; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x52bc15u); RETCHK(0x52bc1au, 0x52bc15u); LOADALL;
  /* 0052bc1a lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0052bc1d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052bc1e lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0052bc21 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0052bc24 call 0x4040e0 */ esp -= 4; M32(esp) = 0x52bc29u; SAVEALL; F_004040e0(c); ABI_CHECK(0x4040e0u, 0x52bc24u); RETCHK(0x52bc29u, 0x52bc24u); LOADALL;
  /* 0052bc29 push 0x657b2c */ { u32 v_ = 0x657b2cu; esp -= 4; M32(esp) = v_; }
  /* 0052bc2e lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0052bc31 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052bc32 mov dword ptr [ebp - 0x58], 0x63cf8c */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(0x63cf8cu); }
  /* 0052bc39 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
L_0052bc3e:;
  /* 0052bc3e mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0052bc40 lea edx, [ebp + 0x10] */ edx = (u32)((u32)(ebp + 0x10u));
  /* 0052bc43 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 0052bc46 call 0x4a82f0 */ esp -= 4; M32(esp) = 0x52bc4bu; SAVEALL; F_004a82f0(c); ABI_CHECK(0x4a82f0u, 0x52bc46u); RETCHK(0x52bc4bu, 0x52bc46u); LOADALL;
  /* 0052bc4b mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0052bc4d mov cl, byte ptr [eax + 0xad] */ { const u32 m_ = (u32)(eax + 0xadu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bc53 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052bc55 je 0x52bc5c */ if (ZF_) goto L_0052bc5c;
  /* 0052bc57 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0052bc5a jmp 0x52bc7b */ goto L_0052bc7b;
L_0052bc5c:;
  /* 0052bc5c mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052bc5f mov cl, byte ptr [edx + 0xad] */ { const u32 m_ = (u32)(edx + 0xadu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bc65 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052bc67 je 0x52bc6d */ if (ZF_) goto L_0052bc6d;
  /* 0052bc69 mov edi, eax */ { edi = (u32)(eax); }
  /* 0052bc6b jmp 0x52bc7b */ goto L_0052bc7b;
L_0052bc6d:;
  /* 0052bc6d mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052bc70 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052bc72 mov edi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0052bc75 jne 0x52bcff */ if (!ZF_) goto L_0052bcff;
L_0052bc7b:;
  /* 0052bc7b mov al, byte ptr [edi + 0xad] */ { const u32 m_ = (u32)(edi + 0xadu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bc81 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052bc83 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052bc86 jne 0x52bc8b */ if (!ZF_) goto L_0052bc8b;
  /* 0052bc88 mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
L_0052bc8b:;
  /* 0052bc8b mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052bc8e mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052bc91 cmp dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052bc94 jne 0x52bc9b */ if (!ZF_) goto L_0052bc9b;
  /* 0052bc96 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 0052bc99 jmp 0x52bca6 */ goto L_0052bca6;
L_0052bc9b:;
  /* 0052bc9b cmp dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052bc9d jne 0x52bca3 */ if (!ZF_) goto L_0052bca3;
  /* 0052bc9f mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 0052bca1 jmp 0x52bca6 */ goto L_0052bca6;
L_0052bca3:;
  /* 0052bca3 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
L_0052bca6:;
  /* 0052bca6 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052bca9 cmp dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052bcab mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0052bcae jne 0x52bccd */ if (!ZF_) goto L_0052bccd;
  /* 0052bcb0 mov al, byte ptr [edi + 0xad] */ { const u32 m_ = (u32)(edi + 0xadu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bcb6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052bcb8 je 0x52bcbe */ if (ZF_) goto L_0052bcbe;
  /* 0052bcba mov eax, esi */ { eax = (u32)(esi); }
  /* 0052bcbc jmp 0x52bccb */ goto L_0052bccb;
L_0052bcbe:;
  /* 0052bcbe mov eax, edi */ { eax = (u32)(edi); }
  /* 0052bcc0 call 0x4a8350 */ esp -= 4; M32(esp) = 0x52bcc5u; SAVEALL; F_004a8350(c); ABI_CHECK(0x4a8350u, 0x52bcc0u); RETCHK(0x52bcc5u, 0x52bcc0u); LOADALL;
  /* 0052bcc5 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052bcc8 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
L_0052bccb:;
  /* 0052bccb mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
L_0052bccd:;
  /* 0052bccd mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052bcd0 cmp dword ptr [ecx + 8], ebx */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052bcd3 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0052bcd6 jne 0x52bd6c */ if (!ZF_) goto L_0052bd6c;
  /* 0052bcdc mov al, byte ptr [edi + 0xad] */ { const u32 m_ = (u32)(edi + 0xadu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bce2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052bce4 je 0x52bced */ if (ZF_) goto L_0052bced;
  /* 0052bce6 mov eax, esi */ { eax = (u32)(esi); }
  /* 0052bce8 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052bceb jmp 0x52bd6c */ goto L_0052bd6c;
L_0052bced:;
  /* 0052bced mov eax, edi */ { eax = (u32)(edi); }
  /* 0052bcef call 0x52c5b0 */ esp -= 4; M32(esp) = 0x52bcf4u; SAVEALL; F_0052c5b0(c); ABI_CHECK(0x52c5b0u, 0x52bcefu); RETCHK(0x52bcf4u, 0x52bcefu); LOADALL;
  /* 0052bcf4 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0052bcf7 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052bcfa mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052bcfd jmp 0x52bd6c */ goto L_0052bd6c;
L_0052bcff:;
  /* 0052bcff mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0052bd02 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0052bd04 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0052bd06 cmp ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052bd09 jne 0x52bd0f */ if (!ZF_) goto L_0052bd0f;
  /* 0052bd0b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0052bd0d jmp 0x52bd2d */ goto L_0052bd2d;
L_0052bd0f:;
  /* 0052bd0f mov al, byte ptr [edi + 0xad] */ { const u32 m_ = (u32)(edi + 0xadu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bd15 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052bd17 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052bd1a jne 0x52bd1f */ if (!ZF_) goto L_0052bd1f;
  /* 0052bd1c mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
L_0052bd1f:;
  /* 0052bd1f mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 0052bd21 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052bd24 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052bd27 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052bd2a mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
L_0052bd2d:;
  /* 0052bd2d mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052bd30 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052bd33 cmp dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052bd36 jne 0x52bd3d */ if (!ZF_) goto L_0052bd3d;
  /* 0052bd38 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0052bd3b jmp 0x52bd4b */ goto L_0052bd4b;
L_0052bd3d:;
  /* 0052bd3d mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052bd40 cmp dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052bd42 jne 0x52bd48 */ if (!ZF_) goto L_0052bd48;
  /* 0052bd44 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052bd46 jmp 0x52bd4b */ goto L_0052bd4b;
L_0052bd48:;
  /* 0052bd48 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_0052bd4b:;
  /* 0052bd4b mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052bd4e mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052bd51 mov dl, byte ptr [ebx + 0xac] */ { const u32 m_ = (u32)(ebx + 0xacu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bd57 mov al, byte ptr [ecx + 0xac] */ { const u32 m_ = (u32)(ecx + 0xacu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bd5d mov byte ptr [ecx + 0xac], dl */ { const u32 m_ = (u32)(ecx + 0xacu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0052bd63 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052bd66 mov byte ptr [ebx + 0xac], al */ { const u32 m_ = (u32)(ebx + 0xacu); M8(m_) = (u8)((eax & 0xffu)); }
L_0052bd6c:;
  /* 0052bd6c mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0052bd6f mov cl, byte ptr [eax + 0xac] */ { const u32 m_ = (u32)(eax + 0xacu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bd75 mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0052bd77 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052bd79 jne 0x52beef */ if (!ZF_) goto L_0052beef;
  /* 0052bd7f mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052bd82 cmp edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052bd85 je 0x52bee9 */ if (ZF_) goto L_0052bee9;
  /* 0052bd8b jmp 0x52bd90 */ goto L_0052bd90;
L_0052bd90:;
  /* 0052bd90 cmp byte ptr [edi + 0xac], bl */ { const u32 m_ = (u32)(edi + 0xacu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052bd96 jne 0x52bee9 */ if (!ZF_) goto L_0052bee9;
  /* 0052bd9c mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0052bd9e cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052bda0 jne 0x52be43 */ if (!ZF_) goto L_0052be43;
  /* 0052bda6 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052bda9 mov al, byte ptr [ecx + 0xac] */ { const u32 m_ = (u32)(ecx + 0xacu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bdaf test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052bdb1 jne 0x52bdce */ if (!ZF_) goto L_0052bdce;
  /* 0052bdb3 mov byte ptr [ecx + 0xac], bl */ { const u32 m_ = (u32)(ecx + 0xacu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052bdb9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052bdba mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052bdbc mov byte ptr [esi + 0xac], 0 */ { const u32 m_ = (u32)(esi + 0xacu); M8(m_) = (u8)(0x0u); }
  /* 0052bdc3 call 0x52bf30 */ esp -= 4; M32(esp) = 0x52bdc8u; SAVEALL; F_0052bf30(c); ABI_CHECK(0x52bf30u, 0x52bdc3u); RETCHK(0x52bdc8u, 0x52bdc3u); LOADALL;
  /* 0052bdc8 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052bdcb mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_0052bdce:;
  /* 0052bdce mov al, byte ptr [ecx + 0xad] */ { const u32 m_ = (u32)(ecx + 0xadu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bdd4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052bdd6 jne 0x52be8d */ if (!ZF_) goto L_0052be8d;
  /* 0052bddc mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052bdde cmp byte ptr [eax + 0xac], bl */ { const u32 m_ = (u32)(eax + 0xacu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052bde4 jne 0x52bdf5 */ if (!ZF_) goto L_0052bdf5;
  /* 0052bde6 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052bde9 cmp byte ptr [eax + 0xac], bl */ { const u32 m_ = (u32)(eax + 0xacu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052bdef je 0x52be86 */ if (ZF_) goto L_0052be86;
L_0052bdf5:;
  /* 0052bdf5 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052bdf8 cmp byte ptr [eax + 0xac], bl */ { const u32 m_ = (u32)(eax + 0xacu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052bdfe jne 0x52be1b */ if (!ZF_) goto L_0052be1b;
  /* 0052be00 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052be02 mov byte ptr [eax + 0xac], bl */ { const u32 m_ = (u32)(eax + 0xacu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052be08 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052be09 mov byte ptr [ecx + 0xac], 0 */ { const u32 m_ = (u32)(ecx + 0xacu); M8(m_) = (u8)(0x0u); }
  /* 0052be10 call 0x52bf90 */ esp -= 4; M32(esp) = 0x52be15u; SAVEALL; F_0052bf90(c); ABI_CHECK(0x52bf90u, 0x52be10u); RETCHK(0x52be15u, 0x52be10u); LOADALL;
  /* 0052be15 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052be18 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_0052be1b:;
  /* 0052be1b mov al, byte ptr [esi + 0xac] */ { const u32 m_ = (u32)(esi + 0xacu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052be21 mov byte ptr [ecx + 0xac], al */ { const u32 m_ = (u32)(ecx + 0xacu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052be27 mov byte ptr [esi + 0xac], bl */ { const u32 m_ = (u32)(esi + 0xacu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052be2d mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052be30 mov byte ptr [ecx + 0xac], bl */ { const u32 m_ = (u32)(ecx + 0xacu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052be36 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052be37 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052be39 call 0x52bf30 */ esp -= 4; M32(esp) = 0x52be3eu; SAVEALL; F_0052bf30(c); ABI_CHECK(0x52bf30u, 0x52be39u); RETCHK(0x52be3eu, 0x52be39u); LOADALL;
  /* 0052be3e jmp 0x52bee9 */ goto L_0052bee9;
L_0052be43:;
  /* 0052be43 mov al, byte ptr [ecx + 0xac] */ { const u32 m_ = (u32)(ecx + 0xacu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052be49 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052be4b jne 0x52be67 */ if (!ZF_) goto L_0052be67;
  /* 0052be4d mov byte ptr [ecx + 0xac], bl */ { const u32 m_ = (u32)(ecx + 0xacu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052be53 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052be54 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052be56 mov byte ptr [esi + 0xac], 0 */ { const u32 m_ = (u32)(esi + 0xacu); M8(m_) = (u8)(0x0u); }
  /* 0052be5d call 0x52bf90 */ esp -= 4; M32(esp) = 0x52be62u; SAVEALL; F_0052bf90(c); ABI_CHECK(0x52bf90u, 0x52be5du); RETCHK(0x52be62u, 0x52be5du); LOADALL;
  /* 0052be62 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0052be64 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_0052be67:;
  /* 0052be67 mov al, byte ptr [ecx + 0xad] */ { const u32 m_ = (u32)(ecx + 0xadu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052be6d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052be6f jne 0x52be8d */ if (!ZF_) goto L_0052be8d;
  /* 0052be71 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052be74 cmp byte ptr [eax + 0xac], bl */ { const u32 m_ = (u32)(eax + 0xacu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052be7a jne 0x52bea2 */ if (!ZF_) goto L_0052bea2;
  /* 0052be7c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052be7e cmp byte ptr [eax + 0xac], bl */ { const u32 m_ = (u32)(eax + 0xacu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052be84 jne 0x52bea2 */ if (!ZF_) goto L_0052bea2;
L_0052be86:;
  /* 0052be86 mov byte ptr [ecx + 0xac], 0 */ { const u32 m_ = (u32)(ecx + 0xacu); M8(m_) = (u8)(0x0u); }
L_0052be8d:;
  /* 0052be8d mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052be90 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052be93 mov edi, esi */ { edi = (u32)(esi); }
  /* 0052be95 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052be97 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0052be9a jne 0x52bd90 */ if (!ZF_) goto L_0052bd90;
  /* 0052bea0 jmp 0x52bee9 */ goto L_0052bee9;
L_0052bea2:;
  /* 0052bea2 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0052bea4 cmp byte ptr [eax + 0xac], bl */ { const u32 m_ = (u32)(eax + 0xacu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0052beaa jne 0x52bec7 */ if (!ZF_) goto L_0052bec7;
  /* 0052beac mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052beaf mov byte ptr [eax + 0xac], bl */ { const u32 m_ = (u32)(eax + 0xacu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052beb5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052beb6 mov byte ptr [ecx + 0xac], 0 */ { const u32 m_ = (u32)(ecx + 0xacu); M8(m_) = (u8)(0x0u); }
  /* 0052bebd call 0x52bf30 */ esp -= 4; M32(esp) = 0x52bec2u; SAVEALL; F_0052bf30(c); ABI_CHECK(0x52bf30u, 0x52bebdu); RETCHK(0x52bec2u, 0x52bebdu); LOADALL;
  /* 0052bec2 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0052bec4 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_0052bec7:;
  /* 0052bec7 mov al, byte ptr [esi + 0xac] */ { const u32 m_ = (u32)(esi + 0xacu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052becd mov byte ptr [ecx + 0xac], al */ { const u32 m_ = (u32)(ecx + 0xacu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052bed3 mov byte ptr [esi + 0xac], bl */ { const u32 m_ = (u32)(esi + 0xacu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052bed9 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 0052bedb mov byte ptr [ecx + 0xac], bl */ { const u32 m_ = (u32)(ecx + 0xacu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052bee1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052bee2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052bee4 call 0x52bf90 */ esp -= 4; M32(esp) = 0x52bee9u; SAVEALL; F_0052bf90(c); ABI_CHECK(0x52bf90u, 0x52bee4u); RETCHK(0x52bee9u, 0x52bee4u); LOADALL;
L_0052bee9:;
  /* 0052bee9 mov byte ptr [edi + 0xac], bl */ { const u32 m_ = (u32)(edi + 0xacu); M8(m_) = (u8)((ebx & 0xffu)); }
L_0052beef:;
  /* 0052beef mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0052bef2 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052bef5 call 0x529870 */ esp -= 4; M32(esp) = 0x52befau; SAVEALL; F_00529870(c); ABI_CHECK(0x529870u, 0x52bef5u); RETCHK(0x52befau, 0x52bef5u); LOADALL;
  /* 0052befa mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 0052befd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052befe call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52bf03u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52befeu); RETCHK(0x52bf03u, 0x52befeu); LOADALL;
  /* 0052bf03 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052bf06 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052bf09 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052bf0c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052bf0e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052bf0f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052bf10 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052bf11 jbe 0x52bf17 */ if ((CF_|ZF_)) goto L_0052bf17;
  /* 0052bf13 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052bf14 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
L_0052bf17:;
  /* 0052bf17 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052bf1a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052bf1d mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052bf1f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052bf22 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052bf29 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052bf2b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052bf2c ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0052be18(CPU *c) {
  NATIVE_HOOK(0x52be18u) REGS; LOADALL;
L_0052be18:;
  /* 0052be18 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052be1b mov al, byte ptr [esi + 0xac] */ { const u32 m_ = (u32)(esi + 0xacu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052be21 mov byte ptr [ecx + 0xac], al */ { const u32 m_ = (u32)(ecx + 0xacu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0052be27 mov byte ptr [esi + 0xac], bl */ { const u32 m_ = (u32)(esi + 0xacu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052be2d mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052be30 mov byte ptr [ecx + 0xac], bl */ { const u32 m_ = (u32)(ecx + 0xacu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052be36 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052be37 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0052be39 call 0x52bf30 */ esp -= 4; M32(esp) = 0x52be3eu; SAVEALL; F_0052bf30(c); ABI_CHECK(0x52bf30u, 0x52be39u); RETCHK(0x52be3eu, 0x52be39u); LOADALL;
  /* 0052be3e jmp 0x52bee9 */ goto L_0052bee9;
L_0052bee9:;
  /* 0052bee9 mov byte ptr [edi + 0xac], bl */ { const u32 m_ = (u32)(edi + 0xacu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0052beef mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0052bef2 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0052bef5 call 0x529870 */ esp -= 4; M32(esp) = 0x52befau; SAVEALL; F_00529870(c); ABI_CHECK(0x529870u, 0x52bef5u); RETCHK(0x52befau, 0x52bef5u); LOADALL;
  /* 0052befa mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 0052befd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0052befe call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x52bf03u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52befeu); RETCHK(0x52bf03u, 0x52befeu); LOADALL;
  /* 0052bf03 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0052bf06 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052bf09 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0052bf0c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0052bf0e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0052bf0f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052bf10 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052bf11 jbe 0x52bf17 */ if ((CF_|ZF_)) goto L_0052bf17;
  /* 0052bf13 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0052bf14 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
L_0052bf17:;
  /* 0052bf17 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0052bf1a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0052bf1d mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052bf1f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0052bf22 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0052bf29 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052bf2b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052bf2c ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0052bf30(CPU *c) {
  NATIVE_HOOK(0x52bf30u) REGS; LOADALL;
L_0052bf30:;
  /* 0052bf30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0052bf31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0052bf33 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0052bf36 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052bf38 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0052bf3b mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0052bf3d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0052bf3e mov bl, byte ptr [edx + 0xad] */ { const u32 m_ = (u32)(edx + 0xadu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0052bf44 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0052bf46 jne 0x52bf4b */ if (!ZF_) goto L_0052bf4b;
  /* 0052bf48 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
L_0052bf4b:;
  /* 0052bf4b mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052bf4e mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0052bf51 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0052bf54 mov edx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052bf57 cmp ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052bf5a jne 0x52bf69 */ if (!ZF_) goto L_0052bf69;
  /* 0052bf5c mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052bf5f mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052bf61 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052bf64 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052bf65 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052bf66 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052bf69:;
  /* 0052bf69 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0052bf6c cmp ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0052bf6e jne 0x52bf7c */ if (!ZF_) goto L_0052bf7c;
  /* 0052bf70 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0052bf72 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052bf74 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052bf77 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052bf78 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052bf79 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0052bf7c:;
  /* 0052bf7c mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052bf7f mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0052bf81 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0052bf84 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0052bf85 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052bf86 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}
