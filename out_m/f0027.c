#include "funcs.h"

void F_005129f0(CPU *c) {
  NATIVE_HOOK(0x5129f0u) REGS; LOADALL;
L_005129f0:;
  /* 005129f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005129f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005129f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005129f5 push 0x61ddb8 */ { u32 v_ = 0x61ddb8u; esp -= 4; M32(esp) = v_; }
  /* 005129fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00512a00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512a01 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00512a08 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00512a0b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00512a10 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00512a11 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00512a12 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00512a14 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00512a15 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00512a18 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00512a1a mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 00512a21 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 00512a24 mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00512a27 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00512a2a mov eax, edx */ { eax = (u32)(edx); }
  /* 00512a2c mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00512a2f mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 00512a32 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
L_00512a35:;
  /* 00512a35 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00512a37 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00512a38 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00512a3a jne 0x512a35 */ if (!ZF_) goto L_00512a35;
  /* 00512a3c sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00512a3e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512a3f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00512a40 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00512a43 call 0x404420 */ esp -= 4; M32(esp) = 0x512a48u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x512a43u); RETCHK(0x512a48u, 0x512a43u); LOADALL;
  /* 00512a48 lea esi, [edi + 0x1cc] */ esi = (u32)((u32)(edi + 0x1ccu));
  /* 00512a4e lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00512a51 call 0x513180 */ esp -= 4; M32(esp) = 0x512a56u; SAVEALL; F_00513180(c); ABI_CHECK(0x513180u, 0x512a51u); RETCHK(0x512a56u, 0x512a51u); LOADALL;
  /* 00512a56 mov ecx, dword ptr [edi + 0x1e0] */ { const u32 m_ = (u32)(edi + 0x1e0u); ecx = (u32)(M32(m_)); }
  /* 00512a5c cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512a5e jne 0x512a64 */ if (!ZF_) goto L_00512a64;
  /* 00512a60 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00512a62 jmp 0x512a6f */ goto L_00512a6f;
L_00512a64:;
  /* 00512a64 mov eax, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 00512a6a sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00512a6c sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_00512a6f:;
  /* 00512a6f shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00512a71 mov dword ptr [edi + 0x1ec], eax */ { const u32 m_ = (u32)(edi + 0x1ecu); M32(m_) = (u32)(eax); }
  /* 00512a77 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00512a7a cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512a7c je 0x512a8a */ if (ZF_) goto L_00512a8a;
  /* 00512a7e mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00512a81 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00512a83 sar ecx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00512a86 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512a88 jb 0x512aa4 */ if (CF_) goto L_00512aa4;
L_00512a8a:;
  /* 00512a8a mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00512a8d cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512a8f jne 0x512a95 */ if (!ZF_) goto L_00512a95;
  /* 00512a91 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00512a93 jmp 0x512a9d */ goto L_00512a9d;
L_00512a95:;
  /* 00512a95 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00512a98 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00512a9a sar eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_00512a9d:;
  /* 00512a9d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00512a9e mov dword ptr [edi + 0x1ec], eax */ { const u32 m_ = (u32)(edi + 0x1ecu); M32(m_) = (u32)(eax); }
L_00512aa4:;
  /* 00512aa4 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00512aa7 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512aa9 jne 0x512aaf */ if (!ZF_) goto L_00512aaf;
  /* 00512aab xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00512aad jmp 0x512ab7 */ goto L_00512ab7;
L_00512aaf:;
  /* 00512aaf mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 00512ab2 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00512ab4 sar esi, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
L_00512ab7:;
  /* 00512ab7 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00512aba dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00512abb cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512abe jb 0x512acc */ if (CF_) goto L_00512acc;
  /* 00512ac0 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00512ac3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512ac4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x512ac9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x512ac4u); RETCHK(0x512ac9u, 0x512ac4u); LOADALL;
  /* 00512ac9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00512acc:;
  /* 00512acc mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00512acf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00512ad0 mov eax, esi */ { eax = (u32)(esi); }
  /* 00512ad2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00512ad3 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00512ada mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00512add pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00512ade call 0x61af31 */ esp -= 4; M32(esp) = 0x512ae3u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x512adeu); RETCHK(0x512ae3u, 0x512adeu); LOADALL;
  /* 00512ae3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00512ae5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00512ae6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00512af0(CPU *c) {
  NATIVE_HOOK(0x512af0u) REGS; LOADALL;
L_00512af0:;
  /* 00512af0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00512af1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00512af3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00512af5 push 0x625f68 */ { u32 v_ = 0x625f68u; esp -= 4; M32(esp) = v_; }
  /* 00512afa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00512b00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512b01 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00512b08 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00512b0b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00512b10 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00512b11 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00512b13 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00512b16 mov eax, dword ptr [ebx + 0x1d0] */ { const u32 m_ = (u32)(ebx + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 00512b1c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00512b1d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00512b1f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512b21 je 0x512bde */ if (ZF_) goto L_00512bde;
  /* 00512b27 mov ecx, dword ptr [ebx + 0x1d4] */ { const u32 m_ = (u32)(ebx + 0x1d4u); ecx = (u32)(M32(m_)); }
  /* 00512b2d sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00512b2f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00512b32 sar ecx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00512b35 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512b37 jae 0x512bde */ if (!CF_) goto L_00512bde;
  /* 00512b3d cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512b3f jl 0x512bde */ if (LT_) goto L_00512bde;
  /* 00512b45 mov ecx, dword ptr [ebx + 0x1d0] */ { const u32 m_ = (u32)(ebx + 0x1d0u); ecx = (u32)(M32(m_)); }
  /* 00512b4b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00512b4c shl eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00512b4f add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00512b51 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00512b53 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00512b56 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00512b57 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512b58 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00512b5b mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 00512b62 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 00512b65 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 00512b69 call 0x404140 */ esp -= 4; M32(esp) = 0x512b6eu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x512b69u); RETCHK(0x512b6eu, 0x512b69u); LOADALL;
  /* 00512b6e mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00512b71 mov esi, dword ptr [ebx + 0x1d0] */ { const u32 m_ = (u32)(ebx + 0x1d0u); esi = (u32)(M32(m_)); }
  /* 00512b77 cmp esi, dword ptr [ebx + 0x1d4] */ { const u32 m_ = (u32)(ebx + 0x1d4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512b7d je 0x512bc1 */ if (ZF_) goto L_00512bc1;
  /* 00512b7f nop */ ;
L_00512b80:;
  /* 00512b80 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512b84 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00512b87 jae 0x512b8c */ if (!CF_) goto L_00512b8c;
  /* 00512b89 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_00512b8c:;
  /* 00512b8c mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00512b8f mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 00512b92 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00512b93 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512b94 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00512b95 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00512b96 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00512b99 call 0x405de0 */ esp -= 4; M32(esp) = 0x512b9eu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x512b99u); RETCHK(0x512b9eu, 0x512b99u); LOADALL;
  /* 00512b9e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512ba0 je 0x512bb1 */ if (ZF_) goto L_00512bb1;
  /* 00512ba2 mov eax, dword ptr [ebx + 0x1d4] */ { const u32 m_ = (u32)(ebx + 0x1d4u); eax = (u32)(M32(m_)); }
  /* 00512ba8 add esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00512bab cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512bad jne 0x512b80 */ if (!ZF_) goto L_00512b80;
  /* 00512baf jmp 0x512bc1 */ goto L_00512bc1;
L_00512bb1:;
  /* 00512bb1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00512bb2 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00512bb5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512bb6 lea edi, [ebx + 0x1cc] */ edi = (u32)((u32)(ebx + 0x1ccu));
  /* 00512bbc call 0x5131e0 */ esp -= 4; M32(esp) = 0x512bc1u; SAVEALL; F_005131e0(c); ABI_CHECK(0x5131e0u, 0x512bbcu); RETCHK(0x512bc1u, 0x512bbcu); LOADALL;
L_00512bc1:;
  /* 00512bc1 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512bc5 mov dword ptr [ebx + 0x1ec], 0xffffffff */ { const u32 m_ = (u32)(ebx + 0x1ecu); M32(m_) = (u32)(0xffffffffu); }
  /* 00512bcf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00512bd0 jb 0x512bde */ if (CF_) goto L_00512bde;
  /* 00512bd2 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 00512bd5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00512bd6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x512bdbu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x512bd6u); RETCHK(0x512bdbu, 0x512bd6u); LOADALL;
  /* 00512bdb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00512bde:;
  /* 00512bde mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00512be1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00512be2 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00512be9 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00512bec pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00512bed call 0x61af31 */ esp -= 4; M32(esp) = 0x512bf2u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x512bedu); RETCHK(0x512bf2u, 0x512bedu); LOADALL;
  /* 00512bf2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00512bf4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00512bf5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00512c00(CPU *c) {
  NATIVE_HOOK(0x512c00u) REGS; LOADALL;
L_00512c00:;
  /* 00512c00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00512c01 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00512c02 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00512c04 mov esi, dword ptr [edi + 0x1d0] */ { const u32 m_ = (u32)(edi + 0x1d0u); esi = (u32)(M32(m_)); }
  /* 00512c0a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00512c0c cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512c0e je 0x512c3e */ if (ZF_) goto L_00512c3e;
  /* 00512c10 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00512c11 mov ebx, dword ptr [edi + 0x1d4] */ { const u32 m_ = (u32)(edi + 0x1d4u); ebx = (u32)(M32(m_)); }
  /* 00512c17 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512c19 je 0x512c2c */ if (ZF_) goto L_00512c2c;
  /* 00512c1b jmp 0x512c20 */ goto L_00512c20;
L_00512c20:;
  /* 00512c20 call 0x5577c0 */ esp -= 4; M32(esp) = 0x512c25u; SAVEALL; F_005577c0(c); ABI_CHECK(0x5577c0u, 0x512c20u); RETCHK(0x512c25u, 0x512c20u); LOADALL;
  /* 00512c25 add esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00512c28 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512c2a jne 0x512c20 */ if (!ZF_) goto L_00512c20;
L_00512c2c:;
  /* 00512c2c mov eax, dword ptr [edi + 0x1d0] */ { const u32 m_ = (u32)(edi + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 00512c32 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512c33 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x512c38u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x512c33u); RETCHK(0x512c38u, 0x512c33u); LOADALL;
  /* 00512c38 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00512c3b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00512c3d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00512c3e:;
  /* 00512c3e mov dword ptr [edi + 0x1d0], eax */ { const u32 m_ = (u32)(edi + 0x1d0u); M32(m_) = (u32)(eax); }
  /* 00512c44 mov dword ptr [edi + 0x1d4], eax */ { const u32 m_ = (u32)(edi + 0x1d4u); M32(m_) = (u32)(eax); }
  /* 00512c4a mov dword ptr [edi + 0x1d8], eax */ { const u32 m_ = (u32)(edi + 0x1d8u); M32(m_) = (u32)(eax); }
  /* 00512c50 mov esi, edi */ { esi = (u32)(edi); }
  /* 00512c52 mov dword ptr [edi + 0x1ec], 0xffffffff */ { const u32 m_ = (u32)(edi + 0x1ecu); M32(m_) = (u32)(0xffffffffu); }
  /* 00512c5c call 0x513070 */ esp -= 4; M32(esp) = 0x512c61u; SAVEALL; F_00513070(c); ABI_CHECK(0x513070u, 0x512c5cu); RETCHK(0x512c61u, 0x512c5cu); LOADALL;
  /* 00512c61 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00512c62 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00512c63 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00512c70(CPU *c) {
  NATIVE_HOOK(0x512c70u) REGS; LOADALL;
L_00512c70:;
  /* 00512c70 mov eax, dword ptr [ecx + 0x1ec] */ { const u32 m_ = (u32)(ecx + 0x1ecu); eax = (u32)(M32(m_)); }
  /* 00512c76 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00512c80(CPU *c) {
  NATIVE_HOOK(0x512c80u) REGS; LOADALL;
L_00512c80:;
  /* 00512c80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00512c81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00512c83 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00512c84 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00512c87 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512c89 jl 0x512caa */ if (LT_) goto L_00512caa;
  /* 00512c8b mov edx, dword ptr [ecx + 0x1d0] */ { const u32 m_ = (u32)(ecx + 0x1d0u); edx = (u32)(M32(m_)); }
  /* 00512c91 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512c93 je 0x512caa */ if (ZF_) goto L_00512caa;
  /* 00512c95 mov eax, dword ptr [ecx + 0x1d4] */ { const u32 m_ = (u32)(ecx + 0x1d4u); eax = (u32)(M32(m_)); }
  /* 00512c9b sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00512c9d sar eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00512ca0 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512ca2 jae 0x512caa */ if (!CF_) goto L_00512caa;
  /* 00512ca4 mov dword ptr [ecx + 0x1ec], esi */ { const u32 m_ = (u32)(ecx + 0x1ecu); M32(m_) = (u32)(esi); }
L_00512caa:;
  /* 00512caa mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00512cac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00512cad pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00512cae ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00512cc0(CPU *c) {
  NATIVE_HOOK(0x512cc0u) REGS; LOADALL;
L_00512cc0:;
  /* 00512cc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00512cc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00512cc3 mov eax, dword ptr [ecx + 0x1d0] */ { const u32 m_ = (u32)(ecx + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 00512cc9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512ccb je 0x512cf3 */ if (ZF_) goto L_00512cf3;
  /* 00512ccd mov edx, dword ptr [ecx + 0x1d4] */ { const u32 m_ = (u32)(ecx + 0x1d4u); edx = (u32)(M32(m_)); }
  /* 00512cd3 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00512cd5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00512cd8 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00512cdb cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512cdd jae 0x512cf3 */ if (!CF_) goto L_00512cf3;
  /* 00512cdf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512ce1 jl 0x512cf3 */ if (LT_) goto L_00512cf3;
  /* 00512ce3 mov edx, dword ptr [ecx + 0x1d0] */ { const u32 m_ = (u32)(ecx + 0x1d0u); edx = (u32)(M32(m_)); }
  /* 00512ce9 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00512cec shl eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00512cef add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00512cf1 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
L_00512cf3:;
  /* 00512cf3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00512cf4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00512d00(CPU *c) {
  NATIVE_HOOK(0x512d00u) REGS; LOADALL;
L_00512d00:;
  /* 00512d00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00512d01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00512d03 mov eax, dword ptr [ecx + 0x1d0] */ { const u32 m_ = (u32)(ecx + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 00512d09 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512d0b je 0x512d34 */ if (ZF_) goto L_00512d34;
  /* 00512d0d mov edx, dword ptr [ecx + 0x1d4] */ { const u32 m_ = (u32)(ecx + 0x1d4u); edx = (u32)(M32(m_)); }
  /* 00512d13 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00512d15 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00512d18 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00512d1b cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512d1d jae 0x512d34 */ if (!CF_) goto L_00512d34;
  /* 00512d1f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512d21 jl 0x512d34 */ if (LT_) goto L_00512d34;
  /* 00512d23 mov edx, dword ptr [ecx + 0x1d0] */ { const u32 m_ = (u32)(ecx + 0x1d0u); edx = (u32)(M32(m_)); }
  /* 00512d29 shl eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00512d2c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00512d2e mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00512d30 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00512d31 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00512d34:;
  /* 00512d34 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00512d37 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00512d38 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00512d40(CPU *c) {
  NATIVE_HOOK(0x512d40u) REGS; LOADALL;
L_00512d40:;
  /* 00512d40 mov edx, dword ptr [ecx + 0x1ec] */ { const u32 m_ = (u32)(ecx + 0x1ecu); edx = (u32)(M32(m_)); }
  /* 00512d46 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00512d47 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00512d48 mov dword ptr [ecx + 0x1ec], edx */ { const u32 m_ = (u32)(ecx + 0x1ecu); M32(m_) = (u32)(edx); }
  /* 00512d4e mov esi, edx */ { esi = (u32)(edx); }
  /* 00512d50 mov edx, dword ptr [ecx + 0x1d0] */ { const u32 m_ = (u32)(ecx + 0x1d0u); edx = (u32)(M32(m_)); }
  /* 00512d56 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512d58 je 0x512d69 */ if (ZF_) goto L_00512d69;
  /* 00512d5a mov eax, dword ptr [ecx + 0x1d4] */ { const u32 m_ = (u32)(ecx + 0x1d4u); eax = (u32)(M32(m_)); }
  /* 00512d60 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00512d62 sar eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00512d65 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512d67 jb 0x512d96 */ if (CF_) goto L_00512d96;
L_00512d69:;
  /* 00512d69 mov edx, dword ptr [ecx + 0x1d0] */ { const u32 m_ = (u32)(ecx + 0x1d0u); edx = (u32)(M32(m_)); }
  /* 00512d6f test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512d71 jne 0x512d80 */ if (!ZF_) goto L_00512d80;
  /* 00512d73 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00512d75 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00512d76 mov dword ptr [ecx + 0x1ec], eax */ { const u32 m_ = (u32)(ecx + 0x1ecu); M32(m_) = (u32)(eax); }
  /* 00512d7c xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00512d7e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00512d7f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00512d80:;
  /* 00512d80 mov eax, dword ptr [ecx + 0x1d4] */ { const u32 m_ = (u32)(ecx + 0x1d4u); eax = (u32)(M32(m_)); }
  /* 00512d86 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00512d88 sar eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00512d8b dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00512d8c mov dword ptr [ecx + 0x1ec], eax */ { const u32 m_ = (u32)(ecx + 0x1ecu); M32(m_) = (u32)(eax); }
  /* 00512d92 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00512d94 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00512d95 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00512d96:;
  /* 00512d96 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00512d98 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00512d99 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00512da0(CPU *c) {
  NATIVE_HOOK(0x512da0u) REGS; LOADALL;
L_00512da0:;
  /* 00512da0 mov eax, dword ptr [ecx + 0x1ec] */ { const u32 m_ = (u32)(ecx + 0x1ecu); eax = (u32)(M32(m_)); }
  /* 00512da6 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00512da7 mov dword ptr [ecx + 0x1ec], eax */ { const u32 m_ = (u32)(ecx + 0x1ecu); M32(m_) = (u32)(eax); }
  /* 00512dad jns 0x512db9 */ if (!SF_) goto L_00512db9;
  /* 00512daf inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00512db0 mov dword ptr [ecx + 0x1ec], eax */ { const u32 m_ = (u32)(ecx + 0x1ecu); M32(m_) = (u32)(eax); }
  /* 00512db6 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00512db8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00512db9:;
  /* 00512db9 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00512dbb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00512dc0(CPU *c) {
  NATIVE_HOOK(0x512dc0u) REGS; LOADALL;
L_00512dc0:;
  /* 00512dc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00512dc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00512dc3 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00512dc6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00512dc7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00512dc8 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00512dca mov esi, edi */ { esi = (u32)(edi); }
  /* 00512dcc call 0x513070 */ esp -= 4; M32(esp) = 0x512dd1u; SAVEALL; F_00513070(c); ABI_CHECK(0x513070u, 0x512dccu); RETCHK(0x512dd1u, 0x512dccu); LOADALL;
  /* 00512dd1 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00512dd3 call 0x50c550 */ esp -= 4; M32(esp) = 0x512dd8u; SAVEALL; F_0050c550(c); ABI_CHECK(0x50c550u, 0x512dd3u); RETCHK(0x512dd8u, 0x512dd3u); LOADALL;
  /* 00512dd8 mov ecx, dword ptr [edi + 0x1e0] */ { const u32 m_ = (u32)(edi + 0x1e0u); ecx = (u32)(M32(m_)); }
  /* 00512dde test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512de0 jne 0x512de6 */ if (!ZF_) goto L_00512de6;
  /* 00512de2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00512de4 jmp 0x512df1 */ goto L_00512df1;
L_00512de6:;
  /* 00512de6 mov eax, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 00512dec sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00512dee sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_00512df1:;
  /* 00512df1 mov ecx, dword ptr [edi + 0x1f0] */ { const u32 m_ = (u32)(edi + 0x1f0u); ecx = (u32)(M32(m_)); }
  /* 00512df7 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512df9 jae 0x512e6b */ if (!CF_) goto L_00512e6b;
  /* 00512dfb test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512dfd jl 0x512e6b */ if (LT_) goto L_00512e6b;
  /* 00512dff mov eax, dword ptr [edi + 0x1e0] */ { const u32 m_ = (u32)(edi + 0x1e0u); eax = (u32)(M32(m_)); }
  /* 00512e05 lea eax, [eax + ecx*4] */ eax = (u32)((u32)(eax + ecx * 4u));
  /* 00512e08 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00512e0a mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00512e0c lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 00512e0f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512e10 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x512e13u; SAVEALL; call_ind(c, t_); RETCHK(0x512e13u, 0x512e10u); LOADALL; }
  /* 00512e13 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00512e14 lea esi, [ebp - 0x14] */ esi = (u32)((u32)(ebp + 0xffffffecu));
  /* 00512e17 call 0x52cf90 */ esp -= 4; M32(esp) = 0x512e1cu; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x512e17u); RETCHK(0x512e1cu, 0x512e17u); LOADALL;
  /* 00512e1c fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00512e1f fsub dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00512e25 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00512e28 mov al, 0xff */ { eax = (eax & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 00512e2a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00512e2c fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00512e2f lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00512e32 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00512e35 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00512e36 fsub dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00512e3c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00512e3e mov byte ptr [ebp - 4], al */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00512e41 mov byte ptr [ebp - 3], al */ { const u32 m_ = (u32)(ebp + 0xfffffffdu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00512e44 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00512e47 mov byte ptr [ebp - 2], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffeu); M8(m_) = (u8)(0x0u); }
  /* 00512e4b fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00512e4e mov byte ptr [ebp - 1], al */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00512e51 fadd dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00512e57 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00512e5a fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00512e5d fadd dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00512e63 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00512e66 call 0x527040 */ esp -= 4; M32(esp) = 0x512e6bu; SAVEALL; F_00527040(c); ABI_CHECK(0x527040u, 0x512e66u); RETCHK(0x512e6bu, 0x512e66u); LOADALL;
L_00512e6b:;
  /* 00512e6b xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00512e6d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00512e70:;
  /* 00512e70 mov ecx, dword ptr [edi + 0x1e0] */ { const u32 m_ = (u32)(edi + 0x1e0u); ecx = (u32)(M32(m_)); }
  /* 00512e76 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512e78 je 0x512e99 */ if (ZF_) goto L_00512e99;
  /* 00512e7a mov eax, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 00512e80 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00512e82 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00512e85 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512e87 jae 0x512e99 */ if (!CF_) goto L_00512e99;
  /* 00512e89 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00512e8b mov ecx, dword ptr [edx + esi*4] */ { const u32 m_ = (u32)(edx + esi * 4u); ecx = (u32)(M32(m_)); }
  /* 00512e8e lea eax, [edx + esi*4] */ eax = (u32)((u32)(edx + esi * 4u));
  /* 00512e91 call 0x508410 */ esp -= 4; M32(esp) = 0x512e96u; SAVEALL; F_00508410(c); ABI_CHECK(0x508410u, 0x512e91u); RETCHK(0x512e96u, 0x512e91u); LOADALL;
  /* 00512e96 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00512e97 jmp 0x512e70 */ goto L_00512e70;
L_00512e99:;
  /* 00512e99 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00512e9a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00512e9b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00512e9d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00512e9e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00512ea0(CPU *c) {
  NATIVE_HOOK(0x512ea0u) REGS; LOADALL;
L_00512ea0:;
  /* 00512ea0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00512ea1 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00512ea3 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00512ea5 call dword ptr [eax + 0xf8] */ { const u32 m_ = (u32)(eax + 0xf8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x512eabu; SAVEALL; call_ind(c, t_); RETCHK(0x512eabu, 0x512ea5u); LOADALL; }
  /* 00512eab call 0x507a80 */ esp -= 4; M32(esp) = 0x512eb0u; SAVEALL; F_00507a80(c); ABI_CHECK(0x507a80u, 0x512eabu); RETCHK(0x512eb0u, 0x512eabu); LOADALL;
  /* 00512eb0 mov eax, dword ptr [ebx + 0x1e0] */ { const u32 m_ = (u32)(ebx + 0x1e0u); eax = (u32)(M32(m_)); }
  /* 00512eb6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512eb8 je 0x512ec3 */ if (ZF_) goto L_00512ec3;
  /* 00512eba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512ebb call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x512ec0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x512ebbu); RETCHK(0x512ec0u, 0x512ebbu); LOADALL;
  /* 00512ec0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00512ec3:;
  /* 00512ec3 mov dword ptr [ebx + 0x1e0], 0 */ { const u32 m_ = (u32)(ebx + 0x1e0u); M32(m_) = (u32)(0x0u); }
  /* 00512ecd mov dword ptr [ebx + 0x1e4], 0 */ { const u32 m_ = (u32)(ebx + 0x1e4u); M32(m_) = (u32)(0x0u); }
  /* 00512ed7 mov dword ptr [ebx + 0x1e8], 0 */ { const u32 m_ = (u32)(ebx + 0x1e8u); M32(m_) = (u32)(0x0u); }
  /* 00512ee1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00512ee2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00512ef0(CPU *c) {
  NATIVE_HOOK(0x512ef0u) REGS; LOADALL;
L_00512ef0:;
  /* 00512ef0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00512ef1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00512ef3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00512ef5 push 0x624328 */ { u32 v_ = 0x624328u; esp -= 4; M32(esp) = v_; }
  /* 00512efa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00512f00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512f01 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00512f08 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00512f0b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00512f0c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00512f0e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00512f11 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512f13 jne 0x512f28 */ if (!ZF_) goto L_00512f28;
  /* 00512f15 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00512f17 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00512f18 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00512f1b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00512f22 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00512f24 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00512f25 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00512f28:;
  /* 00512f28 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00512f2a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00512f2b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00512f2c call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x512f2fu; SAVEALL; call_ind(c, t_); RETCHK(0x512f2fu, 0x512f2cu); LOADALL; }
  /* 00512f2f push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 00512f34 mov edi, eax */ { edi = (u32)(eax); }
  /* 00512f36 call 0x560fd0 */ esp -= 4; M32(esp) = 0x512f3bu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x512f36u); RETCHK(0x512f3bu, 0x512f36u); LOADALL;
  /* 00512f3b mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00512f3e fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00512f41 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 00512f46 mov eax, edi */ { eax = (u32)(edi); }
  /* 00512f48 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00512f4b call 0x560fd0 */ esp -= 4; M32(esp) = 0x512f50u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x512f4bu); RETCHK(0x512f50u, 0x512f4bu); LOADALL;
  /* 00512f50 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00512f53 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00512f56 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 00512f5b mov eax, edi */ { eax = (u32)(edi); }
  /* 00512f5d fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00512f60 call 0x560fd0 */ esp -= 4; M32(esp) = 0x512f65u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x512f60u); RETCHK(0x512f65u, 0x512f60u); LOADALL;
  /* 00512f65 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00512f68 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00512f6b push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 00512f70 mov eax, edi */ { eax = (u32)(edi); }
  /* 00512f72 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00512f75 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00512f78 call 0x560fd0 */ esp -= 4; M32(esp) = 0x512f7du; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x512f78u); RETCHK(0x512f7du, 0x512f78u); LOADALL;
  /* 00512f7d mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00512f80 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00512f83 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00512f86 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512f88 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00512f8b fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00512f8e je 0x512f9c */ if (ZF_) goto L_00512f9c;
  /* 00512f90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512f91 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00512f94 call 0x52d060 */ esp -= 4; M32(esp) = 0x512f99u; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x512f94u); RETCHK(0x512f99u, 0x512f94u); LOADALL;
  /* 00512f99 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00512f9c:;
  /* 00512f9c push 0x651b14 */ { u32 v_ = 0x651b14u; esp -= 4; M32(esp) = v_; }
  /* 00512fa1 mov eax, edi */ { eax = (u32)(edi); }
  /* 00512fa3 call 0x560fd0 */ esp -= 4; M32(esp) = 0x512fa8u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x512fa3u); RETCHK(0x512fa8u, 0x512fa3u); LOADALL;
  /* 00512fa8 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00512fab push 0x651b08 */ { u32 v_ = 0x651b08u; esp -= 4; M32(esp) = v_; }
  /* 00512fb0 mov eax, edi */ { eax = (u32)(edi); }
  /* 00512fb2 call 0x560fd0 */ esp -= 4; M32(esp) = 0x512fb7u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x512fb2u); RETCHK(0x512fb7u, 0x512fb2u); LOADALL;
  /* 00512fb7 mov dword ptr [ebx + 0x1f0], eax */ { const u32 m_ = (u32)(ebx + 0x1f0u); M32(m_) = (u32)(eax); }
  /* 00512fbd push 0x651afc */ { u32 v_ = 0x651afcu; esp -= 4; M32(esp) = v_; }
  /* 00512fc2 mov eax, edi */ { eax = (u32)(edi); }
  /* 00512fc4 call 0x560fd0 */ esp -= 4; M32(esp) = 0x512fc9u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x512fc4u); RETCHK(0x512fc9u, 0x512fc4u); LOADALL;
  /* 00512fc9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512fcb setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00512fce push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00512fcf mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 00512fd4 mov byte ptr [ebx + 0x1f4], cl */ { const u32 m_ = (u32)(ebx + 0x1f4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00512fda call 0x560ed0 */ esp -= 4; M32(esp) = 0x512fdfu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x512fdau); RETCHK(0x512fdfu, 0x512fdau); LOADALL;
  /* 00512fdf mov esi, eax */ { esi = (u32)(eax); }
  /* 00512fe1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00512fe3 mov dword ptr [ebp - 0x20], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xfu); }
  /* 00512fea mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 00512ff1 mov byte ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)(0x0u); }
  /* 00512ff5 lea eax, [ecx + 1] */ eax = (u32)((u32)(ecx + 0x1u));
L_00512ff8:;
  /* 00512ff8 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00512ffa inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00512ffb test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00512ffd jne 0x512ff8 */ if (!ZF_) goto L_00512ff8;
  /* 00512fff sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00513001 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00513002 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00513003 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00513006 call 0x404420 */ esp -= 4; M32(esp) = 0x51300bu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x513006u); RETCHK(0x51300bu, 0x513006u); LOADALL;
  /* 0051300b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051300e mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00513015 mov eax, dword ptr [ebx + 0x1f0] */ { const u32 m_ = (u32)(ebx + 0x1f0u); eax = (u32)(M32(m_)); }
  /* 0051301b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0051301d mov dl, byte ptr [ebx + 0x1f4] */ { const u32 m_ = (u32)(ebx + 0x1f4u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00513023 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00513024 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513025 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00513026 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00513027 mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 0051302c call 0x560ed0 */ esp -= 4; M32(esp) = 0x513031u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x51302cu); RETCHK(0x513031u, 0x51302cu); LOADALL;
  /* 00513031 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513032 lea edx, [ebp - 0x38] */ edx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00513035 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00513036 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00513037 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0051303a call 0x512780 */ esp -= 4; M32(esp) = 0x51303fu; SAVEALL; F_00512780(c); ABI_CHECK(0x512780u, 0x51303au); RETCHK(0x51303fu, 0x51303au); LOADALL;
  /* 0051303f mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 00513041 cmp dword ptr [ebp - 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513045 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00513046 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00513047 jb 0x513055 */ if (CF_) goto L_00513055;
  /* 00513049 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 0051304c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051304d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x513052u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51304du); RETCHK(0x513052u, 0x51304du); LOADALL;
  /* 00513052 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00513055:;
  /* 00513055 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00513058 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 0051305a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051305b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00513062 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00513064 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00513065 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00513070(CPU *c) {
  NATIVE_HOOK(0x513070u) REGS; LOADALL;
L_00513070:;
  /* 00513070 mov eax, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); eax = (u32)(M32(m_)); }
  /* 00513076 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00513078 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00513079 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051307a jne 0x513080 */ if (!ZF_) goto L_00513080;
  /* 0051307c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0051307e jmp 0x51308b */ goto L_0051308b;
L_00513080:;
  /* 00513080 mov ebx, dword ptr [esi + 0x1e4] */ { const u32 m_ = (u32)(esi + 0x1e4u); ebx = (u32)(M32(m_)); }
  /* 00513086 sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00513088 sar ebx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ebx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
L_0051308b:;
  /* 0051308b xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0051308d test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051308f jle 0x5130a8 */ if ((ZF_|LT_)) goto L_005130a8;
L_00513091:;
  /* 00513091 mov eax, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); eax = (u32)(M32(m_)); }
  /* 00513097 lea ecx, [eax + edi*4] */ ecx = (u32)((u32)(eax + edi * 4u));
  /* 0051309a mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 0051309c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051309e call 0x50e4d0 */ esp -= 4; M32(esp) = 0x5130a3u; SAVEALL; F_0050e4d0(c); ABI_CHECK(0x50e4d0u, 0x51309eu); RETCHK(0x5130a3u, 0x51309eu); LOADALL;
  /* 005130a3 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005130a4 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005130a6 jl 0x513091 */ if (LT_) goto L_00513091;
L_005130a8:;
  /* 005130a8 mov edx, dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); edx = (u32)(M32(m_)); }
  /* 005130ae test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005130b0 jl 0x513138 */ if (LT_) goto L_00513138;
  /* 005130b6 mov ecx, dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); ecx = (u32)(M32(m_)); }
  /* 005130bc test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005130be jne 0x5130c4 */ if (!ZF_) goto L_005130c4;
  /* 005130c0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005130c2 jmp 0x5130cf */ goto L_005130cf;
L_005130c4:;
  /* 005130c4 mov eax, dword ptr [esi + 0x1d4] */ { const u32 m_ = (u32)(esi + 0x1d4u); eax = (u32)(M32(m_)); }
  /* 005130ca sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005130cc sar eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_005130cf:;
  /* 005130cf cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005130d1 jae 0x513138 */ if (!CF_) goto L_00513138;
  /* 005130d3 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005130d5 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005130d7 jle 0x513138 */ if ((ZF_|LT_)) goto L_00513138;
  /* 005130d9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005130e0:;
  /* 005130e0 mov edx, dword ptr [esi + 0x1f0] */ { const u32 m_ = (u32)(esi + 0x1f0u); edx = (u32)(M32(m_)); }
  /* 005130e6 mov ecx, dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); ecx = (u32)(M32(m_)); }
  /* 005130ec mov eax, edi */ { eax = (u32)(edi); }
  /* 005130ee sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005130f0 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005130f2 js 0x513133 */ if (SF_) goto L_00513133;
  /* 005130f4 mov edx, dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); edx = (u32)(M32(m_)); }
  /* 005130fa test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005130fc je 0x513133 */ if (ZF_) goto L_00513133;
  /* 005130fe mov ecx, dword ptr [esi + 0x1d4] */ { const u32 m_ = (u32)(esi + 0x1d4u); ecx = (u32)(M32(m_)); }
  /* 00513104 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00513106 sar ecx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00513109 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051310b jae 0x513133 */ if (!CF_) goto L_00513133;
  /* 0051310d shl eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00513110 mov ecx, dword ptr [eax + edx + 0x1c] */ { const u32 m_ = (u32)(eax + edx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 00513114 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00513116 cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513119 jb 0x513120 */ if (CF_) goto L_00513120;
  /* 0051311b mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051311e jmp 0x513123 */ goto L_00513123;
L_00513120:;
  /* 00513120 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00513123:;
  /* 00513123 mov ecx, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); ecx = (u32)(M32(m_)); }
  /* 00513129 lea ecx, [ecx + edi*4] */ ecx = (u32)((u32)(ecx + edi * 4u));
  /* 0051312c mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 0051312e call 0x50e4d0 */ esp -= 4; M32(esp) = 0x513133u; SAVEALL; F_0050e4d0(c); ABI_CHECK(0x50e4d0u, 0x51312eu); RETCHK(0x513133u, 0x51312eu); LOADALL;
L_00513133:;
  /* 00513133 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00513134 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513136 jl 0x5130e0 */ if (LT_) goto L_005130e0;
L_00513138:;
  /* 00513138 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00513139 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051313a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00513180(CPU *c) {
  NATIVE_HOOK(0x513180u) REGS; LOADALL;
L_00513180:;
  /* 00513180 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00513181 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00513183 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00513184 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00513185 mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 00513188 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051318a jne 0x513190 */ if (!ZF_) goto L_00513190;
  /* 0051318c xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0051318e jmp 0x513198 */ goto L_00513198;
L_00513190:;
  /* 00513190 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00513193 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00513195 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
L_00513198:;
  /* 00513198 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051319a je 0x5131c5 */ if (ZF_) goto L_005131c5;
  /* 0051319c mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051319f sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005131a1 sar eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005131a4 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005131a6 jae 0x5131c5 */ if (!CF_) goto L_005131c5;
  /* 005131a8 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005131ab mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 005131ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005131af push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005131b1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005131b2 call 0x513350 */ esp -= 4; M32(esp) = 0x5131b7u; SAVEALL; F_00513350(c); ABI_CHECK(0x513350u, 0x5131b2u); RETCHK(0x5131b7u, 0x5131b2u); LOADALL;
  /* 005131b7 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005131ba add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005131bd mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 005131c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005131c1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005131c3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005131c4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005131c5:;
  /* 005131c5 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005131c8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005131c9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005131cb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005131cc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005131cd call 0x558170 */ esp -= 4; M32(esp) = 0x5131d2u; SAVEALL; F_00558170(c); ABI_CHECK(0x558170u, 0x5131cdu); RETCHK(0x5131d2u, 0x5131cdu); LOADALL;
  /* 005131d2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005131d3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005131d5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005131d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005131e0(CPU *c) {
  NATIVE_HOOK(0x5131e0u) REGS; LOADALL;
L_005131e0:;
  /* 005131e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005131e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005131e3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005131e6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005131e7 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005131ea push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005131eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005131ec mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005131ef lea ecx, [eax + 0x20] */ ecx = (u32)((u32)(eax + 0x20u));
  /* 005131f2 call 0x513310 */ esp -= 4; M32(esp) = 0x5131f7u; SAVEALL; F_00513310(c); ABI_CHECK(0x513310u, 0x5131f2u); RETCHK(0x5131f7u, 0x5131f2u); LOADALL;
  /* 005131f7 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005131fa lea esi, [ebx - 0x20] */ esi = (u32)((u32)(ebx + 0xffffffe0u));
  /* 005131fd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00513200 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513202 je 0x513210 */ if (ZF_) goto L_00513210;
L_00513204:;
  /* 00513204 call 0x5577c0 */ esp -= 4; M32(esp) = 0x513209u; SAVEALL; F_005577c0(c); ABI_CHECK(0x5577c0u, 0x513204u); RETCHK(0x513209u, 0x513204u); LOADALL;
  /* 00513209 add esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051320c cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051320e jne 0x513204 */ if (!ZF_) goto L_00513204;
L_00513210:;
  /* 00513210 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00513213 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00513216 add eax, -0x20 */ { u32 a_ = eax, b_ = 0xffffffe0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00513219 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051321c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051321f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00513220 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00513222 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00513223 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00513224 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00513230(CPU *c) {
  NATIVE_HOOK(0x513230u) REGS; LOADALL;
L_00513230:;
  /* 00513230 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00513231 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00513233 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00513235 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0051323a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00513240 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513241 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00513248 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00513249 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051324a push 0x5132b0 */ { u32 v_ = 0x5132b0u; esp -= 4; M32(esp) = v_; }
  /* 0051324f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00513252 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00513254 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00513256 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00513259 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0051325c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051325e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051325f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00513262 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00513269 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0051326c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051326d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00513270 call 0x404140 */ esp -= 4; M32(esp) = 0x513275u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x513270u); RETCHK(0x513275u, 0x513270u); LOADALL;
  /* 00513275 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00513278 call 0x405c00 */ esp -= 4; M32(esp) = 0x51327du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x513278u); RETCHK(0x51327du, 0x513278u); LOADALL;
  /* 0051327d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0051327f call 0x405c80 */ esp -= 4; M32(esp) = 0x513284u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x51327fu); RETCHK(0x513284u, 0x51327fu); LOADALL;
  /* 00513284 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513288 jb 0x513296 */ if (CF_) goto L_00513296;
  /* 0051328a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051328d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051328e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x513293u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51328eu); RETCHK(0x513293u, 0x51328eu); LOADALL;
  /* 00513293 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00513296:;
  /* 00513296 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00513299 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051329b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005132a2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005132a3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005132a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005132a6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_005132b0(CPU *c) {
  NATIVE_HOOK(0x5132b0u) REGS; LOADALL;
L_005132b0:;
  /* 005132b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005132b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005132b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005132b5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 005132ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005132c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005132c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005132c8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005132c9 push 0x1f8 */ { u32 v_ = 0x1f8u; esp -= 4; M32(esp) = v_; }
  /* 005132ce call 0x5fe934 */ esp -= 4; M32(esp) = 0x5132d3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5132ceu); RETCHK(0x5132d3u, 0x5132ceu); LOADALL;
  /* 005132d3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005132d6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005132d9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005132db mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005132e2 je 0x5132fa */ if (ZF_) goto L_005132fa;
  /* 005132e4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005132e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005132e7 call 0x512620 */ esp -= 4; M32(esp) = 0x5132ecu; SAVEALL; F_00512620(c); ABI_CHECK(0x512620u, 0x5132e7u); RETCHK(0x5132ecu, 0x5132e7u); LOADALL;
  /* 005132ec mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005132ef mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005132f6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005132f8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005132f9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005132fa:;
  /* 005132fa mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005132fd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005132ff mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00513306 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00513308 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00513309 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00513310(CPU *c) {
  NATIVE_HOOK(0x513310u) REGS; LOADALL;
L_00513310:;
  /* 00513310 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00513311 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00513313 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513315 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00513316 mov edi, eax */ { edi = (u32)(eax); }
  /* 00513318 je 0x51333e */ if (ZF_) goto L_0051333e;
  /* 0051331a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00513320:;
  /* 00513320 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00513322 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00513324 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00513326 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00513329 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051332a lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0051332d mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 0051332f call 0x404140 */ esp -= 4; M32(esp) = 0x513334u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x51332fu); RETCHK(0x513334u, 0x51332fu); LOADALL;
  /* 00513334 add esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00513337 add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0051333a cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051333c jne 0x513320 */ if (!ZF_) goto L_00513320;
L_0051333e:;
  /* 0051333e mov eax, edi */ { eax = (u32)(edi); }
  /* 00513340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00513341 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00513342 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00513350(CPU *c) {
  NATIVE_HOOK(0x513350u) REGS; LOADALL;
L_00513350:;
  /* 00513350 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00513351 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00513353 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00513355 push 0x61c831 */ { u32 v_ = 0x61c831u; esp -= 4; M32(esp) = v_; }
  /* 0051335a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00513360 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513361 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00513368 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051336b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051336c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051336d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00513370 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00513371 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00513373 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00513376 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00513378 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0051337b mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0051337e mov edi, edi */ { edi = (u32)(edi); }
L_00513380:;
  /* 00513380 cmp dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513383 jbe 0x513402 */ if ((CF_|ZF_)) goto L_00513402;
  /* 00513385 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 00513388 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051338a mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0051338e je 0x5133b0 */ if (ZF_) goto L_005133b0;
  /* 00513390 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00513392 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00513394 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00513397 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 00513399 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051339a lea edx, [edi + 4] */ edx = (u32)((u32)(edi + 0x4u));
  /* 0051339d mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 005133a4 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 005133a7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005133a8 mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005133ab call 0x404140 */ esp -= 4; M32(esp) = 0x5133b0u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5133abu); RETCHK(0x5133b0u, 0x5133abu); LOADALL;
L_005133b0:;
  /* 005133b0 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005133b3 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005133b4 add esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005133b7 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005133ba mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005133bd mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 005133c0 jmp 0x513380 */ goto L_00513380;
L_00513402:;
  /* 00513402 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00513405 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00513406 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00513407 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051340e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051340f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00513411 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00513412 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005133c2(CPU *c) {
  NATIVE_HOOK(0x5133c2u) REGS; LOADALL;
L_005133c2:;
  /* 005133c2 mov edi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edi = (u32)(M32(m_)); }
  /* 005133c5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005133c8 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005133ca cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005133cc je 0x5133fb */ if (ZF_) goto L_005133fb;
  /* 005133ce lea esi, [edi + 0x1c] */ esi = (u32)((u32)(edi + 0x1cu));
L_005133d1:;
  /* 005133d1 cmp dword ptr [esi], 0x10 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005133d4 jb 0x5133e2 */ if (CF_) goto L_005133e2;
  /* 005133d6 mov eax, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 005133d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005133da call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5133dfu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5133dau); RETCHK(0x5133dfu, 0x5133dau); LOADALL;
  /* 005133df add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005133e2:;
  /* 005133e2 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005133e5 mov dword ptr [esi], 0xf */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xfu); }
  /* 005133eb mov dword ptr [esi - 4], ebx */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005133ee mov byte ptr [esi - 0x14], bl */ { const u32 m_ = (u32)(esi + 0xffffffecu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005133f1 add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005133f4 add esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005133f7 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005133f9 jne 0x5133d1 */ if (!ZF_) goto L_005133d1;
L_005133fb:;
  /* 005133fb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005133fc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005133fd call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 00513402 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00513405 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00513406 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00513407 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051340e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051340f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00513411 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00513412 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00513420(CPU *c) {
  NATIVE_HOOK(0x513420u) REGS; LOADALL;
L_00513420:;
  /* 00513420 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00513421 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00513423 cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513425 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00513426 mov edi, eax */ { edi = (u32)(eax); }
  /* 00513428 je 0x51344f */ if (ZF_) goto L_0051344f;
  /* 0051342a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00513430:;
  /* 00513430 mov eax, dword ptr [esi - 0x20] */ { const u32 m_ = (u32)(esi + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 00513433 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00513435 sub esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00513438 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051343a lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0051343d sub edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00513440 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00513441 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 00513444 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 00513446 call 0x404140 */ esp -= 4; M32(esp) = 0x51344bu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x513446u); RETCHK(0x51344bu, 0x513446u); LOADALL;
  /* 0051344b cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051344d jne 0x513430 */ if (!ZF_) goto L_00513430;
L_0051344f:;
  /* 0051344f mov eax, edi */ { eax = (u32)(edi); }
  /* 00513451 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00513452 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00513453 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00513460(CPU *c) {
  NATIVE_HOOK(0x513460u) REGS; LOADALL;
L_00513460:;
  /* 00513460 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00513461 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00513463 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00513469 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051346b push 0x61dd58 */ { u32 v_ = 0x61dd58u; esp -= 4; M32(esp) = v_; }
  /* 00513470 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513471 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00513478 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00513479 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0051347c call 0x536340 */ esp -= 4; M32(esp) = 0x513481u; SAVEALL; F_00536340(c); ABI_CHECK(0x536340u, 0x51347cu); RETCHK(0x513481u, 0x51347cu); LOADALL;
  /* 00513481 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00513483 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0051348a push 0x651c1c */ { u32 v_ = 0x651c1cu; esp -= 4; M32(esp) = v_; }
  /* 0051348f lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 00513492 mov dword ptr [edi], 0x651b38 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x651b38u); }
  /* 00513498 call 0x404420 */ esp -= 4; M32(esp) = 0x51349du; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x513498u); RETCHK(0x51349du, 0x513498u); LOADALL;
  /* 0051349d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005134a0 mov dword ptr [edi + 0x22c], 0xa */ { const u32 m_ = (u32)(edi + 0x22cu); M32(m_) = (u32)(0xau); }
  /* 005134aa mov dword ptr [edi + 0x21c], 0 */ { const u32 m_ = (u32)(edi + 0x21cu); M32(m_) = (u32)(0x0u); }
  /* 005134b4 mov eax, edi */ { eax = (u32)(edi); }
  /* 005134b6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005134bd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005134be mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005134c0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005134c1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005134d0(CPU *c) {
  NATIVE_HOOK(0x5134d0u) REGS; LOADALL;
L_005134d0:;
  /* 005134d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005134d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005134d3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005134d4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005134d6 call 0x513500 */ esp -= 4; M32(esp) = 0x5134dbu; SAVEALL; F_00513500(c); ABI_CHECK(0x513500u, 0x5134d6u); RETCHK(0x5134dbu, 0x5134d6u); LOADALL;
  /* 005134db test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005134df je 0x5134ea */ if (ZF_) goto L_005134ea;
  /* 005134e1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005134e2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5134e7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5134e2u); RETCHK(0x5134e7u, 0x5134e2u); LOADALL;
  /* 005134e7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005134ea:;
  /* 005134ea mov eax, esi */ { eax = (u32)(esi); }
  /* 005134ec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005134ed pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005134ee ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00513500(CPU *c) {
  NATIVE_HOOK(0x513500u) REGS; LOADALL;
L_00513500:;
  /* 00513500 mov dword ptr [ecx], 0x651b38 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x651b38u); }
  /* 00513506 jmp 0x5363c0 */ SAVEALL; F_005363c0(c); return;
}

void F_00513510(CPU *c) {
  NATIVE_HOOK(0x513510u) REGS; LOADALL;
L_00513510:;
  /* 00513510 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00513511 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00513513 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00513516 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00513517 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00513519 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0051351b call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51351eu; SAVEALL; call_ind(c, t_); RETCHK(0x51351eu, 0x51351bu); LOADALL; }
  /* 0051351e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00513520 je 0x513649 */ if (ZF_) goto L_00513649;
  /* 00513526 mov eax, dword ptr [edi + 0x218] */ { const u32 m_ = (u32)(edi + 0x218u); eax = (u32)(M32(m_)); }
  /* 0051352c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051352e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051352f mov ebx, dword ptr [edi + 0x21c] */ { const u32 m_ = (u32)(edi + 0x21cu); ebx = (u32)(M32(m_)); }
  /* 00513535 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00513536 je 0x51353f */ if (ZF_) goto L_0051353f;
  /* 00513538 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0051353a mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051353d jmp 0x513541 */ goto L_00513541;
L_0051353f:;
  /* 0051353f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00513541:;
  /* 00513541 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00513542 idiv dword ptr [edi + 0x22c] */ { const u32 m_ = (u32)(edi + 0x22cu); u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, M32(m_), &q_, &r_, 0x513542u); eax = q_; edx = r_; }
  /* 00513548 lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 0051354b mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0051354e lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00513551 call 0x52cea0 */ esp -= 4; M32(esp) = 0x513556u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x513551u); RETCHK(0x513556u, 0x513551u); LOADALL;
  /* 00513556 mov edx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); edx = (u32)(M32(m_)); }
  /* 00513559 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051355a lea esi, [ebp - 0x28] */ esi = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0051355d call 0x52cf90 */ esp -= 4; M32(esp) = 0x513562u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x51355du); RETCHK(0x513562u, 0x51355du); LOADALL;
  /* 00513562 mov eax, dword ptr [edi + 0x218] */ { const u32 m_ = (u32)(edi + 0x218u); eax = (u32)(M32(m_)); }
  /* 00513568 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051356b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051356d je 0x513573 */ if (ZF_) goto L_00513573;
  /* 0051356f mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00513571 jmp 0x513575 */ goto L_00513575;
L_00513573:;
  /* 00513573 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_00513575:;
  /* 00513575 lea eax, [edi + 0x180] */ eax = (u32)((u32)(edi + 0x180u));
  /* 0051357b call 0x526830 */ esp -= 4; M32(esp) = 0x513580u; SAVEALL; F_00526830(c); ABI_CHECK(0x526830u, 0x51357bu); RETCHK(0x513580u, 0x51357bu); LOADALL;
  /* 00513580 mov ecx, dword ptr [edi + 0x21c] */ { const u32 m_ = (u32)(edi + 0x21cu); ecx = (u32)(M32(m_)); }
  /* 00513586 call 0x536700 */ esp -= 4; M32(esp) = 0x51358bu; SAVEALL; F_00536700(c); ABI_CHECK(0x536700u, 0x513586u); RETCHK(0x51358bu, 0x513586u); LOADALL;
  /* 0051358b fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0051358e mov dword ptr [edi + 0x224], eax */ { const u32 m_ = (u32)(edi + 0x224u); M32(m_) = (u32)(eax); }
  /* 00513594 fst dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); }
  /* 00513597 fadd dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051359a call 0x61b154 */ esp -= 4; M32(esp) = 0x51359fu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x51359au); RETCHK(0x51359fu, 0x51359au); LOADALL;
  /* 0051359f fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 005135a2 fsub dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005135a5 mov ecx, dword ptr [edi + 0x22c] */ { const u32 m_ = (u32)(edi + 0x22cu); ecx = (u32)(M32(m_)); }
  /* 005135ab mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 005135ae mov dword ptr [edi + 0x228], eax */ { const u32 m_ = (u32)(edi + 0x228u); M32(m_) = (u32)(eax); }
  /* 005135b4 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
L_005135b7:;
  /* 005135b7 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005135b9 cdq */ edx = (u32)((s32)eax >> 31);
  /* 005135ba idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x5135bau); eax = q_; edx = r_; }
  /* 005135bc mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 005135bf fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 005135c2 fmul dword ptr [0x656ee0] */ { const u32 m_ = (u32)(0x656ee0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005135c8 fst dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); }
  /* 005135cb fadd dword ptr [0x656ee0] */ { const u32 m_ = (u32)(0x656ee0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005135d1 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005135d4 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 005135d7 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005135dd fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005135df test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005135e2 jne 0x5135ec */ if (!ZF_) goto L_005135ec;
  /* 005135e4 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 005135e7 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005135ea jmp 0x5135f5 */ goto L_005135f5;
L_005135ec:;
  /* 005135ec fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 005135ef fsub dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005135f2 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
L_005135f5:;
  /* 005135f5 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 005135f8 mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 005135fb mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 005135fe push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00513603 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00513604 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00513607 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00513609 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051360a mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 0051360d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051360e mov eax, dword ptr [edi + 0x228] */ { const u32 m_ = (u32)(edi + 0x228u); eax = (u32)(M32(m_)); }
  /* 00513614 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00513616 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00513617 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0051361a fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 0051361d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051361e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051361f lea eax, [edi + 0x180] */ eax = (u32)((u32)(edi + 0x180u));
  /* 00513625 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513628 call 0x526bd0 */ esp -= 4; M32(esp) = 0x51362du; SAVEALL; F_00526bd0(c); ABI_CHECK(0x526bd0u, 0x513628u); RETCHK(0x51362du, 0x513628u); LOADALL;
  /* 0051362d mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00513630 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00513632 add esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00513634 mov ecx, dword ptr [edi + 0x22c] */ { const u32 m_ = (u32)(edi + 0x22cu); ecx = (u32)(M32(m_)); }
  /* 0051363a cdq */ edx = (u32)((s32)eax >> 31);
  /* 0051363b idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x51363bu); eax = q_; edx = r_; }
  /* 0051363d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0051363f test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00513641 jg 0x5135b7 */ if (!(ZF_|LT_)) goto L_005135b7;
  /* 00513647 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00513648 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00513649:;
  /* 00513649 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051364a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051364c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051364d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00513650(CPU *c) {
  NATIVE_HOOK(0x513650u) REGS; LOADALL;
L_00513650:;
  /* 00513650 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00513651 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00513653 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00513655 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0051365a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00513660 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513661 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00513668 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00513669 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051366a push 0x5136d0 */ { u32 v_ = 0x5136d0u; esp -= 4; M32(esp) = v_; }
  /* 0051366f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00513672 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00513674 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00513676 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00513679 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0051367c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051367e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051367f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00513682 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00513689 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0051368c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051368d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00513690 call 0x404140 */ esp -= 4; M32(esp) = 0x513695u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x513690u); RETCHK(0x513695u, 0x513690u); LOADALL;
  /* 00513695 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00513698 call 0x405c00 */ esp -= 4; M32(esp) = 0x51369du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x513698u); RETCHK(0x51369du, 0x513698u); LOADALL;
  /* 0051369d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0051369f call 0x405c80 */ esp -= 4; M32(esp) = 0x5136a4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x51369fu); RETCHK(0x5136a4u, 0x51369fu); LOADALL;
  /* 005136a4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005136a8 jb 0x5136b6 */ if (CF_) goto L_005136b6;
  /* 005136aa mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005136ad push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005136ae call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5136b3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5136aeu); RETCHK(0x5136b3u, 0x5136aeu); LOADALL;
  /* 005136b3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005136b6:;
  /* 005136b6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005136b9 mov eax, esi */ { eax = (u32)(esi); }
  /* 005136bb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005136c2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005136c3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005136c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005136c6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_005136d0(CPU *c) {
  NATIVE_HOOK(0x5136d0u) REGS; LOADALL;
L_005136d0:;
  /* 005136d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005136d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005136d3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005136d5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 005136da mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005136e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005136e1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005136e8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005136e9 push 0x230 */ { u32 v_ = 0x230u; esp -= 4; M32(esp) = v_; }
  /* 005136ee call 0x5fe934 */ esp -= 4; M32(esp) = 0x5136f3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5136eeu); RETCHK(0x5136f3u, 0x5136eeu); LOADALL;
  /* 005136f3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005136f6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005136f9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005136fb mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00513702 je 0x51371a */ if (ZF_) goto L_0051371a;
  /* 00513704 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00513706 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513707 call 0x513460 */ esp -= 4; M32(esp) = 0x51370cu; SAVEALL; F_00513460(c); ABI_CHECK(0x513460u, 0x513707u); RETCHK(0x51370cu, 0x513707u); LOADALL;
  /* 0051370c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051370f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00513716 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00513718 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00513719 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051371a:;
  /* 0051371a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051371d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051371f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00513726 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00513728 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00513729 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00513730(CPU *c) {
  NATIVE_HOOK(0x513730u) REGS; LOADALL;
L_00513730:;
  /* 00513730 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513731 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00513732 call 0x50d810 */ esp -= 4; M32(esp) = 0x513737u; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x513732u); RETCHK(0x513737u, 0x513732u); LOADALL;
  /* 00513737 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00513739 mov ecx, 0x3f800000 */ { ecx = (u32)(0x3f800000u); }
  /* 0051373e mov dword ptr [esi + 0x200], ecx */ { const u32 m_ = (u32)(esi + 0x200u); M32(m_) = (u32)(ecx); }
  /* 00513744 mov dword ptr [esi + 0x20c], ecx */ { const u32 m_ = (u32)(esi + 0x20cu); M32(m_) = (u32)(ecx); }
  /* 0051374a mov dword ptr [esi + 0x21c], ecx */ { const u32 m_ = (u32)(esi + 0x21cu); M32(m_) = (u32)(ecx); }
  /* 00513750 mov dword ptr [esi + 0x220], ecx */ { const u32 m_ = (u32)(esi + 0x220u); M32(m_) = (u32)(ecx); }
  /* 00513756 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0051375b mov dword ptr [esi + 0x1f8], eax */ { const u32 m_ = (u32)(esi + 0x1f8u); M32(m_) = (u32)(eax); }
  /* 00513761 mov dword ptr [esi + 0x1ec], eax */ { const u32 m_ = (u32)(esi + 0x1ecu); M32(m_) = (u32)(eax); }
  /* 00513767 mov dword ptr [esi + 0x1f0], eax */ { const u32 m_ = (u32)(esi + 0x1f0u); M32(m_) = (u32)(eax); }
  /* 0051376d mov dword ptr [esi + 0x1f4], eax */ { const u32 m_ = (u32)(esi + 0x1f4u); M32(m_) = (u32)(eax); }
  /* 00513773 mov dword ptr [esi + 0x208], eax */ { const u32 m_ = (u32)(esi + 0x208u); M32(m_) = (u32)(eax); }
  /* 00513779 mov dword ptr [esi + 0x1fc], eax */ { const u32 m_ = (u32)(esi + 0x1fcu); M32(m_) = (u32)(eax); }
  /* 0051377f mov dword ptr [esi + 0x204], eax */ { const u32 m_ = (u32)(esi + 0x204u); M32(m_) = (u32)(eax); }
  /* 00513785 mov dword ptr [esi + 0x218], eax */ { const u32 m_ = (u32)(esi + 0x218u); M32(m_) = (u32)(eax); }
  /* 0051378b mov dword ptr [esi + 0x210], eax */ { const u32 m_ = (u32)(esi + 0x210u); M32(m_) = (u32)(eax); }
  /* 00513791 mov dword ptr [esi + 0x214], eax */ { const u32 m_ = (u32)(esi + 0x214u); M32(m_) = (u32)(eax); }
  /* 00513797 mov dword ptr [esi + 0x228], eax */ { const u32 m_ = (u32)(esi + 0x228u); M32(m_) = (u32)(eax); }
  /* 0051379d mov dword ptr [esi + 0x224], eax */ { const u32 m_ = (u32)(esi + 0x224u); M32(m_) = (u32)(eax); }
  /* 005137a3 mov dword ptr [esi + 0x238], eax */ { const u32 m_ = (u32)(esi + 0x238u); M32(m_) = (u32)(eax); }
  /* 005137a9 mov dword ptr [esi + 0x234], eax */ { const u32 m_ = (u32)(esi + 0x234u); M32(m_) = (u32)(eax); }
  /* 005137af mov dword ptr [esi + 0x244], eax */ { const u32 m_ = (u32)(esi + 0x244u); M32(m_) = (u32)(eax); }
  /* 005137b5 mov dword ptr [esi + 0x248], eax */ { const u32 m_ = (u32)(esi + 0x248u); M32(m_) = (u32)(eax); }
  /* 005137bb mov dword ptr [esi + 0x24c], eax */ { const u32 m_ = (u32)(esi + 0x24cu); M32(m_) = (u32)(eax); }
  /* 005137c1 mov dword ptr [esi + 0x254], eax */ { const u32 m_ = (u32)(esi + 0x254u); M32(m_) = (u32)(eax); }
  /* 005137c7 mov dword ptr [esi + 0x258], eax */ { const u32 m_ = (u32)(esi + 0x258u); M32(m_) = (u32)(eax); }
  /* 005137cd mov dword ptr [esi + 0x25c], eax */ { const u32 m_ = (u32)(esi + 0x25cu); M32(m_) = (u32)(eax); }
  /* 005137d3 mov dword ptr [esi + 0x260], eax */ { const u32 m_ = (u32)(esi + 0x260u); M32(m_) = (u32)(eax); }
  /* 005137d9 mov dword ptr [esi + 0x264], eax */ { const u32 m_ = (u32)(esi + 0x264u); M32(m_) = (u32)(eax); }
  /* 005137df mov dword ptr [esi + 0x268], eax */ { const u32 m_ = (u32)(esi + 0x268u); M32(m_) = (u32)(eax); }
  /* 005137e5 mov dword ptr [esi + 0x26c], eax */ { const u32 m_ = (u32)(esi + 0x26cu); M32(m_) = (u32)(eax); }
  /* 005137eb mov dword ptr [esi + 0x270], eax */ { const u32 m_ = (u32)(esi + 0x270u); M32(m_) = (u32)(eax); }
  /* 005137f1 mov dword ptr [esi + 0x274], eax */ { const u32 m_ = (u32)(esi + 0x274u); M32(m_) = (u32)(eax); }
  /* 005137f7 mov dword ptr [esi], 0x651c28 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x651c28u); }
  /* 005137fd mov dword ptr [esi + 0x230], ecx */ { const u32 m_ = (u32)(esi + 0x230u); M32(m_) = (u32)(ecx); }
  /* 00513803 mov byte ptr [esi + 0x3c], cl */ { const u32 m_ = (u32)(esi + 0x3cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00513806 mov byte ptr [esi + 0x3d], cl */ { const u32 m_ = (u32)(esi + 0x3du); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00513809 mov dword ptr [esi + 0x23c], 0x43400000 */ { const u32 m_ = (u32)(esi + 0x23cu); M32(m_) = (u32)(0x43400000u); }
  /* 00513813 mov dword ptr [esi + 0x240], 0x42800000 */ { const u32 m_ = (u32)(esi + 0x240u); M32(m_) = (u32)(0x42800000u); }
  /* 0051381d mov eax, esi */ { eax = (u32)(esi); }
  /* 0051381f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00513820(CPU *c) {
  NATIVE_HOOK(0x513820u) REGS; LOADALL;
L_00513820:;
  /* 00513820 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00513821 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00513823 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00513824 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00513826 call 0x513850 */ esp -= 4; M32(esp) = 0x51382bu; SAVEALL; F_00513850(c); ABI_CHECK(0x513850u, 0x513826u); RETCHK(0x51382bu, 0x513826u); LOADALL;
  /* 0051382b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051382f je 0x51383a */ if (ZF_) goto L_0051383a;
  /* 00513831 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00513832 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x513837u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x513832u); RETCHK(0x513837u, 0x513832u); LOADALL;
  /* 00513837 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051383a:;
  /* 0051383a mov eax, esi */ { eax = (u32)(esi); }
  /* 0051383c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051383d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051383e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00513850(CPU *c) {
  NATIVE_HOOK(0x513850u) REGS; LOADALL;
L_00513850:;
  /* 00513850 mov dword ptr [ecx], 0x651c28 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x651c28u); }
  /* 00513856 jmp 0x50d8e0 */ SAVEALL; F_0050d8e0(c); return;
}

void F_00513860(CPU *c) {
  NATIVE_HOOK(0x513860u) REGS; LOADALL;
L_00513860:;
  /* 00513860 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00513861 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00513863 sub esp, 0x6c */ { u32 a_ = esp, b_ = 0x6cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00513866 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00513867 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00513868 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051386a test byte ptr [esi + 0x1bc], 1 */ { const u32 m_ = (u32)(esi + 0x1bcu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00513871 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00513872 mov dword ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x0u); }
  /* 00513879 mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 00513880 mov dword ptr [ebp - 0x24], 0xbf800000 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0xbf800000u); }
  /* 00513887 je 0x513947 */ if (ZF_) goto L_00513947;
  /* 0051388d fld dword ptr [esi + 0x20c] */ { const u32 m_ = (u32)(esi + 0x20cu); FPUSH((double)MF32(m_)); }
  /* 00513893 lea edi, [esi + 0x1ec] */ edi = (u32)((u32)(esi + 0x1ecu));
  /* 00513899 fadd dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051389b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051389d fld dword ptr [esi + 0x210] */ { const u32 m_ = (u32)(esi + 0x210u); FPUSH((double)MF32(m_)); }
  /* 005138a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005138a4 fadd dword ptr [esi + 0x1f0] */ { const u32 m_ = (u32)(esi + 0x1f0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005138aa lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 005138ad fld dword ptr [esi + 0x214] */ { const u32 m_ = (u32)(esi + 0x214u); FPUSH((double)MF32(m_)); }
  /* 005138b3 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 005138b6 fadd dword ptr [esi + 0x1f4] */ { const u32 m_ = (u32)(esi + 0x1f4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005138bc fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005138bf fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005138c1 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005138c7 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005138ca fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005138d0 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005138d3 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 005138d6 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005138dc fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005138df fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005138e2 fmul dword ptr [esi + 0x1c4] */ { const u32 m_ = (u32)(esi + 0x1c4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005138e8 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005138eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005138ec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005138ed call 0x5aefe0 */ esp -= 4; M32(esp) = 0x5138f2u; SAVEALL; F_005aefe0(c); ABI_CHECK(0x5aefe0u, 0x5138edu); RETCHK(0x5138f2u, 0x5138edu); LOADALL;
  /* 005138f2 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005138f5 mov ebx, 4 */ { ebx = (u32)(0x4u); }
  /* 005138fa lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00513900:;
  /* 00513900 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 00513902 lea edx, [ebp - 0x6c] */ edx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00513905 fsub dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00513908 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00513909 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051390a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051390b fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051390d fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00513910 fsub dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00513913 fstp dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513916 fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00513919 fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051391c fstp dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051391f call 0x5aaba0 */ esp -= 4; M32(esp) = 0x513924u; SAVEALL; F_005aaba0(c); ABI_CHECK(0x5aaba0u, 0x51391fu); RETCHK(0x513924u, 0x51391fu); LOADALL;
  /* 00513924 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 00513927 fadd dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00513929 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051392c add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0051392f dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00513930 fstp dword ptr [edi - 0x10] */ { const u32 m_ = (u32)(edi + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513933 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 00513936 fadd dword ptr [edi - 0xc] */ { const u32 m_ = (u32)(edi + 0xfffffff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00513939 fstp dword ptr [edi - 0xc] */ { const u32 m_ = (u32)(edi + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051393c fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 0051393f fadd dword ptr [edi - 8] */ { const u32 m_ = (u32)(edi + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00513942 fstp dword ptr [edi - 8] */ { const u32 m_ = (u32)(edi + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513945 jne 0x513900 */ if (!ZF_) goto L_00513900;
L_00513947:;
  /* 00513947 test byte ptr [esi + 0x1bc], 2 */ { const u32 m_ = (u32)(esi + 0x1bcu); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051394e je 0x513a1c */ if (ZF_) goto L_00513a1c;
  /* 00513954 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00513957 fmul dword ptr [esi + 0x1c8] */ { const u32 m_ = (u32)(esi + 0x1c8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0051395d fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00513960 fmul dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00513966 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00513969 fmul dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0051396f fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513972 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00513974 fadd dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051397a fstp dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513980 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00513982 fadd dword ptr [esi + 0x1f0] */ { const u32 m_ = (u32)(esi + 0x1f0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00513988 fstp dword ptr [esi + 0x1f0] */ { const u32 m_ = (u32)(esi + 0x1f0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051398e fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00513991 fadd dword ptr [esi + 0x1f4] */ { const u32 m_ = (u32)(esi + 0x1f4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00513997 fstp dword ptr [esi + 0x1f4] */ { const u32 m_ = (u32)(esi + 0x1f4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051399d fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0051399f fadd dword ptr [esi + 0x1fc] */ { const u32 m_ = (u32)(esi + 0x1fcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005139a5 fstp dword ptr [esi + 0x1fc] */ { const u32 m_ = (u32)(esi + 0x1fcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005139ab fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 005139ad fadd dword ptr [esi + 0x200] */ { const u32 m_ = (u32)(esi + 0x200u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005139b3 fstp dword ptr [esi + 0x200] */ { const u32 m_ = (u32)(esi + 0x200u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005139b9 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 005139bc fadd dword ptr [esi + 0x204] */ { const u32 m_ = (u32)(esi + 0x204u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005139c2 fstp dword ptr [esi + 0x204] */ { const u32 m_ = (u32)(esi + 0x204u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005139c8 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 005139ca fadd dword ptr [esi + 0x20c] */ { const u32 m_ = (u32)(esi + 0x20cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005139d0 fstp dword ptr [esi + 0x20c] */ { const u32 m_ = (u32)(esi + 0x20cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005139d6 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 005139d8 fadd dword ptr [esi + 0x210] */ { const u32 m_ = (u32)(esi + 0x210u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005139de fstp dword ptr [esi + 0x210] */ { const u32 m_ = (u32)(esi + 0x210u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005139e4 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 005139e7 fadd dword ptr [esi + 0x214] */ { const u32 m_ = (u32)(esi + 0x214u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005139ed fstp dword ptr [esi + 0x214] */ { const u32 m_ = (u32)(esi + 0x214u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005139f3 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005139f5 fadd dword ptr [esi + 0x21c] */ { const u32 m_ = (u32)(esi + 0x21cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005139fb fstp dword ptr [esi + 0x21c] */ { const u32 m_ = (u32)(esi + 0x21cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513a01 fadd dword ptr [esi + 0x220] */ { const u32 m_ = (u32)(esi + 0x220u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00513a07 fstp dword ptr [esi + 0x220] */ { const u32 m_ = (u32)(esi + 0x220u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513a0d fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00513a10 fadd dword ptr [esi + 0x224] */ { const u32 m_ = (u32)(esi + 0x224u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00513a16 fstp dword ptr [esi + 0x224] */ { const u32 m_ = (u32)(esi + 0x224u); MF32(m_) = (float)ST(0); FPOP(); }
L_00513a1c:;
  /* 00513a1c test byte ptr [esi + 0x1bc], 4 */ { const u32 m_ = (u32)(esi + 0x1bcu); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00513a23 je 0x513aca */ if (ZF_) goto L_00513aca;
  /* 00513a29 fild dword ptr [esi + 0x230] */ { const u32 m_ = (u32)(esi + 0x230u); FPUSH((double)(s32)M32(m_)); }
  /* 00513a2f lea edi, [esi + 0x1fb] */ edi = (u32)((u32)(esi + 0x1fbu));
  /* 00513a35 mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 00513a3c mov bl, 0xff */ { ebx = (ebx & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 00513a3e fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00513a41 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00513a43 fadd dword ptr [esi + 0x234] */ { const u32 m_ = (u32)(esi + 0x234u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00513a49 fstp dword ptr [esi + 0x234] */ { const u32 m_ = (u32)(esi + 0x234u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513a4f fadd dword ptr [esi + 0x238] */ { const u32 m_ = (u32)(esi + 0x238u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00513a55 fstp dword ptr [esi + 0x238] */ { const u32 m_ = (u32)(esi + 0x238u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513a5b jmp 0x513a60 */ goto L_00513a60;
L_00513a60:;
  /* 00513a60 fld dword ptr [esi + 0x234] */ { const u32 m_ = (u32)(esi + 0x234u); FPUSH((double)MF32(m_)); }
  /* 00513a66 call 0x61b154 */ esp -= 4; M32(esp) = 0x513a6bu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x513a66u); RETCHK(0x513a6bu, 0x513a66u); LOADALL;
  /* 00513a6b mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00513a6d mov ecx, dword ptr [esi + 0x1e4] */ { const u32 m_ = (u32)(esi + 0x1e4u); ecx = (u32)(M32(m_)); }
  /* 00513a73 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00513a75 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00513a77 je 0x513ab1 */ if (ZF_) goto L_00513ab1;
  /* 00513a79 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00513a7a je 0x513a8b */ if (ZF_) goto L_00513a8b;
  /* 00513a7c dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00513a7d jne 0x513abe */ if (!ZF_) goto L_00513abe;
  /* 00513a7f cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00513a81 jb 0x513abe */ if (CF_) goto L_00513abe;
  /* 00513a83 mov dword ptr [esi + 0x230], edx */ { const u32 m_ = (u32)(esi + 0x230u); M32(m_) = (u32)(edx); }
  /* 00513a89 jmp 0x513abe */ goto L_00513abe;
L_00513a8b:;
  /* 00513a8b mov byte ptr [edi - 3], bl */ { const u32 m_ = (u32)(edi + 0xfffffffdu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00513a8e mov byte ptr [edi - 2], bl */ { const u32 m_ = (u32)(edi + 0xfffffffeu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00513a91 mov byte ptr [edi - 1], bl */ { const u32 m_ = (u32)(edi + 0xffffffffu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00513a94 fld dword ptr [esi + 0x238] */ { const u32 m_ = (u32)(esi + 0x238u); FPUSH((double)MF32(m_)); }
  /* 00513a9a fsin */ ST(0) = m_sin(ST(0)); c->fsw &= ~0x400u;
  /* 00513a9c fmul dword ptr [esi + 0x240] */ { const u32 m_ = (u32)(esi + 0x240u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00513aa2 fadd dword ptr [esi + 0x23c] */ { const u32 m_ = (u32)(esi + 0x23cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00513aa8 call 0x61b154 */ esp -= 4; M32(esp) = 0x513aadu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x513aa8u); RETCHK(0x513aadu, 0x513aa8u); LOADALL;
  /* 00513aad mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00513aaf jmp 0x513abe */ goto L_00513abe;
L_00513ab1:;
  /* 00513ab1 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00513ab3 jb 0x513abe */ if (CF_) goto L_00513abe;
  /* 00513ab5 mov byte ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)(0x0u); }
  /* 00513ab8 mov dword ptr [esi + 0x234], edx */ { const u32 m_ = (u32)(esi + 0x234u); M32(m_) = (u32)(edx); }
L_00513abe:;
  /* 00513abe mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00513ac1 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00513ac4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00513ac5 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00513ac8 jne 0x513a60 */ if (!ZF_) goto L_00513a60;
L_00513aca:;
  /* 00513aca cmp dword ptr [esi + 0x1c0], 0x16 */ { const u32 m_ = (u32)(esi + 0x1c0u); u32 a_ = M32(m_), b_ = 0x16u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513ad1 jne 0x513c29 */ if (!ZF_) goto L_00513c29;
  /* 00513ad7 fild dword ptr [esi + 0x26c] */ { const u32 m_ = (u32)(esi + 0x26cu); FPUSH((double)(s32)M32(m_)); }
  /* 00513add fdivr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 00513ae3 fcomp dword ptr [esi + 0x274] */ { const u32 m_ = (u32)(esi + 0x274u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00513ae9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00513aeb test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00513aee jp 0x513c1a */ if (PF_) goto L_00513c1a;
  /* 00513af4 mov eax, dword ptr [esi + 0x264] */ { const u32 m_ = (u32)(esi + 0x264u); eax = (u32)(M32(m_)); }
  /* 00513afa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00513afc mov dword ptr [esi + 0x274], 0 */ { const u32 m_ = (u32)(esi + 0x274u); M32(m_) = (u32)(0x0u); }
  /* 00513b06 jne 0x513b12 */ if (!ZF_) goto L_00513b12;
  /* 00513b08 mov dword ptr [esi + 0x264], 1 */ { const u32 m_ = (u32)(esi + 0x264u); M32(m_) = (u32)(0x1u); }
L_00513b12:;
  /* 00513b12 mov eax, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); eax = (u32)(M32(m_)); }
  /* 00513b18 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00513b1a jne 0x513b26 */ if (!ZF_) goto L_00513b26;
  /* 00513b1c mov dword ptr [esi + 0x268], 1 */ { const u32 m_ = (u32)(esi + 0x268u); M32(m_) = (u32)(0x1u); }
L_00513b26:;
  /* 00513b26 mov edi, dword ptr [esi + 0x270] */ { const u32 m_ = (u32)(esi + 0x270u); edi = (u32)(M32(m_)); }
  /* 00513b2c fild dword ptr [esi + 0x25c] */ { const u32 m_ = (u32)(esi + 0x25cu); FPUSH((double)(s32)M32(m_)); }
  /* 00513b32 mov ebx, dword ptr [esi + 0x264] */ { const u32 m_ = (u32)(esi + 0x264u); ebx = (u32)(M32(m_)); }
  /* 00513b38 mov eax, edi */ { eax = (u32)(edi); }
  /* 00513b3a cdq */ edx = (u32)((s32)eax >> 31);
  /* 00513b3b fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513b3e idiv ebx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ebx, &q_, &r_, 0x513b3eu); eax = q_; edx = r_; }
  /* 00513b40 lea ecx, [edx + 1] */ ecx = (u32)((u32)(edx + 0x1u));
  /* 00513b43 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 00513b46 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00513b47 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 00513b4a mov eax, dword ptr [esi + 0x254] */ { const u32 m_ = (u32)(esi + 0x254u); eax = (u32)(M32(m_)); }
  /* 00513b50 imul ecx, eax */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00513b53 imul eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00513b57 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00513b5a mov ecx, dword ptr [esi + 0x258] */ { const u32 m_ = (u32)(esi + 0x258u); ecx = (u32)(M32(m_)); }
  /* 00513b60 mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 00513b63 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00513b66 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00513b67 imul edx, ecx */ { s64 p_ = (s64)(s32)edx * (s64)(s32)ecx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00513b6a imul ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00513b6e fdiv dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00513b71 mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 00513b74 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 00513b77 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00513b7a mov edx, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); edx = (u32)(M32(m_)); }
  /* 00513b80 fst dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); MF32(m_) = (float)ST(0); }
  /* 00513b86 imul edx, ebx */ { s64 p_ = (s64)(s32)edx * (s64)(s32)ebx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00513b89 fild dword ptr [esi + 0x260] */ { const u32 m_ = (u32)(esi + 0x260u); FPUSH((double)(s32)M32(m_)); }
  /* 00513b8f fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513b92 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 00513b95 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00513b96 cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513b98 fdiv dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00513b9b fst dword ptr [esi + 0x1f0] */ { const u32 m_ = (u32)(esi + 0x1f0u); MF32(m_) = (float)ST(0); }
  /* 00513ba1 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00513ba3 fstp dword ptr [esi + 0x1fc] */ { const u32 m_ = (u32)(esi + 0x1fcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513ba9 fild dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)(s32)M32(m_)); }
  /* 00513bac fdiv dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00513baf fst dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); }
  /* 00513bb2 fstp dword ptr [esi + 0x200] */ { const u32 m_ = (u32)(esi + 0x200u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513bb8 fild dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)(s32)M32(m_)); }
  /* 00513bbb mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00513bbe mov dword ptr [esi + 0x220], ecx */ { const u32 m_ = (u32)(esi + 0x220u); M32(m_) = (u32)(ecx); }
  /* 00513bc4 fdiv dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00513bc7 fst dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); }
  /* 00513bca fstp dword ptr [esi + 0x20c] */ { const u32 m_ = (u32)(esi + 0x20cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513bd0 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00513bd3 mov dword ptr [esi + 0x21c], eax */ { const u32 m_ = (u32)(esi + 0x21cu); M32(m_) = (u32)(eax); }
  /* 00513bd9 fstp dword ptr [esi + 0x210] */ { const u32 m_ = (u32)(esi + 0x210u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513bdf jge 0x513bfc */ if (!LT_) goto L_00513bfc;
  /* 00513be1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00513be4 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00513be5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513be6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00513be8 mov dword ptr [esi + 0x270], edi */ { const u32 m_ = (u32)(esi + 0x270u); M32(m_) = (u32)(edi); }
  /* 00513bee call 0x5145e0 */ esp -= 4; M32(esp) = 0x513bf3u; SAVEALL; F_005145e0(c); ABI_CHECK(0x5145e0u, 0x513beeu); RETCHK(0x513bf3u, 0x513beeu); LOADALL;
  /* 00513bf3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00513bf4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00513bf5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00513bf6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00513bf8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00513bf9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00513bfc:;
  /* 00513bfc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00513bff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513c00 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00513c02 mov dword ptr [esi + 0x270], 0 */ { const u32 m_ = (u32)(esi + 0x270u); M32(m_) = (u32)(0x0u); }
  /* 00513c0c call 0x5145e0 */ esp -= 4; M32(esp) = 0x513c11u; SAVEALL; F_005145e0(c); ABI_CHECK(0x5145e0u, 0x513c0cu); RETCHK(0x513c11u, 0x513c0cu); LOADALL;
  /* 00513c11 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00513c12 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00513c13 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00513c14 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00513c16 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00513c17 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00513c1a:;
  /* 00513c1a fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00513c1d fadd dword ptr [esi + 0x274] */ { const u32 m_ = (u32)(esi + 0x274u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00513c23 fstp dword ptr [esi + 0x274] */ { const u32 m_ = (u32)(esi + 0x274u); MF32(m_) = (float)ST(0); FPOP(); }
L_00513c29:;
  /* 00513c29 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00513c2c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513c2d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00513c2f call 0x5145e0 */ esp -= 4; M32(esp) = 0x513c34u; SAVEALL; F_005145e0(c); ABI_CHECK(0x5145e0u, 0x513c2fu); RETCHK(0x513c34u, 0x513c2fu); LOADALL;
  /* 00513c34 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00513c35 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00513c36 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00513c37 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00513c39 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00513c3a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00513c40(CPU *c) {
  NATIVE_HOOK(0x513c40u) REGS; LOADALL;
L_00513c40:;
  /* 00513c40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00513c41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00513c43 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00513c45 push 0x624178 */ { u32 v_ = 0x624178u; esp -= 4; M32(esp) = v_; }
  /* 00513c4a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00513c50 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513c51 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00513c58 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00513c5b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00513c5c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00513c5e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00513c61 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00513c63 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00513c64 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00513c65 je 0x513fa4 */ if (ZF_) goto L_00513fa4;
  /* 00513c6b mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00513c6d call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x513c70u; SAVEALL; call_ind(c, t_); RETCHK(0x513c70u, 0x513c6du); LOADALL; }
  /* 00513c70 mov esi, eax */ { esi = (u32)(eax); }
  /* 00513c72 push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 00513c77 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 00513c7a call 0x560fd0 */ esp -= 4; M32(esp) = 0x513c7fu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x513c7au); RETCHK(0x513c7fu, 0x513c7au); LOADALL;
  /* 00513c7f mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00513c82 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00513c85 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 00513c8a mov eax, esi */ { eax = (u32)(esi); }
  /* 00513c8c fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513c8f call 0x560fd0 */ esp -= 4; M32(esp) = 0x513c94u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x513c8fu); RETCHK(0x513c94u, 0x513c8fu); LOADALL;
  /* 00513c94 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00513c97 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00513c9a push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 00513c9f mov eax, esi */ { eax = (u32)(esi); }
  /* 00513ca1 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513ca4 call 0x560fd0 */ esp -= 4; M32(esp) = 0x513ca9u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x513ca4u); RETCHK(0x513ca9u, 0x513ca4u); LOADALL;
  /* 00513ca9 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00513cac fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00513caf push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 00513cb4 mov eax, esi */ { eax = (u32)(esi); }
  /* 00513cb6 fadd dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00513cb9 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513cbc call 0x560fd0 */ esp -= 4; M32(esp) = 0x513cc1u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x513cbcu); RETCHK(0x513cc1u, 0x513cbcu); LOADALL;
  /* 00513cc1 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00513cc4 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00513cc7 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00513cca test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00513ccc fadd dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00513ccf fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00513cd2 je 0x513ce0 */ if (ZF_) goto L_00513ce0;
  /* 00513cd4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513cd5 lea esi, [ebp - 0x28] */ esi = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00513cd8 call 0x52d060 */ esp -= 4; M32(esp) = 0x513cddu; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x513cd8u); RETCHK(0x513cddu, 0x513cd8u); LOADALL;
  /* 00513cdd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00513ce0:;
  /* 00513ce0 lea esi, [ebx + 0x1bc] */ esi = (u32)((u32)(ebx + 0x1bcu));
  /* 00513ce6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00513ce8 mov ecx, 0xc */ { ecx = (u32)(0xcu); }
  /* 00513ced mov edi, esi */ { edi = (u32)(esi); }
  /* 00513cef rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00513cf1 mov edi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edi = (u32)(M32(m_)); }
  /* 00513cf4 push 0x651d94 */ { u32 v_ = 0x651d94u; esp -= 4; M32(esp) = v_; }
  /* 00513cf9 mov eax, edi */ { eax = (u32)(edi); }
  /* 00513cfb call 0x560fd0 */ esp -= 4; M32(esp) = 0x513d00u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x513cfbu); RETCHK(0x513d00u, 0x513cfbu); LOADALL;
  /* 00513d00 mov dword ptr [ebx + 0x244], eax */ { const u32 m_ = (u32)(ebx + 0x244u); M32(m_) = (u32)(eax); }
  /* 00513d06 push 0x651d84 */ { u32 v_ = 0x651d84u; esp -= 4; M32(esp) = v_; }
  /* 00513d0b mov eax, edi */ { eax = (u32)(edi); }
  /* 00513d0d call 0x560fd0 */ esp -= 4; M32(esp) = 0x513d12u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x513d0du); RETCHK(0x513d12u, 0x513d0du); LOADALL;
  /* 00513d12 mov dword ptr [ebx + 0x248], eax */ { const u32 m_ = (u32)(ebx + 0x248u); M32(m_) = (u32)(eax); }
  /* 00513d18 push 0x651d74 */ { u32 v_ = 0x651d74u; esp -= 4; M32(esp) = v_; }
  /* 00513d1d mov eax, edi */ { eax = (u32)(edi); }
  /* 00513d1f call 0x560fd0 */ esp -= 4; M32(esp) = 0x513d24u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x513d1fu); RETCHK(0x513d24u, 0x513d1fu); LOADALL;
  /* 00513d24 mov dword ptr [ebx + 0x24c], eax */ { const u32 m_ = (u32)(ebx + 0x24cu); M32(m_) = (u32)(eax); }
  /* 00513d2a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00513d2b mov eax, 0x651d68 */ { eax = (u32)(0x651d68u); }
  /* 00513d30 call 0x560ed0 */ esp -= 4; M32(esp) = 0x513d35u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x513d30u); RETCHK(0x513d35u, 0x513d30u); LOADALL;
  /* 00513d35 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00513d37 je 0x513d4e */ if (ZF_) goto L_00513d4e;
  /* 00513d39 lea ecx, [ebx + 0x250] */ ecx = (u32)((u32)(ebx + 0x250u));
  /* 00513d3f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00513d40 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 00513d45 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513d46 call 0x5feaac */ esp -= 4; M32(esp) = 0x513d4bu; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x513d46u); RETCHK(0x513d4bu, 0x513d46u); LOADALL;
  /* 00513d4b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00513d4e:;
  /* 00513d4e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00513d4f mov eax, 0x651d5c */ { eax = (u32)(0x651d5cu); }
  /* 00513d54 call 0x560ed0 */ esp -= 4; M32(esp) = 0x513d59u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x513d54u); RETCHK(0x513d59u, 0x513d54u); LOADALL;
  /* 00513d59 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00513d5b je 0x513d72 */ if (ZF_) goto L_00513d72;
  /* 00513d5d lea edx, [ebx + 0x26c] */ edx = (u32)((u32)(ebx + 0x26cu));
  /* 00513d63 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00513d64 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 00513d69 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513d6a call 0x5feaac */ esp -= 4; M32(esp) = 0x513d6fu; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x513d6au); RETCHK(0x513d6fu, 0x513d6au); LOADALL;
  /* 00513d6f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00513d72:;
  /* 00513d72 mov eax, dword ptr [ebx + 0x248] */ { const u32 m_ = (u32)(ebx + 0x248u); eax = (u32)(M32(m_)); }
  /* 00513d78 mov ecx, dword ptr [ebx + 0x24c] */ { const u32 m_ = (u32)(ebx + 0x24cu); ecx = (u32)(M32(m_)); }
  /* 00513d7e neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00513d80 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00513d82 and eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00513d85 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00513d87 sbb ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); ecx = (u32)(r_); }
  /* 00513d89 and ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00513d8c or eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00513d8e mov ecx, dword ptr [ebx + 0x244] */ { const u32 m_ = (u32)(ebx + 0x244u); ecx = (u32)(M32(m_)); }
  /* 00513d94 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00513d96 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00513d98 setne dl */ { edx = (edx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00513d9b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00513d9c or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00513d9e mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00513da0 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00513da2 mov eax, dword ptr [ebx + 0x250] */ { const u32 m_ = (u32)(ebx + 0x250u); eax = (u32)(M32(m_)); }
  /* 00513da8 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00513daa sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00513dac and eax, 0x16 */ { u32 a_ = eax, b_ = 0x16u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00513daf mov dword ptr [ebx + 0x1c0], eax */ { const u32 m_ = (u32)(ebx + 0x1c0u); M32(m_) = (u32)(eax); }
  /* 00513db5 mov eax, 0x651d50 */ { eax = (u32)(0x651d50u); }
  /* 00513dba mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 00513dbc call 0x560ed0 */ esp -= 4; M32(esp) = 0x513dc1u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x513dbcu); RETCHK(0x513dc1u, 0x513dbcu); LOADALL;
  /* 00513dc1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00513dc3 je 0x513dda */ if (ZF_) goto L_00513dda;
  /* 00513dc5 lea ecx, [ebx + 0x1c4] */ ecx = (u32)((u32)(ebx + 0x1c4u));
  /* 00513dcb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00513dcc push 0x651d4c */ { u32 v_ = 0x651d4cu; esp -= 4; M32(esp) = v_; }
  /* 00513dd1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513dd2 call 0x5feaac */ esp -= 4; M32(esp) = 0x513dd7u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x513dd2u); RETCHK(0x513dd7u, 0x513dd2u); LOADALL;
  /* 00513dd7 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00513dda:;
  /* 00513dda push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00513ddb mov eax, 0x651d44 */ { eax = (u32)(0x651d44u); }
  /* 00513de0 call 0x560ed0 */ esp -= 4; M32(esp) = 0x513de5u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x513de0u); RETCHK(0x513de5u, 0x513de0u); LOADALL;
  /* 00513de5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00513de7 je 0x513e05 */ if (ZF_) goto L_00513e05;
  /* 00513de9 lea edx, [ebx + 0x1cc] */ edx = (u32)((u32)(ebx + 0x1ccu));
  /* 00513def push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00513df0 lea ecx, [ebx + 0x1c8] */ ecx = (u32)((u32)(ebx + 0x1c8u));
  /* 00513df6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00513df7 push 0x651d3c */ { u32 v_ = 0x651d3cu; esp -= 4; M32(esp) = v_; }
  /* 00513dfc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513dfd call 0x5feaac */ esp -= 4; M32(esp) = 0x513e02u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x513dfdu); RETCHK(0x513e02u, 0x513dfdu); LOADALL;
  /* 00513e02 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00513e05:;
  /* 00513e05 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00513e06 mov eax, 0x651d30 */ { eax = (u32)(0x651d30u); }
  /* 00513e0b call 0x560ed0 */ esp -= 4; M32(esp) = 0x513e10u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x513e0bu); RETCHK(0x513e10u, 0x513e0bu); LOADALL;
  /* 00513e10 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00513e12 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00513e15 je 0x513e6a */ if (ZF_) goto L_00513e6a;
  /* 00513e17 lea esi, [ebx + 0x1e0] */ esi = (u32)((u32)(ebx + 0x1e0u));
  /* 00513e1d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00513e1e lea ecx, [ebx + 0x1dc] */ ecx = (u32)((u32)(ebx + 0x1dcu));
  /* 00513e24 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00513e25 lea edx, [ebx + 0x1d8] */ edx = (u32)((u32)(ebx + 0x1d8u));
  /* 00513e2b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00513e2c mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00513e2f lea eax, [ebx + 0x1d4] */ eax = (u32)((u32)(ebx + 0x1d4u));
  /* 00513e35 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513e36 push 0x651d24 */ { u32 v_ = 0x651d24u; esp -= 4; M32(esp) = v_; }
  /* 00513e3b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00513e3c call 0x5feaac */ esp -= 4; M32(esp) = 0x513e41u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x513e3cu); RETCHK(0x513e41u, 0x513e3cu); LOADALL;
  /* 00513e41 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00513e43 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00513e46 mov dword ptr [ebx + 0x230], eax */ { const u32 m_ = (u32)(ebx + 0x230u); M32(m_) = (u32)(eax); }
  /* 00513e4c mov dword ptr [ebx + 0x1d4], 0xff */ { const u32 m_ = (u32)(ebx + 0x1d4u); M32(m_) = (u32)(0xffu); }
  /* 00513e56 mov dword ptr [ebx + 0x1d8], 0xff */ { const u32 m_ = (u32)(ebx + 0x1d8u); M32(m_) = (u32)(0xffu); }
  /* 00513e60 mov dword ptr [ebx + 0x1dc], 0xff */ { const u32 m_ = (u32)(ebx + 0x1dcu); M32(m_) = (u32)(0xffu); }
L_00513e6a:;
  /* 00513e6a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00513e6b mov eax, 0x651d18 */ { eax = (u32)(0x651d18u); }
  /* 00513e70 call 0x560ed0 */ esp -= 4; M32(esp) = 0x513e75u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x513e70u); RETCHK(0x513e75u, 0x513e70u); LOADALL;
  /* 00513e75 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00513e77 je 0x513e8e */ if (ZF_) goto L_00513e8e;
  /* 00513e79 lea ecx, [ebx + 0x1e4] */ ecx = (u32)((u32)(ebx + 0x1e4u));
  /* 00513e7f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00513e80 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 00513e85 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513e86 call 0x5feaac */ esp -= 4; M32(esp) = 0x513e8bu; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x513e86u); RETCHK(0x513e8bu, 0x513e86u); LOADALL;
  /* 00513e8b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00513e8e:;
  /* 00513e8e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00513e8f mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 00513e94 call 0x560ed0 */ esp -= 4; M32(esp) = 0x513e99u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x513e94u); RETCHK(0x513e99u, 0x513e94u); LOADALL;
  /* 00513e99 mov esi, eax */ { esi = (u32)(eax); }
  /* 00513e9b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00513e9d mov dword ptr [ebp - 0x2c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0xfu); }
  /* 00513ea4 mov dword ptr [ebp - 0x30], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0x0u); }
  /* 00513eab mov byte ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)(0x0u); }
  /* 00513eaf lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
L_00513eb2:;
  /* 00513eb2 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00513eb4 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00513eb5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00513eb7 jne 0x513eb2 */ if (!ZF_) goto L_00513eb2;
  /* 00513eb9 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00513ebb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00513ebc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00513ebd lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00513ec0 call 0x404420 */ esp -= 4; M32(esp) = 0x513ec5u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x513ec0u); RETCHK(0x513ec5u, 0x513ec0u); LOADALL;
  /* 00513ec5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00513ec7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00513ec8 mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 00513ecd mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00513ed4 call 0x560ed0 */ esp -= 4; M32(esp) = 0x513ed9u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x513ed4u); RETCHK(0x513ed9u, 0x513ed4u); LOADALL;
  /* 00513ed9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513eda sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00513edd lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00513ee0 mov eax, esp */ { eax = (u32)(esp); }
  /* 00513ee2 mov dword ptr [ebp + 8], esp */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esp); }
  /* 00513ee5 call 0x52cea0 */ esp -= 4; M32(esp) = 0x513eeau; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x513ee5u); RETCHK(0x513eeau, 0x513ee5u); LOADALL;
  /* 00513eea lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00513eed call 0x50da30 */ esp -= 4; M32(esp) = 0x513ef2u; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x513eedu); RETCHK(0x513ef2u, 0x513eedu); LOADALL;
  /* 00513ef2 mov byte ptr [ebp + 0xb], al */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00513ef5 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00513efc cmp dword ptr [ebp - 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513f00 jb 0x513f0e */ if (CF_) goto L_00513f0e;
  /* 00513f02 mov edx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); edx = (u32)(M32(m_)); }
  /* 00513f05 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00513f06 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x513f0bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x513f06u); RETCHK(0x513f0bu, 0x513f06u); LOADALL;
  /* 00513f0b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00513f0e:;
  /* 00513f0e mov al, byte ptr [ebp + 0xb] */ { const u32 m_ = (u32)(ebp + 0xbu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00513f11 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00513f13 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00513f15 mov dword ptr [ebp - 0x2c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0xfu); }
  /* 00513f1c mov dword ptr [ebp - 0x30], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(edi); }
  /* 00513f1f mov byte ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)(0x0u); }
  /* 00513f23 je 0x513fa4 */ if (ZF_) goto L_00513fa4;
  /* 00513f25 cmp dword ptr [ebx + 0x1c0], 0x16 */ { const u32 m_ = (u32)(ebx + 0x1c0u); u32 a_ = M32(m_), b_ = 0x16u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513f2c jne 0x514020 */ if (!ZF_) goto L_00514020;
  /* 00513f32 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 00513f35 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 00513f3a mov eax, esi */ { eax = (u32)(esi); }
  /* 00513f3c call 0x560fd0 */ esp -= 4; M32(esp) = 0x513f41u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x513f3cu); RETCHK(0x513f41u, 0x513f3cu); LOADALL;
  /* 00513f41 mov dword ptr [ebx + 0x254], eax */ { const u32 m_ = (u32)(ebx + 0x254u); M32(m_) = (u32)(eax); }
  /* 00513f47 push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 00513f4c mov eax, esi */ { eax = (u32)(esi); }
  /* 00513f4e call 0x560fd0 */ esp -= 4; M32(esp) = 0x513f53u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x513f4eu); RETCHK(0x513f53u, 0x513f4eu); LOADALL;
  /* 00513f53 mov ecx, dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); ecx = (u32)(M32(m_)); }
  /* 00513f59 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513f5b mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00513f5e mov dword ptr [ebx + 0x258], eax */ { const u32 m_ = (u32)(ebx + 0x258u); M32(m_) = (u32)(eax); }
  /* 00513f64 je 0x513f74 */ if (ZF_) goto L_00513f74;
  /* 00513f66 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00513f69 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513f6b je 0x513f74 */ if (ZF_) goto L_00513f74;
  /* 00513f6d mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00513f6f mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 00513f72 jmp 0x513f76 */ goto L_00513f76;
L_00513f74:;
  /* 00513f74 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00513f76:;
  /* 00513f76 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513f78 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00513f7b mov dword ptr [ebx + 0x25c], eax */ { const u32 m_ = (u32)(ebx + 0x25cu); M32(m_) = (u32)(eax); }
  /* 00513f81 je 0x513f91 */ if (ZF_) goto L_00513f91;
  /* 00513f83 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00513f86 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513f88 je 0x513f91 */ if (ZF_) goto L_00513f91;
  /* 00513f8a mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 00513f8c mov ecx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00513f8f jmp 0x513f93 */ goto L_00513f93;
L_00513f91:;
  /* 00513f91 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_00513f93:;
  /* 00513f93 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513f95 mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00513f98 mov dword ptr [ebx + 0x260], ecx */ { const u32 m_ = (u32)(ebx + 0x260u); M32(m_) = (u32)(ecx); }
  /* 00513f9e je 0x513fa4 */ if (ZF_) goto L_00513fa4;
  /* 00513fa0 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513fa2 jne 0x513fb9 */ if (!ZF_) goto L_00513fb9;
L_00513fa4:;
  /* 00513fa4 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00513fa6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00513fa9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00513fb0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00513fb1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00513fb2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00513fb3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00513fb5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00513fb6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00513fb9:;
  /* 00513fb9 mov esi, dword ptr [ebx + 0x254] */ { const u32 m_ = (u32)(ebx + 0x254u); esi = (u32)(M32(m_)); }
  /* 00513fbf fild dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)(s32)M32(m_)); }
  /* 00513fc2 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00513fc3 idiv esi */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, esi, &q_, &r_, 0x513fc3u); eax = q_; edx = r_; }
  /* 00513fc5 fidiv dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 00513fc8 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 00513fcb mov dword ptr [ebx + 0x1ec], edi */ { const u32 m_ = (u32)(ebx + 0x1ecu); M32(m_) = (u32)(edi); }
  /* 00513fd1 mov dword ptr [ebx + 0x1f0], edi */ { const u32 m_ = (u32)(ebx + 0x1f0u); M32(m_) = (u32)(edi); }
  /* 00513fd7 mov dword ptr [ebx + 0x1fc], edi */ { const u32 m_ = (u32)(ebx + 0x1fcu); M32(m_) = (u32)(edi); }
  /* 00513fdd mov dword ptr [ebx + 0x210], edi */ { const u32 m_ = (u32)(ebx + 0x210u); M32(m_) = (u32)(edi); }
  /* 00513fe3 fst dword ptr [ebx + 0x200] */ { const u32 m_ = (u32)(ebx + 0x200u); MF32(m_) = (float)ST(0); }
  /* 00513fe9 fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 00513fec fidiv dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 00513fef mov dword ptr [ebx + 0x264], eax */ { const u32 m_ = (u32)(ebx + 0x264u); M32(m_) = (u32)(eax); }
  /* 00513ff5 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00513ff7 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00513ff8 idiv dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, M32(m_), &q_, &r_, 0x513ff8u); eax = q_; edx = r_; }
  /* 00513ffb mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00514000 mov dword ptr [ebx + 0x270], ecx */ { const u32 m_ = (u32)(ebx + 0x270u); M32(m_) = (u32)(ecx); }
  /* 00514006 fst dword ptr [ebx + 0x20c] */ { const u32 m_ = (u32)(ebx + 0x20cu); MF32(m_) = (float)ST(0); }
  /* 0051400c fstp dword ptr [ebx + 0x21c] */ { const u32 m_ = (u32)(ebx + 0x21cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00514012 fstp dword ptr [ebx + 0x220] */ { const u32 m_ = (u32)(ebx + 0x220u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00514018 mov dword ptr [ebx + 0x268], eax */ { const u32 m_ = (u32)(ebx + 0x268u); M32(m_) = (u32)(eax); }
  /* 0051401e jmp 0x514025 */ goto L_00514025;
L_00514020:;
  /* 00514020 mov ecx, 1 */ { ecx = (u32)(0x1u); }
L_00514025:;
  /* 00514025 mov ebx, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); ebx = (u32)(M32(m_)); }
  /* 0051402b cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051402d je 0x514054 */ if (ZF_) goto L_00514054;
  /* 0051402f mov eax, dword ptr [0x7a6e2c] */ { const u32 m_ = (u32)(0x7a6e2cu); eax = (u32)(M32(m_)); }
  /* 00514034 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514036 je 0x51404a */ if (ZF_) goto L_0051404a;
  /* 00514038 cmp dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051403b je 0x514042 */ if (ZF_) goto L_00514042;
  /* 0051403d cmp dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514040 jne 0x51404a */ if (!ZF_) goto L_0051404a;
L_00514042:;
  /* 00514042 mov dword ptr [ebx + 0x84], ecx */ { const u32 m_ = (u32)(ebx + 0x84u); M32(m_) = (u32)(ecx); }
  /* 00514048 jmp 0x514054 */ goto L_00514054;
L_0051404a:;
  /* 0051404a mov dword ptr [ebx + 0x84], 2 */ { const u32 m_ = (u32)(ebx + 0x84u); M32(m_) = (u32)(0x2u); }
L_00514054:;
  /* 00514054 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00514057 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00514058 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00514059 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0051405b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00514062 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00514063 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00514065 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514066 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00514070(CPU *c) {
  NATIVE_HOOK(0x514070u) REGS; LOADALL;
L_00514070:;
  /* 00514070 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00514071 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00514073 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00514076 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00514077 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00514079 mov eax, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); eax = (u32)(M32(m_)); }
  /* 0051407f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514081 je 0x5141cf */ if (ZF_) goto L_005141cf;
  /* 00514087 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00514088 lea ecx, [ebx + 0x44] */ ecx = (u32)((u32)(ebx + 0x44u));
  /* 0051408b lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 0051408e call 0x52cea0 */ esp -= 4; M32(esp) = 0x514093u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x51408eu); RETCHK(0x514093u, 0x51408eu); LOADALL;
  /* 00514093 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00514096 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514097 lea esi, [ebp - 0x14] */ esi = (u32)((u32)(ebp + 0xffffffecu));
  /* 0051409a call 0x52cf90 */ esp -= 4; M32(esp) = 0x51409fu; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x51409au); RETCHK(0x51409fu, 0x51409au); LOADALL;
  /* 0051409f mov eax, dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); eax = (u32)(M32(m_)); }
  /* 005140a5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005140a8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005140aa je 0x5141ce */ if (ZF_) goto L_005141ce;
  /* 005140b0 mov edx, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); edx = (u32)(M32(m_)); }
  /* 005140b6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005140b7 mov eax, edx */ { eax = (u32)(edx); }
  /* 005140b9 call 0x526810 */ esp -= 4; M32(esp) = 0x5140beu; SAVEALL; F_00526810(c); ABI_CHECK(0x526810u, 0x5140b9u); RETCHK(0x5140beu, 0x5140b9u); LOADALL;
  /* 005140be mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005140c1 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 005140c6 mov eax, edx */ { eax = (u32)(edx); }
  /* 005140c8 call 0x526820 */ esp -= 4; M32(esp) = 0x5140cdu; SAVEALL; F_00526820(c); ABI_CHECK(0x526820u, 0x5140c8u); RETCHK(0x5140cdu, 0x5140c8u); LOADALL;
  /* 005140cd mov eax, dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); eax = (u32)(M32(m_)); }
  /* 005140d3 mov ecx, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); ecx = (u32)(M32(m_)); }
  /* 005140d9 call 0x5267f0 */ esp -= 4; M32(esp) = 0x5140deu; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x5140d9u); RETCHK(0x5140deu, 0x5140d9u); LOADALL;
  /* 005140de mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 005140e1 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 005140e4 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005140e6 mov dword ptr [ebp - 0x34], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ecx); }
  /* 005140e9 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 005140ec mov dword ptr [ebp - 0x30], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(edx); }
  /* 005140ef mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 005140f2 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 005140f5 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 005140f8 mov dword ptr [ebp - 0x28], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ecx); }
  /* 005140fb mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005140fd mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 00514100 mov dword ptr [ebp - 0x24], edx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edx); }
  /* 00514103 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00514106 mov dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ecx); }
  /* 00514109 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0051410c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051410d mov eax, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); eax = (u32)(M32(m_)); }
  /* 00514113 lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 00514116 mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 00514119 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051411a lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0051411d lea edx, [ebp - 0x24] */ edx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00514120 call 0x526920 */ esp -= 4; M32(esp) = 0x514125u; SAVEALL; F_00526920(c); ABI_CHECK(0x526920u, 0x514120u); RETCHK(0x514125u, 0x514120u); LOADALL;
  /* 00514125 mov edx, dword ptr [ebx + 0x1ec] */ { const u32 m_ = (u32)(ebx + 0x1ecu); edx = (u32)(M32(m_)); }
  /* 0051412b mov ecx, dword ptr [ebx + 0x1fc] */ { const u32 m_ = (u32)(ebx + 0x1fcu); ecx = (u32)(M32(m_)); }
  /* 00514131 mov eax, dword ptr [ebx + 0x1f0] */ { const u32 m_ = (u32)(ebx + 0x1f0u); eax = (u32)(M32(m_)); }
  /* 00514137 mov dword ptr [ebp - 0x34], edx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edx); }
  /* 0051413a mov edx, dword ptr [ebx + 0x200] */ { const u32 m_ = (u32)(ebx + 0x200u); edx = (u32)(M32(m_)); }
  /* 00514140 mov dword ptr [ebp - 0x2c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ecx); }
  /* 00514143 mov ecx, dword ptr [ebx + 0x210] */ { const u32 m_ = (u32)(ebx + 0x210u); ecx = (u32)(M32(m_)); }
  /* 00514149 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 0051414c mov eax, dword ptr [ebx + 0x20c] */ { const u32 m_ = (u32)(ebx + 0x20cu); eax = (u32)(M32(m_)); }
  /* 00514152 mov dword ptr [ebp - 0x28], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edx); }
  /* 00514155 mov edx, dword ptr [ebx + 0x21c] */ { const u32 m_ = (u32)(ebx + 0x21cu); edx = (u32)(M32(m_)); }
  /* 0051415b mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 0051415e mov ecx, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); ecx = (u32)(M32(m_)); }
  /* 00514164 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 00514167 mov eax, dword ptr [ebx + 0x220] */ { const u32 m_ = (u32)(ebx + 0x220u); eax = (u32)(M32(m_)); }
  /* 0051416d mov dword ptr [ebp - 0x1c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edx); }
  /* 00514170 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00514171 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00514174 lea edx, [ebp - 0x24] */ edx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00514177 lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0051417a lea edi, [ebp - 0x34] */ edi = (u32)((u32)(ebp + 0xffffffccu));
  /* 0051417d mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00514180 call 0x5269c0 */ esp -= 4; M32(esp) = 0x514185u; SAVEALL; F_005269c0(c); ABI_CHECK(0x5269c0u, 0x514180u); RETCHK(0x514185u, 0x514180u); LOADALL;
  /* 00514185 mov eax, dword ptr [ebx + 0x24c] */ { const u32 m_ = (u32)(ebx + 0x24cu); eax = (u32)(M32(m_)); }
  /* 0051418b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051418d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051418e je 0x5141b5 */ if (ZF_) goto L_005141b5;
  /* 00514190 lea esi, [ebx + 0x1f8] */ esi = (u32)((u32)(ebx + 0x1f8u));
  /* 00514196 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00514197 mov esi, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); esi = (u32)(M32(m_)); }
  /* 0051419d lea eax, [ebx + 0x228] */ eax = (u32)((u32)(ebx + 0x228u));
  /* 005141a3 lea ecx, [ebx + 0x218] */ ecx = (u32)((u32)(ebx + 0x218u));
  /* 005141a9 lea edx, [ebx + 0x208] */ edx = (u32)((u32)(ebx + 0x208u));
  /* 005141af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005141b0 call 0x526890 */ esp -= 4; M32(esp) = 0x5141b5u; SAVEALL; F_00526890(c); ABI_CHECK(0x526890u, 0x5141b0u); RETCHK(0x5141b5u, 0x5141b0u); LOADALL;
L_005141b5:;
  /* 005141b5 mov ecx, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); ecx = (u32)(M32(m_)); }
  /* 005141bb call 0x526a00 */ esp -= 4; M32(esp) = 0x5141c0u; SAVEALL; F_00526a00(c); ABI_CHECK(0x526a00u, 0x5141bbu); RETCHK(0x5141c0u, 0x5141bbu); LOADALL;
  /* 005141c0 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005141c3 mov eax, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); eax = (u32)(M32(m_)); }
  /* 005141c9 call 0x526820 */ esp -= 4; M32(esp) = 0x5141ceu; SAVEALL; F_00526820(c); ABI_CHECK(0x526820u, 0x5141c9u); RETCHK(0x5141ceu, 0x5141c9u); LOADALL;
L_005141ce:;
  /* 005141ce pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_005141cf:;
  /* 005141cf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005141d0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005141d2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005141d3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005141e0(CPU *c) {
  NATIVE_HOOK(0x5141e0u) REGS; LOADALL;
L_005141e0:;
  /* 005141e0 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005141e2 mov dl, al */ { edx = (edx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 005141e4 mov dword ptr [ecx + 0x1bc], eax */ { const u32 m_ = (u32)(ecx + 0x1bcu); M32(m_) = (u32)(eax); }
  /* 005141ea and edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005141ed mov dword ptr [ecx + 0x244], edx */ { const u32 m_ = (u32)(ecx + 0x244u); M32(m_) = (u32)(edx); }
  /* 005141f3 mov edx, eax */ { edx = (u32)(eax); }
  /* 005141f5 shr edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005141f7 and edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005141fa mov dword ptr [ecx + 0x248], edx */ { const u32 m_ = (u32)(ecx + 0x248u); M32(m_) = (u32)(edx); }
  /* 00514200 mov edx, eax */ { edx = (u32)(eax); }
  /* 00514202 shr edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00514205 and edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00514208 test al, 0x16 */ { u32 a_ = (eax & 0xffu), b_ = 0x16u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051420a setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0051420d mov dword ptr [ecx + 0x24c], edx */ { const u32 m_ = (u32)(ecx + 0x24cu); M32(m_) = (u32)(edx); }
  /* 00514213 movzx edx, al */ { edx = (u32)((eax & 0xffu)); }
  /* 00514216 mov dword ptr [ecx + 0x250], edx */ { const u32 m_ = (u32)(ecx + 0x250u); M32(m_) = (u32)(edx); }
  /* 0051421c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00514220(CPU *c) {
  NATIVE_HOOK(0x514220u) REGS; LOADALL;
L_00514220:;
  /* 00514220 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514222 je 0x514244 */ if (ZF_) goto L_00514244;
  /* 00514224 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00514225 mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 00514227 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00514228 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0051422a shl edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0051422d lea edi, [edi + edx + 0x1ec] */ edi = (u32)((u32)(edi + edx + 0x1ecu));
  /* 00514234 mov dword ptr [edi], ebx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebx); }
  /* 00514236 mov ebx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ebx = (u32)(M32(m_)); }
  /* 00514239 mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0051423c mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051423f mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00514242 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00514243 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00514244:;
  /* 00514244 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514246 je 0x514254 */ if (ZF_) goto L_00514254;
  /* 00514248 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0051424a shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0051424d mov dword ptr [ecx + edx + 0x1f8], eax */ { const u32 m_ = (u32)(ecx + edx + 0x1f8u); M32(m_) = (u32)(eax); }
L_00514254:;
  /* 00514254 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00514260(CPU *c) {
  NATIVE_HOOK(0x514260u) REGS; LOADALL;
L_00514260:;
  /* 00514260 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00514261 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00514263 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514265 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00514266 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00514269 je 0x514273 */ if (ZF_) goto L_00514273;
  /* 0051426b mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0051426d mov dword ptr [esi + 0x1c4], eax */ { const u32 m_ = (u32)(esi + 0x1c4u); M32(m_) = (u32)(eax); }
L_00514273:;
  /* 00514273 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514275 je 0x51428f */ if (ZF_) goto L_0051428f;
  /* 00514277 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00514278 mov ebx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (u32)(M32(m_)); }
  /* 0051427a lea eax, [esi + 0x1c8] */ eax = (u32)((u32)(esi + 0x1c8u));
  /* 00514280 mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
  /* 00514282 mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 00514285 mov dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00514288 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051428b mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0051428e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0051428f:;
  /* 0051428f test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514291 je 0x51429b */ if (ZF_) goto L_0051429b;
  /* 00514293 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00514295 mov dword ptr [esi + 0x1e4], eax */ { const u32 m_ = (u32)(esi + 0x1e4u); M32(m_) = (u32)(eax); }
L_0051429b:;
  /* 0051429b test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051429d je 0x5142bb */ if (ZF_) goto L_005142bb;
  /* 0051429f mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 005142a1 add esi, 0x1d4 */ { u32 a_ = esi, b_ = 0x1d4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005142a7 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 005142a9 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005142ac mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005142af mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005142b2 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005142b5 mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005142b8 mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
L_005142bb:;
  /* 005142bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005142bc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005142bd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005142c0(CPU *c) {
  NATIVE_HOOK(0x5142c0u) REGS; LOADALL;
L_005142c0:;
  /* 005142c0 fild dword ptr [eax + 0x258] */ { const u32 m_ = (u32)(eax + 0x258u); FPUSH((double)(s32)M32(m_)); }
  /* 005142c6 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005142c8 mov dword ptr [eax + 0x1ec], ecx */ { const u32 m_ = (u32)(eax + 0x1ecu); M32(m_) = (u32)(ecx); }
  /* 005142ce mov dword ptr [eax + 0x1f0], ecx */ { const u32 m_ = (u32)(eax + 0x1f0u); M32(m_) = (u32)(ecx); }
  /* 005142d4 fidiv dword ptr [eax + 0x260] */ { const u32 m_ = (u32)(eax + 0x260u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 005142da mov dword ptr [eax + 0x1fc], ecx */ { const u32 m_ = (u32)(eax + 0x1fcu); M32(m_) = (u32)(ecx); }
  /* 005142e0 mov dword ptr [eax + 0x210], ecx */ { const u32 m_ = (u32)(eax + 0x210u); M32(m_) = (u32)(ecx); }
  /* 005142e6 mov dword ptr [eax + 0x270], 1 */ { const u32 m_ = (u32)(eax + 0x270u); M32(m_) = (u32)(0x1u); }
  /* 005142f0 fst dword ptr [eax + 0x200] */ { const u32 m_ = (u32)(eax + 0x200u); MF32(m_) = (float)ST(0); }
  /* 005142f6 fild dword ptr [eax + 0x254] */ { const u32 m_ = (u32)(eax + 0x254u); FPUSH((double)(s32)M32(m_)); }
  /* 005142fc fidiv dword ptr [eax + 0x25c] */ { const u32 m_ = (u32)(eax + 0x25cu); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 00514302 fst dword ptr [eax + 0x20c] */ { const u32 m_ = (u32)(eax + 0x20cu); MF32(m_) = (float)ST(0); }
  /* 00514308 fstp dword ptr [eax + 0x21c] */ { const u32 m_ = (u32)(eax + 0x21cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051430e fstp dword ptr [eax + 0x220] */ { const u32 m_ = (u32)(eax + 0x220u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00514314 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00514320(CPU *c) {
  NATIVE_HOOK(0x514320u) REGS; LOADALL;
L_00514320:;
  /* 00514320 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00514321 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00514323 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00514325 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0051432a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00514330 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514331 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00514338 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00514339 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051433a push 0x5143a0 */ { u32 v_ = 0x5143a0u; esp -= 4; M32(esp) = v_; }
  /* 0051433f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00514342 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00514344 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00514346 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00514349 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0051434c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051434e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051434f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00514352 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00514359 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0051435c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051435d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00514360 call 0x404140 */ esp -= 4; M32(esp) = 0x514365u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x514360u); RETCHK(0x514365u, 0x514360u); LOADALL;
  /* 00514365 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00514368 call 0x405c00 */ esp -= 4; M32(esp) = 0x51436du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x514368u); RETCHK(0x51436du, 0x514368u); LOADALL;
  /* 0051436d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0051436f call 0x405c80 */ esp -= 4; M32(esp) = 0x514374u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x51436fu); RETCHK(0x514374u, 0x51436fu); LOADALL;
  /* 00514374 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514378 jb 0x514386 */ if (CF_) goto L_00514386;
  /* 0051437a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051437d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051437e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x514383u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51437eu); RETCHK(0x514383u, 0x51437eu); LOADALL;
  /* 00514383 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00514386:;
  /* 00514386 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00514389 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051438b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00514392 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00514393 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00514395 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514396 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_005143a0(CPU *c) {
  NATIVE_HOOK(0x5143a0u) REGS; LOADALL;
L_005143a0:;
  /* 005143a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005143a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005143a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005143a5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 005143aa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005143b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005143b1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005143b8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005143b9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005143ba push 0x278 */ { u32 v_ = 0x278u; esp -= 4; M32(esp) = v_; }
  /* 005143bf call 0x5fe934 */ esp -= 4; M32(esp) = 0x5143c4u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5143bfu); RETCHK(0x5143c4u, 0x5143bfu); LOADALL;
  /* 005143c4 mov esi, eax */ { esi = (u32)(eax); }
  /* 005143c6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005143c9 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 005143cc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005143ce cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005143d0 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005143d3 je 0x5143da */ if (ZF_) goto L_005143da;
  /* 005143d5 call 0x513730 */ esp -= 4; M32(esp) = 0x5143dau; SAVEALL; F_00513730(c); ABI_CHECK(0x513730u, 0x5143d5u); RETCHK(0x5143dau, 0x5143d5u); LOADALL;
L_005143da:;
  /* 005143da mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005143dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005143de mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005143e5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005143e7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005143e8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005143f0(CPU *c) {
  NATIVE_HOOK(0x5143f0u) REGS; LOADALL;
L_005143f0:;
  /* 005143f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005143f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005143f3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005143f9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005143fb push 0x61dd46 */ { u32 v_ = 0x61dd46u; esp -= 4; M32(esp) = v_; }
  /* 00514400 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514401 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00514404 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0051440b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051440c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051440d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00514410 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514411 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00514412 call 0x506b60 */ esp -= 4; M32(esp) = 0x514417u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x514412u); RETCHK(0x514417u, 0x514412u); LOADALL;
  /* 00514417 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00514419 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0051441c mov dword ptr [esi], 0x651db0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x651db0u); }
  /* 00514422 mov dword ptr [esi + 0x184], ebx */ { const u32 m_ = (u32)(esi + 0x184u); M32(m_) = (u32)(ebx); }
  /* 00514428 mov dword ptr [esi + 0x188], ebx */ { const u32 m_ = (u32)(esi + 0x188u); M32(m_) = (u32)(ebx); }
  /* 0051442e mov dword ptr [esi + 0x18c], ebx */ { const u32 m_ = (u32)(esi + 0x18cu); M32(m_) = (u32)(ebx); }
  /* 00514434 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 00514436 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0051443a push 0x651edc */ { u32 v_ = 0x651edcu; esp -= 4; M32(esp) = v_; }
  /* 0051443f lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00514442 mov byte ptr [esi + 0x3c], 1 */ { const u32 m_ = (u32)(esi + 0x3cu); M8(m_) = (u8)(0x1u); }
  /* 00514446 call 0x404420 */ esp -= 4; M32(esp) = 0x51444bu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x514446u); RETCHK(0x51444bu, 0x514446u); LOADALL;
  /* 0051444b mov al, 0xff */ { eax = (eax & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 0051444d mov byte ptr [ebp + 8], al */ { const u32 m_ = (u32)(ebp + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00514450 mov byte ptr [ebp + 9], al */ { const u32 m_ = (u32)(ebp + 0x9u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00514453 mov byte ptr [ebp + 0xa], al */ { const u32 m_ = (u32)(ebp + 0xau); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00514456 mov byte ptr [ebp + 0xc], al */ { const u32 m_ = (u32)(ebp + 0xcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00514459 mov byte ptr [ebp + 0xd], al */ { const u32 m_ = (u32)(ebp + 0xdu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0051445c mov byte ptr [ebp + 0xe], bl */ { const u32 m_ = (u32)(ebp + 0xeu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051445f mov byte ptr [ebp + 0xb], 0x7f */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)(0x7fu); }
  /* 00514463 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00514466 mov byte ptr [ebp + 0xf], 0x82 */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)(0x82u); }
  /* 0051446a mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0051446d mov dword ptr [esi + 0x190], ebx */ { const u32 m_ = (u32)(esi + 0x190u); M32(m_) = (u32)(ebx); }
  /* 00514473 mov dword ptr [esi + 0x194], ebx */ { const u32 m_ = (u32)(esi + 0x194u); M32(m_) = (u32)(ebx); }
  /* 00514479 mov dword ptr [esi + 0x1a8], ecx */ { const u32 m_ = (u32)(esi + 0x1a8u); M32(m_) = (u32)(ecx); }
  /* 0051447f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00514482 mov dword ptr [esi + 0x198], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x198u); M32(m_) = (u32)(0xffffffffu); }
  /* 0051448c mov dword ptr [esi + 0x1ac], edx */ { const u32 m_ = (u32)(esi + 0x1acu); M32(m_) = (u32)(edx); }
  /* 00514492 mov byte ptr [esi + 0x1b4], 1 */ { const u32 m_ = (u32)(esi + 0x1b4u); M8(m_) = (u8)(0x1u); }
  /* 00514499 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051449b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051449c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005144a3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005144a4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005144a6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005144a7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005144b0(CPU *c) {
  NATIVE_HOOK(0x5144b0u) REGS; LOADALL;
L_005144b0:;
  /* 005144b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005144b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005144b3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005144b4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005144b6 call 0x5144e0 */ esp -= 4; M32(esp) = 0x5144bbu; SAVEALL; F_005144e0(c); ABI_CHECK(0x5144e0u, 0x5144b6u); RETCHK(0x5144bbu, 0x5144b6u); LOADALL;
  /* 005144bb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005144bf je 0x5144ca */ if (ZF_) goto L_005144ca;
  /* 005144c1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005144c2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5144c7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5144c2u); RETCHK(0x5144c7u, 0x5144c2u); LOADALL;
  /* 005144c7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005144ca:;
  /* 005144ca mov eax, esi */ { eax = (u32)(esi); }
  /* 005144cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005144cd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005144ce ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005144e0(CPU *c) {
  NATIVE_HOOK(0x5144e0u) REGS; LOADALL;
L_005144e0:;
  /* 005144e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005144e1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005144e3 mov dword ptr [esi], 0x651db0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x651db0u); }
  /* 005144e9 mov eax, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); eax = (u32)(M32(m_)); }
  /* 005144ef test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005144f1 je 0x5144fc */ if (ZF_) goto L_005144fc;
  /* 005144f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005144f4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5144f9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5144f4u); RETCHK(0x5144f9u, 0x5144f4u); LOADALL;
  /* 005144f9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005144fc:;
  /* 005144fc mov dword ptr [esi + 0x184], 0 */ { const u32 m_ = (u32)(esi + 0x184u); M32(m_) = (u32)(0x0u); }
  /* 00514506 mov dword ptr [esi + 0x188], 0 */ { const u32 m_ = (u32)(esi + 0x188u); M32(m_) = (u32)(0x0u); }
  /* 00514510 mov dword ptr [esi + 0x18c], 0 */ { const u32 m_ = (u32)(esi + 0x18cu); M32(m_) = (u32)(0x0u); }
  /* 0051451a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051451c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051451d jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_00514530(CPU *c) {
  NATIVE_HOOK(0x514530u) REGS; LOADALL;
L_00514530:;
  /* 00514530 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00514531 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00514533 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00514536 lea ecx, [esi + 0x44] */ ecx = (u32)((u32)(esi + 0x44u));
  /* 00514539 mov edx, edi */ { edx = (u32)(edi); }
  /* 0051453b lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0051453e call 0x52cee0 */ esp -= 4; M32(esp) = 0x514543u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x51453eu); RETCHK(0x514543u, 0x51453eu); LOADALL;
  /* 00514543 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00514546 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00514548 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051454a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051454b lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 0051454e call 0x404140 */ esp -= 4; M32(esp) = 0x514553u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x51454eu); RETCHK(0x514553u, 0x51454eu); LOADALL;
  /* 00514553 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00514556 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00514559 mov dword ptr [esi + 0x194], ecx */ { const u32 m_ = (u32)(esi + 0x194u); M32(m_) = (u32)(ecx); }
  /* 0051455f mov dword ptr [esi + 0x190], edx */ { const u32 m_ = (u32)(esi + 0x190u); M32(m_) = (u32)(edx); }
  /* 00514565 fld dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00514568 fsub dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051456b fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00514571 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00514573 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00514576 je 0x514580 */ if (ZF_) goto L_00514580;
  /* 00514578 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051457a fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0051457d fsub dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00514580:;
  /* 00514580 fdiv dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00514583 call 0x61b154 */ esp -= 4; M32(esp) = 0x514588u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x514583u); RETCHK(0x514588u, 0x514583u); LOADALL;
  /* 00514588 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0051458b mov dword ptr [esi + 0x1a0], eax */ { const u32 m_ = (u32)(esi + 0x1a0u); M32(m_) = (u32)(eax); }
  /* 00514591 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00514594 mov dword ptr [esi + 0x1a4], eax */ { const u32 m_ = (u32)(esi + 0x1a4u); M32(m_) = (u32)(eax); }
  /* 0051459a mov dword ptr [esi + 0x1b0], ecx */ { const u32 m_ = (u32)(esi + 0x1b0u); M32(m_) = (u32)(ecx); }
  /* 005145a0 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005145a2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005145a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005145a5 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_005145b0(CPU *c) {
  NATIVE_HOOK(0x5145b0u) REGS; LOADALL;
L_005145b0:;
  /* 005145b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005145b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005145b3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005145b6 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005145b8 mov dword ptr [ecx + 0x1ac], edx */ { const u32 m_ = (u32)(ecx + 0x1acu); M32(m_) = (u32)(edx); }
  /* 005145be pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005145bf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005145d0(CPU *c) {
  NATIVE_HOOK(0x5145d0u) REGS; LOADALL;
L_005145d0:;
  /* 005145d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005145d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005145d3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005145d6 mov dword ptr [ecx + 0x194], eax */ { const u32 m_ = (u32)(ecx + 0x194u); M32(m_) = (u32)(eax); }
  /* 005145dc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005145dd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005145e0(CPU *c) {
  NATIVE_HOOK(0x5145e0u) REGS; LOADALL;
L_005145e0:;
  /* 005145e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005145e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005145e3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005145e6 mov dword ptr [ecx + 0x190], eax */ { const u32 m_ = (u32)(ecx + 0x190u); M32(m_) = (u32)(eax); }
  /* 005145ec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005145ed ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005145f0(CPU *c) {
  NATIVE_HOOK(0x5145f0u) REGS; LOADALL;
L_005145f0:;
  /* 005145f0 fld dword ptr [ecx + 0x190] */ { const u32 m_ = (u32)(ecx + 0x190u); FPUSH((double)MF32(m_)); }
  /* 005145f6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00514600(CPU *c) {
  NATIVE_HOOK(0x514600u) REGS; LOADALL;
L_00514600:;
  /* 00514600 fld dword ptr [ecx + 0x194] */ { const u32 m_ = (u32)(ecx + 0x194u); FPUSH((double)MF32(m_)); }
  /* 00514606 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00514610(CPU *c) {
  NATIVE_HOOK(0x514610u) REGS; LOADALL;
L_00514610:;
  /* 00514610 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00514611 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00514613 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00514614 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00514615 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00514618 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051461a jl 0x514701 */ if (LT_) goto L_00514701;
  /* 00514620 mov edx, dword ptr [ecx + 0x184] */ { const u32 m_ = (u32)(ecx + 0x184u); edx = (u32)(M32(m_)); }
  /* 00514626 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514628 je 0x514701 */ if (ZF_) goto L_00514701;
  /* 0051462e mov eax, dword ptr [ecx + 0x188] */ { const u32 m_ = (u32)(ecx + 0x188u); eax = (u32)(M32(m_)); }
  /* 00514634 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00514636 sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00514639 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051463b jae 0x514701 */ if (!CF_) goto L_00514701;
  /* 00514641 mov al, byte ptr [ecx + 0x1b4] */ { const u32 m_ = (u32)(ecx + 0x1b4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00514647 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 0051464d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051464f je 0x5146a7 */ if (ZF_) goto L_005146a7;
  /* 00514651 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514653 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00514655 jne 0x51465b */ if (!ZF_) goto L_0051465b;
  /* 00514657 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00514659 jmp 0x514666 */ goto L_00514666;
L_0051465b:;
  /* 0051465b mov eax, dword ptr [ecx + 0x188] */ { const u32 m_ = (u32)(ecx + 0x188u); eax = (u32)(M32(m_)); }
  /* 00514661 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00514663 sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_00514666:;
  /* 00514666 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514668 fld dword ptr [ecx + 0x194] */ { const u32 m_ = (u32)(ecx + 0x194u); FPUSH((double)MF32(m_)); }
  /* 0051466e fadd dword ptr [ecx + 0x1a4] */ { const u32 m_ = (u32)(ecx + 0x1a4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00514674 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00514677 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0051467a jge 0x514682 */ if (!LT_) goto L_00514682;
  /* 0051467c fadd dword ptr [0x656f48] */ { const u32 m_ = (u32)(0x656f48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_00514682:;
  /* 00514682 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 00514684 fadd dword ptr [ecx + 0x1a4] */ { const u32 m_ = (u32)(ecx + 0x1a4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051468a fld dword ptr [ecx + 0x50] */ { const u32 m_ = (u32)(ecx + 0x50u); FPUSH((double)MF32(m_)); }
  /* 0051468d fsub dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00514690 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00514696 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00514698 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051469b je 0x5146a5 */ if (ZF_) goto L_005146a5;
  /* 0051469d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051469f fld dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); FPUSH((double)MF32(m_)); }
  /* 005146a2 fsub dword ptr [ecx + 0x50] */ { const u32 m_ = (u32)(ecx + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005146a5:;
  /* 005146a5 fsubrp st(1) */ { double s0_ = ST(0); ST(1) = FR(s0_ - ST(1)); FPOP(); }
L_005146a7:;
  /* 005146a7 fld dword ptr [ecx + 0x4c] */ { const u32 m_ = (u32)(ecx + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 005146aa fsub dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005146ad fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005146b3 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005146b5 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005146b8 je 0x5146c2 */ if (ZF_) goto L_005146c2;
  /* 005146ba fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005146bc fld dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); FPUSH((double)MF32(m_)); }
  /* 005146bf fsub dword ptr [ecx + 0x4c] */ { const u32 m_ = (u32)(ecx + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005146c2:;
  /* 005146c2 fsub dword ptr [ecx + 0x190] */ { const u32 m_ = (u32)(ecx + 0x190u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005146c8 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005146cb fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005146d1 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 005146d3 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005146d5 fadd dword ptr [ecx + 0x190] */ { const u32 m_ = (u32)(ecx + 0x190u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005146db fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005146de fld dword ptr [ecx + 0x194] */ { const u32 m_ = (u32)(ecx + 0x194u); FPUSH((double)MF32(m_)); }
  /* 005146e4 fadd dword ptr [ecx + 0x1a4] */ { const u32 m_ = (u32)(ecx + 0x1a4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005146ea fimul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)(s32)M32(m_)); }
  /* 005146ed fadd dword ptr [ecx + 0x1a4] */ { const u32 m_ = (u32)(ecx + 0x1a4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005146f3 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005146f5 fst dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); }
  /* 005146f8 fadd dword ptr [ecx + 0x194] */ { const u32 m_ = (u32)(ecx + 0x194u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005146fe fstp dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
L_00514701:;
  /* 00514701 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00514702 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00514704 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514705 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00514710(CPU *c) {
  NATIVE_HOOK(0x514710u) REGS; LOADALL;
L_00514710:;
  /* 00514710 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00514711 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00514713 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00514714 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00514717 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514719 jl 0x514769 */ if (LT_) goto L_00514769;
  /* 0051471b mov edx, dword ptr [ecx + 0x184] */ { const u32 m_ = (u32)(ecx + 0x184u); edx = (u32)(M32(m_)); }
  /* 00514721 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514723 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00514724 lea edi, [ecx + 0x180] */ edi = (u32)((u32)(ecx + 0x180u));
  /* 0051472a je 0x514768 */ if (ZF_) goto L_00514768;
  /* 0051472c mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051472f sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00514731 sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00514734 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514736 jae 0x514768 */ if (!CF_) goto L_00514768;
  /* 00514738 mov eax, dword ptr [ecx + 0x184] */ { const u32 m_ = (u32)(ecx + 0x184u); eax = (u32)(M32(m_)); }
  /* 0051473e mov ecx, dword ptr [eax + esi*8 + 4] */ { const u32 m_ = (u32)(eax + esi * 8u + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00514742 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00514744 lea esi, [eax + esi*8] */ esi = (u32)((u32)(eax + esi * 8u));
  /* 00514747 call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51474au; SAVEALL; call_ind(c, t_); RETCHK(0x51474au, 0x514747u); LOADALL; }
  /* 0051474a mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051474d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051474f je 0x514757 */ if (ZF_) goto L_00514757;
  /* 00514751 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00514753 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00514755 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x514757u; SAVEALL; call_ind(c, t_); RETCHK(0x514757u, 0x514755u); LOADALL; }
L_00514757:;
  /* 00514757 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00514758 lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 0051475b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051475c mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 00514763 call 0x514fb0 */ esp -= 4; M32(esp) = 0x514768u; SAVEALL; F_00514fb0(c); ABI_CHECK(0x514fb0u, 0x514763u); RETCHK(0x514768u, 0x514763u); LOADALL;
L_00514768:;
  /* 00514768 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00514769:;
  /* 00514769 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051476a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051476b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00514770(CPU *c) {
  NATIVE_HOOK(0x514770u) REGS; LOADALL;
L_00514770:;
  /* 00514770 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00514771 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00514772 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00514773 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00514775 mov esi, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); esi = (u32)(M32(m_)); }
  /* 0051477b mov eax, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); eax = (u32)(M32(m_)); }
  /* 00514781 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00514783 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514785 je 0x5147ac */ if (ZF_) goto L_005147ac;
L_00514787:;
  /* 00514787 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051478a mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0051478c call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51478fu; SAVEALL; call_ind(c, t_); RETCHK(0x51478fu, 0x51478cu); LOADALL; }
  /* 0051478f mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00514792 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514794 je 0x51479c */ if (ZF_) goto L_0051479c;
  /* 00514796 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00514798 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0051479a call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51479cu; SAVEALL; call_ind(c, t_); RETCHK(0x51479cu, 0x51479au); LOADALL; }
L_0051479c:;
  /* 0051479c mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0051479f mov eax, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); eax = (u32)(M32(m_)); }
  /* 005147a5 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005147a8 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005147aa jne 0x514787 */ if (!ZF_) goto L_00514787;
L_005147ac:;
  /* 005147ac mov eax, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); eax = (u32)(M32(m_)); }
  /* 005147b2 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005147b4 je 0x5147bf */ if (ZF_) goto L_005147bf;
  /* 005147b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005147b7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5147bcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5147b7u); RETCHK(0x5147bcu, 0x5147b7u); LOADALL;
  /* 005147bc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005147bf:;
  /* 005147bf mov dword ptr [edi + 0x184], ebx */ { const u32 m_ = (u32)(edi + 0x184u); M32(m_) = (u32)(ebx); }
  /* 005147c5 mov dword ptr [edi + 0x188], ebx */ { const u32 m_ = (u32)(edi + 0x188u); M32(m_) = (u32)(ebx); }
  /* 005147cb mov dword ptr [edi + 0x18c], ebx */ { const u32 m_ = (u32)(edi + 0x18cu); M32(m_) = (u32)(ebx); }
  /* 005147d1 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005147d3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005147d5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005147d7 call dword ptr [eax + 0x100] */ { const u32 m_ = (u32)(eax + 0x100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5147ddu; SAVEALL; call_ind(c, t_); RETCHK(0x5147ddu, 0x5147d7u); LOADALL; }
  /* 005147dd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005147de pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005147df pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005147e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005147f0(CPU *c) {
  NATIVE_HOOK(0x5147f0u) REGS; LOADALL;
L_005147f0:;
  /* 005147f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005147f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005147f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005147f4 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005147f7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005147f9 jl 0x514820 */ if (LT_) goto L_00514820;
  /* 005147fb mov edx, dword ptr [ecx + 0x184] */ { const u32 m_ = (u32)(ecx + 0x184u); edx = (u32)(M32(m_)); }
  /* 00514801 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514803 je 0x514820 */ if (ZF_) goto L_00514820;
  /* 00514805 mov eax, dword ptr [ecx + 0x188] */ { const u32 m_ = (u32)(ecx + 0x188u); eax = (u32)(M32(m_)); }
  /* 0051480b sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051480d sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00514810 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514812 jae 0x514820 */ if (!CF_) goto L_00514820;
  /* 00514814 mov eax, edx */ { eax = (u32)(edx); }
  /* 00514816 lea eax, [eax + esi*8] */ eax = (u32)((u32)(eax + esi * 8u));
  /* 00514819 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0051481b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051481c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051481d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00514820:;
  /* 00514820 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00514822 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00514823 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514824 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00514830(CPU *c) {
  NATIVE_HOOK(0x514830u) REGS; LOADALL;
L_00514830:;
  /* 00514830 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00514831 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00514833 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00514834 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00514837 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514839 jl 0x514866 */ if (LT_) goto L_00514866;
  /* 0051483b mov edx, dword ptr [ecx + 0x184] */ { const u32 m_ = (u32)(ecx + 0x184u); edx = (u32)(M32(m_)); }
  /* 00514841 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514843 jne 0x514849 */ if (!ZF_) goto L_00514849;
  /* 00514845 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00514847 jmp 0x514854 */ goto L_00514854;
L_00514849:;
  /* 00514849 mov eax, dword ptr [ecx + 0x188] */ { const u32 m_ = (u32)(ecx + 0x188u); eax = (u32)(M32(m_)); }
  /* 0051484f sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00514851 sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_00514854:;
  /* 00514854 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514856 ja 0x514866 */ if (!(CF_|ZF_)) goto L_00514866;
  /* 00514858 mov eax, dword ptr [ecx + 0x184] */ { const u32 m_ = (u32)(ecx + 0x184u); eax = (u32)(M32(m_)); }
  /* 0051485e mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00514861 lea eax, [eax + esi*8] */ eax = (u32)((u32)(eax + esi * 8u));
  /* 00514864 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
L_00514866:;
  /* 00514866 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00514867 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514868 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00514870(CPU *c) {
  NATIVE_HOOK(0x514870u) REGS; LOADALL;
L_00514870:;
  /* 00514870 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00514871 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00514873 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00514876 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00514877 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00514878 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00514879 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0051487b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0051487d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00514880:;
  /* 00514880 mov ecx, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); ecx = (u32)(M32(m_)); }
  /* 00514886 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514888 je 0x5148cb */ if (ZF_) goto L_005148cb;
  /* 0051488a mov eax, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); eax = (u32)(M32(m_)); }
  /* 00514890 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00514892 sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00514895 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514897 jae 0x5148cb */ if (!CF_) goto L_005148cb;
  /* 00514899 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0051489b lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0051489e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051489f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005148a0 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005148a2 call dword ptr [eax + 0xfc] */ { const u32 m_ = (u32)(eax + 0xfcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5148a8u; SAVEALL; call_ind(c, t_); RETCHK(0x5148a8u, 0x5148a2u); LOADALL; }
  /* 005148a8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005148a9 lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 005148ac call 0x52cf90 */ esp -= 4; M32(esp) = 0x5148b1u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x5148acu); RETCHK(0x5148b1u, 0x5148acu); LOADALL;
  /* 005148b1 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005148b4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005148b7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005148b9 call 0x52cf00 */ esp -= 4; M32(esp) = 0x5148beu; SAVEALL; F_0052cf00(c); ABI_CHECK(0x52cf00u, 0x5148b9u); RETCHK(0x5148beu, 0x5148b9u); LOADALL;
  /* 005148be test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005148c0 je 0x5148c8 */ if (ZF_) goto L_005148c8;
  /* 005148c2 mov dword ptr [edi + 0x19c], ebx */ { const u32 m_ = (u32)(edi + 0x19cu); M32(m_) = (u32)(ebx); }
L_005148c8:;
  /* 005148c8 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005148c9 jmp 0x514880 */ goto L_00514880;
L_005148cb:;
  /* 005148cb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005148cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005148cd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005148ce mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005148d0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005148d1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005148e0(CPU *c) {
  NATIVE_HOOK(0x5148e0u) REGS; LOADALL;
L_005148e0:;
  /* 005148e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005148e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005148e3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005148e6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005148e7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005148e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005148e9 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005148eb xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005148ed lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_005148f0:;
  /* 005148f0 mov ecx, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); ecx = (u32)(M32(m_)); }
  /* 005148f6 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005148f8 je 0x514940 */ if (ZF_) goto L_00514940;
  /* 005148fa mov eax, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); eax = (u32)(M32(m_)); }
  /* 00514900 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00514902 sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00514905 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514907 jae 0x514940 */ if (!CF_) goto L_00514940;
  /* 00514909 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0051490b lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0051490e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051490f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00514910 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00514912 call dword ptr [eax + 0xfc] */ { const u32 m_ = (u32)(eax + 0xfcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x514918u; SAVEALL; call_ind(c, t_); RETCHK(0x514918u, 0x514912u); LOADALL; }
  /* 00514918 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00514919 lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0051491c call 0x52cf90 */ esp -= 4; M32(esp) = 0x514921u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x51491cu); RETCHK(0x514921u, 0x51491cu); LOADALL;
  /* 00514921 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00514924 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00514927 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00514929 call 0x52cf00 */ esp -= 4; M32(esp) = 0x51492eu; SAVEALL; F_0052cf00(c); ABI_CHECK(0x52cf00u, 0x514929u); RETCHK(0x51492eu, 0x514929u); LOADALL;
  /* 0051492e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514930 je 0x51493d */ if (ZF_) goto L_0051493d;
  /* 00514932 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00514934 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00514935 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00514937 call dword ptr [edx + 0x100] */ { const u32 m_ = (u32)(edx + 0x100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51493du; SAVEALL; call_ind(c, t_); RETCHK(0x51493du, 0x514937u); LOADALL; }
L_0051493d:;
  /* 0051493d inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051493e jmp 0x5148f0 */ goto L_005148f0;
L_00514940:;
  /* 00514940 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00514941 call 0x508500 */ esp -= 4; M32(esp) = 0x514946u; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x514941u); RETCHK(0x514946u, 0x514941u); LOADALL;
  /* 00514946 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00514948 jne 0x514951 */ if (!ZF_) goto L_00514951;
  /* 0051494a mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0051494c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0051494e call dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x514951u; SAVEALL; call_ind(c, t_); RETCHK(0x514951u, 0x51494eu); LOADALL; }
L_00514951:;
  /* 00514951 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00514952 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00514953 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00514954 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00514956 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514957 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00514960(CPU *c) {
  NATIVE_HOOK(0x514960u) REGS; LOADALL;
L_00514960:;
  /* 00514960 mov eax, dword ptr [ecx + 0x198] */ { const u32 m_ = (u32)(ecx + 0x198u); eax = (u32)(M32(m_)); }
  /* 00514966 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00514970(CPU *c) {
  NATIVE_HOOK(0x514970u) REGS; LOADALL;
L_00514970:;
  /* 00514970 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00514971 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00514973 mov eax, dword ptr [ecx + 0x198] */ { const u32 m_ = (u32)(ecx + 0x198u); eax = (u32)(M32(m_)); }
  /* 00514979 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051497a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051497d cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051497f je 0x5149a8 */ if (ZF_) goto L_005149a8;
  /* 00514981 mov edx, dword ptr [ecx + 0x184] */ { const u32 m_ = (u32)(ecx + 0x184u); edx = (u32)(M32(m_)); }
  /* 00514987 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514989 je 0x5149a8 */ if (ZF_) goto L_005149a8;
  /* 0051498b mov eax, dword ptr [ecx + 0x188] */ { const u32 m_ = (u32)(ecx + 0x188u); eax = (u32)(M32(m_)); }
  /* 00514991 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00514993 sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00514996 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514998 jae 0x5149a8 */ if (!CF_) goto L_005149a8;
  /* 0051499a mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0051499c mov dword ptr [ecx + 0x198], esi */ { const u32 m_ = (u32)(ecx + 0x198u); M32(m_) = (u32)(esi); }
  /* 005149a2 call dword ptr [eax + 0x118] */ { const u32 m_ = (u32)(eax + 0x118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5149a8u; SAVEALL; call_ind(c, t_); RETCHK(0x5149a8u, 0x5149a2u); LOADALL; }
L_005149a8:;
  /* 005149a8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005149a9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005149aa ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005149b0(CPU *c) {
  NATIVE_HOOK(0x5149b0u) REGS; LOADALL;
L_005149b0:;
  /* 005149b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005149b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005149b3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005149b6 mov eax, dword ptr [ecx + 0x198] */ { const u32 m_ = (u32)(ecx + 0x198u); eax = (u32)(M32(m_)); }
  /* 005149bc mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 005149bf mov ecx, dword ptr [ecx + 0x5c] */ { const u32 m_ = (u32)(ecx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005149c2 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005149c5 mov dword ptr [ebp - 0x18], 7 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x7u); }
  /* 005149cc mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005149cf mov dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x0u); }
  /* 005149d6 call 0x508540 */ esp -= 4; M32(esp) = 0x5149dbu; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x5149d6u); RETCHK(0x5149dbu, 0x5149d6u); LOADALL;
  /* 005149db mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005149dd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005149de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005149e0(CPU *c) {
  NATIVE_HOOK(0x5149e0u) REGS; LOADALL;
L_005149e0:;
  /* 005149e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005149e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005149e3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005149e6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005149e7 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005149e9 call 0x518bb0 */ esp -= 4; M32(esp) = 0x5149eeu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x5149e9u); RETCHK(0x5149eeu, 0x5149e9u); LOADALL;
  /* 005149ee call 0x518210 */ esp -= 4; M32(esp) = 0x5149f3u; SAVEALL; F_00518210(c); ABI_CHECK(0x518210u, 0x5149eeu); RETCHK(0x5149f3u, 0x5149eeu); LOADALL;
  /* 005149f3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005149f5 je 0x514aad */ if (ZF_) goto L_00514aad;
  /* 005149fb mov ecx, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); ecx = (u32)(M32(m_)); }
  /* 00514a01 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514a03 je 0x514aad */ if (ZF_) goto L_00514aad;
  /* 00514a09 mov eax, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); eax = (u32)(M32(m_)); }
  /* 00514a0f sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00514a11 sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00514a14 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514a16 je 0x514aad */ if (ZF_) goto L_00514aad;
  /* 00514a1c mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00514a1e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00514a1f lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00514a22 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00514a23 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00514a25 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00514a27 call dword ptr [eax + 0xfc] */ { const u32 m_ = (u32)(eax + 0xfcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x514a2du; SAVEALL; call_ind(c, t_); RETCHK(0x514a2du, 0x514a27u); LOADALL; }
  /* 00514a2d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00514a2e lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00514a31 call 0x52cf90 */ esp -= 4; M32(esp) = 0x514a36u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x514a31u); RETCHK(0x514a36u, 0x514a31u); LOADALL;
  /* 00514a36 mov esi, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); esi = (u32)(M32(m_)); }
  /* 00514a3c mov eax, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); eax = (u32)(M32(m_)); }
  /* 00514a42 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00514a45 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514a47 je 0x514aac */ if (ZF_) goto L_00514aac;
  /* 00514a49 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00514a50:;
  /* 00514a50 mov eax, dword ptr [edi + 0x198] */ { const u32 m_ = (u32)(edi + 0x198u); eax = (u32)(M32(m_)); }
  /* 00514a56 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514a59 je 0x514a79 */ if (ZF_) goto L_00514a79;
  /* 00514a5b mov edx, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); edx = (u32)(M32(m_)); }
  /* 00514a61 lea eax, [edx + eax*8] */ eax = (u32)((u32)(edx + eax * 8u));
  /* 00514a64 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514a66 jne 0x514a79 */ if (!ZF_) goto L_00514a79;
  /* 00514a68 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00514a6a lea eax, [edi + 0x1a8] */ eax = (u32)((u32)(edi + 0x1a8u));
  /* 00514a70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514a71 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00514a74 call 0x527040 */ esp -= 4; M32(esp) = 0x514a79u; SAVEALL; F_00527040(c); ABI_CHECK(0x527040u, 0x514a74u); RETCHK(0x514a79u, 0x514a74u); LOADALL;
L_00514a79:;
  /* 00514a79 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00514a7c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00514a7e lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00514a81 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514a82 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x514a85u; SAVEALL; call_ind(c, t_); RETCHK(0x514a85u, 0x514a82u); LOADALL; }
  /* 00514a85 fld dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); FPUSH((double)MF32(m_)); }
  /* 00514a8b fadd dword ptr [edi + 0x1a4] */ { const u32 m_ = (u32)(edi + 0x1a4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00514a91 mov eax, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); eax = (u32)(M32(m_)); }
  /* 00514a97 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00514a9a add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00514a9d cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514a9f fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 00514aa1 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00514aa4 fadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00514aa7 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00514aaa jne 0x514a50 */ if (!ZF_) goto L_00514a50;
L_00514aac:;
  /* 00514aac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00514aad:;
  /* 00514aad pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00514aae mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00514ab0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514ab1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00514ac0(CPU *c) {
  NATIVE_HOOK(0x514ac0u) REGS; LOADALL;
L_00514ac0:;
  /* 00514ac0 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00514ac2 jmp dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00514ad0(CPU *c) {
  NATIVE_HOOK(0x514ad0u) REGS; LOADALL;
L_00514ad0:;
  /* 00514ad0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00514ad1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00514ad3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00514ad5 push 0x61bb58 */ { u32 v_ = 0x61bb58u; esp -= 4; M32(esp) = v_; }
  /* 00514ada mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00514ae0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514ae1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00514ae8 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00514aeb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00514aec mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00514aee mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00514af1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514af3 jne 0x514b08 */ if (!ZF_) goto L_00514b08;
  /* 00514af5 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00514af7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00514af8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00514afb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00514b02 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00514b04 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514b05 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00514b08:;
  /* 00514b08 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00514b0a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00514b0b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00514b0c call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x514b0fu; SAVEALL; call_ind(c, t_); RETCHK(0x514b0fu, 0x514b0cu); LOADALL; }
  /* 00514b0f push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 00514b14 mov esi, eax */ { esi = (u32)(eax); }
  /* 00514b16 call 0x560fd0 */ esp -= 4; M32(esp) = 0x514b1bu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x514b16u); RETCHK(0x514b1bu, 0x514b16u); LOADALL;
  /* 00514b1b mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00514b1e fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00514b21 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 00514b26 mov eax, esi */ { eax = (u32)(esi); }
  /* 00514b28 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00514b2b call 0x560fd0 */ esp -= 4; M32(esp) = 0x514b30u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x514b2bu); RETCHK(0x514b30u, 0x514b2bu); LOADALL;
  /* 00514b30 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00514b33 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00514b36 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 00514b3b mov eax, esi */ { eax = (u32)(esi); }
  /* 00514b3d fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00514b40 call 0x560fd0 */ esp -= 4; M32(esp) = 0x514b45u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x514b40u); RETCHK(0x514b45u, 0x514b40u); LOADALL;
  /* 00514b45 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00514b48 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00514b4b push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 00514b50 mov eax, esi */ { eax = (u32)(esi); }
  /* 00514b52 fadd dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00514b55 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00514b58 call 0x560fd0 */ esp -= 4; M32(esp) = 0x514b5du; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x514b58u); RETCHK(0x514b5du, 0x514b58u); LOADALL;
  /* 00514b5d mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00514b60 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00514b63 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00514b64 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 00514b69 fadd dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00514b6c fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00514b6f call 0x560ed0 */ esp -= 4; M32(esp) = 0x514b74u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x514b6fu); RETCHK(0x514b74u, 0x514b6fu); LOADALL;
  /* 00514b74 mov edi, eax */ { edi = (u32)(eax); }
  /* 00514b76 push 0x650194 */ { u32 v_ = 0x650194u; esp -= 4; M32(esp) = v_; }
  /* 00514b7b mov eax, esi */ { eax = (u32)(esi); }
  /* 00514b7d call 0x560fd0 */ esp -= 4; M32(esp) = 0x514b82u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x514b7du); RETCHK(0x514b82u, 0x514b7du); LOADALL;
  /* 00514b82 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00514b85 push 0x651ed0 */ { u32 v_ = 0x651ed0u; esp -= 4; M32(esp) = v_; }
  /* 00514b8a mov eax, esi */ { eax = (u32)(esi); }
  /* 00514b8c call 0x560fd0 */ esp -= 4; M32(esp) = 0x514b91u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x514b8cu); RETCHK(0x514b91u, 0x514b8cu); LOADALL;
  /* 00514b91 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00514b94 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00514b97 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00514b9a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514b9c fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00514b9f je 0x514bad */ if (ZF_) goto L_00514bad;
  /* 00514ba1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514ba2 lea esi, [ebp - 0x24] */ esi = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00514ba5 call 0x52d060 */ esp -= 4; M32(esp) = 0x514baau; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x514ba5u); RETCHK(0x514baau, 0x514ba5u); LOADALL;
  /* 00514baa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00514bad:;
  /* 00514bad fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 00514bb0 fsub dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00514bb3 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00514bb9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00514bbb test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00514bbe je 0x514bc8 */ if (ZF_) goto L_00514bc8;
  /* 00514bc0 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00514bc2 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 00514bc5 fsub dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00514bc8:;
  /* 00514bc8 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00514bca fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00514bcd mov eax, edi */ { eax = (u32)(edi); }
  /* 00514bcf mov dword ptr [ebp - 0x28], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0xfu); }
  /* 00514bd6 mov dword ptr [ebp - 0x2c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(esi); }
  /* 00514bd9 mov byte ptr [ebp - 0x3c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M8(m_) = (u8)(0x0u); }
  /* 00514bdd lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00514be0:;
  /* 00514be0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00514be2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00514be3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00514be5 jne 0x514be0 */ if (!ZF_) goto L_00514be0;
  /* 00514be7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00514be9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514bea push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00514beb lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00514bee call 0x404420 */ esp -= 4; M32(esp) = 0x514bf3u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x514beeu); RETCHK(0x514bf3u, 0x514beeu); LOADALL;
  /* 00514bf3 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00514bf6 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 00514bf9 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00514bfc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00514bfd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00514bfe push 0x41c00000 */ { u32 v_ = 0x41c00000u; esp -= 4; M32(esp) = v_; }
  /* 00514c03 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514c04 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00514c07 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00514c0a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00514c0b lea edi, [ebp - 0x24] */ edi = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00514c0e mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00514c10 call 0x514530 */ esp -= 4; M32(esp) = 0x514c15u; SAVEALL; F_00514530(c); ABI_CHECK(0x514530u, 0x514c10u); RETCHK(0x514c15u, 0x514c10u); LOADALL;
  /* 00514c15 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 00514c17 cmp dword ptr [ebp - 0x28], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514c1b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00514c1c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00514c1d jb 0x514c2b */ if (CF_) goto L_00514c2b;
  /* 00514c1f mov edx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edx = (u32)(M32(m_)); }
  /* 00514c22 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00514c23 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x514c28u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x514c23u); RETCHK(0x514c28u, 0x514c23u); LOADALL;
  /* 00514c28 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00514c2b:;
  /* 00514c2b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00514c2e mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 00514c30 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00514c31 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00514c38 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00514c3a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514c3b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00514c40(CPU *c) {
  NATIVE_HOOK(0x514c40u) REGS; LOADALL;
L_00514c40:;
  /* 00514c40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00514c41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00514c43 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00514c46 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00514c47 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00514c48 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00514c4a mov ecx, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); ecx = (u32)(M32(m_)); }
  /* 00514c50 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514c52 lea esi, [edi + 0x180] */ esi = (u32)((u32)(edi + 0x180u));
  /* 00514c58 jne 0x514c5e */ if (!ZF_) goto L_00514c5e;
  /* 00514c5a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00514c5c jmp 0x514c66 */ goto L_00514c66;
L_00514c5e:;
  /* 00514c5e mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00514c61 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00514c63 sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_00514c66:;
  /* 00514c66 cmp eax, dword ptr [edi + 0x1a0] */ { const u32 m_ = (u32)(edi + 0x1a0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514c6c jbe 0x514c77 */ if ((CF_|ZF_)) goto L_00514c77;
  /* 00514c6e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00514c6f or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00514c72 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00514c73 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00514c75 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514c76 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00514c77:;
  /* 00514c77 push 0x98 */ { u32 v_ = 0x98u; esp -= 4; M32(esp) = v_; }
  /* 00514c7c mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 00514c83 call 0x5fe934 */ esp -= 4; M32(esp) = 0x514c88u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x514c83u); RETCHK(0x514c88u, 0x514c83u); LOADALL;
  /* 00514c88 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00514c8b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514c8d je 0x514c98 */ if (ZF_) goto L_00514c98;
  /* 00514c8f mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00514c91 call 0x5168c0 */ esp -= 4; M32(esp) = 0x514c96u; SAVEALL; F_005168c0(c); ABI_CHECK(0x5168c0u, 0x514c91u); RETCHK(0x514c96u, 0x514c91u); LOADALL;
  /* 00514c96 jmp 0x514c9a */ goto L_00514c9a;
L_00514c98:;
  /* 00514c98 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00514c9a:;
  /* 00514c9a lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00514c9d mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00514ca0 call 0x514f50 */ esp -= 4; M32(esp) = 0x514ca5u; SAVEALL; F_00514f50(c); ABI_CHECK(0x514f50u, 0x514ca0u); RETCHK(0x514ca5u, 0x514ca0u); LOADALL;
  /* 00514ca5 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00514ca8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514caa jne 0x514cb7 */ if (!ZF_) goto L_00514cb7;
  /* 00514cac xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00514cae pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00514caf lea eax, [esi - 1] */ eax = (u32)((u32)(esi + 0xffffffffu));
  /* 00514cb2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00514cb3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00514cb5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514cb6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00514cb7:;
  /* 00514cb7 mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 00514cba sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00514cbc sar esi, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00514cbf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00514cc0 lea eax, [esi - 1] */ eax = (u32)((u32)(esi + 0xffffffffu));
  /* 00514cc3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00514cc4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00514cc6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514cc7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00514cd0(CPU *c) {
  NATIVE_HOOK(0x514cd0u) REGS; LOADALL;
L_00514cd0:;
  /* 00514cd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00514cd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00514cd3 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00514cd5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00514cd6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00514cd8 call dword ptr [eax + 0x11c] */ { const u32 m_ = (u32)(eax + 0x11cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x514cdeu; SAVEALL; call_ind(c, t_); RETCHK(0x514cdeu, 0x514cd8u); LOADALL; }
  /* 00514cde mov edi, eax */ { edi = (u32)(eax); }
  /* 00514ce0 cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514ce3 jne 0x514cec */ if (!ZF_) goto L_00514cec;
  /* 00514ce5 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00514ce7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00514ce8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514ce9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00514cec:;
  /* 00514cec mov ecx, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); ecx = (u32)(M32(m_)); }
  /* 00514cf2 lea eax, [ecx + edi*8] */ eax = (u32)((u32)(ecx + edi * 8u));
  /* 00514cf5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00514cf6 mov ebx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ebx = (u32)(M32(m_)); }
  /* 00514cf9 mov eax, dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); eax = (u32)(M32(m_)); }
  /* 00514cff mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00514d01 call 0x516a70 */ esp -= 4; M32(esp) = 0x514d06u; SAVEALL; F_00516a70(c); ABI_CHECK(0x516a70u, 0x514d01u); RETCHK(0x514d06u, 0x514d01u); LOADALL;
  /* 00514d06 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00514d09 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00514d0a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00514d0c call 0x516a00 */ esp -= 4; M32(esp) = 0x514d11u; SAVEALL; F_00516a00(c); ABI_CHECK(0x516a00u, 0x514d0cu); RETCHK(0x514d11u, 0x514d0cu); LOADALL;
  /* 00514d11 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00514d12 mov eax, edi */ { eax = (u32)(edi); }
  /* 00514d14 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00514d15 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514d16 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00514d20(CPU *c) {
  NATIVE_HOOK(0x514d20u) REGS; LOADALL;
L_00514d20:;
  /* 00514d20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00514d21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00514d23 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514d25 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00514d26 jl 0x514d58 */ if (LT_) goto L_00514d58;
  /* 00514d28 mov esi, dword ptr [ecx + 0x184] */ { const u32 m_ = (u32)(ecx + 0x184u); esi = (u32)(M32(m_)); }
  /* 00514d2e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514d30 je 0x514d58 */ if (ZF_) goto L_00514d58;
  /* 00514d32 mov eax, dword ptr [ecx + 0x188] */ { const u32 m_ = (u32)(ecx + 0x188u); eax = (u32)(M32(m_)); }
  /* 00514d38 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00514d3a sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00514d3d cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514d3f jae 0x514d58 */ if (!CF_) goto L_00514d58;
  /* 00514d41 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00514d44 mov eax, esi */ { eax = (u32)(esi); }
  /* 00514d46 lea eax, [eax + edx*8] */ eax = (u32)((u32)(eax + edx * 8u));
  /* 00514d49 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00514d4c call 0x516a60 */ esp -= 4; M32(esp) = 0x514d51u; SAVEALL; F_00516a60(c); ABI_CHECK(0x516a60u, 0x514d4cu); RETCHK(0x514d51u, 0x514d4cu); LOADALL;
  /* 00514d51 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00514d53 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00514d54 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514d55 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00514d58:;
  /* 00514d58 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00514d5a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00514d5b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514d5c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00514d60(CPU *c) {
  NATIVE_HOOK(0x514d60u) REGS; LOADALL;
L_00514d60:;
  /* 00514d60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00514d61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00514d63 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00514d66 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00514d67 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00514d69 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00514d6b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00514d6c call dword ptr [eax + 0x104] */ { const u32 m_ = (u32)(eax + 0x104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x514d72u; SAVEALL; call_ind(c, t_); RETCHK(0x514d72u, 0x514d6cu); LOADALL; }
  /* 00514d72 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00514d75 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00514d77 sub ecx, 0xd */ { u32 a_ = ecx, b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00514d7a je 0x514dec */ if (ZF_) goto L_00514dec;
  /* 00514d7c sub ecx, 0x19 */ { u32 a_ = ecx, b_ = 0x19u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00514d7f je 0x514dba */ if (ZF_) goto L_00514dba;
  /* 00514d81 sub ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00514d84 jne 0x514dd4 */ if (!ZF_) goto L_00514dd4;
  /* 00514d86 mov edx, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); edx = (u32)(M32(m_)); }
  /* 00514d8c test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514d8e jne 0x514d94 */ if (!ZF_) goto L_00514d94;
  /* 00514d90 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00514d92 jmp 0x514d9f */ goto L_00514d9f;
L_00514d94:;
  /* 00514d94 mov ecx, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); ecx = (u32)(M32(m_)); }
  /* 00514d9a sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00514d9c sar ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
L_00514d9f:;
  /* 00514d9f dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00514da0 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514da2 jae 0x514dd4 */ if (!CF_) goto L_00514dd4;
  /* 00514da4 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00514da6 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00514da7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514da8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00514daa call dword ptr [edx + 0x100] */ { const u32 m_ = (u32)(edx + 0x100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x514db0u; SAVEALL; call_ind(c, t_); RETCHK(0x514db0u, 0x514daau); LOADALL; }
  /* 00514db0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00514db1 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00514db3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00514db4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00514db6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514db7 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00514dba:;
  /* 00514dba test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514dbc jle 0x514dd4 */ if ((ZF_|LT_)) goto L_00514dd4;
  /* 00514dbe mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00514dc0 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00514dc1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514dc2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00514dc4 call dword ptr [edx + 0x100] */ { const u32 m_ = (u32)(edx + 0x100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x514dcau; SAVEALL; call_ind(c, t_); RETCHK(0x514dcau, 0x514dc4u); LOADALL; }
  /* 00514dca pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00514dcb mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00514dcd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00514dce mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00514dd0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514dd1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00514dd4:;
  /* 00514dd4 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00514dd7 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00514dda push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514ddb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00514ddc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00514ddd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00514ddf call 0x508230 */ esp -= 4; M32(esp) = 0x514de4u; SAVEALL; F_00508230(c); ABI_CHECK(0x508230u, 0x514ddfu); RETCHK(0x514de4u, 0x514ddfu); LOADALL;
  /* 00514de4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00514de5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00514de6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00514de8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514de9 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00514dec:;
  /* 00514dec mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00514dee lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00514df1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00514df2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514df3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00514df5 call dword ptr [edx + 0xfc] */ { const u32 m_ = (u32)(edx + 0xfcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x514dfbu; SAVEALL; call_ind(c, t_); RETCHK(0x514dfbu, 0x514df5u); LOADALL; }
  /* 00514dfb fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00514dfe fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00514e01 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00514e03 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00514e06 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514e07 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00514e0d push 0xfffffba9 */ { u32 v_ = 0xfffffba9u; esp -= 4; M32(esp) = v_; }
  /* 00514e12 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00514e14 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00514e17 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00514e1a fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00514e1d fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00514e23 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00514e26 call dword ptr [edx + 0x6c] */ { const u32 m_ = (u32)(edx + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x514e29u; SAVEALL; call_ind(c, t_); RETCHK(0x514e29u, 0x514e26u); LOADALL; }
  /* 00514e29 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00514e2b lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00514e2e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514e2f push 0xfffffba9 */ { u32 v_ = 0xfffffba9u; esp -= 4; M32(esp) = v_; }
  /* 00514e34 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00514e36 call dword ptr [edx + 0x70] */ { const u32 m_ = (u32)(edx + 0x70u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x514e39u; SAVEALL; call_ind(c, t_); RETCHK(0x514e39u, 0x514e36u); LOADALL; }
  /* 00514e39 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00514e3a mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00514e3c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00514e3d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00514e3f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514e40 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00514e50(CPU *c) {
  NATIVE_HOOK(0x514e50u) REGS; LOADALL;
L_00514e50:;
  /* 00514e50 mov ecx, dword ptr [eax + 0x184] */ { const u32 m_ = (u32)(eax + 0x184u); ecx = (u32)(M32(m_)); }
  /* 00514e56 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514e58 jne 0x514e5d */ if (!ZF_) goto L_00514e5d;
  /* 00514e5a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00514e5c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00514e5d:;
  /* 00514e5d mov eax, dword ptr [eax + 0x188] */ { const u32 m_ = (u32)(eax + 0x188u); eax = (u32)(M32(m_)); }
  /* 00514e63 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00514e65 sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00514e68 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00514e70(CPU *c) {
  NATIVE_HOOK(0x514e70u) REGS; LOADALL;
L_00514e70:;
  /* 00514e70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00514e71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00514e73 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00514e75 push 0x625f68 */ { u32 v_ = 0x625f68u; esp -= 4; M32(esp) = v_; }
  /* 00514e7a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00514e80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514e81 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00514e88 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00514e8b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00514e90 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00514e93 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00514e95 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514e97 jne 0x514ea1 */ if (!ZF_) goto L_00514ea1;
  /* 00514e99 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00514e9c jmp 0x514f2f */ goto L_00514f2f;
L_00514ea1:;
  /* 00514ea1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00514ea2 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00514ea4 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 00514eab mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00514eae mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 00514eb2 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
L_00514eb5:;
  /* 00514eb5 mov ecx, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); ecx = (u32)(M32(m_)); }
  /* 00514ebb test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514ebd je 0x514f19 */ if (ZF_) goto L_00514f19;
  /* 00514ebf mov eax, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); eax = (u32)(M32(m_)); }
  /* 00514ec5 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00514ec7 sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00514eca cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514ecc jae 0x514f19 */ if (!CF_) goto L_00514f19;
  /* 00514ece mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00514ed0 lea eax, [eax + esi*8] */ eax = (u32)((u32)(eax + esi * 8u));
  /* 00514ed3 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00514ed6 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00514ed9 call 0x516a60 */ esp -= 4; M32(esp) = 0x514edeu; SAVEALL; F_00516a60(c); ABI_CHECK(0x516a60u, 0x514ed9u); RETCHK(0x514edeu, 0x514ed9u); LOADALL;
  /* 00514ede mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00514ee0 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00514ee3:;
  /* 00514ee3 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00514ee5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00514ee6 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00514ee8 jne 0x514ee3 */ if (!ZF_) goto L_00514ee3;
  /* 00514eea mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00514eed sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00514eef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514ef0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00514ef1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00514ef2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00514ef4 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00514ef7 call 0x405de0 */ esp -= 4; M32(esp) = 0x514efcu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x514ef7u); RETCHK(0x514efcu, 0x514ef7u); LOADALL;
  /* 00514efc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514efe je 0x514f03 */ if (ZF_) goto L_00514f03;
  /* 00514f00 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00514f01 jmp 0x514eb5 */ goto L_00514eb5;
L_00514f03:;
  /* 00514f03 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514f07 jb 0x514f15 */ if (CF_) goto L_00514f15;
  /* 00514f09 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 00514f0c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00514f0d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x514f12u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x514f0du); RETCHK(0x514f12u, 0x514f0du); LOADALL;
  /* 00514f12 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00514f15:;
  /* 00514f15 mov eax, esi */ { eax = (u32)(esi); }
  /* 00514f17 jmp 0x514f2e */ goto L_00514f2e;
L_00514f19:;
  /* 00514f19 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514f1d jb 0x514f2b */ if (CF_) goto L_00514f2b;
  /* 00514f1f mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00514f22 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514f23 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x514f28u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x514f23u); RETCHK(0x514f28u, 0x514f23u); LOADALL;
  /* 00514f28 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00514f2b:;
  /* 00514f2b or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00514f2e:;
  /* 00514f2e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00514f2f:;
  /* 00514f2f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00514f32 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00514f39 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00514f3c call 0x61af31 */ esp -= 4; M32(esp) = 0x514f41u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x514f3cu); RETCHK(0x514f41u, 0x514f3cu); LOADALL;
  /* 00514f41 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00514f43 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514f44 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00514f50(CPU *c) {
  NATIVE_HOOK(0x514f50u) REGS; LOADALL;
L_00514f50:;
  /* 00514f50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00514f51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00514f53 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00514f54 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00514f55 mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 00514f58 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514f5a jne 0x514f60 */ if (!ZF_) goto L_00514f60;
  /* 00514f5c xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00514f5e jmp 0x514f68 */ goto L_00514f68;
L_00514f60:;
  /* 00514f60 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00514f63 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00514f65 sar ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
L_00514f68:;
  /* 00514f68 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00514f6a je 0x514f99 */ if (ZF_) goto L_00514f99;
  /* 00514f6c mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00514f6f sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00514f71 sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00514f74 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514f76 jae 0x514f99 */ if (!CF_) goto L_00514f99;
  /* 00514f78 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00514f7b mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 00514f7e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514f7f mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00514f84 mov eax, edi */ { eax = (u32)(edi); }
  /* 00514f86 call 0x5587d0 */ esp -= 4; M32(esp) = 0x514f8bu; SAVEALL; F_005587d0(c); ABI_CHECK(0x5587d0u, 0x514f86u); RETCHK(0x514f8bu, 0x514f86u); LOADALL;
  /* 00514f8b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00514f8e add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00514f91 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 00514f94 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00514f95 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00514f97 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514f98 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00514f99:;
  /* 00514f99 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00514f9c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00514f9d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00514f9e mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00514fa3 mov edx, esi */ { edx = (u32)(esi); }
  /* 00514fa5 call 0x481130 */ esp -= 4; M32(esp) = 0x514faau; SAVEALL; F_00481130(c); ABI_CHECK(0x481130u, 0x514fa5u); RETCHK(0x514faau, 0x514fa5u); LOADALL;
  /* 00514faa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00514fab mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00514fad pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514fae ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00514fb0(CPU *c) {
  NATIVE_HOOK(0x514fb0u) REGS; LOADALL;
L_00514fb0:;
  /* 00514fb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00514fb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00514fb3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00514fb4 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 00514fb7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00514fb8 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 00514fbb lea ecx, [ebx + 8] */ ecx = (u32)((u32)(ebx + 0x8u));
  /* 00514fbe cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514fc0 je 0x514fd9 */ if (ZF_) goto L_00514fd9;
  /* 00514fc2 lea edx, [ecx - 8] */ edx = (u32)((u32)(ecx + 0xfffffff8u));
L_00514fc5:;
  /* 00514fc5 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00514fc7 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 00514fc9 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00514fcc mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00514fcf add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00514fd2 add edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00514fd5 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00514fd7 jne 0x514fc5 */ if (!ZF_) goto L_00514fc5;
L_00514fd9:;
  /* 00514fd9 add dword ptr [edi + 8], -8 */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M32(m_), b_ = 0xfffffff8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00514fdd mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00514fe0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00514fe1 mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
  /* 00514fe3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00514fe4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00514fe5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00514ff0(CPU *c) {
  NATIVE_HOOK(0x514ff0u) REGS; LOADALL;
L_00514ff0:;
  /* 00514ff0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00514ff1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00514ff3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00514ff5 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 00514ffa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00515000 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00515001 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00515008 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00515009 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051500a push 0x515070 */ { u32 v_ = 0x515070u; esp -= 4; M32(esp) = v_; }
  /* 0051500f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00515012 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00515014 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00515016 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00515019 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0051501c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051501e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051501f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00515022 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00515029 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0051502c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051502d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00515030 call 0x404140 */ esp -= 4; M32(esp) = 0x515035u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x515030u); RETCHK(0x515035u, 0x515030u); LOADALL;
  /* 00515035 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00515038 call 0x405c00 */ esp -= 4; M32(esp) = 0x51503du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x515038u); RETCHK(0x51503du, 0x515038u); LOADALL;
  /* 0051503d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0051503f call 0x405c80 */ esp -= 4; M32(esp) = 0x515044u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x51503fu); RETCHK(0x515044u, 0x51503fu); LOADALL;
  /* 00515044 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515048 jb 0x515056 */ if (CF_) goto L_00515056;
  /* 0051504a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051504d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051504e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x515053u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51504eu); RETCHK(0x515053u, 0x51504eu); LOADALL;
  /* 00515053 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00515056:;
  /* 00515056 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00515059 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051505b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00515062 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00515063 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00515065 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00515066 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00515070(CPU *c) {
  NATIVE_HOOK(0x515070u) REGS; LOADALL;
L_00515070:;
  /* 00515070 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00515071 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00515073 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00515075 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0051507a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00515080 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00515081 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00515088 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00515089 push 0x1b8 */ { u32 v_ = 0x1b8u; esp -= 4; M32(esp) = v_; }
  /* 0051508e call 0x5fe934 */ esp -= 4; M32(esp) = 0x515093u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x51508eu); RETCHK(0x515093u, 0x51508eu); LOADALL;
  /* 00515093 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00515096 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00515099 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051509b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005150a2 je 0x5150ba */ if (ZF_) goto L_005150ba;
  /* 005150a4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005150a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005150a7 call 0x5143f0 */ esp -= 4; M32(esp) = 0x5150acu; SAVEALL; F_005143f0(c); ABI_CHECK(0x5143f0u, 0x5150a7u); RETCHK(0x5150acu, 0x5150a7u); LOADALL;
  /* 005150ac mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005150af mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005150b6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005150b8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005150b9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005150ba:;
  /* 005150ba mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005150bd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005150bf mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005150c6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005150c8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005150c9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005150d0(CPU *c) {
  NATIVE_HOOK(0x5150d0u) REGS; LOADALL;
L_005150d0:;
  /* 005150d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005150d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005150d3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005150d9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005150db push 0x61dd22 */ { u32 v_ = 0x61dd22u; esp -= 4; M32(esp) = v_; }
  /* 005150e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005150e1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005150e4 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005150eb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005150ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005150ed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005150ee mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005150f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005150f2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005150f3 call 0x506b60 */ esp -= 4; M32(esp) = 0x5150f8u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x5150f3u); RETCHK(0x5150f8u, 0x5150f3u); LOADALL;
  /* 005150f8 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005150fa mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005150fd lea esi, [edi + 0x180] */ esi = (u32)((u32)(edi + 0x180u));
  /* 00515103 mov dword ptr [edi], 0x651ee8 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x651ee8u); }
  /* 00515109 call 0x5267c0 */ esp -= 4; M32(esp) = 0x51510eu; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x515109u); RETCHK(0x51510eu, 0x515109u); LOADALL;
  /* 0051510e mov dword ptr [edi + 0x218], ebx */ { const u32 m_ = (u32)(edi + 0x218u); M32(m_) = (u32)(ebx); }
  /* 00515114 mov dword ptr [edi + 0x21c], ebx */ { const u32 m_ = (u32)(edi + 0x21cu); M32(m_) = (u32)(ebx); }
  /* 0051511a mov dword ptr [edi + 0x220], ebx */ { const u32 m_ = (u32)(edi + 0x220u); M32(m_) = (u32)(ebx); }
  /* 00515120 mov dword ptr [edi + 0x228], ebx */ { const u32 m_ = (u32)(edi + 0x228u); M32(m_) = (u32)(ebx); }
  /* 00515126 mov dword ptr [edi + 0x22c], ebx */ { const u32 m_ = (u32)(edi + 0x22cu); M32(m_) = (u32)(ebx); }
  /* 0051512c mov dword ptr [edi + 0x230], ebx */ { const u32 m_ = (u32)(edi + 0x230u); M32(m_) = (u32)(ebx); }
  /* 00515132 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 00515136 mov word ptr [edi + 0x234], 0x30 */ { const u32 m_ = (u32)(edi + 0x234u); M16(m_) = (u16)(0x30u); }
  /* 0051513f mov edx, dword ptr [0x6501e8] */ { const u32 m_ = (u32)(0x6501e8u); edx = (u32)(M32(m_)); }
  /* 00515145 lea ecx, [edi + 0x244] */ ecx = (u32)((u32)(edi + 0x244u));
  /* 0051514b mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0051514d mov al, byte ptr [0x6501ec] */ { const u32 m_ = (u32)(0x6501ecu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00515152 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00515155 mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 0051515a push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0051515c mov esi, 1 */ { esi = (u32)(0x1u); }
  /* 00515161 mov dword ptr [edi + 0x264], 0x18 */ { const u32 m_ = (u32)(edi + 0x264u); M32(m_) = (u32)(0x18u); }
  /* 0051516b mov dword ptr [edi + 0x268], esi */ { const u32 m_ = (u32)(edi + 0x268u); M32(m_) = (u32)(esi); }
  /* 00515171 mov dword ptr [edi + 0x26c], eax */ { const u32 m_ = (u32)(edi + 0x26cu); M32(m_) = (u32)(eax); }
  /* 00515177 mov dword ptr [edi + 0x270], eax */ { const u32 m_ = (u32)(edi + 0x270u); M32(m_) = (u32)(eax); }
  /* 0051517d mov dword ptr [edi + 0x274], ebx */ { const u32 m_ = (u32)(edi + 0x274u); M32(m_) = (u32)(ebx); }
  /* 00515183 mov dword ptr [edi + 0x278], ebx */ { const u32 m_ = (u32)(edi + 0x278u); M32(m_) = (u32)(ebx); }
  /* 00515189 mov dword ptr [edi + 0x27c], 0xffffffff */ { const u32 m_ = (u32)(edi + 0x27cu); M32(m_) = (u32)(0xffffffffu); }
  /* 00515193 mov dword ptr [edi + 0x280], 0xaf000000 */ { const u32 m_ = (u32)(edi + 0x280u); M32(m_) = (u32)(0xaf000000u); }
  /* 0051519d mov dword ptr [edi + 0x284], 0x3f800000 */ { const u32 m_ = (u32)(edi + 0x284u); M32(m_) = (u32)(0x3f800000u); }
  /* 005151a7 push 0x651ffc */ { u32 v_ = 0x651ffcu; esp -= 4; M32(esp) = v_; }
  /* 005151ac lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 005151af mov byte ptr [edi + 0x3c], 1 */ { const u32 m_ = (u32)(edi + 0x3cu); M8(m_) = (u8)(0x1u); }
  /* 005151b3 call 0x404420 */ esp -= 4; M32(esp) = 0x5151b8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5151b3u); RETCHK(0x5151b8u, 0x5151b3u); LOADALL;
  /* 005151b8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005151bb mov al, 0xff */ { eax = (eax & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 005151bd mov byte ptr [edi + 0x28f], al */ { const u32 m_ = (u32)(edi + 0x28fu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005151c3 mov byte ptr [edi + 0x293], al */ { const u32 m_ = (u32)(edi + 0x293u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005151c9 mov byte ptr [edi + 0x294], al */ { const u32 m_ = (u32)(edi + 0x294u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005151cf mov byte ptr [edi + 0x295], al */ { const u32 m_ = (u32)(edi + 0x295u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005151d5 mov byte ptr [edi + 0x296], al */ { const u32 m_ = (u32)(edi + 0x296u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005151db mov byte ptr [edi + 0x297], al */ { const u32 m_ = (u32)(edi + 0x297u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005151e1 mov byte ptr [edi + 0x29b], al */ { const u32 m_ = (u32)(edi + 0x29bu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005151e7 mov dword ptr [edi + 0x29c], ebx */ { const u32 m_ = (u32)(edi + 0x29cu); M32(m_) = (u32)(ebx); }
  /* 005151ed mov dword ptr [edi + 0x288], ebx */ { const u32 m_ = (u32)(edi + 0x288u); M32(m_) = (u32)(ebx); }
  /* 005151f3 mov dword ptr [edi + 0x2a0], ebx */ { const u32 m_ = (u32)(edi + 0x2a0u); M32(m_) = (u32)(ebx); }
  /* 005151f9 mov dword ptr [edi + 0x204], esi */ { const u32 m_ = (u32)(edi + 0x204u); M32(m_) = (u32)(esi); }
  /* 005151ff mov byte ptr [edi + 0x28c], 1 */ { const u32 m_ = (u32)(edi + 0x28cu); M8(m_) = (u8)(0x1u); }
  /* 00515206 mov byte ptr [edi + 0x28d], 1 */ { const u32 m_ = (u32)(edi + 0x28du); M8(m_) = (u8)(0x1u); }
  /* 0051520d mov byte ptr [edi + 0x28e], 0x53 */ { const u32 m_ = (u32)(edi + 0x28eu); M8(m_) = (u8)(0x53u); }
  /* 00515214 mov byte ptr [edi + 0x290], 0x34 */ { const u32 m_ = (u32)(edi + 0x290u); M8(m_) = (u8)(0x34u); }
  /* 0051521b mov byte ptr [edi + 0x291], 0x43 */ { const u32 m_ = (u32)(edi + 0x291u); M8(m_) = (u8)(0x43u); }
  /* 00515222 mov byte ptr [edi + 0x292], 0xa7 */ { const u32 m_ = (u32)(edi + 0x292u); M8(m_) = (u8)(0xa7u); }
  /* 00515229 mov byte ptr [edi + 0x298], 0x26 */ { const u32 m_ = (u32)(edi + 0x298u); M8(m_) = (u8)(0x26u); }
  /* 00515230 mov byte ptr [edi + 0x299], 0x39 */ { const u32 m_ = (u32)(edi + 0x299u); M8(m_) = (u8)(0x39u); }
  /* 00515237 mov byte ptr [edi + 0x29a], 0xc6 */ { const u32 m_ = (u32)(edi + 0x29au); M8(m_) = (u8)(0xc6u); }
  /* 0051523e mov eax, edi */ { eax = (u32)(edi); }
  /* 00515240 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00515241 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00515242 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00515249 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051524a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051524c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051524d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00515250(CPU *c) {
  NATIVE_HOOK(0x515250u) REGS; LOADALL;
L_00515250:;
  /* 00515250 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00515251 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00515253 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515254 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00515256 call 0x515280 */ esp -= 4; M32(esp) = 0x51525bu; SAVEALL; F_00515280(c); ABI_CHECK(0x515280u, 0x515256u); RETCHK(0x51525bu, 0x515256u); LOADALL;
  /* 0051525b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051525f je 0x51526a */ if (ZF_) goto L_0051526a;
  /* 00515261 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515262 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x515267u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x515262u); RETCHK(0x515267u, 0x515262u); LOADALL;
  /* 00515267 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051526a:;
  /* 0051526a mov eax, esi */ { eax = (u32)(esi); }
  /* 0051526c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051526d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051526e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00515253(CPU *c) {
  NATIVE_HOOK(0x515253u) REGS; LOADALL;
L_00515253:;
  /* 00515253 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515254 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00515256 call 0x515280 */ esp -= 4; M32(esp) = 0x51525bu; SAVEALL; F_00515280(c); ABI_CHECK(0x515280u, 0x515256u); RETCHK(0x51525bu, 0x515256u); LOADALL;
  /* 0051525b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051525f je 0x51526a */ if (ZF_) goto L_0051526a;
  /* 00515261 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515262 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x515267u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x515262u); RETCHK(0x515267u, 0x515262u); LOADALL;
  /* 00515267 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051526a:;
  /* 0051526a mov eax, esi */ { eax = (u32)(esi); }
  /* 0051526c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051526d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051526e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00515280(CPU *c) {
  NATIVE_HOOK(0x515280u) REGS; LOADALL;
L_00515280:;
  /* 00515280 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515281 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00515283 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00515284 mov dword ptr [esi], 0x651ee8 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x651ee8u); }
  /* 0051528a mov eax, dword ptr [esi + 0x228] */ { const u32 m_ = (u32)(esi + 0x228u); eax = (u32)(M32(m_)); }
  /* 00515290 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00515292 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515294 je 0x51529f */ if (ZF_) goto L_0051529f;
  /* 00515296 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00515297 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51529cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x515297u); RETCHK(0x51529cu, 0x515297u); LOADALL;
  /* 0051529c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051529f:;
  /* 0051529f mov dword ptr [esi + 0x228], edi */ { const u32 m_ = (u32)(esi + 0x228u); M32(m_) = (u32)(edi); }
  /* 005152a5 mov dword ptr [esi + 0x22c], edi */ { const u32 m_ = (u32)(esi + 0x22cu); M32(m_) = (u32)(edi); }
  /* 005152ab mov dword ptr [esi + 0x230], edi */ { const u32 m_ = (u32)(esi + 0x230u); M32(m_) = (u32)(edi); }
  /* 005152b1 mov eax, dword ptr [esi + 0x218] */ { const u32 m_ = (u32)(esi + 0x218u); eax = (u32)(M32(m_)); }
  /* 005152b7 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005152b9 je 0x5152c4 */ if (ZF_) goto L_005152c4;
  /* 005152bb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005152bc call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5152c1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5152bcu); RETCHK(0x5152c1u, 0x5152bcu); LOADALL;
  /* 005152c1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005152c4:;
  /* 005152c4 lea ecx, [esi + 0x180] */ ecx = (u32)((u32)(esi + 0x180u));
  /* 005152ca mov dword ptr [esi + 0x218], edi */ { const u32 m_ = (u32)(esi + 0x218u); M32(m_) = (u32)(edi); }
  /* 005152d0 mov dword ptr [esi + 0x21c], edi */ { const u32 m_ = (u32)(esi + 0x21cu); M32(m_) = (u32)(edi); }
  /* 005152d6 mov dword ptr [esi + 0x220], edi */ { const u32 m_ = (u32)(esi + 0x220u); M32(m_) = (u32)(edi); }
  /* 005152dc call 0x5267e0 */ esp -= 4; M32(esp) = 0x5152e1u; SAVEALL; F_005267e0(c); ABI_CHECK(0x5267e0u, 0x5152dcu); RETCHK(0x5152e1u, 0x5152dcu); LOADALL;
  /* 005152e1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005152e2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005152e4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005152e5 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_005152f0(CPU *c) {
  NATIVE_HOOK(0x5152f0u) REGS; LOADALL;
L_005152f0:;
  /* 005152f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005152f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005152f3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005152f6 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005152f9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005152fa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005152fb mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005152fd lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 00515300 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00515303 call 0x52cee0 */ esp -= 4; M32(esp) = 0x515308u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x515303u); RETCHK(0x515308u, 0x515303u); LOADALL;
  /* 00515308 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051530b push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051530d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051530f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00515310 lea ecx, [edi + 0x20] */ ecx = (u32)((u32)(edi + 0x20u));
  /* 00515313 call 0x404140 */ esp -= 4; M32(esp) = 0x515318u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x515313u); RETCHK(0x515318u, 0x515313u); LOADALL;
  /* 00515318 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0051531b push 0x651fe4 */ { u32 v_ = 0x651fe4u; esp -= 4; M32(esp) = v_; }
  /* 00515320 mov dword ptr [edi + 0x29c], ecx */ { const u32 m_ = (u32)(edi + 0x29cu); M32(m_) = (u32)(ecx); }
  /* 00515326 call 0x5ab540 */ esp -= 4; M32(esp) = 0x51532bu; SAVEALL; F_005ab540(c); ABI_CHECK(0x5ab540u, 0x515326u); RETCHK(0x51532bu, 0x515326u); LOADALL;
  /* 0051532b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051532e mov dword ptr [edi + 0x288], eax */ { const u32 m_ = (u32)(edi + 0x288u); M32(m_) = (u32)(eax); }
  /* 00515334 call 0x52a850 */ esp -= 4; M32(esp) = 0x515339u; SAVEALL; F_0052a850(c); ABI_CHECK(0x52a850u, 0x515334u); RETCHK(0x515339u, 0x515334u); LOADALL;
  /* 00515339 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0051533c mov edx, eax */ { edx = (u32)(eax); }
  /* 0051533e call 0x52a8b0 */ esp -= 4; M32(esp) = 0x515343u; SAVEALL; F_0052a8b0(c); ABI_CHECK(0x52a8b0u, 0x51533eu); RETCHK(0x515343u, 0x51533eu); LOADALL;
  /* 00515343 add edi, 0x234 */ { u32 a_ = edi, b_ = 0x234u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00515349 mov esi, eax */ { esi = (u32)(eax); }
  /* 0051534b mov ecx, 0x15 */ { ecx = (u32)(0x15u); }
  /* 00515350 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00515352 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00515353 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00515355 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00515356 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00515358 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00515359 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00515360(CPU *c) {
  NATIVE_HOOK(0x515360u) REGS; LOADALL;
L_00515360:;
  /* 00515360 mov eax, edx */ { eax = (u32)(edx); }
  /* 00515362 call 0x515440 */ esp -= 4; M32(esp) = 0x515367u; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x515362u); RETCHK(0x515367u, 0x515362u); LOADALL;
  /* 00515367 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515369 jle 0x515390 */ if ((ZF_|LT_)) goto L_00515390;
  /* 0051536b mov eax, dword ptr [edx + 0x218] */ { const u32 m_ = (u32)(edx + 0x218u); eax = (u32)(M32(m_)); }
  /* 00515371 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00515373 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515375 je 0x515390 */ if (ZF_) goto L_00515390;
  /* 00515377 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051537a test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051537c je 0x515390 */ if (ZF_) goto L_00515390;
  /* 0051537e mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00515380 mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00515383 mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 00515386 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00515387 and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0051538a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051538c sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0051538f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00515390:;
  /* 00515390 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00515392 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005153a0(CPU *c) {
  NATIVE_HOOK(0x5153a0u) REGS; LOADALL;
L_005153a0:;
  /* 005153a0 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005153a2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005153a3 mov esi, eax */ { esi = (u32)(eax); }
  /* 005153a5 jl 0x5153cf */ if (LT_) goto L_005153cf;
  /* 005153a7 call 0x515440 */ esp -= 4; M32(esp) = 0x5153acu; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x5153a7u); RETCHK(0x5153acu, 0x5153a7u); LOADALL;
  /* 005153ac cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005153ae jge 0x5153cf */ if (!LT_) goto L_005153cf;
  /* 005153b0 mov eax, dword ptr [esi + 0x218] */ { const u32 m_ = (u32)(esi + 0x218u); eax = (u32)(M32(m_)); }
  /* 005153b6 cmp dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005153b9 je 0x5153cf */ if (ZF_) goto L_005153cf;
  /* 005153bb mov ecx, dword ptr [eax + edx*4] */ { const u32 m_ = (u32)(eax + edx * 4u); ecx = (u32)(M32(m_)); }
  /* 005153be mov esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); esi = (u32)(M32(m_)); }
  /* 005153c1 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005153c3 je 0x5153cf */ if (ZF_) goto L_005153cf;
  /* 005153c5 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005153c7 mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005153ca mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 005153cd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005153ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005153cf:;
  /* 005153cf xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005153d1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005153d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005153e0(CPU *c) {
  NATIVE_HOOK(0x5153e0u) REGS; LOADALL;
L_005153e0:;
  /* 005153e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005153e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005153e3 mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
  /* 005153e9 fld dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 005153ec fsub dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005153ef fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005153f5 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005153f7 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005153fa je 0x515404 */ if (ZF_) goto L_00515404;
  /* 005153fc fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005153fe fld dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 00515401 fsub dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00515404:;
  /* 00515404 mov edx, esi */ { edx = (u32)(esi); }
  /* 00515406 fstp dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00515409 call 0x515360 */ esp -= 4; M32(esp) = 0x51540eu; SAVEALL; F_00515360(c); ABI_CHECK(0x515360u, 0x515409u); RETCHK(0x51540eu, 0x515409u); LOADALL;
  /* 0051540e mov ecx, dword ptr [esi + 0x29c] */ { const u32 m_ = (u32)(esi + 0x29cu); ecx = (u32)(M32(m_)); }
  /* 00515414 imul ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00515418 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051541a mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0051541d fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00515420 fst dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); MF32(m_) = (float)ST(0); }
  /* 00515423 fild dword ptr [esi + 0x29c] */ { const u32 m_ = (u32)(esi + 0x29cu); FPUSH((double)(s32)M32(m_)); }
  /* 00515429 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0051542b fstp dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051542e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00515430 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00515431 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00515440(CPU *c) {
  NATIVE_HOOK(0x515440u) REGS; LOADALL;
L_00515440:;
  /* 00515440 mov ecx, dword ptr [eax + 0x218] */ { const u32 m_ = (u32)(eax + 0x218u); ecx = (u32)(M32(m_)); }
  /* 00515446 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515448 jne 0x51544d */ if (!ZF_) goto L_0051544d;
  /* 0051544a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051544c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051544d:;
  /* 0051544d mov eax, dword ptr [eax + 0x21c] */ { const u32 m_ = (u32)(eax + 0x21cu); eax = (u32)(M32(m_)); }
  /* 00515453 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00515455 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00515458 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00515460(CPU *c) {
  NATIVE_HOOK(0x515460u) REGS; LOADALL;
L_00515460:;
  /* 00515460 mov ecx, dword ptr [eax + 0x228] */ { const u32 m_ = (u32)(eax + 0x228u); ecx = (u32)(M32(m_)); }
  /* 00515466 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515468 jne 0x51546d */ if (!ZF_) goto L_0051546d;
  /* 0051546a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051546c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051546d:;
  /* 0051546d mov eax, dword ptr [eax + 0x22c] */ { const u32 m_ = (u32)(eax + 0x22cu); eax = (u32)(M32(m_)); }
  /* 00515473 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00515475 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00515478 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00515480(CPU *c) {
  NATIVE_HOOK(0x515480u) REGS; LOADALL;
L_00515480:;
  /* 00515480 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00515481 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00515483 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00515484 fld dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 00515487 fsub dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051548a fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00515490 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00515492 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00515495 je 0x51549f */ if (ZF_) goto L_0051549f;
  /* 00515497 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00515499 fld dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 0051549c fsub dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051549f:;
  /* 0051549f mov edx, esi */ { edx = (u32)(esi); }
  /* 005154a1 call 0x515360 */ esp -= 4; M32(esp) = 0x5154a6u; SAVEALL; F_00515360(c); ABI_CHECK(0x515360u, 0x5154a1u); RETCHK(0x5154a6u, 0x5154a1u); LOADALL;
  /* 005154a6 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005154a9 fisub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)(s32)M32(m_)); }
  /* 005154ac fidiv dword ptr [esi + 0x29c] */ { const u32 m_ = (u32)(esi + 0x29cu); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 005154b2 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 005154b4 call 0x61b154 */ esp -= 4; M32(esp) = 0x5154b9u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5154b4u); RETCHK(0x5154b9u, 0x5154b4u); LOADALL;
  /* 005154b9 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005154bc fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 005154bf fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 005154c1 fcomp dword ptr [0x656ef4] */ { const u32 m_ = (u32)(0x656ef4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005154c7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005154c9 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005154cc jne 0x5154d4 */ if (!ZF_) goto L_005154d4;
  /* 005154ce fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_005154d4:;
  /* 005154d4 call 0x61b154 */ esp -= 4; M32(esp) = 0x5154d9u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5154d4u); RETCHK(0x5154d9u, 0x5154d4u); LOADALL;
  /* 005154d9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005154db pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005154dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005154e0(CPU *c) {
  NATIVE_HOOK(0x5154e0u) REGS; LOADALL;
L_005154e0:;
  /* 005154e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005154e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005154e2 mov esi, eax */ { esi = (u32)(eax); }
  /* 005154e4 call 0x515460 */ esp -= 4; M32(esp) = 0x5154e9u; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x5154e4u); RETCHK(0x5154e9u, 0x5154e4u); LOADALL;
  /* 005154e9 mov edi, eax */ { edi = (u32)(eax); }
  /* 005154eb call 0x515480 */ esp -= 4; M32(esp) = 0x5154f0u; SAVEALL; F_00515480(c); ABI_CHECK(0x515480u, 0x5154ebu); RETCHK(0x5154f0u, 0x5154ebu); LOADALL;
  /* 005154f0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005154f2 mov eax, edi */ { eax = (u32)(edi); }
  /* 005154f4 cdq */ edx = (u32)((s32)eax >> 31);
  /* 005154f5 idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x5154f5u); eax = q_; edx = r_; }
  /* 005154f7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005154f8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005154f9 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005154fc jg 0x515503 */ if (!(ZF_|LT_)) goto L_00515503;
  /* 005154fe mov eax, 1 */ { eax = (u32)(0x1u); }
L_00515503:;
  /* 00515503 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00515510(CPU *c) {
  NATIVE_HOOK(0x515510u) REGS; LOADALL;
L_00515510:;
  /* 00515510 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515511 mov esi, eax */ { esi = (u32)(eax); }
  /* 00515513 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00515515 call 0x515570 */ esp -= 4; M32(esp) = 0x51551au; SAVEALL; F_00515570(c); ABI_CHECK(0x515570u, 0x515515u); RETCHK(0x51551au, 0x515515u); LOADALL;
  /* 0051551a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051551c jne 0x515535 */ if (!ZF_) goto L_00515535;
  /* 0051551e call 0x515480 */ esp -= 4; M32(esp) = 0x515523u; SAVEALL; F_00515480(c); ABI_CHECK(0x515480u, 0x51551eu); RETCHK(0x515523u, 0x51551eu); LOADALL;
  /* 00515523 mov ecx, dword ptr [esi + 0x2a0] */ { const u32 m_ = (u32)(esi + 0x2a0u); ecx = (u32)(M32(m_)); }
  /* 00515529 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051552b mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0051552d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051552f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00515530 jmp 0x515b00 */ SAVEALL; F_00515b00(c); return;
L_00515535:;
  /* 00515535 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00515536 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00515540(CPU *c) {
  NATIVE_HOOK(0x515540u) REGS; LOADALL;
L_00515540:;
  /* 00515540 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515541 mov esi, eax */ { esi = (u32)(eax); }
  /* 00515543 call 0x515580 */ esp -= 4; M32(esp) = 0x515548u; SAVEALL; F_00515580(c); ABI_CHECK(0x515580u, 0x515543u); RETCHK(0x515548u, 0x515543u); LOADALL;
  /* 00515548 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051554a jne 0x51555f */ if (!ZF_) goto L_0051555f;
  /* 0051554c call 0x515480 */ esp -= 4; M32(esp) = 0x515551u; SAVEALL; F_00515480(c); ABI_CHECK(0x515480u, 0x51554cu); RETCHK(0x515551u, 0x51554cu); LOADALL;
  /* 00515551 add eax, dword ptr [esi + 0x2a0] */ { const u32 m_ = (u32)(esi + 0x2a0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00515557 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00515559 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051555a jmp 0x515b00 */ SAVEALL; F_00515b00(c); return;
L_0051555f:;
  /* 0051555f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00515560 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00515570(CPU *c) {
  NATIVE_HOOK(0x515570u) REGS; LOADALL;
L_00515570:;
  /* 00515570 mov edx, dword ptr [ecx + 0x2a0] */ { const u32 m_ = (u32)(ecx + 0x2a0u); edx = (u32)(M32(m_)); }
  /* 00515576 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00515578 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051557a sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 0051557d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00515580(CPU *c) {
  NATIVE_HOOK(0x515580u) REGS; LOADALL;
L_00515580:;
  /* 00515580 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515581 mov esi, eax */ { esi = (u32)(eax); }
  /* 00515583 call 0x515480 */ esp -= 4; M32(esp) = 0x515588u; SAVEALL; F_00515480(c); ABI_CHECK(0x515480u, 0x515583u); RETCHK(0x515588u, 0x515583u); LOADALL;
  /* 00515588 mov edx, eax */ { edx = (u32)(eax); }
  /* 0051558a add edx, dword ptr [esi + 0x2a0] */ { const u32 m_ = (u32)(esi + 0x2a0u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00515590 mov eax, esi */ { eax = (u32)(esi); }
  /* 00515592 call 0x515460 */ esp -= 4; M32(esp) = 0x515597u; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x515592u); RETCHK(0x515597u, 0x515592u); LOADALL;
  /* 00515597 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00515599 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051559b setge cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!LT_) ? 1u : 0u) & 0xffu); }
  /* 0051559e mov al, cl */ { eax = (eax & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 005155a0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005155a1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005155b0(CPU *c) {
  NATIVE_HOOK(0x5155b0u) REGS; LOADALL;
L_005155b0:;
  /* 005155b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005155b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005155b3 mov edx, dword ptr [edi + 0x218] */ { const u32 m_ = (u32)(edi + 0x218u); edx = (u32)(M32(m_)); }
  /* 005155b9 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005155bb lea eax, [edi + 0x214] */ eax = (u32)((u32)(edi + 0x214u));
  /* 005155c1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005155c2 jne 0x5155c8 */ if (!ZF_) goto L_005155c8;
  /* 005155c4 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005155c6 jmp 0x5155d0 */ goto L_005155d0;
L_005155c8:;
  /* 005155c8 mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 005155cb sub esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005155cd sar esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
L_005155d0:;
  /* 005155d0 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005155d2 je 0x5155fb */ if (ZF_) goto L_005155fb;
  /* 005155d4 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005155d7 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005155d9 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005155dc cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005155de jae 0x5155fb */ if (!CF_) goto L_005155fb;
  /* 005155e0 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005155e3 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005155e6 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 005155e8 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005155eb mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005155ee mov eax, edi */ { eax = (u32)(edi); }
  /* 005155f0 call 0x515440 */ esp -= 4; M32(esp) = 0x5155f5u; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x5155f0u); RETCHK(0x5155f5u, 0x5155f0u); LOADALL;
  /* 005155f5 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005155f6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005155f7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005155f8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005155fb:;
  /* 005155fb mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005155fe push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005155ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00515600 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00515603 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00515608 call 0x4d2620 */ esp -= 4; M32(esp) = 0x51560du; SAVEALL; F_004d2620(c); ABI_CHECK(0x4d2620u, 0x515608u); RETCHK(0x51560du, 0x515608u); LOADALL;
  /* 0051560d mov eax, edi */ { eax = (u32)(edi); }
  /* 0051560f call 0x515440 */ esp -= 4; M32(esp) = 0x515614u; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x51560fu); RETCHK(0x515614u, 0x51560fu); LOADALL;
  /* 00515614 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00515615 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00515616 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00515617 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00515620(CPU *c) {
  NATIVE_HOOK(0x515620u) REGS; LOADALL;
L_00515620:;
  /* 00515620 mov edx, dword ptr [ecx + 0x218] */ { const u32 m_ = (u32)(ecx + 0x218u); edx = (u32)(M32(m_)); }
  /* 00515626 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515628 je 0x515641 */ if (ZF_) goto L_00515641;
  /* 0051562a mov eax, dword ptr [ecx + 0x21c] */ { const u32 m_ = (u32)(ecx + 0x21cu); eax = (u32)(M32(m_)); }
  /* 00515630 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00515632 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00515635 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515637 jbe 0x515641 */ if ((CF_|ZF_)) goto L_00515641;
  /* 00515639 mov eax, edx */ { eax = (u32)(edx); }
  /* 0051563b lea eax, [eax + esi*4] */ eax = (u32)((u32)(eax + esi * 4u));
  /* 0051563e mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00515640 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00515641:;
  /* 00515641 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00515643 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00515650(CPU *c) {
  NATIVE_HOOK(0x515650u) REGS; LOADALL;
L_00515650:;
  /* 00515650 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00515651 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00515653 mov edx, dword ptr [edi + 0x228] */ { const u32 m_ = (u32)(edi + 0x228u); edx = (u32)(M32(m_)); }
  /* 00515659 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051565b lea eax, [edi + 0x224] */ eax = (u32)((u32)(edi + 0x224u));
  /* 00515661 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515662 jne 0x515668 */ if (!ZF_) goto L_00515668;
  /* 00515664 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00515666 jmp 0x515670 */ goto L_00515670;
L_00515668:;
  /* 00515668 mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051566b sub esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051566d sar esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
L_00515670:;
  /* 00515670 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515672 je 0x51569b */ if (ZF_) goto L_0051569b;
  /* 00515674 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00515677 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00515679 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0051567c cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051567e jae 0x51569b */ if (!CF_) goto L_0051569b;
  /* 00515680 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00515683 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00515686 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00515688 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051568b mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0051568e mov eax, edi */ { eax = (u32)(edi); }
  /* 00515690 call 0x515460 */ esp -= 4; M32(esp) = 0x515695u; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x515690u); RETCHK(0x515695u, 0x515690u); LOADALL;
  /* 00515695 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00515696 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00515697 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00515698 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0051569b:;
  /* 0051569b mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051569e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051569f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005156a0 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 005156a3 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 005156a8 call 0x4d2620 */ esp -= 4; M32(esp) = 0x5156adu; SAVEALL; F_004d2620(c); ABI_CHECK(0x4d2620u, 0x5156a8u); RETCHK(0x5156adu, 0x5156a8u); LOADALL;
  /* 005156ad mov eax, edi */ { eax = (u32)(edi); }
  /* 005156af call 0x515460 */ esp -= 4; M32(esp) = 0x5156b4u; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x5156afu); RETCHK(0x5156b4u, 0x5156afu); LOADALL;
  /* 005156b4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005156b5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005156b6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005156b7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005156c0(CPU *c) {
  NATIVE_HOOK(0x5156c0u) REGS; LOADALL;
L_005156c0:;
  /* 005156c0 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005156c2 jl 0x5156db */ if (LT_) goto L_005156db;
  /* 005156c4 mov eax, esi */ { eax = (u32)(esi); }
  /* 005156c6 call 0x515460 */ esp -= 4; M32(esp) = 0x5156cbu; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x5156c6u); RETCHK(0x5156cbu, 0x5156c6u); LOADALL;
  /* 005156cb cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005156cd jge 0x5156db */ if (!LT_) goto L_005156db;
  /* 005156cf mov eax, dword ptr [esi + 0x228] */ { const u32 m_ = (u32)(esi + 0x228u); eax = (u32)(M32(m_)); }
  /* 005156d5 lea eax, [eax + edx*4] */ eax = (u32)((u32)(eax + edx * 4u));
  /* 005156d8 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005156da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005156db:;
  /* 005156db xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005156dd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005156e0(CPU *c) {
  NATIVE_HOOK(0x5156e0u) REGS; LOADALL;
L_005156e0:;
  /* 005156e0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005156e1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005156e3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005156e5 call 0x515b00 */ esp -= 4; M32(esp) = 0x5156eau; SAVEALL; F_00515b00(c); ABI_CHECK(0x515b00u, 0x5156e5u); RETCHK(0x5156eau, 0x5156e5u); LOADALL;
  /* 005156ea mov eax, esi */ { eax = (u32)(esi); }
  /* 005156ec xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005156ee call 0x515460 */ esp -= 4; M32(esp) = 0x5156f3u; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x5156eeu); RETCHK(0x5156f3u, 0x5156eeu); LOADALL;
  /* 005156f3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005156f5 jle 0x51574b */ if ((ZF_|LT_)) goto L_0051574b;
  /* 005156f7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005156f8 jmp 0x515700 */ goto L_00515700;
L_00515700:;
  /* 00515700 mov eax, dword ptr [esi + 0x228] */ { const u32 m_ = (u32)(esi + 0x228u); eax = (u32)(M32(m_)); }
  /* 00515706 lea edi, [ebx*4] */ edi = (u32)((u32)(ebx * 4u));
  /* 0051570d add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051570f mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00515711 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00515713 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00515715 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x515717u; SAVEALL; call_ind(c, t_); RETCHK(0x515717u, 0x515715u); LOADALL; }
  /* 00515717 mov eax, dword ptr [esi + 0x228] */ { const u32 m_ = (u32)(esi + 0x228u); eax = (u32)(M32(m_)); }
  /* 0051571d add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051571f mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00515721 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515723 je 0x51572e */ if (ZF_) goto L_0051572e;
  /* 00515725 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00515727 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00515729 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051572b call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51572eu; SAVEALL; call_ind(c, t_); RETCHK(0x51572eu, 0x51572bu); LOADALL; }
L_0051572e:;
  /* 0051572e mov eax, dword ptr [esi + 0x228] */ { const u32 m_ = (u32)(esi + 0x228u); eax = (u32)(M32(m_)); }
  /* 00515734 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00515736 mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 0051573c mov eax, esi */ { eax = (u32)(esi); }
  /* 0051573e inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051573f call 0x515460 */ esp -= 4; M32(esp) = 0x515744u; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x51573fu); RETCHK(0x515744u, 0x51573fu); LOADALL;
  /* 00515744 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515746 jl 0x515700 */ if (LT_) goto L_00515700;
  /* 00515748 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0051574a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0051574b:;
  /* 0051574b mov eax, dword ptr [esi + 0x228] */ { const u32 m_ = (u32)(esi + 0x228u); eax = (u32)(M32(m_)); }
  /* 00515751 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515753 je 0x51575e */ if (ZF_) goto L_0051575e;
  /* 00515755 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00515756 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51575bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x515756u); RETCHK(0x51575bu, 0x515756u); LOADALL;
  /* 0051575b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051575e:;
  /* 0051575e mov dword ptr [esi + 0x228], ebx */ { const u32 m_ = (u32)(esi + 0x228u); M32(m_) = (u32)(ebx); }
  /* 00515764 mov dword ptr [esi + 0x22c], ebx */ { const u32 m_ = (u32)(esi + 0x22cu); M32(m_) = (u32)(ebx); }
  /* 0051576a mov dword ptr [esi + 0x230], ebx */ { const u32 m_ = (u32)(esi + 0x230u); M32(m_) = (u32)(ebx); }
  /* 00515770 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00515771 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00515780(CPU *c) {
  NATIVE_HOOK(0x515780u) REGS; LOADALL;
L_00515780:;
  /* 00515780 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00515781 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00515783 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00515786 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515787 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00515789 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0051578b lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0051578e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051578f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00515792 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00515795 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00515796 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00515797 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00515799 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 005157a0 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005157a7 call dword ptr [eax + 0xe8] */ { const u32 m_ = (u32)(eax + 0xe8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5157adu; SAVEALL; call_ind(c, t_); RETCHK(0x5157adu, 0x5157a7u); LOADALL; }
  /* 005157ad sub eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005157b0 jne 0x515821 */ if (!ZF_) goto L_00515821;
  /* 005157b2 mov eax, esi */ { eax = (u32)(esi); }
  /* 005157b4 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005157b6 call 0x515460 */ esp -= 4; M32(esp) = 0x5157bbu; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x5157b6u); RETCHK(0x5157bbu, 0x5157b6u); LOADALL;
  /* 005157bb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005157bd jle 0x5157f3 */ if ((ZF_|LT_)) goto L_005157f3;
  /* 005157bf nop */ ;
L_005157c0:;
  /* 005157c0 mov eax, dword ptr [esi + 0x228] */ { const u32 m_ = (u32)(esi + 0x228u); eax = (u32)(M32(m_)); }
  /* 005157c6 mov ecx, dword ptr [eax + edx*4] */ { const u32 m_ = (u32)(eax + edx * 4u); ecx = (u32)(M32(m_)); }
  /* 005157c9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005157cb lea eax, [eax + edx*4] */ eax = (u32)((u32)(eax + edx * 4u));
  /* 005157ce je 0x5157e7 */ if (ZF_) goto L_005157e7;
  /* 005157d0 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005157d3 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005157d5 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005157d7 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005157da jne 0x5157e1 */ if (!ZF_) goto L_005157e1;
  /* 005157dc or ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005157df jmp 0x5157e4 */ goto L_005157e4;
L_005157e1:;
  /* 005157e1 and ecx, 0xfffffffe */ { u32 a_ = ecx, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_005157e4:;
  /* 005157e4 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
L_005157e7:;
  /* 005157e7 mov eax, esi */ { eax = (u32)(esi); }
  /* 005157e9 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005157ea call 0x515460 */ esp -= 4; M32(esp) = 0x5157efu; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x5157eau); RETCHK(0x5157efu, 0x5157eau); LOADALL;
  /* 005157ef cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005157f1 jl 0x5157c0 */ if (LT_) goto L_005157c0;
L_005157f3:;
  /* 005157f3 mov eax, esi */ { eax = (u32)(esi); }
  /* 005157f5 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005157f7 call 0x515440 */ esp -= 4; M32(esp) = 0x5157fcu; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x5157f7u); RETCHK(0x5157fcu, 0x5157f7u); LOADALL;
  /* 005157fc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005157fe jle 0x515821 */ if ((ZF_|LT_)) goto L_00515821;
L_00515800:;
  /* 00515800 mov ecx, dword ptr [esi + 0x218] */ { const u32 m_ = (u32)(esi + 0x218u); ecx = (u32)(M32(m_)); }
  /* 00515806 lea eax, [ecx + edx*4] */ eax = (u32)((u32)(ecx + edx * 4u));
  /* 00515809 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0051580b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051580d je 0x515815 */ if (ZF_) goto L_00515815;
  /* 0051580f mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00515811 and dword ptr [eax + 4], 0xfffffffe */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_00515815:;
  /* 00515815 mov eax, esi */ { eax = (u32)(esi); }
  /* 00515817 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00515818 call 0x515440 */ esp -= 4; M32(esp) = 0x51581du; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x515818u); RETCHK(0x51581du, 0x515818u); LOADALL;
  /* 0051581d cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051581f jl 0x515800 */ if (LT_) goto L_00515800;
L_00515821:;
  /* 00515821 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00515822 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00515824 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00515825 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00515830(CPU *c) {
  NATIVE_HOOK(0x515830u) REGS; LOADALL;
L_00515830:;
  /* 00515830 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00515831 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00515833 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00515836 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515837 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00515838 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0051583b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051583d mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0051583f lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00515842 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00515843 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00515846 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00515847 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00515848 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051584a mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00515851 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 00515858 call dword ptr [eax + 0xe8] */ { const u32 m_ = (u32)(eax + 0xe8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51585eu; SAVEALL; call_ind(c, t_); RETCHK(0x51585eu, 0x515858u); LOADALL; }
  /* 0051585e dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051585f je 0x515872 */ if (ZF_) goto L_00515872;
  /* 00515861 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00515862 jne 0x51586d */ if (!ZF_) goto L_0051586d;
  /* 00515864 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00515867 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00515868 call 0x5159d0 */ esp -= 4; M32(esp) = 0x51586du; SAVEALL; F_005159d0(c); ABI_CHECK(0x5159d0u, 0x515868u); RETCHK(0x51586du, 0x515868u); LOADALL;
L_0051586d:;
  /* 0051586d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051586e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00515870 jmp 0x5158a1 */ goto L_005158a1;
L_00515872:;
  /* 00515872 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00515875 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515877 jl 0x5158a8 */ if (LT_) goto L_005158a8;
  /* 00515879 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051587b call 0x515440 */ esp -= 4; M32(esp) = 0x515880u; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x51587bu); RETCHK(0x515880u, 0x51587bu); LOADALL;
  /* 00515880 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515882 jge 0x5158a8 */ if (!LT_) goto L_005158a8;
  /* 00515884 mov ecx, dword ptr [esi + 0x218] */ { const u32 m_ = (u32)(esi + 0x218u); ecx = (u32)(M32(m_)); }
  /* 0051588a lea eax, [ecx + edx*4] */ eax = (u32)((u32)(ecx + edx * 4u));
  /* 0051588d mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0051588f or dword ptr [eax + 4], 2 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 00515893 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00515896 call 0x515a80 */ esp -= 4; M32(esp) = 0x51589bu; SAVEALL; F_00515a80(c); ABI_CHECK(0x515a80u, 0x515896u); RETCHK(0x51589bu, 0x515896u); LOADALL;
  /* 0051589b mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0051589e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051589f inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005158a0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
L_005158a1:;
  /* 005158a1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005158a3 call 0x507f00 */ esp -= 4; M32(esp) = 0x5158a8u; SAVEALL; F_00507f00(c); ABI_CHECK(0x507f00u, 0x5158a3u); RETCHK(0x5158a8u, 0x5158a3u); LOADALL;
L_005158a8:;
  /* 005158a8 call 0x559eb0 */ esp -= 4; M32(esp) = 0x5158adu; SAVEALL; F_00559eb0(c); ABI_CHECK(0x559eb0u, 0x5158a8u); RETCHK(0x5158adu, 0x5158a8u); LOADALL;
  /* 005158ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005158ae call dword ptr [0x62e4fc] */ { const u32 m_ = (u32)(0x62e4fcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5158b4u; SAVEALL; call_ind(c, t_); RETCHK(0x5158b4u, 0x5158aeu); LOADALL; }
  /* 005158b4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005158b5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005158b6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005158b8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005158b9 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005158c0(CPU *c) {
  NATIVE_HOOK(0x5158c0u) REGS; LOADALL;
L_005158c0:;
  /* 005158c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005158c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005158c3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005158c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005158c7 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005158c9 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005158cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005158cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005158ce mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005158d0 call 0x507f80 */ esp -= 4; M32(esp) = 0x5158d5u; SAVEALL; F_00507f80(c); ABI_CHECK(0x507f80u, 0x5158d0u); RETCHK(0x5158d5u, 0x5158d0u); LOADALL;
  /* 005158d5 call dword ptr [0x62e4f4] */ { const u32 m_ = (u32)(0x62e4f4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5158dbu; SAVEALL; call_ind(c, t_); RETCHK(0x5158dbu, 0x5158d5u); LOADALL; }
  /* 005158db mov eax, esi */ { eax = (u32)(esi); }
  /* 005158dd xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005158df call 0x515440 */ esp -= 4; M32(esp) = 0x5158e4u; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x5158dfu); RETCHK(0x5158e4u, 0x5158dfu); LOADALL;
  /* 005158e4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005158e6 jle 0x515912 */ if ((ZF_|LT_)) goto L_00515912;
  /* 005158e8 jmp 0x5158f0 */ goto L_005158f0;
L_005158f0:;
  /* 005158f0 mov eax, dword ptr [esi + 0x218] */ { const u32 m_ = (u32)(esi + 0x218u); eax = (u32)(M32(m_)); }
  /* 005158f6 mov ecx, dword ptr [eax + edx*4] */ { const u32 m_ = (u32)(eax + edx * 4u); ecx = (u32)(M32(m_)); }
  /* 005158f9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005158fb lea eax, [eax + edx*4] */ eax = (u32)((u32)(eax + edx * 4u));
  /* 005158fe je 0x515906 */ if (ZF_) goto L_00515906;
  /* 00515900 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00515902 and dword ptr [eax + 4], 0xfffffffd */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0xfffffffdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_00515906:;
  /* 00515906 mov eax, esi */ { eax = (u32)(esi); }
  /* 00515908 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00515909 call 0x515440 */ esp -= 4; M32(esp) = 0x51590eu; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x515909u); RETCHK(0x51590eu, 0x515909u); LOADALL;
  /* 0051590e cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515910 jl 0x5158f0 */ if (LT_) goto L_005158f0;
L_00515912:;
  /* 00515912 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00515913 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00515914 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00515920(CPU *c) {
  NATIVE_HOOK(0x515920u) REGS; LOADALL;
L_00515920:;
  /* 00515920 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515921 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00515923 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00515924 mov eax, edx */ { eax = (u32)(edx); }
  /* 00515926 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00515928 call 0x515440 */ esp -= 4; M32(esp) = 0x51592du; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x515928u); RETCHK(0x51592du, 0x515928u); LOADALL;
  /* 0051592d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051592f mov edi, 0xfffffffe */ { edi = (u32)(0xfffffffeu); }
  /* 00515934 jle 0x515961 */ if ((ZF_|LT_)) goto L_00515961;
  /* 00515936 jmp 0x515940 */ goto L_00515940;
L_00515940:;
  /* 00515940 mov eax, dword ptr [edx + 0x218] */ { const u32 m_ = (u32)(edx + 0x218u); eax = (u32)(M32(m_)); }
  /* 00515946 mov ecx, dword ptr [eax + esi*4] */ { const u32 m_ = (u32)(eax + esi * 4u); ecx = (u32)(M32(m_)); }
  /* 00515949 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051594b lea eax, [eax + esi*4] */ eax = (u32)((u32)(eax + esi * 4u));
  /* 0051594e je 0x515955 */ if (ZF_) goto L_00515955;
  /* 00515950 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00515952 and dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_00515955:;
  /* 00515955 mov eax, edx */ { eax = (u32)(edx); }
  /* 00515957 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00515958 call 0x515440 */ esp -= 4; M32(esp) = 0x51595du; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x515958u); RETCHK(0x51595du, 0x515958u); LOADALL;
  /* 0051595d cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051595f jl 0x515940 */ if (LT_) goto L_00515940;
L_00515961:;
  /* 00515961 mov eax, edx */ { eax = (u32)(edx); }
  /* 00515963 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00515965 call 0x515460 */ esp -= 4; M32(esp) = 0x51596au; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x515965u); RETCHK(0x51596au, 0x515965u); LOADALL;
  /* 0051596a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051596c jle 0x515990 */ if ((ZF_|LT_)) goto L_00515990;
  /* 0051596e mov edi, edi */ { edi = (u32)(edi); }
L_00515970:;
  /* 00515970 mov ecx, dword ptr [edx + 0x228] */ { const u32 m_ = (u32)(edx + 0x228u); ecx = (u32)(M32(m_)); }
  /* 00515976 lea eax, [ecx + esi*4] */ eax = (u32)((u32)(ecx + esi * 4u));
  /* 00515979 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0051597b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051597d je 0x515984 */ if (ZF_) goto L_00515984;
  /* 0051597f mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00515981 and dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_00515984:;
  /* 00515984 mov eax, edx */ { eax = (u32)(edx); }
  /* 00515986 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00515987 call 0x515460 */ esp -= 4; M32(esp) = 0x51598cu; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x515987u); RETCHK(0x51598cu, 0x515987u); LOADALL;
  /* 0051598c cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051598e jl 0x515970 */ if (LT_) goto L_00515970;
L_00515990:;
  /* 00515990 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00515991 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00515992 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005159a0(CPU *c) {
  NATIVE_HOOK(0x5159a0u) REGS; LOADALL;
L_005159a0:;
  /* 005159a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005159a1 mov esi, eax */ { esi = (u32)(eax); }
  /* 005159a3 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005159a5 call 0x515460 */ esp -= 4; M32(esp) = 0x5159aau; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x5159a5u); RETCHK(0x5159aau, 0x5159a5u); LOADALL;
  /* 005159aa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005159ac jle 0x5159c4 */ if ((ZF_|LT_)) goto L_005159c4;
  /* 005159ae mov ecx, dword ptr [esi + 0x228] */ { const u32 m_ = (u32)(esi + 0x228u); ecx = (u32)(M32(m_)); }
L_005159b4:;
  /* 005159b4 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 005159b6 test byte ptr [esi + 4], 2 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005159ba jne 0x5159c9 */ if (!ZF_) goto L_005159c9;
  /* 005159bc inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005159bd add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005159c0 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005159c2 jl 0x5159b4 */ if (LT_) goto L_005159b4;
L_005159c4:;
  /* 005159c4 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005159c7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005159c8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005159c9:;
  /* 005159c9 mov eax, edx */ { eax = (u32)(edx); }
  /* 005159cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005159cc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005159d0(CPU *c) {
  NATIVE_HOOK(0x5159d0u) REGS; LOADALL;
L_005159d0:;
  /* 005159d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005159d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005159d3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005159d4 mov eax, esi */ { eax = (u32)(esi); }
  /* 005159d6 call 0x515460 */ esp -= 4; M32(esp) = 0x5159dbu; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x5159d6u); RETCHK(0x5159dbu, 0x5159d6u); LOADALL;
  /* 005159db mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005159de or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005159e1 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005159e3 jl 0x5159e8 */ if (LT_) goto L_005159e8;
  /* 005159e5 mov dword ptr [ebp + 8], edi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edi); }
L_005159e8:;
  /* 005159e8 mov eax, esi */ { eax = (u32)(esi); }
  /* 005159ea xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005159ec call 0x515460 */ esp -= 4; M32(esp) = 0x5159f1u; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x5159ecu); RETCHK(0x5159f1u, 0x5159ecu); LOADALL;
  /* 005159f1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005159f3 jle 0x515a3a */ if ((ZF_|LT_)) goto L_00515a3a;
  /* 005159f5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005159f6 mov ebx, 2 */ { ebx = (u32)(0x2u); }
  /* 005159fb jmp 0x515a00 */ goto L_00515a00;
L_00515a00:;
  /* 00515a00 mov eax, dword ptr [esi + 0x228] */ { const u32 m_ = (u32)(esi + 0x228u); eax = (u32)(M32(m_)); }
  /* 00515a06 mov ecx, dword ptr [eax + edx*4] */ { const u32 m_ = (u32)(eax + edx * 4u); ecx = (u32)(M32(m_)); }
  /* 00515a09 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515a0b lea eax, [eax + edx*4] */ eax = (u32)((u32)(eax + edx * 4u));
  /* 00515a0e je 0x515a2d */ if (ZF_) goto L_00515a2d;
  /* 00515a10 test byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00515a13 je 0x515a17 */ if (ZF_) goto L_00515a17;
  /* 00515a15 mov edi, edx */ { edi = (u32)(edx); }
L_00515a17:;
  /* 00515a17 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00515a1a mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00515a1c cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515a1e mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00515a21 jne 0x515a27 */ if (!ZF_) goto L_00515a27;
  /* 00515a23 or ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00515a25 jmp 0x515a2a */ goto L_00515a2a;
L_00515a27:;
  /* 00515a27 and ecx, 0xfffffffd */ { u32 a_ = ecx, b_ = 0xfffffffdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_00515a2a:;
  /* 00515a2a mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
L_00515a2d:;
  /* 00515a2d mov eax, esi */ { eax = (u32)(esi); }
  /* 00515a2f inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00515a30 call 0x515460 */ esp -= 4; M32(esp) = 0x515a35u; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x515a30u); RETCHK(0x515a35u, 0x515a30u); LOADALL;
  /* 00515a35 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515a37 jl 0x515a00 */ if (LT_) goto L_00515a00;
  /* 00515a39 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00515a3a:;
  /* 00515a3a cmp edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515a3d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00515a3e je 0x515a4a */ if (ZF_) goto L_00515a4a;
  /* 00515a40 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00515a42 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00515a44 call dword ptr [edx + 0xec] */ { const u32 m_ = (u32)(edx + 0xecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x515a4au; SAVEALL; call_ind(c, t_); RETCHK(0x515a4au, 0x515a44u); LOADALL; }
L_00515a4a:;
  /* 00515a4a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00515a4b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00515a50(CPU *c) {
  NATIVE_HOOK(0x515a50u) REGS; LOADALL;
L_00515a50:;
  /* 00515a50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515a51 mov esi, eax */ { esi = (u32)(eax); }
  /* 00515a53 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00515a55 call 0x515440 */ esp -= 4; M32(esp) = 0x515a5au; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x515a55u); RETCHK(0x515a5au, 0x515a55u); LOADALL;
  /* 00515a5a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515a5c jle 0x515a74 */ if ((ZF_|LT_)) goto L_00515a74;
  /* 00515a5e mov ecx, dword ptr [esi + 0x218] */ { const u32 m_ = (u32)(esi + 0x218u); ecx = (u32)(M32(m_)); }
L_00515a64:;
  /* 00515a64 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 00515a66 test byte ptr [esi + 4], 4 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00515a6a jne 0x515a79 */ if (!ZF_) goto L_00515a79;
  /* 00515a6c inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00515a6d add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00515a70 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515a72 jl 0x515a64 */ if (LT_) goto L_00515a64;
L_00515a74:;
  /* 00515a74 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00515a77 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00515a78 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00515a79:;
  /* 00515a79 mov eax, edx */ { eax = (u32)(edx); }
  /* 00515a7b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00515a7c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00515a80(CPU *c) {
  NATIVE_HOOK(0x515a80u) REGS; LOADALL;
L_00515a80:;
  /* 00515a80 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00515a81 mov edi, eax */ { edi = (u32)(eax); }
  /* 00515a83 mov eax, esi */ { eax = (u32)(esi); }
  /* 00515a85 call 0x515440 */ esp -= 4; M32(esp) = 0x515a8au; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x515a85u); RETCHK(0x515a8au, 0x515a85u); LOADALL;
  /* 00515a8a cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515a8c jl 0x515a91 */ if (LT_) goto L_00515a91;
  /* 00515a8e or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_00515a91:;
  /* 00515a91 mov eax, esi */ { eax = (u32)(esi); }
  /* 00515a93 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00515a95 call 0x515440 */ esp -= 4; M32(esp) = 0x515a9au; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x515a95u); RETCHK(0x515a9au, 0x515a95u); LOADALL;
  /* 00515a9a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515a9c jle 0x515ad0 */ if ((ZF_|LT_)) goto L_00515ad0;
  /* 00515a9e mov edi, edi */ { edi = (u32)(edi); }
L_00515aa0:;
  /* 00515aa0 mov eax, dword ptr [esi + 0x218] */ { const u32 m_ = (u32)(esi + 0x218u); eax = (u32)(M32(m_)); }
  /* 00515aa6 mov ecx, dword ptr [eax + edx*4] */ { const u32 m_ = (u32)(eax + edx * 4u); ecx = (u32)(M32(m_)); }
  /* 00515aa9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515aab lea eax, [eax + edx*4] */ eax = (u32)((u32)(eax + edx * 4u));
  /* 00515aae je 0x515ac4 */ if (ZF_) goto L_00515ac4;
  /* 00515ab0 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515ab2 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00515ab4 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00515ab7 jne 0x515abe */ if (!ZF_) goto L_00515abe;
  /* 00515ab9 or ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00515abc jmp 0x515ac1 */ goto L_00515ac1;
L_00515abe:;
  /* 00515abe and ecx, 0xfffffffb */ { u32 a_ = ecx, b_ = 0xfffffffbu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_00515ac1:;
  /* 00515ac1 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
L_00515ac4:;
  /* 00515ac4 mov eax, esi */ { eax = (u32)(esi); }
  /* 00515ac6 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00515ac7 call 0x515440 */ esp -= 4; M32(esp) = 0x515accu; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x515ac7u); RETCHK(0x515accu, 0x515ac7u); LOADALL;
  /* 00515acc cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515ace jl 0x515aa0 */ if (LT_) goto L_00515aa0;
L_00515ad0:;
  /* 00515ad0 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515ad2 jl 0x515af4 */ if (LT_) goto L_00515af4;
  /* 00515ad4 mov ecx, dword ptr [esi + 0x218] */ { const u32 m_ = (u32)(esi + 0x218u); ecx = (u32)(M32(m_)); }
  /* 00515ada mov edx, dword ptr [ecx + edi*4] */ { const u32 m_ = (u32)(ecx + edi * 4u); edx = (u32)(M32(m_)); }
  /* 00515add lea eax, [ecx + edi*4] */ eax = (u32)((u32)(ecx + edi * 4u));
  /* 00515ae0 mov ecx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00515ae3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515ae5 je 0x515af4 */ if (ZF_) goto L_00515af4;
  /* 00515ae7 mov eax, edx */ { eax = (u32)(edx); }
  /* 00515ae9 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00515aec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00515aed mov eax, esi */ { eax = (u32)(esi); }
  /* 00515aef call 0x516500 */ esp -= 4; M32(esp) = 0x515af4u; SAVEALL; F_00516500(c); ABI_CHECK(0x516500u, 0x515aefu); RETCHK(0x515af4u, 0x515aefu); LOADALL;
L_00515af4:;
  /* 00515af4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00515af5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00515b00(CPU *c) {
  NATIVE_HOOK(0x515b00u) REGS; LOADALL;
L_00515b00:;
  /* 00515b00 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00515b01 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515b02 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00515b04 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515b06 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00515b07 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00515b09 jge 0x515b0d */ if (!LT_) goto L_00515b0d;
  /* 00515b0b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_00515b0d:;
  /* 00515b0d mov eax, esi */ { eax = (u32)(esi); }
  /* 00515b0f call 0x515b90 */ esp -= 4; M32(esp) = 0x515b14u; SAVEALL; F_00515b90(c); ABI_CHECK(0x515b90u, 0x515b0fu); RETCHK(0x515b14u, 0x515b0fu); LOADALL;
  /* 00515b14 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515b16 jle 0x515b1a */ if ((ZF_|LT_)) goto L_00515b1a;
  /* 00515b18 mov ebx, eax */ { ebx = (u32)(eax); }
L_00515b1a:;
  /* 00515b1a mov dword ptr [esi + 0x2a0], ebx */ { const u32 m_ = (u32)(esi + 0x2a0u); M32(m_) = (u32)(ebx); }
  /* 00515b20 add ebx, -0xa */ { u32 a_ = ebx, b_ = 0xfffffff6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00515b23 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00515b25 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515b27 jle 0x515b4e */ if ((ZF_|LT_)) goto L_00515b4e;
  /* 00515b29 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00515b30:;
  /* 00515b30 mov eax, dword ptr [esi + 0x228] */ { const u32 m_ = (u32)(esi + 0x228u); eax = (u32)(M32(m_)); }
  /* 00515b36 mov ecx, dword ptr [eax + edi*4] */ { const u32 m_ = (u32)(eax + edi * 4u); ecx = (u32)(M32(m_)); }
  /* 00515b39 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00515b3b lea eax, [eax + edi*4] */ eax = (u32)((u32)(eax + edi * 4u));
  /* 00515b3e call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x515b40u; SAVEALL; call_ind(c, t_); RETCHK(0x515b40u, 0x515b3eu); LOADALL; }
  /* 00515b40 mov eax, dword ptr [esi + 0x2a0] */ { const u32 m_ = (u32)(esi + 0x2a0u); eax = (u32)(M32(m_)); }
  /* 00515b46 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00515b47 sub eax, 0xa */ { u32 a_ = eax, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00515b4a cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515b4c jl 0x515b30 */ if (LT_) goto L_00515b30;
L_00515b4e:;
  /* 00515b4e call 0x515480 */ esp -= 4; M32(esp) = 0x515b53u; SAVEALL; F_00515480(c); ABI_CHECK(0x515480u, 0x515b4eu); RETCHK(0x515b53u, 0x515b4eu); LOADALL;
  /* 00515b53 mov ecx, dword ptr [esi + 0x2a0] */ { const u32 m_ = (u32)(esi + 0x2a0u); ecx = (u32)(M32(m_)); }
  /* 00515b59 lea edi, [eax + ecx + 0xa] */ edi = (u32)((u32)(eax + ecx + 0xau));
  /* 00515b5d mov eax, esi */ { eax = (u32)(esi); }
  /* 00515b5f call 0x515460 */ esp -= 4; M32(esp) = 0x515b64u; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x515b5fu); RETCHK(0x515b64u, 0x515b5fu); LOADALL;
  /* 00515b64 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515b66 jge 0x515b8c */ if (!LT_) goto L_00515b8c;
  /* 00515b68 jmp 0x515b70 */ goto L_00515b70;
L_00515b70:;
  /* 00515b70 mov edx, dword ptr [esi + 0x228] */ { const u32 m_ = (u32)(esi + 0x228u); edx = (u32)(M32(m_)); }
  /* 00515b76 mov ecx, dword ptr [edx + edi*4] */ { const u32 m_ = (u32)(edx + edi * 4u); ecx = (u32)(M32(m_)); }
  /* 00515b79 lea eax, [edx + edi*4] */ eax = (u32)((u32)(edx + edi * 4u));
  /* 00515b7c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00515b7e call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x515b80u; SAVEALL; call_ind(c, t_); RETCHK(0x515b80u, 0x515b7eu); LOADALL; }
  /* 00515b80 mov eax, esi */ { eax = (u32)(esi); }
  /* 00515b82 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00515b83 call 0x515460 */ esp -= 4; M32(esp) = 0x515b88u; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x515b83u); RETCHK(0x515b88u, 0x515b83u); LOADALL;
  /* 00515b88 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515b8a jl 0x515b70 */ if (LT_) goto L_00515b70;
L_00515b8c:;
  /* 00515b8c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00515b8d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00515b8e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00515b8f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00515b90(CPU *c) {
  NATIVE_HOOK(0x515b90u) REGS; LOADALL;
L_00515b90:;
  /* 00515b90 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515b91 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00515b92 mov esi, eax */ { esi = (u32)(eax); }
  /* 00515b94 call 0x515480 */ esp -= 4; M32(esp) = 0x515b99u; SAVEALL; F_00515480(c); ABI_CHECK(0x515480u, 0x515b94u); RETCHK(0x515b99u, 0x515b94u); LOADALL;
  /* 00515b99 mov edi, eax */ { edi = (u32)(eax); }
  /* 00515b9b mov eax, esi */ { eax = (u32)(esi); }
  /* 00515b9d call 0x5154e0 */ esp -= 4; M32(esp) = 0x515ba2u; SAVEALL; F_005154e0(c); ABI_CHECK(0x5154e0u, 0x515b9du); RETCHK(0x515ba2u, 0x515b9du); LOADALL;
  /* 00515ba2 imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00515ba5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00515ba6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00515ba7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00515bb0(CPU *c) {
  NATIVE_HOOK(0x515bb0u) REGS; LOADALL;
L_00515bb0:;
  /* 00515bb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00515bb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00515bb3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00515bb6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515bb7 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00515bb9 mov eax, esi */ { eax = (u32)(esi); }
  /* 00515bbb mov dword ptr [ebp - 0x18], 7 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x7u); }
  /* 00515bc2 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 00515bc5 call 0x5159a0 */ esp -= 4; M32(esp) = 0x515bcau; SAVEALL; F_005159a0(c); ABI_CHECK(0x5159a0u, 0x515bc5u); RETCHK(0x515bcau, 0x515bc5u); LOADALL;
  /* 00515bca mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00515bcd lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00515bd0 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00515bd3 mov dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x0u); }
  /* 00515bda call 0x508540 */ esp -= 4; M32(esp) = 0x515bdfu; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x515bdau); RETCHK(0x515bdfu, 0x515bdau); LOADALL;
  /* 00515bdf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00515be0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00515be2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00515be3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00515bf0(CPU *c) {
  NATIVE_HOOK(0x515bf0u) REGS; LOADALL;
L_00515bf0:;
  /* 00515bf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00515bf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00515bf3 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00515bf6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00515bf7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515bf8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00515bf9 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00515bfb mov ebx, dword ptr [edi + 0x218] */ { const u32 m_ = (u32)(edi + 0x218u); ebx = (u32)(M32(m_)); }
  /* 00515c01 mov edx, edi */ { edx = (u32)(edi); }
  /* 00515c03 call 0x515360 */ esp -= 4; M32(esp) = 0x515c08u; SAVEALL; F_00515360(c); ABI_CHECK(0x515360u, 0x515c03u); RETCHK(0x515c08u, 0x515c03u); LOADALL;
  /* 00515c08 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00515c0b fild dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)(s32)M32(m_)); }
  /* 00515c0e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00515c0f lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00515c12 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00515c15 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00515c17 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00515c19 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00515c1b call 0x52cec0 */ esp -= 4; M32(esp) = 0x515c20u; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x515c1bu); RETCHK(0x515c20u, 0x515c1bu); LOADALL;
  /* 00515c20 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00515c21 lea esi, [ebp - 0x20] */ esi = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00515c24 call 0x52cf90 */ esp -= 4; M32(esp) = 0x515c29u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x515c24u); RETCHK(0x515c29u, 0x515c24u); LOADALL;
  /* 00515c29 mov eax, dword ptr [edi + 0x21c] */ { const u32 m_ = (u32)(edi + 0x21cu); eax = (u32)(M32(m_)); }
  /* 00515c2f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00515c32 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515c34 je 0x515d5d */ if (ZF_) goto L_00515d5d;
  /* 00515c3a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00515c40:;
  /* 00515c40 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00515c42 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515c44 je 0x515d4c */ if (ZF_) goto L_00515d4c;
  /* 00515c4a mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00515c4d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515c4f je 0x515d4c */ if (ZF_) goto L_00515d4c;
  /* 00515c55 fild dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 00515c58 lea esi, [edi + 0x180] */ esi = (u32)((u32)(edi + 0x180u));
  /* 00515c5e mov eax, esi */ { eax = (u32)(esi); }
  /* 00515c60 fadd dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00515c63 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00515c66 call 0x526830 */ esp -= 4; M32(esp) = 0x515c6bu; SAVEALL; F_00526830(c); ABI_CHECK(0x526830u, 0x515c66u); RETCHK(0x515c6bu, 0x515c66u); LOADALL;
  /* 00515c6b mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00515c6d mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00515c70 test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00515c72 je 0x515c85 */ if (ZF_) goto L_00515c85;
  /* 00515c74 push 0x3f400000 */ { u32 v_ = 0x3f400000u; esp -= 4; M32(esp) = v_; }
  /* 00515c79 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00515c7e push 0x3f000000 */ { u32 v_ = 0x3f000000u; esp -= 4; M32(esp) = v_; }
  /* 00515c83 jmp 0x515ca6 */ goto L_00515ca6;
L_00515c85:;
  /* 00515c85 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00515c87 je 0x515c9a */ if (ZF_) goto L_00515c9a;
  /* 00515c89 push 0x3f000000 */ { u32 v_ = 0x3f000000u; esp -= 4; M32(esp) = v_; }
  /* 00515c8e push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00515c93 push 0x3e800000 */ { u32 v_ = 0x3e800000u; esp -= 4; M32(esp) = v_; }
  /* 00515c98 jmp 0x515ca6 */ goto L_00515ca6;
L_00515c9a:;
  /* 00515c9a push 0x3e800000 */ { u32 v_ = 0x3e800000u; esp -= 4; M32(esp) = v_; }
  /* 00515c9f push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00515ca4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
L_00515ca6:;
  /* 00515ca6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00515ca8 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00515cab push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515cac call 0x500ca0 */ esp -= 4; M32(esp) = 0x515cb1u; SAVEALL; F_00500ca0(c); ABI_CHECK(0x500ca0u, 0x515cacu); RETCHK(0x515cb1u, 0x515cacu); LOADALL;
  /* 00515cb1 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 00515cb3 test byte ptr [ecx + 4], 4 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00515cb7 je 0x515d46 */ if (ZF_) goto L_00515d46;
  /* 00515cbd mov ecx, dword ptr [edi + 0x288] */ { const u32 m_ = (u32)(edi + 0x288u); ecx = (u32)(M32(m_)); }
  /* 00515cc3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515cc5 je 0x515d46 */ if (ZF_) goto L_00515d46;
  /* 00515cc7 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00515cca fsub dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00515ccd fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00515cd3 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00515cd5 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00515cd8 je 0x515ce2 */ if (ZF_) goto L_00515ce2;
  /* 00515cda fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00515cdc fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 00515cdf fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00515ce2:;
  /* 00515ce2 fisub dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ST(0) = FR(ST(0) - (double)(s32)M32(m_)); }
  /* 00515ce5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00515ce7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00515ce9 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00515cec lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00515cef fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00515cf5 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 00515cf8 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 00515cfa fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00515cfe fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 00515d01 fadd dword ptr [0x656ef0] */ { const u32 m_ = (u32)(0x656ef0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00515d07 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00515d0a call 0x52cec0 */ esp -= 4; M32(esp) = 0x515d0fu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x515d0au); RETCHK(0x515d0fu, 0x515d0au); LOADALL;
  /* 00515d0f mov ecx, dword ptr [edi + 0x288] */ { const u32 m_ = (u32)(edi + 0x288u); ecx = (u32)(M32(m_)); }
  /* 00515d15 fild dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 00515d18 mov eax, esi */ { eax = (u32)(esi); }
  /* 00515d1a fadd dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00515d1d fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00515d20 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00515d23 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 00515d25 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00515d28 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00515d2a call 0x526830 */ esp -= 4; M32(esp) = 0x515d2fu; SAVEALL; F_00526830(c); ABI_CHECK(0x526830u, 0x515d2au); RETCHK(0x515d2fu, 0x515d2au); LOADALL;
  /* 00515d2f push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00515d34 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00515d39 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00515d3b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00515d3d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515d3e lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00515d41 call 0x500ca0 */ esp -= 4; M32(esp) = 0x515d46u; SAVEALL; F_00500ca0(c); ABI_CHECK(0x500ca0u, 0x515d41u); RETCHK(0x515d46u, 0x515d41u); LOADALL;
L_00515d46:;
  /* 00515d46 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 00515d49 mov dword ptr [ebp - 0x20], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edx); }
L_00515d4c:;
  /* 00515d4c mov eax, dword ptr [edi + 0x21c] */ { const u32 m_ = (u32)(edi + 0x21cu); eax = (u32)(M32(m_)); }
  /* 00515d52 add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00515d55 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515d57 jne 0x515c40 */ if (!ZF_) goto L_00515c40;
L_00515d5d:;
  /* 00515d5d fld dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 00515d60 fsub dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00515d63 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00515d69 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00515d6b test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00515d6e je 0x515d78 */ if (ZF_) goto L_00515d78;
  /* 00515d70 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00515d72 fld dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 00515d75 fsub dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00515d78:;
  /* 00515d78 mov edx, edi */ { edx = (u32)(edi); }
  /* 00515d7a fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00515d7d call 0x515360 */ esp -= 4; M32(esp) = 0x515d82u; SAVEALL; F_00515360(c); ABI_CHECK(0x515360u, 0x515d7du); RETCHK(0x515d82u, 0x515d7du); LOADALL;
  /* 00515d82 add eax, dword ptr [edi + 0x29c] */ { const u32 m_ = (u32)(edi + 0x29cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00515d88 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00515d8b fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 00515d8e mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00515d91 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00515d92 mov edx, edi */ { edx = (u32)(edi); }
  /* 00515d94 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00515d97 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00515d98 call 0x515360 */ esp -= 4; M32(esp) = 0x515d9du; SAVEALL; F_00515360(c); ABI_CHECK(0x515360u, 0x515d98u); RETCHK(0x515d9du, 0x515d98u); LOADALL;
  /* 00515d9d mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00515da0 fild dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)(s32)M32(m_)); }
  /* 00515da3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00515da4 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00515da7 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00515daa push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00515dac call 0x52cec0 */ esp -= 4; M32(esp) = 0x515db1u; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x515dacu); RETCHK(0x515db1u, 0x515dacu); LOADALL;
  /* 00515db1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00515db2 lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00515db5 call 0x52cf90 */ esp -= 4; M32(esp) = 0x515dbau; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x515db5u); RETCHK(0x515dbau, 0x515db5u); LOADALL;
  /* 00515dba mov ebx, dword ptr [edi + 0x2a0] */ { const u32 m_ = (u32)(edi + 0x2a0u); ebx = (u32)(M32(m_)); }
  /* 00515dc0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00515dc3 mov esi, edi */ { esi = (u32)(edi); }
  /* 00515dc5 mov dword ptr [ebp - 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ebx); }
  /* 00515dc8 call 0x515480 */ esp -= 4; M32(esp) = 0x515dcdu; SAVEALL; F_00515480(c); ABI_CHECK(0x515480u, 0x515dc8u); RETCHK(0x515dcdu, 0x515dc8u); LOADALL;
  /* 00515dcd mov edx, eax */ { edx = (u32)(eax); }
  /* 00515dcf mov eax, edi */ { eax = (u32)(edi); }
  /* 00515dd1 add edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00515dd3 call 0x515460 */ esp -= 4; M32(esp) = 0x515dd8u; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x515dd3u); RETCHK(0x515dd8u, 0x515dd3u); LOADALL;
  /* 00515dd8 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515dda jge 0x515de5 */ if (!LT_) goto L_00515de5;
  /* 00515ddc mov eax, edi */ { eax = (u32)(edi); }
  /* 00515dde call 0x515460 */ esp -= 4; M32(esp) = 0x515de3u; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x515ddeu); RETCHK(0x515de3u, 0x515ddeu); LOADALL;
  /* 00515de3 jmp 0x515dee */ goto L_00515dee;
L_00515de5:;
  /* 00515de5 mov esi, edi */ { esi = (u32)(edi); }
  /* 00515de7 call 0x515480 */ esp -= 4; M32(esp) = 0x515decu; SAVEALL; F_00515480(c); ABI_CHECK(0x515480u, 0x515de7u); RETCHK(0x515decu, 0x515de7u); LOADALL;
  /* 00515dec add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00515dee:;
  /* 00515dee cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515df0 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00515df3 jge 0x515f71 */ if (!LT_) goto L_00515f71;
  /* 00515df9 jmp 0x515e00 */ goto L_00515e00;
L_00515dfb:;
  /* 00515dfb mov ebx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ebx = (u32)(M32(m_)); }
  /* 00515dfe mov edi, edi */ { edi = (u32)(edi); }
L_00515e00:;
  /* 00515e00 mov eax, dword ptr [edi + 0x228] */ { const u32 m_ = (u32)(edi + 0x228u); eax = (u32)(M32(m_)); }
  /* 00515e06 shl ebx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00515e09 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00515e0b mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00515e0d test byte ptr [eax + 4], 2 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00515e11 je 0x515e24 */ if (ZF_) goto L_00515e24;
  /* 00515e13 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00515e15 lea ecx, [edi + 0x298] */ ecx = (u32)((u32)(edi + 0x298u));
  /* 00515e1b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00515e1c lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00515e1f call 0x527040 */ esp -= 4; M32(esp) = 0x515e24u; SAVEALL; F_00527040(c); ABI_CHECK(0x527040u, 0x515e1fu); RETCHK(0x515e24u, 0x515e1fu); LOADALL;
L_00515e24:;
  /* 00515e24 mov eax, dword ptr [edi + 0x228] */ { const u32 m_ = (u32)(edi + 0x228u); eax = (u32)(M32(m_)); }
  /* 00515e2a mov edx, dword ptr [eax + ebx] */ { const u32 m_ = (u32)(eax + ebx); edx = (u32)(M32(m_)); }
  /* 00515e2d add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00515e2f test byte ptr [edx + 4], 8 */ { const u32 m_ = (u32)(edx + 0x4u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00515e33 je 0x515e52 */ if (ZF_) goto L_00515e52;
  /* 00515e35 mov eax, 0xffc8c8c8 */ { eax = (u32)(0xffc8c8c8u); }
  /* 00515e3a mov dword ptr [edi + 0x19c], eax */ { const u32 m_ = (u32)(edi + 0x19cu); M32(m_) = (u32)(eax); }
  /* 00515e40 mov dword ptr [edi + 0x1b8], eax */ { const u32 m_ = (u32)(edi + 0x1b8u); M32(m_) = (u32)(eax); }
  /* 00515e46 mov dword ptr [edi + 0x1d4], eax */ { const u32 m_ = (u32)(edi + 0x1d4u); M32(m_) = (u32)(eax); }
  /* 00515e4c mov dword ptr [edi + 0x1f0], eax */ { const u32 m_ = (u32)(edi + 0x1f0u); M32(m_) = (u32)(eax); }
L_00515e52:;
  /* 00515e52 mov eax, dword ptr [edi + 0x228] */ { const u32 m_ = (u32)(edi + 0x228u); eax = (u32)(M32(m_)); }
  /* 00515e58 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00515e5a mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00515e5c test byte ptr [eax + 4], 1 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00515e60 je 0x515e9d */ if (ZF_) goto L_00515e9d;
  /* 00515e62 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00515e64 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00515e67 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00515e68 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00515e6b mov byte ptr [ebp - 4], 0xff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xffu); }
  /* 00515e6f mov byte ptr [ebp - 3], 0xe5 */ { const u32 m_ = (u32)(ebp + 0xfffffffdu); M8(m_) = (u8)(0xe5u); }
  /* 00515e73 mov byte ptr [ebp - 2], 0xbd */ { const u32 m_ = (u32)(ebp + 0xfffffffeu); M8(m_) = (u8)(0xbdu); }
  /* 00515e77 mov byte ptr [ebp - 1], 0x40 */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)(0x40u); }
  /* 00515e7b call 0x527040 */ esp -= 4; M32(esp) = 0x515e80u; SAVEALL; F_00527040(c); ABI_CHECK(0x527040u, 0x515e7bu); RETCHK(0x515e80u, 0x515e7bu); LOADALL;
  /* 00515e80 mov eax, 0xffffa200 */ { eax = (u32)(0xffffa200u); }
  /* 00515e85 mov dword ptr [edi + 0x19c], eax */ { const u32 m_ = (u32)(edi + 0x19cu); M32(m_) = (u32)(eax); }
  /* 00515e8b mov dword ptr [edi + 0x1b8], eax */ { const u32 m_ = (u32)(edi + 0x1b8u); M32(m_) = (u32)(eax); }
  /* 00515e91 mov dword ptr [edi + 0x1d4], eax */ { const u32 m_ = (u32)(edi + 0x1d4u); M32(m_) = (u32)(eax); }
  /* 00515e97 mov dword ptr [edi + 0x1f0], eax */ { const u32 m_ = (u32)(edi + 0x1f0u); M32(m_) = (u32)(eax); }
L_00515e9d:;
  /* 00515e9d lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00515ea0 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00515ea3 call 0x52cea0 */ esp -= 4; M32(esp) = 0x515ea8u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x515ea3u); RETCHK(0x515ea8u, 0x515ea3u); LOADALL;
  /* 00515ea8 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 00515eab fsub dword ptr [0x656ef0] */ { const u32 m_ = (u32)(0x656ef0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00515eb1 mov esi, dword ptr [edi + 0x218] */ { const u32 m_ = (u32)(edi + 0x218u); esi = (u32)(M32(m_)); }
  /* 00515eb7 cmp esi, dword ptr [edi + 0x21c] */ { const u32 m_ = (u32)(edi + 0x21cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515ebd fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00515ec0 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00515ec3 fsub dword ptr [0x656ef0] */ { const u32 m_ = (u32)(0x656ef0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00515ec9 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00515ecc je 0x515f1e */ if (ZF_) goto L_00515f1e;
  /* 00515ece mov edi, edi */ { edi = (u32)(edi); }
L_00515ed0:;
  /* 00515ed0 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00515ed2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515ed4 je 0x515f11 */ if (ZF_) goto L_00515f11;
  /* 00515ed6 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 00515ed9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515edb je 0x515f11 */ if (ZF_) goto L_00515f11;
  /* 00515edd fild dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 00515ee0 fadd dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00515ee3 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00515ee6 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00515ee8 mov ecx, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00515eeb test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515eed je 0x515f0b */ if (ZF_) goto L_00515f0b;
  /* 00515eef mov eax, dword ptr [edi + 0x228] */ { const u32 m_ = (u32)(edi + 0x228u); eax = (u32)(M32(m_)); }
  /* 00515ef5 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00515ef7 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00515ef9 lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00515efc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00515efd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00515efe lea edx, [edi + 0x180] */ edx = (u32)((u32)(edi + 0x180u));
  /* 00515f04 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00515f05 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00515f06 call ecx */ { u32 t_ = ecx; esp -= 4; M32(esp) = 0x515f08u; SAVEALL; call_ind(c, t_); RETCHK(0x515f08u, 0x515f06u); LOADALL; }
  /* 00515f08 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00515f0b:;
  /* 00515f0b mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00515f0e mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
L_00515f11:;
  /* 00515f11 mov eax, dword ptr [edi + 0x21c] */ { const u32 m_ = (u32)(edi + 0x21cu); eax = (u32)(M32(m_)); }
  /* 00515f17 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00515f1a cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515f1c jne 0x515ed0 */ if (!ZF_) goto L_00515ed0;
L_00515f1e:;
  /* 00515f1e mov eax, dword ptr [edi + 0x228] */ { const u32 m_ = (u32)(edi + 0x228u); eax = (u32)(M32(m_)); }
  /* 00515f24 mov ecx, dword ptr [eax + ebx] */ { const u32 m_ = (u32)(eax + ebx); ecx = (u32)(M32(m_)); }
  /* 00515f27 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00515f29 test byte ptr [ecx + 4], 9 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M8(m_), b_ = 0x9u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00515f2d je 0x515f4d */ if (ZF_) goto L_00515f4d;
  /* 00515f2f lea ecx, [edi + 0x180] */ ecx = (u32)((u32)(edi + 0x180u));
  /* 00515f35 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00515f38 mov byte ptr [ebp - 8], 0xff */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M8(m_) = (u8)(0xffu); }
  /* 00515f3c mov byte ptr [ebp - 7], 0xff */ { const u32 m_ = (u32)(ebp + 0xfffffff9u); M8(m_) = (u8)(0xffu); }
  /* 00515f40 mov byte ptr [ebp - 6], 0xff */ { const u32 m_ = (u32)(ebp + 0xfffffffau); M8(m_) = (u8)(0xffu); }
  /* 00515f44 mov byte ptr [ebp - 5], 0xff */ { const u32 m_ = (u32)(ebp + 0xfffffffbu); M8(m_) = (u8)(0xffu); }
  /* 00515f48 call 0x526840 */ esp -= 4; M32(esp) = 0x515f4du; SAVEALL; F_00526840(c); ABI_CHECK(0x526840u, 0x515f48u); RETCHK(0x515f4du, 0x515f48u); LOADALL;
L_00515f4d:;
  /* 00515f4d fild dword ptr [edi + 0x29c] */ { const u32 m_ = (u32)(edi + 0x29cu); FPUSH((double)(s32)M32(m_)); }
  /* 00515f53 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 00515f56 mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 00515f59 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00515f5c fadd dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00515f5f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00515f60 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00515f62 mov dword ptr [ebp - 0x2c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edx); }
  /* 00515f65 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00515f68 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00515f6b jl 0x515dfb */ if (LT_) goto L_00515dfb;
L_00515f71:;
  /* 00515f71 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00515f72 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00515f73 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00515f74 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00515f76 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00515f77 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00515f80(CPU *c) {
  NATIVE_HOOK(0x515f80u) REGS; LOADALL;
L_00515f80:;
  /* 00515f80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515f81 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00515f83 call 0x5156e0 */ esp -= 4; M32(esp) = 0x515f88u; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x515f83u); RETCHK(0x515f88u, 0x515f83u); LOADALL;
  /* 00515f88 mov eax, dword ptr [esi + 0x288] */ { const u32 m_ = (u32)(esi + 0x288u); eax = (u32)(M32(m_)); }
  /* 00515f8e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515f90 je 0x515fa5 */ if (ZF_) goto L_00515fa5;
  /* 00515f92 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00515f93 call 0x5ab020 */ esp -= 4; M32(esp) = 0x515f98u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x515f93u); RETCHK(0x515f98u, 0x515f93u); LOADALL;
  /* 00515f98 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00515f9b mov dword ptr [esi + 0x288], 0 */ { const u32 m_ = (u32)(esi + 0x288u); M32(m_) = (u32)(0x0u); }
L_00515fa5:;
  /* 00515fa5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00515fa6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00515fb0(CPU *c) {
  NATIVE_HOOK(0x515fb0u) REGS; LOADALL;
L_00515fb0:;
  /* 00515fb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00515fb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00515fb3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00515fb5 push 0x61bac8 */ { u32 v_ = 0x61bac8u; esp -= 4; M32(esp) = v_; }
  /* 00515fba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00515fc0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00515fc1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00515fc8 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00515fcb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00515fcc mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00515fce mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00515fd1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00515fd3 jne 0x515fe8 */ if (!ZF_) goto L_00515fe8;
  /* 00515fd5 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00515fd7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00515fd8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00515fdb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00515fe2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00515fe4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00515fe5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00515fe8:;
  /* 00515fe8 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00515fea push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00515feb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00515fec call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x515fefu; SAVEALL; call_ind(c, t_); RETCHK(0x515fefu, 0x515fecu); LOADALL; }
  /* 00515fef push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 00515ff4 mov esi, eax */ { esi = (u32)(eax); }
  /* 00515ff6 call 0x560fd0 */ esp -= 4; M32(esp) = 0x515ffbu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x515ff6u); RETCHK(0x515ffbu, 0x515ff6u); LOADALL;
  /* 00515ffb mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00515ffe fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00516001 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 00516006 mov eax, esi */ { eax = (u32)(esi); }
  /* 00516008 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051600b call 0x560fd0 */ esp -= 4; M32(esp) = 0x516010u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x51600bu); RETCHK(0x516010u, 0x51600bu); LOADALL;
  /* 00516010 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00516013 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00516016 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 0051601b mov eax, esi */ { eax = (u32)(esi); }
  /* 0051601d fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00516020 call 0x560fd0 */ esp -= 4; M32(esp) = 0x516025u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x516020u); RETCHK(0x516025u, 0x516020u); LOADALL;
  /* 00516025 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00516028 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0051602b push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 00516030 mov eax, esi */ { eax = (u32)(esi); }
  /* 00516032 fadd dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00516035 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00516038 call 0x560fd0 */ esp -= 4; M32(esp) = 0x51603du; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x516038u); RETCHK(0x51603du, 0x516038u); LOADALL;
  /* 0051603d mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00516040 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00516043 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516044 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 00516049 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051604c fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051604f call 0x560ed0 */ esp -= 4; M32(esp) = 0x516054u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x51604fu); RETCHK(0x516054u, 0x51604fu); LOADALL;
  /* 00516054 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00516056 push 0x650194 */ { u32 v_ = 0x650194u; esp -= 4; M32(esp) = v_; }
  /* 0051605b mov eax, esi */ { eax = (u32)(esi); }
  /* 0051605d call 0x560fd0 */ esp -= 4; M32(esp) = 0x516062u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x51605du); RETCHK(0x516062u, 0x51605du); LOADALL;
  /* 00516062 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00516065 push 0x651fd8 */ { u32 v_ = 0x651fd8u; esp -= 4; M32(esp) = v_; }
  /* 0051606a mov eax, esi */ { eax = (u32)(esi); }
  /* 0051606c call 0x560fd0 */ esp -= 4; M32(esp) = 0x516071u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x51606cu); RETCHK(0x516071u, 0x51606cu); LOADALL;
  /* 00516071 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00516074 mov eax, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00516077 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00516079 je 0x516087 */ if (ZF_) goto L_00516087;
  /* 0051607b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051607c lea esi, [ebp - 0x20] */ esi = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0051607f call 0x52d060 */ esp -= 4; M32(esp) = 0x516084u; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x51607fu); RETCHK(0x516084u, 0x51607fu); LOADALL;
  /* 00516084 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00516087:;
  /* 00516087 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00516089 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0051608b mov dword ptr [ebp - 0x24], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0xfu); }
  /* 00516092 mov dword ptr [ebp - 0x28], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(esi); }
  /* 00516095 mov byte ptr [ebp - 0x38], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)(0x0u); }
  /* 00516099 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0051609c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005160a0:;
  /* 005160a0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005160a2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005160a3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005160a5 jne 0x5160a0 */ if (!ZF_) goto L_005160a0;
  /* 005160a7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005160a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005160aa push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005160ab lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 005160ae call 0x404420 */ esp -= 4; M32(esp) = 0x5160b3u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5160aeu); RETCHK(0x5160b3u, 0x5160aeu); LOADALL;
  /* 005160b3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005160b6 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005160b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005160ba push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005160bb lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 005160be push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005160bf lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 005160c2 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 005160c5 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 005160c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005160c8 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005160ca call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5160d0u; SAVEALL; call_ind(c, t_); RETCHK(0x5160d0u, 0x5160cau); LOADALL; }
  /* 005160d0 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 005160d2 cmp dword ptr [ebp - 0x24], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005160d6 jb 0x5160e4 */ if (CF_) goto L_005160e4;
  /* 005160d8 mov edx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); edx = (u32)(M32(m_)); }
  /* 005160db push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005160dc call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5160e1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5160dcu); RETCHK(0x5160e1u, 0x5160dcu); LOADALL;
  /* 005160e1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005160e4:;
  /* 005160e4 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005160e7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005160e8 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 005160ea pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005160eb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005160ec mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005160f3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005160f5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005160f6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00516100(CPU *c) {
  NATIVE_HOOK(0x516100u) REGS; LOADALL;
L_00516100:;
  /* 00516100 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00516101 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00516103 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516106 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00516107 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516108 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051610a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051610b mov eax, esi */ { eax = (u32)(esi); }
  /* 0051610d call 0x5159a0 */ esp -= 4; M32(esp) = 0x516112u; SAVEALL; F_005159a0(c); ABI_CHECK(0x5159a0u, 0x51610du); RETCHK(0x516112u, 0x51610du); LOADALL;
  /* 00516112 mov edi, eax */ { edi = (u32)(eax); }
  /* 00516114 mov eax, esi */ { eax = (u32)(esi); }
  /* 00516116 call 0x515a50 */ esp -= 4; M32(esp) = 0x51611bu; SAVEALL; F_00515a50(c); ABI_CHECK(0x515a50u, 0x516116u); RETCHK(0x51611bu, 0x516116u); LOADALL;
  /* 0051611b mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0051611e mov edx, eax */ { edx = (u32)(eax); }
  /* 00516120 lea eax, [ebx - 0xd] */ eax = (u32)((u32)(ebx + 0xfffffff3u));
  /* 00516123 cmp eax, 0x1b */ { u32 a_ = eax, b_ = 0x1bu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00516126 ja 0x516235 */ if (!(CF_|ZF_)) goto L_00516235;
  /* 0051612c movzx eax, byte ptr [eax + 0x516268] */ { const u32 m_ = (u32)(eax + 0x516268u); eax = (u32)(M8(m_)); }
  /* 00516133 jmp dword ptr [eax*4 + 0x516250] */ { const u32 m_ = (u32)(eax * 4u + 0x516250u); u32 t_ = M32(m_); switch (t_) { case 0x51613au: goto L_0051613a; case 0x516165u: goto L_00516165; case 0x5161a9u: goto L_005161a9; case 0x5161c4u: goto L_005161c4; case 0x5161e3u: goto L_005161e3; case 0x516235u: goto L_00516235; default: SAVEALL; call_ind(c, t_); return; } }
L_0051613a:;
  /* 0051613a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051613c jle 0x516235 */ if ((ZF_|LT_)) goto L_00516235;
  /* 00516142 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00516143 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00516144 call 0x5159d0 */ esp -= 4; M32(esp) = 0x516149u; SAVEALL; F_005159d0(c); ABI_CHECK(0x5159d0u, 0x516144u); RETCHK(0x516149u, 0x516144u); LOADALL;
  /* 00516149 cmp edi, dword ptr [esi + 0x2a0] */ { const u32 m_ = (u32)(esi + 0x2a0u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051614f jge 0x51615a */ if (!LT_) goto L_0051615a;
  /* 00516151 mov eax, edi */ { eax = (u32)(edi); }
  /* 00516153 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00516155 call 0x515b00 */ esp -= 4; M32(esp) = 0x51615au; SAVEALL; F_00515b00(c); ABI_CHECK(0x515b00u, 0x516155u); RETCHK(0x51615au, 0x516155u); LOADALL;
L_0051615a:;
  /* 0051615a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051615b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051615c mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0051615e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051615f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00516161 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00516162 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00516165:;
  /* 00516165 mov eax, esi */ { eax = (u32)(esi); }
  /* 00516167 call 0x515460 */ esp -= 4; M32(esp) = 0x51616cu; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x516167u); RETCHK(0x51616cu, 0x516167u); LOADALL;
  /* 0051616c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051616d cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051616f jge 0x516235 */ if (!LT_) goto L_00516235;
  /* 00516175 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00516176 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00516177 call 0x5159d0 */ esp -= 4; M32(esp) = 0x51617cu; SAVEALL; F_005159d0(c); ABI_CHECK(0x5159d0u, 0x516177u); RETCHK(0x51617cu, 0x516177u); LOADALL;
  /* 0051617c call 0x515480 */ esp -= 4; M32(esp) = 0x516181u; SAVEALL; F_00515480(c); ABI_CHECK(0x515480u, 0x51617cu); RETCHK(0x516181u, 0x51617cu); LOADALL;
  /* 00516181 add eax, dword ptr [esi + 0x2a0] */ { const u32 m_ = (u32)(esi + 0x2a0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00516187 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00516189 jl 0x51619e */ if (LT_) goto L_0051619e;
  /* 0051618b call 0x515480 */ esp -= 4; M32(esp) = 0x516190u; SAVEALL; F_00515480(c); ABI_CHECK(0x515480u, 0x51618bu); RETCHK(0x516190u, 0x51618bu); LOADALL;
  /* 00516190 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00516192 mov eax, edi */ { eax = (u32)(edi); }
  /* 00516194 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00516196 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00516197 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00516199 call 0x515b00 */ esp -= 4; M32(esp) = 0x51619eu; SAVEALL; F_00515b00(c); ABI_CHECK(0x515b00u, 0x516199u); RETCHK(0x51619eu, 0x516199u); LOADALL;
L_0051619e:;
  /* 0051619e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051619f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005161a0 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005161a2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005161a3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005161a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005161a6 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005161a9:;
  /* 005161a9 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005161ab jle 0x516235 */ if ((ZF_|LT_)) goto L_00516235;
  /* 005161b1 lea eax, [edx - 1] */ eax = (u32)((u32)(edx + 0xffffffffu));
  /* 005161b4 call 0x515a80 */ esp -= 4; M32(esp) = 0x5161b9u; SAVEALL; F_00515a80(c); ABI_CHECK(0x515a80u, 0x5161b4u); RETCHK(0x5161b9u, 0x5161b4u); LOADALL;
  /* 005161b9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005161ba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005161bb mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005161bd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005161be mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005161c0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005161c1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005161c4:;
  /* 005161c4 mov eax, esi */ { eax = (u32)(esi); }
  /* 005161c6 call 0x515440 */ esp -= 4; M32(esp) = 0x5161cbu; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x5161c6u); RETCHK(0x5161cbu, 0x5161c6u); LOADALL;
  /* 005161cb dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005161cc cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005161ce jge 0x516235 */ if (!LT_) goto L_00516235;
  /* 005161d0 lea eax, [edx + 1] */ eax = (u32)((u32)(edx + 0x1u));
  /* 005161d3 call 0x515a80 */ esp -= 4; M32(esp) = 0x5161d8u; SAVEALL; F_00515a80(c); ABI_CHECK(0x515a80u, 0x5161d3u); RETCHK(0x5161d8u, 0x5161d3u); LOADALL;
  /* 005161d8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005161d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005161da mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005161dc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005161dd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005161df pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005161e0 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005161e3:;
  /* 005161e3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005161e4 lea edi, [ebp - 0x18] */ edi = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005161e7 call 0x5153e0 */ esp -= 4; M32(esp) = 0x5161ecu; SAVEALL; F_005153e0(c); ABI_CHECK(0x5153e0u, 0x5161e7u); RETCHK(0x5161ecu, 0x5161e7u); LOADALL;
  /* 005161ec fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 005161ef fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005161f2 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005161f4 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005161f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005161f8 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005161fe push 0xfffffba9 */ { u32 v_ = 0xfffffba9u; esp -= 4; M32(esp) = v_; }
  /* 00516203 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00516205 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00516208 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0051620b fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051620e fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00516214 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00516217 call dword ptr [edx + 0x6c] */ { const u32 m_ = (u32)(edx + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51621au; SAVEALL; call_ind(c, t_); RETCHK(0x51621au, 0x516217u); LOADALL; }
  /* 0051621a mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0051621c lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0051621f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00516220 push 0xfffffba9 */ { u32 v_ = 0xfffffba9u; esp -= 4; M32(esp) = v_; }
  /* 00516225 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00516227 call dword ptr [edx + 0x70] */ { const u32 m_ = (u32)(edx + 0x70u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51622au; SAVEALL; call_ind(c, t_); RETCHK(0x51622au, 0x516227u); LOADALL; }
  /* 0051622a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051622b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051622c mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0051622e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051622f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00516231 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00516232 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00516235:;
  /* 00516235 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00516238 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0051623b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051623c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051623d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051623e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00516240 call 0x508230 */ esp -= 4; M32(esp) = 0x516245u; SAVEALL; F_00508230(c); ABI_CHECK(0x508230u, 0x516240u); RETCHK(0x516245u, 0x516240u); LOADALL;
  /* 00516245 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00516246 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00516247 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00516248 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051624a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051624b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00516290(CPU *c) {
  NATIVE_HOOK(0x516290u) REGS; LOADALL;
L_00516290:;
  /* 00516290 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00516291 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00516293 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516296 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00516297 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0051629a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051629b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051629c mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0051629e mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005162a5 call 0x507c00 */ esp -= 4; M32(esp) = 0x5162aau; SAVEALL; F_00507c00(c); ABI_CHECK(0x507c00u, 0x5162a5u); RETCHK(0x5162aau, 0x5162a5u); LOADALL;
  /* 005162aa test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005162ac jne 0x5162b8 */ if (!ZF_) goto L_005162b8;
  /* 005162ae pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005162af xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005162b1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005162b2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005162b4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005162b5 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005162b8:;
  /* 005162b8 fld dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 005162bb fsub dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005162be fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005162c4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005162c6 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005162c9 je 0x5162d3 */ if (ZF_) goto L_005162d3;
  /* 005162cb fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005162cd fld dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 005162d0 fsub dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005162d3:;
  /* 005162d3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005162d4 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005162d7 mov edx, edi */ { edx = (u32)(edi); }
  /* 005162d9 call 0x515360 */ esp -= 4; M32(esp) = 0x5162deu; SAVEALL; F_00515360(c); ABI_CHECK(0x515360u, 0x5162d9u); RETCHK(0x5162deu, 0x5162d9u); LOADALL;
  /* 005162de mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 005162e1 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 005162e4 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 005162e7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005162e8 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005162eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005162ec push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005162ee push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005162f0 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 005162f3 call 0x52cec0 */ esp -= 4; M32(esp) = 0x5162f8u; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x5162f3u); RETCHK(0x5162f8u, 0x5162f3u); LOADALL;
  /* 005162f8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005162f9 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 005162fc call 0x52cf90 */ esp -= 4; M32(esp) = 0x516301u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x5162fcu); RETCHK(0x516301u, 0x5162fcu); LOADALL;
  /* 00516301 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516304 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00516306 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00516308 call 0x52cf00 */ esp -= 4; M32(esp) = 0x51630du; SAVEALL; F_0052cf00(c); ABI_CHECK(0x52cf00u, 0x516308u); RETCHK(0x51630du, 0x516308u); LOADALL;
  /* 0051630d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051630f je 0x51638d */ if (ZF_) goto L_0051638d;
  /* 00516311 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00516314 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00516317 mov dword ptr [ecx], 0xffffffff */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0xffffffffu); }
  /* 0051631d mov eax, edi */ { eax = (u32)(edi); }
  /* 0051631f mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 00516325 call 0x515440 */ esp -= 4; M32(esp) = 0x51632au; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x516325u); RETCHK(0x51632au, 0x516325u); LOADALL;
  /* 0051632a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051632c jle 0x5164ea */ if ((ZF_|LT_)) goto L_005164ea;
L_00516332:;
  /* 00516332 mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 00516334 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00516336 mov eax, edi */ { eax = (u32)(edi); }
  /* 00516338 call 0x5153a0 */ esp -= 4; M32(esp) = 0x51633du; SAVEALL; F_005153a0(c); ABI_CHECK(0x5153a0u, 0x516338u); RETCHK(0x51633du, 0x516338u); LOADALL;
  /* 0051633d mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00516340 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 00516343 fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 00516346 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00516349 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051634c fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051634f call 0x52cf00 */ esp -= 4; M32(esp) = 0x516354u; SAVEALL; F_0052cf00(c); ABI_CHECK(0x52cf00u, 0x51634fu); RETCHK(0x516354u, 0x51634fu); LOADALL;
  /* 00516354 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00516356 jne 0x51637a */ if (!ZF_) goto L_0051637a;
  /* 00516358 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 0051635b inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051635c mov eax, edi */ { eax = (u32)(edi); }
  /* 0051635e mov dword ptr [ebp - 0x1c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edx); }
  /* 00516361 mov dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ebx); }
  /* 00516363 call 0x515440 */ esp -= 4; M32(esp) = 0x516368u; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x516363u); RETCHK(0x516368u, 0x516363u); LOADALL;
  /* 00516368 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0051636a cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051636c jl 0x516332 */ if (LT_) goto L_00516332;
  /* 0051636e mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00516371 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00516372 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00516373 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00516374 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00516376 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00516377 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0051637a:;
  /* 0051637a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051637b mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00516382 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00516385 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00516386 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00516387 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00516389 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051638a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0051638d:;
  /* 0051638d fld dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 00516390 fsub dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00516393 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00516399 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051639b test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051639e je 0x5163a8 */ if (ZF_) goto L_005163a8;
  /* 005163a0 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005163a2 fld dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 005163a5 fsub dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005163a8:;
  /* 005163a8 mov edx, edi */ { edx = (u32)(edi); }
  /* 005163aa fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005163ad call 0x515360 */ esp -= 4; M32(esp) = 0x5163b2u; SAVEALL; F_00515360(c); ABI_CHECK(0x515360u, 0x5163adu); RETCHK(0x5163b2u, 0x5163adu); LOADALL;
  /* 005163b2 add eax, dword ptr [edi + 0x29c] */ { const u32 m_ = (u32)(edi + 0x29cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005163b8 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 005163bb fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 005163be mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 005163c1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005163c2 mov edx, edi */ { edx = (u32)(edi); }
  /* 005163c4 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005163c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005163c8 call 0x515360 */ esp -= 4; M32(esp) = 0x5163cdu; SAVEALL; F_00515360(c); ABI_CHECK(0x515360u, 0x5163c8u); RETCHK(0x5163cdu, 0x5163c8u); LOADALL;
  /* 005163cd mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 005163d0 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 005163d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005163d4 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 005163d7 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005163da push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005163dc call 0x52cec0 */ esp -= 4; M32(esp) = 0x5163e1u; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x5163dcu); RETCHK(0x5163e1u, 0x5163dcu); LOADALL;
  /* 005163e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005163e2 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 005163e5 call 0x52cf90 */ esp -= 4; M32(esp) = 0x5163eau; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x5163e5u); RETCHK(0x5163eau, 0x5163e5u); LOADALL;
  /* 005163ea mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005163ed mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 005163f0 mov dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x0u); }
  /* 005163f6 mov dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x0u); }
  /* 005163fc mov edx, dword ptr [edi + 0x2a0] */ { const u32 m_ = (u32)(edi + 0x2a0u); edx = (u32)(M32(m_)); }
  /* 00516402 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516405 mov esi, edi */ { esi = (u32)(edi); }
  /* 00516407 mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0051640a call 0x515480 */ esp -= 4; M32(esp) = 0x51640fu; SAVEALL; F_00515480(c); ABI_CHECK(0x515480u, 0x51640au); RETCHK(0x51640fu, 0x51640au); LOADALL;
  /* 0051640f mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00516412 mov esi, eax */ { esi = (u32)(eax); }
  /* 00516414 mov eax, edi */ { eax = (u32)(edi); }
  /* 00516416 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00516418 call 0x515460 */ esp -= 4; M32(esp) = 0x51641du; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x516418u); RETCHK(0x51641du, 0x516418u); LOADALL;
  /* 0051641d cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051641f jge 0x51642c */ if (!LT_) goto L_0051642c;
  /* 00516421 mov eax, edi */ { eax = (u32)(edi); }
  /* 00516423 call 0x515460 */ esp -= 4; M32(esp) = 0x516428u; SAVEALL; F_00515460(c); ABI_CHECK(0x515460u, 0x516423u); RETCHK(0x516428u, 0x516423u); LOADALL;
  /* 00516428 mov esi, eax */ { esi = (u32)(eax); }
  /* 0051642a jmp 0x51643c */ goto L_0051643c;
L_0051642c:;
  /* 0051642c mov esi, edi */ { esi = (u32)(edi); }
  /* 0051642e call 0x515480 */ esp -= 4; M32(esp) = 0x516433u; SAVEALL; F_00515480(c); ABI_CHECK(0x515480u, 0x51642eu); RETCHK(0x516433u, 0x51642eu); LOADALL;
  /* 00516433 mov esi, eax */ { esi = (u32)(eax); }
  /* 00516435 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00516438 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051643a mov edx, eax */ { edx = (u32)(eax); }
L_0051643c:;
  /* 0051643c cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051643e mov dword ptr [ebx], edx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edx); }
  /* 00516440 jge 0x5164ea */ if (!LT_) goto L_005164ea;
  /* 00516446 jmp 0x516450 */ goto L_00516450;
L_00516450:;
  /* 00516450 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00516453 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00516456 call 0x52cf00 */ esp -= 4; M32(esp) = 0x51645bu; SAVEALL; F_0052cf00(c); ABI_CHECK(0x52cf00u, 0x516456u); RETCHK(0x51645bu, 0x516456u); LOADALL;
  /* 0051645b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051645d jne 0x516488 */ if (!ZF_) goto L_00516488;
  /* 0051645f fild dword ptr [edi + 0x29c] */ { const u32 m_ = (u32)(edi + 0x29cu); FPUSH((double)(s32)M32(m_)); }
  /* 00516465 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00516468 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 0051646a inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051646b fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051646e mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00516471 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00516473 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00516475 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00516478 mov dword ptr [ebx], ecx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(ecx); }
  /* 0051647a jl 0x516450 */ if (LT_) goto L_00516450;
  /* 0051647c mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0051647f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00516480 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00516481 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00516482 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00516484 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00516485 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00516488:;
  /* 00516488 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0051648b lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0051648e call 0x52cea0 */ esp -= 4; M32(esp) = 0x516493u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x51648eu); RETCHK(0x516493u, 0x51648eu); LOADALL;
  /* 00516493 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00516496 mov eax, edi */ { eax = (u32)(edi); }
  /* 00516498 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 0051649e call 0x515440 */ esp -= 4; M32(esp) = 0x5164a3u; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x51649eu); RETCHK(0x5164a3u, 0x51649eu); LOADALL;
  /* 005164a3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005164a5 jle 0x5164e3 */ if ((ZF_|LT_)) goto L_005164e3;
L_005164a7:;
  /* 005164a7 mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 005164a9 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005164ab mov eax, edi */ { eax = (u32)(edi); }
  /* 005164ad call 0x5153a0 */ esp -= 4; M32(esp) = 0x5164b2u; SAVEALL; F_005153a0(c); ABI_CHECK(0x5153a0u, 0x5164adu); RETCHK(0x5164b2u, 0x5164adu); LOADALL;
  /* 005164b2 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005164b5 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 005164b8 fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 005164bb lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 005164be fadd dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005164c1 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005164c4 call 0x52cf00 */ esp -= 4; M32(esp) = 0x5164c9u; SAVEALL; F_0052cf00(c); ABI_CHECK(0x52cf00u, 0x5164c4u); RETCHK(0x5164c9u, 0x5164c4u); LOADALL;
  /* 005164c9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005164cb jne 0x5164e3 */ if (!ZF_) goto L_005164e3;
  /* 005164cd mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 005164d0 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005164d1 mov eax, edi */ { eax = (u32)(edi); }
  /* 005164d3 mov dword ptr [ebp - 0x2c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ecx); }
  /* 005164d6 mov dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ebx); }
  /* 005164d8 call 0x515440 */ esp -= 4; M32(esp) = 0x5164ddu; SAVEALL; F_00515440(c); ABI_CHECK(0x515440u, 0x5164d8u); RETCHK(0x5164ddu, 0x5164d8u); LOADALL;
  /* 005164dd mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005164df cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005164e1 jl 0x5164a7 */ if (LT_) goto L_005164a7;
L_005164e3:;
  /* 005164e3 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
L_005164ea:;
  /* 005164ea mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005164ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005164ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005164ef pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005164f0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005164f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005164f3 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00516500(CPU *c) {
  NATIVE_HOOK(0x516500u) REGS; LOADALL;
L_00516500:;
  /* 00516500 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00516501 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00516503 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00516504 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00516505 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516506 mov esi, eax */ { esi = (u32)(eax); }
  /* 00516508 mov ebx, dword ptr [esi + 0x228] */ { const u32 m_ = (u32)(esi + 0x228u); ebx = (u32)(M32(m_)); }
  /* 0051650e mov eax, dword ptr [esi + 0x22c] */ { const u32 m_ = (u32)(esi + 0x22cu); eax = (u32)(M32(m_)); }
  /* 00516514 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00516516 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00516517 je 0x51655f */ if (ZF_) goto L_0051655f;
  /* 00516519 lea edi, [ebx + 4] */ edi = (u32)((u32)(ebx + 0x4u));
  /* 0051651c mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0051651f nop */ ;
L_00516520:;
  /* 00516520 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00516522 je 0x51654c */ if (ZF_) goto L_0051654c;
L_00516524:;
  /* 00516524 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00516526 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 00516528 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00516529 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051652a call dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51652du; SAVEALL; call_ind(c, t_); RETCHK(0x51652du, 0x51652au); LOADALL; }
  /* 0051652d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516530 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00516532 jle 0x51653c */ if ((ZF_|LT_)) goto L_0051653c;
  /* 00516534 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00516536 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00516538 mov dword ptr [ebx], edx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edx); }
  /* 0051653a mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
L_0051653c:;
  /* 0051653c mov eax, dword ptr [esi + 0x22c] */ { const u32 m_ = (u32)(esi + 0x22cu); eax = (u32)(M32(m_)); }
  /* 00516542 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00516545 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00516547 jne 0x516524 */ if (!ZF_) goto L_00516524;
  /* 00516549 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
L_0051654c:;
  /* 0051654c mov eax, dword ptr [esi + 0x22c] */ { const u32 m_ = (u32)(esi + 0x22cu); eax = (u32)(M32(m_)); }
  /* 00516552 add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00516555 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00516558 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051655a mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0051655d jne 0x516520 */ if (!ZF_) goto L_00516520;
L_0051655f:;
  /* 0051655f mov eax, esi */ { eax = (u32)(esi); }
  /* 00516561 call 0x5159a0 */ esp -= 4; M32(esp) = 0x516566u; SAVEALL; F_005159a0(c); ABI_CHECK(0x5159a0u, 0x516561u); RETCHK(0x516566u, 0x516561u); LOADALL;
  /* 00516566 mov edi, eax */ { edi = (u32)(eax); }
  /* 00516568 call 0x515480 */ esp -= 4; M32(esp) = 0x51656du; SAVEALL; F_00515480(c); ABI_CHECK(0x515480u, 0x516568u); RETCHK(0x51656du, 0x516568u); LOADALL;
  /* 0051656d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051656f mov eax, edi */ { eax = (u32)(edi); }
  /* 00516571 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00516572 idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x516572u); eax = q_; edx = r_; }
  /* 00516574 mov edi, eax */ { edi = (u32)(eax); }
  /* 00516576 call 0x515480 */ esp -= 4; M32(esp) = 0x51657bu; SAVEALL; F_00515480(c); ABI_CHECK(0x515480u, 0x516576u); RETCHK(0x51657bu, 0x516576u); LOADALL;
  /* 0051657b imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0051657e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00516580 call 0x515b00 */ esp -= 4; M32(esp) = 0x516585u; SAVEALL; F_00515b00(c); ABI_CHECK(0x515b00u, 0x516580u); RETCHK(0x516585u, 0x516580u); LOADALL;
  /* 00516585 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00516586 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00516587 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00516588 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051658a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051658b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00516590(CPU *c) {
  NATIVE_HOOK(0x516590u) REGS; LOADALL;
L_00516590:;
  /* 00516590 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00516591 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00516593 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 00516595 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00516597 jne 0x516604 */ if (!ZF_) goto L_00516604;
  /* 00516599 fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0051659c fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051659f fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005165a5 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005165a7 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005165aa je 0x5165b4 */ if (ZF_) goto L_005165b4;
  /* 005165ac fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005165ae fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005165b1 fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005165b4:;
  /* 005165b4 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005165b7 fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005165b9 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005165bf fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005165c1 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005165c4 je 0x5165cd */ if (ZF_) goto L_005165cd;
  /* 005165c6 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005165c8 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 005165ca fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005165cd:;
  /* 005165cd fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005165cf call 0x61b154 */ esp -= 4; M32(esp) = 0x5165d4u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5165cfu); RETCHK(0x5165d4u, 0x5165cfu); LOADALL;
  /* 005165d4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005165d5 call 0x61b154 */ esp -= 4; M32(esp) = 0x5165dau; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5165d5u); RETCHK(0x5165dau, 0x5165d5u); LOADALL;
  /* 005165da mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005165dd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005165de mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005165e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005165e2 add ecx, 0x234 */ { u32 a_ = ecx, b_ = 0x234u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005165e8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005165e9 call 0x5288e0 */ esp -= 4; M32(esp) = 0x5165eeu; SAVEALL; F_005288e0(c); ABI_CHECK(0x5288e0u, 0x5165e9u); RETCHK(0x5165eeu, 0x5165e9u); LOADALL;
  /* 005165ee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005165f1 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005165f3 mov edx, eax */ { edx = (u32)(eax); }
  /* 005165f5 call 0x528970 */ esp -= 4; M32(esp) = 0x5165fau; SAVEALL; F_00528970(c); ABI_CHECK(0x528970u, 0x5165f5u); RETCHK(0x5165fau, 0x5165f5u); LOADALL;
  /* 005165fa mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 005165fc test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005165fe je 0x516699 */ if (ZF_) goto L_00516699;
L_00516604:;
  /* 00516604 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00516606 call 0x526830 */ esp -= 4; M32(esp) = 0x51660bu; SAVEALL; F_00526830(c); ABI_CHECK(0x526830u, 0x516606u); RETCHK(0x51660bu, 0x516606u); LOADALL;
  /* 0051660b mov eax, 0x68a6b4 */ { eax = (u32)(0x68a6b4u); }
  /* 00516610 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00516612 call 0x526840 */ esp -= 4; M32(esp) = 0x516617u; SAVEALL; F_00526840(c); ABI_CHECK(0x526840u, 0x516612u); RETCHK(0x516617u, 0x516612u); LOADALL;
  /* 00516617 mov eax, dword ptr [0x7a6e2c] */ { const u32 m_ = (u32)(0x7a6e2cu); eax = (u32)(M32(m_)); }
  /* 0051661c mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0051661f test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00516621 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00516626 je 0x516639 */ if (ZF_) goto L_00516639;
  /* 00516628 cmp dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051662b je 0x516639 */ if (ZF_) goto L_00516639;
  /* 0051662d mov dword ptr [ebx + 0x84], 2 */ { const u32 m_ = (u32)(ebx + 0x84u); M32(m_) = (u32)(0x2u); }
  /* 00516637 jmp 0x51663f */ goto L_0051663f;
L_00516639:;
  /* 00516639 mov dword ptr [ebx + 0x84], ecx */ { const u32 m_ = (u32)(ebx + 0x84u); M32(m_) = (u32)(ecx); }
L_0051663f:;
  /* 0051663f fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00516642 fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00516645 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051664b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051664d test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00516650 je 0x51665a */ if (ZF_) goto L_0051665a;
  /* 00516652 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00516654 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00516657 fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051665a:;
  /* 0051665a fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0051665d fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051665f fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00516665 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00516667 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051666a je 0x516673 */ if (ZF_) goto L_00516673;
  /* 0051666c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051666e fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00516670 fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00516673:;
  /* 00516673 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00516675 fild dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 00516678 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051667b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051667d fdivr st(2) */ ST(0) = FR(ST(2) / ST(0));
  /* 0051667f fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00516683 fild dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 00516686 fdivr st(1) */ ST(0) = FR(ST(1) / ST(0));
  /* 00516688 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051668b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051668d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051668f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00516691 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00516692 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00516694 call 0x500ca0 */ esp -= 4; M32(esp) = 0x516699u; SAVEALL; F_00500ca0(c); ABI_CHECK(0x500ca0u, 0x516694u); RETCHK(0x516699u, 0x516694u); LOADALL;
L_00516699:;
  /* 00516699 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051669a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005166a0(CPU *c) {
  NATIVE_HOOK(0x5166a0u) REGS; LOADALL;
L_005166a0:;
  /* 005166a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005166a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005166a3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005166a4 mov edi, eax */ { edi = (u32)(eax); }
  /* 005166a6 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 005166a8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005166aa jne 0x516713 */ if (!ZF_) goto L_00516713;
  /* 005166ac fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005166af fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005166b2 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005166b8 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005166ba test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005166bd je 0x5166c7 */ if (ZF_) goto L_005166c7;
  /* 005166bf fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005166c1 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005166c4 fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005166c7:;
  /* 005166c7 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005166ca fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005166cc fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005166d2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005166d4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005166d7 je 0x5166e0 */ if (ZF_) goto L_005166e0;
  /* 005166d9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005166db fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 005166dd fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005166e0:;
  /* 005166e0 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005166e2 call 0x61b154 */ esp -= 4; M32(esp) = 0x5166e7u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5166e2u); RETCHK(0x5166e7u, 0x5166e2u); LOADALL;
  /* 005166e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005166e8 call 0x61b154 */ esp -= 4; M32(esp) = 0x5166edu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5166e8u); RETCHK(0x5166edu, 0x5166e8u); LOADALL;
  /* 005166ed mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005166f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005166f1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005166f4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005166f5 add ecx, 0x234 */ { u32 a_ = ecx, b_ = 0x234u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005166fb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005166fc call 0x5288e0 */ esp -= 4; M32(esp) = 0x516701u; SAVEALL; F_005288e0(c); ABI_CHECK(0x5288e0u, 0x5166fcu); RETCHK(0x516701u, 0x5166fcu); LOADALL;
  /* 00516701 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516704 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00516706 mov edx, eax */ { edx = (u32)(eax); }
  /* 00516708 call 0x528970 */ esp -= 4; M32(esp) = 0x51670du; SAVEALL; F_00528970(c); ABI_CHECK(0x528970u, 0x516708u); RETCHK(0x51670du, 0x516708u); LOADALL;
  /* 0051670d mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 0051670f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00516711 je 0x51677e */ if (ZF_) goto L_0051677e;
L_00516713:;
  /* 00516713 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00516715 call 0x526830 */ esp -= 4; M32(esp) = 0x51671au; SAVEALL; F_00526830(c); ABI_CHECK(0x526830u, 0x516715u); RETCHK(0x51671au, 0x516715u); LOADALL;
  /* 0051671a mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0051671d mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0051671f call 0x526840 */ esp -= 4; M32(esp) = 0x516724u; SAVEALL; F_00526840(c); ABI_CHECK(0x526840u, 0x51671fu); RETCHK(0x516724u, 0x51671fu); LOADALL;
  /* 00516724 fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00516727 fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051672a fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00516730 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00516732 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00516735 je 0x51673f */ if (ZF_) goto L_0051673f;
  /* 00516737 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00516739 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0051673c fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051673f:;
  /* 0051673f fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00516742 fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00516744 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051674a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051674c test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051674f je 0x516758 */ if (ZF_) goto L_00516758;
  /* 00516751 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00516753 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00516755 fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00516758:;
  /* 00516758 mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 0051675a fild dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0051675d sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516760 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00516762 fdivr st(2) */ ST(0) = FR(ST(2) / ST(0));
  /* 00516764 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00516768 fild dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0051676b fdivr st(1) */ ST(0) = FR(ST(1) / ST(0));
  /* 0051676d fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00516770 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00516772 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00516774 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00516776 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00516777 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00516779 call 0x500ca0 */ esp -= 4; M32(esp) = 0x51677eu; SAVEALL; F_00500ca0(c); ABI_CHECK(0x500ca0u, 0x516779u); RETCHK(0x51677eu, 0x516779u); LOADALL;
L_0051677e:;
  /* 0051677e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051677f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00516780 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00516790(CPU *c) {
  NATIVE_HOOK(0x516790u) REGS; LOADALL;
L_00516790:;
  /* 00516790 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00516791 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00516793 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00516795 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0051679a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005167a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005167a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005167a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005167a9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005167aa push 0x516810 */ { u32 v_ = 0x516810u; esp -= 4; M32(esp) = v_; }
  /* 005167af sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005167b2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005167b4 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 005167b6 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005167b9 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 005167bc push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005167be push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005167bf lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 005167c2 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 005167c9 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 005167cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005167cd mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005167d0 call 0x404140 */ esp -= 4; M32(esp) = 0x5167d5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5167d0u); RETCHK(0x5167d5u, 0x5167d0u); LOADALL;
  /* 005167d5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005167d8 call 0x405c00 */ esp -= 4; M32(esp) = 0x5167ddu; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x5167d8u); RETCHK(0x5167ddu, 0x5167d8u); LOADALL;
  /* 005167dd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005167df call 0x405c80 */ esp -= 4; M32(esp) = 0x5167e4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x5167dfu); RETCHK(0x5167e4u, 0x5167dfu); LOADALL;
  /* 005167e4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005167e8 jb 0x5167f6 */ if (CF_) goto L_005167f6;
  /* 005167ea mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005167ed push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005167ee call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5167f3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5167eeu); RETCHK(0x5167f3u, 0x5167eeu); LOADALL;
  /* 005167f3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005167f6:;
  /* 005167f6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005167f9 mov eax, esi */ { eax = (u32)(esi); }
  /* 005167fb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00516802 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00516803 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00516805 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00516806 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00516810(CPU *c) {
  NATIVE_HOOK(0x516810u) REGS; LOADALL;
L_00516810:;
  /* 00516810 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00516811 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00516813 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00516815 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0051681a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00516820 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00516821 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00516828 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00516829 push 0x2a4 */ { u32 v_ = 0x2a4u; esp -= 4; M32(esp) = v_; }
  /* 0051682e call 0x5fe934 */ esp -= 4; M32(esp) = 0x516833u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x51682eu); RETCHK(0x516833u, 0x51682eu); LOADALL;
  /* 00516833 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516836 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00516839 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051683b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00516842 je 0x51685a */ if (ZF_) goto L_0051685a;
  /* 00516844 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00516846 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00516847 call 0x5150d0 */ esp -= 4; M32(esp) = 0x51684cu; SAVEALL; F_005150d0(c); ABI_CHECK(0x5150d0u, 0x516847u); RETCHK(0x51684cu, 0x516847u); LOADALL;
  /* 0051684c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051684f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00516856 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00516858 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00516859 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051685a:;
  /* 0051685a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051685d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051685f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00516866 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00516868 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00516869 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00516870(CPU *c) {
  NATIVE_HOOK(0x516870u) REGS; LOADALL;
L_00516870:;
  /* 00516870 mov dword ptr [eax], 0x652014 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x652014u); }
  /* 00516876 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00516879 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00516880(CPU *c) {
  NATIVE_HOOK(0x516880u) REGS; LOADALL;
L_00516880:;
  /* 00516880 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00516881 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00516883 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516884 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00516886 call 0x5168b0 */ esp -= 4; M32(esp) = 0x51688bu; SAVEALL; F_005168b0(c); ABI_CHECK(0x5168b0u, 0x516886u); RETCHK(0x51688bu, 0x516886u); LOADALL;
  /* 0051688b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051688f je 0x51689a */ if (ZF_) goto L_0051689a;
  /* 00516891 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516892 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x516897u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x516892u); RETCHK(0x516897u, 0x516892u); LOADALL;
  /* 00516897 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051689a:;
  /* 0051689a mov eax, esi */ { eax = (u32)(esi); }
  /* 0051689c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051689d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051689e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005168b0(CPU *c) {
  NATIVE_HOOK(0x5168b0u) REGS; LOADALL;
L_005168b0:;
  /* 005168b0 mov dword ptr [ecx], 0x652014 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x652014u); }
  /* 005168b6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005168c0(CPU *c) {
  NATIVE_HOOK(0x5168c0u) REGS; LOADALL;
L_005168c0:;
  /* 005168c0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005168c1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005168c2 call 0x516870 */ esp -= 4; M32(esp) = 0x5168c7u; SAVEALL; F_00516870(c); ABI_CHECK(0x516870u, 0x5168c2u); RETCHK(0x5168c7u, 0x5168c2u); LOADALL;
  /* 005168c7 mov dword ptr [eax], 0x652008 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x652008u); }
  /* 005168cd mov dword ptr [eax + 0x34], 0xf */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0xfu); }
  /* 005168d4 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005168d6 mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 005168d9 mov byte ptr [eax + 0x20], cl */ { const u32 m_ = (u32)(eax + 0x20u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005168dc mov word ptr [eax + 0x38], 0x30 */ { const u32 m_ = (u32)(eax + 0x38u); M16(m_) = (u16)(0x30u); }
  /* 005168e2 mov esi, dword ptr [0x6501e8] */ { const u32 m_ = (u32)(0x6501e8u); esi = (u32)(M32(m_)); }
  /* 005168e8 lea edx, [eax + 0x48] */ edx = (u32)((u32)(eax + 0x48u));
  /* 005168eb mov dword ptr [edx], esi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(esi); }
  /* 005168ed mov bl, byte ptr [0x6501ec] */ { const u32 m_ = (u32)(0x6501ecu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005168f3 mov byte ptr [edx + 4], bl */ { const u32 m_ = (u32)(edx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005168f6 mov edx, 4 */ { edx = (u32)(0x4u); }
  /* 005168fb mov dword ptr [eax + 0x70], edx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(edx); }
  /* 005168fe mov dword ptr [eax + 0x74], edx */ { const u32 m_ = (u32)(eax + 0x74u); M32(m_) = (u32)(edx); }
  /* 00516901 mov dword ptr [eax + 0x68], 0x18 */ { const u32 m_ = (u32)(eax + 0x68u); M32(m_) = (u32)(0x18u); }
  /* 00516908 mov dword ptr [eax + 0x6c], 1 */ { const u32 m_ = (u32)(eax + 0x6cu); M32(m_) = (u32)(0x1u); }
  /* 0051690f mov dword ptr [eax + 0x78], ecx */ { const u32 m_ = (u32)(eax + 0x78u); M32(m_) = (u32)(ecx); }
  /* 00516912 mov dword ptr [eax + 0x7c], ecx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(ecx); }
  /* 00516915 mov dword ptr [eax + 0x80], 0xffffffff */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(0xffffffffu); }
  /* 0051691f mov dword ptr [eax + 0x84], 0xaf000000 */ { const u32 m_ = (u32)(eax + 0x84u); M32(m_) = (u32)(0xaf000000u); }
  /* 00516929 mov edx, 0x3f800000 */ { edx = (u32)(0x3f800000u); }
  /* 0051692e mov dword ptr [eax + 0x88], edx */ { const u32 m_ = (u32)(eax + 0x88u); M32(m_) = (u32)(edx); }
  /* 00516934 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00516937 mov dword ptr [eax + 0x18], edx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(edx); }
  /* 0051693a mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0051693d mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00516940 lea edx, [eax + 0x8c] */ edx = (u32)((u32)(eax + 0x8cu));
  /* 00516946 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 00516948 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0051694b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051694c mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0051694f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00516950 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00516960(CPU *c) {
  NATIVE_HOOK(0x516960u) REGS; LOADALL;
L_00516960:;
  /* 00516960 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00516961 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00516963 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516964 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00516966 call 0x516990 */ esp -= 4; M32(esp) = 0x51696bu; SAVEALL; F_00516990(c); ABI_CHECK(0x516990u, 0x516966u); RETCHK(0x51696bu, 0x516966u); LOADALL;
  /* 0051696b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051696f je 0x51697a */ if (ZF_) goto L_0051697a;
  /* 00516971 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516972 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x516977u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x516972u); RETCHK(0x516977u, 0x516972u); LOADALL;
  /* 00516977 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051697a:;
  /* 0051697a mov eax, esi */ { eax = (u32)(esi); }
  /* 0051697c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051697d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051697e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00516990(CPU *c) {
  NATIVE_HOOK(0x516990u) REGS; LOADALL;
L_00516990:;
  /* 00516990 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516991 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00516993 mov dword ptr [esi], 0x652008 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x652008u); }
  /* 00516999 cmp dword ptr [esi + 0x34], 0x10 */ { const u32 m_ = (u32)(esi + 0x34u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051699d jb 0x5169ab */ if (CF_) goto L_005169ab;
  /* 0051699f mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 005169a2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005169a3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5169a8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5169a3u); RETCHK(0x5169a8u, 0x5169a3u); LOADALL;
  /* 005169a8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005169ab:;
  /* 005169ab xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005169ad mov dword ptr [esi + 0x34], 0xf */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(0xfu); }
  /* 005169b4 mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 005169b7 mov byte ptr [esi + 0x20], al */ { const u32 m_ = (u32)(esi + 0x20u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005169ba mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005169bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005169bd jmp 0x5168b0 */ SAVEALL; F_005168b0(c); return;
}

void F_005169d0(CPU *c) {
  NATIVE_HOOK(0x5169d0u) REGS; LOADALL;
L_005169d0:;
  /* 005169d0 mov eax, dword ptr [ecx + 0x8c] */ { const u32 m_ = (u32)(ecx + 0x8cu); eax = (u32)(M32(m_)); }
  /* 005169d6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005169d8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005169d9 lea esi, [ecx + 0x8c] */ esi = (u32)((u32)(ecx + 0x8cu));
  /* 005169df je 0x5169f4 */ if (ZF_) goto L_005169f4;
  /* 005169e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005169e2 call 0x5ab020 */ esp -= 4; M32(esp) = 0x5169e7u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x5169e2u); RETCHK(0x5169e7u, 0x5169e2u); LOADALL;
  /* 005169e7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005169ea xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005169ec mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005169ee mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005169f1 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_005169f4:;
  /* 005169f4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005169f5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00516a00(CPU *c) {
  NATIVE_HOOK(0x516a00u) REGS; LOADALL;
L_00516a00:;
  /* 00516a00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00516a01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00516a03 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00516a04 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516a05 mov esi, eax */ { esi = (u32)(eax); }
  /* 00516a07 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00516a09 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00516a0a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00516a0c call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x516a0fu; SAVEALL; call_ind(c, t_); RETCHK(0x516a0fu, 0x516a0cu); LOADALL; }
  /* 00516a0f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00516a12 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00516a14 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00516a16 lea edi, [esi + 0x1c] */ edi = (u32)((u32)(esi + 0x1cu));
  /* 00516a19 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00516a1a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00516a1c call 0x404140 */ esp -= 4; M32(esp) = 0x516a21u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x516a1cu); RETCHK(0x516a21u, 0x516a1cu); LOADALL;
  /* 00516a21 cmp dword ptr [edi + 0x18], 0x10 */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00516a25 jb 0x516a2c */ if (CF_) goto L_00516a2c;
  /* 00516a27 mov edi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edi = (u32)(M32(m_)); }
  /* 00516a2a jmp 0x516a2f */ goto L_00516a2f;
L_00516a2c:;
  /* 00516a2c add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_00516a2f:;
  /* 00516a2f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00516a31 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00516a33 lea ebx, [esi + 0x8c] */ ebx = (u32)((u32)(esi + 0x8cu));
  /* 00516a39 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00516a3a add esi, 0x38 */ { u32 a_ = esi, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00516a3d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516a3e call 0x5288e0 */ esp -= 4; M32(esp) = 0x516a43u; SAVEALL; F_005288e0(c); ABI_CHECK(0x5288e0u, 0x516a3eu); RETCHK(0x516a43u, 0x516a3eu); LOADALL;
  /* 00516a43 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516a46 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00516a48 mov edx, eax */ { edx = (u32)(eax); }
  /* 00516a4a call 0x528970 */ esp -= 4; M32(esp) = 0x516a4fu; SAVEALL; F_00528970(c); ABI_CHECK(0x528970u, 0x516a4au); RETCHK(0x516a4fu, 0x516a4au); LOADALL;
  /* 00516a4f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00516a50 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00516a51 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00516a52 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00516a53 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00516a60(CPU *c) {
  NATIVE_HOOK(0x516a60u) REGS; LOADALL;
L_00516a60:;
  /* 00516a60 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00516a62 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00516a64 add eax, 0x1c */ { u32 a_ = eax, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00516a67 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00516a68 call 0x404140 */ esp -= 4; M32(esp) = 0x516a6du; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x516a68u); RETCHK(0x516a6du, 0x516a68u); LOADALL;
  /* 00516a6d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00516a70(CPU *c) {
  NATIVE_HOOK(0x516a70u) REGS; LOADALL;
L_00516a70:;
  /* 00516a70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516a71 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00516a72 mov esi, eax */ { esi = (u32)(eax); }
  /* 00516a74 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00516a76 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 00516a79 call 0x52a850 */ esp -= 4; M32(esp) = 0x516a7eu; SAVEALL; F_0052a850(c); ABI_CHECK(0x52a850u, 0x516a79u); RETCHK(0x516a7eu, 0x516a79u); LOADALL;
  /* 00516a7e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00516a80 mov edx, eax */ { edx = (u32)(eax); }
  /* 00516a82 call 0x52a8b0 */ esp -= 4; M32(esp) = 0x516a87u; SAVEALL; F_0052a8b0(c); ABI_CHECK(0x52a8b0u, 0x516a82u); RETCHK(0x516a87u, 0x516a82u); LOADALL;
  /* 00516a87 add edi, 0x38 */ { u32 a_ = edi, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00516a8a mov ecx, 0x15 */ { ecx = (u32)(0x15u); }
  /* 00516a8f mov esi, eax */ { esi = (u32)(eax); }
  /* 00516a91 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00516a93 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00516a94 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00516a95 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00516aa0(CPU *c) {
  NATIVE_HOOK(0x516aa0u) REGS; LOADALL;
L_00516aa0:;
  /* 00516aa0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00516aa1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00516aa3 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516aa6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516aa7 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00516aa9 call 0x518bb0 */ esp -= 4; M32(esp) = 0x516aaeu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x516aa9u); RETCHK(0x516aaeu, 0x516aa9u); LOADALL;
  /* 00516aae call 0x518210 */ esp -= 4; M32(esp) = 0x516ab3u; SAVEALL; F_00518210(c); ABI_CHECK(0x518210u, 0x516aaeu); RETCHK(0x516ab3u, 0x516aaeu); LOADALL;
  /* 00516ab3 mov edx, eax */ { edx = (u32)(eax); }
  /* 00516ab5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00516ab7 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00516ab9 mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 00516abc je 0x516bc4 */ if (ZF_) goto L_00516bc4;
  /* 00516ac2 mov ecx, dword ptr [esi + 0x90] */ { const u32 m_ = (u32)(esi + 0x90u); ecx = (u32)(M32(m_)); }
  /* 00516ac8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00516ac9 mov ebx, dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); ebx = (u32)(M32(m_)); }
  /* 00516acf cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00516ad1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00516ad2 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 00516ad5 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00516ad8 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00516adb je 0x516ae9 */ if (ZF_) goto L_00516ae9;
  /* 00516add mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 00516ae0 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00516ae3 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 00516ae6 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_00516ae9:;
  /* 00516ae9 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00516aec fld dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00516aef fsub dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00516af1 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00516af7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00516af9 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00516afc jne 0x516b02 */ if (!ZF_) goto L_00516b02;
  /* 00516afe fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00516b00 jmp 0x516b07 */ goto L_00516b07;
L_00516b02:;
  /* 00516b02 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 00516b04 fsub dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00516b07:;
  /* 00516b07 fild dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)(s32)M32(m_)); }
  /* 00516b0a fst dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); }
  /* 00516b0d fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 00516b0f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00516b11 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00516b13 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00516b16 jne 0x516b46 */ if (!ZF_) goto L_00516b46;
  /* 00516b18 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00516b1e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00516b20 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00516b23 jne 0x516b34 */ if (!ZF_) goto L_00516b34;
  /* 00516b25 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00516b27 call 0x61b154 */ esp -= 4; M32(esp) = 0x516b2cu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x516b27u); RETCHK(0x516b2cu, 0x516b27u); LOADALL;
  /* 00516b2c mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00516b2f mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00516b32 jmp 0x516b49 */ goto L_00516b49;
L_00516b34:;
  /* 00516b34 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 00516b36 fsub dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00516b39 call 0x61b154 */ esp -= 4; M32(esp) = 0x516b3eu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x516b39u); RETCHK(0x516b3eu, 0x516b39u); LOADALL;
  /* 00516b3e mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00516b41 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00516b44 jmp 0x516b49 */ goto L_00516b49;
L_00516b46:;
  /* 00516b46 mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
L_00516b49:;
  /* 00516b49 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00516b4f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00516b51 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00516b54 je 0x516b5d */ if (ZF_) goto L_00516b5d;
  /* 00516b56 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00516b58 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 00516b5a fsub dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00516b5d:;
  /* 00516b5d fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00516b60 mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 00516b67 fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 00516b69 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00516b6b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00516b6d test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00516b70 jne 0x516b7a */ if (!ZF_) goto L_00516b7a;
  /* 00516b72 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00516b75 fidiv dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 00516b78 jmp 0x516b80 */ goto L_00516b80;
L_00516b7a:;
  /* 00516b7a fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00516b7d fdivr dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR((double)MF32(m_) / ST(0)); }
L_00516b80:;
  /* 00516b80 fstp dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00516b83 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 00516b85 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00516b88 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00516b8b mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 00516b8e mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 00516b91 fadd dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00516b94 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00516b96 mov eax, edx */ { eax = (u32)(edx); }
  /* 00516b98 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00516b9b fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 00516b9e fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00516ba1 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00516ba4 call 0x526830 */ esp -= 4; M32(esp) = 0x516ba9u; SAVEALL; F_00526830(c); ABI_CHECK(0x526830u, 0x516ba4u); RETCHK(0x516ba9u, 0x516ba4u); LOADALL;
  /* 00516ba9 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00516bac mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 00516baf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00516bb0 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00516bb3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00516bb4 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00516bb7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00516bb8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00516bb9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00516bba lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00516bbd call 0x500ca0 */ esp -= 4; M32(esp) = 0x516bc2u; SAVEALL; F_00500ca0(c); ABI_CHECK(0x500ca0u, 0x516bbdu); RETCHK(0x516bc2u, 0x516bbdu); LOADALL;
  /* 00516bc2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00516bc3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00516bc4:;
  /* 00516bc4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00516bc5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00516bc7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00516bc8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00516bd0(CPU *c) {
  NATIVE_HOOK(0x516bd0u) REGS; LOADALL;
L_00516bd0:;
  /* 00516bd0 push 0x42000000 */ { u32 v_ = 0x42000000u; esp -= 4; M32(esp) = v_; }
  /* 00516bd5 call 0x56bbd0 */ esp -= 4; M32(esp) = 0x516bdau; SAVEALL; F_0056bbd0(c); ABI_CHECK(0x56bbd0u, 0x516bd5u); RETCHK(0x516bdau, 0x516bd5u); LOADALL;
  /* 00516bda push 0x65228c */ { u32 v_ = 0x65228cu; esp -= 4; M32(esp) = v_; }
  /* 00516bdf call 0x56cf40 */ esp -= 4; M32(esp) = 0x516be4u; SAVEALL; F_0056cf40(c); ABI_CHECK(0x56cf40u, 0x516bdfu); RETCHK(0x516be4u, 0x516bdfu); LOADALL;
  /* 00516be4 push 0x44160000 */ { u32 v_ = 0x44160000u; esp -= 4; M32(esp) = v_; }
  /* 00516be9 push 0x44480000 */ { u32 v_ = 0x44480000u; esp -= 4; M32(esp) = v_; }
  /* 00516bee push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00516bf0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00516bf2 call 0x56b8f0 */ esp -= 4; M32(esp) = 0x516bf7u; SAVEALL; F_0056b8f0(c); ABI_CHECK(0x56b8f0u, 0x516bf2u); RETCHK(0x516bf7u, 0x516bf2u); LOADALL;
  /* 00516bf7 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516bfa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00516c00(CPU *c) {
  NATIVE_HOOK(0x516c00u) REGS; LOADALL;
L_00516c00:;
  /* 00516c00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00516c01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00516c03 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516c06 fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 00516c0c fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00516c12 fdivr dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 00516c14 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00516c17 fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 00516c1d fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00516c23 fdivr dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 00516c26 jmp 0x62d961 */ goto L_0062d961;
L_00516c2c:;
  /* 00516c2c call 0x52ce80 */ esp -= 4; M32(esp) = 0x516c31u; SAVEALL; F_0052ce80(c); ABI_CHECK(0x52ce80u, 0x516c2cu); RETCHK(0x516c31u, 0x516c2cu); LOADALL;
  /* 00516c31 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00516c33 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00516c34 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062d961:;
  /* 0062d961 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062d964 cmp dword ptr [0x6880fc], 0x44160000 */ { const u32 m_ = (u32)(0x6880fcu); u32 a_ = M32(m_), b_ = 0x44160000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062d96e jne 0x62d993 */ if (!ZF_) goto L_0062d993;
  /* 0062d970 call 0x62d820 */ esp -= 4; M32(esp) = 0x62d975u; SAVEALL; F_0062d820(c); ABI_CHECK(0x62d820u, 0x62d970u); RETCHK(0x62d975u, 0x62d970u); LOADALL;
  /* 0062d975 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0062d978 fcomi st(1) */ { u32 e_ = (EFLAGS_ & ~0x8d5u) | fcomi_fl(ST(0), ST(1)); SETRAW(e_); }
  /* 0062d97a jb 0x62d988 */ if (CF_) goto L_0062d988;
  /* 0062d97c fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 0062d97e fld dword ptr [0x62d810] */ { const u32 m_ = (u32)(0x62d810u); FPUSH((double)MF32(m_)); }
  /* 0062d984 fcompi st(1) */ { u32 e_ = (EFLAGS_ & ~0x8d5u) | fcomi_fl(ST(0), ST(1)); SETRAW(e_); FPOP(); }
  /* 0062d986 jae 0x62d98f */ if (!CF_) goto L_0062d98f;
L_0062d988:;
  /* 0062d988 mov dword ptr [ebp - 8], 0xc61c4000 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0xc61c4000u); }
L_0062d98f:;
  /* 0062d98f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0062d991 fstp st(0) */ ST(0) = ST(0); FPOP();
L_0062d993:;
  /* 0062d993 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0062d996 jmp 0x516c2c */ goto L_00516c2c;
}

void F_00516c40(CPU *c) {
  NATIVE_HOOK(0x516c40u) REGS; LOADALL;
L_00516c40:;
  /* 00516c40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00516c41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00516c43 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00516c45 push 0x61c814 */ { u32 v_ = 0x61c814u; esp -= 4; M32(esp) = v_; }
  /* 00516c4a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00516c50 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00516c51 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00516c58 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00516c59 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00516c5a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516c5b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00516c5c mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00516c5f mov dword ptr [edi], 0x652020 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x652020u); }
  /* 00516c65 call 0x54c480 */ esp -= 4; M32(esp) = 0x516c6au; SAVEALL; F_0054c480(c); ABI_CHECK(0x54c480u, 0x516c65u); RETCHK(0x516c6au, 0x516c65u); LOADALL;
  /* 00516c6a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00516c6c mov dword ptr [edi + 0x10], eax */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(eax); }
  /* 00516c6f mov dword ptr [edi + 0x14], ebx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00516c72 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00516c75 mov dword ptr [edi + 0x1c], ebx */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 00516c78 mov dword ptr [edi + 0x20], ebx */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 00516c7b mov dword ptr [edi + 0x24], ebx */ { const u32 m_ = (u32)(edi + 0x24u); M32(m_) = (u32)(ebx); }
  /* 00516c7e mov dword ptr [edi + 0x28], ebx */ { const u32 m_ = (u32)(edi + 0x28u); M32(m_) = (u32)(ebx); }
  /* 00516c81 lea esi, [edi + 0x38] */ esi = (u32)((u32)(edi + 0x38u));
  /* 00516c84 call 0x5267c0 */ esp -= 4; M32(esp) = 0x516c89u; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x516c84u); RETCHK(0x516c89u, 0x516c84u); LOADALL;
  /* 00516c89 mov dword ptr [edi + 0xd0], ebx */ { const u32 m_ = (u32)(edi + 0xd0u); M32(m_) = (u32)(ebx); }
  /* 00516c8f mov dword ptr [edi + 0xd4], ebx */ { const u32 m_ = (u32)(edi + 0xd4u); M32(m_) = (u32)(ebx); }
  /* 00516c95 mov dword ptr [edi + 0xd8], ebx */ { const u32 m_ = (u32)(edi + 0xd8u); M32(m_) = (u32)(ebx); }
  /* 00516c9b mov dword ptr [edi + 0xdc], ebx */ { const u32 m_ = (u32)(edi + 0xdcu); M32(m_) = (u32)(ebx); }
  /* 00516ca1 mov dword ptr [edi + 0x124], 0xf */ { const u32 m_ = (u32)(edi + 0x124u); M32(m_) = (u32)(0xfu); }
  /* 00516cab mov dword ptr [edi + 0x120], ebx */ { const u32 m_ = (u32)(edi + 0x120u); M32(m_) = (u32)(ebx); }
  /* 00516cb1 mov byte ptr [edi + 0x110], bl */ { const u32 m_ = (u32)(edi + 0x110u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00516cb7 lea eax, [edi + 0x138] */ eax = (u32)((u32)(edi + 0x138u));
  /* 00516cbd mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 00516cc1 call 0x52cd10 */ esp -= 4; M32(esp) = 0x516cc6u; SAVEALL; F_0052cd10(c); ABI_CHECK(0x52cd10u, 0x516cc1u); RETCHK(0x516cc6u, 0x516cc1u); LOADALL;
  /* 00516cc6 mov dword ptr [edi + 0x16c], ebx */ { const u32 m_ = (u32)(edi + 0x16cu); M32(m_) = (u32)(ebx); }
  /* 00516ccc mov dword ptr [edi + 0x170], ebx */ { const u32 m_ = (u32)(edi + 0x170u); M32(m_) = (u32)(ebx); }
  /* 00516cd2 mov dword ptr [edi + 0x174], ebx */ { const u32 m_ = (u32)(edi + 0x174u); M32(m_) = (u32)(ebx); }
  /* 00516cd8 mov dword ptr [edi + 0x17c], ebx */ { const u32 m_ = (u32)(edi + 0x17cu); M32(m_) = (u32)(ebx); }
  /* 00516cde mov dword ptr [edi + 0x180], ebx */ { const u32 m_ = (u32)(edi + 0x180u); M32(m_) = (u32)(ebx); }
  /* 00516ce4 mov dword ptr [edi + 0x184], ebx */ { const u32 m_ = (u32)(edi + 0x184u); M32(m_) = (u32)(ebx); }
  /* 00516cea mov dword ptr [edi + 0x188], 0xa */ { const u32 m_ = (u32)(edi + 0x188u); M32(m_) = (u32)(0xau); }
  /* 00516cf4 mov dword ptr [edi + 0x164], 0x652078 */ { const u32 m_ = (u32)(edi + 0x164u); M32(m_) = (u32)(0x652078u); }
  /* 00516cfe mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 00516d02 push 0x150 */ { u32 v_ = 0x150u; esp -= 4; M32(esp) = v_; }
  /* 00516d07 mov dword ptr [edi + 0x2c], ebx */ { const u32 m_ = (u32)(edi + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 00516d0a mov dword ptr [edi + 0x34], ebx */ { const u32 m_ = (u32)(edi + 0x34u); M32(m_) = (u32)(ebx); }
  /* 00516d0d mov dword ptr [edi + 0x30], ebx */ { const u32 m_ = (u32)(edi + 0x30u); M32(m_) = (u32)(ebx); }
  /* 00516d10 mov dword ptr [edi + 0xe0], ebx */ { const u32 m_ = (u32)(edi + 0xe0u); M32(m_) = (u32)(ebx); }
  /* 00516d16 mov dword ptr [edi + 0xe4], ebx */ { const u32 m_ = (u32)(edi + 0xe4u); M32(m_) = (u32)(ebx); }
  /* 00516d1c mov dword ptr [edi + 0xe8], ebx */ { const u32 m_ = (u32)(edi + 0xe8u); M32(m_) = (u32)(ebx); }
  /* 00516d22 mov dword ptr [edi + 0xec], ebx */ { const u32 m_ = (u32)(edi + 0xecu); M32(m_) = (u32)(ebx); }
  /* 00516d28 mov dword ptr [edi + 0xf4], ebx */ { const u32 m_ = (u32)(edi + 0xf4u); M32(m_) = (u32)(ebx); }
  /* 00516d2e mov dword ptr [edi + 0xf0], ebx */ { const u32 m_ = (u32)(edi + 0xf0u); M32(m_) = (u32)(ebx); }
  /* 00516d34 mov dword ptr [edi + 0xf8], ebx */ { const u32 m_ = (u32)(edi + 0xf8u); M32(m_) = (u32)(ebx); }
  /* 00516d3a mov dword ptr [edi + 0xfc], ebx */ { const u32 m_ = (u32)(edi + 0xfcu); M32(m_) = (u32)(ebx); }
  /* 00516d40 mov dword ptr [edi + 0x100], ebx */ { const u32 m_ = (u32)(edi + 0x100u); M32(m_) = (u32)(ebx); }
  /* 00516d46 mov dword ptr [edi + 0x104], ebx */ { const u32 m_ = (u32)(edi + 0x104u); M32(m_) = (u32)(ebx); }
  /* 00516d4c mov dword ptr [edi + 0x108], ebx */ { const u32 m_ = (u32)(edi + 0x108u); M32(m_) = (u32)(ebx); }
  /* 00516d52 call 0x5fe934 */ esp -= 4; M32(esp) = 0x516d57u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x516d52u); RETCHK(0x516d57u, 0x516d52u); LOADALL;
  /* 00516d57 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516d5a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00516d5c je 0x516d67 */ if (ZF_) goto L_00516d67;
  /* 00516d5e mov edx, eax */ { edx = (u32)(eax); }
  /* 00516d60 call 0x531ef0 */ esp -= 4; M32(esp) = 0x516d65u; SAVEALL; F_00531ef0(c); ABI_CHECK(0x531ef0u, 0x516d60u); RETCHK(0x516d65u, 0x516d60u); LOADALL;
  /* 00516d65 jmp 0x516d69 */ goto L_00516d69;
L_00516d67:;
  /* 00516d67 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00516d69:;
  /* 00516d69 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00516d6c mov dword ptr [edi + 0x130], eax */ { const u32 m_ = (u32)(edi + 0x130u); M32(m_) = (u32)(eax); }
  /* 00516d72 mov al, 0xff */ { eax = (eax & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 00516d74 mov byte ptr [0x696e2c], al */ { const u32 m_ = (u32)(0x696e2cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00516d79 mov byte ptr [0x696e2d], al */ { const u32 m_ = (u32)(0x696e2du); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00516d7e mov byte ptr [0x696e2e], al */ { const u32 m_ = (u32)(0x696e2eu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00516d83 mov byte ptr [0x696e2f], al */ { const u32 m_ = (u32)(0x696e2fu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00516d88 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00516d8d mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00516d90 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00516d93 mov dword ptr [edi + 0x14c], ebx */ { const u32 m_ = (u32)(edi + 0x14cu); M32(m_) = (u32)(ebx); }
  /* 00516d99 mov dword ptr [edi + 0x154], ebx */ { const u32 m_ = (u32)(edi + 0x154u); M32(m_) = (u32)(ebx); }
  /* 00516d9f mov dword ptr [edi + 0x15c], ebx */ { const u32 m_ = (u32)(edi + 0x15cu); M32(m_) = (u32)(ebx); }
  /* 00516da5 mov dword ptr [edi + 0x134], ebx */ { const u32 m_ = (u32)(edi + 0x134u); M32(m_) = (u32)(ebx); }
  /* 00516dab mov dword ptr [edi + 0x150], ebx */ { const u32 m_ = (u32)(edi + 0x150u); M32(m_) = (u32)(ebx); }
  /* 00516db1 mov byte ptr [edi + 0x158], bl */ { const u32 m_ = (u32)(edi + 0x158u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00516db7 mov byte ptr [edi + 0x160], bl */ { const u32 m_ = (u32)(edi + 0x160u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00516dbd mov eax, edi */ { eax = (u32)(edi); }
  /* 00516dbf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00516dc0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00516dc1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00516dc2 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00516dc9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00516dcb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00516dcc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00516dd0(CPU *c) {
  NATIVE_HOOK(0x516dd0u) REGS; LOADALL;
L_00516dd0:;
  /* 00516dd0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00516dd1 mov dword ptr [esi], 0x65206c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x65206cu); }
  /* 00516dd7 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 00516dda xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00516ddc cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00516dde je 0x516de9 */ if (ZF_) goto L_00516de9;
  /* 00516de0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00516de1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x516de6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x516de1u); RETCHK(0x516de6u, 0x516de1u); LOADALL;
  /* 00516de6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00516de9:;
  /* 00516de9 mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
  /* 00516dec mov dword ptr [esi + 0x1c], edi */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(edi); }
  /* 00516def mov dword ptr [esi + 0x20], edi */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edi); }
  /* 00516df2 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00516df5 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00516df7 je 0x516e02 */ if (ZF_) goto L_00516e02;
  /* 00516df9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00516dfa call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x516dffu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x516dfau); RETCHK(0x516dffu, 0x516dfau); LOADALL;
  /* 00516dff add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00516e02:;
  /* 00516e02 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 00516e05 mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
  /* 00516e08 mov dword ptr [esi + 0x10], edi */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edi); }
  /* 00516e0b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00516e0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00516e10(CPU *c) {
  NATIVE_HOOK(0x516e10u) REGS; LOADALL;
L_00516e10:;
  /* 00516e10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00516e11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00516e13 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516e14 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00516e16 call 0x516dd0 */ esp -= 4; M32(esp) = 0x516e1bu; SAVEALL; F_00516dd0(c); ABI_CHECK(0x516dd0u, 0x516e16u); RETCHK(0x516e1bu, 0x516e16u); LOADALL;
  /* 00516e1b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00516e1f je 0x516e2a */ if (ZF_) goto L_00516e2a;
  /* 00516e21 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516e22 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x516e27u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x516e22u); RETCHK(0x516e27u, 0x516e22u); LOADALL;
  /* 00516e27 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00516e2a:;
  /* 00516e2a mov eax, esi */ { eax = (u32)(esi); }
  /* 00516e2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00516e2d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00516e2e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00516e40(CPU *c) {
  NATIVE_HOOK(0x516e40u) REGS; LOADALL;
L_00516e40:;
  /* 00516e40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00516e41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00516e43 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00516e49 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00516e4b push 0x61bb39 */ { u32 v_ = 0x61bb39u; esp -= 4; M32(esp) = v_; }
  /* 00516e50 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00516e51 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00516e58 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00516e59 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516e5a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00516e5b mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00516e5e mov dword ptr [edi], 0x652020 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x652020u); }
  /* 00516e64 mov dword ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x6u); }
  /* 00516e6b mov ecx, dword ptr [edi + 0x130] */ { const u32 m_ = (u32)(edi + 0x130u); ecx = (u32)(M32(m_)); }
  /* 00516e71 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00516e73 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00516e75 je 0x516e7d */ if (ZF_) goto L_00516e7d;
  /* 00516e77 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00516e79 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00516e7b call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x516e7du; SAVEALL; call_ind(c, t_); RETCHK(0x516e7du, 0x516e7bu); LOADALL; }
L_00516e7d:;
  /* 00516e7d mov dword ptr [edi + 0x164], 0x65206c */ { const u32 m_ = (u32)(edi + 0x164u); M32(m_) = (u32)(0x65206cu); }
  /* 00516e87 mov eax, dword ptr [edi + 0x17c] */ { const u32 m_ = (u32)(edi + 0x17cu); eax = (u32)(M32(m_)); }
  /* 00516e8d cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00516e8f je 0x516e9a */ if (ZF_) goto L_00516e9a;
  /* 00516e91 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00516e92 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x516e97u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x516e92u); RETCHK(0x516e97u, 0x516e92u); LOADALL;
  /* 00516e97 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00516e9a:;
  /* 00516e9a mov dword ptr [edi + 0x17c], ebx */ { const u32 m_ = (u32)(edi + 0x17cu); M32(m_) = (u32)(ebx); }
  /* 00516ea0 mov dword ptr [edi + 0x180], ebx */ { const u32 m_ = (u32)(edi + 0x180u); M32(m_) = (u32)(ebx); }
  /* 00516ea6 mov dword ptr [edi + 0x184], ebx */ { const u32 m_ = (u32)(edi + 0x184u); M32(m_) = (u32)(ebx); }
  /* 00516eac mov eax, dword ptr [edi + 0x16c] */ { const u32 m_ = (u32)(edi + 0x16cu); eax = (u32)(M32(m_)); }
  /* 00516eb2 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00516eb4 je 0x516ebf */ if (ZF_) goto L_00516ebf;
  /* 00516eb6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00516eb7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x516ebcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x516eb7u); RETCHK(0x516ebcu, 0x516eb7u); LOADALL;
  /* 00516ebc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00516ebf:;
  /* 00516ebf lea ecx, [edi + 0x138] */ ecx = (u32)((u32)(edi + 0x138u));
  /* 00516ec5 mov dword ptr [edi + 0x16c], ebx */ { const u32 m_ = (u32)(edi + 0x16cu); M32(m_) = (u32)(ebx); }
  /* 00516ecb mov dword ptr [edi + 0x170], ebx */ { const u32 m_ = (u32)(edi + 0x170u); M32(m_) = (u32)(ebx); }
  /* 00516ed1 mov dword ptr [edi + 0x174], ebx */ { const u32 m_ = (u32)(edi + 0x174u); M32(m_) = (u32)(ebx); }
  /* 00516ed7 call 0x52cd60 */ esp -= 4; M32(esp) = 0x516edcu; SAVEALL; F_0052cd60(c); ABI_CHECK(0x52cd60u, 0x516ed7u); RETCHK(0x516edcu, 0x516ed7u); LOADALL;
  /* 00516edc cmp dword ptr [edi + 0x124], 0x10 */ { const u32 m_ = (u32)(edi + 0x124u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00516ee3 jb 0x516ef4 */ if (CF_) goto L_00516ef4;
  /* 00516ee5 mov ecx, dword ptr [edi + 0x110] */ { const u32 m_ = (u32)(edi + 0x110u); ecx = (u32)(M32(m_)); }
  /* 00516eeb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00516eec call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x516ef1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x516eecu); RETCHK(0x516ef1u, 0x516eecu); LOADALL;
  /* 00516ef1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00516ef4:;
  /* 00516ef4 mov dword ptr [edi + 0x124], 0xf */ { const u32 m_ = (u32)(edi + 0x124u); M32(m_) = (u32)(0xfu); }
  /* 00516efe mov dword ptr [edi + 0x120], ebx */ { const u32 m_ = (u32)(edi + 0x120u); M32(m_) = (u32)(ebx); }
  /* 00516f04 lea esi, [edi + 0xcc] */ esi = (u32)((u32)(edi + 0xccu));
  /* 00516f0a mov byte ptr [edi + 0x110], bl */ { const u32 m_ = (u32)(edi + 0x110u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00516f10 call 0x531490 */ esp -= 4; M32(esp) = 0x516f15u; SAVEALL; F_00531490(c); ABI_CHECK(0x531490u, 0x516f10u); RETCHK(0x516f15u, 0x516f10u); LOADALL;
  /* 00516f15 lea ecx, [edi + 0x38] */ ecx = (u32)((u32)(edi + 0x38u));
  /* 00516f18 call 0x5267e0 */ esp -= 4; M32(esp) = 0x516f1du; SAVEALL; F_005267e0(c); ABI_CHECK(0x5267e0u, 0x516f18u); RETCHK(0x516f1du, 0x516f18u); LOADALL;
  /* 00516f1d lea esi, [edi + 0x18] */ esi = (u32)((u32)(edi + 0x18u));
  /* 00516f20 call 0x531490 */ esp -= 4; M32(esp) = 0x516f25u; SAVEALL; F_00531490(c); ABI_CHECK(0x531490u, 0x516f20u); RETCHK(0x516f25u, 0x516f20u); LOADALL;
  /* 00516f25 lea esi, [edi + 0xc] */ esi = (u32)((u32)(edi + 0xcu));
  /* 00516f28 call 0x529410 */ esp -= 4; M32(esp) = 0x516f2du; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x516f28u); RETCHK(0x516f2du, 0x516f28u); LOADALL;
  /* 00516f2d mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00516f30 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00516f31 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x516f36u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x516f31u); RETCHK(0x516f36u, 0x516f31u); LOADALL;
  /* 00516f36 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00516f39 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516f3c mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00516f3f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00516f40 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00516f41 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00516f48 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00516f49 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00516f4b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00516f4c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00516f50(CPU *c) {
  NATIVE_HOOK(0x516f50u) REGS; LOADALL;
L_00516f50:;
  /* 00516f50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00516f51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00516f53 sub esp, 0x12c */ { u32 a_ = esp, b_ = 0x12cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516f59 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00516f5e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00516f5f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516f60 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00516f63 mov eax, dword ptr [0x7a5960] */ { const u32 m_ = (u32)(0x7a5960u); eax = (u32)(M32(m_)); }
  /* 00516f68 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00516f69 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00516f6b mov ecx, dword ptr [0x7a595c] */ { const u32 m_ = (u32)(0x7a595cu); ecx = (u32)(M32(m_)); }
  /* 00516f71 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00516f72 mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 00516f77 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00516f78 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00516f7a mov byte ptr [ebp - 0x114], bl */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00516f80 call 0x558a40 */ esp -= 4; M32(esp) = 0x516f85u; SAVEALL; F_00558a40(c); ABI_CHECK(0x558a40u, 0x516f80u); RETCHK(0x516f85u, 0x516f80u); LOADALL;
  /* 00516f85 mov esi, eax */ { esi = (u32)(eax); }
  /* 00516f87 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516f8a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00516f8c mov dword ptr [ebp - 0x110], esi */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); M32(m_) = (u32)(esi); }
  /* 00516f92 jne 0x516fb7 */ if (!ZF_) goto L_00516fb7;
  /* 00516f94 push 0x652264 */ { u32 v_ = 0x652264u; esp -= 4; M32(esp) = v_; }
  /* 00516f99 mov esi, 0x7a85f4 */ { esi = (u32)(0x7a85f4u); }
  /* 00516f9e call 0x541010 */ esp -= 4; M32(esp) = 0x516fa3u; SAVEALL; F_00541010(c); ABI_CHECK(0x541010u, 0x516f9eu); RETCHK(0x516fa3u, 0x516f9eu); LOADALL;
  /* 00516fa3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516fa6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00516fa7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00516fa8 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00516faa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00516fab mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00516fae call 0x61af31 */ esp -= 4; M32(esp) = 0x516fb3u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x516faeu); RETCHK(0x516fb3u, 0x516faeu); LOADALL;
  /* 00516fb3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00516fb5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00516fb6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00516fb7:;
  /* 00516fb7 mov edx, dword ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); edx = (u32)(M32(m_)); }
  /* 00516fba fild dword ptr [0x7a5960] */ { const u32 m_ = (u32)(0x7a5960u); FPUSH((double)(s32)M32(m_)); }
  /* 00516fc0 mov dword ptr [ebp - 0x10c], edx */ { const u32 m_ = (u32)(ebp + 0xfffffef4u); M32(m_) = (u32)(edx); }
  /* 00516fc6 mov eax, dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); eax = (u32)(M32(m_)); }
  /* 00516fc9 fmul dword ptr [ebp - 0x10c] */ { const u32 m_ = (u32)(ebp + 0xfffffef4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00516fcf lea ecx, [ebp - 0x10c] */ ecx = (u32)((u32)(ebp + 0xfffffef4u));
  /* 00516fd5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00516fd6 mov dword ptr [ebp - 0x108], eax */ { const u32 m_ = (u32)(ebp + 0xfffffef8u); M32(m_) = (u32)(eax); }
  /* 00516fdc fidiv dword ptr [0x7a595c] */ { const u32 m_ = (u32)(0x7a595cu); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 00516fe2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516fe3 fstp dword ptr [ebp - 0x108] */ { const u32 m_ = (u32)(ebp + 0xfffffef8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00516fe9 call 0x5afe00 */ esp -= 4; M32(esp) = 0x516feeu; SAVEALL; F_005afe00(c); ABI_CHECK(0x5afe00u, 0x516fe9u); RETCHK(0x516feeu, 0x516fe9u); LOADALL;
  /* 00516fee push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00516fef call 0x56bd10 */ esp -= 4; M32(esp) = 0x516ff4u; SAVEALL; F_0056bd10(c); ABI_CHECK(0x56bd10u, 0x516fefu); RETCHK(0x516ff4u, 0x516fefu); LOADALL;
  /* 00516ff4 fild dword ptr [0x7a5960] */ { const u32 m_ = (u32)(0x7a5960u); FPUSH((double)(s32)M32(m_)); }
  /* 00516ffa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516ffd fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00517001 fild dword ptr [0x7a595c] */ { const u32 m_ = (u32)(0x7a595cu); FPUSH((double)(s32)M32(m_)); }
  /* 00517007 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051700a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051700c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051700e call 0x56b8f0 */ esp -= 4; M32(esp) = 0x517013u; SAVEALL; F_0056b8f0(c); ABI_CHECK(0x56b8f0u, 0x51700eu); RETCHK(0x517013u, 0x51700eu); LOADALL;
  /* 00517013 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517016 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00517017 lea eax, [ebp - 0x114] */ eax = (u32)((u32)(ebp + 0xfffffeecu));
  /* 0051701d call 0x518180 */ esp -= 4; M32(esp) = 0x517022u; SAVEALL; F_00518180(c); ABI_CHECK(0x518180u, 0x51701du); RETCHK(0x517022u, 0x51701du); LOADALL;
  /* 00517022 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00517023 call 0x56bc00 */ esp -= 4; M32(esp) = 0x517028u; SAVEALL; F_0056bc00(c); ABI_CHECK(0x56bc00u, 0x517023u); RETCHK(0x517028u, 0x517023u); LOADALL;
  /* 00517028 lea edx, [ebp - 0x11c] */ edx = (u32)((u32)(ebp + 0xfffffee4u));
  /* 0051702e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051702f lea eax, [ebp - 0x12c] */ eax = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00517035 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517036 lea ecx, [ebp - 0x124] */ ecx = (u32)((u32)(ebp + 0xfffffedcu));
  /* 0051703c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051703d call 0x56b7b0 */ esp -= 4; M32(esp) = 0x517042u; SAVEALL; F_0056b7b0(c); ABI_CHECK(0x56b7b0u, 0x51703du); RETCHK(0x517042u, 0x51703du); LOADALL;
  /* 00517042 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517045 call 0x5fbff0 */ esp -= 4; M32(esp) = 0x51704au; SAVEALL; F_005fbff0(c); ABI_CHECK(0x5fbff0u, 0x517045u); RETCHK(0x51704au, 0x517045u); LOADALL;
  /* 0051704a call 0x516bd0 */ esp -= 4; M32(esp) = 0x51704fu; SAVEALL; F_00516bd0(c); ABI_CHECK(0x516bd0u, 0x51704au); RETCHK(0x51704fu, 0x51704au); LOADALL;
  /* 0051704f fild dword ptr [0x7a595c] */ { const u32 m_ = (u32)(0x7a595cu); FPUSH((double)(s32)M32(m_)); }
  /* 00517055 fstp dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051705b fild dword ptr [0x7a5960] */ { const u32 m_ = (u32)(0x7a5960u); FPUSH((double)(s32)M32(m_)); }
  /* 00517061 fstp dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00517067 call 0x62d86e */ esp -= 4; M32(esp) = 0x51706cu; SAVEALL; F_0062d86e(c); ABI_CHECK(0x62d86eu, 0x517067u); RETCHK(0x51706cu, 0x517067u); LOADALL;
  /* 0051706c push 0x64f320 */ { u32 v_ = 0x64f320u; esp -= 4; M32(esp) = v_; }
  /* 00517071 lea edx, [ebp - 0x104] */ edx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 00517077 push 0x652250 */ { u32 v_ = 0x652250u; esp -= 4; M32(esp) = v_; }
  /* 0051707c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051707d mov dword ptr [edi + 0x34], eax */ { const u32 m_ = (u32)(edi + 0x34u); M32(m_) = (u32)(eax); }
  /* 00517080 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x517085u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x517080u); RETCHK(0x517085u, 0x517080u); LOADALL;
  /* 00517085 lea eax, [ebp - 0x104] */ eax = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0051708b lea edx, [edi + 0x18c] */ edx = (u32)((u32)(edi + 0x18cu));
  /* 00517091 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00517093 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517096 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
L_00517098:;
  /* 00517098 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051709a mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0051709d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051709e test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005170a0 jne 0x517098 */ if (!ZF_) goto L_00517098;
  /* 005170a2 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005170a5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005170a6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005170a7 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 005170a9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005170aa call 0x61af31 */ esp -= 4; M32(esp) = 0x5170afu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x5170aau); RETCHK(0x5170afu, 0x5170aau); LOADALL;
  /* 005170af mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005170b1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005170b2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005170c0(CPU *c) {
  NATIVE_HOOK(0x5170c0u) REGS; LOADALL;
L_005170c0:;
  /* 005170c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005170c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005170c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005170c5 push 0x624316 */ { u32 v_ = 0x624316u; esp -= 4; M32(esp) = v_; }
  /* 005170ca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005170d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005170d1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005170d8 sub esp, 0x114 */ { u32 a_ = esp, b_ = 0x114u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005170de mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005170e3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005170e4 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005170e7 call 0x517cb0 */ esp -= 4; M32(esp) = 0x5170ecu; SAVEALL; F_00517cb0(c); ABI_CHECK(0x517cb0u, 0x5170e7u); RETCHK(0x5170ecu, 0x5170e7u); LOADALL;
  /* 005170ec test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005170ee jne 0x517109 */ if (!ZF_) goto L_00517109;
  /* 005170f0 push 0x65221c */ { u32 v_ = 0x65221cu; esp -= 4; M32(esp) = v_; }
  /* 005170f5 mov esi, 0x7a85f4 */ { esi = (u32)(0x7a85f4u); }
  /* 005170fa call 0x541010 */ esp -= 4; M32(esp) = 0x5170ffu; SAVEALL; F_00541010(c); ABI_CHECK(0x541010u, 0x5170fau); RETCHK(0x5170ffu, 0x5170fau); LOADALL;
  /* 005170ff add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517102 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00517104 jmp 0x5176e1 */ goto L_005176e1;
L_00517109:;
  /* 00517109 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051710a mov edi, ebx */ { edi = (u32)(ebx); }
  /* 0051710c call 0x517c40 */ esp -= 4; M32(esp) = 0x517111u; SAVEALL; F_00517c40(c); ABI_CHECK(0x517c40u, 0x51710cu); RETCHK(0x517111u, 0x51710cu); LOADALL;
  /* 00517111 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00517113 jne 0x51712e */ if (!ZF_) goto L_0051712e;
  /* 00517115 push 0x6521f0 */ { u32 v_ = 0x6521f0u; esp -= 4; M32(esp) = v_; }
  /* 0051711a mov esi, 0x7a85f4 */ { esi = (u32)(0x7a85f4u); }
  /* 0051711f call 0x541010 */ esp -= 4; M32(esp) = 0x517124u; SAVEALL; F_00541010(c); ABI_CHECK(0x541010u, 0x51711fu); RETCHK(0x517124u, 0x51711fu); LOADALL;
  /* 00517124 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517127 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00517129 jmp 0x5176e0 */ goto L_005176e0;
L_0051712e:;
  /* 0051712e xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00517130 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 00517137 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 0051713a mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0051713e push 0x48 */ { u32 v_ = 0x48u; esp -= 4; M32(esp) = v_; }
  /* 00517140 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00517143 call 0x5fe934 */ esp -= 4; M32(esp) = 0x517148u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x517143u); RETCHK(0x517148u, 0x517143u); LOADALL;
  /* 00517148 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051714b mov dword ptr [ebp - 0x100], eax */ { const u32 m_ = (u32)(ebp + 0xffffff00u); M32(m_) = (u32)(eax); }
  /* 00517151 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517153 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00517157 je 0x517161 */ if (ZF_) goto L_00517161;
  /* 00517159 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051715a call 0x5614b0 */ esp -= 4; M32(esp) = 0x51715fu; SAVEALL; F_005614b0(c); ABI_CHECK(0x5614b0u, 0x51715au); RETCHK(0x51715fu, 0x51715au); LOADALL;
  /* 0051715f jmp 0x517163 */ goto L_00517163;
L_00517161:;
  /* 00517161 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00517163:;
  /* 00517163 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 00517167 mov dword ptr [ebx + 0xe0], eax */ { const u32 m_ = (u32)(ebx + 0xe0u); M32(m_) = (u32)(eax); }
  /* 0051716d lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00517170 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517171 mov ecx, 0x6521dc */ { ecx = (u32)(0x6521dcu); }
  /* 00517176 call 0x41b430 */ esp -= 4; M32(esp) = 0x51717bu; SAVEALL; F_0041b430(c); ABI_CHECK(0x41b430u, 0x517176u); RETCHK(0x51717bu, 0x517176u); LOADALL;
  /* 0051717b mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0051717e mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 00517183 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517185 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00517188 jae 0x51718d */ if (!CF_) goto L_0051718d;
  /* 0051718a lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_0051718d:;
  /* 0051718d mov ecx, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 00517193 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00517195 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00517196 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00517197 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517198 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51719bu; SAVEALL; call_ind(c, t_); RETCHK(0x51719bu, 0x517198u); LOADALL; }
  /* 0051719b push 0x48 */ { u32 v_ = 0x48u; esp -= 4; M32(esp) = v_; }
  /* 0051719d call 0x5fe934 */ esp -= 4; M32(esp) = 0x5171a2u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x51719du); RETCHK(0x5171a2u, 0x51719du); LOADALL;
  /* 005171a2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005171a5 mov dword ptr [ebp - 0x100], eax */ { const u32 m_ = (u32)(ebp + 0xffffff00u); M32(m_) = (u32)(eax); }
  /* 005171ab cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005171ad mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 005171b1 je 0x5171bb */ if (ZF_) goto L_005171bb;
  /* 005171b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005171b4 call 0x5614b0 */ esp -= 4; M32(esp) = 0x5171b9u; SAVEALL; F_005614b0(c); ABI_CHECK(0x5614b0u, 0x5171b4u); RETCHK(0x5171b9u, 0x5171b4u); LOADALL;
  /* 005171b9 jmp 0x5171bd */ goto L_005171bd;
L_005171bb:;
  /* 005171bb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005171bd:;
  /* 005171bd mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 005171c1 mov dword ptr [ebx + 0xe4], eax */ { const u32 m_ = (u32)(ebx + 0xe4u); M32(m_) = (u32)(eax); }
  /* 005171c7 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 005171ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005171cb mov ecx, 0x6521c0 */ { ecx = (u32)(0x6521c0u); }
  /* 005171d0 call 0x41b430 */ esp -= 4; M32(esp) = 0x5171d5u; SAVEALL; F_0041b430(c); ABI_CHECK(0x41b430u, 0x5171d0u); RETCHK(0x5171d5u, 0x5171d0u); LOADALL;
  /* 005171d5 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005171d8 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 005171db jae 0x5171e0 */ if (!CF_) goto L_005171e0;
  /* 005171dd lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_005171e0:;
  /* 005171e0 mov ecx, dword ptr [ebx + 0xe4] */ { const u32 m_ = (u32)(ebx + 0xe4u); ecx = (u32)(M32(m_)); }
  /* 005171e6 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005171e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005171e9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005171ea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005171eb call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5171eeu; SAVEALL; call_ind(c, t_); RETCHK(0x5171eeu, 0x5171ebu); LOADALL; }
  /* 005171ee push 0x48 */ { u32 v_ = 0x48u; esp -= 4; M32(esp) = v_; }
  /* 005171f0 call 0x5fe934 */ esp -= 4; M32(esp) = 0x5171f5u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5171f0u); RETCHK(0x5171f5u, 0x5171f0u); LOADALL;
  /* 005171f5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005171f8 mov dword ptr [ebp - 0x100], eax */ { const u32 m_ = (u32)(ebp + 0xffffff00u); M32(m_) = (u32)(eax); }
  /* 005171fe cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517200 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 00517204 je 0x51720e */ if (ZF_) goto L_0051720e;
  /* 00517206 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517207 call 0x5614b0 */ esp -= 4; M32(esp) = 0x51720cu; SAVEALL; F_005614b0(c); ABI_CHECK(0x5614b0u, 0x517207u); RETCHK(0x51720cu, 0x517207u); LOADALL;
  /* 0051720c jmp 0x517210 */ goto L_00517210;
L_0051720e:;
  /* 0051720e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00517210:;
  /* 00517210 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 00517214 mov dword ptr [ebx + 0xe8], eax */ { const u32 m_ = (u32)(ebx + 0xe8u); M32(m_) = (u32)(eax); }
  /* 0051721a lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0051721d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051721e mov ecx, 0x65219c */ { ecx = (u32)(0x65219cu); }
  /* 00517223 call 0x41b430 */ esp -= 4; M32(esp) = 0x517228u; SAVEALL; F_0041b430(c); ABI_CHECK(0x41b430u, 0x517223u); RETCHK(0x517228u, 0x517223u); LOADALL;
  /* 00517228 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051722b mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0051722e jae 0x517233 */ if (!CF_) goto L_00517233;
  /* 00517230 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_00517233:;
  /* 00517233 mov ecx, dword ptr [ebx + 0xe8] */ { const u32 m_ = (u32)(ebx + 0xe8u); ecx = (u32)(M32(m_)); }
  /* 00517239 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0051723b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051723c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051723d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051723e call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517241u; SAVEALL; call_ind(c, t_); RETCHK(0x517241u, 0x51723eu); LOADALL; }
  /* 00517241 push 0x48 */ { u32 v_ = 0x48u; esp -= 4; M32(esp) = v_; }
  /* 00517243 call 0x5fe934 */ esp -= 4; M32(esp) = 0x517248u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x517243u); RETCHK(0x517248u, 0x517243u); LOADALL;
  /* 00517248 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051724b mov dword ptr [ebp - 0x100], eax */ { const u32 m_ = (u32)(ebp + 0xffffff00u); M32(m_) = (u32)(eax); }
  /* 00517251 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517253 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 00517257 je 0x517261 */ if (ZF_) goto L_00517261;
  /* 00517259 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051725a call 0x5614b0 */ esp -= 4; M32(esp) = 0x51725fu; SAVEALL; F_005614b0(c); ABI_CHECK(0x5614b0u, 0x51725au); RETCHK(0x51725fu, 0x51725au); LOADALL;
  /* 0051725f jmp 0x517263 */ goto L_00517263;
L_00517261:;
  /* 00517261 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00517263:;
  /* 00517263 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 00517267 mov dword ptr [ebx + 0xec], eax */ { const u32 m_ = (u32)(ebx + 0xecu); M32(m_) = (u32)(eax); }
  /* 0051726d lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00517270 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517271 mov ecx, 0x652180 */ { ecx = (u32)(0x652180u); }
  /* 00517276 call 0x41b430 */ esp -= 4; M32(esp) = 0x51727bu; SAVEALL; F_0041b430(c); ABI_CHECK(0x41b430u, 0x517276u); RETCHK(0x51727bu, 0x517276u); LOADALL;
  /* 0051727b cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051727e mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00517281 jae 0x517286 */ if (!CF_) goto L_00517286;
  /* 00517283 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_00517286:;
  /* 00517286 mov ecx, dword ptr [ebx + 0xec] */ { const u32 m_ = (u32)(ebx + 0xecu); ecx = (u32)(M32(m_)); }
  /* 0051728c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0051728e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051728f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00517290 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517291 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517294u; SAVEALL; call_ind(c, t_); RETCHK(0x517294u, 0x517291u); LOADALL; }
  /* 00517294 push 0x48 */ { u32 v_ = 0x48u; esp -= 4; M32(esp) = v_; }
  /* 00517296 call 0x5fe934 */ esp -= 4; M32(esp) = 0x51729bu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x517296u); RETCHK(0x51729bu, 0x517296u); LOADALL;
  /* 0051729b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051729e mov dword ptr [ebp - 0x100], eax */ { const u32 m_ = (u32)(ebp + 0xffffff00u); M32(m_) = (u32)(eax); }
  /* 005172a4 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005172a6 mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 005172aa je 0x5172b4 */ if (ZF_) goto L_005172b4;
  /* 005172ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005172ad call 0x5614b0 */ esp -= 4; M32(esp) = 0x5172b2u; SAVEALL; F_005614b0(c); ABI_CHECK(0x5614b0u, 0x5172adu); RETCHK(0x5172b2u, 0x5172adu); LOADALL;
  /* 005172b2 jmp 0x5172b6 */ goto L_005172b6;
L_005172b4:;
  /* 005172b4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005172b6:;
  /* 005172b6 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 005172ba mov dword ptr [ebx + 0xf4], eax */ { const u32 m_ = (u32)(ebx + 0xf4u); M32(m_) = (u32)(eax); }
  /* 005172c0 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 005172c3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005172c4 mov ecx, 0x652164 */ { ecx = (u32)(0x652164u); }
  /* 005172c9 call 0x41b430 */ esp -= 4; M32(esp) = 0x5172ceu; SAVEALL; F_0041b430(c); ABI_CHECK(0x41b430u, 0x5172c9u); RETCHK(0x5172ceu, 0x5172c9u); LOADALL;
  /* 005172ce cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005172d1 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 005172d4 jae 0x5172d9 */ if (!CF_) goto L_005172d9;
  /* 005172d6 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_005172d9:;
  /* 005172d9 mov ecx, dword ptr [ebx + 0xf4] */ { const u32 m_ = (u32)(ebx + 0xf4u); ecx = (u32)(M32(m_)); }
  /* 005172df mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005172e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005172e2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005172e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005172e4 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5172e7u; SAVEALL; call_ind(c, t_); RETCHK(0x5172e7u, 0x5172e4u); LOADALL; }
  /* 005172e7 push 0x48 */ { u32 v_ = 0x48u; esp -= 4; M32(esp) = v_; }
  /* 005172e9 call 0x5fe934 */ esp -= 4; M32(esp) = 0x5172eeu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5172e9u); RETCHK(0x5172eeu, 0x5172e9u); LOADALL;
  /* 005172ee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005172f1 mov dword ptr [ebp - 0x100], eax */ { const u32 m_ = (u32)(ebp + 0xffffff00u); M32(m_) = (u32)(eax); }
  /* 005172f7 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005172f9 mov byte ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x6u); }
  /* 005172fd je 0x517307 */ if (ZF_) goto L_00517307;
  /* 005172ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517300 call 0x5614b0 */ esp -= 4; M32(esp) = 0x517305u; SAVEALL; F_005614b0(c); ABI_CHECK(0x5614b0u, 0x517300u); RETCHK(0x517305u, 0x517300u); LOADALL;
  /* 00517305 jmp 0x517309 */ goto L_00517309;
L_00517307:;
  /* 00517307 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00517309:;
  /* 00517309 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0051730d mov dword ptr [ebx + 0xf0], eax */ { const u32 m_ = (u32)(ebx + 0xf0u); M32(m_) = (u32)(eax); }
  /* 00517313 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00517316 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517317 mov ecx, 0x652148 */ { ecx = (u32)(0x652148u); }
  /* 0051731c call 0x41b430 */ esp -= 4; M32(esp) = 0x517321u; SAVEALL; F_0041b430(c); ABI_CHECK(0x41b430u, 0x51731cu); RETCHK(0x517321u, 0x51731cu); LOADALL;
  /* 00517321 mov byte ptr [ebp - 0x101], al */ { const u32 m_ = (u32)(ebp + 0xfffffeffu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00517327 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051732a mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0051732d jae 0x517332 */ if (!CF_) goto L_00517332;
  /* 0051732f lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_00517332:;
  /* 00517332 mov ecx, dword ptr [ebx + 0xf0] */ { const u32 m_ = (u32)(ebx + 0xf0u); ecx = (u32)(M32(m_)); }
  /* 00517338 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0051733a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051733b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051733c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051733d call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517340u; SAVEALL; call_ind(c, t_); RETCHK(0x517340u, 0x51733du); LOADALL; }
  /* 00517340 mov cl, byte ptr [ebp - 0x101] */ { const u32 m_ = (u32)(ebp + 0xfffffeffu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00517346 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00517348 jne 0x517362 */ if (!ZF_) goto L_00517362;
  /* 0051734a cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051734d jb 0x51735b */ if (CF_) goto L_0051735b;
  /* 0051734f mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00517352 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517353 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x517358u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x517353u); RETCHK(0x517358u, 0x517353u); LOADALL;
  /* 00517358 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0051735b:;
  /* 0051735b xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0051735d jmp 0x5176e0 */ goto L_005176e0;
L_00517362:;
  /* 00517362 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517364 jne 0x517375 */ if (!ZF_) goto L_00517375;
  /* 00517366 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00517369 call 0x43ee60 */ esp -= 4; M32(esp) = 0x51736eu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x517369u); RETCHK(0x51736eu, 0x517369u); LOADALL;
  /* 0051736e xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00517370 jmp 0x5176e0 */ goto L_005176e0;
L_00517375:;
  /* 00517375 lea esi, [ebp - 0xfc] */ esi = (u32)((u32)(ebp + 0xffffff04u));
  /* 0051737b call 0x541c70 */ esp -= 4; M32(esp) = 0x517380u; SAVEALL; F_00541c70(c); ABI_CHECK(0x541c70u, 0x51737bu); RETCHK(0x517380u, 0x51737bu); LOADALL;
  /* 00517380 mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 00517384 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00517387 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00517389 mov dword ptr [ebp - 0x5f], edx */ { const u32 m_ = (u32)(ebp + 0xffffffa1u); M32(m_) = (u32)(edx); }
  /* 0051738c mov dword ptr [ebp - 0x5b], edx */ { const u32 m_ = (u32)(ebp + 0xffffffa5u); M32(m_) = (u32)(edx); }
  /* 0051738f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00517391 mov dword ptr [ebp - 0x57], edx */ { const u32 m_ = (u32)(ebp + 0xffffffa9u); M32(m_) = (u32)(edx); }
  /* 00517394 mov dword ptr [ebp - 0x3b], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); M32(m_) = (u32)(ecx); }
  /* 00517397 mov dword ptr [ebp - 0x53], edx */ { const u32 m_ = (u32)(ebp + 0xffffffadu); M32(m_) = (u32)(edx); }
  /* 0051739a mov dword ptr [ebp - 0x37], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc9u); M32(m_) = (u32)(ecx); }
  /* 0051739d mov dword ptr [ebp - 0x4f], edx */ { const u32 m_ = (u32)(ebp + 0xffffffb1u); M32(m_) = (u32)(edx); }
  /* 005173a0 mov dword ptr [ebp - 0x33], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffcdu); M32(m_) = (u32)(ecx); }
  /* 005173a3 mov dword ptr [ebp - 0x4b], edx */ { const u32 m_ = (u32)(ebp + 0xffffffb5u); M32(m_) = (u32)(edx); }
  /* 005173a6 mov word ptr [ebp - 0x2f], cx */ { const u32 m_ = (u32)(ebp + 0xffffffd1u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 005173aa mov dword ptr [ebp - 0x47], edx */ { const u32 m_ = (u32)(ebp + 0xffffffb9u); M32(m_) = (u32)(edx); }
  /* 005173ad cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005173b0 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 005173b3 mov byte ptr [ebp - 0x3c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M8(m_) = (u8)(0x0u); }
  /* 005173b7 mov byte ptr [ebp - 0x2d], cl */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005173ba mov byte ptr [ebp - 0x60], cl */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005173bd mov dword ptr [ebp - 0x43], edx */ { const u32 m_ = (u32)(ebp + 0xffffffbdu); M32(m_) = (u32)(edx); }
  /* 005173c0 jae 0x5173c5 */ if (!CF_) goto L_005173c5;
  /* 005173c2 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_005173c5:;
  /* 005173c5 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 005173c8 lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 005173cb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005173cc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005173cd lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 005173d3 call 0x5427c0 */ esp -= 4; M32(esp) = 0x5173d8u; SAVEALL; F_005427c0(c); ABI_CHECK(0x5427c0u, 0x5173d3u); RETCHK(0x5173d8u, 0x5173d3u); LOADALL;
  /* 005173d8 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005173da lea edi, [ebp - 0x60] */ edi = (u32)((u32)(ebp + 0xffffffa0u));
  /* 005173dd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_005173e0:;
  /* 005173e0 movzx eax, byte ptr [ebp + esi - 0x3c] */ { const u32 m_ = (u32)(ebp + esi + 0xffffffc4u); eax = (u32)(M8(m_)); }
  /* 005173e5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005173e6 push 0x652140 */ { u32 v_ = 0x652140u; esp -= 4; M32(esp) = v_; }
  /* 005173eb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005173ec call 0x5fe9aa */ esp -= 4; M32(esp) = 0x5173f1u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x5173ecu); RETCHK(0x5173f1u, 0x5173ecu); LOADALL;
  /* 005173f1 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005173f4 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005173f5 add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005173f8 cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005173fb jl 0x5173e0 */ if (LT_) goto L_005173e0;
  /* 005173fd push 0x48 */ { u32 v_ = 0x48u; esp -= 4; M32(esp) = v_; }
  /* 005173ff call 0x5fe934 */ esp -= 4; M32(esp) = 0x517404u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5173ffu); RETCHK(0x517404u, 0x5173ffu); LOADALL;
  /* 00517404 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517407 mov dword ptr [ebp - 0x100], eax */ { const u32 m_ = (u32)(ebp + 0xffffff00u); M32(m_) = (u32)(eax); }
  /* 0051740d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051740f mov byte ptr [ebp - 4], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x8u); }
  /* 00517413 je 0x51741d */ if (ZF_) goto L_0051741d;
  /* 00517415 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517416 call 0x5614b0 */ esp -= 4; M32(esp) = 0x51741bu; SAVEALL; F_005614b0(c); ABI_CHECK(0x5614b0u, 0x517416u); RETCHK(0x51741bu, 0x517416u); LOADALL;
  /* 0051741b jmp 0x51741f */ goto L_0051741f;
L_0051741d:;
  /* 0051741d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0051741f:;
  /* 0051741f lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00517422 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00517423 mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 00517427 mov ecx, 0x652124 */ { ecx = (u32)(0x652124u); }
  /* 0051742c mov dword ptr [ebx + 0xf8], eax */ { const u32 m_ = (u32)(ebx + 0xf8u); M32(m_) = (u32)(eax); }
  /* 00517432 call 0x41b430 */ esp -= 4; M32(esp) = 0x517437u; SAVEALL; F_0041b430(c); ABI_CHECK(0x41b430u, 0x517432u); RETCHK(0x517437u, 0x517432u); LOADALL;
  /* 00517437 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0051743a mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0051743f cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517441 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00517444 jae 0x517449 */ if (!CF_) goto L_00517449;
  /* 00517446 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_00517449:;
  /* 00517449 mov ecx, dword ptr [ebx + 0xf8] */ { const u32 m_ = (u32)(ebx + 0xf8u); ecx = (u32)(M32(m_)); }
  /* 0051744f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00517451 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00517453 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00517455 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517456 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517459u; SAVEALL; call_ind(c, t_); RETCHK(0x517459u, 0x517456u); LOADALL; }
  /* 00517459 push 0x48 */ { u32 v_ = 0x48u; esp -= 4; M32(esp) = v_; }
  /* 0051745b call 0x5fe934 */ esp -= 4; M32(esp) = 0x517460u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x51745bu); RETCHK(0x517460u, 0x51745bu); LOADALL;
  /* 00517460 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517463 mov dword ptr [ebp - 0x100], eax */ { const u32 m_ = (u32)(ebp + 0xffffff00u); M32(m_) = (u32)(eax); }
  /* 00517469 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051746b mov byte ptr [ebp - 4], 9 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x9u); }
  /* 0051746f je 0x517479 */ if (ZF_) goto L_00517479;
  /* 00517471 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517472 call 0x5614b0 */ esp -= 4; M32(esp) = 0x517477u; SAVEALL; F_005614b0(c); ABI_CHECK(0x5614b0u, 0x517472u); RETCHK(0x517477u, 0x517472u); LOADALL;
  /* 00517477 jmp 0x51747b */ goto L_0051747b;
L_00517479:;
  /* 00517479 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0051747b:;
  /* 0051747b mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 0051747f mov dword ptr [ebx + 0xfc], eax */ { const u32 m_ = (u32)(ebx + 0xfcu); M32(m_) = (u32)(eax); }
  /* 00517485 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00517488 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517489 mov ecx, 0x652104 */ { ecx = (u32)(0x652104u); }
  /* 0051748e call 0x41b430 */ esp -= 4; M32(esp) = 0x517493u; SAVEALL; F_0041b430(c); ABI_CHECK(0x41b430u, 0x51748eu); RETCHK(0x517493u, 0x51748eu); LOADALL;
  /* 00517493 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517496 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00517499 jae 0x51749e */ if (!CF_) goto L_0051749e;
  /* 0051749b lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_0051749e:;
  /* 0051749e mov ecx, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 005174a4 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005174a6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005174a8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005174aa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005174ab call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5174aeu; SAVEALL; call_ind(c, t_); RETCHK(0x5174aeu, 0x5174abu); LOADALL; }
  /* 005174ae push 0x48 */ { u32 v_ = 0x48u; esp -= 4; M32(esp) = v_; }
  /* 005174b0 call 0x5fe934 */ esp -= 4; M32(esp) = 0x5174b5u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5174b0u); RETCHK(0x5174b5u, 0x5174b0u); LOADALL;
  /* 005174b5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005174b8 mov dword ptr [ebp - 0x100], eax */ { const u32 m_ = (u32)(ebp + 0xffffff00u); M32(m_) = (u32)(eax); }
  /* 005174be test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005174c0 mov byte ptr [ebp - 4], 0xa */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xau); }
  /* 005174c4 je 0x5174ce */ if (ZF_) goto L_005174ce;
  /* 005174c6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005174c7 call 0x5614b0 */ esp -= 4; M32(esp) = 0x5174ccu; SAVEALL; F_005614b0(c); ABI_CHECK(0x5614b0u, 0x5174c7u); RETCHK(0x5174ccu, 0x5174c7u); LOADALL;
  /* 005174cc jmp 0x5174d0 */ goto L_005174d0;
L_005174ce:;
  /* 005174ce xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005174d0:;
  /* 005174d0 mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 005174d4 mov dword ptr [ebx + 0x100], eax */ { const u32 m_ = (u32)(ebx + 0x100u); M32(m_) = (u32)(eax); }
  /* 005174da lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 005174dd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005174de mov ecx, 0x6520e8 */ { ecx = (u32)(0x6520e8u); }
  /* 005174e3 call 0x41b430 */ esp -= 4; M32(esp) = 0x5174e8u; SAVEALL; F_0041b430(c); ABI_CHECK(0x41b430u, 0x5174e3u); RETCHK(0x5174e8u, 0x5174e3u); LOADALL;
  /* 005174e8 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005174eb mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 005174ee jae 0x5174f3 */ if (!CF_) goto L_005174f3;
  /* 005174f0 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_005174f3:;
  /* 005174f3 mov ecx, dword ptr [ebx + 0x100] */ { const u32 m_ = (u32)(ebx + 0x100u); ecx = (u32)(M32(m_)); }
  /* 005174f9 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005174fb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005174fd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005174ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517500 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517503u; SAVEALL; call_ind(c, t_); RETCHK(0x517503u, 0x517500u); LOADALL; }
  /* 00517503 push 0x48 */ { u32 v_ = 0x48u; esp -= 4; M32(esp) = v_; }
  /* 00517505 call 0x5fe934 */ esp -= 4; M32(esp) = 0x51750au; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x517505u); RETCHK(0x51750au, 0x517505u); LOADALL;
  /* 0051750a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051750d mov dword ptr [ebp - 0x100], eax */ { const u32 m_ = (u32)(ebp + 0xffffff00u); M32(m_) = (u32)(eax); }
  /* 00517513 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517515 mov byte ptr [ebp - 4], 0xb */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xbu); }
  /* 00517519 je 0x517523 */ if (ZF_) goto L_00517523;
  /* 0051751b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051751c call 0x5614b0 */ esp -= 4; M32(esp) = 0x517521u; SAVEALL; F_005614b0(c); ABI_CHECK(0x5614b0u, 0x51751cu); RETCHK(0x517521u, 0x51751cu); LOADALL;
  /* 00517521 jmp 0x517525 */ goto L_00517525;
L_00517523:;
  /* 00517523 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00517525:;
  /* 00517525 mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 00517529 mov dword ptr [ebx + 0x104], eax */ { const u32 m_ = (u32)(ebx + 0x104u); M32(m_) = (u32)(eax); }
  /* 0051752f lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00517532 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517533 mov ecx, 0x6520d0 */ { ecx = (u32)(0x6520d0u); }
  /* 00517538 call 0x41b430 */ esp -= 4; M32(esp) = 0x51753du; SAVEALL; F_0041b430(c); ABI_CHECK(0x41b430u, 0x517538u); RETCHK(0x51753du, 0x517538u); LOADALL;
  /* 0051753d cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517540 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00517543 jae 0x517548 */ if (!CF_) goto L_00517548;
  /* 00517545 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_00517548:;
  /* 00517548 mov ecx, dword ptr [ebx + 0x104] */ { const u32 m_ = (u32)(ebx + 0x104u); ecx = (u32)(M32(m_)); }
  /* 0051754e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00517550 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00517552 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00517554 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517555 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517558u; SAVEALL; call_ind(c, t_); RETCHK(0x517558u, 0x517555u); LOADALL; }
  /* 00517558 lea eax, [ebx + 0x10c] */ eax = (u32)((u32)(ebx + 0x10cu));
  /* 0051755e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051755f mov ecx, 0x6520c0 */ { ecx = (u32)(0x6520c0u); }
  /* 00517564 call 0x41b430 */ esp -= 4; M32(esp) = 0x517569u; SAVEALL; F_0041b430(c); ABI_CHECK(0x41b430u, 0x517564u); RETCHK(0x517569u, 0x517564u); LOADALL;
  /* 00517569 push 0x48 */ { u32 v_ = 0x48u; esp -= 4; M32(esp) = v_; }
  /* 0051756b call 0x5fe934 */ esp -= 4; M32(esp) = 0x517570u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x51756bu); RETCHK(0x517570u, 0x51756bu); LOADALL;
  /* 00517570 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517573 mov dword ptr [ebp - 0x100], eax */ { const u32 m_ = (u32)(ebp + 0xffffff00u); M32(m_) = (u32)(eax); }
  /* 00517579 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051757b mov byte ptr [ebp - 4], 0xc */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xcu); }
  /* 0051757f je 0x517589 */ if (ZF_) goto L_00517589;
  /* 00517581 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517582 call 0x5614b0 */ esp -= 4; M32(esp) = 0x517587u; SAVEALL; F_005614b0(c); ABI_CHECK(0x5614b0u, 0x517582u); RETCHK(0x517587u, 0x517582u); LOADALL;
  /* 00517587 jmp 0x51758b */ goto L_0051758b;
L_00517589:;
  /* 00517589 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0051758b:;
  /* 0051758b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0051758e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051758f mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 00517593 mov ecx, 0x6520a4 */ { ecx = (u32)(0x6520a4u); }
  /* 00517598 mov dword ptr [ebx + 0x108], eax */ { const u32 m_ = (u32)(ebx + 0x108u); M32(m_) = (u32)(eax); }
  /* 0051759e call 0x41b430 */ esp -= 4; M32(esp) = 0x5175a3u; SAVEALL; F_0041b430(c); ABI_CHECK(0x41b430u, 0x51759eu); RETCHK(0x5175a3u, 0x51759eu); LOADALL;
  /* 005175a3 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005175a6 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 005175a9 jae 0x5175ae */ if (!CF_) goto L_005175ae;
  /* 005175ab lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_005175ae:;
  /* 005175ae mov ecx, dword ptr [ebx + 0x108] */ { const u32 m_ = (u32)(ebx + 0x108u); ecx = (u32)(M32(m_)); }
  /* 005175b4 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005175b6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005175b8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005175ba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005175bb call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5175beu; SAVEALL; call_ind(c, t_); RETCHK(0x5175beu, 0x5175bbu); LOADALL; }
  /* 005175be mov byte ptr [0x7a6d23], 1 */ { const u32 m_ = (u32)(0x7a6d23u); M8(m_) = (u8)(0x1u); }
  /* 005175c5 call 0x52a110 */ esp -= 4; M32(esp) = 0x5175cau; SAVEALL; F_0052a110(c); ABI_CHECK(0x52a110u, 0x5175c5u); RETCHK(0x5175cau, 0x5175c5u); LOADALL;
  /* 005175ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005175cb call 0x52a170 */ esp -= 4; M32(esp) = 0x5175d0u; SAVEALL; F_0052a170(c); ABI_CHECK(0x52a170u, 0x5175cbu); RETCHK(0x5175d0u, 0x5175cbu); LOADALL;
  /* 005175d0 push 0x48 */ { u32 v_ = 0x48u; esp -= 4; M32(esp) = v_; }
  /* 005175d2 call 0x5fe934 */ esp -= 4; M32(esp) = 0x5175d7u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5175d2u); RETCHK(0x5175d7u, 0x5175d2u); LOADALL;
  /* 005175d7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005175da test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005175dc je 0x5175e5 */ if (ZF_) goto L_005175e5;
  /* 005175de call 0x51c450 */ esp -= 4; M32(esp) = 0x5175e3u; SAVEALL; F_0051c450(c); ABI_CHECK(0x51c450u, 0x5175deu); RETCHK(0x5175e3u, 0x5175deu); LOADALL;
  /* 005175e3 jmp 0x5175e7 */ goto L_005175e7;
L_005175e5:;
  /* 005175e5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005175e7:;
  /* 005175e7 mov edi, eax */ { edi = (u32)(eax); }
  /* 005175e9 mov dword ptr [ebx + 0x134], eax */ { const u32 m_ = (u32)(ebx + 0x134u); M32(m_) = (u32)(eax); }
  /* 005175ef call 0x51c4e0 */ esp -= 4; M32(esp) = 0x5175f4u; SAVEALL; F_0051c4e0(c); ABI_CHECK(0x51c4e0u, 0x5175efu); RETCHK(0x5175f4u, 0x5175efu); LOADALL;
  /* 005175f4 push 0x1e4 */ { u32 v_ = 0x1e4u; esp -= 4; M32(esp) = v_; }
  /* 005175f9 call 0x5fe934 */ esp -= 4; M32(esp) = 0x5175feu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5175f9u); RETCHK(0x5175feu, 0x5175f9u); LOADALL;
  /* 005175fe add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517601 mov dword ptr [ebp - 0x100], eax */ { const u32 m_ = (u32)(ebp + 0xffffff00u); M32(m_) = (u32)(eax); }
  /* 00517607 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517609 mov byte ptr [ebp - 4], 0xd */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xdu); }
  /* 0051760d je 0x517618 */ if (ZF_) goto L_00517618;
  /* 0051760f mov esi, eax */ { esi = (u32)(eax); }
  /* 00517611 call 0x537c70 */ esp -= 4; M32(esp) = 0x517616u; SAVEALL; F_00537c70(c); ABI_CHECK(0x537c70u, 0x517611u); RETCHK(0x517616u, 0x517611u); LOADALL;
  /* 00517616 jmp 0x51761a */ goto L_0051761a;
L_00517618:;
  /* 00517618 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0051761a:;
  /* 0051761a mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 0051761e push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 00517620 push 0x65209c */ { u32 v_ = 0x65209cu; esp -= 4; M32(esp) = v_; }
  /* 00517625 lea ecx, [ebp - 0x120] */ ecx = (u32)((u32)(ebp + 0xfffffee0u));
  /* 0051762b mov dword ptr [ebx + 0x150], eax */ { const u32 m_ = (u32)(ebx + 0x150u); M32(m_) = (u32)(eax); }
  /* 00517631 mov dword ptr [ebp - 0x108], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffef8u); M32(m_) = (u32)(0xfu); }
  /* 0051763b mov dword ptr [ebp - 0x10c], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffef4u); M32(m_) = (u32)(0x0u); }
  /* 00517645 mov byte ptr [ebp - 0x11c], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); M8(m_) = (u8)(0x0u); }
  /* 0051764c call 0x404420 */ esp -= 4; M32(esp) = 0x517651u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x51764cu); RETCHK(0x517651u, 0x51764cu); LOADALL;
  /* 00517651 push 0x42000000 */ { u32 v_ = 0x42000000u; esp -= 4; M32(esp) = v_; }
  /* 00517656 push 0x44480000 */ { u32 v_ = 0x44480000u; esp -= 4; M32(esp) = v_; }
  /* 0051765b mov byte ptr [ebp - 4], 0xe */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xeu); }
  /* 0051765f mov esi, dword ptr [ebx + 0x150] */ { const u32 m_ = (u32)(ebx + 0x150u); esi = (u32)(M32(m_)); }
  /* 00517665 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 00517667 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00517669 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051766b lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0051766e call 0x52cec0 */ esp -= 4; M32(esp) = 0x517673u; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x51766eu); RETCHK(0x517673u, 0x51766eu); LOADALL;
  /* 00517673 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517674 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 0051767a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051767b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051767d call dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517680u; SAVEALL; call_ind(c, t_); RETCHK(0x517680u, 0x51767du); LOADALL; }
  /* 00517680 mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 00517684 mov eax, dword ptr [ebp - 0x108] */ { const u32 m_ = (u32)(ebp + 0xfffffef8u); eax = (u32)(M32(m_)); }
  /* 0051768a mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 0051768f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517691 jb 0x5176a2 */ if (CF_) goto L_005176a2;
  /* 00517693 mov ecx, dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); ecx = (u32)(M32(m_)); }
  /* 00517699 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051769a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51769fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51769au); RETCHK(0x51769fu, 0x51769au); LOADALL;
  /* 0051769f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005176a2:;
  /* 005176a2 lea esi, [ebx + 0x138] */ esi = (u32)((u32)(ebx + 0x138u));
  /* 005176a8 call 0x52cd90 */ esp -= 4; M32(esp) = 0x5176adu; SAVEALL; F_0052cd90(c); ABI_CHECK(0x52cd90u, 0x5176a8u); RETCHK(0x5176adu, 0x5176a8u); LOADALL;
  /* 005176ad mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005176b0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005176b1 call 0x559eb0 */ esp -= 4; M32(esp) = 0x5176b6u; SAVEALL; F_00559eb0(c); ABI_CHECK(0x559eb0u, 0x5176b1u); RETCHK(0x5176b6u, 0x5176b1u); LOADALL;
  /* 005176b6 mov esi, dword ptr [ebx + 0x130] */ { const u32 m_ = (u32)(ebx + 0x130u); esi = (u32)(M32(m_)); }
  /* 005176bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005176bd call 0x532080 */ esp -= 4; M32(esp) = 0x5176c2u; SAVEALL; F_00532080(c); ABI_CHECK(0x532080u, 0x5176bdu); RETCHK(0x5176c2u, 0x5176bdu); LOADALL;
  /* 005176c2 mov eax, dword ptr [ebx + 0x130] */ { const u32 m_ = (u32)(ebx + 0x130u); eax = (u32)(M32(m_)); }
  /* 005176c8 mov dword ptr [0x7a8388], eax */ { const u32 m_ = (u32)(0x7a8388u); M32(m_) = (u32)(eax); }
  /* 005176cd cmp dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005176d0 jb 0x5176de */ if (CF_) goto L_005176de;
  /* 005176d2 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 005176d5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005176d6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5176dbu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5176d6u); RETCHK(0x5176dbu, 0x5176d6u); LOADALL;
  /* 005176db add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005176de:;
  /* 005176de mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
L_005176e0:;
  /* 005176e0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_005176e1:;
  /* 005176e1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005176e4 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005176eb mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005176ee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005176ef call 0x61af31 */ esp -= 4; M32(esp) = 0x5176f4u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x5176efu); RETCHK(0x5176f4u, 0x5176efu); LOADALL;
  /* 005176f4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005176f6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005176f7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00517700(CPU *c) {
  NATIVE_HOOK(0x517700u) REGS; LOADALL;
L_00517700:;
  /* 00517700 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00517701 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00517703 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00517704 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517705 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00517706 lea esi, [edi + 0x164] */ esi = (u32)((u32)(edi + 0x164u));
  /* 0051770c call 0x518c60 */ esp -= 4; M32(esp) = 0x517711u; SAVEALL; F_00518c60(c); ABI_CHECK(0x518c60u, 0x51770cu); RETCHK(0x517711u, 0x51770cu); LOADALL;
  /* 00517711 call 0x52a110 */ esp -= 4; M32(esp) = 0x517716u; SAVEALL; F_0052a110(c); ABI_CHECK(0x52a110u, 0x517711u); RETCHK(0x517716u, 0x517711u); LOADALL;
  /* 00517716 call 0x52a0b0 */ esp -= 4; M32(esp) = 0x51771bu; SAVEALL; F_0052a0b0(c); ABI_CHECK(0x52a0b0u, 0x517716u); RETCHK(0x51771bu, 0x517716u); LOADALL;
  /* 0051771b lea esi, [edi + 0x138] */ esi = (u32)((u32)(edi + 0x138u));
  /* 00517721 call 0x52cda0 */ esp -= 4; M32(esp) = 0x517726u; SAVEALL; F_0052cda0(c); ABI_CHECK(0x52cda0u, 0x517721u); RETCHK(0x517726u, 0x517721u); LOADALL;
  /* 00517726 mov esi, dword ptr [edi + 0x134] */ { const u32 m_ = (u32)(edi + 0x134u); esi = (u32)(M32(m_)); }
  /* 0051772c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0051772e cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517730 je 0x51774d */ if (ZF_) goto L_0051774d;
  /* 00517732 call 0x51c530 */ esp -= 4; M32(esp) = 0x517737u; SAVEALL; F_0051c530(c); ABI_CHECK(0x51c530u, 0x517732u); RETCHK(0x517737u, 0x517732u); LOADALL;
  /* 00517737 mov ecx, dword ptr [edi + 0x134] */ { const u32 m_ = (u32)(edi + 0x134u); ecx = (u32)(M32(m_)); }
  /* 0051773d cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051773f je 0x517747 */ if (ZF_) goto L_00517747;
  /* 00517741 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00517743 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00517745 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517747u; SAVEALL; call_ind(c, t_); RETCHK(0x517747u, 0x517745u); LOADALL; }
L_00517747:;
  /* 00517747 mov dword ptr [edi + 0x134], ebx */ { const u32 m_ = (u32)(edi + 0x134u); M32(m_) = (u32)(ebx); }
L_0051774d:;
  /* 0051774d mov ecx, dword ptr [edi + 0x150] */ { const u32 m_ = (u32)(edi + 0x150u); ecx = (u32)(M32(m_)); }
  /* 00517753 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517755 je 0x517775 */ if (ZF_) goto L_00517775;
  /* 00517757 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00517759 call dword ptr [edx + 0xdc] */ { const u32 m_ = (u32)(edx + 0xdcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51775fu; SAVEALL; call_ind(c, t_); RETCHK(0x51775fu, 0x517759u); LOADALL; }
  /* 0051775f mov ecx, dword ptr [edi + 0x150] */ { const u32 m_ = (u32)(edi + 0x150u); ecx = (u32)(M32(m_)); }
  /* 00517765 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517767 je 0x51776f */ if (ZF_) goto L_0051776f;
  /* 00517769 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0051776b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0051776d call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51776fu; SAVEALL; call_ind(c, t_); RETCHK(0x51776fu, 0x51776du); LOADALL; }
L_0051776f:;
  /* 0051776f mov dword ptr [edi + 0x150], ebx */ { const u32 m_ = (u32)(edi + 0x150u); M32(m_) = (u32)(ebx); }
L_00517775:;
  /* 00517775 mov esi, dword ptr [edi + 0x130] */ { const u32 m_ = (u32)(edi + 0x130u); esi = (u32)(M32(m_)); }
  /* 0051777b call 0x532680 */ esp -= 4; M32(esp) = 0x517780u; SAVEALL; F_00532680(c); ABI_CHECK(0x532680u, 0x51777bu); RETCHK(0x517780u, 0x51777bu); LOADALL;
  /* 00517780 mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00517783 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00517785 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517787 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0051778a je 0x5177b0 */ if (ZF_) goto L_005177b0;
  /* 0051778c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00517790:;
  /* 00517790 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00517793 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517795 je 0x5177a9 */ if (ZF_) goto L_005177a9;
  /* 00517797 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00517799 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51779cu; SAVEALL; call_ind(c, t_); RETCHK(0x51779cu, 0x517799u); LOADALL; }
  /* 0051779c mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051779f cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005177a1 je 0x5177a9 */ if (ZF_) goto L_005177a9;
  /* 005177a3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005177a5 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005177a7 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5177a9u; SAVEALL; call_ind(c, t_); RETCHK(0x5177a9u, 0x5177a7u); LOADALL; }
L_005177a9:;
  /* 005177a9 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 005177ab cmp esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005177ae jne 0x517790 */ if (!ZF_) goto L_00517790;
L_005177b0:;
  /* 005177b0 lea esi, [edi + 0xc] */ esi = (u32)((u32)(edi + 0xcu));
  /* 005177b3 call 0x529410 */ esp -= 4; M32(esp) = 0x5177b8u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x5177b3u); RETCHK(0x5177b8u, 0x5177b3u); LOADALL;
  /* 005177b8 mov ecx, dword ptr [edi + 0xe0] */ { const u32 m_ = (u32)(edi + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 005177be cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005177c0 je 0x5177ce */ if (ZF_) goto L_005177ce;
  /* 005177c2 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005177c4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005177c6 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5177c8u; SAVEALL; call_ind(c, t_); RETCHK(0x5177c8u, 0x5177c6u); LOADALL; }
  /* 005177c8 mov dword ptr [edi + 0xe0], ebx */ { const u32 m_ = (u32)(edi + 0xe0u); M32(m_) = (u32)(ebx); }
L_005177ce:;
  /* 005177ce mov ecx, dword ptr [edi + 0xe4] */ { const u32 m_ = (u32)(edi + 0xe4u); ecx = (u32)(M32(m_)); }
  /* 005177d4 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005177d6 je 0x5177e4 */ if (ZF_) goto L_005177e4;
  /* 005177d8 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005177da push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005177dc call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5177deu; SAVEALL; call_ind(c, t_); RETCHK(0x5177deu, 0x5177dcu); LOADALL; }
  /* 005177de mov dword ptr [edi + 0xe4], ebx */ { const u32 m_ = (u32)(edi + 0xe4u); M32(m_) = (u32)(ebx); }
L_005177e4:;
  /* 005177e4 mov ecx, dword ptr [edi + 0xe8] */ { const u32 m_ = (u32)(edi + 0xe8u); ecx = (u32)(M32(m_)); }
  /* 005177ea cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005177ec je 0x5177fa */ if (ZF_) goto L_005177fa;
  /* 005177ee mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005177f0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005177f2 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5177f4u; SAVEALL; call_ind(c, t_); RETCHK(0x5177f4u, 0x5177f2u); LOADALL; }
  /* 005177f4 mov dword ptr [edi + 0xe8], ebx */ { const u32 m_ = (u32)(edi + 0xe8u); M32(m_) = (u32)(ebx); }
L_005177fa:;
  /* 005177fa mov ecx, dword ptr [edi + 0xec] */ { const u32 m_ = (u32)(edi + 0xecu); ecx = (u32)(M32(m_)); }
  /* 00517800 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517802 je 0x517810 */ if (ZF_) goto L_00517810;
  /* 00517804 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00517806 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00517808 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51780au; SAVEALL; call_ind(c, t_); RETCHK(0x51780au, 0x517808u); LOADALL; }
  /* 0051780a mov dword ptr [edi + 0xec], ebx */ { const u32 m_ = (u32)(edi + 0xecu); M32(m_) = (u32)(ebx); }
L_00517810:;
  /* 00517810 mov ecx, dword ptr [edi + 0xf4] */ { const u32 m_ = (u32)(edi + 0xf4u); ecx = (u32)(M32(m_)); }
  /* 00517816 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517818 je 0x517826 */ if (ZF_) goto L_00517826;
  /* 0051781a mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0051781c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0051781e call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517820u; SAVEALL; call_ind(c, t_); RETCHK(0x517820u, 0x51781eu); LOADALL; }
  /* 00517820 mov dword ptr [edi + 0xf4], ebx */ { const u32 m_ = (u32)(edi + 0xf4u); M32(m_) = (u32)(ebx); }
L_00517826:;
  /* 00517826 mov ecx, dword ptr [edi + 0xf0] */ { const u32 m_ = (u32)(edi + 0xf0u); ecx = (u32)(M32(m_)); }
  /* 0051782c cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051782e je 0x51783c */ if (ZF_) goto L_0051783c;
  /* 00517830 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00517832 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00517834 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517836u; SAVEALL; call_ind(c, t_); RETCHK(0x517836u, 0x517834u); LOADALL; }
  /* 00517836 mov dword ptr [edi + 0xf0], ebx */ { const u32 m_ = (u32)(edi + 0xf0u); M32(m_) = (u32)(ebx); }
L_0051783c:;
  /* 0051783c mov ecx, dword ptr [edi + 0xf8] */ { const u32 m_ = (u32)(edi + 0xf8u); ecx = (u32)(M32(m_)); }
  /* 00517842 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517844 je 0x517852 */ if (ZF_) goto L_00517852;
  /* 00517846 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00517848 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0051784a call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51784cu; SAVEALL; call_ind(c, t_); RETCHK(0x51784cu, 0x51784au); LOADALL; }
  /* 0051784c mov dword ptr [edi + 0xf8], ebx */ { const u32 m_ = (u32)(edi + 0xf8u); M32(m_) = (u32)(ebx); }
L_00517852:;
  /* 00517852 mov ecx, dword ptr [edi + 0xfc] */ { const u32 m_ = (u32)(edi + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 00517858 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051785a je 0x517868 */ if (ZF_) goto L_00517868;
  /* 0051785c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0051785e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00517860 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517862u; SAVEALL; call_ind(c, t_); RETCHK(0x517862u, 0x517860u); LOADALL; }
  /* 00517862 mov dword ptr [edi + 0xfc], ebx */ { const u32 m_ = (u32)(edi + 0xfcu); M32(m_) = (u32)(ebx); }
L_00517868:;
  /* 00517868 mov ecx, dword ptr [edi + 0x100] */ { const u32 m_ = (u32)(edi + 0x100u); ecx = (u32)(M32(m_)); }
  /* 0051786e cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517870 je 0x51787e */ if (ZF_) goto L_0051787e;
  /* 00517872 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00517874 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00517876 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517878u; SAVEALL; call_ind(c, t_); RETCHK(0x517878u, 0x517876u); LOADALL; }
  /* 00517878 mov dword ptr [edi + 0x100], ebx */ { const u32 m_ = (u32)(edi + 0x100u); M32(m_) = (u32)(ebx); }
L_0051787e:;
  /* 0051787e mov ecx, dword ptr [edi + 0x104] */ { const u32 m_ = (u32)(edi + 0x104u); ecx = (u32)(M32(m_)); }
  /* 00517884 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517886 je 0x517894 */ if (ZF_) goto L_00517894;
  /* 00517888 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0051788a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0051788c call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51788eu; SAVEALL; call_ind(c, t_); RETCHK(0x51788eu, 0x51788cu); LOADALL; }
  /* 0051788e mov dword ptr [edi + 0x104], ebx */ { const u32 m_ = (u32)(edi + 0x104u); M32(m_) = (u32)(ebx); }
L_00517894:;
  /* 00517894 mov ecx, dword ptr [edi + 0x108] */ { const u32 m_ = (u32)(edi + 0x108u); ecx = (u32)(M32(m_)); }
  /* 0051789a cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051789c je 0x5178aa */ if (ZF_) goto L_005178aa;
  /* 0051789e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005178a0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005178a2 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5178a4u; SAVEALL; call_ind(c, t_); RETCHK(0x5178a4u, 0x5178a2u); LOADALL; }
  /* 005178a4 mov dword ptr [edi + 0x108], ebx */ { const u32 m_ = (u32)(edi + 0x108u); M32(m_) = (u32)(ebx); }
L_005178aa:;
  /* 005178aa mov eax, edi */ { eax = (u32)(edi); }
  /* 005178ac call 0x517cf0 */ esp -= 4; M32(esp) = 0x5178b1u; SAVEALL; F_00517cf0(c); ABI_CHECK(0x517cf0u, 0x5178acu); RETCHK(0x5178b1u, 0x5178acu); LOADALL;
  /* 005178b1 call 0x517cd0 */ esp -= 4; M32(esp) = 0x5178b6u; SAVEALL; F_00517cd0(c); ABI_CHECK(0x517cd0u, 0x5178b1u); RETCHK(0x5178b6u, 0x5178b1u); LOADALL;
  /* 005178b6 mov esi, edi */ { esi = (u32)(edi); }
  /* 005178b8 call 0x517ba0 */ esp -= 4; M32(esp) = 0x5178bdu; SAVEALL; F_00517ba0(c); ABI_CHECK(0x517ba0u, 0x5178b8u); RETCHK(0x5178bdu, 0x5178b8u); LOADALL;
  /* 005178bd cmp dword ptr [edi + 0xdc], ebx */ { const u32 m_ = (u32)(edi + 0xdcu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005178c3 jbe 0x517927 */ if ((CF_|ZF_)) goto L_00517927;
  /* 005178c5 lea ebx, [edi + 0xcc] */ ebx = (u32)((u32)(edi + 0xccu));
  /* 005178cb jmp 0x5178d0 */ goto L_005178d0;
L_005178d0:;
  /* 005178d0 mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005178d3 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 005178d6 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005178d8 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005178d9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005178db shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005178dd lea esi, [eax + eax] */ esi = (u32)((u32)(eax + eax));
  /* 005178e0 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005178e2 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005178e4 mov esi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); esi = (u32)(M32(m_)); }
  /* 005178e7 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005178e9 ja 0x5178ed */ if (!(CF_|ZF_)) goto L_005178ed;
  /* 005178eb sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_005178ed:;
  /* 005178ed mov edx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005178f0 mov eax, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); eax = (u32)(M32(m_)); }
  /* 005178f3 mov edx, dword ptr [eax + ecx*8] */ { const u32 m_ = (u32)(eax + ecx * 8u); edx = (u32)(M32(m_)); }
  /* 005178f6 mov ecx, dword ptr [eax + ecx*8 + 4] */ { const u32 m_ = (u32)(eax + ecx * 8u + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005178fa mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 005178fd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005178ff je 0x51790e */ if (ZF_) goto L_0051790e;
  /* 00517901 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00517902 mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 00517905 jne 0x51790e */ if (!ZF_) goto L_0051790e;
  /* 00517907 mov dword ptr [ebx + 0xc], 0 */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(0x0u); }
L_0051790e:;
  /* 0051790e test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00517910 je 0x51791d */ if (ZF_) goto L_0051791d;
  /* 00517912 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517914 je 0x51791d */ if (ZF_) goto L_0051791d;
  /* 00517916 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00517918 call 0x5589e0 */ esp -= 4; M32(esp) = 0x51791du; SAVEALL; F_005589e0(c); ABI_CHECK(0x5589e0u, 0x517918u); RETCHK(0x51791du, 0x517918u); LOADALL;
L_0051791d:;
  /* 0051791d mov eax, dword ptr [edi + 0xdc] */ { const u32 m_ = (u32)(edi + 0xdcu); eax = (u32)(M32(m_)); }
  /* 00517923 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517925 ja 0x5178d0 */ if (!(CF_|ZF_)) goto L_005178d0;
L_00517927:;
  /* 00517927 mov al, byte ptr [0x7a6d23] */ { const u32 m_ = (u32)(0x7a6d23u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051792c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051792e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051792f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00517930 je 0x51793c */ if (ZF_) goto L_0051793c;
  /* 00517932 call 0x5fc180 */ esp -= 4; M32(esp) = 0x517937u; SAVEALL; F_005fc180(c); ABI_CHECK(0x5fc180u, 0x517932u); RETCHK(0x517937u, 0x517932u); LOADALL;
  /* 00517937 call 0x56bd40 */ esp -= 4; M32(esp) = 0x51793cu; SAVEALL; F_0056bd40(c); ABI_CHECK(0x56bd40u, 0x517937u); RETCHK(0x51793cu, 0x517937u); LOADALL;
L_0051793c:;
  /* 0051793c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051793e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051793f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00517940(CPU *c) {
  NATIVE_HOOK(0x517940u) REGS; LOADALL;
L_00517940:;
  /* 00517940 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00517941 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00517943 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517946 mov eax, esi */ { eax = (u32)(esi); }
  /* 00517948 call 0x5592c0 */ esp -= 4; M32(esp) = 0x51794du; SAVEALL; F_005592c0(c); ABI_CHECK(0x5592c0u, 0x517948u); RETCHK(0x51794du, 0x517948u); LOADALL;
  /* 0051794d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051794f lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00517952 call 0x516c00 */ esp -= 4; M32(esp) = 0x517957u; SAVEALL; F_00516c00(c); ABI_CHECK(0x516c00u, 0x517952u); RETCHK(0x517957u, 0x517952u); LOADALL;
  /* 00517957 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00517959 call 0x52ce90 */ esp -= 4; M32(esp) = 0x51795eu; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x517959u); RETCHK(0x51795eu, 0x517959u); LOADALL;
  /* 0051795e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00517960 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00517961 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00517970(CPU *c) {
  NATIVE_HOOK(0x517970u) REGS; LOADALL;
L_00517970:;
  /* 00517970 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005179b0(CPU *c) {
  NATIVE_HOOK(0x5179b0u) REGS; LOADALL;
L_005179b0:;
  /* 005179b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005179b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005179b3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005179b6 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005179b8 je 0x5179df */ if (ZF_) goto L_005179df;
  /* 005179ba mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005179bc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005179bd lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005179c0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005179c1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005179c3 call dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5179c6u; SAVEALL; call_ind(c, t_); RETCHK(0x5179c6u, 0x5179c3u); LOADALL; }
  /* 005179c6 mov eax, esi */ { eax = (u32)(esi); }
  /* 005179c8 call 0x507890 */ esp -= 4; M32(esp) = 0x5179cdu; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x5179c8u); RETCHK(0x5179cdu, 0x5179c8u); LOADALL;
  /* 005179cd lea edi, [ebp - 8] */ edi = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005179d0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005179d2 call 0x52cf40 */ esp -= 4; M32(esp) = 0x5179d7u; SAVEALL; F_0052cf40(c); ABI_CHECK(0x52cf40u, 0x5179d2u); RETCHK(0x5179d7u, 0x5179d2u); LOADALL;
  /* 005179d7 mov eax, edi */ { eax = (u32)(edi); }
  /* 005179d9 call 0x517970 */ esp -= 4; M32(esp) = 0x5179deu; SAVEALL; F_00517970(c); ABI_CHECK(0x517970u, 0x5179d9u); RETCHK(0x5179deu, 0x5179d9u); LOADALL;
  /* 005179de pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_005179df:;
  /* 005179df mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005179e1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005179e2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005179f0(CPU *c) {
  NATIVE_HOOK(0x5179f0u) REGS; LOADALL;
L_005179f0:;
  /* 005179f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005179f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005179f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005179f4 mov eax, edi */ { eax = (u32)(edi); }
  /* 005179f6 call 0x517d60 */ esp -= 4; M32(esp) = 0x5179fbu; SAVEALL; F_00517d60(c); ABI_CHECK(0x517d60u, 0x5179f6u); RETCHK(0x5179fbu, 0x5179f6u); LOADALL;
  /* 005179fb mov esi, edi */ { esi = (u32)(edi); }
  /* 005179fd call 0x518010 */ esp -= 4; M32(esp) = 0x517a02u; SAVEALL; F_00518010(c); ABI_CHECK(0x518010u, 0x5179fdu); RETCHK(0x517a02u, 0x5179fdu); LOADALL;
  /* 00517a02 mov eax, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00517a05 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517a07 je 0x517a43 */ if (ZF_) goto L_00517a43;
  /* 00517a09 mov esi, dword ptr [edi + 0x134] */ { const u32 m_ = (u32)(edi + 0x134u); esi = (u32)(M32(m_)); }
  /* 00517a0f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517a11 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517a12 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00517a15 je 0x517a1d */ if (ZF_) goto L_00517a1d;
  /* 00517a17 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517a18 call 0x51c5a0 */ esp -= 4; M32(esp) = 0x517a1du; SAVEALL; F_0051c5a0(c); ABI_CHECK(0x51c5a0u, 0x517a18u); RETCHK(0x517a1du, 0x517a18u); LOADALL;
L_00517a1d:;
  /* 00517a1d mov ecx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00517a20 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00517a22 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517a23 call dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517a26u; SAVEALL; call_ind(c, t_); RETCHK(0x517a26u, 0x517a23u); LOADALL; }
  /* 00517a26 mov ecx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00517a29 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517a2a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00517a2b call 0x509010 */ esp -= 4; M32(esp) = 0x517a30u; SAVEALL; F_00509010(c); ABI_CHECK(0x509010u, 0x517a2bu); RETCHK(0x517a30u, 0x517a2bu); LOADALL;
  /* 00517a30 mov eax, dword ptr [edi + 0x150] */ { const u32 m_ = (u32)(edi + 0x150u); eax = (u32)(M32(m_)); }
  /* 00517a36 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517a38 je 0x517a42 */ if (ZF_) goto L_00517a42;
  /* 00517a3a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00517a3c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00517a3e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517a3f call dword ptr [edx + 0x3c] */ { const u32 m_ = (u32)(edx + 0x3cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517a42u; SAVEALL; call_ind(c, t_); RETCHK(0x517a42u, 0x517a3fu); LOADALL; }
L_00517a42:;
  /* 00517a42 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00517a43:;
  /* 00517a43 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00517a44 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00517a45 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00517a50(CPU *c) {
  NATIVE_HOOK(0x517a50u) REGS; LOADALL;
L_00517a50:;
  /* 00517a50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00517a51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00517a53 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00517a54 mov eax, dword ptr [edi + 0xdc] */ { const u32 m_ = (u32)(edi + 0xdcu); eax = (u32)(M32(m_)); }
  /* 00517a5a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517a5c jbe 0x517b30 */ if ((CF_|ZF_)) goto L_00517b30;
  /* 00517a62 mov edx, dword ptr [edi + 0xd8] */ { const u32 m_ = (u32)(edi + 0xd8u); edx = (u32)(M32(m_)); }
  /* 00517a68 mov ecx, dword ptr [edi + 0xdc] */ { const u32 m_ = (u32)(edi + 0xdcu); ecx = (u32)(M32(m_)); }
  /* 00517a6e lea eax, [edi + 0xcc] */ eax = (u32)((u32)(edi + 0xccu));
  /* 00517a74 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00517a76 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00517a77 mov edx, eax */ { edx = (u32)(eax); }
  /* 00517a79 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00517a7b shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00517a7d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00517a7e lea esi, [eax + eax] */ esi = (u32)((u32)(eax + eax));
  /* 00517a81 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00517a83 mov esi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); esi = (u32)(M32(m_)); }
  /* 00517a86 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517a88 ja 0x517a8c */ if (!(CF_|ZF_)) goto L_00517a8c;
  /* 00517a8a sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_00517a8c:;
  /* 00517a8c mov edx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00517a8f mov eax, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); eax = (u32)(M32(m_)); }
  /* 00517a92 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517a93 mov ebx, dword ptr [eax + ecx*8] */ { const u32 m_ = (u32)(eax + ecx * 8u); ebx = (u32)(M32(m_)); }
  /* 00517a96 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00517a98 mov esi, dword ptr [eax + ecx*8 + 4] */ { const u32 m_ = (u32)(eax + ecx * 8u + 0x4u); esi = (u32)(M32(m_)); }
  /* 00517a9c je 0x517ac9 */ if (ZF_) goto L_00517ac9;
  /* 00517a9e mov ecx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00517aa1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517aa3 je 0x517aaa */ if (ZF_) goto L_00517aaa;
  /* 00517aa5 call 0x508460 */ esp -= 4; M32(esp) = 0x517aaau; SAVEALL; F_00508460(c); ABI_CHECK(0x508460u, 0x517aa5u); RETCHK(0x517aaau, 0x517aa5u); LOADALL;
L_00517aaa:;
  /* 00517aaa push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00517aac lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00517aaf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00517ab0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00517ab1 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 00517ab5 mov byte ptr [ebp - 3], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffdu); M8(m_) = (u8)(0x0u); }
  /* 00517ab9 mov byte ptr [ebp - 2], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffeu); M8(m_) = (u8)(0x0u); }
  /* 00517abd mov byte ptr [ebp - 1], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)(0x0u); }
  /* 00517ac1 call 0x5afd30 */ esp -= 4; M32(esp) = 0x517ac6u; SAVEALL; F_005afd30(c); ABI_CHECK(0x5afd30u, 0x517ac1u); RETCHK(0x517ac6u, 0x517ac1u); LOADALL;
  /* 00517ac6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00517ac9:;
  /* 00517ac9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00517aca call 0x5afb80 */ esp -= 4; M32(esp) = 0x517acfu; SAVEALL; F_005afb80(c); ABI_CHECK(0x5afb80u, 0x517acau); RETCHK(0x517acfu, 0x517acau); LOADALL;
  /* 00517acf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517ad2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517ad4 je 0x517b25 */ if (ZF_) goto L_00517b25;
  /* 00517ad6 mov ecx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00517ad9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517adb je 0x517afb */ if (ZF_) goto L_00517afb;
  /* 00517add call 0x508410 */ esp -= 4; M32(esp) = 0x517ae2u; SAVEALL; F_00508410(c); ABI_CHECK(0x508410u, 0x517addu); RETCHK(0x517ae2u, 0x517addu); LOADALL;
  /* 00517ae2 mov eax, dword ptr [edi + 0x150] */ { const u32 m_ = (u32)(edi + 0x150u); eax = (u32)(M32(m_)); }
  /* 00517ae8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517aea je 0x517af6 */ if (ZF_) goto L_00517af6;
  /* 00517aec mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00517aee mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00517af0 call dword ptr [edx + 0xd4] */ { const u32 m_ = (u32)(edx + 0xd4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517af6u; SAVEALL; call_ind(c, t_); RETCHK(0x517af6u, 0x517af0u); LOADALL; }
L_00517af6:;
  /* 00517af6 call 0x523370 */ esp -= 4; M32(esp) = 0x517afbu; SAVEALL; F_00523370(c); ABI_CHECK(0x523370u, 0x517af6u); RETCHK(0x517afbu, 0x517af6u); LOADALL;
L_00517afb:;
  /* 00517afb call 0x558f50 */ esp -= 4; M32(esp) = 0x517b00u; SAVEALL; F_00558f50(c); ABI_CHECK(0x558f50u, 0x517afbu); RETCHK(0x517b00u, 0x517afbu); LOADALL;
  /* 00517b00 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517b02 jne 0x517b1c */ if (!ZF_) goto L_00517b1c;
  /* 00517b04 call 0x558f40 */ esp -= 4; M32(esp) = 0x517b09u; SAVEALL; F_00558f40(c); ABI_CHECK(0x558f40u, 0x517b04u); RETCHK(0x517b09u, 0x517b04u); LOADALL;
  /* 00517b09 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517b0b je 0x517b1c */ if (ZF_) goto L_00517b1c;
  /* 00517b0d mov edx, dword ptr [edi + 0x134] */ { const u32 m_ = (u32)(edi + 0x134u); edx = (u32)(M32(m_)); }
  /* 00517b13 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517b15 je 0x517b1c */ if (ZF_) goto L_00517b1c;
  /* 00517b17 call 0x51c5e0 */ esp -= 4; M32(esp) = 0x517b1cu; SAVEALL; F_0051c5e0(c); ABI_CHECK(0x51c5e0u, 0x517b17u); RETCHK(0x517b1cu, 0x517b17u); LOADALL;
L_00517b1c:;
  /* 00517b1c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00517b1d call 0x5afb70 */ esp -= 4; M32(esp) = 0x517b22u; SAVEALL; F_005afb70(c); ABI_CHECK(0x5afb70u, 0x517b1du); RETCHK(0x517b22u, 0x517b1du); LOADALL;
  /* 00517b22 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00517b25:;
  /* 00517b25 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00517b27 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00517b28 je 0x517b2f */ if (ZF_) goto L_00517b2f;
  /* 00517b2a call 0x559190 */ esp -= 4; M32(esp) = 0x517b2fu; SAVEALL; F_00559190(c); ABI_CHECK(0x559190u, 0x517b2au); RETCHK(0x517b2fu, 0x517b2au); LOADALL;
L_00517b2f:;
  /* 00517b2f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00517b30:;
  /* 00517b30 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00517b32 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00517b33 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00517ba0(CPU *c) {
  NATIVE_HOOK(0x517ba0u) REGS; LOADALL;
L_00517ba0:;
  /* 00517ba0 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 00517ba3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517ba5 je 0x517bc4 */ if (ZF_) goto L_00517bc4;
  /* 00517ba7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517ba8 mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 00517bab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517bac call 0x57b1a0 */ esp -= 4; M32(esp) = 0x517bb1u; SAVEALL; F_0057b1a0(c); ABI_CHECK(0x57b1a0u, 0x517bacu); RETCHK(0x517bb1u, 0x517bacu); LOADALL;
  /* 00517bb1 mov ecx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ecx = (u32)(M32(m_)); }
  /* 00517bb4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00517bb5 call 0x57d320 */ esp -= 4; M32(esp) = 0x517bbau; SAVEALL; F_0057d320(c); ABI_CHECK(0x57d320u, 0x517bb5u); RETCHK(0x517bbau, 0x517bb5u); LOADALL;
  /* 00517bba add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517bbd mov dword ptr [esi + 0x30], 0 */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(0x0u); }
L_00517bc4:;
  /* 00517bc4 mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 00517bc7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517bc9 je 0x517bdb */ if (ZF_) goto L_00517bdb;
  /* 00517bcb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517bcc call 0x57e8e0 */ esp -= 4; M32(esp) = 0x517bd1u; SAVEALL; F_0057e8e0(c); ABI_CHECK(0x57e8e0u, 0x517bccu); RETCHK(0x517bd1u, 0x517bccu); LOADALL;
  /* 00517bd1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517bd4 mov dword ptr [esi + 0x34], 0 */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(0x0u); }
L_00517bdb:;
  /* 00517bdb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00517be0(CPU *c) {
  NATIVE_HOOK(0x517be0u) REGS; LOADALL;
L_00517be0:;
  /* 00517be0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00517be1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00517be3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517be6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00517be7 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00517be9 call 0x57d360 */ esp -= 4; M32(esp) = 0x517beeu; SAVEALL; F_0057d360(c); ABI_CHECK(0x57d360u, 0x517be9u); RETCHK(0x517beeu, 0x517be9u); LOADALL;
  /* 00517bee mov esi, eax */ { esi = (u32)(eax); }
  /* 00517bf0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517bf3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517bf5 je 0x517c2a */ if (ZF_) goto L_00517c2a;
  /* 00517bf7 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00517bfa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517bfb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00517bfc mov dword ptr [ebp - 0x10], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x3f800000u); }
  /* 00517c03 mov dword ptr [ebp - 0xc], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x3f800000u); }
  /* 00517c0a mov dword ptr [ebp - 8], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x3f800000u); }
  /* 00517c11 mov dword ptr [ebp - 4], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3f800000u); }
  /* 00517c18 call 0x57cde0 */ esp -= 4; M32(esp) = 0x517c1du; SAVEALL; F_0057cde0(c); ABI_CHECK(0x57cde0u, 0x517c18u); RETCHK(0x517c1du, 0x517c18u); LOADALL;
  /* 00517c1d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00517c20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00517c21 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00517c22 call 0x57b150 */ esp -= 4; M32(esp) = 0x517c27u; SAVEALL; F_0057b150(c); ABI_CHECK(0x57b150u, 0x517c22u); RETCHK(0x517c27u, 0x517c22u); LOADALL;
  /* 00517c27 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00517c2a:;
  /* 00517c2a mov eax, esi */ { eax = (u32)(esi); }
  /* 00517c2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00517c2d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00517c2f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00517c30 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00517c40(CPU *c) {
  NATIVE_HOOK(0x517c40u) REGS; LOADALL;
L_00517c40:;
  /* 00517c40 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00517c42 call 0x5fe934 */ esp -= 4; M32(esp) = 0x517c47u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x517c42u); RETCHK(0x517c47u, 0x517c42u); LOADALL;
  /* 00517c47 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517c4a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517c4c je 0x517c5d */ if (ZF_) goto L_00517c5d;
  /* 00517c4e mov dword ptr [eax], 0x64d178 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64d178u); }
  /* 00517c54 mov dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 00517c5b jmp 0x517c5f */ goto L_00517c5f;
L_00517c5d:;
  /* 00517c5d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00517c5f:;
  /* 00517c5f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00517c61 push 0x652090 */ { u32 v_ = 0x652090u; esp -= 4; M32(esp) = v_; }
  /* 00517c66 mov dword ptr [edi + 0x128], eax */ { const u32 m_ = (u32)(edi + 0x128u); M32(m_) = (u32)(eax); }
  /* 00517c6c call 0x529310 */ esp -= 4; M32(esp) = 0x517c71u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x517c6cu); RETCHK(0x517c71u, 0x517c6cu); LOADALL;
  /* 00517c71 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00517c73 call 0x5fe934 */ esp -= 4; M32(esp) = 0x517c78u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x517c73u); RETCHK(0x517c78u, 0x517c73u); LOADALL;
  /* 00517c78 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517c7b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517c7d je 0x517c8e */ if (ZF_) goto L_00517c8e;
  /* 00517c7f mov dword ptr [eax], 0x64d178 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64d178u); }
  /* 00517c85 mov dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 00517c8c jmp 0x517c90 */ goto L_00517c90;
L_00517c8e:;
  /* 00517c8e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00517c90:;
  /* 00517c90 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00517c92 push 0x652084 */ { u32 v_ = 0x652084u; esp -= 4; M32(esp) = v_; }
  /* 00517c97 mov dword ptr [edi + 0x12c], eax */ { const u32 m_ = (u32)(edi + 0x12cu); M32(m_) = (u32)(eax); }
  /* 00517c9d call 0x529310 */ esp -= 4; M32(esp) = 0x517ca2u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x517c9du); RETCHK(0x517ca2u, 0x517c9du); LOADALL;
  /* 00517ca2 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00517ca4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00517cb0(CPU *c) {
  NATIVE_HOOK(0x517cb0u) REGS; LOADALL;
L_00517cb0:;
  /* 00517cb0 mov eax, dword ptr [0x7a6d94] */ { const u32 m_ = (u32)(0x7a6d94u); eax = (u32)(M32(m_)); }
  /* 00517cb5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517cb7 jne 0x517cc3 */ if (!ZF_) goto L_00517cc3;
  /* 00517cb9 call 0x5ac5c0 */ esp -= 4; M32(esp) = 0x517cbeu; SAVEALL; F_005ac5c0(c); ABI_CHECK(0x5ac5c0u, 0x517cb9u); RETCHK(0x517cbeu, 0x517cb9u); LOADALL;
  /* 00517cbe mov dword ptr [0x7a6d94], eax */ { const u32 m_ = (u32)(0x7a6d94u); M32(m_) = (u32)(eax); }
L_00517cc3:;
  /* 00517cc3 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00517cc5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00517cd0(CPU *c) {
  NATIVE_HOOK(0x517cd0u) REGS; LOADALL;
L_00517cd0:;
  /* 00517cd0 mov eax, dword ptr [0x7a6d94] */ { const u32 m_ = (u32)(0x7a6d94u); eax = (u32)(M32(m_)); }
  /* 00517cd5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517cd7 je 0x517ce0 */ if (ZF_) goto L_00517ce0;
  /* 00517cd9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517cda call 0x5ac660 */ esp -= 4; M32(esp) = 0x517cdfu; SAVEALL; F_005ac660(c); ABI_CHECK(0x5ac660u, 0x517cdau); RETCHK(0x517cdfu, 0x517cdau); LOADALL;
  /* 00517cdf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_00517ce0:;
  /* 00517ce0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00517cf0(CPU *c) {
  NATIVE_HOOK(0x517cf0u) REGS; LOADALL;
L_00517cf0:;
  /* 00517cf0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00517cf1 mov esi, eax */ { esi = (u32)(eax); }
  /* 00517cf3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00517cf4 add esi, 0x128 */ { u32 a_ = esi, b_ = 0x128u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00517cfa mov edi, 2 */ { edi = (u32)(0x2u); }
  /* 00517cff nop */ ;
L_00517d00:;
  /* 00517d00 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00517d02 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517d04 je 0x517d0c */ if (ZF_) goto L_00517d0c;
  /* 00517d06 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00517d08 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00517d0a call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517d0cu; SAVEALL; call_ind(c, t_); RETCHK(0x517d0cu, 0x517d0au); LOADALL; }
L_00517d0c:;
  /* 00517d0c mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 00517d12 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00517d15 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00517d16 jne 0x517d00 */ if (!ZF_) goto L_00517d00;
  /* 00517d18 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00517d19 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00517d1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00517d20(CPU *c) {
  NATIVE_HOOK(0x517d20u) REGS; LOADALL;
L_00517d20:;
  /* 00517d20 cmp ax, 4 */ { u32 a_ = (eax & 0xffffu), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00517d24 jne 0x517d2c */ if (!ZF_) goto L_00517d2c;
  /* 00517d26 mov eax, dword ptr [0x688358] */ { const u32 m_ = (u32)(0x688358u); eax = (u32)(M32(m_)); }
  /* 00517d2b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00517d2c:;
  /* 00517d2c cmp ax, 6 */ { u32 a_ = (eax & 0xffffu), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00517d30 jne 0x517d38 */ if (!ZF_) goto L_00517d38;
  /* 00517d32 mov eax, dword ptr [0x688350] */ { const u32 m_ = (u32)(0x688350u); eax = (u32)(M32(m_)); }
  /* 00517d37 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00517d38:;
  /* 00517d38 cmp ax, 5 */ { u32 a_ = (eax & 0xffffu), b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00517d3c jne 0x517d44 */ if (!ZF_) goto L_00517d44;
  /* 00517d3e mov eax, dword ptr [0x688354] */ { const u32 m_ = (u32)(0x688354u); eax = (u32)(M32(m_)); }
  /* 00517d43 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00517d44:;
  /* 00517d44 cmp ax, 7 */ { u32 a_ = (eax & 0xffffu), b_ = 0x7u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00517d48 jne 0x517d50 */ if (!ZF_) goto L_00517d50;
  /* 00517d4a mov eax, dword ptr [0x68835c] */ { const u32 m_ = (u32)(0x68835cu); eax = (u32)(M32(m_)); }
  /* 00517d4f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00517d50:;
  /* 00517d50 movzx eax, ax */ { eax = (u32)((eax & 0xffffu)); }
  /* 00517d53 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00517d60(CPU *c) {
  NATIVE_HOOK(0x517d60u) REGS; LOADALL;
L_00517d60:;
  /* 00517d60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00517d61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00517d63 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517d66 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517d67 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00517d68 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00517d69 mov edi, eax */ { edi = (u32)(eax); }
  /* 00517d6b mov eax, dword ptr [0x68a080] */ { const u32 m_ = (u32)(0x68a080u); eax = (u32)(M32(m_)); }
  /* 00517d70 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00517d72 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517d74 jne 0x517d7e */ if (!ZF_) goto L_00517d7e;
  /* 00517d76 cmp dword ptr [0x7a6e90], ebx */ { const u32 m_ = (u32)(0x7a6e90u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517d7c je 0x517d91 */ if (ZF_) goto L_00517d91;
L_00517d7e:;
  /* 00517d7e mov esi, dword ptr [edi + 0x130] */ { const u32 m_ = (u32)(edi + 0x130u); esi = (u32)(M32(m_)); }
  /* 00517d84 call 0x5322f0 */ esp -= 4; M32(esp) = 0x517d89u; SAVEALL; F_005322f0(c); ABI_CHECK(0x5322f0u, 0x517d84u); RETCHK(0x517d89u, 0x517d84u); LOADALL;
  /* 00517d89 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517d8b jl 0x517ffc */ if (LT_) goto L_00517ffc;
L_00517d91:;
  /* 00517d91 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00517d93 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00517d96 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00517d99 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00517d9c mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00517d9f mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00517da2 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00517da5 mov eax, edi */ { eax = (u32)(edi); }
  /* 00517da7 call 0x5180e0 */ esp -= 4; M32(esp) = 0x517dacu; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x517da7u); RETCHK(0x517dacu, 0x517da7u); LOADALL;
  /* 00517dac mov esi, eax */ { esi = (u32)(eax); }
  /* 00517dae cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517db0 je 0x517ffc */ if (ZF_) goto L_00517ffc;
  /* 00517db6 mov eax, dword ptr [edi + 0x130] */ { const u32 m_ = (u32)(edi + 0x130u); eax = (u32)(M32(m_)); }
  /* 00517dbc mov ecx, dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00517dbf cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517dc1 je 0x517dd3 */ if (ZF_) goto L_00517dd3;
  /* 00517dc3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517dc4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517dc5 mov dword ptr [eax + 0x5c], ebx */ { const u32 m_ = (u32)(eax + 0x5cu); M32(m_) = (u32)(ebx); }
  /* 00517dc8 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00517dca push 0x26 */ { u32 v_ = 0x26u; esp -= 4; M32(esp) = v_; }
  /* 00517dcc mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00517dce call dword ptr [edx + 0x7c] */ { const u32 m_ = (u32)(edx + 0x7cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517dd1u; SAVEALL; call_ind(c, t_); RETCHK(0x517dd1u, 0x517dceu); LOADALL; }
  /* 00517dd1 jmp 0x517e27 */ goto L_00517e27;
L_00517dd3:;
  /* 00517dd3 mov eax, dword ptr [edi + 0x130] */ { const u32 m_ = (u32)(edi + 0x130u); eax = (u32)(M32(m_)); }
  /* 00517dd9 mov ecx, dword ptr [eax + 0x68] */ { const u32 m_ = (u32)(eax + 0x68u); ecx = (u32)(M32(m_)); }
  /* 00517ddc cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517dde je 0x517de9 */ if (ZF_) goto L_00517de9;
  /* 00517de0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517de1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517de2 mov dword ptr [eax + 0x68], ebx */ { const u32 m_ = (u32)(eax + 0x68u); M32(m_) = (u32)(ebx); }
  /* 00517de5 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 00517de7 jmp 0x517e20 */ goto L_00517e20;
L_00517de9:;
  /* 00517de9 mov eax, dword ptr [edi + 0x130] */ { const u32 m_ = (u32)(edi + 0x130u); eax = (u32)(M32(m_)); }
  /* 00517def mov ecx, dword ptr [eax + 0x74] */ { const u32 m_ = (u32)(eax + 0x74u); ecx = (u32)(M32(m_)); }
  /* 00517df2 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517df4 je 0x517e06 */ if (ZF_) goto L_00517e06;
  /* 00517df6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517df7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517df8 mov dword ptr [eax + 0x74], ebx */ { const u32 m_ = (u32)(eax + 0x74u); M32(m_) = (u32)(ebx); }
  /* 00517dfb mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00517dfd push 0x25 */ { u32 v_ = 0x25u; esp -= 4; M32(esp) = v_; }
  /* 00517dff mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00517e01 call dword ptr [edx + 0x7c] */ { const u32 m_ = (u32)(edx + 0x7cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517e04u; SAVEALL; call_ind(c, t_); RETCHK(0x517e04u, 0x517e01u); LOADALL; }
  /* 00517e04 jmp 0x517e27 */ goto L_00517e27;
L_00517e06:;
  /* 00517e06 mov eax, dword ptr [edi + 0x130] */ { const u32 m_ = (u32)(edi + 0x130u); eax = (u32)(M32(m_)); }
  /* 00517e0c mov ecx, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); ecx = (u32)(M32(m_)); }
  /* 00517e12 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517e14 je 0x517e27 */ if (ZF_) goto L_00517e27;
  /* 00517e16 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517e17 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517e18 mov dword ptr [eax + 0x80], ebx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ebx); }
  /* 00517e1e push 0x27 */ { u32 v_ = 0x27u; esp -= 4; M32(esp) = v_; }
L_00517e20:;
  /* 00517e20 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00517e22 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00517e24 call dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517e27u; SAVEALL; call_ind(c, t_); RETCHK(0x517e27u, 0x517e24u); LOADALL; }
L_00517e27:;
  /* 00517e27 cmp dword ptr [0x7a6e94], ebx */ { const u32 m_ = (u32)(0x7a6e94u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517e2d mov eax, 7 */ { eax = (u32)(0x7u); }
  /* 00517e32 jne 0x517ed5 */ if (!ZF_) goto L_00517ed5;
  /* 00517e38 cmp dword ptr [0x7a6e38], eax */ { const u32 m_ = (u32)(0x7a6e38u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517e3e jne 0x517ed5 */ if (!ZF_) goto L_00517ed5;
  /* 00517e44 cmp dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517e47 jne 0x517ed5 */ if (!ZF_) goto L_00517ed5;
  /* 00517e4d mov eax, dword ptr [edi + 0x130] */ { const u32 m_ = (u32)(edi + 0x130u); eax = (u32)(M32(m_)); }
  /* 00517e53 mov ecx, dword ptr [eax + 0xb0] */ { const u32 m_ = (u32)(eax + 0xb0u); ecx = (u32)(M32(m_)); }
  /* 00517e59 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517e5b je 0x517e71 */ if (ZF_) goto L_00517e71;
  /* 00517e5d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517e5e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517e5f mov dword ptr [eax + 0xb0], ebx */ { const u32 m_ = (u32)(eax + 0xb0u); M32(m_) = (u32)(ebx); }
  /* 00517e65 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00517e67 push 0xff01 */ { u32 v_ = 0xff01u; esp -= 4; M32(esp) = v_; }
  /* 00517e6c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00517e6e call dword ptr [edx + 0x7c] */ { const u32 m_ = (u32)(edx + 0x7cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517e71u; SAVEALL; call_ind(c, t_); RETCHK(0x517e71u, 0x517e6eu); LOADALL; }
L_00517e71:;
  /* 00517e71 mov eax, dword ptr [edi + 0x130] */ { const u32 m_ = (u32)(edi + 0x130u); eax = (u32)(M32(m_)); }
  /* 00517e77 mov ecx, dword ptr [eax + 0x8c] */ { const u32 m_ = (u32)(eax + 0x8cu); ecx = (u32)(M32(m_)); }
  /* 00517e7d cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517e7f je 0x517e95 */ if (ZF_) goto L_00517e95;
  /* 00517e81 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517e82 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517e83 mov dword ptr [eax + 0x8c], ebx */ { const u32 m_ = (u32)(eax + 0x8cu); M32(m_) = (u32)(ebx); }
  /* 00517e89 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00517e8b push 0xff02 */ { u32 v_ = 0xff02u; esp -= 4; M32(esp) = v_; }
  /* 00517e90 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00517e92 call dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517e95u; SAVEALL; call_ind(c, t_); RETCHK(0x517e95u, 0x517e92u); LOADALL; }
L_00517e95:;
  /* 00517e95 mov eax, dword ptr [edi + 0x130] */ { const u32 m_ = (u32)(edi + 0x130u); eax = (u32)(M32(m_)); }
  /* 00517e9b mov ecx, dword ptr [eax + 0xa4] */ { const u32 m_ = (u32)(eax + 0xa4u); ecx = (u32)(M32(m_)); }
  /* 00517ea1 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517ea3 je 0x517eb6 */ if (ZF_) goto L_00517eb6;
  /* 00517ea5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517ea6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517ea7 mov dword ptr [eax + 0xa4], ebx */ { const u32 m_ = (u32)(eax + 0xa4u); M32(m_) = (u32)(ebx); }
  /* 00517ead mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00517eaf push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 00517eb1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00517eb3 call dword ptr [edx + 0x7c] */ { const u32 m_ = (u32)(edx + 0x7cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517eb6u; SAVEALL; call_ind(c, t_); RETCHK(0x517eb6u, 0x517eb3u); LOADALL; }
L_00517eb6:;
  /* 00517eb6 mov eax, dword ptr [edi + 0x130] */ { const u32 m_ = (u32)(edi + 0x130u); eax = (u32)(M32(m_)); }
  /* 00517ebc mov ecx, dword ptr [eax + 0x98] */ { const u32 m_ = (u32)(eax + 0x98u); ecx = (u32)(M32(m_)); }
  /* 00517ec2 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517ec4 je 0x517f7e */ if (ZF_) goto L_00517f7e;
  /* 00517eca mov dword ptr [eax + 0x98], ebx */ { const u32 m_ = (u32)(eax + 0x98u); M32(m_) = (u32)(ebx); }
  /* 00517ed0 jmp 0x517f73 */ goto L_00517f73;
L_00517ed5:;
  /* 00517ed5 call 0x517d20 */ esp -= 4; M32(esp) = 0x517edau; SAVEALL; F_00517d20(c); ABI_CHECK(0x517d20u, 0x517ed5u); RETCHK(0x517edau, 0x517ed5u); LOADALL;
  /* 00517eda mov ecx, dword ptr [edi + 0x130] */ { const u32 m_ = (u32)(edi + 0x130u); ecx = (u32)(M32(m_)); }
  /* 00517ee0 lea edx, [eax + eax*2] */ edx = (u32)((u32)(eax + eax * 2u));
  /* 00517ee3 lea eax, [ecx + edx*4 + 0x5c] */ eax = (u32)((u32)(ecx + edx * 4u + 0x5cu));
  /* 00517ee7 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00517ee9 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517eeb je 0x517efd */ if (ZF_) goto L_00517efd;
  /* 00517eed push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517eee push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517eef mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
  /* 00517ef1 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00517ef3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00517ef5 push 0xff01 */ { u32 v_ = 0xff01u; esp -= 4; M32(esp) = v_; }
  /* 00517efa call dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517efdu; SAVEALL; call_ind(c, t_); RETCHK(0x517efdu, 0x517efau); LOADALL; }
L_00517efd:;
  /* 00517efd mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 00517f02 call 0x517d20 */ esp -= 4; M32(esp) = 0x517f07u; SAVEALL; F_00517d20(c); ABI_CHECK(0x517d20u, 0x517f02u); RETCHK(0x517f07u, 0x517f02u); LOADALL;
  /* 00517f07 mov ecx, dword ptr [edi + 0x130] */ { const u32 m_ = (u32)(edi + 0x130u); ecx = (u32)(M32(m_)); }
  /* 00517f0d lea edx, [eax + eax*2] */ edx = (u32)((u32)(eax + eax * 2u));
  /* 00517f10 lea eax, [ecx + edx*4 + 0x5c] */ eax = (u32)((u32)(ecx + edx * 4u + 0x5cu));
  /* 00517f14 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00517f16 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517f18 je 0x517f2a */ if (ZF_) goto L_00517f2a;
  /* 00517f1a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517f1b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517f1c mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
  /* 00517f1e mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00517f20 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00517f22 push 0xff02 */ { u32 v_ = 0xff02u; esp -= 4; M32(esp) = v_; }
  /* 00517f27 call dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517f2au; SAVEALL; call_ind(c, t_); RETCHK(0x517f2au, 0x517f27u); LOADALL; }
L_00517f2a:;
  /* 00517f2a mov eax, 6 */ { eax = (u32)(0x6u); }
  /* 00517f2f call 0x517d20 */ esp -= 4; M32(esp) = 0x517f34u; SAVEALL; F_00517d20(c); ABI_CHECK(0x517d20u, 0x517f2fu); RETCHK(0x517f34u, 0x517f2fu); LOADALL;
  /* 00517f34 mov ecx, dword ptr [edi + 0x130] */ { const u32 m_ = (u32)(edi + 0x130u); ecx = (u32)(M32(m_)); }
  /* 00517f3a lea edx, [eax + eax*2] */ edx = (u32)((u32)(eax + eax * 2u));
  /* 00517f3d lea eax, [ecx + edx*4 + 0x5c] */ eax = (u32)((u32)(ecx + edx * 4u + 0x5cu));
  /* 00517f41 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00517f43 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517f45 je 0x517f54 */ if (ZF_) goto L_00517f54;
  /* 00517f47 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517f48 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517f49 mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
  /* 00517f4b mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00517f4d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00517f4f push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 00517f51 call dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517f54u; SAVEALL; call_ind(c, t_); RETCHK(0x517f54u, 0x517f51u); LOADALL; }
L_00517f54:;
  /* 00517f54 mov eax, 5 */ { eax = (u32)(0x5u); }
  /* 00517f59 call 0x517d20 */ esp -= 4; M32(esp) = 0x517f5eu; SAVEALL; F_00517d20(c); ABI_CHECK(0x517d20u, 0x517f59u); RETCHK(0x517f5eu, 0x517f59u); LOADALL;
  /* 00517f5e mov ecx, dword ptr [edi + 0x130] */ { const u32 m_ = (u32)(edi + 0x130u); ecx = (u32)(M32(m_)); }
  /* 00517f64 lea edx, [eax + eax*2] */ edx = (u32)((u32)(eax + eax * 2u));
  /* 00517f67 lea eax, [ecx + edx*4 + 0x5c] */ eax = (u32)((u32)(ecx + edx * 4u + 0x5cu));
  /* 00517f6b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00517f6d cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517f6f je 0x517f7e */ if (ZF_) goto L_00517f7e;
  /* 00517f71 mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
L_00517f73:;
  /* 00517f73 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00517f75 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517f76 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517f77 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00517f79 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00517f7b call dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517f7eu; SAVEALL; call_ind(c, t_); RETCHK(0x517f7eu, 0x517f7bu); LOADALL; }
L_00517f7e:;
  /* 00517f7e mov eax, dword ptr [edi + 0x130] */ { const u32 m_ = (u32)(edi + 0x130u); eax = (u32)(M32(m_)); }
  /* 00517f84 mov ecx, dword ptr [eax + 0xbc] */ { const u32 m_ = (u32)(eax + 0xbcu); ecx = (u32)(M32(m_)); }
  /* 00517f8a cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517f8c je 0x517fa0 */ if (ZF_) goto L_00517fa0;
  /* 00517f8e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00517f90 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517f91 mov dword ptr [eax + 0xbc], ebx */ { const u32 m_ = (u32)(eax + 0xbcu); M32(m_) = (u32)(ebx); }
  /* 00517f97 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00517f99 push 0x21 */ { u32 v_ = 0x21u; esp -= 4; M32(esp) = v_; }
  /* 00517f9b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00517f9d call dword ptr [edx + 0x7c] */ { const u32 m_ = (u32)(edx + 0x7cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517fa0u; SAVEALL; call_ind(c, t_); RETCHK(0x517fa0u, 0x517f9du); LOADALL; }
L_00517fa0:;
  /* 00517fa0 mov eax, dword ptr [edi + 0x130] */ { const u32 m_ = (u32)(edi + 0x130u); eax = (u32)(M32(m_)); }
  /* 00517fa6 mov ecx, dword ptr [eax + 0xc8] */ { const u32 m_ = (u32)(eax + 0xc8u); ecx = (u32)(M32(m_)); }
  /* 00517fac cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517fae je 0x517fc2 */ if (ZF_) goto L_00517fc2;
  /* 00517fb0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00517fb2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517fb3 mov dword ptr [eax + 0xc8], ebx */ { const u32 m_ = (u32)(eax + 0xc8u); M32(m_) = (u32)(ebx); }
  /* 00517fb9 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00517fbb push 0x22 */ { u32 v_ = 0x22u; esp -= 4; M32(esp) = v_; }
  /* 00517fbd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00517fbf call dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517fc2u; SAVEALL; call_ind(c, t_); RETCHK(0x517fc2u, 0x517fbfu); LOADALL; }
L_00517fc2:;
  /* 00517fc2 mov edi, dword ptr [edi + 0x130] */ { const u32 m_ = (u32)(edi + 0x130u); edi = (u32)(M32(m_)); }
  /* 00517fc8 mov eax, dword ptr [edi + 0xe0] */ { const u32 m_ = (u32)(edi + 0xe0u); eax = (u32)(M32(m_)); }
  /* 00517fce cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517fd0 je 0x517feb */ if (ZF_) goto L_00517feb;
  /* 00517fd2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00517fd4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00517fd5 mov dword ptr [edi + 0xe0], ebx */ { const u32 m_ = (u32)(edi + 0xe0u); M32(m_) = (u32)(ebx); }
  /* 00517fdb mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00517fdd push 0x1b */ { u32 v_ = 0x1bu; esp -= 4; M32(esp) = v_; }
  /* 00517fdf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00517fe1 mov byte ptr [0x7a6d24], 1 */ { const u32 m_ = (u32)(0x7a6d24u); M8(m_) = (u8)(0x1u); }
  /* 00517fe8 call dword ptr [edx + 0x7c] */ { const u32 m_ = (u32)(edx + 0x7cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x517febu; SAVEALL; call_ind(c, t_); RETCHK(0x517febu, 0x517fe8u); LOADALL; }
L_00517feb:;
  /* 00517feb mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00517fee cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00517ff0 je 0x517ffc */ if (ZF_) goto L_00517ffc;
  /* 00517ff2 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00517ff5 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00517ff7 call 0x508540 */ esp -= 4; M32(esp) = 0x517ffcu; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x517ff7u); RETCHK(0x517ffcu, 0x517ff7u); LOADALL;
L_00517ffc:;
  /* 00517ffc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00517ffd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00517ffe pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00517fff mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00518001 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00518002 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00518010(CPU *c) {
  NATIVE_HOOK(0x518010u) REGS; LOADALL;
L_00518010:;
  /* 00518010 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 00518013 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00518014 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00518016 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518018 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00518019 jbe 0x5180c7 */ if ((CF_|ZF_)) goto L_005180c7;
  /* 0051801f nop */ ;
L_00518020:;
  /* 00518020 mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 00518023 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00518025 shr eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00518028 lea edx, [eax*4] */ edx = (u32)((u32)(eax * 4u));
  /* 0051802f sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00518031 mov edx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M32(m_)); }
  /* 00518034 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518036 ja 0x51803a */ if (!(CF_|ZF_)) goto L_0051803a;
  /* 00518038 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051803a:;
  /* 0051803a mov edx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0051803d mov eax, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); eax = (u32)(M32(m_)); }
  /* 00518040 mov edi, dword ptr [eax + ecx*4] */ { const u32 m_ = (u32)(eax + ecx * 4u); edi = (u32)(M32(m_)); }
  /* 00518043 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 00518046 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518048 je 0x518069 */ if (ZF_) goto L_00518069;
  /* 0051804a mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0051804d mov edx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M32(m_)); }
  /* 00518050 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00518051 shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00518054 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518056 mov dword ptr [esi + 0x24], ecx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ecx); }
  /* 00518059 ja 0x51805e */ if (!(CF_|ZF_)) goto L_0051805e;
  /* 0051805b mov dword ptr [esi + 0x24], ebx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ebx); }
L_0051805e:;
  /* 0051805e dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051805f cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518061 mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
  /* 00518064 jne 0x518069 */ if (!ZF_) goto L_00518069;
  /* 00518066 mov dword ptr [esi + 0x24], ebx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ebx); }
L_00518069:;
  /* 00518069 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051806b je 0x5180c7 */ if (ZF_) goto L_005180c7;
  /* 0051806d mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00518070 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00518072 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518074 je 0x5180b6 */ if (ZF_) goto L_005180b6;
L_00518076:;
  /* 00518076 cmp dword ptr [eax + 8], edi */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518079 je 0x518083 */ if (ZF_) goto L_00518083;
  /* 0051807b mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0051807d cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051807f jne 0x518076 */ if (!ZF_) goto L_00518076;
  /* 00518081 jmp 0x5180b6 */ goto L_005180b6;
L_00518083:;
  /* 00518083 cmp eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00518086 je 0x5180a7 */ if (ZF_) goto L_005180a7;
  /* 00518088 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051808b mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0051808d mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0051808f mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00518091 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 00518094 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00518095 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00518098 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51809du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x518098u); RETCHK(0x51809du, 0x518098u); LOADALL;
  /* 0051809d mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 005180a0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005180a3 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005180a4 mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
L_005180a7:;
  /* 005180a7 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005180a9 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005180ab call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5180aeu; SAVEALL; call_ind(c, t_); RETCHK(0x5180aeu, 0x5180abu); LOADALL; }
  /* 005180ae mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 005180b0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005180b2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005180b4 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5180b6u; SAVEALL; call_ind(c, t_); RETCHK(0x5180b6u, 0x5180b4u); LOADALL; }
L_005180b6:;
  /* 005180b6 cmp dword ptr [esi + 0x2c], edi */ { const u32 m_ = (u32)(esi + 0x2cu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005180b9 jne 0x5180be */ if (!ZF_) goto L_005180be;
  /* 005180bb mov dword ptr [esi + 0x2c], ebx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ebx); }
L_005180be:;
  /* 005180be cmp dword ptr [esi + 0x28], ebx */ { const u32 m_ = (u32)(esi + 0x28u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005180c1 ja 0x518020 */ if (!(CF_|ZF_)) goto L_00518020;
L_005180c7:;
  /* 005180c7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005180c8 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005180ca pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005180cb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005180d0(CPU *c) {
  NATIVE_HOOK(0x5180d0u) REGS; LOADALL;
L_005180d0:;
  /* 005180d0 mov dword ptr [eax + 0x14c], ecx */ { const u32 m_ = (u32)(eax + 0x14cu); M32(m_) = (u32)(ecx); }
  /* 005180d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005180e0(CPU *c) {
  NATIVE_HOOK(0x5180e0u) REGS; LOADALL;
L_005180e0:;
  /* 005180e0 mov eax, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005180e3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005180f0(CPU *c) {
  NATIVE_HOOK(0x5180f0u) REGS; LOADALL;
L_005180f0:;
  /* 005180f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005180f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005180f3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005180f6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005180f8 je 0x51812c */ if (ZF_) goto L_0051812c;
  /* 005180fa push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005180fb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005180fc mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005180fe mov esi, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); esi = (u32)(M32(m_)); }
  /* 00518101 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00518104 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00518105 add ebx, 0xc */ { u32 a_ = ebx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00518108 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0051810b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051810c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051810d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051810e call 0x508af0 */ esp -= 4; M32(esp) = 0x518113u; SAVEALL; F_00508af0(c); ABI_CHECK(0x508af0u, 0x51810eu); RETCHK(0x518113u, 0x51810eu); LOADALL;
  /* 00518113 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00518118 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0051811a mov edi, eax */ { edi = (u32)(eax); }
  /* 0051811c call 0x518d90 */ esp -= 4; M32(esp) = 0x518121u; SAVEALL; F_00518d90(c); ABI_CHECK(0x518d90u, 0x51811cu); RETCHK(0x518121u, 0x51811cu); LOADALL;
  /* 00518121 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 00518124 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00518127 mov dword ptr [edx], edi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(edi); }
  /* 00518129 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051812a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051812b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0051812c:;
  /* 0051812c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051812d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}
