#include "funcs.h"

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

void F_004f4a00(CPU *c) {
  NATIVE_HOOK(0x4f4a00u) REGS; LOADALL;
L_004f4a00:;
  /* 004f4a00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4a01 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f4a03 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f4a08u; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f4a03u); RETCHK(0x4f4a08u, 0x4f4a03u); LOADALL;
  /* 004f4a08 mov dword ptr [esi], 0x64f634 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f634u); }
  /* 004f4a0e mov dword ptr [esi + 0x40], 0x13038dc0 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x13038dc0u); }
  /* 004f4a15 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f4a17 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f4a18 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4a20(CPU *c) {
  NATIVE_HOOK(0x4f4a20u) REGS; LOADALL;
L_004f4a20:;
  /* 004f4a20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4a21 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f4a23 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f4a28u; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f4a23u); RETCHK(0x4f4a28u, 0x4f4a23u); LOADALL;
  /* 004f4a28 mov dword ptr [esi], 0x64f604 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f604u); }
  /* 004f4a2e mov dword ptr [esi + 0x40], 0x1312d000 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x1312d000u); }
  /* 004f4a35 mov dword ptr [esi + 0x80], 0 */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(0x0u); }
  /* 004f4a3f mov eax, esi */ { eax = (u32)(esi); }
  /* 004f4a41 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f4a42 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4a50(CPU *c) {
  NATIVE_HOOK(0x4f4a50u) REGS; LOADALL;
L_004f4a50:;
  /* 004f4a50 jmp 0x4f3270 */ SAVEALL; F_004f3270(c); return;
}

void F_004f4a60(CPU *c) {
  NATIVE_HOOK(0x4f4a60u) REGS; LOADALL;
L_004f4a60:;
  /* 004f4a60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f4a61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f4a63 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f4a64 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4a65 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f4a66 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004f4a69 mov eax, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f4a6c mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 004f4a6e mov edx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); edx = (u32)(M32(m_)); }
  /* 004f4a71 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 004f4a74 lea esi, [ecx + eax*8] */ esi = (u32)((u32)(ecx + eax * 8u));
  /* 004f4a77 mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f4a7a mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f4a7d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f4a7e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f4a7f mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f4a82 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f4a83 call 0x4f4630 */ esp -= 4; M32(esp) = 0x4f4a88u; SAVEALL; F_004f4630(c); ABI_CHECK(0x4f4630u, 0x4f4a83u); RETCHK(0x4f4a88u, 0x4f4a83u); LOADALL;
  /* 004f4a88 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004f4a8b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f4a8c call 0x5abd50 */ esp -= 4; M32(esp) = 0x4f4a91u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4f4a8cu); RETCHK(0x4f4a91u, 0x4f4a8cu); LOADALL;
  /* 004f4a91 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f4a94 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4a97 add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f4a9a add ecx, 0x28 */ { u32 a_ = ecx, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f4a9d call 0x4f48b0 */ esp -= 4; M32(esp) = 0x4f4aa2u; SAVEALL; F_004f48b0(c); ABI_CHECK(0x4f48b0u, 0x4f4a9du); RETCHK(0x4f4aa2u, 0x4f4a9du); LOADALL;
  /* 004f4aa2 mov ecx, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 004f4aa5 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f4aa8 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004f4aaa imul eax, eax, 0x54 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x54u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f4aad add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f4aaf mov edx, dword ptr [eax + 0x50] */ { const u32 m_ = (u32)(eax + 0x50u); edx = (u32)(M32(m_)); }
  /* 004f4ab2 shl ecx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 004f4ab5 or ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f4ab7 mov dword ptr [esi + 0x1c], ecx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 004f4aba mov edx, dword ptr [eax + 0x50] */ { const u32 m_ = (u32)(eax + 0x50u); edx = (u32)(M32(m_)); }
  /* 004f4abd mov dword ptr [eax + edx*4 + 0x10], esi */ { const u32 m_ = (u32)(eax + edx * 4u + 0x10u); M32(m_) = (u32)(esi); }
  /* 004f4ac1 mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 004f4ac4 inc dword ptr [eax + 0x50] */ { const u32 m_ = (u32)(eax + 0x50u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f4ac7 inc dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f4aca pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f4acb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f4acc mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f4ace pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f4acf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4ad0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4ae0(CPU *c) {
  NATIVE_HOOK(0x4f4ae0u) REGS; LOADALL;
L_004f4ae0:;
  /* 004f4ae0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f4ae1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f4ae3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4ae4 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f4ae7 mov eax, dword ptr [esi + 0x98] */ { const u32 m_ = (u32)(esi + 0x98u); eax = (u32)(M32(m_)); }
  /* 004f4aed mov ecx, dword ptr [eax + 0x98] */ { const u32 m_ = (u32)(eax + 0x98u); ecx = (u32)(M32(m_)); }
  /* 004f4af3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4af5 jne 0x4f4b17 */ if (!ZF_) goto L_004f4b17;
  /* 004f4af7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f4af8 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004f4afb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f4afc push 0x4f4a60 */ { u32 v_ = 0x4f4a60u; esp -= 4; M32(esp) = v_; }
  /* 004f4b01 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4b02 call 0x5ac180 */ esp -= 4; M32(esp) = 0x4f4b07u; SAVEALL; F_005ac180(c); ABI_CHECK(0x5ac180u, 0x4f4b02u); RETCHK(0x4f4b07u, 0x4f4b02u); LOADALL;
  /* 004f4b07 mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 004f4b0a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4b0d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f4b0e mov dword ptr [edi + 0x1c], eax */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 004f4b11 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f4b12 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f4b14 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f4b15 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4b16 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004f4b17:;
  /* 004f4b17 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f4b1a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f4b1b push 0x4f4ae0 */ { u32 v_ = 0x4f4ae0u; esp -= 4; M32(esp) = v_; }
  /* 004f4b20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4b21 call 0x5ac180 */ esp -= 4; M32(esp) = 0x4f4b26u; SAVEALL; F_005ac180(c); ABI_CHECK(0x5ac180u, 0x4f4b21u); RETCHK(0x4f4b26u, 0x4f4b21u); LOADALL;
  /* 004f4b26 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4b29 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f4b2b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f4b2c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4b2d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4b30(CPU *c) {
  NATIVE_HOOK(0x4f4b30u) REGS; LOADALL;
L_004f4b30:;
  /* 004f4b30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f4b31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f4b33 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f4b36 inc dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f4b39 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f4b3c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4b3d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4b40(CPU *c) {
  NATIVE_HOOK(0x4f4b40u) REGS; LOADALL;
L_004f4b40:;
  /* 004f4b40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f4b41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f4b43 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4b44 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f4b47 mov eax, dword ptr [esi + 0x98] */ { const u32 m_ = (u32)(esi + 0x98u); eax = (u32)(M32(m_)); }
  /* 004f4b4d mov ecx, dword ptr [eax + 0x98] */ { const u32 m_ = (u32)(eax + 0x98u); ecx = (u32)(M32(m_)); }
  /* 004f4b53 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4b55 jne 0x4f4b77 */ if (!ZF_) goto L_004f4b77;
  /* 004f4b57 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f4b58 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004f4b5b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f4b5c push 0x4f4b30 */ { u32 v_ = 0x4f4b30u; esp -= 4; M32(esp) = v_; }
  /* 004f4b61 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4b62 call 0x5ac180 */ esp -= 4; M32(esp) = 0x4f4b67u; SAVEALL; F_005ac180(c); ABI_CHECK(0x5ac180u, 0x4f4b62u); RETCHK(0x4f4b67u, 0x4f4b62u); LOADALL;
  /* 004f4b67 mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 004f4b6a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4b6d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f4b6e mov dword ptr [edi + 0x1c], eax */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 004f4b71 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f4b72 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f4b74 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f4b75 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4b76 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004f4b77:;
  /* 004f4b77 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f4b7a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f4b7b push 0x4f4b40 */ { u32 v_ = 0x4f4b40u; esp -= 4; M32(esp) = v_; }
  /* 004f4b80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4b81 call 0x5ac180 */ esp -= 4; M32(esp) = 0x4f4b86u; SAVEALL; F_005ac180(c); ABI_CHECK(0x5ac180u, 0x4f4b81u); RETCHK(0x4f4b86u, 0x4f4b81u); LOADALL;
  /* 004f4b86 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4b89 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f4b8b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f4b8c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4b8d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4b90(CPU *c) {
  NATIVE_HOOK(0x4f4b90u) REGS; LOADALL;
L_004f4b90:;
  /* 004f4b90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f4b91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f4b93 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4b96 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 004f4b98 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004f4b9b fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f4b9d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f4b9e fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4ba1 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f4ba4 fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f4ba7 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4baa fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f4bad fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f4bb0 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4bb3 call 0x5aa970 */ esp -= 4; M32(esp) = 0x4f4bb8u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4f4bb3u); RETCHK(0x4f4bb8u, 0x4f4bb3u); LOADALL;
  /* 004f4bb8 fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004f4bbb fld dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004f4bbe add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4bc1 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004f4bc3 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 004f4bc5 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f4bcb fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f4bcd test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f4bd0 je 0x4f4bd4 */ if (ZF_) goto L_004f4bd4;
  /* 004f4bd2 fchs */ ST(0) = -ST(0);
L_004f4bd4:;
  /* 004f4bd4 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 004f4bd6 fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 004f4bd8 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f4bda fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f4bdc test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f4bdf jne 0x4f4c38 */ if (!ZF_) goto L_004f4c38;
  /* 004f4be1 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004f4be3 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004f4be6 fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 004f4be8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f4be9 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004f4beb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f4bec fadd st(3) */ ST(0) = FR(ST(0) + ST(3));
  /* 004f4bee fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f4bf4 fstp dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4bf7 fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 004f4bf9 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 004f4bfb fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f4c01 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4c04 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f4c06 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f4c08 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f4c0du; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f4c08u); RETCHK(0x4f4c0du, 0x4f4c08u); LOADALL;
  /* 004f4c0d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f4c0f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4c12 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f4c15 fmul dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f4c18 fadd dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f4c1a fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4c1c fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f4c1f fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f4c22 fadd dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f4c25 fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4c28 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f4c2b fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f4c2e fadd dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f4c31 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f4c34 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f4c36 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4c37 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004f4c38:;
  /* 004f4c38 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f4c3a fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f4c3c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f4c3e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f4c40 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4c41 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4c50(CPU *c) {
  NATIVE_HOOK(0x4f4c50u) REGS; LOADALL;
L_004f4c50:;
  /* 004f4c50 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f4c51 mov dword ptr [esi], 0x64f754 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f754u); }
  /* 004f4c57 call 0x54c480 */ esp -= 4; M32(esp) = 0x4f4c5cu; SAVEALL; F_0054c480(c); ABI_CHECK(0x54c480u, 0x4f4c57u); RETCHK(0x4f4c5cu, 0x4f4c57u); LOADALL;
  /* 004f4c5c mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f4c5f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f4c61 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004f4c63 mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
  /* 004f4c66 mov dword ptr [esi + 0x14], edx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edx); }
  /* 004f4c69 mov dword ptr [esi + 0x18], edx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edx); }
  /* 004f4c6c mov dword ptr [esi + 0x1c], edx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(edx); }
  /* 004f4c6f mov dword ptr [esi + 0x24], edx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(edx); }
  /* 004f4c72 mov dword ptr [esi + 0x20], edx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edx); }
  /* 004f4c75 lea ecx, [esi + 0x28] */ ecx = (u32)((u32)(esi + 0x28u));
  /* 004f4c78 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 004f4c7a mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004f4c7d lea ecx, [esi + 0x30] */ ecx = (u32)((u32)(esi + 0x30u));
  /* 004f4c80 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 004f4c82 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004f4c85 mov dword ptr [esi + 0x10], edx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edx); }
  /* 004f4c88 lea ecx, [esi + 0x38] */ ecx = (u32)((u32)(esi + 0x38u));
  /* 004f4c8b mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 004f4c8d mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004f4c90 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f4c93 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 004f4c96 mov dword ptr [ecx + 0x10], eax */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(eax); }
  /* 004f4c99 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 004f4c9c mov dword ptr [ecx + 0x18], eax */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(eax); }
  /* 004f4c9f mov dword ptr [ecx + 0x1c], eax */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 004f4ca2 mov dword ptr [ecx + 0x20], eax */ { const u32 m_ = (u32)(ecx + 0x20u); M32(m_) = (u32)(eax); }
  /* 004f4ca5 mov dword ptr [ecx + 0x24], eax */ { const u32 m_ = (u32)(ecx + 0x24u); M32(m_) = (u32)(eax); }
  /* 004f4ca8 mov ecx, 0x15 */ { ecx = (u32)(0x15u); }
  /* 004f4cad lea edi, [esi + 0x60] */ edi = (u32)((u32)(esi + 0x60u));
  /* 004f4cb0 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004f4cb2 lea ecx, [esi + 0xb4] */ ecx = (u32)((u32)(esi + 0xb4u));
  /* 004f4cb8 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 004f4cba mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004f4cbd mov ecx, 0x15 */ { ecx = (u32)(0x15u); }
  /* 004f4cc2 lea edi, [esi + 0xbc] */ edi = (u32)((u32)(esi + 0xbcu));
  /* 004f4cc8 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004f4cca mov dword ptr [0x7a6cdc], edx */ { const u32 m_ = (u32)(0x7a6cdcu); M32(m_) = (u32)(edx); }
  /* 004f4cd0 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f4cd2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f4cd3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4ce0(CPU *c) {
  NATIVE_HOOK(0x4f4ce0u) REGS; LOADALL;
L_004f4ce0:;
  /* 004f4ce0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f4ce1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f4ce3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4ce4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f4ce6 call 0x4f4d10 */ esp -= 4; M32(esp) = 0x4f4cebu; SAVEALL; F_004f4d10(c); ABI_CHECK(0x4f4d10u, 0x4f4ce6u); RETCHK(0x4f4cebu, 0x4f4ce6u); LOADALL;
  /* 004f4ceb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f4cef je 0x4f4cfa */ if (ZF_) goto L_004f4cfa;
  /* 004f4cf1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4cf2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f4cf7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f4cf2u); RETCHK(0x4f4cf7u, 0x4f4cf2u); LOADALL;
  /* 004f4cf7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f4cfa:;
  /* 004f4cfa mov eax, esi */ { eax = (u32)(esi); }
  /* 004f4cfc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f4cfd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4cfe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f4d10(CPU *c) {
  NATIVE_HOOK(0x4f4d10u) REGS; LOADALL;
L_004f4d10:;
  /* 004f4d10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4d11 lea esi, [ecx + 4] */ esi = (u32)((u32)(ecx + 0x4u));
  /* 004f4d14 mov dword ptr [ecx], 0x64f754 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64f754u); }
  /* 004f4d1a call 0x529410 */ esp -= 4; M32(esp) = 0x4f4d1fu; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x4f4d1au); RETCHK(0x4f4d1fu, 0x4f4d1au); LOADALL;
  /* 004f4d1f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f4d22 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f4d23 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f4d28u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f4d23u); RETCHK(0x4f4d28u, 0x4f4d23u); LOADALL;
  /* 004f4d28 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4d2b mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004f4d32 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f4d33 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4d40(CPU *c) {
  NATIVE_HOOK(0x4f4d40u) REGS; LOADALL;
L_004f4d40:;
  /* 004f4d40 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f4d43 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4d45 je 0x4f4d62 */ if (ZF_) goto L_004f4d62;
  /* 004f4d47 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f4d4a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4d4b mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 004f4d4d cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4d4f je 0x4f4d61 */ if (ZF_) goto L_004f4d61;
L_004f4d51:;
  /* 004f4d51 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f4d54 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004f4d56 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f4d57 call dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f4d5au; SAVEALL; call_ind(c, t_); RETCHK(0x4f4d5au, 0x4f4d57u); LOADALL; }
  /* 004f4d5a mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 004f4d5c cmp esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4d5f jne 0x4f4d51 */ if (!ZF_) goto L_004f4d51;
L_004f4d61:;
  /* 004f4d61 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_004f4d62:;
  /* 004f4d62 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f4d70(CPU *c) {
  NATIVE_HOOK(0x4f4d70u) REGS; LOADALL;
L_004f4d70:;
  /* 004f4d70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f4d71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f4d73 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f4d76 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 004f4d78 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4d7a je 0x4f4d98 */ if (ZF_) goto L_004f4d98;
  /* 004f4d7c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004f4d80:;
  /* 004f4d80 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f4d83 cmp dword ptr [ecx + 0x40], esi */ { const u32 m_ = (u32)(ecx + 0x40u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4d86 jne 0x4f4d92 */ if (!ZF_) goto L_004f4d92;
  /* 004f4d88 cmp dword ptr [ecx + 0x44], ebx */ { const u32 m_ = (u32)(ecx + 0x44u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4d8b jne 0x4f4d92 */ if (!ZF_) goto L_004f4d92;
  /* 004f4d8d cmp dword ptr [ecx + 0x48], edi */ { const u32 m_ = (u32)(ecx + 0x48u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4d90 je 0x4f4d9e */ if (ZF_) goto L_004f4d9e;
L_004f4d92:;
  /* 004f4d92 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 004f4d94 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4d96 jne 0x4f4d80 */ if (!ZF_) goto L_004f4d80;
L_004f4d98:;
  /* 004f4d98 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f4d9a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4d9b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f4d9e:;
  /* 004f4d9e mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f4da1 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f4da4 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004f4da6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f4da7 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f4da9 call dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f4dacu; SAVEALL; call_ind(c, t_); RETCHK(0x4f4dacu, 0x4f4da9u); LOADALL; }
  /* 004f4dac mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f4dae pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4daf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f4dc0(CPU *c) {
  NATIVE_HOOK(0x4f4dc0u) REGS; LOADALL;
L_004f4dc0:;
  /* 004f4dc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f4dc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f4dc3 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4dc6 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 004f4dcb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f4dcc mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004f4dcf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4dd0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f4dd1 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 004f4dd3 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f4dd6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4dd8 mov dword ptr [ebp - 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edi); }
  /* 004f4ddb je 0x4f4df6 */ if (ZF_) goto L_004f4df6;
  /* 004f4ddd mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f4de0 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 004f4de2 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4de4 je 0x4f4df6 */ if (ZF_) goto L_004f4df6;
L_004f4de6:;
  /* 004f4de6 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f4de9 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f4deb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f4dec call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f4defu; SAVEALL; call_ind(c, t_); RETCHK(0x4f4defu, 0x4f4decu); LOADALL; }
  /* 004f4def mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 004f4df1 cmp esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4df4 jne 0x4f4de6 */ if (!ZF_) goto L_004f4de6;
L_004f4df6:;
  /* 004f4df6 mov edi, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); edi = (u32)(M32(m_)); }
  /* 004f4df9 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4dfb je 0x4f4e85 */ if (ZF_) goto L_004f4e85;
  /* 004f4e01 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 004f4e04 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4e06 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 004f4e0d jle 0x4f4e85 */ if ((ZF_|LT_)) goto L_004f4e85;
  /* 004f4e0f nop */ ;
L_004f4e10:;
  /* 004f4e10 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 004f4e15 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004f4e17 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f4e18 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f4e19 call 0x5afcc0 */ esp -= 4; M32(esp) = 0x4f4e1eu; SAVEALL; F_005afcc0(c); ABI_CHECK(0x5afcc0u, 0x4f4e19u); RETCHK(0x4f4e1eu, 0x4f4e19u); LOADALL;
  /* 004f4e1e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4e21 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4e23 je 0x4f4e74 */ if (ZF_) goto L_004f4e74;
  /* 004f4e25 mov eax, dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); eax = (u32)(M32(m_)); }
  /* 004f4e28 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4e2a lea ebx, [edi + 0x10] */ ebx = (u32)((u32)(edi + 0x10u));
  /* 004f4e2d mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004f4e34 jle 0x4f4e71 */ if ((ZF_|LT_)) goto L_004f4e71;
L_004f4e36:;
  /* 004f4e36 mov esi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); esi = (u32)(M32(m_)); }
  /* 004f4e38 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4e3a je 0x4f4e60 */ if (ZF_) goto L_004f4e60;
  /* 004f4e3c mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f4e3f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f4e40 call 0x577800 */ esp -= 4; M32(esp) = 0x4f4e45u; SAVEALL; F_00577800(c); ABI_CHECK(0x577800u, 0x4f4e40u); RETCHK(0x4f4e45u, 0x4f4e40u); LOADALL;
  /* 004f4e45 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f4e46 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 004f4e49 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f4e4a call 0x5afcc0 */ esp -= 4; M32(esp) = 0x4f4e4fu; SAVEALL; F_005afcc0(c); ABI_CHECK(0x5afcc0u, 0x4f4e4au); RETCHK(0x4f4e4fu, 0x4f4e4au); LOADALL;
  /* 004f4e4f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4e52 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4e54 je 0x4f4e60 */ if (ZF_) goto L_004f4e60;
  /* 004f4e56 mov esi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); esi = (u32)(M32(m_)); }
  /* 004f4e59 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004f4e5b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f4e5d call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f4e60u; SAVEALL; call_ind(c, t_); RETCHK(0x4f4e60u, 0x4f4e5du); LOADALL; }
L_004f4e60:;
  /* 004f4e60 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f4e63 mov ecx, dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); ecx = (u32)(M32(m_)); }
  /* 004f4e66 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f4e67 add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004f4e6a cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4e6c mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f4e6f jl 0x4f4e36 */ if (LT_) goto L_004f4e36;
L_004f4e71:;
  /* 004f4e71 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_004f4e74:;
  /* 004f4e74 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f4e77 mov ecx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004f4e7a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f4e7b add edi, 0x54 */ { u32 a_ = edi, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f4e7e cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4e80 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 004f4e83 jl 0x4f4e10 */ if (LT_) goto L_004f4e10;
L_004f4e85:;
  /* 004f4e85 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f4e86 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f4e87 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f4e88 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f4e8a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4e8b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f4e4e(CPU *c) {
  NATIVE_HOOK(0x4f4e4eu) REGS; LOADALL;
  goto L_004f4e4e;
L_004f4e10:;
  /* 004f4e10 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 004f4e15 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004f4e17 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f4e18 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f4e19 call 0x5afcc0 */ esp -= 4; M32(esp) = 0x4f4e1eu; SAVEALL; F_005afcc0(c); ABI_CHECK(0x5afcc0u, 0x4f4e19u); RETCHK(0x4f4e1eu, 0x4f4e19u); LOADALL;
  /* 004f4e1e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4e21 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4e23 je 0x4f4e74 */ if (ZF_) goto L_004f4e74;
  /* 004f4e25 mov eax, dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); eax = (u32)(M32(m_)); }
  /* 004f4e28 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4e2a lea ebx, [edi + 0x10] */ ebx = (u32)((u32)(edi + 0x10u));
  /* 004f4e2d mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004f4e34 jle 0x4f4e71 */ if ((ZF_|LT_)) goto L_004f4e71;
L_004f4e36:;
  /* 004f4e36 mov esi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); esi = (u32)(M32(m_)); }
  /* 004f4e38 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4e3a je 0x4f4e60 */ if (ZF_) goto L_004f4e60;
  /* 004f4e3c mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f4e3f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f4e40 call 0x577800 */ esp -= 4; M32(esp) = 0x4f4e45u; SAVEALL; F_00577800(c); ABI_CHECK(0x577800u, 0x4f4e40u); RETCHK(0x4f4e45u, 0x4f4e40u); LOADALL;
  /* 004f4e45 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f4e46 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 004f4e49 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f4e4a call 0x5afcc0 */ esp -= 4; M32(esp) = 0x4f4e4fu; SAVEALL; F_005afcc0(c); ABI_CHECK(0x5afcc0u, 0x4f4e4au); RETCHK(0x4f4e4fu, 0x4f4e4au); LOADALL;
  goto L_004f4e4f;
L_004f4e4e:;
  /* 004f4e4e add byte ptr [ebx - 0x3f7af33c], al */ { const u32 m_ = (u32)(ebx + 0xc0850cc4u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  goto L_004f4e54;
L_004f4e4f:;
  /* 004f4e4f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4e52 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
L_004f4e54:;
  /* 004f4e54 je 0x4f4e60 */ if (ZF_) goto L_004f4e60;
  /* 004f4e56 mov esi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); esi = (u32)(M32(m_)); }
  /* 004f4e59 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004f4e5b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f4e5d call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f4e60u; SAVEALL; call_ind(c, t_); RETCHK(0x4f4e60u, 0x4f4e5du); LOADALL; }
L_004f4e60:;
  /* 004f4e60 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f4e63 mov ecx, dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); ecx = (u32)(M32(m_)); }
  /* 004f4e66 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f4e67 add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004f4e6a cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4e6c mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f4e6f jl 0x4f4e36 */ if (LT_) goto L_004f4e36;
L_004f4e71:;
  /* 004f4e71 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_004f4e74:;
  /* 004f4e74 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f4e77 mov ecx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004f4e7a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f4e7b add edi, 0x54 */ { u32 a_ = edi, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f4e7e cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4e80 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 004f4e83 jl 0x4f4e10 */ if (LT_) goto L_004f4e10;
  /* 004f4e85 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f4e86 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f4e87 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f4e88 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f4e8a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f4e8b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f4e90(CPU *c) {
  NATIVE_HOOK(0x4f4e90u) REGS; LOADALL;
L_004f4e90:;
  /* 004f4e90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f4e91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f4e93 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f4e95 push 0x6288db */ { u32 v_ = 0x6288dbu; esp -= 4; M32(esp) = v_; }
  /* 004f4e9a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004f4ea0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f4ea1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004f4ea8 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4eab mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f4eae push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f4eaf mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 004f4eb1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4eb2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f4eb3 mov dword ptr [ebx + 0x24], eax */ { const u32 m_ = (u32)(ebx + 0x24u); M32(m_) = (u32)(eax); }
  /* 004f4eb6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f4eb8 mov ecx, 0x15 */ { ecx = (u32)(0x15u); }
  /* 004f4ebd lea edi, [ebx + 0xbc] */ edi = (u32)((u32)(ebx + 0xbcu));
  /* 004f4ec3 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004f4ec5 mov ecx, dword ptr [0x7a6c78] */ { const u32 m_ = (u32)(0x7a6c78u); ecx = (u32)(M32(m_)); }
  /* 004f4ecb xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004f4ecd mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004f4ecf cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4ed1 mov dword ptr [ebx + 0x10], ecx */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(ecx); }
  /* 004f4ed4 jle 0x4f4f11 */ if ((ZF_|LT_)) goto L_004f4f11;
  /* 004f4ed6 mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 004f4ed9 lea esi, [ebx + 0x30] */ esi = (u32)((u32)(ebx + 0x30u));
  /* 004f4edc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004f4ee0:;
  /* 004f4ee0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f4ee1 call 0x4019a0 */ esp -= 4; M32(esp) = 0x4f4ee6u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x4f4ee1u); RETCHK(0x4f4ee6u, 0x4f4ee1u); LOADALL;
  /* 004f4ee6 mov dword ptr [esi - 8], eax */ { const u32 m_ = (u32)(esi + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 004f4ee9 mov edx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); edx = (u32)(M32(m_)); }
  /* 004f4eec mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 004f4eef mov ecx, dword ptr [edx + 0xbe48] */ { const u32 m_ = (u32)(edx + 0xbe48u); ecx = (u32)(M32(m_)); }
  /* 004f4ef5 lea edx, [ecx + eax + 8] */ edx = (u32)((u32)(ecx + eax + 0x8u));
  /* 004f4ef9 add eax, 0xa0c */ { u32 a_ = eax, b_ = 0xa0cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f4efe add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4f01 mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 004f4f03 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f4f06 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f4f09 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f4f0a add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f4f0d cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4f0f jl 0x4f4ee0 */ if (LT_) goto L_004f4ee0;
L_004f4f11:;
  /* 004f4f11 mov eax, dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); eax = (u32)(M32(m_)); }
  /* 004f4f14 add eax, 0x498 */ { u32 a_ = eax, b_ = 0x498u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f4f19 mov dword ptr [0x7a6cdc], eax */ { const u32 m_ = (u32)(0x7a6cdcu); M32(m_) = (u32)(eax); }
  /* 004f4f1e mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 004f4f21 mov edx, dword ptr [eax + 0xec] */ { const u32 m_ = (u32)(eax + 0xecu); edx = (u32)(M32(m_)); }
  /* 004f4f27 mov ecx, dword ptr [eax + 0x2ec] */ { const u32 m_ = (u32)(eax + 0x2ecu); ecx = (u32)(M32(m_)); }
  /* 004f4f2d mov dword ptr [0x7a6ca4], edx */ { const u32 m_ = (u32)(0x7a6ca4u); M32(m_) = (u32)(edx); }
  /* 004f4f33 mov edx, dword ptr [eax + 0xbaf0] */ { const u32 m_ = (u32)(eax + 0xbaf0u); edx = (u32)(M32(m_)); }
  /* 004f4f39 imul edx, edx, 0x170 */ { s64 p_ = (s64)(s32)edx * (s64)(s32)0x170u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f4f3f mov esi, dword ptr [edx + eax + 0x3e4] */ { const u32 m_ = (u32)(edx + eax + 0x3e4u); esi = (u32)(M32(m_)); }
  /* 004f4f46 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f4f48 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004f4f4a mov dword ptr [0x7a6cac], eax */ { const u32 m_ = (u32)(0x7a6cacu); M32(m_) = (u32)(eax); }
  /* 004f4f4f mov dword ptr [0x7a6cc0], edx */ { const u32 m_ = (u32)(0x7a6cc0u); M32(m_) = (u32)(edx); }
  /* 004f4f55 mov dword ptr [0x7a6cb0], eax */ { const u32 m_ = (u32)(0x7a6cb0u); M32(m_) = (u32)(eax); }
  /* 004f4f5a mov dword ptr [0x7a6cc4], edx */ { const u32 m_ = (u32)(0x7a6cc4u); M32(m_) = (u32)(edx); }
  /* 004f4f60 mov dword ptr [0x7a6cb4], eax */ { const u32 m_ = (u32)(0x7a6cb4u); M32(m_) = (u32)(eax); }
  /* 004f4f65 mov dword ptr [0x7a6cc8], edx */ { const u32 m_ = (u32)(0x7a6cc8u); M32(m_) = (u32)(edx); }
  /* 004f4f6b mov dword ptr [0x7a6ca8], ecx */ { const u32 m_ = (u32)(0x7a6ca8u); M32(m_) = (u32)(ecx); }
  /* 004f4f71 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f4f73 mov dword ptr [0x7a6cb8], eax */ { const u32 m_ = (u32)(0x7a6cb8u); M32(m_) = (u32)(eax); }
  /* 004f4f78 mov dword ptr [0x7a6ccc], edx */ { const u32 m_ = (u32)(0x7a6cccu); M32(m_) = (u32)(edx); }
  /* 004f4f7e add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f4f81 mov dword ptr [0x7a6cd4], ecx */ { const u32 m_ = (u32)(0x7a6cd4u); M32(m_) = (u32)(ecx); }
  /* 004f4f87 mov dword ptr [0x7a6cbc], eax */ { const u32 m_ = (u32)(0x7a6cbcu); M32(m_) = (u32)(eax); }
  /* 004f4f8c mov dword ptr [0x7a6cd0], edx */ { const u32 m_ = (u32)(0x7a6cd0u); M32(m_) = (u32)(edx); }
  /* 004f4f92 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_004f4f94:;
  /* 004f4f94 mov eax, dword ptr [esi + edi*4] */ { const u32 m_ = (u32)(esi + edi * 4u); eax = (u32)(M32(m_)); }
  /* 004f4f97 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f4f99 je 0x4f4fc2 */ if (ZF_) goto L_004f4fc2;
  /* 004f4f9b mov dword ptr [ecx*4 + 0x7a6cac], eax */ { const u32 m_ = (u32)(ecx * 4u + 0x7a6cacu); M32(m_) = (u32)(eax); }
  /* 004f4fa2 mov ecx, dword ptr [esi + edi*4] */ { const u32 m_ = (u32)(esi + edi * 4u); ecx = (u32)(M32(m_)); }
  /* 004f4fa5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f4fa6 call 0x5e5880 */ esp -= 4; M32(esp) = 0x4f4fabu; SAVEALL; F_005e5880(c); ABI_CHECK(0x5e5880u, 0x4f4fa6u); RETCHK(0x4f4fabu, 0x4f4fa6u); LOADALL;
  /* 004f4fab mov ecx, dword ptr [0x7a6cd4] */ { const u32 m_ = (u32)(0x7a6cd4u); ecx = (u32)(M32(m_)); }
  /* 004f4fb1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4fb4 mov dword ptr [ecx*4 + 0x7a6cc0], eax */ { const u32 m_ = (u32)(ecx * 4u + 0x7a6cc0u); M32(m_) = (u32)(eax); }
  /* 004f4fbb inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f4fbc mov dword ptr [0x7a6cd4], ecx */ { const u32 m_ = (u32)(0x7a6cd4u); M32(m_) = (u32)(ecx); }
L_004f4fc2:;
  /* 004f4fc2 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f4fc3 cmp edi, 5 */ { u32 a_ = edi, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4fc6 jl 0x4f4f94 */ if (LT_) goto L_004f4f94;
  /* 004f4fc8 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 004f4fca call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f4fcfu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f4fcau); RETCHK(0x4f4fcfu, 0x4f4fcau); LOADALL;
  /* 004f4fcf xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f4fd1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f4fd4 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4fd6 je 0x4f4fe3 */ if (ZF_) goto L_004f4fe3;
  /* 004f4fd8 mov dword ptr [eax], 0x64d178 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64d178u); }
  /* 004f4fde mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 004f4fe1 jmp 0x4f4fe5 */ goto L_004f4fe5;
L_004f4fe3:;
  /* 004f4fe3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004f4fe5:;
  /* 004f4fe5 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f4fe7 mov dword ptr [ebx + 0x68], eax */ { const u32 m_ = (u32)(ebx + 0x68u); M32(m_) = (u32)(eax); }
  /* 004f4fea je 0x4f4ff7 */ if (ZF_) goto L_004f4ff7;
  /* 004f4fec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f4fed push 0x64f7c4 */ { u32 v_ = 0x64f7c4u; esp -= 4; M32(esp) = v_; }
  /* 004f4ff2 call 0x529310 */ esp -= 4; M32(esp) = 0x4f4ff7u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x4f4ff2u); RETCHK(0x4f4ff7u, 0x4f4ff2u); LOADALL;
L_004f4ff7:;
  /* 004f4ff7 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 004f4ff9 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f4ffeu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f4ff9u); RETCHK(0x4f4ffeu, 0x4f4ff9u); LOADALL;
  /* 004f4ffe add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5001 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5003 je 0x4f5010 */ if (ZF_) goto L_004f5010;
  /* 004f5005 mov dword ptr [eax], 0x64d178 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64d178u); }
  /* 004f500b mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 004f500e jmp 0x4f5012 */ goto L_004f5012;
L_004f5010:;
  /* 004f5010 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004f5012:;
  /* 004f5012 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5014 mov dword ptr [ebx + 0x6c], eax */ { const u32 m_ = (u32)(ebx + 0x6cu); M32(m_) = (u32)(eax); }
  /* 004f5017 je 0x4f5024 */ if (ZF_) goto L_004f5024;
  /* 004f5019 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f501a push 0x64f7b8 */ { u32 v_ = 0x64f7b8u; esp -= 4; M32(esp) = v_; }
  /* 004f501f call 0x529310 */ esp -= 4; M32(esp) = 0x4f5024u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x4f501fu); RETCHK(0x4f5024u, 0x4f501fu); LOADALL;
L_004f5024:;
  /* 004f5024 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004f5026 mov dword ptr [ebx + 0x14], esi */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(esi); }
  /* 004f5029 mov dword ptr [ebx + 0x18], esi */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(esi); }
  /* 004f502c mov dword ptr [ebx + 0x1c], esi */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(esi); }
  /* 004f502f mov dword ptr [ebx + 0x20], esi */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(esi); }
  /* 004f5032 lea eax, [ebx + 0x38] */ eax = (u32)((u32)(ebx + 0x38u));
  /* 004f5035 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 004f5037 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004f503a mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 004f503d mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
  /* 004f5040 mov dword ptr [eax + 0x10], edx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(edx); }
  /* 004f5043 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 004f5046 mov dword ptr [eax + 0x18], edx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(edx); }
  /* 004f5049 mov dword ptr [eax + 0x1c], edx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(edx); }
  /* 004f504c mov dword ptr [eax + 0x20], edx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(edx); }
  /* 004f504f mov dword ptr [eax + 0x24], edx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(edx); }
  /* 004f5052 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f5055 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5057 je 0x4f522a */ if (ZF_) goto L_004f522a;
  /* 004f505d mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f5060 lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 004f5063 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f5064 push 0x4f4b40 */ { u32 v_ = 0x4f4b40u; esp -= 4; M32(esp) = v_; }
  /* 004f5069 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f506a mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 004f506d mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 004f5070 call 0x5ac180 */ esp -= 4; M32(esp) = 0x4f5075u; SAVEALL; F_005ac180(c); ABI_CHECK(0x5ac180u, 0x4f5070u); RETCHK(0x4f5075u, 0x4f5070u); LOADALL;
  /* 004f5075 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 004f5078 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f507b cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f507d jle 0x4f5244 */ if ((ZF_|LT_)) goto L_004f5244;
  /* 004f5083 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 004f5086 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5088 jle 0x4f5244 */ if ((ZF_|LT_)) goto L_004f5244;
  /* 004f508e mov dword ptr [ebx + 0x18], eax */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(eax); }
  /* 004f5091 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f5093 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 004f5096 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 004f5099 mov dword ptr [ebx + 0x14], ecx */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(ecx); }
  /* 004f509c imul ecx, ecx, 0x54 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x54u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f509f mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 004f50a2 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 004f50a5 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 004f50a8 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 004f50ab mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 004f50ae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f50af mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 004f50b2 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x4f50b7u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x4f50b2u); RETCHK(0x4f50b7u, 0x4f50b2u); LOADALL;
  /* 004f50b7 mov edi, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edi = (u32)(M32(m_)); }
  /* 004f50ba lea edx, [edi + edi*4] */ edx = (u32)((u32)(edi + edi * 4u));
  /* 004f50bd mov dword ptr [ebx + 0x1c], eax */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 004f50c0 lea eax, [edx*8 + 4] */ eax = (u32)((u32)(edx * 8u + 0x4u));
  /* 004f50c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f50c8 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x4f50cdu; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x4f50c8u); RETCHK(0x4f50cdu, 0x4f50c8u); LOADALL;
  /* 004f50cd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f50d0 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f50d3 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f50d5 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 004f50d8 je 0x4f50fa */ if (ZF_) goto L_004f50fa;
  /* 004f50da push 0x4f4620 */ { u32 v_ = 0x4f4620u; esp -= 4; M32(esp) = v_; }
  /* 004f50df push 0x4f4600 */ { u32 v_ = 0x4f4600u; esp -= 4; M32(esp) = v_; }
  /* 004f50e4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f50e5 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 004f50e7 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f50ea push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 004f50ec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f50ed mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 004f50f0 call 0x5fe7d0 */ esp -= 4; M32(esp) = 0x4f50f5u; SAVEALL; F_005fe7d0(c); ABI_CHECK(0x5fe7d0u, 0x4f50f0u); RETCHK(0x4f50f5u, 0x4f50f0u); LOADALL;
  /* 004f50f5 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 004f50f8 jmp 0x4f50fc */ goto L_004f50fc;
L_004f50fa:;
  /* 004f50fa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004f50fc:;
  /* 004f50fc mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004f5103 mov edi, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); edi = (u32)(M32(m_)); }
  /* 004f5106 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5108 mov dword ptr [ebx + 0x20], eax */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(eax); }
  /* 004f510b je 0x4f523f */ if (ZF_) goto L_004f523f;
  /* 004f5111 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5113 je 0x4f523f */ if (ZF_) goto L_004f523f;
  /* 004f5119 mov ecx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004f511c imul ecx, ecx, 0x54 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x54u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f511f mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004f5121 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 004f5124 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f5126 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004f5128 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004f512a and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f512d rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 004f512f mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 004f5132 mov ecx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 004f5135 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 004f5138 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f513b lea edx, [eax + 0xbaf4] */ edx = (u32)((u32)(eax + 0xbaf4u));
  /* 004f5141 mov eax, dword ptr [eax + 0xec] */ { const u32 m_ = (u32)(eax + 0xecu); eax = (u32)(M32(m_)); }
  /* 004f5147 mov dword ptr [ebp - 0x30], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ecx); }
  /* 004f514a mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 004f514c mov dword ptr [ebp - 0x28], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ecx); }
  /* 004f514f mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f5152 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f5155 mov dword ptr [ebp - 0x24], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ecx); }
  /* 004f5158 lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 004f515b mov dword ptr [ebp - 0x20], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edx); }
  /* 004f515e mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f5161 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f5162 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 004f5165 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f5168 push 0x4f4ae0 */ { u32 v_ = 0x4f4ae0u; esp -= 4; M32(esp) = v_; }
  /* 004f516d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f516e call 0x5ac180 */ esp -= 4; M32(esp) = 0x4f5173u; SAVEALL; F_005ac180(c); ABI_CHECK(0x5ac180u, 0x4f516eu); RETCHK(0x4f5173u, 0x4f516eu); LOADALL;
  /* 004f5173 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 004f5176 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5179 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f517b jle 0x4f522a */ if ((ZF_|LT_)) goto L_004f522a;
  /* 004f5181 mov edi, eax */ { edi = (u32)(eax); }
  /* 004f5183 imul edi, edi, 0x54 */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x54u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f5186 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 004f5189 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004f5190:;
  /* 004f5190 mov ecx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 004f5193 mov eax, dword ptr [ecx + edi - 0x44] */ { const u32 m_ = (u32)(ecx + edi + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 004f5197 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f519a sub edi, 0x54 */ { u32 a_ = edi, b_ = 0x54u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f519d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f519e mov dword ptr [ebp + 8], edi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edi); }
  /* 004f51a1 call 0x577800 */ esp -= 4; M32(esp) = 0x4f51a6u; SAVEALL; F_00577800(c); ABI_CHECK(0x577800u, 0x4f51a1u); RETCHK(0x4f51a6u, 0x4f51a1u); LOADALL;
  /* 004f51a6 mov ecx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 004f51a9 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004f51ab add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f51ad mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004f51af mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f51b2 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 004f51b5 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f51b8 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 004f51bb mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f51be mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 004f51c1 mov ecx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 004f51c4 mov edx, dword ptr [ecx + edi + 0x50] */ { const u32 m_ = (u32)(ecx + edi + 0x50u); edx = (u32)(M32(m_)); }
  /* 004f51c8 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004f51cd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f51d0 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f51d2 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f51d5 jle 0x4f5221 */ if ((ZF_|LT_)) goto L_004f5221;
  /* 004f51d7 lea edx, [edi + 0x14] */ edx = (u32)((u32)(edi + 0x14u));
  /* 004f51da mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 004f51dd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_004f51e0:;
  /* 004f51e0 mov eax, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); eax = (u32)(M32(m_)); }
  /* 004f51e3 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f51e6 mov eax, dword ptr [ecx + eax] */ { const u32 m_ = (u32)(ecx + eax); eax = (u32)(M32(m_)); }
  /* 004f51e9 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f51ec push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f51ed call 0x577800 */ esp -= 4; M32(esp) = 0x4f51f2u; SAVEALL; F_00577800(c); ABI_CHECK(0x577800u, 0x4f51edu); RETCHK(0x4f51f2u, 0x4f51edu); LOADALL;
  /* 004f51f2 mov esi, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); esi = (u32)(M32(m_)); }
  /* 004f51f5 add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f51f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f51fa mov edi, eax */ { edi = (u32)(eax); }
  /* 004f51fc call 0x4f4b90 */ esp -= 4; M32(esp) = 0x4f5201u; SAVEALL; F_004f4b90(c); ABI_CHECK(0x4f4b90u, 0x4f51fcu); RETCHK(0x4f5201u, 0x4f51fcu); LOADALL;
  /* 004f5201 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 004f5204 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004f5207 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f520a mov ecx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 004f520d mov esi, dword ptr [ecx + edx + 0x50] */ { const u32 m_ = (u32)(ecx + edx + 0x50u); esi = (u32)(M32(m_)); }
  /* 004f5211 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f5214 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f5215 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5217 mov dword ptr [ebp + 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edi); }
  /* 004f521a mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f521d mov edi, edx */ { edi = (u32)(edx); }
  /* 004f521f jl 0x4f51e0 */ if (LT_) goto L_004f51e0;
L_004f5221:;
  /* 004f5221 dec dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f5224 jne 0x4f5190 */ if (!ZF_) goto L_004f5190;
L_004f522a:;
  /* 004f522a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f522b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f522c mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f522e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f522f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f5232 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004f5239 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f523b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f523c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f523f:;
  /* 004f523f call 0x4f5320 */ esp -= 4; M32(esp) = 0x4f5244u; SAVEALL; F_004f5320(c); ABI_CHECK(0x4f5320u, 0x4f523fu); RETCHK(0x4f5244u, 0x4f523fu); LOADALL;
L_004f5244:;
  /* 004f5244 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f5247 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f5248 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f5249 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f524b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f524c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004f5253 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f5255 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f5256 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004f5260(CPU *c) {
  NATIVE_HOOK(0x4f5260u) REGS; LOADALL;
L_004f5260:;
  /* 004f5260 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f5261 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f5263 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f5264 mov bl, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f5267 test bl, 2 */ { u32 a_ = (ebx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f526a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f526b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f526d je 0x4f529b */ if (ZF_) goto L_004f529b;
  /* 004f526f mov eax, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f5272 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f5273 push 0x4f4620 */ { u32 v_ = 0x4f4620u; esp -= 4; M32(esp) = v_; }
  /* 004f5278 lea edi, [esi - 4] */ edi = (u32)((u32)(esi + 0xfffffffcu));
  /* 004f527b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f527c push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 004f527e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f527f call 0x5fe890 */ esp -= 4; M32(esp) = 0x4f5284u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x4f527fu); RETCHK(0x4f5284u, 0x4f527fu); LOADALL;
  /* 004f5284 test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f5287 je 0x4f5292 */ if (ZF_) goto L_004f5292;
  /* 004f5289 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f528a call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x4f528fu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x4f528au); RETCHK(0x4f528fu, 0x4f528au); LOADALL;
  /* 004f528f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f5292:;
  /* 004f5292 mov eax, edi */ { eax = (u32)(edi); }
  /* 004f5294 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f5295 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f5296 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f5297 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f5298 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f529b:;
  /* 004f529b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f529d call 0x4f4620 */ esp -= 4; M32(esp) = 0x4f52a2u; SAVEALL; F_004f4620(c); ABI_CHECK(0x4f4620u, 0x4f529du); RETCHK(0x4f52a2u, 0x4f529du); LOADALL;
  /* 004f52a2 test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f52a5 je 0x4f52b0 */ if (ZF_) goto L_004f52b0;
  /* 004f52a7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f52a8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f52adu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f52a8u); RETCHK(0x4f52adu, 0x4f52a8u); LOADALL;
  /* 004f52ad add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f52b0:;
  /* 004f52b0 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f52b2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f52b3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f52b4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f52b5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f52c0(CPU *c) {
  NATIVE_HOOK(0x4f52c0u) REGS; LOADALL;
L_004f52c0:;
  /* 004f52c0 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f52c3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f52c5 je 0x4f531b */ if (ZF_) goto L_004f531b;
  /* 004f52c7 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f52ca push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f52cb mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 004f52cd cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f52cf je 0x4f52ed */ if (ZF_) goto L_004f52ed;
L_004f52d1:;
  /* 004f52d1 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f52d4 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004f52d6 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f52d9u; SAVEALL; call_ind(c, t_); RETCHK(0x4f52d9u, 0x4f52d6u); LOADALL; }
  /* 004f52d9 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f52dc test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f52de je 0x4f52e6 */ if (ZF_) goto L_004f52e6;
  /* 004f52e0 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f52e2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f52e4 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f52e6u; SAVEALL; call_ind(c, t_); RETCHK(0x4f52e6u, 0x4f52e4u); LOADALL; }
L_004f52e6:;
  /* 004f52e6 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 004f52e8 cmp esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f52eb jne 0x4f52d1 */ if (!ZF_) goto L_004f52d1;
L_004f52ed:;
  /* 004f52ed mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f52f0 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004f52f2 mov dword ptr [ecx], ecx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ecx); }
  /* 004f52f4 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f52f7 mov dword ptr [ecx + 4], ecx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004f52fa cmp eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f52fd mov dword ptr [edi + 0xc], 0 */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 004f5304 je 0x4f531a */ if (ZF_) goto L_004f531a;
L_004f5306:;
  /* 004f5306 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 004f5308 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f5309 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f530eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f5309u); RETCHK(0x4f530eu, 0x4f5309u); LOADALL;
  /* 004f530e mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f5311 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5314 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5316 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f5318 jne 0x4f5306 */ if (!ZF_) goto L_004f5306;
L_004f531a:;
  /* 004f531a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_004f531b:;
  /* 004f531b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f5320(CPU *c) {
  NATIVE_HOOK(0x4f5320u) REGS; LOADALL;
L_004f5320:;
  /* 004f5320 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f5321 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f5323 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f5324 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f5325 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f5326 lea edi, [ebx + 0xb4] */ edi = (u32)((u32)(ebx + 0xb4u));
  /* 004f532c mov dword ptr [ebp - 4], 0x15 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x15u); }
L_004f5333:;
  /* 004f5333 mov esi, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 004f5336 sub edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f5339 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f533b je 0x4f5354 */ if (ZF_) goto L_004f5354;
  /* 004f533d call 0x5293f0 */ esp -= 4; M32(esp) = 0x4f5342u; SAVEALL; F_005293f0(c); ABI_CHECK(0x5293f0u, 0x4f533du); RETCHK(0x4f5342u, 0x4f533du); LOADALL;
  /* 004f5342 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 004f5344 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5346 je 0x4f534e */ if (ZF_) goto L_004f534e;
  /* 004f5348 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004f534a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f534c call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f534eu; SAVEALL; call_ind(c, t_); RETCHK(0x4f534eu, 0x4f534cu); LOADALL; }
L_004f534e:;
  /* 004f534e mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
L_004f5354:;
  /* 004f5354 dec dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f5357 jne 0x4f5333 */ if (!ZF_) goto L_004f5333;
  /* 004f5359 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f535b mov dword ptr [ebx + 0xb4], ecx */ { const u32 m_ = (u32)(ebx + 0xb4u); M32(m_) = (u32)(ecx); }
  /* 004f5361 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 004f5363 mov dword ptr [ebx + 0xb8], ecx */ { const u32 m_ = (u32)(ebx + 0xb8u); M32(m_) = (u32)(ecx); }
  /* 004f5369 call 0x4f52c0 */ esp -= 4; M32(esp) = 0x4f536eu; SAVEALL; F_004f52c0(c); ABI_CHECK(0x4f52c0u, 0x4f5369u); RETCHK(0x4f536eu, 0x4f5369u); LOADALL;
  /* 004f536e mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 004f5371 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f5373 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5375 je 0x4f53bd */ if (ZF_) goto L_004f53bd;
  /* 004f5377 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f537a cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f537c jle 0x4f539b */ if ((ZF_|LT_)) goto L_004f539b;
  /* 004f537e lea edi, [eax + eax*4] */ edi = (u32)((u32)(eax + eax * 4u));
  /* 004f5381 shl edi, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 004f5384 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
L_004f5387:;
  /* 004f5387 mov esi, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); esi = (u32)(M32(m_)); }
  /* 004f538a sub edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f538d add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f538f call 0x4f4700 */ esp -= 4; M32(esp) = 0x4f5394u; SAVEALL; F_004f4700(c); ABI_CHECK(0x4f4700u, 0x4f538fu); RETCHK(0x4f5394u, 0x4f538fu); LOADALL;
  /* 004f5394 dec dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f5397 jne 0x4f5387 */ if (!ZF_) goto L_004f5387;
  /* 004f5399 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_004f539b:;
  /* 004f539b mov ecx, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); ecx = (u32)(M32(m_)); }
  /* 004f539e cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f53a0 je 0x4f53bd */ if (ZF_) goto L_004f53bd;
  /* 004f53a2 mov edx, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 004f53a5 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f53a7 lea eax, [ecx - 4] */ eax = (u32)((u32)(ecx + 0xfffffffcu));
  /* 004f53aa je 0x4f53b4 */ if (ZF_) goto L_004f53b4;
  /* 004f53ac mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f53ae push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 004f53b0 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f53b2u; SAVEALL; call_ind(c, t_); RETCHK(0x4f53b2u, 0x4f53b0u); LOADALL; }
  /* 004f53b2 jmp 0x4f53bd */ goto L_004f53bd;
L_004f53b4:;
  /* 004f53b4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f53b5 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x4f53bau; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x4f53b5u); RETCHK(0x4f53bau, 0x4f53b5u); LOADALL;
  /* 004f53ba add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f53bd:;
  /* 004f53bd mov eax, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); eax = (u32)(M32(m_)); }
  /* 004f53c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f53c1 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x4f53c6u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x4f53c1u); RETCHK(0x4f53c6u, 0x4f53c1u); LOADALL;
  /* 004f53c6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f53c9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f53ca mov dword ptr [ebx + 0x14], esi */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(esi); }
  /* 004f53cd mov dword ptr [ebx + 0x18], esi */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(esi); }
  /* 004f53d0 mov dword ptr [ebx + 0x1c], esi */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(esi); }
  /* 004f53d3 mov dword ptr [ebx + 0x20], esi */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(esi); }
  /* 004f53d6 mov dword ptr [ebx + 0x24], esi */ { const u32 m_ = (u32)(ebx + 0x24u); M32(m_) = (u32)(esi); }
  /* 004f53d9 mov dword ptr [ebx + 0x10], esi */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(esi); }
  /* 004f53dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f53dd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f53df pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f53e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f53f0(CPU *c) {
  NATIVE_HOOK(0x4f53f0u) REGS; LOADALL;
L_004f53f0:;
  /* 004f53f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f53f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f53f3 sub esp, 0x120 */ { u32 a_ = esp, b_ = 0x120u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f53f9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f53fa mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004f53fd mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f5400 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004f5402 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5404 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f5405 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f5406 mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 004f5409 jle 0x4f5495 */ if ((ZF_|LT_)) goto L_004f5495;
  /* 004f540f lea edi, [ebx + 0x30] */ edi = (u32)((u32)(ebx + 0x30u));
  /* 004f5412 lea eax, [ebp - 0x118] */ eax = (u32)((u32)(ebp + 0xfffffee8u));
  /* 004f5418 jmp 0x4f5420 */ goto L_004f5420;
L_004f5420:;
  /* 004f5420 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 004f5422 mov dword ptr [eax + 4], 0x40400000 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x40400000u); }
  /* 004f5429 mov edx, dword ptr [ecx + 0x554] */ { const u32 m_ = (u32)(ecx + 0x554u); edx = (u32)(M32(m_)); }
  /* 004f542f fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 004f5431 mov esi, dword ptr [ecx + 0x55c] */ { const u32 m_ = (u32)(ecx + 0x55cu); esi = (u32)(M32(m_)); }
  /* 004f5437 fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f543d add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f5440 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f5443 fstp dword ptr [eax - 0x18] */ { const u32 m_ = (u32)(eax + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f5446 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f5449 fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f544f fstp dword ptr [eax - 0x14] */ { const u32 m_ = (u32)(eax + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f5452 fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f5455 fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f545b fstp dword ptr [eax - 0x10] */ { const u32 m_ = (u32)(eax + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f545e fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 004f5460 fadd dword ptr [eax - 0x18] */ { const u32 m_ = (u32)(eax + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f5463 fstp dword ptr [eax - 0x18] */ { const u32 m_ = (u32)(eax + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f5466 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f5469 fadd dword ptr [eax - 0x14] */ { const u32 m_ = (u32)(eax + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f546c fstp dword ptr [eax - 0x14] */ { const u32 m_ = (u32)(eax + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f546f fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f5472 fadd dword ptr [eax - 0x10] */ { const u32 m_ = (u32)(eax + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f5475 fstp dword ptr [eax - 0x10] */ { const u32 m_ = (u32)(eax + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f5478 mov edx, dword ptr [ecx + 0x98] */ { const u32 m_ = (u32)(ecx + 0x98u); edx = (u32)(M32(m_)); }
  /* 004f547e mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004f5481 mov dword ptr [ebp + ecx*4 - 0x90], edx */ { const u32 m_ = (u32)(ebp + ecx * 4u + 0xffffff70u); M32(m_) = (u32)(edx); }
  /* 004f5488 mov edx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); edx = (u32)(M32(m_)); }
  /* 004f548b inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f548c cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f548e mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 004f5491 jl 0x4f5420 */ if (LT_) goto L_004f5420;
  /* 004f5493 mov edx, ecx */ { edx = (u32)(ecx); }
L_004f5495:;
  /* 004f5495 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f5498 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f549a je 0x4f58d3 */ if (ZF_) goto L_004f58d3;
  /* 004f54a0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f54a2 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 004f54a5 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 004f54a8 mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 004f54ab mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 004f54ae mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 004f54b1 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 004f54b4 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 004f54b7 mov eax, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); eax = (u32)(M32(m_)); }
  /* 004f54ba test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f54bc mov dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x0u); }
  /* 004f54c3 je 0x4f559f */ if (ZF_) goto L_004f559f;
  /* 004f54c9 mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f54cc mov esi, dword ptr [ecx + 0xbcc4] */ { const u32 m_ = (u32)(ecx + 0xbcc4u); esi = (u32)(M32(m_)); }
  /* 004f54d2 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f54d4 je 0x4f559f */ if (ZF_) goto L_004f559f;
  /* 004f54da mov eax, dword ptr [ecx + 0xbcc8] */ { const u32 m_ = (u32)(ecx + 0xbcc8u); eax = (u32)(M32(m_)); }
  /* 004f54e0 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f54e2 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f54e5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f54e7 je 0x4f559f */ if (ZF_) goto L_004f559f;
  /* 004f54ed mov eax, dword ptr [ecx + 0xbcc8] */ { const u32 m_ = (u32)(ecx + 0xbcc8u); eax = (u32)(M32(m_)); }
  /* 004f54f3 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f54f5 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 004f54f8 je 0x4f559f */ if (ZF_) goto L_004f559f;
  /* 004f54fe mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004f5500 shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 004f5503 lea eax, [ebp + ecx - 0x118] */ eax = (u32)((u32)(ebp + ecx + 0xfffffee8u));
  /* 004f550a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_004f5510:;
  /* 004f5510 cmp edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5513 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 004f5515 mov dword ptr [eax + 4], 0x40400000 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x40400000u); }
  /* 004f551c mov edi, dword ptr [ecx + 0x330] */ { const u32 m_ = (u32)(ecx + 0x330u); edi = (u32)(M32(m_)); }
  /* 004f5522 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 004f5524 fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f552a fstp dword ptr [eax - 8] */ { const u32 m_ = (u32)(eax + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f552d mov edi, dword ptr [ecx + 0x330] */ { const u32 m_ = (u32)(ecx + 0x330u); edi = (u32)(M32(m_)); }
  /* 004f5533 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f5536 fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f553c fstp dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f553f mov edi, dword ptr [ecx + 0x330] */ { const u32 m_ = (u32)(ecx + 0x330u); edi = (u32)(M32(m_)); }
  /* 004f5545 fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f5548 fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f554e fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f5550 mov edi, dword ptr [ecx + 0x338] */ { const u32 m_ = (u32)(ecx + 0x338u); edi = (u32)(M32(m_)); }
  /* 004f5556 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 004f5558 fadd dword ptr [eax - 8] */ { const u32 m_ = (u32)(eax + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f555b fstp dword ptr [eax - 8] */ { const u32 m_ = (u32)(eax + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f555e mov edi, dword ptr [ecx + 0x338] */ { const u32 m_ = (u32)(ecx + 0x338u); edi = (u32)(M32(m_)); }
  /* 004f5564 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f5567 fadd dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f556a fstp dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f556d mov edi, dword ptr [ecx + 0x338] */ { const u32 m_ = (u32)(ecx + 0x338u); edi = (u32)(M32(m_)); }
  /* 004f5573 fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f5576 fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f5578 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f557a jge 0x4f558e */ if (!LT_) goto L_004f558e;
  /* 004f557c mov dword ptr [ebp + edx*4 - 0x48], ecx */ { const u32 m_ = (u32)(ebp + edx * 4u + 0xffffffb8u); M32(m_) = (u32)(ecx); }
  /* 004f5580 mov ecx, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 004f5583 mov dword ptr [ebp + edx*4 - 0x90], ecx */ { const u32 m_ = (u32)(ebp + edx * 4u + 0xffffff70u); M32(m_) = (u32)(ecx); }
  /* 004f558a inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f558b add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_004f558e:;
  /* 004f558e mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 004f5591 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f5594 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5596 jne 0x4f5510 */ if (!ZF_) goto L_004f5510;
  /* 004f559c mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
L_004f559f:;
  /* 004f559f mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f55a2 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 004f55a4 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f55a6 mov byte ptr [ebp - 1], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)(0x0u); }
  /* 004f55aa mov dword ptr [ebp - 8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 004f55ad je 0x4f58d3 */ if (ZF_) goto L_004f58d3;
  /* 004f55b3 jmp 0x4f55c0 */ goto L_004f55c0;
L_004f55b5:;
  /* 004f55b5 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 004f55b8 jmp 0x4f55c0 */ goto L_004f55c0;
L_004f55c0:;
  /* 004f55c0 mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 004f55c3 mov ecx, dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 004f55c6 cmp ecx, 0xb */ { u32 a_ = ecx, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f55c9 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004f55cb mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 004f55ce je 0x4f5822 */ if (ZF_) goto L_004f5822;
  /* 004f55d4 fld dword ptr [edi + 0x54] */ { const u32 m_ = (u32)(edi + 0x54u); FPUSH((double)MF32(m_)); }
  /* 004f55d7 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f55dd fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f55df test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f55e2 jp 0x4f55ec */ if (PF_) goto L_004f55ec;
  /* 004f55e4 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f55e6 jne 0x4f5822 */ if (!ZF_) goto L_004f5822;
L_004f55ec:;
  /* 004f55ec mov al, byte ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f55ef test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f55f1 je 0x4f55f7 */ if (ZF_) goto L_004f55f7;
  /* 004f55f3 mov esi, edx */ { esi = (u32)(edx); }
  /* 004f55f5 jmp 0x4f55ff */ goto L_004f55ff;
L_004f55f7:;
  /* 004f55f7 mov ecx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004f55fa mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 004f55fd mov esi, ecx */ { esi = (u32)(ecx); }
L_004f55ff:;
  /* 004f55ff mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004f5601 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f5602 lea eax, [ebp - 0x90] */ eax = (u32)((u32)(ebp + 0xffffff70u));
  /* 004f5608 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f5609 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f560c lea ecx, [ebp - 0x120] */ ecx = (u32)((u32)(ebp + 0xfffffee0u));
  /* 004f5612 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f5613 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f5614 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f5616 call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f5619u; SAVEALL; call_ind(c, t_); RETCHK(0x4f5619u, 0x4f5616u); LOADALL; }
  /* 004f5619 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f561b mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 004f561e jle 0x4f58a9 */ if ((ZF_|LT_)) goto L_004f58a9;
  /* 004f5624 lea edx, [ebx + esi*4 + 0x28] */ edx = (u32)((u32)(ebx + esi * 4u + 0x28u));
  /* 004f5628 jmp 0x4f5630 */ goto L_004f5630;
L_004f562a:;
  /* 004f562a mov edx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edx = (u32)(M32(m_)); }
  /* 004f562d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_004f5630:;
  /* 004f5630 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f5631 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f5633 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004f5638 shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f563a mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 004f563d sub edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f5640 mov dword ptr [ebp - 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(esi); }
  /* 004f5643 test ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5645 mov dword ptr [ebp - 0x1c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edx); }
  /* 004f5648 je 0x4f5815 */ if (ZF_) goto L_004f5815;
  /* 004f564e mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f5651 mov ecx, dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); ecx = (u32)(M32(m_)); }
  /* 004f5654 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5656 mov eax, dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); eax = (u32)(M32(m_)); }
  /* 004f5659 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f565a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f565b jge 0x4f5764 */ if (!LT_) goto L_004f5764;
  /* 004f5661 mov ebx, dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); ebx = (u32)(M32(m_)); }
  /* 004f5664 mov esi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f5667 call 0x4e83b0 */ esp -= 4; M32(esp) = 0x4f566cu; SAVEALL; F_004e83b0(c); ABI_CHECK(0x4e83b0u, 0x4f5667u); RETCHK(0x4f566cu, 0x4f5667u); LOADALL;
  /* 004f566c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f566f mov ebx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ebx = (u32)(M32(m_)); }
  /* 004f5672 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5674 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 004f5677 jle 0x4f56eb */ if ((ZF_|LT_)) goto L_004f56eb;
  /* 004f5679 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f567b imul ecx, ecx, 0xa0c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0xa0cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f5681 lea eax, [esi + ebx*4 + 0x30] */ eax = (u32)((u32)(esi + ebx * 4u + 0x30u));
L_004f5685:;
  /* 004f5685 mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 004f5688 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f5689 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f568c sub ecx, 0xa0c */ { u32 a_ = ecx, b_ = 0xa0cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f5692 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5694 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 004f5697 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 004f569a je 0x4f56e7 */ if (ZF_) goto L_004f56e7;
  /* 004f569c mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004f569e mov edx, dword ptr [edx + 0x98] */ { const u32 m_ = (u32)(edx + 0x98u); edx = (u32)(M32(m_)); }
  /* 004f56a4 cmp edx, dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f56a7 jne 0x4f56e7 */ if (!ZF_) goto L_004f56e7;
  /* 004f56a9 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 004f56ac mov eax, dword ptr [ebp + eax*4 - 0x48] */ { const u32 m_ = (u32)(ebp + eax * 4u + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 004f56b0 mov edx, dword ptr [eax + 0x314] */ { const u32 m_ = (u32)(eax + 0x314u); edx = (u32)(M32(m_)); }
  /* 004f56b6 mov eax, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); eax = (u32)(M32(m_)); }
  /* 004f56b9 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 004f56bb push 0x3e4ccccd */ { u32 v_ = 0x3e4ccccdu; esp -= 4; M32(esp) = v_; }
  /* 004f56c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f56c1 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 004f56c4 mov eax, dword ptr [eax + 0xbe48] */ { const u32 m_ = (u32)(eax + 0xbe48u); eax = (u32)(M32(m_)); }
  /* 004f56ca lea esi, [eax + ecx + 0x780] */ esi = (u32)((u32)(eax + ecx + 0x780u));
  /* 004f56d1 add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f56d4 mov ecx, 0x63f94c */ { ecx = (u32)(0x63f94cu); }
  /* 004f56d9 call 0x4f0240 */ esp -= 4; M32(esp) = 0x4f56deu; SAVEALL; F_004f0240(c); ABI_CHECK(0x4f0240u, 0x4f56d9u); RETCHK(0x4f56deu, 0x4f56d9u); LOADALL;
  /* 004f56de mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f56e1 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 004f56e4 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_004f56e7:;
  /* 004f56e7 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f56e9 jg 0x4f5685 */ if (!(ZF_|LT_)) goto L_004f5685;
L_004f56eb:;
  /* 004f56eb mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 004f56ee test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f56f0 je 0x4f57eb */ if (ZF_) goto L_004f57eb;
  /* 004f56f6 mov al, byte ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f56f9 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f56fb jne 0x4f57eb */ if (!ZF_) goto L_004f57eb;
  /* 004f5701 mov dword ptr [ebp - 0x70], 0x10000035 */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(0x10000035u); }
  /* 004f5708 mov ecx, dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); ecx = (u32)(M32(m_)); }
  /* 004f570b mov dword ptr [ebp - 0x68], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(ecx); }
  /* 004f570e mov edx, dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); edx = (u32)(M32(m_)); }
  /* 004f5711 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f5714 mov dword ptr [ebp - 0x64], edx */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(edx); }
  /* 004f5717 mov eax, dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); eax = (u32)(M32(m_)); }
  /* 004f571a mov dword ptr [ebp - 0x5c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(eax); }
  /* 004f571d mov eax, dword ptr [ebp + ecx*4 - 0x90] */ { const u32 m_ = (u32)(ebp + ecx * 4u + 0xffffff70u); eax = (u32)(M32(m_)); }
  /* 004f5724 mov dword ptr [ebp - 0x60], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(eax); }
  /* 004f5727 mov dword ptr [ebp - 0x6c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(eax); }
  /* 004f572a lea edx, [edi + 0x2c] */ edx = (u32)((u32)(edi + 0x2cu));
  /* 004f572d mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 004f572f mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 004f5732 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f5735 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 004f5738 mov dword ptr [ebp - 0x54], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ecx); }
  /* 004f573b mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f573e mov dword ptr [ebp - 0x50], edx */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(edx); }
  /* 004f5741 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 004f5743 mov ecx, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 004f5749 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f574b je 0x4f57eb */ if (ZF_) goto L_004f57eb;
  /* 004f5751 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 004f5754 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f5755 mov edx, 0x28 */ { edx = (u32)(0x28u); }
  /* 004f575a call 0x55f4b0 */ esp -= 4; M32(esp) = 0x4f575fu; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x4f575au); RETCHK(0x4f575fu, 0x4f575au); LOADALL;
  /* 004f575f jmp 0x4f57eb */ goto L_004f57eb;
L_004f5764:;
  /* 004f5764 mov edx, dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); edx = (u32)(M32(m_)); }
  /* 004f5767 mov ebx, dword ptr [ebp + esi*4 - 0x48] */ { const u32 m_ = (u32)(ebp + esi * 4u + 0xffffffb8u); ebx = (u32)(M32(m_)); }
  /* 004f576b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f576c mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004f576e call 0x4deb90 */ esp -= 4; M32(esp) = 0x4f5773u; SAVEALL; F_004deb90(c); ABI_CHECK(0x4deb90u, 0x4f576eu); RETCHK(0x4f5773u, 0x4f576eu); LOADALL;
  /* 004f5773 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f5776 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 004f5779 mov eax, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f577c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f577e jle 0x4f57eb */ if ((ZF_|LT_)) goto L_004f57eb;
  /* 004f5780 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f5782 imul ecx, ecx, 0xa0c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0xa0cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f5788 lea edx, [edx + eax*4 + 0x30] */ edx = (u32)((u32)(edx + eax * 4u + 0x30u));
  /* 004f578c mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 004f578f nop */ ;
L_004f5790:;
  /* 004f5790 mov eax, dword ptr [edx - 4] */ { const u32 m_ = (u32)(edx + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f5793 mov eax, dword ptr [eax + 0x98] */ { const u32 m_ = (u32)(eax + 0x98u); eax = (u32)(M32(m_)); }
  /* 004f5799 mov esi, dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); esi = (u32)(M32(m_)); }
  /* 004f579c sub edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f579f sub ecx, 0xa0c */ { u32 a_ = ecx, b_ = 0xa0cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f57a5 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f57a7 mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 004f57aa mov dword ptr [ebp - 0x24], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ecx); }
  /* 004f57ad jne 0x4f57e6 */ if (!ZF_) goto L_004f57e6;
  /* 004f57af mov eax, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 004f57b2 mov edx, dword ptr [ebx + 0x314] */ { const u32 m_ = (u32)(ebx + 0x314u); edx = (u32)(M32(m_)); }
  /* 004f57b8 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 004f57ba push 0x3e4ccccd */ { u32 v_ = 0x3e4ccccdu; esp -= 4; M32(esp) = v_; }
  /* 004f57bf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f57c0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f57c3 mov eax, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); eax = (u32)(M32(m_)); }
  /* 004f57c6 mov eax, dword ptr [eax + 0xbe48] */ { const u32 m_ = (u32)(eax + 0xbe48u); eax = (u32)(M32(m_)); }
  /* 004f57cc lea esi, [eax + ecx + 0x780] */ esi = (u32)((u32)(eax + ecx + 0x780u));
  /* 004f57d3 add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f57d6 mov ecx, 0x63f94c */ { ecx = (u32)(0x63f94cu); }
  /* 004f57db call 0x4f0240 */ esp -= 4; M32(esp) = 0x4f57e0u; SAVEALL; F_004f0240(c); ABI_CHECK(0x4f0240u, 0x4f57dbu); RETCHK(0x4f57e0u, 0x4f57dbu); LOADALL;
  /* 004f57e0 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 004f57e3 mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
L_004f57e6:;
  /* 004f57e6 dec dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f57e9 jne 0x4f5790 */ if (!ZF_) goto L_004f5790;
L_004f57eb:;
  /* 004f57eb cmp dword ptr [ebp - 0x18], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f57ef jne 0x4f580f */ if (!ZF_) goto L_004f580f;
  /* 004f57f1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f57f4 mov edx, dword ptr [ebp + ecx*4 - 0x90] */ { const u32 m_ = (u32)(ebp + ecx * 4u + 0xffffff70u); edx = (u32)(M32(m_)); }
  /* 004f57fb mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004f57fd lea ecx, [ebp - 0xa0] */ ecx = (u32)((u32)(ebp + 0xffffff60u));
  /* 004f5803 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f5804 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f5806 mov dword ptr [ebp - 0x94], edx */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(edx); }
  /* 004f580c call dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f580fu; SAVEALL; call_ind(c, t_); RETCHK(0x4f580fu, 0x4f580cu); LOADALL; }
L_004f580f:;
  /* 004f580f mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004f5812 mov esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); esi = (u32)(M32(m_)); }
L_004f5815:;
  /* 004f5815 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5817 jg 0x4f562a */ if (!(ZF_|LT_)) goto L_004f562a;
  /* 004f581d jmp 0x4f58a9 */ goto L_004f58a9;
L_004f5822:;
  /* 004f5822 mov al, byte ptr [ebp - 1] */ { const u32 m_ = (u32)(ebp + 0xffffffffu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f5825 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f5827 jne 0x4f5876 */ if (!ZF_) goto L_004f5876;
  /* 004f5829 mov ecx, dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); ecx = (u32)(M32(m_)); }
  /* 004f582c sub ecx, 0x11f0e540 */ { u32 a_ = ecx, b_ = 0x11f0e540u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f5832 mov eax, 0x431bde83 */ { eax = (u32)(0x431bde83u); }
  /* 004f5837 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f5839 sar edx, 0x12 */ { u32 n_ = (18u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004f583c mov eax, edx */ { eax = (u32)(edx); }
  /* 004f583e shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f5841 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f5843 mov ecx, dword ptr [ebx + eax*4 + 0x60] */ { const u32 m_ = (u32)(ebx + eax * 4u + 0x60u); ecx = (u32)(M32(m_)); }
  /* 004f5847 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5849 je 0x4f5876 */ if (ZF_) goto L_004f5876;
  /* 004f584b mov ecx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004f584e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5850 jle 0x4f5876 */ if ((ZF_|LT_)) goto L_004f5876;
  /* 004f5852 mov edx, dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); edx = (u32)(M32(m_)); }
  /* 004f5855 lea eax, [ebx + ecx*4 + 0x30] */ eax = (u32)((u32)(ebx + ecx * 4u + 0x30u));
  /* 004f5859 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004f5860:;
  /* 004f5860 mov esi, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 004f5863 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f5866 cmp dword ptr [esi + 0x98], edx */ { const u32 m_ = (u32)(esi + 0x98u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f586c sete byte ptr [ebp - 1] */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)((ZF_) ? 1u : 0u); }
  /* 004f5870 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f5871 jne 0x4f5860 */ if (!ZF_) goto L_004f5860;
  /* 004f5873 mov esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); esi = (u32)(M32(m_)); }
L_004f5876:;
  /* 004f5876 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004f5878 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f587a call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f587du; SAVEALL; call_ind(c, t_); RETCHK(0x4f587du, 0x4f587au); LOADALL; }
  /* 004f587d mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004f587f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f5881 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f5883 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f5885u; SAVEALL; call_ind(c, t_); RETCHK(0x4f5885u, 0x4f5883u); LOADALL; }
  /* 004f5885 cmp esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5888 je 0x4f58a9 */ if (ZF_) goto L_004f58a9;
  /* 004f588a mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f588d mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004f588f mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004f5891 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004f5893 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f5896 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f5897 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004f589a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f589fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f589au); RETCHK(0x4f589fu, 0x4f589au); LOADALL;
  /* 004f589f mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f58a2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f58a5 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f58a6 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
L_004f58a9:;
  /* 004f58a9 mov esi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); esi = (u32)(M32(m_)); }
  /* 004f58ac cmp esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f58af mov dword ptr [ebp - 8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 004f58b2 jne 0x4f55b5 */ if (!ZF_) goto L_004f55b5;
  /* 004f58b8 mov al, byte ptr [ebp - 1] */ { const u32 m_ = (u32)(ebp + 0xffffffffu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f58bb test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f58bd je 0x4f58d3 */ if (ZF_) goto L_004f58d3;
  /* 004f58bf mov esi, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); esi = (u32)(M32(m_)); }
  /* 004f58c2 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f58c4 jle 0x4f58d3 */ if ((ZF_|LT_)) goto L_004f58d3;
L_004f58c6:;
  /* 004f58c6 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f58c7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f58c8 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 004f58ca call 0x4f58f0 */ esp -= 4; M32(esp) = 0x4f58cfu; SAVEALL; F_004f58f0(c); ABI_CHECK(0x4f58f0u, 0x4f58cau); RETCHK(0x4f58cfu, 0x4f58cau); LOADALL;
  /* 004f58cf test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f58d1 jg 0x4f58c6 */ if (!(ZF_|LT_)) goto L_004f58c6;
L_004f58d3:;
  /* 004f58d3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f58d6 lea edx, [ebp - 0x120] */ edx = (u32)((u32)(ebp + 0xfffffee0u));
  /* 004f58dc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f58dd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f58de call 0x4f5980 */ esp -= 4; M32(esp) = 0x4f58e3u; SAVEALL; F_004f5980(c); ABI_CHECK(0x4f5980u, 0x4f58deu); RETCHK(0x4f58e3u, 0x4f58deu); LOADALL;
  /* 004f58e3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f58e4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f58e5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f58e6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f58e8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f58e9 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004f58f0(CPU *c) {
  NATIVE_HOOK(0x4f58f0u) REGS; LOADALL;
L_004f58f0:;
  /* 004f58f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f58f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f58f3 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f58f6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f58f7 mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 004f58f9 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f58fb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f58fc je 0x4f593e */ if (ZF_) goto L_004f593e;
  /* 004f58fe mov edi, edi */ { edi = (u32)(edi); }
L_004f5900:;
  /* 004f5900 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f5903 mov ecx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); ecx = (u32)(M32(m_)); }
  /* 004f5906 sub ecx, 0x11f0e540 */ { u32 a_ = ecx, b_ = 0x11f0e540u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f590c mov eax, 0x431bde83 */ { eax = (u32)(0x431bde83u); }
  /* 004f5911 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f5913 sar edx, 0x12 */ { u32 n_ = (18u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004f5916 mov eax, edx */ { eax = (u32)(edx); }
  /* 004f5918 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f591b add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f591d mov ecx, dword ptr [edi + eax*4 + 0x60] */ { const u32 m_ = (u32)(edi + eax * 4u + 0x60u); ecx = (u32)(M32(m_)); }
  /* 004f5921 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5923 je 0x4f5937 */ if (ZF_) goto L_004f5937;
  /* 004f5925 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f5928 mov edx, dword ptr [edi + ecx*4 + 0x30] */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x30u); edx = (u32)(M32(m_)); }
  /* 004f592c mov edx, dword ptr [edx + 0x98] */ { const u32 m_ = (u32)(edx + 0x98u); edx = (u32)(M32(m_)); }
  /* 004f5932 cmp edx, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5935 je 0x4f595c */ if (ZF_) goto L_004f595c;
L_004f5937:;
  /* 004f5937 mov ebx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ebx = (u32)(M32(m_)); }
  /* 004f5939 cmp ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f593c jne 0x4f5900 */ if (!ZF_) goto L_004f5900;
L_004f593e:;
  /* 004f593e mov eax, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); eax = (u32)(M32(m_)); }
  /* 004f5941 call 0x4ccad0 */ esp -= 4; M32(esp) = 0x4f5946u; SAVEALL; F_004ccad0(c); ABI_CHECK(0x4ccad0u, 0x4f5941u); RETCHK(0x4f5946u, 0x4f5941u); LOADALL;
  /* 004f5946 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f5949 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f594a mov dword ptr [edi + eax*4 + 0xb4], 0 */ { const u32 m_ = (u32)(edi + eax * 4u + 0xb4u); M32(m_) = (u32)(0x0u); }
  /* 004f5955 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f5957 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f5958 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f5959 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f595c:;
  /* 004f595c mov edx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); edx = (u32)(M32(m_)); }
  /* 004f595f mov dword ptr [edi + ecx*4 + 0xb4], edx */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xb4u); M32(m_) = (u32)(edx); }
  /* 004f5966 mov eax, dword ptr [edi + eax*4 + 0x60] */ { const u32 m_ = (u32)(edi + eax * 4u + 0x60u); eax = (u32)(M32(m_)); }
  /* 004f596a mov esi, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); esi = (u32)(M32(m_)); }
  /* 004f596d call 0x4ccaa0 */ esp -= 4; M32(esp) = 0x4f5972u; SAVEALL; F_004ccaa0(c); ABI_CHECK(0x4ccaa0u, 0x4f596du); RETCHK(0x4f5972u, 0x4f596du); LOADALL;
  /* 004f5972 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f5973 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f5975 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f5976 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f5977 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f5980(CPU *c) {
  NATIVE_HOOK(0x4f5980u) REGS; LOADALL;
L_004f5980:;
  /* 004f5980 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f5981 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f5983 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5986 mov eax, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); eax = (u32)(M32(m_)); }
  /* 004f5989 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f598b je 0x4f5af7 */ if (ZF_) goto L_004f5af7;
  /* 004f5991 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f5994 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5996 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f5997 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f5998 jle 0x4f59b9 */ if ((ZF_|LT_)) goto L_004f59b9;
  /* 004f599a lea edi, [eax + eax*4] */ edi = (u32)((u32)(eax + eax * 4u));
  /* 004f599d shl edi, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 004f59a0 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_004f59a3:;
  /* 004f59a3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f59a6 mov esi, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); esi = (u32)(M32(m_)); }
  /* 004f59a9 sub edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f59ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f59ad add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f59af call 0x4f4790 */ esp -= 4; M32(esp) = 0x4f59b4u; SAVEALL; F_004f4790(c); ABI_CHECK(0x4f4790u, 0x4f59afu); RETCHK(0x4f59b4u, 0x4f59afu); LOADALL;
  /* 004f59b4 dec dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f59b7 jne 0x4f59a3 */ if (!ZF_) goto L_004f59a3;
L_004f59b9:;
  /* 004f59b9 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f59bc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f59be jle 0x4f5af5 */ if ((ZF_|LT_)) goto L_004f5af5;
  /* 004f59c4 lea ecx, [eax + eax*4 + 0x11] */ ecx = (u32)((u32)(eax + eax * 4u + 0x11u));
  /* 004f59c8 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 004f59cb mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f59ce mov edx, eax */ { edx = (u32)(eax); }
  /* 004f59d0 shl edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004f59d3 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f59d5 lea ecx, [eax + eax*4] */ ecx = (u32)((u32)(eax + eax * 4u));
  /* 004f59d8 lea ecx, [ebx + ecx*4 + 0x38] */ ecx = (u32)((u32)(ebx + ecx * 4u + 0x38u));
  /* 004f59dc mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 004f59df lea ecx, [ebx + eax*4 + 0x30] */ ecx = (u32)((u32)(ebx + eax * 4u + 0x30u));
  /* 004f59e3 mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004f59e6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f59e9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004f59f0:;
  /* 004f59f0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f59f3 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 004f59f6 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004f59f9 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f59fc mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f59ff mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 004f5a02 sub edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f5a05 sub edi, 5 */ { u32 a_ = edi, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f5a08 sub esi, 0x14 */ { u32 a_ = esi, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f5a0b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5a0d mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 004f5a10 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 004f5a13 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 004f5a16 jle 0x4f5aec */ if ((ZF_|LT_)) goto L_004f5aec;
  /* 004f5a1c mov edi, eax */ { edi = (u32)(eax); }
  /* 004f5a1e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f5a20 imul edi, edi, 0x15 */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x15u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f5a23 imul ecx, ecx, 0x54 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x54u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f5a26 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 004f5a29 jmp 0x4f5a31 */ goto L_004f5a31;
L_004f5a2b:;
  /* 004f5a2b mov edi, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edi = (u32)(M32(m_)); }
  /* 004f5a2e mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
L_004f5a31:;
  /* 004f5a31 mov eax, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); eax = (u32)(M32(m_)); }
  /* 004f5a34 sub ecx, 0x54 */ { u32 a_ = ecx, b_ = 0x54u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f5a37 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 004f5a3a add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f5a3c sub edi, 0x15 */ { u32 a_ = edi, b_ = 0x15u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f5a3f mov eax, edx */ { eax = (u32)(edx); }
  /* 004f5a41 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 004f5a44 call 0x547e90 */ esp -= 4; M32(esp) = 0x4f5a49u; SAVEALL; F_00547e90(c); ABI_CHECK(0x547e90u, 0x4f5a44u); RETCHK(0x4f5a49u, 0x4f5a44u); LOADALL;
  /* 004f5a49 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f5a4b je 0x4f5adc */ if (ZF_) goto L_004f5adc;
  /* 004f5a51 mov esi, dword ptr [ecx + 0x50] */ { const u32 m_ = (u32)(ecx + 0x50u); esi = (u32)(M32(m_)); }
  /* 004f5a54 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5a56 jle 0x4f5adc */ if ((ZF_|LT_)) goto L_004f5adc;
  /* 004f5a5c lea eax, [edi + esi] */ eax = (u32)((u32)(edi + esi));
  /* 004f5a5f lea eax, [eax*4 + 0x10] */ eax = (u32)((u32)(eax * 4u + 0x10u));
L_004f5a66:;
  /* 004f5a66 mov ecx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 004f5a69 mov edi, dword ptr [eax + ecx - 4] */ { const u32 m_ = (u32)(eax + ecx + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 004f5a6d mov ecx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004f5a70 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f5a73 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f5a74 cmp ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5a77 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 004f5a7a jne 0x4f5a99 */ if (!ZF_) goto L_004f5a99;
  /* 004f5a7c mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f5a7f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f5a80 call 0x577800 */ esp -= 4; M32(esp) = 0x4f5a85u; SAVEALL; F_00577800(c); ABI_CHECK(0x577800u, 0x4f5a80u); RETCHK(0x4f5a85u, 0x4f5a80u); LOADALL;
  /* 004f5a85 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f5a87 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f5a8a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5a8d call 0x547e90 */ esp -= 4; M32(esp) = 0x4f5a92u; SAVEALL; F_00547e90(c); ABI_CHECK(0x547e90u, 0x4f5a8du); RETCHK(0x4f5a92u, 0x4f5a8du); LOADALL;
  /* 004f5a92 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f5a94 jne 0x4f5a9f */ if (!ZF_) goto L_004f5a9f;
  /* 004f5a96 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
L_004f5a99:;
  /* 004f5a99 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5a9b jg 0x4f5a66 */ if (!(ZF_|LT_)) goto L_004f5a66;
  /* 004f5a9d jmp 0x4f5adc */ goto L_004f5adc;
L_004f5a9f:;
  /* 004f5a9f mov esi, edi */ { esi = (u32)(edi); }
  /* 004f5aa1 call 0x4f4740 */ esp -= 4; M32(esp) = 0x4f5aa6u; SAVEALL; F_004f4740(c); ABI_CHECK(0x4f4740u, 0x4f5aa1u); RETCHK(0x4f5aa6u, 0x4f5aa1u); LOADALL;
  /* 004f5aa6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f5aa9 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 004f5aab call 0x4e6240 */ esp -= 4; M32(esp) = 0x4f5ab0u; SAVEALL; F_004e6240(c); ABI_CHECK(0x4e6240u, 0x4f5aabu); RETCHK(0x4f5ab0u, 0x4f5aabu); LOADALL;
  /* 004f5ab0 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f5ab3 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 004f5ab5 cmp ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5ab8 jge 0x4f5adc */ if (!LT_) goto L_004f5adc;
  /* 004f5aba mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f5abd mov esi, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); esi = (u32)(M32(m_)); }
  /* 004f5ac0 lea edx, [eax + ecx] */ edx = (u32)((u32)(eax + ecx));
  /* 004f5ac3 mov dword ptr [ebx + edx*4 - 8], esi */ { const u32 m_ = (u32)(ebx + edx * 4u + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 004f5ac7 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f5aca mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 004f5acc add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f5ace mov ecx, dword ptr [edx + 0x98] */ { const u32 m_ = (u32)(edx + 0x98u); ecx = (u32)(M32(m_)); }
  /* 004f5ad4 mov dword ptr [ebx + eax*4], ecx */ { const u32 m_ = (u32)(ebx + eax * 4u); M32(m_) = (u32)(ecx); }
  /* 004f5ad7 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f5ada inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_004f5adc:;
  /* 004f5adc mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 004f5adf mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 004f5ae2 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f5ae3 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 004f5ae6 jne 0x4f5a2b */ if (!ZF_) goto L_004f5a2b;
L_004f5aec:;
  /* 004f5aec dec dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f5aef jne 0x4f59f0 */ if (!ZF_) goto L_004f59f0;
L_004f5af5:;
  /* 004f5af5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f5af6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_004f5af7:;
  /* 004f5af7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f5af9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f5afa ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004f5b00(CPU *c) {
  NATIVE_HOOK(0x4f5b00u) REGS; LOADALL;
L_004f5b00:;
  /* 004f5b00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f5b01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f5b03 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5b06 mov eax, dword ptr [0x7a6ce4] */ { const u32 m_ = (u32)(0x7a6ce4u); eax = (u32)(M32(m_)); }
  /* 004f5b0b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f5b0e mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f5b11 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f5b14 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5b16 mov dword ptr [ebp - 0x34], 0x10000031 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x10000031u); }
  /* 004f5b1d jle 0x4f5b8e */ if ((ZF_|LT_)) goto L_004f5b8e;
  /* 004f5b1f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f5b20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f5b21 lea esi, [eax + eax*4] */ esi = (u32)((u32)(eax + eax * 4u));
  /* 004f5b24 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f5b25 lea edx, [eax + eax*4 + 0xf] */ edx = (u32)((u32)(eax + eax * 4u + 0xfu));
  /* 004f5b29 lea edi, [ecx + eax*4 + 0x28] */ edi = (u32)((u32)(ecx + eax * 4u + 0x28u));
  /* 004f5b2d lea ebx, [ecx + esi*4 + 0x38] */ ebx = (u32)((u32)(ecx + esi * 4u + 0x38u));
  /* 004f5b31 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_004f5b34:;
  /* 004f5b34 mov eax, dword ptr [ebx - 0x14] */ { const u32 m_ = (u32)(ebx + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 004f5b37 sub ebx, 0x14 */ { u32 a_ = ebx, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004f5b3a sub edx, 5 */ { u32 a_ = edx, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f5b3d sub edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f5b40 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5b42 mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 004f5b45 jle 0x4f5b86 */ if ((ZF_|LT_)) goto L_004f5b86;
  /* 004f5b47 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f5b49 lea esi, [ecx + edx*4] */ esi = (u32)((u32)(ecx + edx * 4u));
  /* 004f5b4c mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f5b4f nop */ ;
L_004f5b50:;
  /* 004f5b50 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f5b53 sub esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f5b56 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 004f5b59 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 004f5b5c mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004f5b5e mov dword ptr [ebp - 0x20], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edx); }
  /* 004f5b61 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004f5b63 mov edx, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); edx = (u32)(M32(m_)); }
  /* 004f5b69 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5b6b je 0x4f5b7e */ if (ZF_) goto L_004f5b7e;
  /* 004f5b6d lea eax, [ebp - 0x34] */ eax = (u32)((u32)(ebp + 0xffffffccu));
  /* 004f5b70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f5b71 mov edx, 0x28 */ { edx = (u32)(0x28u); }
  /* 004f5b76 call 0x55f4b0 */ esp -= 4; M32(esp) = 0x4f5b7bu; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x4f5b76u); RETCHK(0x4f5b7bu, 0x4f5b76u); LOADALL;
  /* 004f5b7b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
L_004f5b7e:;
  /* 004f5b7e dec dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f5b81 jne 0x4f5b50 */ if (!ZF_) goto L_004f5b50;
  /* 004f5b83 mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
L_004f5b86:;
  /* 004f5b86 dec dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f5b89 jne 0x4f5b34 */ if (!ZF_) goto L_004f5b34;
  /* 004f5b8b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f5b8c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f5b8d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_004f5b8e:;
  /* 004f5b8e xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004f5b90 add ecx, 0x38 */ { u32 a_ = ecx, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f5b93 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004f5b95 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 004f5b98 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 004f5b9b mov dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(edx); }
  /* 004f5b9e mov dword ptr [ecx + 0x10], edx */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(edx); }
  /* 004f5ba1 mov dword ptr [ecx + 0x14], edx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(edx); }
  /* 004f5ba4 mov dword ptr [ecx + 0x18], edx */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(edx); }
  /* 004f5ba7 mov dword ptr [ecx + 0x1c], edx */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(edx); }
  /* 004f5baa mov dword ptr [ecx + 0x20], edx */ { const u32 m_ = (u32)(ecx + 0x20u); M32(m_) = (u32)(edx); }
  /* 004f5bad mov dword ptr [ecx + 0x24], edx */ { const u32 m_ = (u32)(ecx + 0x24u); M32(m_) = (u32)(edx); }
  /* 004f5bb0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f5bb2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f5bb3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f5bc0(CPU *c) {
  NATIVE_HOOK(0x4f5bc0u) REGS; LOADALL;
L_004f5bc0:;
  /* 004f5bc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f5bc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f5bc3 cmp edi, 0x127a3980 */ { u32 a_ = edi, b_ = 0x127a3980u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5bc9 jg 0x4f5d82 */ if (!(ZF_|LT_)) goto L_004f5d82;
  /* 004f5bcf je 0x4f5d52 */ if (ZF_) goto L_004f5d52;
  /* 004f5bd5 cmp edi, 0x122dee40 */ { u32 a_ = edi, b_ = 0x122dee40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5bdb jg 0x4f5cac */ if (!(ZF_|LT_)) goto L_004f5cac;
  /* 004f5be1 je 0x4f5c8d */ if (ZF_) goto L_004f5c8d;
  /* 004f5be7 cmp edi, 0x120f69c0 */ { u32 a_ = edi, b_ = 0x120f69c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5bed jg 0x4f5c62 */ if (!(ZF_|LT_)) goto L_004f5c62;
  /* 004f5bef je 0x4f5c43 */ if (ZF_) goto L_004f5c43;
  /* 004f5bf1 cmp edi, 0x11f0e540 */ { u32 a_ = edi, b_ = 0x11f0e540u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5bf7 je 0x4f5c24 */ if (ZF_) goto L_004f5c24;
  /* 004f5bf9 cmp edi, 0x12002780 */ { u32 a_ = edi, b_ = 0x12002780u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5bff jne 0x4f5f09 */ if (!ZF_) goto L_004f5f09;
  /* 004f5c05 push 0x130 */ { u32 v_ = 0x130u; esp -= 4; M32(esp) = v_; }
  /* 004f5c0a call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5c0fu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5c0au); RETCHK(0x4f5c0fu, 0x4f5c0au); LOADALL;
  /* 004f5c0f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5c12 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5c14 je 0x4f5dec */ if (ZF_) goto L_004f5dec;
  /* 004f5c1a call 0x4f1ab0 */ esp -= 4; M32(esp) = 0x4f5c1fu; SAVEALL; F_004f1ab0(c); ABI_CHECK(0x4f1ab0u, 0x4f5c1au); RETCHK(0x4f5c1fu, 0x4f5c1au); LOADALL;
  /* 004f5c1f jmp 0x4f5dee */ goto L_004f5dee;
L_004f5c24:;
  /* 004f5c24 push 0x94 */ { u32 v_ = 0x94u; esp -= 4; M32(esp) = v_; }
  /* 004f5c29 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5c2eu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5c29u); RETCHK(0x4f5c2eu, 0x4f5c29u); LOADALL;
  /* 004f5c2e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5c31 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5c33 je 0x4f5dec */ if (ZF_) goto L_004f5dec;
  /* 004f5c39 call 0x4f24f0 */ esp -= 4; M32(esp) = 0x4f5c3eu; SAVEALL; F_004f24f0(c); ABI_CHECK(0x4f24f0u, 0x4f5c39u); RETCHK(0x4f5c3eu, 0x4f5c39u); LOADALL;
  /* 004f5c3e jmp 0x4f5dee */ goto L_004f5dee;
L_004f5c43:;
  /* 004f5c43 push 0xac */ { u32 v_ = 0xacu; esp -= 4; M32(esp) = v_; }
  /* 004f5c48 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5c4du; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5c48u); RETCHK(0x4f5c4du, 0x4f5c48u); LOADALL;
  /* 004f5c4d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5c50 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5c52 je 0x4f5dec */ if (ZF_) goto L_004f5dec;
  /* 004f5c58 call 0x4f73c0 */ esp -= 4; M32(esp) = 0x4f5c5du; SAVEALL; F_004f73c0(c); ABI_CHECK(0x4f73c0u, 0x4f5c58u); RETCHK(0x4f5c5du, 0x4f5c58u); LOADALL;
  /* 004f5c5d jmp 0x4f5dee */ goto L_004f5dee;
L_004f5c62:;
  /* 004f5c62 cmp edi, 0x121eac00 */ { u32 a_ = edi, b_ = 0x121eac00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5c68 jne 0x4f5f09 */ if (!ZF_) goto L_004f5f09;
  /* 004f5c6e push 0x94 */ { u32 v_ = 0x94u; esp -= 4; M32(esp) = v_; }
  /* 004f5c73 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5c78u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5c73u); RETCHK(0x4f5c78u, 0x4f5c73u); LOADALL;
  /* 004f5c78 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5c7b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5c7d je 0x4f5dec */ if (ZF_) goto L_004f5dec;
  /* 004f5c83 call 0x4f8940 */ esp -= 4; M32(esp) = 0x4f5c88u; SAVEALL; F_004f8940(c); ABI_CHECK(0x4f8940u, 0x4f5c83u); RETCHK(0x4f5c88u, 0x4f5c83u); LOADALL;
  /* 004f5c88 jmp 0x4f5dee */ goto L_004f5dee;
L_004f5c8d:;
  /* 004f5c8d push 0xa4 */ { u32 v_ = 0xa4u; esp -= 4; M32(esp) = v_; }
  /* 004f5c92 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5c97u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5c92u); RETCHK(0x4f5c97u, 0x4f5c92u); LOADALL;
  /* 004f5c97 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5c9a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5c9c je 0x4f5dec */ if (ZF_) goto L_004f5dec;
  /* 004f5ca2 call 0x4f1390 */ esp -= 4; M32(esp) = 0x4f5ca7u; SAVEALL; F_004f1390(c); ABI_CHECK(0x4f1390u, 0x4f5ca2u); RETCHK(0x4f5ca7u, 0x4f5ca2u); LOADALL;
  /* 004f5ca7 jmp 0x4f5dee */ goto L_004f5dee;
L_004f5cac:;
  /* 004f5cac cmp edi, 0x125bb500 */ { u32 a_ = edi, b_ = 0x125bb500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5cb2 jg 0x4f5d27 */ if (!(ZF_|LT_)) goto L_004f5d27;
  /* 004f5cb4 je 0x4f5d08 */ if (ZF_) goto L_004f5d08;
  /* 004f5cb6 cmp edi, 0x123d3080 */ { u32 a_ = edi, b_ = 0x123d3080u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5cbc je 0x4f5ce9 */ if (ZF_) goto L_004f5ce9;
  /* 004f5cbe cmp edi, 0x124c72c0 */ { u32 a_ = edi, b_ = 0x124c72c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5cc4 jne 0x4f5f09 */ if (!ZF_) goto L_004f5f09;
  /* 004f5cca push 0x84 */ { u32 v_ = 0x84u; esp -= 4; M32(esp) = v_; }
  /* 004f5ccf call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5cd4u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5ccfu); RETCHK(0x4f5cd4u, 0x4f5ccfu); LOADALL;
  /* 004f5cd4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5cd7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5cd9 je 0x4f5dec */ if (ZF_) goto L_004f5dec;
  /* 004f5cdf call 0x4f2c70 */ esp -= 4; M32(esp) = 0x4f5ce4u; SAVEALL; F_004f2c70(c); ABI_CHECK(0x4f2c70u, 0x4f5cdfu); RETCHK(0x4f5ce4u, 0x4f5cdfu); LOADALL;
  /* 004f5ce4 jmp 0x4f5dee */ goto L_004f5dee;
L_004f5ce9:;
  /* 004f5ce9 push 0xac */ { u32 v_ = 0xacu; esp -= 4; M32(esp) = v_; }
  /* 004f5cee call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5cf3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5ceeu); RETCHK(0x4f5cf3u, 0x4f5ceeu); LOADALL;
  /* 004f5cf3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5cf6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5cf8 je 0x4f5dec */ if (ZF_) goto L_004f5dec;
  /* 004f5cfe call 0x4f3b20 */ esp -= 4; M32(esp) = 0x4f5d03u; SAVEALL; F_004f3b20(c); ABI_CHECK(0x4f3b20u, 0x4f5cfeu); RETCHK(0x4f5d03u, 0x4f5cfeu); LOADALL;
  /* 004f5d03 jmp 0x4f5dee */ goto L_004f5dee;
L_004f5d08:;
  /* 004f5d08 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 004f5d0d call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5d12u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5d0du); RETCHK(0x4f5d12u, 0x4f5d0du); LOADALL;
  /* 004f5d12 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5d15 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5d17 je 0x4f5dec */ if (ZF_) goto L_004f5dec;
  /* 004f5d1d call 0x4f4910 */ esp -= 4; M32(esp) = 0x4f5d22u; SAVEALL; F_004f4910(c); ABI_CHECK(0x4f4910u, 0x4f5d1du); RETCHK(0x4f5d22u, 0x4f5d1du); LOADALL;
  /* 004f5d22 jmp 0x4f5dee */ goto L_004f5dee;
L_004f5d27:;
  /* 004f5d27 cmp edi, 0x126af740 */ { u32 a_ = edi, b_ = 0x126af740u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5d2d jne 0x4f5f09 */ if (!ZF_) goto L_004f5f09;
  /* 004f5d33 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 004f5d38 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5d3du; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5d38u); RETCHK(0x4f5d3du, 0x4f5d38u); LOADALL;
  /* 004f5d3d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5d40 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5d42 je 0x4f5dec */ if (ZF_) goto L_004f5dec;
  /* 004f5d48 call 0x4f4960 */ esp -= 4; M32(esp) = 0x4f5d4du; SAVEALL; F_004f4960(c); ABI_CHECK(0x4f4960u, 0x4f5d48u); RETCHK(0x4f5d4du, 0x4f5d48u); LOADALL;
  /* 004f5d4d jmp 0x4f5dee */ goto L_004f5dee;
L_004f5d52:;
  /* 004f5d52 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f5d53 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 004f5d58 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5d5du; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5d58u); RETCHK(0x4f5d5du, 0x4f5d58u); LOADALL;
  /* 004f5d5d mov esi, eax */ { esi = (u32)(eax); }
  /* 004f5d5f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5d62 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5d64 je 0x4f5d7d */ if (ZF_) goto L_004f5d7d;
  /* 004f5d66 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f5d6bu; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f5d66u); RETCHK(0x4f5d6bu, 0x4f5d66u); LOADALL;
  /* 004f5d6b mov dword ptr [esi], 0x64f788 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f788u); }
  /* 004f5d71 mov dword ptr [esi + 0x40], 0x127a3980 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x127a3980u); }
  /* 004f5d78 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f5d7a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f5d7b jmp 0x4f5df0 */ goto L_004f5df0;
L_004f5d7d:;
  /* 004f5d7d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f5d7f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f5d80 jmp 0x4f5df0 */ goto L_004f5df0;
L_004f5d82:;
  /* 004f5d82 cmp edi, 0x12c684c0 */ { u32 a_ = edi, b_ = 0x12c684c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5d88 jg 0x4f5e7f */ if (!(ZF_|LT_)) goto L_004f5e7f;
  /* 004f5d8e je 0x4f5e61 */ if (ZF_) goto L_004f5e61;
  /* 004f5d94 cmp edi, 0x12a80040 */ { u32 a_ = edi, b_ = 0x12a80040u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5d9a jg 0x4f5e37 */ if (!(ZF_|LT_)) goto L_004f5e37;
  /* 004f5da0 je 0x4f5e19 */ if (ZF_) goto L_004f5e19;
  /* 004f5da2 cmp edi, 0x12897bc0 */ { u32 a_ = edi, b_ = 0x12897bc0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5da8 je 0x4f5dd4 */ if (ZF_) goto L_004f5dd4;
  /* 004f5daa cmp edi, 0x1298be00 */ { u32 a_ = edi, b_ = 0x1298be00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5db0 jne 0x4f5f09 */ if (!ZF_) goto L_004f5f09;
  /* 004f5db6 push 0x1b8 */ { u32 v_ = 0x1b8u; esp -= 4; M32(esp) = v_; }
  /* 004f5dbb call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5dc0u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5dbbu); RETCHK(0x4f5dc0u, 0x4f5dbbu); LOADALL;
  /* 004f5dc0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5dc3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5dc5 je 0x4f5f09 */ if (ZF_) goto L_004f5f09;
  /* 004f5dcb call 0x4f7d60 */ esp -= 4; M32(esp) = 0x4f5dd0u; SAVEALL; F_004f7d60(c); ABI_CHECK(0x4f7d60u, 0x4f5dcbu); RETCHK(0x4f5dd0u, 0x4f5dcbu); LOADALL;
  /* 004f5dd0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f5dd1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f5dd4:;
  /* 004f5dd4 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 004f5dd9 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5ddeu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5dd9u); RETCHK(0x4f5ddeu, 0x4f5dd9u); LOADALL;
  /* 004f5dde add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5de1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5de3 je 0x4f5dec */ if (ZF_) goto L_004f5dec;
  /* 004f5de5 call 0x4f4980 */ esp -= 4; M32(esp) = 0x4f5deau; SAVEALL; F_004f4980(c); ABI_CHECK(0x4f4980u, 0x4f5de5u); RETCHK(0x4f5deau, 0x4f5de5u); LOADALL;
  /* 004f5dea jmp 0x4f5dee */ goto L_004f5dee;
L_004f5dec:;
  /* 004f5dec xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004f5dee:;
  /* 004f5dee mov ecx, eax */ { ecx = (u32)(eax); }
L_004f5df0:;
  /* 004f5df0 lea edx, [edi - 0x11f0e540] */ edx = (u32)((u32)(edi + 0xee0f1ac0u));
  /* 004f5df6 mov eax, 0x431bde83 */ { eax = (u32)(0x431bde83u); }
  /* 004f5dfb imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f5dfd sar edx, 0x12 */ { u32 n_ = (18u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004f5e00 mov eax, edx */ { eax = (u32)(edx); }
  /* 004f5e02 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f5e05 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f5e07 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f5e0a lea eax, [edx + eax*4 + 0xbc] */ eax = (u32)((u32)(edx + eax * 4u + 0xbcu));
  /* 004f5e11 inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f5e13 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004f5e15 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f5e16 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f5e19:;
  /* 004f5e19 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 004f5e1e call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5e23u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5e1eu); RETCHK(0x4f5e23u, 0x4f5e1eu); LOADALL;
  /* 004f5e23 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5e26 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5e28 je 0x4f5f09 */ if (ZF_) goto L_004f5f09;
  /* 004f5e2e call 0x4f49a0 */ esp -= 4; M32(esp) = 0x4f5e33u; SAVEALL; F_004f49a0(c); ABI_CHECK(0x4f49a0u, 0x4f5e2eu); RETCHK(0x4f5e33u, 0x4f5e2eu); LOADALL;
  /* 004f5e33 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f5e34 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f5e37:;
  /* 004f5e37 cmp edi, 0x12b74280 */ { u32 a_ = edi, b_ = 0x12b74280u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5e3d jne 0x4f5f09 */ if (!ZF_) goto L_004f5f09;
  /* 004f5e43 push 0x84 */ { u32 v_ = 0x84u; esp -= 4; M32(esp) = v_; }
  /* 004f5e48 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5e4du; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5e48u); RETCHK(0x4f5e4du, 0x4f5e48u); LOADALL;
  /* 004f5e4d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5e50 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5e52 je 0x4f5f09 */ if (ZF_) goto L_004f5f09;
  /* 004f5e58 call 0x4f9170 */ esp -= 4; M32(esp) = 0x4f5e5du; SAVEALL; F_004f9170(c); ABI_CHECK(0x4f9170u, 0x4f5e58u); RETCHK(0x4f5e5du, 0x4f5e58u); LOADALL;
  /* 004f5e5d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f5e5e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f5e61:;
  /* 004f5e61 push 0x90 */ { u32 v_ = 0x90u; esp -= 4; M32(esp) = v_; }
  /* 004f5e66 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5e6bu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5e66u); RETCHK(0x4f5e6bu, 0x4f5e66u); LOADALL;
  /* 004f5e6b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5e6e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5e70 je 0x4f5f09 */ if (ZF_) goto L_004f5f09;
  /* 004f5e76 call 0x4f3350 */ esp -= 4; M32(esp) = 0x4f5e7bu; SAVEALL; F_004f3350(c); ABI_CHECK(0x4f3350u, 0x4f5e76u); RETCHK(0x4f5e7bu, 0x4f5e76u); LOADALL;
  /* 004f5e7b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f5e7c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f5e7f:;
  /* 004f5e7f cmp edi, 0x13038dc0 */ { u32 a_ = edi, b_ = 0x13038dc0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5e85 jg 0x4f5ee7 */ if (!(ZF_|LT_)) goto L_004f5ee7;
  /* 004f5e87 je 0x4f5ecd */ if (ZF_) goto L_004f5ecd;
  /* 004f5e89 cmp edi, 0x12d5c700 */ { u32 a_ = edi, b_ = 0x12d5c700u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5e8f je 0x4f5eb3 */ if (ZF_) goto L_004f5eb3;
  /* 004f5e91 cmp edi, 0x12e50940 */ { u32 a_ = edi, b_ = 0x12e50940u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5e97 jne 0x4f5f09 */ if (!ZF_) goto L_004f5f09;
  /* 004f5e99 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 004f5e9e call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5ea3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5e9eu); RETCHK(0x4f5ea3u, 0x4f5e9eu); LOADALL;
  /* 004f5ea3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5ea6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5ea8 je 0x4f5f09 */ if (ZF_) goto L_004f5f09;
  /* 004f5eaa call 0x4f49e0 */ esp -= 4; M32(esp) = 0x4f5eafu; SAVEALL; F_004f49e0(c); ABI_CHECK(0x4f49e0u, 0x4f5eaau); RETCHK(0x4f5eafu, 0x4f5eaau); LOADALL;
  /* 004f5eaf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f5eb0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f5eb3:;
  /* 004f5eb3 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 004f5eb8 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5ebdu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5eb8u); RETCHK(0x4f5ebdu, 0x4f5eb8u); LOADALL;
  /* 004f5ebd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5ec0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5ec2 je 0x4f5f09 */ if (ZF_) goto L_004f5f09;
  /* 004f5ec4 call 0x4f49c0 */ esp -= 4; M32(esp) = 0x4f5ec9u; SAVEALL; F_004f49c0(c); ABI_CHECK(0x4f49c0u, 0x4f5ec4u); RETCHK(0x4f5ec9u, 0x4f5ec4u); LOADALL;
  /* 004f5ec9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f5eca ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f5ecd:;
  /* 004f5ecd push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 004f5ed2 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5ed7u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5ed2u); RETCHK(0x4f5ed7u, 0x4f5ed2u); LOADALL;
  /* 004f5ed7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5eda test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5edc je 0x4f5f09 */ if (ZF_) goto L_004f5f09;
  /* 004f5ede call 0x4f4a00 */ esp -= 4; M32(esp) = 0x4f5ee3u; SAVEALL; F_004f4a00(c); ABI_CHECK(0x4f4a00u, 0x4f5edeu); RETCHK(0x4f5ee3u, 0x4f5edeu); LOADALL;
  /* 004f5ee3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f5ee4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f5ee7:;
  /* 004f5ee7 cmp edi, 0x1312d000 */ { u32 a_ = edi, b_ = 0x1312d000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5eed jne 0x4f5f09 */ if (!ZF_) goto L_004f5f09;
  /* 004f5eef push 0x84 */ { u32 v_ = 0x84u; esp -= 4; M32(esp) = v_; }
  /* 004f5ef4 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5ef9u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5ef4u); RETCHK(0x4f5ef9u, 0x4f5ef4u); LOADALL;
  /* 004f5ef9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5efc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5efe je 0x4f5f09 */ if (ZF_) goto L_004f5f09;
  /* 004f5f00 call 0x4f4a20 */ esp -= 4; M32(esp) = 0x4f5f05u; SAVEALL; F_004f4a20(c); ABI_CHECK(0x4f4a20u, 0x4f5f00u); RETCHK(0x4f5f05u, 0x4f5f00u); LOADALL;
  /* 004f5f05 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f5f06 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f5f09:;
  /* 004f5f09 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f5f0b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f5f0c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f5f10(CPU *c) {
  NATIVE_HOOK(0x4f5f10u) REGS; LOADALL;
L_004f5f10:;
  /* 004f5f10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f5f11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f5f13 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5f16 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f5f17 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f5f18 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f5f19 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004f5f1c mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 004f5f1f mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004f5f21 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 004f5f23 call 0x4f7240 */ esp -= 4; M32(esp) = 0x4f5f28u; SAVEALL; F_004f7240(c); ABI_CHECK(0x4f7240u, 0x4f5f23u); RETCHK(0x4f5f28u, 0x4f5f23u); LOADALL;
  /* 004f5f28 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5f2a mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 004f5f2d jl 0x4f60c3 */ if (LT_) goto L_004f60c3;
  /* 004f5f33 mov al, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f5f36 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f5f38 je 0x4f607a */ if (ZF_) goto L_004f607a;
  /* 004f5f3e mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004f5f40 cmp eax, 0x120f69c0 */ { u32 a_ = eax, b_ = 0x120f69c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5f45 jne 0x4f5fb9 */ if (!ZF_) goto L_004f5fb9;
  /* 004f5f47 mov edx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); edx = (u32)(M32(m_)); }
  /* 004f5f4a add edx, 0xbcd0 */ { u32 a_ = edx, b_ = 0xbcd0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f5f50 lea edi, [ebp + 0xc] */ edi = (u32)((u32)(ebp + 0xcu));
  /* 004f5f53 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f5f55 mov byte ptr [ebp + 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xcu); M8(m_) = (u8)(0x0u); }
  /* 004f5f59 call 0x4d82c0 */ esp -= 4; M32(esp) = 0x4f5f5eu; SAVEALL; F_004d82c0(c); ABI_CHECK(0x4d82c0u, 0x4f5f59u); RETCHK(0x4f5f5eu, 0x4f5f59u); LOADALL;
  /* 004f5f5e mov byte ptr [ebp - 4], al */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004f5f61 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f5f64 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5f67 jne 0x4f5f6e */ if (!ZF_) goto L_004f5f6e;
  /* 004f5f69 mov byte ptr [ebp - 4], al */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004f5f6c jmp 0x4f5f86 */ goto L_004f5f86;
L_004f5f6e:;
  /* 004f5f6e cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5f71 jne 0x4f5f7d */ if (!ZF_) goto L_004f5f7d;
  /* 004f5f73 mov byte ptr [ebp + 0xc], 1 */ { const u32 m_ = (u32)(ebp + 0xcu); M8(m_) = (u8)(0x1u); }
  /* 004f5f77 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 004f5f7b jmp 0x4f5f8a */ goto L_004f5f8a;
L_004f5f7d:;
  /* 004f5f7d cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5f80 jne 0x4f5f8a */ if (!ZF_) goto L_004f5f8a;
  /* 004f5f82 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
L_004f5f86:;
  /* 004f5f86 mov byte ptr [ebp + 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xcu); M8(m_) = (u8)(0x0u); }
L_004f5f8a:;
  /* 004f5f8a push 0xb8 */ { u32 v_ = 0xb8u; esp -= 4; M32(esp) = v_; }
  /* 004f5f8f call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f5f94u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f5f8fu); RETCHK(0x4f5f94u, 0x4f5f8fu); LOADALL;
  /* 004f5f94 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f5f97 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f5f99 je 0x4f6028 */ if (ZF_) goto L_004f6028;
  /* 004f5f9f mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f5fa2 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004f5fa5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f5fa6 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004f5fa9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f5fab push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f5fac push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f5fad mov esi, eax */ { esi = (u32)(eax); }
  /* 004f5faf call 0x4afaa0 */ esp -= 4; M32(esp) = 0x4f5fb4u; SAVEALL; F_004afaa0(c); ABI_CHECK(0x4afaa0u, 0x4f5fafu); RETCHK(0x4f5fb4u, 0x4f5fafu); LOADALL;
  /* 004f5fb4 jmp 0x4f6082 */ goto L_004f6082;
L_004f5fb9:;
  /* 004f5fb9 cmp eax, 0x13221240 */ { u32 a_ = eax, b_ = 0x13221240u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5fbe jne 0x4f602c */ if (!ZF_) goto L_004f602c;
  /* 004f5fc0 mov edx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); edx = (u32)(M32(m_)); }
  /* 004f5fc3 add edx, 0xbcd0 */ { u32 a_ = edx, b_ = 0xbcd0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f5fc9 lea edi, [ebp + 0xf] */ edi = (u32)((u32)(ebp + 0xfu));
  /* 004f5fcc mov esi, eax */ { esi = (u32)(eax); }
  /* 004f5fce mov byte ptr [ebp + 0xf], 0 */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)(0x0u); }
  /* 004f5fd2 call 0x4d82c0 */ esp -= 4; M32(esp) = 0x4f5fd7u; SAVEALL; F_004d82c0(c); ABI_CHECK(0x4d82c0u, 0x4f5fd2u); RETCHK(0x4f5fd7u, 0x4f5fd2u); LOADALL;
  /* 004f5fd7 mov byte ptr [ebp - 4], al */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004f5fda mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f5fdd cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5fe0 jne 0x4f5fe7 */ if (!ZF_) goto L_004f5fe7;
  /* 004f5fe2 mov byte ptr [ebp - 4], al */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004f5fe5 jmp 0x4f5fff */ goto L_004f5fff;
L_004f5fe7:;
  /* 004f5fe7 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5fea jne 0x4f5ff6 */ if (!ZF_) goto L_004f5ff6;
  /* 004f5fec mov byte ptr [ebp + 0xf], 1 */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)(0x1u); }
  /* 004f5ff0 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 004f5ff4 jmp 0x4f6003 */ goto L_004f6003;
L_004f5ff6:;
  /* 004f5ff6 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f5ff9 jne 0x4f6003 */ if (!ZF_) goto L_004f6003;
  /* 004f5ffb mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
L_004f5fff:;
  /* 004f5fff mov byte ptr [ebp + 0xf], 0 */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)(0x0u); }
L_004f6003:;
  /* 004f6003 push 0xb8 */ { u32 v_ = 0xb8u; esp -= 4; M32(esp) = v_; }
  /* 004f6008 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f600du; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f6008u); RETCHK(0x4f600du, 0x4f6008u); LOADALL;
  /* 004f600d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f6010 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6012 je 0x4f6028 */ if (ZF_) goto L_004f6028;
  /* 004f6014 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 004f6017 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f6018 mov dl, byte ptr [ebp + 0xf] */ { const u32 m_ = (u32)(ebp + 0xfu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f601b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f601c mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 004f601f xor cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f6021 call 0x4b04d0 */ esp -= 4; M32(esp) = 0x4f6026u; SAVEALL; F_004b04d0(c); ABI_CHECK(0x4b04d0u, 0x4f6021u); RETCHK(0x4f6026u, 0x4f6021u); LOADALL;
  /* 004f6026 jmp 0x4f6082 */ goto L_004f6082;
L_004f6028:;
  /* 004f6028 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f602a jmp 0x4f6082 */ goto L_004f6082;
L_004f602c:;
  /* 004f602c cmp eax, 0x12c684c0 */ { u32 a_ = eax, b_ = 0x12c684c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6031 jne 0x4f6051 */ if (!ZF_) goto L_004f6051;
  /* 004f6033 push 0x94 */ { u32 v_ = 0x94u; esp -= 4; M32(esp) = v_; }
  /* 004f6038 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f603du; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f6038u); RETCHK(0x4f603du, 0x4f6038u); LOADALL;
  /* 004f603d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f6040 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6042 je 0x4f6076 */ if (ZF_) goto L_004f6076;
  /* 004f6044 mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f6047 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f6048 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f604a call 0x4b0980 */ esp -= 4; M32(esp) = 0x4f604fu; SAVEALL; F_004b0980(c); ABI_CHECK(0x4b0980u, 0x4f604au); RETCHK(0x4f604fu, 0x4f604au); LOADALL;
  /* 004f604f jmp 0x4f6085 */ goto L_004f6085;
L_004f6051:;
  /* 004f6051 cmp eax, 0x11f0e540 */ { u32 a_ = eax, b_ = 0x11f0e540u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6056 jne 0x4f60c3 */ if (!ZF_) goto L_004f60c3;
  /* 004f6058 push 0x9c */ { u32 v_ = 0x9cu; esp -= 4; M32(esp) = v_; }
  /* 004f605d call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f6062u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f605du); RETCHK(0x4f6062u, 0x4f605du); LOADALL;
  /* 004f6062 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f6065 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6067 je 0x4f6076 */ if (ZF_) goto L_004f6076;
  /* 004f6069 mov edx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); edx = (u32)(M32(m_)); }
  /* 004f606c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f606d mov esi, eax */ { esi = (u32)(eax); }
  /* 004f606f call 0x4b0770 */ esp -= 4; M32(esp) = 0x4f6074u; SAVEALL; F_004b0770(c); ABI_CHECK(0x4b0770u, 0x4f606fu); RETCHK(0x4f6074u, 0x4f606fu); LOADALL;
  /* 004f6074 jmp 0x4f6085 */ goto L_004f6085;
L_004f6076:;
  /* 004f6076 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f6078 jmp 0x4f6085 */ goto L_004f6085;
L_004f607a:;
  /* 004f607a mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 004f607c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f607d call 0x4f5bc0 */ esp -= 4; M32(esp) = 0x4f6082u; SAVEALL; F_004f5bc0(c); ABI_CHECK(0x4f5bc0u, 0x4f607du); RETCHK(0x4f6082u, 0x4f607du); LOADALL;
L_004f6082:;
  /* 004f6082 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
L_004f6085:;
  /* 004f6085 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f6087 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6089 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 004f608c je 0x4f60c3 */ if (ZF_) goto L_004f60c3;
  /* 004f608e call 0x4f4230 */ esp -= 4; M32(esp) = 0x4f6093u; SAVEALL; F_004f4230(c); ABI_CHECK(0x4f4230u, 0x4f608eu); RETCHK(0x4f6093u, 0x4f608eu); LOADALL;
  /* 004f6093 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f6096 mov dword ptr [esi + 0x44], eax */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(eax); }
  /* 004f6099 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f609c mov dword ptr [esi + 0x4c], ecx */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(ecx); }
  /* 004f609f mov edx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f60a2 mov dword ptr [esi + 0x70], edx */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(edx); }
  /* 004f60a5 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f60a8 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004f60aa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f60ab mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f60ad call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f60b0u; SAVEALL; call_ind(c, t_); RETCHK(0x4f60b0u, 0x4f60adu); LOADALL; }
  /* 004f60b0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f60b2 jne 0x4f60ce */ if (!ZF_) goto L_004f60ce;
  /* 004f60b4 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004f60b6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f60b8 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f60bbu; SAVEALL; call_ind(c, t_); RETCHK(0x4f60bbu, 0x4f60b8u); LOADALL; }
  /* 004f60bb mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004f60bd push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f60bf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f60c1 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f60c3u; SAVEALL; call_ind(c, t_); RETCHK(0x4f60c3u, 0x4f60c1u); LOADALL; }
L_004f60c3:;
  /* 004f60c3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f60c4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f60c5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f60c7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f60c8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f60ca pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f60cb ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_004f60ce:;
  /* 004f60ce mov dword ptr [ebp - 0x30], 0x10000032 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0x10000032u); }
  /* 004f60d5 mov ecx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); ecx = (u32)(M32(m_)); }
  /* 004f60d8 mov dword ptr [ebp - 0x28], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ecx); }
  /* 004f60db mov eax, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); eax = (u32)(M32(m_)); }
  /* 004f60de mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 004f60e1 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 004f60e4 mov edx, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); edx = (u32)(M32(m_)); }
  /* 004f60e7 mov dword ptr [ebp - 0x20], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edx); }
  /* 004f60ea mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 004f60ed mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 004f60f0 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 004f60f3 mov al, byte ptr [edi + 0x70] */ { const u32 m_ = (u32)(edi + 0x70u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f60f6 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f60f8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f60fa setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 004f60fd inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f60fe mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 004f6101 mov eax, dword ptr [ebx + edx*4 + 0x28] */ { const u32 m_ = (u32)(ebx + edx * 4u + 0x28u); eax = (u32)(M32(m_)); }
  /* 004f6105 mov ecx, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 004f610b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f610d je 0x4f611d */ if (ZF_) goto L_004f611d;
  /* 004f610f lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004f6112 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f6113 mov edx, 0x28 */ { edx = (u32)(0x28u); }
  /* 004f6118 call 0x55f4b0 */ esp -= 4; M32(esp) = 0x4f611du; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x4f6118u); RETCHK(0x4f611du, 0x4f6118u); LOADALL;
L_004f611d:;
  /* 004f611d add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004f6120 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 004f6123 call 0x508a00 */ esp -= 4; M32(esp) = 0x4f6128u; SAVEALL; F_00508a00(c); ABI_CHECK(0x508a00u, 0x4f6123u); RETCHK(0x4f6128u, 0x4f6123u); LOADALL;
  /* 004f6128 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f6129 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f612b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f612c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f612d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f612f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f6130 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004f6140(CPU *c) {
  NATIVE_HOOK(0x4f6140u) REGS; LOADALL;
L_004f6140:;
  /* 004f6140 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f6141 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f6143 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f6146 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f6147 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004f6149 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f614b je 0x4f6157 */ if (ZF_) goto L_004f6157;
  /* 004f614d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f6150 mov ecx, dword ptr [ebx + 0x40] */ { const u32 m_ = (u32)(ebx + 0x40u); ecx = (u32)(M32(m_)); }
  /* 004f6153 cmp ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6155 je 0x4f6160 */ if (ZF_) goto L_004f6160;
L_004f6157:;
  /* 004f6157 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f6159 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f615a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f615c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f615d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f6160:;
  /* 004f6160 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f6161 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 004f6164 mov edx, edi */ { edx = (u32)(edi); }
  /* 004f6166 call 0x4f7240 */ esp -= 4; M32(esp) = 0x4f616bu; SAVEALL; F_004f7240(c); ABI_CHECK(0x4f7240u, 0x4f6166u); RETCHK(0x4f616bu, 0x4f6166u); LOADALL;
  /* 004f616b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f616d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f616f mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 004f6172 jl 0x4f618b */ if (LT_) goto L_004f618b;
  /* 004f6174 fld dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); FPUSH((double)MF32(m_)); }
  /* 004f6177 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f617d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f617f test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f6182 jp 0x4f6195 */ if (PF_) goto L_004f6195;
L_004f6184:;
  /* 004f6184 mov dword ptr [ebx + 0x3c], 0xb */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0xbu); }
L_004f618b:;
  /* 004f618b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f618c xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f618e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f618f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f6191 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f6192 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f6195:;
  /* 004f6195 mov edx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (u32)(M32(m_)); }
  /* 004f6198 imul ecx, ecx, 0xa0c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0xa0cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f619e mov eax, dword ptr [edx + 0xbe48] */ { const u32 m_ = (u32)(edx + 0xbe48u); eax = (u32)(M32(m_)); }
  /* 004f61a4 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f61a7 lea ecx, [eax + ecx + 0x648] */ ecx = (u32)((u32)(eax + ecx + 0x648u));
  /* 004f61ae xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004f61b0 mov dword ptr [esi + 0x58], ecx */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(ecx); }
  /* 004f61b3 lea eax, [esi + 0x5c] */ eax = (u32)((u32)(esi + 0x5cu));
  /* 004f61b6 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 004f61b8 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004f61bb mov edx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); edx = (u32)(M32(m_)); }
  /* 004f61be test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f61c0 jle 0x4f61f0 */ if ((ZF_|LT_)) goto L_004f61f0;
  /* 004f61c2 mov eax, edx */ { eax = (u32)(edx); }
  /* 004f61c4 imul eax, eax, 0xa0c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0xa0cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f61ca lea ecx, [esi + edx*4 + 0x5c] */ ecx = (u32)((u32)(esi + edx * 4u + 0x5cu));
  /* 004f61ce mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
L_004f61d1:;
  /* 004f61d1 mov edx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (u32)(M32(m_)); }
  /* 004f61d4 mov edx, dword ptr [edx + 0xbe48] */ { const u32 m_ = (u32)(edx + 0xbe48u); edx = (u32)(M32(m_)); }
  /* 004f61da sub eax, 0xa0c */ { u32 a_ = eax, b_ = 0xa0cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f61df lea edx, [edx + eax + 0x648] */ edx = (u32)((u32)(edx + eax + 0x648u));
  /* 004f61e6 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f61e9 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004f61eb dec dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f61ee jne 0x4f61d1 */ if (!ZF_) goto L_004f61d1;
L_004f61f0:;
  /* 004f61f0 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 004f61f2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f61f3 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f61f5 call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f61f8u; SAVEALL; call_ind(c, t_); RETCHK(0x4f61f8u, 0x4f61f5u); LOADALL; }
  /* 004f61f8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f61fa je 0x4f6184 */ if (ZF_) goto L_004f6184;
  /* 004f61fc mov ecx, dword ptr [ebx + 0x44] */ { const u32 m_ = (u32)(ebx + 0x44u); ecx = (u32)(M32(m_)); }
  /* 004f61ff mov eax, dword ptr [ebx + 0x40] */ { const u32 m_ = (u32)(ebx + 0x40u); eax = (u32)(M32(m_)); }
  /* 004f6202 cmp eax, 0x12002780 */ { u32 a_ = eax, b_ = 0x12002780u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6207 mov edx, dword ptr [ebx + 0x48] */ { const u32 m_ = (u32)(ebx + 0x48u); edx = (u32)(M32(m_)); }
  /* 004f620a mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 004f620d mov dword ptr [ebp - 0x28], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ecx); }
  /* 004f6210 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f6213 mov dword ptr [ebp - 0x2c], 0x10000034 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x10000034u); }
  /* 004f621a mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 004f621d mov dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ecx); }
  /* 004f6220 mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 004f6223 jne 0x4f6239 */ if (!ZF_) goto L_004f6239;
  /* 004f6225 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 004f6227 add esi, 0x34 */ { u32 a_ = esi, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f622a lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 004f622d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f622e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f622f call 0x5fe998 */ esp -= 4; M32(esp) = 0x4f6234u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x4f622fu); RETCHK(0x4f6234u, 0x4f622fu); LOADALL;
  /* 004f6234 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f6237 jmp 0x4f624d */ goto L_004f624d;
L_004f6239:;
  /* 004f6239 lea ecx, [ebx + 0x2c] */ ecx = (u32)((u32)(ebx + 0x2cu));
  /* 004f623c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f623e mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f6241 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f6244 mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 004f6247 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f624a mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
L_004f624d:;
  /* 004f624d mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 004f6250 mov eax, dword ptr [edi + esi*4 + 0x28] */ { const u32 m_ = (u32)(edi + esi * 4u + 0x28u); eax = (u32)(M32(m_)); }
  /* 004f6254 lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f6257 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f6258 mov edx, 0x28 */ { edx = (u32)(0x28u); }
  /* 004f625d call 0x401000 */ esp -= 4; M32(esp) = 0x4f6262u; SAVEALL; F_00401000(c); ABI_CHECK(0x401000u, 0x4f625du); RETCHK(0x4f6262u, 0x4f625du); LOADALL;
  /* 004f6262 mov eax, dword ptr [ebx + 0x40] */ { const u32 m_ = (u32)(ebx + 0x40u); eax = (u32)(M32(m_)); }
  /* 004f6265 cmp eax, 0x125bb500 */ { u32 a_ = eax, b_ = 0x125bb500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f626a je 0x4f628f */ if (ZF_) goto L_004f628f;
  /* 004f626c cmp eax, 0x126af740 */ { u32 a_ = eax, b_ = 0x126af740u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6271 je 0x4f628f */ if (ZF_) goto L_004f628f;
  /* 004f6273 cmp eax, 0x127a3980 */ { u32 a_ = eax, b_ = 0x127a3980u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6278 je 0x4f628f */ if (ZF_) goto L_004f628f;
  /* 004f627a cmp eax, 0x12897bc0 */ { u32 a_ = eax, b_ = 0x12897bc0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f627f je 0x4f628f */ if (ZF_) goto L_004f628f;
  /* 004f6281 cmp eax, 0x12a80040 */ { u32 a_ = eax, b_ = 0x12a80040u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6286 je 0x4f628f */ if (ZF_) goto L_004f628f;
  /* 004f6288 cmp eax, 0x13038dc0 */ { u32 a_ = eax, b_ = 0x13038dc0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f628d jne 0x4f62a2 */ if (!ZF_) goto L_004f62a2;
L_004f628f:;
  /* 004f628f mov ecx, dword ptr [ebx + 0x48] */ { const u32 m_ = (u32)(ebx + 0x48u); ecx = (u32)(M32(m_)); }
  /* 004f6292 mov edx, dword ptr [ebx + 0x44] */ { const u32 m_ = (u32)(ebx + 0x44u); edx = (u32)(M32(m_)); }
  /* 004f6295 mov esi, dword ptr [edi + esi*4 + 0x30] */ { const u32 m_ = (u32)(edi + esi * 4u + 0x30u); esi = (u32)(M32(m_)); }
  /* 004f6299 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f629a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f629b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004f629d call 0x4e83b0 */ esp -= 4; M32(esp) = 0x4f62a2u; SAVEALL; F_004e83b0(c); ABI_CHECK(0x4e83b0u, 0x4f629du); RETCHK(0x4f62a2u, 0x4f629du); LOADALL;
L_004f62a2:;
  /* 004f62a2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f62a3 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f62a5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f62a6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f62a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f62a9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f62b0(CPU *c) {
  NATIVE_HOOK(0x4f62b0u) REGS; LOADALL;
L_004f62b0:;
  /* 004f62b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f62b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f62b3 sub esp, 0x9c */ { u32 a_ = esp, b_ = 0x9cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f62b9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f62ba mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004f62bd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f62be push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f62bf mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004f62c2 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 004f62c5 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 004f62c7 call 0x4f7240 */ esp -= 4; M32(esp) = 0x4f62ccu; SAVEALL; F_004f7240(c); ABI_CHECK(0x4f7240u, 0x4f62c7u); RETCHK(0x4f62ccu, 0x4f62c7u); LOADALL;
  /* 004f62cc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f62ce mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004f62d0 setge cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!LT_) ? 1u : 0u) & 0xffu); }
  /* 004f62d3 add eax, 0xefffffcf */ { u32 a_ = eax, b_ = 0xefffffcfu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f62d8 cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f62db mov byte ptr [ebp - 0xd], cl */ { const u32 m_ = (u32)(ebp + 0xfffffff3u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 004f62de ja 0x4f7221 */ if (!(CF_|ZF_)) goto L_004f7221;
  /* 004f62e4 jmp dword ptr [eax*4 + 0x4f722c] */ { const u32 m_ = (u32)(eax * 4u + 0x4f722cu); u32 t_ = M32(m_); switch (t_) { case 0x4f62ebu: goto L_004f62eb; case 0x4f6348u: goto L_004f6348; case 0x4f6631u: goto L_004f6631; case 0x4f7101u: goto L_004f7101; case 0x4f7221u: goto L_004f7221; default: SAVEALL; call_ind(c, t_); return; } }
L_004f62eb:;
  /* 004f62eb test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f62ed jne 0x4f6336 */ if (!ZF_) goto L_004f6336;
  /* 004f62ef mov edi, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); edi = (u32)(M32(m_)); }
  /* 004f62f2 mov ecx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004f62f5 mov eax, edi */ { eax = (u32)(edi); }
  /* 004f62f7 sar eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f62fa and eax, 0xffff */ { u32 a_ = eax, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f62ff and edi, 0xffff */ { u32 a_ = edi, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004f6305 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6307 jge 0x4f7221 */ if (!LT_) goto L_004f7221;
  /* 004f630d mov ebx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 004f6310 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f6312 imul ecx, ecx, 0x54 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x54u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f6315 cmp edi, dword ptr [ecx + ebx + 0x50] */ { const u32 m_ = (u32)(ecx + ebx + 0x50u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6319 jge 0x4f7221 */ if (!LT_) goto L_004f7221;
  /* 004f631f imul eax, eax, 0x15 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x15u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f6322 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f6324 mov esi, dword ptr [ebx + eax*4 + 0x10] */ { const u32 m_ = (u32)(ebx + eax * 4u + 0x10u); esi = (u32)(M32(m_)); }
  /* 004f6328 call 0x4f4740 */ esp -= 4; M32(esp) = 0x4f632du; SAVEALL; F_004f4740(c); ABI_CHECK(0x4f4740u, 0x4f6328u); RETCHK(0x4f632du, 0x4f6328u); LOADALL;
  /* 004f632d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f632e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f632f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f6330 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f6332 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f6333 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f6336:;
  /* 004f6336 mov edx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (u32)(M32(m_)); }
  /* 004f6339 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f633a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f633b mov dword ptr [0x7a6ce4], edx */ { const u32 m_ = (u32)(0x7a6ce4u); M32(m_) = (u32)(edx); }
  /* 004f6341 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f6342 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f6344 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f6345 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f6348:;
  /* 004f6348 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f634a je 0x4f639a */ if (ZF_) goto L_004f639a;
  /* 004f634c mov ebx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004f634f mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 004f6351 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6353 je 0x4f7221 */ if (ZF_) goto L_004f7221;
  /* 004f6359 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f635c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004f6360:;
  /* 004f6360 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f6363 cmp dword ptr [ecx + 0x40], edx */ { const u32 m_ = (u32)(ecx + 0x40u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6366 jne 0x4f6378 */ if (!ZF_) goto L_004f6378;
  /* 004f6368 mov esi, dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); esi = (u32)(M32(m_)); }
  /* 004f636b cmp esi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f636e jne 0x4f6378 */ if (!ZF_) goto L_004f6378;
  /* 004f6370 mov ecx, dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); ecx = (u32)(M32(m_)); }
  /* 004f6373 cmp ecx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6376 je 0x4f6387 */ if (ZF_) goto L_004f6387;
L_004f6378:;
  /* 004f6378 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 004f637a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f637c jne 0x4f6360 */ if (!ZF_) goto L_004f6360;
  /* 004f637e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f637f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f6380 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f6381 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f6383 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f6384 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f6387:;
  /* 004f6387 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f638a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f638b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f638c mov dword ptr [edx + 0x54], 0x7f7fffff */ { const u32 m_ = (u32)(edx + 0x54u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 004f6393 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f6394 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f6396 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f6397 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f639a:;
  /* 004f639a mov al, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f639f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f63a1 je 0x4f6504 */ if (ZF_) goto L_004f6504;
  /* 004f63a7 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f63aa cmp eax, 0x120f69c0 */ { u32 a_ = eax, b_ = 0x120f69c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f63af je 0x4f63bc */ if (ZF_) goto L_004f63bc;
  /* 004f63b1 cmp eax, 0x13221240 */ { u32 a_ = eax, b_ = 0x13221240u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f63b6 jne 0x4f6504 */ if (!ZF_) goto L_004f6504;
L_004f63bc:;
  /* 004f63bc push 0xb8 */ { u32 v_ = 0xb8u; esp -= 4; M32(esp) = v_; }
  /* 004f63c1 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f63c6u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f63c1u); RETCHK(0x4f63c6u, 0x4f63c1u); LOADALL;
  /* 004f63c6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f63c9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f63cb je 0x4f7221 */ if (ZF_) goto L_004f7221;
  /* 004f63d1 mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f63d4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f63d5 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f63d7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f63d9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f63db mov esi, eax */ { esi = (u32)(eax); }
  /* 004f63dd call 0x4afaa0 */ esp -= 4; M32(esp) = 0x4f63e2u; SAVEALL; F_004afaa0(c); ABI_CHECK(0x4afaa0u, 0x4f63ddu); RETCHK(0x4f63e2u, 0x4f63ddu); LOADALL;
  /* 004f63e2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f63e4 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 004f63e7 je 0x4f7221 */ if (ZF_) goto L_004f7221;
  /* 004f63ed mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 004f63f0 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f63f2 mov dword ptr [esi + 0x44], edx */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(edx); }
  /* 004f63f5 mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f63f8 mov dword ptr [esi + 0x4c], eax */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(eax); }
  /* 004f63fb mov ecx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004f63fe mov dword ptr [esi + 0x48], ecx */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(ecx); }
  /* 004f6401 mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 004f6404 add eax, 0xbcd0 */ { u32 a_ = eax, b_ = 0xbcd0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f6409 mov dword ptr [ebp + 8], 0 */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 004f6410 call 0x4d7eb0 */ esp -= 4; M32(esp) = 0x4f6415u; SAVEALL; F_004d7eb0(c); ABI_CHECK(0x4d7eb0u, 0x4f6410u); RETCHK(0x4f6415u, 0x4f6410u); LOADALL;
  /* 004f6415 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f6418 mov dword ptr [esi + 0x88], eax */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(eax); }
  /* 004f641e mov edx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); edx = (u32)(M32(m_)); }
  /* 004f6421 add edx, 0xbcd0 */ { u32 a_ = edx, b_ = 0xbcd0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f6427 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f6428 call 0x4d7ec0 */ esp -= 4; M32(esp) = 0x4f642du; SAVEALL; F_004d7ec0(c); ABI_CHECK(0x4d7ec0u, 0x4f6428u); RETCHK(0x4f642du, 0x4f6428u); LOADALL;
  /* 004f642d mov dword ptr [esi + 0x90], eax */ { const u32 m_ = (u32)(esi + 0x90u); M32(m_) = (u32)(eax); }
  /* 004f6433 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f6436 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6438 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 004f643b jle 0x4f6489 */ if ((ZF_|LT_)) goto L_004f6489;
  /* 004f643d mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f6440 lea eax, [ebx + eax*4 + 0x30] */ eax = (u32)((u32)(ebx + eax * 4u + 0x30u));
L_004f6444:;
  /* 004f6444 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004f6447 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f6448 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f644b mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 004f644e mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004f6450 cmp dword ptr [edx + 0x98], ecx */ { const u32 m_ = (u32)(edx + 0x98u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6456 je 0x4f6461 */ if (ZF_) goto L_004f6461;
  /* 004f6458 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004f645b test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f645d jg 0x4f6444 */ if (!(ZF_|LT_)) goto L_004f6444;
  /* 004f645f jmp 0x4f6489 */ goto L_004f6489;
L_004f6461:;
  /* 004f6461 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f6464 mov eax, dword ptr [ebx + eax*4 + 0x30] */ { const u32 m_ = (u32)(ebx + eax * 4u + 0x30u); eax = (u32)(M32(m_)); }
  /* 004f6468 call 0x4e6010 */ esp -= 4; M32(esp) = 0x4f646du; SAVEALL; F_004e6010(c); ABI_CHECK(0x4e6010u, 0x4f6468u); RETCHK(0x4f646du, 0x4f6468u); LOADALL;
  /* 004f646d mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004f6470 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f6472 mov eax, dword ptr [ebx + edx*4 + 0x30] */ { const u32 m_ = (u32)(ebx + edx * 4u + 0x30u); eax = (u32)(M32(m_)); }
  /* 004f6476 mov edx, dword ptr [eax + 0x538] */ { const u32 m_ = (u32)(eax + 0x538u); edx = (u32)(M32(m_)); }
  /* 004f647c add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f647f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6481 mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004f6484 mov dword ptr [esi + 0x70], edx */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(edx); }
  /* 004f6487 jne 0x4f64b7 */ if (!ZF_) goto L_004f64b7;
L_004f6489:;
  /* 004f6489 mov esi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); esi = (u32)(M32(m_)); }
  /* 004f648c mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f648f call 0x4b9f20 */ esp -= 4; M32(esp) = 0x4f6494u; SAVEALL; F_004b9f20(c); ABI_CHECK(0x4b9f20u, 0x4f648fu); RETCHK(0x4f6494u, 0x4f648fu); LOADALL;
  /* 004f6494 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f6496 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6498 je 0x4f64b1 */ if (ZF_) goto L_004f64b1;
  /* 004f649a call 0x4ddf50 */ esp -= 4; M32(esp) = 0x4f649fu; SAVEALL; F_004ddf50(c); ABI_CHECK(0x4ddf50u, 0x4f649au); RETCHK(0x4f649fu, 0x4f649au); LOADALL;
  /* 004f649f mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 004f64a2 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f64a5 mov eax, dword ptr [esi + 0x314] */ { const u32 m_ = (u32)(esi + 0x314u); eax = (u32)(M32(m_)); }
  /* 004f64ab add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f64ae mov dword ptr [ecx + 0x70], eax */ { const u32 m_ = (u32)(ecx + 0x70u); M32(m_) = (u32)(eax); }
L_004f64b1:;
  /* 004f64b1 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f64b4 mov esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); esi = (u32)(M32(m_)); }
L_004f64b7:;
  /* 004f64b7 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f64b9 call 0x4f4230 */ esp -= 4; M32(esp) = 0x4f64beu; SAVEALL; F_004f4230(c); ABI_CHECK(0x4f4230u, 0x4f64b9u); RETCHK(0x4f64beu, 0x4f64b9u); LOADALL;
  /* 004f64be test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f64c0 je 0x4f64ec */ if (ZF_) goto L_004f64ec;
  /* 004f64c2 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004f64c4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f64c5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f64c7 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f64cau; SAVEALL; call_ind(c, t_); RETCHK(0x4f64cau, 0x4f64c7u); LOADALL; }
  /* 004f64ca test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f64cc je 0x4f64ec */ if (ZF_) goto L_004f64ec;
  /* 004f64ce add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004f64d1 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 004f64d4 mov dword ptr [esi + 0x54], 0x7f7fffff */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 004f64db mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 004f64de call 0x508a00 */ esp -= 4; M32(esp) = 0x4f64e3u; SAVEALL; F_00508a00(c); ABI_CHECK(0x508a00u, 0x4f64deu); RETCHK(0x4f64e3u, 0x4f64deu); LOADALL;
  /* 004f64e3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f64e4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f64e5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f64e6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f64e8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f64e9 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f64ec:;
  /* 004f64ec mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004f64ee mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f64f0 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f64f3u; SAVEALL; call_ind(c, t_); RETCHK(0x4f64f3u, 0x4f64f0u); LOADALL; }
  /* 004f64f3 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004f64f5 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f64f7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f64f9 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f64fbu; SAVEALL; call_ind(c, t_); RETCHK(0x4f64fbu, 0x4f64f9u); LOADALL; }
  /* 004f64fb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f64fc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f64fd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f64fe mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f6500 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f6501 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f6504:;
  /* 004f6504 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004f6507 mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 004f650a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f650b call 0x4f5bc0 */ esp -= 4; M32(esp) = 0x4f6510u; SAVEALL; F_004f5bc0(c); ABI_CHECK(0x4f5bc0u, 0x4f650bu); RETCHK(0x4f6510u, 0x4f650bu); LOADALL;
  /* 004f6510 mov edi, eax */ { edi = (u32)(eax); }
  /* 004f6512 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6514 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 004f6517 je 0x4f7221 */ if (ZF_) goto L_004f7221;
  /* 004f651d mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f6520 mov dword ptr [edi + 0x44], eax */ { const u32 m_ = (u32)(edi + 0x44u); M32(m_) = (u32)(eax); }
  /* 004f6523 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004f6526 mov dword ptr [edi + 0x4c], ecx */ { const u32 m_ = (u32)(edi + 0x4cu); M32(m_) = (u32)(ecx); }
  /* 004f6529 mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 004f652c mov dword ptr [edi + 0x48], edx */ { const u32 m_ = (u32)(edi + 0x48u); M32(m_) = (u32)(edx); }
  /* 004f652f mov esi, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); esi = (u32)(M32(m_)); }
  /* 004f6532 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6534 mov dword ptr [ebp + 8], 0 */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 004f653b jle 0x4f657c */ if ((ZF_|LT_)) goto L_004f657c;
  /* 004f653d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f6540 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f6543 lea eax, [ebx + esi*4 + 0x30] */ eax = (u32)((u32)(ebx + esi * 4u + 0x30u));
L_004f6547:;
  /* 004f6547 mov edx, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 004f654a sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f654d dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f654e cmp dword ptr [edx + 0x98], ecx */ { const u32 m_ = (u32)(edx + 0x98u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6554 je 0x4f655c */ if (ZF_) goto L_004f655c;
  /* 004f6556 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6558 jg 0x4f6547 */ if (!(ZF_|LT_)) goto L_004f6547;
  /* 004f655a jmp 0x4f657c */ goto L_004f657c;
L_004f655c:;
  /* 004f655c mov eax, dword ptr [ebx + esi*4 + 0x30] */ { const u32 m_ = (u32)(ebx + esi * 4u + 0x30u); eax = (u32)(M32(m_)); }
  /* 004f6560 call 0x4e6010 */ esp -= 4; M32(esp) = 0x4f6565u; SAVEALL; F_004e6010(c); ABI_CHECK(0x4e6010u, 0x4f6560u); RETCHK(0x4f6565u, 0x4f6560u); LOADALL;
  /* 004f6565 mov ecx, dword ptr [ebx + esi*4 + 0x30] */ { const u32 m_ = (u32)(ebx + esi * 4u + 0x30u); ecx = (u32)(M32(m_)); }
  /* 004f6569 mov edx, dword ptr [ecx + 0x538] */ { const u32 m_ = (u32)(ecx + 0x538u); edx = (u32)(M32(m_)); }
  /* 004f656f add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f6572 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6574 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f6577 mov dword ptr [edi + 0x70], edx */ { const u32 m_ = (u32)(edi + 0x70u); M32(m_) = (u32)(edx); }
  /* 004f657a jne 0x4f65a5 */ if (!ZF_) goto L_004f65a5;
L_004f657c:;
  /* 004f657c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f657f mov esi, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); esi = (u32)(M32(m_)); }
  /* 004f6582 mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f6585 call 0x4b9f20 */ esp -= 4; M32(esp) = 0x4f658au; SAVEALL; F_004b9f20(c); ABI_CHECK(0x4b9f20u, 0x4f6585u); RETCHK(0x4f658au, 0x4f6585u); LOADALL;
  /* 004f658a mov esi, eax */ { esi = (u32)(eax); }
  /* 004f658c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f658e je 0x4f65a5 */ if (ZF_) goto L_004f65a5;
  /* 004f6590 call 0x4ddf50 */ esp -= 4; M32(esp) = 0x4f6595u; SAVEALL; F_004ddf50(c); ABI_CHECK(0x4ddf50u, 0x4f6590u); RETCHK(0x4f6595u, 0x4f6590u); LOADALL;
  /* 004f6595 mov edx, dword ptr [esi + 0x314] */ { const u32 m_ = (u32)(esi + 0x314u); edx = (u32)(M32(m_)); }
  /* 004f659b add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f659e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f65a0 mov dword ptr [edi + 0x70], edx */ { const u32 m_ = (u32)(edi + 0x70u); M32(m_) = (u32)(edx); }
  /* 004f65a3 jmp 0x4f65a8 */ goto L_004f65a8;
L_004f65a5:;
  /* 004f65a5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
L_004f65a8:;
  /* 004f65a8 mov al, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f65ad test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f65af mov eax, edi */ { eax = (u32)(edi); }
  /* 004f65b1 je 0x4f65e9 */ if (ZF_) goto L_004f65e9;
  /* 004f65b3 call 0x4f4230 */ esp -= 4; M32(esp) = 0x4f65b8u; SAVEALL; F_004f4230(c); ABI_CHECK(0x4f4230u, 0x4f65b3u); RETCHK(0x4f65b8u, 0x4f65b3u); LOADALL;
  /* 004f65b8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f65ba jne 0x4f65c5 */ if (!ZF_) goto L_004f65c5;
  /* 004f65bc cmp dword ptr [edi + 0x40], 0x12002780 */ { const u32 m_ = (u32)(edi + 0x40u); u32 a_ = M32(m_), b_ = 0x12002780u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f65c3 jne 0x4f65d1 */ if (!ZF_) goto L_004f65d1;
L_004f65c5:;
  /* 004f65c5 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004f65c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f65c8 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f65ca call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f65cdu; SAVEALL; call_ind(c, t_); RETCHK(0x4f65cdu, 0x4f65cau); LOADALL; }
  /* 004f65cd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f65cf jne 0x4f65fe */ if (!ZF_) goto L_004f65fe;
L_004f65d1:;
  /* 004f65d1 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004f65d3 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f65d5 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f65d8u; SAVEALL; call_ind(c, t_); RETCHK(0x4f65d8u, 0x4f65d5u); LOADALL; }
  /* 004f65d8 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004f65da push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f65dc mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f65de call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f65e0u; SAVEALL; call_ind(c, t_); RETCHK(0x4f65e0u, 0x4f65deu); LOADALL; }
  /* 004f65e0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f65e1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f65e2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f65e3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f65e5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f65e6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f65e9:;
  /* 004f65e9 call 0x4f4230 */ esp -= 4; M32(esp) = 0x4f65eeu; SAVEALL; F_004f4230(c); ABI_CHECK(0x4f4230u, 0x4f65e9u); RETCHK(0x4f65eeu, 0x4f65e9u); LOADALL;
  /* 004f65ee test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f65f0 je 0x4f6619 */ if (ZF_) goto L_004f6619;
  /* 004f65f2 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004f65f4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f65f5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f65f7 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f65fau; SAVEALL; call_ind(c, t_); RETCHK(0x4f65fau, 0x4f65f7u); LOADALL; }
  /* 004f65fa test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f65fc je 0x4f6619 */ if (ZF_) goto L_004f6619;
L_004f65fe:;
  /* 004f65fe add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004f6601 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 004f6604 mov dword ptr [edi + 0x54], 0x7f7fffff */ { const u32 m_ = (u32)(edi + 0x54u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 004f660b call 0x508a00 */ esp -= 4; M32(esp) = 0x4f6610u; SAVEALL; F_00508a00(c); ABI_CHECK(0x508a00u, 0x4f660bu); RETCHK(0x4f6610u, 0x4f660bu); LOADALL;
  /* 004f6610 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f6611 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f6612 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f6613 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f6615 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f6616 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f6619:;
  /* 004f6619 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004f661b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f661d call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f6620u; SAVEALL; call_ind(c, t_); RETCHK(0x4f6620u, 0x4f661du); LOADALL; }
  /* 004f6620 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004f6622 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f6624 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f6626 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f6628u; SAVEALL; call_ind(c, t_); RETCHK(0x4f6628u, 0x4f6626u); LOADALL; }
  /* 004f6628 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f6629 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f662a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f662b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f662d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f662e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f6631:;
  /* 004f6631 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f6634 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004f6636 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6638 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 004f663b je 0x4f7221 */ if (ZF_) goto L_004f7221;
  /* 004f6641 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f6644 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004f6647 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 004f664a mov edx, eax */ { edx = (u32)(eax); }
L_004f664c:;
  /* 004f664c mov edi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edi = (u32)(M32(m_)); }
  /* 004f664f mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f6652 cmp dword ptr [eax + 0x40], edx */ { const u32 m_ = (u32)(eax + 0x40u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6655 jne 0x4f6667 */ if (!ZF_) goto L_004f6667;
  /* 004f6657 mov ecx, dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); ecx = (u32)(M32(m_)); }
  /* 004f665a cmp ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f665d jne 0x4f6667 */ if (!ZF_) goto L_004f6667;
  /* 004f665f mov eax, dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); eax = (u32)(M32(m_)); }
  /* 004f6662 cmp eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6665 je 0x4f667a */ if (ZF_) goto L_004f667a;
L_004f6667:;
  /* 004f6667 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004f6669 cmp eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f666c mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 004f666f jne 0x4f664c */ if (!ZF_) goto L_004f664c;
  /* 004f6671 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f6672 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f6673 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f6674 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f6676 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f6677 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f667a:;
  /* 004f667a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f667c mov ecx, 0x1d */ { ecx = (u32)(0x1du); }
  /* 004f6681 lea edi, [ebp - 0x8c] */ edi = (u32)((u32)(ebp + 0xffffff74u));
  /* 004f6687 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004f6689 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f668c mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f668f mov dword ptr [ebp - 0x8c], edx */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M32(m_) = (u32)(edx); }
  /* 004f6695 mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 004f6698 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f669b mov dword ptr [ebp - 0x84], eax */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(eax); }
  /* 004f66a1 mov dword ptr [ebp - 0x7c], edx */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(edx); }
  /* 004f66a4 lea edx, [esi + 0x18] */ edx = (u32)((u32)(esi + 0x18u));
  /* 004f66a7 mov dword ptr [ebp - 0x88], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(ecx); }
  /* 004f66ad mov eax, edx */ { eax = (u32)(edx); }
  /* 004f66af mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004f66b1 mov dword ptr [ebp - 0x64], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(ecx); }
  /* 004f66b4 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f66b7 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f66ba mov dword ptr [ebp - 0x5c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(eax); }
  /* 004f66bd mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 004f66bf mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 004f66c2 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004f66c5 mov dword ptr [ebp - 0x50], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(eax); }
  /* 004f66c8 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f66cb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f66cd mov dword ptr [ebp - 0x60], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(ecx); }
  /* 004f66d0 mov ecx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 004f66d3 mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 004f66d6 mov dword ptr [ebp - 0x54], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ecx); }
  /* 004f66d9 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 004f66dd jle 0x4f670c */ if ((ZF_|LT_)) goto L_004f670c;
  /* 004f66df mov esi, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); esi = (u32)(M32(m_)); }
  /* 004f66e2 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f66e4 imul ecx, ecx, 0xa0c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0xa0cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f66ea lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_004f66f0:;
  /* 004f66f0 mov edi, dword ptr [esi + 0xbe48] */ { const u32 m_ = (u32)(esi + 0xbe48u); edi = (u32)(M32(m_)); }
  /* 004f66f6 sub ecx, 0xa0c */ { u32 a_ = ecx, b_ = 0xa0cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f66fc dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f66fd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f66ff lea edi, [edi + ecx + 0x648] */ edi = (u32)((u32)(edi + ecx + 0x648u));
  /* 004f6706 mov dword ptr [ebp + eax*4 - 0x30], edi */ { const u32 m_ = (u32)(ebp + eax * 4u + 0xffffffd0u); M32(m_) = (u32)(edi); }
  /* 004f670a jg 0x4f66f0 */ if (!(ZF_|LT_)) goto L_004f66f0;
L_004f670c:;
  /* 004f670c mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f670f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6711 jle 0x4f673f */ if ((ZF_|LT_)) goto L_004f673f;
  /* 004f6713 lea ecx, [ebx + eax*4 + 0x30] */ ecx = (u32)((u32)(ebx + eax * 4u + 0x30u));
  /* 004f6717 jmp 0x4f6720 */ goto L_004f6720;
L_004f6720:;
  /* 004f6720 mov esi, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 004f6723 mov esi, dword ptr [esi + 0x98] */ { const u32 m_ = (u32)(esi + 0x98u); esi = (u32)(M32(m_)); }
  /* 004f6729 mov edi, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); edi = (u32)(M32(m_)); }
  /* 004f672f sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f6732 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f6733 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6735 je 0x4f67ca */ if (ZF_) goto L_004f67ca;
  /* 004f673b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f673d jg 0x4f6720 */ if (!(ZF_|LT_)) goto L_004f6720;
L_004f673f:;
  /* 004f673f mov edi, dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); edi = (u32)(M32(m_)); }
L_004f6742:;
  /* 004f6742 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6744 jne 0x4f676f */ if (!ZF_) goto L_004f676f;
  /* 004f6746 mov esi, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); esi = (u32)(M32(m_)); }
  /* 004f674c mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f674f call 0x4b9f20 */ esp -= 4; M32(esp) = 0x4f6754u; SAVEALL; F_004b9f20(c); ABI_CHECK(0x4b9f20u, 0x4f674fu); RETCHK(0x4f6754u, 0x4f674fu); LOADALL;
  /* 004f6754 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6756 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 004f6759 je 0x4f676f */ if (ZF_) goto L_004f676f;
  /* 004f675b mov edi, dword ptr [eax + 0x314] */ { const u32 m_ = (u32)(eax + 0x314u); edi = (u32)(M32(m_)); }
  /* 004f6761 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f6764 add eax, 0x278 */ { u32 a_ = eax, b_ = 0x278u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f6769 mov dword ptr [ebp - 0x74], edi */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(edi); }
  /* 004f676c mov dword ptr [ebp - 0x70], eax */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(eax); }
L_004f676f:;
  /* 004f676f mov eax, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); eax = (u32)(M32(m_)); }
  /* 004f6775 cmp eax, 0x1298be00 */ { u32 a_ = eax, b_ = 0x1298be00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f677a jne 0x4f6781 */ if (!ZF_) goto L_004f6781;
  /* 004f677c mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 004f677e mov dword ptr [ebp - 0x20], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edx); }
L_004f6781:;
  /* 004f6781 mov cl, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f6787 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f6789 je 0x4f67b0 */ if (ZF_) goto L_004f67b0;
  /* 004f678b mov ecx, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); ecx = (u32)(M32(m_)); }
  /* 004f6791 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6793 jne 0x4f67b0 */ if (!ZF_) goto L_004f67b0;
  /* 004f6795 mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 004f6798 add eax, 0xbcd0 */ { u32 a_ = eax, b_ = 0xbcd0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f679d call 0x4d7eb0 */ esp -= 4; M32(esp) = 0x4f67a2u; SAVEALL; F_004d7eb0(c); ABI_CHECK(0x4d7eb0u, 0x4f679du); RETCHK(0x4f67a2u, 0x4f679du); LOADALL;
  /* 004f67a2 mov edi, eax */ { edi = (u32)(eax); }
  /* 004f67a4 mov eax, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); eax = (u32)(M32(m_)); }
  /* 004f67aa add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f67ad mov dword ptr [ebp - 0x74], edi */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(edi); }
L_004f67b0:;
  /* 004f67b0 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f67b2 jne 0x4f67eb */ if (!ZF_) goto L_004f67eb;
  /* 004f67b4 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 004f67b7 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f67ba pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f67bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f67bc mov dword ptr [edx + 0x3c], 0xb */ { const u32 m_ = (u32)(edx + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f67c3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f67c4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f67c6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f67c7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f67ca:;
  /* 004f67ca mov ecx, dword ptr [ebx + eax*4 + 0x30] */ { const u32 m_ = (u32)(ebx + eax * 4u + 0x30u); ecx = (u32)(M32(m_)); }
  /* 004f67ce mov edi, dword ptr [ecx + 0x538] */ { const u32 m_ = (u32)(ecx + 0x538u); edi = (u32)(M32(m_)); }
  /* 004f67d4 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f67d7 mov dword ptr [ebp - 0x74], edi */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(edi); }
  /* 004f67da mov eax, dword ptr [ebx + eax*4 + 0x30] */ { const u32 m_ = (u32)(ebx + eax * 4u + 0x30u); eax = (u32)(M32(m_)); }
  /* 004f67de add eax, 0x498 */ { u32 a_ = eax, b_ = 0x498u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f67e3 mov dword ptr [ebp - 0x70], eax */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(eax); }
  /* 004f67e6 jmp 0x4f6742 */ goto L_004f6742;
L_004f67eb:;
  /* 004f67eb mov cl, byte ptr [ebp - 0xd] */ { const u32 m_ = (u32)(ebp + 0xfffffff3u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f67ee test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f67f0 je 0x4f6a6f */ if (ZF_) goto L_004f6a6f;
  /* 004f67f6 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 004f67f9 cmp eax, 0x12897bc0 */ { u32 a_ = eax, b_ = 0x12897bc0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f67fe jg 0x4f69e9 */ if (!(ZF_|LT_)) goto L_004f69e9;
  /* 004f6804 je 0x4f6986 */ if (ZF_) goto L_004f6986;
  /* 004f680a cmp eax, 0x12002780 */ { u32 a_ = eax, b_ = 0x12002780u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f680f je 0x4f68ba */ if (ZF_) goto L_004f68ba;
  /* 004f6815 cmp eax, 0x121eac00 */ { u32 a_ = eax, b_ = 0x121eac00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f681a jne 0x4f6edc */ if (!ZF_) goto L_004f6edc;
  /* 004f6820 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f6823 mov edi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edi = (u32)(M32(m_)); }
  /* 004f6826 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004f6829 mov dword ptr [edi + 0x4c], ecx */ { const u32 m_ = (u32)(edi + 0x4cu); M32(m_) = (u32)(ecx); }
  /* 004f682c mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f682f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6831 jle 0x4f6877 */ if ((ZF_|LT_)) goto L_004f6877;
  /* 004f6833 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004f6836 mov edx, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); edx = (u32)(M32(m_)); }
  /* 004f6839 lea ecx, [ebx + eax*4 + 0x30] */ ecx = (u32)((u32)(ebx + eax * 4u + 0x30u));
  /* 004f683d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_004f6840:;
  /* 004f6840 mov esi, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 004f6843 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f6846 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f6847 cmp dword ptr [esi + 0x98], edx */ { const u32 m_ = (u32)(esi + 0x98u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f684d je 0x4f6855 */ if (ZF_) goto L_004f6855;
  /* 004f684f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6851 jg 0x4f6840 */ if (!(ZF_|LT_)) goto L_004f6840;
  /* 004f6853 jmp 0x4f6877 */ goto L_004f6877;
L_004f6855:;
  /* 004f6855 mov ecx, dword ptr [ebx + eax*4 + 0x30] */ { const u32 m_ = (u32)(ebx + eax * 4u + 0x30u); ecx = (u32)(M32(m_)); }
  /* 004f6859 mov edx, dword ptr [ecx + 0x538] */ { const u32 m_ = (u32)(ecx + 0x538u); edx = (u32)(M32(m_)); }
  /* 004f685f add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f6862 mov dword ptr [edi + 0x84], edx */ { const u32 m_ = (u32)(edi + 0x84u); M32(m_) = (u32)(edx); }
  /* 004f6868 mov eax, dword ptr [ebx + eax*4 + 0x30] */ { const u32 m_ = (u32)(ebx + eax * 4u + 0x30u); eax = (u32)(M32(m_)); }
  /* 004f686c add eax, 0x498 */ { u32 a_ = eax, b_ = 0x498u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f6871 mov dword ptr [edi + 0x88], eax */ { const u32 m_ = (u32)(edi + 0x88u); M32(m_) = (u32)(eax); }
L_004f6877:;
  /* 004f6877 mov eax, dword ptr [edi + 0x84] */ { const u32 m_ = (u32)(edi + 0x84u); eax = (u32)(M32(m_)); }
  /* 004f687d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f687f jne 0x4f6edc */ if (!ZF_) goto L_004f6edc;
  /* 004f6885 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f6888 mov esi, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); esi = (u32)(M32(m_)); }
  /* 004f688b mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f688e call 0x4b9f20 */ esp -= 4; M32(esp) = 0x4f6893u; SAVEALL; F_004b9f20(c); ABI_CHECK(0x4b9f20u, 0x4f688eu); RETCHK(0x4f6893u, 0x4f688eu); LOADALL;
  /* 004f6893 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6895 je 0x4f6edc */ if (ZF_) goto L_004f6edc;
  /* 004f689b mov edx, dword ptr [eax + 0x314] */ { const u32 m_ = (u32)(eax + 0x314u); edx = (u32)(M32(m_)); }
  /* 004f68a1 add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f68a4 add eax, 0x278 */ { u32 a_ = eax, b_ = 0x278u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f68a9 mov dword ptr [edi + 0x84], edx */ { const u32 m_ = (u32)(edi + 0x84u); M32(m_) = (u32)(edx); }
  /* 004f68af mov dword ptr [edi + 0x88], eax */ { const u32 m_ = (u32)(edi + 0x88u); M32(m_) = (u32)(eax); }
  /* 004f68b5 jmp 0x4f6edc */ goto L_004f6edc;
L_004f68ba:;
  /* 004f68ba mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f68bd mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f68c0 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004f68c3 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 004f68c6 mov dword ptr [edx + 0x98], ecx */ { const u32 m_ = (u32)(edx + 0x98u); M32(m_) = (u32)(ecx); }
  /* 004f68cc mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004f68ce mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f68d1 mov dword ptr [edx + 0xc0], ecx */ { const u32 m_ = (u32)(edx + 0xc0u); M32(m_) = (u32)(ecx); }
  /* 004f68d7 mov ecx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 004f68da mov dword ptr [edx + 0xe8], ecx */ { const u32 m_ = (u32)(edx + 0xe8u); M32(m_) = (u32)(ecx); }
  /* 004f68e0 mov eax, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); eax = (u32)(M32(m_)); }
  /* 004f68e3 mov dword ptr [edx + 0x110], eax */ { const u32 m_ = (u32)(edx + 0x110u); M32(m_) = (u32)(eax); }
  /* 004f68e9 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f68ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f68ee jle 0x4f6940 */ if ((ZF_|LT_)) goto L_004f6940;
  /* 004f68f0 lea ecx, [ebx + eax*4 + 0x30] */ ecx = (u32)((u32)(ebx + eax * 4u + 0x30u));
  /* 004f68f4 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f68f7 jmp 0x4f6900 */ goto L_004f6900;
L_004f6900:;
  /* 004f6900 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f6903 lea eax, [edx + 0x130] */ eax = (u32)((u32)(edx + 0x130u));
  /* 004f6909 mov esi, 4 */ { esi = (u32)(0x4u); }
  /* 004f690e mov edi, edi */ { edi = (u32)(edi); }
L_004f6910:;
  /* 004f6910 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 004f6912 mov edi, dword ptr [edi + 0x98] */ { const u32 m_ = (u32)(edi + 0x98u); edi = (u32)(M32(m_)); }
  /* 004f6918 sub eax, 0x28 */ { u32 a_ = eax, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f691b cmp edi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f691e jne 0x4f6938 */ if (!ZF_) goto L_004f6938;
  /* 004f6920 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 004f6922 mov edi, dword ptr [edi + 0x538] */ { const u32 m_ = (u32)(edi + 0x538u); edi = (u32)(M32(m_)); }
  /* 004f6928 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f692b mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 004f692d mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 004f692f add edi, 0x498 */ { u32 a_ = edi, b_ = 0x498u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f6935 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
L_004f6938:;
  /* 004f6938 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f6939 jne 0x4f6910 */ if (!ZF_) goto L_004f6910;
  /* 004f693b dec dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f693e jne 0x4f6900 */ if (!ZF_) goto L_004f6900;
L_004f6940:;
  /* 004f6940 lea edi, [edx + 0x130] */ edi = (u32)((u32)(edx + 0x130u));
  /* 004f6946 mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 004f694d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_004f6950:;
  /* 004f6950 mov eax, dword ptr [edi - 0x28] */ { const u32 m_ = (u32)(edi + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004f6953 sub edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f6956 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6958 jne 0x4f697c */ if (!ZF_) goto L_004f697c;
  /* 004f695a mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f695d mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f6960 call 0x4b9f20 */ esp -= 4; M32(esp) = 0x4f6965u; SAVEALL; F_004b9f20(c); ABI_CHECK(0x4b9f20u, 0x4f6960u); RETCHK(0x4f6965u, 0x4f6960u); LOADALL;
  /* 004f6965 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6967 je 0x4f697c */ if (ZF_) goto L_004f697c;
  /* 004f6969 mov ecx, dword ptr [eax + 0x314] */ { const u32 m_ = (u32)(eax + 0x314u); ecx = (u32)(M32(m_)); }
  /* 004f696f add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f6972 add eax, 0x278 */ { u32 a_ = eax, b_ = 0x278u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f6977 mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 004f6979 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
L_004f697c:;
  /* 004f697c dec dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f697f jne 0x4f6950 */ if (!ZF_) goto L_004f6950;
  /* 004f6981 jmp 0x4f6edc */ goto L_004f6edc;
L_004f6986:;
  /* 004f6986 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f6988 call 0x4019a0 */ esp -= 4; M32(esp) = 0x4f698du; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x4f6988u); RETCHK(0x4f698du, 0x4f6988u); LOADALL;
  /* 004f698d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f6990 call 0x401020 */ esp -= 4; M32(esp) = 0x4f6995u; SAVEALL; F_00401020(c); ABI_CHECK(0x401020u, 0x4f6990u); RETCHK(0x4f6995u, 0x4f6990u); LOADALL;
  /* 004f6995 mov edx, dword ptr [eax + 0xb5c] */ { const u32 m_ = (u32)(eax + 0xb5cu); edx = (u32)(M32(m_)); }
  /* 004f699b mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 004f699e mov edi, dword ptr [eax + 0xbcc4] */ { const u32 m_ = (u32)(eax + 0xbcc4u); edi = (u32)(M32(m_)); }
  /* 004f69a4 cmp edi, dword ptr [eax + 0xbcc8] */ { const u32 m_ = (u32)(eax + 0xbcc8u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f69aa mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 004f69ad je 0x4f6edc */ if (ZF_) goto L_004f6edc;
L_004f69b3:;
  /* 004f69b3 mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 004f69b5 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f69b8 cmp dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f69bb jne 0x4f69d4 */ if (!ZF_) goto L_004f69d4;
  /* 004f69bd mov ecx, dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); ecx = (u32)(M32(m_)); }
  /* 004f69c0 mov edx, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); edx = (u32)(M32(m_)); }
  /* 004f69c6 mov eax, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); eax = (u32)(M32(m_)); }
  /* 004f69cc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f69cd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f69ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f69cf call 0x4deb90 */ esp -= 4; M32(esp) = 0x4f69d4u; SAVEALL; F_004deb90(c); ABI_CHECK(0x4deb90u, 0x4f69cfu); RETCHK(0x4f69d4u, 0x4f69cfu); LOADALL;
L_004f69d4:;
  /* 004f69d4 mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f69d7 mov eax, dword ptr [ecx + 0xbcc8] */ { const u32 m_ = (u32)(ecx + 0xbcc8u); eax = (u32)(M32(m_)); }
  /* 004f69dd add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f69e0 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f69e2 jne 0x4f69b3 */ if (!ZF_) goto L_004f69b3;
  /* 004f69e4 jmp 0x4f6edc */ goto L_004f6edc;
L_004f69e9:;
  /* 004f69e9 cmp eax, 0x1298be00 */ { u32 a_ = eax, b_ = 0x1298be00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f69ee jne 0x4f6edc */ if (!ZF_) goto L_004f6edc;
  /* 004f69f4 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f69f7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f69f9 jle 0x4f6edc */ if ((ZF_|LT_)) goto L_004f6edc;
  /* 004f69ff mov esi, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); esi = (u32)(M32(m_)); }
  /* 004f6a05 mov edi, eax */ { edi = (u32)(eax); }
  /* 004f6a07 lea edx, [ebx + eax*4 + 0x30] */ edx = (u32)((u32)(ebx + eax * 4u + 0x30u));
  /* 004f6a0b imul edi, edi, 0xa0c */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0xa0cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f6a11 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 004f6a14 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 004f6a17 jmp 0x4f6a20 */ goto L_004f6a20;
L_004f6a20:;
  /* 004f6a20 mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f6a23 mov edx, dword ptr [ecx + 0xbe48] */ { const u32 m_ = (u32)(ecx + 0xbe48u); edx = (u32)(M32(m_)); }
  /* 004f6a29 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f6a2c sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f6a2f sub edi, 0xa0c */ { u32 a_ = edi, b_ = 0xa0cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f6a35 lea edx, [edi + edx + 0x648] */ edx = (u32)((u32)(edi + edx + 0x648u));
  /* 004f6a3c mov dword ptr [ebp - 0x34], edx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edx); }
  /* 004f6a3f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f6a42 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 004f6a44 mov edx, dword ptr [eax + 0x538] */ { const u32 m_ = (u32)(eax + 0x538u); edx = (u32)(M32(m_)); }
  /* 004f6a4a add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f6a4d mov dword ptr [ebp - 0x74], edx */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(edx); }
  /* 004f6a50 call 0x4b9f20 */ esp -= 4; M32(esp) = 0x4f6a55u; SAVEALL; F_004b9f20(c); ABI_CHECK(0x4b9f20u, 0x4f6a50u); RETCHK(0x4f6a55u, 0x4f6a50u); LOADALL;
  /* 004f6a55 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6a57 je 0x4f6a65 */ if (ZF_) goto L_004f6a65;
  /* 004f6a59 mov eax, dword ptr [eax + 0x314] */ { const u32 m_ = (u32)(eax + 0x314u); eax = (u32)(M32(m_)); }
  /* 004f6a5f add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f6a62 mov dword ptr [ebp - 0x6c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(eax); }
L_004f6a65:;
  /* 004f6a65 dec dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f6a68 jne 0x4f6a20 */ if (!ZF_) goto L_004f6a20;
  /* 004f6a6a jmp 0x4f6edc */ goto L_004f6edc;
L_004f6a6f:;
  /* 004f6a6f cmp eax, 0x12897bc0 */ { u32 a_ = eax, b_ = 0x12897bc0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6a74 jg 0x4f6bc4 */ if (!(ZF_|LT_)) goto L_004f6bc4;
  /* 004f6a7a je 0x4f6aca */ if (ZF_) goto L_004f6aca;
  /* 004f6a7c cmp eax, 0x125bb500 */ { u32 a_ = eax, b_ = 0x125bb500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6a81 jg 0x4f6aaf */ if (!(ZF_|LT_)) goto L_004f6aaf;
  /* 004f6a83 je 0x4f6bdf */ if (ZF_) goto L_004f6bdf;
  /* 004f6a89 cmp eax, 0x12002780 */ { u32 a_ = eax, b_ = 0x12002780u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6a8e je 0x4f6c49 */ if (ZF_) goto L_004f6c49;
  /* 004f6a94 cmp eax, 0x120f69c0 */ { u32 a_ = eax, b_ = 0x120f69c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6a99 je 0x4f6c49 */ if (ZF_) goto L_004f6c49;
  /* 004f6a9f cmp eax, 0x121eac00 */ { u32 a_ = eax, b_ = 0x121eac00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6aa4 je 0x4f6c49 */ if (ZF_) goto L_004f6c49;
  /* 004f6aaa jmp 0x4f6e1e */ goto L_004f6e1e;
L_004f6aaf:;
  /* 004f6aaf cmp eax, 0x126af740 */ { u32 a_ = eax, b_ = 0x126af740u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6ab4 je 0x4f6bdf */ if (ZF_) goto L_004f6bdf;
  /* 004f6aba cmp eax, 0x127a3980 */ { u32 a_ = eax, b_ = 0x127a3980u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6abf je 0x4f6bdf */ if (ZF_) goto L_004f6bdf;
  /* 004f6ac5 jmp 0x4f6e1e */ goto L_004f6e1e;
L_004f6aca:;
  /* 004f6aca mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f6acd mov esi, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); esi = (u32)(M32(m_)); }
  /* 004f6ad3 mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 004f6ada call 0x4b9f20 */ esp -= 4; M32(esp) = 0x4f6adfu; SAVEALL; F_004b9f20(c); ABI_CHECK(0x4b9f20u, 0x4f6adau); RETCHK(0x4f6adfu, 0x4f6adau); LOADALL;
  /* 004f6adf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6ae1 je 0x4f6ae9 */ if (ZF_) goto L_004f6ae9;
  /* 004f6ae3 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004f6ae6 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
L_004f6ae9:;
  /* 004f6ae9 mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 004f6aec mov edi, dword ptr [eax + 0xbcc4] */ { const u32 m_ = (u32)(eax + 0xbcc4u); edi = (u32)(M32(m_)); }
  /* 004f6af2 cmp edi, dword ptr [eax + 0xbcc8] */ { const u32 m_ = (u32)(eax + 0xbcc8u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6af8 je 0x4f6b31 */ if (ZF_) goto L_004f6b31;
  /* 004f6afa lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_004f6b00:;
  /* 004f6b00 mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 004f6b02 mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 004f6b05 cmp edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6b08 jne 0x4f6b21 */ if (!ZF_) goto L_004f6b21;
  /* 004f6b0a mov eax, dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); eax = (u32)(M32(m_)); }
  /* 004f6b0d mov ecx, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); ecx = (u32)(M32(m_)); }
  /* 004f6b13 mov edx, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); edx = (u32)(M32(m_)); }
  /* 004f6b19 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f6b1a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f6b1b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f6b1c call 0x4deb90 */ esp -= 4; M32(esp) = 0x4f6b21u; SAVEALL; F_004deb90(c); ABI_CHECK(0x4deb90u, 0x4f6b1cu); RETCHK(0x4f6b21u, 0x4f6b1cu); LOADALL;
L_004f6b21:;
  /* 004f6b21 mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 004f6b24 mov ecx, dword ptr [eax + 0xbcc8] */ { const u32 m_ = (u32)(eax + 0xbcc8u); ecx = (u32)(M32(m_)); }
  /* 004f6b2a add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f6b2d cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6b2f jne 0x4f6b00 */ if (!ZF_) goto L_004f6b00;
L_004f6b31:;
  /* 004f6b31 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f6b33 call 0x4019a0 */ esp -= 4; M32(esp) = 0x4f6b38u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x4f6b33u); RETCHK(0x4f6b38u, 0x4f6b33u); LOADALL;
  /* 004f6b38 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 004f6b3b mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f6b3e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f6b41 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6b43 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004f6b4a jle 0x4f6e1e */ if ((ZF_|LT_)) goto L_004f6e1e;
  /* 004f6b50 lea ecx, [ebx + 0x30] */ ecx = (u32)((u32)(ebx + 0x30u));
  /* 004f6b53 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 004f6b56 jmp 0x4f6b60 */ goto L_004f6b60;
L_004f6b60:;
  /* 004f6b60 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 004f6b63 mov esi, dword ptr [edx + 0xc38] */ { const u32 m_ = (u32)(edx + 0xc38u); esi = (u32)(M32(m_)); }
  /* 004f6b69 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6b6b je 0x4f6ba8 */ if (ZF_) goto L_004f6ba8;
  /* 004f6b6d mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 004f6b70 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 004f6b72 mov ecx, dword ptr [edi + 0x98] */ { const u32 m_ = (u32)(edi + 0x98u); ecx = (u32)(M32(m_)); }
  /* 004f6b78 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f6b79 call 0x55ead0 */ esp -= 4; M32(esp) = 0x4f6b7eu; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x4f6b79u); RETCHK(0x4f6b7eu, 0x4f6b79u); LOADALL;
  /* 004f6b7e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6b80 je 0x4f6ba8 */ if (ZF_) goto L_004f6ba8;
  /* 004f6b82 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 004f6b85 cmp dword ptr [eax + 0xb5c], edx */ { const u32 m_ = (u32)(eax + 0xb5cu); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6b8b jne 0x4f6ba8 */ if (!ZF_) goto L_004f6ba8;
  /* 004f6b8d mov eax, dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); eax = (u32)(M32(m_)); }
  /* 004f6b90 mov ecx, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); ecx = (u32)(M32(m_)); }
  /* 004f6b96 mov ebx, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); ebx = (u32)(M32(m_)); }
  /* 004f6b9c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f6b9d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f6b9e mov esi, edi */ { esi = (u32)(edi); }
  /* 004f6ba0 call 0x4e83b0 */ esp -= 4; M32(esp) = 0x4f6ba5u; SAVEALL; F_004e83b0(c); ABI_CHECK(0x4e83b0u, 0x4f6ba0u); RETCHK(0x4f6ba5u, 0x4f6ba0u); LOADALL;
  /* 004f6ba5 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_004f6ba8:;
  /* 004f6ba8 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f6bab mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 004f6bae mov ecx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004f6bb1 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f6bb2 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f6bb5 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6bb7 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f6bba mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 004f6bbd jl 0x4f6b60 */ if (LT_) goto L_004f6b60;
  /* 004f6bbf jmp 0x4f6e1e */ goto L_004f6e1e;
L_004f6bc4:;
  /* 004f6bc4 cmp eax, 0x12d5c700 */ { u32 a_ = eax, b_ = 0x12d5c700u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6bc9 jg 0x4f6c33 */ if (!(ZF_|LT_)) goto L_004f6c33;
  /* 004f6bcb je 0x4f6c0d */ if (ZF_) goto L_004f6c0d;
  /* 004f6bcd cmp eax, 0x1298be00 */ { u32 a_ = eax, b_ = 0x1298be00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6bd2 je 0x4f6c49 */ if (ZF_) goto L_004f6c49;
  /* 004f6bd4 cmp eax, 0x12a80040 */ { u32 a_ = eax, b_ = 0x12a80040u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6bd9 jne 0x4f6e1e */ if (!ZF_) goto L_004f6e1e;
L_004f6bdf:;
  /* 004f6bdf mov esi, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); esi = (u32)(M32(m_)); }
  /* 004f6be5 mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f6be8 call 0x4b9f20 */ esp -= 4; M32(esp) = 0x4f6bedu; SAVEALL; F_004b9f20(c); ABI_CHECK(0x4b9f20u, 0x4f6be8u); RETCHK(0x4f6bedu, 0x4f6be8u); LOADALL;
  /* 004f6bed test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6bef je 0x4f6e1e */ if (ZF_) goto L_004f6e1e;
  /* 004f6bf5 mov edx, dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); edx = (u32)(M32(m_)); }
  /* 004f6bf8 mov ecx, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); ecx = (u32)(M32(m_)); }
  /* 004f6bfe push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f6bff push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f6c00 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f6c01 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f6c03 call 0x4deb90 */ esp -= 4; M32(esp) = 0x4f6c08u; SAVEALL; F_004deb90(c); ABI_CHECK(0x4deb90u, 0x4f6c03u); RETCHK(0x4f6c08u, 0x4f6c03u); LOADALL;
  /* 004f6c08 jmp 0x4f6e1e */ goto L_004f6e1e;
L_004f6c0d:;
  /* 004f6c0d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f6c0f call 0x4019a0 */ esp -= 4; M32(esp) = 0x4f6c14u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x4f6c0fu); RETCHK(0x4f6c14u, 0x4f6c0fu); LOADALL;
  /* 004f6c14 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f6c17 call 0x401020 */ esp -= 4; M32(esp) = 0x4f6c1cu; SAVEALL; F_00401020(c); ABI_CHECK(0x401020u, 0x4f6c17u); RETCHK(0x4f6c1cu, 0x4f6c17u); LOADALL;
  /* 004f6c1c mov ecx, dword ptr [eax + 0xb5c] */ { const u32 m_ = (u32)(eax + 0xb5cu); ecx = (u32)(M32(m_)); }
  /* 004f6c22 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6c24 jne 0x4f6e1e */ if (!ZF_) goto L_004f6e1e;
  /* 004f6c2a mov edx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); edx = (u32)(M32(m_)); }
  /* 004f6c2d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f6c2e jmp 0x4f6e19 */ goto L_004f6e19;
L_004f6c33:;
  /* 004f6c33 cmp eax, 0x12e50940 */ { u32 a_ = eax, b_ = 0x12e50940u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6c38 je 0x4f6dfd */ if (ZF_) goto L_004f6dfd;
  /* 004f6c3e cmp eax, 0x13221240 */ { u32 a_ = eax, b_ = 0x13221240u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6c43 jne 0x4f6e1e */ if (!ZF_) goto L_004f6e1e;
L_004f6c49:;
  /* 004f6c49 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f6c4c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6c4e jle 0x4f6d47 */ if ((ZF_|LT_)) goto L_004f6d47;
  /* 004f6c54 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f6c56 imul ecx, ecx, 0xa0c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0xa0cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f6c5c mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 004f6c5f lea edi, [ebx + eax*4 + 0x30] */ edi = (u32)((u32)(ebx + eax * 4u + 0x30u));
  /* 004f6c63 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 004f6c66 jmp 0x4f6c70 */ goto L_004f6c70;
L_004f6c70:;
  /* 004f6c70 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f6c73 mov esi, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); esi = (u32)(M32(m_)); }
  /* 004f6c76 mov ecx, dword ptr [esi + 0xbe48] */ { const u32 m_ = (u32)(esi + 0xbe48u); ecx = (u32)(M32(m_)); }
  /* 004f6c7c sub eax, 0xa0c */ { u32 a_ = eax, b_ = 0xa0cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f6c81 lea edx, [ecx + eax + 0x648] */ edx = (u32)((u32)(ecx + eax + 0x648u));
  /* 004f6c88 sub edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f6c8b mov dword ptr [ebp - 0x34], edx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edx); }
  /* 004f6c8e mov edx, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); edx = (u32)(M32(m_)); }
  /* 004f6c94 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f6c97 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004f6c99 mov ecx, dword ptr [eax + 0x98] */ { const u32 m_ = (u32)(eax + 0x98u); ecx = (u32)(M32(m_)); }
  /* 004f6c9f cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6ca1 jne 0x4f6cfe */ if (!ZF_) goto L_004f6cfe;
  /* 004f6ca3 mov eax, dword ptr [eax + 0x538] */ { const u32 m_ = (u32)(eax + 0x538u); eax = (u32)(M32(m_)); }
  /* 004f6ca9 mov ecx, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); ecx = (u32)(M32(m_)); }
  /* 004f6caf add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f6cb2 mov dword ptr [ebp - 0x6c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(eax); }
  /* 004f6cb5 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004f6cb7 add edx, 0x498 */ { u32 a_ = edx, b_ = 0x498u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f6cbd mov dword ptr [ebp - 0x68], edx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(edx); }
  /* 004f6cc0 mov byte ptr [ebp - 0x28], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x1u); }
  /* 004f6cc4 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004f6cc6 add eax, 0x598 */ { u32 a_ = eax, b_ = 0x598u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f6ccb mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 004f6cce add ecx, 0xee0f1ac0 */ { u32 a_ = ecx, b_ = 0xee0f1ac0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f6cd4 mov eax, 0x431bde83 */ { eax = (u32)(0x431bde83u); }
  /* 004f6cd9 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f6cdb sar edx, 0x12 */ { u32 n_ = (18u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004f6cde mov eax, edx */ { eax = (u32)(edx); }
  /* 004f6ce0 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f6ce3 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f6ce5 mov eax, dword ptr [ebx + eax*4 + 0x60] */ { const u32 m_ = (u32)(ebx + eax * 4u + 0x60u); eax = (u32)(M32(m_)); }
  /* 004f6ce9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6ceb je 0x4f6cfe */ if (ZF_) goto L_004f6cfe;
  /* 004f6ced call 0x4ccaa0 */ esp -= 4; M32(esp) = 0x4f6cf2u; SAVEALL; F_004ccaa0(c); ABI_CHECK(0x4ccaa0u, 0x4f6cedu); RETCHK(0x4f6cf2u, 0x4f6cedu); LOADALL;
  /* 004f6cf2 mov ecx, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); ecx = (u32)(M32(m_)); }
  /* 004f6cf8 mov dword ptr [edi + 0x84], ecx */ { const u32 m_ = (u32)(edi + 0x84u); M32(m_) = (u32)(ecx); }
L_004f6cfe:;
  /* 004f6cfe cmp dword ptr [ebp - 0x8c], 0x12002780 */ { const u32 m_ = (u32)(ebp + 0xffffff74u); u32 a_ = M32(m_), b_ = 0x12002780u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6d08 jne 0x4f6d3e */ if (!ZF_) goto L_004f6d3e;
  /* 004f6d0a mov eax, 3 */ { eax = (u32)(0x3u); }
  /* 004f6d0f nop */ ;
L_004f6d10:;
  /* 004f6d10 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 004f6d12 mov edx, dword ptr [ecx + 0x98] */ { const u32 m_ = (u32)(ecx + 0x98u); edx = (u32)(M32(m_)); }
  /* 004f6d18 mov esi, dword ptr [ebp + eax*4 - 0x5c] */ { const u32 m_ = (u32)(ebp + eax * 4u + 0xffffffa4u); esi = (u32)(M32(m_)); }
  /* 004f6d1c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f6d1d cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6d1f jne 0x4f6d3a */ if (!ZF_) goto L_004f6d3a;
  /* 004f6d21 mov ecx, dword ptr [ecx + 0x538] */ { const u32 m_ = (u32)(ecx + 0x538u); ecx = (u32)(M32(m_)); }
  /* 004f6d27 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f6d2a mov dword ptr [ebp + eax*4 - 0x4c], ecx */ { const u32 m_ = (u32)(ebp + eax * 4u + 0xffffffb4u); M32(m_) = (u32)(ecx); }
  /* 004f6d2e mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004f6d30 add edx, 0x498 */ { u32 a_ = edx, b_ = 0x498u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f6d36 mov dword ptr [ebp + eax*4 - 0x40], edx */ { const u32 m_ = (u32)(ebp + eax * 4u + 0xffffffc0u); M32(m_) = (u32)(edx); }
L_004f6d3a:;
  /* 004f6d3a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6d3c jg 0x4f6d10 */ if (!(ZF_|LT_)) goto L_004f6d10;
L_004f6d3e:;
  /* 004f6d3e dec dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f6d41 jne 0x4f6c70 */ if (!ZF_) goto L_004f6c70;
L_004f6d47:;
  /* 004f6d47 mov eax, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); eax = (u32)(M32(m_)); }
  /* 004f6d4a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6d4c jne 0x4f6db7 */ if (!ZF_) goto L_004f6db7;
  /* 004f6d4e mov edi, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); edi = (u32)(M32(m_)); }
  /* 004f6d51 mov esi, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); esi = (u32)(M32(m_)); }
  /* 004f6d57 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f6d59 call 0x4b9f20 */ esp -= 4; M32(esp) = 0x4f6d5eu; SAVEALL; F_004b9f20(c); ABI_CHECK(0x4b9f20u, 0x4f6d59u); RETCHK(0x4f6d5eu, 0x4f6d59u); LOADALL;
  /* 004f6d5e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6d60 je 0x4f6d7f */ if (ZF_) goto L_004f6d7f;
  /* 004f6d62 mov ecx, dword ptr [eax + 0x314] */ { const u32 m_ = (u32)(eax + 0x314u); ecx = (u32)(M32(m_)); }
  /* 004f6d68 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f6d6b lea edx, [eax + 0x278] */ edx = (u32)((u32)(eax + 0x278u));
  /* 004f6d71 add eax, 0x104c */ { u32 a_ = eax, b_ = 0x104cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f6d76 mov dword ptr [ebp - 0x6c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(ecx); }
  /* 004f6d79 mov dword ptr [ebp - 0x68], edx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(edx); }
  /* 004f6d7c mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
L_004f6d7f:;
  /* 004f6d7f mov al, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f6d84 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f6d86 je 0x4f6db7 */ if (ZF_) goto L_004f6db7;
  /* 004f6d88 lea eax, [edi + 0xbcd0] */ eax = (u32)((u32)(edi + 0xbcd0u));
  /* 004f6d8e call 0x4d7eb0 */ esp -= 4; M32(esp) = 0x4f6d93u; SAVEALL; F_004d7eb0(c); ABI_CHECK(0x4d7eb0u, 0x4f6d8eu); RETCHK(0x4f6d93u, 0x4f6d8eu); LOADALL;
  /* 004f6d93 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f6d96 mov dword ptr [ebp - 0x6c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(eax); }
  /* 004f6d99 mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 004f6d9c lea ecx, [eax + 0xbddc] */ ecx = (u32)((u32)(eax + 0xbddcu));
  /* 004f6da2 add eax, 0xbcd0 */ { u32 a_ = eax, b_ = 0xbcd0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f6da7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f6da8 mov dword ptr [ebp - 0x68], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(ecx); }
  /* 004f6dab mov byte ptr [ebp - 0x28], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x1u); }
  /* 004f6daf call 0x4d7ec0 */ esp -= 4; M32(esp) = 0x4f6db4u; SAVEALL; F_004d7ec0(c); ABI_CHECK(0x4d7ec0u, 0x4f6dafu); RETCHK(0x4f6db4u, 0x4f6dafu); LOADALL;
  /* 004f6db4 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
L_004f6db7:;
  /* 004f6db7 cmp dword ptr [ebp - 0x8c], 0x12002780 */ { const u32 m_ = (u32)(ebp + 0xffffff74u); u32 a_ = M32(m_), b_ = 0x12002780u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6dc1 jne 0x4f6e1e */ if (!ZF_) goto L_004f6e1e;
  /* 004f6dc3 mov edi, 3 */ { edi = (u32)(0x3u); }
L_004f6dc8:;
  /* 004f6dc8 mov eax, dword ptr [ebp + edi*4 - 0x50] */ { const u32 m_ = (u32)(ebp + edi * 4u + 0xffffffb0u); eax = (u32)(M32(m_)); }
  /* 004f6dcc dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f6dcd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6dcf jne 0x4f6df7 */ if (!ZF_) goto L_004f6df7;
  /* 004f6dd1 mov esi, dword ptr [ebp + edi*4 - 0x58] */ { const u32 m_ = (u32)(ebp + edi * 4u + 0xffffffa8u); esi = (u32)(M32(m_)); }
  /* 004f6dd5 mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f6dd8 call 0x4b9f20 */ esp -= 4; M32(esp) = 0x4f6dddu; SAVEALL; F_004b9f20(c); ABI_CHECK(0x4b9f20u, 0x4f6dd8u); RETCHK(0x4f6dddu, 0x4f6dd8u); LOADALL;
  /* 004f6ddd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6ddf je 0x4f6df7 */ if (ZF_) goto L_004f6df7;
  /* 004f6de1 mov edx, dword ptr [eax + 0x314] */ { const u32 m_ = (u32)(eax + 0x314u); edx = (u32)(M32(m_)); }
  /* 004f6de7 add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f6dea add eax, 0x278 */ { u32 a_ = eax, b_ = 0x278u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f6def mov dword ptr [ebp + edi*4 - 0x4c], edx */ { const u32 m_ = (u32)(ebp + edi * 4u + 0xffffffb4u); M32(m_) = (u32)(edx); }
  /* 004f6df3 mov dword ptr [ebp + edi*4 - 0x40], eax */ { const u32 m_ = (u32)(ebp + edi * 4u + 0xffffffc0u); M32(m_) = (u32)(eax); }
L_004f6df7:;
  /* 004f6df7 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6df9 jg 0x4f6dc8 */ if (!(ZF_|LT_)) goto L_004f6dc8;
  /* 004f6dfb jmp 0x4f6e1e */ goto L_004f6e1e;
L_004f6dfd:;
  /* 004f6dfd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f6dff call 0x4019a0 */ esp -= 4; M32(esp) = 0x4f6e04u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x4f6dffu); RETCHK(0x4f6e04u, 0x4f6dffu); LOADALL;
  /* 004f6e04 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f6e07 call 0x401020 */ esp -= 4; M32(esp) = 0x4f6e0cu; SAVEALL; F_00401020(c); ABI_CHECK(0x401020u, 0x4f6e07u); RETCHK(0x4f6e0cu, 0x4f6e07u); LOADALL;
  /* 004f6e0c cmp dword ptr [eax + 0xb5c], 1 */ { const u32 m_ = (u32)(eax + 0xb5cu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6e13 jne 0x4f6e1e */ if (!ZF_) goto L_004f6e1e;
  /* 004f6e15 mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 004f6e18 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
L_004f6e19:;
  /* 004f6e19 call 0x4cca40 */ esp -= 4; M32(esp) = 0x4f6e1eu; SAVEALL; F_004cca40(c); ABI_CHECK(0x4cca40u, 0x4f6e19u); RETCHK(0x4f6e1eu, 0x4f6e19u); LOADALL;
L_004f6e1e:;
  /* 004f6e1e mov al, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f6e23 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f6e25 je 0x4f6eca */ if (ZF_) goto L_004f6eca;
  /* 004f6e2b mov eax, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); eax = (u32)(M32(m_)); }
  /* 004f6e31 cmp eax, 0x13038dc0 */ { u32 a_ = eax, b_ = 0x13038dc0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6e36 jg 0x4f6eb6 */ if (!(ZF_|LT_)) goto L_004f6eb6;
  /* 004f6e38 je 0x4f6eca */ if (ZF_) goto L_004f6eca;
  /* 004f6e3e cmp eax, 0x12002780 */ { u32 a_ = eax, b_ = 0x12002780u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6e43 je 0x4f6e7c */ if (ZF_) goto L_004f6e7c;
  /* 004f6e45 cmp eax, 0x121eac00 */ { u32 a_ = eax, b_ = 0x121eac00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6e4a jne 0x4f6eca */ if (!ZF_) goto L_004f6eca;
  /* 004f6e4c mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 004f6e4f lea esi, [eax + 0xbcd0] */ esi = (u32)((u32)(eax + 0xbcd0u));
  /* 004f6e55 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f6e57 call 0x4d8ca0 */ esp -= 4; M32(esp) = 0x4f6e5cu; SAVEALL; F_004d8ca0(c); ABI_CHECK(0x4d8ca0u, 0x4f6e57u); RETCHK(0x4f6e5cu, 0x4f6e57u); LOADALL;
  /* 004f6e5c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f6e5e jne 0x4f6eca */ if (!ZF_) goto L_004f6eca;
  /* 004f6e60 push 0x41a00000 */ { u32 v_ = 0x41a00000u; esp -= 4; M32(esp) = v_; }
  /* 004f6e65 push 0x40a00000 */ { u32 v_ = 0x40a00000u; esp -= 4; M32(esp) = v_; }
  /* 004f6e6a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f6e6c push 0x121eac00 */ { u32 v_ = 0x121eac00u; esp -= 4; M32(esp) = v_; }
  /* 004f6e71 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f6e73 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f6e75 call 0x4d8460 */ esp -= 4; M32(esp) = 0x4f6e7au; SAVEALL; F_004d8460(c); ABI_CHECK(0x4d8460u, 0x4f6e75u); RETCHK(0x4f6e7au, 0x4f6e75u); LOADALL;
  /* 004f6e7a jmp 0x4f6eca */ goto L_004f6eca;
L_004f6e7c:;
  /* 004f6e7c mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 004f6e7f lea esi, [eax + 0xbcd0] */ esi = (u32)((u32)(eax + 0xbcd0u));
  /* 004f6e85 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f6e87 call 0x4d8ca0 */ esp -= 4; M32(esp) = 0x4f6e8cu; SAVEALL; F_004d8ca0(c); ABI_CHECK(0x4d8ca0u, 0x4f6e87u); RETCHK(0x4f6e8cu, 0x4f6e87u); LOADALL;
  /* 004f6e8c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f6e8e jne 0x4f6eca */ if (!ZF_) goto L_004f6eca;
  /* 004f6e90 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 004f6e93 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f6e96 mov eax, dword ptr [edx + 0x44] */ { const u32 m_ = (u32)(edx + 0x44u); eax = (u32)(M32(m_)); }
  /* 004f6e99 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6e9b jle 0x4f6eca */ if ((ZF_|LT_)) goto L_004f6eca;
  /* 004f6e9d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f6e9f push 0x40a00000 */ { u32 v_ = 0x40a00000u; esp -= 4; M32(esp) = v_; }
  /* 004f6ea4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f6ea6 push 0x12002780 */ { u32 v_ = 0x12002780u; esp -= 4; M32(esp) = v_; }
  /* 004f6eab mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f6ead mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f6eaf call 0x4d8460 */ esp -= 4; M32(esp) = 0x4f6eb4u; SAVEALL; F_004d8460(c); ABI_CHECK(0x4d8460u, 0x4f6eafu); RETCHK(0x4f6eb4u, 0x4f6eafu); LOADALL;
  /* 004f6eb4 jmp 0x4f6eca */ goto L_004f6eca;
L_004f6eb6:;
  /* 004f6eb6 cmp eax, 0x1312d000 */ { u32 a_ = eax, b_ = 0x1312d000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6ebb jne 0x4f6eca */ if (!ZF_) goto L_004f6eca;
  /* 004f6ebd mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 004f6ec0 mov dword ptr [eax + 0xbe44], 0x41700000 */ { const u32 m_ = (u32)(eax + 0xbe44u); M32(m_) = (u32)(0x41700000u); }
L_004f6eca:;
  /* 004f6eca mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 004f6ecd mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f6ed0 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f6ed2 lea eax, [ebp - 0x8c] */ eax = (u32)((u32)(ebp + 0xffffff74u));
  /* 004f6ed8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f6ed9 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f6edcu; SAVEALL; call_ind(c, t_); RETCHK(0x4f6edcu, 0x4f6ed9u); LOADALL; }
L_004f6edc:;
  /* 004f6edc mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f6edf mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f6ee2 cmp eax, 0x1298be00 */ { u32 a_ = eax, b_ = 0x1298be00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6ee7 je 0x4f7041 */ if (ZF_) goto L_004f7041;
  /* 004f6eed cmp eax, 0x12b74280 */ { u32 a_ = eax, b_ = 0x12b74280u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6ef2 je 0x4f7009 */ if (ZF_) goto L_004f7009;
  /* 004f6ef8 cmp eax, 0x12c684c0 */ { u32 a_ = eax, b_ = 0x12c684c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6efd jne 0x4f7221 */ if (!ZF_) goto L_004f7221;
  /* 004f6f03 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 004f6f06 mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f6f09 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f6f0b mov dword ptr [ebp - 0x9c], 0x41200000 */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(0x41200000u); }
  /* 004f6f15 mov dword ptr [ebp - 0x98], 0xc1200000 */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(0xc1200000u); }
  /* 004f6f1f mov dword ptr [ebp - 0x94], 0x40a00000 */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(0x40a00000u); }
  /* 004f6f29 mov dword ptr [ebp - 0x90], 0xc0a00000 */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M32(m_) = (u32)(0xc0a00000u); }
  /* 004f6f33 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 004f6f36 call 0x4019a0 */ esp -= 4; M32(esp) = 0x4f6f3bu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x4f6f36u); RETCHK(0x4f6f3bu, 0x4f6f36u); LOADALL;
  /* 004f6f3b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f6f3e call 0x401020 */ esp -= 4; M32(esp) = 0x4f6f43u; SAVEALL; F_00401020(c); ABI_CHECK(0x401020u, 0x4f6f3eu); RETCHK(0x4f6f43u, 0x4f6f3eu); LOADALL;
  /* 004f6f43 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f6f45 cmp word ptr [eax + 0xb60], 0xa */ { const u32 m_ = (u32)(eax + 0xb60u); u32 a_ = M16(m_), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 004f6f4d mov dword ptr [ebp + 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 004f6f54 setg cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!(ZF_|LT_)) ? 1u : 0u) & 0xffu); }
  /* 004f6f57 lea ecx, [ecx + ecx + 2] */ ecx = (u32)((u32)(ecx + ecx + 0x2u));
  /* 004f6f5b mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004f6f5d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6f5f mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 004f6f62 jle 0x4f7221 */ if ((ZF_|LT_)) goto L_004f7221;
  /* 004f6f68 jmp 0x4f6f70 */ goto L_004f6f70;
L_004f6f70:;
  /* 004f6f70 mov al, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f6f75 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f6f77 je 0x4f6f9b */ if (ZF_) goto L_004f6f9b;
  /* 004f6f79 push 0x94 */ { u32 v_ = 0x94u; esp -= 4; M32(esp) = v_; }
  /* 004f6f7e call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f6f83u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f6f7eu); RETCHK(0x4f6f83u, 0x4f6f7eu); LOADALL;
  /* 004f6f83 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f6f86 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6f88 je 0x4f6f97 */ if (ZF_) goto L_004f6f97;
  /* 004f6f8a mov edx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); edx = (u32)(M32(m_)); }
  /* 004f6f8d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f6f8e mov esi, eax */ { esi = (u32)(eax); }
  /* 004f6f90 call 0x4b0980 */ esp -= 4; M32(esp) = 0x4f6f95u; SAVEALL; F_004b0980(c); ABI_CHECK(0x4b0980u, 0x4f6f90u); RETCHK(0x4f6f95u, 0x4f6f90u); LOADALL;
  /* 004f6f95 jmp 0x4f6fa6 */ goto L_004f6fa6;
L_004f6f97:;
  /* 004f6f97 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f6f99 jmp 0x4f6fa6 */ goto L_004f6fa6;
L_004f6f9b:;
  /* 004f6f9b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f6f9c mov edi, 0x12c684c0 */ { edi = (u32)(0x12c684c0u); }
  /* 004f6fa1 call 0x4f5bc0 */ esp -= 4; M32(esp) = 0x4f6fa6u; SAVEALL; F_004f5bc0(c); ABI_CHECK(0x4f5bc0u, 0x4f6fa1u); RETCHK(0x4f6fa6u, 0x4f6fa1u); LOADALL;
L_004f6fa6:;
  /* 004f6fa6 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f6fa8 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f6faa je 0x4f6fee */ if (ZF_) goto L_004f6fee;
  /* 004f6fac call 0x4f4230 */ esp -= 4; M32(esp) = 0x4f6fb1u; SAVEALL; F_004f4230(c); ABI_CHECK(0x4f4230u, 0x4f6facu); RETCHK(0x4f6fb1u, 0x4f6facu); LOADALL;
  /* 004f6fb1 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 004f6fb4 mov edx, dword ptr [ecx + 0x78] */ { const u32 m_ = (u32)(ecx + 0x78u); edx = (u32)(M32(m_)); }
  /* 004f6fb7 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004f6fb9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f6fba mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f6fbc call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f6fbfu; SAVEALL; call_ind(c, t_); RETCHK(0x4f6fbfu, 0x4f6fbcu); LOADALL; }
  /* 004f6fbf mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f6fc2 mov ecx, dword ptr [ebp + eax*4 - 0x9c] */ { const u32 m_ = (u32)(ebp + eax * 4u + 0xffffff64u); ecx = (u32)(M32(m_)); }
  /* 004f6fc9 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004f6fcb lea eax, [ebp - 0x8c] */ eax = (u32)((u32)(ebp + 0xffffff74u));
  /* 004f6fd1 mov dword ptr [esi + 0x84], ecx */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(ecx); }
  /* 004f6fd7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f6fd8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f6fda call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f6fddu; SAVEALL; call_ind(c, t_); RETCHK(0x4f6fddu, 0x4f6fdau); LOADALL; }
  /* 004f6fdd add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004f6fe0 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 004f6fe3 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 004f6fe6 call 0x508a00 */ esp -= 4; M32(esp) = 0x4f6febu; SAVEALL; F_00508a00(c); ABI_CHECK(0x508a00u, 0x4f6fe6u); RETCHK(0x4f6febu, 0x4f6fe6u); LOADALL;
  /* 004f6feb mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_004f6fee:;
  /* 004f6fee mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f6ff1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f6ff4 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f6ff5 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f6ff7 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 004f6ffa jl 0x4f6f70 */ if (LT_) goto L_004f6f70;
  /* 004f7000 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f7001 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7002 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f7003 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f7005 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f7006 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f7009:;
  /* 004f7009 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f700c mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 004f700e cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7010 je 0x4f7221 */ if (ZF_) goto L_004f7221;
  /* 004f7016 jmp 0x4f7020 */ goto L_004f7020;
L_004f7020:;
  /* 004f7020 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f7023 cmp dword ptr [ecx + 0x40], 0x121eac00 */ { const u32 m_ = (u32)(ecx + 0x40u); u32 a_ = M32(m_), b_ = 0x121eac00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f702a jne 0x4f7031 */ if (!ZF_) goto L_004f7031;
  /* 004f702c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f702e call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f7031u; SAVEALL; call_ind(c, t_); RETCHK(0x4f7031u, 0x4f702eu); LOADALL; }
L_004f7031:;
  /* 004f7031 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 004f7033 cmp esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7036 jne 0x4f7020 */ if (!ZF_) goto L_004f7020;
  /* 004f7038 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f7039 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f703a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f703b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f703d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f703e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f7041:;
  /* 004f7041 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f7044 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f7047 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f7049 lea eax, [ebp - 0x8c] */ eax = (u32)((u32)(ebp + 0xffffff74u));
  /* 004f704f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f7050 call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f7053u; SAVEALL; call_ind(c, t_); RETCHK(0x4f7053u, 0x4f7050u); LOADALL; }
  /* 004f7053 mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 004f7056 mov edi, dword ptr [eax + 0xbcc4] */ { const u32 m_ = (u32)(eax + 0xbcc4u); edi = (u32)(M32(m_)); }
  /* 004f705c mov eax, dword ptr [eax + 0xbcc8] */ { const u32 m_ = (u32)(eax + 0xbcc8u); eax = (u32)(M32(m_)); }
  /* 004f7062 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7064 mov edx, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); edx = (u32)(M32(m_)); }
  /* 004f706a je 0x4f709f */ if (ZF_) goto L_004f709f;
  /* 004f706c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004f7070:;
  /* 004f7070 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 004f7072 cmp dword ptr [ecx + 0x2c], edx */ { const u32 m_ = (u32)(ecx + 0x2cu); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7075 je 0x4f7080 */ if (ZF_) goto L_004f7080;
  /* 004f7077 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f707a cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f707c jne 0x4f7070 */ if (!ZF_) goto L_004f7070;
  /* 004f707e jmp 0x4f709f */ goto L_004f709f;
L_004f7080:;
  /* 004f7080 mov edx, dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); edx = (u32)(M32(m_)); }
  /* 004f7083 mov eax, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); eax = (u32)(M32(m_)); }
  /* 004f7089 mov ecx, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); ecx = (u32)(M32(m_)); }
  /* 004f708f mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 004f7091 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f7092 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f7093 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f7094 call 0x4deb90 */ esp -= 4; M32(esp) = 0x4f7099u; SAVEALL; F_004deb90(c); ABI_CHECK(0x4deb90u, 0x4f7094u); RETCHK(0x4f7099u, 0x4f7094u); LOADALL;
  /* 004f7099 mov edx, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); edx = (u32)(M32(m_)); }
L_004f709f:;
  /* 004f709f mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 004f70a2 cmp edi, dword ptr [eax + 0xbcc8] */ { const u32 m_ = (u32)(eax + 0xbcc8u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f70a8 jne 0x4f7221 */ if (!ZF_) goto L_004f7221;
  /* 004f70ae mov ecx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004f70b1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f70b3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f70b5 jle 0x4f7221 */ if ((ZF_|LT_)) goto L_004f7221;
  /* 004f70bb add ebx, 0x30 */ { u32 a_ = ebx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004f70be mov edi, edi */ { edi = (u32)(edi); }
L_004f70c0:;
  /* 004f70c0 mov esi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); esi = (u32)(M32(m_)); }
  /* 004f70c2 cmp dword ptr [esi + 0x98], edx */ { const u32 m_ = (u32)(esi + 0x98u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f70c8 je 0x4f70db */ if (ZF_) goto L_004f70db;
  /* 004f70ca inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f70cb add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004f70ce cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f70d0 jl 0x4f70c0 */ if (LT_) goto L_004f70c0;
  /* 004f70d2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f70d3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f70d4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f70d5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f70d7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f70d8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f70db:;
  /* 004f70db mov ecx, dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); ecx = (u32)(M32(m_)); }
  /* 004f70de mov edx, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); edx = (u32)(M32(m_)); }
  /* 004f70e4 mov ebx, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); ebx = (u32)(M32(m_)); }
  /* 004f70ea push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f70eb mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f70ee mov esi, dword ptr [ecx + eax*4 + 0x30] */ { const u32 m_ = (u32)(ecx + eax * 4u + 0x30u); esi = (u32)(M32(m_)); }
  /* 004f70f2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f70f3 call 0x4e83b0 */ esp -= 4; M32(esp) = 0x4f70f8u; SAVEALL; F_004e83b0(c); ABI_CHECK(0x4e83b0u, 0x4f70f3u); RETCHK(0x4f70f8u, 0x4f70f3u); LOADALL;
  /* 004f70f8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f70f9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f70fa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f70fb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f70fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f70fe ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f7101:;
  /* 004f7101 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f7103 jne 0x4f7221 */ if (!ZF_) goto L_004f7221;
  /* 004f7109 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f710c cmp eax, 0x122dee40 */ { u32 a_ = eax, b_ = 0x122dee40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7111 je 0x4f7125 */ if (ZF_) goto L_004f7125;
  /* 004f7113 cmp eax, 0x124c72c0 */ { u32 a_ = eax, b_ = 0x124c72c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7118 je 0x4f7125 */ if (ZF_) goto L_004f7125;
  /* 004f711a cmp eax, 0x12c684c0 */ { u32 a_ = eax, b_ = 0x12c684c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f711f jne 0x4f7221 */ if (!ZF_) goto L_004f7221;
L_004f7125:;
  /* 004f7125 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f7128 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 004f712a cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f712c mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 004f712f je 0x4f7221 */ if (ZF_) goto L_004f7221;
L_004f7135:;
  /* 004f7135 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f7138 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f713b cmp dword ptr [ecx + 0x40], esi */ { const u32 m_ = (u32)(ecx + 0x40u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f713e jne 0x4f7150 */ if (!ZF_) goto L_004f7150;
  /* 004f7140 mov esi, dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); esi = (u32)(M32(m_)); }
  /* 004f7143 cmp esi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7146 jne 0x4f7150 */ if (!ZF_) goto L_004f7150;
  /* 004f7148 mov ecx, dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); ecx = (u32)(M32(m_)); }
  /* 004f714b cmp ecx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f714e je 0x4f7162 */ if (ZF_) goto L_004f7162;
L_004f7150:;
  /* 004f7150 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 004f7152 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7154 jne 0x4f7135 */ if (!ZF_) goto L_004f7135;
  /* 004f7156 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f7157 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7158 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 004f715b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f715c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f715e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f715f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f7162:;
  /* 004f7162 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f7165 lea edx, [edi + 0x18] */ edx = (u32)((u32)(edi + 0x18u));
  /* 004f7168 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 004f716a add ecx, 0x2c */ { u32 a_ = ecx, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f716d mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 004f716f mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 004f7172 mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 004f7175 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f7178 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 004f717b mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f717e mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 004f7181 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004f7183 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f7186u; SAVEALL; call_ind(c, t_); RETCHK(0x4f7186u, 0x4f7183u); LOADALL; }
  /* 004f7186 mov esi, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); esi = (u32)(M32(m_)); }
  /* 004f7189 mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f718c call 0x4b9f20 */ esp -= 4; M32(esp) = 0x4f7191u; SAVEALL; F_004b9f20(c); ABI_CHECK(0x4b9f20u, 0x4f718cu); RETCHK(0x4f7191u, 0x4f718cu); LOADALL;
  /* 004f7191 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7193 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f7196 je 0x4f7221 */ if (ZF_) goto L_004f7221;
  /* 004f719c mov ecx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004f719f mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 004f71a2 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f71a5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f71a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f71a9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f71aa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f71ab call 0x4deb90 */ esp -= 4; M32(esp) = 0x4f71b0u; SAVEALL; F_004deb90(c); ABI_CHECK(0x4deb90u, 0x4f71abu); RETCHK(0x4f71b0u, 0x4f71abu); LOADALL;
  /* 004f71b0 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004f71b3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f71b5 jle 0x4f7221 */ if ((ZF_|LT_)) goto L_004f7221;
  /* 004f71b7 mov edi, eax */ { edi = (u32)(eax); }
  /* 004f71b9 imul edi, edi, 0xa0c */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0xa0cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f71bf lea ecx, [ebx + eax*4 + 0x30] */ ecx = (u32)((u32)(ebx + eax * 4u + 0x30u));
  /* 004f71c3 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
L_004f71c6:;
  /* 004f71c6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f71c9 mov edx, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 004f71cc mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f71cf mov edx, dword ptr [edx + 0x98] */ { const u32 m_ = (u32)(edx + 0x98u); edx = (u32)(M32(m_)); }
  /* 004f71d5 mov esi, dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); esi = (u32)(M32(m_)); }
  /* 004f71d8 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f71db sub edi, 0xa0c */ { u32 a_ = edi, b_ = 0xa0cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f71e1 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f71e3 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 004f71e6 jne 0x4f721c */ if (!ZF_) goto L_004f721c;
  /* 004f71e8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f71eb mov edx, dword ptr [eax + 0x314] */ { const u32 m_ = (u32)(eax + 0x314u); edx = (u32)(M32(m_)); }
  /* 004f71f1 mov eax, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); eax = (u32)(M32(m_)); }
  /* 004f71f4 mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f71f7 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 004f71f9 push 0x3e4ccccd */ { u32 v_ = 0x3e4ccccdu; esp -= 4; M32(esp) = v_; }
  /* 004f71fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f71ff mov eax, dword ptr [ecx + 0xbe48] */ { const u32 m_ = (u32)(ecx + 0xbe48u); eax = (u32)(M32(m_)); }
  /* 004f7205 add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f7208 lea esi, [eax + edi + 0x780] */ esi = (u32)((u32)(eax + edi + 0x780u));
  /* 004f720f mov ecx, 0x63f94c */ { ecx = (u32)(0x63f94cu); }
  /* 004f7214 call 0x4f0240 */ esp -= 4; M32(esp) = 0x4f7219u; SAVEALL; F_004f0240(c); ABI_CHECK(0x4f0240u, 0x4f7214u); RETCHK(0x4f7219u, 0x4f7214u); LOADALL;
  /* 004f7219 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
L_004f721c:;
  /* 004f721c dec dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f721f jne 0x4f71c6 */ if (!ZF_) goto L_004f71c6;
L_004f7221:;
  /* 004f7221 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f7222 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7223 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f7224 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f7226 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f7227 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004f7240(CPU *c) {
  NATIVE_HOOK(0x4f7240u) REGS; LOADALL;
L_004f7240:;
  /* 004f7240 mov ecx, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004f7243 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f7245 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7247 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f7248 jle 0x4f7262 */ if ((ZF_|LT_)) goto L_004f7262;
  /* 004f724a add edx, 0x28 */ { u32 a_ = edx, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f724d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_004f7250:;
  /* 004f7250 mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 004f7252 cmp dword ptr [edi + 0xc40], esi */ { const u32 m_ = (u32)(edi + 0xc40u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7258 je 0x4f7265 */ if (ZF_) goto L_004f7265;
  /* 004f725a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f725b add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f725e cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7260 jl 0x4f7250 */ if (LT_) goto L_004f7250;
L_004f7262:;
  /* 004f7262 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004f7265:;
  /* 004f7265 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f7266 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f7270(CPU *c) {
  NATIVE_HOOK(0x4f7270u) REGS; LOADALL;
L_004f7270:;
  /* 004f7270 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f7271 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f7273 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f7274 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f7275 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f7276 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004f7278 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f7279 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 004f727b cmp edi, 0x12c684c0 */ { u32 a_ = edi, b_ = 0x12c684c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7281 jne 0x4f7314 */ if (!ZF_) goto L_004f7314;
  /* 004f7287 push 0x90 */ { u32 v_ = 0x90u; esp -= 4; M32(esp) = v_; }
  /* 004f728c call 0x5fe934 */ esp -= 4; M32(esp) = 0x4f7291u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4f728cu); RETCHK(0x4f7291u, 0x4f728cu); LOADALL;
  /* 004f7291 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f7293 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f7296 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7298 je 0x4f7309 */ if (ZF_) goto L_004f7309;
  /* 004f729a call 0x4f3350 */ esp -= 4; M32(esp) = 0x4f729fu; SAVEALL; F_004f3350(c); ABI_CHECK(0x4f3350u, 0x4f729au); RETCHK(0x4f729fu, 0x4f729au); LOADALL;
  /* 004f729f mov eax, esi */ { eax = (u32)(esi); }
  /* 004f72a1 mov dword ptr [esi], 0x64f664 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f664u); }
  /* 004f72a7 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 004f72aa call 0x4f4230 */ esp -= 4; M32(esp) = 0x4f72afu; SAVEALL; F_004f4230(c); ABI_CHECK(0x4f4230u, 0x4f72aau); RETCHK(0x4f72afu, 0x4f72aau); LOADALL;
  /* 004f72af mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f72b2 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004f72b4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f72b5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f72b7 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f72bau; SAVEALL; call_ind(c, t_); RETCHK(0x4f72bau, 0x4f72b7u); LOADALL; }
  /* 004f72ba mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004f72bd mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004f72bf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f72c0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f72c2 mov dword ptr [esi + 0x84], edx */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(edx); }
  /* 004f72c8 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f72cbu; SAVEALL; call_ind(c, t_); RETCHK(0x4f72cbu, 0x4f72c8u); LOADALL; }
  /* 004f72cb mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004f72ce mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f72d1 add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004f72d4 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 004f72d7 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 004f72d9 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f72dc lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 004f72df push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f72e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f72e1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f72e2 call 0x508af0 */ esp -= 4; M32(esp) = 0x4f72e7u; SAVEALL; F_00508af0(c); ABI_CHECK(0x508af0u, 0x4f72e2u); RETCHK(0x4f72e7u, 0x4f72e2u); LOADALL;
  /* 004f72e7 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 004f72ec mov edx, ebx */ { edx = (u32)(ebx); }
  /* 004f72ee mov edi, eax */ { edi = (u32)(eax); }
  /* 004f72f0 call 0x518d90 */ esp -= 4; M32(esp) = 0x4f72f5u; SAVEALL; F_00518d90(c); ABI_CHECK(0x518d90u, 0x4f72f0u); RETCHK(0x4f72f5u, 0x4f72f0u); LOADALL;
  /* 004f72f5 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f72f8 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 004f72fb mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f72fe mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 004f7300 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f7301 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7302 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f7303 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f7305 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f7306 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f7309:;
  /* 004f7309 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f730a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f730b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f730d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f730e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f7310 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f7311 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004f7314:;
  /* 004f7314 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f7317 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f7318 call 0x4f5bc0 */ esp -= 4; M32(esp) = 0x4f731du; SAVEALL; F_004f5bc0(c); ABI_CHECK(0x4f5bc0u, 0x4f7318u); RETCHK(0x4f731du, 0x4f7318u); LOADALL;
  /* 004f731d mov esi, eax */ { esi = (u32)(eax); }
  /* 004f731f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7321 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 004f7324 je 0x4f7371 */ if (ZF_) goto L_004f7371;
  /* 004f7326 call 0x4f4230 */ esp -= 4; M32(esp) = 0x4f732bu; SAVEALL; F_004f4230(c); ABI_CHECK(0x4f4230u, 0x4f7326u); RETCHK(0x4f732bu, 0x4f7326u); LOADALL;
  /* 004f732b mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f732e mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004f7330 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f7331 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f7333 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f7336u; SAVEALL; call_ind(c, t_); RETCHK(0x4f7336u, 0x4f7333u); LOADALL; }
  /* 004f7336 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004f7338 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f7339 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f733b call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f733eu; SAVEALL; call_ind(c, t_); RETCHK(0x4f733eu, 0x4f733bu); LOADALL; }
  /* 004f733e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f7341 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f7344 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f7347 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f734a mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 004f734c mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f734f lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 004f7352 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f7353 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f7354 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f7355 call 0x508af0 */ esp -= 4; M32(esp) = 0x4f735au; SAVEALL; F_00508af0(c); ABI_CHECK(0x508af0u, 0x4f7355u); RETCHK(0x4f735au, 0x4f7355u); LOADALL;
  /* 004f735a mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f735d mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 004f7362 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004f7364 call 0x518d90 */ esp -= 4; M32(esp) = 0x4f7369u; SAVEALL; F_00518d90(c); ABI_CHECK(0x518d90u, 0x4f7364u); RETCHK(0x4f7369u, 0x4f7364u); LOADALL;
  /* 004f7369 mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 004f736c mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f736f mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
L_004f7371:;
  /* 004f7371 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f7372 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f7374 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7375 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f7376 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f7378 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f7379 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004f7380(CPU *c) {
  NATIVE_HOOK(0x4f7380u) REGS; LOADALL;
L_004f7380:;
  /* 004f7380 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f7381 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f7383 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f7384 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f7386 call 0x4f73b0 */ esp -= 4; M32(esp) = 0x4f738bu; SAVEALL; F_004f73b0(c); ABI_CHECK(0x4f73b0u, 0x4f7386u); RETCHK(0x4f738bu, 0x4f7386u); LOADALL;
  /* 004f738b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f738f je 0x4f739a */ if (ZF_) goto L_004f739a;
  /* 004f7391 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f7392 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f7397u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f7392u); RETCHK(0x4f7397u, 0x4f7392u); LOADALL;
  /* 004f7397 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f739a:;
  /* 004f739a mov eax, esi */ { eax = (u32)(esi); }
  /* 004f739c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f739d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f739e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f73b0(CPU *c) {
  NATIVE_HOOK(0x4f73b0u) REGS; LOADALL;
L_004f73b0:;
  /* 004f73b0 jmp 0x4f33b0 */ SAVEALL; F_004f33b0(c); return;
}

void F_004f73c0(CPU *c) {
  NATIVE_HOOK(0x4f73c0u) REGS; LOADALL;
L_004f73c0:;
  /* 004f73c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f73c1 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f73c3 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f73c8u; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f73c3u); RETCHK(0x4f73c8u, 0x4f73c3u); LOADALL;
  /* 004f73c8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f73ca mov dword ptr [esi + 0x80], eax */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(eax); }
  /* 004f73d0 mov dword ptr [esi + 0x84], eax */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(eax); }
  /* 004f73d6 mov dword ptr [esi + 0x88], eax */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(eax); }
  /* 004f73dc mov dword ptr [esi + 0x94], eax */ { const u32 m_ = (u32)(esi + 0x94u); M32(m_) = (u32)(eax); }
  /* 004f73e2 mov dword ptr [esi + 0x90], eax */ { const u32 m_ = (u32)(esi + 0x90u); M32(m_) = (u32)(eax); }
  /* 004f73e8 lea ecx, [esi + 0xa4] */ ecx = (u32)((u32)(esi + 0xa4u));
  /* 004f73ee mov dword ptr [esi], 0x64f7d4 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f7d4u); }
  /* 004f73f4 mov dword ptr [esi + 0x40], 0x120f69c0 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x120f69c0u); }
  /* 004f73fb mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 004f73fd mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004f7400 mov byte ptr [esi + 0x50], 1 */ { const u32 m_ = (u32)(esi + 0x50u); M8(m_) = (u8)(0x1u); }
  /* 004f7404 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f7406 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7407 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f7410(CPU *c) {
  NATIVE_HOOK(0x4f7410u) REGS; LOADALL;
L_004f7410:;
  /* 004f7410 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f7411 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f7413 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f7414 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f7416 call 0x4f7440 */ esp -= 4; M32(esp) = 0x4f741bu; SAVEALL; F_004f7440(c); ABI_CHECK(0x4f7440u, 0x4f7416u); RETCHK(0x4f741bu, 0x4f7416u); LOADALL;
  /* 004f741b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f741f je 0x4f742a */ if (ZF_) goto L_004f742a;
  /* 004f7421 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f7422 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f7427u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f7422u); RETCHK(0x4f7427u, 0x4f7422u); LOADALL;
  /* 004f7427 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f742a:;
  /* 004f742a mov eax, esi */ { eax = (u32)(esi); }
  /* 004f742c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f742d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f742e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f7440(CPU *c) {
  NATIVE_HOOK(0x4f7440u) REGS; LOADALL;
L_004f7440:;
  /* 004f7440 mov dword ptr [ecx], 0x64f7d4 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64f7d4u); }
  /* 004f7446 jmp 0x4f4220 */ SAVEALL; F_004f4220(c); return;
}

void F_004f7450(CPU *c) {
  NATIVE_HOOK(0x4f7450u) REGS; LOADALL;
L_004f7450:;
  /* 004f7450 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f7451 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f7453 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f7454 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f7456 push 0x120f69c0 */ { u32 v_ = 0x120f69c0u; esp -= 4; M32(esp) = v_; }
  /* 004f745b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f745d call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f7462u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f745du); RETCHK(0x4f7462u, 0x4f745du); LOADALL;
  /* 004f7462 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f7463 call 0x4fb6a0 */ esp -= 4; M32(esp) = 0x4f7468u; SAVEALL; F_004fb6a0(c); ABI_CHECK(0x4fb6a0u, 0x4f7463u); RETCHK(0x4f7468u, 0x4f7463u); LOADALL;
  /* 004f7468 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f746a mov dword ptr [esi + 0x5c], eax */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(eax); }
  /* 004f746d je 0x4f74be */ if (ZF_) goto L_004f74be;
  /* 004f746f call 0x4f42e0 */ esp -= 4; M32(esp) = 0x4f7474u; SAVEALL; F_004f42e0(c); ABI_CHECK(0x4f42e0u, 0x4f746fu); RETCHK(0x4f7474u, 0x4f746fu); LOADALL;
  /* 004f7474 mov eax, dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); eax = (u32)(M32(m_)); }
  /* 004f7477 mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 004f747d mov ecx, dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); ecx = (u32)(M32(m_)); }
  /* 004f7480 mov dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004f7487 mov edx, dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); edx = (u32)(M32(m_)); }
  /* 004f748a mov dword ptr [edx + 8], 0xbe4ccccd */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(0xbe4ccccdu); }
  /* 004f7491 mov eax, dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); eax = (u32)(M32(m_)); }
  /* 004f7494 mov dword ptr [eax + 0xc], 0x3fe66666 */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(0x3fe66666u); }
  /* 004f749b mov ecx, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); ecx = (u32)(M32(m_)); }
  /* 004f749e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f749f mov dword ptr [esi + 0x58], 0x7f7fffff */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 004f74a6 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f74abu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f74a6u); RETCHK(0x4f74abu, 0x4f74a6u); LOADALL;
  /* 004f74ab mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f74ae add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f74b1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f74b2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f74b4 call 0x4f4240 */ esp -= 4; M32(esp) = 0x4f74b9u; SAVEALL; F_004f4240(c); ABI_CHECK(0x4f4240u, 0x4f74b4u); RETCHK(0x4f74b9u, 0x4f74b4u); LOADALL;
  /* 004f74b9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f74ba pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f74bb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f74be:;
  /* 004f74be mov dword ptr [esi + 0x3c], 0xb */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f74c5 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f74c7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f74c8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f74c9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f74d0(CPU *c) {
  NATIVE_HOOK(0x4f74d0u) REGS; LOADALL;
L_004f74d0:;
  /* 004f74d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f74d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f74d3 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f74d6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f74d7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f74d8 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004f74db push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f74dc mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f74de call 0x4f42a0 */ esp -= 4; M32(esp) = 0x4f74e3u; SAVEALL; F_004f42a0(c); ABI_CHECK(0x4f42a0u, 0x4f74deu); RETCHK(0x4f74e3u, 0x4f74deu); LOADALL;
  /* 004f74e3 mov eax, dword ptr [0x7a801c] */ { const u32 m_ = (u32)(0x7a801cu); eax = (u32)(M32(m_)); }
  /* 004f74e8 mov dword ptr [esi + 0x58], eax */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(eax); }
  /* 004f74eb mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f74ee mov dword ptr [esi + 0x4c], ecx */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(ecx); }
  /* 004f74f1 mov edx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); edx = (u32)(M32(m_)); }
  /* 004f74f4 mov dword ptr [esi + 0x88], edx */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(edx); }
  /* 004f74fa mov eax, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f74fd mov dword ptr [esi + 0x90], eax */ { const u32 m_ = (u32)(esi + 0x90u); M32(m_) = (u32)(eax); }
  /* 004f7503 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f7508u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f7503u); RETCHK(0x4f7508u, 0x4f7503u); LOADALL;
  /* 004f7508 mov ecx, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); ecx = (u32)(M32(m_)); }
  /* 004f750b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f750d add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f7510 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f7511 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f7512 mov edx, 0x120f69c0 */ { edx = (u32)(0x120f69c0u); }
  /* 004f7517 call 0x4fbd30 */ esp -= 4; M32(esp) = 0x4f751cu; SAVEALL; F_004fbd30(c); ABI_CHECK(0x4fbd30u, 0x4f7517u); RETCHK(0x4f751cu, 0x4f7517u); LOADALL;
  /* 004f751c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f751e mov dword ptr [esi + 0x94], eax */ { const u32 m_ = (u32)(esi + 0x94u); M32(m_) = (u32)(eax); }
  /* 004f7524 je 0x4f752d */ if (ZF_) goto L_004f752d;
  /* 004f7526 mov dword ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x1u); }
L_004f752d:;
  /* 004f752d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f752e lea edx, [ebp - 0xc] */ edx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 004f7531 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f7532 lea eax, [esi + 0x2c] */ eax = (u32)((u32)(esi + 0x2cu));
  /* 004f7535 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f7536 mov eax, dword ptr [0x7a6cd4] */ { const u32 m_ = (u32)(0x7a6cd4u); eax = (u32)(M32(m_)); }
  /* 004f753b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f753c mov eax, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f753f push 0x7a6cac */ { u32 v_ = 0x7a6cacu; esp -= 4; M32(esp) = v_; }
  /* 004f7544 call 0x545680 */ esp -= 4; M32(esp) = 0x4f7549u; SAVEALL; F_00545680(c); ABI_CHECK(0x545680u, 0x4f7544u); RETCHK(0x4f7549u, 0x4f7544u); LOADALL;
  /* 004f7549 mov ebx, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); ebx = (u32)(M32(m_)); }
  /* 004f754c mov dword ptr [esi + 0x80], eax */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(eax); }
  /* 004f7552 sar eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f7555 add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004f7558 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 004f755b mov dword ptr [esi + 0x84], eax */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(eax); }
  /* 004f7561 mov word ptr [esi + 0x82], 0 */ { const u32 m_ = (u32)(esi + 0x82u); M16(m_) = (u16)(0x0u); }
  /* 004f756a call 0x546b80 */ esp -= 4; M32(esp) = 0x4f756fu; SAVEALL; F_00546b80(c); ABI_CHECK(0x546b80u, 0x4f756au); RETCHK(0x4f756fu, 0x4f756au); LOADALL;
  /* 004f756f xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004f7571 mov dl, byte ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f7574 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 004f7577 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f7578 mov ecx, dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); ecx = (u32)(M32(m_)); }
  /* 004f757e lea eax, [esi + 0x2c] */ eax = (u32)((u32)(esi + 0x2cu));
  /* 004f7581 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f7582 push 0x41f00000 */ { u32 v_ = 0x41f00000u; esp -= 4; M32(esp) = v_; }
  /* 004f7587 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f7588 mov edx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); edx = (u32)(M32(m_)); }
  /* 004f758e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f758f mov ecx, dword ptr [edx*4 + 0x7a6cac] */ { const u32 m_ = (u32)(edx * 4u + 0x7a6cacu); ecx = (u32)(M32(m_)); }
  /* 004f7596 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f7597 call 0x545af0 */ esp -= 4; M32(esp) = 0x4f759cu; SAVEALL; F_00545af0(c); ABI_CHECK(0x545af0u, 0x4f7597u); RETCHK(0x4f759cu, 0x4f7597u); LOADALL;
  /* 004f759c mov edx, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f759f mov dword ptr [esi + 0x80], eax */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(eax); }
  /* 004f75a5 mov dword ptr [esi + 0x3c], 3 */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0x3u); }
  /* 004f75ac mov byte ptr [esi + 0x8c], 0 */ { const u32 m_ = (u32)(esi + 0x8cu); M8(m_) = (u8)(0x0u); }
  /* 004f75b3 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004f75b5 mov ebx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (u32)(M32(m_)); }
  /* 004f75b7 lea eax, [esi + 0x98] */ eax = (u32)((u32)(esi + 0x98u));
  /* 004f75bd mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
  /* 004f75bf mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 004f75c2 mov dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebx); }
  /* 004f75c5 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f75c8 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004f75cb mov ecx, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 004f75ce mov ebx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (u32)(M32(m_)); }
  /* 004f75d0 lea eax, [esi + 0x20] */ eax = (u32)((u32)(esi + 0x20u));
  /* 004f75d3 mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
  /* 004f75d5 mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 004f75d8 mov dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebx); }
  /* 004f75db mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f75de mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004f75e1 mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f75e6 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f75e9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f75eb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f75ec je 0x4f7606 */ if (ZF_) goto L_004f7606;
  /* 004f75ee lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 004f75f1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f75f2 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f75f7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f75f9 push 0x64f804 */ { u32 v_ = 0x64f804u; esp -= 4; M32(esp) = v_; }
  /* 004f75fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f75ff call 0x531340 */ esp -= 4; M32(esp) = 0x4f7604u; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f75ffu); RETCHK(0x4f7604u, 0x4f75ffu); LOADALL;
  /* 004f7604 jmp 0x4f7608 */ goto L_004f7608;
L_004f7606:;
  /* 004f7606 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004f7608:;
  /* 004f7608 mov dword ptr [esi + 0x7c], eax */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 004f760b lea ecx, [esi + 0xac] */ ecx = (u32)((u32)(esi + 0xacu));
  /* 004f7611 lea eax, [edi + 0x64] */ eax = (u32)((u32)(edi + 0x64u));
  /* 004f7614 mov edx, 2 */ { edx = (u32)(0x2u); }
  /* 004f7619 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004f7620:;
  /* 004f7620 mov esi, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 004f7623 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f7626 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f7629 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f762a mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 004f762c jne 0x4f7620 */ if (!ZF_) goto L_004f7620;
  /* 004f762e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f762f mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f7631 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7632 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f7634 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f7635 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f7640(CPU *c) {
  NATIVE_HOOK(0x4f7640u) REGS; LOADALL;
L_004f7640:;
  /* 004f7640 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f7641 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f7643 sub esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f7646 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f7647 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 004f7649 mov eax, dword ptr [ebx + 0x60] */ { const u32 m_ = (u32)(ebx + 0x60u); eax = (u32)(M32(m_)); }
  /* 004f764c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f764d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f764e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f764f mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 004f7652 call 0x577800 */ esp -= 4; M32(esp) = 0x4f7657u; SAVEALL; F_00577800(c); ABI_CHECK(0x577800u, 0x4f7652u); RETCHK(0x4f7657u, 0x4f7652u); LOADALL;
  /* 004f7657 fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f765a fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f765d mov esi, eax */ { esi = (u32)(eax); }
  /* 004f765f mov eax, dword ptr [ebx + 0x3c] */ { const u32 m_ = (u32)(ebx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f7662 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f7665 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7667 fstp dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f766a fld dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); FPUSH((double)MF32(m_)); }
  /* 004f766d fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f7670 fstp dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f7673 je 0x4f7b18 */ if (ZF_) goto L_004f7b18;
  /* 004f7679 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f767c jne 0x4f7b3c */ if (!ZF_) goto L_004f7b3c;
  /* 004f7682 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 004f7688 mov edx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f768b fdiv dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004f768e mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004f7690 fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 004f7692 fsub dword ptr [ebx + 0x98] */ { const u32 m_ = (u32)(ebx + 0x98u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f7698 fstp dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f769b fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f769e fsub dword ptr [ebx + 0x9c] */ { const u32 m_ = (u32)(ebx + 0x9cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f76a4 fstp dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f76a7 fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f76aa fsub dword ptr [ebx + 0xa0] */ { const u32 m_ = (u32)(ebx + 0xa0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f76b0 fstp dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f76b3 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004f76b5 fmul dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f76b8 fstp dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f76bb fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004f76bd fmul dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f76c0 fstp dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f76c3 fmul dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f76c6 fstp dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f76c9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004f76cb fld dword ptr [0x687c30] */ { const u32 m_ = (u32)(0x687c30u); FPUSH((double)MF32(m_)); }
  /* 004f76d1 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f76d4 mov dword ptr [ebx + 0x98], eax */ { const u32 m_ = (u32)(ebx + 0x98u); M32(m_) = (u32)(eax); }
  /* 004f76da mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f76dd mov dword ptr [ebx + 0x9c], eax */ { const u32 m_ = (u32)(ebx + 0x9cu); M32(m_) = (u32)(eax); }
  /* 004f76e3 mov eax, dword ptr [ebx + 0x88] */ { const u32 m_ = (u32)(ebx + 0x88u); eax = (u32)(M32(m_)); }
  /* 004f76e9 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f76ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f76ee mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f76f1 mov dword ptr [ebx + 0xa0], ecx */ { const u32 m_ = (u32)(ebx + 0xa0u); M32(m_) = (u32)(ecx); }
  /* 004f76f7 je 0x4f78ed */ if (ZF_) goto L_004f78ed;
  /* 004f76fd fld dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); FPUSH((double)MF32(m_)); }
  /* 004f7700 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f7703 fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f7709 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004f770c mov dword ptr [ebp - 0x3c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(ecx); }
  /* 004f770f lea ecx, [eax + 0x30] */ ecx = (u32)((u32)(eax + 0x30u));
  /* 004f7712 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 004f7714 mov dword ptr [ebp - 0x48], edi */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(edi); }
  /* 004f7717 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 004f771a mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f771d fadd dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f7720 mov dword ptr [ebp - 0x44], edi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(edi); }
  /* 004f7723 mov dword ptr [ebp - 0x40], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ecx); }
  /* 004f7726 fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f7729 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 004f772c fld dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004f772f fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f7735 fadd dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f7738 fstp dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f773b fld dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); FPUSH((double)MF32(m_)); }
  /* 004f773e mov eax, dword ptr [0x7a6ca8] */ { const u32 m_ = (u32)(0x7a6ca8u); eax = (u32)(M32(m_)); }
  /* 004f7743 fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f7749 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f774a fadd dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f774d fstp dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f7750 fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 004f7753 fsub dword ptr [edx] */ { const u32 m_ = (u32)(edx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f7755 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f7758 fld dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)MF32(m_)); }
  /* 004f775b fsub dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f775e fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f7761 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 004f7764 fsub dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f7767 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f776a call 0x404b30 */ esp -= 4; M32(esp) = 0x4f776fu; SAVEALL; F_00404b30(c); ABI_CHECK(0x404b30u, 0x4f776au); RETCHK(0x4f776fu, 0x4f776au); LOADALL;
  /* 004f776f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f7772 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7774 jne 0x4f7858 */ if (!ZF_) goto L_004f7858;
  /* 004f777a fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004f777d fmul dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f7780 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 004f7783 fmul dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f7786 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004f7788 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f778b fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f778e faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004f7790 fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f7796 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f7798 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f779b jne 0x4f7810 */ if (!ZF_) goto L_004f7810;
  /* 004f779d lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 004f77a0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f77a1 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004f77a3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f77a4 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f77a9u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f77a4u); RETCHK(0x4f77a9u, 0x4f77a4u); LOADALL;
  /* 004f77a9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f77ab fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 004f77ae add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f77b1 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f77b4 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 004f77b7 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f77b9 lea edx, [ebp - 0x48] */ edx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004f77bc fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f77bf fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004f77c2 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f77c5 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f77c8 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f77cb fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f77ce fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f77d1 call 0x547fd0 */ esp -= 4; M32(esp) = 0x4f77d6u; SAVEALL; F_00547fd0(c); ABI_CHECK(0x547fd0u, 0x4f77d1u); RETCHK(0x4f77d6u, 0x4f77d1u); LOADALL;
  /* 004f77d6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f77d8 jne 0x4f7810 */ if (!ZF_) goto L_004f7810;
  /* 004f77da mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f77dd fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 004f77e0 fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f77e2 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f77e4 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f77e7 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004f77ea fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f77ed fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f77f0 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f77f3 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f77f6 fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f77f9 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f77fc mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 004f77ff call 0x4afa60 */ esp -= 4; M32(esp) = 0x4f7804u; SAVEALL; F_004afa60(c); ABI_CHECK(0x4afa60u, 0x4f77ffu); RETCHK(0x4f7804u, 0x4f77ffu); LOADALL;
  /* 004f7804 mov byte ptr [ebx + 0x8c], 1 */ { const u32 m_ = (u32)(ebx + 0x8cu); M8(m_) = (u8)(0x1u); }
  /* 004f780b jmp 0x4f7ab4 */ goto L_004f7ab4;
L_004f7810:;
  /* 004f7810 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004f7813 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f7815 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7817 jle 0x4f7846 */ if ((ZF_|LT_)) goto L_004f7846;
  /* 004f7819 mov eax, dword ptr [ebx + 0x4c] */ { const u32 m_ = (u32)(ebx + 0x4cu); eax = (u32)(M32(m_)); }
  /* 004f781c mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 004f781f nop */ ;
L_004f7820:;
  /* 004f7820 mov edi, dword ptr [edx + ecx*4 - 4] */ { const u32 m_ = (u32)(edx + ecx * 4u + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 004f7824 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f7825 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7827 je 0x4f783f */ if (ZF_) goto L_004f783f;
  /* 004f7829 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f782b jg 0x4f7820 */ if (!(ZF_|LT_)) goto L_004f7820;
  /* 004f782d mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 004f782f mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f7831 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f7834u; SAVEALL; call_ind(c, t_); RETCHK(0x4f7834u, 0x4f7831u); LOADALL; }
  /* 004f7834 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f7835 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f7837 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7838 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f7839 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f783b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f783c ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f783f:;
  /* 004f783f mov esi, 1 */ { esi = (u32)(0x1u); }
  /* 004f7844 shl esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
L_004f7846:;
  /* 004f7846 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 004f7848 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f784a call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f784du; SAVEALL; call_ind(c, t_); RETCHK(0x4f784du, 0x4f784au); LOADALL; }
  /* 004f784d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f784e mov eax, esi */ { eax = (u32)(esi); }
  /* 004f7850 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7851 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f7852 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f7854 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f7855 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f7858:;
  /* 004f7858 mov ecx, dword ptr [ebx + 0x90] */ { const u32 m_ = (u32)(ebx + 0x90u); ecx = (u32)(M32(m_)); }
  /* 004f785e mov eax, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); eax = (u32)(M32(m_)); }
  /* 004f7864 cmp eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7866 je 0x4f78ed */ if (ZF_) goto L_004f78ed;
  /* 004f786c mov ecx, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); ecx = (u32)(M32(m_)); }
  /* 004f7872 lea edx, [ebp - 0x44] */ edx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 004f7875 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f7876 mov edx, dword ptr [eax*4 + 0x7a6cac] */ { const u32 m_ = (u32)(eax * 4u + 0x7a6cacu); edx = (u32)(M32(m_)); }
  /* 004f787d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f787e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f787f call 0x5e58d0 */ esp -= 4; M32(esp) = 0x4f7884u; SAVEALL; F_005e58d0(c); ABI_CHECK(0x5e58d0u, 0x4f787fu); RETCHK(0x4f7884u, 0x4f787fu); LOADALL;
  /* 004f7884 mov ecx, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); ecx = (u32)(M32(m_)); }
  /* 004f788a mov edx, dword ptr [ebx + 0x90] */ { const u32 m_ = (u32)(ebx + 0x90u); edx = (u32)(M32(m_)); }
  /* 004f7890 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f7893 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f7894 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 004f7896 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f7897 mov ecx, dword ptr [eax*4 + 0x7a6cac] */ { const u32 m_ = (u32)(eax * 4u + 0x7a6cacu); ecx = (u32)(M32(m_)); }
  /* 004f789e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f789f call 0x5e58d0 */ esp -= 4; M32(esp) = 0x4f78a4u; SAVEALL; F_005e58d0(c); ABI_CHECK(0x5e58d0u, 0x4f789fu); RETCHK(0x4f78a4u, 0x4f789fu); LOADALL;
  /* 004f78a4 fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 004f78a7 fsub dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f78aa mov edx, dword ptr [0x7a6ca8] */ { const u32 m_ = (u32)(0x7a6ca8u); edx = (u32)(M32(m_)); }
  /* 004f78b0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f78b1 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f78b4 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f78b7 fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 004f78ba lea edx, [ebp - 0x44] */ edx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 004f78bd fsub dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f78c0 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f78c3 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 004f78c6 fsub dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f78c9 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f78cc call 0x404b30 */ esp -= 4; M32(esp) = 0x4f78d1u; SAVEALL; F_00404b30(c); ABI_CHECK(0x404b30u, 0x4f78ccu); RETCHK(0x4f78d1u, 0x4f78ccu); LOADALL;
  /* 004f78d1 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f78d4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f78d6 jne 0x4f78ed */ if (!ZF_) goto L_004f78ed;
  /* 004f78d8 mov eax, dword ptr [ebx + 0x90] */ { const u32 m_ = (u32)(ebx + 0x90u); eax = (u32)(M32(m_)); }
  /* 004f78de mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004f78e0 mov dword ptr [ebx + 0x84], ecx */ { const u32 m_ = (u32)(ebx + 0x84u); M32(m_) = (u32)(ecx); }
  /* 004f78e6 mov byte ptr [ebx + 0x8c], 1 */ { const u32 m_ = (u32)(ebx + 0x8cu); M8(m_) = (u8)(0x1u); }
L_004f78ed:;
  /* 004f78ed mov al, byte ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f78f3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f78f5 je 0x4f7924 */ if (ZF_) goto L_004f7924;
  /* 004f78f7 mov eax, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); eax = (u32)(M32(m_)); }
  /* 004f78fd mov ecx, dword ptr [eax*4 + 0x7a6cac] */ { const u32 m_ = (u32)(eax * 4u + 0x7a6cacu); ecx = (u32)(M32(m_)); }
  /* 004f7904 mov esi, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); esi = (u32)(M32(m_)); }
  /* 004f7907 lea edx, [ebx + 0x2c] */ edx = (u32)((u32)(ebx + 0x2cu));
  /* 004f790a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f790b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f790c lea edi, [ebp - 0x20] */ edi = (u32)((u32)(ebp + 0xffffffe0u));
  /* 004f790f call 0x545280 */ esp -= 4; M32(esp) = 0x4f7914u; SAVEALL; F_00545280(c); ABI_CHECK(0x545280u, 0x4f790fu); RETCHK(0x4f7914u, 0x4f790fu); LOADALL;
  /* 004f7914 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f7917 mov dword ptr [ebx + 0x80], eax */ { const u32 m_ = (u32)(ebx + 0x80u); M32(m_) = (u32)(eax); }
  /* 004f791d mov byte ptr [ebx + 0x8c], 0 */ { const u32 m_ = (u32)(ebx + 0x8cu); M8(m_) = (u8)(0x0u); }
L_004f7924:;
  /* 004f7924 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f7927 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f7929 mov cl, byte ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f792c lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 004f792f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f7930 mov edx, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); edx = (u32)(M32(m_)); }
  /* 004f7936 lea edi, [ebx + 0x2c] */ edi = (u32)((u32)(ebx + 0x2cu));
  /* 004f7939 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f793a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f793b mov eax, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); eax = (u32)(M32(m_)); }
  /* 004f7941 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f7942 mov ecx, dword ptr [eax*4 + 0x7a6cac] */ { const u32 m_ = (u32)(eax * 4u + 0x7a6cacu); ecx = (u32)(M32(m_)); }
  /* 004f7949 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f794a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f794b mov eax, edi */ { eax = (u32)(edi); }
  /* 004f794d call 0x545af0 */ esp -= 4; M32(esp) = 0x4f7952u; SAVEALL; F_00545af0(c); ABI_CHECK(0x545af0u, 0x4f794du); RETCHK(0x4f7952u, 0x4f794du); LOADALL;
  /* 004f7952 mov edx, dword ptr [ebx + 0x90] */ { const u32 m_ = (u32)(ebx + 0x90u); edx = (u32)(M32(m_)); }
  /* 004f7958 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f795b test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f795d mov dword ptr [ebx + 0x80], eax */ { const u32 m_ = (u32)(ebx + 0x80u); M32(m_) = (u32)(eax); }
  /* 004f7963 je 0x4f798a */ if (ZF_) goto L_004f798a;
  /* 004f7965 mov ecx, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); ecx = (u32)(M32(m_)); }
  /* 004f796b cmp ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f796d jne 0x4f798a */ if (!ZF_) goto L_004f798a;
  /* 004f796f mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 004f7972 mov ecx, dword ptr [ecx*4 + 0x7a6cc0] */ { const u32 m_ = (u32)(ecx * 4u + 0x7a6cc0u); ecx = (u32)(M32(m_)); }
  /* 004f7979 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f797b add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f797d cdq */ edx = (u32)((s32)eax >> 31);
  /* 004f797e idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x4f797eu); eax = q_; edx = r_; }
  /* 004f7980 sar ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 004f7982 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7984 setg dl */ { edx = (edx & 0xffffff00u) | ((u32)((!(ZF_|LT_)) ? 1u : 0u) & 0xffu); }
  /* 004f7987 mov byte ptr [ebx + 4], dl */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)((edx & 0xffu)); }
L_004f798a:;
  /* 004f798a mov edx, dword ptr [0x7a6ca8] */ { const u32 m_ = (u32)(0x7a6ca8u); edx = (u32)(M32(m_)); }
  /* 004f7990 push 0x40c00000 */ { u32 v_ = 0x40c00000u; esp -= 4; M32(esp) = v_; }
  /* 004f7995 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f7997 mov eax, 0x63f95c */ { eax = (u32)(0x63f95cu); }
  /* 004f799c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f799e call 0x404cf0 */ esp -= 4; M32(esp) = 0x4f79a3u; SAVEALL; F_00404cf0(c); ABI_CHECK(0x404cf0u, 0x4f799eu); RETCHK(0x4f79a3u, 0x4f799eu); LOADALL;
  /* 004f79a3 fld dword ptr [0x7a8020] */ { const u32 m_ = (u32)(0x7a8020u); FPUSH((double)MF32(m_)); }
  /* 004f79a9 fmul dword ptr [0x656f5c] */ { const u32 m_ = (u32)(0x656f5cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f79af add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f79b2 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004f79b4 fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 004f79b6 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f79b8 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f79bb jne 0x4f79c4 */ if (!ZF_) goto L_004f79c4;
  /* 004f79bd fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f79bf fld dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); FPUSH((double)MF32(m_)); }
  /* 004f79c2 jmp 0x4f79cd */ goto L_004f79cd;
L_004f79c4:;
  /* 004f79c4 fsubr dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004f79c7 fadd dword ptr [0x7a8020] */ { const u32 m_ = (u32)(0x7a8020u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_004f79cd:;
  /* 004f79cd mov eax, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); eax = (u32)(M32(m_)); }
  /* 004f79d0 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 004f79d2 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 004f79d5 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f79d8 fsub dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f79da mov edx, dword ptr [0x7a6ca8] */ { const u32 m_ = (u32)(0x7a6ca8u); edx = (u32)(M32(m_)); }
  /* 004f79e0 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004f79e2 push 0x40c00000 */ { u32 v_ = 0x40c00000u; esp -= 4; M32(esp) = v_; }
  /* 004f79e7 fsub dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f79ea lea esi, [ebp - 0x38] */ esi = (u32)((u32)(ebp + 0xffffffc8u));
  /* 004f79ed fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f79f0 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 004f79f3 fsub dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f79f6 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f79f9 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f79fc fmul dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f7a02 fst dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); }
  /* 004f7a05 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004f7a07 fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f7a09 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f7a0b mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f7a0e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f7a10 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f7a13 fmul dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f7a16 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f7a19 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f7a1c mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f7a1f fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f7a22 fmul dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f7a25 fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f7a28 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f7a2b mov ecx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004f7a2e mov eax, 0x63f95c */ { eax = (u32)(0x63f95cu); }
  /* 004f7a33 call 0x404cf0 */ esp -= 4; M32(esp) = 0x4f7a38u; SAVEALL; F_00404cf0(c); ABI_CHECK(0x404cf0u, 0x4f7a33u); RETCHK(0x4f7a38u, 0x4f7a33u); LOADALL;
  /* 004f7a38 fcom dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f7a3e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f7a41 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f7a43 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f7a46 jp 0x4f7a59 */ if (PF_) goto L_004f7a59;
  /* 004f7a48 fld dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); FPUSH((double)MF32(m_)); }
  /* 004f7a4e mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f7a51 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 004f7a53 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f7a56 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
L_004f7a59:;
  /* 004f7a59 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f7a5b mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 004f7a5e fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 004f7a61 lea ebx, [esi + 0x10] */ ebx = (u32)((u32)(esi + 0x10u));
  /* 004f7a64 fmul dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f7a67 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 004f7a6a fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 004f7a6d fmul dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f7a70 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004f7a72 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 004f7a75 fmul dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f7a78 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004f7a7a fchs */ ST(0) = -ST(0);
  /* 004f7a7c fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 004f7a7f fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004f7a81 fadd dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f7a84 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f7a87 fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 004f7a8a fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004f7a8c fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f7a8f fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f7a92 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 004f7a95 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004f7a97 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f7a9a fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f7a9d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f7a9f call 0x546b80 */ esp -= 4; M32(esp) = 0x4f7aa4u; SAVEALL; F_00546b80(c); ABI_CHECK(0x546b80u, 0x4f7a9fu); RETCHK(0x4f7aa4u, 0x4f7a9fu); LOADALL;
  /* 004f7aa4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7aa6 je 0x4f7ab1 */ if (ZF_) goto L_004f7ab1;
  /* 004f7aa8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f7aa9 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f7aaeu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f7aa9u); RETCHK(0x4f7aaeu, 0x4f7aa9u); LOADALL;
  /* 004f7aae add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f7ab1:;
  /* 004f7ab1 mov ebx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ebx = (u32)(M32(m_)); }
L_004f7ab4:;
  /* 004f7ab4 fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f7ab7 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f7abd fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f7abf test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f7ac2 jp 0x4f7ade */ if (PF_) goto L_004f7ade;
  /* 004f7ac4 mov eax, dword ptr [ebx + 0x88] */ { const u32 m_ = (u32)(ebx + 0x88u); eax = (u32)(M32(m_)); }
  /* 004f7aca test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7acc je 0x4f7ad7 */ if (ZF_) goto L_004f7ad7;
  /* 004f7ace mov dword ptr [ebx + 0x58], 0x7f7fffff */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 004f7ad5 jmp 0x4f7ade */ goto L_004f7ade;
L_004f7ad7:;
  /* 004f7ad7 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 004f7ad9 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f7adb call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f7adeu; SAVEALL; call_ind(c, t_); RETCHK(0x4f7adeu, 0x4f7adbu); LOADALL; }
L_004f7ade:;
  /* 004f7ade mov eax, dword ptr [ebx + 0x94] */ { const u32 m_ = (u32)(ebx + 0x94u); eax = (u32)(M32(m_)); }
  /* 004f7ae4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7ae6 je 0x4f7b3c */ if (ZF_) goto L_004f7b3c;
  /* 004f7ae8 mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004f7aeb mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 004f7aee add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f7af1 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f7af4 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f7af9 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f7afb mov eax, dword ptr [ebx + 0x94] */ { const u32 m_ = (u32)(ebx + 0x94u); eax = (u32)(M32(m_)); }
  /* 004f7b01 mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004f7b04 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f7b05 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f7b0au; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f7b05u); RETCHK(0x4f7b0au, 0x4f7b05u); LOADALL;
  /* 004f7b0a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f7b0d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f7b0e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7b0f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f7b11 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f7b12 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f7b14 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f7b15 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f7b18:;
  /* 004f7b18 mov edx, dword ptr [ebx + 0x78] */ { const u32 m_ = (u32)(ebx + 0x78u); edx = (u32)(M32(m_)); }
  /* 004f7b1b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f7b1c call 0x5abd50 */ esp -= 4; M32(esp) = 0x4f7b21u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4f7b1cu); RETCHK(0x4f7b21u, 0x4f7b1cu); LOADALL;
  /* 004f7b21 mov edi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edi = (u32)(M32(m_)); }
  /* 004f7b24 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f7b26 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f7b29 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f7b2e rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f7b30 mov eax, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); eax = (u32)(M32(m_)); }
  /* 004f7b33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f7b34 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f7b39u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f7b34u); RETCHK(0x4f7b39u, 0x4f7b34u); LOADALL;
  /* 004f7b39 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f7b3c:;
  /* 004f7b3c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f7b3d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7b3e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f7b40 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f7b41 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f7b43 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f7b44 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_004f7b50(CPU *c) {
  NATIVE_HOOK(0x4f7b50u) REGS; LOADALL;
L_004f7b50:;
  /* 004f7b50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f7b51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f7b53 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f7b56 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f7b57 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f7b58 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004f7b5a mov eax, dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f7b5d mov esi, 0xb */ { esi = (u32)(0xbu); }
  /* 004f7b62 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7b64 je 0x4f7ccf */ if (ZF_) goto L_004f7ccf;
  /* 004f7b6a mov eax, dword ptr [edi + 0x88] */ { const u32 m_ = (u32)(edi + 0x88u); eax = (u32)(M32(m_)); }
  /* 004f7b70 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7b72 je 0x4f7ba5 */ if (ZF_) goto L_004f7ba5;
  /* 004f7b74 mov ecx, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); ecx = (u32)(M32(m_)); }
  /* 004f7b77 add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f7b7a mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004f7b7c add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f7b7f mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004f7b81 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f7b84 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 004f7b87 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f7b8a mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f7b8d mov ecx, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); ecx = (u32)(M32(m_)); }
  /* 004f7b90 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f7b93 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f7b94 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4f7b99u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4f7b94u); RETCHK(0x4f7b99u, 0x4f7b94u); LOADALL;
  /* 004f7b99 mov edx, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); edx = (u32)(M32(m_)); }
  /* 004f7b9c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f7b9d call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f7ba2u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f7b9du); RETCHK(0x4f7ba2u, 0x4f7b9du); LOADALL;
  /* 004f7ba2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f7ba5:;
  /* 004f7ba5 mov eax, dword ptr [edi + 0x94] */ { const u32 m_ = (u32)(edi + 0x94u); eax = (u32)(M32(m_)); }
  /* 004f7bab test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7bad mov dword ptr [edi + 0x3c], esi */ { const u32 m_ = (u32)(edi + 0x3cu); M32(m_) = (u32)(esi); }
  /* 004f7bb0 je 0x4f7bdb */ if (ZF_) goto L_004f7bdb;
  /* 004f7bb2 mov dword ptr [eax + 0x34], 0 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x0u); }
  /* 004f7bb9 mov eax, dword ptr [edi + 0x94] */ { const u32 m_ = (u32)(edi + 0x94u); eax = (u32)(M32(m_)); }
  /* 004f7bbf mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004f7bc6 mov eax, dword ptr [edi + 0x94] */ { const u32 m_ = (u32)(edi + 0x94u); eax = (u32)(M32(m_)); }
  /* 004f7bcc call 0x54ada0 */ esp -= 4; M32(esp) = 0x4f7bd1u; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4f7bccu); RETCHK(0x4f7bd1u, 0x4f7bccu); LOADALL;
  /* 004f7bd1 mov dword ptr [edi + 0x94], 0 */ { const u32 m_ = (u32)(edi + 0x94u); M32(m_) = (u32)(0x0u); }
L_004f7bdb:;
  /* 004f7bdb mov esi, dword ptr [edi + 0x7c] */ { const u32 m_ = (u32)(edi + 0x7cu); esi = (u32)(M32(m_)); }
  /* 004f7bde test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7be0 je 0x4f7bf0 */ if (ZF_) goto L_004f7bf0;
  /* 004f7be2 mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f7be7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7be9 je 0x4f7bf0 */ if (ZF_) goto L_004f7bf0;
  /* 004f7beb call 0x531380 */ esp -= 4; M32(esp) = 0x4f7bf0u; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4f7bebu); RETCHK(0x4f7bf0u, 0x4f7bebu); LOADALL;
L_004f7bf0:;
  /* 004f7bf0 mov dword ptr [edi + 0x7c], 0 */ { const u32 m_ = (u32)(edi + 0x7cu); M32(m_) = (u32)(0x0u); }
  /* 004f7bf7 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f7bfcu; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f7bf7u); RETCHK(0x4f7bfcu, 0x4f7bf7u); LOADALL;
  /* 004f7bfc mov ecx, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004f7bff push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f7c00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f7c01 mov edx, 0x120f69c1 */ { edx = (u32)(0x120f69c1u); }
  /* 004f7c06 call 0x4fbc90 */ esp -= 4; M32(esp) = 0x4f7c0bu; SAVEALL; F_004fbc90(c); ABI_CHECK(0x4fbc90u, 0x4f7c06u); RETCHK(0x4f7c0bu, 0x4f7c06u); LOADALL;
  /* 004f7c0b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7c0d je 0x4f7ccf */ if (ZF_) goto L_004f7ccf;
  /* 004f7c13 mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f7c18 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7c1a je 0x4f7c33 */ if (ZF_) goto L_004f7c33;
  /* 004f7c1c mov edx, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f7c1f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f7c21 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f7c26 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f7c28 push 0x64d0fc */ { u32 v_ = 0x64d0fcu; esp -= 4; M32(esp) = v_; }
  /* 004f7c2d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f7c2e call 0x531340 */ esp -= 4; M32(esp) = 0x4f7c33u; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f7c2eu); RETCHK(0x4f7c33u, 0x4f7c2eu); LOADALL;
L_004f7c33:;
  /* 004f7c33 lea esi, [edi + 0xac] */ esi = (u32)((u32)(edi + 0xacu));
  /* 004f7c39 mov dword ptr [ebp - 8], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x2u); }
L_004f7c40:;
  /* 004f7c40 mov eax, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f7c43 sub esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f7c46 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7c48 je 0x4f7cc6 */ if (ZF_) goto L_004f7cc6;
  /* 004f7c4a mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f7c4d fld dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); FPUSH((double)MF32(m_)); }
  /* 004f7c50 mov ecx, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004f7c53 fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f7c55 add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f7c58 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 004f7c5b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f7c5c fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f7c5f fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f7c62 fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f7c65 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f7c68 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f7c6b fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f7c6e fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f7c71 call 0x5aa970 */ esp -= 4; M32(esp) = 0x4f7c76u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4f7c71u); RETCHK(0x4f7c76u, 0x4f7c71u); LOADALL;
  /* 004f7c76 fcom dword ptr [0x656ed8] */ { const u32 m_ = (u32)(0x656ed8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004f7c7c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f7c7f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f7c81 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f7c84 jp 0x4f7cc4 */ if (PF_) goto L_004f7cc4;
  /* 004f7c86 fmul dword ptr [0x657110] */ { const u32 m_ = (u32)(0x657110u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f7c8c call 0x61b154 */ esp -= 4; M32(esp) = 0x4f7c91u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x4f7c8cu); RETCHK(0x4f7c91u, 0x4f7c8cu); LOADALL;
  /* 004f7c91 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f7c94 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 004f7c97 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f7c99 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f7c9b fmul dword ptr [0x656ef4] */ { const u32 m_ = (u32)(0x656ef4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f7ca1 fsubr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004f7ca7 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f7caa mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004f7cad fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f7cb0 fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f7cb6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f7cb7 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004f7cb9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f7cba fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f7cbd call 0x4eed50 */ esp -= 4; M32(esp) = 0x4f7cc2u; SAVEALL; F_004eed50(c); ABI_CHECK(0x4eed50u, 0x4f7cbdu); RETCHK(0x4f7cc2u, 0x4f7cbdu); LOADALL;
  /* 004f7cc2 jmp 0x4f7cc6 */ goto L_004f7cc6;
L_004f7cc4:;
  /* 004f7cc4 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004f7cc6:;
  /* 004f7cc6 dec dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f7cc9 jne 0x4f7c40 */ if (!ZF_) goto L_004f7c40;
L_004f7ccf:;
  /* 004f7ccf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f7cd0 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f7cd2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7cd3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f7cd5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f7cd6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f7ce0(CPU *c) {
  NATIVE_HOOK(0x4f7ce0u) REGS; LOADALL;
L_004f7ce0:;
  /* 004f7ce0 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004f7ce2 mov eax, dword ptr [edx + 0x94] */ { const u32 m_ = (u32)(edx + 0x94u); eax = (u32)(M32(m_)); }
  /* 004f7ce8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7cea je 0x4f7d15 */ if (ZF_) goto L_004f7d15;
  /* 004f7cec mov dword ptr [eax + 0x34], 0 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x0u); }
  /* 004f7cf3 mov eax, dword ptr [edx + 0x94] */ { const u32 m_ = (u32)(edx + 0x94u); eax = (u32)(M32(m_)); }
  /* 004f7cf9 mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004f7d00 mov eax, dword ptr [edx + 0x94] */ { const u32 m_ = (u32)(edx + 0x94u); eax = (u32)(M32(m_)); }
  /* 004f7d06 call 0x54ada0 */ esp -= 4; M32(esp) = 0x4f7d0bu; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4f7d06u); RETCHK(0x4f7d0bu, 0x4f7d06u); LOADALL;
  /* 004f7d0b mov dword ptr [edx + 0x94], 0 */ { const u32 m_ = (u32)(edx + 0x94u); M32(m_) = (u32)(0x0u); }
L_004f7d15:;
  /* 004f7d15 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004f7d17 jmp 0x4f4330 */ SAVEALL; F_004f4330(c); return;
}

void F_004f7d20(CPU *c) {
  NATIVE_HOOK(0x4f7d20u) REGS; LOADALL;
L_004f7d20:;
  /* 004f7d20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f7d21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f7d23 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f7d26 cmp dword ptr [ecx + 0x44], eax */ { const u32 m_ = (u32)(ecx + 0x44u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7d29 jne 0x4f7d3d */ if (!ZF_) goto L_004f7d3d;
  /* 004f7d2b mov eax, dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f7d2e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7d30 jne 0x4f7d4e */ if (!ZF_) goto L_004f7d4e;
  /* 004f7d32 mov dword ptr [ecx + 0x3c], 0xb */ { const u32 m_ = (u32)(ecx + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f7d39 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f7d3a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f7d3d:;
  /* 004f7d3d cmp dword ptr [ecx + 0x4c], eax */ { const u32 m_ = (u32)(ecx + 0x4cu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7d40 jne 0x4f7d4e */ if (!ZF_) goto L_004f7d4e;
  /* 004f7d42 mov eax, dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f7d45 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7d47 je 0x4f7d4e */ if (ZF_) goto L_004f7d4e;
  /* 004f7d49 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004f7d4b call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f7d4eu; SAVEALL; call_ind(c, t_); RETCHK(0x4f7d4eu, 0x4f7d4bu); LOADALL; }
L_004f7d4e:;
  /* 004f7d4e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f7d4f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f7d60(CPU *c) {
  NATIVE_HOOK(0x4f7d60u) REGS; LOADALL;
L_004f7d60:;
  /* 004f7d60 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f7d61 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f7d63 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f7d68u; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f7d63u); RETCHK(0x4f7d68u, 0x4f7d63u); LOADALL;
  /* 004f7d68 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f7d6a mov dword ptr [esi + 0x80], eax */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(eax); }
  /* 004f7d70 mov dword ptr [esi + 0x84], eax */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(eax); }
  /* 004f7d76 mov dword ptr [esi + 0x88], eax */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(eax); }
  /* 004f7d7c mov dword ptr [esi + 0x90], eax */ { const u32 m_ = (u32)(esi + 0x90u); M32(m_) = (u32)(eax); }
  /* 004f7d82 mov byte ptr [esi + 0x1b4], al */ { const u32 m_ = (u32)(esi + 0x1b4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004f7d88 mov dword ptr [esi + 0x8c], eax */ { const u32 m_ = (u32)(esi + 0x8cu); M32(m_) = (u32)(eax); }
  /* 004f7d8e mov dword ptr [esi], 0x64f814 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f814u); }
  /* 004f7d94 mov dword ptr [esi + 0x40], 0x1298be00 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x1298be00u); }
  /* 004f7d9b mov eax, esi */ { eax = (u32)(esi); }
  /* 004f7d9d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7d9e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f7da0(CPU *c) {
  NATIVE_HOOK(0x4f7da0u) REGS; LOADALL;
L_004f7da0:;
  /* 004f7da0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f7da1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f7da3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f7da4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f7da6 call 0x4f7dd0 */ esp -= 4; M32(esp) = 0x4f7dabu; SAVEALL; F_004f7dd0(c); ABI_CHECK(0x4f7dd0u, 0x4f7da6u); RETCHK(0x4f7dabu, 0x4f7da6u); LOADALL;
  /* 004f7dab test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f7daf je 0x4f7dba */ if (ZF_) goto L_004f7dba;
  /* 004f7db1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f7db2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f7db7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f7db2u); RETCHK(0x4f7db7u, 0x4f7db2u); LOADALL;
  /* 004f7db7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f7dba:;
  /* 004f7dba mov eax, esi */ { eax = (u32)(esi); }
  /* 004f7dbc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7dbd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f7dbe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f7dd0(CPU *c) {
  NATIVE_HOOK(0x4f7dd0u) REGS; LOADALL;
L_004f7dd0:;
  /* 004f7dd0 mov dword ptr [ecx], 0x64f814 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64f814u); }
  /* 004f7dd6 jmp 0x4f4220 */ SAVEALL; F_004f4220(c); return;
}

void F_004f7de0(CPU *c) {
  NATIVE_HOOK(0x4f7de0u) REGS; LOADALL;
L_004f7de0:;
  /* 004f7de0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f7de1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f7de3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f7de6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f7de7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f7de8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f7dea call 0x4f4240 */ esp -= 4; M32(esp) = 0x4f7defu; SAVEALL; F_004f4240(c); ABI_CHECK(0x4f4240u, 0x4f7deau); RETCHK(0x4f7defu, 0x4f7deau); LOADALL;
  /* 004f7def mov dword ptr [esi + 0x54], 0x3fcccccd */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x3fcccccdu); }
  /* 004f7df6 mov dword ptr [esi + 0x3c], 0 */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0x0u); }
  /* 004f7dfd call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f7e02u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f7dfdu); RETCHK(0x4f7e02u, 0x4f7dfdu); LOADALL;
  /* 004f7e02 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f7e04 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f7e06 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f7e07 mov edx, 0x1298be00 */ { edx = (u32)(0x1298be00u); }
  /* 004f7e0c call 0x4fbd30 */ esp -= 4; M32(esp) = 0x4f7e11u; SAVEALL; F_004fbd30(c); ABI_CHECK(0x4fbd30u, 0x4f7e0cu); RETCHK(0x4f7e11u, 0x4f7e0cu); LOADALL;
  /* 004f7e11 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7e13 mov dword ptr [esi + 0x80], eax */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(eax); }
  /* 004f7e19 je 0x4f7e62 */ if (ZF_) goto L_004f7e62;
  /* 004f7e1b mov eax, dword ptr [esi + 0x70] */ { const u32 m_ = (u32)(esi + 0x70u); eax = (u32)(M32(m_)); }
  /* 004f7e1e lea edx, [eax + 0x30] */ edx = (u32)((u32)(eax + 0x30u));
  /* 004f7e21 mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f7e26 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f7e28 mov dword ptr [esi + 0x68], edx */ { const u32 m_ = (u32)(esi + 0x68u); M32(m_) = (u32)(edx); }
  /* 004f7e2b je 0x4f7e43 */ if (ZF_) goto L_004f7e43;
  /* 004f7e2d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f7e2f push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f7e34 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f7e36 push 0x64f844 */ { u32 v_ = 0x64f844u; esp -= 4; M32(esp) = v_; }
  /* 004f7e3b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f7e3c call 0x531340 */ esp -= 4; M32(esp) = 0x4f7e41u; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f7e3cu); RETCHK(0x4f7e41u, 0x4f7e3cu); LOADALL;
  /* 004f7e41 jmp 0x4f7e45 */ goto L_004f7e45;
L_004f7e43:;
  /* 004f7e43 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004f7e45:;
  /* 004f7e45 mov ecx, dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); ecx = (u32)(M32(m_)); }
  /* 004f7e4b mov dword ptr [esi + 0x7c], eax */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 004f7e4e mov dword ptr [ecx + 0x38], 0 */ { const u32 m_ = (u32)(ecx + 0x38u); M32(m_) = (u32)(0x0u); }
  /* 004f7e55 mov edx, dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); edx = (u32)(M32(m_)); }
  /* 004f7e5b mov dword ptr [edx + 0x34], 0 */ { const u32 m_ = (u32)(edx + 0x34u); M32(m_) = (u32)(0x0u); }
L_004f7e62:;
  /* 004f7e62 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f7e64 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7e65 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f7e66 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f7e70(CPU *c) {
  NATIVE_HOOK(0x4f7e70u) REGS; LOADALL;
L_004f7e70:;
  /* 004f7e70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f7e71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f7e73 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f7e76 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f7e77 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f7e78 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f7e7a call 0x4f42a0 */ esp -= 4; M32(esp) = 0x4f7e7fu; SAVEALL; F_004f42a0(c); ABI_CHECK(0x4f42a0u, 0x4f7e7au); RETCHK(0x4f7e7fu, 0x4f7e7au); LOADALL;
  /* 004f7e7f mov dword ptr [esi + 0x58], 0 */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(0x0u); }
  /* 004f7e86 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f7e88 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7e89 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f7e8a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f7e90(CPU *c) {
  NATIVE_HOOK(0x4f7e90u) REGS; LOADALL;
L_004f7e90:;
  /* 004f7e90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f7e91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f7e93 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f7e94 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f7e96 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f7e99 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004f7e9b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f7e9c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f7e9e call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f7ea1u; SAVEALL; call_ind(c, t_); RETCHK(0x4f7ea1u, 0x4f7e9eu); LOADALL; }
  /* 004f7ea1 mov dword ptr [esi + 0x54], 0x7f7fffff */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 004f7ea8 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f7eaa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7eab pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f7eac ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f7eb0(CPU *c) {
  NATIVE_HOOK(0x4f7eb0u) REGS; LOADALL;
L_004f7eb0:;
  /* 004f7eb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f7eb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f7eb3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f7eb4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f7eb5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f7eb6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f7eb8 mov eax, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f7ebb xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004f7ebd cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7ebf je 0x4f7ed0 */ if (ZF_) goto L_004f7ed0;
  /* 004f7ec1 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7ec4 je 0x4f7ed0 */ if (ZF_) goto L_004f7ed0;
  /* 004f7ec6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7ec7 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f7ec9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f7eca mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f7ecc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f7ecd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f7ed0:;
  /* 004f7ed0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f7ed1 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004f7ed4 mov dword ptr [esi + 0x58], 0x3f000000 */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(0x3f000000u); }
  /* 004f7edb mov eax, dword ptr [edi + 0x58] */ { const u32 m_ = (u32)(edi + 0x58u); eax = (u32)(M32(m_)); }
  /* 004f7ede mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f7ee1 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7ee3 mov dword ptr [esi + 0x8c], ecx */ { const u32 m_ = (u32)(esi + 0x8cu); M32(m_) = (u32)(ecx); }
  /* 004f7ee9 mov eax, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f7eec mov dword ptr [esi + 0x70], eax */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(eax); }
  /* 004f7eef jne 0x4f7efc */ if (!ZF_) goto L_004f7efc;
L_004f7ef1:;
  /* 004f7ef1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f7ef2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f7ef3 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f7ef5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f7ef6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f7ef8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f7ef9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f7efc:;
  /* 004f7efc cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7efe je 0x4f7ef1 */ if (ZF_) goto L_004f7ef1;
  /* 004f7f00 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f7f05u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f7f00u); RETCHK(0x4f7f05u, 0x4f7f00u); LOADALL;
  /* 004f7f05 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f7f06 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f7f07 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f7f08 mov edx, 0x1298be01 */ { edx = (u32)(0x1298be01u); }
  /* 004f7f0d call 0x4fbd30 */ esp -= 4; M32(esp) = 0x4f7f12u; SAVEALL; F_004fbd30(c); ABI_CHECK(0x4fbd30u, 0x4f7f0du); RETCHK(0x4f7f12u, 0x4f7f0du); LOADALL;
  /* 004f7f12 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7f14 mov dword ptr [esi + 0x80], eax */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(eax); }
  /* 004f7f1a je 0x4f7f28 */ if (ZF_) goto L_004f7f28;
  /* 004f7f1c mov dword ptr [eax + 0x38], ebx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(ebx); }
  /* 004f7f1f mov edx, dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); edx = (u32)(M32(m_)); }
  /* 004f7f25 mov dword ptr [edx + 0x34], ebx */ { const u32 m_ = (u32)(edx + 0x34u); M32(m_) = (u32)(ebx); }
L_004f7f28:;
  /* 004f7f28 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004f7f2b mov dword ptr [esi + 0x88], eax */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(eax); }
  /* 004f7f31 call 0x529ec0 */ esp -= 4; M32(esp) = 0x4f7f36u; SAVEALL; F_00529ec0(c); ABI_CHECK(0x529ec0u, 0x4f7f31u); RETCHK(0x4f7f36u, 0x4f7f31u); LOADALL;
  /* 004f7f36 mov edi, dword ptr [edi + 0x6c] */ { const u32 m_ = (u32)(edi + 0x6cu); edi = (u32)(M32(m_)); }
  /* 004f7f39 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004f7f3b mov edx, ebx */ { edx = (u32)(ebx); }
  /* 004f7f3d call 0x529f70 */ esp -= 4; M32(esp) = 0x4f7f42u; SAVEALL; F_00529f70(c); ABI_CHECK(0x529f70u, 0x4f7f3du); RETCHK(0x4f7f42u, 0x4f7f3du); LOADALL;
  /* 004f7f42 mov edx, eax */ { edx = (u32)(eax); }
  /* 004f7f44 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004f7f46 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7f48 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 004f7f4b jl 0x4f8084 */ if (LT_) goto L_004f8084;
  /* 004f7f51 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f7f53 call 0x529f20 */ esp -= 4; M32(esp) = 0x4f7f58u; SAVEALL; F_00529f20(c); ABI_CHECK(0x529f20u, 0x4f7f53u); RETCHK(0x4f7f58u, 0x4f7f53u); LOADALL;
  /* 004f7f58 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f7f5a jge 0x4f8084 */ if (!LT_) goto L_004f8084;
  /* 004f7f60 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f7f61 push 0x64db1c */ { u32 v_ = 0x64db1cu; esp -= 4; M32(esp) = v_; }
  /* 004f7f66 call 0x5aca30 */ esp -= 4; M32(esp) = 0x4f7f6bu; SAVEALL; F_005aca30(c); ABI_CHECK(0x5aca30u, 0x4f7f66u); RETCHK(0x4f7f6bu, 0x4f7f66u); LOADALL;
  /* 004f7f6b fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 004f7f6e mov dword ptr [esi + 0x90], eax */ { const u32 m_ = (u32)(esi + 0x90u); M32(m_) = (u32)(eax); }
  /* 004f7f74 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f7f77 mov dword ptr [esi + 0x13c], eax */ { const u32 m_ = (u32)(esi + 0x13cu); M32(m_) = (u32)(eax); }
  /* 004f7f7d fst dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); }
  /* 004f7f80 fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f7f86 mov dword ptr [esi + 0x160], eax */ { const u32 m_ = (u32)(esi + 0x160u); M32(m_) = (u32)(eax); }
  /* 004f7f8c mov dword ptr [esi + 0x184], eax */ { const u32 m_ = (u32)(esi + 0x184u); M32(m_) = (u32)(eax); }
  /* 004f7f92 mov dword ptr [esi + 0x1a8], eax */ { const u32 m_ = (u32)(esi + 0x1a8u); M32(m_) = (u32)(eax); }
  /* 004f7f98 mov dword ptr [esi + 0xac], eax */ { const u32 m_ = (u32)(esi + 0xacu); M32(m_) = (u32)(eax); }
  /* 004f7f9e mov dword ptr [esi + 0xd0], eax */ { const u32 m_ = (u32)(esi + 0xd0u); M32(m_) = (u32)(eax); }
  /* 004f7fa4 mov dword ptr [esi + 0xf4], eax */ { const u32 m_ = (u32)(esi + 0xf4u); M32(m_) = (u32)(eax); }
  /* 004f7faa mov dword ptr [esi + 0x118], eax */ { const u32 m_ = (u32)(esi + 0x118u); M32(m_) = (u32)(eax); }
  /* 004f7fb0 mov eax, 0x3f800000 */ { eax = (u32)(0x3f800000u); }
  /* 004f7fb5 mov dword ptr [esi + 0x188], eax */ { const u32 m_ = (u32)(esi + 0x188u); M32(m_) = (u32)(eax); }
  /* 004f7fbb mov dword ptr [esi + 0x1ac], eax */ { const u32 m_ = (u32)(esi + 0x1acu); M32(m_) = (u32)(eax); }
  /* 004f7fc1 mov dword ptr [esi + 0xf8], eax */ { const u32 m_ = (u32)(esi + 0xf8u); M32(m_) = (u32)(eax); }
  /* 004f7fc7 mov dword ptr [esi + 0x11c], eax */ { const u32 m_ = (u32)(esi + 0x11cu); M32(m_) = (u32)(eax); }
  /* 004f7fcd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f7fd0 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f7fd2 mov dword ptr [esi + 0x140], edi */ { const u32 m_ = (u32)(esi + 0x140u); M32(m_) = (u32)(edi); }
  /* 004f7fd8 mov dword ptr [esi + 0x164], edi */ { const u32 m_ = (u32)(esi + 0x164u); M32(m_) = (u32)(edi); }
  /* 004f7fde mov dword ptr [esi + 0xb0], edi */ { const u32 m_ = (u32)(esi + 0xb0u); M32(m_) = (u32)(edi); }
  /* 004f7fe4 mov dword ptr [esi + 0xd4], edi */ { const u32 m_ = (u32)(esi + 0xd4u); M32(m_) = (u32)(edi); }
  /* 004f7fea call 0x529f20 */ esp -= 4; M32(esp) = 0x4f7fefu; SAVEALL; F_00529f20(c); ABI_CHECK(0x529f20u, 0x4f7feau); RETCHK(0x4f7fefu, 0x4f7feau); LOADALL;
  /* 004f7fef mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f7ff2 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 004f7ff5 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f7ff7 fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f7ffd fdivr st(1) */ ST(0) = FR(ST(1) / ST(0));
  /* 004f7fff fst dword ptr [esi + 0x144] */ { const u32 m_ = (u32)(esi + 0x144u); MF32(m_) = (float)ST(0); }
  /* 004f8005 call 0x529f20 */ esp -= 4; M32(esp) = 0x4f800au; SAVEALL; F_00529f20(c); ABI_CHECK(0x529f20u, 0x4f8005u); RETCHK(0x4f800au, 0x4f8005u); LOADALL;
  /* 004f800a mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f800d fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 004f8010 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f8012 fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8018 fdivr dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 004f801b fst dword ptr [esi + 0x168] */ { const u32 m_ = (u32)(esi + 0x168u); MF32(m_) = (float)ST(0); }
  /* 004f8021 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004f8023 fstp dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8029 fstp dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f802f call 0x529f20 */ esp -= 4; M32(esp) = 0x4f8034u; SAVEALL; F_00529f20(c); ABI_CHECK(0x529f20u, 0x4f802fu); RETCHK(0x4f8034u, 0x4f802fu); LOADALL;
  /* 004f8034 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f8037 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 004f803a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f803c fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8042 fdivp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) / s0_); FPOP(); }
  /* 004f8044 fst dword ptr [esi + 0xb4] */ { const u32 m_ = (u32)(esi + 0xb4u); MF32(m_) = (float)ST(0); }
  /* 004f804a call 0x529f20 */ esp -= 4; M32(esp) = 0x4f804fu; SAVEALL; F_00529f20(c); ABI_CHECK(0x529f20u, 0x4f804au); RETCHK(0x4f804fu, 0x4f804au); LOADALL;
  /* 004f804f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f8052 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 004f8055 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f8056 mov byte ptr [esi + 0x1b4], 1 */ { const u32 m_ = (u32)(esi + 0x1b4u); M8(m_) = (u8)(0x1u); }
  /* 004f805d mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f805f fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8065 fdivr dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 004f8068 fst dword ptr [esi + 0xd8] */ { const u32 m_ = (u32)(esi + 0xd8u); MF32(m_) = (float)ST(0); }
  /* 004f806e fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004f8070 fstp dword ptr [esi + 0xfc] */ { const u32 m_ = (u32)(esi + 0xfcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8076 fstp dword ptr [esi + 0x120] */ { const u32 m_ = (u32)(esi + 0x120u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f807c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f807d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f807e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f8080 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f8081 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f8084:;
  /* 004f8084 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f8085 mov byte ptr [esi + 0x1b4], 0 */ { const u32 m_ = (u32)(esi + 0x1b4u); M8(m_) = (u8)(0x0u); }
  /* 004f808c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f808d mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f808f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f8090 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f8092 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f8093 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f80a0(CPU *c) {
  NATIVE_HOOK(0x4f80a0u) REGS; LOADALL;
L_004f80a0:;
  /* 004f80a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f80a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f80a3 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f80a6 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f80a9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f80aa fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f80b0 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 004f80b2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f80b4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f80b7 jnp 0x4f86d9 */ if (!PF_) goto L_004f86d9;
  /* 004f80bd fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f80c0 mov eax, dword ptr [ebx + 0x3c] */ { const u32 m_ = (u32)(ebx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f80c3 sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f80c6 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f80c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f80ca push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f80cb fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f80ce fst dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); MF32(m_) = (float)ST(0); }
  /* 004f80d1 fld dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); FPUSH((double)MF32(m_)); }
  /* 004f80d4 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f80d7 fstp dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f80da je 0x4f865f */ if (ZF_) goto L_004f865f;
  /* 004f80e0 sub eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f80e3 jne 0x4f86d5 */ if (!ZF_) goto L_004f86d5;
  /* 004f80e9 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f80ef fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f80f1 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f80f4 jne 0x4f8536 */ if (!ZF_) goto L_004f8536;
  /* 004f80fa mov eax, dword ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); eax = (u32)(M32(m_)); }
  /* 004f8100 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8102 je 0x4f8536 */ if (ZF_) goto L_004f8536;
  /* 004f8108 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f810b lea esi, [eax + 0x10] */ esi = (u32)((u32)(eax + 0x10u));
  /* 004f810e lea edi, [eax + 0x20] */ edi = (u32)((u32)(eax + 0x20u));
  /* 004f8111 mov al, byte ptr [ebx + 0x1b4] */ { const u32 m_ = (u32)(ebx + 0x1b4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f8117 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f8119 je 0x4f853d */ if (ZF_) goto L_004f853d;
  /* 004f811f mov eax, dword ptr [ebx + 0x70] */ { const u32 m_ = (u32)(ebx + 0x70u); eax = (u32)(M32(m_)); }
  /* 004f8122 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f8125 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f8126 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 004f8129 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f812a call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f812fu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f812au); RETCHK(0x4f812fu, 0x4f812au); LOADALL;
  /* 004f812f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f8131 fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f8134 mov eax, dword ptr [ebx + 0x70] */ { const u32 m_ = (u32)(ebx + 0x70u); eax = (u32)(M32(m_)); }
  /* 004f8137 fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 004f8139 lea edx, [ebp - 0x24] */ edx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 004f813c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f813d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f813e fmul dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8144 fadd dword ptr [0x65704c] */ { const u32 m_ = (u32)(0x65704cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f814a fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f814d fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004f814f fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8152 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f8155 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004f8157 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f815a fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f815d fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004f815f fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8162 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f8164 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f8167 fadd dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f816a fstp dword ptr [ebx + 0x124] */ { const u32 m_ = (u32)(ebx + 0x124u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8170 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f8173 fadd dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8176 fstp dword ptr [ebx + 0x128] */ { const u32 m_ = (u32)(ebx + 0x128u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f817c fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f817f fadd dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8182 fstp dword ptr [ebx + 0x12c] */ { const u32 m_ = (u32)(ebx + 0x12cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8188 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f818b fadd dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f818e fstp dword ptr [ebx + 0x148] */ { const u32 m_ = (u32)(ebx + 0x148u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8194 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f8197 fadd dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f819a fstp dword ptr [ebx + 0x14c] */ { const u32 m_ = (u32)(ebx + 0x14cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f81a0 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f81a3 fadd dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f81a6 fstp dword ptr [ebx + 0x150] */ { const u32 m_ = (u32)(ebx + 0x150u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f81ac fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f81af fadd dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f81b2 fstp dword ptr [ebx + 0x16c] */ { const u32 m_ = (u32)(ebx + 0x16cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f81b8 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f81bb fadd dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f81be fstp dword ptr [ebx + 0x170] */ { const u32 m_ = (u32)(ebx + 0x170u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f81c4 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f81c7 fadd dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f81ca fstp dword ptr [ebx + 0x174] */ { const u32 m_ = (u32)(ebx + 0x174u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f81d0 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f81d3 fadd dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f81d6 fstp dword ptr [ebx + 0x190] */ { const u32 m_ = (u32)(ebx + 0x190u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f81dc fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f81df fadd dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f81e2 fstp dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f81e8 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f81eb fadd dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f81ee fstp dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f81f4 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f81f9u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f81f4u); RETCHK(0x4f81f9u, 0x4f81f4u); LOADALL;
  /* 004f81f9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f81fb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f81fc lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 004f81ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f8200 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f8205u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f8200u); RETCHK(0x4f8205u, 0x4f8200u); LOADALL;
  /* 004f8205 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f8207 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 004f820a add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f820d fmul dword ptr [0x657048] */ { const u32 m_ = (u32)(0x657048u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8213 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8216 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 004f8219 fmul dword ptr [0x657048] */ { const u32 m_ = (u32)(0x657048u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f821f fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8222 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 004f8225 fmul dword ptr [0x657048] */ { const u32 m_ = (u32)(0x657048u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f822b fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f822e fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 004f8231 fmul dword ptr [0x657048] */ { const u32 m_ = (u32)(0x657048u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8237 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f823a fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 004f823d fmul dword ptr [0x657048] */ { const u32 m_ = (u32)(0x657048u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8243 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8246 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004f8249 fmul dword ptr [0x657048] */ { const u32 m_ = (u32)(0x657048u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f824f fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8252 fld dword ptr [ebx + 0x124] */ { const u32 m_ = (u32)(ebx + 0x124u); FPUSH((double)MF32(m_)); }
  /* 004f8258 fsub dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f825b fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f825e fstp dword ptr [ebx + 0x124] */ { const u32 m_ = (u32)(ebx + 0x124u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8264 fld dword ptr [ebx + 0x128] */ { const u32 m_ = (u32)(ebx + 0x128u); FPUSH((double)MF32(m_)); }
  /* 004f826a fsub dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f826d fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f8270 fstp dword ptr [ebx + 0x128] */ { const u32 m_ = (u32)(ebx + 0x128u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8276 fld dword ptr [ebx + 0x12c] */ { const u32 m_ = (u32)(ebx + 0x12cu); FPUSH((double)MF32(m_)); }
  /* 004f827c fsub dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f827f fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f8282 fstp dword ptr [ebx + 0x12c] */ { const u32 m_ = (u32)(ebx + 0x12cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8288 fld dword ptr [ebx + 0x148] */ { const u32 m_ = (u32)(ebx + 0x148u); FPUSH((double)MF32(m_)); }
  /* 004f828e fsub dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f8291 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8294 fstp dword ptr [ebx + 0x148] */ { const u32 m_ = (u32)(ebx + 0x148u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f829a fld dword ptr [ebx + 0x14c] */ { const u32 m_ = (u32)(ebx + 0x14cu); FPUSH((double)MF32(m_)); }
  /* 004f82a0 fsub dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f82a3 fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f82a6 fstp dword ptr [ebx + 0x14c] */ { const u32 m_ = (u32)(ebx + 0x14cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f82ac fld dword ptr [ebx + 0x150] */ { const u32 m_ = (u32)(ebx + 0x150u); FPUSH((double)MF32(m_)); }
  /* 004f82b2 fsub dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f82b5 fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f82b8 fstp dword ptr [ebx + 0x150] */ { const u32 m_ = (u32)(ebx + 0x150u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f82be fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 004f82c1 fadd dword ptr [ebx + 0x16c] */ { const u32 m_ = (u32)(ebx + 0x16cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f82c7 fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f82ca fstp dword ptr [ebx + 0x16c] */ { const u32 m_ = (u32)(ebx + 0x16cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f82d0 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 004f82d3 fadd dword ptr [ebx + 0x170] */ { const u32 m_ = (u32)(ebx + 0x170u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f82d9 fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f82dc fstp dword ptr [ebx + 0x170] */ { const u32 m_ = (u32)(ebx + 0x170u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f82e2 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 004f82e5 fadd dword ptr [ebx + 0x174] */ { const u32 m_ = (u32)(ebx + 0x174u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f82eb fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f82ee fstp dword ptr [ebx + 0x174] */ { const u32 m_ = (u32)(ebx + 0x174u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f82f4 mov eax, dword ptr [ebx + 0x88] */ { const u32 m_ = (u32)(ebx + 0x88u); eax = (u32)(M32(m_)); }
  /* 004f82fa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f82fc fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 004f82ff fadd dword ptr [ebx + 0x190] */ { const u32 m_ = (u32)(ebx + 0x190u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8305 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8308 fstp dword ptr [ebx + 0x190] */ { const u32 m_ = (u32)(ebx + 0x190u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f830e fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 004f8311 fadd dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8317 fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f831a fstp dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8320 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 004f8323 fadd dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8329 fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f832c fstp dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8332 je 0x4f853d */ if (ZF_) goto L_004f853d;
  /* 004f8338 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f833b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f833c lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 004f833f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f8340 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f8345u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f8340u); RETCHK(0x4f8345u, 0x4f8340u); LOADALL;
  /* 004f8345 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f8347 fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f834a mov eax, dword ptr [ebx + 0x88] */ { const u32 m_ = (u32)(ebx + 0x88u); eax = (u32)(M32(m_)); }
  /* 004f8350 fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 004f8352 lea edx, [ebp - 0x24] */ edx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 004f8355 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f8356 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f8357 fsubr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004f835d fmul dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8363 fadd dword ptr [0x65704c] */ { const u32 m_ = (u32)(0x65704cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8369 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f836c fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004f836e fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8371 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f8374 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004f8376 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8379 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f837c fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004f837e fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8381 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f8383 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f8386 fadd dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8389 fstp dword ptr [ebx + 0x94] */ { const u32 m_ = (u32)(ebx + 0x94u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f838f fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f8392 fadd dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8395 fstp dword ptr [ebx + 0x98] */ { const u32 m_ = (u32)(ebx + 0x98u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f839b fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f839e fadd dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f83a1 fstp dword ptr [ebx + 0x9c] */ { const u32 m_ = (u32)(ebx + 0x9cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f83a7 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f83aa fadd dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f83ad fstp dword ptr [ebx + 0xb8] */ { const u32 m_ = (u32)(ebx + 0xb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f83b3 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f83b6 fadd dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f83b9 fstp dword ptr [ebx + 0xbc] */ { const u32 m_ = (u32)(ebx + 0xbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f83bf fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f83c2 fadd dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f83c5 fstp dword ptr [ebx + 0xc0] */ { const u32 m_ = (u32)(ebx + 0xc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f83cb fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f83ce fadd dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f83d1 fstp dword ptr [ebx + 0xdc] */ { const u32 m_ = (u32)(ebx + 0xdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f83d7 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f83da fadd dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f83dd fstp dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f83e3 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f83e6 fadd dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f83e9 fstp dword ptr [ebx + 0xe4] */ { const u32 m_ = (u32)(ebx + 0xe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f83ef fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 004f83f2 fadd dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f83f5 fstp dword ptr [ebx + 0x100] */ { const u32 m_ = (u32)(ebx + 0x100u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f83fb fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f83fe fadd dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8401 fstp dword ptr [ebx + 0x104] */ { const u32 m_ = (u32)(ebx + 0x104u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8407 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 004f840a fadd dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f840d fstp dword ptr [ebx + 0x108] */ { const u32 m_ = (u32)(ebx + 0x108u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8413 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f8418u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f8413u); RETCHK(0x4f8418u, 0x4f8413u); LOADALL;
  /* 004f8418 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f841a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f841b lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 004f841e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f841f call 0x5aa860 */ esp -= 4; M32(esp) = 0x4f8424u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4f841fu); RETCHK(0x4f8424u, 0x4f841fu); LOADALL;
  /* 004f8424 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f8426 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 004f8429 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f842c fmul dword ptr [0x657048] */ { const u32 m_ = (u32)(0x657048u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8432 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 004f8435 fmul dword ptr [0x657048] */ { const u32 m_ = (u32)(0x657048u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f843b fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 004f843e fmul dword ptr [0x657048] */ { const u32 m_ = (u32)(0x657048u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8444 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8447 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 004f844a fmul dword ptr [0x657048] */ { const u32 m_ = (u32)(0x657048u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8450 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 004f8453 fmul dword ptr [0x657048] */ { const u32 m_ = (u32)(0x657048u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8459 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f845c fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004f845f fmul dword ptr [0x657048] */ { const u32 m_ = (u32)(0x657048u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8465 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8468 fld dword ptr [ebx + 0x94] */ { const u32 m_ = (u32)(ebx + 0x94u); FPUSH((double)MF32(m_)); }
  /* 004f846e fsub st(3) */ ST(0) = FR(ST(0) - ST(3));
  /* 004f8470 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 004f8472 fstp dword ptr [ebx + 0x94] */ { const u32 m_ = (u32)(ebx + 0x94u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8478 fld dword ptr [ebx + 0x98] */ { const u32 m_ = (u32)(ebx + 0x98u); FPUSH((double)MF32(m_)); }
  /* 004f847e fsub st(2) */ ST(0) = FR(ST(0) - ST(2));
  /* 004f8480 fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f8483 fstp dword ptr [ebx + 0x98] */ { const u32 m_ = (u32)(ebx + 0x98u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8489 fld dword ptr [ebx + 0x9c] */ { const u32 m_ = (u32)(ebx + 0x9cu); FPUSH((double)MF32(m_)); }
  /* 004f848f fsub dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f8492 fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f8495 fstp dword ptr [ebx + 0x9c] */ { const u32 m_ = (u32)(ebx + 0x9cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f849b fld dword ptr [ebx + 0xb8] */ { const u32 m_ = (u32)(ebx + 0xb8u); FPUSH((double)MF32(m_)); }
  /* 004f84a1 fsub st(3) */ ST(0) = FR(ST(0) - ST(3));
  /* 004f84a3 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 004f84a5 fstp dword ptr [ebx + 0xb8] */ { const u32 m_ = (u32)(ebx + 0xb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f84ab fld dword ptr [ebx + 0xbc] */ { const u32 m_ = (u32)(ebx + 0xbcu); FPUSH((double)MF32(m_)); }
  /* 004f84b1 fsub st(2) */ ST(0) = FR(ST(0) - ST(2));
  /* 004f84b3 fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f84b6 fstp dword ptr [ebx + 0xbc] */ { const u32 m_ = (u32)(ebx + 0xbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f84bc fld dword ptr [ebx + 0xc0] */ { const u32 m_ = (u32)(ebx + 0xc0u); FPUSH((double)MF32(m_)); }
  /* 004f84c2 fsub dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f84c5 fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f84c8 fstp dword ptr [ebx + 0xc0] */ { const u32 m_ = (u32)(ebx + 0xc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f84ce fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 004f84d0 fadd dword ptr [ebx + 0xdc] */ { const u32 m_ = (u32)(ebx + 0xdcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f84d6 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 004f84d8 fstp dword ptr [ebx + 0xdc] */ { const u32 m_ = (u32)(ebx + 0xdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f84de fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004f84e0 fadd dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f84e6 fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f84e9 fstp dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f84ef fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 004f84f2 fadd dword ptr [ebx + 0xe4] */ { const u32 m_ = (u32)(ebx + 0xe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f84f8 fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f84fb fstp dword ptr [ebx + 0xe4] */ { const u32 m_ = (u32)(ebx + 0xe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8501 fxch st(2) */ { double t_ = ST(0); ST(0) = ST(2); ST(2) = t_; }
  /* 004f8503 fadd dword ptr [ebx + 0x100] */ { const u32 m_ = (u32)(ebx + 0x100u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8509 fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 004f850b fstp dword ptr [ebx + 0x100] */ { const u32 m_ = (u32)(ebx + 0x100u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8511 fstp st(1) */ ST(1) = ST(0); FPOP();
  /* 004f8513 fadd dword ptr [ebx + 0x104] */ { const u32 m_ = (u32)(ebx + 0x104u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8519 fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f851c fstp dword ptr [ebx + 0x104] */ { const u32 m_ = (u32)(ebx + 0x104u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8522 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 004f8525 fadd dword ptr [ebx + 0x108] */ { const u32 m_ = (u32)(ebx + 0x108u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f852b fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f852e fstp dword ptr [ebx + 0x108] */ { const u32 m_ = (u32)(ebx + 0x108u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8534 jmp 0x4f853d */ goto L_004f853d;
L_004f8536:;
  /* 004f8536 mov byte ptr [ebx + 0x1b4], 0 */ { const u32 m_ = (u32)(ebx + 0x1b4u); M8(m_) = (u8)(0x0u); }
L_004f853d:;
  /* 004f853d mov esi, dword ptr [ebx + 0x70] */ { const u32 m_ = (u32)(ebx + 0x70u); esi = (u32)(M32(m_)); }
  /* 004f8540 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8542 je 0x4f8586 */ if (ZF_) goto L_004f8586;
  /* 004f8544 mov eax, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f854a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f854c je 0x4f8586 */ if (ZF_) goto L_004f8586;
  /* 004f854e mov ecx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 004f8551 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8553 je 0x4f8586 */ if (ZF_) goto L_004f8586;
  /* 004f8555 mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004f8558 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f855b mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f8560 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f8562 mov ecx, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); ecx = (u32)(M32(m_)); }
  /* 004f8568 mov edx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f856b add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f856e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f856f call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4f8574u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4f856fu); RETCHK(0x4f8574u, 0x4f856fu); LOADALL;
  /* 004f8574 mov eax, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f857a mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004f857d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f857e call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f8583u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f857eu); RETCHK(0x4f8583u, 0x4f857eu); LOADALL;
  /* 004f8583 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f8586:;
  /* 004f8586 mov esi, dword ptr [ebx + 0x88] */ { const u32 m_ = (u32)(ebx + 0x88u); esi = (u32)(M32(m_)); }
  /* 004f858c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f858e je 0x4f8600 */ if (ZF_) goto L_004f8600;
  /* 004f8590 mov eax, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); eax = (u32)(M32(m_)); }
  /* 004f8596 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8598 jne 0x4f85c8 */ if (!ZF_) goto L_004f85c8;
  /* 004f859a call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f859fu; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f859au); RETCHK(0x4f859fu, 0x4f859au); LOADALL;
  /* 004f859f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f85a1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f85a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f85a4 mov edx, 0x1298be00 */ { edx = (u32)(0x1298be00u); }
  /* 004f85a9 call 0x4fbd30 */ esp -= 4; M32(esp) = 0x4f85aeu; SAVEALL; F_004fbd30(c); ABI_CHECK(0x4fbd30u, 0x4f85a9u); RETCHK(0x4f85aeu, 0x4f85a9u); LOADALL;
  /* 004f85ae test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f85b0 mov dword ptr [ebx + 0x84], eax */ { const u32 m_ = (u32)(ebx + 0x84u); M32(m_) = (u32)(eax); }
  /* 004f85b6 je 0x4f8600 */ if (ZF_) goto L_004f8600;
  /* 004f85b8 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004f85ba mov dword ptr [eax + 0x38], ecx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(ecx); }
  /* 004f85bd mov edx, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); edx = (u32)(M32(m_)); }
  /* 004f85c3 mov dword ptr [edx + 0x34], ecx */ { const u32 m_ = (u32)(edx + 0x34u); M32(m_) = (u32)(ecx); }
  /* 004f85c6 jmp 0x4f8600 */ goto L_004f8600;
L_004f85c8:;
  /* 004f85c8 mov ecx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 004f85cb test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f85cd je 0x4f8600 */ if (ZF_) goto L_004f8600;
  /* 004f85cf mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004f85d2 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f85d5 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f85da rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f85dc mov eax, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); eax = (u32)(M32(m_)); }
  /* 004f85e2 mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004f85e5 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f85e8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f85e9 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4f85eeu; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4f85e9u); RETCHK(0x4f85eeu, 0x4f85e9u); LOADALL;
  /* 004f85ee mov edx, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); edx = (u32)(M32(m_)); }
  /* 004f85f4 mov eax, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f85f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f85f8 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f85fdu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f85f8u); RETCHK(0x4f85fdu, 0x4f85f8u); LOADALL;
  /* 004f85fd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f8600:;
  /* 004f8600 mov eax, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f8606 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004f8608 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f860a je 0x4f86d7 */ if (ZF_) goto L_004f86d7;
  /* 004f8610 cmp dword ptr [eax + 0x2c], edx */ { const u32 m_ = (u32)(eax + 0x2cu); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f8613 jne 0x4f86d7 */ if (!ZF_) goto L_004f86d7;
  /* 004f8619 mov ecx, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); ecx = (u32)(M32(m_)); }
  /* 004f861f cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f8621 je 0x4f862c */ if (ZF_) goto L_004f862c;
  /* 004f8623 cmp dword ptr [ecx + 0x2c], edx */ { const u32 m_ = (u32)(ecx + 0x2cu); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f8626 jne 0x4f86d7 */ if (!ZF_) goto L_004f86d7;
L_004f862c:;
  /* 004f862c mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 004f8631 mov dword ptr [eax + 0x38], ecx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(ecx); }
  /* 004f8634 mov eax, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); eax = (u32)(M32(m_)); }
  /* 004f863a cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f863c mov dword ptr [ebx + 0x80], edx */ { const u32 m_ = (u32)(ebx + 0x80u); M32(m_) = (u32)(edx); }
  /* 004f8642 je 0x4f864d */ if (ZF_) goto L_004f864d;
  /* 004f8644 mov dword ptr [eax + 0x38], ecx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(ecx); }
  /* 004f8647 mov dword ptr [ebx + 0x84], edx */ { const u32 m_ = (u32)(ebx + 0x84u); M32(m_) = (u32)(edx); }
L_004f864d:;
  /* 004f864d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f864e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f864f mov dword ptr [ebx + 0x3c], 0xb */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f8656 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f8658 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f8659 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f865b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f865c ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f865f:;
  /* 004f865f mov esi, dword ptr [ebx + 0x70] */ { const u32 m_ = (u32)(ebx + 0x70u); esi = (u32)(M32(m_)); }
  /* 004f8662 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004f8664 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8666 je 0x4f86d7 */ if (ZF_) goto L_004f86d7;
  /* 004f8668 mov eax, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f866e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8670 je 0x4f86d7 */ if (ZF_) goto L_004f86d7;
  /* 004f8672 mov ecx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 004f8675 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8677 je 0x4f86b5 */ if (ZF_) goto L_004f86b5;
  /* 004f8679 mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004f867c add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f867f mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f8684 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f8686 mov ecx, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); ecx = (u32)(M32(m_)); }
  /* 004f868c mov edx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edx = (u32)(M32(m_)); }
  /* 004f868f add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f8692 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f8693 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4f8698u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4f8693u); RETCHK(0x4f8698u, 0x4f8693u); LOADALL;
  /* 004f8698 mov eax, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f869e mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004f86a1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f86a2 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f86a7u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f86a2u); RETCHK(0x4f86a7u, 0x4f86a2u); LOADALL;
  /* 004f86a7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f86aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f86ab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f86ac xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f86ae pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f86af mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f86b1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f86b2 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f86b5:;
  /* 004f86b5 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 004f86ba pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f86bb mov dword ptr [eax + 0x38], ecx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(ecx); }
  /* 004f86be pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f86bf mov dword ptr [ebx + 0x80], 0 */ { const u32 m_ = (u32)(ebx + 0x80u); M32(m_) = (u32)(0x0u); }
  /* 004f86c9 mov dword ptr [ebx + 0x3c], ecx */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 004f86cc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f86ce pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f86cf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f86d1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f86d2 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f86d5:;
  /* 004f86d5 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004f86d7:;
  /* 004f86d7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f86d8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_004f86d9:;
  /* 004f86d9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f86db pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f86dc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f86de pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f86df ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_004f86f0(CPU *c) {
  NATIVE_HOOK(0x4f86f0u) REGS; LOADALL;
L_004f86f0:;
  /* 004f86f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f86f1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f86f3 mov al, byte ptr [esi + 0x1b4] */ { const u32 m_ = (u32)(esi + 0x1b4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f86f9 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f86fb je 0x4f8811 */ if (ZF_) goto L_004f8811;
  /* 004f8701 mov eax, dword ptr [esi + 0x90] */ { const u32 m_ = (u32)(esi + 0x90u); eax = (u32)(M32(m_)); }
  /* 004f8707 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8709 je 0x4f8811 */ if (ZF_) goto L_004f8811;
  /* 004f870f cmp dword ptr [esi + 0x3c], 2 */ { const u32 m_ = (u32)(esi + 0x3cu); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f8713 jne 0x4f8811 */ if (!ZF_) goto L_004f8811;
  /* 004f8719 push 0x19 */ { u32 v_ = 0x19u; esp -= 4; M32(esp) = v_; }
  /* 004f871b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f871d lea eax, [esi + 0x124] */ eax = (u32)((u32)(esi + 0x124u));
  /* 004f8723 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004f8725 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f8726 call 0x5b4a60 */ esp -= 4; M32(esp) = 0x4f872bu; SAVEALL; F_005b4a60(c); ABI_CHECK(0x5b4a60u, 0x4f8726u); RETCHK(0x4f872bu, 0x4f8726u); LOADALL;
  /* 004f872b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f872e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8730 je 0x4f8795 */ if (ZF_) goto L_004f8795;
  /* 004f8732 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 004f8738 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f873a push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 004f873c call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f873fu; SAVEALL; call_ind(c, t_); RETCHK(0x4f873fu, 0x4f873cu); LOADALL; }
  /* 004f873f mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 004f8745 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f8747 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 004f8749 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f874cu; SAVEALL; call_ind(c, t_); RETCHK(0x4f874cu, 0x4f8749u); LOADALL; }
  /* 004f874c mov eax, dword ptr [esi + 0x90] */ { const u32 m_ = (u32)(esi + 0x90u); eax = (u32)(M32(m_)); }
  /* 004f8752 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004f8754 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 004f875a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f875b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f875d call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f8760u; SAVEALL; call_ind(c, t_); RETCHK(0x4f8760u, 0x4f875du); LOADALL; }
  /* 004f8760 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004f8762 call 0x5b4cc0 */ esp -= 4; M32(esp) = 0x4f8767u; SAVEALL; F_005b4cc0(c); ABI_CHECK(0x5b4cc0u, 0x4f8762u); RETCHK(0x4f8767u, 0x4f8762u); LOADALL;
  /* 004f8767 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 004f876c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f876e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f8770 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f8773u; SAVEALL; call_ind(c, t_); RETCHK(0x4f8773u, 0x4f8770u); LOADALL; }
  /* 004f8773 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 004f8779 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004f877b push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 004f877d call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f8780u; SAVEALL; call_ind(c, t_); RETCHK(0x4f8780u, 0x4f877du); LOADALL; }
  /* 004f8780 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 004f8786 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f8788 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 004f878a call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f878du; SAVEALL; call_ind(c, t_); RETCHK(0x4f878du, 0x4f878au); LOADALL; }
  /* 004f878d add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f8790 call 0x5b4b30 */ esp -= 4; M32(esp) = 0x4f8795u; SAVEALL; F_005b4b30(c); ABI_CHECK(0x5b4b30u, 0x4f8790u); RETCHK(0x4f8795u, 0x4f8790u); LOADALL;
L_004f8795:;
  /* 004f8795 push 0x19 */ { u32 v_ = 0x19u; esp -= 4; M32(esp) = v_; }
  /* 004f8797 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f8799 lea eax, [esi + 0x94] */ eax = (u32)((u32)(esi + 0x94u));
  /* 004f879f push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004f87a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f87a2 call 0x5b4a60 */ esp -= 4; M32(esp) = 0x4f87a7u; SAVEALL; F_005b4a60(c); ABI_CHECK(0x5b4a60u, 0x4f87a2u); RETCHK(0x4f87a7u, 0x4f87a2u); LOADALL;
  /* 004f87a7 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f87aa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f87ac je 0x4f8811 */ if (ZF_) goto L_004f8811;
  /* 004f87ae mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 004f87b4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f87b6 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 004f87b8 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f87bbu; SAVEALL; call_ind(c, t_); RETCHK(0x4f87bbu, 0x4f87b8u); LOADALL; }
  /* 004f87bb mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 004f87c1 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f87c3 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 004f87c5 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f87c8u; SAVEALL; call_ind(c, t_); RETCHK(0x4f87c8u, 0x4f87c5u); LOADALL; }
  /* 004f87c8 mov eax, dword ptr [esi + 0x90] */ { const u32 m_ = (u32)(esi + 0x90u); eax = (u32)(M32(m_)); }
  /* 004f87ce mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004f87d0 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 004f87d6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f87d7 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f87d9 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f87dcu; SAVEALL; call_ind(c, t_); RETCHK(0x4f87dcu, 0x4f87d9u); LOADALL; }
  /* 004f87dc push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004f87de call 0x5b4cc0 */ esp -= 4; M32(esp) = 0x4f87e3u; SAVEALL; F_005b4cc0(c); ABI_CHECK(0x5b4cc0u, 0x4f87deu); RETCHK(0x4f87e3u, 0x4f87deu); LOADALL;
  /* 004f87e3 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 004f87e8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f87ea push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f87ec call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f87efu; SAVEALL; call_ind(c, t_); RETCHK(0x4f87efu, 0x4f87ecu); LOADALL; }
  /* 004f87ef mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 004f87f5 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004f87f7 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 004f87f9 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f87fcu; SAVEALL; call_ind(c, t_); RETCHK(0x4f87fcu, 0x4f87f9u); LOADALL; }
  /* 004f87fc mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 004f8802 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f8804 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 004f8806 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f8809u; SAVEALL; call_ind(c, t_); RETCHK(0x4f8809u, 0x4f8806u); LOADALL; }
  /* 004f8809 add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f880c call 0x5b4b30 */ esp -= 4; M32(esp) = 0x4f8811u; SAVEALL; F_005b4b30(c); ABI_CHECK(0x5b4b30u, 0x4f880cu); RETCHK(0x4f8811u, 0x4f880cu); LOADALL;
L_004f8811:;
  /* 004f8811 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f8812 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f8820(CPU *c) {
  NATIVE_HOOK(0x4f8820u) REGS; LOADALL;
L_004f8820:;
  /* 004f8820 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f8821 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004f8823 mov eax, dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f8826 mov edx, 0xb */ { edx = (u32)(0xbu); }
  /* 004f882b cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f882d je 0x4f889c */ if (ZF_) goto L_004f889c;
  /* 004f882f mov eax, dword ptr [edi + 0x80] */ { const u32 m_ = (u32)(edi + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f8835 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8837 je 0x4f8855 */ if (ZF_) goto L_004f8855;
  /* 004f8839 mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004f8840 mov eax, dword ptr [edi + 0x80] */ { const u32 m_ = (u32)(edi + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f8846 call 0x54ada0 */ esp -= 4; M32(esp) = 0x4f884bu; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4f8846u); RETCHK(0x4f884bu, 0x4f8846u); LOADALL;
  /* 004f884b mov dword ptr [edi + 0x80], 0 */ { const u32 m_ = (u32)(edi + 0x80u); M32(m_) = (u32)(0x0u); }
L_004f8855:;
  /* 004f8855 mov eax, dword ptr [edi + 0x84] */ { const u32 m_ = (u32)(edi + 0x84u); eax = (u32)(M32(m_)); }
  /* 004f885b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f885d je 0x4f887b */ if (ZF_) goto L_004f887b;
  /* 004f885f mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004f8866 mov eax, dword ptr [edi + 0x80] */ { const u32 m_ = (u32)(edi + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f886c call 0x54ada0 */ esp -= 4; M32(esp) = 0x4f8871u; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4f886cu); RETCHK(0x4f8871u, 0x4f886cu); LOADALL;
  /* 004f8871 mov dword ptr [edi + 0x84], 0 */ { const u32 m_ = (u32)(edi + 0x84u); M32(m_) = (u32)(0x0u); }
L_004f887b:;
  /* 004f887b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f887c mov esi, dword ptr [edi + 0x7c] */ { const u32 m_ = (u32)(edi + 0x7cu); esi = (u32)(M32(m_)); }
  /* 004f887f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8881 mov dword ptr [edi + 0x3c], edx */ { const u32 m_ = (u32)(edi + 0x3cu); M32(m_) = (u32)(edx); }
  /* 004f8884 je 0x4f8894 */ if (ZF_) goto L_004f8894;
  /* 004f8886 mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f888b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f888d je 0x4f8894 */ if (ZF_) goto L_004f8894;
  /* 004f888f call 0x531380 */ esp -= 4; M32(esp) = 0x4f8894u; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4f888fu); RETCHK(0x4f8894u, 0x4f888fu); LOADALL;
L_004f8894:;
  /* 004f8894 mov dword ptr [edi + 0x7c], 0 */ { const u32 m_ = (u32)(edi + 0x7cu); M32(m_) = (u32)(0x0u); }
  /* 004f889b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_004f889c:;
  /* 004f889c mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f889e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f889f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f88a0(CPU *c) {
  NATIVE_HOOK(0x4f88a0u) REGS; LOADALL;
L_004f88a0:;
  /* 004f88a0 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004f88a2 mov eax, dword ptr [edx + 0x80] */ { const u32 m_ = (u32)(edx + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f88a8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f88aa je 0x4f88c8 */ if (ZF_) goto L_004f88c8;
  /* 004f88ac mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004f88b3 mov eax, dword ptr [edx + 0x80] */ { const u32 m_ = (u32)(edx + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f88b9 call 0x54ada0 */ esp -= 4; M32(esp) = 0x4f88beu; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4f88b9u); RETCHK(0x4f88beu, 0x4f88b9u); LOADALL;
  /* 004f88be mov dword ptr [edx + 0x80], 0 */ { const u32 m_ = (u32)(edx + 0x80u); M32(m_) = (u32)(0x0u); }
L_004f88c8:;
  /* 004f88c8 mov eax, dword ptr [edx + 0x84] */ { const u32 m_ = (u32)(edx + 0x84u); eax = (u32)(M32(m_)); }
  /* 004f88ce test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f88d0 je 0x4f88ee */ if (ZF_) goto L_004f88ee;
  /* 004f88d2 mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004f88d9 mov eax, dword ptr [edx + 0x84] */ { const u32 m_ = (u32)(edx + 0x84u); eax = (u32)(M32(m_)); }
  /* 004f88df call 0x54ada0 */ esp -= 4; M32(esp) = 0x4f88e4u; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4f88dfu); RETCHK(0x4f88e4u, 0x4f88dfu); LOADALL;
  /* 004f88e4 mov dword ptr [edx + 0x84], 0 */ { const u32 m_ = (u32)(edx + 0x84u); M32(m_) = (u32)(0x0u); }
L_004f88ee:;
  /* 004f88ee mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004f88f0 jmp 0x4f4330 */ SAVEALL; F_004f4330(c); return;
}

void F_004f8900(CPU *c) {
  NATIVE_HOOK(0x4f8900u) REGS; LOADALL;
L_004f8900:;
  /* 004f8900 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f8901 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f8903 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f8906 cmp dword ptr [ecx + 0x44], eax */ { const u32 m_ = (u32)(ecx + 0x44u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f8909 jne 0x4f8922 */ if (!ZF_) goto L_004f8922;
  /* 004f890b mov eax, dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f890e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8910 je 0x4f892e */ if (ZF_) goto L_004f892e;
  /* 004f8912 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f8915 jne 0x4f8935 */ if (!ZF_) goto L_004f8935;
  /* 004f8917 mov dword ptr [ecx + 0x3c], 0xb */ { const u32 m_ = (u32)(ecx + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f891e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f891f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f8922:;
  /* 004f8922 cmp dword ptr [ecx + 0x4c], eax */ { const u32 m_ = (u32)(ecx + 0x4cu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f8925 jne 0x4f8935 */ if (!ZF_) goto L_004f8935;
  /* 004f8927 mov eax, dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f892a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f892c je 0x4f8935 */ if (ZF_) goto L_004f8935;
L_004f892e:;
  /* 004f892e mov dword ptr [ecx + 0x3c], 0xb */ { const u32 m_ = (u32)(ecx + 0x3cu); M32(m_) = (u32)(0xbu); }
L_004f8935:;
  /* 004f8935 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f8936 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f8940(CPU *c) {
  NATIVE_HOOK(0x4f8940u) REGS; LOADALL;
L_004f8940:;
  /* 004f8940 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f8941 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f8943 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f8948u; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f8943u); RETCHK(0x4f8948u, 0x4f8943u); LOADALL;
  /* 004f8948 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f894a mov dword ptr [esi + 0x84], eax */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(eax); }
  /* 004f8950 mov dword ptr [esi + 0x88], eax */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(eax); }
  /* 004f8956 mov dword ptr [esi + 0x8c], eax */ { const u32 m_ = (u32)(esi + 0x8cu); M32(m_) = (u32)(eax); }
  /* 004f895c mov dword ptr [esi + 0x90], eax */ { const u32 m_ = (u32)(esi + 0x90u); M32(m_) = (u32)(eax); }
  /* 004f8962 mov dword ptr [esi], 0x64f858 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f858u); }
  /* 004f8968 mov dword ptr [esi + 0x40], 0x121eac00 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x121eac00u); }
  /* 004f896f mov byte ptr [esi + 0x50], 1 */ { const u32 m_ = (u32)(esi + 0x50u); M8(m_) = (u8)(0x1u); }
  /* 004f8973 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f8975 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f8976 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f8980(CPU *c) {
  NATIVE_HOOK(0x4f8980u) REGS; LOADALL;
L_004f8980:;
  /* 004f8980 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f8981 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f8983 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f8984 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f8986 call 0x4f89b0 */ esp -= 4; M32(esp) = 0x4f898bu; SAVEALL; F_004f89b0(c); ABI_CHECK(0x4f89b0u, 0x4f8986u); RETCHK(0x4f898bu, 0x4f8986u); LOADALL;
  /* 004f898b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f898f je 0x4f899a */ if (ZF_) goto L_004f899a;
  /* 004f8991 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f8992 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f8997u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f8992u); RETCHK(0x4f8997u, 0x4f8992u); LOADALL;
  /* 004f8997 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f899a:;
  /* 004f899a mov eax, esi */ { eax = (u32)(esi); }
  /* 004f899c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f899d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f899e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f89b0(CPU *c) {
  NATIVE_HOOK(0x4f89b0u) REGS; LOADALL;
L_004f89b0:;
  /* 004f89b0 mov dword ptr [ecx], 0x64f858 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64f858u); }
  /* 004f89b6 jmp 0x4f4220 */ SAVEALL; F_004f4220(c); return;
}

void F_004f89c0(CPU *c) {
  NATIVE_HOOK(0x4f89c0u) REGS; LOADALL;
L_004f89c0:;
  /* 004f89c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f89c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f89c3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f89c4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f89c6 push 0x121eac01 */ { u32 v_ = 0x121eac01u; esp -= 4; M32(esp) = v_; }
  /* 004f89cb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f89cd call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f89d2u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f89cdu); RETCHK(0x4f89d2u, 0x4f89cdu); LOADALL;
  /* 004f89d2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f89d3 call 0x4fb6a0 */ esp -= 4; M32(esp) = 0x4f89d8u; SAVEALL; F_004fb6a0(c); ABI_CHECK(0x4fb6a0u, 0x4f89d3u); RETCHK(0x4f89d8u, 0x4f89d3u); LOADALL;
  /* 004f89d8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f89da mov dword ptr [esi + 0x5c], eax */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(eax); }
  /* 004f89dd je 0x4f89f4 */ if (ZF_) goto L_004f89f4;
  /* 004f89df call 0x4f42e0 */ esp -= 4; M32(esp) = 0x4f89e4u; SAVEALL; F_004f42e0(c); ABI_CHECK(0x4f42e0u, 0x4f89dfu); RETCHK(0x4f89e4u, 0x4f89dfu); LOADALL;
  /* 004f89e4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f89e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f89e8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f89ea call 0x4f4240 */ esp -= 4; M32(esp) = 0x4f89efu; SAVEALL; F_004f4240(c); ABI_CHECK(0x4f4240u, 0x4f89eau); RETCHK(0x4f89efu, 0x4f89eau); LOADALL;
  /* 004f89ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f89f0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f89f1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f89f4:;
  /* 004f89f4 mov dword ptr [esi + 0x3c], 0xb */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f89fb mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f89fd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f89fe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f89ff ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f8a10(CPU *c) {
  NATIVE_HOOK(0x4f8a10u) REGS; LOADALL;
L_004f8a10:;
  /* 004f8a10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f8a11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f8a13 sub esp, 0x54 */ { u32 a_ = esp, b_ = 0x54u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f8a16 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f8a17 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f8a18 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f8a1b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f8a1c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 004f8a1e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f8a1f mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 004f8a22 call 0x4f42a0 */ esp -= 4; M32(esp) = 0x4f8a27u; SAVEALL; F_004f42a0(c); ABI_CHECK(0x4f42a0u, 0x4f8a22u); RETCHK(0x4f8a27u, 0x4f8a22u); LOADALL;
  /* 004f8a27 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f8a29 mov dword ptr [ebx + 0x84], eax */ { const u32 m_ = (u32)(ebx + 0x84u); M32(m_) = (u32)(eax); }
  /* 004f8a2f mov dword ptr [ebx + 0x88], eax */ { const u32 m_ = (u32)(ebx + 0x88u); M32(m_) = (u32)(eax); }
  /* 004f8a35 mov dword ptr [ebx + 0x58], 0x40800000 */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(0x40800000u); }
  /* 004f8a3c mov esi, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); esi = (u32)(M32(m_)); }
  /* 004f8a3f lea eax, [ebp - 0x54] */ eax = (u32)((u32)(ebp + 0xffffffacu));
  /* 004f8a42 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f8a43 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f8a44 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 004f8a47 call 0x5af080 */ esp -= 4; M32(esp) = 0x4f8a4cu; SAVEALL; F_005af080(c); ABI_CHECK(0x5af080u, 0x4f8a47u); RETCHK(0x4f8a4cu, 0x4f8a47u); LOADALL;
  /* 004f8a4c mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f8a4f fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004f8a51 lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 004f8a54 fsub dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f8a57 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f8a58 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 004f8a5b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f8a5c fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8a5f fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f8a62 fsub dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f8a65 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8a68 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f8a6b mov eax, edx */ { eax = (u32)(edx); }
  /* 004f8a6d fsub dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f8a70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f8a71 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8a74 call 0x5aac00 */ esp -= 4; M32(esp) = 0x4f8a79u; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x4f8a74u); RETCHK(0x4f8a79u, 0x4f8a74u); LOADALL;
  /* 004f8a79 mov ecx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004f8a7c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f8a7e mov edi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edi = (u32)(M32(m_)); }
  /* 004f8a81 mov esi, dword ptr [ebx + 0x70] */ { const u32 m_ = (u32)(ebx + 0x70u); esi = (u32)(M32(m_)); }
  /* 004f8a84 mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 004f8a87 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f8a8a mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f8a8d mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f8a90 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 004f8a93 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f8a96 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f8a9b rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f8a9d mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 004f8aa0 mov edx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f8aa3 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 004f8aa5 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004f8aa8 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004f8aab mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 004f8aae mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004f8ab1 mov edx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edx = (u32)(M32(m_)); }
  /* 004f8ab4 push 0x43340000 */ { u32 v_ = 0x43340000u; esp -= 4; M32(esp) = v_; }
  /* 004f8ab9 call 0x5467e0 */ esp -= 4; M32(esp) = 0x4f8abeu; SAVEALL; F_005467e0(c); ABI_CHECK(0x5467e0u, 0x4f8ab9u); RETCHK(0x4f8abeu, 0x4f8ab9u); LOADALL;
  /* 004f8abe mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 004f8ac1 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f8ac4 lea edi, [esi + 0x10] */ edi = (u32)((u32)(esi + 0x10u));
  /* 004f8ac7 mov ecx, 0x63f970 */ { ecx = (u32)(0x63f970u); }
  /* 004f8acc call 0x5469f0 */ esp -= 4; M32(esp) = 0x4f8ad1u; SAVEALL; F_005469f0(c); ABI_CHECK(0x5469f0u, 0x4f8accu); RETCHK(0x4f8ad1u, 0x4f8accu); LOADALL;
  /* 004f8ad1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8ad3 je 0x4f8ade */ if (ZF_) goto L_004f8ade;
  /* 004f8ad5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f8ad6 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f8adbu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f8ad6u); RETCHK(0x4f8adbu, 0x4f8ad6u); LOADALL;
  /* 004f8adb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f8ade:;
  /* 004f8ade mov ecx, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004f8ae1 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f8ae4 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 004f8ae7 fsub dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f8aea push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f8aec push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f8aee fstp dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8af4 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f8af9u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f8af4u); RETCHK(0x4f8af9u, 0x4f8af4u); LOADALL;
  /* 004f8af9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f8afa xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004f8afc mov eax, 0x121eac01 */ { eax = (u32)(0x121eac01u); }
  /* 004f8b01 call 0x4fb850 */ esp -= 4; M32(esp) = 0x4f8b06u; SAVEALL; F_004fb850(c); ABI_CHECK(0x4fb850u, 0x4f8b01u); RETCHK(0x4f8b06u, 0x4f8b01u); LOADALL;
  /* 004f8b06 mov edi, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); edi = (u32)(M32(m_)); }
  /* 004f8b09 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f8b0c mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004f8b0e call 0x544a10 */ esp -= 4; M32(esp) = 0x4f8b13u; SAVEALL; F_00544a10(c); ABI_CHECK(0x544a10u, 0x4f8b0eu); RETCHK(0x4f8b13u, 0x4f8b0eu); LOADALL;
  /* 004f8b13 mov esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); esi = (u32)(M32(m_)); }
  /* 004f8b16 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f8b19 mov edx, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); edx = (u32)(M32(m_)); }
  /* 004f8b1c mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 004f8b1e lea eax, [esi + 0x20] */ eax = (u32)((u32)(esi + 0x20u));
  /* 004f8b21 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f8b23 mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 004f8b25 mov edi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (u32)(M32(m_)); }
  /* 004f8b28 mov dword ptr [ecx + 4], edi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edi); }
  /* 004f8b2b mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004f8b2e mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 004f8b31 mov ecx, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); ecx = (u32)(M32(m_)); }
  /* 004f8b37 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8b39 mov edx, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f8b3c je 0x4f8b5f */ if (ZF_) goto L_004f8b5f;
  /* 004f8b3e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f8b3f push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f8b44 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f8b46 push 0x64f8b8 */ { u32 v_ = 0x64f8b8u; esp -= 4; M32(esp) = v_; }
  /* 004f8b4b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f8b4c call 0x531340 */ esp -= 4; M32(esp) = 0x4f8b51u; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f8b4cu); RETCHK(0x4f8b51u, 0x4f8b4cu); LOADALL;
  /* 004f8b51 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f8b52 mov dword ptr [esi + 0x7c], eax */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 004f8b55 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f8b56 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f8b58 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f8b59 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f8b5b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f8b5c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f8b5f:;
  /* 004f8b5f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f8b61 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f8b62 mov dword ptr [esi + 0x7c], eax */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 004f8b65 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f8b66 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f8b68 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f8b69 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f8b6b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f8b6c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f8b70(CPU *c) {
  NATIVE_HOOK(0x4f8b70u) REGS; LOADALL;
L_004f8b70:;
  /* 004f8b70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f8b71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f8b73 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f8b74 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f8b75 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004f8b78 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f8b7a mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004f8b7c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f8b7d call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f8b80u; SAVEALL; call_ind(c, t_); RETCHK(0x4f8b80u, 0x4f8b7du); LOADALL; }
  /* 004f8b80 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f8b83 mov dword ptr [esi + 0x4c], ecx */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(ecx); }
  /* 004f8b86 mov edx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); edx = (u32)(M32(m_)); }
  /* 004f8b89 mov dword ptr [esi + 0x84], edx */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(edx); }
  /* 004f8b8f mov eax, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); eax = (u32)(M32(m_)); }
  /* 004f8b92 mov dword ptr [esi + 0x88], eax */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(eax); }
  /* 004f8b98 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f8b99 mov dword ptr [esi + 0x54], 0x7f7fffff */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 004f8ba0 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f8ba2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f8ba3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f8ba4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f8bb0(CPU *c) {
  NATIVE_HOOK(0x4f8bb0u) REGS; LOADALL;
L_004f8bb0:;
  /* 004f8bb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f8bb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f8bb3 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f8bb6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f8bb7 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 004f8bb9 fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f8bbc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f8bbd fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f8bc0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f8bc1 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004f8bc4 mov dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x0u); }
  /* 004f8bcb fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8bce mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f8bd1 fld dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); FPUSH((double)MF32(m_)); }
  /* 004f8bd4 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f8bd7 mov dword ptr [ebx + 0x58], eax */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(eax); }
  /* 004f8bda mov eax, dword ptr [ebx + 0x3c] */ { const u32 m_ = (u32)(ebx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f8bdd cmp eax, 0xa */ { u32 a_ = eax, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f8be0 fstp dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8be3 ja 0x4f8df0 */ if (!(CF_|ZF_)) goto L_004f8df0;
  /* 004f8be9 movzx ecx, byte ptr [eax + 0x4f8f98] */ { const u32 m_ = (u32)(eax + 0x4f8f98u); ecx = (u32)(M8(m_)); }
  /* 004f8bf0 jmp dword ptr [ecx*4 + 0x4f8f80] */ { const u32 m_ = (u32)(ecx * 4u + 0x4f8f80u); u32 t_ = M32(m_); switch (t_) { case 0x4f8bf7u: goto L_004f8bf7; case 0x4f8c17u: goto L_004f8c17; case 0x4f8df0u: goto L_004f8df0; case 0x4f8dfbu: goto L_004f8dfb; case 0x4f8e03u: goto L_004f8e03; case 0x4f8e65u: goto L_004f8e65; default: SAVEALL; call_ind(c, t_); return; } }
L_004f8bf7:;
  /* 004f8bf7 mov edx, dword ptr [ebx + 0x78] */ { const u32 m_ = (u32)(ebx + 0x78u); edx = (u32)(M32(m_)); }
  /* 004f8bfa push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f8bfb call 0x5abd50 */ esp -= 4; M32(esp) = 0x4f8c00u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4f8bfbu); RETCHK(0x4f8c00u, 0x4f8bfbu); LOADALL;
  /* 004f8c00 mov edi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edi = (u32)(M32(m_)); }
  /* 004f8c03 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f8c06 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f8c09 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f8c0e mov esi, eax */ { esi = (u32)(eax); }
  /* 004f8c10 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f8c12 jmp 0x4f8f43 */ goto L_004f8f43;
L_004f8c17:;
  /* 004f8c17 mov edi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edi = (u32)(M32(m_)); }
  /* 004f8c1a fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f8c1d fmul dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8c23 mov esi, dword ptr [ebx + 0x70] */ { const u32 m_ = (u32)(ebx + 0x70u); esi = (u32)(M32(m_)); }
  /* 004f8c26 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f8c29 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f8c2e rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f8c30 fadd dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8c36 fst dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); MF32(m_) = (float)ST(0); }
  /* 004f8c3c mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f8c3f push 0x43340000 */ { u32 v_ = 0x43340000u; esp -= 4; M32(esp) = v_; }
  /* 004f8c44 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8c47 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8c4a mov ecx, dword ptr [ebx + 0x74] */ { const u32 m_ = (u32)(ebx + 0x74u); ecx = (u32)(M32(m_)); }
  /* 004f8c4d mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f8c4f lea eax, [ebx + 0x20] */ eax = (u32)((u32)(ebx + 0x20u));
  /* 004f8c52 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 004f8c54 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f8c57 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004f8c5a mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f8c5d mov edx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edx = (u32)(M32(m_)); }
  /* 004f8c60 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004f8c63 fld dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 004f8c66 fadd dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8c6c fstp dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8c6f call 0x5467e0 */ esp -= 4; M32(esp) = 0x4f8c74u; SAVEALL; F_005467e0(c); ABI_CHECK(0x5467e0u, 0x4f8c6fu); RETCHK(0x4f8c74u, 0x4f8c6fu); LOADALL;
  /* 004f8c74 mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 004f8c77 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f8c7a lea edi, [esi + 0x10] */ edi = (u32)((u32)(esi + 0x10u));
  /* 004f8c7d mov ecx, 0x63f970 */ { ecx = (u32)(0x63f970u); }
  /* 004f8c82 call 0x5469f0 */ esp -= 4; M32(esp) = 0x4f8c87u; SAVEALL; F_005469f0(c); ABI_CHECK(0x5469f0u, 0x4f8c82u); RETCHK(0x4f8c87u, 0x4f8c82u); LOADALL;
  /* 004f8c87 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8c89 je 0x4f8c94 */ if (ZF_) goto L_004f8c94;
  /* 004f8c8b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f8c8c call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f8c91u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f8c8cu); RETCHK(0x4f8c91u, 0x4f8c8cu); LOADALL;
  /* 004f8c91 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f8c94:;
  /* 004f8c94 fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004f8c97 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f8c9d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f8c9f test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f8ca2 jp 0x4f8f43 */ if (PF_) goto L_004f8f43;
  /* 004f8ca8 mov esi, dword ptr [ebx + 0x7c] */ { const u32 m_ = (u32)(ebx + 0x7cu); esi = (u32)(M32(m_)); }
  /* 004f8cab test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8cad je 0x4f8cbd */ if (ZF_) goto L_004f8cbd;
  /* 004f8caf mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f8cb4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8cb6 je 0x4f8cbd */ if (ZF_) goto L_004f8cbd;
  /* 004f8cb8 call 0x531380 */ esp -= 4; M32(esp) = 0x4f8cbdu; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4f8cb8u); RETCHK(0x4f8cbdu, 0x4f8cb8u); LOADALL;
L_004f8cbd:;
  /* 004f8cbd mov eax, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); eax = (u32)(M32(m_)); }
  /* 004f8cc3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8cc5 mov dword ptr [ebx + 0x7c], 0 */ { const u32 m_ = (u32)(ebx + 0x7cu); M32(m_) = (u32)(0x0u); }
  /* 004f8ccc je 0x4f8f3c */ if (ZF_) goto L_004f8f3c;
  /* 004f8cd2 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 004f8cd4 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f8cd6 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f8cd9u; SAVEALL; call_ind(c, t_); RETCHK(0x4f8cd9u, 0x4f8cd6u); LOADALL; }
  /* 004f8cd9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f8cdb push 0x121eac00 */ { u32 v_ = 0x121eac00u; esp -= 4; M32(esp) = v_; }
  /* 004f8ce0 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f8ce5u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f8ce0u); RETCHK(0x4f8ce5u, 0x4f8ce0u); LOADALL;
  /* 004f8ce5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f8ce6 call 0x4fb6a0 */ esp -= 4; M32(esp) = 0x4f8cebu; SAVEALL; F_004fb6a0(c); ABI_CHECK(0x4fb6a0u, 0x4f8ce6u); RETCHK(0x4f8cebu, 0x4f8ce6u); LOADALL;
  /* 004f8ceb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8ced mov dword ptr [ebx + 0x5c], eax */ { const u32 m_ = (u32)(ebx + 0x5cu); M32(m_) = (u32)(eax); }
  /* 004f8cf0 je 0x4f8de9 */ if (ZF_) goto L_004f8de9;
  /* 004f8cf6 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004f8cf8 call 0x4f42e0 */ esp -= 4; M32(esp) = 0x4f8cfdu; SAVEALL; F_004f42e0(c); ABI_CHECK(0x4f42e0u, 0x4f8cf8u); RETCHK(0x4f8cfdu, 0x4f8cf8u); LOADALL;
  /* 004f8cfd mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 004f8d00 mov edx, dword ptr [0x7a6ca4] */ { const u32 m_ = (u32)(0x7a6ca4u); edx = (u32)(M32(m_)); }
  /* 004f8d06 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004f8d08 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f8d09 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f8d0cu; SAVEALL; call_ind(c, t_); RETCHK(0x4f8d0cu, 0x4f8d09u); LOADALL; }
  /* 004f8d0c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f8d0e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f8d10 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f8d15u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f8d10u); RETCHK(0x4f8d15u, 0x4f8d10u); LOADALL;
  /* 004f8d15 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f8d16 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004f8d18 mov eax, 0x121eac00 */ { eax = (u32)(0x121eac00u); }
  /* 004f8d1d call 0x4fb850 */ esp -= 4; M32(esp) = 0x4f8d22u; SAVEALL; F_004fb850(c); ABI_CHECK(0x4fb850u, 0x4f8d1du); RETCHK(0x4f8d22u, 0x4f8d1du); LOADALL;
  /* 004f8d22 mov edi, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); edi = (u32)(M32(m_)); }
  /* 004f8d25 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f8d28 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004f8d2a call 0x544a10 */ esp -= 4; M32(esp) = 0x4f8d2fu; SAVEALL; F_00544a10(c); ABI_CHECK(0x544a10u, 0x4f8d2au); RETCHK(0x4f8d2fu, 0x4f8d2au); LOADALL;
  /* 004f8d2f mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 004f8d32 mov eax, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); eax = (u32)(M32(m_)); }
  /* 004f8d35 mov esi, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); esi = (u32)(M32(m_)); }
  /* 004f8d3b add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f8d3e mov edi, eax */ { edi = (u32)(eax); }
  /* 004f8d40 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f8d45 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f8d47 fld dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); FPUSH((double)MF32(m_)); }
  /* 004f8d4a fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8d50 push 0x43340000 */ { u32 v_ = 0x43340000u; esp -= 4; M32(esp) = v_; }
  /* 004f8d55 fadd dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8d58 fstp dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8d5b fld dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004f8d5e fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8d64 fadd dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8d67 fstp dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8d6a fld dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); FPUSH((double)MF32(m_)); }
  /* 004f8d6d fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8d73 fadd dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8d76 fstp dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8d79 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f8d7c fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004f8d7f fadd dword ptr [0x65704c] */ { const u32 m_ = (u32)(0x65704cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8d85 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8d88 mov edx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edx = (u32)(M32(m_)); }
  /* 004f8d8b call 0x5467e0 */ esp -= 4; M32(esp) = 0x4f8d90u; SAVEALL; F_005467e0(c); ABI_CHECK(0x5467e0u, 0x4f8d8bu); RETCHK(0x4f8d90u, 0x4f8d8bu); LOADALL;
  /* 004f8d90 mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 004f8d93 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f8d96 mov ecx, 0x63f970 */ { ecx = (u32)(0x63f970u); }
  /* 004f8d9b call 0x4eea10 */ esp -= 4; M32(esp) = 0x4f8da0u; SAVEALL; F_004eea10(c); ABI_CHECK(0x4eea10u, 0x4f8d9bu); RETCHK(0x4f8da0u, 0x4f8d9bu); LOADALL;
  /* 004f8da0 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004f8da3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8da5 jle 0x4f8dc9 */ if ((ZF_|LT_)) goto L_004f8dc9;
  /* 004f8da7 mov eax, dword ptr [ebx + 0x4c] */ { const u32 m_ = (u32)(ebx + 0x4cu); eax = (u32)(M32(m_)); }
  /* 004f8daa mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 004f8dad lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_004f8db0:;
  /* 004f8db0 mov esi, dword ptr [edx + ecx*4 - 4] */ { const u32 m_ = (u32)(edx + ecx * 4u + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 004f8db4 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f8db5 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f8db7 je 0x4f8dbf */ if (ZF_) goto L_004f8dbf;
  /* 004f8db9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8dbb jg 0x4f8db0 */ if (!(ZF_|LT_)) goto L_004f8db0;
  /* 004f8dbd jmp 0x4f8dc9 */ goto L_004f8dc9;
L_004f8dbf:;
  /* 004f8dbf mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004f8dc4 shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f8dc6 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_004f8dc9:;
  /* 004f8dc9 mov dword ptr [ebx + 0x58], 0x40800000 */ { const u32 m_ = (u32)(ebx + 0x58u); M32(m_) = (u32)(0x40800000u); }
  /* 004f8dd0 mov dword ptr [ebx + 0x3c], 8 */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0x8u); }
  /* 004f8dd7 mov dword ptr [ebx + 0x8c], 0 */ { const u32 m_ = (u32)(ebx + 0x8cu); M32(m_) = (u32)(0x0u); }
  /* 004f8de1 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 004f8de4 jmp 0x4f8f43 */ goto L_004f8f43;
L_004f8de9:;
  /* 004f8de9 mov dword ptr [ebx + 0x3c], 0xb */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0xbu); }
L_004f8df0:;
  /* 004f8df0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f8df1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f8df2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f8df4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f8df5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f8df7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f8df8 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f8dfb:;
  /* 004f8dfb fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 004f8dfe jmp 0x4f8f2f */ goto L_004f8f2f;
L_004f8e03:;
  /* 004f8e03 mov eax, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); eax = (u32)(M32(m_)); }
  /* 004f8e06 mov esi, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); esi = (u32)(M32(m_)); }
  /* 004f8e0c add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f8e0f mov edi, eax */ { edi = (u32)(eax); }
  /* 004f8e11 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f8e16 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f8e18 fld dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); FPUSH((double)MF32(m_)); }
  /* 004f8e1b fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8e21 mov dword ptr [ebp + 0x14], eax */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(eax); }
  /* 004f8e24 fadd dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8e27 fstp dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8e2a fld dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004f8e2d fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8e33 fadd dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8e36 fstp dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8e39 fld dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); FPUSH((double)MF32(m_)); }
  /* 004f8e3c fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8e42 fadd dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8e45 fstp dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8e48 mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f8e4b fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004f8e4e fmul dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8e54 fadd dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8e5a fst dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); MF32(m_) = (float)ST(0); }
  /* 004f8e60 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8e63 jmp 0x4f8eb0 */ goto L_004f8eb0;
L_004f8e65:;
  /* 004f8e65 mov eax, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); eax = (u32)(M32(m_)); }
  /* 004f8e68 mov esi, dword ptr [ebx + 0x84] */ { const u32 m_ = (u32)(ebx + 0x84u); esi = (u32)(M32(m_)); }
  /* 004f8e6e add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f8e71 mov edi, eax */ { edi = (u32)(eax); }
  /* 004f8e73 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f8e78 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f8e7a fld dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); FPUSH((double)MF32(m_)); }
  /* 004f8e7d fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8e83 mov dword ptr [ebp + 0x14], eax */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(eax); }
  /* 004f8e86 fadd dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8e89 fstp dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8e8c fld dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004f8e8f fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8e95 fadd dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8e98 fstp dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8e9b fld dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); FPUSH((double)MF32(m_)); }
  /* 004f8e9e fmul dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004f8ea4 fadd dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8ea7 fstp dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8eaa mov eax, dword ptr [ebx + 0x68] */ { const u32 m_ = (u32)(ebx + 0x68u); eax = (u32)(M32(m_)); }
  /* 004f8ead fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
L_004f8eb0:;
  /* 004f8eb0 fadd dword ptr [0x65704c] */ { const u32 m_ = (u32)(0x65704cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004f8eb6 push 0x43340000 */ { u32 v_ = 0x43340000u; esp -= 4; M32(esp) = v_; }
  /* 004f8ebb fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f8ebe mov edx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edx = (u32)(M32(m_)); }
  /* 004f8ec1 call 0x5467e0 */ esp -= 4; M32(esp) = 0x4f8ec6u; SAVEALL; F_005467e0(c); ABI_CHECK(0x5467e0u, 0x4f8ec1u); RETCHK(0x4f8ec6u, 0x4f8ec1u); LOADALL;
  /* 004f8ec6 mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 004f8ec9 lea edi, [esi + 0x10] */ edi = (u32)((u32)(esi + 0x10u));
  /* 004f8ecc mov ecx, 0x63f970 */ { ecx = (u32)(0x63f970u); }
  /* 004f8ed1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f8ed4 call 0x5469f0 */ esp -= 4; M32(esp) = 0x4f8ed9u; SAVEALL; F_005469f0(c); ABI_CHECK(0x5469f0u, 0x4f8ed4u); RETCHK(0x4f8ed9u, 0x4f8ed4u); LOADALL;
  /* 004f8ed9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8edb je 0x4f8ee6 */ if (ZF_) goto L_004f8ee6;
  /* 004f8edd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f8ede call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f8ee3u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f8edeu); RETCHK(0x4f8ee3u, 0x4f8edeu); LOADALL;
  /* 004f8ee3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f8ee6:;
  /* 004f8ee6 mov ecx, dword ptr [ebx + 0x88] */ { const u32 m_ = (u32)(ebx + 0x88u); ecx = (u32)(M32(m_)); }
  /* 004f8eec mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004f8eee lea eax, [ebx + 0x20] */ eax = (u32)((u32)(ebx + 0x20u));
  /* 004f8ef1 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 004f8ef3 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f8ef6 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004f8ef9 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f8efc mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004f8eff mov eax, dword ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); eax = (u32)(M32(m_)); }
  /* 004f8f05 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8f07 je 0x4f8f2c */ if (ZF_) goto L_004f8f2c;
  /* 004f8f09 mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004f8f0c mov esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); esi = (u32)(M32(m_)); }
  /* 004f8f0f add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f8f12 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f8f17 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f8f19 mov edx, dword ptr [ebx + 0x8c] */ { const u32 m_ = (u32)(ebx + 0x8cu); edx = (u32)(M32(m_)); }
  /* 004f8f1f mov esi, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); esi = (u32)(M32(m_)); }
  /* 004f8f22 mov ecx, 0x63f970 */ { ecx = (u32)(0x63f970u); }
  /* 004f8f27 call 0x4eea10 */ esp -= 4; M32(esp) = 0x4f8f2cu; SAVEALL; F_004eea10(c); ABI_CHECK(0x4eea10u, 0x4f8f27u); RETCHK(0x4f8f2cu, 0x4f8f27u); LOADALL;
L_004f8f2c:;
  /* 004f8f2c fld dword ptr [ebx + 0x58] */ { const u32 m_ = (u32)(ebx + 0x58u); FPUSH((double)MF32(m_)); }
L_004f8f2f:;
  /* 004f8f2f fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004f8f35 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004f8f37 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f8f3a jp 0x4f8f43 */ if (PF_) goto L_004f8f43;
L_004f8f3c:;
  /* 004f8f3c mov dword ptr [ebx + 0x3c], 0xb */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0xbu); }
L_004f8f43:;
  /* 004f8f43 mov eax, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); eax = (u32)(M32(m_)); }
  /* 004f8f46 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8f48 je 0x4f8f5f */ if (ZF_) goto L_004f8f5f;
  /* 004f8f4a add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f8f4d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f8f4e call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4f8f53u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4f8f4eu); RETCHK(0x4f8f53u, 0x4f8f4eu); LOADALL;
  /* 004f8f53 mov eax, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); eax = (u32)(M32(m_)); }
  /* 004f8f56 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f8f57 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f8f5cu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f8f57u); RETCHK(0x4f8f5cu, 0x4f8f57u); LOADALL;
  /* 004f8f5c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f8f5f:;
  /* 004f8f5f mov ebx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ebx = (u32)(M32(m_)); }
  /* 004f8f62 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8f64 je 0x4f8f71 */ if (ZF_) goto L_004f8f71;
  /* 004f8f66 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f8f69 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 004f8f6b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f8f6c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004f8f6e call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f8f71u; SAVEALL; call_ind(c, t_); RETCHK(0x4f8f71u, 0x4f8f6eu); LOADALL; }
L_004f8f71:;
  /* 004f8f71 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 004f8f74 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f8f75 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f8f76 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f8f77 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f8f79 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f8f7a ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_004f8fb0(CPU *c) {
  NATIVE_HOOK(0x4f8fb0u) REGS; LOADALL;
L_004f8fb0:;
  /* 004f8fb0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f8fb1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f8fb3 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f8fb8u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f8fb3u); RETCHK(0x4f8fb8u, 0x4f8fb3u); LOADALL;
  /* 004f8fb8 mov ecx, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); ecx = (u32)(M32(m_)); }
  /* 004f8fbb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f8fbd add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f8fc0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f8fc1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f8fc2 mov edx, 0x121eac00 */ { edx = (u32)(0x121eac00u); }
  /* 004f8fc7 call 0x4fbd30 */ esp -= 4; M32(esp) = 0x4f8fccu; SAVEALL; F_004fbd30(c); ABI_CHECK(0x4fbd30u, 0x4f8fc7u); RETCHK(0x4f8fccu, 0x4f8fc7u); LOADALL;
  /* 004f8fcc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f8fce mov dword ptr [esi + 0x8c], eax */ { const u32 m_ = (u32)(esi + 0x8cu); M32(m_) = (u32)(eax); }
  /* 004f8fd4 je 0x4f9033 */ if (ZF_) goto L_004f9033;
  /* 004f8fd6 mov dword ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x1u); }
  /* 004f8fdd mov edx, dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); edx = (u32)(M32(m_)); }
  /* 004f8fe3 mov dword ptr [edx + 0x38], 0 */ { const u32 m_ = (u32)(edx + 0x38u); M32(m_) = (u32)(0x0u); }
  /* 004f8fea mov ecx, dword ptr [esi + 0x88] */ { const u32 m_ = (u32)(esi + 0x88u); ecx = (u32)(M32(m_)); }
  /* 004f8ff0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f8ff1 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 004f8ff3 lea eax, [esi + 0x20] */ eax = (u32)((u32)(esi + 0x20u));
  /* 004f8ff6 mov edx, eax */ { edx = (u32)(eax); }
  /* 004f8ff8 mov dword ptr [edx], edi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(edi); }
  /* 004f8ffa mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 004f8ffd mov dword ptr [edx + 4], edi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(edi); }
  /* 004f9000 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f9003 mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004f9006 mov ecx, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); ecx = (u32)(M32(m_)); }
  /* 004f900c test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f900e mov edx, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f9011 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f9012 je 0x4f902e */ if (ZF_) goto L_004f902e;
  /* 004f9014 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9015 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f901a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f901c push 0x64f8ac */ { u32 v_ = 0x64f8acu; esp -= 4; M32(esp) = v_; }
  /* 004f9021 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f9022 call 0x531340 */ esp -= 4; M32(esp) = 0x4f9027u; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f9022u); RETCHK(0x4f9027u, 0x4f9022u); LOADALL;
  /* 004f9027 mov dword ptr [esi + 0x7c], eax */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 004f902a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f902b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f902e:;
  /* 004f902e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f9030 mov dword ptr [esi + 0x7c], eax */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(eax); }
L_004f9033:;
  /* 004f9033 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f9034 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f9040(CPU *c) {
  NATIVE_HOOK(0x4f9040u) REGS; LOADALL;
L_004f9040:;
  /* 004f9040 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f9041 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004f9043 mov eax, dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f9046 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9049 je 0x4f9054 */ if (ZF_) goto L_004f9054;
  /* 004f904b cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f904e jne 0x4f9101 */ if (!ZF_) goto L_004f9101;
L_004f9054:;
  /* 004f9054 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f9055 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f9056 mov esi, dword ptr [edi + 0x7c] */ { const u32 m_ = (u32)(edi + 0x7cu); esi = (u32)(M32(m_)); }
  /* 004f9059 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004f905b cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f905d mov dword ptr [edi + 0x80], ebx */ { const u32 m_ = (u32)(edi + 0x80u); M32(m_) = (u32)(ebx); }
  /* 004f9063 mov dword ptr [edi + 0x3c], 0xa */ { const u32 m_ = (u32)(edi + 0x3cu); M32(m_) = (u32)(0xau); }
  /* 004f906a mov dword ptr [edi + 0x58], 0x3f800000 */ { const u32 m_ = (u32)(edi + 0x58u); M32(m_) = (u32)(0x3f800000u); }
  /* 004f9071 je 0x4f9080 */ if (ZF_) goto L_004f9080;
  /* 004f9073 cmp dword ptr [0x7a6cd8], ebx */ { const u32 m_ = (u32)(0x7a6cd8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9079 je 0x4f9080 */ if (ZF_) goto L_004f9080;
  /* 004f907b call 0x531380 */ esp -= 4; M32(esp) = 0x4f9080u; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4f907bu); RETCHK(0x4f9080u, 0x4f907bu); LOADALL;
L_004f9080:;
  /* 004f9080 mov dword ptr [edi + 0x7c], ebx */ { const u32 m_ = (u32)(edi + 0x7cu); M32(m_) = (u32)(ebx); }
  /* 004f9083 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f9088u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f9083u); RETCHK(0x4f9088u, 0x4f9083u); LOADALL;
  /* 004f9088 mov ecx, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); ecx = (u32)(M32(m_)); }
  /* 004f908b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f908c add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f908f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f9090 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9091 mov edx, 0x121eac02 */ { edx = (u32)(0x121eac02u); }
  /* 004f9096 call 0x4fbd30 */ esp -= 4; M32(esp) = 0x4f909bu; SAVEALL; F_004fbd30(c); ABI_CHECK(0x4fbd30u, 0x4f9096u); RETCHK(0x4f909bu, 0x4f9096u); LOADALL;
  /* 004f909b cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f909d mov dword ptr [edi + 0x90], eax */ { const u32 m_ = (u32)(edi + 0x90u); M32(m_) = (u32)(eax); }
  /* 004f90a3 je 0x4f90f7 */ if (ZF_) goto L_004f90f7;
  /* 004f90a5 mov esi, dword ptr [edi + 0x7c] */ { const u32 m_ = (u32)(edi + 0x7cu); esi = (u32)(M32(m_)); }
  /* 004f90a8 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f90aa je 0x4f90b9 */ if (ZF_) goto L_004f90b9;
  /* 004f90ac cmp dword ptr [0x7a6cd8], ebx */ { const u32 m_ = (u32)(0x7a6cd8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f90b2 je 0x4f90b9 */ if (ZF_) goto L_004f90b9;
  /* 004f90b4 call 0x531380 */ esp -= 4; M32(esp) = 0x4f90b9u; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4f90b4u); RETCHK(0x4f90b9u, 0x4f90b4u); LOADALL;
L_004f90b9:;
  /* 004f90b9 mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f90be cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f90c0 mov edx, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f90c3 mov dword ptr [edi + 0x7c], ebx */ { const u32 m_ = (u32)(edi + 0x7cu); M32(m_) = (u32)(ebx); }
  /* 004f90c6 je 0x4f90dc */ if (ZF_) goto L_004f90dc;
  /* 004f90c8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f90c9 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f90ce push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f90cf push 0x64f898 */ { u32 v_ = 0x64f898u; esp -= 4; M32(esp) = v_; }
  /* 004f90d4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f90d5 call 0x531340 */ esp -= 4; M32(esp) = 0x4f90dau; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f90d5u); RETCHK(0x4f90dau, 0x4f90d5u); LOADALL;
  /* 004f90da jmp 0x4f90de */ goto L_004f90de;
L_004f90dc:;
  /* 004f90dc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004f90de:;
  /* 004f90de mov edx, dword ptr [edi + 0x90] */ { const u32 m_ = (u32)(edi + 0x90u); edx = (u32)(M32(m_)); }
  /* 004f90e4 mov dword ptr [edi + 0x7c], eax */ { const u32 m_ = (u32)(edi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 004f90e7 mov dword ptr [edx + 0x34], ebx */ { const u32 m_ = (u32)(edx + 0x34u); M32(m_) = (u32)(ebx); }
  /* 004f90ea mov eax, dword ptr [edi + 0x90] */ { const u32 m_ = (u32)(edi + 0x90u); eax = (u32)(M32(m_)); }
  /* 004f90f0 mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
L_004f90f7:;
  /* 004f90f7 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004f90f9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f90fa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f90fb mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f90fd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f90fe jmp dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_004f9101:;
  /* 004f9101 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f9102 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f9110(CPU *c) {
  NATIVE_HOOK(0x4f9110u) REGS; LOADALL;
L_004f9110:;
  /* 004f9110 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f9111 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f9113 mov eax, dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); eax = (u32)(M32(m_)); }
  /* 004f9119 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004f911b cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f911d je 0x4f9140 */ if (ZF_) goto L_004f9140;
  /* 004f911f mov dword ptr [eax + 0x34], edx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(edx); }
  /* 004f9122 mov eax, dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); eax = (u32)(M32(m_)); }
  /* 004f9128 mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004f912f mov eax, dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); eax = (u32)(M32(m_)); }
  /* 004f9135 call 0x54ada0 */ esp -= 4; M32(esp) = 0x4f913au; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4f9135u); RETCHK(0x4f913au, 0x4f9135u); LOADALL;
  /* 004f913a mov dword ptr [esi + 0x8c], edx */ { const u32 m_ = (u32)(esi + 0x8cu); M32(m_) = (u32)(edx); }
L_004f9140:;
  /* 004f9140 mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f9145 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9147 je 0x4f915e */ if (ZF_) goto L_004f915e;
  /* 004f9149 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f914a push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f914f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f9150 mov edx, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); edx = (u32)(M32(m_)); }
  /* 004f9153 push 0x64f888 */ { u32 v_ = 0x64f888u; esp -= 4; M32(esp) = v_; }
  /* 004f9158 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9159 call 0x531340 */ esp -= 4; M32(esp) = 0x4f915eu; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f9159u); RETCHK(0x4f915eu, 0x4f9159u); LOADALL;
L_004f915e:;
  /* 004f915e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004f9160 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f9161 jmp 0x4f4330 */ SAVEALL; F_004f4330(c); return;
}

void F_004f9170(CPU *c) {
  NATIVE_HOOK(0x4f9170u) REGS; LOADALL;
L_004f9170:;
  /* 004f9170 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f9171 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f9173 call 0x4f4190 */ esp -= 4; M32(esp) = 0x4f9178u; SAVEALL; F_004f4190(c); ABI_CHECK(0x4f4190u, 0x4f9173u); RETCHK(0x4f9178u, 0x4f9173u); LOADALL;
  /* 004f9178 mov dword ptr [esi], 0x64f8c4 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f8c4u); }
  /* 004f917e mov dword ptr [esi + 0x40], 0x12b74280 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x12b74280u); }
  /* 004f9185 mov dword ptr [esi + 0x80], 0 */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(0x0u); }
  /* 004f918f mov eax, esi */ { eax = (u32)(esi); }
  /* 004f9191 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f9192 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f91a0(CPU *c) {
  NATIVE_HOOK(0x4f91a0u) REGS; LOADALL;
L_004f91a0:;
  /* 004f91a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f91a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f91a3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f91a4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f91a6 call 0x4f91d0 */ esp -= 4; M32(esp) = 0x4f91abu; SAVEALL; F_004f91d0(c); ABI_CHECK(0x4f91d0u, 0x4f91a6u); RETCHK(0x4f91abu, 0x4f91a6u); LOADALL;
  /* 004f91ab test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f91af je 0x4f91ba */ if (ZF_) goto L_004f91ba;
  /* 004f91b1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f91b2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f91b7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f91b2u); RETCHK(0x4f91b7u, 0x4f91b2u); LOADALL;
  /* 004f91b7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f91ba:;
  /* 004f91ba mov eax, esi */ { eax = (u32)(esi); }
  /* 004f91bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f91bd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f91be ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f91d0(CPU *c) {
  NATIVE_HOOK(0x4f91d0u) REGS; LOADALL;
L_004f91d0:;
  /* 004f91d0 mov dword ptr [ecx], 0x64f8c4 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64f8c4u); }
  /* 004f91d6 jmp 0x4f4220 */ SAVEALL; F_004f4220(c); return;
}

void F_004f91e0(CPU *c) {
  NATIVE_HOOK(0x4f91e0u) REGS; LOADALL;
L_004f91e0:;
  /* 004f91e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f91e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f91e3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f91e6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f91e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f91e8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f91ea call 0x4f4240 */ esp -= 4; M32(esp) = 0x4f91efu; SAVEALL; F_004f4240(c); ABI_CHECK(0x4f4240u, 0x4f91eau); RETCHK(0x4f91efu, 0x4f91eau); LOADALL;
  /* 004f91ef mov dword ptr [esi + 0x54], 0x3fcccccd */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x3fcccccdu); }
  /* 004f91f6 mov dword ptr [esi + 0x3c], 0 */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0x0u); }
  /* 004f91fd mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f91ff pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f9200 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f9201 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f9210(CPU *c) {
  NATIVE_HOOK(0x4f9210u) REGS; LOADALL;
L_004f9210:;
  /* 004f9210 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f9211 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f9213 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f9214 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f9216 mov dword ptr [esi + 0x3c], 2 */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0x2u); }
  /* 004f921d call 0x4fb430 */ esp -= 4; M32(esp) = 0x4f9222u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4f921du); RETCHK(0x4f9222u, 0x4f921du); LOADALL;
  /* 004f9222 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f9224 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f9226 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9227 mov edx, 0x12b74280 */ { edx = (u32)(0x12b74280u); }
  /* 004f922c call 0x4fbd30 */ esp -= 4; M32(esp) = 0x4f9231u; SAVEALL; F_004fbd30(c); ABI_CHECK(0x4fbd30u, 0x4f922cu); RETCHK(0x4f9231u, 0x4f922cu); LOADALL;
  /* 004f9231 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f9233 mov dword ptr [esi + 0x80], eax */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(eax); }
  /* 004f9239 je 0x4f928c */ if (ZF_) goto L_004f928c;
  /* 004f923b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f923e mov eax, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f9241 lea edx, [eax + 0x30] */ edx = (u32)((u32)(eax + 0x30u));
  /* 004f9244 mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f9249 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f924b mov dword ptr [esi + 0x68], edx */ { const u32 m_ = (u32)(esi + 0x68u); M32(m_) = (u32)(edx); }
  /* 004f924e je 0x4f9266 */ if (ZF_) goto L_004f9266;
  /* 004f9250 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f9252 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 004f9257 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f9259 push 0x64f8f4 */ { u32 v_ = 0x64f8f4u; esp -= 4; M32(esp) = v_; }
  /* 004f925e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f925f call 0x531340 */ esp -= 4; M32(esp) = 0x4f9264u; SAVEALL; F_00531340(c); ABI_CHECK(0x531340u, 0x4f925fu); RETCHK(0x4f9264u, 0x4f925fu); LOADALL;
  /* 004f9264 jmp 0x4f9268 */ goto L_004f9268;
L_004f9266:;
  /* 004f9266 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004f9268:;
  /* 004f9268 mov ecx, dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); ecx = (u32)(M32(m_)); }
  /* 004f926e mov dword ptr [esi + 0x7c], eax */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 004f9271 mov dword ptr [ecx + 0x38], 0 */ { const u32 m_ = (u32)(ecx + 0x38u); M32(m_) = (u32)(0x0u); }
  /* 004f9278 mov edx, dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); edx = (u32)(M32(m_)); }
  /* 004f927e mov dword ptr [edx + 0x34], 0 */ { const u32 m_ = (u32)(edx + 0x34u); M32(m_) = (u32)(0x0u); }
  /* 004f9285 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f9287 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f9288 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f9289 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f928c:;
  /* 004f928c mov dword ptr [esi + 0x3c], 0xb */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f9293 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f9295 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f9296 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f9297 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f92a0(CPU *c) {
  NATIVE_HOOK(0x4f92a0u) REGS; LOADALL;
L_004f92a0:;
  /* 004f92a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f92a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f92a3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f92a4 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 004f92a6 fld dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); FPUSH((double)MF32(m_)); }
  /* 004f92a9 mov eax, dword ptr [ebx + 0x3c] */ { const u32 m_ = (u32)(ebx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f92ac sub eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f92af fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004f92b2 fstp dword ptr [ebx + 0x54] */ { const u32 m_ = (u32)(ebx + 0x54u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004f92b5 jne 0x4f931f */ if (!ZF_) goto L_004f931f;
  /* 004f92b7 mov eax, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f92bd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f92bf je 0x4f931f */ if (ZF_) goto L_004f931f;
  /* 004f92c1 mov ecx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 004f92c4 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f92c6 jne 0x4f92e7 */ if (!ZF_) goto L_004f92e7;
  /* 004f92c8 mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004f92cf mov dword ptr [ebx + 0x80], 0 */ { const u32 m_ = (u32)(ebx + 0x80u); M32(m_) = (u32)(0x0u); }
  /* 004f92d9 mov dword ptr [ebx + 0x3c], 0xb */ { const u32 m_ = (u32)(ebx + 0x3cu); M32(m_) = (u32)(0xbu); }
  /* 004f92e0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f92e2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f92e3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f92e4 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_004f92e7:;
  /* 004f92e7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f92e8 mov esi, dword ptr [ebx + 0x70] */ { const u32 m_ = (u32)(ebx + 0x70u); esi = (u32)(M32(m_)); }
  /* 004f92eb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f92ec mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004f92ef add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f92f2 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004f92f7 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004f92f9 mov eax, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); eax = (u32)(M32(m_)); }
  /* 004f92ff mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004f9302 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f9305 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f9306 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4f930bu; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4f9306u); RETCHK(0x4f930bu, 0x4f9306u); LOADALL;
  /* 004f930b mov edx, dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); edx = (u32)(M32(m_)); }
  /* 004f9311 mov eax, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); eax = (u32)(M32(m_)); }
  /* 004f9314 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9315 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4f931au; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4f9315u); RETCHK(0x4f931au, 0x4f9315u); LOADALL;
  /* 004f931a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f931d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f931e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_004f931f:;
  /* 004f931f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f9321 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f9322 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f9323 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_004f9330(CPU *c) {
  NATIVE_HOOK(0x4f9330u) REGS; LOADALL;
L_004f9330:;
  /* 004f9330 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f9331 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f9333 mov eax, dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); eax = (u32)(M32(m_)); }
  /* 004f9336 cmp eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9339 jne 0x4f934e */ if (!ZF_) goto L_004f934e;
  /* 004f933b mov eax, dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004f933e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f9340 je 0x4f9347 */ if (ZF_) goto L_004f9347;
  /* 004f9342 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9345 jne 0x4f934e */ if (!ZF_) goto L_004f934e;
L_004f9347:;
  /* 004f9347 mov dword ptr [ecx + 0x3c], 0xb */ { const u32 m_ = (u32)(ecx + 0x3cu); M32(m_) = (u32)(0xbu); }
L_004f934e:;
  /* 004f934e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f934f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f9360(CPU *c) {
  NATIVE_HOOK(0x4f9360u) REGS; LOADALL;
L_004f9360:;
  /* 004f9360 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f9361 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f9362 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004f9364 mov esi, dword ptr [edi + 0x7c] */ { const u32 m_ = (u32)(edi + 0x7cu); esi = (u32)(M32(m_)); }
  /* 004f9367 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f9369 je 0x4f9379 */ if (ZF_) goto L_004f9379;
  /* 004f936b mov eax, dword ptr [0x7a6cd8] */ { const u32 m_ = (u32)(0x7a6cd8u); eax = (u32)(M32(m_)); }
  /* 004f9370 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f9372 je 0x4f9379 */ if (ZF_) goto L_004f9379;
  /* 004f9374 call 0x531380 */ esp -= 4; M32(esp) = 0x4f9379u; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4f9374u); RETCHK(0x4f9379u, 0x4f9374u); LOADALL;
L_004f9379:;
  /* 004f9379 mov dword ptr [edi + 0x7c], 0 */ { const u32 m_ = (u32)(edi + 0x7cu); M32(m_) = (u32)(0x0u); }
  /* 004f9380 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f9382 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f9383 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f9384 jmp 0x4f4330 */ SAVEALL; F_004f4330(c); return;
}

void F_004f9390(CPU *c) {
  NATIVE_HOOK(0x4f9390u) REGS; LOADALL;
L_004f9390:;
  /* 004f9390 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f9392 mov dword ptr [esi], 0x64f908 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f908u); }
  /* 004f9398 mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 004f939b mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 004f939e mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
  /* 004f93a1 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 004f93a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f93a5 call dword ptr [0x62e20c] */ { const u32 m_ = (u32)(0x62e20cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f93abu; SAVEALL; call_ind(c, t_); RETCHK(0x4f93abu, 0x4f93a5u); LOADALL; }
  /* 004f93ab mov dword ptr [esi + 0x34], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(0xffffffffu); }
  /* 004f93b2 mov dword ptr [0x7a6cec], esi */ { const u32 m_ = (u32)(0x7a6cecu); M32(m_) = (u32)(esi); }
  /* 004f93b8 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f93ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f93c0(CPU *c) {
  NATIVE_HOOK(0x4f93c0u) REGS; LOADALL;
L_004f93c0:;
  /* 004f93c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f93c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f93c3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f93c4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f93c6 call 0x4f93f0 */ esp -= 4; M32(esp) = 0x4f93cbu; SAVEALL; F_004f93f0(c); ABI_CHECK(0x4f93f0u, 0x4f93c6u); RETCHK(0x4f93cbu, 0x4f93c6u); LOADALL;
  /* 004f93cb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f93cf je 0x4f93da */ if (ZF_) goto L_004f93da;
  /* 004f93d1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f93d2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f93d7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f93d2u); RETCHK(0x4f93d7u, 0x4f93d2u); LOADALL;
  /* 004f93d7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f93da:;
  /* 004f93da mov eax, esi */ { eax = (u32)(esi); }
  /* 004f93dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f93dd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f93de ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f93f0(CPU *c) {
  NATIVE_HOOK(0x4f93f0u) REGS; LOADALL;
L_004f93f0:;
  /* 004f93f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f93f1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f93f3 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 004f93f6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f93f7 mov dword ptr [esi], 0x64f908 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64f908u); }
  /* 004f93fd call dword ptr [0x62e1a8] */ { const u32 m_ = (u32)(0x62e1a8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f9403u; SAVEALL; call_ind(c, t_); RETCHK(0x4f9403u, 0x4f93fdu); LOADALL; }
  /* 004f9403 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004f9406 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f9408 je 0x4f9413 */ if (ZF_) goto L_004f9413;
  /* 004f940a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f940b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f9410u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f940bu); RETCHK(0x4f9410u, 0x4f940bu); LOADALL;
  /* 004f9410 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f9413:;
  /* 004f9413 mov dword ptr [esi + 0x20], 0 */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(0x0u); }
  /* 004f941a mov dword ptr [esi + 0x24], 0 */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(0x0u); }
  /* 004f9421 mov dword ptr [esi + 0x28], 0 */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0x0u); }
  /* 004f9428 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f9429 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f9430(CPU *c) {
  NATIVE_HOOK(0x4f9430u) REGS; LOADALL;
L_004f9430:;
  /* 004f9430 jmp 0x4f9500 */ SAVEALL; F_004f9500(c); return;
}

void F_004f9440(CPU *c) {
  NATIVE_HOOK(0x4f9440u) REGS; LOADALL;
L_004f9440:;
  /* 004f9440 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f9441 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f9443 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f9446 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f9447 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f944a mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 004f944d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f944e xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004f9450 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9452 je 0x4f94dd */ if (ZF_) goto L_004f94dd;
  /* 004f9458 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004f945a mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 004f945d mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004f9460 mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 004f9463 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f9466 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f9467 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f946a mov dword ptr [ebp - 0xc], 0x40400000 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x40400000u); }
  /* 004f9471 call 0x550820 */ esp -= 4; M32(esp) = 0x4f9476u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x4f9471u); RETCHK(0x4f9476u, 0x4f9471u); LOADALL;
  /* 004f9476 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004f9479 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f947b jne 0x4f9481 */ if (!ZF_) goto L_004f9481;
  /* 004f947d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004f947f jmp 0x4f9499 */ goto L_004f9499;
L_004f9481:;
  /* 004f9481 mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 004f9484 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f9486 mov eax, 0xb21642c9 */ { eax = (u32)(0xb21642c9u); }
  /* 004f948b imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f948d add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f948f sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004f9492 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 004f9494 shr ebx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 004f9497 add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
L_004f9499:;
  /* 004f9499 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f949b mov dword ptr [ebp - 8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edi); }
  /* 004f949e jle 0x4f94cf */ if ((ZF_|LT_)) goto L_004f94cf;
  /* 004f94a0 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
L_004f94a3:;
  /* 004f94a3 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004f94a6 add eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f94a9 lea esi, [eax + 0x40] */ esi = (u32)((u32)(eax + 0x40u));
  /* 004f94ac lea edi, [ebp - 0x18] */ edi = (u32)((u32)(ebp + 0xffffffe8u));
  /* 004f94af call 0x547ee0 */ esp -= 4; M32(esp) = 0x4f94b4u; SAVEALL; F_00547ee0(c); ABI_CHECK(0x547ee0u, 0x4f94afu); RETCHK(0x4f94b4u, 0x4f94afu); LOADALL;
  /* 004f94b4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f94b6 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004f94b9 jne 0x4f94e5 */ if (!ZF_) goto L_004f94e5;
  /* 004f94bb mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 004f94be mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f94c1 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f94c2 add edx, 0x5c */ { u32 a_ = edx, b_ = 0x5cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f94c5 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f94c7 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 004f94ca mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 004f94cd jl 0x4f94a3 */ if (LT_) goto L_004f94a3;
L_004f94cf:;
  /* 004f94cf mov ecx, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ecx = (u32)(M32(m_)); }
  /* 004f94d2 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f94d5 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f94d7 je 0x4f94dc */ if (ZF_) goto L_004f94dc;
  /* 004f94d9 mov dword ptr [esi + 0x34], eax */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(eax); }
L_004f94dc:;
  /* 004f94dc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_004f94dd:;
  /* 004f94dd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f94de pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f94df mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f94e1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f94e2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004f94e5:;
  /* 004f94e5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f94e8 cmp dword ptr [ecx + 0x34], eax */ { const u32 m_ = (u32)(ecx + 0x34u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f94eb je 0x4f94dc */ if (ZF_) goto L_004f94dc;
  /* 004f94ed pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f94ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f94ef mov dword ptr [ecx + 0x34], eax */ { const u32 m_ = (u32)(ecx + 0x34u); M32(m_) = (u32)(eax); }
  /* 004f94f2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f94f3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f94f5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f94f6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004f9500(CPU *c) {
  NATIVE_HOOK(0x4f9500u) REGS; LOADALL;
L_004f9500:;
  /* 004f9500 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004f9503 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f9505 je 0x4f9510 */ if (ZF_) goto L_004f9510;
  /* 004f9507 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9508 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f950du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f9508u); RETCHK(0x4f950du, 0x4f9508u); LOADALL;
  /* 004f950d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f9510:;
  /* 004f9510 mov dword ptr [esi + 0x20], 0 */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(0x0u); }
  /* 004f9517 mov dword ptr [esi + 0x24], 0 */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(0x0u); }
  /* 004f951e mov dword ptr [esi + 0x28], 0 */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0x0u); }
  /* 004f9525 call 0x550820 */ esp -= 4; M32(esp) = 0x4f952au; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x4f9525u); RETCHK(0x4f952au, 0x4f9525u); LOADALL;
  /* 004f952a mov dword ptr [esi + 0x34], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(0xffffffffu); }
  /* 004f9531 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f9540(CPU *c) {
  NATIVE_HOOK(0x4f9540u) REGS; LOADALL;
L_004f9540:;
  /* 004f9540 mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 004f9543 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f9550(CPU *c) {
  NATIVE_HOOK(0x4f9550u) REGS; LOADALL;
L_004f9550:;
  /* 004f9550 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f9551 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f9553 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f9556 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004f955b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f955c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f955e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004f9561 call 0x4019a0 */ esp -= 4; M32(esp) = 0x4f9566u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x4f9561u); RETCHK(0x4f9566u, 0x4f9561u); LOADALL;
  /* 004f9566 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f9568 mov eax, dword ptr [esi + 0xb18] */ { const u32 m_ = (u32)(esi + 0xb18u); eax = (u32)(M32(m_)); }
  /* 004f956e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f9571 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9574 je 0x4f95a6 */ if (ZF_) goto L_004f95a6;
  /* 004f9576 mov eax, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 004f957c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f957e mov dword ptr [ebp - 0x24], 0x1000001f */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x1000001fu); }
  /* 004f9585 mov dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x0u); }
  /* 004f958c je 0x4f959c */ if (ZF_) goto L_004f959c;
  /* 004f958e lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 004f9591 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9592 mov edx, 8 */ { edx = (u32)(0x8u); }
  /* 004f9597 call 0x55f4b0 */ esp -= 4; M32(esp) = 0x4f959cu; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x4f9597u); RETCHK(0x4f959cu, 0x4f9597u); LOADALL;
L_004f959c:;
  /* 004f959c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f959e call 0x54c180 */ esp -= 4; M32(esp) = 0x4f95a3u; SAVEALL; F_0054c180(c); ABI_CHECK(0x54c180u, 0x4f959eu); RETCHK(0x4f95a3u, 0x4f959eu); LOADALL;
  /* 004f95a3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f95a6:;
  /* 004f95a6 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004f95a9 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f95ac push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 004f95ae push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f95af lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 004f95b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f95b3 mov dword ptr [ebp - 0x1c], 0x10000018 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x10000018u); }
  /* 004f95ba mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 004f95c1 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 004f95c4 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x4f95c9u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x4f95c4u); RETCHK(0x4f95c9u, 0x4f95c4u); LOADALL;
  /* 004f95c9 mov eax, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 004f95cf add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f95d2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f95d4 je 0x4f95eb */ if (ZF_) goto L_004f95eb;
  /* 004f95d6 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 004f95d9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f95da mov edx, 0x18 */ { edx = (u32)(0x18u); }
  /* 004f95df call 0x55f4b0 */ esp -= 4; M32(esp) = 0x4f95e4u; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x4f95dfu); RETCHK(0x4f95e4u, 0x4f95dfu); LOADALL;
  /* 004f95e4 cmp eax, 0xc351 */ { u32 a_ = eax, b_ = 0xc351u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f95e9 je 0x4f9613 */ if (ZF_) goto L_004f9613;
L_004f95eb:;
  /* 004f95eb push 0x41 */ { u32 v_ = 0x41u; esp -= 4; M32(esp) = v_; }
  /* 004f95ed push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 004f95f2 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f95f8u; SAVEALL; call_ind(c, t_); RETCHK(0x4f95f8u, 0x4f95f2u); LOADALL; }
  /* 004f95f8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f95fa mov esi, eax */ { esi = (u32)(eax); }
  /* 004f95fc call 0x40ddd0 */ esp -= 4; M32(esp) = 0x4f9601u; SAVEALL; F_0040ddd0(c); ABI_CHECK(0x40ddd0u, 0x4f95fcu); RETCHK(0x4f9601u, 0x4f95fcu); LOADALL;
  /* 004f9601 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f9604 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f9606 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f9607 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004f960a call 0x61af31 */ esp -= 4; M32(esp) = 0x4f960fu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4f960au); RETCHK(0x4f960fu, 0x4f960au); LOADALL;
  /* 004f960f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f9611 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f9612 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004f9613:;
  /* 004f9613 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f9615 call 0x54c180 */ esp -= 4; M32(esp) = 0x4f961au; SAVEALL; F_0054c180(c); ABI_CHECK(0x54c180u, 0x4f9615u); RETCHK(0x4f961au, 0x4f9615u); LOADALL;
  /* 004f961a mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004f961d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f9620 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f9622 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f9623 call 0x61af31 */ esp -= 4; M32(esp) = 0x4f9628u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4f9623u); RETCHK(0x4f9628u, 0x4f9623u); LOADALL;
  /* 004f9628 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f962a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f962b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f9630(CPU *c) {
  NATIVE_HOOK(0x4f9630u) REGS; LOADALL;
L_004f9630:;
  /* 004f9630 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f9631 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f9633 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004f9639 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f963b push 0x6243ae */ { u32 v_ = 0x6243aeu; esp -= 4; M32(esp) = v_; }
  /* 004f9640 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9641 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f9644 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004f964b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004f964d sub ecx, 0x10000082 */ { u32 a_ = ecx, b_ = 0x10000082u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f9653 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f9654 mov dword ptr [0x9b8b54], eax */ { const u32 m_ = (u32)(0x9b8b54u); M32(m_) = (u32)(eax); }
  /* 004f9659 je 0x4f9723 */ if (ZF_) goto L_004f9723;
  /* 004f965f dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f9660 jne 0x4f973c */ if (!ZF_) goto L_004f973c;
  /* 004f9666 test byte ptr [0x9be1a4], 1 */ { const u32 m_ = (u32)(0x9be1a4u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f966d jne 0x4f96a5 */ if (!ZF_) goto L_004f96a5;
  /* 004f966f or dword ptr [0x9be1a4], 1 */ { const u32 m_ = (u32)(0x9be1a4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 004f9676 push 0x6434c8 */ { u32 v_ = 0x6434c8u; esp -= 4; M32(esp) = v_; }
  /* 004f967b mov ecx, 0x9be188 */ { ecx = (u32)(0x9be188u); }
  /* 004f9680 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004f9687 call 0x403060 */ esp -= 4; M32(esp) = 0x4f968cu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x4f9687u); RETCHK(0x4f968cu, 0x4f9687u); LOADALL;
  /* 004f968c push 0x62c520 */ { u32 v_ = 0x62c520u; esp -= 4; M32(esp) = v_; }
  /* 004f9691 call 0x5fe916 */ esp -= 4; M32(esp) = 0x4f9696u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x4f9691u); RETCHK(0x4f9696u, 0x4f9691u); LOADALL;
  /* 004f9696 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004f969d mov eax, dword ptr [0x9b8b54] */ { const u32 m_ = (u32)(0x9b8b54u); eax = (u32)(M32(m_)); }
  /* 004f96a2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f96a5:;
  /* 004f96a5 mov dword ptr [0x9b8b50], eax */ { const u32 m_ = (u32)(0x9b8b50u); M32(m_) = (u32)(eax); }
  /* 004f96aa mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f96ad call 0x555450 */ esp -= 4; M32(esp) = 0x4f96b2u; SAVEALL; F_00555450(c); ABI_CHECK(0x555450u, 0x4f96adu); RETCHK(0x4f96b2u, 0x4f96adu); LOADALL;
  /* 004f96b2 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f96b4 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
L_004f96b7:;
  /* 004f96b7 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f96b9 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f96ba test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f96bc jne 0x4f96b7 */ if (!ZF_) goto L_004f96b7;
  /* 004f96be sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f96c0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f96c1 mov ecx, 0x9be188 */ { ecx = (u32)(0x9be188u); }
  /* 004f96c6 call 0x40d260 */ esp -= 4; M32(esp) = 0x4f96cbu; SAVEALL; F_0040d260(c); ABI_CHECK(0x40d260u, 0x4f96c6u); RETCHK(0x4f96cbu, 0x4f96c6u); LOADALL;
  /* 004f96cb cmp dword ptr [0x9be1a0], 0x10 */ { const u32 m_ = (u32)(0x9be1a0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f96d2 mov esi, dword ptr [0x9be18c] */ { const u32 m_ = (u32)(0x9be18cu); esi = (u32)(M32(m_)); }
  /* 004f96d8 jae 0x4f96df */ if (!CF_) goto L_004f96df;
  /* 004f96da mov esi, 0x9be18c */ { esi = (u32)(0x9be18cu); }
L_004f96df:;
  /* 004f96df push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f96e1 call 0x40ddd0 */ esp -= 4; M32(esp) = 0x4f96e6u; SAVEALL; F_0040ddd0(c); ABI_CHECK(0x40ddd0u, 0x4f96e1u); RETCHK(0x4f96e6u, 0x4f96e1u); LOADALL;
  /* 004f96e6 mov eax, dword ptr [0x9be19c] */ { const u32 m_ = (u32)(0x9be19cu); eax = (u32)(M32(m_)); }
  /* 004f96eb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f96ee cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f96f1 ja 0x4f96fd */ if (!(CF_|ZF_)) goto L_004f96fd;
  /* 004f96f3 mov ecx, 0x9be188 */ { ecx = (u32)(0x9be188u); }
  /* 004f96f8 call 0x60166e */ esp -= 4; M32(esp) = 0x4f96fdu; SAVEALL; F_0060166e(c); ABI_CHECK(0x60166eu, 0x4f96f8u); RETCHK(0x4f96fdu, 0x4f96f8u); LOADALL;
L_004f96fd:;
  /* 004f96fd cmp dword ptr [0x9be1a0], 0x10 */ { const u32 m_ = (u32)(0x9be1a0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9704 mov eax, dword ptr [0x9be18c] */ { const u32 m_ = (u32)(0x9be18cu); eax = (u32)(M32(m_)); }
  /* 004f9709 jae 0x4f9710 */ if (!CF_) goto L_004f9710;
  /* 004f970b mov eax, 0x9be18c */ { eax = (u32)(0x9be18cu); }
L_004f9710:;
  /* 004f9710 mov byte ptr [eax + 0xb], 0 */ { const u32 m_ = (u32)(eax + 0xbu); M8(m_) = (u8)(0x0u); }
  /* 004f9714 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f9717 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004f971e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f971f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f9721 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f9722 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004f9723:;
  /* 004f9723 push 0x3d */ { u32 v_ = 0x3du; esp -= 4; M32(esp) = v_; }
  /* 004f9725 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 004f972a call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f9730u; SAVEALL; call_ind(c, t_); RETCHK(0x4f9730u, 0x4f972au); LOADALL; }
  /* 004f9730 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f9732 mov esi, eax */ { esi = (u32)(eax); }
  /* 004f9734 call 0x40ddd0 */ esp -= 4; M32(esp) = 0x4f9739u; SAVEALL; F_0040ddd0(c); ABI_CHECK(0x40ddd0u, 0x4f9734u); RETCHK(0x4f9739u, 0x4f9734u); LOADALL;
  /* 004f9739 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f973c:;
  /* 004f973c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f973f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004f9746 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f9747 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f9749 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f974a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f9750(CPU *c) {
  NATIVE_HOOK(0x4f9750u) REGS; LOADALL;
L_004f9750:;
  /* 004f9750 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f9751 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f9753 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f9755 push 0x624328 */ { u32 v_ = 0x624328u; esp -= 4; M32(esp) = v_; }
  /* 004f975a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004f9760 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9761 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004f9768 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f976b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004f9770 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f9771 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f9772 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004f9774 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 004f9776 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004f9778 push 0x64fa08 */ { u32 v_ = 0x64fa08u; esp -= 4; M32(esp) = v_; }
  /* 004f977d lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 004f9780 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f9783 mov dword ptr [ebp - 0x20], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xfu); }
  /* 004f978a mov dword ptr [ebp - 0x24], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ebx); }
  /* 004f978d mov byte ptr [ebp - 0x34], bl */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004f9790 call 0x404420 */ esp -= 4; M32(esp) = 0x4f9795u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4f9790u); RETCHK(0x4f9795u, 0x4f9790u); LOADALL;
  /* 004f9795 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f9797 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004f979a lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 004f979d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_004f97a0:;
  /* 004f97a0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f97a2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f97a3 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 004f97a5 jne 0x4f97a0 */ if (!ZF_) goto L_004f97a0;
  /* 004f97a7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f97a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f97aa mov eax, esi */ { eax = (u32)(esi); }
  /* 004f97ac lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 004f97af call 0x40d260 */ esp -= 4; M32(esp) = 0x4f97b4u; SAVEALL; F_0040d260(c); ABI_CHECK(0x40d260u, 0x4f97afu); RETCHK(0x4f97b4u, 0x4f97afu); LOADALL;
  /* 004f97b4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f97b6 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 004f97b9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f97ba mov dword ptr [ebp - 0x1b], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe5u); M32(m_) = (u32)(eax); }
  /* 004f97bd lea edx, [ebp - 0x3c] */ edx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 004f97c0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f97c1 mov dword ptr [ebp - 0x17], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe9u); M32(m_) = (u32)(eax); }
  /* 004f97c4 mov word ptr [ebp - 0x13], ax */ { const u32 m_ = (u32)(ebp + 0xffffffedu); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 004f97c8 push 0x64fa00 */ { u32 v_ = 0x64fa00u; esp -= 4; M32(esp) = v_; }
  /* 004f97cd add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004f97d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f97d1 mov dword ptr [ebp - 0x3c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(ebx); }
  /* 004f97d4 mov byte ptr [ebp - 0x1c], bl */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004f97d7 mov byte ptr [ebp - 0x11], al */ { const u32 m_ = (u32)(ebp + 0xffffffefu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004f97da call 0x5feaac */ esp -= 4; M32(esp) = 0x4f97dfu; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x4f97dau); RETCHK(0x4f97dfu, 0x4f97dau); LOADALL;
  /* 004f97df add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f97e2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f97e4 jle 0x4f980b */ if ((ZF_|LT_)) goto L_004f980b;
  /* 004f97e6 cmp dword ptr [ebp - 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f97ea mov esi, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); esi = (u32)(M32(m_)); }
  /* 004f97ed jae 0x4f97f2 */ if (!CF_) goto L_004f97f2;
  /* 004f97ef lea esi, [ebp - 0x34] */ esi = (u32)((u32)(ebp + 0xffffffccu));
L_004f97f2:;
  /* 004f97f2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f97f4 call 0x40ddd0 */ esp -= 4; M32(esp) = 0x4f97f9u; SAVEALL; F_0040ddd0(c); ABI_CHECK(0x40ddd0u, 0x4f97f4u); RETCHK(0x4f97f9u, 0x4f97f4u); LOADALL;
  /* 004f97f9 mov ecx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ecx = (u32)(M32(m_)); }
  /* 004f97fc lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 004f97ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9800 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f9801 call 0x4f9550 */ esp -= 4; M32(esp) = 0x4f9806u; SAVEALL; F_004f9550(c); ABI_CHECK(0x4f9550u, 0x4f9801u); RETCHK(0x4f9806u, 0x4f9801u); LOADALL;
  /* 004f9806 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f9809 mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
L_004f980b:;
  /* 004f980b cmp dword ptr [ebp - 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f980f jb 0x4f981d */ if (CF_) goto L_004f981d;
  /* 004f9811 mov edx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edx = (u32)(M32(m_)); }
  /* 004f9814 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f9815 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f981au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f9815u); RETCHK(0x4f981au, 0x4f9815u); LOADALL;
  /* 004f981a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f981d:;
  /* 004f981d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f9820 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f9821 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004f9828 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004f982b mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 004f982d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f982e call 0x61af31 */ esp -= 4; M32(esp) = 0x4f9833u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4f982eu); RETCHK(0x4f9833u, 0x4f982eu); LOADALL;
  /* 004f9833 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f9835 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f9836 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f9840(CPU *c) {
  NATIVE_HOOK(0x4f9840u) REGS; LOADALL;
L_004f9840:;
  /* 004f9840 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f9841 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f9843 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004f9849 mov cl, byte ptr [0x9ba9f0] */ { const u32 m_ = (u32)(0x9ba9f0u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f984f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f9851 push 0x61e16e */ { u32 v_ = 0x61e16eu; esp -= 4; M32(esp) = v_; }
  /* 004f9856 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9857 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004f985c test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f985e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004f9865 jne 0x4f988d */ if (!ZF_) goto L_004f988d;
  /* 004f9867 or dword ptr [0x9ba9f0], eax */ { const u32 m_ = (u32)(0x9ba9f0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 004f986d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f986f push 0x9ba9e0 */ { u32 v_ = 0x9ba9e0u; esp -= 4; M32(esp) = v_; }
  /* 004f9874 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004f987b call 0x4f9960 */ esp -= 4; M32(esp) = 0x4f9880u; SAVEALL; F_004f9960(c); ABI_CHECK(0x4f9960u, 0x4f987bu); RETCHK(0x4f9880u, 0x4f987bu); LOADALL;
  /* 004f9880 push 0x62c550 */ { u32 v_ = 0x62c550u; esp -= 4; M32(esp) = v_; }
  /* 004f9885 call 0x5fe916 */ esp -= 4; M32(esp) = 0x4f988au; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x4f9885u); RETCHK(0x4f988au, 0x4f9885u); LOADALL;
  /* 004f988a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f988d:;
  /* 004f988d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f9890 mov eax, 0x9ba9e0 */ { eax = (u32)(0x9ba9e0u); }
  /* 004f9895 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004f989c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f989e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f989f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f98a0(CPU *c) {
  NATIVE_HOOK(0x4f98a0u) REGS; LOADALL;
L_004f98a0:;
  /* 004f98a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f98a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f98a3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004f98a9 mov cl, byte ptr [0x9ba9dc] */ { const u32 m_ = (u32)(0x9ba9dcu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f98af push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f98b1 push 0x61e14e */ { u32 v_ = 0x61e14eu; esp -= 4; M32(esp) = v_; }
  /* 004f98b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f98b7 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004f98bc test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f98be mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004f98c5 jne 0x4f98ec */ if (!ZF_) goto L_004f98ec;
  /* 004f98c7 or dword ptr [0x9ba9dc], eax */ { const u32 m_ = (u32)(0x9ba9dcu); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 004f98cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f98ce push 0x9ba9cc */ { u32 v_ = 0x9ba9ccu; esp -= 4; M32(esp) = v_; }
  /* 004f98d3 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004f98da call 0x4f9960 */ esp -= 4; M32(esp) = 0x4f98dfu; SAVEALL; F_004f9960(c); ABI_CHECK(0x4f9960u, 0x4f98dau); RETCHK(0x4f98dfu, 0x4f98dau); LOADALL;
  /* 004f98df push 0x62c560 */ { u32 v_ = 0x62c560u; esp -= 4; M32(esp) = v_; }
  /* 004f98e4 call 0x5fe916 */ esp -= 4; M32(esp) = 0x4f98e9u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x4f98e4u); RETCHK(0x4f98e9u, 0x4f98e4u); LOADALL;
  /* 004f98e9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f98ec:;
  /* 004f98ec mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f98ef mov eax, 0x9ba9cc */ { eax = (u32)(0x9ba9ccu); }
  /* 004f98f4 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004f98fb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f98fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f98fe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f9900(CPU *c) {
  NATIVE_HOOK(0x4f9900u) REGS; LOADALL;
L_004f9900:;
  /* 004f9900 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f9901 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f9903 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004f9909 mov cl, byte ptr [0x9ba9c8] */ { const u32 m_ = (u32)(0x9ba9c8u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f990f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f9911 push 0x61e12e */ { u32 v_ = 0x61e12eu; esp -= 4; M32(esp) = v_; }
  /* 004f9916 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9917 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004f991c test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f991e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004f9925 jne 0x4f994d */ if (!ZF_) goto L_004f994d;
  /* 004f9927 or dword ptr [0x9ba9c8], eax */ { const u32 m_ = (u32)(0x9ba9c8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 004f992d push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004f992f push 0x9ba9b8 */ { u32 v_ = 0x9ba9b8u; esp -= 4; M32(esp) = v_; }
  /* 004f9934 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004f993b call 0x4f9960 */ esp -= 4; M32(esp) = 0x4f9940u; SAVEALL; F_004f9960(c); ABI_CHECK(0x4f9960u, 0x4f993bu); RETCHK(0x4f9940u, 0x4f993bu); LOADALL;
  /* 004f9940 push 0x62c570 */ { u32 v_ = 0x62c570u; esp -= 4; M32(esp) = v_; }
  /* 004f9945 call 0x5fe916 */ esp -= 4; M32(esp) = 0x4f994au; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x4f9945u); RETCHK(0x4f994au, 0x4f9945u); LOADALL;
  /* 004f994a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f994d:;
  /* 004f994d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f9950 mov eax, 0x9ba9b8 */ { eax = (u32)(0x9ba9b8u); }
  /* 004f9955 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004f995c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f995e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f995f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f9960(CPU *c) {
  NATIVE_HOOK(0x4f9960u) REGS; LOADALL;
L_004f9960:;
  /* 004f9960 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f9961 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f9963 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f9965 push 0x61e110 */ { u32 v_ = 0x61e110u; esp -= 4; M32(esp) = v_; }
  /* 004f996a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004f9970 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9971 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004f9978 sub esp, 0x74 */ { u32 a_ = esp, b_ = 0x74u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f997b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004f9980 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f9981 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f9984 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f9985 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004f9987 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f998a mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 004f998d mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 004f9990 mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
  /* 004f9993 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 004f9996 call 0x518bb0 */ esp -= 4; M32(esp) = 0x4f999bu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x4f9996u); RETCHK(0x4f999bu, 0x4f9996u); LOADALL;
  /* 004f999b call 0x518330 */ esp -= 4; M32(esp) = 0x4f99a0u; SAVEALL; F_00518330(c); ABI_CHECK(0x518330u, 0x4f999bu); RETCHK(0x4f99a0u, 0x4f999bu); LOADALL;
  /* 004f99a0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f99a2 mov eax, 0x64fa20 */ { eax = (u32)(0x64fa20u); }
  /* 004f99a7 call 0x560ba0 */ esp -= 4; M32(esp) = 0x4f99acu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4f99a7u); RETCHK(0x4f99acu, 0x4f99a7u); LOADALL;
  /* 004f99ac mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f99ae cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f99b0 je 0x4f9b62 */ if (ZF_) goto L_004f9b62;
  /* 004f99b6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f99b9 mov eax, dword ptr [eax*4 + 0x687d10] */ { const u32 m_ = (u32)(eax * 4u + 0x687d10u); eax = (u32)(M32(m_)); }
  /* 004f99c0 call 0x560ba0 */ esp -= 4; M32(esp) = 0x4f99c5u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x4f99c0u); RETCHK(0x4f99c5u, 0x4f99c0u); LOADALL;
  /* 004f99c5 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f99c7 je 0x4f9b62 */ if (ZF_) goto L_004f9b62;
  /* 004f99cd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f99ce mov ebx, 0xf */ { ebx = (u32)(0xfu); }
  /* 004f99d3 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 004f99d6 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 004f99d9 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 004f99dd mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 004f99e1 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004f99e3 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f99e5 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4f99e8u; SAVEALL; call_ind(c, t_); RETCHK(0x4f99e8u, 0x4f99e5u); LOADALL; }
  /* 004f99e8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f99e9 mov eax, 0x64fa18 */ { eax = (u32)(0x64fa18u); }
  /* 004f99ee call 0x560ed0 */ esp -= 4; M32(esp) = 0x4f99f3u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x4f99eeu); RETCHK(0x4f99f3u, 0x4f99eeu); LOADALL;
  /* 004f99f3 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004f99f5 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
L_004f99f8:;
  /* 004f99f8 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f99fa inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f99fb test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f99fd jne 0x4f99f8 */ if (!ZF_) goto L_004f99f8;
  /* 004f99ff sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f9a01 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f9a02 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9a03 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f9a06 call 0x404420 */ esp -= 4; M32(esp) = 0x4f9a0bu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4f9a06u); RETCHK(0x4f9a0bu, 0x4f9a06u); LOADALL;
  /* 004f9a0b mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 004f9a0e mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 004f9a11 mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 004f9a15 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f9a17 lea eax, [ebp + 0xf] */ eax = (u32)((u32)(ebp + 0xfu));
  /* 004f9a1a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9a1b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f9a1e mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 004f9a22 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f9a23 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f9a25 mov byte ptr [ebp + 0xf], 0x3b */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)(0x3bu); }
  /* 004f9a29 call 0x40a4a0 */ esp -= 4; M32(esp) = 0x4f9a2eu; SAVEALL; F_0040a4a0(c); ABI_CHECK(0x40a4a0u, 0x4f9a29u); RETCHK(0x4f9a2eu, 0x4f9a29u); LOADALL;
  /* 004f9a2e mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004f9a30 cmp ebx, -1 */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9a33 je 0x4f9af7 */ if (ZF_) goto L_004f9af7;
  /* 004f9a39 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004f9a40:;
  /* 004f9a40 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004f9a42 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f9a44 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9a45 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f9a47 lea esi, [ebp - 0x80] */ esi = (u32)((u32)(ebp + 0xffffff80u));
  /* 004f9a4a lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f9a4d mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 004f9a50 call 0x40c990 */ esp -= 4; M32(esp) = 0x4f9a55u; SAVEALL; F_0040c990(c); ABI_CHECK(0x40c990u, 0x4f9a50u); RETCHK(0x4f9a55u, 0x4f9a50u); LOADALL;
  /* 004f9a55 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 004f9a59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9a5a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f9a5d call 0x4030f0 */ esp -= 4; M32(esp) = 0x4f9a62u; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x4f9a5du); RETCHK(0x4f9a62u, 0x4f9a5du); LOADALL;
  /* 004f9a62 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 004f9a66 cmp dword ptr [ebp - 0x68], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff98u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9a6a jb 0x4f9a78 */ if (CF_) goto L_004f9a78;
  /* 004f9a6c mov edx, dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); edx = (u32)(M32(m_)); }
  /* 004f9a6f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f9a70 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f9a75u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f9a70u); RETCHK(0x4f9a75u, 0x4f9a70u); LOADALL;
  /* 004f9a75 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f9a78:;
  /* 004f9a78 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004f9a7b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9a7c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f9a7e lea esi, [ebp - 0x64] */ esi = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004f9a81 lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f9a84 mov dword ptr [ebp - 0x68], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(0xfu); }
  /* 004f9a8b mov dword ptr [ebp - 0x6c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(0x0u); }
  /* 004f9a92 mov byte ptr [ebp - 0x7c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M8(m_) = (u8)(0x0u); }
  /* 004f9a96 call 0x40c990 */ esp -= 4; M32(esp) = 0x4f9a9bu; SAVEALL; F_0040c990(c); ABI_CHECK(0x40c990u, 0x4f9a96u); RETCHK(0x4f9a9bu, 0x4f9a96u); LOADALL;
  /* 004f9a9b push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f9a9d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004f9a9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9aa0 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004f9aa3 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 004f9aa7 call 0x404140 */ esp -= 4; M32(esp) = 0x4f9aacu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4f9aa7u); RETCHK(0x4f9aacu, 0x4f9aa7u); LOADALL;
  /* 004f9aac mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 004f9ab0 cmp dword ptr [ebp - 0x4c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9ab4 jb 0x4f9ac2 */ if (CF_) goto L_004f9ac2;
  /* 004f9ab6 mov ecx, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); ecx = (u32)(M32(m_)); }
  /* 004f9ab9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f9aba call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f9abfu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f9abau); RETCHK(0x4f9abfu, 0x4f9abau); LOADALL;
  /* 004f9abf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f9ac2:;
  /* 004f9ac2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004f9ac4 lea edx, [ebp + 0xf] */ edx = (u32)((u32)(ebp + 0xfu));
  /* 004f9ac7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f9ac8 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f9acb lea edi, [ebx + 1] */ edi = (u32)((u32)(ebx + 0x1u));
  /* 004f9ace push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9acf mov eax, edi */ { eax = (u32)(edi); }
  /* 004f9ad1 mov dword ptr [ebp - 0x4c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(0xfu); }
  /* 004f9ad8 mov dword ptr [ebp - 0x50], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x0u); }
  /* 004f9adf mov byte ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M8(m_) = (u8)(0x0u); }
  /* 004f9ae3 mov byte ptr [ebp + 0xf], 0x3b */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)(0x3bu); }
  /* 004f9ae7 call 0x40a4a0 */ esp -= 4; M32(esp) = 0x4f9aecu; SAVEALL; F_0040a4a0(c); ABI_CHECK(0x40a4a0u, 0x4f9ae7u); RETCHK(0x4f9aecu, 0x4f9ae7u); LOADALL;
  /* 004f9aec mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004f9aee cmp ebx, -1 */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9af1 jne 0x4f9a40 */ if (!ZF_) goto L_004f9a40;
L_004f9af7:;
  /* 004f9af7 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f9af9 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004f9afb lea esi, [ebp - 0x64] */ esi = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004f9afe lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f9b01 call 0x40c990 */ esp -= 4; M32(esp) = 0x4f9b06u; SAVEALL; F_0040c990(c); ABI_CHECK(0x40c990u, 0x4f9b01u); RETCHK(0x4f9b06u, 0x4f9b01u); LOADALL;
  /* 004f9b06 mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 004f9b0a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f9b0d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9b0e mov eax, esi */ { eax = (u32)(esi); }
  /* 004f9b10 call 0x4030f0 */ esp -= 4; M32(esp) = 0x4f9b15u; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x4f9b10u); RETCHK(0x4f9b15u, 0x4f9b10u); LOADALL;
  /* 004f9b15 mov eax, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); eax = (u32)(M32(m_)); }
  /* 004f9b18 mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 004f9b1d cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9b1f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f9b20 jb 0x4f9b2e */ if (CF_) goto L_004f9b2e;
  /* 004f9b22 mov ecx, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); ecx = (u32)(M32(m_)); }
  /* 004f9b25 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f9b26 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f9b2bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f9b26u); RETCHK(0x4f9b2bu, 0x4f9b26u); LOADALL;
  /* 004f9b2b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f9b2e:;
  /* 004f9b2e cmp dword ptr [ebp - 0x30], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9b31 jb 0x4f9b3f */ if (CF_) goto L_004f9b3f;
  /* 004f9b33 mov edx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); edx = (u32)(M32(m_)); }
  /* 004f9b36 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f9b37 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f9b3cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f9b37u); RETCHK(0x4f9b3cu, 0x4f9b37u); LOADALL;
  /* 004f9b3c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f9b3f:;
  /* 004f9b3f cmp dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9b42 mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 004f9b49 mov dword ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x0u); }
  /* 004f9b50 mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 004f9b54 jb 0x4f9b62 */ if (CF_) goto L_004f9b62;
  /* 004f9b56 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004f9b59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9b5a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f9b5fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f9b5au); RETCHK(0x4f9b5fu, 0x4f9b5au); LOADALL;
  /* 004f9b5f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f9b62:;
  /* 004f9b62 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f9b65 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f9b66 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004f9b6d mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004f9b70 mov eax, esi */ { eax = (u32)(esi); }
  /* 004f9b72 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f9b73 call 0x61af31 */ esp -= 4; M32(esp) = 0x4f9b78u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4f9b73u); RETCHK(0x4f9b78u, 0x4f9b73u); LOADALL;
  /* 004f9b78 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f9b7a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f9b7b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004f9b80(CPU *c) {
  NATIVE_HOOK(0x4f9b80u) REGS; LOADALL;
L_004f9b80:;
  /* 004f9b80 cmp dword ptr [eax + 0x18], 0x10 */ { const u32 m_ = (u32)(eax + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9b84 jb 0x4f9b8b */ if (CF_) goto L_004f9b8b;
  /* 004f9b86 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004f9b89 jmp 0x4f9b8e */ goto L_004f9b8e;
L_004f9b8b:;
  /* 004f9b8b lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
L_004f9b8e:;
  /* 004f9b8e cmp byte ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 004f9b91 je 0x4f9ba9 */ if (ZF_) goto L_004f9ba9;
L_004f9b93:;
  /* 004f9b93 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f9b95 cmp al, 0x41 */ { u32 a_ = (eax & 0xffu), b_ = 0x41u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 004f9b97 jl 0x4f9ba1 */ if (LT_) goto L_004f9ba1;
  /* 004f9b99 cmp al, 0x5a */ { u32 a_ = (eax & 0xffu), b_ = 0x5au; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 004f9b9b jg 0x4f9ba1 */ if (!(ZF_|LT_)) goto L_004f9ba1;
  /* 004f9b9d add al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004f9b9f mov byte ptr [ecx], al */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((eax & 0xffu)); }
L_004f9ba1:;
  /* 004f9ba1 mov al, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f9ba4 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f9ba5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004f9ba7 jne 0x4f9b93 */ if (!ZF_) goto L_004f9b93;
L_004f9ba9:;
  /* 004f9ba9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f9bb0(CPU *c) {
  NATIVE_HOOK(0x4f9bb0u) REGS; LOADALL;
L_004f9bb0:;
  /* 004f9bb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f9bb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f9bb3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f9bb5 push 0x61c6e0 */ { u32 v_ = 0x61c6e0u; esp -= 4; M32(esp) = v_; }
  /* 004f9bba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004f9bc0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9bc1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004f9bc8 sub esp, 0x4c */ { u32 a_ = esp, b_ = 0x4cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f9bcb mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004f9bd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f9bd1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f9bd2 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f9bd4 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f9bd6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f9bd9 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f9bdc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f9bdd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9bde lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004f9be1 mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 004f9be8 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 004f9beb mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 004f9bef call 0x404140 */ esp -= 4; M32(esp) = 0x4f9bf4u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4f9befu); RETCHK(0x4f9bf4u, 0x4f9befu); LOADALL;
  /* 004f9bf4 lea eax, [ebp - 0x48] */ eax = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004f9bf7 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 004f9bfa call 0x4f9b80 */ esp -= 4; M32(esp) = 0x4f9bffu; SAVEALL; F_004f9b80(c); ABI_CHECK(0x4f9b80u, 0x4f9bfau); RETCHK(0x4f9bffu, 0x4f9bfau); LOADALL;
  /* 004f9bff call 0x4f9840 */ esp -= 4; M32(esp) = 0x4f9c04u; SAVEALL; F_004f9840(c); ABI_CHECK(0x4f9840u, 0x4f9bffu); RETCHK(0x4f9c04u, 0x4f9bffu); LOADALL;
  /* 004f9c04 mov edi, eax */ { edi = (u32)(eax); }
  /* 004f9c06 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f9c09 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9c0b mov dword ptr [ebp - 0x58], edi */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(edi); }
  /* 004f9c0e jne 0x4f9c14 */ if (!ZF_) goto L_004f9c14;
  /* 004f9c10 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f9c12 jmp 0x4f9c2c */ goto L_004f9c2c;
L_004f9c14:;
  /* 004f9c14 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f9c17 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f9c19 mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 004f9c1e imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f9c20 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f9c22 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004f9c25 mov eax, edx */ { eax = (u32)(edx); }
  /* 004f9c27 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f9c2a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_004f9c2c:;
  /* 004f9c2c cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9c2e jle 0x4f9d19 */ if ((ZF_|LT_)) goto L_004f9d19;
  /* 004f9c34 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f9c35 mov dword ptr [ebp - 0x4c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(esi); }
  /* 004f9c38 mov dword ptr [ebp - 0x54], eax */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(eax); }
  /* 004f9c3b jmp 0x4f9c40 */ goto L_004f9c40;
L_004f9c3d:;
  /* 004f9c3d mov edi, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); edi = (u32)(M32(m_)); }
L_004f9c40:;
  /* 004f9c40 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f9c43 mov ecx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (u32)(M32(m_)); }
  /* 004f9c46 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f9c48 lea ebx, [ecx + eax] */ ebx = (u32)((u32)(ecx + eax));
  /* 004f9c4b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f9c4c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f9c4d lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f9c50 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 004f9c57 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 004f9c5a mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 004f9c5e call 0x404140 */ esp -= 4; M32(esp) = 0x4f9c63u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4f9c5eu); RETCHK(0x4f9c63u, 0x4f9c5eu); LOADALL;
  /* 004f9c63 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f9c66 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 004f9c6a call 0x4f9b80 */ esp -= 4; M32(esp) = 0x4f9c6fu; SAVEALL; F_004f9b80(c); ABI_CHECK(0x4f9b80u, 0x4f9c6au); RETCHK(0x4f9c6fu, 0x4f9c6au); LOADALL;
  /* 004f9c6f cmp dword ptr [ebx + 0x18], 0x10 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9c73 jb 0x4f9c7a */ if (CF_) goto L_004f9c7a;
  /* 004f9c75 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004f9c78 jmp 0x4f9c7d */ goto L_004f9c7d;
L_004f9c7a:;
  /* 004f9c7a lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
L_004f9c7d:;
  /* 004f9c7d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9c7e call 0x5feab2 */ esp -= 4; M32(esp) = 0x4f9c83u; SAVEALL; F_005feab2(c); ABI_CHECK(0x5feab2u, 0x4f9c7eu); RETCHK(0x4f9c83u, 0x4f9c7eu); LOADALL;
  /* 004f9c83 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f9c86 mov dword ptr [ebp - 0x50], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(eax); }
  /* 004f9c89 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004f9c8b jmp 0x4f9c90 */ goto L_004f9c90;
L_004f9c90:;
  /* 004f9c90 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9c94 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004f9c97 jae 0x4f9c9c */ if (!CF_) goto L_004f9c9c;
  /* 004f9c99 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_004f9c9c:;
  /* 004f9c9c mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 004f9c9f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f9ca0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9ca1 lea eax, [ebp - 0x48] */ eax = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004f9ca4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9ca5 mov eax, edi */ { eax = (u32)(edi); }
  /* 004f9ca7 call 0x9c1510 */ esp -= 4; M32(esp) = 0x4f9cacu; SAVEALL; F_009c1510(c); ABI_CHECK(0x9c1510u, 0x4f9ca7u); RETCHK(0x4f9cacu, 0x4f9ca7u); LOADALL;
  /* 004f9cac mov edi, eax */ { edi = (u32)(eax); }
  /* 004f9cae cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9cb1 je 0x4f9cde */ if (ZF_) goto L_004f9cde;
  /* 004f9cb3 mov ecx, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); ecx = (u32)(M32(m_)); }
  /* 004f9cb6 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 004f9cb9 push 0x2a */ { u32 v_ = 0x2au; esp -= 4; M32(esp) = v_; }
  /* 004f9cbb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f9cbc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f9cbd lea esi, [ebp - 0x48] */ esi = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004f9cc0 call 0x9c159f */ esp -= 4; M32(esp) = 0x4f9cc5u; SAVEALL; F_009c159f(c); ABI_CHECK(0x9c159fu, 0x4f9cc0u); RETCHK(0x4f9cc5u, 0x4f9cc0u); LOADALL;
  /* 004f9cc5 mov edx, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); edx = (u32)(M32(m_)); }
  /* 004f9cc8 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 004f9ccb mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f9cce push 0x2a */ { u32 v_ = 0x2au; esp -= 4; M32(esp) = v_; }
  /* 004f9cd0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f9cd1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f9cd2 call 0x9c159f */ esp -= 4; M32(esp) = 0x4f9cd7u; SAVEALL; F_009c159f(c); ABI_CHECK(0x9c159fu, 0x4f9cd2u); RETCHK(0x4f9cd7u, 0x4f9cd2u); LOADALL;
  /* 004f9cd7 add edi, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f9cda xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004f9cdc jmp 0x4f9c90 */ goto L_004f9c90;
L_004f9cde:;
  /* 004f9cde mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 004f9ce2 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9ce6 jb 0x4f9cf4 */ if (CF_) goto L_004f9cf4;
  /* 004f9ce8 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004f9ceb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9cec call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f9cf1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f9cecu); RETCHK(0x4f9cf1u, 0x4f9cecu); LOADALL;
  /* 004f9cf1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f9cf4:;
  /* 004f9cf4 mov ecx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (u32)(M32(m_)); }
  /* 004f9cf7 mov eax, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); eax = (u32)(M32(m_)); }
  /* 004f9cfa add ecx, 0x1c */ { u32 a_ = ecx, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f9cfd dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004f9cfe mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 004f9d05 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 004f9d08 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 004f9d0c mov dword ptr [ebp - 0x4c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(ecx); }
  /* 004f9d0f mov dword ptr [ebp - 0x54], eax */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(eax); }
  /* 004f9d12 jne 0x4f9c3d */ if (!ZF_) goto L_004f9c3d;
  /* 004f9d18 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_004f9d19:;
  /* 004f9d19 cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9d1d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f9d1e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f9d1f jb 0x4f9d2d */ if (CF_) goto L_004f9d2d;
  /* 004f9d21 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 004f9d24 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f9d25 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f9d2au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f9d25u); RETCHK(0x4f9d2au, 0x4f9d25u); LOADALL;
  /* 004f9d2a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f9d2d:;
  /* 004f9d2d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f9d30 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004f9d37 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004f9d3a call 0x61af31 */ esp -= 4; M32(esp) = 0x4f9d3fu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4f9d3au); RETCHK(0x4f9d3fu, 0x4f9d3au); LOADALL;
  /* 004f9d3f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f9d41 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f9d42 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f9d50(CPU *c) {
  NATIVE_HOOK(0x4f9d50u) REGS; LOADALL;
L_004f9d50:;
  /* 004f9d50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f9d51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f9d53 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f9d55 push 0x625f68 */ { u32 v_ = 0x625f68u; esp -= 4; M32(esp) = v_; }
  /* 004f9d5a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004f9d60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9d61 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004f9d68 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f9d6b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004f9d70 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f9d71 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f9d72 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f9d73 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004f9d75 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f9d77 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f9d7a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004f9d7d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f9d7e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9d7f lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f9d82 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 004f9d89 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 004f9d8c mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004f9d8f call 0x404140 */ esp -= 4; M32(esp) = 0x4f9d94u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4f9d8fu); RETCHK(0x4f9d94u, 0x4f9d8fu); LOADALL;
  /* 004f9d94 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f9d97 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004f9d9a call 0x4f9b80 */ esp -= 4; M32(esp) = 0x4f9d9fu; SAVEALL; F_004f9b80(c); ABI_CHECK(0x4f9b80u, 0x4f9d9au); RETCHK(0x4f9d9fu, 0x4f9d9au); LOADALL;
  /* 004f9d9f call 0x4f98a0 */ esp -= 4; M32(esp) = 0x4f9da4u; SAVEALL; F_004f98a0(c); ABI_CHECK(0x4f98a0u, 0x4f9d9fu); RETCHK(0x4f9da4u, 0x4f9d9fu); LOADALL;
  /* 004f9da4 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 004f9da7 mov dword ptr [ebp - 0x3c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(ebx); }
  /* 004f9daa mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 004f9dad lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_004f9db0:;
  /* 004f9db0 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 004f9db3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004f9db5 je 0x4f9e77 */ if (ZF_) goto L_004f9e77;
  /* 004f9dbb mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f9dbe sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f9dc0 mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 004f9dc5 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f9dc7 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f9dc9 mov ecx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ecx = (u32)(M32(m_)); }
  /* 004f9dcc sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004f9dcf mov eax, edx */ { eax = (u32)(edx); }
  /* 004f9dd1 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f9dd4 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f9dd6 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9dd8 jae 0x4f9e77 */ if (!CF_) goto L_004f9e77;
  /* 004f9dde mov ecx, dword ptr [ebx + esi + 0x18] */ { const u32 m_ = (u32)(ebx + esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004f9de2 cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9de5 lea eax, [ebx + esi + 0x18] */ eax = (u32)((u32)(ebx + esi + 0x18u));
  /* 004f9de9 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 004f9dec lea eax, [ebx + esi + 4] */ eax = (u32)((u32)(ebx + esi + 0x4u));
  /* 004f9df0 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 004f9df3 jb 0x4f9df7 */ if (CF_) goto L_004f9df7;
  /* 004f9df5 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
L_004f9df7:;
  /* 004f9df7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9df8 call 0x5feab2 */ esp -= 4; M32(esp) = 0x4f9dfdu; SAVEALL; F_005feab2(c); ABI_CHECK(0x5feab2u, 0x4f9df8u); RETCHK(0x4f9dfdu, 0x4f9df8u); LOADALL;
  /* 004f9dfd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f9e00 mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 004f9e03 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004f9e05 lea ebx, [ebx + esi + 0x14] */ ebx = (u32)((u32)(ebx + esi + 0x14u));
  /* 004f9e09 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004f9e10:;
  /* 004f9e10 mov edx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); edx = (u32)(M32(m_)); }
  /* 004f9e13 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 004f9e15 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 004f9e17 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9e1a mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 004f9e1d jb 0x4f9e21 */ if (CF_) goto L_004f9e21;
  /* 004f9e1f mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
L_004f9e21:;
  /* 004f9e21 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f9e22 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9e23 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f9e26 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f9e27 mov eax, edi */ { eax = (u32)(edi); }
  /* 004f9e29 call 0x9c1510 */ esp -= 4; M32(esp) = 0x4f9e2eu; SAVEALL; F_009c1510(c); ABI_CHECK(0x9c1510u, 0x4f9e29u); RETCHK(0x4f9e2eu, 0x4f9e29u); LOADALL;
  /* 004f9e2e mov edi, eax */ { edi = (u32)(eax); }
  /* 004f9e30 cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9e33 je 0x4f9e5c */ if (ZF_) goto L_004f9e5c;
  /* 004f9e35 mov edx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); edx = (u32)(M32(m_)); }
  /* 004f9e38 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 004f9e3a push 0x2a */ { u32 v_ = 0x2au; esp -= 4; M32(esp) = v_; }
  /* 004f9e3c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f9e3d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f9e3e lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f9e41 call 0x9c159f */ esp -= 4; M32(esp) = 0x4f9e46u; SAVEALL; F_009c159f(c); ABI_CHECK(0x9c159fu, 0x4f9e41u); RETCHK(0x4f9e46u, 0x4f9e41u); LOADALL;
  /* 004f9e46 mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 004f9e49 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004f9e4c push 0x2a */ { u32 v_ = 0x2au; esp -= 4; M32(esp) = v_; }
  /* 004f9e4e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9e4f mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 004f9e51 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f9e52 call 0x9c159f */ esp -= 4; M32(esp) = 0x4f9e57u; SAVEALL; F_009c159f(c); ABI_CHECK(0x9c159fu, 0x4f9e52u); RETCHK(0x4f9e57u, 0x4f9e52u); LOADALL;
  /* 004f9e57 add edi, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004f9e5a jmp 0x4f9e10 */ goto L_004f9e10;
L_004f9e5c:;
  /* 004f9e5c mov ecx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ecx = (u32)(M32(m_)); }
  /* 004f9e5f mov eax, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 004f9e62 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f9e63 add eax, 0x1c */ { u32 a_ = eax, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f9e66 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 004f9e69 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 004f9e6c mov ebx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ebx = (u32)(M32(m_)); }
  /* 004f9e6f mov dword ptr [ebp - 0x3c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(ecx); }
  /* 004f9e72 jmp 0x4f9db0 */ goto L_004f9db0;
L_004f9e77:;
  /* 004f9e77 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9e7b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004f9e7c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004f9e7d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004f9e7e jb 0x4f9e8c */ if (CF_) goto L_004f9e8c;
  /* 004f9e80 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 004f9e83 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f9e84 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f9e89u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f9e84u); RETCHK(0x4f9e89u, 0x4f9e84u); LOADALL;
  /* 004f9e89 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f9e8c:;
  /* 004f9e8c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004f9e8f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004f9e96 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004f9e99 call 0x61af31 */ esp -= 4; M32(esp) = 0x4f9e9eu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4f9e99u); RETCHK(0x4f9e9eu, 0x4f9e99u); LOADALL;
  /* 004f9e9e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004f9ea0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004f9ea1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004f9eb0(CPU *c) {
  NATIVE_HOOK(0x4f9eb0u) REGS; LOADALL;
L_004f9eb0:;
  /* 004f9eb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004f9eb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004f9eb3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f9eb5 push 0x624158 */ { u32 v_ = 0x624158u; esp -= 4; M32(esp) = v_; }
  /* 004f9eba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004f9ec0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9ec1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004f9ec8 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004f9ecb mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004f9ed0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f9ed1 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004f9ed4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004f9ed5 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004f9ed7 mov eax, edx */ { eax = (u32)(edx); }
  /* 004f9ed9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004f9eda mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 004f9ee1 mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 004f9ee4 mov byte ptr [ebp - 0x44], bl */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004f9ee7 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 004f9eea lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_004f9ef0:;
  /* 004f9ef0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004f9ef2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f9ef3 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 004f9ef5 jne 0x4f9ef0 */ if (!ZF_) goto L_004f9ef0;
  /* 004f9ef7 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f9ef9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9efa push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f9efb lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004f9efe call 0x404420 */ esp -= 4; M32(esp) = 0x4f9f03u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4f9efeu); RETCHK(0x4f9f03u, 0x4f9efeu); LOADALL;
  /* 004f9f03 lea eax, [ebp - 0x48] */ eax = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004f9f06 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004f9f09 call 0x4f9b80 */ esp -= 4; M32(esp) = 0x4f9f0eu; SAVEALL; F_004f9b80(c); ABI_CHECK(0x4f9b80u, 0x4f9f09u); RETCHK(0x4f9f0eu, 0x4f9f09u); LOADALL;
  /* 004f9f0e call 0x4f9900 */ esp -= 4; M32(esp) = 0x4f9f13u; SAVEALL; F_004f9900(c); ABI_CHECK(0x4f9900u, 0x4f9f0eu); RETCHK(0x4f9f13u, 0x4f9f0eu); LOADALL;
  /* 004f9f13 mov dword ptr [ebp - 0x50], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(eax); }
  /* 004f9f16 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004f9f18 mov dword ptr [ebp - 0x4c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(ebx); }
  /* 004f9f1b jmp 0x4f9f20 */ goto L_004f9f20;
L_004f9f20:;
  /* 004f9f20 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 004f9f23 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9f25 je 0x4f9ff5 */ if (ZF_) goto L_004f9ff5;
  /* 004f9f2b mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004f9f2e sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004f9f30 mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 004f9f35 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004f9f37 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004f9f39 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004f9f3c mov eax, edx */ { eax = (u32)(edx); }
  /* 004f9f3e shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004f9f41 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f9f43 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9f45 jae 0x4f9ff5 */ if (!CF_) goto L_004f9ff5;
  /* 004f9f4b mov eax, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); eax = (u32)(M32(m_)); }
  /* 004f9f4e push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004f9f50 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f9f52 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004f9f53 mov esi, 0xf */ { esi = (u32)(0xfu); }
  /* 004f9f58 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9f59 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f9f5c mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 004f9f5f mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 004f9f62 mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004f9f65 call 0x404140 */ esp -= 4; M32(esp) = 0x4f9f6au; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4f9f65u); RETCHK(0x4f9f6au, 0x4f9f65u); LOADALL;
  /* 004f9f6a lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004f9f6d call 0x4f9b80 */ esp -= 4; M32(esp) = 0x4f9f72u; SAVEALL; F_004f9b80(c); ABI_CHECK(0x4f9b80u, 0x4f9f6du); RETCHK(0x4f9f72u, 0x4f9f6du); LOADALL;
  /* 004f9f72 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9f76 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004f9f79 jae 0x4f9f7e */ if (!CF_) goto L_004f9f7e;
  /* 004f9f7b lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_004f9f7e:;
  /* 004f9f7e mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 004f9f81 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f9f82 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9f83 lea edx, [ebp - 0x48] */ edx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004f9f86 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f9f87 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004f9f89 call 0x9c1510 */ esp -= 4; M32(esp) = 0x4f9f8eu; SAVEALL; F_009c1510(c); ABI_CHECK(0x9c1510u, 0x4f9f89u); RETCHK(0x4f9f8eu, 0x4f9f89u); LOADALL;
  /* 004f9f8e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9f91 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 004f9f94 jne 0x4f9fc2 */ if (!ZF_) goto L_004f9fc2;
  /* 004f9f96 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9f99 jb 0x4f9fa7 */ if (CF_) goto L_004f9fa7;
  /* 004f9f9b mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004f9f9e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9f9f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f9fa4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f9f9fu); RETCHK(0x4f9fa4u, 0x4f9f9fu); LOADALL;
  /* 004f9fa4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f9fa7:;
  /* 004f9fa7 mov eax, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); eax = (u32)(M32(m_)); }
  /* 004f9faa inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004f9fab add eax, 0x1c */ { u32 a_ = eax, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004f9fae mov dword ptr [ebp - 0x4c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(eax); }
  /* 004f9fb1 mov eax, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); eax = (u32)(M32(m_)); }
  /* 004f9fb4 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 004f9fb7 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 004f9fba mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004f9fbd jmp 0x4f9f20 */ goto L_004f9f20;
L_004f9fc2:;
  /* 004f9fc2 mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 004f9fc7 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9fc9 jb 0x4f9fd7 */ if (CF_) goto L_004f9fd7;
  /* 004f9fcb mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 004f9fce push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004f9fcf call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f9fd4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f9fcfu); RETCHK(0x4f9fd4u, 0x4f9fcfu); LOADALL;
  /* 004f9fd4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f9fd7:;
  /* 004f9fd7 cmp dword ptr [ebp - 0x30], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9fda mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 004f9fdd mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 004f9fe0 mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004f9fe3 jb 0x4f9ff1 */ if (CF_) goto L_004f9ff1;
  /* 004f9fe5 mov edx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); edx = (u32)(M32(m_)); }
  /* 004f9fe8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004f9fe9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4f9feeu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f9fe9u); RETCHK(0x4f9feeu, 0x4f9fe9u); LOADALL;
  /* 004f9fee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004f9ff1:;
  /* 004f9ff1 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004f9ff3 jmp 0x4fa009 */ goto L_004fa009;
L_004f9ff5:;
  /* 004f9ff5 cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004f9ff9 jb 0x4fa007 */ if (CF_) goto L_004fa007;
  /* 004f9ffb mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 004f9ffe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004f9fff call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fa004u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4f9fffu); RETCHK(0x4fa004u, 0x4f9fffu); LOADALL;
  /* 004fa004 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fa007:;
  /* 004fa007 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_004fa009:;
  /* 004fa009 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fa00c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fa00d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa00e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fa015 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004fa018 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fa019 call 0x61af31 */ esp -= 4; M32(esp) = 0x4fa01eu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4fa019u); RETCHK(0x4fa01eu, 0x4fa019u); LOADALL;
  /* 004fa01e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fa020 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa021 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fa1d0(CPU *c) {
  NATIVE_HOOK(0x4fa1d0u) REGS; LOADALL;
L_004fa1d0:;
  /* 004fa1d0 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004fa1d2 mov dword ptr [eax], 0x64fa28 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64fa28u); }
  /* 004fa1d8 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004fa1db mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004fa1de mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 004fa1e1 mov byte ptr [eax + 0x10], cl */ { const u32 m_ = (u32)(eax + 0x10u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 004fa1e4 mov byte ptr [eax + 0x11], 1 */ { const u32 m_ = (u32)(eax + 0x11u); M8(m_) = (u8)(0x1u); }
  /* 004fa1e8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fa1f0(CPU *c) {
  NATIVE_HOOK(0x4fa1f0u) REGS; LOADALL;
L_004fa1f0:;
  /* 004fa1f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fa1f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fa1f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fa1f4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004fa1f6 call 0x4fa220 */ esp -= 4; M32(esp) = 0x4fa1fbu; SAVEALL; F_004fa220(c); ABI_CHECK(0x4fa220u, 0x4fa1f6u); RETCHK(0x4fa1fbu, 0x4fa1f6u); LOADALL;
  /* 004fa1fb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fa1ff je 0x4fa20a */ if (ZF_) goto L_004fa20a;
  /* 004fa201 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fa202 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fa207u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fa202u); RETCHK(0x4fa207u, 0x4fa202u); LOADALL;
  /* 004fa207 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fa20a:;
  /* 004fa20a mov eax, esi */ { eax = (u32)(esi); }
  /* 004fa20c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa20d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa20e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fa220(CPU *c) {
  NATIVE_HOOK(0x4fa220u) REGS; LOADALL;
L_004fa220:;
  /* 004fa220 mov dword ptr [ecx], 0x64fa28 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64fa28u); }
  /* 004fa226 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fa230(CPU *c) {
  NATIVE_HOOK(0x4fa230u) REGS; LOADALL;
L_004fa230:;
  /* 004fa230 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fa231 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fa232 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004fa234 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 004fa237 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fa239 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 004fa23c call 0x4fa6a0 */ esp -= 4; M32(esp) = 0x4fa241u; SAVEALL; F_004fa6a0(c); ABI_CHECK(0x4fa6a0u, 0x4fa23cu); RETCHK(0x4fa241u, 0x4fa23cu); LOADALL;
  /* 004fa241 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 004fa243 call 0x4fb100 */ esp -= 4; M32(esp) = 0x4fa248u; SAVEALL; F_004fb100(c); ABI_CHECK(0x4fb100u, 0x4fa243u); RETCHK(0x4fa248u, 0x4fa243u); LOADALL;
  /* 004fa248 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fa24b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa24d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa24e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fa24f je 0x4fa25e */ if (ZF_) goto L_004fa25e;
  /* 004fa251 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fa254 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa256 je 0x4fa25e */ if (ZF_) goto L_004fa25e;
  /* 004fa258 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004fa25d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fa25e:;
  /* 004fa25e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fa260 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fa270(CPU *c) {
  NATIVE_HOOK(0x4fa270u) REGS; LOADALL;
L_004fa270:;
  /* 004fa270 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fa271 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 004fa274 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa276 je 0x4fa291 */ if (ZF_) goto L_004fa291;
  /* 004fa278 call 0x4fa860 */ esp -= 4; M32(esp) = 0x4fa27du; SAVEALL; F_004fa860(c); ABI_CHECK(0x4fa860u, 0x4fa278u); RETCHK(0x4fa27du, 0x4fa278u); LOADALL;
  /* 004fa27d mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004fa280 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa282 je 0x4fa28a */ if (ZF_) goto L_004fa28a;
  /* 004fa284 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004fa286 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fa288 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fa28au; SAVEALL; call_ind(c, t_); RETCHK(0x4fa28au, 0x4fa288u); LOADALL; }
L_004fa28a:;
  /* 004fa28a mov dword ptr [edi + 4], 0 */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(0x0u); }
L_004fa291:;
  /* 004fa291 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fa294 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa296 je 0x4fa2b1 */ if (ZF_) goto L_004fa2b1;
  /* 004fa298 call 0x4fb170 */ esp -= 4; M32(esp) = 0x4fa29du; SAVEALL; F_004fb170(c); ABI_CHECK(0x4fb170u, 0x4fa298u); RETCHK(0x4fa29du, 0x4fa298u); LOADALL;
  /* 004fa29d mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fa2a0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa2a2 je 0x4fa2aa */ if (ZF_) goto L_004fa2aa;
  /* 004fa2a4 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004fa2a6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fa2a8 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fa2aau; SAVEALL; call_ind(c, t_); RETCHK(0x4fa2aau, 0x4fa2a8u); LOADALL; }
L_004fa2aa:;
  /* 004fa2aa mov dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(0x0u); }
L_004fa2b1:;
  /* 004fa2b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa2b2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fa2c0(CPU *c) {
  NATIVE_HOOK(0x4fa2c0u) REGS; LOADALL;
L_004fa2c0:;
  /* 004fa2c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fa2c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fa2c3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fa2c4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fa2c7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fa2c8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fa2c9 mov edi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edi = (u32)(M32(m_)); }
  /* 004fa2cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa2cd call 0x4fa960 */ esp -= 4; M32(esp) = 0x4fa2d2u; SAVEALL; F_004fa960(c); ABI_CHECK(0x4fa960u, 0x4fa2cdu); RETCHK(0x4fa2d2u, 0x4fa2cdu); LOADALL;
  /* 004fa2d2 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004fa2d5 mov eax, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); eax = (u32)(M32(m_)); }
  /* 004fa2d8 push 0x64 */ { u32 v_ = 0x64u; esp -= 4; M32(esp) = v_; }
  /* 004fa2da push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa2db call 0x5eeba0 */ esp -= 4; M32(esp) = 0x4fa2e0u; SAVEALL; F_005eeba0(c); ABI_CHECK(0x5eeba0u, 0x4fa2dbu); RETCHK(0x4fa2e0u, 0x4fa2dbu); LOADALL;
  /* 004fa2e0 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004fa2e3 mov ecx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004fa2e6 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004fa2e9 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 004fa2ec mov ecx, dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); ecx = (u32)(M32(m_)); }
  /* 004fa2ef mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 004fa2f2 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004fa2f5 mov esi, dword ptr [edx + eax + 0xc] */ { const u32 m_ = (u32)(edx + eax + 0xcu); esi = (u32)(M32(m_)); }
  /* 004fa2f9 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004fa2fc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fa2fd mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 004fa300 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4fa305u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4fa300u); RETCHK(0x4fa305u, 0x4fa300u); LOADALL;
  /* 004fa305 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fa306 call 0x5abd50 */ esp -= 4; M32(esp) = 0x4fa30bu; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4fa306u); RETCHK(0x4fa30bu, 0x4fa306u); LOADALL;
  /* 004fa30b mov esi, eax */ { esi = (u32)(eax); }
  /* 004fa30d mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004fa310 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004fa315 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa316 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004fa318 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4fa31du; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4fa318u); RETCHK(0x4fa31du, 0x4fa318u); LOADALL;
  /* 004fa31d mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fa320 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 004fa323 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fa326 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa327 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4fa32cu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4fa327u); RETCHK(0x4fa32cu, 0x4fa327u); LOADALL;
  /* 004fa32c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fa32f add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fa332 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fa333 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fa336 call 0x4fb160 */ esp -= 4; M32(esp) = 0x4fa33bu; SAVEALL; F_004fb160(c); ABI_CHECK(0x4fb160u, 0x4fa336u); RETCHK(0x4fa33bu, 0x4fa336u); LOADALL;
  /* 004fa33b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fa33c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa33d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fa33f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa340 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fa350(CPU *c) {
  NATIVE_HOOK(0x4fa350u) REGS; LOADALL;
L_004fa350:;
  /* 004fa350 mov al, byte ptr [esi + 0x11] */ { const u32 m_ = (u32)(esi + 0x11u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fa353 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fa355 je 0x4fa379 */ if (ZF_) goto L_004fa379;
  /* 004fa357 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fa35a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa35c je 0x4fa36d */ if (ZF_) goto L_004fa36d;
  /* 004fa35e mov cl, byte ptr [eax + 0x54] */ { const u32 m_ = (u32)(eax + 0x54u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fa361 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fa363 je 0x4fa36d */ if (ZF_) goto L_004fa36d;
  /* 004fa365 lea ecx, [eax + 8] */ ecx = (u32)((u32)(eax + 0x8u));
  /* 004fa368 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004fa36a call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fa36du; SAVEALL; call_ind(c, t_); RETCHK(0x4fa36du, 0x4fa36au); LOADALL; }
L_004fa36d:;
  /* 004fa36d mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fa370 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa372 je 0x4fa379 */ if (ZF_) goto L_004fa379;
  /* 004fa374 jmp 0x4fa9f0 */ goto L_004fa9f0;
L_004fa379:;
  /* 004fa379 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fa9f0:;
  /* 004fa9f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fa9f1 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fa9f3 mov al, byte ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fa9f6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fa9f8 je 0x4faa25 */ if (ZF_) goto L_004faa25;
  /* 004fa9fa mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fa9fd lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 004faa00 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004faa01 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4faa04u; SAVEALL; call_ind(c, t_); RETCHK(0x4faa04u, 0x4faa01u); LOADALL; }
  /* 004faa04 add esi, 0xf0 */ { u32 a_ = esi, b_ = 0xf0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004faa0a mov edi, 0x22 */ { edi = (u32)(0x22u); }
  /* 004faa0f nop */ ;
L_004faa10:;
  /* 004faa10 mov eax, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004faa13 sub esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004faa16 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004faa18 je 0x4faa21 */ if (ZF_) goto L_004faa21;
  /* 004faa1a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004faa1c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004faa1e call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4faa21u; SAVEALL; call_ind(c, t_); RETCHK(0x4faa21u, 0x4faa1eu); LOADALL; }
L_004faa21:;
  /* 004faa21 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004faa22 jne 0x4faa10 */ if (!ZF_) goto L_004faa10;
  /* 004faa24 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_004faa25:;
  /* 004faa25 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004faa26 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fa380(CPU *c) {
  NATIVE_HOOK(0x4fa380u) REGS; LOADALL;
L_004fa380:;
  /* 004fa380 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fa381 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fa383 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa385 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fa386 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fa389 jne 0x4fa399 */ if (!ZF_) goto L_004fa399;
  /* 004fa38b mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fa38e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa390 jne 0x4fa39f */ if (!ZF_) goto L_004fa39f;
  /* 004fa392 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004fa394 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa395 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa396 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004fa399:;
  /* 004fa399 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fa39c mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
L_004fa39f:;
  /* 004fa39f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fa3a0 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 004fa3a3 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa3a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fa3a6 je 0x4fa3b0 */ if (ZF_) goto L_004fa3b0;
  /* 004fa3a8 mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 004fa3ab call 0x4fac60 */ esp -= 4; M32(esp) = 0x4fa3b0u; SAVEALL; F_004fac60(c); ABI_CHECK(0x4fac60u, 0x4fa3abu); RETCHK(0x4fa3b0u, 0x4fa3abu); LOADALL;
L_004fa3b0:;
  /* 004fa3b0 mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 004fa3b3 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa3b5 je 0x4fa3c2 */ if (ZF_) goto L_004fa3c2;
  /* 004fa3b7 mov esi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); esi = (u32)(M32(m_)); }
  /* 004fa3ba call 0x4fb240 */ esp -= 4; M32(esp) = 0x4fa3bfu; SAVEALL; F_004fb240(c); ABI_CHECK(0x4fb240u, 0x4fa3bau); RETCHK(0x4fa3bfu, 0x4fa3bau); LOADALL;
  /* 004fa3bf mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_004fa3c2:;
  /* 004fa3c2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fa3c3 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fa3c5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fa3c6 mov byte ptr [esi + 0x10], al */ { const u32 m_ = (u32)(esi + 0x10u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004fa3c9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa3ca pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa3cb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fa3d0(CPU *c) {
  NATIVE_HOOK(0x4fa3d0u) REGS; LOADALL;
L_004fa3d0:;
  /* 004fa3d0 mov al, byte ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fa3d3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fa3d5 je 0x4fa3f5 */ if (ZF_) goto L_004fa3f5;
  /* 004fa3d7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fa3d8 mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 004fa3db test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa3dd je 0x4fa3e4 */ if (ZF_) goto L_004fa3e4;
  /* 004fa3df call 0x4facc0 */ esp -= 4; M32(esp) = 0x4fa3e4u; SAVEALL; F_004facc0(c); ABI_CHECK(0x4facc0u, 0x4fa3dfu); RETCHK(0x4fa3e4u, 0x4fa3dfu); LOADALL;
L_004fa3e4:;
  /* 004fa3e4 mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 004fa3e7 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa3e9 je 0x4fa3f0 */ if (ZF_) goto L_004fa3f0;
  /* 004fa3eb call 0x4fb260 */ esp -= 4; M32(esp) = 0x4fa3f0u; SAVEALL; F_004fb260(c); ABI_CHECK(0x4fb260u, 0x4fa3ebu); RETCHK(0x4fa3f0u, 0x4fa3ebu); LOADALL;
L_004fa3f0:;
  /* 004fa3f0 mov byte ptr [esi + 0x10], 0 */ { const u32 m_ = (u32)(esi + 0x10u); M8(m_) = (u8)(0x0u); }
  /* 004fa3f4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_004fa3f5:;
  /* 004fa3f5 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fa3f7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fa400(CPU *c) {
  NATIVE_HOOK(0x4fa400u) REGS; LOADALL;
L_004fa400:;
  /* 004fa400 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fa401 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fa403 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fa404 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa405 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4fa40au; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4fa405u); RETCHK(0x4fa40au, 0x4fa405u); LOADALL;
  /* 004fa40a mov al, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fa40d call 0x4fb4c0 */ esp -= 4; M32(esp) = 0x4fa412u; SAVEALL; F_004fb4c0(c); ABI_CHECK(0x4fb4c0u, 0x4fa40du); RETCHK(0x4fa412u, 0x4fa40du); LOADALL;
  /* 004fa412 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fa414 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa416 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 004fa419 je 0x4fa47c */ if (ZF_) goto L_004fa47c;
  /* 004fa41b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fa41c mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004fa41f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fa420 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 004fa423 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa425 je 0x4fa451 */ if (ZF_) goto L_004fa451;
  /* 004fa427 call 0x4fb260 */ esp -= 4; M32(esp) = 0x4fa42cu; SAVEALL; F_004fb260(c); ABI_CHECK(0x4fb260u, 0x4fa427u); RETCHK(0x4fa42cu, 0x4fa427u); LOADALL;
  /* 004fa42c mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fa42f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa431 je 0x4fa451 */ if (ZF_) goto L_004fa451;
  /* 004fa433 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fa435 call 0x4fb170 */ esp -= 4; M32(esp) = 0x4fa43au; SAVEALL; F_004fb170(c); ABI_CHECK(0x4fb170u, 0x4fa435u); RETCHK(0x4fa43au, 0x4fa435u); LOADALL;
  /* 004fa43a mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fa43d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa43f je 0x4fa447 */ if (ZF_) goto L_004fa447;
  /* 004fa441 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004fa443 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fa445 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fa447u; SAVEALL; call_ind(c, t_); RETCHK(0x4fa447u, 0x4fa445u); LOADALL; }
L_004fa447:;
  /* 004fa447 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004fa44a mov dword ptr [ebx + 8], 0 */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(0x0u); }
L_004fa451:;
  /* 004fa451 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004fa454 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 004fa457 mov esi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); esi = (u32)(M32(m_)); }
  /* 004fa45a call 0x4fb240 */ esp -= 4; M32(esp) = 0x4fa45fu; SAVEALL; F_004fb240(c); ABI_CHECK(0x4fb240u, 0x4fa45au); RETCHK(0x4fa45fu, 0x4fa45au); LOADALL;
  /* 004fa45f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004fa461 call 0x4fa6a0 */ esp -= 4; M32(esp) = 0x4fa466u; SAVEALL; F_004fa6a0(c); ABI_CHECK(0x4fa6a0u, 0x4fa461u); RETCHK(0x4fa466u, 0x4fa461u); LOADALL;
  /* 004fa466 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 004fa468 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fa46b mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fa46e call 0x4fb100 */ esp -= 4; M32(esp) = 0x4fa473u; SAVEALL; F_004fb100(c); ABI_CHECK(0x4fb100u, 0x4fa46eu); RETCHK(0x4fa473u, 0x4fa46eu); LOADALL;
  /* 004fa473 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fa474 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fa475 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fa477 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa478 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa479 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004fa47c:;
  /* 004fa47c xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004fa47e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa47f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa480 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004fa490(CPU *c) {
  NATIVE_HOOK(0x4fa490u) REGS; LOADALL;
L_004fa490:;
  /* 004fa490 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fa491 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fa493 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fa494 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa495 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4fa49au; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4fa495u); RETCHK(0x4fa49au, 0x4fa495u); LOADALL;
  /* 004fa49a mov al, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fa49d call 0x4fb570 */ esp -= 4; M32(esp) = 0x4fa4a2u; SAVEALL; F_004fb570(c); ABI_CHECK(0x4fb570u, 0x4fa49du); RETCHK(0x4fa4a2u, 0x4fa49du); LOADALL;
  /* 004fa4a2 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fa4a4 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa4a6 je 0x4fa506 */ if (ZF_) goto L_004fa506;
  /* 004fa4a8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fa4a9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fa4ac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fa4ad mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 004fa4b0 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa4b2 je 0x4fa4e1 */ if (ZF_) goto L_004fa4e1;
  /* 004fa4b4 call 0x4facc0 */ esp -= 4; M32(esp) = 0x4fa4b9u; SAVEALL; F_004facc0(c); ABI_CHECK(0x4facc0u, 0x4fa4b4u); RETCHK(0x4fa4b9u, 0x4fa4b4u); LOADALL;
  /* 004fa4b9 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fa4bc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa4be je 0x4fa4e1 */ if (ZF_) goto L_004fa4e1;
  /* 004fa4c0 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fa4c2 call 0x4fa860 */ esp -= 4; M32(esp) = 0x4fa4c7u; SAVEALL; F_004fa860(c); ABI_CHECK(0x4fa860u, 0x4fa4c2u); RETCHK(0x4fa4c7u, 0x4fa4c2u); LOADALL;
  /* 004fa4c7 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fa4ca mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004fa4cd test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa4cf je 0x4fa4d7 */ if (ZF_) goto L_004fa4d7;
  /* 004fa4d1 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004fa4d3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fa4d5 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fa4d7u; SAVEALL; call_ind(c, t_); RETCHK(0x4fa4d7u, 0x4fa4d5u); LOADALL; }
L_004fa4d7:;
  /* 004fa4d7 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fa4de mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_004fa4e1:;
  /* 004fa4e1 mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 004fa4e4 mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 004fa4e7 call 0x4fac60 */ esp -= 4; M32(esp) = 0x4fa4ecu; SAVEALL; F_004fac60(c); ABI_CHECK(0x4fac60u, 0x4fa4e7u); RETCHK(0x4fa4ecu, 0x4fa4e7u); LOADALL;
  /* 004fa4ec mov eax, esi */ { eax = (u32)(esi); }
  /* 004fa4ee call 0x4fa6a0 */ esp -= 4; M32(esp) = 0x4fa4f3u; SAVEALL; F_004fa6a0(c); ABI_CHECK(0x4fa6a0u, 0x4fa4eeu); RETCHK(0x4fa4f3u, 0x4fa4eeu); LOADALL;
  /* 004fa4f3 mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fa4f6 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 004fa4f8 call 0x4fb100 */ esp -= 4; M32(esp) = 0x4fa4fdu; SAVEALL; F_004fb100(c); ABI_CHECK(0x4fb100u, 0x4fa4f8u); RETCHK(0x4fa4fdu, 0x4fa4f8u); LOADALL;
  /* 004fa4fd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fa4fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa4ff mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fa501 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fa502 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa503 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004fa506:;
  /* 004fa506 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004fa508 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fa509 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa50a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004fa510(CPU *c) {
  NATIVE_HOOK(0x4fa510u) REGS; LOADALL;
L_004fa510:;
  /* 004fa510 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fa511 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fa513 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fa514 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fa515 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fa516 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fa517 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fa519 mov edi, eax */ { edi = (u32)(eax); }
  /* 004fa51b call 0x4019a0 */ esp -= 4; M32(esp) = 0x4fa520u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x4fa51bu); RETCHK(0x4fa520u, 0x4fa51bu); LOADALL;
  /* 004fa520 mov esi, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); esi = (u32)(M32(m_)); }
  /* 004fa526 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fa529 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa52b je 0x4fa63f */ if (ZF_) goto L_004fa63f;
  /* 004fa531 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fa534 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa535 call 0x55ead0 */ esp -= 4; M32(esp) = 0x4fa53au; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x4fa535u); RETCHK(0x4fa53au, 0x4fa535u); LOADALL;
  /* 004fa53a mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fa53c test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa53e je 0x4fa63f */ if (ZF_) goto L_004fa63f;
  /* 004fa544 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa546 mov esi, dword ptr [ebx + 0xc6c] */ { const u32 m_ = (u32)(ebx + 0xc6cu); esi = (u32)(M32(m_)); }
  /* 004fa54c jle 0x4fa550 */ if ((ZF_|LT_)) goto L_004fa550;
  /* 004fa54e mov esi, edi */ { esi = (u32)(edi); }
L_004fa550:;
  /* 004fa550 call 0x556030 */ esp -= 4; M32(esp) = 0x4fa555u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x4fa550u); RETCHK(0x4fa555u, 0x4fa550u); LOADALL;
  /* 004fa555 mov edx, esi */ { edx = (u32)(esi); }
  /* 004fa557 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004fa559 call 0x555820 */ esp -= 4; M32(esp) = 0x4fa55eu; SAVEALL; F_00555820(c); ABI_CHECK(0x555820u, 0x4fa559u); RETCHK(0x4fa55eu, 0x4fa559u); LOADALL;
  /* 004fa55e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa560 jne 0x4fa582 */ if (!ZF_) goto L_004fa582;
  /* 004fa562 mov esi, 0x2b02 */ { esi = (u32)(0x2b02u); }
  /* 004fa567 mov dword ptr [ebx + 0xc6c], esi */ { const u32 m_ = (u32)(ebx + 0xc6cu); M32(m_) = (u32)(esi); }
  /* 004fa56d mov byte ptr [ebx + 0xddf], 1 */ { const u32 m_ = (u32)(ebx + 0xddfu); M8(m_) = (u8)(0x1u); }
  /* 004fa574 mov byte ptr [ebx + 0xede], 1 */ { const u32 m_ = (u32)(ebx + 0xedeu); M8(m_) = (u8)(0x1u); }
  /* 004fa57b mov byte ptr [ebx + 0xf47], 1 */ { const u32 m_ = (u32)(ebx + 0xf47u); M8(m_) = (u8)(0x1u); }
L_004fa582:;
  /* 004fa582 mov edi, dword ptr [ebx + 0xbb4] */ { const u32 m_ = (u32)(ebx + 0xbb4u); edi = (u32)(M32(m_)); }
  /* 004fa588 mov dword ptr [ebp + 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edi); }
  /* 004fa58b call 0x556030 */ esp -= 4; M32(esp) = 0x4fa590u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x4fa58bu); RETCHK(0x4fa590u, 0x4fa58bu); LOADALL;
  /* 004fa590 mov edx, edi */ { edx = (u32)(edi); }
  /* 004fa592 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004fa594 call 0x555800 */ esp -= 4; M32(esp) = 0x4fa599u; SAVEALL; F_00555800(c); ABI_CHECK(0x555800u, 0x4fa594u); RETCHK(0x4fa599u, 0x4fa594u); LOADALL;
  /* 004fa599 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa59b jne 0x4fa5c0 */ if (!ZF_) goto L_004fa5c0;
  /* 004fa59d mov eax, 0x5209 */ { eax = (u32)(0x5209u); }
  /* 004fa5a2 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 004fa5a5 mov dword ptr [ebx + 0xbb8], eax */ { const u32 m_ = (u32)(ebx + 0xbb8u); M32(m_) = (u32)(eax); }
  /* 004fa5ab mov byte ptr [ebx + 0xdda], 1 */ { const u32 m_ = (u32)(ebx + 0xddau); M8(m_) = (u8)(0x1u); }
  /* 004fa5b2 mov byte ptr [ebx + 0xed9], 1 */ { const u32 m_ = (u32)(ebx + 0xed9u); M8(m_) = (u8)(0x1u); }
  /* 004fa5b9 mov byte ptr [ebx + 0xf47], 1 */ { const u32 m_ = (u32)(ebx + 0xf47u); M8(m_) = (u8)(0x1u); }
L_004fa5c0:;
  /* 004fa5c0 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa5c3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fa5c5 jne 0x4fa5e2 */ if (!ZF_) goto L_004fa5e2;
  /* 004fa5c7 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fa5ca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fa5cb mov eax, 0x2b02 */ { eax = (u32)(0x2b02u); }
  /* 004fa5d0 call 0x4fa490 */ esp -= 4; M32(esp) = 0x4fa5d5u; SAVEALL; F_004fa490(c); ABI_CHECK(0x4fa490u, 0x4fa5d0u); RETCHK(0x4fa5d5u, 0x4fa5d0u); LOADALL;
  /* 004fa5d5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fa5d7 jne 0x4fa623 */ if (!ZF_) goto L_004fa623;
  /* 004fa5d9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fa5da pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa5db pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fa5dc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fa5de pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa5df ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004fa5e2:;
  /* 004fa5e2 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004fa5e5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fa5e6 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fa5e8 call 0x4fa490 */ esp -= 4; M32(esp) = 0x4fa5edu; SAVEALL; F_004fa490(c); ABI_CHECK(0x4fa490u, 0x4fa5e8u); RETCHK(0x4fa5edu, 0x4fa5e8u); LOADALL;
  /* 004fa5ed test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fa5ef je 0x4fa63f */ if (ZF_) goto L_004fa63f;
  /* 004fa5f1 mov eax, dword ptr [ebx + 0xc7c] */ { const u32 m_ = (u32)(ebx + 0xc7cu); eax = (u32)(M32(m_)); }
  /* 004fa5f7 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004fa5f9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa5fb mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004fa5fe jle 0x4fa623 */ if ((ZF_|LT_)) goto L_004fa623;
L_004fa600:;
  /* 004fa600 mov esi, dword ptr [ebx + edi*4 + 0xc80] */ { const u32 m_ = (u32)(ebx + edi * 4u + 0xc80u); esi = (u32)(M32(m_)); }
  /* 004fa607 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa60a je 0x4fa61e */ if (ZF_) goto L_004fa61e;
  /* 004fa60c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa60e je 0x4fa61e */ if (ZF_) goto L_004fa61e;
  /* 004fa610 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fa613 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fa616 call 0x4fad90 */ esp -= 4; M32(esp) = 0x4fa61bu; SAVEALL; F_004fad90(c); ABI_CHECK(0x4fad90u, 0x4fa616u); RETCHK(0x4fa61bu, 0x4fa616u); LOADALL;
  /* 004fa61b mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
L_004fa61e:;
  /* 004fa61e inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004fa61f cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa621 jl 0x4fa600 */ if (LT_) goto L_004fa600;
L_004fa623:;
  /* 004fa623 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fa626 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa629 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fa62b jne 0x4fa64a */ if (!ZF_) goto L_004fa64a;
  /* 004fa62d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fa630 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fa631 mov eax, 0xc9 */ { eax = (u32)(0xc9u); }
  /* 004fa636 call 0x4fa400 */ esp -= 4; M32(esp) = 0x4fa63bu; SAVEALL; F_004fa400(c); ABI_CHECK(0x4fa400u, 0x4fa636u); RETCHK(0x4fa63bu, 0x4fa636u); LOADALL;
  /* 004fa63b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fa63d jne 0x4fa680 */ if (!ZF_) goto L_004fa680;
L_004fa63f:;
  /* 004fa63f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fa640 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa641 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004fa643 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fa644 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fa646 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa647 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004fa64a:;
  /* 004fa64a mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004fa64d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fa64e call 0x4fa400 */ esp -= 4; M32(esp) = 0x4fa653u; SAVEALL; F_004fa400(c); ABI_CHECK(0x4fa400u, 0x4fa64eu); RETCHK(0x4fa653u, 0x4fa64eu); LOADALL;
  /* 004fa653 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fa655 je 0x4fa63f */ if (ZF_) goto L_004fa63f;
  /* 004fa657 mov edi, dword ptr [ebx + 0xc3c] */ { const u32 m_ = (u32)(ebx + 0xc3cu); edi = (u32)(M32(m_)); }
  /* 004fa65d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004fa65f test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa661 jle 0x4fa680 */ if ((ZF_|LT_)) goto L_004fa680;
L_004fa663:;
  /* 004fa663 mov eax, dword ptr [ebx + esi*4 + 0xc40] */ { const u32 m_ = (u32)(ebx + esi * 4u + 0xc40u); eax = (u32)(M32(m_)); }
  /* 004fa66a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa66d je 0x4fa67b */ if (ZF_) goto L_004fa67b;
  /* 004fa66f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fa672 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004fa675 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fa676 call 0x4fb290 */ esp -= 4; M32(esp) = 0x4fa67bu; SAVEALL; F_004fb290(c); ABI_CHECK(0x4fb290u, 0x4fa676u); RETCHK(0x4fa67bu, 0x4fa676u); LOADALL;
L_004fa67b:;
  /* 004fa67b inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004fa67c cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa67e jl 0x4fa663 */ if (LT_) goto L_004fa663;
L_004fa680:;
  /* 004fa680 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fa683 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fa685 call 0x4fa6a0 */ esp -= 4; M32(esp) = 0x4fa68au; SAVEALL; F_004fa6a0(c); ABI_CHECK(0x4fa6a0u, 0x4fa685u); RETCHK(0x4fa68au, 0x4fa685u); LOADALL;
  /* 004fa68a mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fa68d mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 004fa68f call 0x4fb100 */ esp -= 4; M32(esp) = 0x4fa694u; SAVEALL; F_004fb100(c); ABI_CHECK(0x4fb100u, 0x4fa68fu); RETCHK(0x4fa694u, 0x4fa68fu); LOADALL;
  /* 004fa694 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fa695 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa696 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fa698 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fa699 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fa69b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa69c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004fa6a0(CPU *c) {
  NATIVE_HOOK(0x4fa6a0u) REGS; LOADALL;
L_004fa6a0:;
  /* 004fa6a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fa6a1 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 004fa6a4 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa6a6 je 0x4fa6af */ if (ZF_) goto L_004fa6af;
  /* 004fa6a8 call 0x4fb050 */ esp -= 4; M32(esp) = 0x4fa6adu; SAVEALL; F_004fb050(c); ABI_CHECK(0x4fb050u, 0x4fa6a8u); RETCHK(0x4fa6adu, 0x4fa6a8u); LOADALL;
  /* 004fa6ad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa6ae ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fa6af:;
  /* 004fa6af mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fa6b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa6b2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fa700(CPU *c) {
  NATIVE_HOOK(0x4fa700u) REGS; LOADALL;
L_004fa700:;
  /* 004fa700 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fa701 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fa702 lea eax, [edx + 4] */ eax = (u32)((u32)(edx + 0x4u));
  /* 004fa705 mov dword ptr [edx], 0x64fa2c */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0x64fa2cu); }
  /* 004fa70b call 0x544940 */ esp -= 4; M32(esp) = 0x4fa710u; SAVEALL; F_00544940(c); ABI_CHECK(0x544940u, 0x4fa70bu); RETCHK(0x4fa710u, 0x4fa70bu); LOADALL;
  /* 004fa710 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004fa712 mov byte ptr [edx + 0x5c], bl */ { const u32 m_ = (u32)(edx + 0x5cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004fa715 mov dword ptr [edx + 0x64], ebx */ { const u32 m_ = (u32)(edx + 0x64u); M32(m_) = (u32)(ebx); }
  /* 004fa718 mov dword ptr [edx + 0x60], ebx */ { const u32 m_ = (u32)(edx + 0x60u); M32(m_) = (u32)(ebx); }
  /* 004fa71b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fa71d lea ecx, [edx + 0x40] */ ecx = (u32)((u32)(edx + 0x40u));
  /* 004fa720 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 004fa722 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004fa725 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004fa728 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 004fa72b mov dword ptr [ecx + 0x10], eax */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(eax); }
  /* 004fa72e mov ecx, 0x22 */ { ecx = (u32)(0x22u); }
  /* 004fa733 lea edi, [edx + 0x68] */ edi = (u32)((u32)(edx + 0x68u));
  /* 004fa736 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004fa738 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fa739 mov dword ptr [edx + 0x54], ebx */ { const u32 m_ = (u32)(edx + 0x54u); M32(m_) = (u32)(ebx); }
  /* 004fa73c mov dword ptr [edx + 0x58], ebx */ { const u32 m_ = (u32)(edx + 0x58u); M32(m_) = (u32)(ebx); }
  /* 004fa73f mov eax, edx */ { eax = (u32)(edx); }
  /* 004fa741 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fa742 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fa750(CPU *c) {
  NATIVE_HOOK(0x4fa750u) REGS; LOADALL;
L_004fa750:;
  /* 004fa750 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fa751 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fa753 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fa754 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004fa756 call 0x4fa780 */ esp -= 4; M32(esp) = 0x4fa75bu; SAVEALL; F_004fa780(c); ABI_CHECK(0x4fa780u, 0x4fa756u); RETCHK(0x4fa75bu, 0x4fa756u); LOADALL;
  /* 004fa75b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fa75f je 0x4fa76a */ if (ZF_) goto L_004fa76a;
  /* 004fa761 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fa762 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fa767u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fa762u); RETCHK(0x4fa767u, 0x4fa762u); LOADALL;
  /* 004fa767 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fa76a:;
  /* 004fa76a mov eax, esi */ { eax = (u32)(esi); }
  /* 004fa76c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa76d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa76e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fa780(CPU *c) {
  NATIVE_HOOK(0x4fa780u) REGS; LOADALL;
L_004fa780:;
  /* 004fa780 mov dword ptr [ecx], 0x64fa2c */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64fa2cu); }
  /* 004fa786 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004fa789 jmp 0x5449b0 */ SAVEALL; F_005449b0(c); return;
}

void F_004fa790(CPU *c) {
  NATIVE_HOOK(0x4fa790u) REGS; LOADALL;
L_004fa790:;
  /* 004fa790 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fa791 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fa792 mov esi, edx */ { esi = (u32)(edx); }
  /* 004fa794 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004fa796 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fa797 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004fa799 mov dword ptr [esi + 0x58], ebx */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(ebx); }
  /* 004fa79c mov dword ptr [esi + 0x54], ebx */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(ebx); }
  /* 004fa79f mov dword ptr [esi + 0x3c], eax */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 004fa7a2 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fa7a5 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa7a7 je 0x4fa7b5 */ if (ZF_) goto L_004fa7b5;
  /* 004fa7a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa7aa call 0x5487a0 */ esp -= 4; M32(esp) = 0x4fa7afu; SAVEALL; F_005487a0(c); ABI_CHECK(0x5487a0u, 0x4fa7aau); RETCHK(0x4fa7afu, 0x4fa7aau); LOADALL;
  /* 004fa7af add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fa7b2 mov dword ptr [esi + 0x48], eax */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(eax); }
L_004fa7b5:;
  /* 004fa7b5 cmp dword ptr [esi + 0x48], ebx */ { const u32 m_ = (u32)(esi + 0x48u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa7b8 je 0x4fa81b */ if (ZF_) goto L_004fa81b;
  /* 004fa7ba mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 004fa7bd cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa7bf je 0x4fa7cd */ if (ZF_) goto L_004fa7cd;
  /* 004fa7c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa7c2 call 0x5487a0 */ esp -= 4; M32(esp) = 0x4fa7c7u; SAVEALL; F_005487a0(c); ABI_CHECK(0x5487a0u, 0x4fa7c2u); RETCHK(0x4fa7c7u, 0x4fa7c2u); LOADALL;
  /* 004fa7c7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fa7ca mov dword ptr [esi + 0x50], eax */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(eax); }
L_004fa7cd:;
  /* 004fa7cd cmp dword ptr [esi + 0x50], ebx */ { const u32 m_ = (u32)(esi + 0x50u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa7d0 je 0x4fa81b */ if (ZF_) goto L_004fa81b;
  /* 004fa7d2 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fa7d5 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa7d7 je 0x4fa7e5 */ if (ZF_) goto L_004fa7e5;
  /* 004fa7d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa7da call 0x5487a0 */ esp -= 4; M32(esp) = 0x4fa7dfu; SAVEALL; F_005487a0(c); ABI_CHECK(0x5487a0u, 0x4fa7dau); RETCHK(0x4fa7dfu, 0x4fa7dau); LOADALL;
  /* 004fa7df add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fa7e2 mov dword ptr [esi + 0x44], eax */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(eax); }
L_004fa7e5:;
  /* 004fa7e5 cmp dword ptr [esi + 0x44], ebx */ { const u32 m_ = (u32)(esi + 0x44u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa7e8 je 0x4fa81b */ if (ZF_) goto L_004fa81b;
  /* 004fa7ea mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fa7ed cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa7ef je 0x4fa7fd */ if (ZF_) goto L_004fa7fd;
  /* 004fa7f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa7f2 call 0x5487a0 */ esp -= 4; M32(esp) = 0x4fa7f7u; SAVEALL; F_005487a0(c); ABI_CHECK(0x5487a0u, 0x4fa7f2u); RETCHK(0x4fa7f7u, 0x4fa7f2u); LOADALL;
  /* 004fa7f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fa7fa mov dword ptr [esi + 0x4c], eax */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(eax); }
L_004fa7fd:;
  /* 004fa7fd cmp dword ptr [esi + 0x4c], ebx */ { const u32 m_ = (u32)(esi + 0x4cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa800 je 0x4fa81b */ if (ZF_) goto L_004fa81b;
  /* 004fa802 mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 004fa804 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa806 je 0x4fa814 */ if (ZF_) goto L_004fa814;
  /* 004fa808 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fa809 call 0x5486d0 */ esp -= 4; M32(esp) = 0x4fa80eu; SAVEALL; F_005486d0(c); ABI_CHECK(0x5486d0u, 0x4fa809u); RETCHK(0x4fa80eu, 0x4fa809u); LOADALL;
  /* 004fa80e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fa811 mov dword ptr [esi + 0x40], eax */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(eax); }
L_004fa814:;
  /* 004fa814 mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 004fa817 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa819 jne 0x4fa821 */ if (!ZF_) goto L_004fa821;
L_004fa81b:;
  /* 004fa81b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fa81c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa81d xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004fa81f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fa820 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fa821:;
  /* 004fa821 lea ecx, [esi + 0x60] */ ecx = (u32)((u32)(esi + 0x60u));
  /* 004fa824 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fa825 push 0x545180 */ { u32 v_ = 0x545180u; esp -= 4; M32(esp) = v_; }
  /* 004fa82a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa82b call 0x577da0 */ esp -= 4; M32(esp) = 0x4fa830u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x4fa82bu); RETCHK(0x4fa830u, 0x4fa82bu); LOADALL;
  /* 004fa830 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004fa833 lea edi, [esi + 4] */ edi = (u32)((u32)(esi + 0x4u));
  /* 004fa836 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fa839 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fa83b call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fa83eu; SAVEALL; call_ind(c, t_); RETCHK(0x4fa83eu, 0x4fa83bu); LOADALL; }
  /* 004fa83e mov ebx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); ebx = (u32)(M32(m_)); }
  /* 004fa841 call 0x544c90 */ esp -= 4; M32(esp) = 0x4fa846u; SAVEALL; F_00544c90(c); ABI_CHECK(0x544c90u, 0x4fa841u); RETCHK(0x4fa846u, 0x4fa841u); LOADALL;
  /* 004fa846 call 0x4faa30 */ esp -= 4; M32(esp) = 0x4fa84bu; SAVEALL; F_004faa30(c); ABI_CHECK(0x4faa30u, 0x4fa846u); RETCHK(0x4fa84bu, 0x4fa846u); LOADALL;
  /* 004fa84b mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fa84d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fa84e mov byte ptr [esi + 0x38], al */ { const u32 m_ = (u32)(esi + 0x38u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004fa851 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa852 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fa853 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fa860(CPU *c) {
  NATIVE_HOOK(0x4fa860u) REGS; LOADALL;
L_004fa860:;
  /* 004fa860 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fa861 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fa863 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fa864 mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 004fa867 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fa868 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004fa86a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa86c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fa86d je 0x4fa890 */ if (ZF_) goto L_004fa890;
  /* 004fa86f cmp dword ptr [eax + 0x3c], ebx */ { const u32 m_ = (u32)(eax + 0x3cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa872 je 0x4fa881 */ if (ZF_) goto L_004fa881;
  /* 004fa874 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa875 mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 004fa878 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa879 call 0x578680 */ esp -= 4; M32(esp) = 0x4fa87eu; SAVEALL; F_00578680(c); ABI_CHECK(0x578680u, 0x4fa879u); RETCHK(0x4fa87eu, 0x4fa879u); LOADALL;
  /* 004fa87e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fa881:;
  /* 004fa881 mov ecx, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ecx = (u32)(M32(m_)); }
  /* 004fa884 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fa885 call 0x577ff0 */ esp -= 4; M32(esp) = 0x4fa88au; SAVEALL; F_00577ff0(c); ABI_CHECK(0x577ff0u, 0x4fa885u); RETCHK(0x4fa88au, 0x4fa885u); LOADALL;
  /* 004fa88a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fa88d mov dword ptr [esi + 0x48], ebx */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(ebx); }
L_004fa890:;
  /* 004fa890 mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 004fa893 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa895 je 0x4fa8b8 */ if (ZF_) goto L_004fa8b8;
  /* 004fa897 cmp dword ptr [eax + 0x3c], ebx */ { const u32 m_ = (u32)(eax + 0x3cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa89a je 0x4fa8a9 */ if (ZF_) goto L_004fa8a9;
  /* 004fa89c mov edx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); edx = (u32)(M32(m_)); }
  /* 004fa89f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa8a0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fa8a1 call 0x578680 */ esp -= 4; M32(esp) = 0x4fa8a6u; SAVEALL; F_00578680(c); ABI_CHECK(0x578680u, 0x4fa8a1u); RETCHK(0x4fa8a6u, 0x4fa8a1u); LOADALL;
  /* 004fa8a6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fa8a9:;
  /* 004fa8a9 mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 004fa8ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa8ad call 0x577ff0 */ esp -= 4; M32(esp) = 0x4fa8b2u; SAVEALL; F_00577ff0(c); ABI_CHECK(0x577ff0u, 0x4fa8adu); RETCHK(0x4fa8b2u, 0x4fa8adu); LOADALL;
  /* 004fa8b2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fa8b5 mov dword ptr [esi + 0x50], ebx */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(ebx); }
L_004fa8b8:;
  /* 004fa8b8 mov eax, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); eax = (u32)(M32(m_)); }
  /* 004fa8bb cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa8bd je 0x4fa8e0 */ if (ZF_) goto L_004fa8e0;
  /* 004fa8bf cmp dword ptr [eax + 0x3c], ebx */ { const u32 m_ = (u32)(eax + 0x3cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa8c2 je 0x4fa8d1 */ if (ZF_) goto L_004fa8d1;
  /* 004fa8c4 mov ecx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); ecx = (u32)(M32(m_)); }
  /* 004fa8c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa8c8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fa8c9 call 0x578680 */ esp -= 4; M32(esp) = 0x4fa8ceu; SAVEALL; F_00578680(c); ABI_CHECK(0x578680u, 0x4fa8c9u); RETCHK(0x4fa8ceu, 0x4fa8c9u); LOADALL;
  /* 004fa8ce add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fa8d1:;
  /* 004fa8d1 mov edx, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); edx = (u32)(M32(m_)); }
  /* 004fa8d4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fa8d5 call 0x577ff0 */ esp -= 4; M32(esp) = 0x4fa8dau; SAVEALL; F_00577ff0(c); ABI_CHECK(0x577ff0u, 0x4fa8d5u); RETCHK(0x4fa8dau, 0x4fa8d5u); LOADALL;
  /* 004fa8da add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fa8dd mov dword ptr [esi + 0x44], ebx */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(ebx); }
L_004fa8e0:;
  /* 004fa8e0 mov eax, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); eax = (u32)(M32(m_)); }
  /* 004fa8e3 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa8e5 je 0x4fa908 */ if (ZF_) goto L_004fa908;
  /* 004fa8e7 cmp dword ptr [eax + 0x3c], ebx */ { const u32 m_ = (u32)(eax + 0x3cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa8ea je 0x4fa8f9 */ if (ZF_) goto L_004fa8f9;
  /* 004fa8ec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa8ed mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 004fa8f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa8f1 call 0x578680 */ esp -= 4; M32(esp) = 0x4fa8f6u; SAVEALL; F_00578680(c); ABI_CHECK(0x578680u, 0x4fa8f1u); RETCHK(0x4fa8f6u, 0x4fa8f1u); LOADALL;
  /* 004fa8f6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fa8f9:;
  /* 004fa8f9 mov ecx, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 004fa8fc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fa8fd call 0x577ff0 */ esp -= 4; M32(esp) = 0x4fa902u; SAVEALL; F_00577ff0(c); ABI_CHECK(0x577ff0u, 0x4fa8fdu); RETCHK(0x4fa902u, 0x4fa8fdu); LOADALL;
  /* 004fa902 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fa905 mov dword ptr [esi + 0x4c], ebx */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(ebx); }
L_004fa908:;
  /* 004fa908 mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 004fa90b cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa90d je 0x4fa91b */ if (ZF_) goto L_004fa91b;
  /* 004fa90f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa910 call 0x5784d0 */ esp -= 4; M32(esp) = 0x4fa915u; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x4fa910u); RETCHK(0x4fa915u, 0x4fa910u); LOADALL;
  /* 004fa915 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fa918 mov dword ptr [esi + 0x40], ebx */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(ebx); }
L_004fa91b:;
  /* 004fa91b lea edi, [esi + 0xf0] */ edi = (u32)((u32)(esi + 0xf0u));
  /* 004fa921 mov dword ptr [ebp - 4], 0x22 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x22u); }
L_004fa928:;
  /* 004fa928 mov ecx, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004fa92b sub edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004fa92e cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa930 je 0x4fa945 */ if (ZF_) goto L_004fa945;
  /* 004fa932 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004fa934 call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fa937u; SAVEALL; call_ind(c, t_); RETCHK(0x4fa937u, 0x4fa934u); LOADALL; }
  /* 004fa937 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 004fa939 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa93b je 0x4fa943 */ if (ZF_) goto L_004fa943;
  /* 004fa93d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004fa93f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fa941 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fa943u; SAVEALL; call_ind(c, t_); RETCHK(0x4fa943u, 0x4fa941u); LOADALL; }
L_004fa943:;
  /* 004fa943 mov dword ptr [edi], ebx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebx); }
L_004fa945:;
  /* 004fa945 dec dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fa948 jne 0x4fa928 */ if (!ZF_) goto L_004fa928;
  /* 004fa94a mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004fa94d lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 004fa950 call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fa953u; SAVEALL; call_ind(c, t_); RETCHK(0x4fa953u, 0x4fa950u); LOADALL; }
  /* 004fa953 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fa954 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fa955 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fa957 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa958 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fa960(CPU *c) {
  NATIVE_HOOK(0x4fa960u) REGS; LOADALL;
L_004fa960:;
  /* 004fa960 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fa961 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fa963 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fa964 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004fa967 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fa96a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fa96b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fa96c lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 004fa96f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fa970 call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fa973u; SAVEALL; call_ind(c, t_); RETCHK(0x4fa973u, 0x4fa970u); LOADALL; }
  /* 004fa973 mov ebx, 0x63ff70 */ { ebx = (u32)(0x63ff70u); }
  /* 004fa978 lea esi, [edi + 0xf0] */ esi = (u32)((u32)(edi + 0xf0u));
  /* 004fa97e mov edi, edi */ { edi = (u32)(edi); }
L_004fa980:;
  /* 004fa980 mov eax, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004fa983 sub esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fa986 sub ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004fa989 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa98b mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004fa98e je 0x4fa9d1 */ if (ZF_) goto L_004fa9d1;
  /* 004fa990 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 004fa992 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004fa995 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fa996 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa997 call 0x5eeba0 */ esp -= 4; M32(esp) = 0x4fa99cu; SAVEALL; F_005eeba0(c); ABI_CHECK(0x5eeba0u, 0x4fa997u); RETCHK(0x4fa99cu, 0x4fa997u); LOADALL;
  /* 004fa99c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fa99f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa9a1 jl 0x4fa9d1 */ if (LT_) goto L_004fa9d1;
  /* 004fa9a3 mov edx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); edx = (u32)(M32(m_)); }
  /* 004fa9a6 mov ecx, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004fa9a9 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004fa9ab mov ebx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ebx = (u32)(M32(m_)); }
  /* 004fa9ad shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004fa9b0 mov eax, dword ptr [ecx + eax + 0xc] */ { const u32 m_ = (u32)(ecx + eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fa9b4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa9b5 call 0x5abd50 */ esp -= 4; M32(esp) = 0x4fa9bau; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4fa9b5u); RETCHK(0x4fa9bau, 0x4fa9b5u); LOADALL;
  /* 004fa9ba mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 004fa9bc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fa9bf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa9c0 call dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fa9c3u; SAVEALL; call_ind(c, t_); RETCHK(0x4fa9c3u, 0x4fa9c0u); LOADALL; }
  /* 004fa9c3 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 004fa9c5 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004fa9c8 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004fa9ca push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fa9cb call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fa9ceu; SAVEALL; call_ind(c, t_); RETCHK(0x4fa9ceu, 0x4fa9cbu); LOADALL; }
  /* 004fa9ce mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
L_004fa9d1:;
  /* 004fa9d1 cmp ebx, 0x63fee8 */ { u32 a_ = ebx, b_ = 0x63fee8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa9d7 jg 0x4fa980 */ if (!(ZF_|LT_)) goto L_004fa980;
  /* 004fa9d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fa9da pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fa9db mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fa9dd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa9de ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004faa30(CPU *c) {
  NATIVE_HOOK(0x4faa30u) REGS; LOADALL;
L_004faa30:;
  /* 004faa30 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004faa33 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004faa34 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004faa35 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 004faa37 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004faa38 call 0x5eeba0 */ esp -= 4; M32(esp) = 0x4faa3du; SAVEALL; F_005eeba0(c); ABI_CHECK(0x5eeba0u, 0x4faa38u); RETCHK(0x4faa3du, 0x4faa38u); LOADALL;
  /* 004faa3d mov edi, eax */ { edi = (u32)(eax); }
  /* 004faa3f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004faa42 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004faa44 jl 0x4faa98 */ if (LT_) goto L_004faa98;
  /* 004faa46 call 0x5ab9b0 */ esp -= 4; M32(esp) = 0x4faa4bu; SAVEALL; F_005ab9b0(c); ABI_CHECK(0x5ab9b0u, 0x4faa46u); RETCHK(0x4faa4bu, 0x4faa46u); LOADALL;
  /* 004faa4b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004faa4d mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 004faa50 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004faa51 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004faa52 call 0x579d90 */ esp -= 4; M32(esp) = 0x4faa57u; SAVEALL; F_00579d90(c); ABI_CHECK(0x579d90u, 0x4faa52u); RETCHK(0x4faa57u, 0x4faa52u); LOADALL;
  /* 004faa57 mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 004faa5a mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 004faa5d shl edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 004faa60 mov eax, dword ptr [edi + edx + 0xc] */ { const u32 m_ = (u32)(edi + edx + 0xcu); eax = (u32)(M32(m_)); }
  /* 004faa64 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004faa65 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004faa66 call 0x5abec0 */ esp -= 4; M32(esp) = 0x4faa6bu; SAVEALL; F_005abec0(c); ABI_CHECK(0x5abec0u, 0x4faa66u); RETCHK(0x4faa6bu, 0x4faa66u); LOADALL;
  /* 004faa6b mov ecx, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ecx = (u32)(M32(m_)); }
  /* 004faa6e mov edx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); edx = (u32)(M32(m_)); }
  /* 004faa71 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004faa72 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004faa73 call 0x578650 */ esp -= 4; M32(esp) = 0x4faa78u; SAVEALL; F_00578650(c); ABI_CHECK(0x578650u, 0x4faa73u); RETCHK(0x4faa78u, 0x4faa73u); LOADALL;
  /* 004faa78 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004faa79 call 0x5abd50 */ esp -= 4; M32(esp) = 0x4faa7eu; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4faa79u); RETCHK(0x4faa7eu, 0x4faa79u); LOADALL;
  /* 004faa7e mov edi, eax */ { edi = (u32)(eax); }
  /* 004faa80 mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 004faa83 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004faa86 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004faa87 call 0x5abd50 */ esp -= 4; M32(esp) = 0x4faa8cu; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4faa87u); RETCHK(0x4faa8cu, 0x4faa87u); LOADALL;
  /* 004faa8c fld dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); FPUSH((double)MF32(m_)); }
  /* 004faa8f fsub dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004faa92 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004faa95 fstp dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); MF32(m_) = (float)ST(0); FPOP(); }
L_004faa98:;
  /* 004faa98 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004faa9b push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 004faa9d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004faa9e call 0x5eeba0 */ esp -= 4; M32(esp) = 0x4faaa3u; SAVEALL; F_005eeba0(c); ABI_CHECK(0x5eeba0u, 0x4faa9eu); RETCHK(0x4faaa3u, 0x4faa9eu); LOADALL;
  /* 004faaa3 mov edi, eax */ { edi = (u32)(eax); }
  /* 004faaa5 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004faaa8 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004faaaa jl 0x4fab13 */ if (LT_) goto L_004fab13;
  /* 004faaac call 0x5ab9b0 */ esp -= 4; M32(esp) = 0x4faab1u; SAVEALL; F_005ab9b0(c); ABI_CHECK(0x5ab9b0u, 0x4faaacu); RETCHK(0x4faab1u, 0x4faaacu); LOADALL;
  /* 004faab1 mov edx, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); edx = (u32)(M32(m_)); }
  /* 004faab4 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004faab6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004faab7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004faab8 call 0x579d90 */ esp -= 4; M32(esp) = 0x4faabdu; SAVEALL; F_00579d90(c); ABI_CHECK(0x579d90u, 0x4faab8u); RETCHK(0x4faabdu, 0x4faab8u); LOADALL;
  /* 004faabd mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004faac0 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004faac3 shl edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 004faac6 mov edx, dword ptr [edi + ecx + 0xc] */ { const u32 m_ = (u32)(edi + ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 004faaca push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004faacb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004faacc call 0x5abec0 */ esp -= 4; M32(esp) = 0x4faad1u; SAVEALL; F_005abec0(c); ABI_CHECK(0x5abec0u, 0x4faaccu); RETCHK(0x4faad1u, 0x4faaccu); LOADALL;
  /* 004faad1 mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 004faad4 mov ecx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); ecx = (u32)(M32(m_)); }
  /* 004faad7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004faad8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004faad9 call 0x578650 */ esp -= 4; M32(esp) = 0x4faadeu; SAVEALL; F_00578650(c); ABI_CHECK(0x578650u, 0x4faad9u); RETCHK(0x4faadeu, 0x4faad9u); LOADALL;
  /* 004faade fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 004faae4 fld dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); FPUSH((double)MF32(m_)); }
  /* 004faae7 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004faaea fucompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 004faaec fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004faaee test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004faaf1 jp 0x4fab13 */ if (PF_) goto L_004fab13;
  /* 004faaf3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004faaf4 call 0x5abd50 */ esp -= 4; M32(esp) = 0x4faaf9u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4faaf4u); RETCHK(0x4faaf9u, 0x4faaf4u); LOADALL;
  /* 004faaf9 mov edx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); edx = (u32)(M32(m_)); }
  /* 004faafc mov edi, eax */ { edi = (u32)(eax); }
  /* 004faafe mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fab01 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fab02 call 0x5abd50 */ esp -= 4; M32(esp) = 0x4fab07u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4fab02u); RETCHK(0x4fab07u, 0x4fab02u); LOADALL;
  /* 004fab07 fld dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); FPUSH((double)MF32(m_)); }
  /* 004fab0a fsub dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004fab0d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fab10 fstp dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); MF32(m_) = (float)ST(0); FPOP(); }
L_004fab13:;
  /* 004fab13 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004fab16 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 004fab18 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fab19 call 0x5eeba0 */ esp -= 4; M32(esp) = 0x4fab1eu; SAVEALL; F_005eeba0(c); ABI_CHECK(0x5eeba0u, 0x4fab19u); RETCHK(0x4fab1eu, 0x4fab19u); LOADALL;
  /* 004fab1e mov edi, eax */ { edi = (u32)(eax); }
  /* 004fab20 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fab23 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fab25 jl 0x4fab79 */ if (LT_) goto L_004fab79;
  /* 004fab27 call 0x5ab9b0 */ esp -= 4; M32(esp) = 0x4fab2cu; SAVEALL; F_005ab9b0(c); ABI_CHECK(0x5ab9b0u, 0x4fab27u); RETCHK(0x4fab2cu, 0x4fab27u); LOADALL;
  /* 004fab2c mov ecx, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ecx = (u32)(M32(m_)); }
  /* 004fab2f mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fab31 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fab32 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fab33 call 0x579d90 */ esp -= 4; M32(esp) = 0x4fab38u; SAVEALL; F_00579d90(c); ABI_CHECK(0x579d90u, 0x4fab33u); RETCHK(0x4fab38u, 0x4fab33u); LOADALL;
  /* 004fab38 mov edx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M32(m_)); }
  /* 004fab3b mov eax, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004fab3e shl edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 004fab41 mov ecx, dword ptr [edi + eax + 0xc] */ { const u32 m_ = (u32)(edi + eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004fab45 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fab46 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fab47 call 0x5abec0 */ esp -= 4; M32(esp) = 0x4fab4cu; SAVEALL; F_005abec0(c); ABI_CHECK(0x5abec0u, 0x4fab47u); RETCHK(0x4fab4cu, 0x4fab47u); LOADALL;
  /* 004fab4c mov edx, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); edx = (u32)(M32(m_)); }
  /* 004fab4f mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 004fab52 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fab53 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fab54 call 0x578650 */ esp -= 4; M32(esp) = 0x4fab59u; SAVEALL; F_00578650(c); ABI_CHECK(0x578650u, 0x4fab54u); RETCHK(0x4fab59u, 0x4fab54u); LOADALL;
  /* 004fab59 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fab5a call 0x5abd50 */ esp -= 4; M32(esp) = 0x4fab5fu; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4fab5au); RETCHK(0x4fab5fu, 0x4fab5au); LOADALL;
  /* 004fab5f mov ecx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); ecx = (u32)(M32(m_)); }
  /* 004fab62 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004fab65 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fab66 mov edi, eax */ { edi = (u32)(eax); }
  /* 004fab68 call 0x5abd50 */ esp -= 4; M32(esp) = 0x4fab6du; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4fab68u); RETCHK(0x4fab6du, 0x4fab68u); LOADALL;
  /* 004fab6d fld dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); FPUSH((double)MF32(m_)); }
  /* 004fab70 fsub dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004fab73 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fab76 fstp dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); MF32(m_) = (float)ST(0); FPOP(); }
L_004fab79:;
  /* 004fab79 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004fab7c push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 004fab7e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fab7f call 0x5eeba0 */ esp -= 4; M32(esp) = 0x4fab84u; SAVEALL; F_005eeba0(c); ABI_CHECK(0x5eeba0u, 0x4fab7fu); RETCHK(0x4fab84u, 0x4fab7fu); LOADALL;
  /* 004fab84 mov edi, eax */ { edi = (u32)(eax); }
  /* 004fab86 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fab89 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fab8b jl 0x4fabf4 */ if (LT_) goto L_004fabf4;
  /* 004fab8d call 0x5ab9b0 */ esp -= 4; M32(esp) = 0x4fab92u; SAVEALL; F_005ab9b0(c); ABI_CHECK(0x5ab9b0u, 0x4fab8du); RETCHK(0x4fab92u, 0x4fab8du); LOADALL;
  /* 004fab92 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fab94 mov eax, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); eax = (u32)(M32(m_)); }
  /* 004fab97 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fab98 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fab99 call 0x579d90 */ esp -= 4; M32(esp) = 0x4fab9eu; SAVEALL; F_00579d90(c); ABI_CHECK(0x579d90u, 0x4fab99u); RETCHK(0x4fab9eu, 0x4fab99u); LOADALL;
  /* 004fab9e mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 004faba1 mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 004faba4 shl edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 004faba7 mov eax, dword ptr [edi + edx + 0xc] */ { const u32 m_ = (u32)(edi + edx + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fabab push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fabac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fabad call 0x5abec0 */ esp -= 4; M32(esp) = 0x4fabb2u; SAVEALL; F_005abec0(c); ABI_CHECK(0x5abec0u, 0x4fabadu); RETCHK(0x4fabb2u, 0x4fabadu); LOADALL;
  /* 004fabb2 mov ecx, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 004fabb5 mov edx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); edx = (u32)(M32(m_)); }
  /* 004fabb8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fabb9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fabba call 0x578650 */ esp -= 4; M32(esp) = 0x4fabbfu; SAVEALL; F_00578650(c); ABI_CHECK(0x578650u, 0x4fabbau); RETCHK(0x4fabbfu, 0x4fabbau); LOADALL;
  /* 004fabbf fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 004fabc5 fld dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); FPUSH((double)MF32(m_)); }
  /* 004fabc8 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fabcb fucompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 004fabcd fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004fabcf test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fabd2 jp 0x4fabf4 */ if (PF_) goto L_004fabf4;
  /* 004fabd4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fabd5 call 0x5abd50 */ esp -= 4; M32(esp) = 0x4fabdau; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4fabd5u); RETCHK(0x4fabdau, 0x4fabd5u); LOADALL;
  /* 004fabda mov edi, eax */ { edi = (u32)(eax); }
  /* 004fabdc mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 004fabdf mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004fabe2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fabe3 call 0x5abd50 */ esp -= 4; M32(esp) = 0x4fabe8u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4fabe3u); RETCHK(0x4fabe8u, 0x4fabe3u); LOADALL;
  /* 004fabe8 fld dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); FPUSH((double)MF32(m_)); }
  /* 004fabeb fsub dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004fabee add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fabf1 fstp dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); MF32(m_) = (float)ST(0); FPOP(); }
L_004fabf4:;
  /* 004fabf4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fabf5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fabf6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fac00(CPU *c) {
  NATIVE_HOOK(0x4fac00u) REGS; LOADALL;
L_004fac00:;
  /* 004fac00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fac01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fac03 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004fac06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fac09 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fac0b sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 004fac0e dec cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ - 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 004fac10 and ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004fac13 mov byte ptr [eax + 2], cl */ { const u32 m_ = (u32)(eax + 0x2u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 004fac16 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fac17 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fac20(CPU *c) {
  NATIVE_HOOK(0x4fac20u) REGS; LOADALL;
L_004fac20:;
  /* 004fac20 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fac21 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fac22 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fac24 add esi, 0xf0 */ { u32 a_ = esi, b_ = 0xf0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fac2a mov ebx, 0x22 */ { ebx = (u32)(0x22u); }
  /* 004fac2f nop */ ;
L_004fac30:;
  /* 004fac30 mov eax, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004fac33 sub esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fac36 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fac38 je 0x4fac55 */ if (ZF_) goto L_004fac55;
  /* 004fac3a mov dword ptr [eax + 0x5c], edi */ { const u32 m_ = (u32)(eax + 0x5cu); M32(m_) = (u32)(edi); }
  /* 004fac3d mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004fac3f mov eax, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); eax = (u32)(M32(m_)); }
  /* 004fac42 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fac44 je 0x4fac55 */ if (ZF_) goto L_004fac55;
  /* 004fac46 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fac47 push 0x4fac00 */ { u32 v_ = 0x4fac00u; esp -= 4; M32(esp) = v_; }
  /* 004fac4c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fac4d call 0x577da0 */ esp -= 4; M32(esp) = 0x4fac52u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x4fac4du); RETCHK(0x4fac52u, 0x4fac4du); LOADALL;
  /* 004fac52 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fac55:;
  /* 004fac55 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fac56 jne 0x4fac30 */ if (!ZF_) goto L_004fac30;
  /* 004fac58 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fac59 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fac5a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fac60(CPU *c) {
  NATIVE_HOOK(0x4fac60u) REGS; LOADALL;
L_004fac60:;
  /* 004fac60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fac61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fac63 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fac64 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fac66 jne 0x4fac6e */ if (!ZF_) goto L_004fac6e;
  /* 004fac68 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004fac6a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fac6c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fac6d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fac6e:;
  /* 004fac6e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fac6f lea esi, [ebx + 0xf0] */ esi = (u32)((u32)(ebx + 0xf0u));
  /* 004fac75 mov dword ptr [ebp - 4], 0x22 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x22u); }
  /* 004fac7c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004fac80:;
  /* 004fac80 mov eax, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004fac83 sub esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004fac86 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fac88 je 0x4fac92 */ if (ZF_) goto L_004fac92;
  /* 004fac8a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004fac8c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004fac8e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fac8f call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fac92u; SAVEALL; call_ind(c, t_); RETCHK(0x4fac92u, 0x4fac8fu); LOADALL; }
L_004fac92:;
  /* 004fac92 dec dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fac95 jne 0x4fac80 */ if (!ZF_) goto L_004fac80;
  /* 004fac97 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fac9a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fac9c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fac9d je 0x4faca9 */ if (ZF_) goto L_004faca9;
  /* 004fac9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004faca0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004faca1 call 0x57ad90 */ esp -= 4; M32(esp) = 0x4faca6u; SAVEALL; F_0057ad90(c); ABI_CHECK(0x57ad90u, 0x4faca1u); RETCHK(0x4faca6u, 0x4faca1u); LOADALL;
  /* 004faca6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004faca9:;
  /* 004faca9 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004facab mov dword ptr [ebx + 0x64], edi */ { const u32 m_ = (u32)(ebx + 0x64u); M32(m_) = (u32)(edi); }
  /* 004facae mov byte ptr [ebx + 0x5c], al */ { const u32 m_ = (u32)(ebx + 0x5cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004facb1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004facb3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004facb4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004facc0(CPU *c) {
  NATIVE_HOOK(0x4facc0u) REGS; LOADALL;
L_004facc0:;
  /* 004facc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004facc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004facc3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004facc4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004facc5 lea esi, [edi + 0xf0] */ esi = (u32)((u32)(edi + 0xf0u));
  /* 004faccb mov dword ptr [ebp - 4], 0x22 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x22u); }
L_004facd2:;
  /* 004facd2 mov eax, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004facd5 sub esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004facd8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004facda je 0x4face3 */ if (ZF_) goto L_004face3;
  /* 004facdc mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004facde mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004face0 call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4face3u; SAVEALL; call_ind(c, t_); RETCHK(0x4face3u, 0x4face0u); LOADALL; }
L_004face3:;
  /* 004face3 dec dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004face6 jne 0x4facd2 */ if (!ZF_) goto L_004facd2;
  /* 004face8 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 004faceb test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004faced je 0x4fad06 */ if (ZF_) goto L_004fad06;
  /* 004facef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004facf0 call 0x57b140 */ esp -= 4; M32(esp) = 0x4facf5u; SAVEALL; F_0057b140(c); ABI_CHECK(0x57b140u, 0x4facf0u); RETCHK(0x4facf5u, 0x4facf0u); LOADALL;
  /* 004facf5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004facf8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004facfa je 0x4fad06 */ if (ZF_) goto L_004fad06;
  /* 004facfc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004facfd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004facfe call 0x57aef0 */ esp -= 4; M32(esp) = 0x4fad03u; SAVEALL; F_0057aef0(c); ABI_CHECK(0x57aef0u, 0x4facfeu); RETCHK(0x4fad03u, 0x4facfeu); LOADALL;
  /* 004fad03 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fad06:;
  /* 004fad06 mov byte ptr [edi + 0x5c], 0 */ { const u32 m_ = (u32)(edi + 0x5cu); M8(m_) = (u8)(0x0u); }
  /* 004fad0a mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fad0c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fad0d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fad0f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fad10 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fad20(CPU *c) {
  NATIVE_HOOK(0x4fad20u) REGS; LOADALL;
L_004fad20:;
  /* 004fad20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fad21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fad23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fad24 call 0x4faf40 */ esp -= 4; M32(esp) = 0x4fad29u; SAVEALL; F_004faf40(c); ABI_CHECK(0x4faf40u, 0x4fad24u); RETCHK(0x4fad29u, 0x4fad24u); LOADALL;
  /* 004fad29 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fad2b cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fad2e je 0x4fad85 */ if (ZF_) goto L_004fad85;
  /* 004fad30 mov ecx, dword ptr [edi + esi*4 + 0x68] */ { const u32 m_ = (u32)(edi + esi * 4u + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004fad34 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fad36 je 0x4fad53 */ if (ZF_) goto L_004fad53;
  /* 004fad38 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004fad3a call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fad3du; SAVEALL; call_ind(c, t_); RETCHK(0x4fad3du, 0x4fad3au); LOADALL; }
  /* 004fad3d mov ecx, dword ptr [edi + esi*4 + 0x68] */ { const u32 m_ = (u32)(edi + esi * 4u + 0x68u); ecx = (u32)(M32(m_)); }
  /* 004fad41 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fad43 je 0x4fad4b */ if (ZF_) goto L_004fad4b;
  /* 004fad45 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004fad47 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fad49 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fad4bu; SAVEALL; call_ind(c, t_); RETCHK(0x4fad4bu, 0x4fad49u); LOADALL; }
L_004fad4b:;
  /* 004fad4b mov dword ptr [edi + esi*4 + 0x68], 0 */ { const u32 m_ = (u32)(edi + esi * 4u + 0x68u); M32(m_) = (u32)(0x0u); }
L_004fad53:;
  /* 004fad53 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fad56 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fad58 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fad59 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4fad5eu; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4fad59u); RETCHK(0x4fad5eu, 0x4fad59u); LOADALL;
  /* 004fad5e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fad5f call 0x4fb6a0 */ esp -= 4; M32(esp) = 0x4fad64u; SAVEALL; F_004fb6a0(c); ABI_CHECK(0x4fb6a0u, 0x4fad5fu); RETCHK(0x4fad64u, 0x4fad5fu); LOADALL;
  /* 004fad64 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fad66 mov dword ptr [edi + esi*4 + 0x68], eax */ { const u32 m_ = (u32)(edi + esi * 4u + 0x68u); M32(m_) = (u32)(eax); }
  /* 004fad6a je 0x4fad85 */ if (ZF_) goto L_004fad85;
  /* 004fad6c mov cl, byte ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fad6f test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fad71 je 0x4fad7e */ if (ZF_) goto L_004fad7e;
  /* 004fad73 mov ecx, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); ecx = (u32)(M32(m_)); }
  /* 004fad76 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004fad78 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fad79 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004fad7b call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fad7eu; SAVEALL; call_ind(c, t_); RETCHK(0x4fad7eu, 0x4fad7bu); LOADALL; }
L_004fad7e:;
  /* 004fad7e mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fad80 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fad81 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fad82 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004fad85:;
  /* 004fad85 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004fad87 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fad88 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fad89 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fad90(CPU *c) {
  NATIVE_HOOK(0x4fad90u) REGS; LOADALL;
L_004fad90:;
  /* 004fad90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fad91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fad93 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fad94 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fad95 mov edi, eax */ { edi = (u32)(eax); }
  /* 004fad97 call 0x556030 */ esp -= 4; M32(esp) = 0x4fad9cu; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x4fad97u); RETCHK(0x4fad9cu, 0x4fad97u); LOADALL;
  /* 004fad9c mov edx, esi */ { edx = (u32)(esi); }
  /* 004fad9e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004fada0 call 0x555860 */ esp -= 4; M32(esp) = 0x4fada5u; SAVEALL; F_00555860(c); ABI_CHECK(0x555860u, 0x4fada0u); RETCHK(0x4fada5u, 0x4fada0u); LOADALL;
  /* 004fada5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fada7 jne 0x4fadb0 */ if (!ZF_) goto L_004fadb0;
  /* 004fada9 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004fadab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fadac mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fadae pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fadaf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fadb0:;
  /* 004fadb0 mov ecx, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); ecx = (u32)(M32(m_)); }
  /* 004fadb6 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004fadb8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fadb9 cdq */ edx = (u32)((s32)eax >> 31);
  /* 004fadba mov ebx, 0x5f5e100 */ { ebx = (u32)(0x5f5e100u); }
  /* 004fadbf idiv ebx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ebx, &q_, &r_, 0x4fadbfu); eax = q_; edx = r_; }
  /* 004fadc1 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fadc3 cmp ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fadc6 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 004fadc9 jne 0x4fae8f */ if (!ZF_) goto L_004fae8f;
  /* 004fadcf mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004fadd1 cdq */ edx = (u32)((s32)eax >> 31);
  /* 004fadd2 mov ecx, 0x2710 */ { ecx = (u32)(0x2710u); }
  /* 004fadd7 idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x4fadd7u); eax = q_; edx = r_; }
  /* 004fadd9 cmp eax, dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004faddc jne 0x4fae8f */ if (!ZF_) goto L_004fae8f;
  /* 004fade2 mov eax, edx */ { eax = (u32)(edx); }
  /* 004fade4 cdq */ edx = (u32)((s32)eax >> 31);
  /* 004fade5 mov ecx, 0x3e8 */ { ecx = (u32)(0x3e8u); }
  /* 004fadea idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x4fadeau); eax = q_; edx = r_; }
  /* 004fadec mov eax, 0x51eb851f */ { eax = (u32)(0x51eb851fu); }
  /* 004fadf1 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004fadf3 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004fadf6 mov eax, edx */ { eax = (u32)(edx); }
  /* 004fadf8 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004fadfb add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fadfd cmp eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fae00 ja 0x4fae87 */ if (!(CF_|ZF_)) goto L_004fae87;
  /* 004fae06 jmp dword ptr [eax*4 + 0x4faef8] */ { const u32 m_ = (u32)(eax * 4u + 0x4faef8u); u32 t_ = M32(m_); switch (t_) { case 0x4fae0du: goto L_004fae0d; case 0x4fae1du: goto L_004fae1d; case 0x4fae30u: goto L_004fae30; case 0x4fae43u: goto L_004fae43; case 0x4fae56u: goto L_004fae56; case 0x4fae69u: goto L_004fae69; case 0x4fae7cu: goto L_004fae7c; case 0x4fae87u: goto L_004fae87; default: SAVEALL; call_ind(c, t_); return; } }
L_004fae0d:;
  /* 004fae0d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fae0e mov edi, esi */ { edi = (u32)(esi); }
  /* 004fae10 call 0x4faf60 */ esp -= 4; M32(esp) = 0x4fae15u; SAVEALL; F_004faf60(c); ABI_CHECK(0x4faf60u, 0x4fae10u); RETCHK(0x4fae15u, 0x4fae10u); LOADALL;
  /* 004fae15 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fae16 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fae18 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fae19 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fae1b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fae1c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fae1d:;
  /* 004fae1d mov ecx, 0x46 */ { ecx = (u32)(0x46u); }
  /* 004fae22 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fae23 call 0x4fad20 */ esp -= 4; M32(esp) = 0x4fae28u; SAVEALL; F_004fad20(c); ABI_CHECK(0x4fad20u, 0x4fae23u); RETCHK(0x4fae28u, 0x4fae23u); LOADALL;
  /* 004fae28 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fae29 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fae2b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fae2c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fae2e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fae2f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fae30:;
  /* 004fae30 mov ecx, 0x3c */ { ecx = (u32)(0x3cu); }
  /* 004fae35 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fae36 call 0x4fad20 */ esp -= 4; M32(esp) = 0x4fae3bu; SAVEALL; F_004fad20(c); ABI_CHECK(0x4fad20u, 0x4fae36u); RETCHK(0x4fae3bu, 0x4fae36u); LOADALL;
  /* 004fae3b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fae3c mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fae3e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fae3f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fae41 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fae42 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fae43:;
  /* 004fae43 mov ecx, 0x5a */ { ecx = (u32)(0x5au); }
  /* 004fae48 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fae49 call 0x4fad20 */ esp -= 4; M32(esp) = 0x4fae4eu; SAVEALL; F_004fad20(c); ABI_CHECK(0x4fad20u, 0x4fae49u); RETCHK(0x4fae4eu, 0x4fae49u); LOADALL;
  /* 004fae4e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fae4f mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fae51 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fae52 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fae54 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fae55 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fae56:;
  /* 004fae56 mov ecx, 0x6e */ { ecx = (u32)(0x6eu); }
  /* 004fae5b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fae5c call 0x4fad20 */ esp -= 4; M32(esp) = 0x4fae61u; SAVEALL; F_004fad20(c); ABI_CHECK(0x4fad20u, 0x4fae5cu); RETCHK(0x4fae61u, 0x4fae5cu); LOADALL;
  /* 004fae61 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fae62 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fae64 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fae65 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fae67 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fae68 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fae69:;
  /* 004fae69 mov ecx, 0x78 */ { ecx = (u32)(0x78u); }
  /* 004fae6e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fae6f call 0x4fad20 */ esp -= 4; M32(esp) = 0x4fae74u; SAVEALL; F_004fad20(c); ABI_CHECK(0x4fad20u, 0x4fae6fu); RETCHK(0x4fae74u, 0x4fae6fu); LOADALL;
  /* 004fae74 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fae75 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fae77 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fae78 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fae7a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fae7b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fae7c:;
  /* 004fae7c mov ecx, 0x82 */ { ecx = (u32)(0x82u); }
  /* 004fae81 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fae82 call 0x4fad20 */ esp -= 4; M32(esp) = 0x4fae87u; SAVEALL; F_004fad20(c); ABI_CHECK(0x4fad20u, 0x4fae82u); RETCHK(0x4fae87u, 0x4fae82u); LOADALL;
L_004fae87:;
  /* 004fae87 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fae88 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fae8a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fae8b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fae8d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fae8e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fae8f:;
  /* 004fae8f cmp ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fae92 jne 0x4faeed */ if (!ZF_) goto L_004faeed;
  /* 004fae94 mov eax, 0x6b5fca6b */ { eax = (u32)(0x6b5fca6bu); }
  /* 004fae99 imul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); s64 p_ = (s64)(s32)eax * (s32)M32(m_); eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004fae9c sar edx, 0x16 */ { u32 n_ = (22u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004fae9f mov eax, edx */ { eax = (u32)(edx); }
  /* 004faea1 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004faea4 lea edx, [edx + eax - 1] */ edx = (u32)((u32)(edx + eax + 0xffffffffu));
  /* 004faea8 cmp edx, 6 */ { u32 a_ = edx, b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004faeab ja 0x4faee5 */ if (!(CF_|ZF_)) goto L_004faee5;
  /* 004faead jmp dword ptr [edx*4 + 0x4faf20] */ { const u32 m_ = (u32)(edx * 4u + 0x4faf20u); u32 t_ = M32(m_); switch (t_) { case 0x4faeb4u: goto L_004faeb4; case 0x4faec7u: goto L_004faec7; case 0x4faedau: goto L_004faeda; case 0x4faee5u: goto L_004faee5; case 0x62dfb0u: goto L_0062dfb0; case 0x62dfc0u: goto L_0062dfc0; default: SAVEALL; call_ind(c, t_); return; } }
L_004faeb4:;
  /* 004faeb4 mov ecx, 0x64 */ { ecx = (u32)(0x64u); }
  /* 004faeb9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004faeba call 0x4fad20 */ esp -= 4; M32(esp) = 0x4faebfu; SAVEALL; F_004fad20(c); ABI_CHECK(0x4fad20u, 0x4faebau); RETCHK(0x4faebfu, 0x4faebau); LOADALL;
  /* 004faebf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004faec0 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004faec2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004faec3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004faec5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004faec6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004faec7:;
  /* 004faec7 mov ecx, 0x35 */ { ecx = (u32)(0x35u); }
  /* 004faecc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004faecd call 0x4fad20 */ esp -= 4; M32(esp) = 0x4faed2u; SAVEALL; F_004fad20(c); ABI_CHECK(0x4fad20u, 0x4faecdu); RETCHK(0x4faed2u, 0x4faecdu); LOADALL;
  /* 004faed2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004faed3 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004faed5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004faed6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004faed8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004faed9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004faeda:;
  /* 004faeda mov ecx, 0x32 */ { ecx = (u32)(0x32u); }
  /* 004faedf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004faee0 call 0x4fad20 */ esp -= 4; M32(esp) = 0x4faee5u; SAVEALL; F_004fad20(c); ABI_CHECK(0x4fad20u, 0x4faee0u); RETCHK(0x4faee5u, 0x4faee0u); LOADALL;
L_004faee5:;
  /* 004faee5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004faee6 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004faee8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004faee9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004faeeb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004faeec ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004faeed:;
  /* 004faeed pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004faeee xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004faef0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004faef1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004faef3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004faef4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062dfb0:;
  /* 0062dfb0 mov ecx, 0x232e */ { ecx = (u32)(0x232eu); }
  /* 0062dfb5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062dfb6 call 0x4fad20 */ esp -= 4; M32(esp) = 0x62dfbbu; SAVEALL; F_004fad20(c); ABI_CHECK(0x4fad20u, 0x62dfb6u); RETCHK(0x62dfbbu, 0x62dfb6u); LOADALL;
  /* 0062dfbb jmp 0x4faee5 */ goto L_004faee5;
L_0062dfc0:;
  /* 0062dfc0 mov ecx, 0xb */ { ecx = (u32)(0xbu); }
  /* 0062dfc5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062dfc6 call 0x4fad20 */ esp -= 4; M32(esp) = 0x62dfcbu; SAVEALL; F_004fad20(c); ABI_CHECK(0x4fad20u, 0x62dfc6u); RETCHK(0x62dfcbu, 0x62dfc6u); LOADALL;
  /* 0062dfcb mov ecx, 0xc */ { ecx = (u32)(0xcu); }
  /* 0062dfd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062dfd1 call 0x4fad20 */ esp -= 4; M32(esp) = 0x62dfd6u; SAVEALL; F_004fad20(c); ABI_CHECK(0x4fad20u, 0x62dfd1u); RETCHK(0x62dfd6u, 0x62dfd1u); LOADALL;
  /* 0062dfd6 mov ecx, 0xd */ { ecx = (u32)(0xdu); }
  /* 0062dfdb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062dfdc call 0x4fad20 */ esp -= 4; M32(esp) = 0x62dfe1u; SAVEALL; F_004fad20(c); ABI_CHECK(0x4fad20u, 0x62dfdcu); RETCHK(0x62dfe1u, 0x62dfdcu); LOADALL;
  /* 0062dfe1 mov ecx, 0xe */ { ecx = (u32)(0xeu); }
  /* 0062dfe6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062dfe7 call 0x4fad20 */ esp -= 4; M32(esp) = 0x62dfecu; SAVEALL; F_004fad20(c); ABI_CHECK(0x4fad20u, 0x62dfe7u); RETCHK(0x62dfecu, 0x62dfe7u); LOADALL;
  /* 0062dfec jmp 0x4faee5 */ goto L_004faee5;
}

void F_004faf40(CPU *c) {
  NATIVE_HOOK(0x4faf40u) REGS; LOADALL;
L_004faf40:;
  /* 004faf40 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004faf42:;
  /* 004faf42 cmp dword ptr [eax*4 + 0x63fee8], ecx */ { const u32 m_ = (u32)(eax * 4u + 0x63fee8u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004faf49 je 0x4faf54 */ if (ZF_) goto L_004faf54;
  /* 004faf4b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004faf4c cmp eax, 0x22 */ { u32 a_ = eax, b_ = 0x22u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004faf4f jl 0x4faf42 */ if (LT_) goto L_004faf42;
  /* 004faf51 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004faf54:;
  /* 004faf54 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004faf60(CPU *c) {
  NATIVE_HOOK(0x4faf60u) REGS; LOADALL;
L_004faf60:;
  /* 004faf60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004faf61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004faf63 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4faf68u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4faf63u); RETCHK(0x4faf68u, 0x4faf63u); LOADALL;
  /* 004faf68 call 0x4fb870 */ esp -= 4; M32(esp) = 0x4faf6du; SAVEALL; F_004fb870(c); ABI_CHECK(0x4fb870u, 0x4faf68u); RETCHK(0x4faf6du, 0x4faf68u); LOADALL;
  /* 004faf6d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004faf6f je 0x4faf8e */ if (ZF_) goto L_004faf8e;
  /* 004faf71 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 004faf73 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004faf76 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004faf79 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004faf7a push 0x546110 */ { u32 v_ = 0x546110u; esp -= 4; M32(esp) = v_; }
  /* 004faf7f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004faf80 call 0x577da0 */ esp -= 4; M32(esp) = 0x4faf85u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x4faf80u); RETCHK(0x4faf85u, 0x4faf80u); LOADALL;
  /* 004faf85 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004faf88 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004faf8a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004faf8b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004faf8e:;
  /* 004faf8e xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004faf90 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004faf91 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fafa0(CPU *c) {
  NATIVE_HOOK(0x4fafa0u) REGS; LOADALL;
L_004fafa0:;
  /* 004fafa0 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004fafa3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fafa5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fafa6 call 0x5eeba0 */ esp -= 4; M32(esp) = 0x4fafabu; SAVEALL; F_005eeba0(c); ABI_CHECK(0x5eeba0u, 0x4fafa6u); RETCHK(0x4fafabu, 0x4fafa6u); LOADALL;
  /* 004fafab add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fafae test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fafb0 jl 0x4fafc0 */ if (LT_) goto L_004fafc0;
  /* 004fafb2 mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 004fafb5 mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 004fafb8 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004fafbb mov eax, dword ptr [eax + edx + 0xc] */ { const u32 m_ = (u32)(eax + edx + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fafbf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fafc0:;
  /* 004fafc0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fafc2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fafd0(CPU *c) {
  NATIVE_HOOK(0x4fafd0u) REGS; LOADALL;
L_004fafd0:;
  /* 004fafd0 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 004fafd3 add ecx, 0x50 */ { u32 a_ = ecx, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004fafd6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fafd7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fafd8 call 0x5eeba0 */ esp -= 4; M32(esp) = 0x4fafddu; SAVEALL; F_005eeba0(c); ABI_CHECK(0x5eeba0u, 0x4fafd8u); RETCHK(0x4fafddu, 0x4fafd8u); LOADALL;
  /* 004fafdd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fafe0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fafe2 jl 0x4faff2 */ if (LT_) goto L_004faff2;
  /* 004fafe4 mov edx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M32(m_)); }
  /* 004fafe7 mov ecx, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004fafea shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004fafed mov eax, dword ptr [eax + ecx + 0xc] */ { const u32 m_ = (u32)(eax + ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 004faff1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004faff2:;
  /* 004faff2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004faff4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fb000(CPU *c) {
  NATIVE_HOOK(0x4fb000u) REGS; LOADALL;
L_004fb000:;
  /* 004fb000 mov ecx, dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 004fb003 mov eax, 0x10624dd3 */ { eax = (u32)(0x10624dd3u); }
  /* 004fb008 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004fb00a sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004fb00d mov eax, edx */ { eax = (u32)(edx); }
  /* 004fb00f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004fb012 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fb014 sub eax, 0xe */ { u32 a_ = eax, b_ = 0xeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fb017 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 004fb019 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 004fb01b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004fb01c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fb020(CPU *c) {
  NATIVE_HOOK(0x4fb020u) REGS; LOADALL;
L_004fb020:;
  /* 004fb020 mov ecx, dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 004fb023 mov eax, 0x10624dd3 */ { eax = (u32)(0x10624dd3u); }
  /* 004fb028 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004fb02a sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004fb02d mov eax, edx */ { eax = (u32)(edx); }
  /* 004fb02f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004fb032 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fb034 sub eax, 0x12 */ { u32 a_ = eax, b_ = 0x12u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fb037 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 004fb039 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 004fb03b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004fb03c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fb040(CPU *c) {
  NATIVE_HOOK(0x4fb040u) REGS; LOADALL;
L_004fb040:;
  /* 004fb040 jmp 0x4fb000 */ SAVEALL; F_004fb000(c); return;
}

void F_004fb050(CPU *c) {
  NATIVE_HOOK(0x4fb050u) REGS; LOADALL;
L_004fb050:;
  /* 004fb050 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fb052 call 0x4fb000 */ esp -= 4; M32(esp) = 0x4fb057u; SAVEALL; F_004fb000(c); ABI_CHECK(0x4fb000u, 0x4fb052u); RETCHK(0x4fb057u, 0x4fb052u); LOADALL;
  /* 004fb057 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fb059 jne 0x4fb081 */ if (!ZF_) goto L_004fb081;
  /* 004fb05b mov ecx, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 004fb05e mov eax, 0x10624dd3 */ { eax = (u32)(0x10624dd3u); }
  /* 004fb063 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004fb065 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004fb068 mov eax, edx */ { eax = (u32)(edx); }
  /* 004fb06a shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004fb06d add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fb06f cmp eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fb072 je 0x4fb081 */ if (ZF_) goto L_004fb081;
  /* 004fb074 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fb077 je 0x4fb081 */ if (ZF_) goto L_004fb081;
  /* 004fb079 cmp eax, 0x11 */ { u32 a_ = eax, b_ = 0x11u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fb07c je 0x4fb081 */ if (ZF_) goto L_004fb081;
  /* 004fb07e mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fb080 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fb081:;
  /* 004fb081 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004fb083 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fb090(CPU *c) {
  NATIVE_HOOK(0x4fb090u) REGS; LOADALL;
L_004fb090:;
  /* 004fb090 lea eax, [edx + 8] */ eax = (u32)((u32)(edx + 0x8u));
  /* 004fb093 mov dword ptr [edx], 0x64fa30 */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0x64fa30u); }
  /* 004fb099 mov dword ptr [edx + 4], 0 */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fb0a0 call 0x544940 */ esp -= 4; M32(esp) = 0x4fb0a5u; SAVEALL; F_00544940(c); ABI_CHECK(0x544940u, 0x4fb0a0u); RETCHK(0x4fb0a5u, 0x4fb0a0u); LOADALL;
  /* 004fb0a5 mov dword ptr [edx + 0x3c], 0 */ { const u32 m_ = (u32)(edx + 0x3cu); M32(m_) = (u32)(0x0u); }
  /* 004fb0ac mov dword ptr [edx + 0x48], 0 */ { const u32 m_ = (u32)(edx + 0x48u); M32(m_) = (u32)(0x0u); }
  /* 004fb0b3 mov byte ptr [edx + 0x54], 1 */ { const u32 m_ = (u32)(edx + 0x54u); M8(m_) = (u8)(0x1u); }
  /* 004fb0b7 mov eax, edx */ { eax = (u32)(edx); }
  /* 004fb0b9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fb0c0(CPU *c) {
  NATIVE_HOOK(0x4fb0c0u) REGS; LOADALL;
L_004fb0c0:;
  /* 004fb0c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fb0c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fb0c3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb0c4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004fb0c6 call 0x4fb0f0 */ esp -= 4; M32(esp) = 0x4fb0cbu; SAVEALL; F_004fb0f0(c); ABI_CHECK(0x4fb0f0u, 0x4fb0c6u); RETCHK(0x4fb0cbu, 0x4fb0c6u); LOADALL;
  /* 004fb0cb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fb0cf je 0x4fb0da */ if (ZF_) goto L_004fb0da;
  /* 004fb0d1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb0d2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fb0d7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fb0d2u); RETCHK(0x4fb0d7u, 0x4fb0d2u); LOADALL;
  /* 004fb0d7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fb0da:;
  /* 004fb0da mov eax, esi */ { eax = (u32)(esi); }
  /* 004fb0dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb0dd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb0de ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fb0f0(CPU *c) {
  NATIVE_HOOK(0x4fb0f0u) REGS; LOADALL;
L_004fb0f0:;
  /* 004fb0f0 mov dword ptr [ecx], 0x64fa30 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64fa30u); }
  /* 004fb0f6 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004fb0f9 jmp 0x5449b0 */ SAVEALL; F_005449b0(c); return;
}

void F_004fb100(CPU *c) {
  NATIVE_HOOK(0x4fb100u) REGS; LOADALL;
L_004fb100:;
  /* 004fb100 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004fb103 movzx eax, bl */ { eax = (u32)((ebx & 0xffu)); }
  /* 004fb106 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb107 push 0x4fac00 */ { u32 v_ = 0x4fac00u; esp -= 4; M32(esp) = v_; }
  /* 004fb10c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fb10d call 0x577da0 */ esp -= 4; M32(esp) = 0x4fb112u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x4fb10du); RETCHK(0x4fb112u, 0x4fb10du); LOADALL;
  /* 004fb112 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb115 mov byte ptr [esi + 0x54], bl */ { const u32 m_ = (u32)(esi + 0x54u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004fb118 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fb120(CPU *c) {
  NATIVE_HOOK(0x4fb120u) REGS; LOADALL;
L_004fb120:;
  /* 004fb120 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fb121 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fb123 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb124 lea edi, [eax + 8] */ edi = (u32)((u32)(eax + 0x8u));
  /* 004fb127 mov byte ptr [eax + 0x54], 1 */ { const u32 m_ = (u32)(eax + 0x54u); M8(m_) = (u8)(0x1u); }
  /* 004fb12b mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004fb12d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fb12f call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fb132u; SAVEALL; call_ind(c, t_); RETCHK(0x4fb132u, 0x4fb12fu); LOADALL; }
  /* 004fb132 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fb135 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fb136 call 0x5486d0 */ esp -= 4; M32(esp) = 0x4fb13bu; SAVEALL; F_005486d0(c); ABI_CHECK(0x5486d0u, 0x4fb136u); RETCHK(0x4fb13bu, 0x4fb136u); LOADALL;
  /* 004fb13b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb13e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb140 je 0x4fb152 */ if (ZF_) goto L_004fb152;
  /* 004fb142 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fb143 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fb145 call 0x544c90 */ esp -= 4; M32(esp) = 0x4fb14au; SAVEALL; F_00544c90(c); ABI_CHECK(0x544c90u, 0x4fb145u); RETCHK(0x4fb14au, 0x4fb145u); LOADALL;
  /* 004fb14a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fb14b mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fb14d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fb14e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb14f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004fb152:;
  /* 004fb152 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004fb154 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fb155 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb156 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fb160(CPU *c) {
  NATIVE_HOOK(0x4fb160u) REGS; LOADALL;
L_004fb160:;
  /* 004fb160 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fb161 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fb163 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004fb166 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004fb168 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb169 jmp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_004fb170(CPU *c) {
  NATIVE_HOOK(0x4fb170u) REGS; LOADALL;
L_004fb170:;
  /* 004fb170 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fb173 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb175 je 0x4fb180 */ if (ZF_) goto L_004fb180;
  /* 004fb177 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb178 call 0x5784d0 */ esp -= 4; M32(esp) = 0x4fb17du; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x4fb178u); RETCHK(0x4fb17du, 0x4fb178u); LOADALL;
  /* 004fb17d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fb180:;
  /* 004fb180 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fb183 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 004fb186 call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fb189u; SAVEALL; call_ind(c, t_); RETCHK(0x4fb189u, 0x4fb186u); LOADALL; }
  /* 004fb189 mov eax, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 004fb18c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb18e je 0x4fb1a0 */ if (ZF_) goto L_004fb1a0;
  /* 004fb190 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb191 call 0x5ab020 */ esp -= 4; M32(esp) = 0x4fb196u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x4fb191u); RETCHK(0x4fb196u, 0x4fb191u); LOADALL;
  /* 004fb196 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb199 mov dword ptr [esi + 0x3c], 0 */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0x0u); }
L_004fb1a0:;
  /* 004fb1a0 mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 004fb1a3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb1a5 je 0x4fb1b7 */ if (ZF_) goto L_004fb1b7;
  /* 004fb1a7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb1a8 call 0x5ab020 */ esp -= 4; M32(esp) = 0x4fb1adu; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x4fb1a8u); RETCHK(0x4fb1adu, 0x4fb1a8u); LOADALL;
  /* 004fb1ad add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb1b0 mov dword ptr [esi + 0x48], 0 */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(0x0u); }
L_004fb1b7:;
  /* 004fb1b7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fb1c0(CPU *c) {
  NATIVE_HOOK(0x4fb1c0u) REGS; LOADALL;
L_004fb1c0:;
  /* 004fb1c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fb1c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fb1c3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb1c4 call 0x52a850 */ esp -= 4; M32(esp) = 0x4fb1c9u; SAVEALL; F_0052a850(c); ABI_CHECK(0x52a850u, 0x4fb1c4u); RETCHK(0x4fb1c9u, 0x4fb1c4u); LOADALL;
  /* 004fb1c9 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004fb1cb mov edx, eax */ { edx = (u32)(eax); }
  /* 004fb1cd call 0x52a8b0 */ esp -= 4; M32(esp) = 0x4fb1d2u; SAVEALL; F_0052a8b0(c); ABI_CHECK(0x52a8b0u, 0x4fb1cdu); RETCHK(0x4fb1d2u, 0x4fb1cdu); LOADALL;
  /* 004fb1d2 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004fb1d5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fb1d8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fb1da push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fb1dc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fb1dd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb1de lea esi, [ecx + 0x3c] */ esi = (u32)((u32)(ecx + 0x3cu));
  /* 004fb1e1 call 0x5288e0 */ esp -= 4; M32(esp) = 0x4fb1e6u; SAVEALL; F_005288e0(c); ABI_CHECK(0x5288e0u, 0x4fb1e1u); RETCHK(0x4fb1e6u, 0x4fb1e1u); LOADALL;
  /* 004fb1e6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb1e9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fb1eb mov edx, eax */ { edx = (u32)(eax); }
  /* 004fb1ed call 0x528970 */ esp -= 4; M32(esp) = 0x4fb1f2u; SAVEALL; F_00528970(c); ABI_CHECK(0x528970u, 0x4fb1edu); RETCHK(0x4fb1f2u, 0x4fb1edu); LOADALL;
  /* 004fb1f2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb1f3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb1f4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004fb200(CPU *c) {
  NATIVE_HOOK(0x4fb200u) REGS; LOADALL;
L_004fb200:;
  /* 004fb200 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fb201 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fb203 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb204 call 0x52a850 */ esp -= 4; M32(esp) = 0x4fb209u; SAVEALL; F_0052a850(c); ABI_CHECK(0x52a850u, 0x4fb204u); RETCHK(0x4fb209u, 0x4fb204u); LOADALL;
  /* 004fb209 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004fb20b mov edx, eax */ { edx = (u32)(eax); }
  /* 004fb20d call 0x52a8b0 */ esp -= 4; M32(esp) = 0x4fb212u; SAVEALL; F_0052a8b0(c); ABI_CHECK(0x52a8b0u, 0x4fb20du); RETCHK(0x4fb212u, 0x4fb20du); LOADALL;
  /* 004fb212 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004fb215 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fb218 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fb21a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fb21c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fb21d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb21e lea esi, [ecx + 0x48] */ esi = (u32)((u32)(ecx + 0x48u));
  /* 004fb221 call 0x5288e0 */ esp -= 4; M32(esp) = 0x4fb226u; SAVEALL; F_005288e0(c); ABI_CHECK(0x5288e0u, 0x4fb221u); RETCHK(0x4fb226u, 0x4fb221u); LOADALL;
  /* 004fb226 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb229 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fb22b mov edx, eax */ { edx = (u32)(eax); }
  /* 004fb22d call 0x528970 */ esp -= 4; M32(esp) = 0x4fb232u; SAVEALL; F_00528970(c); ABI_CHECK(0x528970u, 0x4fb22du); RETCHK(0x4fb232u, 0x4fb22du); LOADALL;
  /* 004fb232 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb233 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb234 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004fb240(CPU *c) {
  NATIVE_HOOK(0x4fb240u) REGS; LOADALL;
L_004fb240:;
  /* 004fb240 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb242 jne 0x4fb247 */ if (!ZF_) goto L_004fb247;
  /* 004fb244 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004fb246 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fb247:;
  /* 004fb247 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fb24a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb24c je 0x4fb258 */ if (ZF_) goto L_004fb258;
  /* 004fb24e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb24f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb250 call 0x57ad90 */ esp -= 4; M32(esp) = 0x4fb255u; SAVEALL; F_0057ad90(c); ABI_CHECK(0x57ad90u, 0x4fb250u); RETCHK(0x4fb255u, 0x4fb250u); LOADALL;
  /* 004fb255 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fb258:;
  /* 004fb258 mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
  /* 004fb25b mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fb25d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fb260(CPU *c) {
  NATIVE_HOOK(0x4fb260u) REGS; LOADALL;
L_004fb260:;
  /* 004fb260 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb261 mov esi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); esi = (u32)(M32(m_)); }
  /* 004fb264 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb266 je 0x4fb27f */ if (ZF_) goto L_004fb27f;
  /* 004fb268 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb269 call 0x57b140 */ esp -= 4; M32(esp) = 0x4fb26eu; SAVEALL; F_0057b140(c); ABI_CHECK(0x57b140u, 0x4fb269u); RETCHK(0x4fb26eu, 0x4fb269u); LOADALL;
  /* 004fb26e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb271 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb273 je 0x4fb27f */ if (ZF_) goto L_004fb27f;
  /* 004fb275 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb276 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb277 call 0x57aef0 */ esp -= 4; M32(esp) = 0x4fb27cu; SAVEALL; F_0057aef0(c); ABI_CHECK(0x57aef0u, 0x4fb277u); RETCHK(0x4fb27cu, 0x4fb277u); LOADALL;
  /* 004fb27c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fb27f:;
  /* 004fb27f mov dword ptr [edi + 4], 0 */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004fb286 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fb288 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb289 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fb290(CPU *c) {
  NATIVE_HOOK(0x4fb290u) REGS; LOADALL;
L_004fb290:;
  /* 004fb290 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fb291 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fb293 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb294 mov edi, eax */ { edi = (u32)(eax); }
  /* 004fb296 mov eax, 0x55e63b89 */ { eax = (u32)(0x55e63b89u); }
  /* 004fb29b imul edi */ { s64 p_ = (s64)(s32)eax * (s32)edi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004fb29d sar edx, 0x19 */ { u32 n_ = (25u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004fb2a0 mov eax, edx */ { eax = (u32)(edx); }
  /* 004fb2a2 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004fb2a5 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fb2a7 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fb2aa jne 0x4fb2e1 */ if (!ZF_) goto L_004fb2e1;
  /* 004fb2ac mov eax, edi */ { eax = (u32)(edi); }
  /* 004fb2ae cdq */ edx = (u32)((s32)eax >> 31);
  /* 004fb2af mov ecx, 0x2710 */ { ecx = (u32)(0x2710u); }
  /* 004fb2b4 idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x4fb2b4u); eax = q_; edx = r_; }
  /* 004fb2b6 mov eax, 0x10624dd3 */ { eax = (u32)(0x10624dd3u); }
  /* 004fb2bb imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004fb2bd sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004fb2c0 mov eax, edx */ { eax = (u32)(edx); }
  /* 004fb2c2 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004fb2c5 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fb2c7 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fb2ca je 0x4fb2da */ if (ZF_) goto L_004fb2da;
  /* 004fb2cc cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fb2cf jne 0x4fb2e1 */ if (!ZF_) goto L_004fb2e1;
  /* 004fb2d1 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004fb2d4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fb2d5 call 0x4fb390 */ esp -= 4; M32(esp) = 0x4fb2dau; SAVEALL; F_004fb390(c); ABI_CHECK(0x4fb390u, 0x4fb2d5u); RETCHK(0x4fb2dau, 0x4fb2d5u); LOADALL;
L_004fb2da:;
  /* 004fb2da mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fb2dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fb2dd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb2de ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004fb2e1:;
  /* 004fb2e1 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004fb2e3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fb2e4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb2e5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fb2f0(CPU *c) {
  NATIVE_HOOK(0x4fb2f0u) REGS; LOADALL;
L_004fb2f0:;
  /* 004fb2f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fb2f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fb2f3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb2f4 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004fb2f7 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004fb2f9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb2fb je 0x4fb34f */ if (ZF_) goto L_004fb34f;
  /* 004fb2fd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb2fe push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004fb300 lea esi, [eax + 0x10] */ esi = (u32)((u32)(eax + 0x10u));
  /* 004fb303 push 0x64fa3c */ { u32 v_ = 0x64fa3cu; esp -= 4; M32(esp) = v_; }
  /* 004fb308 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb309 call 0x61af76 */ esp -= 4; M32(esp) = 0x4fb30eu; SAVEALL; F_0061af76(c); ABI_CHECK(0x61af76u, 0x4fb309u); RETCHK(0x4fb30eu, 0x4fb309u); LOADALL;
  /* 004fb30e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb311 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb313 jne 0x4fb32a */ if (!ZF_) goto L_004fb32a;
  /* 004fb315 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fb318 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004fb31a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fb31b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb31c call 0x57b470 */ esp -= 4; M32(esp) = 0x4fb321u; SAVEALL; F_0057b470(c); ABI_CHECK(0x57b470u, 0x4fb31cu); RETCHK(0x4fb321u, 0x4fb31cu); LOADALL;
  /* 004fb321 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb324 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb325 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fb327 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fb328 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb329 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fb32a:;
  /* 004fb32a push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004fb32c push 0x64fa34 */ { u32 v_ = 0x64fa34u; esp -= 4; M32(esp) = v_; }
  /* 004fb331 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb332 call 0x61af76 */ esp -= 4; M32(esp) = 0x4fb337u; SAVEALL; F_0061af76(c); ABI_CHECK(0x61af76u, 0x4fb332u); RETCHK(0x4fb337u, 0x4fb332u); LOADALL;
  /* 004fb337 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb33a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb33c jne 0x4fb34e */ if (!ZF_) goto L_004fb34e;
  /* 004fb33e mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004fb341 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fb344 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb345 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb346 call 0x57b470 */ esp -= 4; M32(esp) = 0x4fb34bu; SAVEALL; F_0057b470(c); ABI_CHECK(0x57b470u, 0x4fb346u); RETCHK(0x4fb34bu, 0x4fb346u); LOADALL;
  /* 004fb34b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fb34e:;
  /* 004fb34e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_004fb34f:;
  /* 004fb34f mov eax, edi */ { eax = (u32)(edi); }
  /* 004fb351 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fb352 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb353 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fb360(CPU *c) {
  NATIVE_HOOK(0x4fb360u) REGS; LOADALL;
L_004fb360:;
  /* 004fb360 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fb361 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fb363 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fb366 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb367 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fb36a mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004fb36d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb36e push 0x4fb2f0 */ { u32 v_ = 0x4fb2f0u; esp -= 4; M32(esp) = v_; }
  /* 004fb373 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fb374 call 0x57bed0 */ esp -= 4; M32(esp) = 0x4fb379u; SAVEALL; F_0057bed0(c); ABI_CHECK(0x57bed0u, 0x4fb374u); RETCHK(0x4fb379u, 0x4fb374u); LOADALL;
  /* 004fb379 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb37c mov eax, esi */ { eax = (u32)(esi); }
  /* 004fb37e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb37f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb380 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fb390(CPU *c) {
  NATIVE_HOOK(0x4fb390u) REGS; LOADALL;
L_004fb390:;
  /* 004fb390 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fb391 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fb393 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4fb398u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4fb393u); RETCHK(0x4fb398u, 0x4fb393u); LOADALL;
  /* 004fb398 call 0x4fb870 */ esp -= 4; M32(esp) = 0x4fb39du; SAVEALL; F_004fb870(c); ABI_CHECK(0x4fb870u, 0x4fb398u); RETCHK(0x4fb39du, 0x4fb398u); LOADALL;
  /* 004fb39d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb39f je 0x4fb3bc */ if (ZF_) goto L_004fb3bc;
  /* 004fb3a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb3a2 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fb3a5 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004fb3a8 push 0x4fb360 */ { u32 v_ = 0x4fb360u; esp -= 4; M32(esp) = v_; }
  /* 004fb3ad push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fb3ae call 0x577da0 */ esp -= 4; M32(esp) = 0x4fb3b3u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x4fb3aeu); RETCHK(0x4fb3b3u, 0x4fb3aeu); LOADALL;
  /* 004fb3b3 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb3b6 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004fb3b8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb3b9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004fb3bc:;
  /* 004fb3bc xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004fb3be pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb3bf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fb3d0(CPU *c) {
  NATIVE_HOOK(0x4fb3d0u) REGS; LOADALL;
L_004fb3d0:;
  /* 004fb3d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fb3d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fb3d3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004fb3d9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fb3db push 0x61b468 */ { u32 v_ = 0x61b468u; esp -= 4; M32(esp) = v_; }
  /* 004fb3e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb3e1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004fb3e8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb3e9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fb3ec call 0x54c480 */ esp -= 4; M32(esp) = 0x4fb3f1u; SAVEALL; F_0054c480(c); ABI_CHECK(0x54c480u, 0x4fb3ecu); RETCHK(0x4fb3f1u, 0x4fb3ecu); LOADALL;
  /* 004fb3f1 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 004fb3f4 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 004fb3fb mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004fb402 call 0x4fbe00 */ esp -= 4; M32(esp) = 0x4fb407u; SAVEALL; F_004fbe00(c); ABI_CHECK(0x4fbe00u, 0x4fb402u); RETCHK(0x4fb407u, 0x4fb402u); LOADALL;
  /* 004fb407 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fb40a mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 004fb40d mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 004fb414 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fb416 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fb41d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb41e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fb420 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb421 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fb430(CPU *c) {
  NATIVE_HOOK(0x4fb430u) REGS; LOADALL;
L_004fb430:;
  /* 004fb430 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fb431 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fb433 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004fb439 mov cl, byte ptr [0x9b9430] */ { const u32 m_ = (u32)(0x9b9430u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fb43f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fb441 push 0x61b6fe */ { u32 v_ = 0x61b6feu; esp -= 4; M32(esp) = v_; }
  /* 004fb446 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb447 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004fb44c test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fb44e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004fb455 jne 0x4fb47b */ if (!ZF_) goto L_004fb47b;
  /* 004fb457 or dword ptr [0x9b9430], eax */ { const u32 m_ = (u32)(0x9b9430u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 004fb45d push 0x9b9418 */ { u32 v_ = 0x9b9418u; esp -= 4; M32(esp) = v_; }
  /* 004fb462 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004fb469 call 0x4fb3d0 */ esp -= 4; M32(esp) = 0x4fb46eu; SAVEALL; F_004fb3d0(c); ABI_CHECK(0x4fb3d0u, 0x4fb469u); RETCHK(0x4fb46eu, 0x4fb469u); LOADALL;
  /* 004fb46e push 0x62c580 */ { u32 v_ = 0x62c580u; esp -= 4; M32(esp) = v_; }
  /* 004fb473 call 0x5fe916 */ esp -= 4; M32(esp) = 0x4fb478u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x4fb473u); RETCHK(0x4fb478u, 0x4fb473u); LOADALL;
  /* 004fb478 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fb47b:;
  /* 004fb47b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fb47e mov eax, 0x9b9418 */ { eax = (u32)(0x9b9418u); }
  /* 004fb483 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004fb48a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fb48c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb48d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fb490(CPU *c) {
  NATIVE_HOOK(0x4fb490u) REGS; LOADALL;
L_004fb490:;
  /* 004fb490 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fb491 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fb493 call 0x4fc670 */ esp -= 4; M32(esp) = 0x4fb498u; SAVEALL; F_004fc670(c); ABI_CHECK(0x4fc670u, 0x4fb493u); RETCHK(0x4fb498u, 0x4fb493u); LOADALL;
  /* 004fb498 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fb49b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb49c call 0x4fc6d0 */ esp -= 4; M32(esp) = 0x4fb4a1u; SAVEALL; F_004fc6d0(c); ABI_CHECK(0x4fc6d0u, 0x4fb49cu); RETCHK(0x4fb4a1u, 0x4fb49cu); LOADALL;
  /* 004fb4a1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb4a2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fb4b0(CPU *c) {
  NATIVE_HOOK(0x4fb4b0u) REGS; LOADALL;
L_004fb4b0:;
  /* 004fb4b0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb4b1 call 0x4fc670 */ esp -= 4; M32(esp) = 0x4fb4b6u; SAVEALL; F_004fc670(c); ABI_CHECK(0x4fc670u, 0x4fb4b1u); RETCHK(0x4fb4b6u, 0x4fb4b1u); LOADALL;
  /* 004fb4b6 mov edi, eax */ { edi = (u32)(eax); }
  /* 004fb4b8 call 0x4fd4c0 */ esp -= 4; M32(esp) = 0x4fb4bdu; SAVEALL; F_004fd4c0(c); ABI_CHECK(0x4fd4c0u, 0x4fb4b8u); RETCHK(0x4fb4bdu, 0x4fb4b8u); LOADALL;
  /* 004fb4bd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fb4be ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fb4c0(CPU *c) {
  NATIVE_HOOK(0x4fb4c0u) REGS; LOADALL;
L_004fb4c0:;
  /* 004fb4c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fb4c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fb4c3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fb4c5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fb4c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb4c7 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fb4ca push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb4cb mov edi, esi */ { edi = (u32)(esi); }
  /* 004fb4cd je 0x4fb4e7 */ if (ZF_) goto L_004fb4e7;
  /* 004fb4cf call 0x556030 */ esp -= 4; M32(esp) = 0x4fb4d4u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x4fb4cfu); RETCHK(0x4fb4d4u, 0x4fb4cfu); LOADALL;
  /* 004fb4d4 mov edx, esi */ { edx = (u32)(esi); }
  /* 004fb4d6 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004fb4d8 call 0x555800 */ esp -= 4; M32(esp) = 0x4fb4ddu; SAVEALL; F_00555800(c); ABI_CHECK(0x555800u, 0x4fb4d8u); RETCHK(0x4fb4ddu, 0x4fb4d8u); LOADALL;
  /* 004fb4dd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb4df je 0x4fb4eb */ if (ZF_) goto L_004fb4eb;
  /* 004fb4e1 mov edi, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); edi = (u32)(M32(m_)); }
L_004fb4e7:;
  /* 004fb4e7 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb4e9 jne 0x4fb4f0 */ if (!ZF_) goto L_004fb4f0;
L_004fb4eb:;
  /* 004fb4eb mov edi, 0x5209 */ { edi = (u32)(0x5209u); }
L_004fb4f0:;
  /* 004fb4f0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fb4f2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb4f3 call 0x4fc670 */ esp -= 4; M32(esp) = 0x4fb4f8u; SAVEALL; F_004fc670(c); ABI_CHECK(0x4fc670u, 0x4fb4f3u); RETCHK(0x4fb4f8u, 0x4fb4f3u); LOADALL;
  /* 004fb4f8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb4f9 call 0x4fda70 */ esp -= 4; M32(esp) = 0x4fb4feu; SAVEALL; F_004fda70(c); ABI_CHECK(0x4fda70u, 0x4fb4f9u); RETCHK(0x4fb4feu, 0x4fb4f9u); LOADALL;
  /* 004fb4fe mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fb500 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb502 je 0x4fb54b */ if (ZF_) goto L_004fb54b;
  /* 004fb504 push 0x58 */ { u32 v_ = 0x58u; esp -= 4; M32(esp) = v_; }
  /* 004fb506 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4fb50bu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4fb506u); RETCHK(0x4fb50bu, 0x4fb506u); LOADALL;
  /* 004fb50b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb50e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb510 je 0x4fb55f */ if (ZF_) goto L_004fb55f;
  /* 004fb512 mov edx, eax */ { edx = (u32)(eax); }
  /* 004fb514 call 0x4fb090 */ esp -= 4; M32(esp) = 0x4fb519u; SAVEALL; F_004fb090(c); ABI_CHECK(0x4fb090u, 0x4fb514u); RETCHK(0x4fb519u, 0x4fb514u); LOADALL;
  /* 004fb519 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fb51b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb51d je 0x4fb55f */ if (ZF_) goto L_004fb55f;
  /* 004fb51f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fb520 call 0x4fb120 */ esp -= 4; M32(esp) = 0x4fb525u; SAVEALL; F_004fb120(c); ABI_CHECK(0x4fb120u, 0x4fb520u); RETCHK(0x4fb525u, 0x4fb520u); LOADALL;
  /* 004fb525 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fb527 je 0x4fb532 */ if (ZF_) goto L_004fb532;
  /* 004fb529 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fb52a mov eax, esi */ { eax = (u32)(esi); }
  /* 004fb52c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb52d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fb52e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb52f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004fb532:;
  /* 004fb532 call 0x4fb170 */ esp -= 4; M32(esp) = 0x4fb537u; SAVEALL; F_004fb170(c); ABI_CHECK(0x4fb170u, 0x4fb532u); RETCHK(0x4fb537u, 0x4fb532u); LOADALL;
  /* 004fb537 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004fb539 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fb53b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fb53d call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fb53fu; SAVEALL; call_ind(c, t_); RETCHK(0x4fb53fu, 0x4fb53du); LOADALL; }
  /* 004fb53f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fb542 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fb543 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb544 push 0x64fc60 */ { u32 v_ = 0x64fc60u; esp -= 4; M32(esp) = v_; }
  /* 004fb549 jmp 0x4fb552 */ goto L_004fb552;
L_004fb54b:;
  /* 004fb54b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb54c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb54d push 0x64fc00 */ { u32 v_ = 0x64fc00u; esp -= 4; M32(esp) = v_; }
L_004fb552:;
  /* 004fb552 mov esi, 0x7a85f4 */ { esi = (u32)(0x7a85f4u); }
  /* 004fb557 call 0x541010 */ esp -= 4; M32(esp) = 0x4fb55cu; SAVEALL; F_00541010(c); ABI_CHECK(0x541010u, 0x4fb557u); RETCHK(0x4fb55cu, 0x4fb557u); LOADALL;
  /* 004fb55c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fb55f:;
  /* 004fb55f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fb560 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb561 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fb563 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fb564 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb565 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fb570(CPU *c) {
  NATIVE_HOOK(0x4fb570u) REGS; LOADALL;
L_004fb570:;
  /* 004fb570 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fb571 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fb573 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fb575 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fb576 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb577 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fb57a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb57b mov edi, esi */ { edi = (u32)(esi); }
  /* 004fb57d je 0x4fb597 */ if (ZF_) goto L_004fb597;
  /* 004fb57f call 0x556030 */ esp -= 4; M32(esp) = 0x4fb584u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x4fb57fu); RETCHK(0x4fb584u, 0x4fb57fu); LOADALL;
  /* 004fb584 mov edx, esi */ { edx = (u32)(esi); }
  /* 004fb586 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004fb588 call 0x555820 */ esp -= 4; M32(esp) = 0x4fb58du; SAVEALL; F_00555820(c); ABI_CHECK(0x555820u, 0x4fb588u); RETCHK(0x4fb58du, 0x4fb588u); LOADALL;
  /* 004fb58d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb58f je 0x4fb59b */ if (ZF_) goto L_004fb59b;
  /* 004fb591 mov edi, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); edi = (u32)(M32(m_)); }
L_004fb597:;
  /* 004fb597 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb599 jne 0x4fb5a0 */ if (!ZF_) goto L_004fb5a0;
L_004fb59b:;
  /* 004fb59b mov edi, 0x2b02 */ { edi = (u32)(0x2b02u); }
L_004fb5a0:;
  /* 004fb5a0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb5a1 call 0x4fc670 */ esp -= 4; M32(esp) = 0x4fb5a6u; SAVEALL; F_004fc670(c); ABI_CHECK(0x4fc670u, 0x4fb5a1u); RETCHK(0x4fb5a6u, 0x4fb5a1u); LOADALL;
  /* 004fb5a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb5a7 call 0x4fe0b0 */ esp -= 4; M32(esp) = 0x4fb5acu; SAVEALL; F_004fe0b0(c); ABI_CHECK(0x4fe0b0u, 0x4fb5a7u); RETCHK(0x4fb5acu, 0x4fb5a7u); LOADALL;
  /* 004fb5ac mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fb5ae test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb5b0 je 0x4fb601 */ if (ZF_) goto L_004fb601;
  /* 004fb5b2 push 0xf0 */ { u32 v_ = 0xf0u; esp -= 4; M32(esp) = v_; }
  /* 004fb5b7 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4fb5bcu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4fb5b7u); RETCHK(0x4fb5bcu, 0x4fb5b7u); LOADALL;
  /* 004fb5bc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb5bf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb5c1 je 0x4fb615 */ if (ZF_) goto L_004fb615;
  /* 004fb5c3 mov edx, eax */ { edx = (u32)(eax); }
  /* 004fb5c5 call 0x4fa700 */ esp -= 4; M32(esp) = 0x4fb5cau; SAVEALL; F_004fa700(c); ABI_CHECK(0x4fa700u, 0x4fb5c5u); RETCHK(0x4fb5cau, 0x4fb5c5u); LOADALL;
  /* 004fb5ca mov esi, eax */ { esi = (u32)(eax); }
  /* 004fb5cc test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb5ce je 0x4fb615 */ if (ZF_) goto L_004fb615;
  /* 004fb5d0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004fb5d2 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fb5d4 mov edx, esi */ { edx = (u32)(esi); }
  /* 004fb5d6 call 0x4fa790 */ esp -= 4; M32(esp) = 0x4fb5dbu; SAVEALL; F_004fa790(c); ABI_CHECK(0x4fa790u, 0x4fb5d6u); RETCHK(0x4fb5dbu, 0x4fb5d6u); LOADALL;
  /* 004fb5db test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fb5dd je 0x4fb5e8 */ if (ZF_) goto L_004fb5e8;
  /* 004fb5df pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fb5e0 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fb5e2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb5e3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fb5e4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb5e5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004fb5e8:;
  /* 004fb5e8 call 0x4fa860 */ esp -= 4; M32(esp) = 0x4fb5edu; SAVEALL; F_004fa860(c); ABI_CHECK(0x4fa860u, 0x4fb5e8u); RETCHK(0x4fb5edu, 0x4fb5e8u); LOADALL;
  /* 004fb5ed mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004fb5ef push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fb5f1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fb5f3 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fb5f5u; SAVEALL; call_ind(c, t_); RETCHK(0x4fb5f5u, 0x4fb5f3u); LOADALL; }
  /* 004fb5f5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fb5f8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fb5f9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb5fa push 0x64fb98 */ { u32 v_ = 0x64fb98u; esp -= 4; M32(esp) = v_; }
  /* 004fb5ff jmp 0x4fb608 */ goto L_004fb608;
L_004fb601:;
  /* 004fb601 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb602 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb603 push 0x64fb40 */ { u32 v_ = 0x64fb40u; esp -= 4; M32(esp) = v_; }
L_004fb608:;
  /* 004fb608 mov esi, 0x7a85f4 */ { esi = (u32)(0x7a85f4u); }
  /* 004fb60d call 0x541010 */ esp -= 4; M32(esp) = 0x4fb612u; SAVEALL; F_00541010(c); ABI_CHECK(0x541010u, 0x4fb60du); RETCHK(0x4fb612u, 0x4fb60du); LOADALL;
  /* 004fb612 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fb615:;
  /* 004fb615 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fb616 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb617 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fb619 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fb61a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb61b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fb620(CPU *c) {
  NATIVE_HOOK(0x4fb620u) REGS; LOADALL;
L_004fb620:;
  /* 004fb620 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fb621 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fb623 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fb624 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb625 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb626 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 004fb628 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fb62a call 0x5fe934 */ esp -= 4; M32(esp) = 0x4fb62fu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4fb62au); RETCHK(0x4fb62fu, 0x4fb62au); LOADALL;
  /* 004fb62f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb632 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb634 je 0x4fb693 */ if (ZF_) goto L_004fb693;
  /* 004fb636 call 0x4fa1d0 */ esp -= 4; M32(esp) = 0x4fb63bu; SAVEALL; F_004fa1d0(c); ABI_CHECK(0x4fa1d0u, 0x4fb636u); RETCHK(0x4fb63bu, 0x4fb636u); LOADALL;
  /* 004fb63b mov edi, eax */ { edi = (u32)(eax); }
  /* 004fb63d test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb63f je 0x4fb693 */ if (ZF_) goto L_004fb693;
  /* 004fb641 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fb644 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb645 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 004fb647 call 0x4fb570 */ esp -= 4; M32(esp) = 0x4fb64cu; SAVEALL; F_004fb570(c); ABI_CHECK(0x4fb570u, 0x4fb647u); RETCHK(0x4fb64cu, 0x4fb647u); LOADALL;
  /* 004fb64c mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004fb64f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb650 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 004fb652 call 0x4fb4c0 */ esp -= 4; M32(esp) = 0x4fb657u; SAVEALL; F_004fb4c0(c); ABI_CHECK(0x4fb4c0u, 0x4fb652u); RETCHK(0x4fb657u, 0x4fb652u); LOADALL;
  /* 004fb657 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004fb659 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004fb65c call 0x4fa230 */ esp -= 4; M32(esp) = 0x4fb661u; SAVEALL; F_004fa230(c); ABI_CHECK(0x4fa230u, 0x4fb65cu); RETCHK(0x4fb661u, 0x4fb65cu); LOADALL;
  /* 004fb661 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fb663 je 0x4fb66f */ if (ZF_) goto L_004fb66f;
  /* 004fb665 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fb667 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fb668 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb669 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fb66b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb66c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004fb66f:;
  /* 004fb66f call 0x4fa270 */ esp -= 4; M32(esp) = 0x4fb674u; SAVEALL; F_004fa270(c); ABI_CHECK(0x4fa270u, 0x4fb66fu); RETCHK(0x4fb674u, 0x4fb66fu); LOADALL;
  /* 004fb674 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004fb676 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fb678 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004fb67a call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fb67cu; SAVEALL; call_ind(c, t_); RETCHK(0x4fb67cu, 0x4fb67au); LOADALL; }
  /* 004fb67c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fb67f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb680 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb681 push 0x64fac8 */ { u32 v_ = 0x64fac8u; esp -= 4; M32(esp) = v_; }
  /* 004fb686 mov esi, 0x7a85f4 */ { esi = (u32)(0x7a85f4u); }
  /* 004fb68b call 0x541010 */ esp -= 4; M32(esp) = 0x4fb690u; SAVEALL; F_00541010(c); ABI_CHECK(0x541010u, 0x4fb68bu); RETCHK(0x4fb690u, 0x4fb68bu); LOADALL;
  /* 004fb690 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fb693:;
  /* 004fb693 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fb694 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fb696 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb697 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fb699 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb69a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004fb6a0(CPU *c) {
  NATIVE_HOOK(0x4fb6a0u) REGS; LOADALL;
L_004fb6a0:;
  /* 004fb6a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fb6a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fb6a3 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb6a6 mov al, byte ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fb6a9 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fb6ab push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fb6ac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb6ad push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb6ae mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 004fb6b1 je 0x4fb6e3 */ if (ZF_) goto L_004fb6e3;
  /* 004fb6b3 call 0x556030 */ esp -= 4; M32(esp) = 0x4fb6b8u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x4fb6b3u); RETCHK(0x4fb6b8u, 0x4fb6b3u); LOADALL;
  /* 004fb6b8 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fb6ba mov edx, edi */ { edx = (u32)(edi); }
  /* 004fb6bc mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fb6be call 0x555890 */ esp -= 4; M32(esp) = 0x4fb6c3u; SAVEALL; F_00555890(c); ABI_CHECK(0x555890u, 0x4fb6beu); RETCHK(0x4fb6c3u, 0x4fb6beu); LOADALL;
  /* 004fb6c3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb6c5 jne 0x4fb6dd */ if (!ZF_) goto L_004fb6dd;
  /* 004fb6c7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fb6c9 call 0x555860 */ esp -= 4; M32(esp) = 0x4fb6ceu; SAVEALL; F_00555860(c); ABI_CHECK(0x555860u, 0x4fb6c9u); RETCHK(0x4fb6ceu, 0x4fb6c9u); LOADALL;
  /* 004fb6ce test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb6d0 jne 0x4fb6dd */ if (!ZF_) goto L_004fb6dd;
  /* 004fb6d2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fb6d4 call 0x555840 */ esp -= 4; M32(esp) = 0x4fb6d9u; SAVEALL; F_00555840(c); ABI_CHECK(0x555840u, 0x4fb6d4u); RETCHK(0x4fb6d9u, 0x4fb6d4u); LOADALL;
  /* 004fb6d9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb6db je 0x4fb6e3 */ if (ZF_) goto L_004fb6e3;
L_004fb6dd:;
  /* 004fb6dd mov edi, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); edi = (u32)(M32(m_)); }
L_004fb6e3:;
  /* 004fb6e3 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fb6e5 call 0x4fc070 */ esp -= 4; M32(esp) = 0x4fb6eau; SAVEALL; F_004fc070(c); ABI_CHECK(0x4fc070u, 0x4fb6e5u); RETCHK(0x4fb6eau, 0x4fb6e5u); LOADALL;
  /* 004fb6ea dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fb6eb je 0x4fb704 */ if (ZF_) goto L_004fb704;
  /* 004fb6ed push 0x60 */ { u32 v_ = 0x60u; esp -= 4; M32(esp) = v_; }
  /* 004fb6ef call 0x5fe934 */ esp -= 4; M32(esp) = 0x4fb6f4u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4fb6efu); RETCHK(0x4fb6f4u, 0x4fb6efu); LOADALL;
  /* 004fb6f4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb6f7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb6f9 je 0x4fb71e */ if (ZF_) goto L_004fb71e;
  /* 004fb6fb mov edx, eax */ { edx = (u32)(eax); }
  /* 004fb6fd call 0x4fbee0 */ esp -= 4; M32(esp) = 0x4fb702u; SAVEALL; F_004fbee0(c); ABI_CHECK(0x4fbee0u, 0x4fb6fdu); RETCHK(0x4fb702u, 0x4fb6fdu); LOADALL;
  /* 004fb702 jmp 0x4fb720 */ goto L_004fb720;
L_004fb704:;
  /* 004fb704 push 0xbc */ { u32 v_ = 0xbcu; esp -= 4; M32(esp) = v_; }
  /* 004fb709 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4fb70eu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4fb709u); RETCHK(0x4fb70eu, 0x4fb709u); LOADALL;
  /* 004fb70e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb711 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb713 je 0x4fb71e */ if (ZF_) goto L_004fb71e;
  /* 004fb715 mov edx, eax */ { edx = (u32)(eax); }
  /* 004fb717 call 0x4fff90 */ esp -= 4; M32(esp) = 0x4fb71cu; SAVEALL; F_004fff90(c); ABI_CHECK(0x4fff90u, 0x4fb717u); RETCHK(0x4fb71cu, 0x4fb717u); LOADALL;
  /* 004fb71c jmp 0x4fb720 */ goto L_004fb720;
L_004fb71e:;
  /* 004fb71e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004fb720:;
  /* 004fb720 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fb722 call 0x4fc670 */ esp -= 4; M32(esp) = 0x4fb727u; SAVEALL; F_004fc670(c); ABI_CHECK(0x4fc670u, 0x4fb722u); RETCHK(0x4fb727u, 0x4fb722u); LOADALL;
  /* 004fb727 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb729 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 004fb72c je 0x4fb7e6 */ if (ZF_) goto L_004fb7e6;
  /* 004fb732 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004fb739 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 004fb740 call 0x4fead0 */ esp -= 4; M32(esp) = 0x4fb745u; SAVEALL; F_004fead0(c); ABI_CHECK(0x4fead0u, 0x4fb740u); RETCHK(0x4fb745u, 0x4fb740u); LOADALL;
  /* 004fb745 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fb747 sub eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fb74a je 0x4fb763 */ if (ZF_) goto L_004fb763;
  /* 004fb74c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004fb74d jne 0x4fb772 */ if (!ZF_) goto L_004fb772;
  /* 004fb74f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004fb752 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fb754 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fb756 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb757 mov edx, edi */ { edx = (u32)(edi); }
  /* 004fb759 call 0x4fbd30 */ esp -= 4; M32(esp) = 0x4fb75eu; SAVEALL; F_004fbd30(c); ABI_CHECK(0x4fbd30u, 0x4fb759u); RETCHK(0x4fb75eu, 0x4fb759u); LOADALL;
  /* 004fb75e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004fb761 jmp 0x4fb772 */ goto L_004fb772;
L_004fb763:;
  /* 004fb763 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fb766 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fb768 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb769 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fb76a call 0x4fda70 */ esp -= 4; M32(esp) = 0x4fb76fu; SAVEALL; F_004fda70(c); ABI_CHECK(0x4fda70u, 0x4fb76au); RETCHK(0x4fb76fu, 0x4fb76au); LOADALL;
  /* 004fb76f mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_004fb772:;
  /* 004fb772 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004fb775 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 004fb778 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004fb77a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb77b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004fb77e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fb77f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fb780 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb781 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fb783 call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fb786u; SAVEALL; call_ind(c, t_); RETCHK(0x4fb786u, 0x4fb783u); LOADALL; }
  /* 004fb786 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fb788 je 0x4fb7bb */ if (ZF_) goto L_004fb7bb;
  /* 004fb78a mov al, byte ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004fb78d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004fb78f je 0x4fb7b0 */ if (ZF_) goto L_004fb7b0;
  /* 004fb791 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb793 jne 0x4fb7b0 */ if (!ZF_) goto L_004fb7b0;
  /* 004fb795 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004fb798 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb799 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fb79a call 0x4fdeb0 */ esp -= 4; M32(esp) = 0x4fb79fu; SAVEALL; F_004fdeb0(c); ABI_CHECK(0x4fdeb0u, 0x4fb79au); RETCHK(0x4fb79fu, 0x4fb79au); LOADALL;
  /* 004fb79f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb7a1 je 0x4fb7b0 */ if (ZF_) goto L_004fb7b0;
  /* 004fb7a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004fb7a5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fb7a6 lea edi, [esi + 0x28] */ edi = (u32)((u32)(esi + 0x28u));
  /* 004fb7a9 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fb7ab call 0x544a10 */ esp -= 4; M32(esp) = 0x4fb7b0u; SAVEALL; F_00544a10(c); ABI_CHECK(0x544a10u, 0x4fb7abu); RETCHK(0x4fb7b0u, 0x4fb7abu); LOADALL;
L_004fb7b0:;
  /* 004fb7b0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fb7b1 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fb7b3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb7b4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fb7b5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fb7b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb7b8 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_004fb7bb:;
  /* 004fb7bb mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004fb7bd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fb7bf call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fb7c2u; SAVEALL; call_ind(c, t_); RETCHK(0x4fb7c2u, 0x4fb7bfu); LOADALL; }
  /* 004fb7c2 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004fb7c4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004fb7c6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fb7c8 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4fb7cau; SAVEALL; call_ind(c, t_); RETCHK(0x4fb7cau, 0x4fb7c8u); LOADALL; }
  /* 004fb7ca mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 004fb7cd mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 004fb7d0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fb7d1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fb7d2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fb7d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fb7d4 push 0x64fa48 */ { u32 v_ = 0x64fa48u; esp -= 4; M32(esp) = v_; }
  /* 004fb7d9 mov esi, 0x7a85f4 */ { esi = (u32)(0x7a85f4u); }
  /* 004fb7de call 0x541010 */ esp -= 4; M32(esp) = 0x4fb7e3u; SAVEALL; F_00541010(c); ABI_CHECK(0x541010u, 0x4fb7deu); RETCHK(0x4fb7e3u, 0x4fb7deu); LOADALL;
  /* 004fb7e3 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fb7e6:;
  /* 004fb7e6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fb7e7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb7e8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004fb7ea pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fb7eb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fb7ed pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb7ee ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004fb800(CPU *c) {
  NATIVE_HOOK(0x4fb800u) REGS; LOADALL;
L_004fb800:;
  /* 004fb800 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fb801 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fb803 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb804 call 0x556030 */ esp -= 4; M32(esp) = 0x4fb809u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x4fb804u); RETCHK(0x4fb809u, 0x4fb804u); LOADALL;
  /* 004fb809 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fb80b mov edx, edi */ { edx = (u32)(edi); }
  /* 004fb80d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fb80f call 0x555800 */ esp -= 4; M32(esp) = 0x4fb814u; SAVEALL; F_00555800(c); ABI_CHECK(0x555800u, 0x4fb80fu); RETCHK(0x4fb814u, 0x4fb80fu); LOADALL;
  /* 004fb814 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb816 jne 0x4fb835 */ if (!ZF_) goto L_004fb835;
  /* 004fb818 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fb81a call 0x555820 */ esp -= 4; M32(esp) = 0x4fb81fu; SAVEALL; F_00555820(c); ABI_CHECK(0x555820u, 0x4fb81au); RETCHK(0x4fb81fu, 0x4fb81au); LOADALL;
  /* 004fb81f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb821 jne 0x4fb835 */ if (!ZF_) goto L_004fb835;
  /* 004fb823 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fb826 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fb828 imul eax, eax, 0x3e8 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x3e8u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004fb82e add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fb830 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb831 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb832 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004fb835:;
  /* 004fb835 mov eax, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); eax = (u32)(M32(m_)); }
  /* 004fb83b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fb83e imul eax, eax, 0x3e8 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x3e8u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004fb844 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fb846 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb847 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb848 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fb850(CPU *c) {
  NATIVE_HOOK(0x4fb850u) REGS; LOADALL;
L_004fb850:;
  /* 004fb850 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb851 call 0x4fb800 */ esp -= 4; M32(esp) = 0x4fb856u; SAVEALL; F_004fb800(c); ABI_CHECK(0x4fb800u, 0x4fb851u); RETCHK(0x4fb856u, 0x4fb851u); LOADALL;
  /* 004fb856 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb857 call 0x4fc670 */ esp -= 4; M32(esp) = 0x4fb85cu; SAVEALL; F_004fc670(c); ABI_CHECK(0x4fc670u, 0x4fb857u); RETCHK(0x4fb85cu, 0x4fb857u); LOADALL;
  /* 004fb85c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb85d call 0x4fdeb0 */ esp -= 4; M32(esp) = 0x4fb862u; SAVEALL; F_004fdeb0(c); ABI_CHECK(0x4fdeb0u, 0x4fb85du); RETCHK(0x4fb862u, 0x4fb85du); LOADALL;
  /* 004fb862 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004fb870(CPU *c) {
  NATIVE_HOOK(0x4fb870u) REGS; LOADALL;
L_004fb870:;
  /* 004fb870 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb871 call 0x556030 */ esp -= 4; M32(esp) = 0x4fb876u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x4fb871u); RETCHK(0x4fb876u, 0x4fb871u); LOADALL;
  /* 004fb876 mov esi, eax */ { esi = (u32)(eax); }
  /* 004fb878 mov edx, edi */ { edx = (u32)(edi); }
  /* 004fb87a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fb87c call 0x555890 */ esp -= 4; M32(esp) = 0x4fb881u; SAVEALL; F_00555890(c); ABI_CHECK(0x555890u, 0x4fb87cu); RETCHK(0x4fb881u, 0x4fb87cu); LOADALL;
  /* 004fb881 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb883 jne 0x4fb8a0 */ if (!ZF_) goto L_004fb8a0;
  /* 004fb885 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fb887 call 0x555860 */ esp -= 4; M32(esp) = 0x4fb88cu; SAVEALL; F_00555860(c); ABI_CHECK(0x555860u, 0x4fb887u); RETCHK(0x4fb88cu, 0x4fb887u); LOADALL;
  /* 004fb88c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fb88e jne 0x4fb8a0 */ if (!ZF_) goto L_004fb8a0;
  /* 004fb890 mov eax, edi */ { eax = (u32)(edi); }
  /* 004fb892 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb893 call 0x4fc670 */ esp -= 4; M32(esp) = 0x4fb898u; SAVEALL; F_004fc670(c); ABI_CHECK(0x4fc670u, 0x4fb893u); RETCHK(0x4fb898u, 0x4fb893u); LOADALL;
  /* 004fb898 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb899 call 0x4fe600 */ esp -= 4; M32(esp) = 0x4fb89eu; SAVEALL; F_004fe600(c); ABI_CHECK(0x4fe600u, 0x4fb899u); RETCHK(0x4fb89eu, 0x4fb899u); LOADALL;
  /* 004fb89e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb89f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004fb8a0:;
  /* 004fb8a0 mov eax, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); eax = (u32)(M32(m_)); }
  /* 004fb8a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb8a7 call 0x4fc670 */ esp -= 4; M32(esp) = 0x4fb8acu; SAVEALL; F_004fc670(c); ABI_CHECK(0x4fc670u, 0x4fb8a7u); RETCHK(0x4fb8acu, 0x4fb8a7u); LOADALL;
  /* 004fb8ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb8ad call 0x4fe600 */ esp -= 4; M32(esp) = 0x4fb8b2u; SAVEALL; F_004fe600(c); ABI_CHECK(0x4fe600u, 0x4fb8adu); RETCHK(0x4fb8b2u, 0x4fb8adu); LOADALL;
  /* 004fb8b2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb8b3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004fb8c0(CPU *c) {
  NATIVE_HOOK(0x4fb8c0u) REGS; LOADALL;
L_004fb8c0:;
  /* 004fb8c0 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fb8c3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fb8c4 mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 004fb8c6 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fb8c8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb8c9 je 0x4fb8ea */ if (ZF_) goto L_004fb8ea;
  /* 004fb8cb jmp 0x4fb8d0 */ goto L_004fb8d0;
L_004fb8d0:;
  /* 004fb8d0 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fb8d3 call 0x54aa60 */ esp -= 4; M32(esp) = 0x4fb8d8u; SAVEALL; F_0054aa60(c); ABI_CHECK(0x54aa60u, 0x4fb8d3u); RETCHK(0x4fb8d8u, 0x4fb8d3u); LOADALL;
  /* 004fb8d8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb8d9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fb8deu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fb8d9u); RETCHK(0x4fb8deu, 0x4fb8d9u); LOADALL;
  /* 004fb8de mov ebx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ebx = (u32)(M32(m_)); }
  /* 004fb8e0 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fb8e3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb8e6 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fb8e8 jne 0x4fb8d0 */ if (!ZF_) goto L_004fb8d0;
L_004fb8ea:;
  /* 004fb8ea mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004fb8ed mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004fb8ef mov dword ptr [ecx], ecx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ecx); }
  /* 004fb8f1 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004fb8f4 mov dword ptr [ecx + 4], ecx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004fb8f7 cmp eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fb8fa mov dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 004fb901 je 0x4fb917 */ if (ZF_) goto L_004fb917;
L_004fb903:;
  /* 004fb903 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 004fb905 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb906 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fb90bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fb906u); RETCHK(0x4fb90bu, 0x4fb906u); LOADALL;
  /* 004fb90b mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004fb90e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb911 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fb913 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fb915 jne 0x4fb903 */ if (!ZF_) goto L_004fb903;
L_004fb917:;
  /* 004fb917 mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 004fb91a mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 004fb91c cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fb91e je 0x4fb93a */ if (ZF_) goto L_004fb93a;
L_004fb920:;
  /* 004fb920 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 004fb923 call 0x54aa60 */ esp -= 4; M32(esp) = 0x4fb928u; SAVEALL; F_0054aa60(c); ABI_CHECK(0x54aa60u, 0x4fb923u); RETCHK(0x4fb928u, 0x4fb923u); LOADALL;
  /* 004fb928 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb929 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fb92eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fb929u); RETCHK(0x4fb92eu, 0x4fb929u); LOADALL;
  /* 004fb92e mov ebx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ebx = (u32)(M32(m_)); }
  /* 004fb930 mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 004fb933 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb936 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fb938 jne 0x4fb920 */ if (!ZF_) goto L_004fb920;
L_004fb93a:;
  /* 004fb93a mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004fb93d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004fb93f mov dword ptr [ecx], ecx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ecx); }
  /* 004fb941 mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004fb944 mov dword ptr [ecx + 4], ecx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004fb947 cmp eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fb94a mov dword ptr [edi + 0x14], 0 */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 004fb951 je 0x4fb967 */ if (ZF_) goto L_004fb967;
L_004fb953:;
  /* 004fb953 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 004fb955 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb956 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4fb95bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4fb956u); RETCHK(0x4fb95bu, 0x4fb956u); LOADALL;
  /* 004fb95b mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004fb95e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb961 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fb963 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fb965 jne 0x4fb953 */ if (!ZF_) goto L_004fb953;
L_004fb967:;
  /* 004fb967 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb968 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fb969 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
