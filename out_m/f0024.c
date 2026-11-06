#include "funcs.h"

void F_005029d0(CPU *c) {
  NATIVE_HOOK(0x5029d0u) REGS; LOADALL;
L_005029d0:;
  /* 005029d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005029d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005029d3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005029d9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005029db push 0x61c968 */ { u32 v_ = 0x61c968u; esp -= 4; M32(esp) = v_; }
  /* 005029e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005029e1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005029e4 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005029eb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005029ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005029ed mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005029f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005029f1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005029f2 call 0x506b60 */ esp -= 4; M32(esp) = 0x5029f7u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x5029f2u); RETCHK(0x5029f7u, 0x5029f2u); LOADALL;
  /* 005029f7 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005029f9 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 005029fb mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005029fe push 0x65030c */ { u32 v_ = 0x65030cu; esp -= 4; M32(esp) = v_; }
  /* 00502a03 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00502a06 mov dword ptr [esi], 0x6501f0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6501f0u); }
  /* 00502a0c call 0x404420 */ esp -= 4; M32(esp) = 0x502a11u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x502a0cu); RETCHK(0x502a11u, 0x502a0cu); LOADALL;
  /* 00502a11 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00502a14 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00502a19 mov byte ptr [esi + 0x1d0], al */ { const u32 m_ = (u32)(esi + 0x1d0u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00502a1f mov dword ptr [esi + 0x1e0], eax */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(eax); }
  /* 00502a25 mov byte ptr [esi + 0x1e8], al */ { const u32 m_ = (u32)(esi + 0x1e8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00502a2b mov dword ptr [esi + 0x1ac], ebx */ { const u32 m_ = (u32)(esi + 0x1acu); M32(m_) = (u32)(ebx); }
  /* 00502a31 mov dword ptr [esi + 0x1b0], ebx */ { const u32 m_ = (u32)(esi + 0x1b0u); M32(m_) = (u32)(ebx); }
  /* 00502a37 mov dword ptr [esi + 0x1b4], ebx */ { const u32 m_ = (u32)(esi + 0x1b4u); M32(m_) = (u32)(ebx); }
  /* 00502a3d mov dword ptr [esi + 0x1b8], ebx */ { const u32 m_ = (u32)(esi + 0x1b8u); M32(m_) = (u32)(ebx); }
  /* 00502a43 mov dword ptr [esi + 0x1bc], ebx */ { const u32 m_ = (u32)(esi + 0x1bcu); M32(m_) = (u32)(ebx); }
  /* 00502a49 mov byte ptr [esi + 0x180], bl */ { const u32 m_ = (u32)(esi + 0x180u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00502a4f mov dword ptr [esi + 0x1a4], ebx */ { const u32 m_ = (u32)(esi + 0x1a4u); M32(m_) = (u32)(ebx); }
  /* 00502a55 mov dword ptr [esi + 0x1d8], ebx */ { const u32 m_ = (u32)(esi + 0x1d8u); M32(m_) = (u32)(ebx); }
  /* 00502a5b mov dword ptr [esi + 0x1ec], ebx */ { const u32 m_ = (u32)(esi + 0x1ecu); M32(m_) = (u32)(ebx); }
  /* 00502a61 mov dword ptr [esi + 0x1c0], 0xc0a00000 */ { const u32 m_ = (u32)(esi + 0x1c0u); M32(m_) = (u32)(0xc0a00000u); }
  /* 00502a6b mov dword ptr [esi + 0x1c4], 0x41f00000 */ { const u32 m_ = (u32)(esi + 0x1c4u); M32(m_) = (u32)(0x41f00000u); }
  /* 00502a75 mov dword ptr [esi + 0x1c8], 0x43520000 */ { const u32 m_ = (u32)(esi + 0x1c8u); M32(m_) = (u32)(0x43520000u); }
  /* 00502a7f mov dword ptr [esi + 0x1cc], 0x41200000 */ { const u32 m_ = (u32)(esi + 0x1ccu); M32(m_) = (u32)(0x41200000u); }
  /* 00502a89 mov dword ptr [esi + 0x1dc], 2 */ { const u32 m_ = (u32)(esi + 0x1dcu); M32(m_) = (u32)(0x2u); }
  /* 00502a93 mov dword ptr [esi + 0x1e4], 0x42480000 */ { const u32 m_ = (u32)(esi + 0x1e4u); M32(m_) = (u32)(0x42480000u); }
  /* 00502a9d mov eax, esi */ { eax = (u32)(esi); }
  /* 00502a9f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00502aa0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00502aa7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00502aa8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00502aaa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00502aab ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00502ab0(CPU *c) {
  NATIVE_HOOK(0x502ab0u) REGS; LOADALL;
L_00502ab0:;
  /* 00502ab0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00502ab1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00502ab3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00502ab4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00502ab6 call 0x502ae0 */ esp -= 4; M32(esp) = 0x502abbu; SAVEALL; F_00502ae0(c); ABI_CHECK(0x502ae0u, 0x502ab6u); RETCHK(0x502abbu, 0x502ab6u); LOADALL;
  /* 00502abb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00502abf je 0x502aca */ if (ZF_) goto L_00502aca;
  /* 00502ac1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00502ac2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x502ac7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x502ac2u); RETCHK(0x502ac7u, 0x502ac2u); LOADALL;
  /* 00502ac7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00502aca:;
  /* 00502aca mov eax, esi */ { eax = (u32)(esi); }
  /* 00502acc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00502acd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00502ace ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00502ae0(CPU *c) {
  NATIVE_HOOK(0x502ae0u) REGS; LOADALL;
L_00502ae0:;
  /* 00502ae0 mov dword ptr [ecx], 0x6501f0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x6501f0u); }
  /* 00502ae6 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_00502af0(CPU *c) {
  NATIVE_HOOK(0x502af0u) REGS; LOADALL;
L_00502af0:;
  /* 00502af0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00502af1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00502af3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00502af5 push 0x624388 */ { u32 v_ = 0x624388u; esp -= 4; M32(esp) = v_; }
  /* 00502afa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00502b00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502b01 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00502b08 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502b0b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00502b0c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00502b0e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00502b11 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00502b13 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00502b14 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502b15 jne 0x502b2c */ if (!ZF_) goto L_00502b2c;
  /* 00502b17 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00502b19 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00502b1c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00502b23 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00502b24 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00502b25 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00502b26 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00502b28 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00502b29 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00502b2c:;
  /* 00502b2c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00502b2e call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x502b31u; SAVEALL; call_ind(c, t_); RETCHK(0x502b31u, 0x502b2eu); LOADALL; }
  /* 00502b31 mov edi, eax */ { edi = (u32)(eax); }
  /* 00502b33 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502b34 mov eax, 0x6501c0 */ { eax = (u32)(0x6501c0u); }
  /* 00502b39 call 0x560ed0 */ esp -= 4; M32(esp) = 0x502b3eu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x502b39u); RETCHK(0x502b3eu, 0x502b39u); LOADALL;
  /* 00502b3e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502b3f call 0x5fea82 */ esp -= 4; M32(esp) = 0x502b44u; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x502b3fu); RETCHK(0x502b44u, 0x502b3fu); LOADALL;
  /* 00502b44 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00502b47 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502b4a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502b4b mov eax, 0x6501bc */ { eax = (u32)(0x6501bcu); }
  /* 00502b50 call 0x560ed0 */ esp -= 4; M32(esp) = 0x502b55u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x502b50u); RETCHK(0x502b55u, 0x502b50u); LOADALL;
  /* 00502b55 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502b56 call 0x5fea82 */ esp -= 4; M32(esp) = 0x502b5bu; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x502b56u); RETCHK(0x502b5bu, 0x502b56u); LOADALL;
  /* 00502b5b fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00502b5e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502b61 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502b62 mov eax, 0x6501b4 */ { eax = (u32)(0x6501b4u); }
  /* 00502b67 call 0x560ed0 */ esp -= 4; M32(esp) = 0x502b6cu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x502b67u); RETCHK(0x502b6cu, 0x502b67u); LOADALL;
  /* 00502b6c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502b6d call 0x5fea82 */ esp -= 4; M32(esp) = 0x502b72u; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x502b6du); RETCHK(0x502b72u, 0x502b6du); LOADALL;
  /* 00502b72 fadd dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00502b75 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502b78 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502b79 mov eax, 0x6501ac */ { eax = (u32)(0x6501acu); }
  /* 00502b7e fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00502b81 call 0x560ed0 */ esp -= 4; M32(esp) = 0x502b86u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x502b81u); RETCHK(0x502b86u, 0x502b81u); LOADALL;
  /* 00502b86 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502b87 call 0x5fea82 */ esp -= 4; M32(esp) = 0x502b8cu; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x502b87u); RETCHK(0x502b8cu, 0x502b87u); LOADALL;
  /* 00502b8c fadd dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00502b8f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502b92 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502b93 mov eax, 0x650304 */ { eax = (u32)(0x650304u); }
  /* 00502b98 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00502b9b call 0x560ed0 */ esp -= 4; M32(esp) = 0x502ba0u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x502b9bu); RETCHK(0x502ba0u, 0x502b9bu); LOADALL;
  /* 00502ba0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502ba1 call 0x5fea82 */ esp -= 4; M32(esp) = 0x502ba6u; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x502ba1u); RETCHK(0x502ba6u, 0x502ba1u); LOADALL;
  /* 00502ba6 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00502ba9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502bac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502bad mov eax, 0x6502fc */ { eax = (u32)(0x6502fcu); }
  /* 00502bb2 call 0x560ed0 */ esp -= 4; M32(esp) = 0x502bb7u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x502bb2u); RETCHK(0x502bb7u, 0x502bb2u); LOADALL;
  /* 00502bb7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502bb8 call 0x5fea82 */ esp -= 4; M32(esp) = 0x502bbdu; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x502bb8u); RETCHK(0x502bbdu, 0x502bb8u); LOADALL;
  /* 00502bbd fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00502bc0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502bc3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502bc4 mov eax, 0x6502f4 */ { eax = (u32)(0x6502f4u); }
  /* 00502bc9 call 0x560ed0 */ esp -= 4; M32(esp) = 0x502bceu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x502bc9u); RETCHK(0x502bceu, 0x502bc9u); LOADALL;
  /* 00502bce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502bcf call 0x5fea82 */ esp -= 4; M32(esp) = 0x502bd4u; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x502bcfu); RETCHK(0x502bd4u, 0x502bcfu); LOADALL;
  /* 00502bd4 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00502bd7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502bda push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502bdb mov eax, 0x6502e8 */ { eax = (u32)(0x6502e8u); }
  /* 00502be0 call 0x560ed0 */ esp -= 4; M32(esp) = 0x502be5u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x502be0u); RETCHK(0x502be5u, 0x502be0u); LOADALL;
  /* 00502be5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502be6 call 0x5fea82 */ esp -= 4; M32(esp) = 0x502bebu; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x502be6u); RETCHK(0x502bebu, 0x502be6u); LOADALL;
  /* 00502beb fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00502bee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502bf1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502bf2 mov eax, 0x6502e0 */ { eax = (u32)(0x6502e0u); }
  /* 00502bf7 call 0x560ed0 */ esp -= 4; M32(esp) = 0x502bfcu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x502bf7u); RETCHK(0x502bfcu, 0x502bf7u); LOADALL;
  /* 00502bfc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502bfd call 0x5fea82 */ esp -= 4; M32(esp) = 0x502c02u; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x502bfdu); RETCHK(0x502c02u, 0x502bfdu); LOADALL;
  /* 00502c02 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00502c05 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502c08 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502c09 mov eax, 0x6502d4 */ { eax = (u32)(0x6502d4u); }
  /* 00502c0e call 0x560ed0 */ esp -= 4; M32(esp) = 0x502c13u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x502c0eu); RETCHK(0x502c13u, 0x502c0eu); LOADALL;
  /* 00502c13 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502c14 call 0x5fea82 */ esp -= 4; M32(esp) = 0x502c19u; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x502c14u); RETCHK(0x502c19u, 0x502c14u); LOADALL;
  /* 00502c19 fst dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); }
  /* 00502c1c fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 00502c1e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502c21 fcomp qword ptr [0x6570a8] */ { const u32 m_ = (u32)(0x6570a8u); c->fsw = fcom_sw(c->fsw, ST(0), MF64(m_)); FPOP(); }
  /* 00502c27 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00502c29 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00502c2c jne 0x502c3a */ if (!ZF_) goto L_00502c3a;
  /* 00502c2e mov dword ptr [ebx + 0x1dc], 0 */ { const u32 m_ = (u32)(ebx + 0x1dcu); M32(m_) = (u32)(0x0u); }
  /* 00502c38 jmp 0x502c44 */ goto L_00502c44;
L_00502c3a:;
  /* 00502c3a mov dword ptr [ebx + 0x1dc], 2 */ { const u32 m_ = (u32)(ebx + 0x1dcu); M32(m_) = (u32)(0x2u); }
L_00502c44:;
  /* 00502c44 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00502c47 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00502c49 je 0x502c57 */ if (ZF_) goto L_00502c57;
  /* 00502c4b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502c4c lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00502c4f call 0x52d060 */ esp -= 4; M32(esp) = 0x502c54u; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x502c4fu); RETCHK(0x502c54u, 0x502c4fu); LOADALL;
  /* 00502c54 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00502c57:;
  /* 00502c57 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502c58 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 00502c5d call 0x560ed0 */ esp -= 4; M32(esp) = 0x502c62u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x502c5du); RETCHK(0x502c62u, 0x502c5du); LOADALL;
  /* 00502c62 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00502c64 mov dword ptr [ebp - 0x34], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0xfu); }
  /* 00502c6b mov dword ptr [ebp - 0x38], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x0u); }
  /* 00502c72 mov byte ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)(0x0u); }
  /* 00502c76 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
  /* 00502c79 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00502c80:;
  /* 00502c80 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00502c82 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00502c83 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00502c85 jne 0x502c80 */ if (!ZF_) goto L_00502c80;
  /* 00502c87 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00502c89 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00502c8a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502c8b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00502c8e call 0x404420 */ esp -= 4; M32(esp) = 0x502c93u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x502c8eu); RETCHK(0x502c93u, 0x502c8eu); LOADALL;
  /* 00502c93 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00502c96 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00502c99 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00502c9c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00502c9d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00502c9e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502c9f sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502ca2 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00502ca5 mov eax, esp */ { eax = (u32)(esp); }
  /* 00502ca7 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00502cae mov dword ptr [ebp + 8], esp */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esp); }
  /* 00502cb1 call 0x52cea0 */ esp -= 4; M32(esp) = 0x502cb6u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x502cb1u); RETCHK(0x502cb6u, 0x502cb1u); LOADALL;
  /* 00502cb6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00502cb8 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00502cbb lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00502cbe mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00502cc0 call 0x502cf0 */ esp -= 4; M32(esp) = 0x502cc5u; SAVEALL; F_00502cf0(c); ABI_CHECK(0x502cf0u, 0x502cc0u); RETCHK(0x502cc5u, 0x502cc0u); LOADALL;
  /* 00502cc5 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502cc9 jb 0x502cd7 */ if (CF_) goto L_00502cd7;
  /* 00502ccb mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 00502cce push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00502ccf call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x502cd4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x502ccfu); RETCHK(0x502cd4u, 0x502ccfu); LOADALL;
  /* 00502cd4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00502cd7:;
  /* 00502cd7 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00502cda pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00502cdb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00502cdc mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00502cde mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00502ce5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00502ce6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00502ce8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00502ce9 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00502cf0(CPU *c) {
  NATIVE_HOOK(0x502cf0u) REGS; LOADALL;
L_00502cf0:;
  /* 00502cf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00502cf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00502cf3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502cf6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00502cf7 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00502cf9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00502cfb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00502cfd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502cfe lea ecx, [edi + 0x20] */ ecx = (u32)((u32)(edi + 0x20u));
  /* 00502d01 call 0x404140 */ esp -= 4; M32(esp) = 0x502d06u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x502d01u); RETCHK(0x502d06u, 0x502d01u); LOADALL;
  /* 00502d06 lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 00502d09 lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 00502d0c lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00502d0f call 0x52cee0 */ esp -= 4; M32(esp) = 0x502d14u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x502d0fu); RETCHK(0x502d14u, 0x502d0fu); LOADALL;
  /* 00502d14 fld dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 00502d17 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00502d19 fsub dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00502d1c lea ecx, [edi + 0x1b8] */ ecx = (u32)((u32)(edi + 0x1b8u));
  /* 00502d22 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00502d24 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00502d27 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00502d2d mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00502d30 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00502d33 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00502d36 mov dword ptr [edi + 0x1b0], eax */ { const u32 m_ = (u32)(edi + 0x1b0u); M32(m_) = (u32)(eax); }
  /* 00502d3c mov eax, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); eax = (u32)(M32(m_)); }
  /* 00502d3f mov dword ptr [edi + 0x1cc], eax */ { const u32 m_ = (u32)(edi + 0x1ccu); M32(m_) = (u32)(eax); }
  /* 00502d45 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00502d47 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 00502d4a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00502d4d mov ecx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 00502d50 mov edx, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); edx = (u32)(M32(m_)); }
  /* 00502d53 mov dword ptr [edi + 0x1c4], ecx */ { const u32 m_ = (u32)(edi + 0x1c4u); M32(m_) = (u32)(ecx); }
  /* 00502d59 mov dword ptr [edi + 0x1c8], edx */ { const u32 m_ = (u32)(edi + 0x1c8u); M32(m_) = (u32)(edx); }
  /* 00502d5f je 0x502d69 */ if (ZF_) goto L_00502d69;
  /* 00502d61 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00502d63 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 00502d66 fsub dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00502d69:;
  /* 00502d69 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 00502d6c fsub dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00502d6f fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00502d75 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00502d77 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00502d7a je 0x502d84 */ if (ZF_) goto L_00502d84;
  /* 00502d7c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00502d7e fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00502d81 fsub dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00502d84:;
  /* 00502d84 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00502d86 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502d89 fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 00502d8b fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00502d8f fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 00502d91 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00502d94 call 0x518bb0 */ esp -= 4; M32(esp) = 0x502d99u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x502d94u); RETCHK(0x502d99u, 0x502d94u); LOADALL;
  /* 00502d99 call 0x518170 */ esp -= 4; M32(esp) = 0x502d9eu; SAVEALL; F_00518170(c); ABI_CHECK(0x518170u, 0x502d99u); RETCHK(0x502d9eu, 0x502d99u); LOADALL;
  /* 00502d9e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502d9f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502da0 call 0x503110 */ esp -= 4; M32(esp) = 0x502da5u; SAVEALL; F_00503110(c); ABI_CHECK(0x503110u, 0x502da0u); RETCHK(0x502da5u, 0x502da0u); LOADALL;
  /* 00502da5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00502da7 mov dword ptr [edi + 0x1b4], eax */ { const u32 m_ = (u32)(edi + 0x1b4u); M32(m_) = (u32)(eax); }
  /* 00502dad je 0x502dd5 */ if (ZF_) goto L_00502dd5;
  /* 00502daf push 0x94 */ { u32 v_ = 0x94u; esp -= 4; M32(esp) = v_; }
  /* 00502db4 call 0x5fe934 */ esp -= 4; M32(esp) = 0x502db9u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x502db4u); RETCHK(0x502db9u, 0x502db4u); LOADALL;
  /* 00502db9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502dbc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00502dbe je 0x502dc9 */ if (ZF_) goto L_00502dc9;
  /* 00502dc0 mov esi, eax */ { esi = (u32)(eax); }
  /* 00502dc2 call 0x5267c0 */ esp -= 4; M32(esp) = 0x502dc7u; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x502dc2u); RETCHK(0x502dc7u, 0x502dc2u); LOADALL;
  /* 00502dc7 jmp 0x502dcb */ goto L_00502dcb;
L_00502dc9:;
  /* 00502dc9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00502dcb:;
  /* 00502dcb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00502dcd mov dword ptr [edi + 0x1ac], eax */ { const u32 m_ = (u32)(edi + 0x1acu); M32(m_) = (u32)(eax); }
  /* 00502dd3 jne 0x502dde */ if (!ZF_) goto L_00502dde;
L_00502dd5:;
  /* 00502dd5 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00502dd7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00502dd8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00502dda pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00502ddb ret 0x20 */ c->popped = M32(esp); esp += 36u; SAVEALL; return;
L_00502dde:;
  /* 00502dde mov eax, edi */ { eax = (u32)(edi); }
  /* 00502de0 call 0x5033f0 */ esp -= 4; M32(esp) = 0x502de5u; SAVEALL; F_005033f0(c); ABI_CHECK(0x5033f0u, 0x502de0u); RETCHK(0x502de5u, 0x502de0u); LOADALL;
  /* 00502de5 inc dword ptr [0x7a6d00] */ { const u32 m_ = (u32)(0x7a6d00u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00502deb mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00502ded pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00502dee mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00502df0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00502df1 ret 0x20 */ c->popped = M32(esp); esp += 36u; SAVEALL; return;
}

void F_00502e00(CPU *c) {
  NATIVE_HOOK(0x502e00u) REGS; LOADALL;
L_00502e00:;
  /* 00502e00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00502e01 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00502e03 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502e04 mov edi, esi */ { edi = (u32)(esi); }
  /* 00502e06 call 0x5033b0 */ esp -= 4; M32(esp) = 0x502e0bu; SAVEALL; F_005033b0(c); ABI_CHECK(0x5033b0u, 0x502e06u); RETCHK(0x502e0bu, 0x502e06u); LOADALL;
  /* 00502e0b mov edx, dword ptr [esi + 0x1ac] */ { const u32 m_ = (u32)(esi + 0x1acu); edx = (u32)(M32(m_)); }
  /* 00502e11 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00502e13 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502e15 je 0x502e2d */ if (ZF_) goto L_00502e2d;
  /* 00502e17 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00502e19 call 0x5267e0 */ esp -= 4; M32(esp) = 0x502e1eu; SAVEALL; F_005267e0(c); ABI_CHECK(0x5267e0u, 0x502e19u); RETCHK(0x502e1eu, 0x502e19u); LOADALL;
  /* 00502e1e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00502e1f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x502e24u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x502e1fu); RETCHK(0x502e24u, 0x502e1fu); LOADALL;
  /* 00502e24 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502e27 mov dword ptr [esi + 0x1ac], edi */ { const u32 m_ = (u32)(esi + 0x1acu); M32(m_) = (u32)(edi); }
L_00502e2d:;
  /* 00502e2d call 0x503090 */ esp -= 4; M32(esp) = 0x502e32u; SAVEALL; F_00503090(c); ABI_CHECK(0x503090u, 0x502e2du); RETCHK(0x502e32u, 0x502e2du); LOADALL;
  /* 00502e32 dec dword ptr [0x7a6d00] */ { const u32 m_ = (u32)(0x7a6d00u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00502e38 jns 0x502e40 */ if (!SF_) goto L_00502e40;
  /* 00502e3a mov dword ptr [0x7a6d00], edi */ { const u32 m_ = (u32)(0x7a6d00u); M32(m_) = (u32)(edi); }
L_00502e40:;
  /* 00502e40 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00502e41 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00502e42 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00502e50(CPU *c) {
  NATIVE_HOOK(0x502e50u) REGS; LOADALL;
L_00502e50:;
  /* 00502e50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00502e51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00502e53 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502e56 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502e57 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00502e59 mov eax, dword ptr [edi + 0x1b0] */ { const u32 m_ = (u32)(edi + 0x1b0u); eax = (u32)(M32(m_)); }
  /* 00502e5f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00502e61 je 0x502f18 */ if (ZF_) goto L_00502f18;
  /* 00502e67 mov eax, dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); eax = (u32)(M32(m_)); }
  /* 00502e6d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00502e6f je 0x502f18 */ if (ZF_) goto L_00502f18;
  /* 00502e75 mov eax, dword ptr [edi + 0x1ac] */ { const u32 m_ = (u32)(edi + 0x1acu); eax = (u32)(M32(m_)); }
  /* 00502e7b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00502e7d je 0x502f18 */ if (ZF_) goto L_00502f18;
  /* 00502e83 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00502e84 lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 00502e87 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00502e8a call 0x52cea0 */ esp -= 4; M32(esp) = 0x502e8fu; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x502e8au); RETCHK(0x502e8fu, 0x502e8au); LOADALL;
  /* 00502e8f mov eax, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00502e92 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502e93 lea esi, [ebp - 0x18] */ esi = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00502e96 call 0x52cf90 */ esp -= 4; M32(esp) = 0x502e9bu; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x502e96u); RETCHK(0x502e9bu, 0x502e96u); LOADALL;
  /* 00502e9b mov ecx, dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); ecx = (u32)(M32(m_)); }
  /* 00502ea1 mov ecx, dword ptr [ecx + 0x60] */ { const u32 m_ = (u32)(ecx + 0x60u); ecx = (u32)(M32(m_)); }
  /* 00502ea4 mov eax, dword ptr [edi + 0x1ac] */ { const u32 m_ = (u32)(edi + 0x1acu); eax = (u32)(M32(m_)); }
  /* 00502eaa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502ead call 0x526830 */ esp -= 4; M32(esp) = 0x502eb2u; SAVEALL; F_00526830(c); ABI_CHECK(0x526830u, 0x502eadu); RETCHK(0x502eb2u, 0x502eadu); LOADALL;
  /* 00502eb2 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00502eb5 fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00502eb8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00502eb9 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00502ebf fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00502ec1 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00502ec4 je 0x502ece */ if (ZF_) goto L_00502ece;
  /* 00502ec6 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00502ec8 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00502ecb fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00502ece:;
  /* 00502ece fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00502ed1 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00502ed4 fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00502ed7 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00502edd fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00502edf test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00502ee2 je 0x502eec */ if (ZF_) goto L_00502eec;
  /* 00502ee4 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00502ee6 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00502ee9 fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00502eec:;
  /* 00502eec mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00502eef fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00502ef2 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00502ef5 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00502ef8 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00502efd push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00502f02 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00502f04 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00502f06 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00502f07 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 00502f0a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502f0b mov eax, dword ptr [edi + 0x1ac] */ { const u32 m_ = (u32)(edi + 0x1acu); eax = (u32)(M32(m_)); }
  /* 00502f11 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00502f12 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00502f13 call 0x526bd0 */ esp -= 4; M32(esp) = 0x502f18u; SAVEALL; F_00526bd0(c); ABI_CHECK(0x526bd0u, 0x502f13u); RETCHK(0x502f18u, 0x502f13u); LOADALL;
L_00502f18:;
  /* 00502f18 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00502f19 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00502f1b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00502f1c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00502f20(CPU *c) {
  NATIVE_HOOK(0x502f20u) REGS; LOADALL;
L_00502f20:;
  /* 00502f20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00502f21 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00502f23 call 0x503300 */ esp -= 4; M32(esp) = 0x502f28u; SAVEALL; F_00503300(c); ABI_CHECK(0x503300u, 0x502f23u); RETCHK(0x502f28u, 0x502f23u); LOADALL;
  /* 00502f28 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00502f29 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00502f30(CPU *c) {
  NATIVE_HOOK(0x502f30u) REGS; LOADALL;
L_00502f30:;
  /* 00502f30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00502f31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00502f33 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00502f34 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502f35 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00502f38 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00502f3a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502f3b mov eax, esi */ { eax = (u32)(esi); }
  /* 00502f3d call 0x5034a0 */ esp -= 4; M32(esp) = 0x502f42u; SAVEALL; F_005034a0(c); ABI_CHECK(0x5034a0u, 0x502f3du); RETCHK(0x502f42u, 0x502f3du); LOADALL;
  /* 00502f42 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00502f44 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00502f46 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x502f49u; SAVEALL; call_ind(c, t_); RETCHK(0x502f49u, 0x502f46u); LOADALL; }
  /* 00502f49 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00502f4b je 0x502f95 */ if (ZF_) goto L_00502f95;
  /* 00502f4d mov eax, dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); eax = (u32)(M32(m_)); }
  /* 00502f53 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00502f55 je 0x502f95 */ if (ZF_) goto L_00502f95;
  /* 00502f57 mov eax, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); eax = (u32)(M32(m_)); }
  /* 00502f5d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00502f5f jne 0x502f69 */ if (!ZF_) goto L_00502f69;
  /* 00502f61 fld dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); FPUSH((double)MF32(m_)); }
  /* 00502f67 jmp 0x502f74 */ goto L_00502f74;
L_00502f69:;
  /* 00502f69 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502f6c jne 0x502f89 */ if (!ZF_) goto L_00502f89;
  /* 00502f6e fld dword ptr [esi + 0x1e4] */ { const u32 m_ = (u32)(esi + 0x1e4u); FPUSH((double)MF32(m_)); }
L_00502f74:;
  /* 00502f74 fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 00502f76 fcomp dword ptr [0x656d98] */ { const u32 m_ = (u32)(0x656d98u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00502f7c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00502f7e test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00502f81 jne 0x502f89 */ if (!ZF_) goto L_00502f89;
  /* 00502f83 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502f84 call 0x503400 */ esp -= 4; M32(esp) = 0x502f89u; SAVEALL; F_00503400(c); ABI_CHECK(0x503400u, 0x502f84u); RETCHK(0x502f89u, 0x502f84u); LOADALL;
L_00502f89:;
  /* 00502f89 mov ecx, dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); ecx = (u32)(M32(m_)); }
  /* 00502f8f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00502f91 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502f92 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x502f95u; SAVEALL; call_ind(c, t_); RETCHK(0x502f95u, 0x502f92u); LOADALL; }
L_00502f95:;
  /* 00502f95 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00502f96 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00502f97 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00502f98 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00502fa0(CPU *c) {
  NATIVE_HOOK(0x502fa0u) REGS; LOADALL;
L_00502fa0:;
  /* 00502fa0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00502fa1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00502fa3 sub esp, 0x68 */ { u32 a_ = esp, b_ = 0x68u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00502fa6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00502fa7 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00502fa9 mov eax, dword ptr [ebx + 0x1b0] */ { const u32 m_ = (u32)(ebx + 0x1b0u); eax = (u32)(M32(m_)); }
  /* 00502faf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00502fb1 je 0x503083 */ if (ZF_) goto L_00503083;
  /* 00502fb7 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00502fb9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00502fbb call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x502fbeu; SAVEALL; call_ind(c, t_); RETCHK(0x502fbeu, 0x502fbbu); LOADALL; }
  /* 00502fbe mov ecx, dword ptr [ebx + 0x1b4] */ { const u32 m_ = (u32)(ebx + 0x1b4u); ecx = (u32)(M32(m_)); }
  /* 00502fc4 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00502fc6 je 0x503083 */ if (ZF_) goto L_00503083;
  /* 00502fcc mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00502fcf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00502fd0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00502fd1 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00502fd4 lea edi, [ecx + 0x10] */ edi = (u32)((u32)(ecx + 0x10u));
  /* 00502fd7 lea esi, [eax + 0x10] */ esi = (u32)((u32)(eax + 0x10u));
  /* 00502fda mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 00502fdf rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00502fe1 mov ecx, dword ptr [ebx + 0x1c4] */ { const u32 m_ = (u32)(ebx + 0x1c4u); ecx = (u32)(M32(m_)); }
  /* 00502fe7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00502fe9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00502fea lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00502fed push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00502fee lea eax, [ebp - 0x68] */ eax = (u32)((u32)(ebp + 0xffffff98u));
  /* 00502ff1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00502ff2 mov dword ptr [ebp - 0x10], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x3f800000u); }
  /* 00502ff9 mov dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x0u); }
  /* 00503000 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 00503007 mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 0050300e mov dword ptr [ebp - 0x18], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x3f800000u); }
  /* 00503015 mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 0050301c call 0x5aefe0 */ esp -= 4; M32(esp) = 0x503021u; SAVEALL; F_005aefe0(c); ABI_CHECK(0x5aefe0u, 0x50301cu); RETCHK(0x503021u, 0x50301cu); LOADALL;
  /* 00503021 mov ecx, dword ptr [ebx + 0x1c8] */ { const u32 m_ = (u32)(ebx + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00503027 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00503029 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050302a lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050302d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050302e lea eax, [ebp - 0x68] */ eax = (u32)((u32)(ebp + 0xffffff98u));
  /* 00503031 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503032 call 0x5aefe0 */ esp -= 4; M32(esp) = 0x503037u; SAVEALL; F_005aefe0(c); ABI_CHECK(0x5aefe0u, 0x503032u); RETCHK(0x503037u, 0x503032u); LOADALL;
  /* 00503037 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0050303a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050303b add ebx, 0x1b8 */ { u32 a_ = ebx, b_ = 0x1b8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00503041 lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00503044 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00503045 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00503046 call 0x5aac00 */ esp -= 4; M32(esp) = 0x50304bu; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x503046u); RETCHK(0x50304bu, 0x503046u); LOADALL;
  /* 0050304b push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0050304d lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00503050 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503051 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00503054 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00503055 call 0x5af460 */ esp -= 4; M32(esp) = 0x50305au; SAVEALL; F_005af460(c); ABI_CHECK(0x5af460u, 0x503055u); RETCHK(0x50305au, 0x503055u); LOADALL;
  /* 0050305a mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 0050305d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050305f lea edx, [ebp - 0x68] */ edx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00503062 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00503063 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00503066 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503067 call 0x5af5b0 */ esp -= 4; M32(esp) = 0x50306cu; SAVEALL; F_005af5b0(c); ABI_CHECK(0x5af5b0u, 0x503067u); RETCHK(0x50306cu, 0x503067u); LOADALL;
  /* 0050306c add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050306f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503070 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x503075u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x503070u); RETCHK(0x503075u, 0x503070u); LOADALL;
  /* 00503075 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00503078 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503079 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x50307eu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x503079u); RETCHK(0x50307eu, 0x503079u); LOADALL;
  /* 0050307e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00503081 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00503082 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00503083:;
  /* 00503083 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00503084 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00503086 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00503087 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00503090(CPU *c) {
  NATIVE_HOOK(0x503090u) REGS; LOADALL;
L_00503090:;
  /* 00503090 mov ecx, dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); ecx = (u32)(M32(m_)); }
  /* 00503096 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00503098 je 0x5030b9 */ if (ZF_) goto L_005030b9;
  /* 0050309a mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050309c call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50309fu; SAVEALL; call_ind(c, t_); RETCHK(0x50309fu, 0x50309cu); LOADALL; }
  /* 0050309f mov ecx, dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); ecx = (u32)(M32(m_)); }
  /* 005030a5 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005030a7 je 0x5030af */ if (ZF_) goto L_005030af;
  /* 005030a9 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005030ab push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005030ad call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5030afu; SAVEALL; call_ind(c, t_); RETCHK(0x5030afu, 0x5030adu); LOADALL; }
L_005030af:;
  /* 005030af mov dword ptr [esi + 0x1b0], 0 */ { const u32 m_ = (u32)(esi + 0x1b0u); M32(m_) = (u32)(0x0u); }
L_005030b9:;
  /* 005030b9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005030c0(CPU *c) {
  NATIVE_HOOK(0x5030c0u) REGS; LOADALL;
L_005030c0:;
  /* 005030c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005030c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005030c3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005030c4 mov esi, eax */ { esi = (u32)(eax); }
  /* 005030c6 call 0x503090 */ esp -= 4; M32(esp) = 0x5030cbu; SAVEALL; F_00503090(c); ABI_CHECK(0x503090u, 0x5030c6u); RETCHK(0x5030cbu, 0x5030c6u); LOADALL;
  /* 005030cb mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005030ce mov dword ptr [esi + 0x1b0], eax */ { const u32 m_ = (u32)(esi + 0x1b0u); M32(m_) = (u32)(eax); }
  /* 005030d4 mov eax, esi */ { eax = (u32)(esi); }
  /* 005030d6 call 0x5033f0 */ esp -= 4; M32(esp) = 0x5030dbu; SAVEALL; F_005033f0(c); ABI_CHECK(0x5033f0u, 0x5030d6u); RETCHK(0x5030dbu, 0x5030d6u); LOADALL;
  /* 005030db mov al, byte ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005030e1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005030e3 jne 0x5030ec */ if (!ZF_) goto L_005030ec;
  /* 005030e5 mov eax, esi */ { eax = (u32)(esi); }
  /* 005030e7 call 0x5035c0 */ esp -= 4; M32(esp) = 0x5030ecu; SAVEALL; F_005035c0(c); ABI_CHECK(0x5035c0u, 0x5030e7u); RETCHK(0x5030ecu, 0x5030e7u); LOADALL;
L_005030ec:;
  /* 005030ec mov al, byte ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005030f2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005030f4 jne 0x503102 */ if (!ZF_) goto L_00503102;
  /* 005030f6 mov ecx, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 005030fc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005030fd call 0x503650 */ esp -= 4; M32(esp) = 0x503102u; SAVEALL; F_00503650(c); ABI_CHECK(0x503650u, 0x5030fdu); RETCHK(0x503102u, 0x5030fdu); LOADALL;
L_00503102:;
  /* 00503102 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00503103 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00503104 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00503110(CPU *c) {
  NATIVE_HOOK(0x503110u) REGS; LOADALL;
L_00503110:;
  /* 00503110 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00503111 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00503113 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00503116 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00503119 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050311b jne 0x503125 */ if (!ZF_) goto L_00503125;
  /* 0050311d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050311f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00503121 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00503122 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_00503125:;
  /* 00503125 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 00503128 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00503129 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050312a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050312b call 0x61b154 */ esp -= 4; M32(esp) = 0x503130u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50312bu); RETCHK(0x503130u, 0x50312bu); LOADALL;
  /* 00503130 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 00503133 mov esi, eax */ { esi = (u32)(eax); }
  /* 00503135 call 0x61b154 */ esp -= 4; M32(esp) = 0x50313au; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x503135u); RETCHK(0x50313au, 0x503135u); LOADALL;
  /* 0050313a push 0x500 */ { u32 v_ = 0x500u; esp -= 4; M32(esp) = v_; }
  /* 0050313f mov edi, eax */ { edi = (u32)(eax); }
  /* 00503141 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 00503143 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00503148 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503149 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050314a mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050314c call 0x558ad0 */ esp -= 4; M32(esp) = 0x503151u; SAVEALL; F_00558ad0(c); ABI_CHECK(0x558ad0u, 0x50314cu); RETCHK(0x503151u, 0x50314cu); LOADALL;
  /* 00503151 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00503153 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00503156 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00503158 jne 0x50319a */ if (!ZF_) goto L_0050319a;
  /* 0050315a push 0x300 */ { u32 v_ = 0x300u; esp -= 4; M32(esp) = v_; }
  /* 0050315f push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00503161 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00503166 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503167 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00503168 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050316a call 0x558ad0 */ esp -= 4; M32(esp) = 0x50316fu; SAVEALL; F_00558ad0(c); ABI_CHECK(0x558ad0u, 0x50316au); RETCHK(0x50316fu, 0x50316au); LOADALL;
  /* 0050316f mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00503171 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00503174 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00503176 jne 0x50319a */ if (!ZF_) goto L_0050319a;
  /* 00503178 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0050317d push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0050317f mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00503184 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503185 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00503186 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00503188 call 0x558ad0 */ esp -= 4; M32(esp) = 0x50318du; SAVEALL; F_00558ad0(c); ABI_CHECK(0x558ad0u, 0x503188u); RETCHK(0x50318du, 0x503188u); LOADALL;
  /* 0050318d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050318f add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00503192 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00503194 je 0x503262 */ if (ZF_) goto L_00503262;
L_0050319a:;
  /* 0050319a fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0050319d lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005031a0 fdiv dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 005031a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005031a4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005031a5 mov dword ptr [ebp - 8], 0x3f000000 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x3f000000u); }
  /* 005031ac fdivr dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 005031b2 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005031b5 call 0x5afe00 */ esp -= 4; M32(esp) = 0x5031bau; SAVEALL; F_005afe00(c); ABI_CHECK(0x5afe00u, 0x5031b5u); RETCHK(0x5031bau, 0x5031b5u); LOADALL;
  /* 005031ba push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 005031bf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005031c0 call 0x5afbc0 */ esp -= 4; M32(esp) = 0x5031c5u; SAVEALL; F_005afbc0(c); ABI_CHECK(0x5afbc0u, 0x5031c0u); RETCHK(0x5031c5u, 0x5031c0u); LOADALL;
  /* 005031c5 push 0x42c80000 */ { u32 v_ = 0x42c80000u; esp -= 4; M32(esp) = v_; }
  /* 005031ca push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005031cb call 0x5afc90 */ esp -= 4; M32(esp) = 0x5031d0u; SAVEALL; F_005afc90(c); ABI_CHECK(0x5afc90u, 0x5031cbu); RETCHK(0x5031d0u, 0x5031cbu); LOADALL;
  /* 005031d0 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005031d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005031d4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005031d5 call 0x57ad10 */ esp -= 4; M32(esp) = 0x5031dau; SAVEALL; F_0057ad10(c); ABI_CHECK(0x57ad10u, 0x5031d5u); RETCHK(0x5031dau, 0x5031d5u); LOADALL;
  /* 005031da mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005031dd add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005031e0 lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 005031e3 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005031e6 call 0x52cea0 */ esp -= 4; M32(esp) = 0x5031ebu; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x5031e6u); RETCHK(0x5031ebu, 0x5031e6u); LOADALL;
  /* 005031eb mov edx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); edx = (u32)(M32(m_)); }
  /* 005031ee push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005031ef lea esi, [ebp - 0x18] */ esi = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005031f2 call 0x52cf90 */ esp -= 4; M32(esp) = 0x5031f7u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x5031f2u); RETCHK(0x5031f7u, 0x5031f2u); LOADALL;
  /* 005031f7 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 005031fa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005031fd call 0x61b154 */ esp -= 4; M32(esp) = 0x503202u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5031fdu); RETCHK(0x503202u, 0x5031fdu); LOADALL;
  /* 00503202 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00503205 mov dword ptr [edi + 0x184], eax */ { const u32 m_ = (u32)(edi + 0x184u); M32(m_) = (u32)(eax); }
  /* 0050320b call 0x61b154 */ esp -= 4; M32(esp) = 0x503210u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50320bu); RETCHK(0x503210u, 0x50320bu); LOADALL;
  /* 00503210 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00503213 fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00503216 mov dword ptr [edi + 0x188], eax */ { const u32 m_ = (u32)(edi + 0x188u); M32(m_) = (u32)(eax); }
  /* 0050321c fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00503222 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00503224 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00503227 je 0x503231 */ if (ZF_) goto L_00503231;
  /* 00503229 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050322b fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 0050322e fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00503231:;
  /* 00503231 call 0x61b154 */ esp -= 4; M32(esp) = 0x503236u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x503231u); RETCHK(0x503236u, 0x503231u); LOADALL;
  /* 00503236 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00503239 fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050323c mov dword ptr [edi + 0x18c], eax */ { const u32 m_ = (u32)(edi + 0x18cu); M32(m_) = (u32)(eax); }
  /* 00503242 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00503248 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050324a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050324d je 0x503257 */ if (ZF_) goto L_00503257;
  /* 0050324f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00503251 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00503254 fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00503257:;
  /* 00503257 call 0x61b154 */ esp -= 4; M32(esp) = 0x50325cu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x503257u); RETCHK(0x50325cu, 0x503257u); LOADALL;
  /* 0050325c mov dword ptr [edi + 0x190], eax */ { const u32 m_ = (u32)(edi + 0x190u); M32(m_) = (u32)(eax); }
L_00503262:;
  /* 00503262 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00503263 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00503264 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00503266 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00503267 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00503269 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050326a ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00503270(CPU *c) {
  NATIVE_HOOK(0x503270u) REGS; LOADALL;
L_00503270:;
  /* 00503270 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00503271 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00503273 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00503276 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00503279 mov edx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); edx = (u32)(M32(m_)); }
  /* 0050327c fadd dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050327f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00503282 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00503285 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503286 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503289 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050328a fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0050328d lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00503290 fadd dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00503293 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00503296 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 00503299 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050329c call 0x52d060 */ esp -= 4; M32(esp) = 0x5032a1u; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x50329cu); RETCHK(0x5032a1u, 0x50329cu); LOADALL;
  /* 005032a1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005032a4 lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 005032a7 mov edx, esi */ { edx = (u32)(esi); }
  /* 005032a9 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 005032ac call 0x52cee0 */ esp -= 4; M32(esp) = 0x5032b1u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x5032acu); RETCHK(0x5032b1u, 0x5032acu); LOADALL;
  /* 005032b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005032b2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005032b4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005032b5 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_005032c0(CPU *c) {
  NATIVE_HOOK(0x5032c0u) REGS; LOADALL;
L_005032c0:;
  /* 005032c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005032c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005032c3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005032c4 mov edi, eax */ { edi = (u32)(eax); }
  /* 005032c6 call 0x5033b0 */ esp -= 4; M32(esp) = 0x5032cbu; SAVEALL; F_005033b0(c); ABI_CHECK(0x5033b0u, 0x5032c6u); RETCHK(0x5032cbu, 0x5032c6u); LOADALL;
  /* 005032cb call 0x518bb0 */ esp -= 4; M32(esp) = 0x5032d0u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x5032cbu); RETCHK(0x5032d0u, 0x5032cbu); LOADALL;
  /* 005032d0 call 0x518170 */ esp -= 4; M32(esp) = 0x5032d5u; SAVEALL; F_00518170(c); ABI_CHECK(0x518170u, 0x5032d0u); RETCHK(0x5032d5u, 0x5032d0u); LOADALL;
  /* 005032d5 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005032d8 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005032db push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005032dc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005032dd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005032de push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005032df call 0x503110 */ esp -= 4; M32(esp) = 0x5032e4u; SAVEALL; F_00503110(c); ABI_CHECK(0x503110u, 0x5032dfu); RETCHK(0x5032e4u, 0x5032dfu); LOADALL;
  /* 005032e4 mov dword ptr [edi + 0x1b4], eax */ { const u32 m_ = (u32)(edi + 0x1b4u); M32(m_) = (u32)(eax); }
  /* 005032ea mov eax, edi */ { eax = (u32)(edi); }
  /* 005032ec call 0x502fa0 */ esp -= 4; M32(esp) = 0x5032f1u; SAVEALL; F_00502fa0(c); ABI_CHECK(0x502fa0u, 0x5032ecu); RETCHK(0x5032f1u, 0x5032ecu); LOADALL;
  /* 005032f1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005032f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005032f3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00503300(CPU *c) {
  NATIVE_HOOK(0x503300u) REGS; LOADALL;
L_00503300:;
  /* 00503300 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00503301 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00503303 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00503304 mov eax, dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); eax = (u32)(M32(m_)); }
  /* 0050330a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050330b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050330d cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050330f je 0x5033a7 */ if (ZF_) goto L_005033a7;
  /* 00503315 cmp dword ptr [esi + 0x1b4], ebx */ { const u32 m_ = (u32)(esi + 0x1b4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050331b je 0x5033a7 */ if (ZF_) goto L_005033a7;
  /* 00503321 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00503322 call 0x518bb0 */ esp -= 4; M32(esp) = 0x503327u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x503322u); RETCHK(0x503327u, 0x503322u); LOADALL;
  /* 00503327 call 0x518170 */ esp -= 4; M32(esp) = 0x50332cu; SAVEALL; F_00518170(c); ABI_CHECK(0x518170u, 0x503327u); RETCHK(0x50332cu, 0x503327u); LOADALL;
  /* 0050332c mov edi, eax */ { edi = (u32)(eax); }
  /* 0050332e cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503330 je 0x5033a6 */ if (ZF_) goto L_005033a6;
  /* 00503332 mov ecx, dword ptr [esi + 0x1b4] */ { const u32 m_ = (u32)(esi + 0x1b4u); ecx = (u32)(M32(m_)); }
  /* 00503338 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0050333a lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0050333d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050333e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050333f mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00503342 mov byte ptr [ebp - 3], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffdu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00503345 mov byte ptr [ebp - 2], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffeu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00503348 mov byte ptr [ebp - 1], bl */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050334b call 0x5afd30 */ esp -= 4; M32(esp) = 0x503350u; SAVEALL; F_005afd30(c); ABI_CHECK(0x5afd30u, 0x50334bu); RETCHK(0x503350u, 0x50334bu); LOADALL;
  /* 00503350 mov edx, dword ptr [esi + 0x1b4] */ { const u32 m_ = (u32)(esi + 0x1b4u); edx = (u32)(M32(m_)); }
  /* 00503356 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00503357 call 0x5afb80 */ esp -= 4; M32(esp) = 0x50335cu; SAVEALL; F_005afb80(c); ABI_CHECK(0x5afb80u, 0x503357u); RETCHK(0x50335cu, 0x503357u); LOADALL;
  /* 0050335c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050335f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00503361 je 0x5033a6 */ if (ZF_) goto L_005033a6;
  /* 00503363 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00503368 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050336a push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0050336c call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50336fu; SAVEALL; call_ind(c, t_); RETCHK(0x50336fu, 0x50336cu); LOADALL; }
  /* 0050336f mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00503375 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00503377 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00503379 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50337cu; SAVEALL; call_ind(c, t_); RETCHK(0x50337cu, 0x503379u); LOADALL; }
  /* 0050337c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050337d call 0x57e840 */ esp -= 4; M32(esp) = 0x503382u; SAVEALL; F_0057e840(c); ABI_CHECK(0x57e840u, 0x50337du); RETCHK(0x503382u, 0x50337du); LOADALL;
  /* 00503382 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00503385 call 0x4fb430 */ esp -= 4; M32(esp) = 0x50338au; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x503385u); RETCHK(0x50338au, 0x503385u); LOADALL;
  /* 0050338a mov edx, dword ptr [esi + 0x1b4] */ { const u32 m_ = (u32)(esi + 0x1b4u); edx = (u32)(M32(m_)); }
  /* 00503390 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00503391 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503392 call 0x4fbad0 */ esp -= 4; M32(esp) = 0x503397u; SAVEALL; F_004fbad0(c); ABI_CHECK(0x4fbad0u, 0x503392u); RETCHK(0x503397u, 0x503392u); LOADALL;
  /* 00503397 mov eax, dword ptr [esi + 0x1b4] */ { const u32 m_ = (u32)(esi + 0x1b4u); eax = (u32)(M32(m_)); }
  /* 0050339d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050339e call 0x5afb70 */ esp -= 4; M32(esp) = 0x5033a3u; SAVEALL; F_005afb70(c); ABI_CHECK(0x5afb70u, 0x50339eu); RETCHK(0x5033a3u, 0x50339eu); LOADALL;
  /* 005033a3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005033a6:;
  /* 005033a6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_005033a7:;
  /* 005033a7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005033a8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005033aa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005033ab ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005033b0(CPU *c) {
  NATIVE_HOOK(0x5033b0u) REGS; LOADALL;
L_005033b0:;
  /* 005033b0 mov eax, dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); eax = (u32)(M32(m_)); }
  /* 005033b6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005033b8 je 0x5033ee */ if (ZF_) goto L_005033ee;
  /* 005033ba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005033bb call 0x57ad70 */ esp -= 4; M32(esp) = 0x5033c0u; SAVEALL; F_0057ad70(c); ABI_CHECK(0x57ad70u, 0x5033bbu); RETCHK(0x5033c0u, 0x5033bbu); LOADALL;
  /* 005033c0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005033c3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005033c5 je 0x5033d7 */ if (ZF_) goto L_005033d7;
  /* 005033c7 mov ecx, dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); ecx = (u32)(M32(m_)); }
  /* 005033cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005033ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005033cf call 0x57ad40 */ esp -= 4; M32(esp) = 0x5033d4u; SAVEALL; F_0057ad40(c); ABI_CHECK(0x57ad40u, 0x5033cfu); RETCHK(0x5033d4u, 0x5033cfu); LOADALL;
  /* 005033d4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005033d7:;
  /* 005033d7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005033d8 mov esi, dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); esi = (u32)(M32(m_)); }
  /* 005033de call 0x5589e0 */ esp -= 4; M32(esp) = 0x5033e3u; SAVEALL; F_005589e0(c); ABI_CHECK(0x5589e0u, 0x5033deu); RETCHK(0x5033e3u, 0x5033deu); LOADALL;
  /* 005033e3 mov dword ptr [edi + 0x1b4], 0 */ { const u32 m_ = (u32)(edi + 0x1b4u); M32(m_) = (u32)(0x0u); }
  /* 005033ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_005033ee:;
  /* 005033ee ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005033f0(CPU *c) {
  NATIVE_HOOK(0x5033f0u) REGS; LOADALL;
L_005033f0:;
  /* 005033f0 jmp 0x502fa0 */ SAVEALL; F_00502fa0(c); return;
}

void F_00503400(CPU *c) {
  NATIVE_HOOK(0x503400u) REGS; LOADALL;
L_00503400:;
  /* 00503400 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00503401 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00503403 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00503406 mov ecx, dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); ecx = (u32)(M32(m_)); }
  /* 0050340c test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050340e je 0x50347e */ if (ZF_) goto L_0050347e;
  /* 00503410 mov dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x0u); }
  /* 00503417 mov dword ptr [ebp - 8], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0050341e mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00503425 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00503427 call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50342au; SAVEALL; call_ind(c, t_); RETCHK(0x50342au, 0x503427u); LOADALL; }
  /* 0050342a mov ecx, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 00503430 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00503432 jne 0x503449 */ if (!ZF_) goto L_00503449;
  /* 00503434 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00503437 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00503439 fmul dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050343f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00503440 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00503443 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503446 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00503447 jmp 0x503460 */ goto L_00503460;
L_00503449:;
  /* 00503449 cmp ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050344c jne 0x50347e */ if (!ZF_) goto L_0050347e;
  /* 0050344e fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00503451 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00503452 fmul dword ptr [esi + 0x1e4] */ { const u32 m_ = (u32)(esi + 0x1e4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00503458 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00503459 lea edx, [ebp - 0xc] */ edx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0050345c fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050345f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
L_00503460:;
  /* 00503460 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503461 call 0x5ac3d0 */ esp -= 4; M32(esp) = 0x503466u; SAVEALL; F_005ac3d0(c); ABI_CHECK(0x5ac3d0u, 0x503461u); RETCHK(0x503466u, 0x503461u); LOADALL;
  /* 00503466 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00503469 fmul dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050346f add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00503472 fadd dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00503478 fstp dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); MF32(m_) = (float)ST(0); FPOP(); }
L_0050347e:;
  /* 0050347e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00503480 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00503481 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00503490(CPU *c) {
  NATIVE_HOOK(0x503490u) REGS; LOADALL;
L_00503490:;
  /* 00503490 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00503491 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00503493 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00503496 mov dword ptr [ecx + 0x1cc], eax */ { const u32 m_ = (u32)(ecx + 0x1ccu); M32(m_) = (u32)(eax); }
  /* 0050349c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050349d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005034a0(CPU *c) {
  NATIVE_HOOK(0x5034a0u) REGS; LOADALL;
L_005034a0:;
  /* 005034a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005034a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005034a3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005034a6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005034a7 mov edi, eax */ { edi = (u32)(eax); }
  /* 005034a9 mov al, byte ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005034af test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005034b1 je 0x50359c */ if (ZF_) goto L_0050359c;
  /* 005034b7 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005034ba fadd dword ptr [edi + 0x1a8] */ { const u32 m_ = (u32)(edi + 0x1a8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005034c0 fst dword ptr [edi + 0x1a8] */ { const u32 m_ = (u32)(edi + 0x1a8u); MF32(m_) = (float)ST(0); }
  /* 005034c6 fcomp dword ptr [edi + 0x1a4] */ { const u32 m_ = (u32)(edi + 0x1a4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005034cc fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005034ce test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005034d1 jne 0x503503 */ if (!ZF_) goto L_00503503;
  /* 005034d3 fild dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); FPUSH((double)(s32)M32(m_)); }
  /* 005034d9 mov eax, dword ptr [edi + 0x1a4] */ { const u32 m_ = (u32)(edi + 0x1a4u); eax = (u32)(M32(m_)); }
  /* 005034df sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005034e2 mov dword ptr [edi + 0x1a8], eax */ { const u32 m_ = (u32)(edi + 0x1a8u); M32(m_) = (u32)(eax); }
  /* 005034e8 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005034ec mov eax, edi */ { eax = (u32)(edi); }
  /* 005034ee fild dword ptr [edi + 0x18c] */ { const u32 m_ = (u32)(edi + 0x18cu); FPUSH((double)(s32)M32(m_)); }
  /* 005034f4 mov byte ptr [edi + 0x180], 0 */ { const u32 m_ = (u32)(edi + 0x180u); M8(m_) = (u8)(0x0u); }
  /* 005034fb fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005034fe call 0x5032c0 */ esp -= 4; M32(esp) = 0x503503u; SAVEALL; F_005032c0(c); ABI_CHECK(0x5032c0u, 0x5034feu); RETCHK(0x503503u, 0x5034feu); LOADALL;
L_00503503:;
  /* 00503503 fld dword ptr [edi + 0x1a8] */ { const u32 m_ = (u32)(edi + 0x1a8u); FPUSH((double)MF32(m_)); }
  /* 00503509 mov eax, dword ptr [edi + 0x1a0] */ { const u32 m_ = (u32)(edi + 0x1a0u); eax = (u32)(M32(m_)); }
  /* 0050350f fdiv dword ptr [edi + 0x1a4] */ { const u32 m_ = (u32)(edi + 0x1a4u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00503515 mov ecx, dword ptr [edi + 0x19c] */ { const u32 m_ = (u32)(edi + 0x19cu); ecx = (u32)(M32(m_)); }
  /* 0050351b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050351c mov ebx, dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); ebx = (u32)(M32(m_)); }
  /* 00503522 mov edx, dword ptr [edi + 0x198] */ { const u32 m_ = (u32)(edi + 0x198u); edx = (u32)(M32(m_)); }
  /* 00503528 sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0050352a mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0050352d mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00503530 mov eax, dword ptr [edi + 0x18c] */ { const u32 m_ = (u32)(edi + 0x18cu); eax = (u32)(M32(m_)); }
  /* 00503536 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503537 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050353a sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050353c mov esi, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); esi = (u32)(M32(m_)); }
  /* 00503542 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 00503545 mov ecx, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); ecx = (u32)(M32(m_)); }
  /* 0050354b sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050354d mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 00503550 mov edx, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); edx = (u32)(M32(m_)); }
  /* 00503556 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00503558 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 0050355b fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050355e mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00503561 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00503563 fiadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)(s32)M32(m_)); }
  /* 00503566 fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050356a fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050356d mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00503570 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00503572 fiadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)(s32)M32(m_)); }
  /* 00503575 fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503579 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050357c mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 0050357f fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00503581 fiadd dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) + (double)(s32)M32(m_)); }
  /* 00503584 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503588 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050358b fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0050358d fiadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)(s32)M32(m_)); }
  /* 00503590 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503593 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00503595 call 0x503270 */ esp -= 4; M32(esp) = 0x50359au; SAVEALL; F_00503270(c); ABI_CHECK(0x503270u, 0x503595u); RETCHK(0x50359au, 0x503595u); LOADALL;
  /* 0050359a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050359b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0050359c:;
  /* 0050359c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050359d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050359f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005035a0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005035b0(CPU *c) {
  NATIVE_HOOK(0x5035b0u) REGS; LOADALL;
L_005035b0:;
  /* 005035b0 mov byte ptr [eax + 0x1d0], 0 */ { const u32 m_ = (u32)(eax + 0x1d0u); M8(m_) = (u8)(0x0u); }
  /* 005035b7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005035c0(CPU *c) {
  NATIVE_HOOK(0x5035c0u) REGS; LOADALL;
L_005035c0:;
  /* 005035c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005035c1 mov esi, eax */ { esi = (u32)(eax); }
  /* 005035c3 mov ecx, dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); ecx = (u32)(M32(m_)); }
  /* 005035c9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005035cb je 0x503640 */ if (ZF_) goto L_00503640;
  /* 005035cd mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005035cf xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005035d1 mov dl, byte ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005035d7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005035d8 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5035dbu; SAVEALL; call_ind(c, t_); RETCHK(0x5035dbu, 0x5035d8u); LOADALL; }
  /* 005035db mov edx, dword ptr [esi + 0x1d4] */ { const u32 m_ = (u32)(esi + 0x1d4u); edx = (u32)(M32(m_)); }
  /* 005035e1 mov ecx, dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); ecx = (u32)(M32(m_)); }
  /* 005035e7 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005035e9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005035ea push 0x23 */ { u32 v_ = 0x23u; esp -= 4; M32(esp) = v_; }
  /* 005035ec call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5035efu; SAVEALL; call_ind(c, t_); RETCHK(0x5035efu, 0x5035ecu); LOADALL; }
  /* 005035ef push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005035f1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005035f3 call 0x503490 */ esp -= 4; M32(esp) = 0x5035f8u; SAVEALL; F_00503490(c); ABI_CHECK(0x503490u, 0x5035f3u); RETCHK(0x5035f8u, 0x5035f3u); LOADALL;
  /* 005035f8 mov eax, esi */ { eax = (u32)(esi); }
  /* 005035fa mov dword ptr [esi + 0x1c4], 0 */ { const u32 m_ = (u32)(esi + 0x1c4u); M32(m_) = (u32)(0x0u); }
  /* 00503604 mov dword ptr [esi + 0x1c8], 0x43340000 */ { const u32 m_ = (u32)(esi + 0x1c8u); M32(m_) = (u32)(0x43340000u); }
  /* 0050360e mov dword ptr [esi + 0x1b8], 0x3f800000 */ { const u32 m_ = (u32)(esi + 0x1b8u); M32(m_) = (u32)(0x3f800000u); }
  /* 00503618 mov dword ptr [esi + 0x1c0], 0xc1500000 */ { const u32 m_ = (u32)(esi + 0x1c0u); M32(m_) = (u32)(0xc1500000u); }
  /* 00503622 call 0x502fa0 */ esp -= 4; M32(esp) = 0x503627u; SAVEALL; F_00502fa0(c); ABI_CHECK(0x502fa0u, 0x503622u); RETCHK(0x503627u, 0x503622u); LOADALL;
  /* 00503627 mov esi, dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); esi = (u32)(M32(m_)); }
  /* 0050362d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050362f je 0x503640 */ if (ZF_) goto L_00503640;
  /* 00503631 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00503634 mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 00503637 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00503638 mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050363a call 0x4fb100 */ esp -= 4; M32(esp) = 0x50363fu; SAVEALL; F_004fb100(c); ABI_CHECK(0x4fb100u, 0x50363au); RETCHK(0x50363fu, 0x50363au); LOADALL;
  /* 0050363f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00503640:;
  /* 00503640 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00503641 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00503650(CPU *c) {
  NATIVE_HOOK(0x503650u) REGS; LOADALL;
L_00503650:;
  /* 00503650 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00503651 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00503653 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00503656 mov ecx, dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); ecx = (u32)(M32(m_)); }
  /* 0050365c test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050365e je 0x50369a */ if (ZF_) goto L_0050369a;
  /* 00503660 mov dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x0u); }
  /* 00503667 mov dword ptr [ebp - 8], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0050366e mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00503675 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00503677 call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50367au; SAVEALL; call_ind(c, t_); RETCHK(0x50367au, 0x503677u); LOADALL; }
  /* 0050367a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050367c je 0x50369a */ if (ZF_) goto L_0050369a;
  /* 0050367e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00503681 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00503683 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00503684 lea edx, [ebp - 0xc] */ edx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00503687 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00503688 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503689 call 0x5ac3d0 */ esp -= 4; M32(esp) = 0x50368eu; SAVEALL; F_005ac3d0(c); ABI_CHECK(0x5ac3d0u, 0x503689u); RETCHK(0x50368eu, 0x503689u); LOADALL;
  /* 0050368e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00503691 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00503694 mov dword ptr [esi + 0x1d8], eax */ { const u32 m_ = (u32)(esi + 0x1d8u); M32(m_) = (u32)(eax); }
L_0050369a:;
  /* 0050369a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050369c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050369d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005036a0(CPU *c) {
  NATIVE_HOOK(0x5036a0u) REGS; LOADALL;
L_005036a0:;
  /* 005036a0 mov dword ptr [eax + 0x1dc], ecx */ { const u32 m_ = (u32)(eax + 0x1dcu); M32(m_) = (u32)(ecx); }
  /* 005036a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005036b0(CPU *c) {
  NATIVE_HOOK(0x5036b0u) REGS; LOADALL;
L_005036b0:;
  /* 005036b0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005036b2 fld dword ptr [eax + 0x1e4] */ { const u32 m_ = (u32)(eax + 0x1e4u); FPUSH((double)MF32(m_)); }
  /* 005036b8 fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 005036ba mov dword ptr [eax + 0x1e0], ecx */ { const u32 m_ = (u32)(eax + 0x1e0u); M32(m_) = (u32)(ecx); }
  /* 005036c0 jne 0x5036c4 */ if (!ZF_) goto L_005036c4;
  /* 005036c2 fchs */ ST(0) = -ST(0);
L_005036c4:;
  /* 005036c4 fstp dword ptr [eax + 0x1e4] */ { const u32 m_ = (u32)(eax + 0x1e4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005036ca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005036e0(CPU *c) {
  NATIVE_HOOK(0x5036e0u) REGS; LOADALL;
L_005036e0:;
  /* 005036e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005036e1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005036e3 mov eax, dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); eax = (u32)(M32(m_)); }
  /* 005036e9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005036eb je 0x5036f5 */ if (ZF_) goto L_005036f5;
  /* 005036ed mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005036ef mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005036f1 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005036f3 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5036f5u; SAVEALL; call_ind(c, t_); RETCHK(0x5036f5u, 0x5036f3u); LOADALL; }
L_005036f5:;
  /* 005036f5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005036f7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005036f8 jmp 0x507dd0 */ SAVEALL; F_00507dd0(c); return;
}

void F_00503700(CPU *c) {
  NATIVE_HOOK(0x503700u) REGS; LOADALL;
L_00503700:;
  /* 00503700 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503701 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00503703 mov eax, dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); eax = (u32)(M32(m_)); }
  /* 00503709 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050370b je 0x503715 */ if (ZF_) goto L_00503715;
  /* 0050370d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050370f mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00503711 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00503713 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x503715u; SAVEALL; call_ind(c, t_); RETCHK(0x503715u, 0x503713u); LOADALL; }
L_00503715:;
  /* 00503715 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00503717 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00503718 jmp 0x507e90 */ SAVEALL; F_00507e90(c); return;
}

void F_00503720(CPU *c) {
  NATIVE_HOOK(0x503720u) REGS; LOADALL;
L_00503720:;
  /* 00503720 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00503721 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00503723 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00503725 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0050372a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00503730 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503731 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00503738 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00503739 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050373a push 0x5037a0 */ { u32 v_ = 0x5037a0u; esp -= 4; M32(esp) = v_; }
  /* 0050373f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00503742 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00503744 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00503746 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00503749 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0050374c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050374e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050374f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00503752 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00503759 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0050375c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050375d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00503760 call 0x404140 */ esp -= 4; M32(esp) = 0x503765u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x503760u); RETCHK(0x503765u, 0x503760u); LOADALL;
  /* 00503765 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00503768 call 0x405c00 */ esp -= 4; M32(esp) = 0x50376du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x503768u); RETCHK(0x50376du, 0x503768u); LOADALL;
  /* 0050376d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050376f call 0x405c80 */ esp -= 4; M32(esp) = 0x503774u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x50376fu); RETCHK(0x503774u, 0x50376fu); LOADALL;
  /* 00503774 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503778 jb 0x503786 */ if (CF_) goto L_00503786;
  /* 0050377a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0050377d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050377e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x503783u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50377eu); RETCHK(0x503783u, 0x50377eu); LOADALL;
  /* 00503783 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00503786:;
  /* 00503786 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00503789 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050378b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00503792 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00503793 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00503795 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00503796 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_005037a0(CPU *c) {
  NATIVE_HOOK(0x5037a0u) REGS; LOADALL;
L_005037a0:;
  /* 005037a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005037a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005037a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005037a5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 005037aa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005037b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005037b1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005037b8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005037b9 push 0x1f0 */ { u32 v_ = 0x1f0u; esp -= 4; M32(esp) = v_; }
  /* 005037be call 0x5fe934 */ esp -= 4; M32(esp) = 0x5037c3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5037beu); RETCHK(0x5037c3u, 0x5037beu); LOADALL;
  /* 005037c3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005037c6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005037c9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005037cb mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005037d2 je 0x5037ea */ if (ZF_) goto L_005037ea;
  /* 005037d4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005037d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005037d7 call 0x5029d0 */ esp -= 4; M32(esp) = 0x5037dcu; SAVEALL; F_005029d0(c); ABI_CHECK(0x5029d0u, 0x5037d7u); RETCHK(0x5037dcu, 0x5037d7u); LOADALL;
  /* 005037dc mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005037df mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005037e6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005037e8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005037e9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005037ea:;
  /* 005037ea mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005037ed xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005037ef mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005037f6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005037f8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005037f9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00503800(CPU *c) {
  NATIVE_HOOK(0x503800u) REGS; LOADALL;
L_00503800:;
  /* 00503800 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00503801 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00503803 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00503804 mov dword ptr [esi], 0x650318 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x650318u); }
  /* 0050380a call 0x54c480 */ esp -= 4; M32(esp) = 0x50380fu; SAVEALL; F_0054c480(c); ABI_CHECK(0x54c480u, 0x50380au); RETCHK(0x50380fu, 0x50380au); LOADALL;
  /* 0050380f mov dword ptr [esi + 0x84], eax */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(eax); }
  /* 00503815 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00503817 mov dword ptr [esi + 0x88], eax */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(eax); }
  /* 0050381d mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00503822 mov dword ptr [esi + 0x94], ecx */ { const u32 m_ = (u32)(esi + 0x94u); M32(m_) = (u32)(ecx); }
  /* 00503828 mov dword ptr [esi + 0x98], ecx */ { const u32 m_ = (u32)(esi + 0x98u); M32(m_) = (u32)(ecx); }
  /* 0050382e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00503831 mov dword ptr [esi + 0x648], ecx */ { const u32 m_ = (u32)(esi + 0x648u); M32(m_) = (u32)(ecx); }
  /* 00503837 mov dword ptr [esi + 0x8c], eax */ { const u32 m_ = (u32)(esi + 0x8cu); M32(m_) = (u32)(eax); }
  /* 0050383d mov dword ptr [esi + 0x90], eax */ { const u32 m_ = (u32)(esi + 0x90u); M32(m_) = (u32)(eax); }
  /* 00503843 mov dword ptr [esi + 0x9c], eax */ { const u32 m_ = (u32)(esi + 0x9cu); M32(m_) = (u32)(eax); }
  /* 00503849 mov dword ptr [esi + 0xa0], eax */ { const u32 m_ = (u32)(esi + 0xa0u); M32(m_) = (u32)(eax); }
  /* 0050384f mov dword ptr [esi + 0xa4], eax */ { const u32 m_ = (u32)(esi + 0xa4u); M32(m_) = (u32)(eax); }
  /* 00503855 mov ecx, 0x1e */ { ecx = (u32)(0x1eu); }
  /* 0050385a lea edi, [esi + 8] */ edi = (u32)((u32)(esi + 0x8u));
  /* 0050385d rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0050385f mov ecx, 0x168 */ { ecx = (u32)(0x168u); }
  /* 00503864 lea edi, [esi + 0xa8] */ edi = (u32)((u32)(esi + 0xa8u));
  /* 0050386a rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0050386c mov eax, esi */ { eax = (u32)(esi); }
  /* 0050386e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050386f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00503870 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00503880(CPU *c) {
  NATIVE_HOOK(0x503880u) REGS; LOADALL;
L_00503880:;
  /* 00503880 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00503881 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00503883 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503884 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00503886 call 0x5038b0 */ esp -= 4; M32(esp) = 0x50388bu; SAVEALL; F_005038b0(c); ABI_CHECK(0x5038b0u, 0x503886u); RETCHK(0x50388bu, 0x503886u); LOADALL;
  /* 0050388b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050388f je 0x50389a */ if (ZF_) goto L_0050389a;
  /* 00503891 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503892 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x503897u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x503892u); RETCHK(0x503897u, 0x503892u); LOADALL;
  /* 00503897 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050389a:;
  /* 0050389a mov eax, esi */ { eax = (u32)(esi); }
  /* 0050389c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050389d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050389e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005038b0(CPU *c) {
  NATIVE_HOOK(0x5038b0u) REGS; LOADALL;
L_005038b0:;
  /* 005038b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005038b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005038b3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005038b6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005038b7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005038b8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005038b9 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005038bb lea esi, [edi + 0x80] */ esi = (u32)((u32)(edi + 0x80u));
  /* 005038c1 mov dword ptr [edi], 0x650318 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x650318u); }
  /* 005038c7 call 0x529410 */ esp -= 4; M32(esp) = 0x5038ccu; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x5038c7u); RETCHK(0x5038ccu, 0x5038c7u); LOADALL;
  /* 005038cc lea ebx, [edi + 8] */ ebx = (u32)((u32)(edi + 0x8u));
  /* 005038cf mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005038d2 mov dword ptr [ebp - 8], 0x1e */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x1eu); }
  /* 005038d9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005038e0:;
  /* 005038e0 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 005038e2 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005038e4 je 0x503976 */ if (ZF_) goto L_00503976;
  /* 005038ea mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005038ed mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005038ef mov dword ptr [ecx], ecx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ecx); }
  /* 005038f1 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005038f4 mov dword ptr [ecx + 4], ecx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005038f7 cmp eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005038fa mov dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 00503901 je 0x50391a */ if (ZF_) goto L_0050391a;
L_00503903:;
  /* 00503903 mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 00503905 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503906 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50390bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x503906u); RETCHK(0x50390bu, 0x503906u); LOADALL;
  /* 0050390b mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0050390e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00503911 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503913 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00503915 jne 0x503903 */ if (!ZF_) goto L_00503903;
  /* 00503917 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
L_0050391a:;
  /* 0050391a mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 0050391c test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050391e je 0x503970 */ if (ZF_) goto L_00503970;
  /* 00503920 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00503923 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00503925 mov dword ptr [ecx], ecx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ecx); }
  /* 00503927 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0050392a mov dword ptr [ecx + 4], ecx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0050392d cmp eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503930 mov dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 00503937 je 0x503957 */ if (ZF_) goto L_00503957;
  /* 00503939 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00503940:;
  /* 00503940 mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 00503942 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503943 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x503948u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x503943u); RETCHK(0x503948u, 0x503943u); LOADALL;
  /* 00503948 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0050394b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050394e cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503950 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00503952 jne 0x503940 */ if (!ZF_) goto L_00503940;
  /* 00503954 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
L_00503957:;
  /* 00503957 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050395a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050395b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x503960u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50395bu); RETCHK(0x503960u, 0x50395bu); LOADALL;
  /* 00503960 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00503961 mov dword ptr [edi + 4], 0 */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 00503968 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50396du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x503968u); RETCHK(0x50396du, 0x503968u); LOADALL;
  /* 0050396d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00503970:;
  /* 00503970 mov dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x0u); }
L_00503976:;
  /* 00503976 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00503979 add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0050397c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0050397d mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00503980 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00503983 jne 0x5038e0 */ if (!ZF_) goto L_005038e0;
  /* 00503989 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0050398c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050398e mov dword ptr [ecx], ecx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ecx); }
  /* 00503990 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00503993 mov dword ptr [ecx + 4], ecx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00503996 cmp eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503999 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 005039a0 je 0x5039b6 */ if (ZF_) goto L_005039b6;
L_005039a2:;
  /* 005039a2 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 005039a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005039a5 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5039aau; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5039a5u); RETCHK(0x5039aau, 0x5039a5u); LOADALL;
  /* 005039aa mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005039ad add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005039b0 cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005039b2 mov eax, edi */ { eax = (u32)(edi); }
  /* 005039b4 jne 0x5039a2 */ if (!ZF_) goto L_005039a2;
L_005039b6:;
  /* 005039b6 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005039b9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005039ba call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5039bfu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5039bau); RETCHK(0x5039bfu, 0x5039bau); LOADALL;
  /* 005039bf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005039c2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005039c3 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005039ca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005039cb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005039cc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005039ce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005039cf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005039d0(CPU *c) {
  NATIVE_HOOK(0x5039d0u) REGS; LOADALL;
L_005039d0:;
  /* 005039d0 mov dword ptr [eax + 0x648], ecx */ { const u32 m_ = (u32)(eax + 0x648u); M32(m_) = (u32)(ecx); }
  /* 005039d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005039e0(CPU *c) {
  NATIVE_HOOK(0x5039e0u) REGS; LOADALL;
L_005039e0:;
  /* 005039e0 mov dword ptr [eax + 0x9c], 1 */ { const u32 m_ = (u32)(eax + 0x9cu); M32(m_) = (u32)(0x1u); }
  /* 005039ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005039f0(CPU *c) {
  NATIVE_HOOK(0x5039f0u) REGS; LOADALL;
L_005039f0:;
  /* 005039f0 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005039f2 mov dword ptr [eax + 0x9c], ecx */ { const u32 m_ = (u32)(eax + 0x9cu); M32(m_) = (u32)(ecx); }
  /* 005039f8 mov dword ptr [eax + 0x8c], ecx */ { const u32 m_ = (u32)(eax + 0x8cu); M32(m_) = (u32)(ecx); }
  /* 005039fe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00503a00(CPU *c) {
  NATIVE_HOOK(0x503a00u) REGS; LOADALL;
L_00503a00:;
  /* 00503a00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00503a01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00503a03 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00503a06 mov ecx, dword ptr [eax + 0x648] */ { const u32 m_ = (u32)(eax + 0x648u); ecx = (u32)(M32(m_)); }
  /* 00503a0c lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00503a0f mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 00503a12 mov dword ptr [ebp - 0x18], 0x207 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x207u); }
  /* 00503a19 call 0x508540 */ esp -= 4; M32(esp) = 0x503a1eu; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x503a19u); RETCHK(0x503a1eu, 0x503a19u); LOADALL;
  /* 00503a1e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00503a20 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00503a21 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00503a30(CPU *c) {
  NATIVE_HOOK(0x503a30u) REGS; LOADALL;
L_00503a30:;
  /* 00503a30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00503a31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00503a33 mov eax, dword ptr [esi + 0x648] */ { const u32 m_ = (u32)(esi + 0x648u); eax = (u32)(M32(m_)); }
  /* 00503a39 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00503a3b je 0x503b22 */ if (ZF_) goto L_00503b22;
  /* 00503a41 mov eax, dword ptr [esi + 0x9c] */ { const u32 m_ = (u32)(esi + 0x9cu); eax = (u32)(M32(m_)); }
  /* 00503a47 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00503a49 je 0x503b22 */ if (ZF_) goto L_00503b22;
  /* 00503a4f cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503a52 je 0x503b22 */ if (ZF_) goto L_00503b22;
  /* 00503a58 mov eax, dword ptr [esi + 0x88] */ { const u32 m_ = (u32)(esi + 0x88u); eax = (u32)(M32(m_)); }
  /* 00503a5e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00503a60 je 0x503b22 */ if (ZF_) goto L_00503b22;
  /* 00503a66 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00503a69 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00503a6a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00503a6b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00503a6d mov ecx, 0x168 */ { ecx = (u32)(0x168u); }
  /* 00503a72 lea edi, [esi + 0xa8] */ edi = (u32)((u32)(esi + 0xa8u));
  /* 00503a78 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00503a7a fadd dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00503a80 fcom dword ptr [esi + 0x90] */ { const u32 m_ = (u32)(esi + 0x90u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00503a86 fst dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); MF32(m_) = (float)ST(0); }
  /* 00503a8c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00503a8e test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00503a91 jne 0x503afc */ if (!ZF_) goto L_00503afc;
  /* 00503a93 mov edx, dword ptr [esi + 0x94] */ { const u32 m_ = (u32)(esi + 0x94u); edx = (u32)(M32(m_)); }
  /* 00503a99 mov ecx, dword ptr [esi + 0x98] */ { const u32 m_ = (u32)(esi + 0x98u); ecx = (u32)(M32(m_)); }
  /* 00503a9f inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00503aa0 mov eax, edx */ { eax = (u32)(edx); }
  /* 00503aa2 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503aa4 mov dword ptr [esi + 0x94], edx */ { const u32 m_ = (u32)(esi + 0x94u); M32(m_) = (u32)(edx); }
  /* 00503aaa jle 0x503ac0 */ if ((ZF_|LT_)) goto L_00503ac0;
  /* 00503aac mov dword ptr [esi + 0x9c], 0 */ { const u32 m_ = (u32)(esi + 0x9cu); M32(m_) = (u32)(0x0u); }
  /* 00503ab6 mov dword ptr [esi + 0x94], 1 */ { const u32 m_ = (u32)(esi + 0x94u); M32(m_) = (u32)(0x1u); }
L_00503ac0:;
  /* 00503ac0 mov ebx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); ebx = (u32)(M32(m_)); }
  /* 00503ac6 fsub dword ptr [esi + 0x90] */ { const u32 m_ = (u32)(esi + 0x90u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00503acc mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 00503ace cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503ad0 fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503ad3 je 0x503ae5 */ if (ZF_) goto L_00503ae5;
L_00503ad5:;
  /* 00503ad5 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00503ad8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503ad9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503ada call 0x503cc0 */ esp -= 4; M32(esp) = 0x503adfu; SAVEALL; F_00503cc0(c); ABI_CHECK(0x503cc0u, 0x503adau); RETCHK(0x503adfu, 0x503adau); LOADALL;
  /* 00503adf mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 00503ae1 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503ae3 jne 0x503ad5 */ if (!ZF_) goto L_00503ad5;
L_00503ae5:;
  /* 00503ae5 mov eax, esi */ { eax = (u32)(esi); }
  /* 00503ae7 mov dword ptr [esi + 0x8c], 0 */ { const u32 m_ = (u32)(esi + 0x8cu); M32(m_) = (u32)(0x0u); }
  /* 00503af1 call 0x503a00 */ esp -= 4; M32(esp) = 0x503af6u; SAVEALL; F_00503a00(c); ABI_CHECK(0x503a00u, 0x503af1u); RETCHK(0x503af6u, 0x503af1u); LOADALL;
  /* 00503af6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00503af7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00503af8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00503af9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00503afc:;
  /* 00503afc mov ebx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); ebx = (u32)(M32(m_)); }
  /* 00503b02 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00503b04 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 00503b06 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503b08 je 0x503b20 */ if (ZF_) goto L_00503b20;
  /* 00503b0a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00503b10:;
  /* 00503b10 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00503b13 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00503b14 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503b15 call 0x503cc0 */ esp -= 4; M32(esp) = 0x503b1au; SAVEALL; F_00503cc0(c); ABI_CHECK(0x503cc0u, 0x503b15u); RETCHK(0x503b1au, 0x503b15u); LOADALL;
  /* 00503b1a mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 00503b1c cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503b1e jne 0x503b10 */ if (!ZF_) goto L_00503b10;
L_00503b20:;
  /* 00503b20 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00503b21 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00503b22:;
  /* 00503b22 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00503b23 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00503b30(CPU *c) {
  NATIVE_HOOK(0x503b30u) REGS; LOADALL;
L_00503b30:;
  /* 00503b30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00503b31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00503b33 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00503b36 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00503b38 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503b39 mov esi, eax */ { esi = (u32)(eax); }
  /* 00503b3b jl 0x503b9a */ if (LT_) goto L_00503b9a;
  /* 00503b3d cmp edx, 0x1e */ { u32 a_ = edx, b_ = 0x1eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503b40 jge 0x503b9a */ if (!LT_) goto L_00503b9a;
  /* 00503b42 mov ecx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); ecx = (u32)(M32(m_)); }
  /* 00503b48 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00503b4a cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503b4c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00503b4d je 0x503b5b */ if (ZF_) goto L_00503b5b;
  /* 00503b4f nop */ ;
L_00503b50:;
  /* 00503b50 cmp edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503b53 je 0x503b92 */ if (ZF_) goto L_00503b92;
  /* 00503b55 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00503b57 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503b59 jne 0x503b50 */ if (!ZF_) goto L_00503b50;
L_00503b5b:;
  /* 00503b5b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00503b5c lea ebx, [esi + 0x80] */ ebx = (u32)((u32)(esi + 0x80u));
  /* 00503b62 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00503b65 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00503b68 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00503b6b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503b6c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00503b6d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503b6e call 0x508af0 */ esp -= 4; M32(esp) = 0x503b73u; SAVEALL; F_00508af0(c); ABI_CHECK(0x508af0u, 0x503b6eu); RETCHK(0x503b73u, 0x503b6eu); LOADALL;
  /* 00503b73 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00503b78 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00503b7a mov edi, eax */ { edi = (u32)(eax); }
  /* 00503b7c call 0x518d90 */ esp -= 4; M32(esp) = 0x503b81u; SAVEALL; F_00518d90(c); ABI_CHECK(0x518d90u, 0x503b7cu); RETCHK(0x503b81u, 0x503b7cu); LOADALL;
  /* 00503b81 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 00503b84 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00503b87 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00503b88 mov dword ptr [edx], edi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(edi); }
  /* 00503b8a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00503b8b mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00503b8d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00503b8e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00503b8f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00503b92:;
  /* 00503b92 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00503b93 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00503b95 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00503b96 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00503b97 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00503b9a:;
  /* 00503b9a xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00503b9c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00503b9d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00503b9e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00503bb0(CPU *c) {
  NATIVE_HOOK(0x503bb0u) REGS; LOADALL;
L_00503bb0:;
  /* 00503bb0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503bb1 mov esi, eax */ { esi = (u32)(eax); }
  /* 00503bb3 add esi, 0x80 */ { u32 a_ = esi, b_ = 0x80u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00503bb9 call 0x529410 */ esp -= 4; M32(esp) = 0x503bbeu; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x503bb9u); RETCHK(0x503bbeu, 0x503bb9u); LOADALL;
  /* 00503bbe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00503bbf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00503bc0(CPU *c) {
  NATIVE_HOOK(0x503bc0u) REGS; LOADALL;
L_00503bc0:;
  /* 00503bc0 mov dword ptr [eax + 0x98], ecx */ { const u32 m_ = (u32)(eax + 0x98u); M32(m_) = (u32)(ecx); }
  /* 00503bc6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00503bd0(CPU *c) {
  NATIVE_HOOK(0x503bd0u) REGS; LOADALL;
L_00503bd0:;
  /* 00503bd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00503bd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00503bd3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00503bd5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 00503bda mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00503be0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503be1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00503be8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00503be9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503bea mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00503bec test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00503bee jl 0x503ca0 */ if (LT_) goto L_00503ca0;
  /* 00503bf4 cmp esi, 0x1e */ { u32 a_ = esi, b_ = 0x1eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503bf7 jge 0x503ca0 */ if (!LT_) goto L_00503ca0;
  /* 00503bfd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00503bfe mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00503c01 mov eax, dword ptr [ebx + esi*4 + 8] */ { const u32 m_ = (u32)(ebx + esi * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 00503c05 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00503c07 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00503c08 jne 0x503c42 */ if (!ZF_) goto L_00503c42;
  /* 00503c0a push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00503c0c call 0x5fe934 */ esp -= 4; M32(esp) = 0x503c11u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x503c0cu); RETCHK(0x503c11u, 0x503c0cu); LOADALL;
  /* 00503c11 mov edi, eax */ { edi = (u32)(eax); }
  /* 00503c13 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00503c16 mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 00503c19 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00503c1b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00503c22 je 0x503c35 */ if (ZF_) goto L_00503c35;
  /* 00503c24 call 0x5045f0 */ esp -= 4; M32(esp) = 0x503c29u; SAVEALL; F_005045f0(c); ABI_CHECK(0x5045f0u, 0x503c24u); RETCHK(0x503c29u, 0x503c24u); LOADALL;
  /* 00503c29 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00503c2c mov dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 00503c33 jmp 0x503c37 */ goto L_00503c37;
L_00503c35:;
  /* 00503c35 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_00503c37:;
  /* 00503c37 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00503c3e mov dword ptr [ebx + esi*4 + 8], edi */ { const u32 m_ = (u32)(ebx + esi * 4u + 0x8u); M32(m_) = (u32)(edi); }
L_00503c42:;
  /* 00503c42 mov ebx, dword ptr [ebx + esi*4 + 8] */ { const u32 m_ = (u32)(ebx + esi * 4u + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00503c46 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00503c49 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00503c4c mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00503c4f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503c50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503c51 call 0x504610 */ esp -= 4; M32(esp) = 0x503c56u; SAVEALL; F_00504610(c); ABI_CHECK(0x504610u, 0x503c51u); RETCHK(0x503c56u, 0x503c51u); LOADALL;
  /* 00503c56 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00503c5b mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00503c5d mov edi, eax */ { edi = (u32)(eax); }
  /* 00503c5f call 0x504640 */ esp -= 4; M32(esp) = 0x503c64u; SAVEALL; F_00504640(c); ABI_CHECK(0x504640u, 0x503c5fu); RETCHK(0x503c64u, 0x503c5fu); LOADALL;
  /* 00503c64 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00503c67 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 00503c6a mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00503c6d mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 00503c6f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00503c72 fld dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); FPUSH((double)MF32(m_)); }
  /* 00503c75 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00503c76 fcomp dword ptr [edx + 0x90] */ { const u32 m_ = (u32)(edx + 0x90u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00503c7c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00503c7d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00503c7f test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00503c82 jne 0x503c8d */ if (!ZF_) goto L_00503c8d;
  /* 00503c84 mov eax, dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 00503c87 mov dword ptr [edx + 0x90], eax */ { const u32 m_ = (u32)(edx + 0x90u); M32(m_) = (u32)(eax); }
L_00503c8d:;
  /* 00503c8d mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00503c8f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00503c90 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00503c93 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00503c9a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00503c9c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00503c9d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00503ca0:;
  /* 00503ca0 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00503ca3 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00503ca5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00503ca6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00503cad mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00503caf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00503cb0 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00503cc0(CPU *c) {
  NATIVE_HOOK(0x503cc0u) REGS; LOADALL;
L_00503cc0:;
  /* 00503cc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00503cc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00503cc3 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00503cc6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00503cc9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00503cca xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00503ccc cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503cce jl 0x503fc3 */ if (LT_) goto L_00503fc3;
  /* 00503cd4 cmp eax, 0x1e */ { u32 a_ = eax, b_ = 0x1eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503cd7 jge 0x503fc3 */ if (!LT_) goto L_00503fc3;
  /* 00503cdd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503cde mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00503ce1 cmp dword ptr [esi + eax*4 + 8], edi */ { const u32 m_ = (u32)(esi + eax * 4u + 0x8u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503ce5 je 0x503fc2 */ if (ZF_) goto L_00503fc2;
  /* 00503ceb lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00503cee push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00503cef mov ecx, dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); ecx = (u32)(M32(m_)); }
  /* 00503cf5 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00503cf8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00503cf9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00503cfa mov dword ptr [ebp - 8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edi); }
  /* 00503cfd mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00503d00 call 0x503ff0 */ esp -= 4; M32(esp) = 0x503d05u; SAVEALL; F_00503ff0(c); ABI_CHECK(0x503ff0u, 0x503d00u); RETCHK(0x503d05u, 0x503d00u); LOADALL;
  /* 00503d05 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503d08 je 0x503fc2 */ if (ZF_) goto L_00503fc2;
  /* 00503d0e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00503d0f mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 00503d12 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503d14 mov edi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edi = (u32)(M32(m_)); }
  /* 00503d17 jne 0x503fca */ if (!ZF_) goto L_00503fca;
  /* 00503d1d fld dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); FPUSH((double)MF32(m_)); }
  /* 00503d23 fsub dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00503d26 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503d29 fld dword ptr [ebx + 0x3c] */ { const u32 m_ = (u32)(ebx + 0x3cu); FPUSH((double)MF32(m_)); }
  /* 00503d2c fsub dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00503d2f fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503d32 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00503d35 fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00503d3b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00503d3d test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00503d40 jnp 0x503fc1 */ if (!PF_) goto L_00503fc1;
  /* 00503d46 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00503d49 fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00503d4f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00503d51 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00503d54 jnp 0x503fc1 */ if (!PF_) goto L_00503fc1;
L_00503d5a:;
  /* 00503d5a test byte ptr [edi], 1 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00503d5d je 0x503dbb */ if (ZF_) goto L_00503dbb;
  /* 00503d5f lea eax, [esi + 0xa0] */ eax = (u32)((u32)(esi + 0xa0u));
  /* 00503d65 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00503d68 call 0x52ce90 */ esp -= 4; M32(esp) = 0x503d6du; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x503d68u); RETCHK(0x503d6du, 0x503d68u); LOADALL;
  /* 00503d6d fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00503d70 fadd dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00503d73 mov ecx, dword ptr [esi + 0x648] */ { const u32 m_ = (u32)(esi + 0x648u); ecx = (u32)(M32(m_)); }
  /* 00503d79 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00503d7c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503d7d fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503d80 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00503d83 fadd dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00503d86 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503d89 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 00503d8f fdiv dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00503d92 fld dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00503d95 fsub dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00503d98 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00503d9a fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00503d9d fld dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00503da0 fsub dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00503da3 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00503da5 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00503da8 fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00503dab fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503dae fadd dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00503db1 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503db4 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00503db6 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00503db8 call dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x503dbbu; SAVEALL; call_ind(c, t_); RETCHK(0x503dbbu, 0x503db8u); LOADALL; }
L_00503dbb:;
  /* 00503dbb test byte ptr [edi], 2 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00503dbe je 0x503e38 */ if (ZF_) goto L_00503e38;
  /* 00503dc0 mov ecx, dword ptr [esi + 0x648] */ { const u32 m_ = (u32)(esi + 0x648u); ecx = (u32)(M32(m_)); }
  /* 00503dc6 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00503dc8 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00503dcb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503dcc call dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x503dcfu; SAVEALL; call_ind(c, t_); RETCHK(0x503dcfu, 0x503dccu); LOADALL; }
  /* 00503dcf fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 00503dd5 fdiv dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00503dd8 mov ecx, dword ptr [esi + 0x648] */ { const u32 m_ = (u32)(esi + 0x648u); ecx = (u32)(M32(m_)); }
  /* 00503dde lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00503de1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503de2 fld dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00503de5 fsub dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00503de8 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00503dea fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00503ded fadd dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00503df0 fld dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 00503df3 fsub dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00503df6 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00503df8 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00503dfb fadd dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00503dfe fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503e01 fld dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); FPUSH((double)MF32(m_)); }
  /* 00503e07 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00503e09 fsubr dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 00503e0c fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503e0f fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00503e12 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00503e18 fsubr dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 00503e1b fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503e1e fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 00503e21 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 00503e23 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503e26 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00503e28 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00503e2a fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 00503e2d fadd dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00503e30 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503e33 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00503e35 call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x503e38u; SAVEALL; call_ind(c, t_); RETCHK(0x503e38u, 0x503e35u); LOADALL; }
L_00503e38:;
  /* 00503e38 test byte ptr [edi], 8 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00503e3b je 0x503f12 */ if (ZF_) goto L_00503f12;
  /* 00503e41 mov ecx, dword ptr [esi + 0x648] */ { const u32 m_ = (u32)(esi + 0x648u); ecx = (u32)(M32(m_)); }
  /* 00503e47 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00503e49 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00503e4c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503e4d call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x503e50u; SAVEALL; call_ind(c, t_); RETCHK(0x503e50u, 0x503e4du); LOADALL; }
  /* 00503e50 mov eax, dword ptr [esi + 0x648] */ { const u32 m_ = (u32)(esi + 0x648u); eax = (u32)(M32(m_)); }
  /* 00503e56 call 0x507890 */ esp -= 4; M32(esp) = 0x503e5bu; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x503e56u); RETCHK(0x503e5bu, 0x503e56u); LOADALL;
  /* 00503e5b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503e5c lea esi, [ebp - 0x28] */ esi = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00503e5f call 0x52cf90 */ esp -= 4; M32(esp) = 0x503e64u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x503e5fu); RETCHK(0x503e64u, 0x503e5fu); LOADALL;
  /* 00503e64 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00503e67 lea ecx, [eax + eax*2] */ ecx = (u32)((u32)(eax + eax * 2u));
  /* 00503e6a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00503e6d shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00503e70 lea esi, [ecx + eax] */ esi = (u32)((u32)(ecx + eax));
  /* 00503e73 mov byte ptr [esi + 0xa8], 1 */ { const u32 m_ = (u32)(esi + 0xa8u); M8(m_) = (u8)(0x1u); }
  /* 00503e7a mov cl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00503e7c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00503e7f test cl, 8 */ { u32 a_ = (ecx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00503e82 je 0x503ee1 */ if (ZF_) goto L_00503ee1;
  /* 00503e84 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 00503e8a mov ecx, dword ptr [eax + 0x648] */ { const u32 m_ = (u32)(eax + 0x648u); ecx = (u32)(M32(m_)); }
  /* 00503e90 fdiv dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00503e93 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00503e95 lea eax, [esi + 0xac] */ eax = (u32)((u32)(esi + 0xacu));
  /* 00503e9b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503e9c fld dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 00503e9f fsub dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00503ea2 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00503ea4 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00503ea7 fstp dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503eaa fld dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 00503ead fsub dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00503eb0 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00503eb2 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00503eb5 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503eb8 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00503eba call dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x503ebdu; SAVEALL; call_ind(c, t_); RETCHK(0x503ebdu, 0x503ebau); LOADALL; }
  /* 00503ebd fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00503ec0 fadd dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00503ec3 fadd dword ptr [esi + 0xac] */ { const u32 m_ = (u32)(esi + 0xacu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00503ec9 fstp dword ptr [esi + 0xac] */ { const u32 m_ = (u32)(esi + 0xacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503ecf fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00503ed2 fadd dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00503ed5 fadd dword ptr [esi + 0xb0] */ { const u32 m_ = (u32)(esi + 0xb0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00503edb fstp dword ptr [esi + 0xb0] */ { const u32 m_ = (u32)(esi + 0xb0u); MF32(m_) = (float)ST(0); FPOP(); }
L_00503ee1:;
  /* 00503ee1 fld dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 00503ee4 lea ecx, [esi + 0xb8] */ ecx = (u32)((u32)(esi + 0xb8u));
  /* 00503eea fsub dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00503eed add esi, 0xac */ { u32 a_ = esi, b_ = 0xacu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00503ef3 fdiv dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00503ef6 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00503ef9 fadd dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00503efc fst dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); }
  /* 00503eff mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00503f02 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00503f05 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00503f06 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00503f07 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00503f0a call 0x5040c0 */ esp -= 4; M32(esp) = 0x503f0fu; SAVEALL; F_005040c0(c); ABI_CHECK(0x5040c0u, 0x503f0au); RETCHK(0x503f0fu, 0x503f0au); LOADALL;
  /* 00503f0f mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_00503f12:;
  /* 00503f12 test byte ptr [edi], 0x40 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00503f15 je 0x503fc1 */ if (ZF_) goto L_00503fc1;
  /* 00503f1b fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 00503f21 movzx eax, byte ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); eax = (u32)(M8(m_)); }
  /* 00503f25 fdiv dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00503f28 movzx ecx, byte ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M8(m_)); }
  /* 00503f2c sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00503f2e mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00503f31 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 00503f34 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00503f37 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00503f39 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00503f3c fiadd dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) + (double)(s32)M32(m_)); }
  /* 00503f3f call 0x61b154 */ esp -= 4; M32(esp) = 0x503f44u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x503f3fu); RETCHK(0x503f44u, 0x503f3fu); LOADALL;
  /* 00503f44 mov byte ptr [ebp + 8], al */ { const u32 m_ = (u32)(ebp + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00503f47 movzx eax, byte ptr [edi + 0x25] */ { const u32 m_ = (u32)(edi + 0x25u); eax = (u32)(M8(m_)); }
  /* 00503f4b movzx edx, byte ptr [ebx + 0x25] */ { const u32 m_ = (u32)(ebx + 0x25u); edx = (u32)(M8(m_)); }
  /* 00503f4f sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00503f51 mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 00503f54 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00503f57 fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 00503f5a fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00503f5c fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00503f5f fiadd dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) + (double)(s32)M32(m_)); }
  /* 00503f62 call 0x61b154 */ esp -= 4; M32(esp) = 0x503f67u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x503f62u); RETCHK(0x503f67u, 0x503f62u); LOADALL;
  /* 00503f67 mov byte ptr [ebp + 9], al */ { const u32 m_ = (u32)(ebp + 0x9u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00503f6a movzx eax, byte ptr [edi + 0x26] */ { const u32 m_ = (u32)(edi + 0x26u); eax = (u32)(M8(m_)); }
  /* 00503f6e movzx ecx, byte ptr [ebx + 0x26] */ { const u32 m_ = (u32)(ebx + 0x26u); ecx = (u32)(M8(m_)); }
  /* 00503f72 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00503f74 mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00503f77 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00503f7a fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 00503f7d fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00503f7f fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00503f82 fiadd dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) + (double)(s32)M32(m_)); }
  /* 00503f85 call 0x61b154 */ esp -= 4; M32(esp) = 0x503f8au; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x503f85u); RETCHK(0x503f8au, 0x503f85u); LOADALL;
  /* 00503f8a mov byte ptr [ebp + 0xa], al */ { const u32 m_ = (u32)(ebp + 0xau); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00503f8d movzx eax, byte ptr [edi + 0x27] */ { const u32 m_ = (u32)(edi + 0x27u); eax = (u32)(M8(m_)); }
  /* 00503f91 movzx edx, byte ptr [ebx + 0x27] */ { const u32 m_ = (u32)(ebx + 0x27u); edx = (u32)(M8(m_)); }
  /* 00503f95 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00503f97 mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 00503f9a mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00503f9d fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 00503fa0 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00503fa2 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00503fa5 fiadd dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) + (double)(s32)M32(m_)); }
  /* 00503fa8 call 0x61b154 */ esp -= 4; M32(esp) = 0x503fadu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x503fa8u); RETCHK(0x503fadu, 0x503fa8u); LOADALL;
  /* 00503fad fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00503faf mov ecx, dword ptr [esi + 0x648] */ { const u32 m_ = (u32)(esi + 0x648u); ecx = (u32)(M32(m_)); }
  /* 00503fb5 lea edx, [ebp + 8] */ edx = (u32)((u32)(ebp + 0x8u));
  /* 00503fb8 mov byte ptr [ebp + 0xb], al */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00503fbb mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00503fbd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00503fbe call dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x503fc1u; SAVEALL; call_ind(c, t_); RETCHK(0x503fc1u, 0x503fbeu); LOADALL; }
L_00503fc1:;
  /* 00503fc1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00503fc2:;
  /* 00503fc2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00503fc3:;
  /* 00503fc3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00503fc4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00503fc6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00503fc7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00503fca:;
  /* 00503fca cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503fcd jne 0x503fc1 */ if (!ZF_) goto L_00503fc1;
  /* 00503fcf mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00503fd2 mov dword ptr [ebp - 8], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x3f800000u); }
  /* 00503fd9 mov dword ptr [ebp - 4], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3f800000u); }
  /* 00503fe0 jmp 0x503d5a */ goto L_00503d5a;
}

void F_00503ff0(CPU *c) {
  NATIVE_HOOK(0x503ff0u) REGS; LOADALL;
L_00503ff0:;
  /* 00503ff0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00503ff1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00503ff3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00503ff5 jl 0x5040b6 */ if (LT_) goto L_005040b6;
  /* 00503ffb cmp eax, 0x1e */ { u32 a_ = eax, b_ = 0x1eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00503ffe jge 0x5040b6 */ if (!LT_) goto L_005040b6;
  /* 00504004 mov edx, dword ptr [esi + eax*4 + 8] */ { const u32 m_ = (u32)(esi + eax * 4u + 0x8u); edx = (u32)(M32(m_)); }
  /* 00504008 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050400a je 0x5040b6 */ if (ZF_) goto L_005040b6;
  /* 00504010 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00504013 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00504019 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050401b test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050401e jp 0x504029 */ if (PF_) goto L_00504029;
  /* 00504020 mov eax, 0xffffffff */ { eax = (u32)(0xffffffffu); }
  /* 00504025 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504026 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00504029:;
  /* 00504029 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0050402c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050402d fcomp dword ptr [esi + 0x90] */ { const u32 m_ = (u32)(esi + 0x90u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00504033 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00504034 mov edi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (u32)(M32(m_)); }
  /* 00504037 mov ebx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (u32)(M32(m_)); }
  /* 00504039 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050403b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050403d test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00504040 jne 0x50406c */ if (!ZF_) goto L_0050406c;
  /* 00504042 cmp dword ptr [edx + 8], 2 */ { const u32 m_ = (u32)(edx + 0x8u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00504046 jb 0x50406c */ if (CF_) goto L_0050406c;
  /* 00504048 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050404b mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0050404e add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00504051 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 00504053 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00504056 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00504059 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0050405c add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050405f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00504060 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 00504062 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00504067 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00504068 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504069 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0050406c:;
  /* 0050406c cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050406e je 0x504089 */ if (ZF_) goto L_00504089;
L_00504070:;
  /* 00504070 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00504073 fld dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); FPUSH((double)MF32(m_)); }
  /* 00504079 fcomp dword ptr [edx + 0x44] */ { const u32 m_ = (u32)(edx + 0x44u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0050407c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050407e test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00504081 je 0x504092 */ if (ZF_) goto L_00504092;
  /* 00504083 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00504085 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00504087 jne 0x504070 */ if (!ZF_) goto L_00504070;
L_00504089:;
  /* 00504089 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050408a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050408d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050408e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050408f ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00504092:;
  /* 00504092 cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00504094 je 0x504089 */ if (ZF_) goto L_00504089;
  /* 00504096 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00504098 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0050409b mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0050409e add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005040a1 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 005040a3 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 005040a6 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005040a9 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005040ac pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005040ad mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005040af xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005040b1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005040b2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005040b3 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005040b6:;
  /* 005040b6 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005040b9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005040ba ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_005040c0(CPU *c) {
  NATIVE_HOOK(0x5040c0u) REGS; LOADALL;
L_005040c0:;
  /* 005040c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005040c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005040c3 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005040c5 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005040c7 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005040ca mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005040cd mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005040cf mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005040d2 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 005040d5 mov dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(edx); }
  /* 005040d8 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 005040db mov dword ptr [ecx + 0x10], edx */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(edx); }
  /* 005040de mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005040e1 mov dword ptr [ecx + 0x14], edx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(edx); }
  /* 005040e4 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 005040e7 mov dword ptr [ecx + 0x18], edx */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(edx); }
  /* 005040ea mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 005040ed mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005040f0 mov dword ptr [ecx + 0x1c], eax */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005040f3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005040f6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005040f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005040f8 mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 005040fd mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005040ff call 0x52d1e0 */ esp -= 4; M32(esp) = 0x504104u; SAVEALL; F_0052d1e0(c); ABI_CHECK(0x52d1e0u, 0x5040ffu); RETCHK(0x504104u, 0x5040ffu); LOADALL;
  /* 00504104 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00504107 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504108 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00504110(CPU *c) {
  NATIVE_HOOK(0x504110u) REGS; LOADALL;
L_00504110:;
  /* 00504110 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00504111 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00504113 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00504115 push 0x61dfd9 */ { u32 v_ = 0x61dfd9u; esp -= 4; M32(esp) = v_; }
  /* 0050411a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00504120 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504121 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00504128 sub esp, 0xd4 */ { u32 a_ = esp, b_ = 0xd4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050412e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00504133 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00504134 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00504135 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00504138 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0050413a call 0x518bb0 */ esp -= 4; M32(esp) = 0x50413fu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x50413au); RETCHK(0x50413fu, 0x50413au); LOADALL;
  /* 0050413f call 0x518340 */ esp -= 4; M32(esp) = 0x504144u; SAVEALL; F_00518340(c); ABI_CHECK(0x518340u, 0x50413fu); RETCHK(0x504144u, 0x50413fu); LOADALL;
  /* 00504144 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00504146 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00504148 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050414a jne 0x504153 */ if (!ZF_) goto L_00504153;
  /* 0050414c xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050414e jmp 0x504219 */ goto L_00504219;
L_00504153:;
  /* 00504153 mov eax, 0x6503a8 */ { eax = (u32)(0x6503a8u); }
  /* 00504158 call 0x560ba0 */ esp -= 4; M32(esp) = 0x50415du; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x504158u); RETCHK(0x50415du, 0x504158u); LOADALL;
  /* 0050415d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050415f cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00504161 je 0x50416f */ if (ZF_) goto L_0050416f;
  /* 00504163 mov eax, 0x64fe00 */ { eax = (u32)(0x64fe00u); }
  /* 00504168 call 0x560ba0 */ esp -= 4; M32(esp) = 0x50416du; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x504168u); RETCHK(0x50416du, 0x504168u); LOADALL;
  /* 0050416d mov ecx, eax */ { ecx = (u32)(eax); }
L_0050416f:;
  /* 0050416f mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 00504174 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00504175 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00504177 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 0050417a mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 0050417d mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 00504181 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00504184 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00504187 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0050418a mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0050418e cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00504190 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00504194 je 0x5041cb */ if (ZF_) goto L_005041cb;
L_00504196:;
  /* 00504196 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00504198 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050419a call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50419du; SAVEALL; call_ind(c, t_); RETCHK(0x50419du, 0x50419au); LOADALL; }
  /* 0050419d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050419e mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 005041a3 call 0x560ed0 */ esp -= 4; M32(esp) = 0x5041a8u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5041a3u); RETCHK(0x5041a8u, 0x5041a3u); LOADALL;
  /* 005041a8 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005041aa je 0x5041b9 */ if (ZF_) goto L_005041b9;
  /* 005041ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005041ad call 0x5fe92e */ esp -= 4; M32(esp) = 0x5041b2u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x5041adu); RETCHK(0x5041b2u, 0x5041adu); LOADALL;
  /* 005041b2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005041b5 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005041b7 je 0x504233 */ if (ZF_) goto L_00504233;
L_005041b9:;
  /* 005041b9 mov eax, 0x64fe00 */ { eax = (u32)(0x64fe00u); }
  /* 005041be mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005041c0 call 0x560c00 */ esp -= 4; M32(esp) = 0x5041c5u; SAVEALL; F_00560c00(c); ABI_CHECK(0x560c00u, 0x5041c0u); RETCHK(0x5041c5u, 0x5041c0u); LOADALL;
  /* 005041c5 mov esi, eax */ { esi = (u32)(eax); }
  /* 005041c7 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005041c9 jne 0x504196 */ if (!ZF_) goto L_00504196;
L_005041cb:;
  /* 005041cb mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005041ce mov ecx, dword ptr [eax + 0x648] */ { const u32 m_ = (u32)(eax + 0x648u); ecx = (u32)(M32(m_)); }
  /* 005041d4 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005041d6 add eax, 0xa0 */ { u32 a_ = eax, b_ = 0xa0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005041db push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005041dc call dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5041dfu; SAVEALL; call_ind(c, t_); RETCHK(0x5041dfu, 0x5041dcu); LOADALL; }
  /* 005041df mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 005041e2 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 005041e7 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005041e9 jb 0x5041f7 */ if (CF_) goto L_005041f7;
  /* 005041eb mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 005041ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005041ef call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5041f4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5041efu); RETCHK(0x5041f4u, 0x5041efu); LOADALL;
  /* 005041f4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005041f7:;
  /* 005041f7 cmp dword ptr [ebp - 0x30], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005041fa mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 00504201 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 00504204 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 00504208 jb 0x504216 */ if (CF_) goto L_00504216;
  /* 0050420a mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 0050420d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
L_0050420e:;
  /* 0050420e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x504213u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50420eu); RETCHK(0x504213u, 0x50420eu); LOADALL;
  /* 00504213 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00504216:;
  /* 00504216 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00504218 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00504219:;
  /* 00504219 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050421c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050421d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00504224 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00504227 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00504228 call 0x61af31 */ esp -= 4; M32(esp) = 0x50422du; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x504228u); RETCHK(0x50422du, 0x504228u); LOADALL;
  /* 0050422d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050422f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504230 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00504233:;
  /* 00504233 mov eax, 0x6503a0 */ { eax = (u32)(0x6503a0u); }
  /* 00504238 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050423a mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 0050423d call 0x560ba0 */ esp -= 4; M32(esp) = 0x504242u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x50423du); RETCHK(0x504242u, 0x50423du); LOADALL;
  /* 00504242 mov edi, eax */ { edi = (u32)(eax); }
  /* 00504244 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00504246 mov dword ptr [ebp - 0x50], edi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(edi); }
  /* 00504249 je 0x5041cb */ if (ZF_) goto L_005041cb;
  /* 0050424b jmp 0x504250 */ goto L_00504250;
L_0050424d:;
  /* 0050424d mov edi, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); edi = (u32)(M32(m_)); }
L_00504250:;
  /* 00504250 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00504252 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00504254 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x504257u; SAVEALL; call_ind(c, t_); RETCHK(0x504257u, 0x504254u); LOADALL; }
  /* 00504257 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00504259 push 0x64f320 */ { u32 v_ = 0x64f320u; esp -= 4; M32(esp) = v_; }
  /* 0050425e lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00504261 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00504263 call 0x404420 */ esp -= 4; M32(esp) = 0x504268u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x504263u); RETCHK(0x504268u, 0x504263u); LOADALL;
  /* 00504268 push 0x11 */ { u32 v_ = 0x11u; esp -= 4; M32(esp) = v_; }
  /* 0050426a mov eax, 0x65038c */ { eax = (u32)(0x65038cu); }
  /* 0050426f lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00504272 call 0x40d260 */ esp -= 4; M32(esp) = 0x504277u; SAVEALL; F_0040d260(c); ABI_CHECK(0x40d260u, 0x504272u); RETCHK(0x504277u, 0x504272u); LOADALL;
  /* 00504277 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00504278 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 0050427d call 0x560ed0 */ esp -= 4; M32(esp) = 0x504282u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50427du); RETCHK(0x504282u, 0x50427du); LOADALL;
  /* 00504282 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00504284 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
L_00504287:;
  /* 00504287 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00504289 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050428a test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050428c jne 0x504287 */ if (!ZF_) goto L_00504287;
  /* 0050428e sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00504290 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00504291 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00504294 call 0x40d260 */ esp -= 4; M32(esp) = 0x504299u; SAVEALL; F_0040d260(c); ABI_CHECK(0x40d260u, 0x504294u); RETCHK(0x504299u, 0x504294u); LOADALL;
  /* 00504299 lea eax, [ebp - 0xe0] */ eax = (u32)((u32)(ebp + 0xffffff20u));
  /* 0050429f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005042a0 call 0x5614b0 */ esp -= 4; M32(esp) = 0x5042a5u; SAVEALL; F_005614b0(c); ABI_CHECK(0x5614b0u, 0x5042a0u); RETCHK(0x5042a5u, 0x5042a0u); LOADALL;
  /* 005042a5 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 005042a9 cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005042ad mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 005042b0 jae 0x5042b5 */ if (!CF_) goto L_005042b5;
  /* 005042b2 lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
L_005042b5:;
  /* 005042b5 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 005042b8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005042b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005042ba mov dword ptr [ebp - 0x4c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(0x0u); }
  /* 005042c1 call 0x62d770 */ esp -= 4; M32(esp) = 0x5042c6u; SAVEALL; F_0062d770(c); ABI_CHECK(0x62d770u, 0x5042c1u); RETCHK(0x5042c6u, 0x5042c1u); LOADALL;
  /* 005042c6 nop */ ;
  /* 005042c7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005042c9 je 0x5042f0 */ if (ZF_) goto L_005042f0;
  /* 005042cb mov edx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); edx = (u32)(M32(m_)); }
  /* 005042ce mov eax, edx */ { eax = (u32)(edx); }
  /* 005042d0 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
L_005042d3:;
  /* 005042d3 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005042d5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005042d6 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005042d8 jne 0x5042d3 */ if (!ZF_) goto L_005042d3;
  /* 005042da sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005042dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005042dd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005042de lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 005042e1 call 0x404420 */ esp -= 4; M32(esp) = 0x5042e6u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5042e1u); RETCHK(0x5042e6u, 0x5042e1u); LOADALL;
  /* 005042e6 mov edx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); edx = (u32)(M32(m_)); }
  /* 005042e9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005042ea call dword ptr [0x62e214] */ { const u32 m_ = (u32)(0x62e214u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5042f0u; SAVEALL; call_ind(c, t_); RETCHK(0x5042f0u, 0x5042eau); LOADALL; }
L_005042f0:;
  /* 005042f0 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005042f4 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 005042f7 jae 0x5042fc */ if (!CF_) goto L_005042fc;
  /* 005042f9 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_005042fc:;
  /* 005042fc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005042fe push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00504300 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504301 lea ecx, [ebp - 0xe0] */ ecx = (u32)((u32)(ebp + 0xffffff20u));
  /* 00504307 call 0x5628f0 */ esp -= 4; M32(esp) = 0x50430cu; SAVEALL; F_005628f0(c); ABI_CHECK(0x5628f0u, 0x504307u); RETCHK(0x50430cu, 0x504307u); LOADALL;
  /* 0050430c mov eax, 0x650380 */ { eax = (u32)(0x650380u); }
  /* 00504311 lea ecx, [ebp - 0xe0] */ ecx = (u32)((u32)(ebp + 0xffffff20u));
  /* 00504317 call 0x560ba0 */ esp -= 4; M32(esp) = 0x50431cu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x504317u); RETCHK(0x50431cu, 0x504317u); LOADALL;
  /* 0050431c mov esi, eax */ { esi = (u32)(eax); }
  /* 0050431e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00504320 mov dword ptr [ebp - 0x4c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(esi); }
  /* 00504323 je 0x504578 */ if (ZF_) goto L_00504578;
  /* 00504329 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050432a mov eax, 0x650378 */ { eax = (u32)(0x650378u); }
  /* 0050432f call 0x560ed0 */ esp -= 4; M32(esp) = 0x504334u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50432fu); RETCHK(0x504334u, 0x50432fu); LOADALL;
  /* 00504334 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504335 call 0x5fe92e */ esp -= 4; M32(esp) = 0x50433au; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x504335u); RETCHK(0x50433au, 0x504335u); LOADALL;
  /* 0050433a mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050433c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050433f test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00504341 jl 0x504534 */ if (LT_) goto L_00504534;
  /* 00504347 cmp ebx, 0x1e */ { u32 a_ = ebx, b_ = 0x1eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050434a jge 0x504534 */ if (!LT_) goto L_00504534;
  /* 00504350 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00504353 mov eax, dword ptr [edi + ebx*4 + 8] */ { const u32 m_ = (u32)(edi + ebx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 00504357 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00504359 jne 0x504393 */ if (!ZF_) goto L_00504393;
  /* 0050435b push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0050435d call 0x5fe934 */ esp -= 4; M32(esp) = 0x504362u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50435du); RETCHK(0x504362u, 0x50435du); LOADALL;
  /* 00504362 mov esi, eax */ { esi = (u32)(eax); }
  /* 00504364 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00504367 mov dword ptr [ebp - 0x98], esi */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(esi); }
  /* 0050436d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050436f mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 00504373 je 0x504386 */ if (ZF_) goto L_00504386;
  /* 00504375 call 0x5045f0 */ esp -= 4; M32(esp) = 0x50437au; SAVEALL; F_005045f0(c); ABI_CHECK(0x5045f0u, 0x504375u); RETCHK(0x50437au, 0x504375u); LOADALL;
  /* 0050437a mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0050437d mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 00504384 jmp 0x504388 */ goto L_00504388;
L_00504386:;
  /* 00504386 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_00504388:;
  /* 00504388 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0050438c mov dword ptr [edi + ebx*4 + 8], esi */ { const u32 m_ = (u32)(edi + ebx * 4u + 0x8u); M32(m_) = (u32)(esi); }
  /* 00504390 mov esi, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); esi = (u32)(M32(m_)); }
L_00504393:;
  /* 00504393 mov eax, 0x65036c */ { eax = (u32)(0x65036cu); }
  /* 00504398 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050439a call 0x560ba0 */ esp -= 4; M32(esp) = 0x50439fu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x50439au); RETCHK(0x50439fu, 0x50439au); LOADALL;
  /* 0050439f mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005043a1 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005043a3 je 0x5044f9 */ if (ZF_) goto L_005044f9;
  /* 005043a9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005043b0:;
  /* 005043b0 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 005043b2 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005043b4 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5043b7u; SAVEALL; call_ind(c, t_); RETCHK(0x5043b7u, 0x5043b4u); LOADALL; }
  /* 005043b7 push 0x650360 */ { u32 v_ = 0x650360u; esp -= 4; M32(esp) = v_; }
  /* 005043bc lea edi, [ebp - 0x94] */ edi = (u32)((u32)(ebp + 0xffffff6cu));
  /* 005043c2 mov esi, eax */ { esi = (u32)(eax); }
  /* 005043c4 call 0x560f30 */ esp -= 4; M32(esp) = 0x5043c9u; SAVEALL; F_00560f30(c); ABI_CHECK(0x560f30u, 0x5043c4u); RETCHK(0x5043c9u, 0x5043c4u); LOADALL;
  /* 005043c9 push 0x650358 */ { u32 v_ = 0x650358u; esp -= 4; M32(esp) = v_; }
  /* 005043ce lea edi, [ebp - 0x58] */ edi = (u32)((u32)(ebp + 0xffffffa8u));
  /* 005043d1 mov eax, esi */ { eax = (u32)(esi); }
  /* 005043d3 call 0x560f70 */ esp -= 4; M32(esp) = 0x5043d8u; SAVEALL; F_00560f70(c); ABI_CHECK(0x560f70u, 0x5043d3u); RETCHK(0x5043d8u, 0x5043d3u); LOADALL;
  /* 005043d8 push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 005043dd lea edi, [ebp - 0x90] */ edi = (u32)((u32)(ebp + 0xffffff70u));
  /* 005043e3 mov eax, esi */ { eax = (u32)(esi); }
  /* 005043e5 call 0x560f70 */ esp -= 4; M32(esp) = 0x5043eau; SAVEALL; F_00560f70(c); ABI_CHECK(0x560f70u, 0x5043e5u); RETCHK(0x5043eau, 0x5043e5u); LOADALL;
  /* 005043ea push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 005043ef lea edi, [ebp - 0x8c] */ edi = (u32)((u32)(ebp + 0xffffff74u));
  /* 005043f5 mov eax, esi */ { eax = (u32)(esi); }
  /* 005043f7 call 0x560f70 */ esp -= 4; M32(esp) = 0x5043fcu; SAVEALL; F_00560f70(c); ABI_CHECK(0x560f70u, 0x5043f7u); RETCHK(0x5043fcu, 0x5043f7u); LOADALL;
  /* 005043fc push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 00504401 lea edi, [ebp - 0x88] */ edi = (u32)((u32)(ebp + 0xffffff78u));
  /* 00504407 mov eax, esi */ { eax = (u32)(esi); }
  /* 00504409 call 0x560f70 */ esp -= 4; M32(esp) = 0x50440eu; SAVEALL; F_00560f70(c); ABI_CHECK(0x560f70u, 0x504409u); RETCHK(0x50440eu, 0x504409u); LOADALL;
  /* 0050440e push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 00504413 lea edi, [ebp - 0x84] */ edi = (u32)((u32)(ebp + 0xffffff7cu));
  /* 00504419 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050441b call 0x560f70 */ esp -= 4; M32(esp) = 0x504420u; SAVEALL; F_00560f70(c); ABI_CHECK(0x560f70u, 0x50441bu); RETCHK(0x504420u, 0x50441bu); LOADALL;
  /* 00504420 push 0x650348 */ { u32 v_ = 0x650348u; esp -= 4; M32(esp) = v_; }
  /* 00504425 lea edi, [ebp - 0x80] */ edi = (u32)((u32)(ebp + 0xffffff80u));
  /* 00504428 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050442a call 0x560f70 */ esp -= 4; M32(esp) = 0x50442fu; SAVEALL; F_00560f70(c); ABI_CHECK(0x560f70u, 0x50442au); RETCHK(0x50442fu, 0x50442au); LOADALL;
  /* 0050442f push 0x650338 */ { u32 v_ = 0x650338u; esp -= 4; M32(esp) = v_; }
  /* 00504434 lea edi, [ebp - 0x7c] */ edi = (u32)((u32)(ebp + 0xffffff84u));
  /* 00504437 mov eax, esi */ { eax = (u32)(esi); }
  /* 00504439 call 0x560f70 */ esp -= 4; M32(esp) = 0x50443eu; SAVEALL; F_00560f70(c); ABI_CHECK(0x560f70u, 0x504439u); RETCHK(0x50443eu, 0x504439u); LOADALL;
  /* 0050443e push 0x65032c */ { u32 v_ = 0x65032cu; esp -= 4; M32(esp) = v_; }
  /* 00504443 lea edi, [ebp - 0x78] */ edi = (u32)((u32)(ebp + 0xffffff88u));
  /* 00504446 mov eax, esi */ { eax = (u32)(esi); }
  /* 00504448 call 0x560f70 */ esp -= 4; M32(esp) = 0x50444du; SAVEALL; F_00560f70(c); ABI_CHECK(0x560f70u, 0x504448u); RETCHK(0x50444du, 0x504448u); LOADALL;
  /* 0050444d push 0x650190 */ { u32 v_ = 0x650190u; esp -= 4; M32(esp) = v_; }
  /* 00504452 lea edi, [ebp - 0x4c] */ edi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00504455 mov eax, esi */ { eax = (u32)(esi); }
  /* 00504457 mov dword ptr [ebp - 0x4c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(0x0u); }
  /* 0050445e call 0x560f30 */ esp -= 4; M32(esp) = 0x504463u; SAVEALL; F_00560f30(c); ABI_CHECK(0x560f30u, 0x50445eu); RETCHK(0x504463u, 0x50445eu); LOADALL;
  /* 00504463 mov cl, byte ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00504466 push 0x650188 */ { u32 v_ = 0x650188u; esp -= 4; M32(esp) = v_; }
  /* 0050446b mov eax, esi */ { eax = (u32)(esi); }
  /* 0050446d mov byte ptr [ebp - 0x70], cl */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00504470 call 0x560f30 */ esp -= 4; M32(esp) = 0x504475u; SAVEALL; F_00560f30(c); ABI_CHECK(0x560f30u, 0x504470u); RETCHK(0x504475u, 0x504470u); LOADALL;
  /* 00504475 mov dl, byte ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00504478 push 0x650180 */ { u32 v_ = 0x650180u; esp -= 4; M32(esp) = v_; }
  /* 0050447d mov eax, esi */ { eax = (u32)(esi); }
  /* 0050447f mov byte ptr [ebp - 0x6f], dl */ { const u32 m_ = (u32)(ebp + 0xffffff91u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00504482 call 0x560f30 */ esp -= 4; M32(esp) = 0x504487u; SAVEALL; F_00560f30(c); ABI_CHECK(0x560f30u, 0x504482u); RETCHK(0x504487u, 0x504482u); LOADALL;
  /* 00504487 mov al, byte ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050448a mov byte ptr [ebp - 0x6e], al */ { const u32 m_ = (u32)(ebp + 0xffffff92u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0050448d push 0x650178 */ { u32 v_ = 0x650178u; esp -= 4; M32(esp) = v_; }
  /* 00504492 mov eax, esi */ { eax = (u32)(esi); }
  /* 00504494 call 0x560f30 */ esp -= 4; M32(esp) = 0x504499u; SAVEALL; F_00560f30(c); ABI_CHECK(0x560f30u, 0x504494u); RETCHK(0x504499u, 0x504494u); LOADALL;
  /* 00504499 mov cl, byte ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050449c push 0x650328 */ { u32 v_ = 0x650328u; esp -= 4; M32(esp) = v_; }
  /* 005044a1 lea edi, [ebp - 0x6c] */ edi = (u32)((u32)(ebp + 0xffffff94u));
  /* 005044a4 mov eax, esi */ { eax = (u32)(esi); }
  /* 005044a6 mov byte ptr [ebp - 0x6d], cl */ { const u32 m_ = (u32)(ebp + 0xffffff93u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005044a9 call 0x560f70 */ esp -= 4; M32(esp) = 0x5044aeu; SAVEALL; F_00560f70(c); ABI_CHECK(0x560f70u, 0x5044a9u); RETCHK(0x5044aeu, 0x5044a9u); LOADALL;
  /* 005044ae push 0x650324 */ { u32 v_ = 0x650324u; esp -= 4; M32(esp) = v_; }
  /* 005044b3 lea edi, [ebp - 0x68] */ edi = (u32)((u32)(ebp + 0xffffff98u));
  /* 005044b6 mov eax, esi */ { eax = (u32)(esi); }
  /* 005044b8 call 0x560f70 */ esp -= 4; M32(esp) = 0x5044bdu; SAVEALL; F_00560f70(c); ABI_CHECK(0x560f70u, 0x5044b8u); RETCHK(0x5044bdu, 0x5044b8u); LOADALL;
  /* 005044bd push 0x650320 */ { u32 v_ = 0x650320u; esp -= 4; M32(esp) = v_; }
  /* 005044c2 lea edi, [ebp - 0x64] */ edi = (u32)((u32)(ebp + 0xffffff9cu));
  /* 005044c5 mov eax, esi */ { eax = (u32)(esi); }
  /* 005044c7 call 0x560f70 */ esp -= 4; M32(esp) = 0x5044ccu; SAVEALL; F_00560f70(c); ABI_CHECK(0x560f70u, 0x5044c7u); RETCHK(0x5044ccu, 0x5044c7u); LOADALL;
  /* 005044cc push 0x65031c */ { u32 v_ = 0x65031cu; esp -= 4; M32(esp) = v_; }
  /* 005044d1 lea edi, [ebp - 0x60] */ edi = (u32)((u32)(ebp + 0xffffffa0u));
  /* 005044d4 mov eax, esi */ { eax = (u32)(esi); }
  /* 005044d6 call 0x560f70 */ esp -= 4; M32(esp) = 0x5044dbu; SAVEALL; F_00560f70(c); ABI_CHECK(0x560f70u, 0x5044d6u); RETCHK(0x5044dbu, 0x5044d6u); LOADALL;
  /* 005044db mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005044de lea edx, [ebp - 0x94] */ edx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 005044e4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005044e5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005044e6 mov ecx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); ecx = (u32)(M32(m_)); }
  /* 005044e9 call 0x503bd0 */ esp -= 4; M32(esp) = 0x5044eeu; SAVEALL; F_00503bd0(c); ABI_CHECK(0x503bd0u, 0x5044e9u); RETCHK(0x5044eeu, 0x5044e9u); LOADALL;
  /* 005044ee mov ebx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ebx = (u32)(M32(m_)); }
  /* 005044f1 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005044f3 jne 0x5043b0 */ if (!ZF_) goto L_005043b0;
L_005044f9:;
  /* 005044f9 mov edx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); edx = (u32)(M32(m_)); }
  /* 005044fc mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00504500 mov eax, dword ptr [ebp - 0xac] */ { const u32 m_ = (u32)(ebp + 0xffffff54u); eax = (u32)(M32(m_)); }
  /* 00504506 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00504507 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050450c mov dword ptr [ebp - 0x54], edx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(edx); }
  /* 0050450f mov dword ptr [ebp - 0xe0], 0x643d40 */ { const u32 m_ = (u32)(ebp + 0xffffff20u); M32(m_) = (u32)(0x643d40u); }
  /* 00504519 je 0x504524 */ if (ZF_) goto L_00504524;
  /* 0050451b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050451c call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x504521u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x50451cu); RETCHK(0x504521u, 0x50451cu); LOADALL;
  /* 00504521 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00504524:;
  /* 00504524 lea ecx, [ebp - 0xe0] */ ecx = (u32)((u32)(ebp + 0xffffff20u));
  /* 0050452a call 0x560aa0 */ esp -= 4; M32(esp) = 0x50452fu; SAVEALL; F_00560aa0(c); ABI_CHECK(0x560aa0u, 0x50452au); RETCHK(0x50452fu, 0x50452au); LOADALL;
  /* 0050452f mov edi, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); edi = (u32)(M32(m_)); }
  /* 00504532 jmp 0x504563 */ goto L_00504563;
L_00504534:;
  /* 00504534 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00504538 mov eax, dword ptr [ebp - 0xac] */ { const u32 m_ = (u32)(ebp + 0xffffff54u); eax = (u32)(M32(m_)); }
  /* 0050453e cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00504543 mov dword ptr [ebp - 0xe0], 0x643d40 */ { const u32 m_ = (u32)(ebp + 0xffffff20u); M32(m_) = (u32)(0x643d40u); }
  /* 0050454d je 0x504558 */ if (ZF_) goto L_00504558;
  /* 0050454f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504550 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x504555u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x504550u); RETCHK(0x504555u, 0x504550u); LOADALL;
  /* 00504555 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00504558:;
  /* 00504558 lea ecx, [ebp - 0xe0] */ ecx = (u32)((u32)(ebp + 0xffffff20u));
  /* 0050455e call 0x560aa0 */ esp -= 4; M32(esp) = 0x504563u; SAVEALL; F_00560aa0(c); ABI_CHECK(0x560aa0u, 0x50455eu); RETCHK(0x504563u, 0x50455eu); LOADALL;
L_00504563:;
  /* 00504563 mov eax, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (u32)(M32(m_)); }
  /* 00504566 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00504568 mov dword ptr [ebp - 0x50], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(eax); }
  /* 0050456b jne 0x50424d */ if (!ZF_) goto L_0050424d;
  /* 00504571 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00504573 jmp 0x5041cb */ goto L_005041cb;
L_00504578:;
  /* 00504578 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0050457c mov eax, dword ptr [ebp - 0xac] */ { const u32 m_ = (u32)(ebp + 0xffffff54u); eax = (u32)(M32(m_)); }
  /* 00504582 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00504587 mov dword ptr [ebp - 0xe0], 0x643d40 */ { const u32 m_ = (u32)(ebp + 0xffffff20u); M32(m_) = (u32)(0x643d40u); }
  /* 00504591 je 0x50459c */ if (ZF_) goto L_0050459c;
  /* 00504593 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504594 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x504599u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x504594u); RETCHK(0x504599u, 0x504594u); LOADALL;
  /* 00504599 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050459c:;
  /* 0050459c lea ecx, [ebp - 0xe0] */ ecx = (u32)((u32)(ebp + 0xffffff20u));
  /* 005045a2 call 0x560aa0 */ esp -= 4; M32(esp) = 0x5045a7u; SAVEALL; F_00560aa0(c); ABI_CHECK(0x560aa0u, 0x5045a2u); RETCHK(0x5045a7u, 0x5045a2u); LOADALL;
  /* 005045a7 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 005045aa mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 005045af cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005045b1 jb 0x5045bf */ if (CF_) goto L_005045bf;
  /* 005045b3 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 005045b6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005045b7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5045bcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5045b7u); RETCHK(0x5045bcu, 0x5045b7u); LOADALL;
  /* 005045bc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005045bf:;
  /* 005045bf cmp dword ptr [ebp - 0x30], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005045c2 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 005045c9 mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 005045d0 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 005045d4 jb 0x504216 */ if (CF_) goto L_00504216;
  /* 005045da mov edx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); edx = (u32)(M32(m_)); }
  /* 005045dd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005045de jmp 0x50420e */ goto L_0050420e;
}

void F_005045f0(CPU *c) {
  NATIVE_HOOK(0x5045f0u) REGS; LOADALL;
L_005045f0:;
  /* 005045f0 push 0x48 */ { u32 v_ = 0x48u; esp -= 4; M32(esp) = v_; }
  /* 005045f2 call 0x5fe934 */ esp -= 4; M32(esp) = 0x5045f7u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5045f2u); RETCHK(0x5045f7u, 0x5045f2u); LOADALL;
  /* 005045f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005045fa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005045fc je 0x504600 */ if (ZF_) goto L_00504600;
  /* 005045fe mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
L_00504600:;
  /* 00504600 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 00504603 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00504605 je 0x504609 */ if (ZF_) goto L_00504609;
  /* 00504607 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
L_00504609:;
  /* 00504609 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00504610(CPU *c) {
  NATIVE_HOOK(0x504610u) REGS; LOADALL;
L_00504610:;
  /* 00504610 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00504611 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00504613 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00504614 push 0x48 */ { u32 v_ = 0x48u; esp -= 4; M32(esp) = v_; }
  /* 00504616 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50461bu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x504616u); RETCHK(0x50461bu, 0x504616u); LOADALL;
  /* 0050461b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050461d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00504620 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00504622 je 0x504639 */ if (ZF_) goto L_00504639;
  /* 00504624 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00504627 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0050462a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050462b lea esi, [ebx + 8] */ esi = (u32)((u32)(ebx + 0x8u));
  /* 0050462e mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 00504630 mov dword ptr [ebx + 4], ecx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00504633 call 0x5046d0 */ esp -= 4; M32(esp) = 0x504638u; SAVEALL; F_005046d0(c); ABI_CHECK(0x5046d0u, 0x504633u); RETCHK(0x504638u, 0x504633u); LOADALL;
  /* 00504638 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00504639:;
  /* 00504639 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0050463b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050463c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050463d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00504640(CPU *c) {
  NATIVE_HOOK(0x504640u) REGS; LOADALL;
L_00504640:;
  /* 00504640 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00504641 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00504643 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00504645 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 0050464a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00504650 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504651 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00504658 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050465b mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050465e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050465f mov esi, 0x3ffffff */ { esi = (u32)(0x3ffffffu); }
  /* 00504664 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00504666 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00504668 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00504669 jae 0x5046b4 */ if (!CF_) goto L_005046b4;
  /* 0050466b push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0050466d push 0x648f18 */ { u32 v_ = 0x648f18u; esp -= 4; M32(esp) = v_; }
  /* 00504672 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00504675 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 0050467c mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 00504683 mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 00504687 call 0x404420 */ esp -= 4; M32(esp) = 0x50468cu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x504687u); RETCHK(0x50468cu, 0x504687u); LOADALL;
  /* 0050468c lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0050468f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504690 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00504693 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050469a call 0x4040e0 */ esp -= 4; M32(esp) = 0x50469fu; SAVEALL; F_004040e0(c); ABI_CHECK(0x4040e0u, 0x50469au); RETCHK(0x50469fu, 0x50469au); LOADALL;
  /* 0050469f push 0x657ab8 */ { u32 v_ = 0x657ab8u; esp -= 4; M32(esp) = v_; }
  /* 005046a4 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 005046a7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005046a8 mov dword ptr [ebp - 0x50], 0x63cf80 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x63cf80u); }
  /* 005046af call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
L_005046b4:;
  /* 005046b4 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005046b6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005046b9 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 005046bc mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005046c3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005046c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005046c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005046d0(CPU *c) {
  NATIVE_HOOK(0x5046d0u) REGS; LOADALL;
L_005046d0:;
  /* 005046d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005046d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005046d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005046d4 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005046d6 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005046d8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005046d9 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 005046dc lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 005046df call 0x52ce80 */ esp -= 4; M32(esp) = 0x5046e4u; SAVEALL; F_0052ce80(c); ABI_CHECK(0x52ce80u, 0x5046dfu); RETCHK(0x5046e4u, 0x5046dfu); LOADALL;
  /* 005046e4 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005046e7 mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005046ea mov edx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); edx = (u32)(M32(m_)); }
  /* 005046ed lea ecx, [edi + 0x14] */ ecx = (u32)((u32)(edi + 0x14u));
  /* 005046f0 lea eax, [esi + 0x14] */ eax = (u32)((u32)(esi + 0x14u));
  /* 005046f3 mov dword ptr [esi + 0x10], edx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edx); }
  /* 005046f6 call 0x52ce80 */ esp -= 4; M32(esp) = 0x5046fbu; SAVEALL; F_0052ce80(c); ABI_CHECK(0x52ce80u, 0x5046f6u); RETCHK(0x5046fbu, 0x5046f6u); LOADALL;
  /* 005046fb mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005046fe mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00504701 mov ecx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00504704 mov dword ptr [esi + 0x20], ecx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 00504707 mov edx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (u32)(M32(m_)); }
  /* 0050470a lea eax, [esi + 0x28] */ eax = (u32)((u32)(esi + 0x28u));
  /* 0050470d lea ebx, [edi + 0x28] */ ebx = (u32)((u32)(edi + 0x28u));
  /* 00504710 mov dword ptr [esi + 0x24], edx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(edx); }
  /* 00504713 sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00504715 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0050471c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00504720:;
  /* 00504720 lea ecx, [ebx + eax] */ ecx = (u32)((u32)(ebx + eax));
  /* 00504723 call 0x52ce80 */ esp -= 4; M32(esp) = 0x504728u; SAVEALL; F_0052ce80(c); ABI_CHECK(0x52ce80u, 0x504723u); RETCHK(0x504728u, 0x504723u); LOADALL;
  /* 00504728 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0050472b add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050472e dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0050472f mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00504732 jne 0x504720 */ if (!ZF_) goto L_00504720;
  /* 00504734 mov eax, dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); eax = (u32)(M32(m_)); }
  /* 00504737 mov dword ptr [esi + 0x38], eax */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(eax); }
  /* 0050473a mov ecx, dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 0050473d mov dword ptr [esi + 0x3c], ecx */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 00504740 mov eax, esi */ { eax = (u32)(esi); }
  /* 00504742 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00504743 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00504745 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504746 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00504750(CPU *c) {
  NATIVE_HOOK(0x504750u) REGS; LOADALL;
L_00504750:;
  /* 00504750 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00504751 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00504753 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00504759 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050475b push 0x61c956 */ { u32 v_ = 0x61c956u; esp -= 4; M32(esp) = v_; }
  /* 00504760 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504761 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00504764 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050476b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050476c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050476d mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00504770 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504771 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00504772 call 0x505150 */ esp -= 4; M32(esp) = 0x504777u; SAVEALL; F_00505150(c); ABI_CHECK(0x505150u, 0x504772u); RETCHK(0x504777u, 0x504772u); LOADALL;
  /* 00504777 lea esi, [edi + 0x2a0] */ esi = (u32)((u32)(edi + 0x2a0u));
  /* 0050477d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050477f mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00504786 call 0x503800 */ esp -= 4; M32(esp) = 0x50478bu; SAVEALL; F_00503800(c); ABI_CHECK(0x503800u, 0x504786u); RETCHK(0x50478bu, 0x504786u); LOADALL;
  /* 0050478b push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0050478d mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00504791 push 0x6504b8 */ { u32 v_ = 0x6504b8u; esp -= 4; M32(esp) = v_; }
  /* 00504796 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 00504799 mov dword ptr [edi], 0x6503c0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x6503c0u); }
  /* 0050479f mov dword ptr [esi], 0x6503bc */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6503bcu); }
  /* 005047a5 call 0x404420 */ esp -= 4; M32(esp) = 0x5047aau; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5047a5u); RETCHK(0x5047aau, 0x5047a5u); LOADALL;
  /* 005047aa mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005047ac mov eax, esi */ { eax = (u32)(esi); }
  /* 005047ae call 0x5039d0 */ esp -= 4; M32(esp) = 0x5047b3u; SAVEALL; F_005039d0(c); ABI_CHECK(0x5039d0u, 0x5047aeu); RETCHK(0x5047b3u, 0x5047aeu); LOADALL;
  /* 005047b3 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005047b6 mov eax, edi */ { eax = (u32)(edi); }
  /* 005047b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005047b9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005047c0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005047c1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005047c3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005047c4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00504753(CPU *c) {
  NATIVE_HOOK(0x504753u) REGS; LOADALL;
L_00504753:;
  /* 00504753 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00504759 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050475b push 0x61c956 */ { u32 v_ = 0x61c956u; esp -= 4; M32(esp) = v_; }
  /* 00504760 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504761 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00504764 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050476b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050476c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050476d mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00504770 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504771 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00504772 call 0x505150 */ esp -= 4; M32(esp) = 0x504777u; SAVEALL; F_00505150(c); ABI_CHECK(0x505150u, 0x504772u); RETCHK(0x504777u, 0x504772u); LOADALL;
  /* 00504777 lea esi, [edi + 0x2a0] */ esi = (u32)((u32)(edi + 0x2a0u));
  /* 0050477d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050477f mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00504786 call 0x503800 */ esp -= 4; M32(esp) = 0x50478bu; SAVEALL; F_00503800(c); ABI_CHECK(0x503800u, 0x504786u); RETCHK(0x50478bu, 0x504786u); LOADALL;
  /* 0050478b push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0050478d mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00504791 push 0x6504b8 */ { u32 v_ = 0x6504b8u; esp -= 4; M32(esp) = v_; }
  /* 00504796 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 00504799 mov dword ptr [edi], 0x6503c0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x6503c0u); }
  /* 0050479f mov dword ptr [esi], 0x6503bc */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6503bcu); }
  /* 005047a5 call 0x404420 */ esp -= 4; M32(esp) = 0x5047aau; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5047a5u); RETCHK(0x5047aau, 0x5047a5u); LOADALL;
  /* 005047aa mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005047ac mov eax, esi */ { eax = (u32)(esi); }
  /* 005047ae call 0x5039d0 */ esp -= 4; M32(esp) = 0x5047b3u; SAVEALL; F_005039d0(c); ABI_CHECK(0x5039d0u, 0x5047aeu); RETCHK(0x5047b3u, 0x5047aeu); LOADALL;
  /* 005047b3 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005047b6 mov eax, edi */ { eax = (u32)(edi); }
  /* 005047b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005047b9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005047c0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005047c1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005047c3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005047c4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005047d0(CPU *c) {
  NATIVE_HOOK(0x5047d0u) REGS; LOADALL;
L_005047d0:;
  /* 005047d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005047d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005047d3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005047d4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005047d6 call 0x504800 */ esp -= 4; M32(esp) = 0x5047dbu; SAVEALL; F_00504800(c); ABI_CHECK(0x504800u, 0x5047d6u); RETCHK(0x5047dbu, 0x5047d6u); LOADALL;
  /* 005047db test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005047df je 0x5047ea */ if (ZF_) goto L_005047ea;
  /* 005047e1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005047e2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5047e7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5047e2u); RETCHK(0x5047e7u, 0x5047e2u); LOADALL;
  /* 005047e7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005047ea:;
  /* 005047ea mov eax, esi */ { eax = (u32)(esi); }
  /* 005047ec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005047ed pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005047ee ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00504800(CPU *c) {
  NATIVE_HOOK(0x504800u) REGS; LOADALL;
L_00504800:;
  /* 00504800 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00504801 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00504803 lea ecx, [esi + 0x2a0] */ ecx = (u32)((u32)(esi + 0x2a0u));
  /* 00504809 mov dword ptr [esi], 0x6503c0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6503c0u); }
  /* 0050480f mov dword ptr [ecx], 0x6503bc */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x6503bcu); }
  /* 00504815 call 0x5038b0 */ esp -= 4; M32(esp) = 0x50481au; SAVEALL; F_005038b0(c); ABI_CHECK(0x5038b0u, 0x504815u); RETCHK(0x50481au, 0x504815u); LOADALL;
  /* 0050481a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050481c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050481d jmp 0x505270 */ SAVEALL; F_00505270(c); return;
}

void F_00504830(CPU *c) {
  NATIVE_HOOK(0x504830u) REGS; LOADALL;
L_00504830:;
  /* 00504830 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00504831 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00504833 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00504835 push 0x61bac8 */ { u32 v_ = 0x61bac8u; esp -= 4; M32(esp) = v_; }
  /* 0050483a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00504840 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504841 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00504848 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050484b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050484c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0050484e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00504851 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00504853 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 00504856 jne 0x50486b */ if (!ZF_) goto L_0050486b;
  /* 00504858 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050485a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050485b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050485e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00504865 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00504867 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504868 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0050486b:;
  /* 0050486b mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050486d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050486e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050486f call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x504872u; SAVEALL; call_ind(c, t_); RETCHK(0x504872u, 0x50486fu); LOADALL; }
  /* 00504872 push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 00504877 mov edi, eax */ { edi = (u32)(eax); }
  /* 00504879 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50487eu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x504879u); RETCHK(0x50487eu, 0x504879u); LOADALL;
  /* 0050487e mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00504881 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00504884 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 00504889 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050488b fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050488e call 0x560fd0 */ esp -= 4; M32(esp) = 0x504893u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50488eu); RETCHK(0x504893u, 0x50488eu); LOADALL;
  /* 00504893 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00504896 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00504899 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 0050489e mov eax, edi */ { eax = (u32)(edi); }
  /* 005048a0 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005048a3 call 0x560fd0 */ esp -= 4; M32(esp) = 0x5048a8u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5048a3u); RETCHK(0x5048a8u, 0x5048a3u); LOADALL;
  /* 005048a8 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005048ab fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005048ae push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 005048b3 mov eax, edi */ { eax = (u32)(edi); }
  /* 005048b5 fadd dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005048b8 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005048bb call 0x560fd0 */ esp -= 4; M32(esp) = 0x5048c0u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5048bbu); RETCHK(0x5048c0u, 0x5048bbu); LOADALL;
  /* 005048c0 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005048c3 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005048c6 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 005048c9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005048cb fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005048ce fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005048d1 je 0x5048df */ if (ZF_) goto L_005048df;
  /* 005048d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005048d4 lea esi, [ebp - 0x20] */ esi = (u32)((u32)(ebp + 0xffffffe0u));
  /* 005048d7 call 0x52d060 */ esp -= 4; M32(esp) = 0x5048dcu; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x5048d7u); RETCHK(0x5048dcu, 0x5048d7u); LOADALL;
  /* 005048dc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005048df:;
  /* 005048df push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005048e0 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 005048e5 call 0x560ed0 */ esp -= 4; M32(esp) = 0x5048eau; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5048e5u); RETCHK(0x5048eau, 0x5048e5u); LOADALL;
  /* 005048ea mov esi, eax */ { esi = (u32)(eax); }
  /* 005048ec mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005048ee mov dword ptr [ebp - 0x24], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0xfu); }
  /* 005048f5 mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 005048fc mov byte ptr [ebp - 0x38], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)(0x0u); }
  /* 00504900 lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
L_00504903:;
  /* 00504903 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00504905 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00504906 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00504908 jne 0x504903 */ if (!ZF_) goto L_00504903;
  /* 0050490a sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050490c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050490d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050490e lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00504911 call 0x404420 */ esp -= 4; M32(esp) = 0x504916u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x504911u); RETCHK(0x504916u, 0x504911u); LOADALL;
  /* 00504916 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050491d mov esi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); esi = (u32)(M32(m_)); }
  /* 0050491f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00504920 mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 00504925 call 0x560ed0 */ esp -= 4; M32(esp) = 0x50492au; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x504925u); RETCHK(0x50492au, 0x504925u); LOADALL;
  /* 0050492a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050492b lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0050492e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050492f lea edx, [ebp - 0x3c] */ edx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00504932 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00504933 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00504935 call dword ptr [esi + 0xe8] */ { const u32 m_ = (u32)(esi + 0xe8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50493bu; SAVEALL; call_ind(c, t_); RETCHK(0x50493bu, 0x504935u); LOADALL; }
  /* 0050493b mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0050493d neg bl */ { u32 a_ = (ebx & 0xffu); u32 r_ = (0u - a_) & 0xffu; ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 0050493f sbb bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00504941 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00504948 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 0050494b inc bl */ { u32 a_ = (ebx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 0050494d cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00504950 jb 0x50495e */ if (CF_) goto L_0050495e;
  /* 00504952 mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 00504955 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504956 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50495bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x504956u); RETCHK(0x50495bu, 0x504956u); LOADALL;
  /* 0050495b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050495e:;
  /* 0050495e test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00504960 mov dword ptr [ebp - 0x24], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0xfu); }
  /* 00504967 mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 0050496e mov byte ptr [ebp - 0x38], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)(0x0u); }
  /* 00504972 je 0x504989 */ if (ZF_) goto L_00504989;
  /* 00504974 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00504975 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00504976 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00504978 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00504979 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050497c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00504983 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00504985 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504986 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00504989:;
  /* 00504989 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050498a mov eax, 0x64fe00 */ { eax = (u32)(0x64fe00u); }
  /* 0050498f call 0x560ed0 */ esp -= 4; M32(esp) = 0x504994u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50498fu); RETCHK(0x504994u, 0x50498fu); LOADALL;
  /* 00504994 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504995 call 0x5fe92e */ esp -= 4; M32(esp) = 0x50499au; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x504995u); RETCHK(0x50499au, 0x504995u); LOADALL;
  /* 0050499a mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0050499d add ecx, 0x2a0 */ { u32 a_ = ecx, b_ = 0x2a0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005049a3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005049a6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005049a7 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005049a9 call 0x504110 */ esp -= 4; M32(esp) = 0x5049aeu; SAVEALL; F_00504110(c); ABI_CHECK(0x504110u, 0x5049a9u); RETCHK(0x5049aeu, 0x5049a9u); LOADALL;
  /* 005049ae mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005049b1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005049b2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005049b4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005049b5 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005049b8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005049b9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005049c0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005049c2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005049c3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005049d0(CPU *c) {
  NATIVE_HOOK(0x5049d0u) REGS; LOADALL;
L_005049d0:;
  /* 005049d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005049d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005049d3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005049d6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005049d7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005049d8 lea esi, [ecx + 0x2a0] */ esi = (u32)((u32)(ecx + 0x2a0u));
  /* 005049de call 0x503a30 */ esp -= 4; M32(esp) = 0x5049e3u; SAVEALL; F_00503a30(c); ABI_CHECK(0x503a30u, 0x5049deu); RETCHK(0x5049e3u, 0x5049deu); LOADALL;
  /* 005049e3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005049e4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005049e5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005049f0(CPU *c) {
  NATIVE_HOOK(0x5049f0u) REGS; LOADALL;
L_005049f0:;
  /* 005049f0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005049f1 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005049f3 mov eax, dword ptr [edi + 0x2a8] */ { const u32 m_ = (u32)(edi + 0x2a8u); eax = (u32)(M32(m_)); }
  /* 005049f9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005049fb je 0x504a1c */ if (ZF_) goto L_00504a1c;
  /* 005049fd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005049fe lea esi, [edi + 0x2a0] */ esi = (u32)((u32)(edi + 0x2a0u));
  /* 00504a04 mov eax, esi */ { eax = (u32)(esi); }
  /* 00504a06 call 0x503bb0 */ esp -= 4; M32(esp) = 0x504a0bu; SAVEALL; F_00503bb0(c); ABI_CHECK(0x503bb0u, 0x504a06u); RETCHK(0x504a0bu, 0x504a06u); LOADALL;
  /* 00504a0b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00504a0d mov eax, esi */ { eax = (u32)(esi); }
  /* 00504a0f call 0x503b30 */ esp -= 4; M32(esp) = 0x504a14u; SAVEALL; F_00503b30(c); ABI_CHECK(0x503b30u, 0x504a0fu); RETCHK(0x504a14u, 0x504a0fu); LOADALL;
  /* 00504a14 mov eax, esi */ { eax = (u32)(esi); }
  /* 00504a16 call 0x5039e0 */ esp -= 4; M32(esp) = 0x504a1bu; SAVEALL; F_005039e0(c); ABI_CHECK(0x5039e0u, 0x504a16u); RETCHK(0x504a1bu, 0x504a16u); LOADALL;
  /* 00504a1b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00504a1c:;
  /* 00504a1c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00504a1e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00504a1f jmp 0x5083b0 */ SAVEALL; F_005083b0(c); return;
}

void F_00504a30(CPU *c) {
  NATIVE_HOOK(0x504a30u) REGS; LOADALL;
L_00504a30:;
  /* 00504a30 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00504a31 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00504a33 call 0x5083e0 */ esp -= 4; M32(esp) = 0x504a38u; SAVEALL; F_005083e0(c); ABI_CHECK(0x5083e0u, 0x504a33u); RETCHK(0x504a38u, 0x504a33u); LOADALL;
  /* 00504a38 mov eax, dword ptr [esi + 0x2ac] */ { const u32 m_ = (u32)(esi + 0x2acu); eax = (u32)(M32(m_)); }
  /* 00504a3e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00504a40 je 0x504a60 */ if (ZF_) goto L_00504a60;
  /* 00504a42 add esi, 0x2a0 */ { u32 a_ = esi, b_ = 0x2a0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00504a48 mov eax, esi */ { eax = (u32)(esi); }
  /* 00504a4a call 0x503bb0 */ esp -= 4; M32(esp) = 0x504a4fu; SAVEALL; F_00503bb0(c); ABI_CHECK(0x503bb0u, 0x504a4au); RETCHK(0x504a4fu, 0x504a4au); LOADALL;
  /* 00504a4f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00504a51 mov eax, esi */ { eax = (u32)(esi); }
  /* 00504a53 call 0x503b30 */ esp -= 4; M32(esp) = 0x504a58u; SAVEALL; F_00503b30(c); ABI_CHECK(0x503b30u, 0x504a53u); RETCHK(0x504a58u, 0x504a53u); LOADALL;
  /* 00504a58 mov eax, esi */ { eax = (u32)(esi); }
  /* 00504a5a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00504a5b jmp 0x5039e0 */ SAVEALL; F_005039e0(c); return;
L_00504a60:;
  /* 00504a60 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00504a61 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00504a70(CPU *c) {
  NATIVE_HOOK(0x504a70u) REGS; LOADALL;
L_00504a70:;
  /* 00504a70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00504a71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00504a73 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00504a75 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 00504a7a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00504a80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504a81 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00504a88 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00504a89 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00504a8a push 0x504af0 */ { u32 v_ = 0x504af0u; esp -= 4; M32(esp) = v_; }
  /* 00504a8f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00504a92 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00504a94 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00504a96 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00504a99 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00504a9c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00504a9e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00504a9f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00504aa2 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00504aa9 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00504aac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504aad mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00504ab0 call 0x404140 */ esp -= 4; M32(esp) = 0x504ab5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x504ab0u); RETCHK(0x504ab5u, 0x504ab0u); LOADALL;
  /* 00504ab5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00504ab8 call 0x405c00 */ esp -= 4; M32(esp) = 0x504abdu; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x504ab8u); RETCHK(0x504abdu, 0x504ab8u); LOADALL;
  /* 00504abd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00504abf call 0x405c80 */ esp -= 4; M32(esp) = 0x504ac4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x504abfu); RETCHK(0x504ac4u, 0x504abfu); LOADALL;
  /* 00504ac4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00504ac8 jb 0x504ad6 */ if (CF_) goto L_00504ad6;
  /* 00504aca mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00504acd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00504ace call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x504ad3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x504aceu); RETCHK(0x504ad3u, 0x504aceu); LOADALL;
  /* 00504ad3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00504ad6:;
  /* 00504ad6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00504ad9 mov eax, esi */ { eax = (u32)(esi); }
  /* 00504adb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00504ae2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00504ae3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00504ae5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504ae6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00504af0(CPU *c) {
  NATIVE_HOOK(0x504af0u) REGS; LOADALL;
L_00504af0:;
  /* 00504af0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00504af1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00504af3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00504af5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 00504afa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00504b00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504b01 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00504b08 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00504b09 push 0x8ec */ { u32 v_ = 0x8ecu; esp -= 4; M32(esp) = v_; }
  /* 00504b0e call 0x5fe934 */ esp -= 4; M32(esp) = 0x504b13u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x504b0eu); RETCHK(0x504b13u, 0x504b0eu); LOADALL;
  /* 00504b13 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00504b16 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00504b19 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00504b1b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00504b22 je 0x504b3a */ if (ZF_) goto L_00504b3a;
  /* 00504b24 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00504b26 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504b27 call 0x504750 */ esp -= 4; M32(esp) = 0x504b2cu; SAVEALL; F_00504750(c); ABI_CHECK(0x504750u, 0x504b27u); RETCHK(0x504b2cu, 0x504b27u); LOADALL;
  /* 00504b2c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00504b2f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00504b36 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00504b38 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504b39 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00504b3a:;
  /* 00504b3a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00504b3d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00504b3f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00504b46 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00504b48 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504b49 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00504b50(CPU *c) {
  NATIVE_HOOK(0x504b50u) REGS; LOADALL;
L_00504b50:;
  /* 00504b50 sub ecx, 0x2a0 */ { u32 a_ = ecx, b_ = 0x2a0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00504b56 jmp 0x5047d0 */ SAVEALL; F_005047d0(c); return;
}

void F_00504b60(CPU *c) {
  NATIVE_HOOK(0x504b60u) REGS; LOADALL;
L_00504b60:;
  /* 00504b60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00504b61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00504b63 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00504b69 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00504b6b push 0x61dfa6 */ { u32 v_ = 0x61dfa6u; esp -= 4; M32(esp) = v_; }
  /* 00504b70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504b71 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00504b74 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00504b7b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00504b7c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00504b7d mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00504b80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504b81 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00504b82 call 0x50bb70 */ esp -= 4; M32(esp) = 0x504b87u; SAVEALL; F_0050bb70(c); ABI_CHECK(0x50bb70u, 0x504b82u); RETCHK(0x504b87u, 0x504b82u); LOADALL;
  /* 00504b87 lea esi, [edi + 0x1cc] */ esi = (u32)((u32)(edi + 0x1ccu));
  /* 00504b8d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00504b8f mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00504b96 call 0x503800 */ esp -= 4; M32(esp) = 0x504b9bu; SAVEALL; F_00503800(c); ABI_CHECK(0x503800u, 0x504b96u); RETCHK(0x504b9bu, 0x504b96u); LOADALL;
  /* 00504b9b push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00504b9d mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00504ba1 push 0x6505d4 */ { u32 v_ = 0x6505d4u; esp -= 4; M32(esp) = v_; }
  /* 00504ba6 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 00504ba9 mov dword ptr [edi], 0x6504c8 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x6504c8u); }
  /* 00504baf mov dword ptr [esi], 0x6504c0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6504c0u); }
  /* 00504bb5 call 0x404420 */ esp -= 4; M32(esp) = 0x504bbau; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x504bb5u); RETCHK(0x504bbau, 0x504bb5u); LOADALL;
  /* 00504bba mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00504bbc mov eax, esi */ { eax = (u32)(esi); }
  /* 00504bbe call 0x5039d0 */ esp -= 4; M32(esp) = 0x504bc3u; SAVEALL; F_005039d0(c); ABI_CHECK(0x5039d0u, 0x504bbeu); RETCHK(0x504bc3u, 0x504bbeu); LOADALL;
  /* 00504bc3 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00504bc6 mov eax, edi */ { eax = (u32)(edi); }
  /* 00504bc8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00504bc9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00504bd0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00504bd1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00504bd3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504bd4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00504be0(CPU *c) {
  NATIVE_HOOK(0x504be0u) REGS; LOADALL;
L_00504be0:;
  /* 00504be0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00504be1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00504be3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00504be4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00504be6 call 0x504c10 */ esp -= 4; M32(esp) = 0x504bebu; SAVEALL; F_00504c10(c); ABI_CHECK(0x504c10u, 0x504be6u); RETCHK(0x504bebu, 0x504be6u); LOADALL;
  /* 00504beb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00504bef je 0x504bfa */ if (ZF_) goto L_00504bfa;
  /* 00504bf1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00504bf2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x504bf7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x504bf2u); RETCHK(0x504bf7u, 0x504bf2u); LOADALL;
  /* 00504bf7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00504bfa:;
  /* 00504bfa mov eax, esi */ { eax = (u32)(esi); }
  /* 00504bfc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00504bfd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504bfe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00504c10(CPU *c) {
  NATIVE_HOOK(0x504c10u) REGS; LOADALL;
L_00504c10:;
  /* 00504c10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00504c11 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00504c13 lea ecx, [esi + 0x1cc] */ ecx = (u32)((u32)(esi + 0x1ccu));
  /* 00504c19 mov dword ptr [esi], 0x6504c8 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6504c8u); }
  /* 00504c1f mov dword ptr [ecx], 0x6504c0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x6504c0u); }
  /* 00504c25 call 0x5038b0 */ esp -= 4; M32(esp) = 0x504c2au; SAVEALL; F_005038b0(c); ABI_CHECK(0x5038b0u, 0x504c25u); RETCHK(0x504c2au, 0x504c25u); LOADALL;
  /* 00504c2a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00504c2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00504c2d jmp 0x50bc50 */ SAVEALL; F_0050bc50(c); return;
}

void F_00504c40(CPU *c) {
  NATIVE_HOOK(0x504c40u) REGS; LOADALL;
L_00504c40:;
  /* 00504c40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00504c41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00504c43 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00504c44 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00504c45 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00504c48 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00504c49 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00504c4b call 0x508630 */ esp -= 4; M32(esp) = 0x504c50u; SAVEALL; F_00508630(c); ABI_CHECK(0x508630u, 0x504c4bu); RETCHK(0x504c50u, 0x504c4bu); LOADALL;
  /* 00504c50 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00504c51 add esi, 0x1cc */ { u32 a_ = esi, b_ = 0x1ccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00504c57 call 0x503a30 */ esp -= 4; M32(esp) = 0x504c5cu; SAVEALL; F_00503a30(c); ABI_CHECK(0x503a30u, 0x504c57u); RETCHK(0x504c5cu, 0x504c57u); LOADALL;
  /* 00504c5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00504c5d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00504c5e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504c5f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00504c70(CPU *c) {
  NATIVE_HOOK(0x504c70u) REGS; LOADALL;
L_00504c70:;
  /* 00504c70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00504c71 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00504c72 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00504c74 call 0x50c1b0 */ esp -= 4; M32(esp) = 0x504c79u; SAVEALL; F_0050c1b0(c); ABI_CHECK(0x50c1b0u, 0x504c74u); RETCHK(0x504c79u, 0x504c74u); LOADALL;
  /* 00504c79 lea edi, [esi + 0x1cc] */ edi = (u32)((u32)(esi + 0x1ccu));
  /* 00504c7f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00504c81 mov eax, edi */ { eax = (u32)(edi); }
  /* 00504c83 call 0x503b30 */ esp -= 4; M32(esp) = 0x504c88u; SAVEALL; F_00503b30(c); ABI_CHECK(0x503b30u, 0x504c83u); RETCHK(0x504c88u, 0x504c83u); LOADALL;
  /* 00504c88 mov eax, edi */ { eax = (u32)(edi); }
  /* 00504c8a call 0x5039e0 */ esp -= 4; M32(esp) = 0x504c8fu; SAVEALL; F_005039e0(c); ABI_CHECK(0x5039e0u, 0x504c8au); RETCHK(0x504c8fu, 0x504c8au); LOADALL;
  /* 00504c8f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00504c90 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00504c92 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00504c93 jmp 0x5083b0 */ SAVEALL; F_005083b0(c); return;
}

void F_00504ca0(CPU *c) {
  NATIVE_HOOK(0x504ca0u) REGS; LOADALL;
L_00504ca0:;
  /* 00504ca0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00504ca1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00504ca3 mov eax, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); eax = (u32)(M32(m_)); }
  /* 00504ca9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00504cab je 0x504cc9 */ if (ZF_) goto L_00504cc9;
  /* 00504cad call 0x5083e0 */ esp -= 4; M32(esp) = 0x504cb2u; SAVEALL; F_005083e0(c); ABI_CHECK(0x5083e0u, 0x504cadu); RETCHK(0x504cb2u, 0x504cadu); LOADALL;
  /* 00504cb2 add esi, 0x1cc */ { u32 a_ = esi, b_ = 0x1ccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00504cb8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00504cba mov eax, esi */ { eax = (u32)(esi); }
  /* 00504cbc call 0x503b30 */ esp -= 4; M32(esp) = 0x504cc1u; SAVEALL; F_00503b30(c); ABI_CHECK(0x503b30u, 0x504cbcu); RETCHK(0x504cc1u, 0x504cbcu); LOADALL;
  /* 00504cc1 mov eax, esi */ { eax = (u32)(esi); }
  /* 00504cc3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00504cc4 jmp 0x5039e0 */ SAVEALL; F_005039e0(c); return;
L_00504cc9:;
  /* 00504cc9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00504cca jmp 0x50c2a0 */ SAVEALL; F_0050c2a0(c); return;
}

void F_00504cd0(CPU *c) {
  NATIVE_HOOK(0x504cd0u) REGS; LOADALL;
L_00504cd0:;
  /* 00504cd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00504cd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00504cd3 mov ecx, dword ptr [ecx + 0x1c8] */ { const u32 m_ = (u32)(ecx + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00504cd9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00504cdb je 0x504ce5 */ if (ZF_) goto L_00504ce5;
  /* 00504cdd mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00504ce0 call 0x526840 */ esp -= 4; M32(esp) = 0x504ce5u; SAVEALL; F_00526840(c); ABI_CHECK(0x526840u, 0x504ce0u); RETCHK(0x504ce5u, 0x504ce0u); LOADALL;
L_00504ce5:;
  /* 00504ce5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504ce6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00504cf0(CPU *c) {
  NATIVE_HOOK(0x504cf0u) REGS; LOADALL;
L_00504cf0:;
  /* 00504cf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00504cf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00504cf3 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00504cf6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00504cf7 mov esi, dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); esi = (u32)(M32(m_)); }
  /* 00504cfd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00504cfe mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00504d00 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00504d03 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x504d05u; SAVEALL; call_ind(c, t_); RETCHK(0x504d05u, 0x504d03u); LOADALL; }
  /* 00504d05 sub eax, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00504d0b mov dword ptr [edi + 0x184], eax */ { const u32 m_ = (u32)(edi + 0x184u); M32(m_) = (u32)(eax); }
  /* 00504d11 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x504d13u; SAVEALL; call_ind(c, t_); RETCHK(0x504d13u, 0x504d11u); LOADALL; }
  /* 00504d13 mov dword ptr [edi + 0x180], eax */ { const u32 m_ = (u32)(edi + 0x180u); M32(m_) = (u32)(eax); }
  /* 00504d19 mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 00504d1f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00504d21 je 0x504d5a */ if (ZF_) goto L_00504d5a;
  /* 00504d23 lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 00504d26 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00504d29 call 0x52cea0 */ esp -= 4; M32(esp) = 0x504d2eu; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x504d29u); RETCHK(0x504d2eu, 0x504d29u); LOADALL;
  /* 00504d2e mov eax, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00504d31 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504d32 lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00504d35 call 0x52cf90 */ esp -= 4; M32(esp) = 0x504d3au; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x504d35u); RETCHK(0x504d3au, 0x504d35u); LOADALL;
  /* 00504d3a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00504d3d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00504d3f lea eax, [edi + 0x274] */ eax = (u32)((u32)(edi + 0x274u));
L_00504d45:;
  /* 00504d45 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00504d48 jne 0x504d60 */ if (!ZF_) goto L_00504d60;
  /* 00504d4a inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00504d4b add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00504d4e cmp edx, 0x1e */ { u32 a_ = edx, b_ = 0x1eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00504d51 jl 0x504d45 */ if (LT_) goto L_00504d45;
  /* 00504d53 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00504d55 call 0x50c550 */ esp -= 4; M32(esp) = 0x504d5au; SAVEALL; F_0050c550(c); ABI_CHECK(0x50c550u, 0x504d55u); RETCHK(0x504d5au, 0x504d55u); LOADALL;
L_00504d5a:;
  /* 00504d5a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00504d5b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00504d5c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00504d5e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504d5f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00504d60:;
  /* 00504d60 mov eax, dword ptr [edi + 0x1c4] */ { const u32 m_ = (u32)(edi + 0x1c4u); eax = (u32)(M32(m_)); }
  /* 00504d66 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00504d68 je 0x504d5a */ if (ZF_) goto L_00504d5a;
  /* 00504d6a mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00504d70 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00504d71 call 0x5267f0 */ esp -= 4; M32(esp) = 0x504d76u; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x504d71u); RETCHK(0x504d76u, 0x504d71u); LOADALL;
  /* 00504d76 lea ecx, [edx + edx*2] */ ecx = (u32)((u32)(edx + edx * 2u));
  /* 00504d79 shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00504d7c lea eax, [ecx + edi] */ eax = (u32)((u32)(ecx + edi));
  /* 00504d7f lea esi, [eax + 0x28c] */ esi = (u32)((u32)(eax + 0x28cu));
  /* 00504d85 lea ecx, [eax + 0x29c] */ ecx = (u32)((u32)(eax + 0x29cu));
  /* 00504d8b lea edx, [eax + 0x294] */ edx = (u32)((u32)(eax + 0x294u));
  /* 00504d91 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00504d92 add eax, 0x284 */ { u32 a_ = eax, b_ = 0x284u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00504d97 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504d98 mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 00504d9e call 0x526920 */ esp -= 4; M32(esp) = 0x504da3u; SAVEALL; F_00526920(c); ABI_CHECK(0x526920u, 0x504d9eu); RETCHK(0x504da3u, 0x504d9eu); LOADALL;
  /* 00504da3 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00504da8 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00504dad lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00504db0 call 0x52ce60 */ esp -= 4; M32(esp) = 0x504db5u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x504db0u); RETCHK(0x504db5u, 0x504db0u); LOADALL;
  /* 00504db5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00504db7 mov edi, eax */ { edi = (u32)(eax); }
  /* 00504db9 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00504dbe lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00504dc1 call 0x52ce60 */ esp -= 4; M32(esp) = 0x504dc6u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x504dc1u); RETCHK(0x504dc6u, 0x504dc1u); LOADALL;
  /* 00504dc6 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00504dcb mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00504dce push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00504dd0 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00504dd3 call 0x52ce60 */ esp -= 4; M32(esp) = 0x504dd8u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x504dd3u); RETCHK(0x504dd8u, 0x504dd3u); LOADALL;
  /* 00504dd8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00504dda mov esi, eax */ { esi = (u32)(eax); }
  /* 00504ddc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00504dde lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00504de1 call 0x52ce60 */ esp -= 4; M32(esp) = 0x504de6u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x504de1u); RETCHK(0x504de6u, 0x504de1u); LOADALL;
  /* 00504de6 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 00504de9 mov edx, dword ptr [ebx + 0x1c8] */ { const u32 m_ = (u32)(ebx + 0x1c8u); edx = (u32)(M32(m_)); }
  /* 00504def mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00504df1 mov edi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edi = (u32)(M32(m_)); }
  /* 00504df4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00504df5 mov edx, edi */ { edx = (u32)(edi); }
  /* 00504df7 mov edi, eax */ { edi = (u32)(eax); }
  /* 00504df9 call 0x5269c0 */ esp -= 4; M32(esp) = 0x504dfeu; SAVEALL; F_005269c0(c); ABI_CHECK(0x5269c0u, 0x504df9u); RETCHK(0x504dfeu, 0x504df9u); LOADALL;
  /* 00504dfe mov ecx, dword ptr [ebx + 0x1c8] */ { const u32 m_ = (u32)(ebx + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00504e04 call 0x526a00 */ esp -= 4; M32(esp) = 0x504e09u; SAVEALL; F_00526a00(c); ABI_CHECK(0x526a00u, 0x504e04u); RETCHK(0x504e09u, 0x504e04u); LOADALL;
  /* 00504e09 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00504e0a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00504e0b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00504e0c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00504e0e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504e0f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00504e10(CPU *c) {
  NATIVE_HOOK(0x504e10u) REGS; LOADALL;
L_00504e10:;
  /* 00504e10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00504e11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00504e13 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00504e15 push 0x61bac8 */ { u32 v_ = 0x61bac8u; esp -= 4; M32(esp) = v_; }
  /* 00504e1a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00504e20 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504e21 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00504e28 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00504e2b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00504e2c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00504e2e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00504e31 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00504e33 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 00504e36 jne 0x504e4b */ if (!ZF_) goto L_00504e4b;
  /* 00504e38 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00504e3a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00504e3b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00504e3e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00504e45 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00504e47 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504e48 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00504e4b:;
  /* 00504e4b mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00504e4d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00504e4e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00504e4f call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x504e52u; SAVEALL; call_ind(c, t_); RETCHK(0x504e52u, 0x504e4fu); LOADALL; }
  /* 00504e52 push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 00504e57 mov edi, eax */ { edi = (u32)(eax); }
  /* 00504e59 call 0x560fd0 */ esp -= 4; M32(esp) = 0x504e5eu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x504e59u); RETCHK(0x504e5eu, 0x504e59u); LOADALL;
  /* 00504e5e mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00504e61 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00504e64 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 00504e69 mov eax, edi */ { eax = (u32)(edi); }
  /* 00504e6b fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00504e6e call 0x560fd0 */ esp -= 4; M32(esp) = 0x504e73u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x504e6eu); RETCHK(0x504e73u, 0x504e6eu); LOADALL;
  /* 00504e73 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00504e76 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00504e79 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 00504e7e mov eax, edi */ { eax = (u32)(edi); }
  /* 00504e80 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00504e83 call 0x560fd0 */ esp -= 4; M32(esp) = 0x504e88u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x504e83u); RETCHK(0x504e88u, 0x504e83u); LOADALL;
  /* 00504e88 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00504e8b fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00504e8e push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 00504e93 mov eax, edi */ { eax = (u32)(edi); }
  /* 00504e95 fadd dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00504e98 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00504e9b call 0x560fd0 */ esp -= 4; M32(esp) = 0x504ea0u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x504e9bu); RETCHK(0x504ea0u, 0x504e9bu); LOADALL;
  /* 00504ea0 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00504ea3 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00504ea6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00504ea7 mov eax, 0x6505c8 */ { eax = (u32)(0x6505c8u); }
  /* 00504eac fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00504eaf fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00504eb2 call 0x560ed0 */ esp -= 4; M32(esp) = 0x504eb7u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x504eb2u); RETCHK(0x504eb7u, 0x504eb2u); LOADALL;
  /* 00504eb7 mov esi, eax */ { esi = (u32)(eax); }
  /* 00504eb9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00504ebb lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
  /* 00504ebe mov edi, edi */ { edi = (u32)(edi); }
L_00504ec0:;
  /* 00504ec0 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00504ec2 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00504ec3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00504ec5 jne 0x504ec0 */ if (!ZF_) goto L_00504ec0;
  /* 00504ec7 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00504ec9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00504eca push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00504ecb lea ecx, [ebx + 0x188] */ ecx = (u32)((u32)(ebx + 0x188u));
  /* 00504ed1 call 0x404420 */ esp -= 4; M32(esp) = 0x504ed6u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x504ed1u); RETCHK(0x504ed6u, 0x504ed1u); LOADALL;
  /* 00504ed6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00504ed7 mov eax, 0x6505bc */ { eax = (u32)(0x6505bcu); }
  /* 00504edc call 0x560ed0 */ esp -= 4; M32(esp) = 0x504ee1u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x504edcu); RETCHK(0x504ee1u, 0x504edcu); LOADALL;
  /* 00504ee1 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00504ee3 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
L_00504ee6:;
  /* 00504ee6 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00504ee8 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00504ee9 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00504eeb jne 0x504ee6 */ if (!ZF_) goto L_00504ee6;
  /* 00504eed sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00504eef push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00504ef0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504ef1 lea ecx, [ebx + 0x1a4] */ ecx = (u32)((u32)(ebx + 0x1a4u));
  /* 00504ef7 call 0x404420 */ esp -= 4; M32(esp) = 0x504efcu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x504ef7u); RETCHK(0x504efcu, 0x504ef7u); LOADALL;
  /* 00504efc mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00504eff test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00504f01 je 0x504f0f */ if (ZF_) goto L_00504f0f;
  /* 00504f03 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504f04 lea esi, [ebp - 0x20] */ esi = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00504f07 call 0x52d060 */ esp -= 4; M32(esp) = 0x504f0cu; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x504f07u); RETCHK(0x504f0cu, 0x504f07u); LOADALL;
  /* 00504f0c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00504f0f:;
  /* 00504f0f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00504f10 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 00504f15 call 0x560ed0 */ esp -= 4; M32(esp) = 0x504f1au; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x504f15u); RETCHK(0x504f1au, 0x504f15u); LOADALL;
  /* 00504f1a mov esi, eax */ { esi = (u32)(eax); }
  /* 00504f1c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00504f1e mov dword ptr [ebp - 0x24], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0xfu); }
  /* 00504f25 mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 00504f2c mov byte ptr [ebp - 0x38], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)(0x0u); }
  /* 00504f30 lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
L_00504f33:;
  /* 00504f33 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00504f35 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00504f36 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00504f38 jne 0x504f33 */ if (!ZF_) goto L_00504f33;
  /* 00504f3a sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00504f3c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00504f3d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00504f3e lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00504f41 call 0x404420 */ esp -= 4; M32(esp) = 0x504f46u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x504f41u); RETCHK(0x504f46u, 0x504f41u); LOADALL;
  /* 00504f46 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00504f47 mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 00504f4c mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00504f53 call 0x560ed0 */ esp -= 4; M32(esp) = 0x504f58u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x504f53u); RETCHK(0x504f58u, 0x504f53u); LOADALL;
  /* 00504f58 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504f59 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00504f5c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00504f5d lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00504f60 call 0x50bfc0 */ esp -= 4; M32(esp) = 0x504f65u; SAVEALL; F_0050bfc0(c); ABI_CHECK(0x50bfc0u, 0x504f60u); RETCHK(0x504f65u, 0x504f60u); LOADALL;
  /* 00504f65 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 00504f67 neg bl */ { u32 a_ = (ebx & 0xffu); u32 r_ = (0u - a_) & 0xffu; ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 00504f69 sbb bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00504f6b mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00504f72 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 00504f75 inc bl */ { u32 a_ = (ebx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 00504f77 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00504f7a jb 0x504f88 */ if (CF_) goto L_00504f88;
  /* 00504f7c mov edx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); edx = (u32)(M32(m_)); }
  /* 00504f7f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00504f80 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x504f85u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x504f80u); RETCHK(0x504f85u, 0x504f80u); LOADALL;
  /* 00504f85 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00504f88:;
  /* 00504f88 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00504f8a cmp bl, al */ { u32 a_ = (ebx & 0xffu), b_ = (eax & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00504f8c mov dword ptr [ebp - 0x24], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0xfu); }
  /* 00504f93 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 00504f96 mov byte ptr [ebp - 0x38], al */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00504f99 je 0x504fb0 */ if (ZF_) goto L_00504fb0;
  /* 00504f9b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00504f9c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00504f9d xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00504f9f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00504fa0 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00504fa3 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00504faa mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00504fac pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504fad ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00504fb0:;
  /* 00504fb0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00504fb1 mov eax, 0x64fe00 */ { eax = (u32)(0x64fe00u); }
  /* 00504fb6 call 0x560ed0 */ esp -= 4; M32(esp) = 0x504fbbu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x504fb6u); RETCHK(0x504fbbu, 0x504fb6u); LOADALL;
  /* 00504fbb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00504fbc call 0x5fe92e */ esp -= 4; M32(esp) = 0x504fc1u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x504fbcu); RETCHK(0x504fc1u, 0x504fbcu); LOADALL;
  /* 00504fc1 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00504fc4 add ecx, 0x1cc */ { u32 a_ = ecx, b_ = 0x1ccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00504fca add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00504fcd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00504fce mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00504fd0 call 0x504110 */ esp -= 4; M32(esp) = 0x504fd5u; SAVEALL; F_00504110(c); ABI_CHECK(0x504110u, 0x504fd0u); RETCHK(0x504fd5u, 0x504fd0u); LOADALL;
  /* 00504fd5 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00504fd8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00504fd9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00504fda mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00504fdc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00504fdd mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00504fe4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00504fe6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00504fe7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00504ff0(CPU *c) {
  NATIVE_HOOK(0x504ff0u) REGS; LOADALL;
L_00504ff0:;
  /* 00504ff0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00504ff1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00504ff3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00504ff5 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 00504ffa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00505000 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505001 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00505008 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00505009 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050500a push 0x505070 */ { u32 v_ = 0x505070u; esp -= 4; M32(esp) = v_; }
  /* 0050500f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00505012 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00505014 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00505016 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00505019 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0050501c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050501e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050501f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00505022 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00505029 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0050502c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050502d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00505030 call 0x404140 */ esp -= 4; M32(esp) = 0x505035u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x505030u); RETCHK(0x505035u, 0x505030u); LOADALL;
  /* 00505035 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00505038 call 0x405c00 */ esp -= 4; M32(esp) = 0x50503du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x505038u); RETCHK(0x50503du, 0x505038u); LOADALL;
  /* 0050503d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050503f call 0x405c80 */ esp -= 4; M32(esp) = 0x505044u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x50503fu); RETCHK(0x505044u, 0x50503fu); LOADALL;
  /* 00505044 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00505048 jb 0x505056 */ if (CF_) goto L_00505056;
  /* 0050504a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0050504d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050504e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x505053u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50504eu); RETCHK(0x505053u, 0x50504eu); LOADALL;
  /* 00505053 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00505056:;
  /* 00505056 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00505059 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050505b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00505062 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00505063 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00505065 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505066 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00505070(CPU *c) {
  NATIVE_HOOK(0x505070u) REGS; LOADALL;
L_00505070:;
  /* 00505070 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505071 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505073 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00505075 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0050507a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00505080 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505081 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00505088 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00505089 push 0x818 */ { u32 v_ = 0x818u; esp -= 4; M32(esp) = v_; }
  /* 0050508e call 0x5fe934 */ esp -= 4; M32(esp) = 0x505093u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50508eu); RETCHK(0x505093u, 0x50508eu); LOADALL;
  /* 00505093 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00505096 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00505099 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050509b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005050a2 je 0x5050ba */ if (ZF_) goto L_005050ba;
  /* 005050a4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005050a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005050a7 call 0x504b60 */ esp -= 4; M32(esp) = 0x5050acu; SAVEALL; F_00504b60(c); ABI_CHECK(0x504b60u, 0x5050a7u); RETCHK(0x5050acu, 0x5050a7u); LOADALL;
  /* 005050ac mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005050af mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005050b6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005050b8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005050b9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005050ba:;
  /* 005050ba mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005050bd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005050bf mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005050c6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005050c8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005050c9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005050d0(CPU *c) {
  NATIVE_HOOK(0x5050d0u) REGS; LOADALL;
L_005050d0:;
  /* 005050d0 sub ecx, 0x1cc */ { u32 a_ = ecx, b_ = 0x1ccu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005050d6 jmp 0x504be0 */ SAVEALL; F_00504be0(c); return;
}

void F_005050e0(CPU *c) {
  NATIVE_HOOK(0x5050e0u) REGS; LOADALL;
L_005050e0:;
  /* 005050e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005050e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005050e3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005050e6 fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005050e9 fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005050ec fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005050f2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005050f4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005050f7 je 0x505101 */ if (ZF_) goto L_00505101;
  /* 005050f9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005050fb fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005050fe fsub dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00505101:;
  /* 00505101 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00505104 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00505107 fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00505109 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050510f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00505111 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00505114 je 0x50511d */ if (ZF_) goto L_0050511d;
  /* 00505116 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00505118 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0050511a fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050511d:;
  /* 0050511d mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00505120 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00505123 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 00505126 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505127 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0050512a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050512b mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0050512e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050512f mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00505132 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00505133 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00505136 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505137 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050513a mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 0050513c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050513d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050513e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00505141 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00505142 call 0x526a10 */ esp -= 4; M32(esp) = 0x505147u; SAVEALL; F_00526a10(c); ABI_CHECK(0x526a10u, 0x505142u); RETCHK(0x505147u, 0x505142u); LOADALL;
  /* 00505147 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00505149 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050514a ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_00505150(CPU *c) {
  NATIVE_HOOK(0x505150u) REGS; LOADALL;
L_00505150:;
  /* 00505150 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505151 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505153 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00505159 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050515b push 0x61c934 */ { u32 v_ = 0x61c934u; esp -= 4; M32(esp) = v_; }
  /* 00505160 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505161 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00505164 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050516b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050516c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050516d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050516e mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00505171 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505172 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00505173 call 0x506b60 */ esp -= 4; M32(esp) = 0x505178u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x505173u); RETCHK(0x505178u, 0x505173u); LOADALL;
  /* 00505178 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050517a mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050517d mov dword ptr [edi], 0x6505e0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x6505e0u); }
  /* 00505183 mov dword ptr [edi + 0x180], 0x64d178 */ { const u32 m_ = (u32)(edi + 0x180u); M32(m_) = (u32)(0x64d178u); }
  /* 0050518d mov dword ptr [edi + 0x184], ebx */ { const u32 m_ = (u32)(edi + 0x184u); M32(m_) = (u32)(ebx); }
  /* 00505193 lea esi, [edi + 0x188] */ esi = (u32)((u32)(edi + 0x188u));
  /* 00505199 call 0x5267c0 */ esp -= 4; M32(esp) = 0x50519eu; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x505199u); RETCHK(0x50519eu, 0x505199u); LOADALL;
  /* 0050519e push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 005051a0 push 0x6506f4 */ { u32 v_ = 0x6506f4u; esp -= 4; M32(esp) = v_; }
  /* 005051a5 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 005051a8 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 005051ac call 0x404420 */ esp -= 4; M32(esp) = 0x5051b1u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5051acu); RETCHK(0x5051b1u, 0x5051acu); LOADALL;
  /* 005051b1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005051b4 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005051b9 mov byte ptr [edi + 0x3c], al */ { const u32 m_ = (u32)(edi + 0x3cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005051bc mov byte ptr [edi + 0x294], al */ { const u32 m_ = (u32)(edi + 0x294u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005051c2 mov dword ptr [edi + 0x260], eax */ { const u32 m_ = (u32)(edi + 0x260u); M32(m_) = (u32)(eax); }
  /* 005051c8 mov byte ptr [edi + 0x22c], bl */ { const u32 m_ = (u32)(edi + 0x22cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005051ce mov dword ptr [edi + 0x250], ebx */ { const u32 m_ = (u32)(edi + 0x250u); M32(m_) = (u32)(ebx); }
  /* 005051d4 mov dword ptr [edi + 0x26c], ebx */ { const u32 m_ = (u32)(edi + 0x26cu); M32(m_) = (u32)(ebx); }
  /* 005051da mov byte ptr [edi + 0x29c], bl */ { const u32 m_ = (u32)(edi + 0x29cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005051e0 mov dword ptr [edi + 0x298], ebx */ { const u32 m_ = (u32)(edi + 0x298u); M32(m_) = (u32)(ebx); }
  /* 005051e6 mov dword ptr [edi + 0x274], ebx */ { const u32 m_ = (u32)(edi + 0x274u); M32(m_) = (u32)(ebx); }
  /* 005051ec mov byte ptr [edi + 0x25c], bl */ { const u32 m_ = (u32)(edi + 0x25cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005051f2 mov byte ptr [edi + 0x264], bl */ { const u32 m_ = (u32)(edi + 0x264u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005051f8 mov dword ptr [edi + 0x20c], 2 */ { const u32 m_ = (u32)(edi + 0x20cu); M32(m_) = (u32)(0x2u); }
  /* 00505202 mov dword ptr [edi + 0x270], 0x3e4ccccd */ { const u32 m_ = (u32)(edi + 0x270u); M32(m_) = (u32)(0x3e4ccccdu); }
  /* 0050520c mov dword ptr [edi + 0x254], 0x40800000 */ { const u32 m_ = (u32)(edi + 0x254u); M32(m_) = (u32)(0x40800000u); }
  /* 00505216 mov dword ptr [edi + 0x268], 0x3dcccccd */ { const u32 m_ = (u32)(edi + 0x268u); M32(m_) = (u32)(0x3dcccccdu); }
  /* 00505220 mov eax, edi */ { eax = (u32)(edi); }
  /* 00505222 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00505223 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00505224 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050522b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050522c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050522e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050522f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00505240(CPU *c) {
  NATIVE_HOOK(0x505240u) REGS; LOADALL;
L_00505240:;
  /* 00505240 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505241 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505243 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505244 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00505246 call 0x505270 */ esp -= 4; M32(esp) = 0x50524bu; SAVEALL; F_00505270(c); ABI_CHECK(0x505270u, 0x505246u); RETCHK(0x50524bu, 0x505246u); LOADALL;
  /* 0050524b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050524f je 0x50525a */ if (ZF_) goto L_0050525a;
  /* 00505251 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505252 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x505257u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x505252u); RETCHK(0x505257u, 0x505252u); LOADALL;
  /* 00505257 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050525a:;
  /* 0050525a mov eax, esi */ { eax = (u32)(esi); }
  /* 0050525c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050525d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050525e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00505270(CPU *c) {
  NATIVE_HOOK(0x505270u) REGS; LOADALL;
L_00505270:;
  /* 00505270 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505271 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00505273 lea ecx, [esi + 0x188] */ ecx = (u32)((u32)(esi + 0x188u));
  /* 00505279 mov dword ptr [esi], 0x6505e0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6505e0u); }
  /* 0050527f call 0x5267e0 */ esp -= 4; M32(esp) = 0x505284u; SAVEALL; F_005267e0(c); ABI_CHECK(0x5267e0u, 0x50527fu); RETCHK(0x505284u, 0x50527fu); LOADALL;
  /* 00505284 lea ecx, [esi + 0x180] */ ecx = (u32)((u32)(esi + 0x180u));
  /* 0050528a call 0x529300 */ esp -= 4; M32(esp) = 0x50528fu; SAVEALL; F_00529300(c); ABI_CHECK(0x529300u, 0x50528au); RETCHK(0x50528fu, 0x50528au); LOADALL;
  /* 0050528f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00505291 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00505292 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_005052a0(CPU *c) {
  NATIVE_HOOK(0x5052a0u) REGS; LOADALL;
L_005052a0:;
  /* 005052a0 mov al, byte ptr [ecx + 0x22c] */ { const u32 m_ = (u32)(ecx + 0x22cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005052a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005052b0(CPU *c) {
  NATIVE_HOOK(0x5052b0u) REGS; LOADALL;
L_005052b0:;
  /* 005052b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005052b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005052b3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005052b6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005052b7 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005052b9 fld dword ptr [esi + 0x248] */ { const u32 m_ = (u32)(esi + 0x248u); FPUSH((double)MF32(m_)); }
  /* 005052bf lea edx, [esi + 0x240] */ edx = (u32)((u32)(esi + 0x240u));
  /* 005052c5 fsub dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005052c7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005052c8 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005052ce fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005052d0 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005052d3 je 0x5052dc */ if (ZF_) goto L_005052dc;
  /* 005052d5 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005052d7 fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 005052d9 fsub dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005052dc:;
  /* 005052dc fld dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005052df fsub dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005052e2 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005052e8 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005052ea test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005052ed je 0x5052f7 */ if (ZF_) goto L_005052f7;
  /* 005052ef fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005052f1 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005052f4 fsub dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005052f7:;
  /* 005052f7 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005052fa fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005052fc mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005052fe mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 00505300 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00505303 mov dword ptr [esi + 0x244], ecx */ { const u32 m_ = (u32)(esi + 0x244u); M32(m_) = (u32)(ecx); }
  /* 00505309 fadd dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050530b lea ecx, [esi + 0x44] */ ecx = (u32)((u32)(esi + 0x44u));
  /* 0050530e lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00505311 fstp dword ptr [esi + 0x248] */ { const u32 m_ = (u32)(esi + 0x248u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00505317 fadd dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050531a fstp dword ptr [esi + 0x24c] */ { const u32 m_ = (u32)(esi + 0x24cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00505320 call 0x52cee0 */ esp -= 4; M32(esp) = 0x505325u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x505320u); RETCHK(0x505325u, 0x505320u); LOADALL;
  /* 00505325 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00505326 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00505328 call 0x5074a0 */ esp -= 4; M32(esp) = 0x50532du; SAVEALL; F_005074a0(c); ABI_CHECK(0x5074a0u, 0x505328u); RETCHK(0x50532du, 0x505328u); LOADALL;
  /* 0050532d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0050532f mov eax, esi */ { eax = (u32)(esi); }
  /* 00505331 mov dword ptr [esi + 0x26c], ecx */ { const u32 m_ = (u32)(esi + 0x26cu); M32(m_) = (u32)(ecx); }
  /* 00505337 call 0x5084a0 */ esp -= 4; M32(esp) = 0x50533cu; SAVEALL; F_005084a0(c); ABI_CHECK(0x5084a0u, 0x505337u); RETCHK(0x50533cu, 0x505337u); LOADALL;
  /* 0050533c movzx edx, al */ { edx = (u32)((eax & 0xffu)); }
  /* 0050533f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00505340 mov dword ptr [esi + 0x258], edx */ { const u32 m_ = (u32)(esi + 0x258u); M32(m_) = (u32)(edx); }
  /* 00505346 mov dword ptr [esi + 0x250], ecx */ { const u32 m_ = (u32)(esi + 0x250u); M32(m_) = (u32)(ecx); }
  /* 0050534c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050534d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050534f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505350 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00505360(CPU *c) {
  NATIVE_HOOK(0x505360u) REGS; LOADALL;
L_00505360:;
  /* 00505360 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505361 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505363 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00505365 push 0x624328 */ { u32 v_ = 0x624328u; esp -= 4; M32(esp) = v_; }
  /* 0050536a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00505370 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505371 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00505378 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050537b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050537c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0050537e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00505381 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00505383 jne 0x505398 */ if (!ZF_) goto L_00505398;
  /* 00505385 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00505387 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00505388 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050538b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00505392 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00505394 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505395 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00505398:;
  /* 00505398 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050539a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050539b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050539c call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50539fu; SAVEALL; call_ind(c, t_); RETCHK(0x50539fu, 0x50539cu); LOADALL; }
  /* 0050539f push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 005053a4 mov edi, eax */ { edi = (u32)(eax); }
  /* 005053a6 call 0x560fd0 */ esp -= 4; M32(esp) = 0x5053abu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5053a6u); RETCHK(0x5053abu, 0x5053a6u); LOADALL;
  /* 005053ab mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005053ae fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005053b1 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 005053b6 mov eax, edi */ { eax = (u32)(edi); }
  /* 005053b8 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005053bb call 0x560fd0 */ esp -= 4; M32(esp) = 0x5053c0u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5053bbu); RETCHK(0x5053c0u, 0x5053bbu); LOADALL;
  /* 005053c0 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005053c3 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005053c6 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 005053cb mov eax, edi */ { eax = (u32)(edi); }
  /* 005053cd fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005053d0 call 0x560fd0 */ esp -= 4; M32(esp) = 0x5053d5u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5053d0u); RETCHK(0x5053d5u, 0x5053d0u); LOADALL;
  /* 005053d5 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005053d8 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005053db push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 005053e0 mov eax, edi */ { eax = (u32)(edi); }
  /* 005053e2 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005053e5 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005053e8 call 0x560fd0 */ esp -= 4; M32(esp) = 0x5053edu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5053e8u); RETCHK(0x5053edu, 0x5053e8u); LOADALL;
  /* 005053ed mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005053f0 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005053f3 push 0x6506e0 */ { u32 v_ = 0x6506e0u; esp -= 4; M32(esp) = v_; }
  /* 005053f8 mov eax, edi */ { eax = (u32)(edi); }
  /* 005053fa fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005053fd fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00505400 call 0x560fd0 */ esp -= 4; M32(esp) = 0x505405u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x505400u); RETCHK(0x505405u, 0x505400u); LOADALL;
  /* 00505405 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00505407 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0050540a setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0050540d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050540f mov byte ptr [ebx + 0x294], cl */ { const u32 m_ = (u32)(ebx + 0x294u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00505415 je 0x505423 */ if (ZF_) goto L_00505423;
  /* 00505417 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505418 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050541b call 0x52d060 */ esp -= 4; M32(esp) = 0x505420u; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x50541bu); RETCHK(0x505420u, 0x50541bu); LOADALL;
  /* 00505420 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00505423:;
  /* 00505423 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00505424 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 00505429 mov byte ptr [ebx + 0x294], 0 */ { const u32 m_ = (u32)(ebx + 0x294u); M8(m_) = (u8)(0x0u); }
  /* 00505430 call 0x560ed0 */ esp -= 4; M32(esp) = 0x505435u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x505430u); RETCHK(0x505435u, 0x505430u); LOADALL;
  /* 00505435 mov esi, eax */ { esi = (u32)(eax); }
  /* 00505437 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00505439 mov dword ptr [ebp - 0x20], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xfu); }
  /* 00505440 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 00505447 mov byte ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)(0x0u); }
  /* 0050544b lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
  /* 0050544e mov edi, edi */ { edi = (u32)(edi); }
L_00505450:;
  /* 00505450 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00505452 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00505453 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00505455 jne 0x505450 */ if (!ZF_) goto L_00505450;
  /* 00505457 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00505459 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050545a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050545b lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0050545e call 0x404420 */ esp -= 4; M32(esp) = 0x505463u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50545eu); RETCHK(0x505463u, 0x50545eu); LOADALL;
  /* 00505463 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050546a mov esi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); esi = (u32)(M32(m_)); }
  /* 0050546c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050546d mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 00505472 call 0x560ed0 */ esp -= 4; M32(esp) = 0x505477u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x505472u); RETCHK(0x505477u, 0x505472u); LOADALL;
  /* 00505477 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505478 lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050547b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050547c lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0050547f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505480 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00505482 call dword ptr [esi + 0xe8] */ { const u32 m_ = (u32)(esi + 0xe8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x505488u; SAVEALL; call_ind(c, t_); RETCHK(0x505488u, 0x505482u); LOADALL; }
  /* 00505488 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0050548a cmp dword ptr [ebp - 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050548e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050548f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00505490 jb 0x50549e */ if (CF_) goto L_0050549e;
  /* 00505492 mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 00505495 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00505496 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50549bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x505496u); RETCHK(0x50549bu, 0x505496u); LOADALL;
  /* 0050549b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050549e:;
  /* 0050549e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005054a1 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 005054a3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005054a4 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005054ab mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005054ad pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005054ae ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005054c0(CPU *c) {
  NATIVE_HOOK(0x5054c0u) REGS; LOADALL;
L_005054c0:;
  /* 005054c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005054c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005054c3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005054c6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005054c9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005054ca push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005054cb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005054cc push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005054ce mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005054d0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005054d2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005054d3 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 005054d6 call 0x404140 */ esp -= 4; M32(esp) = 0x5054dbu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5054d6u); RETCHK(0x5054dbu, 0x5054d6u); LOADALL;
  /* 005054db mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005054de lea ecx, [esi + 0x44] */ ecx = (u32)((u32)(esi + 0x44u));
  /* 005054e1 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 005054e4 call 0x52cee0 */ esp -= 4; M32(esp) = 0x5054e9u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x5054e4u); RETCHK(0x5054e9u, 0x5054e4u); LOADALL;
  /* 005054e9 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005054ec push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005054ee lea ebx, [esi + 0x180] */ ebx = (u32)((u32)(esi + 0x180u));
  /* 005054f4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005054f5 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005054f7 call 0x529310 */ esp -= 4; M32(esp) = 0x5054fcu; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x5054f7u); RETCHK(0x5054fcu, 0x5054f7u); LOADALL;
  /* 005054fc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005054fe push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00505500 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00505503 call 0x52ce60 */ esp -= 4; M32(esp) = 0x505508u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x505503u); RETCHK(0x505508u, 0x505503u); LOADALL;
  /* 00505508 lea ecx, [esi + 0x21c] */ ecx = (u32)((u32)(esi + 0x21cu));
  /* 0050550e call 0x52ce90 */ esp -= 4; M32(esp) = 0x505513u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x50550eu); RETCHK(0x505513u, 0x50550eu); LOADALL;
  /* 00505513 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00505518 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0050551d lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00505520 call 0x52ce60 */ esp -= 4; M32(esp) = 0x505525u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x505520u); RETCHK(0x505525u, 0x505520u); LOADALL;
  /* 00505525 lea ecx, [esi + 0x224] */ ecx = (u32)((u32)(esi + 0x224u));
  /* 0050552b call 0x52ce90 */ esp -= 4; M32(esp) = 0x505530u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x50552bu); RETCHK(0x505530u, 0x50552bu); LOADALL;
  /* 00505530 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00505533 lea edi, [esi + 0x240] */ edi = (u32)((u32)(esi + 0x240u));
  /* 00505539 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0050553c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050553e call 0x52cee0 */ esp -= 4; M32(esp) = 0x505543u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x50553eu); RETCHK(0x505543u, 0x50553eu); LOADALL;
  /* 00505543 fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00505546 fsub dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00505548 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050554e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00505550 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00505553 je 0x50555c */ if (ZF_) goto L_0050555c;
  /* 00505555 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00505557 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 00505559 fsub dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050555c:;
  /* 0050555c fld dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0050555f fsub dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00505562 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00505568 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050556a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050556d je 0x505577 */ if (ZF_) goto L_00505577;
  /* 0050556f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00505571 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00505574 fsub dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00505577:;
  /* 00505577 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00505579 fdiv st(1) */ ST(0) = FR(ST(0) / ST(1));
  /* 0050557b fstp dword ptr [esi + 0x27c] */ { const u32 m_ = (u32)(esi + 0x27cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00505581 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00505584 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00505586 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00505588 je 0x505591 */ if (ZF_) goto L_00505591;
  /* 0050558a mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0050558c mov ecx, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0050558f jmp 0x505593 */ goto L_00505593;
L_00505591:;
  /* 00505591 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_00505593:;
  /* 00505593 mov ebx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 00505596 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00505598 je 0x5055a1 */ if (ZF_) goto L_005055a1;
  /* 0050559a mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0050559c mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050559f jmp 0x5055a3 */ goto L_005055a3;
L_005055a1:;
  /* 005055a1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005055a3:;
  /* 005055a3 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 005055a5 lea edx, [esi + 0x188] */ edx = (u32)((u32)(esi + 0x188u));
  /* 005055ab push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005055ac cdq */ edx = (u32)((s32)eax >> 31);
  /* 005055ad and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005055b0 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005055b2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005055b3 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005055b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005055b7 lea eax, [esi + 0x44] */ eax = (u32)((u32)(esi + 0x44u));
  /* 005055ba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005055bb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005055bd call dword ptr [edi + 0xe0] */ { const u32 m_ = (u32)(edi + 0xe0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5055c3u; SAVEALL; call_ind(c, t_); RETCHK(0x5055c3u, 0x5055bdu); LOADALL; }
  /* 005055c3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005055c4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005055c5 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005055c7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005055c8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005055ca pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005055cb ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0050555f(CPU *c) {
  NATIVE_HOOK(0x50555fu) REGS; LOADALL;
L_0050555f:;
  /* 0050555f fsub dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00505562 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00505568 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050556a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050556d je 0x505577 */ if (ZF_) goto L_00505577;
  /* 0050556f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00505571 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00505574 fsub dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00505577:;
  /* 00505577 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00505579 fdiv st(1) */ ST(0) = FR(ST(0) / ST(1));
  /* 0050557b fstp dword ptr [esi + 0x27c] */ { const u32 m_ = (u32)(esi + 0x27cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00505581 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00505584 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00505586 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00505588 je 0x505591 */ if (ZF_) goto L_00505591;
  /* 0050558a mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0050558c mov ecx, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0050558f jmp 0x505593 */ goto L_00505593;
L_00505591:;
  /* 00505591 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_00505593:;
  /* 00505593 mov ebx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 00505596 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00505598 je 0x5055a1 */ if (ZF_) goto L_005055a1;
  /* 0050559a mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0050559c mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050559f jmp 0x5055a3 */ goto L_005055a3;
L_005055a1:;
  /* 005055a1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005055a3:;
  /* 005055a3 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 005055a5 lea edx, [esi + 0x188] */ edx = (u32)((u32)(esi + 0x188u));
  /* 005055ab push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005055ac cdq */ edx = (u32)((s32)eax >> 31);
  /* 005055ad and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005055b0 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005055b2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005055b3 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005055b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005055b7 lea eax, [esi + 0x44] */ eax = (u32)((u32)(esi + 0x44u));
  /* 005055ba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005055bb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005055bd call dword ptr [edi + 0xe0] */ { const u32 m_ = (u32)(edi + 0xe0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5055c3u; SAVEALL; call_ind(c, t_); RETCHK(0x5055c3u, 0x5055bdu); LOADALL; }
  /* 005055c3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005055c4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005055c5 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005055c7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005055c8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005055ca pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005055cb ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_005055d0(CPU *c) {
  NATIVE_HOOK(0x5055d0u) REGS; LOADALL;
L_005055d0:;
  /* 005055d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005055d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005055d3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005055d6 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005055d9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005055da mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 005055dd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005055de mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005055e0 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005055e3 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005055e5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005055e6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005055e7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005055e8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005055e9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005055eb call dword ptr [eax + 0xe8] */ { const u32 m_ = (u32)(eax + 0xe8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5055f1u; SAVEALL; call_ind(c, t_); RETCHK(0x5055f1u, 0x5055ebu); LOADALL; }
  /* 005055f1 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005055f4 lea ecx, [esi + 0x21c] */ ecx = (u32)((u32)(esi + 0x21cu));
  /* 005055fa call 0x52ce90 */ esp -= 4; M32(esp) = 0x5055ffu; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x5055fau); RETCHK(0x5055ffu, 0x5055fau); LOADALL;
  /* 005055ff mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00505602 lea ecx, [esi + 0x224] */ ecx = (u32)((u32)(esi + 0x224u));
  /* 00505608 call 0x52ce90 */ esp -= 4; M32(esp) = 0x50560du; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x505608u); RETCHK(0x50560du, 0x505608u); LOADALL;
  /* 0050560d lea edi, [esi + 0x240] */ edi = (u32)((u32)(esi + 0x240u));
  /* 00505613 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00505615 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00505618 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050561a call 0x52cee0 */ esp -= 4; M32(esp) = 0x50561fu; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x50561au); RETCHK(0x50561fu, 0x50561au); LOADALL;
  /* 0050561f fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00505622 fsub dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00505624 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050562a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050562c test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050562f je 0x505638 */ if (ZF_) goto L_00505638;
  /* 00505631 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00505633 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 00505635 fsub dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00505638:;
  /* 00505638 fld dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0050563b fsub dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050563e fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00505644 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00505646 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00505649 je 0x505653 */ if (ZF_) goto L_00505653;
  /* 0050564b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050564d fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00505650 fsub dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00505653:;
  /* 00505653 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00505655 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00505656 fdiv st(1) */ ST(0) = FR(ST(0) / ST(1));
  /* 00505658 mov dword ptr [esi + 0x298], 0 */ { const u32 m_ = (u32)(esi + 0x298u); M32(m_) = (u32)(0x0u); }
  /* 00505662 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00505664 fstp dword ptr [esi + 0x27c] */ { const u32 m_ = (u32)(esi + 0x27cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050566a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050566b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050566c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050566e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00505670 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505671 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_00505680(CPU *c) {
  NATIVE_HOOK(0x505680u) REGS; LOADALL;
L_00505680:;
  /* 00505680 mov al, byte ptr [ecx + 0x3f] */ { const u32 m_ = (u32)(ecx + 0x3fu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00505683 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00505685 mov dword ptr [0x7a6d3c], 0 */ { const u32 m_ = (u32)(0x7a6d3cu); M32(m_) = (u32)(0x0u); }
  /* 0050568f je 0x505696 */ if (ZF_) goto L_00505696;
  /* 00505691 jmp 0x507dd0 */ SAVEALL; F_00507dd0(c); return;
L_00505696:;
  /* 00505696 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005056a0(CPU *c) {
  NATIVE_HOOK(0x5056a0u) REGS; LOADALL;
L_005056a0:;
  /* 005056a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005056a1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005056a3 mov al, byte ptr [esi + 0x3f] */ { const u32 m_ = (u32)(esi + 0x3fu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005056a6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005056a8 je 0x5056cf */ if (ZF_) goto L_005056cf;
  /* 005056aa mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005056ac call dword ptr [eax + 0xf0] */ { const u32 m_ = (u32)(eax + 0xf0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5056b2u; SAVEALL; call_ind(c, t_); RETCHK(0x5056b2u, 0x5056acu); LOADALL; }
  /* 005056b2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005056b4 je 0x5056bd */ if (ZF_) goto L_005056bd;
  /* 005056b6 mov byte ptr [esi + 0x22c], 0 */ { const u32 m_ = (u32)(esi + 0x22cu); M8(m_) = (u8)(0x0u); }
L_005056bd:;
  /* 005056bd mov dword ptr [esi + 0x26c], 2 */ { const u32 m_ = (u32)(esi + 0x26cu); M32(m_) = (u32)(0x2u); }
  /* 005056c7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005056c9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005056ca jmp 0x507e90 */ SAVEALL; F_00507e90(c); return;
L_005056cf:;
  /* 005056cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005056d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005056e0(CPU *c) {
  NATIVE_HOOK(0x5056e0u) REGS; LOADALL;
L_005056e0:;
  /* 005056e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005056e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005056e3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005056e4 jmp 0x507ed0 */ SAVEALL; F_00507ed0(c); return;
}

void F_005056f0(CPU *c) {
  NATIVE_HOOK(0x5056f0u) REGS; LOADALL;
L_005056f0:;
  /* 005056f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005056f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005056f3 mov byte ptr [ecx + 0x22c], 1 */ { const u32 m_ = (u32)(ecx + 0x22cu); M8(m_) = (u8)(0x1u); }
  /* 005056fa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005056fb jmp 0x507f00 */ SAVEALL; F_00507f00(c); return;
}

void F_00505700(CPU *c) {
  NATIVE_HOOK(0x505700u) REGS; LOADALL;
L_00505700:;
  /* 00505700 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505701 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505703 mov al, byte ptr [ecx + 0x22c] */ { const u32 m_ = (u32)(ecx + 0x22cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00505709 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050570b je 0x505754 */ if (ZF_) goto L_00505754;
  /* 0050570d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00505710 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00505713 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505714 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505715 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00505716 mov byte ptr [ecx + 0x22c], 0 */ { const u32 m_ = (u32)(ecx + 0x22cu); M8(m_) = (u8)(0x0u); }
  /* 0050571d call 0x507f80 */ esp -= 4; M32(esp) = 0x505722u; SAVEALL; F_00507f80(c); ABI_CHECK(0x507f80u, 0x50571du); RETCHK(0x505722u, 0x50571du); LOADALL;
  /* 00505722 call 0x550820 */ esp -= 4; M32(esp) = 0x505727u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x505722u); RETCHK(0x505727u, 0x505722u); LOADALL;
  /* 00505727 mov esi, dword ptr [eax + 0xf64] */ { const u32 m_ = (u32)(eax + 0xf64u); esi = (u32)(M32(m_)); }
  /* 0050572d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050572f je 0x505753 */ if (ZF_) goto L_00505753;
  /* 00505731 call 0x518bb0 */ esp -= 4; M32(esp) = 0x505736u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x505731u); RETCHK(0x505736u, 0x505731u); LOADALL;
  /* 00505736 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00505739 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050573b je 0x505753 */ if (ZF_) goto L_00505753;
  /* 0050573d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050573f push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00505744 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00505746 push 0x6506d8 */ { u32 v_ = 0x6506d8u; esp -= 4; M32(esp) = v_; }
  /* 0050574b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050574c xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0050574e call 0x531340 */ esp -= 4; M32(esp) = 0x505753u; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x50574eu); RETCHK(0x505753u, 0x50574eu); LOADALL;
L_00505753:;
  /* 00505753 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00505754:;
  /* 00505754 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505755 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00505760(CPU *c) {
  NATIVE_HOOK(0x505760u) REGS; LOADALL;
L_00505760:;
  /* 00505760 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505761 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505763 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00505766 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505767 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00505768 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0050576a lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 0050576d lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00505770 call 0x52cea0 */ esp -= 4; M32(esp) = 0x505775u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x505770u); RETCHK(0x505775u, 0x505770u); LOADALL;
  /* 00505775 mov eax, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00505778 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505779 lea esi, [ebp - 0x18] */ esi = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0050577c call 0x52cf90 */ esp -= 4; M32(esp) = 0x505781u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x50577cu); RETCHK(0x505781u, 0x50577cu); LOADALL;
  /* 00505781 mov eax, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); eax = (u32)(M32(m_)); }
  /* 00505787 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050578a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050578c je 0x5058e1 */ if (ZF_) goto L_005058e1;
  /* 00505792 mov esi, edi */ { esi = (u32)(edi); }
  /* 00505794 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050579b call 0x5084b0 */ esp -= 4; M32(esp) = 0x5057a0u; SAVEALL; F_005084b0(c); ABI_CHECK(0x5084b0u, 0x50579bu); RETCHK(0x5057a0u, 0x50579bu); LOADALL;
  /* 005057a0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005057a2 je 0x5057c0 */ if (ZF_) goto L_005057c0;
  /* 005057a4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005057a5 call 0x508500 */ esp -= 4; M32(esp) = 0x5057aau; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x5057a5u); RETCHK(0x5057aau, 0x5057a5u); LOADALL;
  /* 005057aa test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005057ac jne 0x5057b9 */ if (!ZF_) goto L_005057b9;
  /* 005057ae mov eax, edi */ { eax = (u32)(edi); }
  /* 005057b0 call 0x5084a0 */ esp -= 4; M32(esp) = 0x5057b5u; SAVEALL; F_005084a0(c); ABI_CHECK(0x5084a0u, 0x5057b0u); RETCHK(0x5057b5u, 0x5057b0u); LOADALL;
  /* 005057b5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005057b7 je 0x5057c0 */ if (ZF_) goto L_005057c0;
L_005057b9:;
  /* 005057b9 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
L_005057c0:;
  /* 005057c0 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 005057c2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005057c4 call dword ptr [edx + 0xf0] */ { const u32 m_ = (u32)(edx + 0xf0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5057cau; SAVEALL; call_ind(c, t_); RETCHK(0x5057cau, 0x5057c4u); LOADALL; }
  /* 005057ca test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005057cc je 0x5057d5 */ if (ZF_) goto L_005057d5;
  /* 005057ce mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
L_005057d5:;
  /* 005057d5 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005057d7 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005057d9 call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5057dcu; SAVEALL; call_ind(c, t_); RETCHK(0x5057dcu, 0x5057d9u); LOADALL; }
  /* 005057dc test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005057de jne 0x5057e7 */ if (!ZF_) goto L_005057e7;
  /* 005057e0 mov dword ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3u); }
L_005057e7:;
  /* 005057e7 fld dword ptr [edi + 0x224] */ { const u32 m_ = (u32)(edi + 0x224u); FPUSH((double)MF32(m_)); }
  /* 005057ed lea esi, [edi + 0x188] */ esi = (u32)((u32)(edi + 0x188u));
  /* 005057f3 fsub dword ptr [edi + 0x21c] */ { const u32 m_ = (u32)(edi + 0x21cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005057f9 lea eax, [edi + 0x180] */ eax = (u32)((u32)(edi + 0x180u));
  /* 005057ff mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00505801 fmul dword ptr [0x656e54] */ { const u32 m_ = (u32)(0x656e54u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00505807 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050580a fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0050580d fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00505810 fadd dword ptr [edi + 0x21c] */ { const u32 m_ = (u32)(edi + 0x21cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00505816 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00505819 call 0x5267f0 */ esp -= 4; M32(esp) = 0x50581eu; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x505819u); RETCHK(0x50581eu, 0x505819u); LOADALL;
  /* 0050581e mov cl, byte ptr [edi + 0x25c] */ { const u32 m_ = (u32)(edi + 0x25cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00505824 or al, 0xff */ { u32 a_ = (eax & 0xffu), b_ = 0xffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00505826 sub al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00505828 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 0050582b shl eax, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050582e or eax, 0xffffff */ { u32 a_ = eax, b_ = 0xffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00505833 mov dword ptr [edi + 0x1a4], eax */ { const u32 m_ = (u32)(edi + 0x1a4u); M32(m_) = (u32)(eax); }
  /* 00505839 mov dword ptr [edi + 0x1c0], eax */ { const u32 m_ = (u32)(edi + 0x1c0u); M32(m_) = (u32)(eax); }
  /* 0050583f mov dword ptr [edi + 0x1dc], eax */ { const u32 m_ = (u32)(edi + 0x1dcu); M32(m_) = (u32)(eax); }
  /* 00505845 mov dword ptr [edi + 0x1f8], eax */ { const u32 m_ = (u32)(edi + 0x1f8u); M32(m_) = (u32)(eax); }
  /* 0050584b cmp byte ptr [edi + 0x25c], 0xff */ { const u32 m_ = (u32)(edi + 0x25cu); u32 a_ = M8(m_), b_ = 0xffu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00505852 je 0x505879 */ if (ZF_) goto L_00505879;
  /* 00505854 mov ecx, dword ptr [edi + 0x228] */ { const u32 m_ = (u32)(edi + 0x228u); ecx = (u32)(M32(m_)); }
  /* 0050585a fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0050585d fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00505860 mov edx, dword ptr [edi + 0x220] */ { const u32 m_ = (u32)(edi + 0x220u); edx = (u32)(M32(m_)); }
  /* 00505866 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00505869 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050586a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050586b fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050586e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050586f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505870 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505871 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00505874 call 0x5050e0 */ esp -= 4; M32(esp) = 0x505879u; SAVEALL; F_005050e0(c); ABI_CHECK(0x5050e0u, 0x505874u); RETCHK(0x505879u, 0x505874u); LOADALL;
L_00505879:;
  /* 00505879 movzx eax, byte ptr [edi + 0x25c] */ { const u32 m_ = (u32)(edi + 0x25cu); eax = (u32)(M8(m_)); }
  /* 00505880 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00505883 fmul dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00505889 shl eax, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050588c or eax, 0xffffff */ { u32 a_ = eax, b_ = 0xffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00505891 fadd dword ptr [edi + 0x220] */ { const u32 m_ = (u32)(edi + 0x220u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00505897 mov dword ptr [edi + 0x1a4], eax */ { const u32 m_ = (u32)(edi + 0x1a4u); M32(m_) = (u32)(eax); }
  /* 0050589d mov dword ptr [edi + 0x1c0], eax */ { const u32 m_ = (u32)(edi + 0x1c0u); M32(m_) = (u32)(eax); }
  /* 005058a3 mov dword ptr [edi + 0x1dc], eax */ { const u32 m_ = (u32)(edi + 0x1dcu); M32(m_) = (u32)(eax); }
  /* 005058a9 mov dword ptr [edi + 0x1f8], eax */ { const u32 m_ = (u32)(edi + 0x1f8u); M32(m_) = (u32)(eax); }
  /* 005058af fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005058b2 mov al, byte ptr [edi + 0x25c] */ { const u32 m_ = (u32)(edi + 0x25cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005058b8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005058ba je 0x5058e1 */ if (ZF_) goto L_005058e1;
  /* 005058bc mov ecx, dword ptr [edi + 0x228] */ { const u32 m_ = (u32)(edi + 0x228u); ecx = (u32)(M32(m_)); }
  /* 005058c2 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 005058c5 fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005058c8 mov edx, dword ptr [edi + 0x220] */ { const u32 m_ = (u32)(edi + 0x220u); edx = (u32)(M32(m_)); }
  /* 005058ce mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005058d1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005058d2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005058d3 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005058d6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005058d7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005058d8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005058d9 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005058dc call 0x5050e0 */ esp -= 4; M32(esp) = 0x5058e1u; SAVEALL; F_005050e0(c); ABI_CHECK(0x5050e0u, 0x5058dcu); RETCHK(0x5058e1u, 0x5058dcu); LOADALL;
L_005058e1:;
  /* 005058e1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005058e2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005058e3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005058e5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005058e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005058f0(CPU *c) {
  NATIVE_HOOK(0x5058f0u) REGS; LOADALL;
L_005058f0:;
  /* 005058f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005058f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005058f3 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005058f6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005058f9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005058fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005058fb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005058fd call 0x508630 */ esp -= 4; M32(esp) = 0x505902u; SAVEALL; F_00508630(c); ABI_CHECK(0x508630u, 0x5058fdu); RETCHK(0x505902u, 0x5058fdu); LOADALL;
  /* 00505902 mov al, byte ptr [esi + 0x264] */ { const u32 m_ = (u32)(esi + 0x264u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00505908 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050590a je 0x50595a */ if (ZF_) goto L_0050595a;
  /* 0050590c fild dword ptr [esi + 0x260] */ { const u32 m_ = (u32)(esi + 0x260u); FPUSH((double)(s32)M32(m_)); }
  /* 00505912 movzx ecx, byte ptr [esi + 0x25c] */ { const u32 m_ = (u32)(esi + 0x25cu); ecx = (u32)(M8(m_)); }
  /* 00505919 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0050591c fmul dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00505922 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00505925 fmul dword ptr [0x656da0] */ { const u32 m_ = (u32)(0x656da0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050592b fiadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)(s32)M32(m_)); }
  /* 0050592e call 0x61b154 */ esp -= 4; M32(esp) = 0x505933u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50592eu); RETCHK(0x505933u, 0x50592eu); LOADALL;
  /* 00505933 cmp eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00505938 jl 0x5059e1 */ if (LT_) goto L_005059e1;
  /* 0050593e cdq */ edx = (u32)((s32)eax >> 31);
  /* 0050593f mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 00505944 idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x505944u); eax = q_; edx = r_; }
  /* 00505946 mov dword ptr [esi + 0x260], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x260u); M32(m_) = (u32)(0xffffffffu); }
  /* 00505950 or al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00505952 sub al, dl */ { u32 a_ = (eax & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_00505954:;
  /* 00505954 mov byte ptr [esi + 0x25c], al */ { const u32 m_ = (u32)(esi + 0x25cu); M8(m_) = (u8)((eax & 0xffu)); }
L_0050595a:;
  /* 0050595a mov al, byte ptr [esi + 0x294] */ { const u32 m_ = (u32)(esi + 0x294u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00505960 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00505962 je 0x505a19 */ if (ZF_) goto L_00505a19;
  /* 00505968 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505969 call 0x508500 */ esp -= 4; M32(esp) = 0x50596eu; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x505969u); RETCHK(0x50596eu, 0x505969u); LOADALL;
  /* 0050596e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00505970 je 0x505a08 */ if (ZF_) goto L_00505a08;
  /* 00505976 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00505979 mov dword ptr [esi + 0x20c], 2 */ { const u32 m_ = (u32)(esi + 0x20cu); M32(m_) = (u32)(0x2u); }
  /* 00505983 fadd dword ptr [esi + 0x298] */ { const u32 m_ = (u32)(esi + 0x298u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00505989 fst dword ptr [esi + 0x298] */ { const u32 m_ = (u32)(esi + 0x298u); MF32(m_) = (float)ST(0); }
  /* 0050598f fmul dword ptr [0x65704c] */ { const u32 m_ = (u32)(0x65704cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00505995 fcos */ ST(0) = m_cos(ST(0)); c->fsw &= ~0x400u;
  /* 00505997 fmul dword ptr [0x656f5c] */ { const u32 m_ = (u32)(0x656f5cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050599d fld dword ptr [esi + 0x240] */ { const u32 m_ = (u32)(esi + 0x240u); FPUSH((double)MF32(m_)); }
  /* 005059a3 fsub dword ptr [0x656f5c] */ { const u32 m_ = (u32)(0x656f5cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005059a9 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 005059ab fstp dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005059ae fld dword ptr [esi + 0x244] */ { const u32 m_ = (u32)(esi + 0x244u); FPUSH((double)MF32(m_)); }
  /* 005059b4 fsub dword ptr [0x656f5c] */ { const u32 m_ = (u32)(0x656f5cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005059ba fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 005059bc fstp dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005059bf fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 005059c1 fadd dword ptr [esi + 0x248] */ { const u32 m_ = (u32)(esi + 0x248u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005059c7 fadd dword ptr [0x656f5c] */ { const u32 m_ = (u32)(0x656f5cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005059cd fstp dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005059d0 fadd dword ptr [esi + 0x24c] */ { const u32 m_ = (u32)(esi + 0x24cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005059d6 fadd dword ptr [0x656f5c] */ { const u32 m_ = (u32)(0x656f5cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005059dc fstp dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005059df jmp 0x505a19 */ goto L_00505a19;
L_005059e1:;
  /* 005059e1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005059e3 jg 0x505954 */ if (!(ZF_|LT_)) goto L_00505954;
  /* 005059e9 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005059eb cdq */ edx = (u32)((s32)eax >> 31);
  /* 005059ec mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 005059f1 idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x5059f1u); eax = q_; edx = r_; }
  /* 005059f3 mov dword ptr [esi + 0x260], 1 */ { const u32 m_ = (u32)(esi + 0x260u); M32(m_) = (u32)(0x1u); }
  /* 005059fd mov byte ptr [esi + 0x25c], dl */ { const u32 m_ = (u32)(esi + 0x25cu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00505a03 jmp 0x50595a */ goto L_0050595a;
L_00505a08:;
  /* 00505a08 lea edx, [esi + 0x240] */ edx = (u32)((u32)(esi + 0x240u));
  /* 00505a0e lea ecx, [esi + 0x44] */ ecx = (u32)((u32)(esi + 0x44u));
  /* 00505a11 lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 00505a14 call 0x52cee0 */ esp -= 4; M32(esp) = 0x505a19u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x505a14u); RETCHK(0x505a19u, 0x505a14u); LOADALL;
L_00505a19:;
  /* 00505a19 fld dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 00505a1c fsub dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00505a1f fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00505a25 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00505a27 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00505a2a je 0x505a34 */ if (ZF_) goto L_00505a34;
  /* 00505a2c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00505a2e fld dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 00505a31 fsub dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00505a34:;
  /* 00505a34 fld dword ptr [esi + 0x24c] */ { const u32 m_ = (u32)(esi + 0x24cu); FPUSH((double)MF32(m_)); }
  /* 00505a3a fsub dword ptr [esi + 0x244] */ { const u32 m_ = (u32)(esi + 0x244u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00505a40 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00505a46 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00505a48 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00505a4b je 0x505a5b */ if (ZF_) goto L_00505a5b;
  /* 00505a4d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00505a4f fld dword ptr [esi + 0x244] */ { const u32 m_ = (u32)(esi + 0x244u); FPUSH((double)MF32(m_)); }
  /* 00505a55 fsub dword ptr [esi + 0x24c] */ { const u32 m_ = (u32)(esi + 0x24cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00505a5b:;
  /* 00505a5b fld dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 00505a5e fsub dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00505a61 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00505a67 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00505a69 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00505a6c je 0x505a76 */ if (ZF_) goto L_00505a76;
  /* 00505a6e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00505a70 fld dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 00505a73 fsub dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00505a76:;
  /* 00505a76 fld dword ptr [esi + 0x248] */ { const u32 m_ = (u32)(esi + 0x248u); FPUSH((double)MF32(m_)); }
  /* 00505a7c fsub dword ptr [esi + 0x240] */ { const u32 m_ = (u32)(esi + 0x240u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00505a82 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00505a88 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00505a8a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00505a8d je 0x505a9d */ if (ZF_) goto L_00505a9d;
  /* 00505a8f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00505a91 fld dword ptr [esi + 0x240] */ { const u32 m_ = (u32)(esi + 0x240u); FPUSH((double)MF32(m_)); }
  /* 00505a97 fsub dword ptr [esi + 0x248] */ { const u32 m_ = (u32)(esi + 0x248u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00505a9d:;
  /* 00505a9d fxch st(3) */ { double t_ = ST(0); ST(0) = ST(3); ST(3) = t_; }
  /* 00505a9f sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00505aa2 fdiv st(2) */ ST(0) = FR(ST(0) / ST(2));
  /* 00505aa4 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00505aa6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00505aa8 fsub dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00505aae fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00505ab2 fdiv st(2) */ ST(0) = FR(ST(0) / ST(2));
  /* 00505ab4 fsub dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00505aba fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00505abd fstp st(1) */ ST(1) = ST(0); FPOP();
  /* 00505abf fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00505ac1 call dword ptr [edx + 0xf4] */ { const u32 m_ = (u32)(edx + 0xf4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x505ac7u; SAVEALL; call_ind(c, t_); RETCHK(0x505ac7u, 0x505ac1u); LOADALL; }
  /* 00505ac7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00505ac8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00505aca pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505acb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00505ad0(CPU *c) {
  NATIVE_HOOK(0x505ad0u) REGS; LOADALL;
L_00505ad0:;
  /* 00505ad0 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00505ae0(CPU *c) {
  NATIVE_HOOK(0x505ae0u) REGS; LOADALL;
L_00505ae0:;
  /* 00505ae0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505ae1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505ae3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00505ae6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00505ae9 cmp eax, 0xd */ { u32 a_ = eax, b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00505aec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505aed mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00505aef call 0x62da70 */ esp -= 4; M32(esp) = 0x505af4u; SAVEALL; F_0062da70(c); ABI_CHECK(0x62da70u, 0x505aefu); RETCHK(0x505af4u, 0x505aefu); LOADALL;
  /* 00505af4 je 0x505b0d */ if (ZF_) goto L_00505b0d;
  /* 00505af6 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00505af9 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00505afc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00505afd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00505afe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505aff mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00505b01 call 0x508230 */ esp -= 4; M32(esp) = 0x505b06u; SAVEALL; F_00508230(c); ABI_CHECK(0x508230u, 0x505b01u); RETCHK(0x505b06u, 0x505b01u); LOADALL;
  /* 00505b06 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00505b07 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00505b09 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505b0a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00505b0d:;
  /* 00505b0d mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00505b0f lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00505b12 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00505b13 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00505b15 call dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x505b18u; SAVEALL; call_ind(c, t_); RETCHK(0x505b18u, 0x505b15u); LOADALL; }
  /* 00505b18 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00505b1a lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00505b1d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505b1e push 0xfffffba9 */ { u32 v_ = 0xfffffba9u; esp -= 4; M32(esp) = v_; }
  /* 00505b23 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00505b25 call dword ptr [edx + 0x6c] */ { const u32 m_ = (u32)(edx + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x505b28u; SAVEALL; call_ind(c, t_); RETCHK(0x505b28u, 0x505b25u); LOADALL; }
  /* 00505b28 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00505b2a lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00505b2d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505b2e push 0xfffffba9 */ { u32 v_ = 0xfffffba9u; esp -= 4; M32(esp) = v_; }
  /* 00505b33 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00505b35 call dword ptr [edx + 0x70] */ { const u32 m_ = (u32)(edx + 0x70u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x505b38u; SAVEALL; call_ind(c, t_); RETCHK(0x505b38u, 0x505b35u); LOADALL; }
  /* 00505b38 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00505b3a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00505b3c call 0x508150 */ esp -= 4; M32(esp) = 0x505b41u; SAVEALL; F_00508150(c); ABI_CHECK(0x508150u, 0x505b3cu); RETCHK(0x505b41u, 0x505b3cu); LOADALL;
  /* 00505b41 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00505b43 je 0x505b6a */ if (ZF_) goto L_00505b6a;
  /* 00505b45 call 0x550820 */ esp -= 4; M32(esp) = 0x505b4au; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x505b45u); RETCHK(0x505b4au, 0x505b45u); LOADALL;
  /* 00505b4a mov eax, dword ptr [eax + 0xf64] */ { const u32 m_ = (u32)(eax + 0xf64u); eax = (u32)(M32(m_)); }
  /* 00505b50 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00505b52 je 0x505b6a */ if (ZF_) goto L_00505b6a;
  /* 00505b54 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00505b56 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00505b5b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00505b5d push 0x6506d8 */ { u32 v_ = 0x6506d8u; esp -= 4; M32(esp) = v_; }
  /* 00505b62 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505b63 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00505b65 call 0x531340 */ esp -= 4; M32(esp) = 0x505b6au; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x505b65u); RETCHK(0x505b6au, 0x505b65u); LOADALL;
L_00505b6a:;
  /* 00505b6a mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00505b6c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00505b6d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00505b6f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505b70 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00505b80(CPU *c) {
  NATIVE_HOOK(0x505b80u) REGS; LOADALL;
L_00505b80:;
  /* 00505b80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505b81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505b83 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00505b85 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 00505b8a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00505b90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505b91 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00505b98 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00505b99 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00505b9a push 0x505c00 */ { u32 v_ = 0x505c00u; esp -= 4; M32(esp) = v_; }
  /* 00505b9f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00505ba2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00505ba4 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00505ba6 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00505ba9 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00505bac push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00505bae push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00505baf lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00505bb2 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00505bb9 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00505bbc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505bbd mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00505bc0 call 0x404140 */ esp -= 4; M32(esp) = 0x505bc5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x505bc0u); RETCHK(0x505bc5u, 0x505bc0u); LOADALL;
  /* 00505bc5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00505bc8 call 0x405c00 */ esp -= 4; M32(esp) = 0x505bcdu; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x505bc8u); RETCHK(0x505bcdu, 0x505bc8u); LOADALL;
  /* 00505bcd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00505bcf call 0x405c80 */ esp -= 4; M32(esp) = 0x505bd4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x505bcfu); RETCHK(0x505bd4u, 0x505bcfu); LOADALL;
  /* 00505bd4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00505bd8 jb 0x505be6 */ if (CF_) goto L_00505be6;
  /* 00505bda mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00505bdd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00505bde call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x505be3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x505bdeu); RETCHK(0x505be3u, 0x505bdeu); LOADALL;
  /* 00505be3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00505be6:;
  /* 00505be6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00505be9 mov eax, esi */ { eax = (u32)(esi); }
  /* 00505beb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00505bf2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00505bf3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00505bf5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505bf6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00505c00(CPU *c) {
  NATIVE_HOOK(0x505c00u) REGS; LOADALL;
L_00505c00:;
  /* 00505c00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505c01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505c03 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00505c05 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 00505c0a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00505c10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505c11 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00505c18 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00505c19 push 0x2a0 */ { u32 v_ = 0x2a0u; esp -= 4; M32(esp) = v_; }
  /* 00505c1e call 0x5fe934 */ esp -= 4; M32(esp) = 0x505c23u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x505c1eu); RETCHK(0x505c23u, 0x505c1eu); LOADALL;
  /* 00505c23 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00505c26 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00505c29 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00505c2b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00505c32 je 0x505c4a */ if (ZF_) goto L_00505c4a;
  /* 00505c34 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00505c36 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505c37 call 0x505150 */ esp -= 4; M32(esp) = 0x505c3cu; SAVEALL; F_00505150(c); ABI_CHECK(0x505150u, 0x505c37u); RETCHK(0x505c3cu, 0x505c37u); LOADALL;
  /* 00505c3c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00505c3f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00505c46 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00505c48 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505c49 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00505c4a:;
  /* 00505c4a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00505c4d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00505c4f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00505c56 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00505c58 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505c59 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00505c60(CPU *c) {
  NATIVE_HOOK(0x505c60u) REGS; LOADALL;
L_00505c60:;
  /* 00505c60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505c61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505c63 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00505c66 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00505c69 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505c6a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00505c6c mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00505c6f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00505c71 mov byte ptr [esi + 0x22c], 1 */ { const u32 m_ = (u32)(esi + 0x22cu); M8(m_) = (u8)(0x1u); }
  /* 00505c78 mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 00505c7f mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 00505c82 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00505c85 je 0x505c8f */ if (ZF_) goto L_00505c8f;
  /* 00505c87 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00505c8a call 0x508540 */ esp -= 4; M32(esp) = 0x505c8fu; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x505c8au); RETCHK(0x505c8fu, 0x505c8au); LOADALL;
L_00505c8f:;
  /* 00505c8f mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 00505c92 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00505c95 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00505c98 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00505c9a mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00505c9c mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00505c9f mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00505ca2 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 00505ca5 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 00505ca8 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00505cab mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 00505cae mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00505cb1 mov dword ptr [ecx + 0x10], edx */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(edx); }
  /* 00505cb4 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 00505cb7 lea eax, [esi + 0x2a0] */ eax = (u32)((u32)(esi + 0x2a0u));
  /* 00505cbd call 0x500b00 */ esp -= 4; M32(esp) = 0x505cc2u; SAVEALL; F_00500b00(c); ABI_CHECK(0x500b00u, 0x505cbdu); RETCHK(0x505cc2u, 0x505cbdu); LOADALL;
  /* 00505cc2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00505cc3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00505cc5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505cc6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00505cd0(CPU *c) {
  NATIVE_HOOK(0x505cd0u) REGS; LOADALL;
L_00505cd0:;
  /* 00505cd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505cd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505cd3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00505cd6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505cd7 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00505cd9 mov al, byte ptr [esi + 0x22c] */ { const u32 m_ = (u32)(esi + 0x22cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00505cdf test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00505ce1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00505ce2 je 0x505d72 */ if (ZF_) goto L_00505d72;
  /* 00505ce8 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00505ceb test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00505ced mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00505cf0 mov byte ptr [esi + 0x22c], 0 */ { const u32 m_ = (u32)(esi + 0x22cu); M8(m_) = (u8)(0x0u); }
  /* 00505cf7 mov dword ptr [ebp - 0x18], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x1u); }
  /* 00505cfe mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 00505d01 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00505d04 je 0x505d0e */ if (ZF_) goto L_00505d0e;
  /* 00505d06 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00505d09 call 0x508540 */ esp -= 4; M32(esp) = 0x505d0eu; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x505d09u); RETCHK(0x505d0eu, 0x505d09u); LOADALL;
L_00505d0e:;
  /* 00505d0e call 0x550820 */ esp -= 4; M32(esp) = 0x505d13u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x505d0eu); RETCHK(0x505d13u, 0x505d0eu); LOADALL;
  /* 00505d13 mov edi, dword ptr [eax + 0xf64] */ { const u32 m_ = (u32)(eax + 0xf64u); edi = (u32)(M32(m_)); }
  /* 00505d19 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00505d1b je 0x505d3f */ if (ZF_) goto L_00505d3f;
  /* 00505d1d call 0x518bb0 */ esp -= 4; M32(esp) = 0x505d22u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x505d1du); RETCHK(0x505d22u, 0x505d1du); LOADALL;
  /* 00505d22 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00505d25 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00505d27 je 0x505d3f */ if (ZF_) goto L_00505d3f;
  /* 00505d29 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00505d2b push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00505d30 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00505d32 push 0x6506d8 */ { u32 v_ = 0x6506d8u; esp -= 4; M32(esp) = v_; }
  /* 00505d37 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00505d38 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00505d3a call 0x531340 */ esp -= 4; M32(esp) = 0x505d3fu; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x505d3au); RETCHK(0x505d3fu, 0x505d3au); LOADALL;
L_00505d3f:;
  /* 00505d3f mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 00505d42 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00505d45 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00505d48 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00505d4a mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00505d4c mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00505d4f mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00505d52 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 00505d55 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 00505d58 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00505d5b mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 00505d5e mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00505d61 mov dword ptr [ecx + 0x10], edx */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(edx); }
  /* 00505d64 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 00505d67 lea eax, [esi + 0x2a0] */ eax = (u32)((u32)(esi + 0x2a0u));
  /* 00505d6d call 0x500b00 */ esp -= 4; M32(esp) = 0x505d72u; SAVEALL; F_00500b00(c); ABI_CHECK(0x500b00u, 0x505d6du); RETCHK(0x505d72u, 0x505d6du); LOADALL;
L_00505d72:;
  /* 00505d72 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00505d73 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00505d74 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00505d76 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505d77 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00505d80(CPU *c) {
  NATIVE_HOOK(0x505d80u) REGS; LOADALL;
L_00505d80:;
  /* 00505d80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505d81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505d83 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00505d85 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 00505d8a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00505d90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505d91 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00505d98 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00505d99 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00505d9a push 0x505e00 */ { u32 v_ = 0x505e00u; esp -= 4; M32(esp) = v_; }
  /* 00505d9f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00505da2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00505da4 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00505da6 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00505da9 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00505dac push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00505dae push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00505daf lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00505db2 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00505db9 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00505dbc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505dbd mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00505dc0 call 0x404140 */ esp -= 4; M32(esp) = 0x505dc5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x505dc0u); RETCHK(0x505dc5u, 0x505dc0u); LOADALL;
  /* 00505dc5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00505dc8 call 0x405c00 */ esp -= 4; M32(esp) = 0x505dcdu; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x505dc8u); RETCHK(0x505dcdu, 0x505dc8u); LOADALL;
  /* 00505dcd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00505dcf call 0x405c80 */ esp -= 4; M32(esp) = 0x505dd4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x505dcfu); RETCHK(0x505dd4u, 0x505dcfu); LOADALL;
  /* 00505dd4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00505dd8 jb 0x505de6 */ if (CF_) goto L_00505de6;
  /* 00505dda mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00505ddd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00505dde call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x505de3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x505ddeu); RETCHK(0x505de3u, 0x505ddeu); LOADALL;
  /* 00505de3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00505de6:;
  /* 00505de6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00505de9 mov eax, esi */ { eax = (u32)(esi); }
  /* 00505deb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00505df2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00505df3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00505df5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505df6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00505e00(CPU *c) {
  NATIVE_HOOK(0x505e00u) REGS; LOADALL;
L_00505e00:;
  /* 00505e00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505e01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505e03 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00505e05 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 00505e0a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00505e10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505e11 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00505e18 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00505e19 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505e1a push 0x2a4 */ { u32 v_ = 0x2a4u; esp -= 4; M32(esp) = v_; }
  /* 00505e1f call 0x5fe934 */ esp -= 4; M32(esp) = 0x505e24u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x505e1fu); RETCHK(0x505e24u, 0x505e1fu); LOADALL;
  /* 00505e24 mov esi, eax */ { esi = (u32)(eax); }
  /* 00505e26 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00505e29 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 00505e2c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00505e2e cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00505e30 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00505e33 je 0x505e4f */ if (ZF_) goto L_00505e4f;
  /* 00505e35 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505e36 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505e37 call 0x505150 */ esp -= 4; M32(esp) = 0x505e3cu; SAVEALL; F_00505150(c); ABI_CHECK(0x505150u, 0x505e37u); RETCHK(0x505e3cu, 0x505e37u); LOADALL;
  /* 00505e3c lea eax, [esi + 0x2a0] */ eax = (u32)((u32)(esi + 0x2a0u));
  /* 00505e42 call 0x5684a0 */ esp -= 4; M32(esp) = 0x505e47u; SAVEALL; F_005684a0(c); ABI_CHECK(0x5684a0u, 0x505e42u); RETCHK(0x505e47u, 0x505e42u); LOADALL;
  /* 00505e47 mov dword ptr [esi], 0x650700 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x650700u); }
  /* 00505e4d mov eax, esi */ { eax = (u32)(esi); }
L_00505e4f:;
  /* 00505e4f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00505e52 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00505e53 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00505e5a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00505e5c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505e5d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00505e60(CPU *c) {
  NATIVE_HOOK(0x505e60u) REGS; LOADALL;
L_00505e60:;
  /* 00505e60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505e61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505e63 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505e64 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00505e66 call 0x505e90 */ esp -= 4; M32(esp) = 0x505e6bu; SAVEALL; F_00505e90(c); ABI_CHECK(0x505e90u, 0x505e66u); RETCHK(0x505e6bu, 0x505e66u); LOADALL;
  /* 00505e6b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00505e6f je 0x505e7a */ if (ZF_) goto L_00505e7a;
  /* 00505e71 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505e72 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x505e77u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x505e72u); RETCHK(0x505e77u, 0x505e72u); LOADALL;
  /* 00505e77 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00505e7a:;
  /* 00505e7a mov eax, esi */ { eax = (u32)(esi); }
  /* 00505e7c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00505e7d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505e7e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00505e90(CPU *c) {
  NATIVE_HOOK(0x505e90u) REGS; LOADALL;
L_00505e90:;
  /* 00505e90 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00505e92 je 0x505ea4 */ if (ZF_) goto L_00505ea4;
  /* 00505e94 lea eax, [ecx + 0x2a0] */ eax = (u32)((u32)(ecx + 0x2a0u));
  /* 00505e9a call 0x5684a0 */ esp -= 4; M32(esp) = 0x505e9fu; SAVEALL; F_005684a0(c); ABI_CHECK(0x5684a0u, 0x505e9au); RETCHK(0x505e9fu, 0x505e9au); LOADALL;
  /* 00505e9f jmp 0x505270 */ SAVEALL; F_00505270(c); return;
L_00505ea4:;
  /* 00505ea4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00505ea6 call 0x5684a0 */ esp -= 4; M32(esp) = 0x505eabu; SAVEALL; F_005684a0(c); ABI_CHECK(0x5684a0u, 0x505ea6u); RETCHK(0x505eabu, 0x505ea6u); LOADALL;
  /* 00505eab jmp 0x505270 */ SAVEALL; F_00505270(c); return;
}

void F_00505eb0(CPU *c) {
  NATIVE_HOOK(0x505eb0u) REGS; LOADALL;
L_00505eb0:;
  /* 00505eb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505eb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505eb3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00505eb9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00505ebb push 0x61c5b8 */ { u32 v_ = 0x61c5b8u; esp -= 4; M32(esp) = v_; }
  /* 00505ec0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505ec1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00505ec4 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00505ecb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505ecc mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00505ecf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505ed0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505ed1 call 0x505150 */ esp -= 4; M32(esp) = 0x505ed6u; SAVEALL; F_00505150(c); ABI_CHECK(0x505150u, 0x505ed1u); RETCHK(0x505ed6u, 0x505ed1u); LOADALL;
  /* 00505ed6 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00505ed8 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00505edf push 0x650908 */ { u32 v_ = 0x650908u; esp -= 4; M32(esp) = v_; }
  /* 00505ee4 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00505ee7 mov dword ptr [esi], 0x650808 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x650808u); }
  /* 00505eed call 0x404420 */ esp -= 4; M32(esp) = 0x505ef2u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x505eedu); RETCHK(0x505ef2u, 0x505eedu); LOADALL;
  /* 00505ef2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00505ef5 mov byte ptr [esi + 0x22c], 0 */ { const u32 m_ = (u32)(esi + 0x22cu); M8(m_) = (u8)(0x0u); }
  /* 00505efc mov eax, esi */ { eax = (u32)(esi); }
  /* 00505efe mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00505f05 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00505f06 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00505f08 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505f09 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00505f10(CPU *c) {
  NATIVE_HOOK(0x505f10u) REGS; LOADALL;
L_00505f10:;
  /* 00505f10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505f11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505f13 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505f14 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00505f16 call 0x505f40 */ esp -= 4; M32(esp) = 0x505f1bu; SAVEALL; F_00505f40(c); ABI_CHECK(0x505f40u, 0x505f16u); RETCHK(0x505f1bu, 0x505f16u); LOADALL;
  /* 00505f1b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00505f1f je 0x505f2a */ if (ZF_) goto L_00505f2a;
  /* 00505f21 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505f22 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x505f27u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x505f22u); RETCHK(0x505f27u, 0x505f22u); LOADALL;
  /* 00505f27 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00505f2a:;
  /* 00505f2a mov eax, esi */ { eax = (u32)(esi); }
  /* 00505f2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00505f2d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505f2e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00505f40(CPU *c) {
  NATIVE_HOOK(0x505f40u) REGS; LOADALL;
L_00505f40:;
  /* 00505f40 mov dword ptr [ecx], 0x650808 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x650808u); }
  /* 00505f46 jmp 0x505270 */ SAVEALL; F_00505270(c); return;
}

void F_00505f50(CPU *c) {
  NATIVE_HOOK(0x505f50u) REGS; LOADALL;
L_00505f50:;
  /* 00505f50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505f51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505f53 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505f54 lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 00505f57 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00505f58 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00505f59 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00505f5b call 0x5054c0 */ esp -= 4; M32(esp) = 0x505f60u; SAVEALL; F_005054c0(c); ABI_CHECK(0x5054c0u, 0x505f5bu); RETCHK(0x505f60u, 0x505f5bu); LOADALL;
  /* 00505f60 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00505f62 jne 0x505f68 */ if (!ZF_) goto L_00505f68;
  /* 00505f64 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505f65 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
L_00505f68:;
  /* 00505f68 mov cl, byte ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00505f6b mov eax, esi */ { eax = (u32)(esi); }
  /* 00505f6d call 0x506340 */ esp -= 4; M32(esp) = 0x505f72u; SAVEALL; F_00506340(c); ABI_CHECK(0x506340u, 0x505f6du); RETCHK(0x505f72u, 0x505f6du); LOADALL;
  /* 00505f72 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00505f74 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505f75 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_00505f80(CPU *c) {
  NATIVE_HOOK(0x505f80u) REGS; LOADALL;
L_00505f80:;
  /* 00505f80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505f81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505f83 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505f84 jmp 0x507f00 */ SAVEALL; F_00507f00(c); return;
}

void F_00505f90(CPU *c) {
  NATIVE_HOOK(0x505f90u) REGS; LOADALL;
L_00505f90:;
  /* 00505f90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505f91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505f93 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00505f96 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00505f97 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00505f99 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00505f9c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505f9d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00505f9e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00505fa0 call 0x507f80 */ esp -= 4; M32(esp) = 0x505fa5u; SAVEALL; F_00507f80(c); ABI_CHECK(0x507f80u, 0x505fa0u); RETCHK(0x505fa5u, 0x505fa0u); LOADALL;
  /* 00505fa5 mov al, byte ptr [esi + 0x22c] */ { const u32 m_ = (u32)(esi + 0x22cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00505fab test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00505fad sete dl */ { edx = (edx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 00505fb0 mov byte ptr [esi + 0x22c], dl */ { const u32 m_ = (u32)(esi + 0x22cu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00505fb6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00505fb7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00505fb8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00505fc0(CPU *c) {
  NATIVE_HOOK(0x505fc0u) REGS; LOADALL;
L_00505fc0:;
  /* 00505fc0 mov al, byte ptr [ecx + 0x3f] */ { const u32 m_ = (u32)(ecx + 0x3fu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00505fc3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00505fc5 je 0x505fd6 */ if (ZF_) goto L_00505fd6;
  /* 00505fc7 mov dword ptr [ecx + 0x26c], 2 */ { const u32 m_ = (u32)(ecx + 0x26cu); M32(m_) = (u32)(0x2u); }
  /* 00505fd1 jmp 0x507e90 */ SAVEALL; F_00507e90(c); return;
L_00505fd6:;
  /* 00505fd6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00505fe0(CPU *c) {
  NATIVE_HOOK(0x505fe0u) REGS; LOADALL;
L_00505fe0:;
  /* 00505fe0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00505fe1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00505fe3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00505fe5 push 0x624328 */ { u32 v_ = 0x624328u; esp -= 4; M32(esp) = v_; }
  /* 00505fea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00505ff0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00505ff1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00505ff8 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00505ffb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00505ffc mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00505ffe mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00506001 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00506003 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506004 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00506005 jne 0x50601c */ if (!ZF_) goto L_0050601c;
  /* 00506007 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00506009 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050600c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00506013 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00506014 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00506015 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00506016 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00506018 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506019 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0050601c:;
  /* 0050601c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050601e call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x506021u; SAVEALL; call_ind(c, t_); RETCHK(0x506021u, 0x50601eu); LOADALL; }
  /* 00506021 push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 00506026 mov edi, eax */ { edi = (u32)(eax); }
  /* 00506028 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50602du; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x506028u); RETCHK(0x50602du, 0x506028u); LOADALL;
  /* 0050602d mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00506030 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00506033 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 00506038 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050603a fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050603d call 0x560fd0 */ esp -= 4; M32(esp) = 0x506042u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50603du); RETCHK(0x506042u, 0x50603du); LOADALL;
  /* 00506042 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00506045 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00506048 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 0050604d mov eax, edi */ { eax = (u32)(edi); }
  /* 0050604f fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00506052 call 0x560fd0 */ esp -= 4; M32(esp) = 0x506057u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x506052u); RETCHK(0x506057u, 0x506052u); LOADALL;
  /* 00506057 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050605a fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050605d push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 00506062 mov eax, edi */ { eax = (u32)(edi); }
  /* 00506064 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00506067 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050606a call 0x560fd0 */ esp -= 4; M32(esp) = 0x50606fu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50606au); RETCHK(0x50606fu, 0x50606au); LOADALL;
  /* 0050606f mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00506072 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00506075 push 0x650900 */ { u32 v_ = 0x650900u; esp -= 4; M32(esp) = v_; }
  /* 0050607a mov eax, edi */ { eax = (u32)(edi); }
  /* 0050607c fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050607f fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00506082 call 0x560fd0 */ esp -= 4; M32(esp) = 0x506087u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x506082u); RETCHK(0x506087u, 0x506082u); LOADALL;
  /* 00506087 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00506089 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0050608c setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0050608f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00506091 mov byte ptr [ebp + 8], cl */ { const u32 m_ = (u32)(ebp + 0x8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00506094 je 0x5060a2 */ if (ZF_) goto L_005060a2;
  /* 00506096 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506097 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050609a call 0x52d060 */ esp -= 4; M32(esp) = 0x50609fu; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x50609au); RETCHK(0x50609fu, 0x50609au); LOADALL;
  /* 0050609f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005060a2:;
  /* 005060a2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005060a3 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 005060a8 call 0x560ed0 */ esp -= 4; M32(esp) = 0x5060adu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5060a8u); RETCHK(0x5060adu, 0x5060a8u); LOADALL;
  /* 005060ad mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005060af mov dword ptr [ebp - 0x20], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xfu); }
  /* 005060b6 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 005060bd mov byte ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)(0x0u); }
  /* 005060c1 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
L_005060c4:;
  /* 005060c4 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005060c6 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005060c7 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005060c9 jne 0x5060c4 */ if (!ZF_) goto L_005060c4;
  /* 005060cb sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005060cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005060ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005060cf lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 005060d2 call 0x404420 */ esp -= 4; M32(esp) = 0x5060d7u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5060d2u); RETCHK(0x5060d7u, 0x5060d2u); LOADALL;
  /* 005060d7 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005060da push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005060db push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005060dc mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 005060e1 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005060e8 call 0x560ed0 */ esp -= 4; M32(esp) = 0x5060edu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5060e8u); RETCHK(0x5060edu, 0x5060e8u); LOADALL;
  /* 005060ed sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005060f0 mov esi, eax */ { esi = (u32)(eax); }
  /* 005060f2 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 005060f5 mov eax, esp */ { eax = (u32)(esp); }
  /* 005060f7 mov dword ptr [ebp + 8], esp */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esp); }
  /* 005060fa call 0x52cea0 */ esp -= 4; M32(esp) = 0x5060ffu; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x5060fau); RETCHK(0x5060ffu, 0x5060fau); LOADALL;
  /* 005060ff mov eax, esi */ { eax = (u32)(esi); }
  /* 00506101 lea edx, [ebp - 0x38] */ edx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00506104 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00506106 call 0x505f50 */ esp -= 4; M32(esp) = 0x50610bu; SAVEALL; F_00505f50(c); ABI_CHECK(0x505f50u, 0x506106u); RETCHK(0x50610bu, 0x506106u); LOADALL;
  /* 0050610b mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0050610d cmp dword ptr [ebp - 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00506111 jb 0x50611f */ if (CF_) goto L_0050611f;
  /* 00506113 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00506116 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506117 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50611cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x506117u); RETCHK(0x50611cu, 0x506117u); LOADALL;
  /* 0050611c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050611f:;
  /* 0050611f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00506122 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00506123 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00506124 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 00506126 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050612d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050612e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00506130 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506131 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00506140(CPU *c) {
  NATIVE_HOOK(0x506140u) REGS; LOADALL;
L_00506140:;
  /* 00506140 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506141 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506143 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00506145 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0050614a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00506150 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506151 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00506158 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00506159 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050615a push 0x5061c0 */ { u32 v_ = 0x5061c0u; esp -= 4; M32(esp) = v_; }
  /* 0050615f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00506162 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00506164 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00506166 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00506169 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0050616c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050616e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050616f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00506172 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00506179 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0050617c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050617d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506180 call 0x404140 */ esp -= 4; M32(esp) = 0x506185u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x506180u); RETCHK(0x506185u, 0x506180u); LOADALL;
  /* 00506185 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506188 call 0x405c00 */ esp -= 4; M32(esp) = 0x50618du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x506188u); RETCHK(0x50618du, 0x506188u); LOADALL;
  /* 0050618d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050618f call 0x405c80 */ esp -= 4; M32(esp) = 0x506194u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x50618fu); RETCHK(0x506194u, 0x50618fu); LOADALL;
  /* 00506194 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00506198 jb 0x5061a6 */ if (CF_) goto L_005061a6;
  /* 0050619a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0050619d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050619e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5061a3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50619eu); RETCHK(0x5061a3u, 0x50619eu); LOADALL;
  /* 005061a3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005061a6:;
  /* 005061a6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005061a9 mov eax, esi */ { eax = (u32)(esi); }
  /* 005061ab mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005061b2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005061b3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005061b5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005061b6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_005061c0(CPU *c) {
  NATIVE_HOOK(0x5061c0u) REGS; LOADALL;
L_005061c0:;
  /* 005061c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005061c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005061c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005061c5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 005061ca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005061d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005061d1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005061d8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005061d9 push 0x2a0 */ { u32 v_ = 0x2a0u; esp -= 4; M32(esp) = v_; }
  /* 005061de call 0x5fe934 */ esp -= 4; M32(esp) = 0x5061e3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5061deu); RETCHK(0x5061e3u, 0x5061deu); LOADALL;
  /* 005061e3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005061e6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005061e9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005061eb mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005061f2 je 0x50620a */ if (ZF_) goto L_0050620a;
  /* 005061f4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005061f6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005061f7 call 0x505eb0 */ esp -= 4; M32(esp) = 0x5061fcu; SAVEALL; F_00505eb0(c); ABI_CHECK(0x505eb0u, 0x5061f7u); RETCHK(0x5061fcu, 0x5061f7u); LOADALL;
  /* 005061fc mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005061ff mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00506206 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00506208 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506209 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050620a:;
  /* 0050620a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050620d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050620f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00506216 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00506218 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506219 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00506220(CPU *c) {
  NATIVE_HOOK(0x506220u) REGS; LOADALL;
L_00506220:;
  /* 00506220 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506221 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506223 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00506229 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050622b push 0x61c5b8 */ { u32 v_ = 0x61c5b8u; esp -= 4; M32(esp) = v_; }
  /* 00506230 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506231 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00506234 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050623b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050623c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050623f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506240 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506241 call 0x505150 */ esp -= 4; M32(esp) = 0x506246u; SAVEALL; F_00505150(c); ABI_CHECK(0x505150u, 0x506241u); RETCHK(0x506246u, 0x506241u); LOADALL;
  /* 00506246 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00506248 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050624f push 0x650a14 */ { u32 v_ = 0x650a14u; esp -= 4; M32(esp) = v_; }
  /* 00506254 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00506257 mov dword ptr [esi], 0x650918 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x650918u); }
  /* 0050625d call 0x404420 */ esp -= 4; M32(esp) = 0x506262u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50625du); RETCHK(0x506262u, 0x50625du); LOADALL;
  /* 00506262 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00506265 mov eax, esi */ { eax = (u32)(esi); }
  /* 00506267 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050626e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050626f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00506271 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506272 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00506280(CPU *c) {
  NATIVE_HOOK(0x506280u) REGS; LOADALL;
L_00506280:;
  /* 00506280 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506281 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506283 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506284 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00506286 call 0x5062b0 */ esp -= 4; M32(esp) = 0x50628bu; SAVEALL; F_005062b0(c); ABI_CHECK(0x5062b0u, 0x506286u); RETCHK(0x50628bu, 0x506286u); LOADALL;
  /* 0050628b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050628f je 0x50629a */ if (ZF_) goto L_0050629a;
  /* 00506291 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506292 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x506297u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x506292u); RETCHK(0x506297u, 0x506292u); LOADALL;
  /* 00506297 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050629a:;
  /* 0050629a mov eax, esi */ { eax = (u32)(esi); }
  /* 0050629c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050629d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050629e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005062b0(CPU *c) {
  NATIVE_HOOK(0x5062b0u) REGS; LOADALL;
L_005062b0:;
  /* 005062b0 mov dword ptr [ecx], 0x650918 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x650918u); }
  /* 005062b6 jmp 0x505270 */ SAVEALL; F_00505270(c); return;
}

void F_005062c0(CPU *c) {
  NATIVE_HOOK(0x5062c0u) REGS; LOADALL;
L_005062c0:;
  /* 005062c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005062c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005062c3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005062c4 lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 005062c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005062c8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005062c9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005062cb call 0x5054c0 */ esp -= 4; M32(esp) = 0x5062d0u; SAVEALL; F_005054c0(c); ABI_CHECK(0x5054c0u, 0x5062cbu); RETCHK(0x5062d0u, 0x5062cbu); LOADALL;
  /* 005062d0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005062d2 jne 0x5062d8 */ if (!ZF_) goto L_005062d8;
  /* 005062d4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005062d5 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
L_005062d8:;
  /* 005062d8 mov cl, byte ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005062db mov eax, esi */ { eax = (u32)(esi); }
  /* 005062dd call 0x506340 */ esp -= 4; M32(esp) = 0x5062e2u; SAVEALL; F_00506340(c); ABI_CHECK(0x506340u, 0x5062ddu); RETCHK(0x5062e2u, 0x5062ddu); LOADALL;
  /* 005062e2 mov dword ptr [esi + 0x20c], 2 */ { const u32 m_ = (u32)(esi + 0x20cu); M32(m_) = (u32)(0x2u); }
  /* 005062ec mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005062ee pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005062ef ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_00506300(CPU *c) {
  NATIVE_HOOK(0x506300u) REGS; LOADALL;
L_00506300:;
  /* 00506300 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506301 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506303 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506304 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00506306 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00506309 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050630b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050630c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050630e call dword ptr [eax + 0xec] */ { const u32 m_ = (u32)(eax + 0xecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x506314u; SAVEALL; call_ind(c, t_); RETCHK(0x506314u, 0x50630eu); LOADALL; }
  /* 00506314 mov dword ptr [esi + 0x20c], 2 */ { const u32 m_ = (u32)(esi + 0x20cu); M32(m_) = (u32)(0x2u); }
  /* 0050631e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050631f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506320 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00506330(CPU *c) {
  NATIVE_HOOK(0x506330u) REGS; LOADALL;
L_00506330:;
  /* 00506330 mov al, byte ptr [eax + 0x22c] */ { const u32 m_ = (u32)(eax + 0x22cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00506336 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00506340(CPU *c) {
  NATIVE_HOOK(0x506340u) REGS; LOADALL;
L_00506340:;
  /* 00506340 mov byte ptr [eax + 0x22c], cl */ { const u32 m_ = (u32)(eax + 0x22cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00506346 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00506350(CPU *c) {
  NATIVE_HOOK(0x506350u) REGS; LOADALL;
L_00506350:;
  /* 00506350 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506351 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506353 mov dl, byte ptr [ecx + 0x22c] */ { const u32 m_ = (u32)(ecx + 0x22cu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00506359 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050635b sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 0050635e mov byte ptr [ecx + 0x22c], al */ { const u32 m_ = (u32)(ecx + 0x22cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00506364 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506365 jmp 0x507f80 */ SAVEALL; F_00507f80(c); return;
}

void F_00506370(CPU *c) {
  NATIVE_HOOK(0x506370u) REGS; LOADALL;
L_00506370:;
  /* 00506370 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506371 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506373 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00506375 push 0x624328 */ { u32 v_ = 0x624328u; esp -= 4; M32(esp) = v_; }
  /* 0050637a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00506380 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506381 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00506388 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050638b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050638c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0050638e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00506391 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00506393 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506394 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00506395 jne 0x5063ac */ if (!ZF_) goto L_005063ac;
  /* 00506397 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00506399 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050639c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005063a3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005063a4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005063a5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005063a6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005063a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005063a9 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005063ac:;
  /* 005063ac mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005063ae call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5063b1u; SAVEALL; call_ind(c, t_); RETCHK(0x5063b1u, 0x5063aeu); LOADALL; }
  /* 005063b1 push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 005063b6 mov edi, eax */ { edi = (u32)(eax); }
  /* 005063b8 call 0x560fd0 */ esp -= 4; M32(esp) = 0x5063bdu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5063b8u); RETCHK(0x5063bdu, 0x5063b8u); LOADALL;
  /* 005063bd mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005063c0 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005063c3 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 005063c8 mov eax, edi */ { eax = (u32)(edi); }
  /* 005063ca fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005063cd call 0x560fd0 */ esp -= 4; M32(esp) = 0x5063d2u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5063cdu); RETCHK(0x5063d2u, 0x5063cdu); LOADALL;
  /* 005063d2 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005063d5 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005063d8 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 005063dd mov eax, edi */ { eax = (u32)(edi); }
  /* 005063df fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005063e2 call 0x560fd0 */ esp -= 4; M32(esp) = 0x5063e7u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5063e2u); RETCHK(0x5063e7u, 0x5063e2u); LOADALL;
  /* 005063e7 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005063ea fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005063ed push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 005063f2 mov eax, edi */ { eax = (u32)(edi); }
  /* 005063f4 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005063f7 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005063fa call 0x560fd0 */ esp -= 4; M32(esp) = 0x5063ffu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5063fau); RETCHK(0x5063ffu, 0x5063fau); LOADALL;
  /* 005063ff mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00506402 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00506405 push 0x650900 */ { u32 v_ = 0x650900u; esp -= 4; M32(esp) = v_; }
  /* 0050640a mov eax, edi */ { eax = (u32)(edi); }
  /* 0050640c fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050640f fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00506412 call 0x560fd0 */ esp -= 4; M32(esp) = 0x506417u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x506412u); RETCHK(0x506417u, 0x506412u); LOADALL;
  /* 00506417 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00506419 setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0050641c push 0x6506e0 */ { u32 v_ = 0x6506e0u; esp -= 4; M32(esp) = v_; }
  /* 00506421 mov eax, edi */ { eax = (u32)(edi); }
  /* 00506423 mov byte ptr [ebp + 8], cl */ { const u32 m_ = (u32)(ebp + 0x8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00506426 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50642bu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x506426u); RETCHK(0x50642bu, 0x506426u); LOADALL;
  /* 0050642b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050642d mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00506430 setne dl */ { edx = (edx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00506433 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00506435 mov byte ptr [ebx + 0x294], dl */ { const u32 m_ = (u32)(ebx + 0x294u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0050643b je 0x506449 */ if (ZF_) goto L_00506449;
  /* 0050643d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050643e lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00506441 call 0x52d060 */ esp -= 4; M32(esp) = 0x506446u; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x506441u); RETCHK(0x506446u, 0x506441u); LOADALL;
  /* 00506446 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00506449:;
  /* 00506449 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050644a mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 0050644f call 0x560ed0 */ esp -= 4; M32(esp) = 0x506454u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50644fu); RETCHK(0x506454u, 0x50644fu); LOADALL;
  /* 00506454 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00506456 mov dword ptr [ebp - 0x20], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xfu); }
  /* 0050645d mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 00506464 mov byte ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)(0x0u); }
  /* 00506468 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
  /* 0050646b jmp 0x506470 */ goto L_00506470;
L_00506470:;
  /* 00506470 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00506472 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00506473 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00506475 jne 0x506470 */ if (!ZF_) goto L_00506470;
  /* 00506477 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00506479 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050647a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050647b lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0050647e call 0x404420 */ esp -= 4; M32(esp) = 0x506483u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50647eu); RETCHK(0x506483u, 0x50647eu); LOADALL;
  /* 00506483 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00506486 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506487 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00506488 mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 0050648d mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00506494 call 0x560ed0 */ esp -= 4; M32(esp) = 0x506499u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x506494u); RETCHK(0x506499u, 0x506494u); LOADALL;
  /* 00506499 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050649c mov esi, eax */ { esi = (u32)(eax); }
  /* 0050649e lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 005064a1 mov eax, esp */ { eax = (u32)(esp); }
  /* 005064a3 mov dword ptr [ebp + 8], esp */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esp); }
  /* 005064a6 call 0x52cea0 */ esp -= 4; M32(esp) = 0x5064abu; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x5064a6u); RETCHK(0x5064abu, 0x5064a6u); LOADALL;
  /* 005064ab mov eax, esi */ { eax = (u32)(esi); }
  /* 005064ad lea edx, [ebp - 0x38] */ edx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 005064b0 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 005064b2 call 0x5062c0 */ esp -= 4; M32(esp) = 0x5064b7u; SAVEALL; F_005062c0(c); ABI_CHECK(0x5062c0u, 0x5064b2u); RETCHK(0x5064b7u, 0x5064b2u); LOADALL;
  /* 005064b7 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 005064b9 cmp dword ptr [ebp - 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005064bd jb 0x5064cb */ if (CF_) goto L_005064cb;
  /* 005064bf mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 005064c2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005064c3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5064c8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5064c3u); RETCHK(0x5064c8u, 0x5064c3u); LOADALL;
  /* 005064c8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005064cb:;
  /* 005064cb mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005064ce pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005064cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005064d0 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 005064d2 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005064d9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005064da mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005064dc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005064dd ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005064e0(CPU *c) {
  NATIVE_HOOK(0x5064e0u) REGS; LOADALL;
L_005064e0:;
  /* 005064e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005064e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005064e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005064e5 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 005064ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005064f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005064f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005064f8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005064f9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005064fa push 0x506560 */ { u32 v_ = 0x506560u; esp -= 4; M32(esp) = v_; }
  /* 005064ff sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00506502 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00506504 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00506506 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00506509 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0050650c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050650e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050650f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00506512 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00506519 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0050651c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050651d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506520 call 0x404140 */ esp -= 4; M32(esp) = 0x506525u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x506520u); RETCHK(0x506525u, 0x506520u); LOADALL;
  /* 00506525 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506528 call 0x405c00 */ esp -= 4; M32(esp) = 0x50652du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x506528u); RETCHK(0x50652du, 0x506528u); LOADALL;
  /* 0050652d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050652f call 0x405c80 */ esp -= 4; M32(esp) = 0x506534u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x50652fu); RETCHK(0x506534u, 0x50652fu); LOADALL;
  /* 00506534 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00506538 jb 0x506546 */ if (CF_) goto L_00506546;
  /* 0050653a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0050653d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050653e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x506543u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50653eu); RETCHK(0x506543u, 0x50653eu); LOADALL;
  /* 00506543 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00506546:;
  /* 00506546 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00506549 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050654b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00506552 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00506553 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00506555 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506556 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00506560(CPU *c) {
  NATIVE_HOOK(0x506560u) REGS; LOADALL;
L_00506560:;
  /* 00506560 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506561 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506563 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00506565 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0050656a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00506570 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506571 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00506578 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00506579 push 0x2a0 */ { u32 v_ = 0x2a0u; esp -= 4; M32(esp) = v_; }
  /* 0050657e call 0x5fe934 */ esp -= 4; M32(esp) = 0x506583u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50657eu); RETCHK(0x506583u, 0x50657eu); LOADALL;
  /* 00506583 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00506586 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00506589 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050658b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00506592 je 0x5065aa */ if (ZF_) goto L_005065aa;
  /* 00506594 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00506596 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506597 call 0x506220 */ esp -= 4; M32(esp) = 0x50659cu; SAVEALL; F_00506220(c); ABI_CHECK(0x506220u, 0x506597u); RETCHK(0x50659cu, 0x506597u); LOADALL;
  /* 0050659c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050659f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005065a6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005065a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005065a9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005065aa:;
  /* 005065aa mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005065ad xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005065af mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005065b6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005065b8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005065b9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005065c0(CPU *c) {
  NATIVE_HOOK(0x5065c0u) REGS; LOADALL;
L_005065c0:;
  /* 005065c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005065c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005065c3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005065c9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005065cb push 0x61c934 */ { u32 v_ = 0x61c934u; esp -= 4; M32(esp) = v_; }
  /* 005065d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005065d1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005065d4 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005065db push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005065dc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005065dd mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005065e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005065e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005065e2 call 0x506b60 */ esp -= 4; M32(esp) = 0x5065e7u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x5065e2u); RETCHK(0x5065e7u, 0x5065e2u); LOADALL;
  /* 005065e7 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005065ee mov dword ptr [edi], 0x650a20 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x650a20u); }
  /* 005065f4 mov dword ptr [edi + 0x180], 0x64d178 */ { const u32 m_ = (u32)(edi + 0x180u); M32(m_) = (u32)(0x64d178u); }
  /* 005065fe mov dword ptr [edi + 0x184], 0 */ { const u32 m_ = (u32)(edi + 0x184u); M32(m_) = (u32)(0x0u); }
  /* 00506608 lea esi, [edi + 0x188] */ esi = (u32)((u32)(edi + 0x188u));
  /* 0050660e call 0x5267c0 */ esp -= 4; M32(esp) = 0x506613u; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x50660eu); RETCHK(0x506613u, 0x50660eu); LOADALL;
  /* 00506613 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00506615 push 0x650b0c */ { u32 v_ = 0x650b0cu; esp -= 4; M32(esp) = v_; }
  /* 0050661a lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0050661d mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00506621 call 0x404420 */ esp -= 4; M32(esp) = 0x506626u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x506621u); RETCHK(0x506626u, 0x506621u); LOADALL;
  /* 00506626 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00506629 mov dword ptr [edi + 0x20c], 2 */ { const u32 m_ = (u32)(edi + 0x20cu); M32(m_) = (u32)(0x2u); }
  /* 00506633 mov byte ptr [edi + 0x3c], 1 */ { const u32 m_ = (u32)(edi + 0x3cu); M8(m_) = (u8)(0x1u); }
  /* 00506637 mov byte ptr [edi + 0x40], 0 */ { const u32 m_ = (u32)(edi + 0x40u); M8(m_) = (u8)(0x0u); }
  /* 0050663b mov eax, edi */ { eax = (u32)(edi); }
  /* 0050663d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050663e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00506645 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00506646 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00506648 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506649 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00506650(CPU *c) {
  NATIVE_HOOK(0x506650u) REGS; LOADALL;
L_00506650:;
  /* 00506650 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506651 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506653 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506654 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00506656 call 0x506680 */ esp -= 4; M32(esp) = 0x50665bu; SAVEALL; F_00506680(c); ABI_CHECK(0x506680u, 0x506656u); RETCHK(0x50665bu, 0x506656u); LOADALL;
  /* 0050665b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050665f je 0x50666a */ if (ZF_) goto L_0050666a;
  /* 00506661 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506662 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x506667u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x506662u); RETCHK(0x506667u, 0x506662u); LOADALL;
  /* 00506667 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050666a:;
  /* 0050666a mov eax, esi */ { eax = (u32)(esi); }
  /* 0050666c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050666d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050666e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00506680(CPU *c) {
  NATIVE_HOOK(0x506680u) REGS; LOADALL;
L_00506680:;
  /* 00506680 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506681 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00506683 lea ecx, [esi + 0x188] */ ecx = (u32)((u32)(esi + 0x188u));
  /* 00506689 mov dword ptr [esi], 0x650a20 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x650a20u); }
  /* 0050668f call 0x5267e0 */ esp -= 4; M32(esp) = 0x506694u; SAVEALL; F_005267e0(c); ABI_CHECK(0x5267e0u, 0x50668fu); RETCHK(0x506694u, 0x50668fu); LOADALL;
  /* 00506694 lea ecx, [esi + 0x180] */ ecx = (u32)((u32)(esi + 0x180u));
  /* 0050669a call 0x529300 */ esp -= 4; M32(esp) = 0x50669fu; SAVEALL; F_00529300(c); ABI_CHECK(0x529300u, 0x50669au); RETCHK(0x50669fu, 0x50669au); LOADALL;
  /* 0050669f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005066a1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005066a2 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_005066b0(CPU *c) {
  NATIVE_HOOK(0x5066b0u) REGS; LOADALL;
L_005066b0:;
  /* 005066b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005066b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005066b3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005066b6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005066b9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005066ba push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005066bc mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005066be push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005066c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005066c1 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 005066c4 call 0x404140 */ esp -= 4; M32(esp) = 0x5066c9u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5066c4u); RETCHK(0x5066c9u, 0x5066c4u); LOADALL;
  /* 005066c9 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005066cc lea ecx, [esi + 0x44] */ ecx = (u32)((u32)(esi + 0x44u));
  /* 005066cf lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 005066d2 call 0x52cee0 */ esp -= 4; M32(esp) = 0x5066d7u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x5066d2u); RETCHK(0x5066d7u, 0x5066d2u); LOADALL;
  /* 005066d7 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005066da push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005066dc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005066dd lea eax, [esi + 0x180] */ eax = (u32)((u32)(esi + 0x180u));
  /* 005066e3 call 0x529310 */ esp -= 4; M32(esp) = 0x5066e8u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x5066e3u); RETCHK(0x5066e8u, 0x5066e3u); LOADALL;
  /* 005066e8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005066ea jne 0x5066f3 */ if (!ZF_) goto L_005066f3;
  /* 005066ec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005066ed mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005066ef pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005066f0 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005066f3:;
  /* 005066f3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005066f5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005066f7 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005066fa call 0x52ce60 */ esp -= 4; M32(esp) = 0x5066ffu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x5066fau); RETCHK(0x5066ffu, 0x5066fau); LOADALL;
  /* 005066ff lea ecx, [esi + 0x21c] */ ecx = (u32)((u32)(esi + 0x21cu));
  /* 00506705 call 0x52ce90 */ esp -= 4; M32(esp) = 0x50670au; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x506705u); RETCHK(0x50670au, 0x506705u); LOADALL;
  /* 0050670a push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0050670f push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00506714 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00506717 call 0x52ce60 */ esp -= 4; M32(esp) = 0x50671cu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x506717u); RETCHK(0x50671cu, 0x506717u); LOADALL;
  /* 0050671c lea ecx, [esi + 0x224] */ ecx = (u32)((u32)(esi + 0x224u));
  /* 00506722 call 0x52ce90 */ esp -= 4; M32(esp) = 0x506727u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x506722u); RETCHK(0x506727u, 0x506722u); LOADALL;
  /* 00506727 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00506729 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050672a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050672c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050672d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00506730(CPU *c) {
  NATIVE_HOOK(0x506730u) REGS; LOADALL;
L_00506730:;
  /* 00506730 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506731 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506733 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00506736 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506737 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00506739 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0050673c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050673e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050673f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00506742 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00506743 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00506744 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00506746 call dword ptr [eax + 0xe8] */ { const u32 m_ = (u32)(eax + 0xe8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50674cu; SAVEALL; call_ind(c, t_); RETCHK(0x50674cu, 0x506746u); LOADALL; }
  /* 0050674c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050674e jne 0x506755 */ if (!ZF_) goto L_00506755;
  /* 00506750 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00506751 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506752 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
L_00506755:;
  /* 00506755 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00506758 lea ecx, [esi + 0x21c] */ ecx = (u32)((u32)(esi + 0x21cu));
  /* 0050675e call 0x52ce90 */ esp -= 4; M32(esp) = 0x506763u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x50675eu); RETCHK(0x506763u, 0x50675eu); LOADALL;
  /* 00506763 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00506766 lea ecx, [esi + 0x224] */ ecx = (u32)((u32)(esi + 0x224u));
  /* 0050676c call 0x52ce90 */ esp -= 4; M32(esp) = 0x506771u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x50676cu); RETCHK(0x506771u, 0x50676cu); LOADALL;
  /* 00506771 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00506773 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00506774 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506775 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_00506780(CPU *c) {
  NATIVE_HOOK(0x506780u) REGS; LOADALL;
L_00506780:;
  /* 00506780 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506781 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00506783 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00506785 call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x506788u; SAVEALL; call_ind(c, t_); RETCHK(0x506788u, 0x506785u); LOADALL; }
  /* 00506788 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050678a je 0x5067cc */ if (ZF_) goto L_005067cc;
  /* 0050678c mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050678e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00506790 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x506793u; SAVEALL; call_ind(c, t_); RETCHK(0x506793u, 0x506790u); LOADALL; }
  /* 00506793 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00506795 je 0x5067cc */ if (ZF_) goto L_005067cc;
  /* 00506797 call 0x5084b0 */ esp -= 4; M32(esp) = 0x50679cu; SAVEALL; F_005084b0(c); ABI_CHECK(0x5084b0u, 0x506797u); RETCHK(0x50679cu, 0x506797u); LOADALL;
  /* 0050679c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050679e je 0x5067cc */ if (ZF_) goto L_005067cc;
  /* 005067a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005067a1 call 0x508500 */ esp -= 4; M32(esp) = 0x5067a6u; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x5067a1u); RETCHK(0x5067a6u, 0x5067a1u); LOADALL;
  /* 005067a6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005067a8 je 0x5067ae */ if (ZF_) goto L_005067ae;
  /* 005067aa mov eax, esi */ { eax = (u32)(esi); }
  /* 005067ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005067ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005067ae:;
  /* 005067ae push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005067af call 0x518bb0 */ esp -= 4; M32(esp) = 0x5067b4u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x5067afu); RETCHK(0x5067b4u, 0x5067afu); LOADALL;
  /* 005067b4 call 0x5180e0 */ esp -= 4; M32(esp) = 0x5067b9u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x5067b4u); RETCHK(0x5067b9u, 0x5067b4u); LOADALL;
  /* 005067b9 mov edi, eax */ { edi = (u32)(eax); }
  /* 005067bb call 0x508d30 */ esp -= 4; M32(esp) = 0x5067c0u; SAVEALL; F_00508d30(c); ABI_CHECK(0x508d30u, 0x5067bbu); RETCHK(0x5067c0u, 0x5067bbu); LOADALL;
  /* 005067c0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005067c2 call 0x507ac0 */ esp -= 4; M32(esp) = 0x5067c7u; SAVEALL; F_00507ac0(c); ABI_CHECK(0x507ac0u, 0x5067c2u); RETCHK(0x5067c7u, 0x5067c2u); LOADALL;
  /* 005067c7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005067c8 mov eax, esi */ { eax = (u32)(esi); }
  /* 005067ca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005067cb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005067cc:;
  /* 005067cc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005067ce pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005067cf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005067d0(CPU *c) {
  NATIVE_HOOK(0x5067d0u) REGS; LOADALL;
L_005067d0:;
  /* 005067d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005067d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005067d3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005067d6 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005067d8 mov dword ptr [ecx + 0x44], edx */ { const u32 m_ = (u32)(ecx + 0x44u); M32(m_) = (u32)(edx); }
  /* 005067db mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 005067de mov dword ptr [ecx + 0x48], eax */ { const u32 m_ = (u32)(ecx + 0x48u); M32(m_) = (u32)(eax); }
  /* 005067e1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005067e2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005067f0(CPU *c) {
  NATIVE_HOOK(0x5067f0u) REGS; LOADALL;
L_005067f0:;
  /* 005067f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005067f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005067f3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005067f4 jmp 0x507f80 */ SAVEALL; F_00507f80(c); return;
}

void F_00506800(CPU *c) {
  NATIVE_HOOK(0x506800u) REGS; LOADALL;
L_00506800:;
  /* 00506800 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506801 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506803 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506804 jmp 0x508030 */ SAVEALL; F_00508030(c); return;
}

void F_00506810(CPU *c) {
  NATIVE_HOOK(0x506810u) REGS; LOADALL;
L_00506810:;
  /* 00506810 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506811 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506813 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506814 jmp 0x5080a0 */ SAVEALL; F_005080a0(c); return;
}

void F_00506820(CPU *c) {
  NATIVE_HOOK(0x506820u) REGS; LOADALL;
L_00506820:;
  /* 00506820 jmp 0x507dd0 */ SAVEALL; F_00507dd0(c); return;
}

void F_00506830(CPU *c) {
  NATIVE_HOOK(0x506830u) REGS; LOADALL;
L_00506830:;
  /* 00506830 jmp 0x507e90 */ SAVEALL; F_00507e90(c); return;
}

void F_00506840(CPU *c) {
  NATIVE_HOOK(0x506840u) REGS; LOADALL;
L_00506840:;
  /* 00506840 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506841 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506843 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00506845 push 0x624328 */ { u32 v_ = 0x624328u; esp -= 4; M32(esp) = v_; }
  /* 0050684a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00506850 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506851 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00506858 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050685b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050685c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0050685e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00506861 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00506863 jne 0x506878 */ if (!ZF_) goto L_00506878;
  /* 00506865 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00506867 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00506868 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050686b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00506872 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00506874 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506875 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00506878:;
  /* 00506878 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050687a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050687b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050687c call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50687fu; SAVEALL; call_ind(c, t_); RETCHK(0x50687fu, 0x50687cu); LOADALL; }
  /* 0050687f push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 00506884 mov edi, eax */ { edi = (u32)(eax); }
  /* 00506886 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50688bu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x506886u); RETCHK(0x50688bu, 0x506886u); LOADALL;
  /* 0050688b mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050688e fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00506891 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 00506896 mov eax, edi */ { eax = (u32)(edi); }
  /* 00506898 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050689b call 0x560fd0 */ esp -= 4; M32(esp) = 0x5068a0u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50689bu); RETCHK(0x5068a0u, 0x50689bu); LOADALL;
  /* 005068a0 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005068a3 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005068a6 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 005068ab mov eax, edi */ { eax = (u32)(edi); }
  /* 005068ad fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005068b0 call 0x560fd0 */ esp -= 4; M32(esp) = 0x5068b5u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5068b0u); RETCHK(0x5068b5u, 0x5068b0u); LOADALL;
  /* 005068b5 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005068b8 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005068bb push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 005068c0 mov eax, edi */ { eax = (u32)(edi); }
  /* 005068c2 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005068c5 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005068c8 call 0x560fd0 */ esp -= 4; M32(esp) = 0x5068cdu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5068c8u); RETCHK(0x5068cdu, 0x5068c8u); LOADALL;
  /* 005068cd mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005068d0 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005068d3 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 005068d6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005068d8 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005068db fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005068de je 0x5068ec */ if (ZF_) goto L_005068ec;
  /* 005068e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005068e1 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 005068e4 call 0x52d060 */ esp -= 4; M32(esp) = 0x5068e9u; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x5068e4u); RETCHK(0x5068e9u, 0x5068e4u); LOADALL;
  /* 005068e9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005068ec:;
  /* 005068ec push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005068ed mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 005068f2 call 0x560ed0 */ esp -= 4; M32(esp) = 0x5068f7u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5068f2u); RETCHK(0x5068f7u, 0x5068f2u); LOADALL;
  /* 005068f7 mov esi, eax */ { esi = (u32)(eax); }
  /* 005068f9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005068fb mov dword ptr [ebp - 0x20], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xfu); }
  /* 00506902 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 00506909 mov byte ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)(0x0u); }
  /* 0050690d lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
L_00506910:;
  /* 00506910 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00506912 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00506913 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00506915 jne 0x506910 */ if (!ZF_) goto L_00506910;
  /* 00506917 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00506919 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050691a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050691b lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0050691e call 0x404420 */ esp -= 4; M32(esp) = 0x506923u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50691eu); RETCHK(0x506923u, 0x50691eu); LOADALL;
  /* 00506923 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050692a mov esi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); esi = (u32)(M32(m_)); }
  /* 0050692c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050692d mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 00506932 call 0x560ed0 */ esp -= 4; M32(esp) = 0x506937u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x506932u); RETCHK(0x506937u, 0x506932u); LOADALL;
  /* 00506937 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506938 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050693b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050693c lea edx, [ebp - 0x38] */ edx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0050693f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00506940 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00506942 call dword ptr [esi + 0xe8] */ { const u32 m_ = (u32)(esi + 0xe8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x506948u; SAVEALL; call_ind(c, t_); RETCHK(0x506948u, 0x506942u); LOADALL; }
  /* 00506948 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0050694a cmp dword ptr [ebp - 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050694e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050694f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00506950 jb 0x50695e */ if (CF_) goto L_0050695e;
  /* 00506952 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00506955 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506956 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50695bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x506956u); RETCHK(0x50695bu, 0x506956u); LOADALL;
  /* 0050695b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050695e:;
  /* 0050695e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00506961 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 00506963 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00506964 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050696b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050696d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050696e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00506980(CPU *c) {
  NATIVE_HOOK(0x506980u) REGS; LOADALL;
L_00506980:;
  /* 00506980 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506981 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506983 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00506986 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506987 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00506988 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0050698a lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 0050698d lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00506990 call 0x52cea0 */ esp -= 4; M32(esp) = 0x506995u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x506990u); RETCHK(0x506995u, 0x506990u); LOADALL;
  /* 00506995 mov eax, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00506998 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506999 lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0050699c call 0x52cf90 */ esp -= 4; M32(esp) = 0x5069a1u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x50699cu); RETCHK(0x5069a1u, 0x50699cu); LOADALL;
  /* 005069a1 mov eax, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); eax = (u32)(M32(m_)); }
  /* 005069a7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005069aa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005069ac je 0x506a00 */ if (ZF_) goto L_00506a00;
  /* 005069ae lea ecx, [edi + 0x188] */ ecx = (u32)((u32)(edi + 0x188u));
  /* 005069b4 lea eax, [edi + 0x180] */ eax = (u32)((u32)(edi + 0x180u));
  /* 005069ba call 0x5267f0 */ esp -= 4; M32(esp) = 0x5069bfu; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x5069bau); RETCHK(0x5069bfu, 0x5069bau); LOADALL;
  /* 005069bf mov eax, 0xffffff */ { eax = (u32)(0xffffffu); }
  /* 005069c4 mov dword ptr [edi + 0x1a4], eax */ { const u32 m_ = (u32)(edi + 0x1a4u); M32(m_) = (u32)(eax); }
  /* 005069ca mov dword ptr [edi + 0x1c0], eax */ { const u32 m_ = (u32)(edi + 0x1c0u); M32(m_) = (u32)(eax); }
  /* 005069d0 mov dword ptr [edi + 0x1dc], eax */ { const u32 m_ = (u32)(edi + 0x1dcu); M32(m_) = (u32)(eax); }
  /* 005069d6 mov dword ptr [edi + 0x1f8], eax */ { const u32 m_ = (u32)(edi + 0x1f8u); M32(m_) = (u32)(eax); }
  /* 005069dc mov edx, dword ptr [edi + 0x228] */ { const u32 m_ = (u32)(edi + 0x228u); edx = (u32)(M32(m_)); }
  /* 005069e2 mov eax, dword ptr [edi + 0x224] */ { const u32 m_ = (u32)(edi + 0x224u); eax = (u32)(M32(m_)); }
  /* 005069e8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005069e9 mov edx, dword ptr [edi + 0x220] */ { const u32 m_ = (u32)(edi + 0x220u); edx = (u32)(M32(m_)); }
  /* 005069ef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005069f0 mov eax, dword ptr [edi + 0x21c] */ { const u32 m_ = (u32)(edi + 0x21cu); eax = (u32)(M32(m_)); }
  /* 005069f6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005069f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005069f8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005069f9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005069fb call 0x5050e0 */ esp -= 4; M32(esp) = 0x506a00u; SAVEALL; F_005050e0(c); ABI_CHECK(0x5050e0u, 0x5069fbu); RETCHK(0x506a00u, 0x5069fbu); LOADALL;
L_00506a00:;
  /* 00506a00 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00506a01 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00506a02 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00506a04 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506a05 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00506a10(CPU *c) {
  NATIVE_HOOK(0x506a10u) REGS; LOADALL;
L_00506a10:;
  /* 00506a10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506a11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506a13 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506a14 jmp 0x508630 */ SAVEALL; F_00508630(c); return;
}

void F_00506a20(CPU *c) {
  NATIVE_HOOK(0x506a20u) REGS; LOADALL;
L_00506a20:;
  /* 00506a20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506a21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506a23 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00506a26 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00506a29 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 00506a2c mov ecx, dword ptr [ecx + 0x5c] */ { const u32 m_ = (u32)(ecx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00506a2f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00506a31 mov dword ptr [ebp - 0x18], 0x17 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x17u); }
  /* 00506a38 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00506a3b je 0x506a45 */ if (ZF_) goto L_00506a45;
  /* 00506a3d lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00506a40 call 0x508540 */ esp -= 4; M32(esp) = 0x506a45u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x506a40u); RETCHK(0x506a45u, 0x506a40u); LOADALL;
L_00506a45:;
  /* 00506a45 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00506a47 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506a48 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00506a50(CPU *c) {
  NATIVE_HOOK(0x506a50u) REGS; LOADALL;
L_00506a50:;
  /* 00506a50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506a51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506a53 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00506a56 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00506a59 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 00506a5c mov ecx, dword ptr [ecx + 0x5c] */ { const u32 m_ = (u32)(ecx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00506a5f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00506a61 mov dword ptr [ebp - 0x18], 0x18 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x18u); }
  /* 00506a68 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00506a6b je 0x506a75 */ if (ZF_) goto L_00506a75;
  /* 00506a6d lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00506a70 call 0x508540 */ esp -= 4; M32(esp) = 0x506a75u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x506a70u); RETCHK(0x506a75u, 0x506a70u); LOADALL;
L_00506a75:;
  /* 00506a75 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00506a77 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506a78 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00506a80(CPU *c) {
  NATIVE_HOOK(0x506a80u) REGS; LOADALL;
L_00506a80:;
  /* 00506a80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506a81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506a83 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00506a85 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 00506a8a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00506a90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506a91 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00506a98 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00506a99 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00506a9a push 0x506b00 */ { u32 v_ = 0x506b00u; esp -= 4; M32(esp) = v_; }
  /* 00506a9f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00506aa2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00506aa4 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00506aa6 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00506aa9 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00506aac push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00506aae push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00506aaf lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00506ab2 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00506ab9 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00506abc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506abd mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506ac0 call 0x404140 */ esp -= 4; M32(esp) = 0x506ac5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x506ac0u); RETCHK(0x506ac5u, 0x506ac0u); LOADALL;
  /* 00506ac5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506ac8 call 0x405c00 */ esp -= 4; M32(esp) = 0x506acdu; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x506ac8u); RETCHK(0x506acdu, 0x506ac8u); LOADALL;
  /* 00506acd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00506acf call 0x405c80 */ esp -= 4; M32(esp) = 0x506ad4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x506acfu); RETCHK(0x506ad4u, 0x506acfu); LOADALL;
  /* 00506ad4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00506ad8 jb 0x506ae6 */ if (CF_) goto L_00506ae6;
  /* 00506ada mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00506add push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00506ade call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x506ae3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x506adeu); RETCHK(0x506ae3u, 0x506adeu); LOADALL;
  /* 00506ae3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00506ae6:;
  /* 00506ae6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00506ae9 mov eax, esi */ { eax = (u32)(esi); }
  /* 00506aeb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00506af2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00506af3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00506af5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506af6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00506b00(CPU *c) {
  NATIVE_HOOK(0x506b00u) REGS; LOADALL;
L_00506b00:;
  /* 00506b00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506b01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506b03 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00506b05 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 00506b0a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00506b10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506b11 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00506b18 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00506b19 push 0x22c */ { u32 v_ = 0x22cu; esp -= 4; M32(esp) = v_; }
  /* 00506b1e call 0x5fe934 */ esp -= 4; M32(esp) = 0x506b23u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x506b1eu); RETCHK(0x506b23u, 0x506b1eu); LOADALL;
  /* 00506b23 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00506b26 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00506b29 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00506b2b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00506b32 je 0x506b4a */ if (ZF_) goto L_00506b4a;
  /* 00506b34 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00506b36 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506b37 call 0x5065c0 */ esp -= 4; M32(esp) = 0x506b3cu; SAVEALL; F_005065c0(c); ABI_CHECK(0x5065c0u, 0x506b37u); RETCHK(0x506b3cu, 0x506b37u); LOADALL;
  /* 00506b3c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00506b3f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00506b46 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00506b48 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506b49 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00506b4a:;
  /* 00506b4a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00506b4d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00506b4f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00506b56 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00506b58 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506b59 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00506b60(CPU *c) {
  NATIVE_HOOK(0x506b60u) REGS; LOADALL;
L_00506b60:;
  /* 00506b60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506b61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506b63 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00506b65 push 0x61c8fb */ { u32 v_ = 0x61c8fbu; esp -= 4; M32(esp) = v_; }
  /* 00506b6a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00506b70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506b71 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00506b78 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00506b7b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00506b7c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506b7d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00506b80 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00506b81 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00506b84 mov dword ptr [esi], 0x650b18 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x650b18u); }
  /* 00506b8a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00506b8c push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00506b8e mov edi, 0xf */ { edi = (u32)(0xfu); }
  /* 00506b93 mov dword ptr [ecx + 0x18], edi */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(edi); }
  /* 00506b96 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00506b99 push 0x650c4c */ { u32 v_ = 0x650c4cu; esp -= 4; M32(esp) = v_; }
  /* 00506b9e mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506ba1 call 0x404420 */ esp -= 4; M32(esp) = 0x506ba6u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x506ba1u); RETCHK(0x506ba6u, 0x506ba1u); LOADALL;
  /* 00506ba6 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00506ba9 mov dword ptr [esi + 0x38], edi */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(edi); }
  /* 00506bac mov dword ptr [esi + 0x34], ebx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ebx); }
  /* 00506baf mov byte ptr [esi + 0x24], bl */ { const u32 m_ = (u32)(esi + 0x24u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506bb2 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00506bb6 call 0x54c480 */ esp -= 4; M32(esp) = 0x506bbbu; SAVEALL; F_0054c480(c); ABI_CHECK(0x54c480u, 0x506bb6u); RETCHK(0x506bbbu, 0x506bb6u); LOADALL;
  /* 00506bbb mov dword ptr [esi + 0x64], eax */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(eax); }
  /* 00506bbe mov dword ptr [esi + 0x68], ebx */ { const u32 m_ = (u32)(esi + 0x68u); M32(m_) = (u32)(ebx); }
  /* 00506bc1 mov dword ptr [esi + 0x74], ebx */ { const u32 m_ = (u32)(esi + 0x74u); M32(m_) = (u32)(ebx); }
  /* 00506bc4 mov dword ptr [esi + 0x78], ebx */ { const u32 m_ = (u32)(esi + 0x78u); M32(m_) = (u32)(ebx); }
  /* 00506bc7 mov dword ptr [esi + 0x7c], ebx */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(ebx); }
  /* 00506bca mov dword ptr [esi + 0x80], ebx */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(ebx); }
  /* 00506bd0 lea eax, [esi + 0x90] */ eax = (u32)((u32)(esi + 0x90u));
  /* 00506bd6 call 0x522d90 */ esp -= 4; M32(esp) = 0x506bdbu; SAVEALL; F_00522d90(c); ABI_CHECK(0x522d90u, 0x506bd6u); RETCHK(0x506bdbu, 0x506bd6u); LOADALL;
  /* 00506bdb mov dword ptr [esi + 0xcc], edi */ { const u32 m_ = (u32)(esi + 0xccu); M32(m_) = (u32)(edi); }
  /* 00506be1 mov dword ptr [esi + 0xc8], ebx */ { const u32 m_ = (u32)(esi + 0xc8u); M32(m_) = (u32)(ebx); }
  /* 00506be7 mov byte ptr [esi + 0xb8], bl */ { const u32 m_ = (u32)(esi + 0xb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506bed mov dword ptr [esi + 0xe8], edi */ { const u32 m_ = (u32)(esi + 0xe8u); M32(m_) = (u32)(edi); }
  /* 00506bf3 mov dword ptr [esi + 0xe4], ebx */ { const u32 m_ = (u32)(esi + 0xe4u); M32(m_) = (u32)(ebx); }
  /* 00506bf9 mov byte ptr [esi + 0xd4], bl */ { const u32 m_ = (u32)(esi + 0xd4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506bff mov dword ptr [esi + 0x104], edi */ { const u32 m_ = (u32)(esi + 0x104u); M32(m_) = (u32)(edi); }
  /* 00506c05 mov dword ptr [esi + 0x100], ebx */ { const u32 m_ = (u32)(esi + 0x100u); M32(m_) = (u32)(ebx); }
  /* 00506c0b mov byte ptr [esi + 0xf0], bl */ { const u32 m_ = (u32)(esi + 0xf0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506c11 mov dword ptr [esi + 0x120], edi */ { const u32 m_ = (u32)(esi + 0x120u); M32(m_) = (u32)(edi); }
  /* 00506c17 mov dword ptr [esi + 0x11c], ebx */ { const u32 m_ = (u32)(esi + 0x11cu); M32(m_) = (u32)(ebx); }
  /* 00506c1d mov byte ptr [esi + 0x10c], bl */ { const u32 m_ = (u32)(esi + 0x10cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506c23 mov dword ptr [esi + 0x13c], edi */ { const u32 m_ = (u32)(esi + 0x13cu); M32(m_) = (u32)(edi); }
  /* 00506c29 mov dword ptr [esi + 0x138], ebx */ { const u32 m_ = (u32)(esi + 0x138u); M32(m_) = (u32)(ebx); }
  /* 00506c2f mov byte ptr [esi + 0x128], bl */ { const u32 m_ = (u32)(esi + 0x128u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506c35 mov dword ptr [esi + 0x158], edi */ { const u32 m_ = (u32)(esi + 0x158u); M32(m_) = (u32)(edi); }
  /* 00506c3b mov dword ptr [esi + 0x154], ebx */ { const u32 m_ = (u32)(esi + 0x154u); M32(m_) = (u32)(ebx); }
  /* 00506c41 mov byte ptr [esi + 0x144], bl */ { const u32 m_ = (u32)(esi + 0x144u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506c47 mov dword ptr [esi + 0x174], edi */ { const u32 m_ = (u32)(esi + 0x174u); M32(m_) = (u32)(edi); }
  /* 00506c4d mov dword ptr [esi + 0x170], ebx */ { const u32 m_ = (u32)(esi + 0x170u); M32(m_) = (u32)(ebx); }
  /* 00506c53 mov byte ptr [esi + 0x160], bl */ { const u32 m_ = (u32)(esi + 0x160u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506c59 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00506c5a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00506c5b mov byte ptr [ebp - 4], 0xb */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xbu); }
  /* 00506c5f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00506c60 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00506c61 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00506c64 mov byte ptr [esi + 0x3d], 1 */ { const u32 m_ = (u32)(esi + 0x3du); M8(m_) = (u8)(0x1u); }
  /* 00506c68 mov byte ptr [esi + 0x3c], 1 */ { const u32 m_ = (u32)(esi + 0x3cu); M8(m_) = (u8)(0x1u); }
  /* 00506c6c mov byte ptr [esi + 0x3f], 1 */ { const u32 m_ = (u32)(esi + 0x3fu); M8(m_) = (u8)(0x1u); }
  /* 00506c70 mov byte ptr [esi + 0x3e], 1 */ { const u32 m_ = (u32)(esi + 0x3eu); M8(m_) = (u8)(0x1u); }
  /* 00506c74 mov dword ptr [esi + 0x58], ebx */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(ebx); }
  /* 00506c77 call 0x52cec0 */ esp -= 4; M32(esp) = 0x506c7cu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x506c77u); RETCHK(0x506c7cu, 0x506c77u); LOADALL;
  /* 00506c7c mov edx, eax */ { edx = (u32)(eax); }
  /* 00506c7e lea ecx, [esi + 0x44] */ ecx = (u32)((u32)(esi + 0x44u));
  /* 00506c81 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00506c84 call 0x52cee0 */ esp -= 4; M32(esp) = 0x506c89u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x506c84u); RETCHK(0x506c89u, 0x506c84u); LOADALL;
  /* 00506c89 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00506c8c mov byte ptr [esi + 0x40], bl */ { const u32 m_ = (u32)(esi + 0x40u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506c8f mov dword ptr [esi + 0x5c], ebx */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(ebx); }
  /* 00506c92 mov dword ptr [esi + 0x6c], ebx */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(ebx); }
  /* 00506c95 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506c96 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00506c98 call 0x5078a0 */ esp -= 4; M32(esp) = 0x506c9du; SAVEALL; F_005078a0(c); ABI_CHECK(0x5078a0u, 0x506c98u); RETCHK(0x506c9du, 0x506c98u); LOADALL;
  /* 00506c9d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00506ca0 mov byte ptr [esi + 0x178], bl */ { const u32 m_ = (u32)(esi + 0x178u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506ca6 mov dword ptr [esi + 0x17c], ebx */ { const u32 m_ = (u32)(esi + 0x17cu); M32(m_) = (u32)(ebx); }
  /* 00506cac mov dword ptr [esi + 0x88], ebx */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(ebx); }
  /* 00506cb2 mov dword ptr [esi + 0x84], ebx */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(ebx); }
  /* 00506cb8 mov dword ptr [esi + 0x8c], ebx */ { const u32 m_ = (u32)(esi + 0x8cu); M32(m_) = (u32)(ebx); }
  /* 00506cbe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00506cbf mov eax, esi */ { eax = (u32)(esi); }
  /* 00506cc1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00506cc2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00506cc3 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00506cca mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00506ccc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506ccd ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00506cd0(CPU *c) {
  NATIVE_HOOK(0x506cd0u) REGS; LOADALL;
L_00506cd0:;
  /* 00506cd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506cd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506cd3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506cd4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00506cd6 call 0x506d00 */ esp -= 4; M32(esp) = 0x506cdbu; SAVEALL; F_00506d00(c); ABI_CHECK(0x506d00u, 0x506cd6u); RETCHK(0x506cdbu, 0x506cd6u); LOADALL;
  /* 00506cdb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00506cdf je 0x506cea */ if (ZF_) goto L_00506cea;
  /* 00506ce1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506ce2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x506ce7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x506ce2u); RETCHK(0x506ce7u, 0x506ce2u); LOADALL;
  /* 00506ce7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00506cea:;
  /* 00506cea mov eax, esi */ { eax = (u32)(esi); }
  /* 00506cec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00506ced pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506cee ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00506d00(CPU *c) {
  NATIVE_HOOK(0x506d00u) REGS; LOADALL;
L_00506d00:;
  /* 00506d00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506d01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506d03 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00506d05 push 0x61bc2b */ { u32 v_ = 0x61bc2bu; esp -= 4; M32(esp) = v_; }
  /* 00506d0a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00506d10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506d11 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00506d18 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00506d1b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00506d1c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00506d1d mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00506d1f mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 00506d22 mov dword ptr [edi], 0x650b18 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x650b18u); }
  /* 00506d28 mov dword ptr [ebp - 4], 0xb */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xbu); }
  /* 00506d2f mov eax, dword ptr [0x7a6d34] */ { const u32 m_ = (u32)(0x7a6d34u); eax = (u32)(M32(m_)); }
  /* 00506d34 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00506d36 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00506d38 jne 0x506d40 */ if (!ZF_) goto L_00506d40;
  /* 00506d3a mov dword ptr [0x7a6d3c], ebx */ { const u32 m_ = (u32)(0x7a6d3cu); M32(m_) = (u32)(ebx); }
L_00506d40:;
  /* 00506d40 cmp dword ptr [edi + 0x88], ebx */ { const u32 m_ = (u32)(edi + 0x88u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00506d46 je 0x506d53 */ if (ZF_) goto L_00506d53;
  /* 00506d48 lea ecx, [edi + 0x90] */ ecx = (u32)((u32)(edi + 0x90u));
  /* 00506d4e call 0x523340 */ esp -= 4; M32(esp) = 0x506d53u; SAVEALL; F_00523340(c); ABI_CHECK(0x523340u, 0x506d4eu); RETCHK(0x506d53u, 0x506d4eu); LOADALL;
L_00506d53:;
  /* 00506d53 mov eax, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); eax = (u32)(M32(m_)); }
  /* 00506d56 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506d57 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00506d59 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00506d5b mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00506d5e je 0x506d79 */ if (ZF_) goto L_00506d79;
L_00506d60:;
  /* 00506d60 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00506d63 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00506d65 je 0x506d73 */ if (ZF_) goto L_00506d73;
  /* 00506d67 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00506d69 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00506d6b call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x506d6du; SAVEALL; call_ind(c, t_); RETCHK(0x506d6du, 0x506d6bu); LOADALL; }
  /* 00506d6d mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00506d70 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
L_00506d73:;
  /* 00506d73 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 00506d75 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00506d77 jne 0x506d60 */ if (!ZF_) goto L_00506d60;
L_00506d79:;
  /* 00506d79 lea esi, [edi + 0x60] */ esi = (u32)((u32)(edi + 0x60u));
  /* 00506d7c call 0x529410 */ esp -= 4; M32(esp) = 0x506d81u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x506d7cu); RETCHK(0x506d81u, 0x506d7cu); LOADALL;
  /* 00506d81 cmp dword ptr [edi + 0x174], 0x10 */ { const u32 m_ = (u32)(edi + 0x174u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00506d88 jb 0x506d99 */ if (CF_) goto L_00506d99;
  /* 00506d8a mov ecx, dword ptr [edi + 0x160] */ { const u32 m_ = (u32)(edi + 0x160u); ecx = (u32)(M32(m_)); }
  /* 00506d90 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00506d91 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x506d96u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x506d91u); RETCHK(0x506d96u, 0x506d91u); LOADALL;
  /* 00506d96 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00506d99:;
  /* 00506d99 mov esi, 0xf */ { esi = (u32)(0xfu); }
  /* 00506d9e mov dword ptr [edi + 0x174], esi */ { const u32 m_ = (u32)(edi + 0x174u); M32(m_) = (u32)(esi); }
  /* 00506da4 mov dword ptr [edi + 0x170], ebx */ { const u32 m_ = (u32)(edi + 0x170u); M32(m_) = (u32)(ebx); }
  /* 00506daa mov byte ptr [edi + 0x160], bl */ { const u32 m_ = (u32)(edi + 0x160u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506db0 cmp dword ptr [edi + 0x158], 0x10 */ { const u32 m_ = (u32)(edi + 0x158u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00506db7 jb 0x506dc8 */ if (CF_) goto L_00506dc8;
  /* 00506db9 mov edx, dword ptr [edi + 0x144] */ { const u32 m_ = (u32)(edi + 0x144u); edx = (u32)(M32(m_)); }
  /* 00506dbf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00506dc0 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x506dc5u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x506dc0u); RETCHK(0x506dc5u, 0x506dc0u); LOADALL;
  /* 00506dc5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00506dc8:;
  /* 00506dc8 mov dword ptr [edi + 0x158], esi */ { const u32 m_ = (u32)(edi + 0x158u); M32(m_) = (u32)(esi); }
  /* 00506dce mov dword ptr [edi + 0x154], ebx */ { const u32 m_ = (u32)(edi + 0x154u); M32(m_) = (u32)(ebx); }
  /* 00506dd4 mov byte ptr [edi + 0x144], bl */ { const u32 m_ = (u32)(edi + 0x144u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506dda cmp dword ptr [edi + 0x13c], 0x10 */ { const u32 m_ = (u32)(edi + 0x13cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00506de1 jb 0x506df2 */ if (CF_) goto L_00506df2;
  /* 00506de3 mov eax, dword ptr [edi + 0x128] */ { const u32 m_ = (u32)(edi + 0x128u); eax = (u32)(M32(m_)); }
  /* 00506de9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506dea call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x506defu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x506deau); RETCHK(0x506defu, 0x506deau); LOADALL;
  /* 00506def add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00506df2:;
  /* 00506df2 mov dword ptr [edi + 0x13c], esi */ { const u32 m_ = (u32)(edi + 0x13cu); M32(m_) = (u32)(esi); }
  /* 00506df8 mov dword ptr [edi + 0x138], ebx */ { const u32 m_ = (u32)(edi + 0x138u); M32(m_) = (u32)(ebx); }
  /* 00506dfe mov byte ptr [edi + 0x128], bl */ { const u32 m_ = (u32)(edi + 0x128u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506e04 cmp dword ptr [edi + 0x120], 0x10 */ { const u32 m_ = (u32)(edi + 0x120u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00506e0b jb 0x506e1c */ if (CF_) goto L_00506e1c;
  /* 00506e0d mov ecx, dword ptr [edi + 0x10c] */ { const u32 m_ = (u32)(edi + 0x10cu); ecx = (u32)(M32(m_)); }
  /* 00506e13 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00506e14 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x506e19u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x506e14u); RETCHK(0x506e19u, 0x506e14u); LOADALL;
  /* 00506e19 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00506e1c:;
  /* 00506e1c mov dword ptr [edi + 0x120], esi */ { const u32 m_ = (u32)(edi + 0x120u); M32(m_) = (u32)(esi); }
  /* 00506e22 mov dword ptr [edi + 0x11c], ebx */ { const u32 m_ = (u32)(edi + 0x11cu); M32(m_) = (u32)(ebx); }
  /* 00506e28 mov byte ptr [edi + 0x10c], bl */ { const u32 m_ = (u32)(edi + 0x10cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506e2e cmp dword ptr [edi + 0x104], 0x10 */ { const u32 m_ = (u32)(edi + 0x104u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00506e35 jb 0x506e46 */ if (CF_) goto L_00506e46;
  /* 00506e37 mov edx, dword ptr [edi + 0xf0] */ { const u32 m_ = (u32)(edi + 0xf0u); edx = (u32)(M32(m_)); }
  /* 00506e3d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00506e3e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x506e43u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x506e3eu); RETCHK(0x506e43u, 0x506e3eu); LOADALL;
  /* 00506e43 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00506e46:;
  /* 00506e46 mov dword ptr [edi + 0x104], esi */ { const u32 m_ = (u32)(edi + 0x104u); M32(m_) = (u32)(esi); }
  /* 00506e4c mov dword ptr [edi + 0x100], ebx */ { const u32 m_ = (u32)(edi + 0x100u); M32(m_) = (u32)(ebx); }
  /* 00506e52 mov byte ptr [edi + 0xf0], bl */ { const u32 m_ = (u32)(edi + 0xf0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506e58 cmp dword ptr [edi + 0xe8], 0x10 */ { const u32 m_ = (u32)(edi + 0xe8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00506e5f jb 0x506e70 */ if (CF_) goto L_00506e70;
  /* 00506e61 mov eax, dword ptr [edi + 0xd4] */ { const u32 m_ = (u32)(edi + 0xd4u); eax = (u32)(M32(m_)); }
  /* 00506e67 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506e68 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x506e6du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x506e68u); RETCHK(0x506e6du, 0x506e68u); LOADALL;
  /* 00506e6d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00506e70:;
  /* 00506e70 mov dword ptr [edi + 0xe8], esi */ { const u32 m_ = (u32)(edi + 0xe8u); M32(m_) = (u32)(esi); }
  /* 00506e76 mov dword ptr [edi + 0xe4], ebx */ { const u32 m_ = (u32)(edi + 0xe4u); M32(m_) = (u32)(ebx); }
  /* 00506e7c mov byte ptr [edi + 0xd4], bl */ { const u32 m_ = (u32)(edi + 0xd4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506e82 cmp dword ptr [edi + 0xcc], 0x10 */ { const u32 m_ = (u32)(edi + 0xccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00506e89 jb 0x506e9a */ if (CF_) goto L_00506e9a;
  /* 00506e8b mov ecx, dword ptr [edi + 0xb8] */ { const u32 m_ = (u32)(edi + 0xb8u); ecx = (u32)(M32(m_)); }
  /* 00506e91 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00506e92 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x506e97u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x506e92u); RETCHK(0x506e97u, 0x506e92u); LOADALL;
  /* 00506e97 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00506e9a:;
  /* 00506e9a mov dword ptr [edi + 0xcc], esi */ { const u32 m_ = (u32)(edi + 0xccu); M32(m_) = (u32)(esi); }
  /* 00506ea0 mov dword ptr [edi + 0xc8], ebx */ { const u32 m_ = (u32)(edi + 0xc8u); M32(m_) = (u32)(ebx); }
  /* 00506ea6 lea eax, [edi + 0x90] */ eax = (u32)((u32)(edi + 0x90u));
  /* 00506eac mov byte ptr [edi + 0xb8], bl */ { const u32 m_ = (u32)(edi + 0xb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506eb2 call 0x522fb0 */ esp -= 4; M32(esp) = 0x506eb7u; SAVEALL; F_00522fb0(c); ABI_CHECK(0x522fb0u, 0x506eb2u); RETCHK(0x506eb7u, 0x506eb2u); LOADALL;
  /* 00506eb7 lea esi, [edi + 0x70] */ esi = (u32)((u32)(edi + 0x70u));
  /* 00506eba call 0x531490 */ esp -= 4; M32(esp) = 0x506ebfu; SAVEALL; F_00531490(c); ABI_CHECK(0x531490u, 0x506ebau); RETCHK(0x506ebfu, 0x506ebau); LOADALL;
  /* 00506ebf lea esi, [edi + 0x60] */ esi = (u32)((u32)(edi + 0x60u));
  /* 00506ec2 call 0x529410 */ esp -= 4; M32(esp) = 0x506ec7u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x506ec2u); RETCHK(0x506ec7u, 0x506ec2u); LOADALL;
  /* 00506ec7 mov edx, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); edx = (u32)(M32(m_)); }
  /* 00506eca push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00506ecb call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x506ed0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x506ecbu); RETCHK(0x506ed0u, 0x506ecbu); LOADALL;
  /* 00506ed0 mov dword ptr [edi + 0x64], ebx */ { const u32 m_ = (u32)(edi + 0x64u); M32(m_) = (u32)(ebx); }
  /* 00506ed3 mov eax, dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); eax = (u32)(M32(m_)); }
  /* 00506ed6 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 00506edb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00506ede cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00506ee0 jb 0x506eee */ if (CF_) goto L_00506eee;
  /* 00506ee2 mov eax, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); eax = (u32)(M32(m_)); }
  /* 00506ee5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506ee6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x506eebu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x506ee6u); RETCHK(0x506eebu, 0x506ee6u); LOADALL;
  /* 00506eeb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00506eee:;
  /* 00506eee mov dword ptr [edi + 0x38], 0xf */ { const u32 m_ = (u32)(edi + 0x38u); M32(m_) = (u32)(0xfu); }
  /* 00506ef5 mov dword ptr [edi + 0x34], ebx */ { const u32 m_ = (u32)(edi + 0x34u); M32(m_) = (u32)(ebx); }
  /* 00506ef8 mov byte ptr [edi + 0x24], bl */ { const u32 m_ = (u32)(edi + 0x24u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506efb cmp dword ptr [edi + 0x1c], esi */ { const u32 m_ = (u32)(edi + 0x1cu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00506efe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00506eff jb 0x506f0d */ if (CF_) goto L_00506f0d;
  /* 00506f01 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00506f04 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00506f05 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x506f0au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x506f05u); RETCHK(0x506f0au, 0x506f05u); LOADALL;
  /* 00506f0a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00506f0d:;
  /* 00506f0d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00506f10 mov dword ptr [edi + 0x18], ebx */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 00506f13 mov dword ptr [edi + 0x1c], 0xf */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(0xfu); }
  /* 00506f1a mov byte ptr [edi + 8], bl */ { const u32 m_ = (u32)(edi + 0x8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00506f1d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00506f1e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00506f1f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00506f26 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00506f28 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506f29 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00506f30(CPU *c) {
  NATIVE_HOOK(0x506f30u) REGS; LOADALL;
L_00506f30:;
  /* 00506f30 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00506f40(CPU *c) {
  NATIVE_HOOK(0x506f40u) REGS; LOADALL;
L_00506f40:;
  /* 00506f40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00506f41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00506f43 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00506f45 push 0x620318 */ { u32 v_ = 0x620318u; esp -= 4; M32(esp) = v_; }
  /* 00506f4a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00506f50 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506f51 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00506f58 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00506f59 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00506f5a mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00506f5d test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00506f5f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506f60 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00506f61 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00506f63 jne 0x506f7a */ if (!ZF_) goto L_00506f7a;
  /* 00506f65 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00506f67 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00506f6a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00506f71 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00506f72 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00506f73 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00506f74 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00506f76 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00506f77 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00506f7a:;
  /* 00506f7a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00506f7d mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00506f7f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00506f80 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00506f81 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00506f83 call dword ptr [eax + 0xd0] */ { const u32 m_ = (u32)(eax + 0xd0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x506f89u; SAVEALL; call_ind(c, t_); RETCHK(0x506f89u, 0x506f83u); LOADALL; }
  /* 00506f89 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00506f8b mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00506f8d call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x506f90u; SAVEALL; call_ind(c, t_); RETCHK(0x506f90u, 0x506f8du); LOADALL; }
  /* 00506f90 mov esi, eax */ { esi = (u32)(eax); }
  /* 00506f92 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00506f94 je 0x50708b */ if (ZF_) goto L_0050708b;
  /* 00506f9a push 0x650c44 */ { u32 v_ = 0x650c44u; esp -= 4; M32(esp) = v_; }
  /* 00506f9f call 0x560fd0 */ esp -= 4; M32(esp) = 0x506fa4u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x506f9fu); RETCHK(0x506fa4u, 0x506f9fu); LOADALL;
  /* 00506fa4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00506fa6 jne 0x506fb1 */ if (!ZF_) goto L_00506fb1;
  /* 00506fa8 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00506faa push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00506fac mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00506fae call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x506fb1u; SAVEALL; call_ind(c, t_); RETCHK(0x506fb1u, 0x506faeu); LOADALL; }
L_00506fb1:;
  /* 00506fb1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506fb2 mov eax, 0x650c38 */ { eax = (u32)(0x650c38u); }
  /* 00506fb7 call 0x560ed0 */ esp -= 4; M32(esp) = 0x506fbcu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x506fb7u); RETCHK(0x506fbcu, 0x506fb7u); LOADALL;
  /* 00506fbc mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00506fbe lea ebx, [ecx + 1] */ ebx = (u32)((u32)(ecx + 0x1u));
L_00506fc1:;
  /* 00506fc1 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00506fc3 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00506fc4 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00506fc6 jne 0x506fc1 */ if (!ZF_) goto L_00506fc1;
  /* 00506fc8 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00506fca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00506fcb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506fcc lea ecx, [edi + 0xec] */ ecx = (u32)((u32)(edi + 0xecu));
  /* 00506fd2 call 0x404420 */ esp -= 4; M32(esp) = 0x506fd7u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x506fd2u); RETCHK(0x506fd7u, 0x506fd2u); LOADALL;
  /* 00506fd7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506fd8 mov eax, 0x650c2c */ { eax = (u32)(0x650c2cu); }
  /* 00506fdd call 0x560ed0 */ esp -= 4; M32(esp) = 0x506fe2u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x506fddu); RETCHK(0x506fe2u, 0x506fddu); LOADALL;
  /* 00506fe2 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00506fe4 lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
L_00506fe7:;
  /* 00506fe7 mov bl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00506fe9 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00506fea test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00506fec jne 0x506fe7 */ if (!ZF_) goto L_00506fe7;
  /* 00506fee sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00506ff0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00506ff1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00506ff2 lea ecx, [edi + 0x108] */ ecx = (u32)((u32)(edi + 0x108u));
  /* 00506ff8 call 0x404420 */ esp -= 4; M32(esp) = 0x506ffdu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x506ff8u); RETCHK(0x506ffdu, 0x506ff8u); LOADALL;
  /* 00506ffd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00506ffe mov eax, 0x650c24 */ { eax = (u32)(0x650c24u); }
  /* 00507003 call 0x560ed0 */ esp -= 4; M32(esp) = 0x507008u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x507003u); RETCHK(0x507008u, 0x507003u); LOADALL;
  /* 00507008 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050700a lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
  /* 0050700d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00507010:;
  /* 00507010 mov bl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00507012 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00507013 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00507015 jne 0x507010 */ if (!ZF_) goto L_00507010;
  /* 00507017 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00507019 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050701a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050701b lea ecx, [edi + 0xb4] */ ecx = (u32)((u32)(edi + 0xb4u));
  /* 00507021 call 0x404420 */ esp -= 4; M32(esp) = 0x507026u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x507021u); RETCHK(0x507026u, 0x507021u); LOADALL;
  /* 00507026 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507027 mov eax, 0x650c18 */ { eax = (u32)(0x650c18u); }
  /* 0050702c call 0x560ed0 */ esp -= 4; M32(esp) = 0x507031u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50702cu); RETCHK(0x507031u, 0x50702cu); LOADALL;
  /* 00507031 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00507033 lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
L_00507036:;
  /* 00507036 mov bl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00507038 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00507039 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050703b jne 0x507036 */ if (!ZF_) goto L_00507036;
  /* 0050703d sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050703f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00507040 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00507041 lea ecx, [edi + 0xd0] */ ecx = (u32)((u32)(edi + 0xd0u));
  /* 00507047 call 0x404420 */ esp -= 4; M32(esp) = 0x50704cu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x507047u); RETCHK(0x50704cu, 0x507047u); LOADALL;
  /* 0050704c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050704d mov eax, 0x650c10 */ { eax = (u32)(0x650c10u); }
  /* 00507052 call 0x560ed0 */ esp -= 4; M32(esp) = 0x507057u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x507052u); RETCHK(0x507057u, 0x507052u); LOADALL;
  /* 00507057 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00507059 lea ebx, [ecx + 1] */ ebx = (u32)((u32)(ecx + 0x1u));
  /* 0050705c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00507060:;
  /* 00507060 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00507062 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00507063 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00507065 jne 0x507060 */ if (!ZF_) goto L_00507060;
  /* 00507067 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00507069 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050706a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050706b lea ecx, [edi + 0x124] */ ecx = (u32)((u32)(edi + 0x124u));
  /* 00507071 call 0x404420 */ esp -= 4; M32(esp) = 0x507076u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x507071u); RETCHK(0x507076u, 0x507071u); LOADALL;
  /* 00507076 push 0x650c08 */ { u32 v_ = 0x650c08u; esp -= 4; M32(esp) = v_; }
  /* 0050707b mov eax, esi */ { eax = (u32)(esi); }
  /* 0050707d call 0x560fd0 */ esp -= 4; M32(esp) = 0x507082u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50707du); RETCHK(0x507082u, 0x50707du); LOADALL;
  /* 00507082 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00507085 mov dword ptr [edi + 0x8c], eax */ { const u32 m_ = (u32)(edi + 0x8cu); M32(m_) = (u32)(eax); }
L_0050708b:;
  /* 0050708b mov ebx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); ebx = (u32)(M32(m_)); }
  /* 0050708e test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507090 je 0x50711e */ if (ZF_) goto L_0050711e;
  /* 00507096 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00507098 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050709b jmp 0x5070a0 */ goto L_005070a0;
L_005070a0:;
  /* 005070a0 mov edx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); edx = (u32)(M32(m_)); }
  /* 005070a3 add edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005070a6 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005070a9 mov esi, esp */ { esi = (u32)(esp); }
  /* 005070ab mov eax, edx */ { eax = (u32)(edx); }
  /* 005070ad mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 005070b4 mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 005070bb mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 005070be mov byte ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 005070c2 lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
L_005070c5:;
  /* 005070c5 mov bl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005070c7 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005070c8 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005070ca jne 0x5070c5 */ if (!ZF_) goto L_005070c5;
  /* 005070cc sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005070ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005070cf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005070d0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005070d2 call 0x404420 */ esp -= 4; M32(esp) = 0x5070d7u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5070d2u); RETCHK(0x5070d7u, 0x5070d2u); LOADALL;
  /* 005070d7 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005070de call 0x405c00 */ esp -= 4; M32(esp) = 0x5070e3u; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x5070deu); RETCHK(0x5070e3u, 0x5070deu); LOADALL;
  /* 005070e3 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005070e5 call 0x4064e0 */ esp -= 4; M32(esp) = 0x5070eau; SAVEALL; F_004064e0(c); ABI_CHECK(0x4064e0u, 0x5070e5u); RETCHK(0x5070eau, 0x5070e5u); LOADALL;
  /* 005070ea mov esi, eax */ { esi = (u32)(eax); }
  /* 005070ec test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005070ee je 0x507107 */ if (ZF_) goto L_00507107;
  /* 005070f0 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005070f2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005070f3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005070f5 call dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5070f8u; SAVEALL; call_ind(c, t_); RETCHK(0x5070f8u, 0x5070f5u); LOADALL; }
  /* 005070f8 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005070fb mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005070fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005070ff push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00507100 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00507102 call 0x506f40 */ esp -= 4; M32(esp) = 0x507107u; SAVEALL; F_00506f40(c); ABI_CHECK(0x506f40u, 0x507102u); RETCHK(0x507107u, 0x507102u); LOADALL;
L_00507107:;
  /* 00507107 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0050710a mov eax, dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); eax = (u32)(M32(m_)); }
  /* 0050710d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050710f mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00507112 jne 0x5070a0 */ if (!ZF_) goto L_005070a0;
  /* 00507114 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00507116 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00507118 call dword ptr [eax + 0xc4] */ { const u32 m_ = (u32)(eax + 0xc4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50711eu; SAVEALL; call_ind(c, t_); RETCHK(0x50711eu, 0x507118u); LOADALL; }
L_0050711e:;
  /* 0050711e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00507121 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00507122 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507123 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00507125 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050712c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050712d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050712f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507130 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00507140(CPU *c) {
  NATIVE_HOOK(0x507140u) REGS; LOADALL;
L_00507140:;
  /* 00507140 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507141 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507143 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00507145 push 0x624328 */ { u32 v_ = 0x624328u; esp -= 4; M32(esp) = v_; }
  /* 0050714a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00507150 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00507151 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00507158 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050715b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050715c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0050715e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00507161 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507163 jne 0x507178 */ if (!ZF_) goto L_00507178;
  /* 00507165 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00507167 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00507168 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050716b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00507172 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00507174 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507175 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00507178:;
  /* 00507178 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050717a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050717b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050717c call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50717fu; SAVEALL; call_ind(c, t_); RETCHK(0x50717fu, 0x50717cu); LOADALL; }
  /* 0050717f push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 00507184 mov edi, eax */ { edi = (u32)(eax); }
  /* 00507186 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50718bu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x507186u); RETCHK(0x50718bu, 0x507186u); LOADALL;
  /* 0050718b mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050718e fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00507191 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 00507196 mov eax, edi */ { eax = (u32)(edi); }
  /* 00507198 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050719b call 0x560fd0 */ esp -= 4; M32(esp) = 0x5071a0u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50719bu); RETCHK(0x5071a0u, 0x50719bu); LOADALL;
  /* 005071a0 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005071a3 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005071a6 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 005071ab mov eax, edi */ { eax = (u32)(edi); }
  /* 005071ad fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005071b0 call 0x560fd0 */ esp -= 4; M32(esp) = 0x5071b5u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5071b0u); RETCHK(0x5071b5u, 0x5071b0u); LOADALL;
  /* 005071b5 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005071b8 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005071bb push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 005071c0 mov eax, edi */ { eax = (u32)(edi); }
  /* 005071c2 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005071c5 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005071c8 call 0x560fd0 */ esp -= 4; M32(esp) = 0x5071cdu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5071c8u); RETCHK(0x5071cdu, 0x5071c8u); LOADALL;
  /* 005071cd mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005071d0 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005071d3 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005071d6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005071d7 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 005071da fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005071dd fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005071e0 call 0x52d060 */ esp -= 4; M32(esp) = 0x5071e5u; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x5071e0u); RETCHK(0x5071e5u, 0x5071e0u); LOADALL;
  /* 005071e5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005071e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005071e9 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 005071ee call 0x560ed0 */ esp -= 4; M32(esp) = 0x5071f3u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5071eeu); RETCHK(0x5071f3u, 0x5071eeu); LOADALL;
  /* 005071f3 mov esi, eax */ { esi = (u32)(eax); }
  /* 005071f5 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005071f7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005071f9 mov dword ptr [ebp - 0x20], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xfu); }
  /* 00507200 mov dword ptr [ebp - 0x24], edi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edi); }
  /* 00507203 mov byte ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)(0x0u); }
  /* 00507207 lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
  /* 0050720a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00507210:;
  /* 00507210 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00507212 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00507213 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00507215 jne 0x507210 */ if (!ZF_) goto L_00507210;
  /* 00507217 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00507219 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050721a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050721b lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0050721e call 0x404420 */ esp -= 4; M32(esp) = 0x507223u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50721eu); RETCHK(0x507223u, 0x50721eu); LOADALL;
  /* 00507223 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00507226 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00507227 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0050722a mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0050722d mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0050722f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00507230 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00507232 call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507235u; SAVEALL; call_ind(c, t_); RETCHK(0x507235u, 0x507232u); LOADALL; }
  /* 00507235 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 00507237 cmp dword ptr [ebp - 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050723b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050723c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050723d jb 0x50724b */ if (CF_) goto L_0050724b;
  /* 0050723f mov edx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edx = (u32)(M32(m_)); }
  /* 00507242 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00507243 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x507248u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x507243u); RETCHK(0x507248u, 0x507243u); LOADALL;
  /* 00507248 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050724b:;
  /* 0050724b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050724e mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 00507250 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00507251 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00507258 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050725a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050725b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00507260(CPU *c) {
  NATIVE_HOOK(0x507260u) REGS; LOADALL;
L_00507260:;
  /* 00507260 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507261 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507263 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00507266 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00507269 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050726a push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050726c mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050726e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00507270 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00507271 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 00507274 call 0x404140 */ esp -= 4; M32(esp) = 0x507279u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x507274u); RETCHK(0x507279u, 0x507274u); LOADALL;
  /* 00507279 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0050727c lea ecx, [esi + 0x44] */ ecx = (u32)((u32)(esi + 0x44u));
  /* 0050727f lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00507282 call 0x52cee0 */ esp -= 4; M32(esp) = 0x507287u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x507282u); RETCHK(0x507287u, 0x507282u); LOADALL;
  /* 00507287 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00507289 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050728a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050728c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050728d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00507290(CPU *c) {
  NATIVE_HOOK(0x507290u) REGS; LOADALL;
L_00507290:;
  /* 00507290 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00507291 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507292 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00507293 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00507295 call 0x518bb0 */ esp -= 4; M32(esp) = 0x50729au; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x507295u); RETCHK(0x50729au, 0x507295u); LOADALL;
  /* 0050729a call 0x5180e0 */ esp -= 4; M32(esp) = 0x50729fu; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x50729au); RETCHK(0x50729fu, 0x50729au); LOADALL;
  /* 0050729f mov esi, eax */ { esi = (u32)(eax); }
  /* 005072a1 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005072a3 je 0x5072b7 */ if (ZF_) goto L_005072b7;
  /* 005072a5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005072a7 call 0x508d10 */ esp -= 4; M32(esp) = 0x5072acu; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x5072a7u); RETCHK(0x5072acu, 0x5072a7u); LOADALL;
  /* 005072ac cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005072ae jne 0x5072b7 */ if (!ZF_) goto L_005072b7;
  /* 005072b0 mov eax, esi */ { eax = (u32)(esi); }
  /* 005072b2 call 0x42d930 */ esp -= 4; M32(esp) = 0x5072b7u; SAVEALL; F_0042d930(c); ABI_CHECK(0x42d930u, 0x5072b2u); RETCHK(0x5072b7u, 0x5072b2u); LOADALL;
L_005072b7:;
  /* 005072b7 mov edi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edi = (u32)(M32(m_)); }
  /* 005072ba mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 005072bc cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005072be je 0x5072e6 */ if (ZF_) goto L_005072e6;
L_005072c0:;
  /* 005072c0 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005072c3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005072c5 je 0x5072e0 */ if (ZF_) goto L_005072e0;
  /* 005072c7 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005072c9 call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5072ccu; SAVEALL; call_ind(c, t_); RETCHK(0x5072ccu, 0x5072c9u); LOADALL; }
  /* 005072cc mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005072cf test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005072d1 je 0x5072d9 */ if (ZF_) goto L_005072d9;
  /* 005072d3 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005072d5 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005072d7 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5072d9u; SAVEALL; call_ind(c, t_); RETCHK(0x5072d9u, 0x5072d7u); LOADALL; }
L_005072d9:;
  /* 005072d9 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
L_005072e0:;
  /* 005072e0 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 005072e2 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005072e4 jne 0x5072c0 */ if (!ZF_) goto L_005072c0;
L_005072e6:;
  /* 005072e6 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 005072e8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005072e9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005072ea mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005072ec pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005072ed jmp dword ptr [eax + 0xdc] */ { const u32 m_ = (u32)(eax + 0xdcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00507300(CPU *c) {
  NATIVE_HOOK(0x507300u) REGS; LOADALL;
L_00507300:;
  /* 00507300 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00507301 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00507303 mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00507306 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507307 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00507309 cmp byte ptr [esi + 0x3e], al */ { const u32 m_ = (u32)(esi + 0x3eu); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0050730c je 0x507334 */ if (ZF_) goto L_00507334;
  /* 0050730e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00507310 mov byte ptr [esi + 0x3e], al */ { const u32 m_ = (u32)(esi + 0x3eu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00507313 jne 0x507334 */ if (!ZF_) goto L_00507334;
  /* 00507315 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507316 call 0x508500 */ esp -= 4; M32(esp) = 0x50731bu; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x507316u); RETCHK(0x50731bu, 0x507316u); LOADALL;
  /* 0050731b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050731d je 0x50732d */ if (ZF_) goto L_0050732d;
  /* 0050731f mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00507321 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00507323 call dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x507326u; SAVEALL; call_ind(c, t_); RETCHK(0x507326u, 0x507323u); LOADALL; }
  /* 00507326 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00507328 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050732a call dword ptr [edx + 0x50] */ { const u32 m_ = (u32)(edx + 0x50u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50732du; SAVEALL; call_ind(c, t_); RETCHK(0x50732du, 0x50732au); LOADALL; }
L_0050732d:;
  /* 0050732d mov eax, esi */ { eax = (u32)(esi); }
  /* 0050732f call 0x5085e0 */ esp -= 4; M32(esp) = 0x507334u; SAVEALL; F_005085e0(c); ABI_CHECK(0x5085e0u, 0x50732fu); RETCHK(0x507334u, 0x50732fu); LOADALL;
L_00507334:;
  /* 00507334 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507335 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00507336 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00507340(CPU *c) {
  NATIVE_HOOK(0x507340u) REGS; LOADALL;
L_00507340:;
  /* 00507340 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00507341 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00507343 call 0x507890 */ esp -= 4; M32(esp) = 0x507348u; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x507343u); RETCHK(0x507348u, 0x507343u); LOADALL;
  /* 00507348 mov esi, eax */ { esi = (u32)(eax); }
  /* 0050734a mov al, byte ptr [ecx + 0x3e] */ { const u32 m_ = (u32)(ecx + 0x3eu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050734d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050734f je 0x507371 */ if (ZF_) goto L_00507371;
  /* 00507351 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00507353 je 0x50736d */ if (ZF_) goto L_0050736d;
L_00507355:;
  /* 00507355 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00507357 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00507359 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50735cu; SAVEALL; call_ind(c, t_); RETCHK(0x50735cu, 0x507359u); LOADALL; }
  /* 0050735c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050735e je 0x507371 */ if (ZF_) goto L_00507371;
  /* 00507360 mov eax, esi */ { eax = (u32)(esi); }
  /* 00507362 call 0x507890 */ esp -= 4; M32(esp) = 0x507367u; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x507362u); RETCHK(0x507367u, 0x507362u); LOADALL;
  /* 00507367 mov esi, eax */ { esi = (u32)(eax); }
  /* 00507369 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050736b jne 0x507355 */ if (!ZF_) goto L_00507355;
L_0050736d:;
  /* 0050736d mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050736f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507370 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00507371:;
  /* 00507371 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00507373 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00507374 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
