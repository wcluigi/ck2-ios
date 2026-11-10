#include "funcs.h"

void F_00456990(CPU *c) {
  NATIVE_HOOK(0x456990u) REGS; LOADALL;
L_00456990:;
  /* 00456990 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00456991 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00456993 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00456995 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 0045699a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004569a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004569a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004569a8 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004569ab mov eax, dword ptr [edi + 0x358] */ { const u32 m_ = (u32)(edi + 0x358u); eax = (u32)(M32(m_)); }
  /* 004569b1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004569b2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004569b4 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004569b6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004569b7 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004569b9 je 0x456a1a */ if (ZF_) goto L_00456a1a;
  /* 004569bb mov eax, esi */ { eax = (u32)(esi); }
  /* 004569bd mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 004569c4 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 004569c7 mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004569ca lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 004569cd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_004569d0:;
  /* 004569d0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004569d2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004569d3 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 004569d5 jne 0x4569d0 */ if (!ZF_) goto L_004569d0;
  /* 004569d7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004569d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004569da push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004569db lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 004569de call 0x404420 */ esp -= 4; M32(esp) = 0x4569e3u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4569deu); RETCHK(0x4569e3u, 0x4569deu); LOADALL;
  /* 004569e3 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004569e6 mov esi, dword ptr [edi + 0x358] */ { const u32 m_ = (u32)(edi + 0x358u); esi = (u32)(M32(m_)); }
  /* 004569ec lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 004569ef call 0x5224b0 */ esp -= 4; M32(esp) = 0x4569f4u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x4569efu); RETCHK(0x4569f4u, 0x4569efu); LOADALL;
  /* 004569f4 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004569fb cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004569ff jb 0x456a0d */ if (CF_) goto L_00456a0d;
  /* 00456a01 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 00456a04 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456a05 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x456a0au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x456a05u); RETCHK(0x456a0au, 0x456a05u); LOADALL;
  /* 00456a0a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00456a0d:;
  /* 00456a0d mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 00456a14 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00456a17 mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
L_00456a1a:;
  /* 00456a1a mov eax, dword ptr [edi + 0x354] */ { const u32 m_ = (u32)(edi + 0x354u); eax = (u32)(M32(m_)); }
  /* 00456a20 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00456a22 je 0x456a33 */ if (ZF_) goto L_00456a33;
  /* 00456a24 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00456a26 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00456a28 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00456a2a call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x456a2du; SAVEALL; call_ind(c, t_); RETCHK(0x456a2du, 0x456a2au); LOADALL; }
  /* 00456a2d cmp dword ptr [edi + 0x354], ebx */ { const u32 m_ = (u32)(edi + 0x354u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
L_00456a33:;
  /* 00456a33 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00456a34 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00456a35 je 0x456a42 */ if (ZF_) goto L_00456a42;
  /* 00456a37 mov ecx, dword ptr [edi + 0x354] */ { const u32 m_ = (u32)(edi + 0x354u); ecx = (u32)(M32(m_)); }
  /* 00456a3d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00456a3f call dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x456a42u; SAVEALL; call_ind(c, t_); RETCHK(0x456a42u, 0x456a3fu); LOADALL; }
L_00456a42:;
  /* 00456a42 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00456a45 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00456a4c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00456a4e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00456a4f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00456a50(CPU *c) {
  NATIVE_HOOK(0x456a50u) REGS; LOADALL;
L_00456a50:;
  /* 00456a50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00456a51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00456a53 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00456a55 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 00456a5a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00456a60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456a61 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00456a68 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00456a69 push 0x364 */ { u32 v_ = 0x364u; esp -= 4; M32(esp) = v_; }
  /* 00456a6e call 0x5fe934 */ esp -= 4; M32(esp) = 0x456a73u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x456a6eu); RETCHK(0x456a73u, 0x456a6eu); LOADALL;
  /* 00456a73 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00456a76 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00456a79 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00456a7b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00456a82 je 0x456a8f */ if (ZF_) goto L_00456a8f;
  /* 00456a84 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00456a85 mov esi, eax */ { esi = (u32)(eax); }
  /* 00456a87 call 0x456530 */ esp -= 4; M32(esp) = 0x456a8cu; SAVEALL; F_00456530(c); ABI_CHECK(0x456530u, 0x456a87u); RETCHK(0x456a8cu, 0x456a87u); LOADALL;
  /* 00456a8c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00456a8d jmp 0x456a91 */ goto L_00456a91;
L_00456a8f:;
  /* 00456a8f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00456a91:;
  /* 00456a91 push 0x647e40 */ { u32 v_ = 0x647e40u; esp -= 4; M32(esp) = v_; }
  /* 00456a96 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00456a9d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456a9e mov dword ptr [0x7a6948], eax */ { const u32 m_ = (u32)(0x7a6948u); M32(m_) = (u32)(eax); }
  /* 00456aa3 call 0x50a070 */ esp -= 4; M32(esp) = 0x456aa8u; SAVEALL; F_0050a070(c); ABI_CHECK(0x50a070u, 0x456aa3u); RETCHK(0x456aa8u, 0x456aa3u); LOADALL;
  /* 00456aa8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00456aab mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00456ab2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00456ab4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00456ab5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00456ac0(CPU *c) {
  NATIVE_HOOK(0x456ac0u) REGS; LOADALL;
  goto L_00456ac0;
L_00456720:;
  /* 00456720 mov dword ptr [eax + 0x35c], ecx */ { const u32 m_ = (u32)(eax + 0x35cu); M32(m_) = (u32)(ecx); }
  /* 00456726 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00456ac0:;
  /* 00456ac0 mov eax, dword ptr [0x7a6948] */ { const u32 m_ = (u32)(0x7a6948u); eax = (u32)(M32(m_)); }
  /* 00456ac5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00456ac7 je 0x456ace */ if (ZF_) goto L_00456ace;
  /* 00456ac9 jmp 0x456720 */ goto L_00456720;
L_00456ace:;
  /* 00456ace ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00456ad0(CPU *c) {
  NATIVE_HOOK(0x456ad0u) REGS; LOADALL;
L_00456ad0:;
  /* 00456ad0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00456ad1 mov edi, dword ptr [0x7a6948] */ { const u32 m_ = (u32)(0x7a6948u); edi = (u32)(M32(m_)); }
  /* 00456ad7 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00456ad9 je 0x456ae0 */ if (ZF_) goto L_00456ae0;
  /* 00456adb call 0x456730 */ esp -= 4; M32(esp) = 0x456ae0u; SAVEALL; F_00456730(c); ABI_CHECK(0x456730u, 0x456adbu); RETCHK(0x456ae0u, 0x456adbu); LOADALL;
L_00456ae0:;
  /* 00456ae0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00456ae1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00456af0(CPU *c) {
  NATIVE_HOOK(0x456af0u) REGS; LOADALL;
L_00456af0:;
  /* 00456af0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00456af1 mov edi, dword ptr [0x7a6944] */ { const u32 m_ = (u32)(0x7a6944u); edi = (u32)(M32(m_)); }
  /* 00456af7 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00456af9 je 0x456b05 */ if (ZF_) goto L_00456b05;
  /* 00456afb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00456afc call 0x456390 */ esp -= 4; M32(esp) = 0x456b01u; SAVEALL; F_00456390(c); ABI_CHECK(0x456390u, 0x456afcu); RETCHK(0x456b01u, 0x456afcu); LOADALL;
  /* 00456b01 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00456b03 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00456b04 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00456b05:;
  /* 00456b05 mov edi, dword ptr [0x7a6948] */ { const u32 m_ = (u32)(0x7a6948u); edi = (u32)(M32(m_)); }
  /* 00456b0b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00456b0d je 0x456b18 */ if (ZF_) goto L_00456b18;
  /* 00456b0f call 0x456990 */ esp -= 4; M32(esp) = 0x456b14u; SAVEALL; F_00456990(c); ABI_CHECK(0x456990u, 0x456b0fu); RETCHK(0x456b14u, 0x456b0fu); LOADALL;
  /* 00456b14 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00456b16 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00456b17 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00456b18:;
  /* 00456b18 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00456b1a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00456b1b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00456b20(CPU *c) {
  NATIVE_HOOK(0x456b20u) REGS; LOADALL;
L_00456b20:;
  /* 00456b20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00456b21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00456b23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00456b24 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00456b25 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456b26 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00456b27 call 0x509940 */ esp -= 4; M32(esp) = 0x456b2cu; SAVEALL; F_00509940(c); ABI_CHECK(0x509940u, 0x456b27u); RETCHK(0x456b2cu, 0x456b27u); LOADALL;
  /* 00456b2c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00456b2f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00456b31 mov dword ptr [ebx + 0x354], eax */ { const u32 m_ = (u32)(ebx + 0x354u); M32(m_) = (u32)(eax); }
  /* 00456b37 mov dword ptr [ebx + 0x350], eax */ { const u32 m_ = (u32)(ebx + 0x350u); M32(m_) = (u32)(eax); }
  /* 00456b3d lea edi, [ebx + 0x358] */ edi = (u32)((u32)(ebx + 0x358u));
  /* 00456b43 mov ecx, 0x45 */ { ecx = (u32)(0x45u); }
  /* 00456b48 mov dword ptr [ebx], 0x647a08 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x647a08u); }
  /* 00456b4e rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00456b50 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00456b51 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00456b53 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00456b54 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00456b55 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00456b60(CPU *c) {
  NATIVE_HOOK(0x456b60u) REGS; LOADALL;
L_00456b60:;
  /* 00456b60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00456b61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00456b63 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00456b65 push 0x61f5d8 */ { u32 v_ = 0x61f5d8u; esp -= 4; M32(esp) = v_; }
  /* 00456b6a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00456b70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456b71 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00456b78 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00456b7b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00456b7c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00456b7d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00456b7e push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00456b80 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00456b82 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00456b84 push 0x647e34 */ { u32 v_ = 0x647e34u; esp -= 4; M32(esp) = v_; }
  /* 00456b89 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00456b8c mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 00456b93 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00456b96 mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00456b99 call 0x404420 */ esp -= 4; M32(esp) = 0x456b9eu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x456b99u); RETCHK(0x456b9eu, 0x456b99u); LOADALL;
  /* 00456b9e lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00456ba1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456ba2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00456ba4 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00456ba7 call 0x5075d0 */ esp -= 4; M32(esp) = 0x456bacu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x456ba7u); RETCHK(0x456bacu, 0x456ba7u); LOADALL;
  /* 00456bac or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00456baf mov dword ptr [esi + 0x350], eax */ { const u32 m_ = (u32)(esi + 0x350u); M32(m_) = (u32)(eax); }
  /* 00456bb5 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00456bb8 cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00456bbc jb 0x456bca */ if (CF_) goto L_00456bca;
  /* 00456bbe mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 00456bc1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00456bc2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x456bc7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x456bc2u); RETCHK(0x456bc7u, 0x456bc2u); LOADALL;
  /* 00456bc7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00456bca:;
  /* 00456bca push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00456bcc push 0x647e24 */ { u32 v_ = 0x647e24u; esp -= 4; M32(esp) = v_; }
  /* 00456bd1 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00456bd4 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 00456bdb mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00456bde mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00456be1 call 0x404420 */ esp -= 4; M32(esp) = 0x456be6u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x456be1u); RETCHK(0x456be6u, 0x456be1u); LOADALL;
  /* 00456be6 lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00456be9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00456bea mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00456bec mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00456bf3 call 0x5075d0 */ esp -= 4; M32(esp) = 0x456bf8u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x456bf3u); RETCHK(0x456bf8u, 0x456bf3u); LOADALL;
  /* 00456bf8 mov dword ptr [esi + 0x354], eax */ { const u32 m_ = (u32)(esi + 0x354u); M32(m_) = (u32)(eax); }
  /* 00456bfe mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00456c01 cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00456c05 jb 0x456c13 */ if (CF_) goto L_00456c13;
  /* 00456c07 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 00456c0a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456c0b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x456c10u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x456c0bu); RETCHK(0x456c10u, 0x456c0bu); LOADALL;
  /* 00456c10 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00456c13:;
  /* 00456c13 push 0xbce */ { u32 v_ = 0xbceu; esp -= 4; M32(esp) = v_; }
  /* 00456c18 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 00456c1d call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x456c23u; SAVEALL; call_ind(c, t_); RETCHK(0x456c23u, 0x456c1du); LOADALL; }
  /* 00456c23 mov edi, eax */ { edi = (u32)(eax); }
  /* 00456c25 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00456c27 mov dword ptr [ebp - 0x2c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0xfu); }
  /* 00456c2e mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 00456c31 mov byte ptr [ebp - 0x40], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00456c34 lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
L_00456c37:;
  /* 00456c37 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00456c39 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00456c3a cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00456c3c jne 0x456c37 */ if (!ZF_) goto L_00456c37;
  /* 00456c3e sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00456c40 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00456c41 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00456c42 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00456c45 call 0x404420 */ esp -= 4; M32(esp) = 0x456c4au; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x456c45u); RETCHK(0x456c4au, 0x456c45u); LOADALL;
  /* 00456c4a mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 00456c51 mov esi, dword ptr [esi + 0x350] */ { const u32 m_ = (u32)(esi + 0x350u); esi = (u32)(M32(m_)); }
  /* 00456c57 lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00456c5a call 0x5224b0 */ esp -= 4; M32(esp) = 0x456c5fu; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x456c5au); RETCHK(0x456c5fu, 0x456c5au); LOADALL;
  /* 00456c5f cmp dword ptr [ebp - 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00456c63 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00456c64 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00456c65 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00456c66 jb 0x456c74 */ if (CF_) goto L_00456c74;
  /* 00456c68 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 00456c6b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00456c6c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x456c71u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x456c6cu); RETCHK(0x456c71u, 0x456c6cu); LOADALL;
  /* 00456c71 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00456c74:;
  /* 00456c74 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00456c77 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00456c79 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00456c80 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00456c82 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00456c83 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00456c90(CPU *c) {
  NATIVE_HOOK(0x456c90u) REGS; LOADALL;
L_00456c90:;
  /* 00456c90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00456c91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00456c93 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00456c95 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 00456c9a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00456ca0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456ca1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00456ca8 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00456cab mov eax, dword ptr [edi + 0x354] */ { const u32 m_ = (u32)(edi + 0x354u); eax = (u32)(M32(m_)); }
  /* 00456cb1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00456cb3 je 0x456d0e */ if (ZF_) goto L_00456d0e;
  /* 00456cb5 mov eax, esi */ { eax = (u32)(esi); }
  /* 00456cb7 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 00456cbe mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 00456cc5 mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 00456cc9 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 00456ccc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00456cd0:;
  /* 00456cd0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00456cd2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00456cd3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00456cd5 jne 0x456cd0 */ if (!ZF_) goto L_00456cd0;
  /* 00456cd7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00456cd9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456cda push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00456cdb lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00456cde call 0x404420 */ esp -= 4; M32(esp) = 0x456ce3u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x456cdeu); RETCHK(0x456ce3u, 0x456cdeu); LOADALL;
  /* 00456ce3 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00456cea mov ecx, dword ptr [edi + 0x354] */ { const u32 m_ = (u32)(edi + 0x354u); ecx = (u32)(M32(m_)); }
  /* 00456cf0 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00456cf2 lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00456cf5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00456cf6 call dword ptr [eax + 0xe8] */ { const u32 m_ = (u32)(eax + 0xe8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x456cfcu; SAVEALL; call_ind(c, t_); RETCHK(0x456cfcu, 0x456cf6u); LOADALL; }
  /* 00456cfc cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00456d00 jb 0x456d0e */ if (CF_) goto L_00456d0e;
  /* 00456d02 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 00456d05 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456d06 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x456d0bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x456d06u); RETCHK(0x456d0bu, 0x456d06u); LOADALL;
  /* 00456d0b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00456d0e:;
  /* 00456d0e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00456d11 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00456d18 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00456d1a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00456d1b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00456d20(CPU *c) {
  NATIVE_HOOK(0x456d20u) REGS; LOADALL;
L_00456d20:;
  /* 00456d20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00456d21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00456d23 sub esp, 0x88 */ { u32 a_ = esp, b_ = 0x88u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00456d29 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00456d2e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00456d31 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00456d34 call 0x4570e0 */ esp -= 4; M32(esp) = 0x456d39u; SAVEALL; F_004570e0(c); ABI_CHECK(0x4570e0u, 0x456d34u); RETCHK(0x456d39u, 0x456d34u); LOADALL;
  /* 00456d39 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00456d3b je 0x456d5e */ if (ZF_) goto L_00456d5e;
  /* 00456d3d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00456d3e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00456d3f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00456d40 lea ebx, [ebp - 0x88] */ ebx = (u32)((u32)(ebp + 0xffffff78u));
  /* 00456d46 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00456d48 call 0x433aa0 */ esp -= 4; M32(esp) = 0x456d4du; SAVEALL; F_00433aa0(c); ABI_CHECK(0x433aa0u, 0x456d48u); RETCHK(0x456d4du, 0x456d48u); LOADALL;
  /* 00456d4d mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 00456d50 lea esi, [ebp - 0x86] */ esi = (u32)((u32)(ebp + 0xffffff7au));
  /* 00456d56 call 0x456c90 */ esp -= 4; M32(esp) = 0x456d5bu; SAVEALL; F_00456c90(c); ABI_CHECK(0x456c90u, 0x456d56u); RETCHK(0x456d5bu, 0x456d56u); LOADALL;
  /* 00456d5b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00456d5c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00456d5d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00456d5e:;
  /* 00456d5e mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00456d61 call 0x61af31 */ esp -= 4; M32(esp) = 0x456d66u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x456d61u); RETCHK(0x456d66u, 0x456d61u); LOADALL;
  /* 00456d66 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00456d68 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00456d69 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00456d70(CPU *c) {
  NATIVE_HOOK(0x456d70u) REGS; LOADALL;
L_00456d70:;
  /* 00456d70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00456d71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00456d73 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00456d75 push 0x622cfb */ { u32 v_ = 0x622cfbu; esp -= 4; M32(esp) = v_; }
  /* 00456d7a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00456d80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456d81 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00456d88 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00456d8b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00456d90 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00456d91 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00456d92 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00456d95 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00456d98 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00456d9a dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00456d9b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00456d9c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00456d9e jne 0x456f39 */ if (!ZF_) goto L_00456f39;
  /* 00456da4 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00456da7 call 0x5075c0 */ esp -= 4; M32(esp) = 0x456dacu; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x456da7u); RETCHK(0x456dacu, 0x456da7u); LOADALL;
  /* 00456dac mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00456daf push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00456db1 push 0x644130 */ { u32 v_ = 0x644130u; esp -= 4; M32(esp) = v_; }
  /* 00456db6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00456db7 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00456db9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00456dba mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00456dbc call 0x405de0 */ esp -= 4; M32(esp) = 0x456dc1u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x456dbcu); RETCHK(0x456dc1u, 0x456dbcu); LOADALL;
  /* 00456dc1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00456dc3 jne 0x456eb0 */ if (!ZF_) goto L_00456eb0;
  /* 00456dc9 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 00456dd0 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 00456dd3 mov byte ptr [ebp - 0x28], al */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00456dd6 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00456dd9 mov eax, dword ptr [ebx + 0x354] */ { const u32 m_ = (u32)(ebx + 0x354u); eax = (u32)(M32(m_)); }
  /* 00456ddf cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00456de1 je 0x456df1 */ if (ZF_) goto L_00456df1;
  /* 00456de3 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00456de5 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00456de7 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00456dea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456deb call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x456df1u; SAVEALL; call_ind(c, t_); RETCHK(0x456df1u, 0x456debu); LOADALL; }
L_00456df1:;
  /* 00456df1 call 0x556030 */ esp -= 4; M32(esp) = 0x456df6u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x456df1u); RETCHK(0x456df6u, 0x456df1u); LOADALL;
  /* 00456df6 mov edx, dword ptr [ebx + 0x358] */ { const u32 m_ = (u32)(ebx + 0x358u); edx = (u32)(M32(m_)); }
  /* 00456dfc mov esi, eax */ { esi = (u32)(eax); }
  /* 00456dfe call 0x555a00 */ esp -= 4; M32(esp) = 0x456e03u; SAVEALL; F_00555a00(c); ABI_CHECK(0x555a00u, 0x456dfeu); RETCHK(0x456e03u, 0x456dfeu); LOADALL;
  /* 00456e03 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00456e05 jne 0x456e20 */ if (!ZF_) goto L_00456e20;
  /* 00456e07 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00456e0b jb 0x456e19 */ if (CF_) goto L_00456e19;
  /* 00456e0d mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 00456e10 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00456e11 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x456e16u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x456e11u); RETCHK(0x456e16u, 0x456e11u); LOADALL;
  /* 00456e16 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00456e19:;
  /* 00456e19 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00456e1b jmp 0x456f41 */ goto L_00456f41;
L_00456e20:;
  /* 00456e20 mov edx, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); edx = (u32)(M32(m_)); }
  /* 00456e23 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00456e26 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00456e28 cmp edx, -1 */ { u32 a_ = edx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00456e2b mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 00456e30 sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 00456e33 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00456e35 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00456e38 jae 0x456e3d */ if (!CF_) goto L_00456e3d;
  /* 00456e3a lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_00456e3d:;
  /* 00456e3d mov edx, dword ptr [ebx + 0x35c] */ { const u32 m_ = (u32)(ebx + 0x35cu); edx = (u32)(M32(m_)); }
  /* 00456e43 mov edi, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edi = (u32)(M32(m_)); }
  /* 00456e46 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456e47 mov eax, dword ptr [ebx + 0x358] */ { const u32 m_ = (u32)(ebx + 0x358u); eax = (u32)(M32(m_)); }
  /* 00456e4d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00456e4e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00456e4f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456e50 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00456e53 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00456e54 call 0x44e700 */ esp -= 4; M32(esp) = 0x456e59u; SAVEALL; F_0044e700(c); ABI_CHECK(0x44e700u, 0x456e54u); RETCHK(0x456e59u, 0x456e54u); LOADALL;
  /* 00456e59 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00456e5b mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00456e5f call 0x4019a0 */ esp -= 4; M32(esp) = 0x456e64u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x456e5fu); RETCHK(0x456e64u, 0x456e5fu); LOADALL;
  /* 00456e64 mov ecx, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 00456e6a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00456e6d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00456e6f je 0x456e89 */ if (ZF_) goto L_00456e89;
  /* 00456e71 lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00456e74 call 0x464860 */ esp -= 4; M32(esp) = 0x456e79u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x456e74u); RETCHK(0x456e79u, 0x456e74u); LOADALL;
  /* 00456e79 mov edx, eax */ { edx = (u32)(eax); }
  /* 00456e7b lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00456e7e call 0x4648e0 */ esp -= 4; M32(esp) = 0x456e83u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x456e7eu); RETCHK(0x456e83u, 0x456e7eu); LOADALL;
  /* 00456e83 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456e84 call 0x55f4b0 */ esp -= 4; M32(esp) = 0x456e89u; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x456e84u); RETCHK(0x456e89u, 0x456e84u); LOADALL;
L_00456e89:;
  /* 00456e89 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00456e8b call 0x509d90 */ esp -= 4; M32(esp) = 0x456e90u; SAVEALL; F_00509d90(c); ABI_CHECK(0x509d90u, 0x456e8bu); RETCHK(0x456e90u, 0x456e8bu); LOADALL;
  /* 00456e90 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00456e93 call 0x4647c0 */ esp -= 4; M32(esp) = 0x456e98u; SAVEALL; F_004647c0(c); ABI_CHECK(0x4647c0u, 0x456e93u); RETCHK(0x456e98u, 0x456e93u); LOADALL;
  /* 00456e98 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00456e9b jb 0x456ea9 */ if (CF_) goto L_00456ea9;
  /* 00456e9d mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 00456ea0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00456ea1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x456ea6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x456ea1u); RETCHK(0x456ea6u, 0x456ea1u); LOADALL;
  /* 00456ea6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00456ea9:;
  /* 00456ea9 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00456eab jmp 0x456f41 */ goto L_00456f41;
L_00456eb0:;
  /* 00456eb0 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00456eb3 call 0x5075c0 */ esp -= 4; M32(esp) = 0x456eb8u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x456eb3u); RETCHK(0x456eb8u, 0x456eb3u); LOADALL;
  /* 00456eb8 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00456ebb push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 00456ebd push 0x6440dc */ { u32 v_ = 0x6440dcu; esp -= 4; M32(esp) = v_; }
  /* 00456ec2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00456ec3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00456ec4 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00456ec6 call 0x405de0 */ esp -= 4; M32(esp) = 0x456ecbu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x456ec6u); RETCHK(0x456ecbu, 0x456ec6u); LOADALL;
  /* 00456ecb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00456ecd jne 0x456eda */ if (!ZF_) goto L_00456eda;
  /* 00456ecf push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00456ed1 call 0x509d90 */ esp -= 4; M32(esp) = 0x456ed6u; SAVEALL; F_00509d90(c); ABI_CHECK(0x509d90u, 0x456ed1u); RETCHK(0x456ed6u, 0x456ed1u); LOADALL;
  /* 00456ed6 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00456ed8 jmp 0x456f41 */ goto L_00456f41;
L_00456eda:;
  /* 00456eda mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00456edd call 0x5075c0 */ esp -= 4; M32(esp) = 0x456ee2u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x456eddu); RETCHK(0x456ee2u, 0x456eddu); LOADALL;
  /* 00456ee2 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 00456ee5 push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 00456ee7 push 0x6472a8 */ { u32 v_ = 0x6472a8u; esp -= 4; M32(esp) = v_; }
  /* 00456eec push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00456eed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00456eee mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00456ef0 call 0x405de0 */ esp -= 4; M32(esp) = 0x456ef5u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x456ef0u); RETCHK(0x456ef5u, 0x456ef0u); LOADALL;
  /* 00456ef5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00456ef7 jne 0x456f39 */ if (!ZF_) goto L_00456f39;
  /* 00456ef9 push 0x35c */ { u32 v_ = 0x35cu; esp -= 4; M32(esp) = v_; }
  /* 00456efe call 0x5fe934 */ esp -= 4; M32(esp) = 0x456f03u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x456efeu); RETCHK(0x456f03u, 0x456efeu); LOADALL;
  /* 00456f03 mov esi, eax */ { esi = (u32)(eax); }
  /* 00456f05 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00456f08 mov dword ptr [ebp - 0x30], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(esi); }
  /* 00456f0b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00456f0d cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00456f0f mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 00456f16 je 0x456f1d */ if (ZF_) goto L_00456f1d;
  /* 00456f18 call 0x456f70 */ esp -= 4; M32(esp) = 0x456f1du; SAVEALL; F_00456f70(c); ABI_CHECK(0x456f70u, 0x456f18u); RETCHK(0x456f1du, 0x456f18u); LOADALL;
L_00456f1d:;
  /* 00456f1d mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00456f1f mov ecx, 0x456d20 */ { ecx = (u32)(0x456d20u); }
  /* 00456f24 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00456f2b call 0x4570d0 */ esp -= 4; M32(esp) = 0x456f30u; SAVEALL; F_004570d0(c); ABI_CHECK(0x4570d0u, 0x456f2bu); RETCHK(0x456f30u, 0x456f2bu); LOADALL;
  /* 00456f30 call 0x4570c0 */ esp -= 4; M32(esp) = 0x456f35u; SAVEALL; F_004570c0(c); ABI_CHECK(0x4570c0u, 0x456f30u); RETCHK(0x456f35u, 0x456f30u); LOADALL;
  /* 00456f35 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00456f37 jmp 0x456f41 */ goto L_00456f41;
L_00456f39:;
  /* 00456f39 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00456f3a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00456f3c call 0x50a1b0 */ esp -= 4; M32(esp) = 0x456f41u; SAVEALL; F_0050a1b0(c); ABI_CHECK(0x50a1b0u, 0x456f3cu); RETCHK(0x456f41u, 0x456f3cu); LOADALL;
L_00456f41:;
  /* 00456f41 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00456f44 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00456f45 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00456f46 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00456f4d mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00456f50 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00456f51 call 0x61af31 */ esp -= 4; M32(esp) = 0x456f56u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x456f51u); RETCHK(0x456f56u, 0x456f51u); LOADALL;
  /* 00456f56 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00456f58 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00456f59 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00456f60(CPU *c) {
  NATIVE_HOOK(0x456f60u) REGS; LOADALL;
L_00456f60:;
  /* 00456f60 push 0x647e0c */ { u32 v_ = 0x647e0cu; esp -= 4; M32(esp) = v_; }
  /* 00456f65 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456f66 call 0x50a070 */ esp -= 4; M32(esp) = 0x456f6bu; SAVEALL; F_0050a070(c); ABI_CHECK(0x50a070u, 0x456f66u); RETCHK(0x456f6bu, 0x456f66u); LOADALL;
  /* 00456f6b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00456f70(CPU *c) {
  NATIVE_HOOK(0x456f70u) REGS; LOADALL;
L_00456f70:;
  /* 00456f70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456f71 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00456f72 call 0x509940 */ esp -= 4; M32(esp) = 0x456f77u; SAVEALL; F_00509940(c); ABI_CHECK(0x509940u, 0x456f72u); RETCHK(0x456f77u, 0x456f72u); LOADALL;
  /* 00456f77 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00456f79 mov dword ptr [esi + 0x350], eax */ { const u32 m_ = (u32)(esi + 0x350u); M32(m_) = (u32)(eax); }
  /* 00456f7f mov dword ptr [esi + 0x354], eax */ { const u32 m_ = (u32)(esi + 0x354u); M32(m_) = (u32)(eax); }
  /* 00456f85 mov dword ptr [esi + 0x358], eax */ { const u32 m_ = (u32)(esi + 0x358u); M32(m_) = (u32)(eax); }
  /* 00456f8b mov dword ptr [esi], 0x647818 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x647818u); }
  /* 00456f91 mov eax, esi */ { eax = (u32)(esi); }
  /* 00456f93 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00456fa0(CPU *c) {
  NATIVE_HOOK(0x456fa0u) REGS; LOADALL;
L_00456fa0:;
  /* 00456fa0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00456fa1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00456fa3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00456fa5 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 00456faa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00456fb0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456fb1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00456fb8 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00456fbb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00456fbc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00456fbd mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00456fbf call 0x404690 */ esp -= 4; M32(esp) = 0x456fc4u; SAVEALL; F_00404690(c); ABI_CHECK(0x404690u, 0x456fbfu); RETCHK(0x456fc4u, 0x456fbfu); LOADALL;
  /* 00456fc4 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00456fc6 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00456fc8 push 0x647e00 */ { u32 v_ = 0x647e00u; esp -= 4; M32(esp) = v_; }
  /* 00456fcd lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00456fd0 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 00456fd7 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00456fda mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00456fdd call 0x404420 */ esp -= 4; M32(esp) = 0x456fe2u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x456fddu); RETCHK(0x456fe2u, 0x456fddu); LOADALL;
  /* 00456fe2 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00456fe5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00456fe6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00456fe8 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00456feb call 0x5075d0 */ esp -= 4; M32(esp) = 0x456ff0u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x456febu); RETCHK(0x456ff0u, 0x456febu); LOADALL;
  /* 00456ff0 mov dword ptr [esi + 0x350], eax */ { const u32 m_ = (u32)(esi + 0x350u); M32(m_) = (u32)(eax); }
  /* 00456ff6 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00456ffd cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457001 jb 0x45700f */ if (CF_) goto L_0045700f;
  /* 00457003 mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 00457006 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457007 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45700cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457007u); RETCHK(0x45700cu, 0x457007u); LOADALL;
  /* 0045700c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045700f:;
  /* 0045700f mov esi, dword ptr [esi + 0x350] */ { const u32 m_ = (u32)(esi + 0x350u); esi = (u32)(M32(m_)); }
  /* 00457015 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457017 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 0045701e mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00457021 mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457024 jne 0x457038 */ if (!ZF_) goto L_00457038;
  /* 00457026 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00457027 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00457029 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045702a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045702d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00457034 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00457036 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00457037 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00457038:;
  /* 00457038 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00457039 call 0x433820 */ esp -= 4; M32(esp) = 0x45703eu; SAVEALL; F_00433820(c); ABI_CHECK(0x433820u, 0x457039u); RETCHK(0x45703eu, 0x457039u); LOADALL;
  /* 0045703e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00457041 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00457042 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00457044 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00457045 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045704c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045704e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045704f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00457050(CPU *c) {
  NATIVE_HOOK(0x457050u) REGS; LOADALL;
L_00457050:;
  /* 00457050 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00457051 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00457053 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00457056 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00457057 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00457059 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0045705b dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0045705c je 0x45706b */ if (ZF_) goto L_0045706b;
  /* 0045705e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045705f mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00457061 call 0x50a1b0 */ esp -= 4; M32(esp) = 0x457066u; SAVEALL; F_0050a1b0(c); ABI_CHECK(0x50a1b0u, 0x457061u); RETCHK(0x457066u, 0x457061u); LOADALL;
  /* 00457066 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00457067 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00457068 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0045706b:;
  /* 0045706b mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0045706e call 0x5075c0 */ esp -= 4; M32(esp) = 0x457073u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x45706eu); RETCHK(0x457073u, 0x45706eu); LOADALL;
  /* 00457073 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00457076 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 00457078 push 0x647df8 */ { u32 v_ = 0x647df8u; esp -= 4; M32(esp) = v_; }
  /* 0045707d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045707e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00457080 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00457082 call 0x405de0 */ esp -= 4; M32(esp) = 0x457087u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x457082u); RETCHK(0x457087u, 0x457082u); LOADALL;
  /* 00457087 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00457089 jne 0x4570ab */ if (!ZF_) goto L_004570ab;
  /* 0045708b mov eax, dword ptr [ebx + 0x354] */ { const u32 m_ = (u32)(ebx + 0x354u); eax = (u32)(M32(m_)); }
  /* 00457091 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00457093 je 0x4570a4 */ if (ZF_) goto L_004570a4;
  /* 00457095 mov edx, dword ptr [ebx + 0x358] */ { const u32 m_ = (u32)(ebx + 0x358u); edx = (u32)(M32(m_)); }
  /* 0045709b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045709c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045709e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045709f call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x4570a1u; SAVEALL; call_ind(c, t_); RETCHK(0x4570a1u, 0x45709fu); LOADALL; }
  /* 004570a1 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004570a4:;
  /* 004570a4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004570a6 call 0x509d90 */ esp -= 4; M32(esp) = 0x4570abu; SAVEALL; F_00509d90(c); ABI_CHECK(0x509d90u, 0x4570a6u); RETCHK(0x4570abu, 0x4570a6u); LOADALL;
L_004570ab:;
  /* 004570ab mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004570ad pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004570ae pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004570af ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004570c0(CPU *c) {
  NATIVE_HOOK(0x4570c0u) REGS; LOADALL;
L_004570c0:;
  /* 004570c0 push 0x647de8 */ { u32 v_ = 0x647de8u; esp -= 4; M32(esp) = v_; }
  /* 004570c5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004570c6 call 0x50a070 */ esp -= 4; M32(esp) = 0x4570cbu; SAVEALL; F_0050a070(c); ABI_CHECK(0x50a070u, 0x4570c6u); RETCHK(0x4570cbu, 0x4570c6u); LOADALL;
  /* 004570cb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004570d0(CPU *c) {
  NATIVE_HOOK(0x4570d0u) REGS; LOADALL;
L_004570d0:;
  /* 004570d0 mov dword ptr [eax + 0x354], ecx */ { const u32 m_ = (u32)(eax + 0x354u); M32(m_) = (u32)(ecx); }
  /* 004570d6 mov dword ptr [eax + 0x358], edx */ { const u32 m_ = (u32)(eax + 0x358u); M32(m_) = (u32)(edx); }
  /* 004570dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004570e0(CPU *c) {
  NATIVE_HOOK(0x4570e0u) REGS; LOADALL;
L_004570e0:;
  /* 004570e0 mov eax, dword ptr [eax + 0x350] */ { const u32 m_ = (u32)(eax + 0x350u); eax = (u32)(M32(m_)); }
  /* 004570e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004570f0(CPU *c) {
  NATIVE_HOOK(0x4570f0u) REGS; LOADALL;
L_004570f0:;
  /* 004570f0 mov eax, 0x3100 */ { eax = (u32)(0x3100u); }
  /* 004570f5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00457100(CPU *c) {
  NATIVE_HOOK(0x457100u) REGS; LOADALL;
L_00457100:;
  /* 00457100 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00457101 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00457103 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00457109 mov cl, byte ptr [0x9be144] */ { const u32 m_ = (u32)(0x9be144u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0045710f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00457111 push 0x622cce */ { u32 v_ = 0x622cceu; esp -= 4; M32(esp) = v_; }
  /* 00457116 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457117 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0045711c test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0045711e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00457125 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00457126 jne 0x45714c */ if (!ZF_) goto L_0045714c;
  /* 00457128 or dword ptr [0x9be144], eax */ { const u32 m_ = (u32)(0x9be144u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0045712e mov esi, 0x9be140 */ { esi = (u32)(0x9be140u); }
  /* 00457133 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0045713a call 0x45bd40 */ esp -= 4; M32(esp) = 0x45713fu; SAVEALL; F_0045bd40(c); ABI_CHECK(0x45bd40u, 0x45713au); RETCHK(0x45713fu, 0x45713au); LOADALL;
  /* 0045713f push 0x62c170 */ { u32 v_ = 0x62c170u; esp -= 4; M32(esp) = v_; }
  /* 00457144 call 0x5fe916 */ esp -= 4; M32(esp) = 0x457149u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x457144u); RETCHK(0x457149u, 0x457144u); LOADALL;
  /* 00457149 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045714c:;
  /* 0045714c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045714f mov eax, 0x9be140 */ { eax = (u32)(0x9be140u); }
  /* 00457154 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045715b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045715c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045715e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045715f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00457160(CPU *c) {
  NATIVE_HOOK(0x457160u) REGS; LOADALL;
L_00457160:;
  /* 00457160 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00457161 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00457163 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00457166 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00457167 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00457168 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00457169 call 0x54ba60 */ esp -= 4; M32(esp) = 0x45716eu; SAVEALL; F_0054ba60(c); ABI_CHECK(0x54ba60u, 0x457169u); RETCHK(0x45716eu, 0x457169u); LOADALL;
  /* 0045716e xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00457170 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00457172 mov ecx, 0xc */ { ecx = (u32)(0xcu); }
  /* 00457177 lea edi, [esi + 0x1d8] */ edi = (u32)((u32)(esi + 0x1d8u));
  /* 0045717d push 0xc3200000 */ { u32 v_ = 0xc3200000u; esp -= 4; M32(esp) = v_; }
  /* 00457182 mov dword ptr [esi], 0x6482f0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6482f0u); }
  /* 00457188 mov dword ptr [esi + 0x1c4], ebx */ { const u32 m_ = (u32)(esi + 0x1c4u); M32(m_) = (u32)(ebx); }
  /* 0045718e mov dword ptr [esi + 0x1c8], ebx */ { const u32 m_ = (u32)(esi + 0x1c8u); M32(m_) = (u32)(ebx); }
  /* 00457194 mov dword ptr [esi + 0x1cc], ebx */ { const u32 m_ = (u32)(esi + 0x1ccu); M32(m_) = (u32)(ebx); }
  /* 0045719a mov dword ptr [esi + 0x1d0], ebx */ { const u32 m_ = (u32)(esi + 0x1d0u); M32(m_) = (u32)(ebx); }
  /* 004571a0 mov dword ptr [esi + 0x1d4], ebx */ { const u32 m_ = (u32)(esi + 0x1d4u); M32(m_) = (u32)(ebx); }
  /* 004571a6 mov byte ptr [esi + 0x20c], 1 */ { const u32 m_ = (u32)(esi + 0x20cu); M8(m_) = (u8)(0x1u); }
  /* 004571ad mov byte ptr [esi + 0x20d], 1 */ { const u32 m_ = (u32)(esi + 0x20du); M8(m_) = (u8)(0x1u); }
  /* 004571b4 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004571b6 push 0xc3870000 */ { u32 v_ = 0xc3870000u; esp -= 4; M32(esp) = v_; }
  /* 004571bb lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 004571be mov dword ptr [0x696078], ebx */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(ebx); }
  /* 004571c4 mov dword ptr [0x696074], ebx */ { const u32 m_ = (u32)(0x696074u); M32(m_) = (u32)(ebx); }
  /* 004571ca mov dword ptr [0x696070], ebx */ { const u32 m_ = (u32)(0x696070u); M32(m_) = (u32)(ebx); }
  /* 004571d0 mov dword ptr [esi + 0x208], ebx */ { const u32 m_ = (u32)(esi + 0x208u); M32(m_) = (u32)(ebx); }
  /* 004571d6 mov dword ptr [0x695f68], esi */ { const u32 m_ = (u32)(0x695f68u); M32(m_) = (u32)(esi); }
  /* 004571dc mov dword ptr [esi + 0x210], 0x646a78 */ { const u32 m_ = (u32)(esi + 0x210u); M32(m_) = (u32)(0x646a78u); }
  /* 004571e6 mov byte ptr [esi + 0x214], 1 */ { const u32 m_ = (u32)(esi + 0x214u); M8(m_) = (u8)(0x1u); }
  /* 004571ed call 0x52ce60 */ esp -= 4; M32(esp) = 0x4571f2u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x4571edu); RETCHK(0x4571f2u, 0x4571edu); LOADALL;
  /* 004571f2 lea ecx, [esi + 0x218] */ ecx = (u32)((u32)(esi + 0x218u));
  /* 004571f8 call 0x52ce90 */ esp -= 4; M32(esp) = 0x4571fdu; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x4571f8u); RETCHK(0x4571fdu, 0x4571f8u); LOADALL;
  /* 004571fd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004571fe mov dword ptr [esi + 0x224], ebx */ { const u32 m_ = (u32)(esi + 0x224u); M32(m_) = (u32)(ebx); }
  /* 00457204 mov dword ptr [esi + 0x228], ebx */ { const u32 m_ = (u32)(esi + 0x228u); M32(m_) = (u32)(ebx); }
  /* 0045720a mov dword ptr [esi + 0x22c], ebx */ { const u32 m_ = (u32)(esi + 0x22cu); M32(m_) = (u32)(ebx); }
  /* 00457210 mov dword ptr [esi + 0x230], ebx */ { const u32 m_ = (u32)(esi + 0x230u); M32(m_) = (u32)(ebx); }
  /* 00457216 mov dword ptr [esi + 0x234], ebx */ { const u32 m_ = (u32)(esi + 0x234u); M32(m_) = (u32)(ebx); }
  /* 0045721c mov dword ptr [esi + 0x238], ebx */ { const u32 m_ = (u32)(esi + 0x238u); M32(m_) = (u32)(ebx); }
  /* 00457222 mov dword ptr [esi + 0x23c], ebx */ { const u32 m_ = (u32)(esi + 0x23cu); M32(m_) = (u32)(ebx); }
  /* 00457228 mov dword ptr [esi + 0x240], ebx */ { const u32 m_ = (u32)(esi + 0x240u); M32(m_) = (u32)(ebx); }
  /* 0045722e mov dword ptr [esi + 0x244], ebx */ { const u32 m_ = (u32)(esi + 0x244u); M32(m_) = (u32)(ebx); }
  /* 00457234 mov dword ptr [esi + 0x248], ebx */ { const u32 m_ = (u32)(esi + 0x248u); M32(m_) = (u32)(ebx); }
  /* 0045723a mov dword ptr [esi + 0x24c], ebx */ { const u32 m_ = (u32)(esi + 0x24cu); M32(m_) = (u32)(ebx); }
  /* 00457240 mov dword ptr [esi + 0x250], ebx */ { const u32 m_ = (u32)(esi + 0x250u); M32(m_) = (u32)(ebx); }
  /* 00457246 mov dword ptr [esi + 0x254], ebx */ { const u32 m_ = (u32)(esi + 0x254u); M32(m_) = (u32)(ebx); }
  /* 0045724c mov dword ptr [esi + 0x258], ebx */ { const u32 m_ = (u32)(esi + 0x258u); M32(m_) = (u32)(ebx); }
  /* 00457252 mov dword ptr [esi + 0x25c], ebx */ { const u32 m_ = (u32)(esi + 0x25cu); M32(m_) = (u32)(ebx); }
  /* 00457258 mov byte ptr [esi + 0x220], 1 */ { const u32 m_ = (u32)(esi + 0x220u); M8(m_) = (u8)(0x1u); }
  /* 0045725f mov eax, esi */ { eax = (u32)(esi); }
  /* 00457261 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00457262 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00457264 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00457265 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00457270(CPU *c) {
  NATIVE_HOOK(0x457270u) REGS; LOADALL;
L_00457270:;
  /* 00457270 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00457271 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00457273 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00457274 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00457276 call 0x4572a0 */ esp -= 4; M32(esp) = 0x45727bu; SAVEALL; F_004572a0(c); ABI_CHECK(0x4572a0u, 0x457276u); RETCHK(0x45727bu, 0x457276u); LOADALL;
  /* 0045727b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0045727f je 0x45728a */ if (ZF_) goto L_0045728a;
  /* 00457281 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00457282 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457287u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457282u); RETCHK(0x457287u, 0x457282u); LOADALL;
  /* 00457287 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045728a:;
  /* 0045728a mov eax, esi */ { eax = (u32)(esi); }
  /* 0045728c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045728d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045728e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004572a0(CPU *c) {
  NATIVE_HOOK(0x4572a0u) REGS; LOADALL;
L_004572a0:;
  /* 004572a0 mov dword ptr [ecx], 0x6482f0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x6482f0u); }
  /* 004572a6 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_004572b0(CPU *c) {
  NATIVE_HOOK(0x4572b0u) REGS; LOADALL;
L_004572b0:;
  /* 004572b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004572b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004572b3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004572b6 mov dword ptr [ebp - 0x10], 0x1000003c */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x1000003cu); }
  /* 004572bd mov dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x0u); }
  /* 004572c4 call 0x556030 */ esp -= 4; M32(esp) = 0x4572c9u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x4572c4u); RETCHK(0x4572c9u, 0x4572c4u); LOADALL;
  /* 004572c9 mov eax, dword ptr [eax + 0xa4] */ { const u32 m_ = (u32)(eax + 0xa4u); eax = (u32)(M32(m_)); }
  /* 004572cf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004572d1 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 004572d4 call 0x4019a0 */ esp -= 4; M32(esp) = 0x4572d9u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x4572d4u); RETCHK(0x4572d9u, 0x4572d4u); LOADALL;
  /* 004572d9 mov ecx, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 004572df add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004572e2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004572e4 je 0x4572f4 */ if (ZF_) goto L_004572f4;
  /* 004572e6 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004572e9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004572ea mov edx, 0xc */ { edx = (u32)(0xcu); }
  /* 004572ef call 0x55f4b0 */ esp -= 4; M32(esp) = 0x4572f4u; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x4572efu); RETCHK(0x4572f4u, 0x4572efu); LOADALL;
L_004572f4:;
  /* 004572f4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004572f6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004572f7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00457300(CPU *c) {
  NATIVE_HOOK(0x457300u) REGS; LOADALL;
L_00457300:;
  /* 00457300 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00457301 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00457303 cmp eax, 0x1000003c */ { u32 a_ = eax, b_ = 0x1000003cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457308 jne 0x45731a */ if (!ZF_) goto L_0045731a;
  /* 0045730a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045730d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045730f jne 0x45731a */ if (!ZF_) goto L_0045731a;
  /* 00457311 call 0x459cd0 */ esp -= 4; M32(esp) = 0x457316u; SAVEALL; F_00459cd0(c); ABI_CHECK(0x459cd0u, 0x457311u); RETCHK(0x457316u, 0x457311u); LOADALL;
  /* 00457316 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00457318 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00457319 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045731a:;
  /* 0045731a mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0045731c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045731d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00457320(CPU *c) {
  NATIVE_HOOK(0x457320u) REGS; LOADALL;
L_00457320:;
  /* 00457320 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00457321 call 0x54bc30 */ esp -= 4; M32(esp) = 0x457326u; SAVEALL; F_0054bc30(c); ABI_CHECK(0x54bc30u, 0x457321u); RETCHK(0x457326u, 0x457321u); LOADALL;
  /* 00457326 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 00457328 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045732a call dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45732du; SAVEALL; call_ind(c, t_); RETCHK(0x45732du, 0x45732au); LOADALL; }
  /* 0045732d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045732f push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 00457334 mov ecx, 0x68a4b8 */ { ecx = (u32)(0x68a4b8u); }
  /* 00457339 mov dword ptr [0x696084], 0 */ { const u32 m_ = (u32)(0x696084u); M32(m_) = (u32)(0x0u); }
  /* 00457343 call 0x404420 */ esp -= 4; M32(esp) = 0x457348u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x457343u); RETCHK(0x457348u, 0x457343u); LOADALL;
  /* 00457348 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 0045734a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045734b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00457350(CPU *c) {
  NATIVE_HOOK(0x457350u) REGS; LOADALL;
L_00457350:;
  /* 00457350 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00457352 call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x457355u; SAVEALL; call_ind(c, t_); RETCHK(0x457355u, 0x457352u); LOADALL; }
  /* 00457355 mov dword ptr [0x695f68], 0 */ { const u32 m_ = (u32)(0x695f68u); M32(m_) = (u32)(0x0u); }
  /* 0045735f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00457360(CPU *c) {
  NATIVE_HOOK(0x457360u) REGS; LOADALL;
L_00457360:;
  /* 00457360 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00457361 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00457363 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00457364 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00457366 call 0x463450 */ esp -= 4; M32(esp) = 0x45736bu; SAVEALL; F_00463450(c); ABI_CHECK(0x463450u, 0x457366u); RETCHK(0x45736bu, 0x457366u); LOADALL;
  /* 0045736b mov eax, dword ptr [0x696078] */ { const u32 m_ = (u32)(0x696078u); eax = (u32)(M32(m_)); }
  /* 00457370 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00457372 jne 0x4573ec */ if (!ZF_) goto L_004573ec;
  /* 00457374 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00457375 call dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45737bu; SAVEALL; call_ind(c, t_); RETCHK(0x45737bu, 0x457375u); LOADALL; }
  /* 0045737b mov edx, dword ptr [edi + 0x208] */ { const u32 m_ = (u32)(edi + 0x208u); edx = (u32)(M32(m_)); }
  /* 00457381 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00457383 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00457385 cmp eax, 0x2710 */ { u32 a_ = eax, b_ = 0x2710u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045738a jle 0x4573eb */ if ((ZF_|LT_)) goto L_004573eb;
  /* 0045738c mov ecx, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 00457392 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00457393 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 00457395 call dword ptr [esi + 0x128] */ { const u32 m_ = (u32)(esi + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45739bu; SAVEALL; call_ind(c, t_); RETCHK(0x45739bu, 0x457395u); LOADALL; }
  /* 0045739b mov ecx, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 004573a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004573a2 call dword ptr [esi + 0x110] */ { const u32 m_ = (u32)(esi + 0x110u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4573a8u; SAVEALL; call_ind(c, t_); RETCHK(0x4573a8u, 0x4573a2u); LOADALL; }
  /* 004573a8 mov esi, eax */ { esi = (u32)(eax); }
  /* 004573aa call 0x556030 */ esp -= 4; M32(esp) = 0x4573afu; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x4573aau); RETCHK(0x4573afu, 0x4573aau); LOADALL;
  /* 004573af mov edx, esi */ { edx = (u32)(esi); }
  /* 004573b1 mov esi, eax */ { esi = (u32)(eax); }
  /* 004573b3 call 0x555a00 */ esp -= 4; M32(esp) = 0x4573b8u; SAVEALL; F_00555a00(c); ABI_CHECK(0x555a00u, 0x4573b3u); RETCHK(0x4573b8u, 0x4573b3u); LOADALL;
  /* 004573b8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004573ba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004573bb je 0x4573eb */ if (ZF_) goto L_004573eb;
  /* 004573bd mov ecx, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); ecx = (u32)(M32(m_)); }
  /* 004573c3 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004573c5 call 0x464620 */ esp -= 4; M32(esp) = 0x4573cau; SAVEALL; F_00464620(c); ABI_CHECK(0x464620u, 0x4573c5u); RETCHK(0x4573cau, 0x4573c5u); LOADALL;
  /* 004573ca test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004573cc je 0x4573eb */ if (ZF_) goto L_004573eb;
  /* 004573ce push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004573d0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004573d2 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004573d7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004573d8 call 0x464580 */ esp -= 4; M32(esp) = 0x4573ddu; SAVEALL; F_00464580(c); ABI_CHECK(0x464580u, 0x4573d8u); RETCHK(0x4573ddu, 0x4573d8u); LOADALL;
  /* 004573dd add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004573e0 mov dword ptr [0x685708], eax */ { const u32 m_ = (u32)(0x685708u); M32(m_) = (u32)(eax); }
  /* 004573e5 mov dword ptr [edi + 0x208], ebx */ { const u32 m_ = (u32)(edi + 0x208u); M32(m_) = (u32)(ebx); }
L_004573eb:;
  /* 004573eb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_004573ec:;
  /* 004573ec jmp 0x9e0604 */ goto L_009e0604;
L_004573f2:;
  /* 004573f2 call 0x54bc40 */ esp -= 4; M32(esp) = 0x4573f7u; SAVEALL; F_0054bc40(c); ABI_CHECK(0x54bc40u, 0x4573f2u); RETCHK(0x4573f7u, 0x4573f2u); LOADALL;
  /* 004573f7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004573f8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004573f9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_009e0604:;
  /* 009e0604 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009e0605 mov ebx, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); ebx = (u32)(M32(m_)); }
  /* 009e060b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e060d je 0x9e06aa */ if (ZF_) goto L_009e06aa;
  /* 009e0613 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009e0615 call 0x4019a0 */ esp -= 4; M32(esp) = 0x9e061au; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x9e0615u); RETCHK(0x9e061au, 0x9e0615u); LOADALL;
  /* 009e061a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e061d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e061f je 0x9e06aa */ if (ZF_) goto L_009e06aa;
  /* 009e0625 mov esi, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); esi = (u32)(M32(m_)); }
  /* 009e062b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e062d je 0x9e06aa */ if (ZF_) goto L_009e06aa;
  /* 009e062f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 009e0631 call 0x55ead0 */ esp -= 4; M32(esp) = 0x9e0636u; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x9e0631u); RETCHK(0x9e0636u, 0x9e0631u); LOADALL;
  /* 009e0636 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0638 je 0x9e06aa */ if (ZF_) goto L_009e06aa;
  /* 009e063a mov eax, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); eax = (u32)(M32(m_)); }
  /* 009e063d cmp ebx, dword ptr [0x9dfd80] */ { const u32 m_ = (u32)(0x9dfd80u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0643 jne 0x9e064d */ if (!ZF_) goto L_009e064d;
  /* 009e0645 cmp eax, dword ptr [0x9dfd84] */ { const u32 m_ = (u32)(0x9dfd84u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e064b je 0x9e06aa */ if (ZF_) goto L_009e06aa;
L_009e064d:;
  /* 009e064d mov dword ptr [0x9dfd80], ebx */ { const u32 m_ = (u32)(0x9dfd80u); M32(m_) = (u32)(ebx); }
  /* 009e0653 mov dword ptr [0x9dfd84], eax */ { const u32 m_ = (u32)(0x9dfd84u); M32(m_) = (u32)(eax); }
  /* 009e0658 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e065b lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 009e065f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e0660 push 0x9e0600 */ { u32 v_ = 0x9e0600u; esp -= 4; M32(esp) = v_; }
  /* 009e0665 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009e0666 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x9e066bu; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x9e0666u); RETCHK(0x9e066bu, 0x9e0666u); LOADALL;
  /* 009e066b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e066e lea edx, [esp + 0x20] */ edx = (u32)((u32)(esp + 0x20u));
  /* 009e0672 mov ecx, edx */ { ecx = (u32)(edx); }
L_009e0674:;
  /* 009e0674 cmp byte ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009e0677 je 0x9e067c */ if (ZF_) goto L_009e067c;
  /* 009e0679 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009e067a jmp 0x9e0674 */ goto L_009e0674;
L_009e067c:;
  /* 009e067c sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 009e067e mov dword ptr [esp + 0x18], 0xf */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 009e0686 mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 009e068e mov byte ptr [esp + 4], 0 */ { const u32 m_ = (u32)(esp + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 009e0693 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009e0694 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 009e0695 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 009e0699 call 0x404420 */ esp -= 4; M32(esp) = 0x9e069eu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x9e0699u); RETCHK(0x9e069eu, 0x9e0699u); LOADALL;
  /* 009e069e mov esi, ebx */ { esi = (u32)(ebx); }
  /* 009e06a0 mov eax, esp */ { eax = (u32)(esp); }
  /* 009e06a2 call 0x5224b0 */ esp -= 4; M32(esp) = 0x9e06a7u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x9e06a2u); RETCHK(0x9e06a7u, 0x9e06a2u); LOADALL;
  /* 009e06a7 add esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_009e06aa:;
  /* 009e06aa popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009e06ab mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 009e06ae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009e06af mov ecx, edi */ { ecx = (u32)(edi); }
  /* 009e06b1 jmp 0x4573f2 */ goto L_004573f2;
}

void F_00457400(CPU *c) {
  NATIVE_HOOK(0x457400u) REGS; LOADALL;
L_00457400:;
  /* 00457400 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00457401 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00457403 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00457405 push 0x622cb3 */ { u32 v_ = 0x622cb3u; esp -= 4; M32(esp) = v_; }
  /* 0045740a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00457410 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457411 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00457418 sub esp, 0x5c */ { u32 a_ = esp, b_ = 0x5cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045741b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045741c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045741d mov esi, dword ptr [0x694ff8] */ { const u32 m_ = (u32)(0x694ff8u); esi = (u32)(M32(m_)); }
  /* 00457423 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00457425 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457427 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00457428 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0045742a je 0x45743b */ if (ZF_) goto L_0045743b;
  /* 0045742c xor bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0045742e call 0x418c80 */ esp -= 4; M32(esp) = 0x457433u; SAVEALL; F_00418c80(c); ABI_CHECK(0x418c80u, 0x45742eu); RETCHK(0x457433u, 0x45742eu); LOADALL;
  /* 00457433 mov esi, dword ptr [0x694ff8] */ { const u32 m_ = (u32)(0x694ff8u); esi = (u32)(M32(m_)); }
  /* 00457439 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0045743b:;
  /* 0045743b mov eax, dword ptr [esi + 0xdc] */ { const u32 m_ = (u32)(esi + 0xdcu); eax = (u32)(M32(m_)); }
  /* 00457441 push 0x1cc */ { u32 v_ = 0x1ccu; esp -= 4; M32(esp) = v_; }
  /* 00457446 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00457449 call 0x5fe934 */ esp -= 4; M32(esp) = 0x45744eu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x457449u); RETCHK(0x45744eu, 0x457449u); LOADALL;
  /* 0045744e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00457451 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00457454 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457456 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00457459 je 0x457464 */ if (ZF_) goto L_00457464;
  /* 0045745b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045745c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045745d call 0x50bb70 */ esp -= 4; M32(esp) = 0x457462u; SAVEALL; F_0050bb70(c); ABI_CHECK(0x50bb70u, 0x45745du); RETCHK(0x457462u, 0x45745du); LOADALL;
  /* 00457462 jmp 0x457466 */ goto L_00457466;
L_00457464:;
  /* 00457464 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00457466:;
  /* 00457466 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045746d push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0045746f mov esi, 0xf */ { esi = (u32)(0xfu); }
  /* 00457474 push 0x643d2c */ { u32 v_ = 0x643d2cu; esp -= 4; M32(esp) = v_; }
  /* 00457479 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0045747c mov dword ptr [edi + 0x1c8], eax */ { const u32 m_ = (u32)(edi + 0x1c8u); M32(m_) = (u32)(eax); }
  /* 00457482 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 00457485 mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 00457488 mov byte ptr [ebp - 0x2c], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045748b call 0x404420 */ esp -= 4; M32(esp) = 0x457490u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45748bu); RETCHK(0x457490u, 0x45748bu); LOADALL;
  /* 00457490 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00457493 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457494 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00457497 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 0045749e call 0x5075d0 */ esp -= 4; M32(esp) = 0x4574a3u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45749eu); RETCHK(0x4574a3u, 0x45749eu); LOADALL;
  /* 004574a3 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 004574a6 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004574ad cmp dword ptr [ebp - 0x18], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004574b1 jb 0x4574bf */ if (CF_) goto L_004574bf;
  /* 004574b3 mov edx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edx = (u32)(M32(m_)); }
  /* 004574b6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004574b7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4574bcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4574b7u); RETCHK(0x4574bcu, 0x4574b7u); LOADALL;
  /* 004574bc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004574bf:;
  /* 004574bf push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 004574c1 push 0x646ca4 */ { u32 v_ = 0x646ca4u; esp -= 4; M32(esp) = v_; }
  /* 004574c6 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 004574c9 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 004574cc mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 004574cf mov byte ptr [ebp - 0x2c], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004574d2 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 004574d5 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 004574d8 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004574db call 0x404420 */ esp -= 4; M32(esp) = 0x4574e0u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4574dbu); RETCHK(0x4574e0u, 0x4574dbu); LOADALL;
  /* 004574e0 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004574e3 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 004574e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004574e7 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 004574ee call 0x5075d0 */ esp -= 4; M32(esp) = 0x4574f3u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x4574eeu); RETCHK(0x4574f3u, 0x4574eeu); LOADALL;
  /* 004574f3 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004574fa cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004574fe jb 0x45750c */ if (CF_) goto L_0045750c;
  /* 00457500 mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 00457503 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457504 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457509u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457504u); RETCHK(0x457509u, 0x457504u); LOADALL;
  /* 00457509 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045750c:;
  /* 0045750c push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0045750e push 0x646ca4 */ { u32 v_ = 0x646ca4u; esp -= 4; M32(esp) = v_; }
  /* 00457513 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457516 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00457519 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 0045751c mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045751f call 0x404420 */ esp -= 4; M32(esp) = 0x457524u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45751fu); RETCHK(0x457524u, 0x45751fu); LOADALL;
  /* 00457524 lea edx, [ebp - 0x4c] */ edx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457527 mov dword ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3u); }
  /* 0045752e mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00457531 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00457532 call 0x5075d0 */ esp -= 4; M32(esp) = 0x457537u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457532u); RETCHK(0x457537u, 0x457532u); LOADALL;
  /* 00457537 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045753e cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457542 jb 0x457550 */ if (CF_) goto L_00457550;
  /* 00457544 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 00457547 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457548 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45754du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457548u); RETCHK(0x45754du, 0x457548u); LOADALL;
  /* 0045754d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457550:;
  /* 00457550 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00457552 push 0x646ca4 */ { u32 v_ = 0x646ca4u; esp -= 4; M32(esp) = v_; }
  /* 00457557 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0045755a mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 0045755d mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 00457560 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457563 call 0x404420 */ esp -= 4; M32(esp) = 0x457568u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x457563u); RETCHK(0x457568u, 0x457563u); LOADALL;
  /* 00457568 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0045756b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045756c mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0045756f mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 00457576 call 0x5075d0 */ esp -= 4; M32(esp) = 0x45757bu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457576u); RETCHK(0x45757bu, 0x457576u); LOADALL;
  /* 0045757b mov edx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); edx = (u32)(M32(m_)); }
  /* 00457581 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457582 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00457583 mov edx, dword ptr [edi + 0x210] */ { const u32 m_ = (u32)(edi + 0x210u); edx = (u32)(M32(m_)); }
  /* 00457589 call 0x50c0f0 */ esp -= 4; M32(esp) = 0x45758eu; SAVEALL; F_0050c0f0(c); ABI_CHECK(0x50c0f0u, 0x457589u); RETCHK(0x45758eu, 0x457589u); LOADALL;
  /* 0045758e mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457595 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457599 jb 0x4575a7 */ if (CF_) goto L_004575a7;
  /* 0045759b mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 0045759e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045759f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4575a4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45759fu); RETCHK(0x4575a4u, 0x45759fu); LOADALL;
  /* 004575a4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004575a7:;
  /* 004575a7 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 004575ad mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004575af push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004575b1 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4575b4u; SAVEALL; call_ind(c, t_); RETCHK(0x4575b4u, 0x4575b1u); LOADALL; }
  /* 004575b4 cmp dword ptr [edi + 0x1c4], ebx */ { const u32 m_ = (u32)(edi + 0x1c4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004575ba jne 0x4575ff */ if (!ZF_) goto L_004575ff;
  /* 004575bc push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 004575be call 0x5fe934 */ esp -= 4; M32(esp) = 0x4575c3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4575beu); RETCHK(0x4575c3u, 0x4575beu); LOADALL;
  /* 004575c3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004575c6 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004575c8 je 0x4575d3 */ if (ZF_) goto L_004575d3;
  /* 004575ca mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004575cc call 0x51c6f0 */ esp -= 4; M32(esp) = 0x4575d1u; SAVEALL; F_0051c6f0(c); ABI_CHECK(0x51c6f0u, 0x4575ccu); RETCHK(0x4575d1u, 0x4575ccu); LOADALL;
  /* 004575d1 jmp 0x4575d5 */ goto L_004575d5;
L_004575d3:;
  /* 004575d3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004575d5:;
  /* 004575d5 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004575d7 mov dword ptr [edi + 0x1c4], eax */ { const u32 m_ = (u32)(edi + 0x1c4u); M32(m_) = (u32)(eax); }
  /* 004575dd jne 0x4575f2 */ if (!ZF_) goto L_004575f2;
  /* 004575df pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004575e0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004575e1 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004575e3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004575e4 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004575e7 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004575ee mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004575f0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004575f1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004575f2:;
  /* 004575f2 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004575f4 mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 004575fa call 0x5079e0 */ esp -= 4; M32(esp) = 0x4575ffu; SAVEALL; F_005079e0(c); ABI_CHECK(0x5079e0u, 0x4575fau); RETCHK(0x4575ffu, 0x4575fau); LOADALL;
L_004575ff:;
  /* 004575ff push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00457601 push 0x648638 */ { u32 v_ = 0x648638u; esp -= 4; M32(esp) = v_; }
  /* 00457606 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457609 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 0045760c mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 0045760f mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457612 call 0x404420 */ esp -= 4; M32(esp) = 0x457617u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x457612u); RETCHK(0x457617u, 0x457612u); LOADALL;
  /* 00457617 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0045761a mov dword ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x5u); }
  /* 00457621 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457627 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457628 call 0x5075d0 */ esp -= 4; M32(esp) = 0x45762du; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457628u); RETCHK(0x45762du, 0x457628u); LOADALL;
  /* 0045762d mov dword ptr [edi + 0x1fc], eax */ { const u32 m_ = (u32)(edi + 0x1fcu); M32(m_) = (u32)(eax); }
  /* 00457633 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045763a cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045763e jb 0x45764c */ if (CF_) goto L_0045764c;
  /* 00457640 mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 00457643 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457644 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457649u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457644u); RETCHK(0x457649u, 0x457644u); LOADALL;
  /* 00457649 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045764c:;
  /* 0045764c push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 0045764e push 0x648628 */ { u32 v_ = 0x648628u; esp -= 4; M32(esp) = v_; }
  /* 00457653 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457656 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00457659 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 0045765c mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045765f call 0x404420 */ esp -= 4; M32(esp) = 0x457664u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45765fu); RETCHK(0x457664u, 0x45765fu); LOADALL;
  /* 00457664 lea edx, [ebp - 0x4c] */ edx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457667 mov dword ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x6u); }
  /* 0045766e mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457674 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00457675 call 0x5075d0 */ esp -= 4; M32(esp) = 0x45767au; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457675u); RETCHK(0x45767au, 0x457675u); LOADALL;
  /* 0045767a mov dword ptr [edi + 0x200], eax */ { const u32 m_ = (u32)(edi + 0x200u); M32(m_) = (u32)(eax); }
  /* 00457680 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457687 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045768b jb 0x457699 */ if (CF_) goto L_00457699;
  /* 0045768d mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 00457690 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457691 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457696u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457691u); RETCHK(0x457696u, 0x457691u); LOADALL;
  /* 00457696 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457699:;
  /* 00457699 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0045769b push 0x644100 */ { u32 v_ = 0x644100u; esp -= 4; M32(esp) = v_; }
  /* 004576a0 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 004576a3 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 004576a6 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 004576a9 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004576ac call 0x404420 */ esp -= 4; M32(esp) = 0x4576b1u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4576acu); RETCHK(0x4576b1u, 0x4576acu); LOADALL;
  /* 004576b1 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 004576b4 mov dword ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x7u); }
  /* 004576bb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004576bc mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 004576c2 call 0x5075d0 */ esp -= 4; M32(esp) = 0x4576c7u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x4576c2u); RETCHK(0x4576c7u, 0x4576c2u); LOADALL;
  /* 004576c7 mov dword ptr [edi + 0x204], eax */ { const u32 m_ = (u32)(edi + 0x204u); M32(m_) = (u32)(eax); }
  /* 004576cd mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004576d4 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004576d8 jb 0x4576e6 */ if (CF_) goto L_004576e6;
  /* 004576da mov edx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); edx = (u32)(M32(m_)); }
  /* 004576dd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004576de call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4576e3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4576deu); RETCHK(0x4576e3u, 0x4576deu); LOADALL;
  /* 004576e3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004576e6:;
  /* 004576e6 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 004576e8 push 0x64861c */ { u32 v_ = 0x64861cu; esp -= 4; M32(esp) = v_; }
  /* 004576ed lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 004576f0 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 004576f3 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 004576f6 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004576f9 call 0x404420 */ esp -= 4; M32(esp) = 0x4576feu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4576f9u); RETCHK(0x4576feu, 0x4576f9u); LOADALL;
  /* 004576fe lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457701 mov dword ptr [ebp - 4], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x8u); }
  /* 00457708 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045770e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045770f call 0x5075d0 */ esp -= 4; M32(esp) = 0x457714u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45770fu); RETCHK(0x457714u, 0x45770fu); LOADALL;
  /* 00457714 mov dword ptr [edi + 0x1ec], eax */ { const u32 m_ = (u32)(edi + 0x1ecu); M32(m_) = (u32)(eax); }
  /* 0045771a mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457721 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457725 jb 0x457733 */ if (CF_) goto L_00457733;
  /* 00457727 mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 0045772a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045772b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457730u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45772bu); RETCHK(0x457730u, 0x45772bu); LOADALL;
  /* 00457730 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457733:;
  /* 00457733 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00457735 push 0x648610 */ { u32 v_ = 0x648610u; esp -= 4; M32(esp) = v_; }
  /* 0045773a lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0045773d mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00457740 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 00457743 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457746 call 0x404420 */ esp -= 4; M32(esp) = 0x45774bu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x457746u); RETCHK(0x45774bu, 0x457746u); LOADALL;
  /* 0045774b lea edx, [ebp - 0x4c] */ edx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0045774e mov dword ptr [ebp - 4], 9 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x9u); }
  /* 00457755 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045775b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045775c call 0x5075d0 */ esp -= 4; M32(esp) = 0x457761u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45775cu); RETCHK(0x457761u, 0x45775cu); LOADALL;
  /* 00457761 mov dword ptr [edi + 0x1e8], eax */ { const u32 m_ = (u32)(edi + 0x1e8u); M32(m_) = (u32)(eax); }
  /* 00457767 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045776e cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457772 jb 0x457780 */ if (CF_) goto L_00457780;
  /* 00457774 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 00457777 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457778 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45777du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457778u); RETCHK(0x45777du, 0x457778u); LOADALL;
  /* 0045777d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457780:;
  /* 00457780 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00457782 push 0x648604 */ { u32 v_ = 0x648604u; esp -= 4; M32(esp) = v_; }
  /* 00457787 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0045778a mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 0045778d mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 00457790 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457793 call 0x404420 */ esp -= 4; M32(esp) = 0x457798u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x457793u); RETCHK(0x457798u, 0x457793u); LOADALL;
  /* 00457798 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0045779b mov dword ptr [ebp - 4], 0xa */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xau); }
  /* 004577a2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004577a3 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 004577a9 call 0x5075d0 */ esp -= 4; M32(esp) = 0x4577aeu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x4577a9u); RETCHK(0x4577aeu, 0x4577a9u); LOADALL;
  /* 004577ae mov dword ptr [edi + 0x1dc], eax */ { const u32 m_ = (u32)(edi + 0x1dcu); M32(m_) = (u32)(eax); }
  /* 004577b4 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004577bb cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004577bf jb 0x4577cd */ if (CF_) goto L_004577cd;
  /* 004577c1 mov edx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); edx = (u32)(M32(m_)); }
  /* 004577c4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004577c5 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4577cau; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4577c5u); RETCHK(0x4577cau, 0x4577c5u); LOADALL;
  /* 004577ca add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004577cd:;
  /* 004577cd push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 004577cf push 0x6485f8 */ { u32 v_ = 0x6485f8u; esp -= 4; M32(esp) = v_; }
  /* 004577d4 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 004577d7 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 004577da mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 004577dd mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004577e0 call 0x404420 */ esp -= 4; M32(esp) = 0x4577e5u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4577e0u); RETCHK(0x4577e5u, 0x4577e0u); LOADALL;
  /* 004577e5 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 004577e8 mov dword ptr [ebp - 4], 0xb */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xbu); }
  /* 004577ef mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 004577f5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004577f6 call 0x5075d0 */ esp -= 4; M32(esp) = 0x4577fbu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x4577f6u); RETCHK(0x4577fbu, 0x4577f6u); LOADALL;
  /* 004577fb mov dword ptr [edi + 0x1e0], eax */ { const u32 m_ = (u32)(edi + 0x1e0u); M32(m_) = (u32)(eax); }
  /* 00457801 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457808 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045780c jb 0x45781a */ if (CF_) goto L_0045781a;
  /* 0045780e mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 00457811 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457812 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457817u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457812u); RETCHK(0x457817u, 0x457812u); LOADALL;
  /* 00457817 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045781a:;
  /* 0045781a push 0x12 */ { u32 v_ = 0x12u; esp -= 4; M32(esp) = v_; }
  /* 0045781c push 0x6485e4 */ { u32 v_ = 0x6485e4u; esp -= 4; M32(esp) = v_; }
  /* 00457821 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457824 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00457827 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 0045782a mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045782d call 0x404420 */ esp -= 4; M32(esp) = 0x457832u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45782du); RETCHK(0x457832u, 0x45782du); LOADALL;
  /* 00457832 lea edx, [ebp - 0x4c] */ edx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457835 mov dword ptr [ebp - 4], 0xc */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xcu); }
  /* 0045783c mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457842 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00457843 call 0x5075d0 */ esp -= 4; M32(esp) = 0x457848u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457843u); RETCHK(0x457848u, 0x457843u); LOADALL;
  /* 00457848 mov dword ptr [edi + 0x1e4], eax */ { const u32 m_ = (u32)(edi + 0x1e4u); M32(m_) = (u32)(eax); }
  /* 0045784e mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457855 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457859 jb 0x457867 */ if (CF_) goto L_00457867;
  /* 0045785b mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 0045785e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045785f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457864u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45785fu); RETCHK(0x457864u, 0x45785fu); LOADALL;
  /* 00457864 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457867:;
  /* 00457867 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00457868 push 0x6485d4 */ { u32 v_ = 0x6485d4u; esp -= 4; M32(esp) = v_; }
  /* 0045786d lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457870 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00457873 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 00457876 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457879 call 0x404420 */ esp -= 4; M32(esp) = 0x45787eu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x457879u); RETCHK(0x45787eu, 0x457879u); LOADALL;
  /* 0045787e lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457881 mov dword ptr [ebp - 4], 0xd */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xdu); }
  /* 00457888 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457889 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045788f call 0x5075d0 */ esp -= 4; M32(esp) = 0x457894u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45788fu); RETCHK(0x457894u, 0x45788fu); LOADALL;
  /* 00457894 mov dword ptr [edi + 0x1f4], eax */ { const u32 m_ = (u32)(edi + 0x1f4u); M32(m_) = (u32)(eax); }
  /* 0045789a mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004578a1 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004578a5 jb 0x4578b3 */ if (CF_) goto L_004578b3;
  /* 004578a7 mov edx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); edx = (u32)(M32(m_)); }
  /* 004578aa push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004578ab call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4578b0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4578abu); RETCHK(0x4578b0u, 0x4578abu); LOADALL;
  /* 004578b0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004578b3:;
  /* 004578b3 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 004578b5 push 0x6485c0 */ { u32 v_ = 0x6485c0u; esp -= 4; M32(esp) = v_; }
  /* 004578ba lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 004578bd mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 004578c0 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 004578c3 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004578c6 call 0x404420 */ esp -= 4; M32(esp) = 0x4578cbu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4578c6u); RETCHK(0x4578cbu, 0x4578c6u); LOADALL;
  /* 004578cb lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 004578ce mov dword ptr [ebp - 4], 0xe */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xeu); }
  /* 004578d5 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 004578db push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004578dc call 0x5075d0 */ esp -= 4; M32(esp) = 0x4578e1u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x4578dcu); RETCHK(0x4578e1u, 0x4578dcu); LOADALL;
  /* 004578e1 mov dword ptr [edi + 0x1f8], eax */ { const u32 m_ = (u32)(edi + 0x1f8u); M32(m_) = (u32)(eax); }
  /* 004578e7 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004578ee cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004578f2 jb 0x457900 */ if (CF_) goto L_00457900;
  /* 004578f4 mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 004578f7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004578f8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4578fdu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4578f8u); RETCHK(0x4578fdu, 0x4578f8u); LOADALL;
  /* 004578fd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457900:;
  /* 00457900 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00457902 push 0x6485b4 */ { u32 v_ = 0x6485b4u; esp -= 4; M32(esp) = v_; }
  /* 00457907 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0045790a mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 0045790d mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 00457910 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457913 call 0x404420 */ esp -= 4; M32(esp) = 0x457918u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x457913u); RETCHK(0x457918u, 0x457913u); LOADALL;
  /* 00457918 lea edx, [ebp - 0x4c] */ edx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0045791b mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0045791e mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457924 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00457925 call 0x5075d0 */ esp -= 4; M32(esp) = 0x45792au; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457925u); RETCHK(0x45792au, 0x457925u); LOADALL;
  /* 0045792a mov dword ptr [edi + 0x1d4], eax */ { const u32 m_ = (u32)(edi + 0x1d4u); M32(m_) = (u32)(eax); }
  /* 00457930 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457937 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045793b jb 0x457949 */ if (CF_) goto L_00457949;
  /* 0045793d mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 00457940 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457941 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457946u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457941u); RETCHK(0x457946u, 0x457941u); LOADALL;
  /* 00457946 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457949:;
  /* 00457949 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0045794b push 0x6485a8 */ { u32 v_ = 0x6485a8u; esp -= 4; M32(esp) = v_; }
  /* 00457950 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457953 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00457956 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 00457959 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045795c call 0x404420 */ esp -= 4; M32(esp) = 0x457961u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45795cu); RETCHK(0x457961u, 0x45795cu); LOADALL;
  /* 00457961 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457964 mov dword ptr [ebp - 4], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x10u); }
  /* 0045796b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045796c mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457972 call 0x5075d0 */ esp -= 4; M32(esp) = 0x457977u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457972u); RETCHK(0x457977u, 0x457972u); LOADALL;
  /* 00457977 mov dword ptr [edi + 0x1cc], eax */ { const u32 m_ = (u32)(edi + 0x1ccu); M32(m_) = (u32)(eax); }
  /* 0045797d mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457984 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457988 jb 0x457996 */ if (CF_) goto L_00457996;
  /* 0045798a mov edx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); edx = (u32)(M32(m_)); }
  /* 0045798d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045798e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457993u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45798eu); RETCHK(0x457993u, 0x45798eu); LOADALL;
  /* 00457993 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457996:;
  /* 00457996 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00457998 push 0x64859c */ { u32 v_ = 0x64859cu; esp -= 4; M32(esp) = v_; }
  /* 0045799d lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 004579a0 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 004579a3 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 004579a6 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004579a9 call 0x404420 */ esp -= 4; M32(esp) = 0x4579aeu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4579a9u); RETCHK(0x4579aeu, 0x4579a9u); LOADALL;
  /* 004579ae lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 004579b1 mov dword ptr [ebp - 4], 0x11 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x11u); }
  /* 004579b8 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 004579be push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004579bf call 0x5075d0 */ esp -= 4; M32(esp) = 0x4579c4u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x4579bfu); RETCHK(0x4579c4u, 0x4579bfu); LOADALL;
  /* 004579c4 mov dword ptr [edi + 0x1d0], eax */ { const u32 m_ = (u32)(edi + 0x1d0u); M32(m_) = (u32)(eax); }
  /* 004579ca mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004579d1 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004579d5 jb 0x4579e3 */ if (CF_) goto L_004579e3;
  /* 004579d7 mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 004579da push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004579db call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4579e0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4579dbu); RETCHK(0x4579e0u, 0x4579dbu); LOADALL;
  /* 004579e0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004579e3:;
  /* 004579e3 push 0x12 */ { u32 v_ = 0x12u; esp -= 4; M32(esp) = v_; }
  /* 004579e5 push 0x648588 */ { u32 v_ = 0x648588u; esp -= 4; M32(esp) = v_; }
  /* 004579ea lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 004579ed mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 004579f0 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 004579f3 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004579f6 call 0x404420 */ esp -= 4; M32(esp) = 0x4579fbu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4579f6u); RETCHK(0x4579fbu, 0x4579f6u); LOADALL;
  /* 004579fb lea edx, [ebp - 0x4c] */ edx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 004579fe mov dword ptr [ebp - 4], 0x12 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x12u); }
  /* 00457a05 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457a0b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00457a0c call 0x5075d0 */ esp -= 4; M32(esp) = 0x457a11u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457a0cu); RETCHK(0x457a11u, 0x457a0cu); LOADALL;
  /* 00457a11 mov dword ptr [edi + 0x224], eax */ { const u32 m_ = (u32)(edi + 0x224u); M32(m_) = (u32)(eax); }
  /* 00457a17 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457a1e cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457a22 jb 0x457a30 */ if (CF_) goto L_00457a30;
  /* 00457a24 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 00457a27 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457a28 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457a2du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457a28u); RETCHK(0x457a2du, 0x457a28u); LOADALL;
  /* 00457a2d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457a30:;
  /* 00457a30 mov ecx, dword ptr [edi + 0x224] */ { const u32 m_ = (u32)(edi + 0x224u); ecx = (u32)(M32(m_)); }
  /* 00457a36 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457a38 je 0x457a40 */ if (ZF_) goto L_00457a40;
  /* 00457a3a mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00457a3c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00457a3d call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x457a40u; SAVEALL; call_ind(c, t_); RETCHK(0x457a40u, 0x457a3du); LOADALL; }
L_00457a40:;
  /* 00457a40 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00457a42 push 0x64857c */ { u32 v_ = 0x64857cu; esp -= 4; M32(esp) = v_; }
  /* 00457a47 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457a4a mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00457a4d mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 00457a50 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457a53 call 0x404420 */ esp -= 4; M32(esp) = 0x457a58u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x457a53u); RETCHK(0x457a58u, 0x457a53u); LOADALL;
  /* 00457a58 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457a5b mov dword ptr [ebp - 4], 0x13 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x13u); }
  /* 00457a62 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457a68 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457a69 call 0x5075d0 */ esp -= 4; M32(esp) = 0x457a6eu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457a69u); RETCHK(0x457a6eu, 0x457a69u); LOADALL;
  /* 00457a6e mov dword ptr [edi + 0x228], eax */ { const u32 m_ = (u32)(edi + 0x228u); M32(m_) = (u32)(eax); }
  /* 00457a74 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457a7b cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457a7f jb 0x457a8d */ if (CF_) goto L_00457a8d;
  /* 00457a81 mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 00457a84 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457a85 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457a8au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457a85u); RETCHK(0x457a8au, 0x457a85u); LOADALL;
  /* 00457a8a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457a8d:;
  /* 00457a8d push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00457a8f push 0x648570 */ { u32 v_ = 0x648570u; esp -= 4; M32(esp) = v_; }
  /* 00457a94 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457a97 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00457a9a mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 00457a9d mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457aa0 call 0x404420 */ esp -= 4; M32(esp) = 0x457aa5u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x457aa0u); RETCHK(0x457aa5u, 0x457aa0u); LOADALL;
  /* 00457aa5 lea edx, [ebp - 0x4c] */ edx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457aa8 mov dword ptr [ebp - 4], 0x14 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x14u); }
  /* 00457aaf mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457ab5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00457ab6 call 0x5075d0 */ esp -= 4; M32(esp) = 0x457abbu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457ab6u); RETCHK(0x457abbu, 0x457ab6u); LOADALL;
  /* 00457abb mov dword ptr [edi + 0x22c], eax */ { const u32 m_ = (u32)(edi + 0x22cu); M32(m_) = (u32)(eax); }
  /* 00457ac1 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457ac8 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457acc jb 0x457ada */ if (CF_) goto L_00457ada;
  /* 00457ace mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 00457ad1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457ad2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457ad7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457ad2u); RETCHK(0x457ad7u, 0x457ad2u); LOADALL;
  /* 00457ad7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457ada:;
  /* 00457ada push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00457adb call 0x4019a0 */ esp -= 4; M32(esp) = 0x457ae0u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x457adbu); RETCHK(0x457ae0u, 0x457adbu); LOADALL;
  /* 00457ae0 mov ecx, dword ptr [edi + 0x1d0] */ { const u32 m_ = (u32)(edi + 0x1d0u); ecx = (u32)(M32(m_)); }
  /* 00457ae6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00457ae9 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457aeb je 0x457b46 */ if (ZF_) goto L_00457b46;
  /* 00457aed call 0x4020b0 */ esp -= 4; M32(esp) = 0x457af2u; SAVEALL; F_004020b0(c); ABI_CHECK(0x4020b0u, 0x457aedu); RETCHK(0x457af2u, 0x457aedu); LOADALL;
  /* 00457af2 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00457af4 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00457af7 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 00457afa mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457afd lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
L_00457b00:;
  /* 00457b00 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00457b02 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00457b03 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00457b05 jne 0x457b00 */ if (!ZF_) goto L_00457b00;
  /* 00457b07 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00457b09 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457b0a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457b0b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457b0e call 0x404420 */ esp -= 4; M32(esp) = 0x457b13u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x457b0eu); RETCHK(0x457b13u, 0x457b0eu); LOADALL;
  /* 00457b13 mov dword ptr [ebp - 4], 0x15 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x15u); }
  /* 00457b1a mov esi, dword ptr [edi + 0x1d0] */ { const u32 m_ = (u32)(edi + 0x1d0u); esi = (u32)(M32(m_)); }
  /* 00457b20 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457b23 call 0x5224b0 */ esp -= 4; M32(esp) = 0x457b28u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x457b23u); RETCHK(0x457b28u, 0x457b23u); LOADALL;
  /* 00457b28 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457b2f cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457b33 jb 0x457b41 */ if (CF_) goto L_00457b41;
  /* 00457b35 mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 00457b38 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457b39 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457b3eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457b39u); RETCHK(0x457b3eu, 0x457b39u); LOADALL;
  /* 00457b3e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457b41:;
  /* 00457b41 mov esi, 0xf */ { esi = (u32)(0xfu); }
L_00457b46:;
  /* 00457b46 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00457b48 push 0x648564 */ { u32 v_ = 0x648564u; esp -= 4; M32(esp) = v_; }
  /* 00457b4d lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457b50 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00457b53 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 00457b56 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457b59 call 0x404420 */ esp -= 4; M32(esp) = 0x457b5eu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x457b59u); RETCHK(0x457b5eu, 0x457b59u); LOADALL;
  /* 00457b5e lea edx, [ebp - 0x4c] */ edx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457b61 mov dword ptr [ebp - 4], 0x16 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x16u); }
  /* 00457b68 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457b6e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00457b6f call 0x5075d0 */ esp -= 4; M32(esp) = 0x457b74u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457b6fu); RETCHK(0x457b74u, 0x457b6fu); LOADALL;
  /* 00457b74 mov dword ptr [edi + 0x230], eax */ { const u32 m_ = (u32)(edi + 0x230u); M32(m_) = (u32)(eax); }
  /* 00457b7a mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457b81 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457b85 jb 0x457b93 */ if (CF_) goto L_00457b93;
  /* 00457b87 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 00457b8a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457b8b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457b90u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457b8bu); RETCHK(0x457b90u, 0x457b8bu); LOADALL;
  /* 00457b90 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457b93:;
  /* 00457b93 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00457b95 push 0x648558 */ { u32 v_ = 0x648558u; esp -= 4; M32(esp) = v_; }
  /* 00457b9a lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457b9d mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00457ba0 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 00457ba3 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457ba6 call 0x404420 */ esp -= 4; M32(esp) = 0x457babu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x457ba6u); RETCHK(0x457babu, 0x457ba6u); LOADALL;
  /* 00457bab lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457bae mov dword ptr [ebp - 4], 0x17 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x17u); }
  /* 00457bb5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457bb6 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457bbc call 0x5075d0 */ esp -= 4; M32(esp) = 0x457bc1u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457bbcu); RETCHK(0x457bc1u, 0x457bbcu); LOADALL;
  /* 00457bc1 mov dword ptr [edi + 0x234], eax */ { const u32 m_ = (u32)(edi + 0x234u); M32(m_) = (u32)(eax); }
  /* 00457bc7 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457bce cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457bd2 jb 0x457be0 */ if (CF_) goto L_00457be0;
  /* 00457bd4 mov edx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); edx = (u32)(M32(m_)); }
  /* 00457bd7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00457bd8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457bddu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457bd8u); RETCHK(0x457bddu, 0x457bd8u); LOADALL;
  /* 00457bdd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457be0:;
  /* 00457be0 push 0x11 */ { u32 v_ = 0x11u; esp -= 4; M32(esp) = v_; }
  /* 00457be2 push 0x648544 */ { u32 v_ = 0x648544u; esp -= 4; M32(esp) = v_; }
  /* 00457be7 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457bea mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00457bed mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 00457bf0 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457bf3 call 0x404420 */ esp -= 4; M32(esp) = 0x457bf8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x457bf3u); RETCHK(0x457bf8u, 0x457bf3u); LOADALL;
  /* 00457bf8 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457bfb mov dword ptr [ebp - 4], 0x18 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x18u); }
  /* 00457c02 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457c08 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457c09 call 0x5075d0 */ esp -= 4; M32(esp) = 0x457c0eu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457c09u); RETCHK(0x457c0eu, 0x457c09u); LOADALL;
  /* 00457c0e mov dword ptr [edi + 0x238], eax */ { const u32 m_ = (u32)(edi + 0x238u); M32(m_) = (u32)(eax); }
  /* 00457c14 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457c1b cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457c1f jb 0x457c2d */ if (CF_) goto L_00457c2d;
  /* 00457c21 mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 00457c24 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457c25 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457c2au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457c25u); RETCHK(0x457c2au, 0x457c25u); LOADALL;
  /* 00457c2a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457c2d:;
  /* 00457c2d push 0x11 */ { u32 v_ = 0x11u; esp -= 4; M32(esp) = v_; }
  /* 00457c2f push 0x648530 */ { u32 v_ = 0x648530u; esp -= 4; M32(esp) = v_; }
  /* 00457c34 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457c37 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00457c3a mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 00457c3d mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457c40 call 0x404420 */ esp -= 4; M32(esp) = 0x457c45u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x457c40u); RETCHK(0x457c45u, 0x457c40u); LOADALL;
  /* 00457c45 lea edx, [ebp - 0x4c] */ edx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457c48 mov dword ptr [ebp - 4], 0x19 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x19u); }
  /* 00457c4f mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457c55 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00457c56 call 0x5075d0 */ esp -= 4; M32(esp) = 0x457c5bu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457c56u); RETCHK(0x457c5bu, 0x457c56u); LOADALL;
  /* 00457c5b mov dword ptr [edi + 0x23c], eax */ { const u32 m_ = (u32)(edi + 0x23cu); M32(m_) = (u32)(eax); }
  /* 00457c61 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457c68 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457c6c jb 0x457c7a */ if (CF_) goto L_00457c7a;
  /* 00457c6e mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 00457c71 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457c72 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457c77u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457c72u); RETCHK(0x457c77u, 0x457c72u); LOADALL;
  /* 00457c77 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457c7a:;
  /* 00457c7a push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00457c7c push 0x648524 */ { u32 v_ = 0x648524u; esp -= 4; M32(esp) = v_; }
  /* 00457c81 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457c84 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00457c87 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 00457c8a mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457c8d call 0x404420 */ esp -= 4; M32(esp) = 0x457c92u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x457c8du); RETCHK(0x457c92u, 0x457c8du); LOADALL;
  /* 00457c92 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457c95 mov dword ptr [ebp - 4], 0x1a */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1au); }
  /* 00457c9c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457c9d mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457ca3 call 0x5075d0 */ esp -= 4; M32(esp) = 0x457ca8u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457ca3u); RETCHK(0x457ca8u, 0x457ca3u); LOADALL;
  /* 00457ca8 mov dword ptr [edi + 0x240], eax */ { const u32 m_ = (u32)(edi + 0x240u); M32(m_) = (u32)(eax); }
  /* 00457cae mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457cb5 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457cb9 jb 0x457cc7 */ if (CF_) goto L_00457cc7;
  /* 00457cbb mov edx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); edx = (u32)(M32(m_)); }
  /* 00457cbe push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00457cbf call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457cc4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457cbfu); RETCHK(0x457cc4u, 0x457cbfu); LOADALL;
  /* 00457cc4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457cc7:;
  /* 00457cc7 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00457cc9 push 0x648518 */ { u32 v_ = 0x648518u; esp -= 4; M32(esp) = v_; }
  /* 00457cce lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457cd1 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00457cd4 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 00457cd7 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457cda call 0x404420 */ esp -= 4; M32(esp) = 0x457cdfu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x457cdau); RETCHK(0x457cdfu, 0x457cdau); LOADALL;
  /* 00457cdf lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457ce2 mov dword ptr [ebp - 4], 0x1b */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1bu); }
  /* 00457ce9 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457cef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457cf0 call 0x5075d0 */ esp -= 4; M32(esp) = 0x457cf5u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457cf0u); RETCHK(0x457cf5u, 0x457cf0u); LOADALL;
  /* 00457cf5 mov dword ptr [edi + 0x244], eax */ { const u32 m_ = (u32)(edi + 0x244u); M32(m_) = (u32)(eax); }
  /* 00457cfb mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457d02 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457d06 jb 0x457d14 */ if (CF_) goto L_00457d14;
  /* 00457d08 mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 00457d0b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457d0c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457d11u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457d0cu); RETCHK(0x457d11u, 0x457d0cu); LOADALL;
  /* 00457d11 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457d14:;
  /* 00457d14 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00457d16 push 0x64850c */ { u32 v_ = 0x64850cu; esp -= 4; M32(esp) = v_; }
  /* 00457d1b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457d1e mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00457d21 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 00457d24 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457d27 call 0x404420 */ esp -= 4; M32(esp) = 0x457d2cu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x457d27u); RETCHK(0x457d2cu, 0x457d27u); LOADALL;
  /* 00457d2c lea edx, [ebp - 0x4c] */ edx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457d2f mov dword ptr [ebp - 4], 0x1c */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1cu); }
  /* 00457d36 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457d3c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00457d3d call 0x5075d0 */ esp -= 4; M32(esp) = 0x457d42u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457d3du); RETCHK(0x457d42u, 0x457d3du); LOADALL;
  /* 00457d42 mov dword ptr [edi + 0x248], eax */ { const u32 m_ = (u32)(edi + 0x248u); M32(m_) = (u32)(eax); }
  /* 00457d48 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457d4f cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457d53 jb 0x457d61 */ if (CF_) goto L_00457d61;
  /* 00457d55 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 00457d58 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457d59 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457d5eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457d59u); RETCHK(0x457d5eu, 0x457d59u); LOADALL;
  /* 00457d5e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457d61:;
  /* 00457d61 cmp dword ptr [edi + 0x244], ebx */ { const u32 m_ = (u32)(edi + 0x244u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457d67 je 0x457dc2 */ if (ZF_) goto L_00457dc2;
  /* 00457d69 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00457d6b push 0x648500 */ { u32 v_ = 0x648500u; esp -= 4; M32(esp) = v_; }
  /* 00457d70 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457d73 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 00457d76 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 00457d79 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457d7c call 0x404420 */ esp -= 4; M32(esp) = 0x457d81u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x457d7cu); RETCHK(0x457d81u, 0x457d7cu); LOADALL;
  /* 00457d81 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457d84 mov dword ptr [ebp - 4], 0x1d */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1du); }
  /* 00457d8b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457d8c mov ecx, dword ptr [edi + 0x244] */ { const u32 m_ = (u32)(edi + 0x244u); ecx = (u32)(M32(m_)); }
  /* 00457d92 call 0x5075d0 */ esp -= 4; M32(esp) = 0x457d97u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457d92u); RETCHK(0x457d97u, 0x457d92u); LOADALL;
  /* 00457d97 mov dword ptr [edi + 0x24c], eax */ { const u32 m_ = (u32)(edi + 0x24cu); M32(m_) = (u32)(eax); }
  /* 00457d9d mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457da4 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457da8 jb 0x457db6 */ if (CF_) goto L_00457db6;
  /* 00457daa mov edx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); edx = (u32)(M32(m_)); }
  /* 00457dad push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00457dae call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457db3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457daeu); RETCHK(0x457db3u, 0x457daeu); LOADALL;
  /* 00457db3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457db6:;
  /* 00457db6 mov ecx, dword ptr [edi + 0x244] */ { const u32 m_ = (u32)(edi + 0x244u); ecx = (u32)(M32(m_)); }
  /* 00457dbc mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00457dbe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00457dbf call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x457dc2u; SAVEALL; call_ind(c, t_); RETCHK(0x457dc2u, 0x457dbfu); LOADALL; }
L_00457dc2:;
  /* 00457dc2 cmp dword ptr [edi + 0x248], ebx */ { const u32 m_ = (u32)(edi + 0x248u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457dc8 je 0x457e19 */ if (ZF_) goto L_00457e19;
  /* 00457dca push 0x6484f4 */ { u32 v_ = 0x6484f4u; esp -= 4; M32(esp) = v_; }
  /* 00457dcf lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457dd2 call 0x403060 */ esp -= 4; M32(esp) = 0x457dd7u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x457dd2u); RETCHK(0x457dd7u, 0x457dd2u); LOADALL;
  /* 00457dd7 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457dda mov dword ptr [ebp - 4], 0x1e */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1eu); }
  /* 00457de1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457de2 mov ecx, dword ptr [edi + 0x248] */ { const u32 m_ = (u32)(edi + 0x248u); ecx = (u32)(M32(m_)); }
  /* 00457de8 call 0x5075d0 */ esp -= 4; M32(esp) = 0x457dedu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457de8u); RETCHK(0x457dedu, 0x457de8u); LOADALL;
  /* 00457ded or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00457df0 mov dword ptr [edi + 0x250], eax */ { const u32 m_ = (u32)(edi + 0x250u); M32(m_) = (u32)(eax); }
  /* 00457df6 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00457df9 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457dfd jb 0x457e0b */ if (CF_) goto L_00457e0b;
  /* 00457dff mov edx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); edx = (u32)(M32(m_)); }
  /* 00457e02 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00457e03 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457e08u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457e03u); RETCHK(0x457e08u, 0x457e03u); LOADALL;
  /* 00457e08 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457e0b:;
  /* 00457e0b mov ecx, dword ptr [edi + 0x248] */ { const u32 m_ = (u32)(edi + 0x248u); ecx = (u32)(M32(m_)); }
  /* 00457e11 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00457e13 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00457e14 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x457e17u; SAVEALL; call_ind(c, t_); RETCHK(0x457e17u, 0x457e14u); LOADALL; }
  /* 00457e17 jmp 0x457e1c */ goto L_00457e1c;
L_00457e19:;
  /* 00457e19 or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_00457e1c:;
  /* 00457e1c push 0x6484e8 */ { u32 v_ = 0x6484e8u; esp -= 4; M32(esp) = v_; }
  /* 00457e21 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457e24 call 0x403060 */ esp -= 4; M32(esp) = 0x457e29u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x457e24u); RETCHK(0x457e29u, 0x457e24u); LOADALL;
  /* 00457e29 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457e2c mov dword ptr [ebp - 4], 0x1f */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1fu); }
  /* 00457e33 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457e34 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457e3a call 0x5075d0 */ esp -= 4; M32(esp) = 0x457e3fu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457e3au); RETCHK(0x457e3fu, 0x457e3au); LOADALL;
  /* 00457e3f mov dword ptr [edi + 0x254], eax */ { const u32 m_ = (u32)(edi + 0x254u); M32(m_) = (u32)(eax); }
  /* 00457e45 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00457e48 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457e4c jb 0x457e5a */ if (CF_) goto L_00457e5a;
  /* 00457e4e mov edx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); edx = (u32)(M32(m_)); }
  /* 00457e51 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00457e52 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457e57u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457e52u); RETCHK(0x457e57u, 0x457e52u); LOADALL;
  /* 00457e57 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457e5a:;
  /* 00457e5a cmp dword ptr [edi + 0x254], ebx */ { const u32 m_ = (u32)(edi + 0x254u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457e60 je 0x457eb8 */ if (ZF_) goto L_00457eb8;
  /* 00457e62 push 0xbcd */ { u32 v_ = 0xbcdu; esp -= 4; M32(esp) = v_; }
  /* 00457e67 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 00457e6c call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x457e72u; SAVEALL; call_ind(c, t_); RETCHK(0x457e72u, 0x457e6cu); LOADALL; }
  /* 00457e72 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457e73 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457e76 call 0x403060 */ esp -= 4; M32(esp) = 0x457e7bu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x457e76u); RETCHK(0x457e7bu, 0x457e76u); LOADALL;
  /* 00457e7b mov dword ptr [ebp - 4], 0x20 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x20u); }
  /* 00457e82 mov esi, dword ptr [edi + 0x254] */ { const u32 m_ = (u32)(edi + 0x254u); esi = (u32)(M32(m_)); }
  /* 00457e88 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457e8b call 0x5224b0 */ esp -= 4; M32(esp) = 0x457e90u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x457e8bu); RETCHK(0x457e90u, 0x457e8bu); LOADALL;
  /* 00457e90 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457e97 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457e9b jb 0x457ea9 */ if (CF_) goto L_00457ea9;
  /* 00457e9d mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 00457ea0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457ea1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457ea6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457ea1u); RETCHK(0x457ea6u, 0x457ea1u); LOADALL;
  /* 00457ea6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457ea9:;
  /* 00457ea9 mov ecx, dword ptr [edi + 0x254] */ { const u32 m_ = (u32)(edi + 0x254u); ecx = (u32)(M32(m_)); }
  /* 00457eaf mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00457eb1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00457eb2 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x457eb5u; SAVEALL; call_ind(c, t_); RETCHK(0x457eb5u, 0x457eb2u); LOADALL; }
  /* 00457eb5 or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_00457eb8:;
  /* 00457eb8 push 0x6484d8 */ { u32 v_ = 0x6484d8u; esp -= 4; M32(esp) = v_; }
  /* 00457ebd lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457ec0 call 0x403060 */ esp -= 4; M32(esp) = 0x457ec5u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x457ec0u); RETCHK(0x457ec5u, 0x457ec0u); LOADALL;
  /* 00457ec5 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457ec8 mov dword ptr [ebp - 4], 0x21 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x21u); }
  /* 00457ecf mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457ed5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457ed6 call 0x5075d0 */ esp -= 4; M32(esp) = 0x457edbu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457ed6u); RETCHK(0x457edbu, 0x457ed6u); LOADALL;
  /* 00457edb mov dword ptr [edi + 0x258], eax */ { const u32 m_ = (u32)(edi + 0x258u); M32(m_) = (u32)(eax); }
  /* 00457ee1 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00457ee4 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457ee8 jb 0x457ef6 */ if (CF_) goto L_00457ef6;
  /* 00457eea mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 00457eed push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457eee call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457ef3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457eeeu); RETCHK(0x457ef3u, 0x457eeeu); LOADALL;
  /* 00457ef3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457ef6:;
  /* 00457ef6 push 0x6484cc */ { u32 v_ = 0x6484ccu; esp -= 4; M32(esp) = v_; }
  /* 00457efb lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457efe call 0x403060 */ esp -= 4; M32(esp) = 0x457f03u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x457efeu); RETCHK(0x457f03u, 0x457efeu); LOADALL;
  /* 00457f03 lea edx, [ebp - 0x4c] */ edx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00457f06 mov dword ptr [ebp - 4], 0x22 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x22u); }
  /* 00457f0d mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457f13 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00457f14 call 0x5075d0 */ esp -= 4; M32(esp) = 0x457f19u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x457f14u); RETCHK(0x457f19u, 0x457f14u); LOADALL;
  /* 00457f19 mov dword ptr [edi + 0x25c], eax */ { const u32 m_ = (u32)(edi + 0x25cu); M32(m_) = (u32)(eax); }
  /* 00457f1f mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00457f22 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457f26 jb 0x457f34 */ if (CF_) goto L_00457f34;
  /* 00457f28 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 00457f2b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457f2c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457f31u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457f2cu); RETCHK(0x457f31u, 0x457f2cu); LOADALL;
  /* 00457f31 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457f34:;
  /* 00457f34 push 0xc3 */ { u32 v_ = 0xc3u; esp -= 4; M32(esp) = v_; }
  /* 00457f39 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 00457f3e call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x457f44u; SAVEALL; call_ind(c, t_); RETCHK(0x457f44u, 0x457f3eu); LOADALL; }
  /* 00457f44 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457f45 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00457f48 call 0x403060 */ esp -= 4; M32(esp) = 0x457f4du; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x457f48u); RETCHK(0x457f4du, 0x457f48u); LOADALL;
  /* 00457f4d mov dword ptr [ebp - 4], 0x23 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x23u); }
  /* 00457f54 mov esi, dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); esi = (u32)(M32(m_)); }
  /* 00457f5a lea eax, [ebp - 0x68] */ eax = (u32)((u32)(ebp + 0xffffff98u));
  /* 00457f5d call 0x5224b0 */ esp -= 4; M32(esp) = 0x457f62u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x457f5du); RETCHK(0x457f62u, 0x457f5du); LOADALL;
  /* 00457f62 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00457f69 cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457f6d jb 0x457f7b */ if (CF_) goto L_00457f7b;
  /* 00457f6f mov ecx, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ecx = (u32)(M32(m_)); }
  /* 00457f72 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457f73 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x457f78u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x457f73u); RETCHK(0x457f78u, 0x457f73u); LOADALL;
  /* 00457f78 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00457f7b:;
  /* 00457f7b mov edx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); edx = (u32)(M32(m_)); }
  /* 00457f81 lea eax, [edi + 0x1d8] */ eax = (u32)((u32)(edi + 0x1d8u));
  /* 00457f87 mov dword ptr [ebp - 0x50], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0xfu); }
  /* 00457f8e mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 00457f91 mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00457f94 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 00457f96 call 0x463370 */ esp -= 4; M32(esp) = 0x457f9bu; SAVEALL; F_00463370(c); ABI_CHECK(0x463370u, 0x457f96u); RETCHK(0x457f9bu, 0x457f96u); LOADALL;
  /* 00457f9b mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00457fa1 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00457fa3 je 0x457fac */ if (ZF_) goto L_00457fac;
  /* 00457fa5 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00457fa7 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00457fa9 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x457facu; SAVEALL; call_ind(c, t_); RETCHK(0x457facu, 0x457fa9u); LOADALL; }
L_00457fac:;
  /* 00457fac mov ecx, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 00457fb2 mov al, byte ptr [edi + 0x214] */ { const u32 m_ = (u32)(edi + 0x214u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00457fb8 mov dword ptr [0x7a6984], ecx */ { const u32 m_ = (u32)(0x7a6984u); M32(m_) = (u32)(ecx); }
  /* 00457fbe call 0x511a20 */ esp -= 4; M32(esp) = 0x457fc3u; SAVEALL; F_00511a20(c); ABI_CHECK(0x511a20u, 0x457fbeu); RETCHK(0x457fc3u, 0x457fbeu); LOADALL;
  /* 00457fc3 mov ecx, dword ptr [edi + 0x21c] */ { const u32 m_ = (u32)(edi + 0x21cu); ecx = (u32)(M32(m_)); }
  /* 00457fc9 mov edx, dword ptr [edi + 0x218] */ { const u32 m_ = (u32)(edi + 0x218u); edx = (u32)(M32(m_)); }
  /* 00457fcf mov eax, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 00457fd5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00457fd6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00457fd7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00457fd8 call 0x511a30 */ esp -= 4; M32(esp) = 0x457fddu; SAVEALL; F_00511a30(c); ABI_CHECK(0x511a30u, 0x457fd8u); RETCHK(0x457fddu, 0x457fd8u); LOADALL;
  /* 00457fdd mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00457fe0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00457fe1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00457fe2 mov byte ptr [0x7a697c], 1 */ { const u32 m_ = (u32)(0x7a697cu); M8(m_) = (u8)(0x1u); }
  /* 00457fe9 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00457feb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00457fec mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00457ff3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00457ff5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00457ff6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00458000(CPU *c) {
  NATIVE_HOOK(0x458000u) REGS; LOADALL;
L_00458000:;
  /* 00458000 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00458001 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00458003 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00458005 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 0045800a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00458010 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458011 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00458018 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045801b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045801c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045801d mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0045801f mov ecx, dword ptr [esi + 0x1c8] */ { const u32 m_ = (u32)(esi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00458025 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00458027 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458029 je 0x4580b8 */ if (ZF_) goto L_004580b8;
  /* 0045802f mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00458031 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00458032 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00458033 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458036u; SAVEALL; call_ind(c, t_); RETCHK(0x458036u, 0x458033u); LOADALL; }
  /* 00458036 mov eax, dword ptr [esi + 0x1c8] */ { const u32 m_ = (u32)(esi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 0045803c xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0045803e call 0x5079e0 */ esp -= 4; M32(esp) = 0x458043u; SAVEALL; F_005079e0(c); ABI_CHECK(0x5079e0u, 0x45803eu); RETCHK(0x458043u, 0x45803eu); LOADALL;
  /* 00458043 mov edi, dword ptr [esi + 0x210] */ { const u32 m_ = (u32)(esi + 0x210u); edi = (u32)(M32(m_)); }
  /* 00458049 mov eax, edi */ { eax = (u32)(edi); }
  /* 0045804b mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 00458052 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00458055 mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00458058 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0045805b jmp 0x458060 */ goto L_00458060;
L_00458060:;
  /* 00458060 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00458062 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00458063 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00458065 jne 0x458060 */ if (!ZF_) goto L_00458060;
  /* 00458067 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00458069 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045806a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045806b lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0045806e call 0x404420 */ esp -= 4; M32(esp) = 0x458073u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45806eu); RETCHK(0x458073u, 0x45806eu); LOADALL;
  /* 00458073 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00458076 mov eax, dword ptr [esi + 0x1c8] */ { const u32 m_ = (u32)(esi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 0045807c call 0x507890 */ esp -= 4; M32(esp) = 0x458081u; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x45807cu); RETCHK(0x458081u, 0x45807cu); LOADALL;
  /* 00458081 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00458083 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00458086 call 0x5079f0 */ esp -= 4; M32(esp) = 0x45808bu; SAVEALL; F_005079f0(c); ABI_CHECK(0x5079f0u, 0x458086u); RETCHK(0x45808bu, 0x458086u); LOADALL;
  /* 0045808b mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00458092 cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458096 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00458097 jb 0x4580a5 */ if (CF_) goto L_004580a5;
  /* 00458099 mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 0045809c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045809d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4580a2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45809du); RETCHK(0x4580a2u, 0x45809du); LOADALL;
  /* 004580a2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004580a5:;
  /* 004580a5 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 004580ac mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 004580af mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004580b2 mov dword ptr [esi + 0x1c8], ebx */ { const u32 m_ = (u32)(esi + 0x1c8u); M32(m_) = (u32)(ebx); }
L_004580b8:;
  /* 004580b8 mov ecx, dword ptr [esi + 0x1c4] */ { const u32 m_ = (u32)(esi + 0x1c4u); ecx = (u32)(M32(m_)); }
  /* 004580be cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004580c0 je 0x4580ce */ if (ZF_) goto L_004580ce;
  /* 004580c2 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004580c4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004580c6 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4580c8u; SAVEALL; call_ind(c, t_); RETCHK(0x4580c8u, 0x4580c6u); LOADALL; }
  /* 004580c8 mov dword ptr [esi + 0x1c4], ebx */ { const u32 m_ = (u32)(esi + 0x1c4u); M32(m_) = (u32)(ebx); }
L_004580ce:;
  /* 004580ce call 0x4633b0 */ esp -= 4; M32(esp) = 0x4580d3u; SAVEALL; F_004633b0(c); ABI_CHECK(0x4633b0u, 0x4580ceu); RETCHK(0x4580d3u, 0x4580ceu); LOADALL;
  /* 004580d3 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004580d6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004580d7 mov byte ptr [0x7a697c], bl */ { const u32 m_ = (u32)(0x7a697cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004580dd mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004580df pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004580e0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004580e7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004580e9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004580ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004580f0(CPU *c) {
  NATIVE_HOOK(0x4580f0u) REGS; LOADALL;
L_004580f0:;
  /* 004580f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004580f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004580f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004580f5 push 0x61f5a8 */ { u32 v_ = 0x61f5a8u; esp -= 4; M32(esp) = v_; }
  /* 004580fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00458100 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458101 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00458108 sub esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045810b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00458110 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00458111 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00458112 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00458115 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00458118 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0045811b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0045811d cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045811f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00458120 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00458122 je 0x458189 */ if (ZF_) goto L_00458189;
  /* 00458124 call 0x5075c0 */ esp -= 4; M32(esp) = 0x458129u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x458124u); RETCHK(0x458129u, 0x458124u); LOADALL;
  /* 00458129 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045812b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045812c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045812d lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00458130 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 00458137 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0045813a mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045813d call 0x404140 */ esp -= 4; M32(esp) = 0x458142u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x45813du); RETCHK(0x458142u, 0x45813du); LOADALL;
  /* 00458142 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00458145 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00458147 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00458148 je 0x458291 */ if (ZF_) goto L_00458291;
  /* 0045814e sub eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00458151 je 0x4581a6 */ if (ZF_) goto L_004581a6;
  /* 00458153 sub eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00458156 jne 0x458177 */ if (!ZF_) goto L_00458177;
  /* 00458158 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0045815b push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0045815d push 0x648610 */ { u32 v_ = 0x648610u; esp -= 4; M32(esp) = v_; }
  /* 00458162 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458163 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00458164 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00458167 call 0x405de0 */ esp -= 4; M32(esp) = 0x45816cu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x458167u); RETCHK(0x45816cu, 0x458167u); LOADALL;
  /* 0045816c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045816e jne 0x458177 */ if (!ZF_) goto L_00458177;
  /* 00458170 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00458172 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00458174 call dword ptr [edx + 0x58] */ { const u32 m_ = (u32)(edx + 0x58u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458177u; SAVEALL; call_ind(c, t_); RETCHK(0x458177u, 0x458174u); LOADALL; }
L_00458177:;
  /* 00458177 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045817b jb 0x458189 */ if (CF_) goto L_00458189;
  /* 0045817d mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 00458180 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00458181 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x458186u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x458181u); RETCHK(0x458186u, 0x458181u); LOADALL;
  /* 00458186 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00458189:;
  /* 00458189 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_0045818b:;
  /* 0045818b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045818e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045818f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00458190 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00458197 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0045819a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045819b call 0x61af31 */ esp -= 4; M32(esp) = 0x4581a0u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x45819bu); RETCHK(0x4581a0u, 0x45819bu); LOADALL;
  /* 004581a0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004581a2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004581a3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004581a6:;
  /* 004581a6 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 004581a9 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 004581ab push 0x648610 */ { u32 v_ = 0x648610u; esp -= 4; M32(esp) = v_; }
  /* 004581b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004581b1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004581b2 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004581b5 call 0x405de0 */ esp -= 4; M32(esp) = 0x4581bau; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x4581b5u); RETCHK(0x4581bau, 0x4581b5u); LOADALL;
  /* 004581ba test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004581bc jne 0x4581ce */ if (!ZF_) goto L_004581ce;
  /* 004581be mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004581c0 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004581c2 call dword ptr [edx + 0x50] */ { const u32 m_ = (u32)(edx + 0x50u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4581c5u; SAVEALL; call_ind(c, t_); RETCHK(0x4581c5u, 0x4581c2u); LOADALL; }
  /* 004581c5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004581c7 call 0x4594f0 */ esp -= 4; M32(esp) = 0x4581ccu; SAVEALL; F_004594f0(c); ABI_CHECK(0x4594f0u, 0x4581c7u); RETCHK(0x4581ccu, 0x4581c7u); LOADALL;
  /* 004581cc jmp 0x458177 */ goto L_00458177;
L_004581ce:;
  /* 004581ce lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004581d1 mov esi, 0x648500 */ { esi = (u32)(0x648500u); }
  /* 004581d6 call 0x405bd0 */ esp -= 4; M32(esp) = 0x4581dbu; SAVEALL; F_00405bd0(c); ABI_CHECK(0x405bd0u, 0x4581d6u); RETCHK(0x4581dbu, 0x4581d6u); LOADALL;
  /* 004581db test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004581dd je 0x45821d */ if (ZF_) goto L_0045821d;
  /* 004581df mov eax, dword ptr [edi + 0x24c] */ { const u32 m_ = (u32)(edi + 0x24cu); eax = (u32)(M32(m_)); }
  /* 004581e5 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004581e7 je 0x458177 */ if (ZF_) goto L_00458177;
  /* 004581e9 mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 004581f0 mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 004581f3 mov byte ptr [ebp - 0x44], bl */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004581f6 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004581f8 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 004581fc mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004581fe call dword ptr [eax + 0x104] */ { const u32 m_ = (u32)(eax + 0x104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458204u; SAVEALL; call_ind(c, t_); RETCHK(0x458204u, 0x4581feu); LOADALL; }
  /* 00458204 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00458207 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00458208 mov ecx, dword ptr [edi + 0x24c] */ { const u32 m_ = (u32)(edi + 0x24cu); ecx = (u32)(M32(m_)); }
  /* 0045820e mov edx, eax */ { edx = (u32)(eax); }
  /* 00458210 call 0x514d20 */ esp -= 4; M32(esp) = 0x458215u; SAVEALL; F_00514d20(c); ABI_CHECK(0x514d20u, 0x458210u); RETCHK(0x458215u, 0x458210u); LOADALL;
  /* 00458215 mov esi, dword ptr [edi + 0x230] */ { const u32 m_ = (u32)(edi + 0x230u); esi = (u32)(M32(m_)); }
  /* 0045821b jmp 0x458272 */ goto L_00458272;
L_0045821d:;
  /* 0045821d lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00458220 mov esi, 0x6484f4 */ { esi = (u32)(0x6484f4u); }
  /* 00458225 call 0x405bd0 */ esp -= 4; M32(esp) = 0x45822au; SAVEALL; F_00405bd0(c); ABI_CHECK(0x405bd0u, 0x458225u); RETCHK(0x45822au, 0x458225u); LOADALL;
  /* 0045822a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0045822c je 0x458177 */ if (ZF_) goto L_00458177;
  /* 00458232 mov eax, dword ptr [edi + 0x250] */ { const u32 m_ = (u32)(edi + 0x250u); eax = (u32)(M32(m_)); }
  /* 00458238 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045823a je 0x458177 */ if (ZF_) goto L_00458177;
  /* 00458240 mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 00458247 mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 0045824a mov byte ptr [ebp - 0x44], bl */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045824d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0045824f mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00458253 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00458255 call dword ptr [edx + 0x104] */ { const u32 m_ = (u32)(edx + 0x104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45825bu; SAVEALL; call_ind(c, t_); RETCHK(0x45825bu, 0x458255u); LOADALL; }
  /* 0045825b lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0045825e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045825f mov ecx, dword ptr [edi + 0x250] */ { const u32 m_ = (u32)(edi + 0x250u); ecx = (u32)(M32(m_)); }
  /* 00458265 mov edx, eax */ { edx = (u32)(eax); }
  /* 00458267 call 0x514d20 */ esp -= 4; M32(esp) = 0x45826cu; SAVEALL; F_00514d20(c); ABI_CHECK(0x514d20u, 0x458267u); RETCHK(0x45826cu, 0x458267u); LOADALL;
  /* 0045826c mov esi, dword ptr [edi + 0x234] */ { const u32 m_ = (u32)(edi + 0x234u); esi = (u32)(M32(m_)); }
L_00458272:;
  /* 00458272 lea eax, [ebp - 0x48] */ eax = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00458275 call 0x5224b0 */ esp -= 4; M32(esp) = 0x45827au; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x458275u); RETCHK(0x45827au, 0x458275u); LOADALL;
  /* 0045827a lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0045827d call 0x43ee60 */ esp -= 4; M32(esp) = 0x458282u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x45827du); RETCHK(0x458282u, 0x45827du); LOADALL;
L_00458282:;
  /* 00458282 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00458285 call 0x43ee60 */ esp -= 4; M32(esp) = 0x45828au; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x458285u); RETCHK(0x45828au, 0x458285u); LOADALL;
  /* 0045828a mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0045828c jmp 0x45818b */ goto L_0045818b;
L_00458291:;
  /* 00458291 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 00458294 push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 00458296 push 0x6485d4 */ { u32 v_ = 0x6485d4u; esp -= 4; M32(esp) = v_; }
  /* 0045829b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045829c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045829d lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004582a0 call 0x405de0 */ esp -= 4; M32(esp) = 0x4582a5u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x4582a0u); RETCHK(0x4582a5u, 0x4582a0u); LOADALL;
  /* 004582a5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004582a7 jne 0x4582bd */ if (!ZF_) goto L_004582bd;
  /* 004582a9 mov eax, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 004582af cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004582b1 je 0x4582bd */ if (ZF_) goto L_004582bd;
  /* 004582b3 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004582b5 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004582b7 call dword ptr [eax + 0x130] */ { const u32 m_ = (u32)(eax + 0x130u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4582bdu; SAVEALL; call_ind(c, t_); RETCHK(0x4582bdu, 0x4582b7u); LOADALL; }
L_004582bd:;
  /* 004582bd mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 004582c0 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 004582c2 push 0x6485c0 */ { u32 v_ = 0x6485c0u; esp -= 4; M32(esp) = v_; }
  /* 004582c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004582c8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004582c9 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004582cc call 0x405de0 */ esp -= 4; M32(esp) = 0x4582d1u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x4582ccu); RETCHK(0x4582d1u, 0x4582ccu); LOADALL;
  /* 004582d1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004582d3 jne 0x4582e9 */ if (!ZF_) goto L_004582e9;
  /* 004582d5 mov eax, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 004582db cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004582dd je 0x4582e9 */ if (ZF_) goto L_004582e9;
  /* 004582df mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004582e1 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004582e3 call dword ptr [edx + 0x12c] */ { const u32 m_ = (u32)(edx + 0x12cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4582e9u; SAVEALL; call_ind(c, t_); RETCHK(0x4582e9u, 0x4582e3u); LOADALL; }
L_004582e9:;
  /* 004582e9 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 004582ec push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 004582ee push 0x6484bc */ { u32 v_ = 0x6484bcu; esp -= 4; M32(esp) = v_; }
  /* 004582f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004582f4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004582f5 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004582f8 call 0x405de0 */ esp -= 4; M32(esp) = 0x4582fdu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x4582f8u); RETCHK(0x4582fdu, 0x4582f8u); LOADALL;
  /* 004582fd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004582ff jne 0x45831d */ if (!ZF_) goto L_0045831d;
  /* 00458301 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00458303 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00458304 push 0x3114 */ { u32 v_ = 0x3114u; esp -= 4; M32(esp) = v_; }
  /* 00458309 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045830b call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45830eu; SAVEALL; call_ind(c, t_); RETCHK(0x45830eu, 0x45830bu); LOADALL; }
  /* 0045830e lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00458311 call 0x43ee60 */ esp -= 4; M32(esp) = 0x458316u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x458311u); RETCHK(0x458316u, 0x458311u); LOADALL;
  /* 00458316 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00458318 jmp 0x45818b */ goto L_0045818b;
L_0045831d:;
  /* 0045831d lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00458320 mov esi, 0x648544 */ { esi = (u32)(0x648544u); }
  /* 00458325 call 0x405bd0 */ esp -= 4; M32(esp) = 0x45832au; SAVEALL; F_00405bd0(c); ABI_CHECK(0x405bd0u, 0x458325u); RETCHK(0x45832au, 0x458325u); LOADALL;
  /* 0045832a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0045832c je 0x458382 */ if (ZF_) goto L_00458382;
  /* 0045832e mov eax, dword ptr [edi + 0x244] */ { const u32 m_ = (u32)(edi + 0x244u); eax = (u32)(M32(m_)); }
  /* 00458334 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458336 je 0x458282 */ if (ZF_) goto L_00458282;
  /* 0045833c mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0045833e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00458340 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00458342 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458345u; SAVEALL; call_ind(c, t_); RETCHK(0x458345u, 0x458342u); LOADALL; }
  /* 00458345 mov ecx, dword ptr [edi + 0x244] */ { const u32 m_ = (u32)(edi + 0x244u); ecx = (u32)(M32(m_)); }
  /* 0045834b neg al */ { u32 a_ = (eax & 0xffu); u32 r_ = (0u - a_) & 0xffu; eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 0045834d sbb al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0045834f inc al */ { u32 a_ = (eax & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 00458351 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458352 call dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458355u; SAVEALL; call_ind(c, t_); RETCHK(0x458355u, 0x458352u); LOADALL; }
  /* 00458355 mov ecx, dword ptr [edi + 0x244] */ { const u32 m_ = (u32)(edi + 0x244u); ecx = (u32)(M32(m_)); }
  /* 0045835b mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045835d call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458360u; SAVEALL; call_ind(c, t_); RETCHK(0x458360u, 0x45835du); LOADALL; }
  /* 00458360 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00458362 je 0x458282 */ if (ZF_) goto L_00458282;
  /* 00458368 mov ecx, dword ptr [edi + 0x24c] */ { const u32 m_ = (u32)(edi + 0x24cu); ecx = (u32)(M32(m_)); }
  /* 0045836e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00458370 call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458373u; SAVEALL; call_ind(c, t_); RETCHK(0x458373u, 0x458370u); LOADALL; }
  /* 00458373 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00458376 call 0x43ee60 */ esp -= 4; M32(esp) = 0x45837bu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x458376u); RETCHK(0x45837bu, 0x458376u); LOADALL;
  /* 0045837b mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0045837d jmp 0x45818b */ goto L_0045818b;
L_00458382:;
  /* 00458382 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00458385 mov esi, 0x648530 */ { esi = (u32)(0x648530u); }
  /* 0045838a call 0x405bd0 */ esp -= 4; M32(esp) = 0x45838fu; SAVEALL; F_00405bd0(c); ABI_CHECK(0x405bd0u, 0x45838au); RETCHK(0x45838fu, 0x45838au); LOADALL;
  /* 0045838f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00458391 je 0x4583e7 */ if (ZF_) goto L_004583e7;
  /* 00458393 mov eax, dword ptr [edi + 0x248] */ { const u32 m_ = (u32)(edi + 0x248u); eax = (u32)(M32(m_)); }
  /* 00458399 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045839b je 0x458282 */ if (ZF_) goto L_00458282;
  /* 004583a1 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 004583a3 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004583a5 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004583a7 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4583aau; SAVEALL; call_ind(c, t_); RETCHK(0x4583aau, 0x4583a7u); LOADALL; }
  /* 004583aa mov ecx, dword ptr [edi + 0x248] */ { const u32 m_ = (u32)(edi + 0x248u); ecx = (u32)(M32(m_)); }
  /* 004583b0 neg al */ { u32 a_ = (eax & 0xffu); u32 r_ = (0u - a_) & 0xffu; eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 004583b2 sbb al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004583b4 inc al */ { u32 a_ = (eax & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 004583b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004583b7 call dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4583bau; SAVEALL; call_ind(c, t_); RETCHK(0x4583bau, 0x4583b7u); LOADALL; }
  /* 004583ba mov ecx, dword ptr [edi + 0x248] */ { const u32 m_ = (u32)(edi + 0x248u); ecx = (u32)(M32(m_)); }
  /* 004583c0 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004583c2 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4583c5u; SAVEALL; call_ind(c, t_); RETCHK(0x4583c5u, 0x4583c2u); LOADALL; }
  /* 004583c5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004583c7 je 0x458282 */ if (ZF_) goto L_00458282;
  /* 004583cd mov ecx, dword ptr [edi + 0x250] */ { const u32 m_ = (u32)(edi + 0x250u); ecx = (u32)(M32(m_)); }
  /* 004583d3 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004583d5 call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4583d8u; SAVEALL; call_ind(c, t_); RETCHK(0x4583d8u, 0x4583d5u); LOADALL; }
  /* 004583d8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004583db call 0x43ee60 */ esp -= 4; M32(esp) = 0x4583e0u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4583dbu); RETCHK(0x4583e0u, 0x4583dbu); LOADALL;
  /* 004583e0 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004583e2 jmp 0x45818b */ goto L_0045818b;
L_004583e7:;
  /* 004583e7 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004583ea mov esi, 0x648500 */ { esi = (u32)(0x648500u); }
  /* 004583ef call 0x405bd0 */ esp -= 4; M32(esp) = 0x4583f4u; SAVEALL; F_00405bd0(c); ABI_CHECK(0x405bd0u, 0x4583efu); RETCHK(0x4583f4u, 0x4583efu); LOADALL;
  /* 004583f4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004583f6 je 0x458420 */ if (ZF_) goto L_00458420;
  /* 004583f8 mov eax, dword ptr [edi + 0x244] */ { const u32 m_ = (u32)(edi + 0x244u); eax = (u32)(M32(m_)); }
  /* 004583fe cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458400 je 0x45840a */ if (ZF_) goto L_0045840a;
  /* 00458402 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00458404 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00458406 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00458407 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45840au; SAVEALL; call_ind(c, t_); RETCHK(0x45840au, 0x458407u); LOADALL; }
L_0045840a:;
  /* 0045840a mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0045840c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045840e call dword ptr [edx + 0x5c] */ { const u32 m_ = (u32)(edx + 0x5cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458411u; SAVEALL; call_ind(c, t_); RETCHK(0x458411u, 0x45840eu); LOADALL; }
  /* 00458411 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00458414 call 0x43ee60 */ esp -= 4; M32(esp) = 0x458419u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x458414u); RETCHK(0x458419u, 0x458414u); LOADALL;
  /* 00458419 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0045841b jmp 0x45818b */ goto L_0045818b;
L_00458420:;
  /* 00458420 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00458423 mov esi, 0x6484f4 */ { esi = (u32)(0x6484f4u); }
  /* 00458428 call 0x405bd0 */ esp -= 4; M32(esp) = 0x45842du; SAVEALL; F_00405bd0(c); ABI_CHECK(0x405bd0u, 0x458428u); RETCHK(0x45842du, 0x458428u); LOADALL;
  /* 0045842d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0045842f je 0x458459 */ if (ZF_) goto L_00458459;
  /* 00458431 mov eax, dword ptr [edi + 0x248] */ { const u32 m_ = (u32)(edi + 0x248u); eax = (u32)(M32(m_)); }
  /* 00458437 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458439 je 0x458443 */ if (ZF_) goto L_00458443;
  /* 0045843b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0045843d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045843f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00458440 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458443u; SAVEALL; call_ind(c, t_); RETCHK(0x458443u, 0x458440u); LOADALL; }
L_00458443:;
  /* 00458443 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00458445 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00458447 call dword ptr [edx + 0x5c] */ { const u32 m_ = (u32)(edx + 0x5cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45844au; SAVEALL; call_ind(c, t_); RETCHK(0x45844au, 0x458447u); LOADALL; }
  /* 0045844a lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0045844d call 0x43ee60 */ esp -= 4; M32(esp) = 0x458452u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x45844du); RETCHK(0x458452u, 0x45844du); LOADALL;
  /* 00458452 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00458454 jmp 0x45818b */ goto L_0045818b;
L_00458459:;
  /* 00458459 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0045845c mov esi, 0x648524 */ { esi = (u32)(0x648524u); }
  /* 00458461 call 0x405bd0 */ esp -= 4; M32(esp) = 0x458466u; SAVEALL; F_00405bd0(c); ABI_CHECK(0x405bd0u, 0x458461u); RETCHK(0x458466u, 0x458461u); LOADALL;
  /* 00458466 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00458468 je 0x458177 */ if (ZF_) goto L_00458177;
  /* 0045846e mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00458470 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00458472 call dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458475u; SAVEALL; call_ind(c, t_); RETCHK(0x458475u, 0x458472u); LOADALL; }
  /* 00458475 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00458478 call 0x43ee60 */ esp -= 4; M32(esp) = 0x45847du; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x458478u); RETCHK(0x45847du, 0x458478u); LOADALL;
  /* 0045847d mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0045847f jmp 0x45818b */ goto L_0045818b;
}

void F_00458490(CPU *c) {
  NATIVE_HOOK(0x458490u) REGS; LOADALL;
L_00458490:;
  /* 00458490 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00458491 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00458493 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00458495 push 0x622b78 */ { u32 v_ = 0x622b78u; esp -= 4; M32(esp) = v_; }
  /* 0045849a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004584a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004584a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004584a8 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004584ab push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004584ac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004584ad mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004584b0 cmp dword ptr [edi], 0x10000001 */ { const u32 m_ = (u32)(edi); u32 a_ = M32(m_), b_ = 0x10000001u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004584b6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004584b8 je 0x4587d3 */ if (ZF_) goto L_004587d3;
  /* 004584be push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004584bf lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 004584c2 call 0x464770 */ esp -= 4; M32(esp) = 0x4584c7u; SAVEALL; F_00464770(c); ABI_CHECK(0x464770u, 0x4584c2u); RETCHK(0x4584c7u, 0x4584c2u); LOADALL;
  /* 004584c7 movsx edx, word ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 004584cb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004584cc mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004584ce mov dword ptr [ebp - 0x3c], 0x643490 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0x643490u); }
  /* 004584d5 call 0x464810 */ esp -= 4; M32(esp) = 0x4584dau; SAVEALL; F_00464810(c); ABI_CHECK(0x464810u, 0x4584d5u); RETCHK(0x4584dau, 0x4584d5u); LOADALL;
  /* 004584da mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004584e1 mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 004584e4 movsx ebx, byte ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ebx = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 004584e8 lea ecx, [eax + 9] */ ecx = (u32)((u32)(eax + 0x9u));
  /* 004584eb mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 004584ed add eax, 0xefffffc2 */ { u32 a_ = eax, b_ = 0xefffffc2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004584f2 cmp eax, 0xa3 */ { u32 a_ = eax, b_ = 0xa3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004584f7 mov dword ptr [0x696080], 0 */ { const u32 m_ = (u32)(0x696080u); M32(m_) = (u32)(0x0u); }
  /* 00458501 ja 0x4587ca */ if (!(CF_|ZF_)) goto L_004587ca;
  /* 00458507 movzx eax, byte ptr [eax + 0x458814] */ { const u32 m_ = (u32)(eax + 0x458814u); eax = (u32)(M8(m_)); }
  /* 0045850e jmp dword ptr [eax*4 + 0x4587e8] */ { const u32 m_ = (u32)(eax * 4u + 0x4587e8u); u32 t_ = M32(m_); switch (t_) { case 0x458515u: goto L_00458515; case 0x4585d7u: goto L_004585d7; case 0x45861bu: goto L_0045861b; case 0x45865fu: goto L_0045865f; case 0x4586a3u: goto L_004586a3; case 0x4586f0u: goto L_004586f0; case 0x458712u: goto L_00458712; case 0x458753u: goto L_00458753; case 0x45877fu: goto L_0045877f; case 0x4587abu: goto L_004587ab; case 0x4587cau: goto L_004587ca; default: SAVEALL; call_ind(c, t_); return; } }
L_00458515:;
  /* 00458515 mov al, byte ptr [0x7a697d] */ { const u32 m_ = (u32)(0x7a697du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0045851a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0045851c jne 0x4585c8 */ if (!ZF_) goto L_004585c8;
  /* 00458522 cmp ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458525 jne 0x458586 */ if (!ZF_) goto L_00458586;
  /* 00458527 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0045852a call 0x464770 */ esp -= 4; M32(esp) = 0x45852fu; SAVEALL; F_00464770(c); ABI_CHECK(0x464770u, 0x45852au); RETCHK(0x45852fu, 0x45852au); LOADALL;
  /* 0045852f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00458530 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00458532 call 0x464810 */ esp -= 4; M32(esp) = 0x458537u; SAVEALL; F_00464810(c); ABI_CHECK(0x464810u, 0x458532u); RETCHK(0x458537u, 0x458532u); LOADALL;
  /* 00458537 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0045853a call 0x4648c0 */ esp -= 4; M32(esp) = 0x45853fu; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x45853au); RETCHK(0x45853fu, 0x45853au); LOADALL;
  /* 0045853f lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00458542 call 0x4648c0 */ esp -= 4; M32(esp) = 0x458547u; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x458542u); RETCHK(0x458547u, 0x458542u); LOADALL;
  /* 00458547 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0045854a call 0x4648b0 */ esp -= 4; M32(esp) = 0x45854fu; SAVEALL; F_004648b0(c); ABI_CHECK(0x4648b0u, 0x45854au); RETCHK(0x45854fu, 0x45854au); LOADALL;
  /* 0045854f lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00458552 call 0x4648c0 */ esp -= 4; M32(esp) = 0x458557u; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x458552u); RETCHK(0x458557u, 0x458552u); LOADALL;
  /* 00458557 mov dword ptr [0x696080], eax */ { const u32 m_ = (u32)(0x696080u); M32(m_) = (u32)(eax); }
  /* 0045855c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045855e mov ecx, 0x40 */ { ecx = (u32)(0x40u); }
  /* 00458563 lea edi, [esi + 0xc4] */ edi = (u32)((u32)(esi + 0xc4u));
  /* 00458569 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0045856b lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0045856e call 0x4647c0 */ esp -= 4; M32(esp) = 0x458573u; SAVEALL; F_004647c0(c); ABI_CHECK(0x4647c0u, 0x45856eu); RETCHK(0x458573u, 0x45856eu); LOADALL;
L_00458573:;
  /* 00458573 mov eax, dword ptr [0x696080] */ { const u32 m_ = (u32)(0x696080u); eax = (u32)(M32(m_)); }
  /* 00458578 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0045857a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045857b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045857c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0045857e call dword ptr [edx + 0x60] */ { const u32 m_ = (u32)(edx + 0x60u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458581u; SAVEALL; call_ind(c, t_); RETCHK(0x458581u, 0x45857eu); LOADALL; }
  /* 00458581 jmp 0x4587ca */ goto L_004587ca;
L_00458586:;
  /* 00458586 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 0045858b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045858c lea edi, [esi + 0xc4] */ edi = (u32)((u32)(esi + 0xc4u));
  /* 00458592 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00458593 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x458598u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x458593u); RETCHK(0x458598u, 0x458593u); LOADALL;
  /* 00458598 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045859b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045859d mov byte ptr [edi + 0xff], 0 */ { const u32 m_ = (u32)(edi + 0xffu); M8(m_) = (u8)(0x0u); }
  /* 004585a4 jne 0x458573 */ if (!ZF_) goto L_00458573;
  /* 004585a6 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004585a8 call 0x456af0 */ esp -= 4; M32(esp) = 0x4585adu; SAVEALL; F_00456af0(c); ABI_CHECK(0x456af0u, 0x4585a8u); RETCHK(0x4585adu, 0x4585a8u); LOADALL;
  /* 004585ad test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004585af jne 0x4587ca */ if (!ZF_) goto L_004587ca;
  /* 004585b5 mov eax, dword ptr [0x696080] */ { const u32 m_ = (u32)(0x696080u); eax = (u32)(M32(m_)); }
  /* 004585ba mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004585bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004585bd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004585be mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004585c0 call dword ptr [edx + 0x60] */ { const u32 m_ = (u32)(edx + 0x60u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4585c3u; SAVEALL; call_ind(c, t_); RETCHK(0x4585c3u, 0x4585c0u); LOADALL; }
  /* 004585c3 jmp 0x4587ca */ goto L_004587ca;
L_004585c8:;
  /* 004585c8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004585c9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004585ca call 0x454be0 */ esp -= 4; M32(esp) = 0x4585cfu; SAVEALL; F_00454be0(c); ABI_CHECK(0x454be0u, 0x4585cau); RETCHK(0x4585cfu, 0x4585cau); LOADALL;
  /* 004585cf add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004585d2 jmp 0x4587ca */ goto L_004587ca;
L_004585d7:;
  /* 004585d7 cmp ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004585da lea edi, [esi + 0xc4] */ edi = (u32)((u32)(esi + 0xc4u));
  /* 004585e0 jne 0x4585f8 */ if (!ZF_) goto L_004585f8;
  /* 004585e2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004585e4 mov ecx, 0x40 */ { ecx = (u32)(0x40u); }
  /* 004585e9 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004585eb mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004585ed push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004585ee mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004585f0 call dword ptr [edx + 0x64] */ { const u32 m_ = (u32)(edx + 0x64u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4585f3u; SAVEALL; call_ind(c, t_); RETCHK(0x4585f3u, 0x4585f0u); LOADALL; }
  /* 004585f3 jmp 0x4587ca */ goto L_004587ca;
L_004585f8:;
  /* 004585f8 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 004585fd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004585fe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004585ff call 0x5fe7ca */ esp -= 4; M32(esp) = 0x458604u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x4585ffu); RETCHK(0x458604u, 0x4585ffu); LOADALL;
  /* 00458604 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00458607 mov byte ptr [edi + 0xff], 0 */ { const u32 m_ = (u32)(edi + 0xffu); M8(m_) = (u8)(0x0u); }
  /* 0045860e mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00458610 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00458611 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00458613 call dword ptr [edx + 0x64] */ { const u32 m_ = (u32)(edx + 0x64u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458616u; SAVEALL; call_ind(c, t_); RETCHK(0x458616u, 0x458613u); LOADALL; }
  /* 00458616 jmp 0x4587ca */ goto L_004587ca;
L_0045861b:;
  /* 0045861b cmp ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045861e lea edi, [esi + 0xc4] */ edi = (u32)((u32)(esi + 0xc4u));
  /* 00458624 jne 0x45863c */ if (!ZF_) goto L_0045863c;
  /* 00458626 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00458628 mov ecx, 0x40 */ { ecx = (u32)(0x40u); }
  /* 0045862d rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0045862f mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00458631 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00458632 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00458634 call dword ptr [eax + 0x68] */ { const u32 m_ = (u32)(eax + 0x68u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458637u; SAVEALL; call_ind(c, t_); RETCHK(0x458637u, 0x458634u); LOADALL; }
  /* 00458637 jmp 0x4587ca */ goto L_004587ca;
L_0045863c:;
  /* 0045863c push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 00458641 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00458642 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00458643 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x458648u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x458643u); RETCHK(0x458648u, 0x458643u); LOADALL;
  /* 00458648 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045864b mov byte ptr [edi + 0xff], 0 */ { const u32 m_ = (u32)(edi + 0xffu); M8(m_) = (u8)(0x0u); }
  /* 00458652 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00458654 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00458655 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00458657 call dword ptr [eax + 0x68] */ { const u32 m_ = (u32)(eax + 0x68u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45865au; SAVEALL; call_ind(c, t_); RETCHK(0x45865au, 0x458657u); LOADALL; }
  /* 0045865a jmp 0x4587ca */ goto L_004587ca;
L_0045865f:;
  /* 0045865f cmp ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458662 lea edi, [esi + 0xc4] */ edi = (u32)((u32)(esi + 0xc4u));
  /* 00458668 jne 0x458680 */ if (!ZF_) goto L_00458680;
  /* 0045866a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045866c mov ecx, 0x40 */ { ecx = (u32)(0x40u); }
  /* 00458671 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00458673 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00458675 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00458676 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00458678 call dword ptr [edx + 0x6c] */ { const u32 m_ = (u32)(edx + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45867bu; SAVEALL; call_ind(c, t_); RETCHK(0x45867bu, 0x458678u); LOADALL; }
  /* 0045867b jmp 0x4587ca */ goto L_004587ca;
L_00458680:;
  /* 00458680 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 00458685 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00458686 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00458687 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x45868cu; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x458687u); RETCHK(0x45868cu, 0x458687u); LOADALL;
  /* 0045868c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045868f mov byte ptr [edi + 0xff], 0 */ { const u32 m_ = (u32)(edi + 0xffu); M8(m_) = (u8)(0x0u); }
  /* 00458696 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00458698 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00458699 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0045869b call dword ptr [edx + 0x6c] */ { const u32 m_ = (u32)(edx + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45869eu; SAVEALL; call_ind(c, t_); RETCHK(0x45869eu, 0x45869bu); LOADALL; }
  /* 0045869e jmp 0x4587ca */ goto L_004587ca;
L_004586a3:;
  /* 004586a3 lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 004586a6 call 0x4648c0 */ esp -= 4; M32(esp) = 0x4586abu; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x4586a6u); RETCHK(0x4586abu, 0x4586a6u); LOADALL;
  /* 004586ab lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 004586ae call 0x4648c0 */ esp -= 4; M32(esp) = 0x4586b3u; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x4586aeu); RETCHK(0x4586b3u, 0x4586aeu); LOADALL;
  /* 004586b3 lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 004586b6 call 0x4648c0 */ esp -= 4; M32(esp) = 0x4586bbu; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x4586b6u); RETCHK(0x4586bbu, 0x4586b6u); LOADALL;
  /* 004586bb mov edi, eax */ { edi = (u32)(eax); }
  /* 004586bd test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004586bf je 0x4587ca */ if (ZF_) goto L_004587ca;
  /* 004586c5 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004586c7 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004586c9 jle 0x4586e6 */ if ((ZF_|LT_)) goto L_004586e6;
  /* 004586cb jmp 0x4586d0 */ goto L_004586d0;
L_004586d0:;
  /* 004586d0 lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 004586d3 call 0x4648c0 */ esp -= 4; M32(esp) = 0x4586d8u; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x4586d3u); RETCHK(0x4586d8u, 0x4586d3u); LOADALL;
  /* 004586d8 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004586da mov eax, esi */ { eax = (u32)(esi); }
  /* 004586dc call 0x454f60 */ esp -= 4; M32(esp) = 0x4586e1u; SAVEALL; F_00454f60(c); ABI_CHECK(0x454f60u, 0x4586dcu); RETCHK(0x4586e1u, 0x4586dcu); LOADALL;
  /* 004586e1 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004586e2 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004586e4 jl 0x4586d0 */ if (LT_) goto L_004586d0;
L_004586e6:;
  /* 004586e6 call 0x454f70 */ esp -= 4; M32(esp) = 0x4586ebu; SAVEALL; F_00454f70(c); ABI_CHECK(0x454f70u, 0x4586e6u); RETCHK(0x4586ebu, 0x4586e6u); LOADALL;
  /* 004586eb jmp 0x4587ca */ goto L_004587ca;
L_004586f0:;
  /* 004586f0 lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 004586f3 call 0x4648c0 */ esp -= 4; M32(esp) = 0x4586f8u; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x4586f3u); RETCHK(0x4586f8u, 0x4586f3u); LOADALL;
  /* 004586f8 lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 004586fb call 0x4648c0 */ esp -= 4; M32(esp) = 0x458700u; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x4586fbu); RETCHK(0x458700u, 0x4586fbu); LOADALL;
  /* 00458700 lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00458703 call 0x4648c0 */ esp -= 4; M32(esp) = 0x458708u; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x458703u); RETCHK(0x458708u, 0x458703u); LOADALL;
  /* 00458708 call 0x454f40 */ esp -= 4; M32(esp) = 0x45870du; SAVEALL; F_00454f40(c); ABI_CHECK(0x454f40u, 0x458708u); RETCHK(0x45870du, 0x458708u); LOADALL;
  /* 0045870d jmp 0x4587ca */ goto L_004587ca;
L_00458712:;
  /* 00458712 lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00458715 call 0x4648c0 */ esp -= 4; M32(esp) = 0x45871au; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x458715u); RETCHK(0x45871au, 0x458715u); LOADALL;
  /* 0045871a lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0045871d call 0x4648c0 */ esp -= 4; M32(esp) = 0x458722u; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x45871du); RETCHK(0x458722u, 0x45871du); LOADALL;
  /* 00458722 lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00458725 call 0x4648c0 */ esp -= 4; M32(esp) = 0x45872au; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x458725u); RETCHK(0x45872au, 0x458725u); LOADALL;
  /* 0045872a mov edi, eax */ { edi = (u32)(eax); }
  /* 0045872c test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045872e je 0x45876f */ if (ZF_) goto L_0045876f;
  /* 00458730 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00458732 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458734 jle 0x45874c */ if ((ZF_|LT_)) goto L_0045874c;
L_00458736:;
  /* 00458736 lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00458739 call 0x4648c0 */ esp -= 4; M32(esp) = 0x45873eu; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x458739u); RETCHK(0x45873eu, 0x458739u); LOADALL;
  /* 0045873e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00458740 mov eax, esi */ { eax = (u32)(esi); }
  /* 00458742 call 0x4564e0 */ esp -= 4; M32(esp) = 0x458747u; SAVEALL; F_004564e0(c); ABI_CHECK(0x4564e0u, 0x458742u); RETCHK(0x458747u, 0x458742u); LOADALL;
  /* 00458747 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00458748 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045874a jl 0x458736 */ if (LT_) goto L_00458736;
L_0045874c:;
  /* 0045874c call 0x4564f0 */ esp -= 4; M32(esp) = 0x458751u; SAVEALL; F_004564f0(c); ABI_CHECK(0x4564f0u, 0x45874cu); RETCHK(0x458751u, 0x45874cu); LOADALL;
  /* 00458751 jmp 0x4587ca */ goto L_004587ca;
L_00458753:;
  /* 00458753 lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00458756 call 0x4648c0 */ esp -= 4; M32(esp) = 0x45875bu; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x458756u); RETCHK(0x45875bu, 0x458756u); LOADALL;
  /* 0045875b lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0045875e call 0x4648c0 */ esp -= 4; M32(esp) = 0x458763u; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x45875eu); RETCHK(0x458763u, 0x45875eu); LOADALL;
  /* 00458763 lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00458766 call 0x4648c0 */ esp -= 4; M32(esp) = 0x45876bu; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x458766u); RETCHK(0x45876bu, 0x458766u); LOADALL;
  /* 0045876b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045876d jne 0x458776 */ if (!ZF_) goto L_00458776;
L_0045876f:;
  /* 0045876f call 0x4564d0 */ esp -= 4; M32(esp) = 0x458774u; SAVEALL; F_004564d0(c); ABI_CHECK(0x4564d0u, 0x45876fu); RETCHK(0x458774u, 0x45876fu); LOADALL;
  /* 00458774 jmp 0x4587ca */ goto L_004587ca;
L_00458776:;
  /* 00458776 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00458778 call 0x456500 */ esp -= 4; M32(esp) = 0x45877du; SAVEALL; F_00456500(c); ABI_CHECK(0x456500u, 0x458778u); RETCHK(0x45877du, 0x458778u); LOADALL;
  /* 0045877d jmp 0x4587ca */ goto L_004587ca;
L_0045877f:;
  /* 0045877f lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00458782 call 0x4648c0 */ esp -= 4; M32(esp) = 0x458787u; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x458782u); RETCHK(0x458787u, 0x458782u); LOADALL;
  /* 00458787 lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0045878a call 0x4648c0 */ esp -= 4; M32(esp) = 0x45878fu; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x45878au); RETCHK(0x45878fu, 0x45878au); LOADALL;
  /* 0045878f lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00458792 call 0x4648c0 */ esp -= 4; M32(esp) = 0x458797u; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x458792u); RETCHK(0x458797u, 0x458792u); LOADALL;
  /* 00458797 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458799 jne 0x4587a2 */ if (!ZF_) goto L_004587a2;
  /* 0045879b call 0x456ad0 */ esp -= 4; M32(esp) = 0x4587a0u; SAVEALL; F_00456ad0(c); ABI_CHECK(0x456ad0u, 0x45879bu); RETCHK(0x4587a0u, 0x45879bu); LOADALL;
  /* 004587a0 jmp 0x4587ca */ goto L_004587ca;
L_004587a2:;
  /* 004587a2 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004587a4 call 0x456ac0 */ esp -= 4; M32(esp) = 0x4587a9u; SAVEALL; F_00456ac0(c); ABI_CHECK(0x456ac0u, 0x4587a4u); RETCHK(0x4587a9u, 0x4587a4u); LOADALL;
  /* 004587a9 jmp 0x4587ca */ goto L_004587ca;
L_004587ab:;
  /* 004587ab lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 004587ae call 0x4648c0 */ esp -= 4; M32(esp) = 0x4587b3u; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x4587aeu); RETCHK(0x4587b3u, 0x4587aeu); LOADALL;
  /* 004587b3 lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 004587b6 call 0x4648c0 */ esp -= 4; M32(esp) = 0x4587bbu; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x4587b6u); RETCHK(0x4587bbu, 0x4587b6u); LOADALL;
  /* 004587bb lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 004587be call 0x4648c0 */ esp -= 4; M32(esp) = 0x4587c3u; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x4587beu); RETCHK(0x4587c3u, 0x4587beu); LOADALL;
  /* 004587c3 mov edi, eax */ { edi = (u32)(eax); }
  /* 004587c5 call 0x456510 */ esp -= 4; M32(esp) = 0x4587cau; SAVEALL; F_00456510(c); ABI_CHECK(0x456510u, 0x4587c5u); RETCHK(0x4587cau, 0x4587c5u); LOADALL;
L_004587ca:;
  /* 004587ca lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 004587cd call 0x4647c0 */ esp -= 4; M32(esp) = 0x4587d2u; SAVEALL; F_004647c0(c); ABI_CHECK(0x4647c0u, 0x4587cdu); RETCHK(0x4587d2u, 0x4587cdu); LOADALL;
  /* 004587d2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_004587d3:;
  /* 004587d3 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004587d6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004587d7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004587d8 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004587df mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004587e1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004587e2 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004588c0(CPU *c) {
  NATIVE_HOOK(0x4588c0u) REGS; LOADALL;
L_004588c0:;
  /* 004588c0 cmp ecx, 0x4e20 */ { u32 a_ = ecx, b_ = 0x4e20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004588c6 jl 0x4588dc */ if (LT_) goto L_004588dc;
  /* 004588c8 cmp ecx, 0x9c40 */ { u32 a_ = ecx, b_ = 0x9c40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004588ce jg 0x4588dc */ if (!(ZF_|LT_)) goto L_004588dc;
  /* 004588d0 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004588d5 mov dword ptr [0x696078], eax */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(eax); }
  /* 004588da jmp 0x4588e1 */ goto L_004588e1;
L_004588dc:;
  /* 004588dc mov eax, dword ptr [0x696078] */ { const u32 m_ = (u32)(0x696078u); eax = (u32)(M32(m_)); }
L_004588e1:;
  /* 004588e1 cmp ecx, 0x2710 */ { u32 a_ = ecx, b_ = 0x2710u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004588e7 jl 0x4588fb */ if (LT_) goto L_004588fb;
  /* 004588e9 cmp ecx, 0x4e1f */ { u32 a_ = ecx, b_ = 0x4e1fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004588ef jg 0x4588fb */ if (!(ZF_|LT_)) goto L_004588fb;
  /* 004588f1 mov eax, 3 */ { eax = (u32)(0x3u); }
  /* 004588f6 mov dword ptr [0x696078], eax */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(eax); }
L_004588fb:;
  /* 004588fb cmp ecx, 0x1dcd6500 */ { u32 a_ = ecx, b_ = 0x1dcd6500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458901 jl 0x458912 */ if (LT_) goto L_00458912;
  /* 00458903 cmp ecx, 0x23c345ff */ { u32 a_ = ecx, b_ = 0x23c345ffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458909 jg 0x458912 */ if (!(ZF_|LT_)) goto L_00458912;
  /* 0045890b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045890d mov dword ptr [0x696078], eax */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(eax); }
L_00458912:;
  /* 00458912 cmp ecx, 0x5f5e100 */ { u32 a_ = ecx, b_ = 0x5f5e100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458918 jl 0x45892c */ if (LT_) goto L_0045892c;
  /* 0045891a cmp ecx, 0xbebc1ff */ { u32 a_ = ecx, b_ = 0xbebc1ffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458920 jg 0x45892c */ if (!(ZF_|LT_)) goto L_0045892c;
  /* 00458922 mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 00458927 mov dword ptr [0x696078], eax */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(eax); }
L_0045892c:;
  /* 0045892c cmp ecx, 0x17d78400 */ { u32 a_ = ecx, b_ = 0x17d78400u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458932 jl 0x458946 */ if (LT_) goto L_00458946;
  /* 00458934 cmp ecx, 0x1dcd64ff */ { u32 a_ = ecx, b_ = 0x1dcd64ffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045893a jg 0x458946 */ if (!(ZF_|LT_)) goto L_00458946;
  /* 0045893c mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 00458941 mov dword ptr [0x696078], eax */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(eax); }
L_00458946:;
  /* 00458946 cmp ecx, 0xbebc200 */ { u32 a_ = ecx, b_ = 0xbebc200u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045894c jl 0x458960 */ if (LT_) goto L_00458960;
  /* 0045894e cmp ecx, 0x11e1a2ff */ { u32 a_ = ecx, b_ = 0x11e1a2ffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458954 jg 0x458960 */ if (!(ZF_|LT_)) goto L_00458960;
  /* 00458956 mov eax, 2 */ { eax = (u32)(0x2u); }
  /* 0045895b mov dword ptr [0x696078], eax */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(eax); }
L_00458960:;
  /* 00458960 cmp ecx, 0x27b25a80 */ { u32 a_ = ecx, b_ = 0x27b25a80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458966 jl 0x45897a */ if (LT_) goto L_0045897a;
  /* 00458968 cmp ecx, 0x27c19cbf */ { u32 a_ = ecx, b_ = 0x27c19cbfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045896e jg 0x45897a */ if (!(ZF_|LT_)) goto L_0045897a;
  /* 00458970 mov eax, 5 */ { eax = (u32)(0x5u); }
  /* 00458975 mov dword ptr [0x696078], eax */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(eax); }
L_0045897a:;
  /* 0045897a cmp dword ptr [0x685704], eax */ { const u32 m_ = (u32)(0x685704u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458980 je 0x458a3c */ if (ZF_) goto L_00458a3c;
  /* 00458986 mov ecx, dword ptr [0x7a8678] */ { const u32 m_ = (u32)(0x7a8678u); ecx = (u32)(M32(m_)); }
  /* 0045898c mov edx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); edx = (u32)(M32(m_)); }
  /* 0045898f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00458990 mov esi, dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); esi = (u32)(M32(m_)); }
  /* 00458996 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00458997 push 0x8a */ { u32 v_ = 0x8au; esp -= 4; M32(esp) = v_; }
  /* 0045899c push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 004589a1 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x4589a3u; SAVEALL; call_ind(c, t_); RETCHK(0x4589a3u, 0x4589a1u); LOADALL; }
  /* 004589a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004589a4 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 004589a9 push 0x6959c8 */ { u32 v_ = 0x6959c8u; esp -= 4; M32(esp) = v_; }
  /* 004589ae call 0x5fe928 */ esp -= 4; M32(esp) = 0x4589b3u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4589aeu); RETCHK(0x4589b3u, 0x4589aeu); LOADALL;
  /* 004589b3 mov eax, dword ptr [0x696078] */ { const u32 m_ = (u32)(0x696078u); eax = (u32)(M32(m_)); }
  /* 004589b8 mov ecx, dword ptr [0x7a8678] */ { const u32 m_ = (u32)(0x7a8678u); ecx = (u32)(M32(m_)); }
  /* 004589be mov edx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); edx = (u32)(M32(m_)); }
  /* 004589c1 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004589c4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004589c5 push 0x8b */ { u32 v_ = 0x8bu; esp -= 4; M32(esp) = v_; }
  /* 004589ca push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 004589cf call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x4589d1u; SAVEALL; call_ind(c, t_); RETCHK(0x4589d1u, 0x4589cfu); LOADALL; }
  /* 004589d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004589d2 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 004589d7 push 0x6957c8 */ { u32 v_ = 0x6957c8u; esp -= 4; M32(esp) = v_; }
  /* 004589dc call 0x5fe928 */ esp -= 4; M32(esp) = 0x4589e1u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4589dcu); RETCHK(0x4589e1u, 0x4589dcu); LOADALL;
  /* 004589e1 mov eax, dword ptr [0x696078] */ { const u32 m_ = (u32)(0x696078u); eax = (u32)(M32(m_)); }
  /* 004589e6 mov ecx, dword ptr [0x7a8678] */ { const u32 m_ = (u32)(0x7a8678u); ecx = (u32)(M32(m_)); }
  /* 004589ec mov edx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); edx = (u32)(M32(m_)); }
  /* 004589ef add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004589f2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004589f3 push 0x8c */ { u32 v_ = 0x8cu; esp -= 4; M32(esp) = v_; }
  /* 004589f8 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 004589fd call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x4589ffu; SAVEALL; call_ind(c, t_); RETCHK(0x4589ffu, 0x4589fdu); LOADALL; }
  /* 004589ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458a00 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00458a05 push 0x6955c8 */ { u32 v_ = 0x6955c8u; esp -= 4; M32(esp) = v_; }
  /* 00458a0a call 0x5fe928 */ esp -= 4; M32(esp) = 0x458a0fu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x458a0au); RETCHK(0x458a0fu, 0x458a0au); LOADALL;
  /* 00458a0f add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00458a12 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00458a17 push 0xdf */ { u32 v_ = 0xdfu; esp -= 4; M32(esp) = v_; }
  /* 00458a1c push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 00458a21 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x458a23u; SAVEALL; call_ind(c, t_); RETCHK(0x458a23u, 0x458a21u); LOADALL; }
  /* 00458a23 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458a24 push 0x6953c8 */ { u32 v_ = 0x6953c8u; esp -= 4; M32(esp) = v_; }
  /* 00458a29 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x458a2eu; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x458a29u); RETCHK(0x458a2eu, 0x458a29u); LOADALL;
  /* 00458a2e mov eax, dword ptr [0x696078] */ { const u32 m_ = (u32)(0x696078u); eax = (u32)(M32(m_)); }
  /* 00458a33 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00458a36 mov dword ptr [0x685704], eax */ { const u32 m_ = (u32)(0x685704u); M32(m_) = (u32)(eax); }
  /* 00458a3b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00458a3c:;
  /* 00458a3c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00458a40(CPU *c) {
  NATIVE_HOOK(0x458a40u) REGS; LOADALL;
L_00458a40:;
  /* 00458a40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00458a41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00458a43 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00458a44 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00458a46 mov eax, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 00458a4c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458a4e je 0x458b96 */ if (ZF_) goto L_00458b96;
  /* 00458a54 mov edx, dword ptr [0x696074] */ { const u32 m_ = (u32)(0x696074u); edx = (u32)(M32(m_)); }
  /* 00458a5a mov ecx, dword ptr [eax + 0x258] */ { const u32 m_ = (u32)(eax + 0x258u); ecx = (u32)(M32(m_)); }
  /* 00458a60 mov edx, dword ptr [edx*4 + 0x6856f4] */ { const u32 m_ = (u32)(edx * 4u + 0x6856f4u); edx = (u32)(M32(m_)); }
  /* 00458a67 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00458a69 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00458a6a call dword ptr [eax + 0xec] */ { const u32 m_ = (u32)(eax + 0xecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458a70u; SAVEALL; call_ind(c, t_); RETCHK(0x458a70u, 0x458a6au); LOADALL; }
  /* 00458a70 mov eax, dword ptr [0x696070] */ { const u32 m_ = (u32)(0x696070u); eax = (u32)(M32(m_)); }
  /* 00458a75 mov ecx, dword ptr [0x696078] */ { const u32 m_ = (u32)(0x696078u); ecx = (u32)(M32(m_)); }
  /* 00458a7b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00458a7d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458a7e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00458a7f mov ecx, dword ptr [0x696074] */ { const u32 m_ = (u32)(0x696074u); ecx = (u32)(M32(m_)); }
  /* 00458a85 call 0x4638d0 */ esp -= 4; M32(esp) = 0x458a8au; SAVEALL; F_004638d0(c); ABI_CHECK(0x4638d0u, 0x458a85u); RETCHK(0x458a8au, 0x458a85u); LOADALL;
  /* 00458a8a mov ecx, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 00458a90 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00458a92 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00458a95 call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458a98u; SAVEALL; call_ind(c, t_); RETCHK(0x458a98u, 0x458a95u); LOADALL; }
  /* 00458a98 mov ecx, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 00458a9e mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00458aa0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00458aa2 call dword ptr [eax + 0x124] */ { const u32 m_ = (u32)(eax + 0x124u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458aa8u; SAVEALL; call_ind(c, t_); RETCHK(0x458aa8u, 0x458aa2u); LOADALL; }
  /* 00458aa8 mov ecx, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 00458aae mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00458ab0 call dword ptr [edx + 0xf4] */ { const u32 m_ = (u32)(edx + 0xf4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458ab6u; SAVEALL; call_ind(c, t_); RETCHK(0x458ab6u, 0x458ab0u); LOADALL; }
  /* 00458ab6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458ab8 jle 0x458ad6 */ if ((ZF_|LT_)) goto L_00458ad6;
  /* 00458aba mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00458abc call 0x4594f0 */ esp -= 4; M32(esp) = 0x458ac1u; SAVEALL; F_004594f0(c); ABI_CHECK(0x4594f0u, 0x458abcu); RETCHK(0x458ac1u, 0x458abcu); LOADALL;
  /* 00458ac1 mov eax, dword ptr [edi + 0x254] */ { const u32 m_ = (u32)(edi + 0x254u); eax = (u32)(M32(m_)); }
  /* 00458ac7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458ac9 je 0x458af0 */ if (ZF_) goto L_00458af0;
  /* 00458acb mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00458acd mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00458acf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00458ad1 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458ad4u; SAVEALL; call_ind(c, t_); RETCHK(0x458ad4u, 0x458ad1u); LOADALL; }
  /* 00458ad4 jmp 0x458af0 */ goto L_00458af0;
L_00458ad6:;
  /* 00458ad6 mov eax, edi */ { eax = (u32)(edi); }
  /* 00458ad8 call 0x459630 */ esp -= 4; M32(esp) = 0x458addu; SAVEALL; F_00459630(c); ABI_CHECK(0x459630u, 0x458ad8u); RETCHK(0x458addu, 0x458ad8u); LOADALL;
  /* 00458add mov eax, dword ptr [edi + 0x254] */ { const u32 m_ = (u32)(edi + 0x254u); eax = (u32)(M32(m_)); }
  /* 00458ae3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458ae5 je 0x458af0 */ if (ZF_) goto L_00458af0;
  /* 00458ae7 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00458ae9 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00458aeb push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00458aed call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458af0u; SAVEALL; call_ind(c, t_); RETCHK(0x458af0u, 0x458aedu); LOADALL; }
L_00458af0:;
  /* 00458af0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00458af1 mov ebx, dword ptr [edi + 0x228] */ { const u32 m_ = (u32)(edi + 0x228u); ebx = (u32)(M32(m_)); }
  /* 00458af7 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458af9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00458afa mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00458afd je 0x458b42 */ if (ZF_) goto L_00458b42;
  /* 00458aff lea eax, [esi - 2] */ eax = (u32)((u32)(esi + 0xfffffffeu));
  /* 00458b02 cmp eax, 0xd */ { u32 a_ = eax, b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458b05 ja 0x458b42 */ if (!(CF_|ZF_)) goto L_00458b42;
  /* 00458b07 movzx eax, byte ptr [eax + 0x458bb8] */ { const u32 m_ = (u32)(eax + 0x458bb8u); eax = (u32)(M8(m_)); }
  /* 00458b0e jmp dword ptr [eax*4 + 0x458b9c] */ { const u32 m_ = (u32)(eax * 4u + 0x458b9cu); u32 t_ = M32(m_); switch (t_) { case 0x458b15u: goto L_00458b15; case 0x458b1cu: goto L_00458b1c; case 0x458b23u: goto L_00458b23; case 0x458b2au: goto L_00458b2a; case 0x458b31u: goto L_00458b31; case 0x458b38u: goto L_00458b38; case 0x458b42u: goto L_00458b42; default: SAVEALL; call_ind(c, t_); return; } }
L_00458b15:;
  /* 00458b15 push 0x6484a8 */ { u32 v_ = 0x6484a8u; esp -= 4; M32(esp) = v_; }
  /* 00458b1a jmp 0x458b3d */ goto L_00458b3d;
L_00458b1c:;
  /* 00458b1c push 0x648490 */ { u32 v_ = 0x648490u; esp -= 4; M32(esp) = v_; }
  /* 00458b21 jmp 0x458b3d */ goto L_00458b3d;
L_00458b23:;
  /* 00458b23 push 0x648478 */ { u32 v_ = 0x648478u; esp -= 4; M32(esp) = v_; }
  /* 00458b28 jmp 0x458b3d */ goto L_00458b3d;
L_00458b2a:;
  /* 00458b2a push 0x648460 */ { u32 v_ = 0x648460u; esp -= 4; M32(esp) = v_; }
  /* 00458b2f jmp 0x458b3d */ goto L_00458b3d;
L_00458b31:;
  /* 00458b31 push 0x648448 */ { u32 v_ = 0x648448u; esp -= 4; M32(esp) = v_; }
  /* 00458b36 jmp 0x458b3d */ goto L_00458b3d;
L_00458b38:;
  /* 00458b38 push 0x64842c */ { u32 v_ = 0x64842cu; esp -= 4; M32(esp) = v_; }
L_00458b3d:;
  /* 00458b3d call 0x50dc70 */ esp -= 4; M32(esp) = 0x458b42u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x458b3du); RETCHK(0x458b42u, 0x458b3du); LOADALL;
L_00458b42:;
  /* 00458b42 mov ebx, dword ptr [edi + 0x22c] */ { const u32 m_ = (u32)(edi + 0x22cu); ebx = (u32)(M32(m_)); }
  /* 00458b48 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458b4a je 0x458b8f */ if (ZF_) goto L_00458b8f;
  /* 00458b4c mov eax, esi */ { eax = (u32)(esi); }
  /* 00458b4e sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00458b51 je 0x458b85 */ if (ZF_) goto L_00458b85;
  /* 00458b53 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00458b54 je 0x458b6f */ if (ZF_) goto L_00458b6f;
  /* 00458b56 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00458b57 jne 0x458b8f */ if (!ZF_) goto L_00458b8f;
  /* 00458b59 push 0x6483e0 */ { u32 v_ = 0x6483e0u; esp -= 4; M32(esp) = v_; }
  /* 00458b5e call 0x50dc70 */ esp -= 4; M32(esp) = 0x458b63u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x458b5eu); RETCHK(0x458b63u, 0x458b5eu); LOADALL;
  /* 00458b63 call 0x458bd0 */ esp -= 4; M32(esp) = 0x458b68u; SAVEALL; F_00458bd0(c); ABI_CHECK(0x458bd0u, 0x458b63u); RETCHK(0x458b68u, 0x458b63u); LOADALL;
  /* 00458b68 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00458b69 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00458b6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00458b6b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00458b6c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00458b6f:;
  /* 00458b6f push 0x6483fc */ { u32 v_ = 0x6483fcu; esp -= 4; M32(esp) = v_; }
  /* 00458b74 call 0x50dc70 */ esp -= 4; M32(esp) = 0x458b79u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x458b74u); RETCHK(0x458b79u, 0x458b74u); LOADALL;
  /* 00458b79 call 0x458bd0 */ esp -= 4; M32(esp) = 0x458b7eu; SAVEALL; F_00458bd0(c); ABI_CHECK(0x458bd0u, 0x458b79u); RETCHK(0x458b7eu, 0x458b79u); LOADALL;
  /* 00458b7e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00458b7f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00458b80 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00458b81 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00458b82 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00458b85:;
  /* 00458b85 push 0x648414 */ { u32 v_ = 0x648414u; esp -= 4; M32(esp) = v_; }
  /* 00458b8a call 0x50dc70 */ esp -= 4; M32(esp) = 0x458b8fu; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x458b8au); RETCHK(0x458b8fu, 0x458b8au); LOADALL;
L_00458b8f:;
  /* 00458b8f call 0x458bd0 */ esp -= 4; M32(esp) = 0x458b94u; SAVEALL; F_00458bd0(c); ABI_CHECK(0x458bd0u, 0x458b8fu); RETCHK(0x458b94u, 0x458b8fu); LOADALL;
  /* 00458b94 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00458b95 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00458b96:;
  /* 00458b96 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00458b97 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00458b98 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00458bd0(CPU *c) {
  NATIVE_HOOK(0x458bd0u) REGS; LOADALL;
L_00458bd0:;
  /* 00458bd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00458bd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00458bd3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00458bd5 push 0x61bac8 */ { u32 v_ = 0x61bac8u; esp -= 4; M32(esp) = v_; }
  /* 00458bda mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00458be0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458be1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00458be8 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00458beb mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00458bf0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00458bf1 mov esi, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); esi = (u32)(M32(m_)); }
  /* 00458bf7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458bf9 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00458bfc je 0x458c6f */ if (ZF_) goto L_00458c6f;
  /* 00458bfe mov eax, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); eax = (u32)(M32(m_)); }
  /* 00458c04 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458c06 je 0x458c21 */ if (ZF_) goto L_00458c21;
  /* 00458c08 mov ecx, dword ptr [esi + 0x26c] */ { const u32 m_ = (u32)(esi + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 00458c0e sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00458c10 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 00458c15 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00458c17 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00458c1a mov eax, edx */ { eax = (u32)(edx); }
  /* 00458c1c shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00458c1f add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00458c21:;
  /* 00458c21 mov ecx, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 00458c27 imul ecx, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00458c2e cdq */ edx = (u32)((s32)eax >> 31);
  /* 00458c2f idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x458c2fu); eax = q_; edx = r_; }
  /* 00458c31 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458c33 je 0x458c36 */ if (ZF_) goto L_00458c36;
  /* 00458c35 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_00458c36:;
  /* 00458c36 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458c38 jle 0x458c5c */ if ((ZF_|LT_)) goto L_00458c5c;
  /* 00458c3a call 0x4216c0 */ esp -= 4; M32(esp) = 0x458c3fu; SAVEALL; F_004216c0(c); ABI_CHECK(0x4216c0u, 0x458c3au); RETCHK(0x458c3fu, 0x458c3au); LOADALL;
  /* 00458c3f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458c40 call 0x421670 */ esp -= 4; M32(esp) = 0x458c45u; SAVEALL; F_00421670(c); ABI_CHECK(0x421670u, 0x458c40u); RETCHK(0x458c45u, 0x458c40u); LOADALL;
  /* 00458c45 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00458c46 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458c47 push 0x6481e8 */ { u32 v_ = 0x6481e8u; esp -= 4; M32(esp) = v_; }
  /* 00458c4c lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00458c4f push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00458c51 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458c52 call 0x5fe928 */ esp -= 4; M32(esp) = 0x458c57u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x458c52u); RETCHK(0x458c57u, 0x458c52u); LOADALL;
  /* 00458c57 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00458c5a jmp 0x458c6f */ goto L_00458c6f;
L_00458c5c:;
  /* 00458c5c push 0x64424c */ { u32 v_ = 0x64424cu; esp -= 4; M32(esp) = v_; }
  /* 00458c61 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00458c64 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00458c66 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00458c67 call 0x5fe928 */ esp -= 4; M32(esp) = 0x458c6cu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x458c67u); RETCHK(0x458c6cu, 0x458c67u); LOADALL;
  /* 00458c6c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00458c6f:;
  /* 00458c6f mov eax, dword ptr [edi + 0x1d4] */ { const u32 m_ = (u32)(edi + 0x1d4u); eax = (u32)(M32(m_)); }
  /* 00458c75 mov dword ptr [eax + 0x294], 2 */ { const u32 m_ = (u32)(eax + 0x294u); M32(m_) = (u32)(0x2u); }
  /* 00458c7f lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00458c82 mov dword ptr [ebp - 0x24], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0xfu); }
  /* 00458c89 mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 00458c90 mov byte ptr [ebp - 0x38], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)(0x0u); }
  /* 00458c94 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00458c97:;
  /* 00458c97 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00458c99 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00458c9a test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00458c9c jne 0x458c97 */ if (!ZF_) goto L_00458c97;
  /* 00458c9e sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00458ca0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458ca1 lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00458ca4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00458ca5 lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00458ca8 call 0x404420 */ esp -= 4; M32(esp) = 0x458cadu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x458ca8u); RETCHK(0x458cadu, 0x458ca8u); LOADALL;
  /* 00458cad mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00458cb4 mov esi, dword ptr [edi + 0x1d4] */ { const u32 m_ = (u32)(edi + 0x1d4u); esi = (u32)(M32(m_)); }
  /* 00458cba lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00458cbd call 0x5224b0 */ esp -= 4; M32(esp) = 0x458cc2u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x458cbdu); RETCHK(0x458cc2u, 0x458cbdu); LOADALL;
  /* 00458cc2 cmp dword ptr [ebp - 0x24], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458cc6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00458cc7 jb 0x458cd5 */ if (CF_) goto L_00458cd5;
  /* 00458cc9 mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 00458ccc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458ccd call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x458cd2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x458ccdu); RETCHK(0x458cd2u, 0x458ccdu); LOADALL;
  /* 00458cd2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00458cd5:;
  /* 00458cd5 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00458cd8 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00458cdf mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00458ce2 call 0x61af31 */ esp -= 4; M32(esp) = 0x458ce7u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x458ce2u); RETCHK(0x458ce7u, 0x458ce2u); LOADALL;
  /* 00458ce7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00458ce9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00458cea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00458cf0(CPU *c) {
  NATIVE_HOOK(0x458cf0u) REGS; LOADALL;
L_00458cf0:;
  /* 00458cf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00458cf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00458cf3 sub esp, 0x30c */ { u32 a_ = esp, b_ = 0x30cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00458cf9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00458cfa mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00458cfd mov eax, dword ptr [ebx + 0x1e8] */ { const u32 m_ = (u32)(ebx + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 00458d03 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458d05 je 0x45903b */ if (ZF_) goto L_0045903b;
  /* 00458d0b mov eax, dword ptr [ebx + 0x224] */ { const u32 m_ = (u32)(ebx + 0x224u); eax = (u32)(M32(m_)); }
  /* 00458d11 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458d13 je 0x458d1e */ if (ZF_) goto L_00458d1e;
  /* 00458d15 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00458d17 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00458d19 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00458d1b call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458d1eu; SAVEALL; call_ind(c, t_); RETCHK(0x458d1eu, 0x458d1bu); LOADALL; }
L_00458d1e:;
  /* 00458d1e mov eax, dword ptr [0x696074] */ { const u32 m_ = (u32)(0x696074u); eax = (u32)(M32(m_)); }
  /* 00458d23 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458d25 jl 0x45903b */ if (LT_) goto L_0045903b;
  /* 00458d2b cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458d2e jg 0x45903b */ if (!(ZF_|LT_)) goto L_0045903b;
  /* 00458d34 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00458d35 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00458d37 mov ecx, 0x83 */ { ecx = (u32)(0x83u); }
  /* 00458d3c lea edi, [ebp - 0x20c] */ edi = (u32)((u32)(ebp + 0xfffffdf4u));
  /* 00458d42 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00458d44 mov al, byte ptr [ebx + 0x220] */ { const u32 m_ = (u32)(ebx + 0x220u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00458d4a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00458d4c mov ecx, dword ptr [ebx + 0x1ec] */ { const u32 m_ = (u32)(ebx + 0x1ecu); ecx = (u32)(M32(m_)); }
  /* 00458d52 mov dword ptr [ebp - 0x20c], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffdf4u); M32(m_) = (u32)(ecx); }
  /* 00458d58 je 0x458d69 */ if (ZF_) goto L_00458d69;
  /* 00458d5a lea edx, [ebp - 0x20c] */ edx = (u32)((u32)(ebp + 0xfffffdf4u));
  /* 00458d60 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00458d61 call 0x461c50 */ esp -= 4; M32(esp) = 0x458d66u; SAVEALL; F_00461c50(c); ABI_CHECK(0x461c50u, 0x458d61u); RETCHK(0x458d66u, 0x458d61u); LOADALL;
  /* 00458d66 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00458d69:;
  /* 00458d69 mov eax, dword ptr [0x696078] */ { const u32 m_ = (u32)(0x696078u); eax = (u32)(M32(m_)); }
  /* 00458d6e dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00458d6f cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458d72 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00458d73 ja 0x458fc3 */ if (!(CF_|ZF_)) goto L_00458fc3;
  /* 00458d79 jmp dword ptr [eax*4 + 0x459044] */ { const u32 m_ = (u32)(eax * 4u + 0x459044u); u32 t_ = M32(m_); switch (t_) { case 0x458d80u: goto L_00458d80; case 0x458dc3u: goto L_00458dc3; case 0x458e4au: goto L_00458e4a; case 0x458ef0u: goto L_00458ef0; case 0x458f3fu: goto L_00458f3f; default: SAVEALL; call_ind(c, t_); return; } }
L_00458d80:;
  /* 00458d80 mov ecx, dword ptr [ebx + 0x1e8] */ { const u32 m_ = (u32)(ebx + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 00458d86 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00458d88 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00458d8a mov esi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); esi = (u32)(M32(m_)); }
  /* 00458d8c call dword ptr [eax + 0x128] */ { const u32 m_ = (u32)(eax + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458d92u; SAVEALL; call_ind(c, t_); RETCHK(0x458d92u, 0x458d8cu); LOADALL; }
  /* 00458d92 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458d93 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00458d95 call dword ptr [esi + 0x110] */ { const u32 m_ = (u32)(esi + 0x110u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458d9bu; SAVEALL; call_ind(c, t_); RETCHK(0x458d9bu, 0x458d95u); LOADALL; }
  /* 00458d9b mov dword ptr [ebp - 0x208], eax */ { const u32 m_ = (u32)(ebp + 0xfffffdf8u); M32(m_) = (u32)(eax); }
  /* 00458da1 mov dword ptr [ebp - 0x204], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffdfcu); M32(m_) = (u32)(0xffffffffu); }
L_00458dab:;
  /* 00458dab lea ecx, [ebp - 0x20c] */ ecx = (u32)((u32)(ebp + 0xfffffdf4u));
  /* 00458db1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00458db2 call 0x461e00 */ esp -= 4; M32(esp) = 0x458db7u; SAVEALL; F_00461e00(c); ABI_CHECK(0x461e00u, 0x458db2u); RETCHK(0x458db7u, 0x458db2u); LOADALL;
  /* 00458db7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00458dba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00458dbb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00458dbc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00458dbd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00458dbf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00458dc0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00458dc3:;
  /* 00458dc3 mov ecx, dword ptr [ebx + 0x1e8] */ { const u32 m_ = (u32)(ebx + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 00458dc9 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00458dcb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00458dcd mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 00458dcf mov dword ptr [ebp - 0x208], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffdf8u); M32(m_) = (u32)(0xffffffffu); }
  /* 00458dd9 call dword ptr [edx + 0x128] */ { const u32 m_ = (u32)(edx + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458ddfu; SAVEALL; call_ind(c, t_); RETCHK(0x458ddfu, 0x458dd9u); LOADALL; }
  /* 00458ddf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458de0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00458de2 call dword ptr [edi + 0x110] */ { const u32 m_ = (u32)(edi + 0x110u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458de8u; SAVEALL; call_ind(c, t_); RETCHK(0x458de8u, 0x458de2u); LOADALL; }
  /* 00458de8 mov dword ptr [ebp - 0x204], eax */ { const u32 m_ = (u32)(ebp + 0xfffffdfcu); M32(m_) = (u32)(eax); }
  /* 00458dee mov eax, dword ptr [0x696074] */ { const u32 m_ = (u32)(0x696074u); eax = (u32)(M32(m_)); }
  /* 00458df3 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458df6 je 0x458dfd */ if (ZF_) goto L_00458dfd;
  /* 00458df8 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458dfb jne 0x458e32 */ if (!ZF_) goto L_00458e32;
L_00458dfd:;
  /* 00458dfd mov ecx, dword ptr [ebx + 0x1e8] */ { const u32 m_ = (u32)(ebx + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 00458e03 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00458e05 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00458e07 mov esi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); esi = (u32)(M32(m_)); }
  /* 00458e09 call dword ptr [edx + 0x128] */ { const u32 m_ = (u32)(edx + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458e0fu; SAVEALL; call_ind(c, t_); RETCHK(0x458e0fu, 0x458e09u); LOADALL; }
  /* 00458e0f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458e10 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00458e12 call dword ptr [esi + 0x118] */ { const u32 m_ = (u32)(esi + 0x118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458e18u; SAVEALL; call_ind(c, t_); RETCHK(0x458e18u, 0x458e12u); LOADALL; }
  /* 00458e18 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458e19 call 0x463b50 */ esp -= 4; M32(esp) = 0x458e1eu; SAVEALL; F_00463b50(c); ABI_CHECK(0x463b50u, 0x458e19u); RETCHK(0x458e1eu, 0x458e19u); LOADALL;
  /* 00458e1e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00458e21 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458e23 je 0x458dab */ if (ZF_) goto L_00458dab;
  /* 00458e25 mov esi, eax */ { esi = (u32)(eax); }
  /* 00458e27 lea edx, [ebp - 0x20c] */ edx = (u32)((u32)(ebp + 0xfffffdf4u));
  /* 00458e2d call 0x461d40 */ esp -= 4; M32(esp) = 0x458e32u; SAVEALL; F_00461d40(c); ABI_CHECK(0x461d40u, 0x458e2du); RETCHK(0x458e32u, 0x458e2du); LOADALL;
L_00458e32:;
  /* 00458e32 lea eax, [ebp - 0x20c] */ eax = (u32)((u32)(ebp + 0xfffffdf4u));
  /* 00458e38 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458e39 call 0x461e00 */ esp -= 4; M32(esp) = 0x458e3eu; SAVEALL; F_00461e00(c); ABI_CHECK(0x461e00u, 0x458e39u); RETCHK(0x458e3eu, 0x458e39u); LOADALL;
  /* 00458e3e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00458e41 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00458e42 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00458e43 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00458e44 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00458e46 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00458e47 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00458e4a:;
  /* 00458e4a mov ecx, dword ptr [ebx + 0x1e8] */ { const u32 m_ = (u32)(ebx + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 00458e50 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00458e52 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00458e54 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 00458e56 call dword ptr [edx + 0x128] */ { const u32 m_ = (u32)(edx + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458e5cu; SAVEALL; call_ind(c, t_); RETCHK(0x458e5cu, 0x458e56u); LOADALL; }
  /* 00458e5c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458e5d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00458e5f call dword ptr [edi + 0x110] */ { const u32 m_ = (u32)(edi + 0x110u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458e65u; SAVEALL; call_ind(c, t_); RETCHK(0x458e65u, 0x458e5fu); LOADALL; }
  /* 00458e65 mov esi, eax */ { esi = (u32)(eax); }
  /* 00458e67 lea edx, [ebp - 0x20c] */ edx = (u32)((u32)(ebp + 0xfffffdf4u));
  /* 00458e6d call 0x461d40 */ esp -= 4; M32(esp) = 0x458e72u; SAVEALL; F_00461d40(c); ABI_CHECK(0x461d40u, 0x458e6du); RETCHK(0x458e72u, 0x458e6du); LOADALL;
  /* 00458e72 mov ecx, dword ptr [ebx + 0x1e8] */ { const u32 m_ = (u32)(ebx + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 00458e78 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00458e7a or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00458e7d mov dword ptr [ebp - 0x208], edi */ { const u32 m_ = (u32)(ebp + 0xfffffdf8u); M32(m_) = (u32)(edi); }
  /* 00458e83 call dword ptr [eax + 0x128] */ { const u32 m_ = (u32)(eax + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458e89u; SAVEALL; call_ind(c, t_); RETCHK(0x458e89u, 0x458e83u); LOADALL; }
  /* 00458e89 mov edx, eax */ { edx = (u32)(eax); }
  /* 00458e8b call 0x463d00 */ esp -= 4; M32(esp) = 0x458e90u; SAVEALL; F_00463d00(c); ABI_CHECK(0x463d00u, 0x458e8bu); RETCHK(0x458e90u, 0x458e8bu); LOADALL;
  /* 00458e90 mov esi, eax */ { esi = (u32)(eax); }
  /* 00458e92 call 0x556030 */ esp -= 4; M32(esp) = 0x458e97u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x458e92u); RETCHK(0x458e97u, 0x458e92u); LOADALL;
  /* 00458e97 mov edx, esi */ { edx = (u32)(esi); }
  /* 00458e99 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00458e9b call 0x555860 */ esp -= 4; M32(esp) = 0x458ea0u; SAVEALL; F_00555860(c); ABI_CHECK(0x555860u, 0x458e9bu); RETCHK(0x458ea0u, 0x458e9bu); LOADALL;
  /* 00458ea0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00458ea2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458ea4 je 0x459039 */ if (ZF_) goto L_00459039;
  /* 00458eaa mov edx, dword ptr [ecx + 0x80] */ { const u32 m_ = (u32)(ecx + 0x80u); edx = (u32)(M32(m_)); }
  /* 00458eb0 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 00458eb2 mov eax, 0x68db8bad */ { eax = (u32)(0x68db8badu); }
  /* 00458eb7 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00458eb9 sar edx, 0xc */ { u32 n_ = (12u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00458ebc mov eax, edx */ { eax = (u32)(edx); }
  /* 00458ebe shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00458ec1 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00458ec3 mov dword ptr [ebp - 0x204], eax */ { const u32 m_ = (u32)(ebp + 0xfffffdfcu); M32(m_) = (u32)(eax); }
  /* 00458ec9 call 0x464390 */ esp -= 4; M32(esp) = 0x458eceu; SAVEALL; F_00464390(c); ABI_CHECK(0x464390u, 0x458ec9u); RETCHK(0x458eceu, 0x458ec9u); LOADALL;
  /* 00458ece test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00458ed0 jne 0x458f27 */ if (!ZF_) goto L_00458f27;
  /* 00458ed2 lea edx, [ebp - 0x20c] */ edx = (u32)((u32)(ebp + 0xfffffdf4u));
  /* 00458ed8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00458ed9 mov dword ptr [ebp - 0x204], edi */ { const u32 m_ = (u32)(ebp + 0xfffffdfcu); M32(m_) = (u32)(edi); }
  /* 00458edf call 0x461e00 */ esp -= 4; M32(esp) = 0x458ee4u; SAVEALL; F_00461e00(c); ABI_CHECK(0x461e00u, 0x458edfu); RETCHK(0x458ee4u, 0x458edfu); LOADALL;
  /* 00458ee4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00458ee7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00458ee8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00458ee9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00458eea mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00458eec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00458eed ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00458ef0:;
  /* 00458ef0 mov ecx, dword ptr [ebx + 0x1e8] */ { const u32 m_ = (u32)(ebx + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 00458ef6 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00458ef8 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00458efa mov esi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); esi = (u32)(M32(m_)); }
  /* 00458efc call dword ptr [eax + 0x128] */ { const u32 m_ = (u32)(eax + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458f02u; SAVEALL; call_ind(c, t_); RETCHK(0x458f02u, 0x458efcu); LOADALL; }
  /* 00458f02 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458f03 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00458f05 call dword ptr [esi + 0x110] */ { const u32 m_ = (u32)(esi + 0x110u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458f0bu; SAVEALL; call_ind(c, t_); RETCHK(0x458f0bu, 0x458f05u); LOADALL; }
  /* 00458f0b mov esi, eax */ { esi = (u32)(eax); }
  /* 00458f0d lea edx, [ebp - 0x20c] */ edx = (u32)((u32)(ebp + 0xfffffdf4u));
  /* 00458f13 call 0x461da0 */ esp -= 4; M32(esp) = 0x458f18u; SAVEALL; F_00461da0(c); ABI_CHECK(0x461da0u, 0x458f13u); RETCHK(0x458f18u, 0x458f13u); LOADALL;
  /* 00458f18 or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00458f1b mov dword ptr [ebp - 0x208], edi */ { const u32 m_ = (u32)(ebp + 0xfffffdf8u); M32(m_) = (u32)(edi); }
  /* 00458f21 mov dword ptr [ebp - 0x204], edi */ { const u32 m_ = (u32)(ebp + 0xfffffdfcu); M32(m_) = (u32)(edi); }
L_00458f27:;
  /* 00458f27 lea ecx, [ebp - 0x20c] */ ecx = (u32)((u32)(ebp + 0xfffffdf4u));
  /* 00458f2d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00458f2e call 0x462050 */ esp -= 4; M32(esp) = 0x458f33u; SAVEALL; F_00462050(c); ABI_CHECK(0x462050u, 0x458f2eu); RETCHK(0x458f33u, 0x458f2eu); LOADALL;
  /* 00458f33 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00458f36 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00458f37 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00458f38 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00458f39 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00458f3b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00458f3c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00458f3f:;
  /* 00458f3f mov ecx, dword ptr [ebx + 0x1e8] */ { const u32 m_ = (u32)(ebx + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 00458f45 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00458f47 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00458f49 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 00458f4b call dword ptr [edx + 0x128] */ { const u32 m_ = (u32)(edx + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458f51u; SAVEALL; call_ind(c, t_); RETCHK(0x458f51u, 0x458f4bu); LOADALL; }
  /* 00458f51 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458f52 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00458f54 call dword ptr [edi + 0x110] */ { const u32 m_ = (u32)(edi + 0x110u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458f5au; SAVEALL; call_ind(c, t_); RETCHK(0x458f5au, 0x458f54u); LOADALL; }
  /* 00458f5a mov esi, eax */ { esi = (u32)(eax); }
  /* 00458f5c call 0x556030 */ esp -= 4; M32(esp) = 0x458f61u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x458f5cu); RETCHK(0x458f61u, 0x458f5cu); LOADALL;
  /* 00458f61 mov edx, esi */ { edx = (u32)(esi); }
  /* 00458f63 mov esi, eax */ { esi = (u32)(eax); }
  /* 00458f65 call 0x555a00 */ esp -= 4; M32(esp) = 0x458f6au; SAVEALL; F_00555a00(c); ABI_CHECK(0x555a00u, 0x458f65u); RETCHK(0x458f6au, 0x458f65u); LOADALL;
  /* 00458f6a mov esi, eax */ { esi = (u32)(eax); }
  /* 00458f6c lea eax, [esi + 0xbc] */ eax = (u32)((u32)(esi + 0xbcu));
  /* 00458f72 call 0x48c970 */ esp -= 4; M32(esp) = 0x458f77u; SAVEALL; F_0048c970(c); ABI_CHECK(0x48c970u, 0x458f72u); RETCHK(0x458f77u, 0x458f72u); LOADALL;
  /* 00458f77 mov edx, eax */ { edx = (u32)(eax); }
  /* 00458f79 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00458f7b test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458f7d mov ecx, 0x40 */ { ecx = (u32)(0x40u); }
  /* 00458f82 lea edi, [ebp - 0x30c] */ edi = (u32)((u32)(ebp + 0xfffffcf4u));
  /* 00458f88 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00458f8a jle 0x458fa3 */ if ((ZF_|LT_)) goto L_00458fa3;
  /* 00458f8c mov esi, dword ptr [esi + 0xc0] */ { const u32 m_ = (u32)(esi + 0xc0u); esi = (u32)(M32(m_)); }
L_00458f92:;
  /* 00458f92 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00458f94 mov dword ptr [ebp + eax*4 - 0x30c], ecx */ { const u32 m_ = (u32)(ebp + eax * 4u + 0xfffffcf4u); M32(m_) = (u32)(ecx); }
  /* 00458f9b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00458f9c add esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00458f9f cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00458fa1 jl 0x458f92 */ if (LT_) goto L_00458f92;
L_00458fa3:;
  /* 00458fa3 mov eax, dword ptr [ebx + 0x1ec] */ { const u32 m_ = (u32)(ebx + 0x1ecu); eax = (u32)(M32(m_)); }
  /* 00458fa9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00458faa lea edx, [ebp - 0x30c] */ edx = (u32)((u32)(ebp + 0xfffffcf4u));
  /* 00458fb0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00458fb1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458fb2 call 0x462280 */ esp -= 4; M32(esp) = 0x458fb7u; SAVEALL; F_00462280(c); ABI_CHECK(0x462280u, 0x458fb2u); RETCHK(0x458fb7u, 0x458fb2u); LOADALL;
  /* 00458fb7 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00458fba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00458fbb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00458fbc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00458fbd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00458fbf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00458fc0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00458fc3:;
  /* 00458fc3 mov esi, dword ptr [ebx + 0x1ec] */ { const u32 m_ = (u32)(ebx + 0x1ecu); esi = (u32)(M32(m_)); }
  /* 00458fc9 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458fcb je 0x458fd2 */ if (ZF_) goto L_00458fd2;
  /* 00458fcd call 0x503090 */ esp -= 4; M32(esp) = 0x458fd2u; SAVEALL; F_00503090(c); ABI_CHECK(0x503090u, 0x458fcdu); RETCHK(0x458fd2u, 0x458fcdu); LOADALL;
L_00458fd2:;
  /* 00458fd2 mov eax, dword ptr [ebx + 0x224] */ { const u32 m_ = (u32)(ebx + 0x224u); eax = (u32)(M32(m_)); }
  /* 00458fd8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00458fda je 0x459039 */ if (ZF_) goto L_00459039;
  /* 00458fdc mov ecx, dword ptr [ebx + 0x1e8] */ { const u32 m_ = (u32)(ebx + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 00458fe2 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00458fe4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00458fe6 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 00458fe8 call dword ptr [edx + 0x128] */ { const u32 m_ = (u32)(edx + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458feeu; SAVEALL; call_ind(c, t_); RETCHK(0x458feeu, 0x458fe8u); LOADALL; }
  /* 00458fee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00458fef mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00458ff1 call dword ptr [edi + 0x110] */ { const u32 m_ = (u32)(edi + 0x110u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x458ff7u; SAVEALL; call_ind(c, t_); RETCHK(0x458ff7u, 0x458ff1u); LOADALL; }
  /* 00458ff7 mov esi, eax */ { esi = (u32)(eax); }
  /* 00458ff9 call 0x556030 */ esp -= 4; M32(esp) = 0x458ffeu; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x458ff9u); RETCHK(0x458ffeu, 0x458ff9u); LOADALL;
  /* 00458ffe mov edx, esi */ { edx = (u32)(esi); }
  /* 00459000 mov esi, eax */ { esi = (u32)(eax); }
  /* 00459002 call 0x555a00 */ esp -= 4; M32(esp) = 0x459007u; SAVEALL; F_00555a00(c); ABI_CHECK(0x555a00u, 0x459002u); RETCHK(0x459007u, 0x459002u); LOADALL;
  /* 00459007 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459009 je 0x459039 */ if (ZF_) goto L_00459039;
  /* 0045900b cmp dword ptr [eax + 0x3c], 0x10 */ { const u32 m_ = (u32)(eax + 0x3cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045900f jb 0x459016 */ if (CF_) goto L_00459016;
  /* 00459011 mov eax, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); eax = (u32)(M32(m_)); }
  /* 00459014 jmp 0x459019 */ goto L_00459019;
L_00459016:;
  /* 00459016 add eax, 0x28 */ { u32 a_ = eax, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00459019:;
  /* 00459019 mov ebx, dword ptr [ebx + 0x224] */ { const u32 m_ = (u32)(ebx + 0x224u); ebx = (u32)(M32(m_)); }
  /* 0045901f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459020 call 0x50dc70 */ esp -= 4; M32(esp) = 0x459025u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x459020u); RETCHK(0x459025u, 0x459020u); LOADALL;
  /* 00459025 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00459027 je 0x459039 */ if (ZF_) goto L_00459039;
  /* 00459029 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045902c mov ecx, dword ptr [eax + 0x224] */ { const u32 m_ = (u32)(eax + 0x224u); ecx = (u32)(M32(m_)); }
  /* 00459032 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00459034 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00459036 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459039u; SAVEALL; call_ind(c, t_); RETCHK(0x459039u, 0x459036u); LOADALL; }
L_00459039:;
  /* 00459039 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045903a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0045903b:;
  /* 0045903b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045903c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045903e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045903f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00459060(CPU *c) {
  NATIVE_HOOK(0x459060u) REGS; LOADALL;
L_00459060:;
  /* 00459060 mov eax, dword ptr [0x696074] */ { const u32 m_ = (u32)(0x696074u); eax = (u32)(M32(m_)); }
  /* 00459065 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00459066 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00459068 mov ecx, dword ptr [0x696078] */ { const u32 m_ = (u32)(0x696078u); ecx = (u32)(M32(m_)); }
  /* 0045906e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045906f call 0x462ba0 */ esp -= 4; M32(esp) = 0x459074u; SAVEALL; F_00462ba0(c); ABI_CHECK(0x462ba0u, 0x45906fu); RETCHK(0x459074u, 0x45906fu); LOADALL;
  /* 00459074 mov eax, dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 0045907a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045907d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045907f je 0x45909f */ if (ZF_) goto L_0045909f;
  /* 00459081 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00459083 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00459085 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00459086 call dword ptr [edx + 0x128] */ { const u32 m_ = (u32)(edx + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45908cu; SAVEALL; call_ind(c, t_); RETCHK(0x45908cu, 0x459086u); LOADALL; }
  /* 0045908c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0045908e mov eax, dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 00459094 mov edi, 0x6962f8 */ { edi = (u32)(0x6962f8u); }
  /* 00459099 call 0x511910 */ esp -= 4; M32(esp) = 0x45909eu; SAVEALL; F_00511910(c); ABI_CHECK(0x511910u, 0x459099u); RETCHK(0x45909eu, 0x459099u); LOADALL;
  /* 0045909e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0045909f:;
  /* 0045909f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004590a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004590b0(CPU *c) {
  NATIVE_HOOK(0x4590b0u) REGS; LOADALL;
L_004590b0:;
  /* 004590b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004590b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004590b3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004590b4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004590b5 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004590b7 mov eax, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 004590bd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004590bf je 0x459163 */ if (ZF_) goto L_00459163;
  /* 004590c5 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004590c7 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004590c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004590ca call dword ptr [eax + 0x128] */ { const u32 m_ = (u32)(eax + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4590d0u; SAVEALL; call_ind(c, t_); RETCHK(0x4590d0u, 0x4590cau); LOADALL; }
  /* 004590d0 mov edx, eax */ { edx = (u32)(eax); }
  /* 004590d2 call 0x463d00 */ esp -= 4; M32(esp) = 0x4590d7u; SAVEALL; F_00463d00(c); ABI_CHECK(0x463d00u, 0x4590d2u); RETCHK(0x4590d7u, 0x4590d2u); LOADALL;
  /* 004590d7 mov esi, eax */ { esi = (u32)(eax); }
  /* 004590d9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004590db call 0x4588c0 */ esp -= 4; M32(esp) = 0x4590e0u; SAVEALL; F_004588c0(c); ABI_CHECK(0x4588c0u, 0x4590dbu); RETCHK(0x4590e0u, 0x4590dbu); LOADALL;
  /* 004590e0 mov al, byte ptr [edi + 0x20c] */ { const u32 m_ = (u32)(edi + 0x20cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004590e6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004590e8 je 0x4590f0 */ if (ZF_) goto L_004590f0;
  /* 004590ea push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004590eb call 0x458cf0 */ esp -= 4; M32(esp) = 0x4590f0u; SAVEALL; F_00458cf0(c); ABI_CHECK(0x458cf0u, 0x4590ebu); RETCHK(0x4590f0u, 0x4590ebu); LOADALL;
L_004590f0:;
  /* 004590f0 mov al, byte ptr [edi + 0x20d] */ { const u32 m_ = (u32)(edi + 0x20du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004590f6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004590f8 je 0x459101 */ if (ZF_) goto L_00459101;
  /* 004590fa mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004590fc mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004590fe call dword ptr [edx + 0x4c] */ { const u32 m_ = (u32)(edx + 0x4cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459101u; SAVEALL; call_ind(c, t_); RETCHK(0x459101u, 0x4590feu); LOADALL; }
L_00459101:;
  /* 00459101 call 0x458bd0 */ esp -= 4; M32(esp) = 0x459106u; SAVEALL; F_00458bd0(c); ABI_CHECK(0x458bd0u, 0x459101u); RETCHK(0x459106u, 0x459101u); LOADALL;
  /* 00459106 call 0x556030 */ esp -= 4; M32(esp) = 0x45910bu; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x459106u); RETCHK(0x45910bu, 0x459106u); LOADALL;
  /* 0045910b mov edx, esi */ { edx = (u32)(esi); }
  /* 0045910d mov esi, eax */ { esi = (u32)(eax); }
  /* 0045910f call 0x555a00 */ esp -= 4; M32(esp) = 0x459114u; SAVEALL; F_00555a00(c); ABI_CHECK(0x555a00u, 0x45910fu); RETCHK(0x459114u, 0x45910fu); LOADALL;
  /* 00459114 mov edi, eax */ { edi = (u32)(eax); }
  /* 00459116 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459118 je 0x459162 */ if (ZF_) goto L_00459162;
  /* 0045911a mov eax, dword ptr [edi + 0x80] */ { const u32 m_ = (u32)(edi + 0x80u); eax = (u32)(M32(m_)); }
  /* 00459120 call 0x464620 */ esp -= 4; M32(esp) = 0x459125u; SAVEALL; F_00464620(c); ABI_CHECK(0x464620u, 0x459120u); RETCHK(0x459125u, 0x459120u); LOADALL;
  /* 00459125 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00459127 je 0x459162 */ if (ZF_) goto L_00459162;
  /* 00459129 mov eax, dword ptr [0x685708] */ { const u32 m_ = (u32)(0x685708u); eax = (u32)(M32(m_)); }
  /* 0045912e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459130 jle 0x459162 */ if ((ZF_|LT_)) goto L_00459162;
  /* 00459132 call 0x550820 */ esp -= 4; M32(esp) = 0x459137u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x459132u); RETCHK(0x459137u, 0x459132u); LOADALL;
  /* 00459137 mov esi, dword ptr [0x685708] */ { const u32 m_ = (u32)(0x685708u); esi = (u32)(M32(m_)); }
  /* 0045913d mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00459140 call 0x531380 */ esp -= 4; M32(esp) = 0x459145u; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x459140u); RETCHK(0x459145u, 0x459140u); LOADALL;
  /* 00459145 mov eax, dword ptr [edi + 0x80] */ { const u32 m_ = (u32)(edi + 0x80u); eax = (u32)(M32(m_)); }
  /* 0045914b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045914d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045914f push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00459154 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459155 call 0x464580 */ esp -= 4; M32(esp) = 0x45915au; SAVEALL; F_00464580(c); ABI_CHECK(0x464580u, 0x459155u); RETCHK(0x45915au, 0x459155u); LOADALL;
  /* 0045915a add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045915d mov dword ptr [0x685708], eax */ { const u32 m_ = (u32)(0x685708u); M32(m_) = (u32)(eax); }
L_00459162:;
  /* 00459162 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00459163:;
  /* 00459163 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00459164 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00459166 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00459167 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00459170(CPU *c) {
  NATIVE_HOOK(0x459170u) REGS; LOADALL;
L_00459170:;
  /* 00459170 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00459171 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00459173 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00459176 cmp eax, 0xd */ { u32 a_ = eax, b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00459179 jne 0x45918f */ if (!ZF_) goto L_0045918f;
  /* 0045917b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0045917d mov dword ptr [0x696078], edx */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(edx); }
  /* 00459183 mov dword ptr [0x696074], edx */ { const u32 m_ = (u32)(0x696074u); M32(m_) = (u32)(edx); }
  /* 00459189 mov dword ptr [0x696070], edx */ { const u32 m_ = (u32)(0x696070u); M32(m_) = (u32)(edx); }
L_0045918f:;
  /* 0045918f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00459191 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459192 call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459195u; SAVEALL; call_ind(c, t_); RETCHK(0x459195u, 0x459192u); LOADALL; }
  /* 00459195 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00459196 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004591a0(CPU *c) {
  NATIVE_HOOK(0x4591a0u) REGS; LOADALL;
L_004591a0:;
  /* 004591a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004591a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004591a3 cmp dword ptr [ebp + 8], 6 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004591a7 jne 0x4591bd */ if (!ZF_) goto L_004591bd;
  /* 004591a9 mov edx, dword ptr [0x696080] */ { const u32 m_ = (u32)(0x696080u); edx = (u32)(M32(m_)); }
  /* 004591af push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004591b1 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004591b3 call 0x461900 */ esp -= 4; M32(esp) = 0x4591b8u; SAVEALL; F_00461900(c); ABI_CHECK(0x461900u, 0x4591b3u); RETCHK(0x4591b8u, 0x4591b3u); LOADALL;
  /* 004591b8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004591bb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004591bc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004591bd:;
  /* 004591bd push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 004591c2 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 004591c7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004591c9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004591cb push 0x89 */ { u32 v_ = 0x89u; esp -= 4; M32(esp) = v_; }
  /* 004591d0 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 004591d5 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4591dbu; SAVEALL; call_ind(c, t_); RETCHK(0x4591dbu, 0x4591d5u); LOADALL; }
  /* 004591db push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004591dc push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004591de push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004591e0 call 0x50b090 */ esp -= 4; M32(esp) = 0x4591e5u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x4591e0u); RETCHK(0x4591e5u, 0x4591e0u); LOADALL;
  /* 004591e5 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004591e8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004591e9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004591f0(CPU *c) {
  NATIVE_HOOK(0x4591f0u) REGS; LOADALL;
L_004591f0:;
  /* 004591f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004591f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004591f3 cmp dword ptr [ebp + 8], 6 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004591f7 jne 0x459209 */ if (!ZF_) goto L_00459209;
  /* 004591f9 mov eax, dword ptr [0x696080] */ { const u32 m_ = (u32)(0x696080u); eax = (u32)(M32(m_)); }
  /* 004591fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004591ff call 0x461880 */ esp -= 4; M32(esp) = 0x459204u; SAVEALL; F_00461880(c); ABI_CHECK(0x461880u, 0x4591ffu); RETCHK(0x459204u, 0x4591ffu); LOADALL;
  /* 00459204 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00459207 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00459208 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00459209:;
  /* 00459209 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0045920e push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 00459213 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459215 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459217 push 0x89 */ { u32 v_ = 0x89u; esp -= 4; M32(esp) = v_; }
  /* 0045921c push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 00459221 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459227u; SAVEALL; call_ind(c, t_); RETCHK(0x459227u, 0x459221u); LOADALL; }
  /* 00459227 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459228 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0045922a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045922c call 0x50b090 */ esp -= 4; M32(esp) = 0x459231u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x45922cu); RETCHK(0x459231u, 0x45922cu); LOADALL;
  /* 00459231 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00459234 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00459235 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00459240(CPU *c) {
  NATIVE_HOOK(0x459240u) REGS; LOADALL;
L_00459240:;
  /* 00459240 mov eax, dword ptr [0x696070] */ { const u32 m_ = (u32)(0x696070u); eax = (u32)(M32(m_)); }
  /* 00459245 mov ecx, dword ptr [0x696078] */ { const u32 m_ = (u32)(0x696078u); ecx = (u32)(M32(m_)); }
  /* 0045924b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0045924d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045924e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045924f mov ecx, dword ptr [0x696074] */ { const u32 m_ = (u32)(0x696074u); ecx = (u32)(M32(m_)); }
  /* 00459255 call 0x4638d0 */ esp -= 4; M32(esp) = 0x45925au; SAVEALL; F_004638d0(c); ABI_CHECK(0x4638d0u, 0x459255u); RETCHK(0x45925au, 0x459255u); LOADALL;
  /* 0045925a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045925d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00459260(CPU *c) {
  NATIVE_HOOK(0x459260u) REGS; LOADALL;
L_00459260:;
  /* 00459260 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00459261 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00459263 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00459266 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459268 je 0x4593bb */ if (ZF_) goto L_004593bb;
  /* 0045926e mov eax, dword ptr [0x696078] */ { const u32 m_ = (u32)(0x696078u); eax = (u32)(M32(m_)); }
  /* 00459273 cmp eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00459276 ja 0x4592a9 */ if (!(CF_|ZF_)) goto L_004592a9;
  /* 00459278 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00459279 jmp dword ptr [eax*4 + 0x4593e0] */ { const u32 m_ = (u32)(eax * 4u + 0x4593e0u); u32 t_ = M32(m_); switch (t_) { case 0x459280u: goto L_00459280; case 0x4592adu: goto L_004592ad; case 0x459349u: goto L_00459349; default: SAVEALL; call_ind(c, t_); return; } }
L_00459280:;
  /* 00459280 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 00459285 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0045928a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045928c push 0x4591f0 */ { u32 v_ = 0x4591f0u; esp -= 4; M32(esp) = v_; }
L_00459291:;
  /* 00459291 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00459296 call 0x459650 */ esp -= 4; M32(esp) = 0x45929bu; SAVEALL; F_00459650(c); ABI_CHECK(0x459650u, 0x459296u); RETCHK(0x45929bu, 0x459296u); LOADALL;
  /* 0045929b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045929c push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0045929e push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004592a0 call 0x50b090 */ esp -= 4; M32(esp) = 0x4592a5u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x4592a0u); RETCHK(0x4592a5u, 0x4592a0u); LOADALL;
  /* 004592a5 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004592a8:;
  /* 004592a8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_004592a9:;
  /* 004592a9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004592aa ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004592ad:;
  /* 004592ad call 0x556030 */ esp -= 4; M32(esp) = 0x4592b2u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x4592adu); RETCHK(0x4592b2u, 0x4592adu); LOADALL;
  /* 004592b2 mov edx, dword ptr [0x69607c] */ { const u32 m_ = (u32)(0x69607cu); edx = (u32)(M32(m_)); }
  /* 004592b8 mov esi, eax */ { esi = (u32)(eax); }
  /* 004592ba call 0x555a00 */ esp -= 4; M32(esp) = 0x4592bfu; SAVEALL; F_00555a00(c); ABI_CHECK(0x555a00u, 0x4592bau); RETCHK(0x4592bfu, 0x4592bau); LOADALL;
  /* 004592bf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004592c1 je 0x4592a8 */ if (ZF_) goto L_004592a8;
  /* 004592c3 mov ecx, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); ecx = (u32)(M32(m_)); }
  /* 004592c9 mov eax, 0x63efc0 */ { eax = (u32)(0x63efc0u); }
  /* 004592ce mov edi, edi */ { edi = (u32)(edi); }
L_004592d0:;
  /* 004592d0 cmp ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004592d2 je 0x459304 */ if (ZF_) goto L_00459304;
  /* 004592d4 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004592d7 cmp eax, 0x63f048 */ { u32 a_ = eax, b_ = 0x63f048u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004592dc jl 0x4592d0 */ if (LT_) goto L_004592d0;
  /* 004592de mov eax, 0x63f048 */ { eax = (u32)(0x63f048u); }
L_004592e3:;
  /* 004592e3 cmp ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004592e5 je 0x459334 */ if (ZF_) goto L_00459334;
  /* 004592e7 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004592ea cmp eax, 0x63f084 */ { u32 a_ = eax, b_ = 0x63f084u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004592ef jl 0x4592e3 */ if (LT_) goto L_004592e3;
  /* 004592f1 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 004592f6 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 004592fb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004592fd push 0x4591a0 */ { u32 v_ = 0x4591a0u; esp -= 4; M32(esp) = v_; }
  /* 00459302 jmp 0x459291 */ goto L_00459291;
L_00459304:;
  /* 00459304 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 00459309 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0045930e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459310 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459312 push 0xe0 */ { u32 v_ = 0xe0u; esp -= 4; M32(esp) = v_; }
L_00459317:;
  /* 00459317 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0045931c call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459322u; SAVEALL; call_ind(c, t_); RETCHK(0x459322u, 0x45931cu); LOADALL; }
  /* 00459322 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459323 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00459325 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459327 call 0x50b090 */ esp -= 4; M32(esp) = 0x45932cu; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x459327u); RETCHK(0x45932cu, 0x459327u); LOADALL;
  /* 0045932c add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045932f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00459330 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00459331 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00459334:;
  /* 00459334 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 00459339 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0045933e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459340 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459342 push 0x1d6 */ { u32 v_ = 0x1d6u; esp -= 4; M32(esp) = v_; }
  /* 00459347 jmp 0x459317 */ goto L_00459317;
L_00459349:;
  /* 00459349 mov esi, dword ptr [0x69607c] */ { const u32 m_ = (u32)(0x69607cu); esi = (u32)(M32(m_)); }
  /* 0045934f call 0x464390 */ esp -= 4; M32(esp) = 0x459354u; SAVEALL; F_00464390(c); ABI_CHECK(0x464390u, 0x45934fu); RETCHK(0x459354u, 0x45934fu); LOADALL;
  /* 00459354 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00459356 je 0x459388 */ if (ZF_) goto L_00459388;
  /* 00459358 push 0xe1 */ { u32 v_ = 0xe1u; esp -= 4; M32(esp) = v_; }
  /* 0045935d push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 00459362 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459368u; SAVEALL; call_ind(c, t_); RETCHK(0x459368u, 0x459362u); LOADALL; }
  /* 00459368 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0045936d push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 00459372 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459374 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459376 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459377 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00459379 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045937b call 0x50b090 */ esp -= 4; M32(esp) = 0x459380u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x45937bu); RETCHK(0x459380u, 0x45937bu); LOADALL;
  /* 00459380 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00459383 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00459384 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00459385 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00459388:;
  /* 00459388 push 0xe2 */ { u32 v_ = 0xe2u; esp -= 4; M32(esp) = v_; }
  /* 0045938d push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 00459392 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459398u; SAVEALL; call_ind(c, t_); RETCHK(0x459398u, 0x459392u); LOADALL; }
  /* 00459398 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0045939d push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 004593a2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004593a4 push 0x4591a0 */ { u32 v_ = 0x4591a0u; esp -= 4; M32(esp) = v_; }
  /* 004593a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004593aa push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 004593ac push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004593ae call 0x50b090 */ esp -= 4; M32(esp) = 0x4593b3u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x4593aeu); RETCHK(0x4593b3u, 0x4593aeu); LOADALL;
  /* 004593b3 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004593b6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004593b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004593b8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004593bb:;
  /* 004593bb push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 004593c0 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 004593c5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004593c7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004593c9 add ecx, 0xc4 */ { u32 a_ = ecx, b_ = 0xc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004593cf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004593d0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004593d2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004593d4 call 0x50b090 */ esp -= 4; M32(esp) = 0x4593d9u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x4593d4u); RETCHK(0x4593d9u, 0x4593d4u); LOADALL;
  /* 004593d9 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004593dc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004593dd ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00459400(CPU *c) {
  NATIVE_HOOK(0x459400u) REGS; LOADALL;
L_00459400:;
  /* 00459400 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00459401 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00459403 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00459406 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459408 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0045940d push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 00459412 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459414 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459416 je 0x459433 */ if (ZF_) goto L_00459433;
  /* 00459418 mov eax, 2 */ { eax = (u32)(0x2u); }
  /* 0045941d call 0x459650 */ esp -= 4; M32(esp) = 0x459422u; SAVEALL; F_00459650(c); ABI_CHECK(0x459650u, 0x45941du); RETCHK(0x459422u, 0x45941du); LOADALL;
  /* 00459422 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459423 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00459425 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459427 call 0x50b090 */ esp -= 4; M32(esp) = 0x45942cu; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x459427u); RETCHK(0x45942cu, 0x459427u); LOADALL;
  /* 0045942c add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045942f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00459430 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00459433:;
  /* 00459433 add ecx, 0xc4 */ { u32 a_ = ecx, b_ = 0xc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00459439 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045943a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0045943c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045943e call 0x50b090 */ esp -= 4; M32(esp) = 0x459443u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x45943eu); RETCHK(0x459443u, 0x45943eu); LOADALL;
  /* 00459443 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00459446 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00459447 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00459450(CPU *c) {
  NATIVE_HOOK(0x459450u) REGS; LOADALL;
L_00459450:;
  /* 00459450 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00459451 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00459453 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00459456 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459458 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0045945d push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 00459462 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459464 je 0x459480 */ if (ZF_) goto L_00459480;
  /* 00459466 push 0x459240 */ { u32 v_ = 0x459240u; esp -= 4; M32(esp) = v_; }
  /* 0045946b push 0x6955c8 */ { u32 v_ = 0x6955c8u; esp -= 4; M32(esp) = v_; }
  /* 00459470 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00459472 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459474 call 0x50b090 */ esp -= 4; M32(esp) = 0x459479u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x459474u); RETCHK(0x459479u, 0x459474u); LOADALL;
  /* 00459479 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045947c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045947d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00459480:;
  /* 00459480 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459482 add ecx, 0xc4 */ { u32 a_ = ecx, b_ = 0xc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00459488 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00459489 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0045948b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045948d call 0x50b090 */ esp -= 4; M32(esp) = 0x459492u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x45948du); RETCHK(0x459492u, 0x45948du); LOADALL;
  /* 00459492 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00459495 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00459496 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004594a0(CPU *c) {
  NATIVE_HOOK(0x4594a0u) REGS; LOADALL;
L_004594a0:;
  /* 004594a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004594a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004594a3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004594a6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004594a8 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 004594ad push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 004594b2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004594b4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004594b6 je 0x4594cd */ if (ZF_) goto L_004594cd;
  /* 004594b8 push 0x6953c8 */ { u32 v_ = 0x6953c8u; esp -= 4; M32(esp) = v_; }
  /* 004594bd push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004594bf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004594c1 call 0x50b090 */ esp -= 4; M32(esp) = 0x4594c6u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x4594c1u); RETCHK(0x4594c6u, 0x4594c1u); LOADALL;
  /* 004594c6 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004594c9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004594ca ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004594cd:;
  /* 004594cd add ecx, 0xc4 */ { u32 a_ = ecx, b_ = 0xc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004594d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004594d4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004594d6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004594d8 call 0x50b090 */ esp -= 4; M32(esp) = 0x4594ddu; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x4594d8u); RETCHK(0x4594ddu, 0x4594d8u); LOADALL;
  /* 004594dd add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004594e0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004594e1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004594f0(CPU *c) {
  NATIVE_HOOK(0x4594f0u) REGS; LOADALL;
L_004594f0:;
  /* 004594f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004594f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004594f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004594f5 push 0x61f840 */ { u32 v_ = 0x61f840u; esp -= 4; M32(esp) = v_; }
  /* 004594fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00459500 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459501 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00459508 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045950b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045950c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0045950e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045950f mov esi, dword ptr [ebx + 0x1e8] */ { const u32 m_ = (u32)(ebx + 0x1e8u); esi = (u32)(M32(m_)); }
  /* 00459515 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459517 je 0x45951e */ if (ZF_) goto L_0045951e;
  /* 00459519 call 0x511a60 */ esp -= 4; M32(esp) = 0x45951eu; SAVEALL; F_00511a60(c); ABI_CHECK(0x511a60u, 0x459519u); RETCHK(0x45951eu, 0x459519u); LOADALL;
L_0045951e:;
  /* 0045951e mov eax, dword ptr [ebx + 0x25c] */ { const u32 m_ = (u32)(ebx + 0x25cu); eax = (u32)(M32(m_)); }
  /* 00459524 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459526 je 0x459616 */ if (ZF_) goto L_00459616;
  /* 0045952c mov ecx, dword ptr [0x7a6984] */ { const u32 m_ = (u32)(0x7a6984u); ecx = (u32)(M32(m_)); }
  /* 00459532 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459534 je 0x459616 */ if (ZF_) goto L_00459616;
  /* 0045953a mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045953c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045953d call dword ptr [eax + 0x128] */ { const u32 m_ = (u32)(eax + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459543u; SAVEALL; call_ind(c, t_); RETCHK(0x459543u, 0x45953du); LOADALL; }
  /* 00459543 mov edi, dword ptr [0x7a6984] */ { const u32 m_ = (u32)(0x7a6984u); edi = (u32)(M32(m_)); }
  /* 00459549 call 0x5118c0 */ esp -= 4; M32(esp) = 0x45954eu; SAVEALL; F_005118c0(c); ABI_CHECK(0x5118c0u, 0x459549u); RETCHK(0x45954eu, 0x459549u); LOADALL;
  /* 0045954e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459550 je 0x4595b9 */ if (ZF_) goto L_004595b9;
  /* 00459552 mov ecx, dword ptr [ebx + 0x25c] */ { const u32 m_ = (u32)(ebx + 0x25cu); ecx = (u32)(M32(m_)); }
  /* 00459558 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0045955a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0045955c call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45955fu; SAVEALL; call_ind(c, t_); RETCHK(0x45955fu, 0x45955cu); LOADALL; }
  /* 0045955f mov ecx, dword ptr [0x7a6984] */ { const u32 m_ = (u32)(0x7a6984u); ecx = (u32)(M32(m_)); }
  /* 00459565 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00459567 call dword ptr [eax + 0x128] */ { const u32 m_ = (u32)(eax + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45956du; SAVEALL; call_ind(c, t_); RETCHK(0x45956du, 0x459567u); LOADALL; }
  /* 0045956d mov edi, dword ptr [0x7a6984] */ { const u32 m_ = (u32)(0x7a6984u); edi = (u32)(M32(m_)); }
  /* 00459573 call 0x5118c0 */ esp -= 4; M32(esp) = 0x459578u; SAVEALL; F_005118c0(c); ABI_CHECK(0x5118c0u, 0x459573u); RETCHK(0x459578u, 0x459573u); LOADALL;
  /* 00459578 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459579 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0045957c call 0x403060 */ esp -= 4; M32(esp) = 0x459581u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x45957cu); RETCHK(0x459581u, 0x45957cu); LOADALL;
  /* 00459581 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00459588 mov esi, dword ptr [ebx + 0x25c] */ { const u32 m_ = (u32)(ebx + 0x25cu); esi = (u32)(M32(m_)); }
  /* 0045958e lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00459591 call 0x5224b0 */ esp -= 4; M32(esp) = 0x459596u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x459591u); RETCHK(0x459596u, 0x459591u); LOADALL;
  /* 00459596 cmp dword ptr [ebp - 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045959a jb 0x459615 */ if (CF_) goto L_00459615;
  /* 0045959c mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 0045959f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004595a0 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4595a5u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4595a0u); RETCHK(0x4595a5u, 0x4595a0u); LOADALL;
  /* 004595a5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004595a8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004595a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004595aa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004595ab mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004595ae mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004595b5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004595b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004595b8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004595b9:;
  /* 004595b9 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 004595be lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 004595c1 call 0x403060 */ esp -= 4; M32(esp) = 0x4595c6u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x4595c1u); RETCHK(0x4595c6u, 0x4595c1u); LOADALL;
  /* 004595c6 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 004595cd mov esi, dword ptr [ebx + 0x25c] */ { const u32 m_ = (u32)(ebx + 0x25cu); esi = (u32)(M32(m_)); }
  /* 004595d3 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 004595d6 call 0x5224b0 */ esp -= 4; M32(esp) = 0x4595dbu; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x4595d6u); RETCHK(0x4595dbu, 0x4595d6u); LOADALL;
  /* 004595db mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004595e2 cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004595e6 jb 0x4595f4 */ if (CF_) goto L_004595f4;
  /* 004595e8 mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 004595eb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004595ec call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4595f1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4595ecu); RETCHK(0x4595f1u, 0x4595ecu); LOADALL;
  /* 004595f1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004595f4:;
  /* 004595f4 mov ebx, dword ptr [ebx + 0x25c] */ { const u32 m_ = (u32)(ebx + 0x25cu); ebx = (u32)(M32(m_)); }
  /* 004595fa mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 004595fc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004595fe mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00459600 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 00459607 mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 0045960e mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 00459612 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459615u; SAVEALL; call_ind(c, t_); RETCHK(0x459615u, 0x459612u); LOADALL; }
L_00459615:;
  /* 00459615 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00459616:;
  /* 00459616 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00459619 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045961a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045961b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00459622 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00459624 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00459625 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00459630(CPU *c) {
  NATIVE_HOOK(0x459630u) REGS; LOADALL;
L_00459630:;
  /* 00459630 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00459631 mov esi, dword ptr [eax + 0x1e8] */ { const u32 m_ = (u32)(eax + 0x1e8u); esi = (u32)(M32(m_)); }
  /* 00459637 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459639 je 0x459640 */ if (ZF_) goto L_00459640;
  /* 0045963b call 0x511a60 */ esp -= 4; M32(esp) = 0x459640u; SAVEALL; F_00511a60(c); ABI_CHECK(0x511a60u, 0x45963bu); RETCHK(0x459640u, 0x45963bu); LOADALL;
L_00459640:;
  /* 00459640 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00459641 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00459650(CPU *c) {
  NATIVE_HOOK(0x459650u) REGS; LOADALL;
L_00459650:;
  /* 00459650 mov ecx, dword ptr [0x696078] */ { const u32 m_ = (u32)(0x696078u); ecx = (u32)(M32(m_)); }
  /* 00459656 cmp ecx, 5 */ { u32 a_ = ecx, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00459659 ja 0x4596be */ if (!(CF_|ZF_)) goto L_004596be;
  /* 0045965b jmp dword ptr [ecx*4 + 0x4596c4] */ { const u32 m_ = (u32)(ecx * 4u + 0x4596c4u); u32 t_ = M32(m_); switch (t_) { case 0x459662u: goto L_00459662; case 0x45966cu: goto L_0045966c; case 0x459682u: goto L_00459682; case 0x4596beu: goto L_004596be; default: SAVEALL; call_ind(c, t_); return; } }
L_00459662:;
  /* 00459662 sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00459665 je 0x45967b */ if (ZF_) goto L_0045967b;
  /* 00459667 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00459668 je 0x459674 */ if (ZF_) goto L_00459674;
  /* 0045966a jmp 0x45968a */ goto L_0045968a;
L_0045966c:;
  /* 0045966c sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045966f je 0x45967b */ if (ZF_) goto L_0045967b;
  /* 00459671 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00459672 jne 0x45968a */ if (!ZF_) goto L_0045968a;
L_00459674:;
  /* 00459674 push 0xe2 */ { u32 v_ = 0xe2u; esp -= 4; M32(esp) = v_; }
  /* 00459679 jmp 0x4596a0 */ goto L_004596a0;
L_0045967b:;
  /* 0045967b push 0xc9 */ { u32 v_ = 0xc9u; esp -= 4; M32(esp) = v_; }
  /* 00459680 jmp 0x4596a0 */ goto L_004596a0;
L_00459682:;
  /* 00459682 sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00459685 je 0x45969b */ if (ZF_) goto L_0045969b;
  /* 00459687 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00459688 je 0x459694 */ if (ZF_) goto L_00459694;
L_0045968a:;
  /* 0045968a dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0045968b jne 0x4596be */ if (!ZF_) goto L_004596be;
  /* 0045968d push 0xe3 */ { u32 v_ = 0xe3u; esp -= 4; M32(esp) = v_; }
  /* 00459692 jmp 0x4596a0 */ goto L_004596a0;
L_00459694:;
  /* 00459694 push 0xe5 */ { u32 v_ = 0xe5u; esp -= 4; M32(esp) = v_; }
  /* 00459699 jmp 0x4596a0 */ goto L_004596a0;
L_0045969b:;
  /* 0045969b push 0xe4 */ { u32 v_ = 0xe4u; esp -= 4; M32(esp) = v_; }
L_004596a0:;
  /* 004596a0 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 004596a5 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4596abu; SAVEALL; call_ind(c, t_); RETCHK(0x4596abu, 0x4596a5u); LOADALL; }
  /* 004596ab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004596ac push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 004596b1 push 0x6951c8 */ { u32 v_ = 0x6951c8u; esp -= 4; M32(esp) = v_; }
  /* 004596b6 call 0x5fe928 */ esp -= 4; M32(esp) = 0x4596bbu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4596b6u); RETCHK(0x4596bbu, 0x4596b6u); LOADALL;
  /* 004596bb add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004596be:;
  /* 004596be mov eax, 0x6951c8 */ { eax = (u32)(0x6951c8u); }
  /* 004596c3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004596e0(CPU *c) {
  NATIVE_HOOK(0x4596e0u) REGS; LOADALL;
L_004596e0:;
  /* 004596e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004596e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004596e3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004596e6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004596e8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004596e9 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004596eb jne 0x459722 */ if (!ZF_) goto L_00459722;
  /* 004596ed mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004596f0 mov cl, byte ptr [eax + 0xd88] */ { const u32 m_ = (u32)(eax + 0xd88u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004596f6 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004596f8 je 0x459722 */ if (ZF_) goto L_00459722;
  /* 004596fa mov eax, dword ptr [0x696074] */ { const u32 m_ = (u32)(0x696074u); eax = (u32)(M32(m_)); }
  /* 004596ff cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00459702 je 0x459709 */ if (ZF_) goto L_00459709;
  /* 00459704 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00459707 jne 0x459722 */ if (!ZF_) goto L_00459722;
L_00459709:;
  /* 00459709 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0045970b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0045970d call dword ptr [edx + 0x50] */ { const u32 m_ = (u32)(edx + 0x50u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459710u; SAVEALL; call_ind(c, t_); RETCHK(0x459710u, 0x45970du); LOADALL; }
  /* 00459710 mov ecx, dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 00459716 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459718 je 0x459722 */ if (ZF_) goto L_00459722;
  /* 0045971a mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045971c call dword ptr [eax + 0x13c] */ { const u32 m_ = (u32)(eax + 0x13cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459722u; SAVEALL; call_ind(c, t_); RETCHK(0x459722u, 0x45971cu); LOADALL; }
L_00459722:;
  /* 00459722 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00459723 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00459724 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00459730(CPU *c) {
  NATIVE_HOOK(0x459730u) REGS; LOADALL;
L_00459730:;
  /* 00459730 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00459731 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00459733 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00459735 push 0x622b5c */ { u32 v_ = 0x622b5cu; esp -= 4; M32(esp) = v_; }
  /* 0045973a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00459740 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459741 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00459748 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00459749 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045974a mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0045974c mov eax, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 00459752 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459754 je 0x4599b0 */ if (ZF_) goto L_004599b0;
  /* 0045975a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045975b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0045975d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045975f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00459760 call dword ptr [eax + 0x128] */ { const u32 m_ = (u32)(eax + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459766u; SAVEALL; call_ind(c, t_); RETCHK(0x459766u, 0x459760u); LOADALL; }
  /* 00459766 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00459768 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0045976a call 0x463d00 */ esp -= 4; M32(esp) = 0x45976fu; SAVEALL; F_00463d00(c); ABI_CHECK(0x463d00u, 0x45976au); RETCHK(0x45976fu, 0x45976au); LOADALL;
  /* 0045976f mov esi, eax */ { esi = (u32)(eax); }
  /* 00459771 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00459773 mov dword ptr [0x696088], esi */ { const u32 m_ = (u32)(0x696088u); M32(m_) = (u32)(esi); }
  /* 00459779 call 0x463cd0 */ esp -= 4; M32(esp) = 0x45977eu; SAVEALL; F_00463cd0(c); ABI_CHECK(0x463cd0u, 0x459779u); RETCHK(0x45977eu, 0x459779u); LOADALL;
  /* 0045977e mov ecx, dword ptr [0x696074] */ { const u32 m_ = (u32)(0x696074u); ecx = (u32)(M32(m_)); }
  /* 00459784 mov dword ptr [0x69608c], eax */ { const u32 m_ = (u32)(0x69608cu); M32(m_) = (u32)(eax); }
  /* 00459789 mov eax, dword ptr [0x696078] */ { const u32 m_ = (u32)(0x696078u); eax = (u32)(M32(m_)); }
  /* 0045978e cmp eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00459791 mov dword ptr [0x696194], ecx */ { const u32 m_ = (u32)(0x696194u); M32(m_) = (u32)(ecx); }
  /* 00459797 mov dword ptr [0x696190], eax */ { const u32 m_ = (u32)(0x696190u); M32(m_) = (u32)(eax); }
  /* 0045979c mov dword ptr [0x69607c], esi */ { const u32 m_ = (u32)(0x69607cu); M32(m_) = (u32)(esi); }
  /* 004597a2 ja 0x4599ae */ if (!(CF_|ZF_)) goto L_004599ae;
  /* 004597a8 jmp dword ptr [eax*4 + 0x4599c0] */ { const u32 m_ = (u32)(eax * 4u + 0x4599c0u); u32 t_ = M32(m_); switch (t_) { case 0x4597afu: goto L_004597af; case 0x4598e5u: goto L_004598e5; case 0x459925u: goto L_00459925; default: SAVEALL; call_ind(c, t_); return; } }
L_004597af:;
  /* 004597af cmp esi, 0x1e67f750 */ { u32 a_ = esi, b_ = 0x1e67f750u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004597b5 jg 0x459860 */ if (!(ZF_|LT_)) goto L_00459860;
  /* 004597bb je 0x45983b */ if (ZF_) goto L_0045983b;
  /* 004597bd cmp esi, 0x1e675b10 */ { u32 a_ = esi, b_ = 0x1e675b10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004597c3 je 0x45981f */ if (ZF_) goto L_0045981f;
  /* 004597c5 cmp esi, 0x1e67a930 */ { u32 a_ = esi, b_ = 0x1e67a930u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004597cb je 0x4597fa */ if (ZF_) goto L_004597fa;
  /* 004597cd cmp esi, 0x1e67d040 */ { u32 a_ = esi, b_ = 0x1e67d040u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004597d3 jne 0x459870 */ if (!ZF_) goto L_00459870;
  /* 004597d9 mov edx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); edx = (u32)(M32(m_)); }
  /* 004597df push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004597e0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004597e1 call 0x456460 */ esp -= 4; M32(esp) = 0x4597e6u; SAVEALL; F_00456460(c); ABI_CHECK(0x456460u, 0x4597e1u); RETCHK(0x4597e6u, 0x4597e1u); LOADALL;
  /* 004597e6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004597e9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004597ea pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004597eb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004597ec mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004597ef mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004597f6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004597f8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004597f9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004597fa:;
  /* 004597fa mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 00459800 push 0x1e67a930 */ { u32 v_ = 0x1e67a930u; esp -= 4; M32(esp) = v_; }
  /* 00459805 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459806 call 0x456460 */ esp -= 4; M32(esp) = 0x45980bu; SAVEALL; F_00456460(c); ABI_CHECK(0x456460u, 0x459806u); RETCHK(0x45980bu, 0x459806u); LOADALL;
  /* 0045980b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045980e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045980f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00459810 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00459811 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00459814 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045981b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045981d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045981e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045981f:;
  /* 0045981f mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 00459825 call 0x454f10 */ esp -= 4; M32(esp) = 0x45982au; SAVEALL; F_00454f10(c); ABI_CHECK(0x454f10u, 0x459825u); RETCHK(0x45982au, 0x459825u); LOADALL;
  /* 0045982a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045982b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045982c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045982d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00459830 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00459837 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00459839 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045983a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045983b:;
  /* 0045983b mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00459841 push 0x1e67f750 */ { u32 v_ = 0x1e67f750u; esp -= 4; M32(esp) = v_; }
  /* 00459846 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00459847 call 0x456460 */ esp -= 4; M32(esp) = 0x45984cu; SAVEALL; F_00456460(c); ABI_CHECK(0x456460u, 0x459847u); RETCHK(0x45984cu, 0x459847u); LOADALL;
  /* 0045984c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045984f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00459850 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00459851 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00459852 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00459855 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045985c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045985e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045985f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00459860:;
  /* 00459860 cmp esi, 0x1e681e60 */ { u32 a_ = esi, b_ = 0x1e681e60u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00459866 je 0x4598c5 */ if (ZF_) goto L_004598c5;
  /* 00459868 cmp esi, 0x20d797c0 */ { u32 a_ = esi, b_ = 0x20d797c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045986e nop */ ;
  /* 0045986f nop */ ;
L_00459870:;
  /* 00459870 push 0x4d4 */ { u32 v_ = 0x4d4u; esp -= 4; M32(esp) = v_; }
  /* 00459875 call 0x5fe934 */ esp -= 4; M32(esp) = 0x45987au; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x459875u); RETCHK(0x45987au, 0x459875u); LOADALL;
  /* 0045987a mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0045987c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045987f mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 00459882 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00459884 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00459886 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00459889 je 0x45989b */ if (ZF_) goto L_0045989b;
  /* 0045988b mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 00459891 mov ecx, 0x696088 */ { ecx = (u32)(0x696088u); }
  /* 00459896 call 0x4505d0 */ esp -= 4; M32(esp) = 0x45989bu; SAVEALL; F_004505d0(c); ABI_CHECK(0x4505d0u, 0x459896u); RETCHK(0x45989bu, 0x459896u); LOADALL;
L_0045989b:;
  /* 0045989b push 0x643c3c */ { u32 v_ = 0x643c3cu; esp -= 4; M32(esp) = v_; }
  /* 004598a0 jmp 0x4599a1 */ goto L_004599a1;
L_004598c5:;
  /* 004598c5 mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 004598cb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004598cc call 0x456a50 */ esp -= 4; M32(esp) = 0x4598d1u; SAVEALL; F_00456a50(c); ABI_CHECK(0x456a50u, 0x4598ccu); RETCHK(0x4598d1u, 0x4598ccu); LOADALL;
  /* 004598d1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004598d4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004598d5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004598d6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004598d7 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004598da mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004598e1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004598e3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004598e4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004598e5:;
  /* 004598e5 push 0x4dc */ { u32 v_ = 0x4dcu; esp -= 4; M32(esp) = v_; }
  /* 004598ea call 0x5fe934 */ esp -= 4; M32(esp) = 0x4598efu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4598eau); RETCHK(0x4598efu, 0x4598eau); LOADALL;
  /* 004598ef mov edx, eax */ { edx = (u32)(eax); }
  /* 004598f1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004598f4 mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 004598f7 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004598f9 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00459900 je 0x45991c */ if (ZF_) goto L_0045991c;
  /* 00459902 mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 00459908 mov ecx, 0x696088 */ { ecx = (u32)(0x696088u); }
  /* 0045990d call 0x451ff0 */ esp -= 4; M32(esp) = 0x459912u; SAVEALL; F_00451ff0(c); ABI_CHECK(0x451ff0u, 0x45990du); RETCHK(0x459912u, 0x45990du); LOADALL;
  /* 00459912 push 0x6483cc */ { u32 v_ = 0x6483ccu; esp -= 4; M32(esp) = v_; }
  /* 00459917 jmp 0x4599a1 */ goto L_004599a1;
L_0045991c:;
  /* 0045991c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045991e push 0x6483cc */ { u32 v_ = 0x6483ccu; esp -= 4; M32(esp) = v_; }
  /* 00459923 jmp 0x4599a1 */ goto L_004599a1;
L_00459925:;
  /* 00459925 call 0x464390 */ esp -= 4; M32(esp) = 0x45992au; SAVEALL; F_00464390(c); ABI_CHECK(0x464390u, 0x459925u); RETCHK(0x45992au, 0x459925u); LOADALL;
  /* 0045992a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0045992c je 0x45996b */ if (ZF_) goto L_0045996b;
  /* 0045992e push 0x4dc */ { u32 v_ = 0x4dcu; esp -= 4; M32(esp) = v_; }
  /* 00459933 call 0x5fe934 */ esp -= 4; M32(esp) = 0x459938u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x459933u); RETCHK(0x459938u, 0x459933u); LOADALL;
  /* 00459938 mov edx, eax */ { edx = (u32)(eax); }
  /* 0045993a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045993d mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 00459940 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459942 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 00459949 je 0x459962 */ if (ZF_) goto L_00459962;
  /* 0045994b mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 00459951 mov ecx, 0x696088 */ { ecx = (u32)(0x696088u); }
  /* 00459956 call 0x452ef0 */ esp -= 4; M32(esp) = 0x45995bu; SAVEALL; F_00452ef0(c); ABI_CHECK(0x452ef0u, 0x459956u); RETCHK(0x45995bu, 0x459956u); LOADALL;
  /* 0045995b push 0x6469d0 */ { u32 v_ = 0x6469d0u; esp -= 4; M32(esp) = v_; }
  /* 00459960 jmp 0x4599a1 */ goto L_004599a1;
L_00459962:;
  /* 00459962 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00459964 push 0x6469d0 */ { u32 v_ = 0x6469d0u; esp -= 4; M32(esp) = v_; }
  /* 00459969 jmp 0x4599a1 */ goto L_004599a1;
L_0045996b:;
  /* 0045996b push 0x4d8 */ { u32 v_ = 0x4d8u; esp -= 4; M32(esp) = v_; }
  /* 00459970 call 0x5fe934 */ esp -= 4; M32(esp) = 0x459975u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x459970u); RETCHK(0x459975u, 0x459970u); LOADALL;
  /* 00459975 mov edx, eax */ { edx = (u32)(eax); }
  /* 00459977 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045997a mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 0045997d test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045997f mov dword ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3u); }
  /* 00459986 je 0x45999a */ if (ZF_) goto L_0045999a;
  /* 00459988 mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 0045998e mov ecx, 0x696088 */ { ecx = (u32)(0x696088u); }
  /* 00459993 call 0x453730 */ esp -= 4; M32(esp) = 0x459998u; SAVEALL; F_00453730(c); ABI_CHECK(0x453730u, 0x459993u); RETCHK(0x459998u, 0x459993u); LOADALL;
  /* 00459998 jmp 0x45999c */ goto L_0045999c;
L_0045999a:;
  /* 0045999a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0045999c:;
  /* 0045999c push 0x6469b8 */ { u32 v_ = 0x6469b8u; esp -= 4; M32(esp) = v_; }
L_004599a1:;
  /* 004599a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004599a2 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004599a9 call 0x50a070 */ esp -= 4; M32(esp) = 0x4599aeu; SAVEALL; F_0050a070(c); ABI_CHECK(0x50a070u, 0x4599a9u); RETCHK(0x4599aeu, 0x4599a9u); LOADALL;
L_004599ae:;
  /* 004599ae pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004599af pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_004599b0:;
  /* 004599b0 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004599b3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004599b4 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004599bb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004599bd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004599be ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004599e0(CPU *c) {
  NATIVE_HOOK(0x4599e0u) REGS; LOADALL;
L_004599e0:;
  /* 004599e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004599e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004599e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004599e5 push 0x624f88 */ { u32 v_ = 0x624f88u; esp -= 4; M32(esp) = v_; }
  /* 004599ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004599f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004599f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004599f8 sub esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004599fb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004599fc mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004599fe mov eax, dword ptr [esi + 0x24c] */ { const u32 m_ = (u32)(esi + 0x24cu); eax = (u32)(M32(m_)); }
  /* 00459a04 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459a06 je 0x459bfd */ if (ZF_) goto L_00459bfd;
  /* 00459a0c mov eax, dword ptr [esi + 0x250] */ { const u32 m_ = (u32)(esi + 0x250u); eax = (u32)(M32(m_)); }
  /* 00459a12 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459a14 je 0x459bfd */ if (ZF_) goto L_00459bfd;
  /* 00459a1a mov eax, dword ptr [esi + 0x230] */ { const u32 m_ = (u32)(esi + 0x230u); eax = (u32)(M32(m_)); }
  /* 00459a20 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459a22 je 0x459bfd */ if (ZF_) goto L_00459bfd;
  /* 00459a28 mov eax, dword ptr [esi + 0x234] */ { const u32 m_ = (u32)(esi + 0x234u); eax = (u32)(M32(m_)); }
  /* 00459a2e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459a30 je 0x459bfd */ if (ZF_) goto L_00459bfd;
  /* 00459a36 mov eax, dword ptr [esi + 0x258] */ { const u32 m_ = (u32)(esi + 0x258u); eax = (u32)(M32(m_)); }
  /* 00459a3c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459a3e je 0x459bfd */ if (ZF_) goto L_00459bfd;
  /* 00459a44 mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00459a47 mov ecx, dword ptr [esi + 0x230] */ { const u32 m_ = (u32)(esi + 0x230u); ecx = (u32)(M32(m_)); }
  /* 00459a4d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00459a4f mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00459a51 je 0x459bb7 */ if (ZF_) goto L_00459bb7;
  /* 00459a57 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00459a58 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00459a5a call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459a5du; SAVEALL; call_ind(c, t_); RETCHK(0x459a5du, 0x459a5au); LOADALL; }
  /* 00459a5d mov ecx, dword ptr [esi + 0x234] */ { const u32 m_ = (u32)(esi + 0x234u); ecx = (u32)(M32(m_)); }
  /* 00459a63 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00459a65 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00459a67 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459a6au; SAVEALL; call_ind(c, t_); RETCHK(0x459a6au, 0x459a67u); LOADALL; }
  /* 00459a6a mov ecx, dword ptr [esi + 0x238] */ { const u32 m_ = (u32)(esi + 0x238u); ecx = (u32)(M32(m_)); }
  /* 00459a70 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00459a72 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00459a74 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459a77u; SAVEALL; call_ind(c, t_); RETCHK(0x459a77u, 0x459a74u); LOADALL; }
  /* 00459a77 mov ecx, dword ptr [esi + 0x23c] */ { const u32 m_ = (u32)(esi + 0x23cu); ecx = (u32)(M32(m_)); }
  /* 00459a7d mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00459a7f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00459a81 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459a84u; SAVEALL; call_ind(c, t_); RETCHK(0x459a84u, 0x459a81u); LOADALL; }
  /* 00459a84 mov ecx, dword ptr [esi + 0x240] */ { const u32 m_ = (u32)(esi + 0x240u); ecx = (u32)(M32(m_)); }
  /* 00459a8a mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00459a8c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00459a8e call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459a91u; SAVEALL; call_ind(c, t_); RETCHK(0x459a91u, 0x459a8eu); LOADALL; }
  /* 00459a91 mov ecx, dword ptr [esi + 0x258] */ { const u32 m_ = (u32)(esi + 0x258u); ecx = (u32)(M32(m_)); }
  /* 00459a97 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00459a99 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00459a9b call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459a9eu; SAVEALL; call_ind(c, t_); RETCHK(0x459a9eu, 0x459a9bu); LOADALL; }
  /* 00459a9e mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00459aa1 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00459aa3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459aa5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459aa6 mov ecx, 0x68a4b8 */ { ecx = (u32)(0x68a4b8u); }
  /* 00459aab call 0x404140 */ esp -= 4; M32(esp) = 0x459ab0u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x459aabu); RETCHK(0x459ab0u, 0x459aabu); LOADALL;
  /* 00459ab0 cmp dword ptr [0x68a4d0], 0x10 */ { const u32 m_ = (u32)(0x68a4d0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00459ab7 mov edi, dword ptr [0x68a4bc] */ { const u32 m_ = (u32)(0x68a4bcu); edi = (u32)(M32(m_)); }
  /* 00459abd jae 0x459ac4 */ if (!CF_) goto L_00459ac4;
  /* 00459abf mov edi, 0x68a4bc */ { edi = (u32)(0x68a4bcu); }
L_00459ac4:;
  /* 00459ac4 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00459ac7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00459ac8 call 0x457100 */ esp -= 4; M32(esp) = 0x459acdu; SAVEALL; F_00457100(c); ABI_CHECK(0x457100u, 0x459ac8u); RETCHK(0x459acdu, 0x459ac8u); LOADALL;
  /* 00459acd call 0x45be70 */ esp -= 4; M32(esp) = 0x459ad2u; SAVEALL; F_0045be70(c); ABI_CHECK(0x45be70u, 0x459acdu); RETCHK(0x459ad2u, 0x459acdu); LOADALL;
  /* 00459ad2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00459ad4 mov edx, eax */ { edx = (u32)(eax); }
  /* 00459ad6 call 0x45c4d0 */ esp -= 4; M32(esp) = 0x459adbu; SAVEALL; F_0045c4d0(c); ABI_CHECK(0x45c4d0u, 0x459ad6u); RETCHK(0x459adbu, 0x459ad6u); LOADALL;
  /* 00459adb push 0x6483c8 */ { u32 v_ = 0x6483c8u; esp -= 4; M32(esp) = v_; }
  /* 00459ae0 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00459ae3 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00459aea call 0x403060 */ esp -= 4; M32(esp) = 0x459aefu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x459aeau); RETCHK(0x459aefu, 0x459aeau); LOADALL;
  /* 00459aef lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00459af2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00459af3 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00459af7 call 0x457100 */ esp -= 4; M32(esp) = 0x459afcu; SAVEALL; F_00457100(c); ABI_CHECK(0x457100u, 0x459af7u); RETCHK(0x459afcu, 0x459af7u); LOADALL;
  /* 00459afc call 0x45be70 */ esp -= 4; M32(esp) = 0x459b01u; SAVEALL; F_0045be70(c); ABI_CHECK(0x45be70u, 0x459afcu); RETCHK(0x459b01u, 0x459afcu); LOADALL;
  /* 00459b01 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00459b04 mov edx, eax */ { edx = (u32)(eax); }
  /* 00459b06 call 0x45c820 */ esp -= 4; M32(esp) = 0x459b0bu; SAVEALL; F_0045c820(c); ABI_CHECK(0x45c820u, 0x459b06u); RETCHK(0x459b0bu, 0x459b06u); LOADALL;
  /* 00459b0b lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00459b0e mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 00459b12 call 0x43ee60 */ esp -= 4; M32(esp) = 0x459b17u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x459b12u); RETCHK(0x459b17u, 0x459b12u); LOADALL;
  /* 00459b17 mov eax, dword ptr [esi + 0x24c] */ { const u32 m_ = (u32)(esi + 0x24cu); eax = (u32)(M32(m_)); }
  /* 00459b1d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459b1f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00459b20 je 0x459b47 */ if (ZF_) goto L_00459b47;
  /* 00459b22 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00459b24 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00459b26 call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459b2cu; SAVEALL; call_ind(c, t_); RETCHK(0x459b2cu, 0x459b26u); LOADALL; }
  /* 00459b2c mov eax, dword ptr [esi + 0x24c] */ { const u32 m_ = (u32)(esi + 0x24cu); eax = (u32)(M32(m_)); }
  /* 00459b32 mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 00459b35 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 00459b38 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459b39 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00459b3a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00459b3b lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00459b3e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459b3f call 0x45a150 */ esp -= 4; M32(esp) = 0x459b44u; SAVEALL; F_0045a150(c); ABI_CHECK(0x45a150u, 0x459b3fu); RETCHK(0x459b44u, 0x459b3fu); LOADALL;
  /* 00459b44 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00459b47:;
  /* 00459b47 mov eax, dword ptr [esi + 0x250] */ { const u32 m_ = (u32)(esi + 0x250u); eax = (u32)(M32(m_)); }
  /* 00459b4d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459b4f je 0x459b76 */ if (ZF_) goto L_00459b76;
  /* 00459b51 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00459b53 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00459b55 call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459b5bu; SAVEALL; call_ind(c, t_); RETCHK(0x459b5bu, 0x459b55u); LOADALL; }
  /* 00459b5b mov eax, dword ptr [esi + 0x250] */ { const u32 m_ = (u32)(esi + 0x250u); eax = (u32)(M32(m_)); }
  /* 00459b61 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00459b64 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459b65 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00459b68 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459b69 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00459b6a lea edx, [ebp + 8] */ edx = (u32)((u32)(ebp + 0x8u));
  /* 00459b6d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00459b6e call 0x45a150 */ esp -= 4; M32(esp) = 0x459b73u; SAVEALL; F_0045a150(c); ABI_CHECK(0x45a150u, 0x459b6eu); RETCHK(0x459b73u, 0x459b6eu); LOADALL;
  /* 00459b73 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00459b76:;
  /* 00459b76 mov ecx, dword ptr [esi + 0x24c] */ { const u32 m_ = (u32)(esi + 0x24cu); ecx = (u32)(M32(m_)); }
  /* 00459b7c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00459b7e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459b80 call dword ptr [eax + 0x100] */ { const u32 m_ = (u32)(eax + 0x100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459b86u; SAVEALL; call_ind(c, t_); RETCHK(0x459b86u, 0x459b80u); LOADALL; }
  /* 00459b86 mov ecx, dword ptr [esi + 0x250] */ { const u32 m_ = (u32)(esi + 0x250u); ecx = (u32)(M32(m_)); }
  /* 00459b8c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00459b8e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459b90 call dword ptr [edx + 0x100] */ { const u32 m_ = (u32)(edx + 0x100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459b96u; SAVEALL; call_ind(c, t_); RETCHK(0x459b96u, 0x459b90u); LOADALL; }
  /* 00459b96 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00459b99 call 0x45c6a0 */ esp -= 4; M32(esp) = 0x459b9eu; SAVEALL; F_0045c6a0(c); ABI_CHECK(0x45c6a0u, 0x459b99u); RETCHK(0x459b9eu, 0x459b99u); LOADALL;
  /* 00459b9e lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00459ba1 call 0x45c6a0 */ esp -= 4; M32(esp) = 0x459ba6u; SAVEALL; F_0045c6a0(c); ABI_CHECK(0x45c6a0u, 0x459ba1u); RETCHK(0x459ba6u, 0x459ba1u); LOADALL;
  /* 00459ba6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00459ba7 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00459baa mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00459bb1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00459bb3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00459bb4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00459bb7:;
  /* 00459bb7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459bb9 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459bbcu; SAVEALL; call_ind(c, t_); RETCHK(0x459bbcu, 0x459bb9u); LOADALL; }
  /* 00459bbc mov ecx, dword ptr [esi + 0x234] */ { const u32 m_ = (u32)(esi + 0x234u); ecx = (u32)(M32(m_)); }
  /* 00459bc2 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00459bc4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459bc6 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459bc9u; SAVEALL; call_ind(c, t_); RETCHK(0x459bc9u, 0x459bc6u); LOADALL; }
  /* 00459bc9 mov ecx, dword ptr [esi + 0x238] */ { const u32 m_ = (u32)(esi + 0x238u); ecx = (u32)(M32(m_)); }
  /* 00459bcf mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00459bd1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459bd3 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459bd6u; SAVEALL; call_ind(c, t_); RETCHK(0x459bd6u, 0x459bd3u); LOADALL; }
  /* 00459bd6 mov ecx, dword ptr [esi + 0x23c] */ { const u32 m_ = (u32)(esi + 0x23cu); ecx = (u32)(M32(m_)); }
  /* 00459bdc mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00459bde push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459be0 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459be3u; SAVEALL; call_ind(c, t_); RETCHK(0x459be3u, 0x459be0u); LOADALL; }
  /* 00459be3 mov ecx, dword ptr [esi + 0x240] */ { const u32 m_ = (u32)(esi + 0x240u); ecx = (u32)(M32(m_)); }
  /* 00459be9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00459beb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459bed call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459bf0u; SAVEALL; call_ind(c, t_); RETCHK(0x459bf0u, 0x459bedu); LOADALL; }
  /* 00459bf0 mov ecx, dword ptr [esi + 0x258] */ { const u32 m_ = (u32)(esi + 0x258u); ecx = (u32)(M32(m_)); }
  /* 00459bf6 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00459bf8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459bfa call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459bfdu; SAVEALL; call_ind(c, t_); RETCHK(0x459bfdu, 0x459bfau); LOADALL; }
L_00459bfd:;
  /* 00459bfd mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00459c00 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00459c01 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00459c08 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00459c0a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00459c0b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00459c10(CPU *c) {
  NATIVE_HOOK(0x459c10u) REGS; LOADALL;
L_00459c10:;
  /* 00459c10 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00459c20(CPU *c) {
  NATIVE_HOOK(0x459c20u) REGS; LOADALL;
L_00459c20:;
  /* 00459c20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00459c21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00459c23 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00459c25 push 0x620068 */ { u32 v_ = 0x620068u; esp -= 4; M32(esp) = v_; }
  /* 00459c2a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00459c30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459c31 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00459c38 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00459c3b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00459c3c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00459c3d call 0x518bb0 */ esp -= 4; M32(esp) = 0x459c42u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x459c3du); RETCHK(0x459c42u, 0x459c3du); LOADALL;
  /* 00459c42 call 0x5180e0 */ esp -= 4; M32(esp) = 0x459c47u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x459c42u); RETCHK(0x459c47u, 0x459c42u); LOADALL;
  /* 00459c47 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00459c49 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00459c4b push 0x646c18 */ { u32 v_ = 0x646c18u; esp -= 4; M32(esp) = v_; }
  /* 00459c50 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00459c53 mov esi, eax */ { esi = (u32)(eax); }
  /* 00459c55 mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 00459c5c mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 00459c5f mov byte ptr [ebp - 0x2c], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00459c62 call 0x404420 */ esp -= 4; M32(esp) = 0x459c67u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x459c62u); RETCHK(0x459c67u, 0x459c62u); LOADALL;
  /* 00459c67 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00459c6a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459c6b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00459c6d mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00459c70 call 0x5075d0 */ esp -= 4; M32(esp) = 0x459c75u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x459c70u); RETCHK(0x459c75u, 0x459c70u); LOADALL;
  /* 00459c75 mov esi, eax */ { esi = (u32)(eax); }
  /* 00459c77 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00459c7e cmp dword ptr [ebp - 0x18], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00459c82 jb 0x459c90 */ if (CF_) goto L_00459c90;
  /* 00459c84 mov ecx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ecx = (u32)(M32(m_)); }
  /* 00459c87 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00459c88 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x459c8du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x459c88u); RETCHK(0x459c8du, 0x459c88u); LOADALL;
  /* 00459c8d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00459c90:;
  /* 00459c90 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00459c92 mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 00459c99 mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 00459c9c mov byte ptr [ebp - 0x2c], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00459c9f je 0x459cb8 */ if (ZF_) goto L_00459cb8;
  /* 00459ca1 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00459ca3 lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 00459ca6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459ca7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00459ca9 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459cacu; SAVEALL; call_ind(c, t_); RETCHK(0x459cacu, 0x459ca9u); LOADALL; }
  /* 00459cac mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00459cae lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 00459cb1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459cb2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00459cb3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00459cb5 call dword ptr [edx + 0x6c] */ { const u32 m_ = (u32)(edx + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459cb8u; SAVEALL; call_ind(c, t_); RETCHK(0x459cb8u, 0x459cb5u); LOADALL; }
L_00459cb8:;
  /* 00459cb8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00459cbb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00459cbc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00459cbd mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00459cc4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00459cc6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00459cc7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00459cd0(CPU *c) {
  NATIVE_HOOK(0x459cd0u) REGS; LOADALL;
L_00459cd0:;
  /* 00459cd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00459cd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00459cd3 sub esp, 0x40c */ { u32 a_ = esp, b_ = 0x40cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00459cd9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00459cde push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00459cdf mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00459ce2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00459ce3 mov eax, 0x459eb0 */ { eax = (u32)(0x459eb0u); }
  /* 00459ce8 call 0x546d10 */ esp -= 4; M32(esp) = 0x459cedu; SAVEALL; F_00546d10(c); ABI_CHECK(0x546d10u, 0x459ce8u); RETCHK(0x459cedu, 0x459ce8u); LOADALL;
  /* 00459ced lea eax, [ebp - 0x408] */ eax = (u32)((u32)(ebp + 0xfffffbf8u));
  /* 00459cf3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459cf4 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 00459cf9 call dword ptr [0x62e1bc] */ { const u32 m_ = (u32)(0x62e1bcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459cffu; SAVEALL; call_ind(c, t_); RETCHK(0x459cffu, 0x459cf9u); LOADALL; }
  /* 00459cff lea ecx, [ebp - 0x408] */ ecx = (u32)((u32)(ebp + 0xfffffbf8u));
  /* 00459d05 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00459d06 lea edx, [ebp - 0x304] */ edx = (u32)((u32)(ebp + 0xfffffcfcu));
  /* 00459d0c push 0x63e7c8 */ { u32 v_ = 0x63e7c8u; esp -= 4; M32(esp) = v_; }
  /* 00459d11 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00459d12 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x459d17u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x459d12u); RETCHK(0x459d17u, 0x459d12u); LOADALL;
  /* 00459d17 mov esi, dword ptr [0x62e1b8] */ { const u32 m_ = (u32)(0x62e1b8u); esi = (u32)(M32(m_)); }
  /* 00459d1d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00459d20 lea eax, [ebp - 0x304] */ eax = (u32)((u32)(ebp + 0xfffffcfcu));
  /* 00459d26 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459d27 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 00459d2c lea ecx, [ebp - 0x104] */ ecx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 00459d32 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00459d33 push 0x64294c */ { u32 v_ = 0x64294cu; esp -= 4; M32(esp) = v_; }
  /* 00459d38 push 0x6483c0 */ { u32 v_ = 0x6483c0u; esp -= 4; M32(esp) = v_; }
  /* 00459d3d push 0x63e79c */ { u32 v_ = 0x63e79cu; esp -= 4; M32(esp) = v_; }
  /* 00459d42 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x459d44u; SAVEALL; call_ind(c, t_); RETCHK(0x459d44u, 0x459d42u); LOADALL; }
  /* 00459d44 call 0x550820 */ esp -= 4; M32(esp) = 0x459d49u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x459d44u); RETCHK(0x459d49u, 0x459d44u); LOADALL;
  /* 00459d49 mov edx, eax */ { edx = (u32)(eax); }
  /* 00459d4b test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459d4d je 0x459dbb */ if (ZF_) goto L_00459dbb;
  /* 00459d4f mov eax, dword ptr [edx + 0xd10] */ { const u32 m_ = (u32)(edx + 0xd10u); eax = (u32)(M32(m_)); }
  /* 00459d55 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459d57 je 0x459dbb */ if (ZF_) goto L_00459dbb;
  /* 00459d59 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00459d5b mov ecx, 0x40 */ { ecx = (u32)(0x40u); }
  /* 00459d60 lea edi, [ebp - 0x204] */ edi = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 00459d66 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00459d68 cmp dword ptr [edx + 0xd14], 0x10 */ { const u32 m_ = (u32)(edx + 0xd14u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00459d6f jb 0x459d79 */ if (CF_) goto L_00459d79;
  /* 00459d71 mov edx, dword ptr [edx + 0xd00] */ { const u32 m_ = (u32)(edx + 0xd00u); edx = (u32)(M32(m_)); }
  /* 00459d77 jmp 0x459d7f */ goto L_00459d7f;
L_00459d79:;
  /* 00459d79 add edx, 0xd00 */ { u32 a_ = edx, b_ = 0xd00u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
L_00459d7f:;
  /* 00459d7f lea eax, [ebp - 0x304] */ eax = (u32)((u32)(ebp + 0xfffffcfcu));
  /* 00459d85 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459d86 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 00459d8b lea ecx, [ebp - 0x204] */ ecx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 00459d91 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00459d92 push 0x648674 */ { u32 v_ = 0x648674u; esp -= 4; M32(esp) = v_; }
  /* 00459d97 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00459d98 push 0x6483b8 */ { u32 v_ = 0x6483b8u; esp -= 4; M32(esp) = v_; }
  /* 00459d9d call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x459d9fu; SAVEALL; call_ind(c, t_); RETCHK(0x459d9fu, 0x459d9du); LOADALL; }
  /* 00459d9f cmp byte ptr [ebp - 0x204], 0x30 */ { const u32 m_ = (u32)(ebp + 0xfffffdfcu); u32 a_ = M8(m_), b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00459da6 je 0x459dbb */ if (ZF_) goto L_00459dbb;
  /* 00459da8 mov ecx, 0x40 */ { ecx = (u32)(0x40u); }
  /* 00459dad lea esi, [ebp - 0x204] */ esi = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 00459db3 lea edi, [ebp - 0x104] */ edi = (u32)((u32)(ebp + 0xfffffefcu));
  /* 00459db9 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_00459dbb:;
  /* 00459dbb push 0x695e48 */ { u32 v_ = 0x695e48u; esp -= 4; M32(esp) = v_; }
  /* 00459dc0 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 00459dc5 call dword ptr [0x62e18c] */ { const u32 m_ = (u32)(0x62e18cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459dcbu; SAVEALL; call_ind(c, t_); RETCHK(0x459dcbu, 0x459dc5u); LOADALL; }
  /* 00459dcb mov eax, 0x695e48 */ { eax = (u32)(0x695e48u); }
  /* 00459dd0 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00459dd3:;
  /* 00459dd3 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00459dd5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00459dd6 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00459dd8 jne 0x459dd3 */ if (!ZF_) goto L_00459dd3;
  /* 00459dda sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00459ddc mov esi, eax */ { esi = (u32)(eax); }
  /* 00459dde call dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459de4u; SAVEALL; call_ind(c, t_); RETCHK(0x459de4u, 0x459ddeu); LOADALL; }
  /* 00459de4 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00459de6 mov ecx, 0x2710 */ { ecx = (u32)(0x2710u); }
  /* 00459deb div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x459debu); eax = q_; edx = r_; }
  /* 00459ded push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00459dee lea edx, [esi + 0x695e48] */ edx = (u32)((u32)(esi + 0x695e48u));
  /* 00459df4 push 0x6483b0 */ { u32 v_ = 0x6483b0u; esp -= 4; M32(esp) = v_; }
  /* 00459df9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00459dfa call 0x5fe9aa */ esp -= 4; M32(esp) = 0x459dffu; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x459dfau); RETCHK(0x459dffu, 0x459dfau); LOADALL;
  /* 00459dff add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00459e02 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459e04 push 0x695e48 */ { u32 v_ = 0x695e48u; esp -= 4; M32(esp) = v_; }
  /* 00459e09 call dword ptr [0x62e188] */ { const u32 m_ = (u32)(0x62e188u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459e0fu; SAVEALL; call_ind(c, t_); RETCHK(0x459e0fu, 0x459e09u); LOADALL; }
  /* 00459e0f lea eax, [ebp - 0x104] */ eax = (u32)((u32)(ebp + 0xfffffefcu));
  /* 00459e15 push 0x2f */ { u32 v_ = 0x2fu; esp -= 4; M32(esp) = v_; }
  /* 00459e17 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459e18 call 0x5fe9e0 */ esp -= 4; M32(esp) = 0x459e1du; SAVEALL; F_005fe9e0(c); ABI_CHECK(0x5fe9e0u, 0x459e18u); RETCHK(0x459e1du, 0x459e18u); LOADALL;
  /* 00459e1d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00459e20 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459e22 je 0x459e9b */ if (ZF_) goto L_00459e9b;
  /* 00459e24 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00459e25 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459e26 push 0x695e48 */ { u32 v_ = 0x695e48u; esp -= 4; M32(esp) = v_; }
  /* 00459e2b push 0x6483a8 */ { u32 v_ = 0x6483a8u; esp -= 4; M32(esp) = v_; }
  /* 00459e30 push 0x695d08 */ { u32 v_ = 0x695d08u; esp -= 4; M32(esp) = v_; }
  /* 00459e35 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x459e3au; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x459e35u); RETCHK(0x459e3au, 0x459e35u); LOADALL;
  /* 00459e3a add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00459e3d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00459e3f nop */ ;
L_00459e40:;
  /* 00459e40 mov cl, byte ptr [eax + 0x695e48] */ { const u32 m_ = (u32)(eax + 0x695e48u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00459e46 mov byte ptr [eax + 0x695bc8], cl */ { const u32 m_ = (u32)(eax + 0x695bc8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00459e4c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00459e4d test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00459e4f jne 0x459e40 */ if (!ZF_) goto L_00459e40;
  /* 00459e51 mov edi, 0x695bc8 */ { edi = (u32)(0x695bc8u); }
  /* 00459e56 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_00459e57:;
  /* 00459e57 mov al, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00459e5a inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00459e5b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00459e5d jne 0x459e57 */ if (!ZF_) goto L_00459e57;
  /* 00459e5f mov ecx, dword ptr [0x648398] */ { const u32 m_ = (u32)(0x648398u); ecx = (u32)(M32(m_)); }
  /* 00459e65 mov edx, dword ptr [0x64839c] */ { const u32 m_ = (u32)(0x64839cu); edx = (u32)(M32(m_)); }
  /* 00459e6b mov eax, dword ptr [0x6483a0] */ { const u32 m_ = (u32)(0x6483a0u); eax = (u32)(M32(m_)); }
  /* 00459e70 mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 00459e72 mov ecx, dword ptr [0x6483a4] */ { const u32 m_ = (u32)(0x6483a4u); ecx = (u32)(M32(m_)); }
  /* 00459e78 mov dword ptr [edi + 4], edx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(edx); }
  /* 00459e7b lea edx, [ebp - 0x40c] */ edx = (u32)((u32)(ebp + 0xfffffbf4u));
  /* 00459e81 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00459e84 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00459e85 push 0x695d08 */ { u32 v_ = 0x695d08u; esp -= 4; M32(esp) = v_; }
  /* 00459e8a lea eax, [ebp - 0x104] */ eax = (u32)((u32)(ebp + 0xfffffefcu));
  /* 00459e90 mov dword ptr [edi + 0xc], ecx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00459e93 call 0x546f30 */ esp -= 4; M32(esp) = 0x459e98u; SAVEALL; F_00546f30(c); ABI_CHECK(0x546f30u, 0x459e93u); RETCHK(0x459e98u, 0x459e93u); LOADALL;
  /* 00459e98 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00459e9b:;
  /* 00459e9b mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00459e9e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00459e9f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00459ea0 call 0x61af31 */ esp -= 4; M32(esp) = 0x459ea5u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x459ea0u); RETCHK(0x459ea5u, 0x459ea0u); LOADALL;
  /* 00459ea5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00459ea7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00459ea8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00459eb0(CPU *c) {
  NATIVE_HOOK(0x459eb0u) REGS; LOADALL;
L_00459eb0:;
  /* 00459eb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00459eb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00459eb3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00459eb5 push 0x62494b */ { u32 v_ = 0x62494bu; esp -= 4; M32(esp) = v_; }
  /* 00459eba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00459ec0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459ec1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00459ec8 sub esp, 0x120 */ { u32 a_ = esp, b_ = 0x120u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00459ece mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00459ed3 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00459ed6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00459ed9 cmp eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00459edc ja 0x45a120 */ if (!(CF_|ZF_)) goto L_0045a120;
  /* 00459ee2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00459ee3 jmp dword ptr [eax*4 + 0x45a138] */ { const u32 m_ = (u32)(eax * 4u + 0x45a138u); u32 t_ = M32(m_); switch (t_) { case 0x459eeau: goto L_00459eea; case 0x459f1fu: goto L_00459f1f; case 0x459f79u: goto L_00459f79; case 0x459febu: goto L_00459feb; case 0x45a039u: goto L_0045a039; case 0x45a11fu: goto L_0045a11f; default: SAVEALL; call_ind(c, t_); return; } }
L_00459eea:;
  /* 00459eea push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 00459eef push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 00459ef4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459ef6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00459ef8 push 0xe6 */ { u32 v_ = 0xe6u; esp -= 4; M32(esp) = v_; }
  /* 00459efd push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 00459f02 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459f08u; SAVEALL; call_ind(c, t_); RETCHK(0x459f08u, 0x459f02u); LOADALL; }
  /* 00459f08 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459f09 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00459f0b push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00459f0d call 0x50b090 */ esp -= 4; M32(esp) = 0x459f12u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x459f0du); RETCHK(0x459f12u, 0x459f0du); LOADALL;
  /* 00459f12 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00459f15 mov dword ptr [0x7a6980], eax */ { const u32 m_ = (u32)(0x7a6980u); M32(m_) = (u32)(eax); }
  /* 00459f1a jmp 0x45a11f */ goto L_0045a11f;
L_00459f1f:;
  /* 00459f1f mov eax, dword ptr [0x7a6980] */ { const u32 m_ = (u32)(0x7a6980u); eax = (u32)(M32(m_)); }
  /* 00459f24 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459f26 je 0x45a11f */ if (ZF_) goto L_0045a11f;
  /* 00459f2c fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 00459f2f sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00459f32 fidiv dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 00459f35 fstp qword ptr [esp] */ { const u32 m_ = (u32)(esp); MF64(m_) = ST(0); FPOP(); }
  /* 00459f38 push 0xe6 */ { u32 v_ = 0xe6u; esp -= 4; M32(esp) = v_; }
  /* 00459f3d push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 00459f42 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459f48u; SAVEALL; call_ind(c, t_); RETCHK(0x459f48u, 0x459f42u); LOADALL; }
  /* 00459f48 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459f49 push 0x64838c */ { u32 v_ = 0x64838cu; esp -= 4; M32(esp) = v_; }
  /* 00459f4e lea eax, [ebp - 0x110] */ eax = (u32)((u32)(ebp + 0xfffffef0u));
  /* 00459f54 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 00459f59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459f5a call 0x5fe928 */ esp -= 4; M32(esp) = 0x459f5fu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x459f5au); RETCHK(0x459f5fu, 0x459f5au); LOADALL;
  /* 00459f5f mov ecx, dword ptr [0x7a6980] */ { const u32 m_ = (u32)(0x7a6980u); ecx = (u32)(M32(m_)); }
  /* 00459f65 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00459f68 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00459f69 lea edx, [ebp - 0x110] */ edx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 00459f6f call 0x50aea0 */ esp -= 4; M32(esp) = 0x459f74u; SAVEALL; F_0050aea0(c); ABI_CHECK(0x50aea0u, 0x459f6fu); RETCHK(0x459f74u, 0x459f6fu); LOADALL;
  /* 00459f74 jmp 0x45a11f */ goto L_0045a11f;
L_00459f79:;
  /* 00459f79 mov ebx, dword ptr [0x7a6980] */ { const u32 m_ = (u32)(0x7a6980u); ebx = (u32)(M32(m_)); }
  /* 00459f7f test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459f81 je 0x459f94 */ if (ZF_) goto L_00459f94;
  /* 00459f83 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00459f85 call 0x509d90 */ esp -= 4; M32(esp) = 0x459f8au; SAVEALL; F_00509d90(c); ABI_CHECK(0x509d90u, 0x459f85u); RETCHK(0x459f8au, 0x459f85u); LOADALL;
  /* 00459f8a mov dword ptr [0x7a6980], 0 */ { const u32 m_ = (u32)(0x7a6980u); M32(m_) = (u32)(0x0u); }
L_00459f94:;
  /* 00459f94 mov eax, dword ptr [0x694ff8] */ { const u32 m_ = (u32)(0x694ff8u); eax = (u32)(M32(m_)); }
  /* 00459f99 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459f9b je 0x45a11f */ if (ZF_) goto L_0045a11f;
  /* 00459fa1 push 0xe7 */ { u32 v_ = 0xe7u; esp -= 4; M32(esp) = v_; }
  /* 00459fa6 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 00459fab call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x459fb1u; SAVEALL; call_ind(c, t_); RETCHK(0x459fb1u, 0x459fabu); LOADALL; }
  /* 00459fb1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00459fb2 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00459fb8 call 0x403060 */ esp -= 4; M32(esp) = 0x459fbdu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x459fb8u); RETCHK(0x459fbdu, 0x459fb8u); LOADALL;
  /* 00459fbd lea edx, [ebp - 0x12c] */ edx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00459fc3 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00459fca mov ecx, dword ptr [0x694ff8] */ { const u32 m_ = (u32)(0x694ff8u); ecx = (u32)(M32(m_)); }
  /* 00459fd0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00459fd1 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00459fd6 call 0x418b20 */ esp -= 4; M32(esp) = 0x459fdbu; SAVEALL; F_00418b20(c); ABI_CHECK(0x418b20u, 0x459fd6u); RETCHK(0x459fdbu, 0x459fd6u); LOADALL;
  /* 00459fdb lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00459fe1 call 0x43ee60 */ esp -= 4; M32(esp) = 0x459fe6u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x459fe1u); RETCHK(0x459fe6u, 0x459fe1u); LOADALL;
  /* 00459fe6 jmp 0x45a11f */ goto L_0045a11f;
L_00459feb:;
  /* 00459feb mov ebx, dword ptr [0x7a6980] */ { const u32 m_ = (u32)(0x7a6980u); ebx = (u32)(M32(m_)); }
  /* 00459ff1 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00459ff3 je 0x45a006 */ if (ZF_) goto L_0045a006;
  /* 00459ff5 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00459ff7 call 0x509d90 */ esp -= 4; M32(esp) = 0x459ffcu; SAVEALL; F_00509d90(c); ABI_CHECK(0x509d90u, 0x459ff7u); RETCHK(0x459ffcu, 0x459ff7u); LOADALL;
  /* 00459ffc mov dword ptr [0x7a6980], 0 */ { const u32 m_ = (u32)(0x7a6980u); M32(m_) = (u32)(0x0u); }
L_0045a006:;
  /* 0045a006 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0045a00b push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0045a010 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045a012 push 0x459c20 */ { u32 v_ = 0x459c20u; esp -= 4; M32(esp) = v_; }
  /* 0045a017 push 0xe8 */ { u32 v_ = 0xe8u; esp -= 4; M32(esp) = v_; }
  /* 0045a01c push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0045a021 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45a027u; SAVEALL; call_ind(c, t_); RETCHK(0x45a027u, 0x45a021u); LOADALL; }
  /* 0045a027 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a028 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045a02a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045a02c call 0x50b090 */ esp -= 4; M32(esp) = 0x45a031u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x45a02cu); RETCHK(0x45a031u, 0x45a02cu); LOADALL;
  /* 0045a031 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045a034 jmp 0x45a11f */ goto L_0045a11f;
L_0045a039:;
  /* 0045a039 mov ebx, dword ptr [0x7a6980] */ { const u32 m_ = (u32)(0x7a6980u); ebx = (u32)(M32(m_)); }
  /* 0045a03f test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045a041 je 0x45a054 */ if (ZF_) goto L_0045a054;
  /* 0045a043 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0045a045 call 0x509d90 */ esp -= 4; M32(esp) = 0x45a04au; SAVEALL; F_00509d90(c); ABI_CHECK(0x509d90u, 0x45a045u); RETCHK(0x45a04au, 0x45a045u); LOADALL;
  /* 0045a04a mov dword ptr [0x7a6980], 0 */ { const u32 m_ = (u32)(0x7a6980u); M32(m_) = (u32)(0x0u); }
L_0045a054:;
  /* 0045a054 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045a055 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045a056 call 0x556030 */ esp -= 4; M32(esp) = 0x45a05bu; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x45a056u); RETCHK(0x45a05bu, 0x45a056u); LOADALL;
  /* 0045a05b call 0x556030 */ esp -= 4; M32(esp) = 0x45a060u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x45a05bu); RETCHK(0x45a060u, 0x45a05bu); LOADALL;
  /* 0045a060 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045a062 call 0x556260 */ esp -= 4; M32(esp) = 0x45a067u; SAVEALL; F_00556260(c); ABI_CHECK(0x556260u, 0x45a062u); RETCHK(0x45a067u, 0x45a062u); LOADALL;
  /* 0045a067 push 0x695e48 */ { u32 v_ = 0x695e48u; esp -= 4; M32(esp) = v_; }
  /* 0045a06c call 0x556030 */ esp -= 4; M32(esp) = 0x45a071u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x45a06cu); RETCHK(0x45a071u, 0x45a06cu); LOADALL;
  /* 0045a071 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045a073 call 0x555e40 */ esp -= 4; M32(esp) = 0x45a078u; SAVEALL; F_00555e40(c); ABI_CHECK(0x555e40u, 0x45a073u); RETCHK(0x45a078u, 0x45a073u); LOADALL;
  /* 0045a078 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0045a07a je 0x45a0b6 */ if (ZF_) goto L_0045a0b6;
  /* 0045a07c call 0x556030 */ esp -= 4; M32(esp) = 0x45a081u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x45a07cu); RETCHK(0x45a081u, 0x45a07cu); LOADALL;
  /* 0045a081 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 0045a086 push 0x648370 */ { u32 v_ = 0x648370u; esp -= 4; M32(esp) = v_; }
  /* 0045a08b call dword ptr [0x62e184] */ { const u32 m_ = (u32)(0x62e184u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45a091u; SAVEALL; call_ind(c, t_); RETCHK(0x45a091u, 0x45a08bu); LOADALL; }
  /* 0045a091 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045a093 push 0x648370 */ { u32 v_ = 0x648370u; esp -= 4; M32(esp) = v_; }
  /* 0045a098 push 0x695bc8 */ { u32 v_ = 0x695bc8u; esp -= 4; M32(esp) = v_; }
  /* 0045a09d call dword ptr [0x62e180] */ { const u32 m_ = (u32)(0x62e180u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45a0a3u; SAVEALL; call_ind(c, t_); RETCHK(0x45a0a3u, 0x45a09du); LOADALL; }
  /* 0045a0a3 mov ecx, dword ptr [0x695f68] */ { const u32 m_ = (u32)(0x695f68u); ecx = (u32)(M32(m_)); }
  /* 0045a0a9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045a0ab je 0x45a0fe */ if (ZF_) goto L_0045a0fe;
  /* 0045a0ad mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045a0af push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045a0b1 call dword ptr [eax + 0x54] */ { const u32 m_ = (u32)(eax + 0x54u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45a0b4u; SAVEALL; call_ind(c, t_); RETCHK(0x45a0b4u, 0x45a0b1u); LOADALL; }
  /* 0045a0b4 jmp 0x45a0fe */ goto L_0045a0fe;
L_0045a0b6:;
  /* 0045a0b6 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0045a0bb push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0045a0c0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045a0c2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045a0c4 push 0xe9 */ { u32 v_ = 0xe9u; esp -= 4; M32(esp) = v_; }
  /* 0045a0c9 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0045a0ce call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45a0d4u; SAVEALL; call_ind(c, t_); RETCHK(0x45a0d4u, 0x45a0ceu); LOADALL; }
  /* 0045a0d4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a0d5 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0045a0d7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045a0d9 call 0x50b090 */ esp -= 4; M32(esp) = 0x45a0deu; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x45a0d9u); RETCHK(0x45a0deu, 0x45a0d9u); LOADALL;
  /* 0045a0de add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045a0e1 call 0x556030 */ esp -= 4; M32(esp) = 0x45a0e6u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x45a0e1u); RETCHK(0x45a0e6u, 0x45a0e1u); LOADALL;
  /* 0045a0e6 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045a0e8 call 0x556260 */ esp -= 4; M32(esp) = 0x45a0edu; SAVEALL; F_00556260(c); ABI_CHECK(0x556260u, 0x45a0e8u); RETCHK(0x45a0edu, 0x45a0e8u); LOADALL;
  /* 0045a0ed push 0x648360 */ { u32 v_ = 0x648360u; esp -= 4; M32(esp) = v_; }
  /* 0045a0f2 call 0x556030 */ esp -= 4; M32(esp) = 0x45a0f7u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x45a0f2u); RETCHK(0x45a0f7u, 0x45a0f2u); LOADALL;
  /* 0045a0f7 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045a0f9 call 0x555e40 */ esp -= 4; M32(esp) = 0x45a0feu; SAVEALL; F_00555e40(c); ABI_CHECK(0x555e40u, 0x45a0f9u); RETCHK(0x45a0feu, 0x45a0f9u); LOADALL;
L_0045a0fe:;
  /* 0045a0fe mov esi, dword ptr [0x62e17c] */ { const u32 m_ = (u32)(0x62e17cu); esi = (u32)(M32(m_)); }
  /* 0045a104 push 0x695d08 */ { u32 v_ = 0x695d08u; esp -= 4; M32(esp) = v_; }
  /* 0045a109 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x45a10bu; SAVEALL; call_ind(c, t_); RETCHK(0x45a10bu, 0x45a109u); LOADALL; }
  /* 0045a10b push 0x695bc8 */ { u32 v_ = 0x695bc8u; esp -= 4; M32(esp) = v_; }
  /* 0045a110 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x45a112u; SAVEALL; call_ind(c, t_); RETCHK(0x45a112u, 0x45a110u); LOADALL; }
  /* 0045a112 push 0x695e48 */ { u32 v_ = 0x695e48u; esp -= 4; M32(esp) = v_; }
  /* 0045a117 call dword ptr [0x62e178] */ { const u32 m_ = (u32)(0x62e178u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45a11du; SAVEALL; call_ind(c, t_); RETCHK(0x45a11du, 0x45a117u); LOADALL; }
  /* 0045a11d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045a11e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0045a11f:;
  /* 0045a11f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0045a120:;
  /* 0045a120 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045a123 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045a12a mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0045a12d call 0x61af31 */ esp -= 4; M32(esp) = 0x45a132u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x45a12du); RETCHK(0x45a132u, 0x45a12du); LOADALL;
  /* 0045a132 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045a134 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045a135 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045a150(CPU *c) {
  NATIVE_HOOK(0x45a150u) REGS; LOADALL;
L_0045a150:;
  /* 0045a150 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045a151 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045a153 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045a154 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0045a157 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045a158 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0045a15b cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a15d je 0x45a17e */ if (ZF_) goto L_0045a17e;
  /* 0045a15f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045a160 mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
L_0045a163:;
  /* 0045a163 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045a165 je 0x45a16d */ if (ZF_) goto L_0045a16d;
  /* 0045a167 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045a168 call 0x514cd0 */ esp -= 4; M32(esp) = 0x45a16du; SAVEALL; F_00514cd0(c); ABI_CHECK(0x514cd0u, 0x45a168u); RETCHK(0x45a16du, 0x45a168u); LOADALL;
L_0045a16d:;
  /* 0045a16d add edi, 0x1c */ { u32 a_ = edi, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0045a170 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a172 jne 0x45a163 */ if (!ZF_) goto L_0045a163;
  /* 0045a174 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045a177 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0045a179 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045a17a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045a17b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045a17c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045a17d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045a17e:;
  /* 0045a17e mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0045a181 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045a184 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045a185 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0045a187 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045a188 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045a189 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045a190(CPU *c) {
  NATIVE_HOOK(0x45a190u) REGS; LOADALL;
L_0045a190:;
  /* 0045a190 mov eax, 0x3105 */ { eax = (u32)(0x3105u); }
  /* 0045a195 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045a1a0(CPU *c) {
  NATIVE_HOOK(0x45a1a0u) REGS; LOADALL;
L_0045a1a0:;
  /* 0045a1a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045a1a1 mov esi, eax */ { esi = (u32)(eax); }
  /* 0045a1a3 call 0x457160 */ esp -= 4; M32(esp) = 0x45a1a8u; SAVEALL; F_00457160(c); ABI_CHECK(0x457160u, 0x45a1a3u); RETCHK(0x45a1a8u, 0x45a1a3u); LOADALL;
  /* 0045a1a8 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0045a1aa xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0045a1ac mov byte ptr [esi + 0x20c], al */ { const u32 m_ = (u32)(esi + 0x20cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0045a1b2 mov byte ptr [esi + 0x20d], al */ { const u32 m_ = (u32)(esi + 0x20du); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0045a1b8 mov dword ptr [esi], 0x648678 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x648678u); }
  /* 0045a1be mov eax, esi */ { eax = (u32)(esi); }
  /* 0045a1c0 mov dword ptr [0x696078], 5 */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(0x5u); }
  /* 0045a1ca mov dword ptr [0x696074], ecx */ { const u32 m_ = (u32)(0x696074u); M32(m_) = (u32)(ecx); }
  /* 0045a1d0 mov dword ptr [0x696070], ecx */ { const u32 m_ = (u32)(0x696070u); M32(m_) = (u32)(ecx); }
  /* 0045a1d6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045a1d7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045a1e0(CPU *c) {
  NATIVE_HOOK(0x45a1e0u) REGS; LOADALL;
L_0045a1e0:;
  /* 0045a1e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045a1e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045a1e3 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0045a1e5 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0045a1e7 mov byte ptr [ecx + 0x20d], al */ { const u32 m_ = (u32)(ecx + 0x20du); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0045a1ed mov byte ptr [ecx + 0x20c], al */ { const u32 m_ = (u32)(ecx + 0x20cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0045a1f3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045a1f5 mov dword ptr [0x696078], 5 */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(0x5u); }
  /* 0045a1ff mov dword ptr [0x696074], edx */ { const u32 m_ = (u32)(0x696074u); M32(m_) = (u32)(edx); }
  /* 0045a205 mov dword ptr [0x696070], edx */ { const u32 m_ = (u32)(0x696070u); M32(m_) = (u32)(edx); }
  /* 0045a20b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045a20c jmp dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0045a210(CPU *c) {
  NATIVE_HOOK(0x45a210u) REGS; LOADALL;
L_0045a210:;
  /* 0045a210 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045a211 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045a213 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045a215 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0045a21a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045a220 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a221 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045a228 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045a229 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045a22a mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0045a22c mov eax, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 0045a232 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045a234 je 0x45a2bb */ if (ZF_) goto L_0045a2bb;
  /* 0045a23a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0045a23c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045a23e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045a23f call dword ptr [eax + 0x128] */ { const u32 m_ = (u32)(eax + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45a245u; SAVEALL; call_ind(c, t_); RETCHK(0x45a245u, 0x45a23fu); LOADALL; }
  /* 0045a245 mov esi, eax */ { esi = (u32)(eax); }
  /* 0045a247 mov edx, esi */ { edx = (u32)(esi); }
  /* 0045a249 call 0x463d00 */ esp -= 4; M32(esp) = 0x45a24eu; SAVEALL; F_00463d00(c); ABI_CHECK(0x463d00u, 0x45a249u); RETCHK(0x45a24eu, 0x45a249u); LOADALL;
  /* 0045a24e mov edx, esi */ { edx = (u32)(esi); }
  /* 0045a250 mov dword ptr [0x6961a0], eax */ { const u32 m_ = (u32)(0x6961a0u); M32(m_) = (u32)(eax); }
  /* 0045a255 call 0x463cd0 */ esp -= 4; M32(esp) = 0x45a25au; SAVEALL; F_00463cd0(c); ABI_CHECK(0x463cd0u, 0x45a255u); RETCHK(0x45a25au, 0x45a255u); LOADALL;
  /* 0045a25a mov ecx, dword ptr [0x696074] */ { const u32 m_ = (u32)(0x696074u); ecx = (u32)(M32(m_)); }
  /* 0045a260 mov edx, dword ptr [0x696078] */ { const u32 m_ = (u32)(0x696078u); edx = (u32)(M32(m_)); }
  /* 0045a266 push 0x4dc */ { u32 v_ = 0x4dcu; esp -= 4; M32(esp) = v_; }
  /* 0045a26b mov dword ptr [0x6961a4], eax */ { const u32 m_ = (u32)(0x6961a4u); M32(m_) = (u32)(eax); }
  /* 0045a270 mov dword ptr [0x6962ac], ecx */ { const u32 m_ = (u32)(0x6962acu); M32(m_) = (u32)(ecx); }
  /* 0045a276 mov dword ptr [0x6962a8], edx */ { const u32 m_ = (u32)(0x6962a8u); M32(m_) = (u32)(edx); }
  /* 0045a27c call 0x5fe934 */ esp -= 4; M32(esp) = 0x45a281u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x45a27cu); RETCHK(0x45a281u, 0x45a27cu); LOADALL;
  /* 0045a281 mov edx, eax */ { edx = (u32)(eax); }
  /* 0045a283 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045a286 mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 0045a289 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045a28b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0045a292 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045a293 je 0x45a2a7 */ if (ZF_) goto L_0045a2a7;
  /* 0045a295 mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 0045a29b mov ecx, 0x6961a0 */ { ecx = (u32)(0x6961a0u); }
  /* 0045a2a0 call 0x451ff0 */ esp -= 4; M32(esp) = 0x45a2a5u; SAVEALL; F_00451ff0(c); ABI_CHECK(0x451ff0u, 0x45a2a0u); RETCHK(0x45a2a5u, 0x45a2a0u); LOADALL;
  /* 0045a2a5 jmp 0x45a2a9 */ goto L_0045a2a9;
L_0045a2a7:;
  /* 0045a2a7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0045a2a9:;
  /* 0045a2a9 push 0x6483cc */ { u32 v_ = 0x6483ccu; esp -= 4; M32(esp) = v_; }
  /* 0045a2ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a2af mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a2b6 call 0x50a070 */ esp -= 4; M32(esp) = 0x45a2bbu; SAVEALL; F_0050a070(c); ABI_CHECK(0x50a070u, 0x45a2b6u); RETCHK(0x45a2bbu, 0x45a2b6u); LOADALL;
L_0045a2bb:;
  /* 0045a2bb mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045a2be pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045a2bf mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045a2c6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045a2c8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045a2c9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045a2d0(CPU *c) {
  NATIVE_HOOK(0x45a2d0u) REGS; LOADALL;
L_0045a2d0:;
  /* 0045a2d0 mov eax, 0x3106 */ { eax = (u32)(0x3106u); }
  /* 0045a2d5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045a2e0(CPU *c) {
  NATIVE_HOOK(0x45a2e0u) REGS; LOADALL;
L_0045a2e0:;
  /* 0045a2e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045a2e1 mov esi, eax */ { esi = (u32)(eax); }
  /* 0045a2e3 call 0x457160 */ esp -= 4; M32(esp) = 0x45a2e8u; SAVEALL; F_00457160(c); ABI_CHECK(0x457160u, 0x45a2e3u); RETCHK(0x45a2e8u, 0x45a2e3u); LOADALL;
  /* 0045a2e8 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0045a2ea mov byte ptr [esi + 0x20c], al */ { const u32 m_ = (u32)(esi + 0x20cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0045a2f0 mov byte ptr [esi + 0x20d], al */ { const u32 m_ = (u32)(esi + 0x20du); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0045a2f6 mov dword ptr [esi], 0x6486e8 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6486e8u); }
  /* 0045a2fc mov eax, esi */ { eax = (u32)(esi); }
  /* 0045a2fe mov dword ptr [0x696078], 6 */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(0x6u); }
  /* 0045a308 mov dword ptr [0x696074], 0 */ { const u32 m_ = (u32)(0x696074u); M32(m_) = (u32)(0x0u); }
  /* 0045a312 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045a313 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045a320(CPU *c) {
  NATIVE_HOOK(0x45a320u) REGS; LOADALL;
L_0045a320:;
  /* 0045a320 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045a321 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045a323 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045a326 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045a327 mov eax, edx */ { eax = (u32)(edx); }
  /* 0045a329 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0045a32b sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045a32d je 0x45a34d */ if (ZF_) goto L_0045a34d;
  /* 0045a32f dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0045a330 je 0x45a341 */ if (ZF_) goto L_0045a341;
  /* 0045a332 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0045a333 jne 0x45a363 */ if (!ZF_) goto L_0045a363;
  /* 0045a335 mov dword ptr [0x696078], 8 */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(0x8u); }
  /* 0045a33f jmp 0x45a357 */ goto L_0045a357;
L_0045a341:;
  /* 0045a341 mov dword ptr [0x696078], 7 */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(0x7u); }
  /* 0045a34b jmp 0x45a357 */ goto L_0045a357;
L_0045a34d:;
  /* 0045a34d mov dword ptr [0x696078], 6 */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(0x6u); }
L_0045a357:;
  /* 0045a357 mov dword ptr [0x696074], esi */ { const u32 m_ = (u32)(0x696074u); M32(m_) = (u32)(esi); }
  /* 0045a35d mov dword ptr [0x696070], esi */ { const u32 m_ = (u32)(0x696070u); M32(m_) = (u32)(esi); }
L_0045a363:;
  /* 0045a363 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045a365 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045a366 call dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45a369u; SAVEALL; call_ind(c, t_); RETCHK(0x45a369u, 0x45a366u); LOADALL; }
  /* 0045a369 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045a36a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045a36b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045a370(CPU *c) {
  NATIVE_HOOK(0x45a370u) REGS; LOADALL;
L_0045a370:;
  /* 0045a370 mov eax, 0x310a */ { eax = (u32)(0x310au); }
  /* 0045a375 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045a380(CPU *c) {
  NATIVE_HOOK(0x45a380u) REGS; LOADALL;
L_0045a380:;
  /* 0045a380 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045a381 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045a382 mov esi, eax */ { esi = (u32)(eax); }
  /* 0045a384 call 0x457160 */ esp -= 4; M32(esp) = 0x45a389u; SAVEALL; F_00457160(c); ABI_CHECK(0x457160u, 0x45a384u); RETCHK(0x45a389u, 0x45a384u); LOADALL;
  /* 0045a389 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0045a38b mov byte ptr [esi + 0x20c], al */ { const u32 m_ = (u32)(esi + 0x20cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0045a391 mov byte ptr [esi + 0x20d], al */ { const u32 m_ = (u32)(esi + 0x20du); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0045a397 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045a399 lea edi, [esi + 0x1d8] */ edi = (u32)((u32)(esi + 0x1d8u));
  /* 0045a39f mov dword ptr [esi], 0x648758 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x648758u); }
  /* 0045a3a5 mov ecx, 0xc */ { ecx = (u32)(0xcu); }
  /* 0045a3aa rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0045a3ac pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045a3ad mov dword ptr [0x6962b8], esi */ { const u32 m_ = (u32)(0x6962b8u); M32(m_) = (u32)(esi); }
  /* 0045a3b3 mov eax, esi */ { eax = (u32)(esi); }
  /* 0045a3b5 mov dword ptr [0x696074], 0 */ { const u32 m_ = (u32)(0x696074u); M32(m_) = (u32)(0x0u); }
  /* 0045a3bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045a3c0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045a3d0(CPU *c) {
  NATIVE_HOOK(0x45a3d0u) REGS; LOADALL;
L_0045a3d0:;
  /* 0045a3d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045a3d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045a3d3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045a3d5 push 0x622b23 */ { u32 v_ = 0x622b23u; esp -= 4; M32(esp) = v_; }
  /* 0045a3da mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045a3e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a3e1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045a3e8 sub esp, 0x5c */ { u32 a_ = esp, b_ = 0x5cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045a3eb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045a3ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045a3ed mov esi, dword ptr [0x694ff8] */ { const u32 m_ = (u32)(0x694ff8u); esi = (u32)(M32(m_)); }
  /* 0045a3f3 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0045a3f5 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a3f7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045a3f8 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0045a3fa je 0x45a40b */ if (ZF_) goto L_0045a40b;
  /* 0045a3fc xor bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0045a3fe call 0x418c80 */ esp -= 4; M32(esp) = 0x45a403u; SAVEALL; F_00418c80(c); ABI_CHECK(0x418c80u, 0x45a3feu); RETCHK(0x45a403u, 0x45a3feu); LOADALL;
  /* 0045a403 mov esi, dword ptr [0x694ff8] */ { const u32 m_ = (u32)(0x694ff8u); esi = (u32)(M32(m_)); }
  /* 0045a409 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0045a40b:;
  /* 0045a40b mov eax, dword ptr [esi + 0xdc] */ { const u32 m_ = (u32)(esi + 0xdcu); eax = (u32)(M32(m_)); }
  /* 0045a411 push 0x1cc */ { u32 v_ = 0x1ccu; esp -= 4; M32(esp) = v_; }
  /* 0045a416 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0045a419 call 0x5fe934 */ esp -= 4; M32(esp) = 0x45a41eu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x45a419u); RETCHK(0x45a41eu, 0x45a419u); LOADALL;
  /* 0045a41e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045a421 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0045a424 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a426 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0045a429 je 0x45a434 */ if (ZF_) goto L_0045a434;
  /* 0045a42b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045a42c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a42d call 0x50bb70 */ esp -= 4; M32(esp) = 0x45a432u; SAVEALL; F_0050bb70(c); ABI_CHECK(0x50bb70u, 0x45a42du); RETCHK(0x45a432u, 0x45a42du); LOADALL;
  /* 0045a432 jmp 0x45a436 */ goto L_0045a436;
L_0045a434:;
  /* 0045a434 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0045a436:;
  /* 0045a436 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a43d push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0045a43f mov esi, 0xf */ { esi = (u32)(0xfu); }
  /* 0045a444 push 0x643d2c */ { u32 v_ = 0x643d2cu; esp -= 4; M32(esp) = v_; }
  /* 0045a449 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0045a44c mov dword ptr [edi + 0x1c8], eax */ { const u32 m_ = (u32)(edi + 0x1c8u); M32(m_) = (u32)(eax); }
  /* 0045a452 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 0045a455 mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 0045a458 mov byte ptr [ebp - 0x2c], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a45b call 0x404420 */ esp -= 4; M32(esp) = 0x45a460u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45a45bu); RETCHK(0x45a460u, 0x45a45bu); LOADALL;
  /* 0045a460 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0045a463 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045a464 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0045a467 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 0045a46e call 0x5075d0 */ esp -= 4; M32(esp) = 0x45a473u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45a46eu); RETCHK(0x45a473u, 0x45a46eu); LOADALL;
  /* 0045a473 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0045a476 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a47d cmp dword ptr [ebp - 0x18], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a481 jb 0x45a48f */ if (CF_) goto L_0045a48f;
  /* 0045a483 mov edx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edx = (u32)(M32(m_)); }
  /* 0045a486 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045a487 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45a48cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45a487u); RETCHK(0x45a48cu, 0x45a487u); LOADALL;
  /* 0045a48c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045a48f:;
  /* 0045a48f push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0045a491 push 0x646ca4 */ { u32 v_ = 0x646ca4u; esp -= 4; M32(esp) = v_; }
  /* 0045a496 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a499 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 0045a49c mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 0045a49f mov byte ptr [ebp - 0x2c], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a4a2 mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 0045a4a5 mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045a4a8 mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a4ab call 0x404420 */ esp -= 4; M32(esp) = 0x45a4b0u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45a4abu); RETCHK(0x45a4b0u, 0x45a4abu); LOADALL;
  /* 0045a4b0 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0045a4b3 lea eax, [ebp - 0x68] */ eax = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a4b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a4b7 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0045a4be call 0x5075d0 */ esp -= 4; M32(esp) = 0x45a4c3u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45a4beu); RETCHK(0x45a4c3u, 0x45a4beu); LOADALL;
  /* 0045a4c3 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a4ca cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a4ce jb 0x45a4dc */ if (CF_) goto L_0045a4dc;
  /* 0045a4d0 mov ecx, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ecx = (u32)(M32(m_)); }
  /* 0045a4d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045a4d4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45a4d9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45a4d4u); RETCHK(0x45a4d9u, 0x45a4d4u); LOADALL;
  /* 0045a4d9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045a4dc:;
  /* 0045a4dc push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0045a4de push 0x646ca4 */ { u32 v_ = 0x646ca4u; esp -= 4; M32(esp) = v_; }
  /* 0045a4e3 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a4e6 mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 0045a4e9 mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045a4ec mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a4ef call 0x404420 */ esp -= 4; M32(esp) = 0x45a4f4u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45a4efu); RETCHK(0x45a4f4u, 0x45a4efu); LOADALL;
  /* 0045a4f4 lea edx, [ebp - 0x68] */ edx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a4f7 mov dword ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3u); }
  /* 0045a4fe mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0045a501 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045a502 call 0x5075d0 */ esp -= 4; M32(esp) = 0x45a507u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45a502u); RETCHK(0x45a507u, 0x45a502u); LOADALL;
  /* 0045a507 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a50e cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a512 jb 0x45a520 */ if (CF_) goto L_0045a520;
  /* 0045a514 mov eax, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 0045a517 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a518 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45a51du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45a518u); RETCHK(0x45a51du, 0x45a518u); LOADALL;
  /* 0045a51d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045a520:;
  /* 0045a520 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0045a522 push 0x646ca4 */ { u32 v_ = 0x646ca4u; esp -= 4; M32(esp) = v_; }
  /* 0045a527 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a52a mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 0045a52d mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045a530 mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a533 call 0x404420 */ esp -= 4; M32(esp) = 0x45a538u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45a533u); RETCHK(0x45a538u, 0x45a533u); LOADALL;
  /* 0045a538 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a53b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045a53c mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0045a53f mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 0045a546 call 0x5075d0 */ esp -= 4; M32(esp) = 0x45a54bu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45a546u); RETCHK(0x45a54bu, 0x45a546u); LOADALL;
  /* 0045a54b mov edx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); edx = (u32)(M32(m_)); }
  /* 0045a551 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a552 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045a553 mov edx, 0x648820 */ { edx = (u32)(0x648820u); }
  /* 0045a558 call 0x50c0f0 */ esp -= 4; M32(esp) = 0x45a55du; SAVEALL; F_0050c0f0(c); ABI_CHECK(0x50c0f0u, 0x45a558u); RETCHK(0x45a55du, 0x45a558u); LOADALL;
  /* 0045a55d mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a564 cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a568 jb 0x45a576 */ if (CF_) goto L_0045a576;
  /* 0045a56a mov eax, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 0045a56d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a56e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45a573u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45a56eu); RETCHK(0x45a573u, 0x45a56eu); LOADALL;
  /* 0045a573 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045a576:;
  /* 0045a576 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045a57c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0045a57e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0045a580 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45a583u; SAVEALL; call_ind(c, t_); RETCHK(0x45a583u, 0x45a580u); LOADALL; }
  /* 0045a583 cmp dword ptr [edi + 0x1c4], ebx */ { const u32 m_ = (u32)(edi + 0x1c4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a589 jne 0x45a5ce */ if (!ZF_) goto L_0045a5ce;
  /* 0045a58b push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0045a58d call 0x5fe934 */ esp -= 4; M32(esp) = 0x45a592u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x45a58du); RETCHK(0x45a592u, 0x45a58du); LOADALL;
  /* 0045a592 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045a595 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a597 je 0x45a5a2 */ if (ZF_) goto L_0045a5a2;
  /* 0045a599 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045a59b call 0x51c6f0 */ esp -= 4; M32(esp) = 0x45a5a0u; SAVEALL; F_0051c6f0(c); ABI_CHECK(0x51c6f0u, 0x45a59bu); RETCHK(0x45a5a0u, 0x45a59bu); LOADALL;
  /* 0045a5a0 jmp 0x45a5a4 */ goto L_0045a5a4;
L_0045a5a2:;
  /* 0045a5a2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0045a5a4:;
  /* 0045a5a4 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a5a6 mov dword ptr [edi + 0x1c4], eax */ { const u32 m_ = (u32)(edi + 0x1c4u); M32(m_) = (u32)(eax); }
  /* 0045a5ac jne 0x45a5c1 */ if (!ZF_) goto L_0045a5c1;
  /* 0045a5ae pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045a5af pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045a5b0 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0045a5b2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045a5b3 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045a5b6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045a5bd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045a5bf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045a5c0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045a5c1:;
  /* 0045a5c1 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0045a5c3 mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 0045a5c9 call 0x5079e0 */ esp -= 4; M32(esp) = 0x45a5ceu; SAVEALL; F_005079e0(c); ABI_CHECK(0x5079e0u, 0x45a5c9u); RETCHK(0x45a5ceu, 0x45a5c9u); LOADALL;
L_0045a5ce:;
  /* 0045a5ce push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0045a5d0 push 0x648638 */ { u32 v_ = 0x648638u; esp -= 4; M32(esp) = v_; }
  /* 0045a5d5 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a5d8 mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 0045a5db mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045a5de mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a5e1 call 0x404420 */ esp -= 4; M32(esp) = 0x45a5e6u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45a5e1u); RETCHK(0x45a5e6u, 0x45a5e1u); LOADALL;
  /* 0045a5e6 lea eax, [ebp - 0x68] */ eax = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a5e9 mov dword ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x5u); }
  /* 0045a5f0 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045a5f6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a5f7 call 0x5075d0 */ esp -= 4; M32(esp) = 0x45a5fcu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45a5f7u); RETCHK(0x45a5fcu, 0x45a5f7u); LOADALL;
  /* 0045a5fc mov dword ptr [edi + 0x1fc], eax */ { const u32 m_ = (u32)(edi + 0x1fcu); M32(m_) = (u32)(eax); }
  /* 0045a602 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a609 cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a60d jb 0x45a61b */ if (CF_) goto L_0045a61b;
  /* 0045a60f mov ecx, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ecx = (u32)(M32(m_)); }
  /* 0045a612 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045a613 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45a618u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45a613u); RETCHK(0x45a618u, 0x45a613u); LOADALL;
  /* 0045a618 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045a61b:;
  /* 0045a61b push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 0045a61d push 0x648628 */ { u32 v_ = 0x648628u; esp -= 4; M32(esp) = v_; }
  /* 0045a622 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a625 mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 0045a628 mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045a62b mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a62e call 0x404420 */ esp -= 4; M32(esp) = 0x45a633u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45a62eu); RETCHK(0x45a633u, 0x45a62eu); LOADALL;
  /* 0045a633 lea edx, [ebp - 0x68] */ edx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a636 mov dword ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x6u); }
  /* 0045a63d mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045a643 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045a644 call 0x5075d0 */ esp -= 4; M32(esp) = 0x45a649u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45a644u); RETCHK(0x45a649u, 0x45a644u); LOADALL;
  /* 0045a649 mov dword ptr [edi + 0x200], eax */ { const u32 m_ = (u32)(edi + 0x200u); M32(m_) = (u32)(eax); }
  /* 0045a64f mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a656 cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a65a jb 0x45a668 */ if (CF_) goto L_0045a668;
  /* 0045a65c mov eax, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 0045a65f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a660 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45a665u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45a660u); RETCHK(0x45a665u, 0x45a660u); LOADALL;
  /* 0045a665 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045a668:;
  /* 0045a668 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0045a66a push 0x644100 */ { u32 v_ = 0x644100u; esp -= 4; M32(esp) = v_; }
  /* 0045a66f lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a672 mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 0045a675 mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045a678 mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a67b call 0x404420 */ esp -= 4; M32(esp) = 0x45a680u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45a67bu); RETCHK(0x45a680u, 0x45a67bu); LOADALL;
  /* 0045a680 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a683 mov dword ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x7u); }
  /* 0045a68a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045a68b mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045a691 call 0x5075d0 */ esp -= 4; M32(esp) = 0x45a696u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45a691u); RETCHK(0x45a696u, 0x45a691u); LOADALL;
  /* 0045a696 mov dword ptr [edi + 0x204], eax */ { const u32 m_ = (u32)(edi + 0x204u); M32(m_) = (u32)(eax); }
  /* 0045a69c mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a6a3 cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a6a7 jb 0x45a6b5 */ if (CF_) goto L_0045a6b5;
  /* 0045a6a9 mov edx, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); edx = (u32)(M32(m_)); }
  /* 0045a6ac push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045a6ad call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45a6b2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45a6adu); RETCHK(0x45a6b2u, 0x45a6adu); LOADALL;
  /* 0045a6b2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045a6b5:;
  /* 0045a6b5 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0045a6b7 push 0x648814 */ { u32 v_ = 0x648814u; esp -= 4; M32(esp) = v_; }
  /* 0045a6bc lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a6bf mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 0045a6c2 mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045a6c5 mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a6c8 call 0x404420 */ esp -= 4; M32(esp) = 0x45a6cdu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45a6c8u); RETCHK(0x45a6cdu, 0x45a6c8u); LOADALL;
  /* 0045a6cd lea eax, [ebp - 0x68] */ eax = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a6d0 mov dword ptr [ebp - 4], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x8u); }
  /* 0045a6d7 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045a6dd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a6de call 0x5075d0 */ esp -= 4; M32(esp) = 0x45a6e3u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45a6deu); RETCHK(0x45a6e3u, 0x45a6deu); LOADALL;
  /* 0045a6e3 mov dword ptr [edi + 0x1e8], eax */ { const u32 m_ = (u32)(edi + 0x1e8u); M32(m_) = (u32)(eax); }
  /* 0045a6e9 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a6f0 cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a6f4 jb 0x45a702 */ if (CF_) goto L_0045a702;
  /* 0045a6f6 mov ecx, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ecx = (u32)(M32(m_)); }
  /* 0045a6f9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045a6fa call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45a6ffu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45a6fau); RETCHK(0x45a6ffu, 0x45a6fau); LOADALL;
  /* 0045a6ff add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045a702:;
  /* 0045a702 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0045a704 push 0x648604 */ { u32 v_ = 0x648604u; esp -= 4; M32(esp) = v_; }
  /* 0045a709 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a70c mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 0045a70f mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045a712 mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a715 call 0x404420 */ esp -= 4; M32(esp) = 0x45a71au; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45a715u); RETCHK(0x45a71au, 0x45a715u); LOADALL;
  /* 0045a71a lea edx, [ebp - 0x68] */ edx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a71d mov dword ptr [ebp - 4], 9 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x9u); }
  /* 0045a724 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045a72a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045a72b call 0x5075d0 */ esp -= 4; M32(esp) = 0x45a730u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45a72bu); RETCHK(0x45a730u, 0x45a72bu); LOADALL;
  /* 0045a730 mov dword ptr [edi + 0x1dc], eax */ { const u32 m_ = (u32)(edi + 0x1dcu); M32(m_) = (u32)(eax); }
  /* 0045a736 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a73d cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a741 jb 0x45a74f */ if (CF_) goto L_0045a74f;
  /* 0045a743 mov eax, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 0045a746 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a747 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45a74cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45a747u); RETCHK(0x45a74cu, 0x45a747u); LOADALL;
  /* 0045a74c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045a74f:;
  /* 0045a74f push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0045a751 push 0x6485f8 */ { u32 v_ = 0x6485f8u; esp -= 4; M32(esp) = v_; }
  /* 0045a756 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a759 mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 0045a75c mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045a75f mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a762 call 0x404420 */ esp -= 4; M32(esp) = 0x45a767u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45a762u); RETCHK(0x45a767u, 0x45a762u); LOADALL;
  /* 0045a767 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a76a mov dword ptr [ebp - 4], 0xa */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xau); }
  /* 0045a771 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045a772 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045a778 call 0x5075d0 */ esp -= 4; M32(esp) = 0x45a77du; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45a778u); RETCHK(0x45a77du, 0x45a778u); LOADALL;
  /* 0045a77d mov dword ptr [edi + 0x1e0], eax */ { const u32 m_ = (u32)(edi + 0x1e0u); M32(m_) = (u32)(eax); }
  /* 0045a783 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a78a cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a78e jb 0x45a79c */ if (CF_) goto L_0045a79c;
  /* 0045a790 mov edx, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); edx = (u32)(M32(m_)); }
  /* 0045a793 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045a794 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45a799u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45a794u); RETCHK(0x45a799u, 0x45a794u); LOADALL;
  /* 0045a799 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045a79c:;
  /* 0045a79c push 0x12 */ { u32 v_ = 0x12u; esp -= 4; M32(esp) = v_; }
  /* 0045a79e push 0x6485e4 */ { u32 v_ = 0x6485e4u; esp -= 4; M32(esp) = v_; }
  /* 0045a7a3 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a7a6 mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 0045a7a9 mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045a7ac mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a7af call 0x404420 */ esp -= 4; M32(esp) = 0x45a7b4u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45a7afu); RETCHK(0x45a7b4u, 0x45a7afu); LOADALL;
  /* 0045a7b4 lea eax, [ebp - 0x68] */ eax = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a7b7 mov dword ptr [ebp - 4], 0xb */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xbu); }
  /* 0045a7be mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045a7c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a7c5 call 0x5075d0 */ esp -= 4; M32(esp) = 0x45a7cau; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45a7c5u); RETCHK(0x45a7cau, 0x45a7c5u); LOADALL;
  /* 0045a7ca mov dword ptr [edi + 0x1e4], eax */ { const u32 m_ = (u32)(edi + 0x1e4u); M32(m_) = (u32)(eax); }
  /* 0045a7d0 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a7d7 cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a7db jb 0x45a7e9 */ if (CF_) goto L_0045a7e9;
  /* 0045a7dd mov ecx, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ecx = (u32)(M32(m_)); }
  /* 0045a7e0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045a7e1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45a7e6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45a7e1u); RETCHK(0x45a7e6u, 0x45a7e1u); LOADALL;
  /* 0045a7e6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045a7e9:;
  /* 0045a7e9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045a7ea push 0x6485d4 */ { u32 v_ = 0x6485d4u; esp -= 4; M32(esp) = v_; }
  /* 0045a7ef lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a7f2 mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 0045a7f5 mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045a7f8 mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a7fb call 0x404420 */ esp -= 4; M32(esp) = 0x45a800u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45a7fbu); RETCHK(0x45a800u, 0x45a7fbu); LOADALL;
  /* 0045a800 lea edx, [ebp - 0x68] */ edx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a803 mov dword ptr [ebp - 4], 0xc */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xcu); }
  /* 0045a80a mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045a810 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045a811 call 0x5075d0 */ esp -= 4; M32(esp) = 0x45a816u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45a811u); RETCHK(0x45a816u, 0x45a811u); LOADALL;
  /* 0045a816 mov dword ptr [edi + 0x1f4], eax */ { const u32 m_ = (u32)(edi + 0x1f4u); M32(m_) = (u32)(eax); }
  /* 0045a81c mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a823 cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a827 jb 0x45a835 */ if (CF_) goto L_0045a835;
  /* 0045a829 mov eax, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 0045a82c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a82d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45a832u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45a82du); RETCHK(0x45a832u, 0x45a82du); LOADALL;
  /* 0045a832 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045a835:;
  /* 0045a835 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0045a837 push 0x6485c0 */ { u32 v_ = 0x6485c0u; esp -= 4; M32(esp) = v_; }
  /* 0045a83c lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a83f mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 0045a842 mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045a845 mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a848 call 0x404420 */ esp -= 4; M32(esp) = 0x45a84du; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45a848u); RETCHK(0x45a84du, 0x45a848u); LOADALL;
  /* 0045a84d lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a850 mov dword ptr [ebp - 4], 0xd */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xdu); }
  /* 0045a857 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045a858 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045a85e call 0x5075d0 */ esp -= 4; M32(esp) = 0x45a863u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45a85eu); RETCHK(0x45a863u, 0x45a85eu); LOADALL;
  /* 0045a863 mov dword ptr [edi + 0x1f8], eax */ { const u32 m_ = (u32)(edi + 0x1f8u); M32(m_) = (u32)(eax); }
  /* 0045a869 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a870 cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a874 jb 0x45a882 */ if (CF_) goto L_0045a882;
  /* 0045a876 mov edx, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); edx = (u32)(M32(m_)); }
  /* 0045a879 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045a87a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45a87fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45a87au); RETCHK(0x45a87fu, 0x45a87au); LOADALL;
  /* 0045a87f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045a882:;
  /* 0045a882 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0045a884 push 0x6485b4 */ { u32 v_ = 0x6485b4u; esp -= 4; M32(esp) = v_; }
  /* 0045a889 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a88c mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 0045a88f mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045a892 mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a895 call 0x404420 */ esp -= 4; M32(esp) = 0x45a89au; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45a895u); RETCHK(0x45a89au, 0x45a895u); LOADALL;
  /* 0045a89a lea eax, [ebp - 0x68] */ eax = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a89d mov dword ptr [ebp - 4], 0xe */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xeu); }
  /* 0045a8a4 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045a8aa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a8ab call 0x5075d0 */ esp -= 4; M32(esp) = 0x45a8b0u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45a8abu); RETCHK(0x45a8b0u, 0x45a8abu); LOADALL;
  /* 0045a8b0 mov dword ptr [edi + 0x1d4], eax */ { const u32 m_ = (u32)(edi + 0x1d4u); M32(m_) = (u32)(eax); }
  /* 0045a8b6 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a8bd cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a8c1 jb 0x45a8cf */ if (CF_) goto L_0045a8cf;
  /* 0045a8c3 mov ecx, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ecx = (u32)(M32(m_)); }
  /* 0045a8c6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045a8c7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45a8ccu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45a8c7u); RETCHK(0x45a8ccu, 0x45a8c7u); LOADALL;
  /* 0045a8cc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045a8cf:;
  /* 0045a8cf push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0045a8d1 push 0x6485a8 */ { u32 v_ = 0x6485a8u; esp -= 4; M32(esp) = v_; }
  /* 0045a8d6 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a8d9 mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 0045a8dc mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045a8df mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a8e2 call 0x404420 */ esp -= 4; M32(esp) = 0x45a8e7u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45a8e2u); RETCHK(0x45a8e7u, 0x45a8e2u); LOADALL;
  /* 0045a8e7 lea edx, [ebp - 0x68] */ edx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a8ea mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0045a8ed mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045a8f3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045a8f4 call 0x5075d0 */ esp -= 4; M32(esp) = 0x45a8f9u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45a8f4u); RETCHK(0x45a8f9u, 0x45a8f4u); LOADALL;
  /* 0045a8f9 mov dword ptr [edi + 0x1cc], eax */ { const u32 m_ = (u32)(edi + 0x1ccu); M32(m_) = (u32)(eax); }
  /* 0045a8ff mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a906 cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a90a jb 0x45a918 */ if (CF_) goto L_0045a918;
  /* 0045a90c mov eax, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 0045a90f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a910 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45a915u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45a910u); RETCHK(0x45a915u, 0x45a910u); LOADALL;
  /* 0045a915 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045a918:;
  /* 0045a918 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0045a91a push 0x64859c */ { u32 v_ = 0x64859cu; esp -= 4; M32(esp) = v_; }
  /* 0045a91f lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a922 mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 0045a925 mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045a928 mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a92b call 0x404420 */ esp -= 4; M32(esp) = 0x45a930u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45a92bu); RETCHK(0x45a930u, 0x45a92bu); LOADALL;
  /* 0045a930 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a933 mov dword ptr [ebp - 4], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x10u); }
  /* 0045a93a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045a93b mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045a941 call 0x5075d0 */ esp -= 4; M32(esp) = 0x45a946u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45a941u); RETCHK(0x45a946u, 0x45a941u); LOADALL;
  /* 0045a946 mov dword ptr [edi + 0x1d0], eax */ { const u32 m_ = (u32)(edi + 0x1d0u); M32(m_) = (u32)(eax); }
  /* 0045a94c mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a953 cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a957 jb 0x45a965 */ if (CF_) goto L_0045a965;
  /* 0045a959 mov edx, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); edx = (u32)(M32(m_)); }
  /* 0045a95c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045a95d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45a962u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45a95du); RETCHK(0x45a962u, 0x45a95du); LOADALL;
  /* 0045a962 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045a965:;
  /* 0045a965 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0045a967 push 0x648808 */ { u32 v_ = 0x648808u; esp -= 4; M32(esp) = v_; }
  /* 0045a96c lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a96f mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 0045a972 mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045a975 mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a978 call 0x404420 */ esp -= 4; M32(esp) = 0x45a97du; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45a978u); RETCHK(0x45a97du, 0x45a978u); LOADALL;
  /* 0045a97d lea eax, [ebp - 0x68] */ eax = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a980 mov dword ptr [ebp - 4], 0x11 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x11u); }
  /* 0045a987 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045a98d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a98e call 0x5075d0 */ esp -= 4; M32(esp) = 0x45a993u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45a98eu); RETCHK(0x45a993u, 0x45a98eu); LOADALL;
  /* 0045a993 mov dword ptr [edi + 0x260], eax */ { const u32 m_ = (u32)(edi + 0x260u); M32(m_) = (u32)(eax); }
  /* 0045a999 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a9a0 cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a9a4 jb 0x45a9b2 */ if (CF_) goto L_0045a9b2;
  /* 0045a9a6 mov ecx, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ecx = (u32)(M32(m_)); }
  /* 0045a9a9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045a9aa call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45a9afu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45a9aau); RETCHK(0x45a9afu, 0x45a9aau); LOADALL;
  /* 0045a9af add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045a9b2:;
  /* 0045a9b2 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0045a9b4 push 0x6428bc */ { u32 v_ = 0x6428bcu; esp -= 4; M32(esp) = v_; }
  /* 0045a9b9 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a9bc mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 0045a9bf mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045a9c2 mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045a9c5 call 0x404420 */ esp -= 4; M32(esp) = 0x45a9cau; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45a9c5u); RETCHK(0x45a9cau, 0x45a9c5u); LOADALL;
  /* 0045a9ca lea edx, [ebp - 0x68] */ edx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045a9cd mov dword ptr [ebp - 4], 0x12 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x12u); }
  /* 0045a9d4 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045a9da push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045a9db call 0x5075d0 */ esp -= 4; M32(esp) = 0x45a9e0u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x45a9dbu); RETCHK(0x45a9e0u, 0x45a9dbu); LOADALL;
  /* 0045a9e0 mov dword ptr [edi + 0x264], eax */ { const u32 m_ = (u32)(edi + 0x264u); M32(m_) = (u32)(eax); }
  /* 0045a9e6 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045a9ed cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045a9f1 jb 0x45a9ff */ if (CF_) goto L_0045a9ff;
  /* 0045a9f3 mov eax, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 0045a9f6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045a9f7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45a9fcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45a9f7u); RETCHK(0x45a9fcu, 0x45a9f7u); LOADALL;
  /* 0045a9fc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045a9ff:;
  /* 0045a9ff mov eax, dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); eax = (u32)(M32(m_)); }
  /* 0045aa05 push 0xea */ { u32 v_ = 0xeau; esp -= 4; M32(esp) = v_; }
  /* 0045aa0a push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0045aa0f mov dword ptr [eax + 0x294], 2 */ { const u32 m_ = (u32)(eax + 0x294u); M32(m_) = (u32)(0x2u); }
  /* 0045aa19 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45aa1fu; SAVEALL; call_ind(c, t_); RETCHK(0x45aa1fu, 0x45aa19u); LOADALL; }
  /* 0045aa1f mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0045aa21 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 0045aa24 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 0045aa27 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045aa2a lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
  /* 0045aa2d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_0045aa30:;
  /* 0045aa30 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0045aa32 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0045aa33 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0045aa35 jne 0x45aa30 */ if (!ZF_) goto L_0045aa30;
  /* 0045aa37 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045aa39 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045aa3a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045aa3b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0045aa3e call 0x404420 */ esp -= 4; M32(esp) = 0x45aa43u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45aa3eu); RETCHK(0x45aa43u, 0x45aa3eu); LOADALL;
  /* 0045aa43 mov dword ptr [ebp - 4], 0x13 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x13u); }
  /* 0045aa4a mov esi, dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); esi = (u32)(M32(m_)); }
  /* 0045aa50 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0045aa53 call 0x5224b0 */ esp -= 4; M32(esp) = 0x45aa58u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x45aa53u); RETCHK(0x45aa58u, 0x45aa53u); LOADALL;
  /* 0045aa58 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045aa5f cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045aa63 jb 0x45aa71 */ if (CF_) goto L_0045aa71;
  /* 0045aa65 mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 0045aa68 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045aa69 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45aa6eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45aa69u); RETCHK(0x45aa6eu, 0x45aa69u); LOADALL;
  /* 0045aa6e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045aa71:;
  /* 0045aa71 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045aa77 lea eax, [edi + 0x1d8] */ eax = (u32)((u32)(edi + 0x1d8u));
  /* 0045aa7d mov dword ptr [ebp - 0x34], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0xfu); }
  /* 0045aa84 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 0045aa87 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045aa8a mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0045aa8c mov dword ptr [0x6962b4], ecx */ { const u32 m_ = (u32)(0x6962b4u); M32(m_) = (u32)(ecx); }
  /* 0045aa92 call 0x463370 */ esp -= 4; M32(esp) = 0x45aa97u; SAVEALL; F_00463370(c); ABI_CHECK(0x463370u, 0x45aa92u); RETCHK(0x45aa97u, 0x45aa92u); LOADALL;
  /* 0045aa97 mov eax, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 0045aa9d mov ecx, dword ptr [eax + 0x258] */ { const u32 m_ = (u32)(eax + 0x258u); ecx = (u32)(M32(m_)); }
  /* 0045aaa3 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0045aaa5 push 0x6487f8 */ { u32 v_ = 0x6487f8u; esp -= 4; M32(esp) = v_; }
  /* 0045aaaa call dword ptr [edx + 0xec] */ { const u32 m_ = (u32)(edx + 0xecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45aab0u; SAVEALL; call_ind(c, t_); RETCHK(0x45aab0u, 0x45aaaau); LOADALL; }
  /* 0045aab0 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045aab6 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045aab8 je 0x45aac1 */ if (ZF_) goto L_0045aac1;
  /* 0045aaba mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045aabc push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0045aabe call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45aac1u; SAVEALL; call_ind(c, t_); RETCHK(0x45aac1u, 0x45aabeu); LOADALL; }
L_0045aac1:;
  /* 0045aac1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045aac4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045aac5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045aac6 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0045aac8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045aac9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045aad0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045aad2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045aad3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045aae0(CPU *c) {
  NATIVE_HOOK(0x45aae0u) REGS; LOADALL;
L_0045aae0:;
  /* 0045aae0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045aae1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045aae3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045aae5 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 0045aaea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045aaf0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045aaf1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045aaf8 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045aafb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045aafc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045aafd mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0045aaff mov ecx, dword ptr [esi + 0x1c8] */ { const u32 m_ = (u32)(esi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0045ab05 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0045ab07 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045ab09 je 0x45ab7e */ if (ZF_) goto L_0045ab7e;
  /* 0045ab0b mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045ab0d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045ab0e call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45ab11u; SAVEALL; call_ind(c, t_); RETCHK(0x45ab11u, 0x45ab0eu); LOADALL; }
  /* 0045ab11 mov eax, dword ptr [esi + 0x1c8] */ { const u32 m_ = (u32)(esi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 0045ab17 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0045ab19 call 0x5079e0 */ esp -= 4; M32(esp) = 0x45ab1eu; SAVEALL; F_005079e0(c); ABI_CHECK(0x5079e0u, 0x45ab19u); RETCHK(0x45ab1eu, 0x45ab19u); LOADALL;
  /* 0045ab1e push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0045ab20 push 0x648820 */ { u32 v_ = 0x648820u; esp -= 4; M32(esp) = v_; }
  /* 0045ab25 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0045ab28 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 0045ab2f mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0045ab32 mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045ab35 call 0x404420 */ esp -= 4; M32(esp) = 0x45ab3au; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45ab35u); RETCHK(0x45ab3au, 0x45ab35u); LOADALL;
  /* 0045ab3a mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0045ab3d mov eax, dword ptr [esi + 0x1c8] */ { const u32 m_ = (u32)(esi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 0045ab43 call 0x507890 */ esp -= 4; M32(esp) = 0x45ab48u; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x45ab43u); RETCHK(0x45ab48u, 0x45ab43u); LOADALL;
  /* 0045ab48 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0045ab4a lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0045ab4d call 0x5079f0 */ esp -= 4; M32(esp) = 0x45ab52u; SAVEALL; F_005079f0(c); ABI_CHECK(0x5079f0u, 0x45ab4du); RETCHK(0x45ab52u, 0x45ab4du); LOADALL;
  /* 0045ab52 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0045ab59 cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045ab5d jb 0x45ab6b */ if (CF_) goto L_0045ab6b;
  /* 0045ab5f mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 0045ab62 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045ab63 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45ab68u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45ab63u); RETCHK(0x45ab68u, 0x45ab63u); LOADALL;
  /* 0045ab68 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045ab6b:;
  /* 0045ab6b mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 0045ab72 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0045ab75 mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045ab78 mov dword ptr [esi + 0x1c8], ebx */ { const u32 m_ = (u32)(esi + 0x1c8u); M32(m_) = (u32)(ebx); }
L_0045ab7e:;
  /* 0045ab7e mov ecx, dword ptr [esi + 0x1c4] */ { const u32 m_ = (u32)(esi + 0x1c4u); ecx = (u32)(M32(m_)); }
  /* 0045ab84 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045ab86 je 0x45ab94 */ if (ZF_) goto L_0045ab94;
  /* 0045ab88 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0045ab8a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0045ab8c call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45ab8eu; SAVEALL; call_ind(c, t_); RETCHK(0x45ab8eu, 0x45ab8cu); LOADALL; }
  /* 0045ab8e mov dword ptr [esi + 0x1c4], ebx */ { const u32 m_ = (u32)(esi + 0x1c4u); M32(m_) = (u32)(ebx); }
L_0045ab94:;
  /* 0045ab94 call 0x4633b0 */ esp -= 4; M32(esp) = 0x45ab99u; SAVEALL; F_004633b0(c); ABI_CHECK(0x4633b0u, 0x45ab94u); RETCHK(0x45ab99u, 0x45ab94u); LOADALL;
  /* 0045ab99 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045ab9c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045ab9d mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0045ab9f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045aba0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045aba7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045aba9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045abaa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045abb0(CPU *c) {
  NATIVE_HOOK(0x45abb0u) REGS; LOADALL;
L_0045abb0:;
  /* 0045abb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045abb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045abb3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045abb6 sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045abb9 je 0x45abd1 */ if (ZF_) goto L_0045abd1;
  /* 0045abbb dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0045abbc jne 0x45abe0 */ if (!ZF_) goto L_0045abe0;
  /* 0045abbe call 0x45b470 */ esp -= 4; M32(esp) = 0x45abc3u; SAVEALL; F_0045b470(c); ABI_CHECK(0x45b470u, 0x45abbeu); RETCHK(0x45abc3u, 0x45abbeu); LOADALL;
  /* 0045abc3 mov dword ptr [0x696078], 1 */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(0x1u); }
  /* 0045abcd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045abce ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0045abd1:;
  /* 0045abd1 call 0x45b2f0 */ esp -= 4; M32(esp) = 0x45abd6u; SAVEALL; F_0045b2f0(c); ABI_CHECK(0x45b2f0u, 0x45abd1u); RETCHK(0x45abd6u, 0x45abd1u); LOADALL;
  /* 0045abd6 mov dword ptr [0x696078], 0 */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(0x0u); }
L_0045abe0:;
  /* 0045abe0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045abe1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045abf0(CPU *c) {
  NATIVE_HOOK(0x45abf0u) REGS; LOADALL;
L_0045abf0:;
  /* 0045abf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045abf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045abf3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045abf9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045abfb push 0x622a68 */ { u32 v_ = 0x622a68u; esp -= 4; M32(esp) = v_; }
  /* 0045ac00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045ac01 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045ac08 cmp dword ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045ac0c mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0045ac13 jne 0x45ac43 */ if (!ZF_) goto L_0045ac43;
  /* 0045ac15 cmp dword ptr [ebp + 0x24], 0x10 */ { const u32 m_ = (u32)(ebp + 0x24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045ac19 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0045ac1c jae 0x45ac21 */ if (!CF_) goto L_0045ac21;
  /* 0045ac1e lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
L_0045ac21:;
  /* 0045ac21 push 0x1e */ { u32 v_ = 0x1eu; esp -= 4; M32(esp) = v_; }
  /* 0045ac23 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045ac24 push 0x6962c8 */ { u32 v_ = 0x6962c8u; esp -= 4; M32(esp) = v_; }
  /* 0045ac29 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x45ac2eu; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x45ac29u); RETCHK(0x45ac2eu, 0x45ac29u); LOADALL;
  /* 0045ac2e mov eax, dword ptr [0x6962c4] */ { const u32 m_ = (u32)(0x6962c4u); eax = (u32)(M32(m_)); }
  /* 0045ac33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045ac34 mov byte ptr [0x6962e6], 0 */ { const u32 m_ = (u32)(0x6962e6u); M8(m_) = (u8)(0x0u); }
  /* 0045ac3b call 0x45b390 */ esp -= 4; M32(esp) = 0x45ac40u; SAVEALL; F_0045b390(c); ABI_CHECK(0x45b390u, 0x45ac3bu); RETCHK(0x45ac40u, 0x45ac3bu); LOADALL;
  /* 0045ac40 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045ac43:;
  /* 0045ac43 cmp dword ptr [ebp + 0x24], 0x10 */ { const u32 m_ = (u32)(ebp + 0x24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045ac47 jb 0x45ac55 */ if (CF_) goto L_0045ac55;
  /* 0045ac49 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0045ac4c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045ac4d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45ac52u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45ac4du); RETCHK(0x45ac52u, 0x45ac4du); LOADALL;
  /* 0045ac52 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045ac55:;
  /* 0045ac55 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045ac58 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045ac5f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045ac61 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045ac62 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045ac70(CPU *c) {
  NATIVE_HOOK(0x45ac70u) REGS; LOADALL;
L_0045ac70:;
  /* 0045ac70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045ac71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045ac73 cmp dword ptr [ebp + 8], 6 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045ac77 jne 0x45acf8 */ if (!ZF_) goto L_0045acf8;
  /* 0045ac79 mov ecx, dword ptr [0x6962bc] */ { const u32 m_ = (u32)(0x6962bcu); ecx = (u32)(M32(m_)); }
  /* 0045ac7f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045ac81 jl 0x45acf8 */ if (LT_) goto L_0045acf8;
  /* 0045ac83 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045ac84 mov esi, dword ptr [0x7a7254] */ { const u32 m_ = (u32)(0x7a7254u); esi = (u32)(M32(m_)); }
  /* 0045ac8a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045ac8c je 0x45acf7 */ if (ZF_) goto L_0045acf7;
  /* 0045ac8e mov edx, dword ptr [0x7a7258] */ { const u32 m_ = (u32)(0x7a7258u); edx = (u32)(M32(m_)); }
  /* 0045ac94 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045ac96 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045ac9b imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045ac9d sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045aca0 mov eax, edx */ { eax = (u32)(edx); }
  /* 0045aca2 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045aca5 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045aca7 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045aca9 jae 0x45acf7 */ if (!CF_) goto L_0045acf7;
  /* 0045acab imul ecx, ecx, 0x2c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x2cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045acae mov eax, dword ptr [ecx + esi + 8] */ { const u32 m_ = (u32)(ecx + esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045acb2 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045acb4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045acb6 je 0x45acdf */ if (ZF_) goto L_0045acdf;
  /* 0045acb8 push 0x45abf0 */ { u32 v_ = 0x45abf0u; esp -= 4; M32(esp) = v_; }
  /* 0045acbd push 0xa0 */ { u32 v_ = 0xa0u; esp -= 4; M32(esp) = v_; }
  /* 0045acc2 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0045acc7 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45accdu; SAVEALL; call_ind(c, t_); RETCHK(0x45accdu, 0x45acc7u); LOADALL; }
  /* 0045accd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045acce mov eax, dword ptr [0x6962b4] */ { const u32 m_ = (u32)(0x6962b4u); eax = (u32)(M32(m_)); }
  /* 0045acd3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045acd4 call 0x4610e0 */ esp -= 4; M32(esp) = 0x45acd9u; SAVEALL; F_004610e0(c); ABI_CHECK(0x4610e0u, 0x45acd4u); RETCHK(0x45acd9u, 0x45acd4u); LOADALL;
  /* 0045acd9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045acdc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045acdd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045acde ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045acdf:;
  /* 0045acdf mov ecx, dword ptr [0x6962c4] */ { const u32 m_ = (u32)(0x6962c4u); ecx = (u32)(M32(m_)); }
  /* 0045ace5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045ace6 mov word ptr [0x6962c8], 0x30 */ { const u32 m_ = (u32)(0x6962c8u); M16(m_) = (u16)(0x30u); }
  /* 0045acef call 0x45b390 */ esp -= 4; M32(esp) = 0x45acf4u; SAVEALL; F_0045b390(c); ABI_CHECK(0x45b390u, 0x45acefu); RETCHK(0x45acf4u, 0x45acefu); LOADALL;
  /* 0045acf4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045acf7:;
  /* 0045acf7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0045acf8:;
  /* 0045acf8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045acf9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045ad00(CPU *c) {
  NATIVE_HOOK(0x45ad00u) REGS; LOADALL;
L_0045ad00:;
  /* 0045ad00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045ad01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045ad03 cmp dword ptr [ebp + 8], 6 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045ad07 jne 0x45ad45 */ if (!ZF_) goto L_0045ad45;
  /* 0045ad09 mov edx, dword ptr [0x6962bc] */ { const u32 m_ = (u32)(0x6962bcu); edx = (u32)(M32(m_)); }
  /* 0045ad0f test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045ad11 jl 0x45ad45 */ if (LT_) goto L_0045ad45;
  /* 0045ad13 mov ecx, dword ptr [0x7a7264] */ { const u32 m_ = (u32)(0x7a7264u); ecx = (u32)(M32(m_)); }
  /* 0045ad19 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045ad1b je 0x45ad45 */ if (ZF_) goto L_0045ad45;
  /* 0045ad1d mov eax, dword ptr [0x7a7268] */ { const u32 m_ = (u32)(0x7a7268u); eax = (u32)(M32(m_)); }
  /* 0045ad22 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045ad24 sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045ad27 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045ad29 jae 0x45ad45 */ if (!CF_) goto L_0045ad45;
  /* 0045ad2b mov eax, dword ptr [0x6962b8] */ { const u32 m_ = (u32)(0x6962b8u); eax = (u32)(M32(m_)); }
  /* 0045ad30 mov ecx, dword ptr [eax + 0x1e8] */ { const u32 m_ = (u32)(eax + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 0045ad36 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045ad38 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045ad39 call dword ptr [eax + 0x110] */ { const u32 m_ = (u32)(eax + 0x110u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45ad3fu; SAVEALL; call_ind(c, t_); RETCHK(0x45ad3fu, 0x45ad39u); LOADALL; }
  /* 0045ad3f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045ad40 jmp 0x45b4c0 */ goto L_0045b4c0;
L_0045ad45:;
  /* 0045ad45 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045ad46 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045b4c0:;
  /* 0045b4c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045b4c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045b4c3 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b4c6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045b4c8 mov dword ptr [ebp - 0xc], 0x100000a4 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x100000a4u); }
  /* 0045b4cf mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 0045b4d6 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0045b4d9 mov dword ptr [0x6962c0], eax */ { const u32 m_ = (u32)(0x6962c0u); M32(m_) = (u32)(eax); }
  /* 0045b4de call 0x4019a0 */ esp -= 4; M32(esp) = 0x45b4e3u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x45b4deu); RETCHK(0x45b4e3u, 0x45b4deu); LOADALL;
  /* 0045b4e3 mov ecx, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 0045b4e9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b4ec test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b4ee je 0x45b4fe */ if (ZF_) goto L_0045b4fe;
  /* 0045b4f0 lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0045b4f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b4f4 mov edx, 0xc */ { edx = (u32)(0xcu); }
  /* 0045b4f9 call 0x55f4b0 */ esp -= 4; M32(esp) = 0x45b4feu; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x45b4f9u); RETCHK(0x45b4feu, 0x45b4f9u); LOADALL;
L_0045b4fe:;
  /* 0045b4fe push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045b500 call 0x54c180 */ esp -= 4; M32(esp) = 0x45b505u; SAVEALL; F_0054c180(c); ABI_CHECK(0x54c180u, 0x45b500u); RETCHK(0x45b505u, 0x45b500u); LOADALL;
  /* 0045b505 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b508 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045b50a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045b50b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045ad50(CPU *c) {
  NATIVE_HOOK(0x45ad50u) REGS; LOADALL;
L_0045ad50:;
  /* 0045ad50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045ad51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045ad53 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045ad55 push 0x625f68 */ { u32 v_ = 0x625f68u; esp -= 4; M32(esp) = v_; }
  /* 0045ad5a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045ad60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045ad61 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045ad68 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045ad6b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0045ad70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045ad71 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045ad74 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0045ad77 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0045ad7a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045ad7c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045ad7d mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0045ad7f je 0x45ae62 */ if (ZF_) goto L_0045ae62;
  /* 0045ad85 call 0x5075c0 */ esp -= 4; M32(esp) = 0x45ad8au; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x45ad85u); RETCHK(0x45ad8au, 0x45ad85u); LOADALL;
  /* 0045ad8a push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045ad8c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045ad8e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045ad8f lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0045ad92 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0045ad99 mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 0045ada0 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0045ada4 call 0x404140 */ esp -= 4; M32(esp) = 0x45ada9u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x45ada4u); RETCHK(0x45ada9u, 0x45ada4u); LOADALL;
  /* 0045ada9 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0045adb0 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0045adb2 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0045adb3 je 0x45aec1 */ if (ZF_) goto L_0045aec1;
  /* 0045adb9 sub eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045adbc je 0x45ae7e */ if (ZF_) goto L_0045ae7e;
  /* 0045adc2 sub eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045adc5 jne 0x45ae50 */ if (!ZF_) goto L_0045ae50;
  /* 0045adcb mov eax, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 0045add1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045add3 je 0x45ae50 */ if (ZF_) goto L_0045ae50;
  /* 0045add5 call 0x5075c0 */ esp -= 4; M32(esp) = 0x45addau; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x45add5u); RETCHK(0x45addau, 0x45add5u); LOADALL;
  /* 0045adda lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0045addd call 0x40a560 */ esp -= 4; M32(esp) = 0x45ade2u; SAVEALL; F_0040a560(c); ABI_CHECK(0x40a560u, 0x45adddu); RETCHK(0x45ade2u, 0x45adddu); LOADALL;
  /* 0045ade2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0045ade4 je 0x45ae50 */ if (ZF_) goto L_0045ae50;
  /* 0045ade6 mov ecx, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 0045adec mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045adee call dword ptr [eax + 0x128] */ { const u32 m_ = (u32)(eax + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45adf4u; SAVEALL; call_ind(c, t_); RETCHK(0x45adf4u, 0x45adeeu); LOADALL; }
  /* 0045adf4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045adf6 mov dword ptr [0x6962bc], eax */ { const u32 m_ = (u32)(0x6962bcu); M32(m_) = (u32)(eax); }
  /* 0045adfb jl 0x45ae50 */ if (LT_) goto L_0045ae50;
  /* 0045adfd mov eax, dword ptr [0x696078] */ { const u32 m_ = (u32)(0x696078u); eax = (u32)(M32(m_)); }
  /* 0045ae02 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045ae04 jne 0x45ae1d */ if (!ZF_) goto L_0045ae1d;
  /* 0045ae06 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0045ae0b push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0045ae10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045ae11 push 0x45ac70 */ { u32 v_ = 0x45ac70u; esp -= 4; M32(esp) = v_; }
  /* 0045ae16 push 0xeb */ { u32 v_ = 0xebu; esp -= 4; M32(esp) = v_; }
  /* 0045ae1b jmp 0x45ae38 */ goto L_0045ae38;
L_0045ae1d:;
  /* 0045ae1d cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045ae20 jne 0x45ae50 */ if (!ZF_) goto L_0045ae50;
  /* 0045ae22 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0045ae27 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0045ae2c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045ae2e push 0x45ad00 */ { u32 v_ = 0x45ad00u; esp -= 4; M32(esp) = v_; }
  /* 0045ae33 push 0xec */ { u32 v_ = 0xecu; esp -= 4; M32(esp) = v_; }
L_0045ae38:;
  /* 0045ae38 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0045ae3d call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45ae43u; SAVEALL; call_ind(c, t_); RETCHK(0x45ae43u, 0x45ae3du); LOADALL; }
  /* 0045ae43 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045ae44 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0045ae46 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0045ae48 call 0x50b090 */ esp -= 4; M32(esp) = 0x45ae4du; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x45ae48u); RETCHK(0x45ae4du, 0x45ae48u); LOADALL;
  /* 0045ae4d add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045ae50:;
  /* 0045ae50 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045ae54 jb 0x45ae62 */ if (CF_) goto L_0045ae62;
  /* 0045ae56 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0045ae59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045ae5a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45ae5fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45ae5au); RETCHK(0x45ae5fu, 0x45ae5au); LOADALL;
  /* 0045ae5f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045ae62:;
  /* 0045ae62 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_0045ae64:;
  /* 0045ae64 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045ae67 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045ae68 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045ae6f mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0045ae72 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045ae73 call 0x61af31 */ esp -= 4; M32(esp) = 0x45ae78u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x45ae73u); RETCHK(0x45ae78u, 0x45ae73u); LOADALL;
  /* 0045ae78 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045ae7a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045ae7b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0045ae7e:;
  /* 0045ae7e mov eax, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 0045ae84 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045ae86 je 0x45ae50 */ if (ZF_) goto L_0045ae50;
  /* 0045ae88 call 0x5075c0 */ esp -= 4; M32(esp) = 0x45ae8du; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x45ae88u); RETCHK(0x45ae8du, 0x45ae88u); LOADALL;
  /* 0045ae8d lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0045ae90 call 0x40a560 */ esp -= 4; M32(esp) = 0x45ae95u; SAVEALL; F_0040a560(c); ABI_CHECK(0x40a560u, 0x45ae90u); RETCHK(0x45ae95u, 0x45ae90u); LOADALL;
  /* 0045ae95 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0045ae97 je 0x45ae50 */ if (ZF_) goto L_0045ae50;
  /* 0045ae99 mov ecx, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 0045ae9f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0045aea1 call dword ptr [edx + 0x128] */ { const u32 m_ = (u32)(edx + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45aea7u; SAVEALL; call_ind(c, t_); RETCHK(0x45aea7u, 0x45aea1u); LOADALL; }
  /* 0045aea7 mov dword ptr [0x6962c4], eax */ { const u32 m_ = (u32)(0x6962c4u); M32(m_) = (u32)(eax); }
  /* 0045aeac call 0x458bd0 */ esp -= 4; M32(esp) = 0x45aeb1u; SAVEALL; F_00458bd0(c); ABI_CHECK(0x458bd0u, 0x45aeacu); RETCHK(0x45aeb1u, 0x45aeacu); LOADALL;
  /* 0045aeb1 cmp dword ptr [0x696078], 1 */ { const u32 m_ = (u32)(0x696078u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045aeb8 jne 0x45ae50 */ if (!ZF_) goto L_0045ae50;
  /* 0045aeba call 0x45b260 */ esp -= 4; M32(esp) = 0x45aebfu; SAVEALL; F_0045b260(c); ABI_CHECK(0x45b260u, 0x45aebau); RETCHK(0x45aebfu, 0x45aebau); LOADALL;
  /* 0045aebf jmp 0x45ae50 */ goto L_0045ae50;
L_0045aec1:;
  /* 0045aec1 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0045aec4 push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 0045aec6 push 0x6485d4 */ { u32 v_ = 0x6485d4u; esp -= 4; M32(esp) = v_; }
  /* 0045aecb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045aecc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045aece lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0045aed1 call 0x405de0 */ esp -= 4; M32(esp) = 0x45aed6u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x45aed1u); RETCHK(0x45aed6u, 0x45aed1u); LOADALL;
  /* 0045aed6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045aed8 jne 0x45aeed */ if (!ZF_) goto L_0045aeed;
  /* 0045aeda mov ecx, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 0045aee0 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0045aee2 call dword ptr [edx + 0x130] */ { const u32 m_ = (u32)(edx + 0x130u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45aee8u; SAVEALL; call_ind(c, t_); RETCHK(0x45aee8u, 0x45aee2u); LOADALL; }
  /* 0045aee8 call 0x458bd0 */ esp -= 4; M32(esp) = 0x45aeedu; SAVEALL; F_00458bd0(c); ABI_CHECK(0x458bd0u, 0x45aee8u); RETCHK(0x45aeedu, 0x45aee8u); LOADALL;
L_0045aeed:;
  /* 0045aeed mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0045aef0 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0045aef2 push 0x6485c0 */ { u32 v_ = 0x6485c0u; esp -= 4; M32(esp) = v_; }
  /* 0045aef7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045aef8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045aefa lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0045aefd call 0x405de0 */ esp -= 4; M32(esp) = 0x45af02u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x45aefdu); RETCHK(0x45af02u, 0x45aefdu); LOADALL;
  /* 0045af02 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045af04 jne 0x45af19 */ if (!ZF_) goto L_0045af19;
  /* 0045af06 mov ecx, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 0045af0c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0045af0e call dword ptr [edx + 0x12c] */ { const u32 m_ = (u32)(edx + 0x12cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45af14u; SAVEALL; call_ind(c, t_); RETCHK(0x45af14u, 0x45af0eu); LOADALL; }
  /* 0045af14 call 0x458bd0 */ esp -= 4; M32(esp) = 0x45af19u; SAVEALL; F_00458bd0(c); ABI_CHECK(0x458bd0u, 0x45af14u); RETCHK(0x45af19u, 0x45af14u); LOADALL;
L_0045af19:;
  /* 0045af19 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0045af1c push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 0045af1e push 0x6484bc */ { u32 v_ = 0x6484bcu; esp -= 4; M32(esp) = v_; }
  /* 0045af23 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045af24 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045af26 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0045af29 call 0x405de0 */ esp -= 4; M32(esp) = 0x45af2eu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x45af29u); RETCHK(0x45af2eu, 0x45af29u); LOADALL;
  /* 0045af2e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045af30 jne 0x45ae50 */ if (!ZF_) goto L_0045ae50;
  /* 0045af36 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0045af38 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045af39 push 0x3114 */ { u32 v_ = 0x3114u; esp -= 4; M32(esp) = v_; }
  /* 0045af3e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045af40 call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45af43u; SAVEALL; call_ind(c, t_); RETCHK(0x45af43u, 0x45af40u); LOADALL; }
  /* 0045af43 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0045af46 call 0x43ee60 */ esp -= 4; M32(esp) = 0x45af4bu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x45af46u); RETCHK(0x45af4bu, 0x45af46u); LOADALL;
  /* 0045af4b mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0045af4d jmp 0x45ae64 */ goto L_0045ae64;
}

void F_0045af60(CPU *c) {
  NATIVE_HOOK(0x45af60u) REGS; LOADALL;
L_0045af60:;
  /* 0045af60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045af61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045af63 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045af65 push 0x624f60 */ { u32 v_ = 0x624f60u; esp -= 4; M32(esp) = v_; }
  /* 0045af6a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045af70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045af71 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045af78 sub esp, 0x74 */ { u32 a_ = esp, b_ = 0x74u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045af7b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0045af80 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045af81 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0045af84 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0045af87 cmp dword ptr [edi], 0x10000001 */ { const u32 m_ = (u32)(edi); u32 a_ = M32(m_), b_ = 0x10000001u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045af8d mov dword ptr [ebp - 0x44], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(ecx); }
  /* 0045af90 je 0x45b240 */ if (ZF_) goto L_0045b240;
  /* 0045af96 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045af97 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045af98 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 0045af9b call 0x464770 */ esp -= 4; M32(esp) = 0x45afa0u; SAVEALL; F_00464770(c); ABI_CHECK(0x464770u, 0x45af9bu); RETCHK(0x45afa0u, 0x45af9bu); LOADALL;
  /* 0045afa0 movsx edx, word ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0045afa4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045afa5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045afa7 mov dword ptr [ebp - 0x80], 0x643490 */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M32(m_) = (u32)(0x643490u); }
  /* 0045afae call 0x464810 */ esp -= 4; M32(esp) = 0x45afb3u; SAVEALL; F_00464810(c); ABI_CHECK(0x464810u, 0x45afaeu); RETCHK(0x45afb3u, 0x45afaeu); LOADALL;
  /* 0045afb3 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0045afb5 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0045afb8 mov eax, dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); eax = (u32)(M32(m_)); }
  /* 0045afbb movsx ecx, byte ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 0045afbf lea esi, [eax + 9] */ esi = (u32)((u32)(eax + 0x9u));
  /* 0045afc2 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0045afc4 cmp eax, 0x100000a3 */ { u32 a_ = eax, b_ = 0x100000a3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045afc9 mov dword ptr [0x696080], ebx */ { const u32 m_ = (u32)(0x696080u); M32(m_) = (u32)(ebx); }
  /* 0045afcf je 0x45b10a */ if (ZF_) goto L_0045b10a;
  /* 0045afd5 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045afd7 jne 0x45b00f */ if (!ZF_) goto L_0045b00f;
  /* 0045afd9 mov eax, esi */ { eax = (u32)(esi); }
  /* 0045afdb lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0045afde mov edi, edi */ { edi = (u32)(edi); }
L_0045afe0:;
  /* 0045afe0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0045afe2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0045afe3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0045afe5 jne 0x45afe0 */ if (!ZF_) goto L_0045afe0;
  /* 0045afe7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045afe9 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0045afec je 0x45b236 */ if (ZF_) goto L_0045b236;
  /* 0045aff2 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0045aff7 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0045affc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045affd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045affe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045afff push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0045b001 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b002 call 0x50b090 */ esp -= 4; M32(esp) = 0x45b007u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x45b002u); RETCHK(0x45b007u, 0x45b002u); LOADALL;
  /* 0045b007 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b00a jmp 0x45b236 */ goto L_0045b236;
L_0045b00f:;
  /* 0045b00f cmp eax, 0x100000a3 */ { u32 a_ = eax, b_ = 0x100000a3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b014 jg 0x45b177 */ if (!(ZF_|LT_)) goto L_0045b177;
  /* 0045b01a je 0x45b10a */ if (ZF_) goto L_0045b10a;
  /* 0045b020 sub eax, 0x100000a1 */ { u32 a_ = eax, b_ = 0x100000a1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045b025 je 0x45b0df */ if (ZF_) goto L_0045b0df;
  /* 0045b02b dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0045b02c jne 0x45b225 */ if (!ZF_) goto L_0045b225;
  /* 0045b032 lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0045b035 call 0x464770 */ esp -= 4; M32(esp) = 0x45b03au; SAVEALL; F_00464770(c); ABI_CHECK(0x464770u, 0x45b035u); RETCHK(0x45b03au, 0x45b035u); LOADALL;
  /* 0045b03a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045b03b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045b03d mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0045b041 call 0x464810 */ esp -= 4; M32(esp) = 0x45b046u; SAVEALL; F_00464810(c); ABI_CHECK(0x464810u, 0x45b041u); RETCHK(0x45b046u, 0x45b041u); LOADALL;
  /* 0045b046 lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0045b049 call 0x4648c0 */ esp -= 4; M32(esp) = 0x45b04eu; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x45b049u); RETCHK(0x45b04eu, 0x45b049u); LOADALL;
  /* 0045b04e lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0045b051 call 0x4648c0 */ esp -= 4; M32(esp) = 0x45b056u; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x45b051u); RETCHK(0x45b056u, 0x45b051u); LOADALL;
  /* 0045b056 lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0045b059 call 0x4648c0 */ esp -= 4; M32(esp) = 0x45b05eu; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x45b059u); RETCHK(0x45b05eu, 0x45b059u); LOADALL;
  /* 0045b05e mov esi, 0x7a7250 */ { esi = (u32)(0x7a7250u); }
  /* 0045b063 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045b065 call 0x471e50 */ esp -= 4; M32(esp) = 0x45b06au; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x45b065u); RETCHK(0x45b06au, 0x45b065u); LOADALL;
  /* 0045b06a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045b06b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045b06c call 0x45b7a0 */ esp -= 4; M32(esp) = 0x45b071u; SAVEALL; F_0045b7a0(c); ABI_CHECK(0x45b7a0u, 0x45b06cu); RETCHK(0x45b071u, 0x45b06cu); LOADALL;
  /* 0045b071 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b073 jle 0x45b0b7 */ if ((ZF_|LT_)) goto L_0045b0b7;
  /* 0045b075 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0045b077 mov dword ptr [ebp - 0x40], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(edi); }
  /* 0045b07a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0045b080:;
  /* 0045b080 mov edx, 0x2c */ { edx = (u32)(0x2cu); }
  /* 0045b085 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0045b088 call 0x4648d0 */ esp -= 4; M32(esp) = 0x45b08du; SAVEALL; F_004648d0(c); ABI_CHECK(0x4648d0u, 0x45b088u); RETCHK(0x45b08du, 0x45b088u); LOADALL;
  /* 0045b08d mov esi, eax */ { esi = (u32)(eax); }
  /* 0045b08f mov eax, dword ptr [0x7a7254] */ { const u32 m_ = (u32)(0x7a7254u); eax = (u32)(M32(m_)); }
  /* 0045b094 lea edi, [ebp - 0x3c] */ edi = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0045b097 mov ecx, 0xb */ { ecx = (u32)(0xbu); }
  /* 0045b09c rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0045b09e lea edi, [ebx + eax] */ edi = (u32)((u32)(ebx + eax));
  /* 0045b0a1 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 0045b0a4 add ebx, 0x2c */ { u32 a_ = ebx, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0045b0a7 mov ecx, 0xb */ { ecx = (u32)(0xbu); }
  /* 0045b0ac lea esi, [ebp - 0x3c] */ esi = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0045b0af dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0045b0b0 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0045b0b2 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 0045b0b5 jne 0x45b080 */ if (!ZF_) goto L_0045b080;
L_0045b0b7:;
  /* 0045b0b7 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 0045b0ba mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0045b0bc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045b0be call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45b0c1u; SAVEALL; call_ind(c, t_); RETCHK(0x45b0c1u, 0x45b0beu); LOADALL; }
  /* 0045b0c1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045b0c3 call 0x54c1b0 */ esp -= 4; M32(esp) = 0x45b0c8u; SAVEALL; F_0054c1b0(c); ABI_CHECK(0x54c1b0u, 0x45b0c3u); RETCHK(0x45b0c8u, 0x45b0c3u); LOADALL;
  /* 0045b0c8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b0cb lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0045b0ce mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0045b0d2 call 0x4647c0 */ esp -= 4; M32(esp) = 0x45b0d7u; SAVEALL; F_004647c0(c); ABI_CHECK(0x4647c0u, 0x45b0d2u); RETCHK(0x45b0d7u, 0x45b0d2u); LOADALL;
  /* 0045b0d7 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0045b0da jmp 0x45b225 */ goto L_0045b225;
L_0045b0df:;
  /* 0045b0df push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0045b0e4 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0045b0e9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b0ea push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b0eb push 0xed */ { u32 v_ = 0xedu; esp -= 4; M32(esp) = v_; }
  /* 0045b0f0 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0045b0f5 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45b0fbu; SAVEALL; call_ind(c, t_); RETCHK(0x45b0fbu, 0x45b0f5u); LOADALL; }
  /* 0045b0fb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b0fc push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0045b0fe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b0ff call 0x50b090 */ esp -= 4; M32(esp) = 0x45b104u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x45b0ffu); RETCHK(0x45b104u, 0x45b0ffu); LOADALL;
  /* 0045b104 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b105 jmp 0x45b21d */ goto L_0045b21d;
L_0045b10a:;
  /* 0045b10a mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0045b10d mov esi, 0x7a7260 */ { esi = (u32)(0x7a7260u); }
  /* 0045b112 call 0x471e50 */ esp -= 4; M32(esp) = 0x45b117u; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x45b112u); RETCHK(0x45b117u, 0x45b112u); LOADALL;
  /* 0045b117 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b119 jle 0x45b15f */ if ((ZF_|LT_)) goto L_0045b15f;
  /* 0045b11b add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0045b11e mov dword ptr [ebp - 0x40], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ebx); }
L_0045b121:;
  /* 0045b121 mov ebx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (u32)(M32(m_)); }
  /* 0045b123 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0045b126 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0045b129 mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 0045b12c add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0045b12f call 0x556030 */ esp -= 4; M32(esp) = 0x45b134u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x45b12fu); RETCHK(0x45b134u, 0x45b12fu); LOADALL;
  /* 0045b134 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0045b136 mov esi, eax */ { esi = (u32)(eax); }
  /* 0045b138 call 0x555a00 */ esp -= 4; M32(esp) = 0x45b13du; SAVEALL; F_00555a00(c); ABI_CHECK(0x555a00u, 0x45b138u); RETCHK(0x45b13du, 0x45b138u); LOADALL;
  /* 0045b13d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b13f je 0x45b157 */ if (ZF_) goto L_0045b157;
  /* 0045b141 mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 0045b144 lea edx, [ebp - 0x50] */ edx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0045b147 mov esi, 0x7a7260 */ { esi = (u32)(0x7a7260u); }
  /* 0045b14c mov dword ptr [ebp - 0x50], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(ebx); }
  /* 0045b14f mov dword ptr [ebp - 0x4c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(ecx); }
  /* 0045b152 call 0x514f50 */ esp -= 4; M32(esp) = 0x45b157u; SAVEALL; F_00514f50(c); ABI_CHECK(0x514f50u, 0x45b152u); RETCHK(0x45b157u, 0x45b152u); LOADALL;
L_0045b157:;
  /* 0045b157 dec dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0045b15a jne 0x45b121 */ if (!ZF_) goto L_0045b121;
  /* 0045b15c mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
L_0045b15f:;
  /* 0045b15f mov edx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); edx = (u32)(M32(m_)); }
  /* 0045b162 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045b163 call 0x45b650 */ esp -= 4; M32(esp) = 0x45b168u; SAVEALL; F_0045b650(c); ABI_CHECK(0x45b650u, 0x45b163u); RETCHK(0x45b168u, 0x45b163u); LOADALL;
  /* 0045b168 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045b16a call 0x54c1b0 */ esp -= 4; M32(esp) = 0x45b16fu; SAVEALL; F_0054c1b0(c); ABI_CHECK(0x54c1b0u, 0x45b16au); RETCHK(0x45b16fu, 0x45b16au); LOADALL;
  /* 0045b16f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b172 jmp 0x45b225 */ goto L_0045b225;
L_0045b177:;
  /* 0045b177 cmp eax, 0x100000a4 */ { u32 a_ = eax, b_ = 0x100000a4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b17c je 0x45b1a7 */ if (ZF_) goto L_0045b1a7;
  /* 0045b17e cmp eax, 0x50000001 */ { u32 a_ = eax, b_ = 0x50000001u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b183 jne 0x45b225 */ if (!ZF_) goto L_0045b225;
  /* 0045b189 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0045b18e push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0045b193 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b194 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b195 push 0x6487d8 */ { u32 v_ = 0x6487d8u; esp -= 4; M32(esp) = v_; }
  /* 0045b19a push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0045b19c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b19d call 0x50b090 */ esp -= 4; M32(esp) = 0x45b1a2u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x45b19du); RETCHK(0x45b1a2u, 0x45b19du); LOADALL;
  /* 0045b1a2 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b1a5 jmp 0x45b225 */ goto L_0045b225;
L_0045b1a7:;
  /* 0045b1a7 mov eax, dword ptr [0x7a7264] */ { const u32 m_ = (u32)(0x7a7264u); eax = (u32)(M32(m_)); }
  /* 0045b1ac mov ecx, dword ptr [0x7a7268] */ { const u32 m_ = (u32)(0x7a7268u); ecx = (u32)(M32(m_)); }
  /* 0045b1b2 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b1b4 je 0x45b1f3 */ if (ZF_) goto L_0045b1f3;
  /* 0045b1b6 mov edx, dword ptr [0x6962c0] */ { const u32 m_ = (u32)(0x6962c0u); edx = (u32)(M32(m_)); }
  /* 0045b1bc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0045b1c0:;
  /* 0045b1c0 cmp dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b1c2 je 0x45b1cd */ if (ZF_) goto L_0045b1cd;
  /* 0045b1c4 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045b1c7 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b1c9 jne 0x45b1c0 */ if (!ZF_) goto L_0045b1c0;
  /* 0045b1cb jmp 0x45b1f3 */ goto L_0045b1f3;
L_0045b1cd:;
  /* 0045b1cd cmp dword ptr [eax + 4], 1 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b1d1 jg 0x45b1e7 */ if (!(ZF_|LT_)) goto L_0045b1e7;
  /* 0045b1d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b1d4 lea eax, [ebp - 0x48] */ eax = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0045b1d7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b1d8 mov edi, 0x7a7260 */ { edi = (u32)(0x7a7260u); }
  /* 0045b1dd call 0x514fb0 */ esp -= 4; M32(esp) = 0x45b1e2u; SAVEALL; F_00514fb0(c); ABI_CHECK(0x514fb0u, 0x45b1ddu); RETCHK(0x45b1e2u, 0x45b1ddu); LOADALL;
  /* 0045b1e2 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0045b1e5 jmp 0x45b1ea */ goto L_0045b1ea;
L_0045b1e7:;
  /* 0045b1e7 dec dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_0045b1ea:;
  /* 0045b1ea mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 0045b1ed push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045b1ee call 0x45b650 */ esp -= 4; M32(esp) = 0x45b1f3u; SAVEALL; F_0045b650(c); ABI_CHECK(0x45b650u, 0x45b1eeu); RETCHK(0x45b1f3u, 0x45b1eeu); LOADALL;
L_0045b1f3:;
  /* 0045b1f3 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0045b1f8 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0045b1fd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045b1ff push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045b201 push 0xee */ { u32 v_ = 0xeeu; esp -= 4; M32(esp) = v_; }
  /* 0045b206 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0045b20b call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45b211u; SAVEALL; call_ind(c, t_); RETCHK(0x45b211u, 0x45b20bu); LOADALL; }
  /* 0045b211 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b212 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0045b214 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045b216 call 0x50b090 */ esp -= 4; M32(esp) = 0x45b21bu; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x45b216u); RETCHK(0x45b21bu, 0x45b216u); LOADALL;
  /* 0045b21b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
L_0045b21d:;
  /* 0045b21d call 0x54c1b0 */ esp -= 4; M32(esp) = 0x45b222u; SAVEALL; F_0054c1b0(c); ABI_CHECK(0x54c1b0u, 0x45b21du); RETCHK(0x45b222u, 0x45b21du); LOADALL;
  /* 0045b222 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045b225:;
  /* 0045b225 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0045b228 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045b22b mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 0045b22e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045b22f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045b230 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b231 call 0x458490 */ esp -= 4; M32(esp) = 0x45b236u; SAVEALL; F_00458490(c); ABI_CHECK(0x458490u, 0x45b231u); RETCHK(0x45b236u, 0x45b231u); LOADALL;
L_0045b236:;
  /* 0045b236 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 0045b239 call 0x4647c0 */ esp -= 4; M32(esp) = 0x45b23eu; SAVEALL; F_004647c0(c); ABI_CHECK(0x4647c0u, 0x45b239u); RETCHK(0x45b23eu, 0x45b239u); LOADALL;
  /* 0045b23e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045b23f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0045b240:;
  /* 0045b240 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045b243 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045b24a mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0045b24d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045b24e call 0x61af31 */ esp -= 4; M32(esp) = 0x45b253u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x45b24eu); RETCHK(0x45b253u, 0x45b24eu); LOADALL;
  /* 0045b253 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045b255 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045b256 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0045b260(CPU *c) {
  NATIVE_HOOK(0x45b260u) REGS; LOADALL;
L_0045b260:;
  /* 0045b260 mov eax, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 0045b266 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b268 je 0x45b2e4 */ if (ZF_) goto L_0045b2e4;
  /* 0045b26a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0045b26c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045b26e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045b26f call dword ptr [eax + 0x128] */ { const u32 m_ = (u32)(eax + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45b275u; SAVEALL; call_ind(c, t_); RETCHK(0x45b275u, 0x45b26fu); LOADALL; }
  /* 0045b275 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b277 mov dword ptr [0x6962bc], eax */ { const u32 m_ = (u32)(0x6962bcu); M32(m_) = (u32)(eax); }
  /* 0045b27c jl 0x45b2d8 */ if (LT_) goto L_0045b2d8;
  /* 0045b27e mov edx, dword ptr [0x7a7264] */ { const u32 m_ = (u32)(0x7a7264u); edx = (u32)(M32(m_)); }
  /* 0045b284 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b286 je 0x45b2d8 */ if (ZF_) goto L_0045b2d8;
  /* 0045b288 mov ecx, dword ptr [0x7a7268] */ { const u32 m_ = (u32)(0x7a7268u); ecx = (u32)(M32(m_)); }
  /* 0045b28e sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045b290 sar ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0045b293 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b295 jae 0x45b2d8 */ if (!CF_) goto L_0045b2d8;
  /* 0045b297 lea esi, [edx + eax*8] */ esi = (u32)((u32)(edx + eax * 8u));
  /* 0045b29a call 0x556030 */ esp -= 4; M32(esp) = 0x45b29fu; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x45b29au); RETCHK(0x45b29fu, 0x45b29au); LOADALL;
  /* 0045b29f mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0045b2a1 mov esi, eax */ { esi = (u32)(eax); }
  /* 0045b2a3 call 0x555a00 */ esp -= 4; M32(esp) = 0x45b2a8u; SAVEALL; F_00555a00(c); ABI_CHECK(0x555a00u, 0x45b2a3u); RETCHK(0x45b2a8u, 0x45b2a3u); LOADALL;
  /* 0045b2a8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b2aa je 0x45b2d8 */ if (ZF_) goto L_0045b2d8;
  /* 0045b2ac cmp dword ptr [eax + 0x3c], 0x10 */ { const u32 m_ = (u32)(eax + 0x3cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b2b0 jb 0x45b2c5 */ if (CF_) goto L_0045b2c5;
  /* 0045b2b2 mov eax, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); eax = (u32)(M32(m_)); }
  /* 0045b2b5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b2b6 mov ebx, dword ptr [edi + 0x260] */ { const u32 m_ = (u32)(edi + 0x260u); ebx = (u32)(M32(m_)); }
  /* 0045b2bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b2bd call 0x50dc70 */ esp -= 4; M32(esp) = 0x45b2c2u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x45b2bdu); RETCHK(0x45b2c2u, 0x45b2bdu); LOADALL;
  /* 0045b2c2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045b2c3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045b2c4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045b2c5:;
  /* 0045b2c5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b2c6 mov ebx, dword ptr [edi + 0x260] */ { const u32 m_ = (u32)(edi + 0x260u); ebx = (u32)(M32(m_)); }
  /* 0045b2cc add eax, 0x28 */ { u32 a_ = eax, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045b2cf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b2d0 call 0x50dc70 */ esp -= 4; M32(esp) = 0x45b2d5u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x45b2d0u); RETCHK(0x45b2d5u, 0x45b2d0u); LOADALL;
  /* 0045b2d5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045b2d6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045b2d7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045b2d8:;
  /* 0045b2d8 mov esi, dword ptr [edi + 0x260] */ { const u32 m_ = (u32)(edi + 0x260u); esi = (u32)(M32(m_)); }
  /* 0045b2de call 0x50e170 */ esp -= 4; M32(esp) = 0x45b2e3u; SAVEALL; F_0050e170(c); ABI_CHECK(0x50e170u, 0x45b2deu); RETCHK(0x45b2e3u, 0x45b2deu); LOADALL;
  /* 0045b2e3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0045b2e4:;
  /* 0045b2e4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045b2f0(CPU *c) {
  NATIVE_HOOK(0x45b2f0u) REGS; LOADALL;
L_0045b2f0:;
  /* 0045b2f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045b2f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045b2f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045b2f5 push 0x622a48 */ { u32 v_ = 0x622a48u; esp -= 4; M32(esp) = v_; }
  /* 0045b2fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045b300 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b301 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045b308 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b30b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b30c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045b30d lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0045b310 call 0x464770 */ esp -= 4; M32(esp) = 0x45b315u; SAVEALL; F_00464770(c); ABI_CHECK(0x464770u, 0x45b310u); RETCHK(0x45b315u, 0x45b310u); LOADALL;
  /* 0045b315 mov ebx, 8 */ { ebx = (u32)(0x8u); }
  /* 0045b31a mov esi, eax */ { esi = (u32)(eax); }
  /* 0045b31c mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0045b323 call 0x4647d0 */ esp -= 4; M32(esp) = 0x45b328u; SAVEALL; F_004647d0(c); ABI_CHECK(0x4647d0u, 0x45b323u); RETCHK(0x45b328u, 0x45b323u); LOADALL;
  /* 0045b328 mov edx, 0x100000a2 */ { edx = (u32)(0x100000a2u); }
  /* 0045b32d mov eax, esi */ { eax = (u32)(esi); }
  /* 0045b32f call 0x464870 */ esp -= 4; M32(esp) = 0x45b334u; SAVEALL; F_00464870(c); ABI_CHECK(0x464870u, 0x45b32fu); RETCHK(0x45b334u, 0x45b32fu); LOADALL;
  /* 0045b334 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0045b336 mov eax, esi */ { eax = (u32)(esi); }
  /* 0045b338 call 0x464870 */ esp -= 4; M32(esp) = 0x45b33du; SAVEALL; F_00464870(c); ABI_CHECK(0x464870u, 0x45b338u); RETCHK(0x45b33du, 0x45b338u); LOADALL;
  /* 0045b33d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045b33f call 0x4019a0 */ esp -= 4; M32(esp) = 0x45b344u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x45b33fu); RETCHK(0x45b344u, 0x45b33fu); LOADALL;
  /* 0045b344 mov ecx, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 0045b34a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b34d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b34f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045b350 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045b351 je 0x45b36b */ if (ZF_) goto L_0045b36b;
  /* 0045b353 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0045b356 call 0x464860 */ esp -= 4; M32(esp) = 0x45b35bu; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x45b356u); RETCHK(0x45b35bu, 0x45b356u); LOADALL;
  /* 0045b35b mov edx, eax */ { edx = (u32)(eax); }
  /* 0045b35d lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0045b360 call 0x4648e0 */ esp -= 4; M32(esp) = 0x45b365u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x45b360u); RETCHK(0x45b365u, 0x45b360u); LOADALL;
  /* 0045b365 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b366 call 0x55f4b0 */ esp -= 4; M32(esp) = 0x45b36bu; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x45b366u); RETCHK(0x45b36bu, 0x45b366u); LOADALL;
L_0045b36b:;
  /* 0045b36b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045b36d call 0x54c180 */ esp -= 4; M32(esp) = 0x45b372u; SAVEALL; F_0054c180(c); ABI_CHECK(0x54c180u, 0x45b36du); RETCHK(0x45b372u, 0x45b36du); LOADALL;
  /* 0045b372 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b375 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0045b378 call 0x4647c0 */ esp -= 4; M32(esp) = 0x45b37du; SAVEALL; F_004647c0(c); ABI_CHECK(0x4647c0u, 0x45b378u); RETCHK(0x45b37du, 0x45b378u); LOADALL;
  /* 0045b37d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045b380 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045b387 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045b389 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045b38a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045b390(CPU *c) {
  NATIVE_HOOK(0x45b390u) REGS; LOADALL;
L_0045b390:;
  /* 0045b390 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045b391 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045b393 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045b395 push 0x622a48 */ { u32 v_ = 0x622a48u; esp -= 4; M32(esp) = v_; }
  /* 0045b39a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045b3a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b3a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045b3a8 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b3ab mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045b3ae mov edx, dword ptr [0x7a7254] */ { const u32 m_ = (u32)(0x7a7254u); edx = (u32)(M32(m_)); }
  /* 0045b3b4 imul eax, eax, 0x2c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x2cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045b3b7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b3b8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045b3b9 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045b3bb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045b3bc mov edi, eax */ { edi = (u32)(eax); }
  /* 0045b3be lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0045b3c1 call 0x464770 */ esp -= 4; M32(esp) = 0x45b3c6u; SAVEALL; F_00464770(c); ABI_CHECK(0x464770u, 0x45b3c1u); RETCHK(0x45b3c6u, 0x45b3c1u); LOADALL;
  /* 0045b3c6 mov ebx, 0x36 */ { ebx = (u32)(0x36u); }
  /* 0045b3cb mov esi, eax */ { esi = (u32)(eax); }
  /* 0045b3cd mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0045b3d4 call 0x4647d0 */ esp -= 4; M32(esp) = 0x45b3d9u; SAVEALL; F_004647d0(c); ABI_CHECK(0x4647d0u, 0x45b3d4u); RETCHK(0x45b3d9u, 0x45b3d4u); LOADALL;
  /* 0045b3d9 mov edx, 0x100000a1 */ { edx = (u32)(0x100000a1u); }
  /* 0045b3de mov eax, esi */ { eax = (u32)(esi); }
  /* 0045b3e0 call 0x464870 */ esp -= 4; M32(esp) = 0x45b3e5u; SAVEALL; F_00464870(c); ABI_CHECK(0x464870u, 0x45b3e0u); RETCHK(0x45b3e5u, 0x45b3e0u); LOADALL;
  /* 0045b3e5 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0045b3e7 mov eax, esi */ { eax = (u32)(esi); }
  /* 0045b3e9 call 0x464870 */ esp -= 4; M32(esp) = 0x45b3eeu; SAVEALL; F_00464870(c); ABI_CHECK(0x464870u, 0x45b3e9u); RETCHK(0x45b3eeu, 0x45b3e9u); LOADALL;
  /* 0045b3ee mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045b3f1 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0045b3f2 mov eax, esi */ { eax = (u32)(esi); }
  /* 0045b3f4 call 0x464870 */ esp -= 4; M32(esp) = 0x45b3f9u; SAVEALL; F_00464870(c); ABI_CHECK(0x464870u, 0x45b3f4u); RETCHK(0x45b3f9u, 0x45b3f4u); LOADALL;
  /* 0045b3f9 push 0x6962c8 */ { u32 v_ = 0x6962c8u; esp -= 4; M32(esp) = v_; }
  /* 0045b3fe mov edx, 0x1f */ { edx = (u32)(0x1fu); }
  /* 0045b403 mov eax, esi */ { eax = (u32)(esi); }
  /* 0045b405 call 0x464880 */ esp -= 4; M32(esp) = 0x45b40au; SAVEALL; F_00464880(c); ABI_CHECK(0x464880u, 0x45b405u); RETCHK(0x45b40au, 0x45b405u); LOADALL;
  /* 0045b40a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045b40b mov edx, 0xb */ { edx = (u32)(0xbu); }
  /* 0045b410 call 0x464880 */ esp -= 4; M32(esp) = 0x45b415u; SAVEALL; F_00464880(c); ABI_CHECK(0x464880u, 0x45b410u); RETCHK(0x45b415u, 0x45b410u); LOADALL;
  /* 0045b415 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045b417 call 0x4019a0 */ esp -= 4; M32(esp) = 0x45b41cu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x45b417u); RETCHK(0x45b41cu, 0x45b417u); LOADALL;
  /* 0045b41c mov ecx, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 0045b422 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b425 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b427 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045b428 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045b429 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045b42a je 0x45b444 */ if (ZF_) goto L_0045b444;
  /* 0045b42c lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0045b42f call 0x464860 */ esp -= 4; M32(esp) = 0x45b434u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x45b42fu); RETCHK(0x45b434u, 0x45b42fu); LOADALL;
  /* 0045b434 mov edx, eax */ { edx = (u32)(eax); }
  /* 0045b436 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0045b439 call 0x4648e0 */ esp -= 4; M32(esp) = 0x45b43eu; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x45b439u); RETCHK(0x45b43eu, 0x45b439u); LOADALL;
  /* 0045b43e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b43f call 0x55f4b0 */ esp -= 4; M32(esp) = 0x45b444u; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x45b43fu); RETCHK(0x45b444u, 0x45b43fu); LOADALL;
L_0045b444:;
  /* 0045b444 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045b446 call 0x54c180 */ esp -= 4; M32(esp) = 0x45b44bu; SAVEALL; F_0054c180(c); ABI_CHECK(0x54c180u, 0x45b446u); RETCHK(0x45b44bu, 0x45b446u); LOADALL;
  /* 0045b44b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b44e lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0045b451 call 0x4647c0 */ esp -= 4; M32(esp) = 0x45b456u; SAVEALL; F_004647c0(c); ABI_CHECK(0x4647c0u, 0x45b451u); RETCHK(0x45b456u, 0x45b451u); LOADALL;
  /* 0045b456 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045b459 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045b460 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045b462 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045b463 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045b470(CPU *c) {
  NATIVE_HOOK(0x45b470u) REGS; LOADALL;
L_0045b470:;
  /* 0045b470 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045b471 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045b473 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b476 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045b478 mov dword ptr [ebp - 8], 0x100000a3 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x100000a3u); }
  /* 0045b47f mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0045b486 call 0x4019a0 */ esp -= 4; M32(esp) = 0x45b48bu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x45b486u); RETCHK(0x45b48bu, 0x45b486u); LOADALL;
  /* 0045b48b mov ecx, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 0045b491 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b494 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b496 je 0x45b4a6 */ if (ZF_) goto L_0045b4a6;
  /* 0045b498 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0045b49b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b49c mov edx, 8 */ { edx = (u32)(0x8u); }
  /* 0045b4a1 call 0x55f4b0 */ esp -= 4; M32(esp) = 0x45b4a6u; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x45b4a1u); RETCHK(0x45b4a6u, 0x45b4a1u); LOADALL;
L_0045b4a6:;
  /* 0045b4a6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045b4a8 call 0x54c180 */ esp -= 4; M32(esp) = 0x45b4adu; SAVEALL; F_0054c180(c); ABI_CHECK(0x54c180u, 0x45b4a8u); RETCHK(0x45b4adu, 0x45b4a8u); LOADALL;
  /* 0045b4ad add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b4b0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045b4b2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045b4b3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045b510(CPU *c) {
  NATIVE_HOOK(0x45b510u) REGS; LOADALL;
L_0045b510:;
  /* 0045b510 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045b511 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0045b513 call 0x45b540 */ esp -= 4; M32(esp) = 0x45b518u; SAVEALL; F_0045b540(c); ABI_CHECK(0x45b540u, 0x45b513u); RETCHK(0x45b518u, 0x45b513u); LOADALL;
  /* 0045b518 mov esi, dword ptr [esi + 0x260] */ { const u32 m_ = (u32)(esi + 0x260u); esi = (u32)(M32(m_)); }
  /* 0045b51e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b520 je 0x45b52f */ if (ZF_) goto L_0045b52f;
  /* 0045b522 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b523 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045b524 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0045b526 mov edi, esi */ { edi = (u32)(esi); }
  /* 0045b528 call 0x50dbb0 */ esp -= 4; M32(esp) = 0x45b52du; SAVEALL; F_0050dbb0(c); ABI_CHECK(0x50dbb0u, 0x45b528u); RETCHK(0x45b52du, 0x45b528u); LOADALL;
  /* 0045b52d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045b52e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0045b52f:;
  /* 0045b52f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045b530 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045b540(CPU *c) {
  NATIVE_HOOK(0x45b540u) REGS; LOADALL;
L_0045b540:;
  /* 0045b540 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045b541 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045b543 sub esp, 0x20c */ { u32 a_ = esp, b_ = 0x20cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b549 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0045b54e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b54f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045b550 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045b551 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0045b553 mov ecx, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 0045b559 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0045b55c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045b55e call dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45b564u; SAVEALL; call_ind(c, t_); RETCHK(0x45b564u, 0x45b55eu); LOADALL; }
  /* 0045b564 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045b566 mov dword ptr [ebp - 0x20c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffdf4u); M32(m_) = (u32)(eax); }
L_0045b56c:;
  /* 0045b56c mov esi, dword ptr [0x7a7254] */ { const u32 m_ = (u32)(0x7a7254u); esi = (u32)(M32(m_)); }
  /* 0045b572 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b574 mov dword ptr [ebp - 0x208], eax */ { const u32 m_ = (u32)(ebp + 0xfffffdf8u); M32(m_) = (u32)(eax); }
  /* 0045b57a je 0x45b61a */ if (ZF_) goto L_0045b61a;
  /* 0045b580 mov ecx, dword ptr [0x7a7258] */ { const u32 m_ = (u32)(0x7a7258u); ecx = (u32)(M32(m_)); }
  /* 0045b586 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045b588 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045b58d imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045b58f mov ecx, dword ptr [ebp - 0x20c] */ { const u32 m_ = (u32)(ebp + 0xfffffdf4u); ecx = (u32)(M32(m_)); }
  /* 0045b595 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045b598 mov eax, edx */ { eax = (u32)(edx); }
  /* 0045b59a shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045b59d add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045b59f cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b5a1 jae 0x45b61a */ if (!CF_) goto L_0045b61a;
  /* 0045b5a3 mov ecx, dword ptr [ebp - 0x208] */ { const u32 m_ = (u32)(ebp + 0xfffffdf8u); ecx = (u32)(M32(m_)); }
  /* 0045b5a9 lea edx, [ecx + esi + 0xc] */ edx = (u32)((u32)(ecx + esi + 0xcu));
  /* 0045b5ad push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045b5ae push 0x6487d0 */ { u32 v_ = 0x6487d0u; esp -= 4; M32(esp) = v_; }
  /* 0045b5b3 lea eax, [ebp - 0x204] */ eax = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 0045b5b9 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0045b5be push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b5bf call 0x5fe928 */ esp -= 4; M32(esp) = 0x45b5c4u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x45b5bfu); RETCHK(0x45b5c4u, 0x45b5bfu); LOADALL;
  /* 0045b5c4 mov ecx, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 0045b5ca mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0045b5cc add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b5cf push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0045b5d1 lea eax, [ebp - 0x204] */ eax = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 0045b5d7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b5d8 call dword ptr [edx + 0xfc] */ { const u32 m_ = (u32)(edx + 0xfcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45b5deu; SAVEALL; call_ind(c, t_); RETCHK(0x45b5deu, 0x45b5d8u); LOADALL; }
  /* 0045b5de mov esi, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); esi = (u32)(M32(m_)); }
  /* 0045b5e4 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0045b5e6 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 0045b5e8 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0045b5ea call 0x511820 */ esp -= 4; M32(esp) = 0x45b5efu; SAVEALL; F_00511820(c); ABI_CHECK(0x511820u, 0x45b5eau); RETCHK(0x45b5efu, 0x45b5eau); LOADALL;
  /* 0045b5ef mov esi, dword ptr [ebp - 0x20c] */ { const u32 m_ = (u32)(ebp + 0xfffffdf4u); esi = (u32)(M32(m_)); }
  /* 0045b5f5 mov ecx, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 0045b5fb mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0045b5fd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045b5fe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b5ff call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45b605u; SAVEALL; call_ind(c, t_); RETCHK(0x45b605u, 0x45b5ffu); LOADALL; }
  /* 0045b605 mov eax, dword ptr [ebp - 0x208] */ { const u32 m_ = (u32)(ebp + 0xfffffdf8u); eax = (u32)(M32(m_)); }
  /* 0045b60b inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0045b60c mov dword ptr [ebp - 0x20c], esi */ { const u32 m_ = (u32)(ebp + 0xfffffdf4u); M32(m_) = (u32)(esi); }
  /* 0045b612 add eax, 0x2c */ { u32 a_ = eax, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045b615 jmp 0x45b56c */ goto L_0045b56c;
L_0045b61a:;
  /* 0045b61a mov ecx, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 0045b620 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045b622 call dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45b625u; SAVEALL; call_ind(c, t_); RETCHK(0x45b625u, 0x45b622u); LOADALL; }
  /* 0045b625 mov edi, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); edi = (u32)(M32(m_)); }
  /* 0045b62b mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0045b62d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045b62f mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045b631 call dword ptr [edx + 0x124] */ { const u32 m_ = (u32)(edx + 0x124u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45b637u; SAVEALL; call_ind(c, t_); RETCHK(0x45b637u, 0x45b631u); LOADALL; }
  /* 0045b637 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0045b63a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045b63b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045b63c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045b63d call 0x61af31 */ esp -= 4; M32(esp) = 0x45b642u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x45b63du); RETCHK(0x45b642u, 0x45b63du); LOADALL;
  /* 0045b642 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045b644 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045b645 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045b650(CPU *c) {
  NATIVE_HOOK(0x45b650u) REGS; LOADALL;
L_0045b650:;
  /* 0045b650 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045b651 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045b653 sub esp, 0x208 */ { u32 a_ = esp, b_ = 0x208u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b659 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0045b65e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b65f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045b660 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045b663 mov ecx, dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 0045b669 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0045b66c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045b66e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045b66f call dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45b675u; SAVEALL; call_ind(c, t_); RETCHK(0x45b675u, 0x45b66fu); LOADALL; }
  /* 0045b675 mov edi, dword ptr [esi + 0x260] */ { const u32 m_ = (u32)(esi + 0x260u); edi = (u32)(M32(m_)); }
  /* 0045b67b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b67d je 0x45b686 */ if (ZF_) goto L_0045b686;
  /* 0045b67f xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0045b681 call 0x50dbb0 */ esp -= 4; M32(esp) = 0x45b686u; SAVEALL; F_0050dbb0(c); ABI_CHECK(0x50dbb0u, 0x45b681u); RETCHK(0x45b686u, 0x45b681u); LOADALL;
L_0045b686:;
  /* 0045b686 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0045b688 mov dword ptr [0x6962bc], edx */ { const u32 m_ = (u32)(0x6962bcu); M32(m_) = (u32)(edx); }
  /* 0045b68e mov dword ptr [ebp - 0x208], edx */ { const u32 m_ = (u32)(ebp + 0xfffffdf8u); M32(m_) = (u32)(edx); }
  /* 0045b694 jmp 0x45b6a0 */ goto L_0045b6a0;
L_0045b6a0:;
  /* 0045b6a0 mov ecx, dword ptr [0x7a7264] */ { const u32 m_ = (u32)(0x7a7264u); ecx = (u32)(M32(m_)); }
  /* 0045b6a6 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b6a8 je 0x45b768 */ if (ZF_) goto L_0045b768;
  /* 0045b6ae mov eax, dword ptr [0x7a7268] */ { const u32 m_ = (u32)(0x7a7268u); eax = (u32)(M32(m_)); }
  /* 0045b6b3 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045b6b5 sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045b6b8 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b6ba jae 0x45b768 */ if (!CF_) goto L_0045b768;
  /* 0045b6c0 lea edi, [edx*8] */ edi = (u32)((u32)(edx * 8u));
  /* 0045b6c7 lea esi, [edi + ecx] */ esi = (u32)((u32)(edi + ecx));
  /* 0045b6ca call 0x556030 */ esp -= 4; M32(esp) = 0x45b6cfu; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x45b6cau); RETCHK(0x45b6cfu, 0x45b6cau); LOADALL;
  /* 0045b6cf mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0045b6d1 mov esi, eax */ { esi = (u32)(eax); }
  /* 0045b6d3 call 0x555a00 */ esp -= 4; M32(esp) = 0x45b6d8u; SAVEALL; F_00555a00(c); ABI_CHECK(0x555a00u, 0x45b6d3u); RETCHK(0x45b6d8u, 0x45b6d3u); LOADALL;
  /* 0045b6d8 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0045b6da test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b6dc je 0x45b751 */ if (ZF_) goto L_0045b751;
  /* 0045b6de cmp dword ptr [ebx + 0x1c], 0x10 */ { const u32 m_ = (u32)(ebx + 0x1cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b6e2 jb 0x45b6e9 */ if (CF_) goto L_0045b6e9;
  /* 0045b6e4 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045b6e7 jmp 0x45b6ec */ goto L_0045b6ec;
L_0045b6e9:;
  /* 0045b6e9 lea eax, [ebx + 8] */ eax = (u32)((u32)(ebx + 0x8u));
L_0045b6ec:;
  /* 0045b6ec mov ecx, dword ptr [0x7a7264] */ { const u32 m_ = (u32)(0x7a7264u); ecx = (u32)(M32(m_)); }
  /* 0045b6f2 mov edx, dword ptr [edi + ecx + 4] */ { const u32 m_ = (u32)(edi + ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0045b6f6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045b6f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b6f8 push 0x6487c8 */ { u32 v_ = 0x6487c8u; esp -= 4; M32(esp) = v_; }
  /* 0045b6fd lea eax, [ebp - 0x204] */ eax = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 0045b703 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0045b708 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b709 call 0x5fe928 */ esp -= 4; M32(esp) = 0x45b70eu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x45b709u); RETCHK(0x45b70eu, 0x45b709u); LOADALL;
  /* 0045b70e mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045b711 mov ecx, dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 0045b717 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0045b719 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b71c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0045b71e lea eax, [ebp - 0x204] */ eax = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 0045b724 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b725 call dword ptr [edx + 0xfc] */ { const u32 m_ = (u32)(edx + 0xfcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45b72bu; SAVEALL; call_ind(c, t_); RETCHK(0x45b72bu, 0x45b725u); LOADALL; }
  /* 0045b72b mov esi, dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); esi = (u32)(M32(m_)); }
  /* 0045b731 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045b733 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 0045b735 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045b737 call 0x511820 */ esp -= 4; M32(esp) = 0x45b73cu; SAVEALL; F_00511820(c); ABI_CHECK(0x511820u, 0x45b737u); RETCHK(0x45b73cu, 0x45b737u); LOADALL;
  /* 0045b73c mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0045b73e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045b741 mov ecx, dword ptr [ecx + 0x1e8] */ { const u32 m_ = (u32)(ecx + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 0045b747 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0045b749 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b74a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045b74b call dword ptr [edx + 0x10c] */ { const u32 m_ = (u32)(edx + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45b751u; SAVEALL; call_ind(c, t_); RETCHK(0x45b751u, 0x45b74bu); LOADALL; }
L_0045b751:;
  /* 0045b751 mov eax, dword ptr [ebp - 0x208] */ { const u32 m_ = (u32)(ebp + 0xfffffdf8u); eax = (u32)(M32(m_)); }
  /* 0045b757 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045b75a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0045b75b mov dword ptr [ebp - 0x208], eax */ { const u32 m_ = (u32)(ebp + 0xfffffdf8u); M32(m_) = (u32)(eax); }
  /* 0045b761 mov edx, eax */ { edx = (u32)(eax); }
  /* 0045b763 jmp 0x45b6a0 */ goto L_0045b6a0;
L_0045b768:;
  /* 0045b768 mov ecx, dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 0045b76e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0045b770 call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45b773u; SAVEALL; call_ind(c, t_); RETCHK(0x45b773u, 0x45b770u); LOADALL; }
  /* 0045b773 mov ecx, dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 0045b779 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0045b77b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045b77d call dword ptr [eax + 0x124] */ { const u32 m_ = (u32)(eax + 0x124u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45b783u; SAVEALL; call_ind(c, t_); RETCHK(0x45b783u, 0x45b77du); LOADALL; }
  /* 0045b783 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0045b786 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045b787 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045b788 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045b789 call 0x61af31 */ esp -= 4; M32(esp) = 0x45b78eu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x45b789u); RETCHK(0x45b78eu, 0x45b789u); LOADALL;
  /* 0045b78e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045b790 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045b791 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045b7a0(CPU *c) {
  NATIVE_HOOK(0x45b7a0u) REGS; LOADALL;
L_0045b7a0:;
  /* 0045b7a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045b7a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045b7a3 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b7a6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045b7a7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045b7a8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045b7aa mov ecx, 0xb */ { ecx = (u32)(0xbu); }
  /* 0045b7af lea edi, [ebp - 0x2c] */ edi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0045b7b2 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0045b7b4 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0045b7b7 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b7ba mov edi, esp */ { edi = (u32)(esp); }
  /* 0045b7bc mov ecx, 0xb */ { ecx = (u32)(0xbu); }
  /* 0045b7c1 lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0045b7c4 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0045b7c6 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045b7c9 call 0x45b800 */ esp -= 4; M32(esp) = 0x45b7ceu; SAVEALL; F_0045b800(c); ABI_CHECK(0x45b800u, 0x45b7c9u); RETCHK(0x45b7ceu, 0x45b7c9u); LOADALL;
  /* 0045b7ce pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045b7cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045b7d0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045b7d2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045b7d3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0045b7e0(CPU *c) {
  NATIVE_HOOK(0x45b7e0u) REGS; LOADALL;
L_0045b7e0:;
  /* 0045b7e0 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0045b7e3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b7e5 jne 0x45b7e8 */ if (!ZF_) goto L_0045b7e8;
  /* 0045b7e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045b7e8:;
  /* 0045b7e8 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045b7eb sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045b7ed mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045b7f2 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045b7f4 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045b7f7 mov eax, edx */ { eax = (u32)(edx); }
  /* 0045b7f9 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045b7fc add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045b7fe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045b800(CPU *c) {
  NATIVE_HOOK(0x45b800u) REGS; LOADALL;
L_0045b800:;
  /* 0045b800 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045b801 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045b803 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0045b806 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b808 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045b809 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045b80b jne 0x45b811 */ if (!ZF_) goto L_0045b811;
  /* 0045b80d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045b80f jmp 0x45b827 */ goto L_0045b827;
L_0045b811:;
  /* 0045b811 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045b814 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045b816 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045b81b imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045b81d sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045b820 mov eax, edx */ { eax = (u32)(edx); }
  /* 0045b822 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045b825 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0045b827:;
  /* 0045b827 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b829 jae 0x45b85e */ if (!CF_) goto L_0045b85e;
  /* 0045b82b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b82d jne 0x45b833 */ if (!ZF_) goto L_0045b833;
  /* 0045b82f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045b831 jmp 0x45b849 */ goto L_0045b849;
L_0045b833:;
  /* 0045b833 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045b836 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045b838 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045b83d imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045b83f sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045b842 mov eax, edx */ { eax = (u32)(edx); }
  /* 0045b844 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045b847 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0045b849:;
  /* 0045b849 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045b84c sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0045b84e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045b84f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045b850 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045b851 lea edx, [ebp + 8] */ edx = (u32)((u32)(ebp + 0x8u));
  /* 0045b854 call 0x45b8f0 */ esp -= 4; M32(esp) = 0x45b859u; SAVEALL; F_0045b8f0(c); ABI_CHECK(0x45b8f0u, 0x45b854u); RETCHK(0x45b859u, 0x45b854u); LOADALL;
  /* 0045b859 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045b85a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045b85b ret 0x2c */ c->popped = M32(esp); esp += 48u; SAVEALL; return;
L_0045b85e:;
  /* 0045b85e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b860 je 0x45b891 */ if (ZF_) goto L_0045b891;
  /* 0045b862 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b863 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0045b866 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0045b868 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045b86a mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045b86f imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045b871 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045b874 mov eax, edx */ { eax = (u32)(edx); }
  /* 0045b876 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045b879 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045b87b cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b87d jae 0x45b890 */ if (!CF_) goto L_0045b890;
  /* 0045b87f imul edi, edi, 0x2c */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x2cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045b882 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b883 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0045b885 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045b886 lea eax, [ebp + 0x30] */ eax = (u32)((u32)(ebp + 0x30u));
  /* 0045b889 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b88a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045b88b call 0x45b8a0 */ esp -= 4; M32(esp) = 0x45b890u; SAVEALL; F_0045b8a0(c); ABI_CHECK(0x45b8a0u, 0x45b88bu); RETCHK(0x45b890u, 0x45b88bu); LOADALL;
L_0045b890:;
  /* 0045b890 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0045b891:;
  /* 0045b891 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045b892 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045b893 ret 0x2c */ c->popped = M32(esp); esp += 48u; SAVEALL; return;
}

void F_0045b8a0(CPU *c) {
  NATIVE_HOOK(0x45b8a0u) REGS; LOADALL;
L_0045b8a0:;
  /* 0045b8a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045b8a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045b8a3 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0045b8a6 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0045b8a9 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b8ab je 0x45b8e1 */ if (ZF_) goto L_0045b8e1;
  /* 0045b8ad mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045b8b0 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045b8b3 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b8b5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b8b6 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0045b8b8 je 0x45b8da */ if (ZF_) goto L_0045b8da;
  /* 0045b8ba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045b8bb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045b8bc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0045b8c0:;
  /* 0045b8c0 mov esi, edx */ { esi = (u32)(edx); }
  /* 0045b8c2 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 0045b8c4 add edx, 0x2c */ { u32 a_ = edx, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045b8c7 mov ecx, 0xb */ { ecx = (u32)(0xbu); }
  /* 0045b8cc add ebx, 0x2c */ { u32 a_ = ebx, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0045b8cf cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b8d1 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0045b8d3 jne 0x45b8c0 */ if (!ZF_) goto L_0045b8c0;
  /* 0045b8d5 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0045b8d8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045b8d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0045b8da:;
  /* 0045b8da mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045b8dd mov dword ptr [edx + 8], ebx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0045b8e0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0045b8e1:;
  /* 0045b8e1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0045b8e4 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0045b8e6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045b8e7 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0045b8f0(CPU *c) {
  NATIVE_HOOK(0x45b8f0u) REGS; LOADALL;
L_0045b8f0:;
  /* 0045b8f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045b8f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045b8f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045b8f5 push 0x61d070 */ { u32 v_ = 0x61d070u; esp -= 4; M32(esp) = v_; }
  /* 0045b8fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045b900 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045b901 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045b908 sub esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045b90b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0045b910 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045b911 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045b912 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045b913 mov ecx, 0xb */ { ecx = (u32)(0xbu); }
  /* 0045b918 mov esi, edx */ { esi = (u32)(edx); }
  /* 0045b91a lea edi, [ebp - 0x40] */ edi = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0045b91d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0045b91f mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045b922 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0045b925 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b927 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0045b92a mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0045b92d jne 0x45b933 */ if (!ZF_) goto L_0045b933;
  /* 0045b92f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0045b931 jmp 0x45b949 */ goto L_0045b949;
L_0045b933:;
  /* 0045b933 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0045b936 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045b938 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045b93d imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045b93f sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045b942 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0045b944 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0045b947 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0045b949:;
  /* 0045b949 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 0045b94c test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b94e je 0x45bb57 */ if (ZF_) goto L_0045bb57;
  /* 0045b954 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b956 jne 0x45b95c */ if (!ZF_) goto L_0045b95c;
  /* 0045b958 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045b95a jmp 0x45b972 */ goto L_0045b972;
L_0045b95c:;
  /* 0045b95c mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045b95f sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045b961 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045b966 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045b968 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045b96b mov eax, edx */ { eax = (u32)(edx); }
  /* 0045b96d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045b970 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0045b972:;
  /* 0045b972 mov edx, 0x5d1745d */ { edx = (u32)(0x5d1745du); }
  /* 0045b977 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045b979 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b97b jae 0x45b982 */ if (!CF_) goto L_0045b982;
  /* 0045b97d call 0x49ac70 */ esp -= 4; M32(esp) = 0x45b982u; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x45b97du); RETCHK(0x45b982u, 0x45b97du); LOADALL;
L_0045b982:;
  /* 0045b982 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b984 jne 0x45b98a */ if (!ZF_) goto L_0045b98a;
  /* 0045b986 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045b988 jmp 0x45b9a0 */ goto L_0045b9a0;
L_0045b98a:;
  /* 0045b98a mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045b98d sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045b98f mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045b994 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045b996 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045b999 mov eax, edx */ { eax = (u32)(edx); }
  /* 0045b99b shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045b99e add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0045b9a0:;
  /* 0045b9a0 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045b9a2 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b9a4 jae 0x45baa6 */ if (!CF_) goto L_0045baa6;
  /* 0045b9aa mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0045b9ac shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045b9ae mov edx, 0x5d1745d */ { edx = (u32)(0x5d1745du); }
  /* 0045b9b3 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045b9b5 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b9b7 jae 0x45b9bd */ if (!CF_) goto L_0045b9bd;
  /* 0045b9b9 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0045b9bb jmp 0x45b9bf */ goto L_0045b9bf;
L_0045b9bd:;
  /* 0045b9bd add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0045b9bf:;
  /* 0045b9bf test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045b9c1 jne 0x45b9c7 */ if (!ZF_) goto L_0045b9c7;
  /* 0045b9c3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045b9c5 jmp 0x45b9dd */ goto L_0045b9dd;
L_0045b9c7:;
  /* 0045b9c7 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045b9ca sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045b9cc mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045b9d1 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045b9d3 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045b9d6 mov eax, edx */ { eax = (u32)(edx); }
  /* 0045b9d8 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045b9db add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0045b9dd:;
  /* 0045b9dd add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045b9df cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045b9e1 jae 0x45b9ee */ if (!CF_) goto L_0045b9ee;
  /* 0045b9e3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0045b9e5 call 0x45b7e0 */ esp -= 4; M32(esp) = 0x45b9eau; SAVEALL; F_0045b7e0(c); ABI_CHECK(0x45b7e0u, 0x45b9e5u); RETCHK(0x45b9eau, 0x45b9e5u); LOADALL;
  /* 0045b9ea mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0045b9ec add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0045b9ee:;
  /* 0045b9ee imul ecx, ecx, 0x2c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x2cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045b9f1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045b9f2 mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0045b9f5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x45b9fau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x45b9f5u); RETCHK(0x45b9fau, 0x45b9f5u); LOADALL;
  /* 0045b9fa mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0045ba01 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0045ba04 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0045ba07 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0045ba0a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045ba0b mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 0045ba0e call 0x45bbe0 */ esp -= 4; M32(esp) = 0x45ba13u; SAVEALL; F_0045bbe0(c); ABI_CHECK(0x45bbe0u, 0x45ba0eu); RETCHK(0x45ba13u, 0x45ba0eu); LOADALL;
  /* 0045ba13 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0045ba16 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045ba19 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045ba1a lea ebx, [ebp - 0x40] */ ebx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0045ba1d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045ba1f mov dword ptr [ebp - 0x48], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(eax); }
  /* 0045ba22 call 0x45bbc0 */ esp -= 4; M32(esp) = 0x45ba27u; SAVEALL; F_0045bbc0(c); ABI_CHECK(0x45bbc0u, 0x45ba22u); RETCHK(0x45ba27u, 0x45ba22u); LOADALL;
  /* 0045ba27 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0045ba2a mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 0045ba2d mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0045ba30 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045ba32 imul ecx, ecx, 0x2c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x2cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045ba35 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045ba38 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045ba39 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0045ba3c add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045ba3e call 0x45bbe0 */ esp -= 4; M32(esp) = 0x45ba43u; SAVEALL; F_0045bbe0(c); ABI_CHECK(0x45bbe0u, 0x45ba3eu); RETCHK(0x45ba43u, 0x45ba3eu); LOADALL;
  /* 0045ba43 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0045ba46 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045ba49 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045ba4b jne 0x45ba51 */ if (!ZF_) goto L_0045ba51;
  /* 0045ba4d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045ba4f jmp 0x45ba67 */ goto L_0045ba67;
L_0045ba51:;
  /* 0045ba51 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045ba54 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045ba56 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045ba5b imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045ba5d sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045ba60 mov eax, edx */ { eax = (u32)(edx); }
  /* 0045ba62 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045ba65 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0045ba67:;
  /* 0045ba67 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0045ba69 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045ba6b je 0x45ba76 */ if (ZF_) goto L_0045ba76;
  /* 0045ba6d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045ba6e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45ba73u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45ba6eu); RETCHK(0x45ba73u, 0x45ba6eu); LOADALL;
  /* 0045ba73 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045ba76:;
  /* 0045ba76 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 0045ba79 imul edi, edi, 0x2c */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x2cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045ba7c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045ba7f add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045ba81 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0045ba83 mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0045ba86 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 0045ba89 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0045ba8c jmp 0x45bb57 */ goto L_0045bb57;
L_0045baa6:;
  /* 0045baa6 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0045baa9 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0045baac mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0045baae sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045bab0 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045bab5 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045bab7 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045baba mov eax, edx */ { eax = (u32)(edx); }
  /* 0045babc shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045babf add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045bac1 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bac3 jae 0x45bb20 */ if (!CF_) goto L_0045bb20;
  /* 0045bac5 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0045bac8 mov eax, edi */ { eax = (u32)(edi); }
  /* 0045baca imul eax, eax, 0x2c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x2cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045bacd mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0045bad0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045bad1 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045bad3 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0045bad5 call 0x45bbe0 */ esp -= 4; M32(esp) = 0x45badau; SAVEALL; F_0045bbe0(c); ABI_CHECK(0x45bbe0u, 0x45bad5u); RETCHK(0x45badau, 0x45bad5u); LOADALL;
  /* 0045bada mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0045bae1 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045bae4 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045bae7 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045baec imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045baee mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0045baf1 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045baf4 mov eax, edx */ { eax = (u32)(edx); }
  /* 0045baf6 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045baf9 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045bafb sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0045bafd mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045bb00 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045bb01 lea ebx, [ebp - 0x40] */ ebx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0045bb04 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045bb06 call 0x45bbc0 */ esp -= 4; M32(esp) = 0x45bb0bu; SAVEALL; F_0045bbc0(c); ABI_CHECK(0x45bbc0u, 0x45bb06u); RETCHK(0x45bb0bu, 0x45bb06u); LOADALL;
  /* 0045bb0b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045bb0e mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045bb11 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045bb13 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045bb16 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0045bb19 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045bb1b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0045bb1e jmp 0x45bb4f */ goto L_0045bb4f;
L_0045bb20:;
  /* 0045bb20 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0045bb23 imul edi, edi, 0x2c */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x2cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045bb26 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0045bb28 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045bb2a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045bb2b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0045bb2d mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 0045bb30 call 0x45bbe0 */ esp -= 4; M32(esp) = 0x45bb35u; SAVEALL; F_0045bbe0(c); ABI_CHECK(0x45bbe0u, 0x45bb30u); RETCHK(0x45bb35u, 0x45bb30u); LOADALL;
  /* 0045bb35 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045bb38 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0045bb3b mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0045bb3e mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0045bb40 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045bb43 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0045bb45 call 0x45bba0 */ esp -= 4; M32(esp) = 0x45bb4au; SAVEALL; F_0045bba0(c); ABI_CHECK(0x45bba0u, 0x45bb45u); RETCHK(0x45bb4au, 0x45bb45u); LOADALL;
  /* 0045bb4a lea edx, [edi + esi] */ edx = (u32)((u32)(edi + esi));
  /* 0045bb4d mov eax, esi */ { eax = (u32)(esi); }
L_0045bb4f:;
  /* 0045bb4f lea ebx, [ebp - 0x40] */ ebx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0045bb52 call 0x45bb80 */ esp -= 4; M32(esp) = 0x45bb57u; SAVEALL; F_0045bb80(c); ABI_CHECK(0x45bb80u, 0x45bb52u); RETCHK(0x45bb57u, 0x45bb52u); LOADALL;
L_0045bb57:;
  /* 0045bb57 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045bb5a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045bb61 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0045bb64 call 0x61af31 */ esp -= 4; M32(esp) = 0x45bb69u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x45bb64u); RETCHK(0x45bb69u, 0x45bb64u); LOADALL;
  /* 0045bb69 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045bb6a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045bb6b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045bb6c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045bb6e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045bb6f ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0045ba91(CPU *c) {
  NATIVE_HOOK(0x45ba91u) REGS; LOADALL;
L_0045ba91:;
  /* 0045ba91 mov edx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); edx = (u32)(M32(m_)); }
  /* 0045ba94 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045ba95 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45ba9au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45ba95u); RETCHK(0x45ba9au, 0x45ba95u); LOADALL;
  /* 0045ba9a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045ba9d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045ba9f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045baa1 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0045baa6 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0045baa9 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0045baac mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0045baae sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045bab0 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045bab5 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045bab7 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045baba mov eax, edx */ { eax = (u32)(edx); }
  /* 0045babc shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045babf add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045bac1 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bac3 jae 0x45bb20 */ if (!CF_) goto L_0045bb20;
  /* 0045bac5 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0045bac8 mov eax, edi */ { eax = (u32)(edi); }
  /* 0045baca imul eax, eax, 0x2c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x2cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045bacd mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0045bad0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045bad1 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045bad3 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0045bad5 call 0x45bbe0 */ esp -= 4; M32(esp) = 0x45badau; SAVEALL; F_0045bbe0(c); ABI_CHECK(0x45bbe0u, 0x45bad5u); RETCHK(0x45badau, 0x45bad5u); LOADALL;
  /* 0045bada mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0045bae1 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045bae4 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045bae7 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045baec imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045baee mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0045baf1 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045baf4 mov eax, edx */ { eax = (u32)(edx); }
  /* 0045baf6 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045baf9 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045bafb sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0045bafd mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045bb00 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045bb01 lea ebx, [ebp - 0x40] */ ebx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0045bb04 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045bb06 call 0x45bbc0 */ esp -= 4; M32(esp) = 0x45bb0bu; SAVEALL; F_0045bbc0(c); ABI_CHECK(0x45bbc0u, 0x45bb06u); RETCHK(0x45bb0bu, 0x45bb06u); LOADALL;
  /* 0045bb0b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045bb0e mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045bb11 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045bb13 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045bb16 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0045bb19 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045bb1b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0045bb1e jmp 0x45bb4f */ goto L_0045bb4f;
L_0045bb20:;
  /* 0045bb20 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0045bb23 imul edi, edi, 0x2c */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x2cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045bb26 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0045bb28 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045bb2a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045bb2b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0045bb2d mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 0045bb30 call 0x45bbe0 */ esp -= 4; M32(esp) = 0x45bb35u; SAVEALL; F_0045bbe0(c); ABI_CHECK(0x45bbe0u, 0x45bb30u); RETCHK(0x45bb35u, 0x45bb30u); LOADALL;
  /* 0045bb35 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045bb38 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0045bb3b mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0045bb3e mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0045bb40 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045bb43 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0045bb45 call 0x45bba0 */ esp -= 4; M32(esp) = 0x45bb4au; SAVEALL; F_0045bba0(c); ABI_CHECK(0x45bba0u, 0x45bb45u); RETCHK(0x45bb4au, 0x45bb45u); LOADALL;
  /* 0045bb4a lea edx, [edi + esi] */ edx = (u32)((u32)(edi + esi));
  /* 0045bb4d mov eax, esi */ { eax = (u32)(esi); }
L_0045bb4f:;
  /* 0045bb4f lea ebx, [ebp - 0x40] */ ebx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0045bb52 call 0x45bb80 */ esp -= 4; M32(esp) = 0x45bb57u; SAVEALL; F_0045bb80(c); ABI_CHECK(0x45bb80u, 0x45bb52u); RETCHK(0x45bb57u, 0x45bb52u); LOADALL;
  /* 0045bb57 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045bb5a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045bb61 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0045bb64 call 0x61af31 */ esp -= 4; M32(esp) = 0x45bb69u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x45bb64u); RETCHK(0x45bb69u, 0x45bb64u); LOADALL;
  /* 0045bb69 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045bb6a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045bb6b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045bb6c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045bb6e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045bb6f ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0045ba9d(CPU *c) {
  NATIVE_HOOK(0x45ba9du) REGS; LOADALL;
L_0045ba9d:;
  /* 0045ba9d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045ba9f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045baa1 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0045baa6 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0045baa9 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0045baac mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0045baae sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045bab0 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045bab5 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045bab7 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045baba mov eax, edx */ { eax = (u32)(edx); }
  /* 0045babc shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045babf add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045bac1 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bac3 jae 0x45bb20 */ if (!CF_) goto L_0045bb20;
  /* 0045bac5 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0045bac8 mov eax, edi */ { eax = (u32)(edi); }
  /* 0045baca imul eax, eax, 0x2c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x2cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045bacd mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0045bad0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045bad1 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045bad3 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0045bad5 call 0x45bbe0 */ esp -= 4; M32(esp) = 0x45badau; SAVEALL; F_0045bbe0(c); ABI_CHECK(0x45bbe0u, 0x45bad5u); RETCHK(0x45badau, 0x45bad5u); LOADALL;
  /* 0045bada mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0045bae1 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045bae4 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045bae7 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045baec imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045baee mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0045baf1 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045baf4 mov eax, edx */ { eax = (u32)(edx); }
  /* 0045baf6 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045baf9 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045bafb sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0045bafd mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045bb00 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045bb01 lea ebx, [ebp - 0x40] */ ebx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0045bb04 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045bb06 call 0x45bbc0 */ esp -= 4; M32(esp) = 0x45bb0bu; SAVEALL; F_0045bbc0(c); ABI_CHECK(0x45bbc0u, 0x45bb06u); RETCHK(0x45bb0bu, 0x45bb06u); LOADALL;
  /* 0045bb0b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045bb0e mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045bb11 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045bb13 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045bb16 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0045bb19 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045bb1b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0045bb1e jmp 0x45bb4f */ goto L_0045bb4f;
L_0045bb20:;
  /* 0045bb20 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0045bb23 imul edi, edi, 0x2c */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x2cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045bb26 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0045bb28 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045bb2a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045bb2b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0045bb2d mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 0045bb30 call 0x45bbe0 */ esp -= 4; M32(esp) = 0x45bb35u; SAVEALL; F_0045bbe0(c); ABI_CHECK(0x45bbe0u, 0x45bb30u); RETCHK(0x45bb35u, 0x45bb30u); LOADALL;
  /* 0045bb35 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045bb38 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0045bb3b mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0045bb3e mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0045bb40 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045bb43 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0045bb45 call 0x45bba0 */ esp -= 4; M32(esp) = 0x45bb4au; SAVEALL; F_0045bba0(c); ABI_CHECK(0x45bba0u, 0x45bb45u); RETCHK(0x45bb4au, 0x45bb45u); LOADALL;
  /* 0045bb4a lea edx, [edi + esi] */ edx = (u32)((u32)(edi + esi));
  /* 0045bb4d mov eax, esi */ { eax = (u32)(esi); }
L_0045bb4f:;
  /* 0045bb4f lea ebx, [ebp - 0x40] */ ebx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0045bb52 call 0x45bb80 */ esp -= 4; M32(esp) = 0x45bb57u; SAVEALL; F_0045bb80(c); ABI_CHECK(0x45bb80u, 0x45bb52u); RETCHK(0x45bb57u, 0x45bb52u); LOADALL;
  /* 0045bb57 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045bb5a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045bb61 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0045bb64 call 0x61af31 */ esp -= 4; M32(esp) = 0x45bb69u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x45bb64u); RETCHK(0x45bb69u, 0x45bb64u); LOADALL;
  /* 0045bb69 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045bb6a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045bb6b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045bb6c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045bb6e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045bb6f ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0045bb80(CPU *c) {
  NATIVE_HOOK(0x45bb80u) REGS; LOADALL;
L_0045bb80:;
  /* 0045bb80 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bb82 je 0x45bb9a */ if (ZF_) goto L_0045bb9a;
  /* 0045bb84 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045bb85 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0045bb86:;
  /* 0045bb86 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045bb88 add eax, 0x2c */ { u32 a_ = eax, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045bb8b cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bb8d mov ecx, 0xb */ { ecx = (u32)(0xbu); }
  /* 0045bb92 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0045bb94 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0045bb96 jne 0x45bb86 */ if (!ZF_) goto L_0045bb86;
  /* 0045bb98 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045bb99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0045bb9a:;
  /* 0045bb9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045bba0(CPU *c) {
  NATIVE_HOOK(0x45bba0u) REGS; LOADALL;
L_0045bba0:;
  /* 0045bba0 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bba2 je 0x45bbbd */ if (ZF_) goto L_0045bbbd;
  /* 0045bba4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045bba5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0045bba6:;
  /* 0045bba6 sub edx, 0x2c */ { u32 a_ = edx, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045bba9 sub eax, 0x2c */ { u32 a_ = eax, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045bbac cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bbae mov ecx, 0xb */ { ecx = (u32)(0xbu); }
  /* 0045bbb3 mov esi, edx */ { esi = (u32)(edx); }
  /* 0045bbb5 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045bbb7 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0045bbb9 jne 0x45bba6 */ if (!ZF_) goto L_0045bba6;
  /* 0045bbbb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045bbbc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0045bbbd:;
  /* 0045bbbd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045bbc0(CPU *c) {
  NATIVE_HOOK(0x45bbc0u) REGS; LOADALL;
L_0045bbc0:;
  /* 0045bbc0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045bbc2 jbe 0x45bbdf */ if ((CF_|ZF_)) goto L_0045bbdf;
  /* 0045bbc4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045bbc5 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0045bbc7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0045bbc8:;
  /* 0045bbc8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045bbca je 0x45bbd7 */ if (ZF_) goto L_0045bbd7;
  /* 0045bbcc mov ecx, 0xb */ { ecx = (u32)(0xbu); }
  /* 0045bbd1 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0045bbd3 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045bbd5 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_0045bbd7:;
  /* 0045bbd7 add eax, 0x2c */ { u32 a_ = eax, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045bbda dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0045bbdb jne 0x45bbc8 */ if (!ZF_) goto L_0045bbc8;
  /* 0045bbdd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045bbde pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0045bbdf:;
  /* 0045bbdf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045bbe0(CPU *c) {
  NATIVE_HOOK(0x45bbe0u) REGS; LOADALL;
L_0045bbe0:;
  /* 0045bbe0 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bbe2 je 0x45bc01 */ if (ZF_) goto L_0045bc01;
  /* 0045bbe4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045bbe5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0045bbe6:;
  /* 0045bbe6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045bbe8 je 0x45bbf5 */ if (ZF_) goto L_0045bbf5;
  /* 0045bbea mov ecx, 0xb */ { ecx = (u32)(0xbu); }
  /* 0045bbef mov esi, edx */ { esi = (u32)(edx); }
  /* 0045bbf1 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045bbf3 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_0045bbf5:;
  /* 0045bbf5 add edx, 0x2c */ { u32 a_ = edx, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045bbf8 add eax, 0x2c */ { u32 a_ = eax, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045bbfb cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bbfd jne 0x45bbe6 */ if (!ZF_) goto L_0045bbe6;
  /* 0045bbff pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045bc00 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0045bc01:;
  /* 0045bc01 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045bc10(CPU *c) {
  NATIVE_HOOK(0x45bc10u) REGS; LOADALL;
L_0045bc10:;
  /* 0045bc10 mov eax, 0x3101 */ { eax = (u32)(0x3101u); }
  /* 0045bc15 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045bc20(CPU *c) {
  NATIVE_HOOK(0x45bc20u) REGS; LOADALL;
L_0045bc20:;
  /* 0045bc20 mov eax, 0x3102 */ { eax = (u32)(0x3102u); }
  /* 0045bc25 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045bc30(CPU *c) {
  NATIVE_HOOK(0x45bc30u) REGS; LOADALL;
L_0045bc30:;
  /* 0045bc30 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045bc31 mov esi, eax */ { esi = (u32)(eax); }
  /* 0045bc33 call 0x457160 */ esp -= 4; M32(esp) = 0x45bc38u; SAVEALL; F_00457160(c); ABI_CHECK(0x457160u, 0x45bc33u); RETCHK(0x45bc38u, 0x45bc33u); LOADALL;
  /* 0045bc38 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0045bc3d mov byte ptr [esi + 0x20c], al */ { const u32 m_ = (u32)(esi + 0x20cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0045bc43 mov byte ptr [esi + 0x20d], al */ { const u32 m_ = (u32)(esi + 0x20du); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0045bc49 mov dword ptr [0x696078], eax */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(eax); }
  /* 0045bc4e mov dword ptr [esi], 0x6488a8 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6488a8u); }
  /* 0045bc54 mov eax, esi */ { eax = (u32)(esi); }
  /* 0045bc56 mov dword ptr [0x696074], 0 */ { const u32 m_ = (u32)(0x696074u); M32(m_) = (u32)(0x0u); }
  /* 0045bc60 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045bc61 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045bc70(CPU *c) {
  NATIVE_HOOK(0x45bc70u) REGS; LOADALL;
L_0045bc70:;
  /* 0045bc70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045bc71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045bc73 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045bc76 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bc79 jne 0x45bc93 */ if (!ZF_) goto L_0045bc93;
  /* 0045bc7b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0045bc7d mov dword ptr [0x696078], 1 */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(0x1u); }
  /* 0045bc87 mov dword ptr [0x696074], edx */ { const u32 m_ = (u32)(0x696074u); M32(m_) = (u32)(edx); }
  /* 0045bc8d mov dword ptr [0x696070], edx */ { const u32 m_ = (u32)(0x696070u); M32(m_) = (u32)(edx); }
L_0045bc93:;
  /* 0045bc93 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0045bc95 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045bc96 call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45bc99u; SAVEALL; call_ind(c, t_); RETCHK(0x45bc99u, 0x45bc96u); LOADALL; }
  /* 0045bc99 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045bc9a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045bca0(CPU *c) {
  NATIVE_HOOK(0x45bca0u) REGS; LOADALL;
L_0045bca0:;
  /* 0045bca0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045bca1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0045bca3 call 0x457320 */ esp -= 4; M32(esp) = 0x45bca8u; SAVEALL; F_00457320(c); ABI_CHECK(0x457320u, 0x45bca3u); RETCHK(0x45bca8u, 0x45bca3u); LOADALL;
  /* 0045bca8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0045bcaa jne 0x45bcae */ if (!ZF_) goto L_0045bcae;
  /* 0045bcac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045bcad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045bcae:;
  /* 0045bcae mov eax, dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); eax = (u32)(M32(m_)); }
  /* 0045bcb4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045bcb6 je 0x45bcc4 */ if (ZF_) goto L_0045bcc4;
  /* 0045bcb8 call 0x5035b0 */ esp -= 4; M32(esp) = 0x45bcbdu; SAVEALL; F_005035b0(c); ABI_CHECK(0x5035b0u, 0x45bcb8u); RETCHK(0x45bcbdu, 0x45bcb8u); LOADALL;
  /* 0045bcbd mov byte ptr [esi + 0x220], 0 */ { const u32 m_ = (u32)(esi + 0x220u); M8(m_) = (u8)(0x0u); }
L_0045bcc4:;
  /* 0045bcc4 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0045bcc6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045bcc7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045bcd0(CPU *c) {
  NATIVE_HOOK(0x45bcd0u) REGS; LOADALL;
L_0045bcd0:;
  /* 0045bcd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045bcd1 mov esi, eax */ { esi = (u32)(eax); }
  /* 0045bcd3 call 0x457160 */ esp -= 4; M32(esp) = 0x45bcd8u; SAVEALL; F_00457160(c); ABI_CHECK(0x457160u, 0x45bcd3u); RETCHK(0x45bcd8u, 0x45bcd3u); LOADALL;
  /* 0045bcd8 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0045bcda mov byte ptr [esi + 0x20c], al */ { const u32 m_ = (u32)(esi + 0x20cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0045bce0 mov byte ptr [esi + 0x20d], al */ { const u32 m_ = (u32)(esi + 0x20du); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0045bce6 mov dword ptr [esi], 0x648838 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x648838u); }
  /* 0045bcec mov eax, esi */ { eax = (u32)(esi); }
  /* 0045bcee mov dword ptr [0x696078], 2 */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(0x2u); }
  /* 0045bcf8 mov dword ptr [0x696074], 0 */ { const u32 m_ = (u32)(0x696074u); M32(m_) = (u32)(0x0u); }
  /* 0045bd02 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045bd03 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045bd10(CPU *c) {
  NATIVE_HOOK(0x45bd10u) REGS; LOADALL;
L_0045bd10:;
  /* 0045bd10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045bd11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045bd13 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045bd16 cmp eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bd19 jne 0x45bd33 */ if (!ZF_) goto L_0045bd33;
  /* 0045bd1b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0045bd1d mov dword ptr [0x696078], 2 */ { const u32 m_ = (u32)(0x696078u); M32(m_) = (u32)(0x2u); }
  /* 0045bd27 mov dword ptr [0x696074], edx */ { const u32 m_ = (u32)(0x696074u); M32(m_) = (u32)(edx); }
  /* 0045bd2d mov dword ptr [0x696070], edx */ { const u32 m_ = (u32)(0x696070u); M32(m_) = (u32)(edx); }
L_0045bd33:;
  /* 0045bd33 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0045bd35 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045bd36 call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45bd39u; SAVEALL; call_ind(c, t_); RETCHK(0x45bd39u, 0x45bd36u); LOADALL; }
  /* 0045bd39 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045bd3a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045bd40(CPU *c) {
  NATIVE_HOOK(0x45bd40u) REGS; LOADALL;
L_0045bd40:;
  /* 0045bd40 push 0x7a7280 */ { u32 v_ = 0x7a7280u; esp -= 4; M32(esp) = v_; }
  /* 0045bd45 mov ecx, 0x64892c */ { ecx = (u32)(0x64892cu); }
  /* 0045bd4a mov dword ptr [esi], 0x648920 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x648920u); }
  /* 0045bd50 call 0x45caf0 */ esp -= 4; M32(esp) = 0x45bd55u; SAVEALL; F_0045caf0(c); ABI_CHECK(0x45caf0u, 0x45bd50u); RETCHK(0x45bd55u, 0x45bd50u); LOADALL;
  /* 0045bd55 mov eax, esi */ { eax = (u32)(esi); }
  /* 0045bd57 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045bd60(CPU *c) {
  NATIVE_HOOK(0x45bd60u) REGS; LOADALL;
L_0045bd60:;
  /* 0045bd60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045bd61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045bd63 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045bd64 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0045bd66 call 0x45bd90 */ esp -= 4; M32(esp) = 0x45bd6bu; SAVEALL; F_0045bd90(c); ABI_CHECK(0x45bd90u, 0x45bd66u); RETCHK(0x45bd6bu, 0x45bd66u); LOADALL;
  /* 0045bd6b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0045bd6f je 0x45bd7a */ if (ZF_) goto L_0045bd7a;
  /* 0045bd71 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045bd72 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45bd77u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45bd72u); RETCHK(0x45bd77u, 0x45bd72u); LOADALL;
  /* 0045bd77 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045bd7a:;
  /* 0045bd7a mov eax, esi */ { eax = (u32)(esi); }
  /* 0045bd7c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045bd7d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045bd7e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045bd90(CPU *c) {
  NATIVE_HOOK(0x45bd90u) REGS; LOADALL;
L_0045bd90:;
  /* 0045bd90 mov dword ptr [ecx], 0x648920 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x648920u); }
  /* 0045bd96 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045bda0(CPU *c) {
  NATIVE_HOOK(0x45bda0u) REGS; LOADALL;
L_0045bda0:;
  /* 0045bda0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045bda1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045bda3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045bda9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045bdab push 0x61b2d8 */ { u32 v_ = 0x61b2d8u; esp -= 4; M32(esp) = v_; }
  /* 0045bdb0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045bdb1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045bdb8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045bdb9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045bdba push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045bdbb mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0045bdbd mov esi, edx */ { esi = (u32)(edx); }
  /* 0045bdbf xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0045bdc1 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bdc3 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0045bdc6 jne 0x45bded */ if (!ZF_) goto L_0045bded;
  /* 0045bdc8 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0045bdcb cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bdcd je 0x45bdd8 */ if (ZF_) goto L_0045bdd8;
  /* 0045bdcf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045bdd0 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45bdd5u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45bdd0u); RETCHK(0x45bdd5u, 0x45bdd0u); LOADALL;
  /* 0045bdd5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045bdd8:;
  /* 0045bdd8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045bdda mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045bddd mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045bde4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045bde5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045bde6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045bde7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045bde9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045bdea ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_0045bded:;
  /* 0045bded mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0045bdf0 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bdf2 je 0x45bdfd */ if (ZF_) goto L_0045bdfd;
  /* 0045bdf4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045bdf5 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45bdfau; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45bdf5u); RETCHK(0x45bdfau, 0x45bdf5u); LOADALL;
  /* 0045bdfa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045bdfd:;
  /* 0045bdfd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0045bdff mov eax, edi */ { eax = (u32)(edi); }
  /* 0045be01 mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0045be04 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0045be07 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0045be0a call 0x45bed0 */ esp -= 4; M32(esp) = 0x45be0fu; SAVEALL; F_0045bed0(c); ABI_CHECK(0x45bed0u, 0x45be0au); RETCHK(0x45be0fu, 0x45be0au); LOADALL;
  /* 0045be0f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0045be12 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0045be15 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045be17 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0045be19 je 0x45be34 */ if (ZF_) goto L_0045be34;
  /* 0045be1b jmp 0x45be20 */ goto L_0045be20;
L_0045be20:;
  /* 0045be20 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0045be22 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0045be24 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045be25 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045be27 call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45be2au; SAVEALL; call_ind(c, t_); RETCHK(0x45be2au, 0x45be27u); LOADALL; }
  /* 0045be2a add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045be2d cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045be2f jne 0x45be20 */ if (!ZF_) goto L_0045be20;
  /* 0045be31 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
L_0045be34:;
  /* 0045be34 mov edi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edi = (u32)(M32(m_)); }
  /* 0045be37 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0045be3a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045be3c jne 0x45be42 */ if (!ZF_) goto L_0045be42;
  /* 0045be3e xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0045be40 jmp 0x45be4a */ goto L_0045be4a;
L_0045be42:;
  /* 0045be42 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045be45 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045be47 sar esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
L_0045be4a:;
  /* 0045be4a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045be4c je 0x45be57 */ if (ZF_) goto L_0045be57;
  /* 0045be4e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045be4f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45be54u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45be4fu); RETCHK(0x45be54u, 0x45be4fu); LOADALL;
  /* 0045be54 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045be57:;
  /* 0045be57 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045be5a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045be5b mov eax, esi */ { eax = (u32)(esi); }
  /* 0045be5d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045be5e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045be65 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045be66 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045be68 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045be69 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0045be70(CPU *c) {
  NATIVE_HOOK(0x45be70u) REGS; LOADALL;
L_0045be70:;
  /* 0045be70 mov eax, 0x7a7280 */ { eax = (u32)(0x7a7280u); }
  /* 0045be75 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045be80(CPU *c) {
  NATIVE_HOOK(0x45be80u) REGS; LOADALL;
L_0045be80:;
  /* 0045be80 mov dword ptr [eax], 0x648924 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x648924u); }
  /* 0045be86 mov dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0045be8d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045be90(CPU *c) {
  NATIVE_HOOK(0x45be90u) REGS; LOADALL;
L_0045be90:;
  /* 0045be90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045be91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045be93 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045be94 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0045be96 call 0x45bec0 */ esp -= 4; M32(esp) = 0x45be9bu; SAVEALL; F_0045bec0(c); ABI_CHECK(0x45bec0u, 0x45be96u); RETCHK(0x45be9bu, 0x45be96u); LOADALL;
  /* 0045be9b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0045be9f je 0x45beaa */ if (ZF_) goto L_0045beaa;
  /* 0045bea1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045bea2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45bea7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45bea2u); RETCHK(0x45bea7u, 0x45bea2u); LOADALL;
  /* 0045bea7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045beaa:;
  /* 0045beaa mov eax, esi */ { eax = (u32)(esi); }
  /* 0045beac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045bead pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045beae ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045bec0(CPU *c) {
  NATIVE_HOOK(0x45bec0u) REGS; LOADALL;
L_0045bec0:;
  /* 0045bec0 mov dword ptr [ecx], 0x648924 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x648924u); }
  /* 0045bec6 mov dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0045becd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045bed0(CPU *c) {
  NATIVE_HOOK(0x45bed0u) REGS; LOADALL;
L_0045bed0:;
  /* 0045bed0 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0045bed3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045bee0(CPU *c) {
  NATIVE_HOOK(0x45bee0u) REGS; LOADALL;
L_0045bee0:;
  /* 0045bee0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045bee1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045bee3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045bee4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0045bee6 call 0x45bfb0 */ esp -= 4; M32(esp) = 0x45beebu; SAVEALL; F_0045bfb0(c); ABI_CHECK(0x45bfb0u, 0x45bee6u); RETCHK(0x45beebu, 0x45bee6u); LOADALL;
  /* 0045beeb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0045beef je 0x45befa */ if (ZF_) goto L_0045befa;
  /* 0045bef1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045bef2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45bef7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45bef2u); RETCHK(0x45bef7u, 0x45bef2u); LOADALL;
  /* 0045bef7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045befa:;
  /* 0045befa mov eax, esi */ { eax = (u32)(esi); }
  /* 0045befc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045befd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045befe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045bf10(CPU *c) {
  NATIVE_HOOK(0x45bf10u) REGS; LOADALL;
L_0045bf10:;
  /* 0045bf10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045bf11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045bf13 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045bf15 push 0x6208d0 */ { u32 v_ = 0x6208d0u; esp -= 4; M32(esp) = v_; }
  /* 0045bf1a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045bf20 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045bf21 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045bf28 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045bf2b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045bf2c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045bf2f mov eax, esi */ { eax = (u32)(esi); }
  /* 0045bf31 call 0x45be80 */ esp -= 4; M32(esp) = 0x45bf36u; SAVEALL; F_0045be80(c); ABI_CHECK(0x45be80u, 0x45bf31u); RETCHK(0x45bf36u, 0x45bf31u); LOADALL;
  /* 0045bf36 cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bf39 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0045bf3c mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0045bf43 mov dword ptr [esi], 0x648918 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x648918u); }
  /* 0045bf49 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0045bf4c mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0045bf4f je 0x45bf94 */ if (ZF_) goto L_0045bf94;
  /* 0045bf51 lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0045bf54 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045bf55 push 0x7a7280 */ { u32 v_ = 0x7a7280u; esp -= 4; M32(esp) = v_; }
  /* 0045bf5a call 0x45c6e0 */ esp -= 4; M32(esp) = 0x45bf5fu; SAVEALL; F_0045c6e0(c); ABI_CHECK(0x45c6e0u, 0x45bf5au); RETCHK(0x45bf5fu, 0x45bf5au); LOADALL;
  /* 0045bf5f mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0045bf62 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0045bf65 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045bf66 push 0x7a7280 */ { u32 v_ = 0x7a7280u; esp -= 4; M32(esp) = v_; }
  /* 0045bf6b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0045bf6d mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0045bf71 call 0x45c9e0 */ esp -= 4; M32(esp) = 0x45bf76u; SAVEALL; F_0045c9e0(c); ABI_CHECK(0x45c9e0u, 0x45bf71u); RETCHK(0x45bf76u, 0x45bf71u); LOADALL;
  /* 0045bf76 cmp dword ptr [ebp - 0x18], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bf7a jb 0x45bf88 */ if (CF_) goto L_0045bf88;
  /* 0045bf7c mov edx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edx = (u32)(M32(m_)); }
  /* 0045bf7f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045bf80 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45bf85u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45bf80u); RETCHK(0x45bf85u, 0x45bf80u); LOADALL;
  /* 0045bf85 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045bf88:;
  /* 0045bf88 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0045bf8b mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0045bf8e mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 0045bf91 mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
L_0045bf94:;
  /* 0045bf94 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045bf97 mov eax, esi */ { eax = (u32)(esi); }
  /* 0045bf99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045bf9a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045bfa1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045bfa3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045bfa4 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0045bfb0(CPU *c) {
  NATIVE_HOOK(0x45bfb0u) REGS; LOADALL;
L_0045bfb0:;
  /* 0045bfb0 mov dword ptr [ecx], 0x648918 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x648918u); }
  /* 0045bfb6 jmp 0x45bec0 */ SAVEALL; F_0045bec0(c); return;
}

void F_0045bfc0(CPU *c) {
  NATIVE_HOOK(0x45bfc0u) REGS; LOADALL;
L_0045bfc0:;
  /* 0045bfc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045bfc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045bfc3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045bfc4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045bfc5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045bfc8 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045bfca push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045bfcb mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0045bfcd mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0045bfcf je 0x45c04f */ if (ZF_) goto L_0045c04f;
  /* 0045bfd1 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0045bfd4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045bfd6 jne 0x45bfda */ if (!ZF_) goto L_0045bfda;
  /* 0045bfd8 xor bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_0045bfda:;
  /* 0045bfda mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045bfdd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045bfdf je 0x45bfe8 */ if (ZF_) goto L_0045bfe8;
  /* 0045bfe1 cmp dword ptr [esi + 0x70], eax */ { const u32 m_ = (u32)(esi + 0x70u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bfe4 je 0x45bfe8 */ if (ZF_) goto L_0045bfe8;
  /* 0045bfe6 xor bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_0045bfe8:;
  /* 0045bfe8 mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0045bfeb or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0045bfee cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bff0 je 0x45c03d */ if (ZF_) goto L_0045c03d;
  /* 0045bff2 mov eax, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); eax = (u32)(M32(m_)); }
  /* 0045bff5 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bff7 jne 0x45c009 */ if (!ZF_) goto L_0045c009;
  /* 0045bff9 cmp dword ptr [esi + 0x5c], ecx */ { const u32 m_ = (u32)(esi + 0x5cu); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045bffc jne 0x45c005 */ if (!ZF_) goto L_0045c005;
  /* 0045bffe mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 0045c003 jmp 0x45c01c */ goto L_0045c01c;
L_0045c005:;
  /* 0045c005 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c007 je 0x45c00d */ if (ZF_) goto L_0045c00d;
L_0045c009:;
  /* 0045c009 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045c00b jmp 0x45c01c */ goto L_0045c01c;
L_0045c00d:;
  /* 0045c00d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045c00f cmp dword ptr [esi + 0x5c], ecx */ { const u32 m_ = (u32)(esi + 0x5cu); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c012 sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 0045c015 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0045c016 and eax, 0xfffffffd */ { u32 a_ = eax, b_ = 0xfffffffdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045c019 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0045c01c:;
  /* 0045c01c cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c01e je 0x45c022 */ if (ZF_) goto L_0045c022;
  /* 0045c020 xor bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_0045c022:;
  /* 0045c022 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0045c024 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045c026 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045c028 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c029 call 0x463f40 */ esp -= 4; M32(esp) = 0x45c02eu; SAVEALL; F_00463f40(c); ABI_CHECK(0x463f40u, 0x45c029u); RETCHK(0x45c02eu, 0x45c029u); LOADALL;
  /* 0045c02e mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0045c031 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045c034 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c036 jl 0x45c04f */ if (LT_) goto L_0045c04f;
  /* 0045c038 cmp eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c03b jg 0x45c04f */ if (!(ZF_|LT_)) goto L_0045c04f;
L_0045c03d:;
  /* 0045c03d test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0045c03f je 0x45c04f */ if (ZF_) goto L_0045c04f;
  /* 0045c041 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0045c044 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0045c047 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0045c04a call 0x52ac10 */ esp -= 4; M32(esp) = 0x45c04fu; SAVEALL; F_0052ac10(c); ABI_CHECK(0x52ac10u, 0x45c04au); RETCHK(0x45c04fu, 0x45c04au); LOADALL;
L_0045c04f:;
  /* 0045c04f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045c050 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045c051 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045c052 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045c053 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045c060(CPU *c) {
  NATIVE_HOOK(0x45c060u) REGS; LOADALL;
L_0045c060:;
  /* 0045c060 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c061 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0045c064 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045c066 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c068 je 0x45c08e */ if (ZF_) goto L_0045c08e;
  /* 0045c06a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045c06b mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0045c06e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c070 je 0x45c07f */ if (ZF_) goto L_0045c07f;
L_0045c072:;
  /* 0045c072 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c073 call 0x45c140 */ esp -= 4; M32(esp) = 0x45c078u; SAVEALL; F_0045c140(c); ABI_CHECK(0x45c140u, 0x45c073u); RETCHK(0x45c078u, 0x45c073u); LOADALL;
  /* 0045c078 add esi, 0x2c */ { u32 a_ = esi, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045c07b cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c07d jne 0x45c072 */ if (!ZF_) goto L_0045c072;
L_0045c07f:;
  /* 0045c07f mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0045c082 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c083 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c088u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c083u); RETCHK(0x45c088u, 0x45c083u); LOADALL;
  /* 0045c088 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045c08b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045c08d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0045c08e:;
  /* 0045c08e mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0045c091 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0045c094 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 0045c097 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045c098 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045c0a0(CPU *c) {
  NATIVE_HOOK(0x45c0a0u) REGS; LOADALL;
L_0045c0a0:;
  /* 0045c0a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c0a1 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0045c0a4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045c0a6 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c0a8 je 0x45c0ce */ if (ZF_) goto L_0045c0ce;
  /* 0045c0aa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045c0ab mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0045c0ae cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c0b0 je 0x45c0bf */ if (ZF_) goto L_0045c0bf;
L_0045c0b2:;
  /* 0045c0b2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c0b3 call 0x45c260 */ esp -= 4; M32(esp) = 0x45c0b8u; SAVEALL; F_0045c260(c); ABI_CHECK(0x45c260u, 0x45c0b3u); RETCHK(0x45c0b8u, 0x45c0b3u); LOADALL;
  /* 0045c0b8 add esi, 0x2c */ { u32 a_ = esi, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045c0bb cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c0bd jne 0x45c0b2 */ if (!ZF_) goto L_0045c0b2;
L_0045c0bf:;
  /* 0045c0bf mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0045c0c2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c0c3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c0c8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c0c3u); RETCHK(0x45c0c8u, 0x45c0c3u); LOADALL;
  /* 0045c0c8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045c0cb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045c0cd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0045c0ce:;
  /* 0045c0ce mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0045c0d1 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0045c0d4 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 0045c0d7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045c0d8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045c0e0(CPU *c) {
  NATIVE_HOOK(0x45c0e0u) REGS; LOADALL;
L_0045c0e0:;
  /* 0045c0e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c0e1 mov esi, eax */ { esi = (u32)(eax); }
  /* 0045c0e3 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c0e5 je 0x45c0f4 */ if (ZF_) goto L_0045c0f4;
L_0045c0e7:;
  /* 0045c0e7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c0e8 call 0x45c140 */ esp -= 4; M32(esp) = 0x45c0edu; SAVEALL; F_0045c140(c); ABI_CHECK(0x45c140u, 0x45c0e8u); RETCHK(0x45c0edu, 0x45c0e8u); LOADALL;
  /* 0045c0ed add esi, 0x2c */ { u32 a_ = esi, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045c0f0 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c0f2 jne 0x45c0e7 */ if (!ZF_) goto L_0045c0e7;
L_0045c0f4:;
  /* 0045c0f4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045c0f5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045c100(CPU *c) {
  NATIVE_HOOK(0x45c100u) REGS; LOADALL;
L_0045c100:;
  /* 0045c100 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c101 mov esi, eax */ { esi = (u32)(eax); }
  /* 0045c103 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c105 je 0x45c113 */ if (ZF_) goto L_0045c113;
L_0045c107:;
  /* 0045c107 call 0x45c1f0 */ esp -= 4; M32(esp) = 0x45c10cu; SAVEALL; F_0045c1f0(c); ABI_CHECK(0x45c1f0u, 0x45c107u); RETCHK(0x45c10cu, 0x45c107u); LOADALL;
  /* 0045c10c add esi, 0x58 */ { u32 a_ = esi, b_ = 0x58u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045c10f cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c111 jne 0x45c107 */ if (!ZF_) goto L_0045c107;
L_0045c113:;
  /* 0045c113 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045c114 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045c120(CPU *c) {
  NATIVE_HOOK(0x45c120u) REGS; LOADALL;
L_0045c120:;
  /* 0045c120 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c121 mov esi, eax */ { esi = (u32)(eax); }
  /* 0045c123 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c125 je 0x45c134 */ if (ZF_) goto L_0045c134;
L_0045c127:;
  /* 0045c127 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c128 call 0x45c260 */ esp -= 4; M32(esp) = 0x45c12du; SAVEALL; F_0045c260(c); ABI_CHECK(0x45c260u, 0x45c128u); RETCHK(0x45c12du, 0x45c128u); LOADALL;
  /* 0045c12d add esi, 0x2c */ { u32 a_ = esi, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045c130 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c132 jne 0x45c127 */ if (!ZF_) goto L_0045c127;
L_0045c134:;
  /* 0045c134 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045c135 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045c140(CPU *c) {
  NATIVE_HOOK(0x45c140u) REGS; LOADALL;
L_0045c140:;
  /* 0045c140 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045c141 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045c143 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c144 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045c145 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c146 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045c149 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045c14a mov edi, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edi = (u32)(M32(m_)); }
  /* 0045c14d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0045c14f cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c151 je 0x45c1b8 */ if (ZF_) goto L_0045c1b8;
  /* 0045c153 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 0045c156 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c158 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0045c15b je 0x45c1ac */ if (ZF_) goto L_0045c1ac;
  /* 0045c15d lea esi, [edi + 0x38] */ esi = (u32)((u32)(edi + 0x38u));
L_0045c160:;
  /* 0045c160 cmp dword ptr [esi], 0x10 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c163 jb 0x45c171 */ if (CF_) goto L_0045c171;
  /* 0045c165 mov eax, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0045c168 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c169 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c16eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c169u); RETCHK(0x45c16eu, 0x45c169u); LOADALL;
  /* 0045c16e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c171:;
  /* 0045c171 mov dword ptr [esi], 0xf */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xfu); }
  /* 0045c177 mov dword ptr [esi - 4], ebx */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0045c17a mov byte ptr [esi - 0x14], bl */ { const u32 m_ = (u32)(esi + 0xffffffecu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045c17d cmp dword ptr [esi - 0x1c], 0x10 */ { const u32 m_ = (u32)(esi + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c181 jb 0x45c18f */ if (CF_) goto L_0045c18f;
  /* 0045c183 mov ecx, dword ptr [esi - 0x30] */ { const u32 m_ = (u32)(esi + 0xffffffd0u); ecx = (u32)(M32(m_)); }
  /* 0045c186 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c187 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c18cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c187u); RETCHK(0x45c18cu, 0x45c187u); LOADALL;
  /* 0045c18c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c18f:;
  /* 0045c18f mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0045c192 mov dword ptr [esi - 0x1c], 0xf */ { const u32 m_ = (u32)(esi + 0xffffffe4u); M32(m_) = (u32)(0xfu); }
  /* 0045c199 mov dword ptr [esi - 0x20], ebx */ { const u32 m_ = (u32)(esi + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 0045c19c mov byte ptr [esi - 0x30], bl */ { const u32 m_ = (u32)(esi + 0xffffffd0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045c19f add edi, 0x3c */ { u32 a_ = edi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0045c1a2 add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045c1a5 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c1a7 jne 0x45c160 */ if (!ZF_) goto L_0045c160;
  /* 0045c1a9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_0045c1ac:;
  /* 0045c1ac mov edx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M32(m_)); }
  /* 0045c1af push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045c1b0 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c1b5u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c1b0u); RETCHK(0x45c1b5u, 0x45c1b0u); LOADALL;
  /* 0045c1b5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c1b8:;
  /* 0045c1b8 mov dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 0045c1bb mov dword ptr [esi + 0x24], ebx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ebx); }
  /* 0045c1be mov dword ptr [esi + 0x28], ebx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(ebx); }
  /* 0045c1c1 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c1c5 jb 0x45c1d3 */ if (CF_) goto L_0045c1d3;
  /* 0045c1c7 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0045c1ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c1cb call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c1d0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c1cbu); RETCHK(0x45c1d0u, 0x45c1cbu); LOADALL;
  /* 0045c1d0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c1d3:;
  /* 0045c1d3 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0045c1d6 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0045c1dd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045c1de mov byte ptr [esi + 4], bl */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045c1e1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045c1e2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045c1e3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045c1e5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045c1e6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045c1f0(CPU *c) {
  NATIVE_HOOK(0x45c1f0u) REGS; LOADALL;
L_0045c1f0:;
  /* 0045c1f0 cmp dword ptr [esi + 0x54], 0x10 */ { const u32 m_ = (u32)(esi + 0x54u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c1f4 jb 0x45c202 */ if (CF_) goto L_0045c202;
  /* 0045c1f6 mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 0045c1f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c1fa call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c1ffu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c1fau); RETCHK(0x45c1ffu, 0x45c1fau); LOADALL;
  /* 0045c1ff add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c202:;
  /* 0045c202 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045c203 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0045c205 mov dword ptr [esi + 0x54], 0xf */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0xfu); }
  /* 0045c20c mov dword ptr [esi + 0x50], ebx */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(ebx); }
  /* 0045c20f mov byte ptr [esi + 0x40], bl */ { const u32 m_ = (u32)(esi + 0x40u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045c212 cmp dword ptr [esi + 0x38], 0x10 */ { const u32 m_ = (u32)(esi + 0x38u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c216 jb 0x45c224 */ if (CF_) goto L_0045c224;
  /* 0045c218 mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0045c21b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c21c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c221u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c21cu); RETCHK(0x45c221u, 0x45c21cu); LOADALL;
  /* 0045c221 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c224:;
  /* 0045c224 mov dword ptr [esi + 0x38], 0xf */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(0xfu); }
  /* 0045c22b mov dword ptr [esi + 0x34], ebx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ebx); }
  /* 0045c22e mov byte ptr [esi + 0x24], bl */ { const u32 m_ = (u32)(esi + 0x24u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045c231 cmp dword ptr [esi + 0x1c], 0x10 */ { const u32 m_ = (u32)(esi + 0x1cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c235 jb 0x45c243 */ if (CF_) goto L_0045c243;
  /* 0045c237 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045c23a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045c23b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c240u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c23bu); RETCHK(0x45c240u, 0x45c23bu); LOADALL;
  /* 0045c240 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c243:;
  /* 0045c243 mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 0045c246 mov dword ptr [esi + 0x1c], 0xf */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(0xfu); }
  /* 0045c24d mov byte ptr [esi + 8], bl */ { const u32 m_ = (u32)(esi + 0x8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045c250 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045c251 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045c260(CPU *c) {
  NATIVE_HOOK(0x45c260u) REGS; LOADALL;
L_0045c260:;
  /* 0045c260 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045c261 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045c263 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c264 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045c265 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c266 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045c269 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045c26a mov edi, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edi = (u32)(M32(m_)); }
  /* 0045c26d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0045c26f cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c271 je 0x45c2d8 */ if (ZF_) goto L_0045c2d8;
  /* 0045c273 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 0045c276 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c278 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0045c27b je 0x45c2cc */ if (ZF_) goto L_0045c2cc;
  /* 0045c27d lea esi, [edi + 0x38] */ esi = (u32)((u32)(edi + 0x38u));
L_0045c280:;
  /* 0045c280 cmp dword ptr [esi], 0x10 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c283 jb 0x45c291 */ if (CF_) goto L_0045c291;
  /* 0045c285 mov eax, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0045c288 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c289 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c28eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c289u); RETCHK(0x45c28eu, 0x45c289u); LOADALL;
  /* 0045c28e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c291:;
  /* 0045c291 mov dword ptr [esi], 0xf */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xfu); }
  /* 0045c297 mov dword ptr [esi - 4], ebx */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0045c29a mov byte ptr [esi - 0x14], bl */ { const u32 m_ = (u32)(esi + 0xffffffecu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045c29d cmp dword ptr [esi - 0x1c], 0x10 */ { const u32 m_ = (u32)(esi + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c2a1 jb 0x45c2af */ if (CF_) goto L_0045c2af;
  /* 0045c2a3 mov ecx, dword ptr [esi - 0x30] */ { const u32 m_ = (u32)(esi + 0xffffffd0u); ecx = (u32)(M32(m_)); }
  /* 0045c2a6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c2a7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c2acu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c2a7u); RETCHK(0x45c2acu, 0x45c2a7u); LOADALL;
  /* 0045c2ac add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c2af:;
  /* 0045c2af mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0045c2b2 mov dword ptr [esi - 0x1c], 0xf */ { const u32 m_ = (u32)(esi + 0xffffffe4u); M32(m_) = (u32)(0xfu); }
  /* 0045c2b9 mov dword ptr [esi - 0x20], ebx */ { const u32 m_ = (u32)(esi + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 0045c2bc mov byte ptr [esi - 0x30], bl */ { const u32 m_ = (u32)(esi + 0xffffffd0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045c2bf add edi, 0x44 */ { u32 a_ = edi, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0045c2c2 add esi, 0x44 */ { u32 a_ = esi, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045c2c5 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c2c7 jne 0x45c280 */ if (!ZF_) goto L_0045c280;
  /* 0045c2c9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_0045c2cc:;
  /* 0045c2cc mov edx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M32(m_)); }
  /* 0045c2cf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045c2d0 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c2d5u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c2d0u); RETCHK(0x45c2d5u, 0x45c2d0u); LOADALL;
  /* 0045c2d5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c2d8:;
  /* 0045c2d8 mov dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 0045c2db mov dword ptr [esi + 0x24], ebx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ebx); }
  /* 0045c2de mov dword ptr [esi + 0x28], ebx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(ebx); }
  /* 0045c2e1 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c2e5 jb 0x45c2f3 */ if (CF_) goto L_0045c2f3;
  /* 0045c2e7 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0045c2ea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c2eb call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c2f0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c2ebu); RETCHK(0x45c2f0u, 0x45c2ebu); LOADALL;
  /* 0045c2f0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c2f3:;
  /* 0045c2f3 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0045c2f6 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0045c2fd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045c2fe mov byte ptr [esi + 4], bl */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045c301 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045c302 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045c303 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045c305 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045c306 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045c310(CPU *c) {
  NATIVE_HOOK(0x45c310u) REGS; LOADALL;
L_0045c310:;
  /* 0045c310 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c311 mov esi, eax */ { esi = (u32)(eax); }
  /* 0045c313 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c315 je 0x45c323 */ if (ZF_) goto L_0045c323;
L_0045c317:;
  /* 0045c317 call 0x4a6600 */ esp -= 4; M32(esp) = 0x45c31cu; SAVEALL; F_004a6600(c); ABI_CHECK(0x4a6600u, 0x45c317u); RETCHK(0x45c31cu, 0x45c317u); LOADALL;
  /* 0045c31c add esi, 0x44 */ { u32 a_ = esi, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045c31f cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c321 jne 0x45c317 */ if (!ZF_) goto L_0045c317;
L_0045c323:;
  /* 0045c323 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045c324 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045c330(CPU *c) {
  NATIVE_HOOK(0x45c330u) REGS; LOADALL;
L_0045c330:;
  /* 0045c330 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045c332 je 0x45c352 */ if (ZF_) goto L_0045c352;
  /* 0045c334 mov eax, esi */ { eax = (u32)(esi); }
  /* 0045c336 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045c337 lea edi, [eax + 1] */ edi = (u32)((u32)(eax + 0x1u));
  /* 0045c33a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0045c340:;
  /* 0045c340 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0045c342 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0045c343 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0045c345 jne 0x45c340 */ if (!ZF_) goto L_0045c340;
  /* 0045c347 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045c349 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c34a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c34b call 0x404420 */ esp -= 4; M32(esp) = 0x45c350u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45c34bu); RETCHK(0x45c350u, 0x45c34bu); LOADALL;
  /* 0045c350 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045c351 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045c352:;
  /* 0045c352 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045c354 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0045c359 call 0x404420 */ esp -= 4; M32(esp) = 0x45c35eu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x45c359u); RETCHK(0x45c35eu, 0x45c359u); LOADALL;
  /* 0045c35e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045c360(CPU *c) {
  NATIVE_HOOK(0x45c360u) REGS; LOADALL;
L_0045c360:;
  /* 0045c360 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045c361 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045c363 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045c369 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045c36b push 0x61d05e */ { u32 v_ = 0x61d05eu; esp -= 4; M32(esp) = v_; }
  /* 0045c370 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c371 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045c378 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045c379 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c37a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045c37b mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0045c37e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045c37f call 0x5614b0 */ esp -= 4; M32(esp) = 0x45c384u; SAVEALL; F_005614b0(c); ABI_CHECK(0x5614b0u, 0x45c37fu); RETCHK(0x45c384u, 0x45c37fu); LOADALL;
  /* 0045c384 lea ebx, [edi + 0x48] */ ebx = (u32)((u32)(edi + 0x48u));
  /* 0045c387 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0045c389 mov dword ptr [ebx + 4], esi */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(esi); }
  /* 0045c38c mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 0045c38f mov dword ptr [ebx + 0xc], esi */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(esi); }
  /* 0045c392 mov dword ptr [edi + 0x5c], esi */ { const u32 m_ = (u32)(edi + 0x5cu); M32(m_) = (u32)(esi); }
  /* 0045c395 mov dword ptr [edi + 0x60], esi */ { const u32 m_ = (u32)(edi + 0x60u); M32(m_) = (u32)(esi); }
  /* 0045c398 mov dword ptr [edi + 0x64], esi */ { const u32 m_ = (u32)(edi + 0x64u); M32(m_) = (u32)(esi); }
  /* 0045c39b mov dword ptr [edi + 0x6c], esi */ { const u32 m_ = (u32)(edi + 0x6cu); M32(m_) = (u32)(esi); }
  /* 0045c39e mov dword ptr [edi + 0x70], esi */ { const u32 m_ = (u32)(edi + 0x70u); M32(m_) = (u32)(esi); }
  /* 0045c3a1 mov dword ptr [edi + 0x74], esi */ { const u32 m_ = (u32)(edi + 0x74u); M32(m_) = (u32)(esi); }
  /* 0045c3a4 call 0x45c060 */ esp -= 4; M32(esp) = 0x45c3a9u; SAVEALL; F_0045c060(c); ABI_CHECK(0x45c060u, 0x45c3a4u); RETCHK(0x45c3a9u, 0x45c3a4u); LOADALL;
  /* 0045c3a9 mov ebx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ebx = (u32)(M32(m_)); }
  /* 0045c3ac cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c3ae je 0x45c3df */ if (ZF_) goto L_0045c3df;
  /* 0045c3b0 mov eax, dword ptr [edi + 0x60] */ { const u32 m_ = (u32)(edi + 0x60u); eax = (u32)(M32(m_)); }
  /* 0045c3b3 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c3b5 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0045c3b8 je 0x45c3d3 */ if (ZF_) goto L_0045c3d3;
  /* 0045c3ba lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0045c3c0:;
  /* 0045c3c0 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0045c3c2 call 0x45c1f0 */ esp -= 4; M32(esp) = 0x45c3c7u; SAVEALL; F_0045c1f0(c); ABI_CHECK(0x45c1f0u, 0x45c3c2u); RETCHK(0x45c3c7u, 0x45c3c2u); LOADALL;
  /* 0045c3c7 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045c3ca add ebx, 0x58 */ { u32 a_ = ebx, b_ = 0x58u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0045c3cd cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c3cf jne 0x45c3c0 */ if (!ZF_) goto L_0045c3c0;
  /* 0045c3d1 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_0045c3d3:;
  /* 0045c3d3 mov eax, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0045c3d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c3d7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c3dcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c3d7u); RETCHK(0x45c3dcu, 0x45c3d7u); LOADALL;
  /* 0045c3dc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c3df:;
  /* 0045c3df lea ebx, [edi + 0x68] */ ebx = (u32)((u32)(edi + 0x68u));
  /* 0045c3e2 mov dword ptr [edi + 0x5c], esi */ { const u32 m_ = (u32)(edi + 0x5cu); M32(m_) = (u32)(esi); }
  /* 0045c3e5 mov dword ptr [edi + 0x60], esi */ { const u32 m_ = (u32)(edi + 0x60u); M32(m_) = (u32)(esi); }
  /* 0045c3e8 mov dword ptr [edi + 0x64], esi */ { const u32 m_ = (u32)(edi + 0x64u); M32(m_) = (u32)(esi); }
  /* 0045c3eb call 0x45c0a0 */ esp -= 4; M32(esp) = 0x45c3f0u; SAVEALL; F_0045c0a0(c); ABI_CHECK(0x45c0a0u, 0x45c3ebu); RETCHK(0x45c3f0u, 0x45c3ebu); LOADALL;
  /* 0045c3f0 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045c3f3 mov eax, edi */ { eax = (u32)(edi); }
  /* 0045c3f5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045c3f6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045c3f7 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045c3fe pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045c3ff mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045c401 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045c402 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045c410(CPU *c) {
  NATIVE_HOOK(0x45c410u) REGS; LOADALL;
L_0045c410:;
  /* 0045c410 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045c411 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c412 lea ebx, [edi + 0x68] */ ebx = (u32)((u32)(edi + 0x68u));
  /* 0045c415 call 0x45c0a0 */ esp -= 4; M32(esp) = 0x45c41au; SAVEALL; F_0045c0a0(c); ABI_CHECK(0x45c0a0u, 0x45c415u); RETCHK(0x45c41au, 0x45c415u); LOADALL;
  /* 0045c41a mov esi, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); esi = (u32)(M32(m_)); }
  /* 0045c41d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045c41f cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c421 je 0x45c44a */ if (ZF_) goto L_0045c44a;
  /* 0045c423 mov ebx, dword ptr [edi + 0x60] */ { const u32 m_ = (u32)(edi + 0x60u); ebx = (u32)(M32(m_)); }
  /* 0045c426 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c428 je 0x45c43c */ if (ZF_) goto L_0045c43c;
  /* 0045c42a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0045c430:;
  /* 0045c430 call 0x45c1f0 */ esp -= 4; M32(esp) = 0x45c435u; SAVEALL; F_0045c1f0(c); ABI_CHECK(0x45c1f0u, 0x45c430u); RETCHK(0x45c435u, 0x45c430u); LOADALL;
  /* 0045c435 add esi, 0x58 */ { u32 a_ = esi, b_ = 0x58u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045c438 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c43a jne 0x45c430 */ if (!ZF_) goto L_0045c430;
L_0045c43c:;
  /* 0045c43c mov eax, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0045c43f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c440 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c445u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c440u); RETCHK(0x45c445u, 0x45c440u); LOADALL;
  /* 0045c445 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045c448 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0045c44a:;
  /* 0045c44a lea ebx, [edi + 0x48] */ ebx = (u32)((u32)(edi + 0x48u));
  /* 0045c44d mov dword ptr [edi + 0x5c], eax */ { const u32 m_ = (u32)(edi + 0x5cu); M32(m_) = (u32)(eax); }
  /* 0045c450 mov dword ptr [edi + 0x60], eax */ { const u32 m_ = (u32)(edi + 0x60u); M32(m_) = (u32)(eax); }
  /* 0045c453 mov dword ptr [edi + 0x64], eax */ { const u32 m_ = (u32)(edi + 0x64u); M32(m_) = (u32)(eax); }
  /* 0045c456 call 0x45c060 */ esp -= 4; M32(esp) = 0x45c45bu; SAVEALL; F_0045c060(c); ABI_CHECK(0x45c060u, 0x45c456u); RETCHK(0x45c45bu, 0x45c456u); LOADALL;
  /* 0045c45b mov dword ptr [edi], 0x643d40 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x643d40u); }
  /* 0045c461 mov eax, dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); eax = (u32)(M32(m_)); }
  /* 0045c464 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c469 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045c46a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045c46b je 0x45c476 */ if (ZF_) goto L_0045c476;
  /* 0045c46d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c46e call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x45c473u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x45c46eu); RETCHK(0x45c473u, 0x45c46eu); LOADALL;
  /* 0045c473 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c476:;
  /* 0045c476 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045c478 jmp 0x560aa0 */ SAVEALL; F_00560aa0(c); return;
}

void F_0045c480(CPU *c) {
  NATIVE_HOOK(0x45c480u) REGS; LOADALL;
L_0045c480:;
  /* 0045c480 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045c481 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045c483 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045c489 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045c48b push 0x626838 */ { u32 v_ = 0x626838u; esp -= 4; M32(esp) = v_; }
  /* 0045c490 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c491 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045c498 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045c499 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0045c49c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045c49e mov dword ptr [edi + 0x18], 0xf */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0045c4a5 mov dword ptr [edi + 0x14], eax */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0045c4a8 mov byte ptr [edi + 4], al */ { const u32 m_ = (u32)(edi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0045c4ab mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045c4ad mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0045c4b0 call 0x45c330 */ esp -= 4; M32(esp) = 0x45c4b5u; SAVEALL; F_0045c330(c); ABI_CHECK(0x45c330u, 0x45c4b0u); RETCHK(0x45c4b5u, 0x45c4b0u); LOADALL;
  /* 0045c4b5 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045c4b8 mov eax, edi */ { eax = (u32)(edi); }
  /* 0045c4ba mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045c4c1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045c4c2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045c4c4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045c4c5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045c4d0(CPU *c) {
  NATIVE_HOOK(0x45c4d0u) REGS; LOADALL;
L_0045c4d0:;
  /* 0045c4d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045c4d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045c4d3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045c4d5 push 0x6208b2 */ { u32 v_ = 0x6208b2u; esp -= 4; M32(esp) = v_; }
  /* 0045c4da mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045c4e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c4e1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045c4e8 sub esp, 0x64 */ { u32 a_ = esp, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045c4eb mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0045c4f0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045c4f1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c4f2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0045c4f4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045c4f5 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0045c4f8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0045c4fa mov edi, edx */ { edi = (u32)(edx); }
  /* 0045c4fc mov dword ptr [ebp - 0x40], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ebx); }
  /* 0045c4ff cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c501 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0045c504 mov dword ptr [ebp - 0x4c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(ebx); }
  /* 0045c507 mov dword ptr [ebp - 0x48], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(ebx); }
  /* 0045c50a mov dword ptr [ebp - 0x44], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(ebx); }
  /* 0045c50d jne 0x45c522 */ if (!ZF_) goto L_0045c522;
  /* 0045c50f mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045c512 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c513 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0045c516 call 0x40c9c0 */ esp -= 4; M32(esp) = 0x45c51bu; SAVEALL; F_0040c9c0(c); ABI_CHECK(0x40c9c0u, 0x45c516u); RETCHK(0x45c51bu, 0x45c516u); LOADALL;
  /* 0045c51b mov eax, esi */ { eax = (u32)(esi); }
  /* 0045c51d jmp 0x45c5f2 */ goto L_0045c5f2;
L_0045c522:;
  /* 0045c522 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045c525 mov eax, esp */ { eax = (u32)(esp); }
  /* 0045c527 mov dword ptr [ebp - 0x40], esp */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(esp); }
  /* 0045c52a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c52b call 0x45c480 */ esp -= 4; M32(esp) = 0x45c530u; SAVEALL; F_0045c480(c); ABI_CHECK(0x45c480u, 0x45c52bu); RETCHK(0x45c530u, 0x45c52bu); LOADALL;
  /* 0045c530 mov eax, dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); eax = (u32)(M32(m_)); }
  /* 0045c533 mov ecx, dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 0045c536 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c537 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c538 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0045c53b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c53c call 0x45e8b0 */ esp -= 4; M32(esp) = 0x45c541u; SAVEALL; F_0045e8b0(c); ABI_CHECK(0x45e8b0u, 0x45c53cu); RETCHK(0x45c541u, 0x45c53cu); LOADALL;
  /* 0045c541 mov edi, dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); edi = (u32)(M32(m_)); }
  /* 0045c544 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 0045c547 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045c54a cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c54c je 0x45c5c5 */ if (ZF_) goto L_0045c5c5;
  /* 0045c54e lea edx, [ebp - 0x3c] */ edx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0045c551 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045c552 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045c554 call 0x45c640 */ esp -= 4; M32(esp) = 0x45c559u; SAVEALL; F_0045c640(c); ABI_CHECK(0x45c640u, 0x45c554u); RETCHK(0x45c559u, 0x45c554u); LOADALL;
  /* 0045c559 mov dword ptr [ebp - 0x5c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(ebx); }
  /* 0045c55c mov dword ptr [ebp - 0x58], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(ebx); }
  /* 0045c55f mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045c562 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045c565 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0045c569 mov eax, esp */ { eax = (u32)(esp); }
  /* 0045c56b mov dword ptr [ebp - 0x40], esp */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(esp); }
  /* 0045c56e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c56f lea ecx, [ebp - 0x60] */ ecx = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0045c572 call 0x40c9c0 */ esp -= 4; M32(esp) = 0x45c577u; SAVEALL; F_0040c9c0(c); ABI_CHECK(0x40c9c0u, 0x45c572u); RETCHK(0x45c577u, 0x45c572u); LOADALL;
  /* 0045c577 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0045c57a mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 0045c57d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c57e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c57f lea ebx, [ebp - 0x70] */ ebx = (u32)((u32)(ebp + 0xffffff90u));
  /* 0045c582 call 0x45e830 */ esp -= 4; M32(esp) = 0x45c587u; SAVEALL; F_0045e830(c); ABI_CHECK(0x45e830u, 0x45c582u); RETCHK(0x45c587u, 0x45c582u); LOADALL;
  /* 0045c587 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045c58a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c58b lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0045c58e mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0045c592 call 0x40ca80 */ esp -= 4; M32(esp) = 0x45c597u; SAVEALL; F_0040ca80(c); ABI_CHECK(0x40ca80u, 0x45c592u); RETCHK(0x45c597u, 0x45c592u); LOADALL;
  /* 0045c597 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0045c599 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0045c59d call 0x45c6a0 */ esp -= 4; M32(esp) = 0x45c5a2u; SAVEALL; F_0045c6a0(c); ABI_CHECK(0x45c6a0u, 0x45c59du); RETCHK(0x45c5a2u, 0x45c59du); LOADALL;
  /* 0045c5a2 lea edx, [ebp - 0x60] */ edx = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0045c5a5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045c5a6 lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0045c5a9 call 0x40ca80 */ esp -= 4; M32(esp) = 0x45c5aeu; SAVEALL; F_0040ca80(c); ABI_CHECK(0x40ca80u, 0x45c5a9u); RETCHK(0x45c5aeu, 0x45c5a9u); LOADALL;
  /* 0045c5ae lea esi, [ebp - 0x60] */ esi = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0045c5b1 call 0x45c6a0 */ esp -= 4; M32(esp) = 0x45c5b6u; SAVEALL; F_0045c6a0(c); ABI_CHECK(0x45c6a0u, 0x45c5b1u); RETCHK(0x45c5b6u, 0x45c5b1u); LOADALL;
  /* 0045c5b6 lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0045c5b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c5ba mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0045c5be call 0x45c140 */ esp -= 4; M32(esp) = 0x45c5c3u; SAVEALL; F_0045c140(c); ABI_CHECK(0x45c140u, 0x45c5beu); RETCHK(0x45c5c3u, 0x45c5beu); LOADALL;
  /* 0045c5c3 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0045c5c5:;
  /* 0045c5c5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045c5c8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c5c9 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0045c5cc call 0x40c9c0 */ esp -= 4; M32(esp) = 0x45c5d1u; SAVEALL; F_0040c9c0(c); ABI_CHECK(0x40c9c0u, 0x45c5ccu); RETCHK(0x45c5d1u, 0x45c5ccu); LOADALL;
  /* 0045c5d1 mov esi, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); esi = (u32)(M32(m_)); }
  /* 0045c5d4 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c5d6 je 0x45c5ef */ if (ZF_) goto L_0045c5ef;
  /* 0045c5d8 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045c5db mov edi, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); edi = (u32)(M32(m_)); }
  /* 0045c5de push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045c5df mov eax, esi */ { eax = (u32)(esi); }
  /* 0045c5e1 call 0x403f60 */ esp -= 4; M32(esp) = 0x45c5e6u; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x45c5e1u); RETCHK(0x45c5e6u, 0x45c5e1u); LOADALL;
  /* 0045c5e6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c5e7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c5ecu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c5e7u); RETCHK(0x45c5ecu, 0x45c5e7u); LOADALL;
  /* 0045c5ec add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c5ef:;
  /* 0045c5ef mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
L_0045c5f2:;
  /* 0045c5f2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045c5f5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045c5fc mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0045c5ff call 0x61af31 */ esp -= 4; M32(esp) = 0x45c604u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x45c5ffu); RETCHK(0x45c604u, 0x45c5ffu); LOADALL;
  /* 0045c604 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045c605 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045c606 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045c607 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045c609 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045c60a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045c610(CPU *c) {
  NATIVE_HOOK(0x45c610u) REGS; LOADALL;
L_0045c610:;
  /* 0045c610 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c614 jb 0x45c622 */ if (CF_) goto L_0045c622;
  /* 0045c616 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0045c619 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c61a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c61fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c61au); RETCHK(0x45c61fu, 0x45c61au); LOADALL;
  /* 0045c61f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c622:;
  /* 0045c622 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045c624 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0045c62b mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0045c62e mov byte ptr [esi + 4], al */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0045c631 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045c640(CPU *c) {
  NATIVE_HOOK(0x45c640u) REGS; LOADALL;
L_0045c640:;
  /* 0045c640 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045c641 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045c643 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045c649 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045c64b push 0x626838 */ { u32 v_ = 0x626838u; esp -= 4; M32(esp) = v_; }
  /* 0045c650 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c651 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045c658 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c659 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045c65c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045c65e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045c660 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0045c667 mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0045c66e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045c66f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0045c671 mov byte ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0045c675 call 0x404140 */ esp -= 4; M32(esp) = 0x45c67au; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x45c675u); RETCHK(0x45c67au, 0x45c675u); LOADALL;
  /* 0045c67a lea eax, [esi + 0x1c] */ eax = (u32)((u32)(esi + 0x1cu));
  /* 0045c67d lea ecx, [edi + 0x1c] */ ecx = (u32)((u32)(edi + 0x1cu));
  /* 0045c680 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c681 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0045c688 call 0x45d040 */ esp -= 4; M32(esp) = 0x45c68du; SAVEALL; F_0045d040(c); ABI_CHECK(0x45d040u, 0x45c688u); RETCHK(0x45c68du, 0x45c688u); LOADALL;
  /* 0045c68d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045c690 mov eax, esi */ { eax = (u32)(esi); }
  /* 0045c692 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045c699 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045c69a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045c69c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045c69d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045c6a0(CPU *c) {
  NATIVE_HOOK(0x45c6a0u) REGS; LOADALL;
L_0045c6a0:;
  /* 0045c6a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045c6a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045c6a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c6a4 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0045c6a7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045c6a9 je 0x45c6c5 */ if (ZF_) goto L_0045c6c5;
  /* 0045c6ab mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0045c6ae push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045c6af mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 0045c6b2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c6b3 call 0x403f60 */ esp -= 4; M32(esp) = 0x45c6b8u; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x45c6b3u); RETCHK(0x45c6b8u, 0x45c6b3u); LOADALL;
  /* 0045c6b8 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0045c6bb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045c6bc call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c6c1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c6bcu); RETCHK(0x45c6c1u, 0x45c6bcu); LOADALL;
  /* 0045c6c1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045c6c4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0045c6c5:;
  /* 0045c6c5 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0045c6cc mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0045c6d3 mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 0045c6da mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045c6dc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045c6dd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045c6e0(CPU *c) {
  NATIVE_HOOK(0x45c6e0u) REGS; LOADALL;
L_0045c6e0:;
  /* 0045c6e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045c6e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045c6e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045c6e5 push 0x61d028 */ { u32 v_ = 0x61d028u; esp -= 4; M32(esp) = v_; }
  /* 0045c6ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045c6f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c6f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045c6f8 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045c6fb mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0045c700 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045c701 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c702 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0045c704 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045c705 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0045c708 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0045c70b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045c70e mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0045c711 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0045c714 mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 0045c71b mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 0045c71e mov byte ptr [ebp - 0x2c], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045c721 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0045c724 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0045c728 mov esi, dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); esi = (u32)(M32(m_)); }
  /* 0045c72b cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c72d je 0x45c749 */ if (ZF_) goto L_0045c749;
  /* 0045c72f mov edx, dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); edx = (u32)(M32(m_)); }
  /* 0045c732 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045c734 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045c739 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045c73b sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045c73e mov eax, edx */ { eax = (u32)(edx); }
  /* 0045c740 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045c743 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045c745 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c747 ja 0x45c74e */ if (!(CF_|ZF_)) goto L_0045c74e;
L_0045c749:;
  /* 0045c749 call 0x446920 */ esp -= 4; M32(esp) = 0x45c74eu; SAVEALL; F_00446920(c); ABI_CHECK(0x446920u, 0x45c749u); RETCHK(0x45c74eu, 0x45c749u); LOADALL;
L_0045c74e:;
  /* 0045c74e imul ecx, ecx, 0x58 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x58u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045c751 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045c753 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045c755 add ecx, 0x3c */ { u32 a_ = ecx, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045c758 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045c759 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c75a lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0045c75d call 0x404140 */ esp -= 4; M32(esp) = 0x45c762u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x45c75du); RETCHK(0x45c762u, 0x45c75du); LOADALL;
  /* 0045c762 jmp 0x45c77c */ goto L_0045c77c;
L_0045c77c:;
  /* 0045c77c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045c77e mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0045c781 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045c782 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0045c785 mov dword ptr [edi + 0x18], 0xf */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0045c78c mov dword ptr [edi + 0x14], ebx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0045c78f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c790 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045c792 mov byte ptr [edi + 4], bl */ { const u32 m_ = (u32)(edi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045c795 call 0x404140 */ esp -= 4; M32(esp) = 0x45c79au; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x45c795u); RETCHK(0x45c79au, 0x45c795u); LOADALL;
  /* 0045c79a cmp dword ptr [ebp - 0x18], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c79e jb 0x45c7ac */ if (CF_) goto L_0045c7ac;
  /* 0045c7a0 mov ecx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ecx = (u32)(M32(m_)); }
  /* 0045c7a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c7a4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c7a9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c7a4u); RETCHK(0x45c7a9u, 0x45c7a4u); LOADALL;
  /* 0045c7a9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c7ac:;
  /* 0045c7ac mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045c7af mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045c7b6 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0045c7b9 mov eax, edi */ { eax = (u32)(edi); }
  /* 0045c7bb call 0x61af31 */ esp -= 4; M32(esp) = 0x45c7c0u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x45c7bbu); RETCHK(0x45c7c0u, 0x45c7bbu); LOADALL;
  /* 0045c7c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045c7c1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045c7c2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045c7c3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045c7c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045c7c6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0045c764(CPU *c) {
  NATIVE_HOOK(0x45c764u) REGS; LOADALL;
L_0045c764:;
  /* 0045c764 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0045c769 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0045c76c call 0x404590 */ esp -= 4; M32(esp) = 0x45c771u; SAVEALL; F_00404590(c); ABI_CHECK(0x404590u, 0x45c76cu); RETCHK(0x45c771u, 0x45c76cu); LOADALL;
  /* 0045c771 mov eax, 0x45c777 */ { eax = (u32)(0x45c777u); }
  /* 0045c776 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045c777(CPU *c) {
  NATIVE_HOOK(0x45c777u) REGS; LOADALL;
L_0045c777:;
  /* 0045c777 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0045c77a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0045c77c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045c77e mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0045c781 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045c782 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0045c785 mov dword ptr [edi + 0x18], 0xf */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0045c78c mov dword ptr [edi + 0x14], ebx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0045c78f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c790 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045c792 mov byte ptr [edi + 4], bl */ { const u32 m_ = (u32)(edi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0045c795 call 0x404140 */ esp -= 4; M32(esp) = 0x45c79au; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x45c795u); RETCHK(0x45c79au, 0x45c795u); LOADALL;
  /* 0045c79a cmp dword ptr [ebp - 0x18], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c79e jb 0x45c7ac */ if (CF_) goto L_0045c7ac;
  /* 0045c7a0 mov ecx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ecx = (u32)(M32(m_)); }
  /* 0045c7a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c7a4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c7a9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c7a4u); RETCHK(0x45c7a9u, 0x45c7a4u); LOADALL;
  /* 0045c7a9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c7ac:;
  /* 0045c7ac mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045c7af mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045c7b6 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0045c7b9 mov eax, edi */ { eax = (u32)(edi); }
  /* 0045c7bb call 0x61af31 */ esp -= 4; M32(esp) = 0x45c7c0u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x45c7bbu); RETCHK(0x45c7c0u, 0x45c7bbu); LOADALL;
  /* 0045c7c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045c7c1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045c7c2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045c7c3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045c7c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045c7c6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0045c7d0(CPU *c) {
  NATIVE_HOOK(0x45c7d0u) REGS; LOADALL;
L_0045c7d0:;
  /* 0045c7d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045c7d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045c7d3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045c7d9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045c7db push 0x626838 */ { u32 v_ = 0x626838u; esp -= 4; M32(esp) = v_; }
  /* 0045c7e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c7e1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045c7e8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c7e9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045c7ec xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045c7ee mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0045c7f5 mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0045c7f8 mov byte ptr [esi + 4], al */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0045c7fb push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045c7fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c7fe mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0045c801 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0045c804 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c805 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0045c807 call 0x404140 */ esp -= 4; M32(esp) = 0x45c80cu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x45c807u); RETCHK(0x45c80cu, 0x45c807u); LOADALL;
  /* 0045c80c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045c80f mov eax, esi */ { eax = (u32)(esi); }
  /* 0045c811 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045c818 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045c819 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045c81b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045c81c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0045c820(CPU *c) {
  NATIVE_HOOK(0x45c820u) REGS; LOADALL;
L_0045c820:;
  /* 0045c820 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045c821 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045c823 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045c825 push 0x620882 */ { u32 v_ = 0x620882u; esp -= 4; M32(esp) = v_; }
  /* 0045c82a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045c830 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c831 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045c838 sub esp, 0x64 */ { u32 a_ = esp, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045c83b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0045c840 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045c841 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c842 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0045c844 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045c845 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0045c848 mov edi, edx */ { edi = (u32)(edx); }
  /* 0045c84a mov dword ptr [ebp - 0x40], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ebx); }
  /* 0045c84d sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045c850 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0045c853 mov eax, esp */ { eax = (u32)(esp); }
  /* 0045c855 mov dword ptr [ebp - 0x40], esp */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(esp); }
  /* 0045c858 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c859 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0045c85b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c85c mov dword ptr [ebp - 0x5c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(esi); }
  /* 0045c85f mov dword ptr [ebp - 0x58], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(ebx); }
  /* 0045c862 mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0045c865 call 0x45c7d0 */ esp -= 4; M32(esp) = 0x45c86au; SAVEALL; F_0045c7d0(c); ABI_CHECK(0x45c7d0u, 0x45c865u); RETCHK(0x45c86au, 0x45c865u); LOADALL;
  /* 0045c86a mov eax, dword ptr [edi + 0x70] */ { const u32 m_ = (u32)(edi + 0x70u); eax = (u32)(M32(m_)); }
  /* 0045c86d mov ecx, dword ptr [edi + 0x6c] */ { const u32 m_ = (u32)(edi + 0x6cu); ecx = (u32)(M32(m_)); }
  /* 0045c870 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c871 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c872 lea edx, [ebp - 0x40] */ edx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0045c875 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045c876 call 0x45e8b0 */ esp -= 4; M32(esp) = 0x45c87bu; SAVEALL; F_0045e8b0(c); ABI_CHECK(0x45e8b0u, 0x45c876u); RETCHK(0x45c87bu, 0x45c876u); LOADALL;
  /* 0045c87b mov eax, dword ptr [edi + 0x70] */ { const u32 m_ = (u32)(edi + 0x70u); eax = (u32)(M32(m_)); }
  /* 0045c87e mov edi, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); edi = (u32)(M32(m_)); }
  /* 0045c881 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045c884 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c886 je 0x45c932 */ if (ZF_) goto L_0045c932;
  /* 0045c88c lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0045c88f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c890 call 0x45c980 */ esp -= 4; M32(esp) = 0x45c895u; SAVEALL; F_0045c980(c); ABI_CHECK(0x45c980u, 0x45c890u); RETCHK(0x45c895u, 0x45c890u); LOADALL;
  /* 0045c895 mov dword ptr [ebp - 0x4c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(ebx); }
  /* 0045c898 mov dword ptr [ebp - 0x48], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(ebx); }
  /* 0045c89b mov dword ptr [ebp - 0x44], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(ebx); }
  /* 0045c89e sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045c8a1 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0045c8a5 mov eax, esp */ { eax = (u32)(esp); }
  /* 0045c8a7 mov dword ptr [ebp - 0x40], esp */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(esp); }
  /* 0045c8aa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c8ab lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0045c8ae call 0x40c9c0 */ esp -= 4; M32(esp) = 0x45c8b3u; SAVEALL; F_0040c9c0(c); ABI_CHECK(0x40c9c0u, 0x45c8aeu); RETCHK(0x45c8b3u, 0x45c8aeu); LOADALL;
  /* 0045c8b3 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0045c8b6 mov edx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edx = (u32)(M32(m_)); }
  /* 0045c8b9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c8ba push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045c8bb lea ebx, [ebp - 0x70] */ ebx = (u32)((u32)(ebp + 0xffffff90u));
  /* 0045c8be call 0x45e940 */ esp -= 4; M32(esp) = 0x45c8c3u; SAVEALL; F_0045e940(c); ABI_CHECK(0x45e940u, 0x45c8beu); RETCHK(0x45c8c3u, 0x45c8beu); LOADALL;
  /* 0045c8c3 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045c8c6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c8c7 lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0045c8ca mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0045c8ce call 0x40ca80 */ esp -= 4; M32(esp) = 0x45c8d3u; SAVEALL; F_0040ca80(c); ABI_CHECK(0x40ca80u, 0x45c8ceu); RETCHK(0x45c8d3u, 0x45c8ceu); LOADALL;
  /* 0045c8d3 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0045c8d7 mov eax, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); eax = (u32)(M32(m_)); }
  /* 0045c8da test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045c8dc je 0x45c8f6 */ if (ZF_) goto L_0045c8f6;
  /* 0045c8de mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045c8e1 mov edi, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); edi = (u32)(M32(m_)); }
  /* 0045c8e4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c8e5 call 0x403f60 */ esp -= 4; M32(esp) = 0x45c8eau; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x45c8e5u); RETCHK(0x45c8eau, 0x45c8e5u); LOADALL;
  /* 0045c8ea mov edx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); edx = (u32)(M32(m_)); }
  /* 0045c8ed push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045c8ee call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c8f3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c8eeu); RETCHK(0x45c8f3u, 0x45c8eeu); LOADALL;
  /* 0045c8f3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c8f6:;
  /* 0045c8f6 lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0045c8f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c8fa lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0045c8fd call 0x40ca80 */ esp -= 4; M32(esp) = 0x45c902u; SAVEALL; F_0040ca80(c); ABI_CHECK(0x40ca80u, 0x45c8fdu); RETCHK(0x45c902u, 0x45c8fdu); LOADALL;
  /* 0045c902 mov esi, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); esi = (u32)(M32(m_)); }
  /* 0045c905 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045c907 je 0x45c920 */ if (ZF_) goto L_0045c920;
  /* 0045c909 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045c90c mov edi, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); edi = (u32)(M32(m_)); }
  /* 0045c90f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045c910 mov eax, esi */ { eax = (u32)(esi); }
  /* 0045c912 call 0x403f60 */ esp -= 4; M32(esp) = 0x45c917u; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x45c912u); RETCHK(0x45c917u, 0x45c912u); LOADALL;
  /* 0045c917 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c918 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c91du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c918u); RETCHK(0x45c91du, 0x45c918u); LOADALL;
  /* 0045c91d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045c920:;
  /* 0045c920 lea edx, [ebp - 0x3c] */ edx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0045c923 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045c924 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0045c928 call 0x45c260 */ esp -= 4; M32(esp) = 0x45c92du; SAVEALL; F_0045c260(c); ABI_CHECK(0x45c260u, 0x45c928u); RETCHK(0x45c92du, 0x45c928u); LOADALL;
  /* 0045c92d mov esi, dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); esi = (u32)(M32(m_)); }
  /* 0045c930 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0045c932:;
  /* 0045c932 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0045c935 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045c936 lea ecx, [ebp - 0x60] */ ecx = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0045c939 call 0x40c9c0 */ esp -= 4; M32(esp) = 0x45c93eu; SAVEALL; F_0040c9c0(c); ABI_CHECK(0x40c9c0u, 0x45c939u); RETCHK(0x45c93eu, 0x45c939u); LOADALL;
  /* 0045c93e cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045c940 je 0x45c95e */ if (ZF_) goto L_0045c95e;
  /* 0045c942 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045c945 mov edi, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); edi = (u32)(M32(m_)); }
  /* 0045c948 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c949 mov eax, esi */ { eax = (u32)(esi); }
  /* 0045c94b call 0x403f60 */ esp -= 4; M32(esp) = 0x45c950u; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x45c94bu); RETCHK(0x45c950u, 0x45c94bu); LOADALL;
  /* 0045c950 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c951 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45c956u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45c951u); RETCHK(0x45c956u, 0x45c951u); LOADALL;
  /* 0045c956 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045c959 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045c95c jmp 0x45c960 */ goto L_0045c960;
L_0045c95e:;
  /* 0045c95e mov eax, edi */ { eax = (u32)(edi); }
L_0045c960:;
  /* 0045c960 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045c963 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045c96a mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0045c96d call 0x61af31 */ esp -= 4; M32(esp) = 0x45c972u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x45c96du); RETCHK(0x45c972u, 0x45c96du); LOADALL;
  /* 0045c972 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045c973 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045c974 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045c975 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045c977 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045c978 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045c980(CPU *c) {
  NATIVE_HOOK(0x45c980u) REGS; LOADALL;
L_0045c980:;
  /* 0045c980 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045c981 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045c983 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045c989 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045c98b push 0x626838 */ { u32 v_ = 0x626838u; esp -= 4; M32(esp) = v_; }
  /* 0045c990 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c991 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045c998 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045c999 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045c99c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045c99e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045c9a0 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0045c9a7 mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0045c9ae push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045c9af mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0045c9b1 mov byte ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0045c9b5 call 0x404140 */ esp -= 4; M32(esp) = 0x45c9bau; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x45c9b5u); RETCHK(0x45c9bau, 0x45c9b5u); LOADALL;
  /* 0045c9ba lea eax, [esi + 0x1c] */ eax = (u32)((u32)(esi + 0x1cu));
  /* 0045c9bd lea ecx, [edi + 0x1c] */ ecx = (u32)((u32)(edi + 0x1cu));
  /* 0045c9c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c9c1 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0045c9c8 call 0x45d190 */ esp -= 4; M32(esp) = 0x45c9cdu; SAVEALL; F_0045d190(c); ABI_CHECK(0x45d190u, 0x45c9c8u); RETCHK(0x45c9cdu, 0x45c9c8u); LOADALL;
  /* 0045c9cd mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045c9d0 mov eax, esi */ { eax = (u32)(esi); }
  /* 0045c9d2 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045c9d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045c9da mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045c9dc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045c9dd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045c9e0(CPU *c) {
  NATIVE_HOOK(0x45c9e0u) REGS; LOADALL;
L_0045c9e0:;
  /* 0045c9e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045c9e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045c9e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045c9e5 push 0x62084a */ { u32 v_ = 0x62084au; esp -= 4; M32(esp) = v_; }
  /* 0045c9ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045c9f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045c9f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045c9f8 sub esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045c9fb mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0045ca00 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045ca01 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045ca02 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045ca05 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045ca06 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0045ca09 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045ca0c mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0045ca0f mov eax, esp */ { eax = (u32)(esp); }
  /* 0045ca11 mov dword ptr [ebp - 0x44], esp */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esp); }
  /* 0045ca14 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045ca15 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045ca16 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 0045ca18 call 0x45c7d0 */ esp -= 4; M32(esp) = 0x45ca1du; SAVEALL; F_0045c7d0(c); ABI_CHECK(0x45c7d0u, 0x45ca18u); RETCHK(0x45ca1du, 0x45ca18u); LOADALL;
  /* 0045ca1d mov eax, dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); eax = (u32)(M32(m_)); }
  /* 0045ca20 mov ecx, dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); ecx = (u32)(M32(m_)); }
  /* 0045ca23 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045ca24 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045ca25 lea edx, [ebp + 8] */ edx = (u32)((u32)(ebp + 0x8u));
  /* 0045ca28 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045ca29 call 0x45e8b0 */ esp -= 4; M32(esp) = 0x45ca2eu; SAVEALL; F_0045e8b0(c); ABI_CHECK(0x45e8b0u, 0x45ca29u); RETCHK(0x45ca2eu, 0x45ca29u); LOADALL;
  /* 0045ca2e mov esi, dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); esi = (u32)(M32(m_)); }
  /* 0045ca31 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0045ca34 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045ca37 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045ca39 je 0x45cab9 */ if (ZF_) goto L_0045cab9;
  /* 0045ca3b lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0045ca3e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045ca3f call 0x45c980 */ esp -= 4; M32(esp) = 0x45ca44u; SAVEALL; F_0045c980(c); ABI_CHECK(0x45c980u, 0x45ca3fu); RETCHK(0x45ca44u, 0x45ca3fu); LOADALL;
  /* 0045ca44 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0045ca4b mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0045ca4f mov esi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); esi = (u32)(M32(m_)); }
  /* 0045ca52 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045ca54 je 0x45ca70 */ if (ZF_) goto L_0045ca70;
  /* 0045ca56 mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 0045ca59 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045ca5b mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 0045ca60 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045ca62 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045ca65 mov eax, edx */ { eax = (u32)(edx); }
  /* 0045ca67 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045ca6a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045ca6c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045ca6e ja 0x45ca99 */ if (!(CF_|ZF_)) goto L_0045ca99;
L_0045ca70:;
  /* 0045ca70 call 0x446920 */ esp -= 4; M32(esp) = 0x45ca75u; SAVEALL; F_00446920(c); ABI_CHECK(0x446920u, 0x45ca70u); RETCHK(0x45ca75u, 0x45ca70u); LOADALL;
  /* 0045ca75 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0045ca78 mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 0045ca7e mov dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0045ca85 mov eax, 0x45ca8b */ { eax = (u32)(0x45ca8bu); }
  /* 0045ca8a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045ca99:;
  /* 0045ca99 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0045ca9c imul ebx, ebx, 0x44 */ { s64 p_ = (s64)(s32)ebx * (s64)(s32)0x44u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045ca9f mov edx, dword ptr [ebx + esi + 0x3c] */ { const u32 m_ = (u32)(ebx + esi + 0x3cu); edx = (u32)(M32(m_)); }
  /* 0045caa3 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 0045caa5 mov eax, dword ptr [ebx + esi + 0x40] */ { const u32 m_ = (u32)(ebx + esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 0045caa9 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0045caac push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045caad mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0045cab0 call 0x45c260 */ esp -= 4; M32(esp) = 0x45cab5u; SAVEALL; F_0045c260(c); ABI_CHECK(0x45c260u, 0x45cab0u); RETCHK(0x45cab5u, 0x45cab0u); LOADALL;
  /* 0045cab5 mov eax, edi */ { eax = (u32)(edi); }
  /* 0045cab7 jmp 0x45cac9 */ goto L_0045cac9;
L_0045cab9:;
  /* 0045cab9 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0045cabc mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 0045cac2 mov dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x0u); }
L_0045cac9:;
  /* 0045cac9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045cacc mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045cad3 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0045cad6 call 0x61af31 */ esp -= 4; M32(esp) = 0x45cadbu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x45cad6u); RETCHK(0x45cadbu, 0x45cad6u); LOADALL;
  /* 0045cadb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045cadc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045cadd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045cade mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045cae0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045cae1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0045ca75(CPU *c) {
  NATIVE_HOOK(0x45ca75u) REGS; LOADALL;
L_0045ca75:;
  /* 0045ca75 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0045ca78 mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 0045ca7e mov dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0045ca85 mov eax, 0x45ca8b */ { eax = (u32)(0x45ca8bu); }
  /* 0045ca8a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045ca8b(CPU *c) {
  NATIVE_HOOK(0x45ca8bu) REGS; LOADALL;
L_0045ca8b:;
  /* 0045ca8b lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0045ca8e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045ca8f call 0x45c260 */ esp -= 4; M32(esp) = 0x45ca94u; SAVEALL; F_0045c260(c); ABI_CHECK(0x45c260u, 0x45ca8fu); RETCHK(0x45ca94u, 0x45ca8fu); LOADALL;
  /* 0045ca94 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0045ca97 jmp 0x45cac9 */ goto L_0045cac9;
L_0045cac9:;
  /* 0045cac9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045cacc mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045cad3 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0045cad6 call 0x61af31 */ esp -= 4; M32(esp) = 0x45cadbu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x45cad6u); RETCHK(0x45cadbu, 0x45cad6u); LOADALL;
  /* 0045cadb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045cadc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045cadd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045cade mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045cae0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045cae1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0045caf0(CPU *c) {
  NATIVE_HOOK(0x45caf0u) REGS; LOADALL;
L_0045caf0:;
  /* 0045caf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045caf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045caf3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045caf5 push 0x622a33 */ { u32 v_ = 0x622a33u; esp -= 4; M32(esp) = v_; }
  /* 0045cafa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045cb00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045cb01 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045cb08 sub esp, 0xb0 */ { u32 a_ = esp, b_ = 0xb0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045cb0e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0045cb13 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045cb14 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0045cb16 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045cb18 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0045cb1b jne 0x45cb24 */ if (!ZF_) goto L_0045cb24;
  /* 0045cb1d xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0045cb1f jmp 0x45d01f */ goto L_0045d01f;
L_0045cb24:;
  /* 0045cb24 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045cb25 mov ebx, 0xf */ { ebx = (u32)(0xfu); }
  /* 0045cb2a mov dword ptr [ebp - 0x6c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(ebx); }
  /* 0045cb2d mov dword ptr [ebp - 0x70], esi */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(esi); }
  /* 0045cb30 mov byte ptr [ebp - 0x80], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M8(m_) = (u8)(0x0u); }
  /* 0045cb34 lea eax, [ebp - 0x84] */ eax = (u32)((u32)(ebp + 0xffffff7cu));
  /* 0045cb3a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045cb3b mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0045cb3e call 0x41b430 */ esp -= 4; M32(esp) = 0x45cb43u; SAVEALL; F_0041b430(c); ABI_CHECK(0x41b430u, 0x45cb3eu); RETCHK(0x45cb43u, 0x45cb3eu); LOADALL;
  /* 0045cb43 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0045cb45 mov eax, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); eax = (u32)(M32(m_)); }
  /* 0045cb48 jne 0x45cb62 */ if (!ZF_) goto L_0045cb62;
  /* 0045cb4a cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045cb4d jb 0x45cb5b */ if (CF_) goto L_0045cb5b;
  /* 0045cb4f mov ecx, dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); ecx = (u32)(M32(m_)); }
  /* 0045cb52 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045cb53 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45cb58u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45cb53u); RETCHK(0x45cb58u, 0x45cb53u); LOADALL;
  /* 0045cb58 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045cb5b:;
  /* 0045cb5b xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0045cb5d jmp 0x45d01e */ goto L_0045d01e;
L_0045cb62:;
  /* 0045cb62 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045cb65 mov eax, dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); eax = (u32)(M32(m_)); }
  /* 0045cb68 jae 0x45cb6d */ if (!CF_) goto L_0045cb6d;
  /* 0045cb6a lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
L_0045cb6d:;
  /* 0045cb6d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045cb6e mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0045cb71 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0045cb73 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045cb74 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045cb75 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045cb76 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0045cb78 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x45cb7bu; SAVEALL; call_ind(c, t_); RETCHK(0x45cb7bu, 0x45cb78u); LOADALL; }
  /* 0045cb7b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045cb7d jne 0x45cb98 */ if (!ZF_) goto L_0045cb98;
  /* 0045cb7f cmp dword ptr [ebp - 0x6c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff94u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045cb83 jb 0x45cb91 */ if (CF_) goto L_0045cb91;
  /* 0045cb85 mov eax, dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); eax = (u32)(M32(m_)); }
  /* 0045cb88 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045cb89 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45cb8eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45cb89u); RETCHK(0x45cb8eu, 0x45cb89u); LOADALL;
  /* 0045cb8e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045cb91:;
  /* 0045cb91 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0045cb93 jmp 0x45d01d */ goto L_0045d01d;
L_0045cb98:;
  /* 0045cb98 mov eax, edi */ { eax = (u32)(edi); }
  /* 0045cb9a call 0x560c60 */ esp -= 4; M32(esp) = 0x45cb9fu; SAVEALL; F_00560c60(c); ABI_CHECK(0x560c60u, 0x45cb9au); RETCHK(0x45cb9fu, 0x45cb9au); LOADALL;
  /* 0045cb9f mov edi, 0x6489a0 */ { edi = (u32)(0x6489a0u); }
  /* 0045cba4 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0045cba6 mov dword ptr [ebp - 0xb8], eax */ { const u32 m_ = (u32)(ebp + 0xffffff48u); M32(m_) = (u32)(eax); }
  /* 0045cbac call 0x560c90 */ esp -= 4; M32(esp) = 0x45cbb1u; SAVEALL; F_00560c90(c); ABI_CHECK(0x560c90u, 0x45cbacu); RETCHK(0x45cbb1u, 0x45cbacu); LOADALL;
  /* 0045cbb1 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045cbb3 je 0x45cd3d */ if (ZF_) goto L_0045cd3d;
  /* 0045cbb9 call 0x560c60 */ esp -= 4; M32(esp) = 0x45cbbeu; SAVEALL; F_00560c60(c); ABI_CHECK(0x560c60u, 0x45cbb9u); RETCHK(0x45cbbeu, 0x45cbb9u); LOADALL;
  /* 0045cbbe mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0045cbc0 cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045cbc2 mov dword ptr [ebp - 0xb4], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); M32(m_) = (u32)(ebx); }
  /* 0045cbc8 je 0x45cd38 */ if (ZF_) goto L_0045cd38;
  /* 0045cbce jmp 0x45cbe0 */ goto L_0045cbe0;
L_0045cbd0:;
  /* 0045cbd0 mov ebx, dword ptr [ebp - 0xb4] */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); ebx = (u32)(M32(m_)); }
  /* 0045cbd6 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0045cbd8 jmp 0x45cbe0 */ goto L_0045cbe0;
L_0045cbe0:;
  /* 0045cbe0 mov dword ptr [ebp - 0x98], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(0xfu); }
  /* 0045cbea mov dword ptr [ebp - 0x9c], esi */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(esi); }
  /* 0045cbf0 mov byte ptr [ebp - 0xac], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff54u); M8(m_) = (u8)(0x0u); }
  /* 0045cbf7 mov dword ptr [ebp - 0x90], esi */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M32(m_) = (u32)(esi); }
  /* 0045cbfd mov dword ptr [ebp - 0x8c], esi */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M32(m_) = (u32)(esi); }
  /* 0045cc03 mov dword ptr [ebp - 0x88], esi */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(esi); }
  /* 0045cc09 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0045cc0d mov esi, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); esi = (u32)(M32(m_)); }
  /* 0045cc10 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045cc13 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0045cc19 call 0x45c330 */ esp -= 4; M32(esp) = 0x45cc1eu; SAVEALL; F_0045c330(c); ABI_CHECK(0x45c330u, 0x45cc19u); RETCHK(0x45cc1eu, 0x45cc19u); LOADALL;
  /* 0045cc1e mov edi, 0x648994 */ { edi = (u32)(0x648994u); }
  /* 0045cc23 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0045cc25 call 0x560c90 */ esp -= 4; M32(esp) = 0x45cc2au; SAVEALL; F_00560c90(c); ABI_CHECK(0x560c90u, 0x45cc25u); RETCHK(0x45cc2au, 0x45cc25u); LOADALL;
  /* 0045cc2a mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0045cc2c test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045cc2e je 0x45ccfc */ if (ZF_) goto L_0045ccfc;
L_0045cc34:;
  /* 0045cc34 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0045cc36 mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 0045cc3b mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 0045cc3e mov dword ptr [ebp - 0x34], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ecx); }
  /* 0045cc41 mov byte ptr [ebp - 0x44], cl */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0045cc44 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0045cc47 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0045cc4a mov byte ptr [ebp - 0x28], cl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0045cc4d push 0x648990 */ { u32 v_ = 0x648990u; esp -= 4; M32(esp) = v_; }
  /* 0045cc52 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0045cc54 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0045cc58 call 0x560fd0 */ esp -= 4; M32(esp) = 0x45cc5du; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x45cc58u); RETCHK(0x45cc5du, 0x45cc58u); LOADALL;
  /* 0045cc5d mov dword ptr [ebp - 0x4c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(eax); }
  /* 0045cc60 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045cc61 mov eax, 0x648988 */ { eax = (u32)(0x648988u); }
  /* 0045cc66 call 0x560ed0 */ esp -= 4; M32(esp) = 0x45cc6bu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x45cc66u); RETCHK(0x45cc6bu, 0x45cc66u); LOADALL;
  /* 0045cc6b mov esi, eax */ { esi = (u32)(eax); }
  /* 0045cc6d lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0045cc70 call 0x45c330 */ esp -= 4; M32(esp) = 0x45cc75u; SAVEALL; F_0045c330(c); ABI_CHECK(0x45c330u, 0x45cc70u); RETCHK(0x45cc75u, 0x45cc70u); LOADALL;
  /* 0045cc75 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045cc76 mov eax, 0x648980 */ { eax = (u32)(0x648980u); }
  /* 0045cc7b call 0x560ed0 */ esp -= 4; M32(esp) = 0x45cc80u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x45cc7bu); RETCHK(0x45cc80u, 0x45cc7bu); LOADALL;
  /* 0045cc80 mov esi, eax */ { esi = (u32)(eax); }
  /* 0045cc82 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0045cc85 call 0x45c330 */ esp -= 4; M32(esp) = 0x45cc8au; SAVEALL; F_0045c330(c); ABI_CHECK(0x45c330u, 0x45cc85u); RETCHK(0x45cc8au, 0x45cc85u); LOADALL;
  /* 0045cc8a lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0045cc8d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045cc8e lea eax, [ebp - 0x94] */ eax = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0045cc94 call 0x45d100 */ esp -= 4; M32(esp) = 0x45cc99u; SAVEALL; F_0045d100(c); ABI_CHECK(0x45d100u, 0x45cc94u); RETCHK(0x45cc99u, 0x45cc94u); LOADALL;
  /* 0045cc99 mov edi, 0x648994 */ { edi = (u32)(0x648994u); }
  /* 0045cc9e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0045cca0 call 0x560d00 */ esp -= 4; M32(esp) = 0x45cca5u; SAVEALL; F_00560d00(c); ABI_CHECK(0x560d00u, 0x45cca0u); RETCHK(0x45cca5u, 0x45cca0u); LOADALL;
  /* 0045cca5 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0045cca7 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0045ccab mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0045ccae mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0045ccb3 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045ccb5 jb 0x45ccc3 */ if (CF_) goto L_0045ccc3;
  /* 0045ccb7 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 0045ccba push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045ccbb call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45ccc0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45ccbbu); RETCHK(0x45ccc0u, 0x45ccbbu); LOADALL;
  /* 0045ccc0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045ccc3:;
  /* 0045ccc3 mov eax, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 0045ccc6 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0045ccc8 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045ccca mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0045ccd1 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 0045ccd4 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0045ccd8 jb 0x45cce6 */ if (CF_) goto L_0045cce6;
  /* 0045ccda mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 0045ccdd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045ccde call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45cce3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45ccdeu); RETCHK(0x45cce3u, 0x45ccdeu); LOADALL;
  /* 0045cce3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045cce6:;
  /* 0045cce6 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045cce8 mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 0045ccef mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 0045ccf2 mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 0045ccf6 jne 0x45cc34 */ if (!ZF_) goto L_0045cc34;
L_0045ccfc:;
  /* 0045ccfc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045ccff lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0045cd05 add eax, 0x48 */ { u32 a_ = eax, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045cd08 call 0x45d2e0 */ esp -= 4; M32(esp) = 0x45cd0du; SAVEALL; F_0045d2e0(c); ABI_CHECK(0x45d2e0u, 0x45cd08u); RETCHK(0x45cd0du, 0x45cd08u); LOADALL;
  /* 0045cd0d mov eax, dword ptr [ebp - 0xb4] */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); eax = (u32)(M32(m_)); }
  /* 0045cd13 call 0x560cd0 */ esp -= 4; M32(esp) = 0x45cd18u; SAVEALL; F_00560cd0(c); ABI_CHECK(0x560cd0u, 0x45cd13u); RETCHK(0x45cd18u, 0x45cd13u); LOADALL;
  /* 0045cd18 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0045cd1e mov esi, eax */ { esi = (u32)(eax); }
  /* 0045cd20 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045cd21 mov dword ptr [ebp - 0xb4], esi */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); M32(m_) = (u32)(esi); }
  /* 0045cd27 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0045cd2b call 0x45c140 */ esp -= 4; M32(esp) = 0x45cd30u; SAVEALL; F_0045c140(c); ABI_CHECK(0x45c140u, 0x45cd2bu); RETCHK(0x45cd30u, 0x45cd2bu); LOADALL;
  /* 0045cd30 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045cd32 jne 0x45cbd0 */ if (!ZF_) goto L_0045cbd0;
L_0045cd38:;
  /* 0045cd38 mov ebx, 0xf */ { ebx = (u32)(0xfu); }
L_0045cd3d:;
  /* 0045cd3d mov ecx, dword ptr [ebp - 0xb8] */ { const u32 m_ = (u32)(ebp + 0xffffff48u); ecx = (u32)(M32(m_)); }
  /* 0045cd43 mov edi, 0x648978 */ { edi = (u32)(0x648978u); }
  /* 0045cd48 call 0x560c90 */ esp -= 4; M32(esp) = 0x45cd4du; SAVEALL; F_00560c90(c); ABI_CHECK(0x560c90u, 0x45cd48u); RETCHK(0x45cd4du, 0x45cd48u); LOADALL;
  /* 0045cd4d cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045cd4f je 0x45ce3c */ if (ZF_) goto L_0045ce3c;
  /* 0045cd55 mov edi, 0x645588 */ { edi = (u32)(0x645588u); }
  /* 0045cd5a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0045cd5c call 0x560c90 */ esp -= 4; M32(esp) = 0x45cd61u; SAVEALL; F_00560c90(c); ABI_CHECK(0x560c90u, 0x45cd5cu); RETCHK(0x45cd61u, 0x45cd5cu); LOADALL;
  /* 0045cd61 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045cd63 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045cd65 mov dword ptr [ebp - 0xb4], edi */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); M32(m_) = (u32)(edi); }
  /* 0045cd6b je 0x45ce3c */ if (ZF_) goto L_0045ce3c;
  /* 0045cd71 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045cd74 add edx, 0x58 */ { u32 a_ = edx, b_ = 0x58u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045cd77 mov dword ptr [ebp - 0xbc], edx */ { const u32 m_ = (u32)(ebp + 0xffffff44u); M32(m_) = (u32)(edx); }
  /* 0045cd7d jmp 0x45cd90 */ goto L_0045cd90;
L_0045cd7f:;
  /* 0045cd7f mov edi, dword ptr [ebp - 0xb4] */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); edi = (u32)(M32(m_)); }
  /* 0045cd85 mov ebx, 0xf */ { ebx = (u32)(0xfu); }
  /* 0045cd8a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0045cd90:;
  /* 0045cd90 mov dword ptr [ebp - 0x4c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(ebx); }
  /* 0045cd93 mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 0045cd96 mov byte ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M8(m_) = (u8)(0x0u); }
  /* 0045cd9a mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 0045cd9d mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 0045cda0 mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 0045cda4 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0045cda7 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 0045cdaa mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0045cdae push 0x648990 */ { u32 v_ = 0x648990u; esp -= 4; M32(esp) = v_; }
  /* 0045cdb3 mov eax, edi */ { eax = (u32)(edi); }
  /* 0045cdb5 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 0045cdb9 call 0x560fd0 */ esp -= 4; M32(esp) = 0x45cdbeu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x45cdb9u); RETCHK(0x45cdbeu, 0x45cdb9u); LOADALL;
  /* 0045cdbe mov dword ptr [ebp - 0x68], eax */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(eax); }
  /* 0045cdc1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045cdc2 mov eax, 0x648988 */ { eax = (u32)(0x648988u); }
  /* 0045cdc7 call 0x560ed0 */ esp -= 4; M32(esp) = 0x45cdccu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x45cdc7u); RETCHK(0x45cdccu, 0x45cdc7u); LOADALL;
  /* 0045cdcc mov esi, eax */ { esi = (u32)(eax); }
  /* 0045cdce lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0045cdd1 call 0x45c330 */ esp -= 4; M32(esp) = 0x45cdd6u; SAVEALL; F_0045c330(c); ABI_CHECK(0x45c330u, 0x45cdd1u); RETCHK(0x45cdd6u, 0x45cdd1u); LOADALL;
  /* 0045cdd6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045cdd7 mov eax, 0x64896c */ { eax = (u32)(0x64896cu); }
  /* 0045cddc call 0x560ed0 */ esp -= 4; M32(esp) = 0x45cde1u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x45cddcu); RETCHK(0x45cde1u, 0x45cddcu); LOADALL;
  /* 0045cde1 mov esi, eax */ { esi = (u32)(eax); }
  /* 0045cde3 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0045cde6 call 0x45c330 */ esp -= 4; M32(esp) = 0x45cdebu; SAVEALL; F_0045c330(c); ABI_CHECK(0x45c330u, 0x45cde6u); RETCHK(0x45cdebu, 0x45cde6u); LOADALL;
  /* 0045cdeb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045cdec mov eax, 0x648980 */ { eax = (u32)(0x648980u); }
  /* 0045cdf1 call 0x560ed0 */ esp -= 4; M32(esp) = 0x45cdf6u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x45cdf1u); RETCHK(0x45cdf6u, 0x45cdf1u); LOADALL;
  /* 0045cdf6 mov esi, eax */ { esi = (u32)(eax); }
  /* 0045cdf8 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0045cdfb call 0x45c330 */ esp -= 4; M32(esp) = 0x45ce00u; SAVEALL; F_0045c330(c); ABI_CHECK(0x45c330u, 0x45cdfbu); RETCHK(0x45ce00u, 0x45cdfbu); LOADALL;
  /* 0045ce00 mov eax, dword ptr [ebp - 0xbc] */ { const u32 m_ = (u32)(ebp + 0xffffff44u); eax = (u32)(M32(m_)); }
  /* 0045ce06 lea ebx, [ebp - 0x68] */ ebx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045ce09 call 0x45d3a0 */ esp -= 4; M32(esp) = 0x45ce0eu; SAVEALL; F_0045d3a0(c); ABI_CHECK(0x45d3a0u, 0x45ce09u); RETCHK(0x45ce0eu, 0x45ce09u); LOADALL;
  /* 0045ce0e mov ecx, dword ptr [ebp - 0xb4] */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); ecx = (u32)(M32(m_)); }
  /* 0045ce14 mov edi, 0x645588 */ { edi = (u32)(0x645588u); }
  /* 0045ce19 call 0x560d00 */ esp -= 4; M32(esp) = 0x45ce1eu; SAVEALL; F_00560d00(c); ABI_CHECK(0x560d00u, 0x45ce19u); RETCHK(0x45ce1eu, 0x45ce19u); LOADALL;
  /* 0045ce1e mov edi, eax */ { edi = (u32)(eax); }
  /* 0045ce20 lea esi, [ebp - 0x68] */ esi = (u32)((u32)(ebp + 0xffffff98u));
  /* 0045ce23 mov dword ptr [ebp - 0xb4], edi */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); M32(m_) = (u32)(edi); }
  /* 0045ce29 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0045ce2d call 0x45c1f0 */ esp -= 4; M32(esp) = 0x45ce32u; SAVEALL; F_0045c1f0(c); ABI_CHECK(0x45c1f0u, 0x45ce2du); RETCHK(0x45ce32u, 0x45ce2du); LOADALL;
  /* 0045ce32 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0045ce34 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045ce36 jne 0x45cd7f */ if (!ZF_) goto L_0045cd7f;
L_0045ce3c:;
  /* 0045ce3c mov ecx, dword ptr [ebp - 0xb8] */ { const u32 m_ = (u32)(ebp + 0xffffff48u); ecx = (u32)(M32(m_)); }
  /* 0045ce42 mov edi, 0x648960 */ { edi = (u32)(0x648960u); }
  /* 0045ce47 call 0x560c90 */ esp -= 4; M32(esp) = 0x45ce4cu; SAVEALL; F_00560c90(c); ABI_CHECK(0x560c90u, 0x45ce47u); RETCHK(0x45ce4cu, 0x45ce47u); LOADALL;
  /* 0045ce4c cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045ce4e je 0x45d009 */ if (ZF_) goto L_0045d009;
  /* 0045ce54 call 0x560c60 */ esp -= 4; M32(esp) = 0x45ce59u; SAVEALL; F_00560c60(c); ABI_CHECK(0x560c60u, 0x45ce54u); RETCHK(0x45ce59u, 0x45ce54u); LOADALL;
  /* 0045ce59 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0045ce5b cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045ce5d mov dword ptr [ebp - 0xb4], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); M32(m_) = (u32)(ebx); }
  /* 0045ce63 je 0x45d009 */ if (ZF_) goto L_0045d009;
  /* 0045ce69 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045ce6c add eax, 0x68 */ { u32 a_ = eax, b_ = 0x68u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045ce6f mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0045ce72 jmp 0x45ce80 */ goto L_0045ce80;
L_0045ce74:;
  /* 0045ce74 mov ebx, dword ptr [ebp - 0xb4] */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); ebx = (u32)(M32(m_)); }
  /* 0045ce7a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0045ce7c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0045ce80:;
  /* 0045ce80 mov dword ptr [ebp - 0x98], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(0xfu); }
  /* 0045ce8a mov dword ptr [ebp - 0x9c], esi */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(esi); }
  /* 0045ce90 mov byte ptr [ebp - 0xac], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff54u); M8(m_) = (u8)(0x0u); }
  /* 0045ce97 mov dword ptr [ebp - 0x90], esi */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M32(m_) = (u32)(esi); }
  /* 0045ce9d mov dword ptr [ebp - 0x8c], esi */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M32(m_) = (u32)(esi); }
  /* 0045cea3 mov dword ptr [ebp - 0x88], esi */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(esi); }
  /* 0045cea9 mov byte ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x6u); }
  /* 0045cead mov esi, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); esi = (u32)(M32(m_)); }
  /* 0045ceb0 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045ceb3 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0045ceb9 call 0x45c330 */ esp -= 4; M32(esp) = 0x45cebeu; SAVEALL; F_0045c330(c); ABI_CHECK(0x45c330u, 0x45ceb9u); RETCHK(0x45cebeu, 0x45ceb9u); LOADALL;
  /* 0045cebe mov edi, 0x648958 */ { edi = (u32)(0x648958u); }
  /* 0045cec3 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0045cec5 call 0x560c90 */ esp -= 4; M32(esp) = 0x45cecau; SAVEALL; F_00560c90(c); ABI_CHECK(0x560c90u, 0x45cec5u); RETCHK(0x45cecau, 0x45cec5u); LOADALL;
  /* 0045ceca mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0045cecc xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0045cece cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045ced0 je 0x45cfd0 */ if (ZF_) goto L_0045cfd0;
  /* 0045ced6 jmp 0x45cee0 */ goto L_0045cee0;
L_0045cee0:;
  /* 0045cee0 mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 0045cee5 mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 0045cee8 mov dword ptr [ebp - 0x3c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(esi); }
  /* 0045ceeb mov byte ptr [ebp - 0x4c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M8(m_) = (u8)(0x0u); }
  /* 0045ceef mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 0045cef2 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 0045cef5 mov byte ptr [ebp - 0x30], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M8(m_) = (u8)(0x0u); }
  /* 0045cef9 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 0045cefc mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0045ceff push 0x648990 */ { u32 v_ = 0x648990u; esp -= 4; M32(esp) = v_; }
  /* 0045cf04 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0045cf06 mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 0045cf0a call 0x560fd0 */ esp -= 4; M32(esp) = 0x45cf0fu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x45cf0au); RETCHK(0x45cf0fu, 0x45cf0au); LOADALL;
  /* 0045cf0f mov dword ptr [ebp - 0x54], eax */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(eax); }
  /* 0045cf12 push 0x648954 */ { u32 v_ = 0x648954u; esp -= 4; M32(esp) = v_; }
  /* 0045cf17 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0045cf19 call 0x560fd0 */ esp -= 4; M32(esp) = 0x45cf1eu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x45cf19u); RETCHK(0x45cf1eu, 0x45cf19u); LOADALL;
  /* 0045cf1e mov esi, eax */ { esi = (u32)(eax); }
  /* 0045cf20 push 0x648950 */ { u32 v_ = 0x648950u; esp -= 4; M32(esp) = v_; }
  /* 0045cf25 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0045cf27 call 0x560fd0 */ esp -= 4; M32(esp) = 0x45cf2cu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x45cf27u); RETCHK(0x45cf2cu, 0x45cf27u); LOADALL;
  /* 0045cf2c mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0045cf2f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045cf30 mov eax, 0x648988 */ { eax = (u32)(0x648988u); }
  /* 0045cf35 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0045cf38 call 0x560ed0 */ esp -= 4; M32(esp) = 0x45cf3du; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x45cf38u); RETCHK(0x45cf3du, 0x45cf38u); LOADALL;
  /* 0045cf3d mov esi, eax */ { esi = (u32)(eax); }
  /* 0045cf3f lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0045cf42 call 0x45c330 */ esp -= 4; M32(esp) = 0x45cf47u; SAVEALL; F_0045c330(c); ABI_CHECK(0x45c330u, 0x45cf42u); RETCHK(0x45cf47u, 0x45cf42u); LOADALL;
  /* 0045cf47 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045cf48 mov eax, 0x648980 */ { eax = (u32)(0x648980u); }
  /* 0045cf4d call 0x560ed0 */ esp -= 4; M32(esp) = 0x45cf52u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x45cf4du); RETCHK(0x45cf52u, 0x45cf4du); LOADALL;
  /* 0045cf52 mov esi, eax */ { esi = (u32)(eax); }
  /* 0045cf54 lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 0045cf57 call 0x45c330 */ esp -= 4; M32(esp) = 0x45cf5cu; SAVEALL; F_0045c330(c); ABI_CHECK(0x45c330u, 0x45cf57u); RETCHK(0x45cf5cu, 0x45cf57u); LOADALL;
  /* 0045cf5c lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 0045cf5f lea eax, [ebp - 0x94] */ eax = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0045cf65 call 0x45d250 */ esp -= 4; M32(esp) = 0x45cf6au; SAVEALL; F_0045d250(c); ABI_CHECK(0x45d250u, 0x45cf65u); RETCHK(0x45cf6au, 0x45cf65u); LOADALL;
  /* 0045cf6a mov edi, 0x648958 */ { edi = (u32)(0x648958u); }
  /* 0045cf6f mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0045cf71 call 0x560d00 */ esp -= 4; M32(esp) = 0x45cf76u; SAVEALL; F_00560d00(c); ABI_CHECK(0x560d00u, 0x45cf71u); RETCHK(0x45cf76u, 0x45cf71u); LOADALL;
  /* 0045cf76 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0045cf78 mov byte ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x6u); }
  /* 0045cf7c mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 0045cf7f mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0045cf84 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045cf86 jb 0x45cf94 */ if (CF_) goto L_0045cf94;
  /* 0045cf88 mov ecx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ecx = (u32)(M32(m_)); }
  /* 0045cf8b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045cf8c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45cf91u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45cf8cu); RETCHK(0x45cf91u, 0x45cf8cu); LOADALL;
  /* 0045cf91 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045cf94:;
  /* 0045cf94 cmp dword ptr [ebp - 0x38], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045cf97 mov edi, 0xf */ { edi = (u32)(0xfu); }
  /* 0045cf9c mov dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edi); }
  /* 0045cf9f mov dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x0u); }
  /* 0045cfa6 mov byte ptr [ebp - 0x30], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M8(m_) = (u8)(0x0u); }
  /* 0045cfaa jb 0x45cfb8 */ if (CF_) goto L_0045cfb8;
  /* 0045cfac mov edx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); edx = (u32)(M32(m_)); }
  /* 0045cfaf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045cfb0 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45cfb5u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45cfb0u); RETCHK(0x45cfb5u, 0x45cfb0u); LOADALL;
  /* 0045cfb5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045cfb8:;
  /* 0045cfb8 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0045cfba test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045cfbc mov dword ptr [ebp - 0x38], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(edi); }
  /* 0045cfbf mov dword ptr [ebp - 0x3c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0x0u); }
  /* 0045cfc6 mov byte ptr [ebp - 0x4c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M8(m_) = (u8)(0x0u); }
  /* 0045cfca jne 0x45cee0 */ if (!ZF_) goto L_0045cee0;
L_0045cfd0:;
  /* 0045cfd0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045cfd3 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0045cfd9 call 0x45d420 */ esp -= 4; M32(esp) = 0x45cfdeu; SAVEALL; F_0045d420(c); ABI_CHECK(0x45d420u, 0x45cfd9u); RETCHK(0x45cfdeu, 0x45cfd9u); LOADALL;
  /* 0045cfde mov eax, dword ptr [ebp - 0xb4] */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); eax = (u32)(M32(m_)); }
  /* 0045cfe4 call 0x560cd0 */ esp -= 4; M32(esp) = 0x45cfe9u; SAVEALL; F_00560cd0(c); ABI_CHECK(0x560cd0u, 0x45cfe4u); RETCHK(0x45cfe9u, 0x45cfe4u); LOADALL;
  /* 0045cfe9 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045cfeb lea eax, [ebp - 0xb0] */ eax = (u32)((u32)(ebp + 0xffffff50u));
  /* 0045cff1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045cff2 mov dword ptr [ebp - 0xb4], edi */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); M32(m_) = (u32)(edi); }
  /* 0045cff8 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0045cffc call 0x45c260 */ esp -= 4; M32(esp) = 0x45d001u; SAVEALL; F_0045c260(c); ABI_CHECK(0x45c260u, 0x45cffcu); RETCHK(0x45d001u, 0x45cffcu); LOADALL;
  /* 0045d001 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045d003 jne 0x45ce74 */ if (!ZF_) goto L_0045ce74;
L_0045d009:;
  /* 0045d009 cmp dword ptr [ebp - 0x6c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff94u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045d00d jb 0x45d01b */ if (CF_) goto L_0045d01b;
  /* 0045d00f mov ecx, dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); ecx = (u32)(M32(m_)); }
  /* 0045d012 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045d013 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x45d018u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x45d013u); RETCHK(0x45d018u, 0x45d013u); LOADALL;
  /* 0045d018 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0045d01b:;
  /* 0045d01b mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
L_0045d01d:;
  /* 0045d01d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0045d01e:;
  /* 0045d01e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0045d01f:;
  /* 0045d01f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045d022 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045d029 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0045d02c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045d02d call 0x61af31 */ esp -= 4; M32(esp) = 0x45d032u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x45d02du); RETCHK(0x45d032u, 0x45d02du); LOADALL;
  /* 0045d032 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045d034 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045d035 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045d040(CPU *c) {
  NATIVE_HOOK(0x45d040u) REGS; LOADALL;
L_0045d040:;
  /* 0045d040 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045d041 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045d043 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045d045 push 0x61f580 */ { u32 v_ = 0x61f580u; esp -= 4; M32(esp) = v_; }
  /* 0045d04a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045d050 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045d051 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045d058 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045d059 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045d05a mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0045d05c mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0045d05f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045d060 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045d061 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0045d064 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0045d066 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045d068 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0045d06b jne 0x45d071 */ if (!ZF_) goto L_0045d071;
  /* 0045d06d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0045d06f jmp 0x45d08b */ goto L_0045d08b;
L_0045d071:;
  /* 0045d071 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045d074 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045d076 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0045d07b imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d07d add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045d07f sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045d082 mov esi, edx */ { esi = (u32)(edx); }
  /* 0045d084 shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0045d087 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045d089 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_0045d08b:;
  /* 0045d08b cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045d08d mov dword ptr [edi + 4], ecx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0045d090 mov dword ptr [edi + 8], ecx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0045d093 mov dword ptr [edi + 0xc], ecx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0045d096 je 0x45d0d8 */ if (ZF_) goto L_0045d0d8;
  /* 0045d098 cmp esi, 0x4444444 */ { u32 a_ = esi, b_ = 0x4444444u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045d09e jbe 0x45d0a5 */ if ((CF_|ZF_)) goto L_0045d0a5;
  /* 0045d0a0 call 0x49ac70 */ esp -= 4; M32(esp) = 0x45d0a5u; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x45d0a0u); RETCHK(0x45d0a5u, 0x45d0a0u); LOADALL;
L_0045d0a5:;
  /* 0045d0a5 imul esi, esi, 0x3c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d0a8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045d0a9 call 0x5fe934 */ esp -= 4; M32(esp) = 0x45d0aeu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x45d0a9u); RETCHK(0x45d0aeu, 0x45d0a9u); LOADALL;
  /* 0045d0ae mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0045d0b5 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045d0b8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045d0b9 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045d0bb mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0045d0be mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0045d0c1 mov dword ptr [edi + 0xc], esi */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(esi); }
  /* 0045d0c4 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045d0c7 mov ebx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0045d0ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045d0cb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045d0cc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045d0cd call 0x45f280 */ esp -= 4; M32(esp) = 0x45d0d2u; SAVEALL; F_0045f280(c); ABI_CHECK(0x45f280u, 0x45d0cdu); RETCHK(0x45d0d2u, 0x45d0cdu); LOADALL;
  /* 0045d0d2 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045d0d5 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
L_0045d0d8:;
  /* 0045d0d8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045d0db mov eax, edi */ { eax = (u32)(edi); }
  /* 0045d0dd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045d0de pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045d0df mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045d0e6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045d0e7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045d0e9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045d0ea ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045d0ed(CPU *c) {
  NATIVE_HOOK(0x45d0edu) REGS; LOADALL;
L_0045d0ed:;
  /* 0045d0ed mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0045d0f0 call 0x5417b0 */ esp -= 4; M32(esp) = 0x45d0f5u; SAVEALL; F_005417b0(c); ABI_CHECK(0x5417b0u, 0x45d0f0u); RETCHK(0x45d0f5u, 0x45d0f0u); LOADALL;
  /* 0045d0f5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045d0f7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045d0f9 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0045d0fe int3 */ TRAP(0x45d0feu, "int3");
}

void F_0045d100(CPU *c) {
  NATIVE_HOOK(0x45d100u) REGS; LOADALL;
L_0045d100:;
  /* 0045d100 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045d101 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045d103 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045d104 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045d105 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045d106 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045d108 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0045d10b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045d10d jne 0x45d113 */ if (!ZF_) goto L_0045d113;
  /* 0045d10f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0045d111 jmp 0x45d12b */ goto L_0045d12b;
L_0045d113:;
  /* 0045d113 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045d116 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045d118 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0045d11d imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d11f add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045d121 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045d124 mov esi, edx */ { esi = (u32)(edx); }
  /* 0045d126 shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0045d129 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0045d12b:;
  /* 0045d12b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045d12d je 0x45d171 */ if (ZF_) goto L_0045d171;
  /* 0045d12f mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0045d132 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045d134 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0045d139 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d13b add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045d13d sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045d140 mov eax, edx */ { eax = (u32)(edx); }
  /* 0045d142 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045d145 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045d147 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045d149 jae 0x45d171 */ if (!CF_) goto L_0045d171;
  /* 0045d14b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045d14e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045d151 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045d154 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045d155 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045d156 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045d157 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0045d15c call 0x4a84b0 */ esp -= 4; M32(esp) = 0x45d161u; SAVEALL; F_004a84b0(c); ABI_CHECK(0x4a84b0u, 0x45d15cu); RETCHK(0x45d161u, 0x45d15cu); LOADALL;
  /* 0045d161 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045d164 add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045d167 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0045d16a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045d16b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045d16c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045d16d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045d16e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0045d171:;
  /* 0045d171 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045d174 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045d177 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045d178 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045d179 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0045d17c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045d17d call 0x45d4d0 */ esp -= 4; M32(esp) = 0x45d182u; SAVEALL; F_0045d4d0(c); ABI_CHECK(0x45d4d0u, 0x45d17du); RETCHK(0x45d182u, 0x45d17du); LOADALL;
  /* 0045d182 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045d183 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045d184 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045d185 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045d186 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045d190(CPU *c) {
  NATIVE_HOOK(0x45d190u) REGS; LOADALL;
L_0045d190:;
  /* 0045d190 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045d191 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045d193 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0045d195 push 0x61f570 */ { u32 v_ = 0x61f570u; esp -= 4; M32(esp) = v_; }
  /* 0045d19a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0045d1a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045d1a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0045d1a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045d1a9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045d1aa mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0045d1ac mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0045d1af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045d1b0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045d1b1 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0045d1b4 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0045d1b6 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045d1b8 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0045d1bb jne 0x45d1c1 */ if (!ZF_) goto L_0045d1c1;
  /* 0045d1bd xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0045d1bf jmp 0x45d1d7 */ goto L_0045d1d7;
L_0045d1c1:;
  /* 0045d1c1 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045d1c4 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045d1c6 mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 0045d1cb imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d1cd sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045d1d0 mov esi, edx */ { esi = (u32)(edx); }
  /* 0045d1d2 shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0045d1d5 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0045d1d7:;
  /* 0045d1d7 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045d1d9 mov dword ptr [edi + 4], ecx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0045d1dc mov dword ptr [edi + 8], ecx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0045d1df mov dword ptr [edi + 0xc], ecx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0045d1e2 je 0x45d224 */ if (ZF_) goto L_0045d224;
  /* 0045d1e4 cmp esi, 0x3c3c3c3 */ { u32 a_ = esi, b_ = 0x3c3c3c3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045d1ea jbe 0x45d1f1 */ if ((CF_|ZF_)) goto L_0045d1f1;
  /* 0045d1ec call 0x49ac70 */ esp -= 4; M32(esp) = 0x45d1f1u; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x45d1ecu); RETCHK(0x45d1f1u, 0x45d1ecu); LOADALL;
L_0045d1f1:;
  /* 0045d1f1 imul esi, esi, 0x44 */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x44u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d1f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045d1f5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x45d1fau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x45d1f5u); RETCHK(0x45d1fau, 0x45d1f5u); LOADALL;
  /* 0045d1fa mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0045d201 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045d204 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0045d205 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045d207 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0045d20a mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0045d20d mov dword ptr [edi + 0xc], esi */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(esi); }
  /* 0045d210 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045d213 mov ebx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0045d216 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045d217 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045d218 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045d219 call 0x45f360 */ esp -= 4; M32(esp) = 0x45d21eu; SAVEALL; F_0045f360(c); ABI_CHECK(0x45f360u, 0x45d219u); RETCHK(0x45d21eu, 0x45d219u); LOADALL;
  /* 0045d21e add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045d221 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
L_0045d224:;
  /* 0045d224 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0045d227 mov eax, edi */ { eax = (u32)(edi); }
  /* 0045d229 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045d22a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045d22b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0045d232 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045d233 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045d235 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045d236 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0045d239(CPU *c) {
  NATIVE_HOOK(0x45d239u) REGS; LOADALL;
L_0045d239:;
  /* 0045d239 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0045d23c call 0x45ee80 */ esp -= 4; M32(esp) = 0x45d241u; SAVEALL; F_0045ee80(c); ABI_CHECK(0x45ee80u, 0x45d23cu); RETCHK(0x45d241u, 0x45d23cu); LOADALL;
  /* 0045d241 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045d243 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0045d245 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0045d24a int3 */ TRAP(0x45d24au, "int3");
}

void F_0045d250(CPU *c) {
  NATIVE_HOOK(0x45d250u) REGS; LOADALL;
L_0045d250:;
  /* 0045d250 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045d251 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045d253 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045d254 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045d255 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045d256 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045d257 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045d259 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0045d25c test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045d25e jne 0x45d264 */ if (!ZF_) goto L_0045d264;
  /* 0045d260 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0045d262 jmp 0x45d27a */ goto L_0045d27a;
L_0045d264:;
  /* 0045d264 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045d267 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045d269 mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 0045d26e imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d270 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045d273 mov esi, edx */ { esi = (u32)(edx); }
  /* 0045d275 shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0045d278 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0045d27a:;
  /* 0045d27a test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045d27c je 0x45d2b7 */ if (ZF_) goto L_0045d2b7;
  /* 0045d27e mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0045d281 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045d283 mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 0045d288 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d28a sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045d28d mov eax, edx */ { eax = (u32)(edx); }
  /* 0045d28f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045d292 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045d294 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045d296 jae 0x45d2b7 */ if (!CF_) goto L_0045d2b7;
  /* 0045d298 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0045d29b mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045d29e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045d29f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0045d2a1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045d2a2 call 0x45eec0 */ esp -= 4; M32(esp) = 0x45d2a7u; SAVEALL; F_0045eec0(c); ABI_CHECK(0x45eec0u, 0x45d2a2u); RETCHK(0x45d2a7u, 0x45d2a2u); LOADALL;
  /* 0045d2a7 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045d2aa add esi, 0x44 */ { u32 a_ = esi, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045d2ad mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0045d2b0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045d2b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045d2b2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045d2b3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045d2b5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045d2b6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045d2b7:;
  /* 0045d2b7 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045d2ba push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045d2bb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045d2bc lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0045d2bf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045d2c0 call 0x45d580 */ esp -= 4; M32(esp) = 0x45d2c5u; SAVEALL; F_0045d580(c); ABI_CHECK(0x45d580u, 0x45d2c0u); RETCHK(0x45d2c5u, 0x45d2c0u); LOADALL;
  /* 0045d2c5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045d2c6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045d2c7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045d2c8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045d2ca pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045d2cb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045d2e0(CPU *c) {
  NATIVE_HOOK(0x45d2e0u) REGS; LOADALL;
L_0045d2e0:;
  /* 0045d2e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045d2e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045d2e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045d2e4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045d2e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045d2e6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045d2e7 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045d2e9 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0045d2ec test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045d2ee jne 0x45d2f4 */ if (!ZF_) goto L_0045d2f4;
  /* 0045d2f0 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0045d2f2 jmp 0x45d30a */ goto L_0045d30a;
L_0045d2f4:;
  /* 0045d2f4 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045d2f7 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045d2f9 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045d2fe imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d300 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045d303 mov esi, edx */ { esi = (u32)(edx); }
  /* 0045d305 shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0045d308 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0045d30a:;
  /* 0045d30a test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045d30c je 0x45d34a */ if (ZF_) goto L_0045d34a;
  /* 0045d30e mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0045d311 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045d313 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045d318 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d31a sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045d31d mov eax, edx */ { eax = (u32)(edx); }
  /* 0045d31f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045d322 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045d324 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045d326 jae 0x45d34a */ if (!CF_) goto L_0045d34a;
  /* 0045d328 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0045d32b mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045d32e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045d32f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045d330 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 0045d335 call 0x45efa0 */ esp -= 4; M32(esp) = 0x45d33au; SAVEALL; F_0045efa0(c); ABI_CHECK(0x45efa0u, 0x45d335u); RETCHK(0x45d33au, 0x45d335u); LOADALL;
  /* 0045d33a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045d33d add esi, 0x2c */ { u32 a_ = esi, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045d340 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0045d343 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045d344 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045d345 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045d346 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045d348 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045d349 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045d34a:;
  /* 0045d34a mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045d34d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045d34e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045d34f lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0045d352 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045d353 call 0x45d620 */ esp -= 4; M32(esp) = 0x45d358u; SAVEALL; F_0045d620(c); ABI_CHECK(0x45d620u, 0x45d353u); RETCHK(0x45d358u, 0x45d353u); LOADALL;
  /* 0045d358 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045d359 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045d35a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045d35b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045d35d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045d35e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045d3a0(CPU *c) {
  NATIVE_HOOK(0x45d3a0u) REGS; LOADALL;
L_0045d3a0:;
  /* 0045d3a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045d3a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045d3a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045d3a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045d3a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045d3a6 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045d3a8 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0045d3ab test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045d3ad jne 0x45d3b3 */ if (!ZF_) goto L_0045d3b3;
  /* 0045d3af xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0045d3b1 jmp 0x45d3c9 */ goto L_0045d3c9;
L_0045d3b3:;
  /* 0045d3b3 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045d3b6 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045d3b8 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045d3bd imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d3bf sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045d3c2 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0045d3c4 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0045d3c7 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0045d3c9:;
  /* 0045d3c9 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045d3cb je 0x45d409 */ if (ZF_) goto L_0045d409;
  /* 0045d3cd mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0045d3d0 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045d3d2 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045d3d7 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d3d9 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045d3dc mov eax, edx */ { eax = (u32)(edx); }
  /* 0045d3de shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045d3e1 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045d3e3 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045d3e5 jae 0x45d409 */ if (!CF_) goto L_0045d409;
  /* 0045d3e7 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0045d3ea mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045d3ed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045d3ee push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045d3ef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045d3f0 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0045d3f5 call 0x45f030 */ esp -= 4; M32(esp) = 0x45d3fau; SAVEALL; F_0045f030(c); ABI_CHECK(0x45f030u, 0x45d3f5u); RETCHK(0x45d3fau, 0x45d3f5u); LOADALL;
  /* 0045d3fa add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045d3fd add esi, 0x58 */ { u32 a_ = esi, b_ = 0x58u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045d400 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0045d403 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045d404 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045d405 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045d407 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045d408 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045d409:;
  /* 0045d409 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045d40c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045d40d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045d40e lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0045d411 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045d412 call 0x45d6a0 */ esp -= 4; M32(esp) = 0x45d417u; SAVEALL; F_0045d6a0(c); ABI_CHECK(0x45d6a0u, 0x45d412u); RETCHK(0x45d417u, 0x45d412u); LOADALL;
  /* 0045d417 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045d418 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045d419 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045d41b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045d41c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045d420(CPU *c) {
  NATIVE_HOOK(0x45d420u) REGS; LOADALL;
L_0045d420:;
  /* 0045d420 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045d421 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045d423 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045d424 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045d425 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045d426 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045d427 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045d429 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0045d42c test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045d42e jne 0x45d434 */ if (!ZF_) goto L_0045d434;
  /* 0045d430 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0045d432 jmp 0x45d44a */ goto L_0045d44a;
L_0045d434:;
  /* 0045d434 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0045d437 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045d439 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045d43e imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d440 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045d443 mov esi, edx */ { esi = (u32)(edx); }
  /* 0045d445 shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0045d448 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0045d44a:;
  /* 0045d44a test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045d44c je 0x45d48a */ if (ZF_) goto L_0045d48a;
  /* 0045d44e mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0045d451 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045d453 mov eax, 0x2e8ba2e9 */ { eax = (u32)(0x2e8ba2e9u); }
  /* 0045d458 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d45a sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045d45d mov eax, edx */ { eax = (u32)(edx); }
  /* 0045d45f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045d462 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045d464 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045d466 jae 0x45d48a */ if (!CF_) goto L_0045d48a;
  /* 0045d468 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0045d46b mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0045d46e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045d46f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045d470 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 0045d475 call 0x45f0c0 */ esp -= 4; M32(esp) = 0x45d47au; SAVEALL; F_0045f0c0(c); ABI_CHECK(0x45f0c0u, 0x45d475u); RETCHK(0x45d47au, 0x45d475u); LOADALL;
  /* 0045d47a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045d47d add esi, 0x2c */ { u32 a_ = esi, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045d480 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0045d483 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045d484 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045d485 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045d486 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045d488 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045d489 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045d48a:;
  /* 0045d48a mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045d48d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045d48e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0045d48f lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0045d492 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0045d493 call 0x45d700 */ esp -= 4; M32(esp) = 0x45d498u; SAVEALL; F_0045d700(c); ABI_CHECK(0x45d700u, 0x45d493u); RETCHK(0x45d498u, 0x45d493u); LOADALL;
  /* 0045d498 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045d499 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045d49a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045d49b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0045d49d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045d49e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045d4a0(CPU *c) {
  NATIVE_HOOK(0x45d4a0u) REGS; LOADALL;
L_0045d4a0:;
  /* 0045d4a0 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0045d4a3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045d4a5 jne 0x45d4a8 */ if (!ZF_) goto L_0045d4a8;
  /* 0045d4a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045d4a8:;
  /* 0045d4a8 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045d4ab sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045d4ad mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0045d4b2 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d4b4 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045d4b6 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045d4b9 mov eax, edx */ { eax = (u32)(edx); }
  /* 0045d4bb shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045d4be add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045d4c0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0045d4d0(CPU *c) {
  NATIVE_HOOK(0x45d4d0u) REGS; LOADALL;
L_0045d4d0:;
  /* 0045d4d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0045d4d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0045d4d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045d4d4 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0045d4d7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0045d4d8 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0045d4db test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0045d4dd je 0x45d4fc */ if (ZF_) goto L_0045d4fc;
  /* 0045d4df mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0045d4e2 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045d4e4 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0045d4e9 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d4eb add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045d4ed sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045d4f0 mov eax, edx */ { eax = (u32)(edx); }
  /* 0045d4f2 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0045d4f5 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0045d4f7 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0045d4fa jne 0x45d500 */ if (!ZF_) goto L_0045d500;
L_0045d4fc:;
  /* 0045d4fc xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0045d4fe jmp 0x45d517 */ goto L_0045d517;
L_0045d500:;
  /* 0045d500 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0045d502 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0045d504 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0045d509 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d50b add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0045d50d sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0045d510 mov esi, edx */ { esi = (u32)(edx); }
  /* 0045d512 shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0045d515 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0045d517:;
  /* 0045d517 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0045d51a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0045d51c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0045d51d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045d51e call 0x45d760 */ esp -= 4; M32(esp) = 0x45d523u; SAVEALL; F_0045d760(c); ABI_CHECK(0x45d760u, 0x45d51eu); RETCHK(0x45d523u, 0x45d51eu); LOADALL;
  /* 0045d523 imul esi, esi, 0x3c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d526 add esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0045d529 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0045d52c mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0045d52e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0045d52f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0045d530 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0045d531 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0045d540(CPU *c) {
  NATIVE_HOOK(0x45d540u) REGS; LOADALL;
L_0045d540:;
  /* 0045d540 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045d541 mov edi, eax */ { edi = (u32)(eax); }
  /* 0045d543 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0045d545 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045d547 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0045d54a mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0045d54d mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0045d550 jne 0x45d556 */ if (!ZF_) goto L_0045d556;
  /* 0045d552 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0045d554 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045d555 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0045d556:;
  /* 0045d556 cmp edi, 0x4444444 */ { u32 a_ = edi, b_ = 0x4444444u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0045d55c jbe 0x45d563 */ if ((CF_|ZF_)) goto L_0045d563;
  /* 0045d55e jmp 0x49ac70 */ SAVEALL; F_0049ac70(c); return;
L_0045d563:;
  /* 0045d563 imul edi, edi, 0x3c */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0045d566 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0045d567 call 0x5fe934 */ esp -= 4; M32(esp) = 0x45d56cu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x45d567u); RETCHK(0x45d56cu, 0x45d567u); LOADALL;
  /* 0045d56c add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0045d56e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0045d571 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0045d574 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0045d577 mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
  /* 0045d57a mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0045d57c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0045d57d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
