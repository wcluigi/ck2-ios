#include "funcs.h"

void F_00535970(CPU *c) {
  NATIVE_HOOK(0x535970u) REGS; LOADALL;
L_00535970:;
  /* 00535970 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00535971 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00535973 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00535976 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00535979 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0053597c add edx, 0x104 */ { u32 a_ = edx, b_ = 0x104u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535982 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535984 je 0x5359b1 */ if (ZF_) goto L_005359b1;
  /* 00535986 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00535987 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535988 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00535989 lea ebx, [edx - 0x104] */ ebx = (u32)((u32)(edx + 0xfffffefcu));
  /* 0053598f nop */ ;
L_00535990:;
  /* 00535990 mov esi, edx */ { esi = (u32)(edx); }
  /* 00535992 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00535994 add edx, 0x104 */ { u32 a_ = edx, b_ = 0x104u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0053599a mov ecx, 0x41 */ { ecx = (u32)(0x41u); }
  /* 0053599f add ebx, 0x104 */ { u32 a_ = ebx, b_ = 0x104u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005359a5 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005359a7 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005359a9 jne 0x535990 */ if (!ZF_) goto L_00535990;
  /* 005359ab mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005359ae pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005359af pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005359b0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_005359b1:;
  /* 005359b1 add dword ptr [ecx + 8], 0xfffffefc */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = 0xfffffefcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005359b8 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005359bb mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005359be mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005359c0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005359c1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_005359d0(CPU *c) {
  NATIVE_HOOK(0x5359d0u) REGS; LOADALL;
L_005359d0:;
  /* 005359d0 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005359d3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005359d5 jne 0x5359d8 */ if (!ZF_) goto L_005359d8;
  /* 005359d7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005359d8:;
  /* 005359d8 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005359db sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005359dd mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 005359e2 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005359e4 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005359e7 mov eax, edx */ { eax = (u32)(edx); }
  /* 005359e9 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005359ec add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005359ee ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005359f0(CPU *c) {
  NATIVE_HOOK(0x5359f0u) REGS; LOADALL;
L_005359f0:;
  /* 005359f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005359f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005359f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005359f5 push 0x61d990 */ { u32 v_ = 0x61d990u; esp -= 4; M32(esp) = v_; }
  /* 005359fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00535a00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535a01 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00535a08 sub esp, 0x114 */ { u32 a_ = esp, b_ = 0x114u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535a0e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00535a13 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00535a14 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535a15 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00535a16 mov ecx, 0x41 */ { ecx = (u32)(0x41u); }
  /* 00535a1b mov esi, edx */ { esi = (u32)(edx); }
  /* 00535a1d lea edi, [ebp - 0x118] */ edi = (u32)((u32)(ebp + 0xfffffee8u));
  /* 00535a23 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00535a25 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00535a28 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 00535a2b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00535a2d mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00535a30 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00535a33 jne 0x535a39 */ if (!ZF_) goto L_00535a39;
  /* 00535a35 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00535a37 jmp 0x535a4f */ goto L_00535a4f;
L_00535a39:;
  /* 00535a39 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00535a3c sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00535a3e mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00535a43 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535a45 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00535a48 mov esi, edx */ { esi = (u32)(edx); }
  /* 00535a4a shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00535a4d add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_00535a4f:;
  /* 00535a4f mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00535a52 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00535a54 je 0x535c92 */ if (ZF_) goto L_00535c92;
  /* 00535a5a test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00535a5c jne 0x535a62 */ if (!ZF_) goto L_00535a62;
  /* 00535a5e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00535a60 jmp 0x535a78 */ goto L_00535a78;
L_00535a62:;
  /* 00535a62 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00535a65 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535a67 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00535a6c imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535a6e sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00535a71 mov eax, edx */ { eax = (u32)(edx); }
  /* 00535a73 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00535a76 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00535a78:;
  /* 00535a78 mov edx, 0xfc0fc0 */ { edx = (u32)(0xfc0fc0u); }
  /* 00535a7d sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535a7f cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535a81 jae 0x535a88 */ if (!CF_) goto L_00535a88;
  /* 00535a83 call 0x49ac70 */ esp -= 4; M32(esp) = 0x535a88u; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x535a83u); RETCHK(0x535a88u, 0x535a83u); LOADALL;
L_00535a88:;
  /* 00535a88 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00535a8a jne 0x535a90 */ if (!ZF_) goto L_00535a90;
  /* 00535a8c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00535a8e jmp 0x535aa6 */ goto L_00535aa6;
L_00535a90:;
  /* 00535a90 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00535a93 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535a95 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00535a9a imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535a9c sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00535a9f mov eax, edx */ { eax = (u32)(edx); }
  /* 00535aa1 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00535aa4 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00535aa6:;
  /* 00535aa6 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535aa8 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535aaa jae 0x535bc6 */ if (!CF_) goto L_00535bc6;
  /* 00535ab0 mov eax, esi */ { eax = (u32)(esi); }
  /* 00535ab2 shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00535ab4 mov edx, 0xfc0fc0 */ { edx = (u32)(0xfc0fc0u); }
  /* 00535ab9 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535abb cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535abd jae 0x535ac3 */ if (!CF_) goto L_00535ac3;
  /* 00535abf xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00535ac1 jmp 0x535ac5 */ goto L_00535ac5;
L_00535ac3:;
  /* 00535ac3 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_00535ac5:;
  /* 00535ac5 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00535ac7 jne 0x535acd */ if (!ZF_) goto L_00535acd;
  /* 00535ac9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00535acb jmp 0x535ae3 */ goto L_00535ae3;
L_00535acd:;
  /* 00535acd mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00535ad0 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535ad2 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00535ad7 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535ad9 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00535adc mov eax, edx */ { eax = (u32)(edx); }
  /* 00535ade shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00535ae1 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00535ae3:;
  /* 00535ae3 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535ae5 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535ae7 jae 0x535af5 */ if (!CF_) goto L_00535af5;
  /* 00535ae9 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00535aeb call 0x5359d0 */ esp -= 4; M32(esp) = 0x535af0u; SAVEALL; F_005359d0(c); ABI_CHECK(0x5359d0u, 0x535aebu); RETCHK(0x535af0u, 0x535aebu); LOADALL;
  /* 00535af0 mov esi, eax */ { esi = (u32)(eax); }
  /* 00535af2 add esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_00535af5:;
  /* 00535af5 imul esi, esi, 0x104 */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x104u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535afb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535afc call 0x5fe934 */ esp -= 4; M32(esp) = 0x535b01u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x535afcu); RETCHK(0x535b01u, 0x535afcu); LOADALL;
  /* 00535b01 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 00535b04 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00535b0b mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00535b0e mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00535b11 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00535b12 mov dword ptr [ebp - 0x11c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); M32(m_) = (u32)(eax); }
  /* 00535b18 call 0x535d60 */ esp -= 4; M32(esp) = 0x535b1du; SAVEALL; F_00535d60(c); ABI_CHECK(0x535d60u, 0x535b18u); RETCHK(0x535b1du, 0x535b18u); LOADALL;
  /* 00535b1d mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00535b20 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00535b23 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535b26 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00535b27 lea ebx, [ebp - 0x118] */ ebx = (u32)((u32)(ebp + 0xfffffee8u));
  /* 00535b2d mov dword ptr [ebp - 0x120], eax */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); M32(m_) = (u32)(eax); }
  /* 00535b33 call 0x535d30 */ esp -= 4; M32(esp) = 0x535b38u; SAVEALL; F_00535d30(c); ABI_CHECK(0x535d30u, 0x535b33u); RETCHK(0x535b38u, 0x535b33u); LOADALL;
  /* 00535b38 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00535b3b mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00535b3e imul ecx, ecx, 0x104 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x104u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535b44 mov eax, dword ptr [ebp - 0x120] */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); eax = (u32)(M32(m_)); }
  /* 00535b4a mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00535b4d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535b50 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00535b51 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00535b54 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535b56 call 0x535d60 */ esp -= 4; M32(esp) = 0x535b5bu; SAVEALL; F_00535d60(c); ABI_CHECK(0x535d60u, 0x535b56u); RETCHK(0x535b5bu, 0x535b56u); LOADALL;
  /* 00535b5b mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00535b5e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535b61 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00535b63 je 0x535b7b */ if (ZF_) goto L_00535b7b;
  /* 00535b65 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00535b68 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00535b6a mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00535b6f imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535b71 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00535b74 mov eax, edx */ { eax = (u32)(edx); }
  /* 00535b76 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00535b79 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00535b7b:;
  /* 00535b7b mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00535b7e add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00535b80 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00535b83 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00535b85 je 0x535b90 */ if (ZF_) goto L_00535b90;
  /* 00535b87 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535b88 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x535b8du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x535b88u); RETCHK(0x535b8du, 0x535b88u); LOADALL;
  /* 00535b8d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00535b90:;
  /* 00535b90 mov eax, dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); eax = (u32)(M32(m_)); }
  /* 00535b96 imul ebx, ebx, 0x104 */ { s64 p_ = (s64)(s32)ebx * (s64)(s32)0x104u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535b9c add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00535b9e add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00535ba0 mov dword ptr [edi + 0xc], esi */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(esi); }
  /* 00535ba3 mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00535ba6 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00535ba9 jmp 0x535c92 */ goto L_00535c92;
L_00535bc6:;
  /* 00535bc6 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00535bc9 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00535bcc mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00535bce sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535bd0 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00535bd5 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535bd7 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00535bda mov eax, edx */ { eax = (u32)(edx); }
  /* 00535bdc shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00535bdf add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535be1 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535be3 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00535be5 jae 0x535c4d */ if (!CF_) goto L_00535c4d;
  /* 00535be7 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00535bea imul eax, eax, 0x104 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x104u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535bf0 mov dword ptr [ebp - 0x11c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); M32(m_) = (u32)(eax); }
  /* 00535bf6 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535bf8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00535bf9 mov edx, esi */ { edx = (u32)(esi); }
  /* 00535bfb call 0x535d60 */ esp -= 4; M32(esp) = 0x535c00u; SAVEALL; F_00535d60(c); ABI_CHECK(0x535d60u, 0x535bfbu); RETCHK(0x535c00u, 0x535bfbu); LOADALL;
  /* 00535c00 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 00535c07 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00535c0a mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00535c0c sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535c0e mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 00535c11 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00535c16 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535c18 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00535c1b mov eax, edx */ { eax = (u32)(edx); }
  /* 00535c1d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00535c20 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535c23 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535c25 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00535c26 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00535c28 lea ebx, [ebp - 0x118] */ ebx = (u32)((u32)(ebp + 0xfffffee8u));
  /* 00535c2e mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00535c30 call 0x535cb0 */ esp -= 4; M32(esp) = 0x535c35u; SAVEALL; F_00535cb0(c); ABI_CHECK(0x535cb0u, 0x535c30u); RETCHK(0x535c35u, 0x535c30u); LOADALL;
  /* 00535c35 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00535c38 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00535c3b mov ecx, dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); ecx = (u32)(M32(m_)); }
  /* 00535c41 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535c43 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 00535c46 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00535c49 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535c4b jmp 0x535c87 */ goto L_00535c87;
L_00535c4d:;
  /* 00535c4d imul eax, eax, 0x104 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x104u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535c53 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00535c55 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535c57 mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 00535c5a mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00535c5d mov dword ptr [ebp - 0x11c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); M32(m_) = (u32)(eax); }
  /* 00535c63 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00535c64 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00535c66 call 0x535d60 */ esp -= 4; M32(esp) = 0x535c6bu; SAVEALL; F_00535d60(c); ABI_CHECK(0x535d60u, 0x535c66u); RETCHK(0x535c6bu, 0x535c66u); LOADALL;
  /* 00535c6b mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00535c6e mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00535c71 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00535c73 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535c76 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 00535c78 call 0x535d00 */ esp -= 4; M32(esp) = 0x535c7du; SAVEALL; F_00535d00(c); ABI_CHECK(0x535d00u, 0x535c78u); RETCHK(0x535c7du, 0x535c78u); LOADALL;
  /* 00535c7d mov edx, dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); edx = (u32)(M32(m_)); }
  /* 00535c83 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535c85 mov eax, esi */ { eax = (u32)(esi); }
L_00535c87:;
  /* 00535c87 lea ebx, [ebp - 0x118] */ ebx = (u32)((u32)(ebp + 0xfffffee8u));
  /* 00535c8d call 0x535ce0 */ esp -= 4; M32(esp) = 0x535c92u; SAVEALL; F_00535ce0(c); ABI_CHECK(0x535ce0u, 0x535c8du); RETCHK(0x535c92u, 0x535c8du); LOADALL;
L_00535c92:;
  /* 00535c92 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00535c95 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00535c9c mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00535c9f call 0x61af31 */ esp -= 4; M32(esp) = 0x535ca4u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x535c9fu); RETCHK(0x535ca4u, 0x535c9fu); LOADALL;
  /* 00535ca4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00535ca5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00535ca6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00535ca7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00535ca9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00535caa ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00535bae(CPU *c) {
  NATIVE_HOOK(0x535baeu) REGS; LOADALL;
L_00535bae:;
  /* 00535bae mov eax, dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); eax = (u32)(M32(m_)); }
  /* 00535bb4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535bb5 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x535bbau; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x535bb5u); RETCHK(0x535bbau, 0x535bb5u); LOADALL;
  /* 00535bba add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535bbd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00535bbf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00535bc1 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 00535bc6 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00535bc9 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00535bcc mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00535bce sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535bd0 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00535bd5 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535bd7 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00535bda mov eax, edx */ { eax = (u32)(edx); }
  /* 00535bdc shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00535bdf add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535be1 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535be3 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00535be5 jae 0x535c4d */ if (!CF_) goto L_00535c4d;
  /* 00535be7 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00535bea imul eax, eax, 0x104 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x104u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535bf0 mov dword ptr [ebp - 0x11c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); M32(m_) = (u32)(eax); }
  /* 00535bf6 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535bf8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00535bf9 mov edx, esi */ { edx = (u32)(esi); }
  /* 00535bfb call 0x535d60 */ esp -= 4; M32(esp) = 0x535c00u; SAVEALL; F_00535d60(c); ABI_CHECK(0x535d60u, 0x535bfbu); RETCHK(0x535c00u, 0x535bfbu); LOADALL;
  /* 00535c00 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 00535c07 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00535c0a mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00535c0c sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535c0e mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 00535c11 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00535c16 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535c18 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00535c1b mov eax, edx */ { eax = (u32)(edx); }
  /* 00535c1d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00535c20 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535c23 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535c25 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00535c26 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00535c28 lea ebx, [ebp - 0x118] */ ebx = (u32)((u32)(ebp + 0xfffffee8u));
  /* 00535c2e mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00535c30 call 0x535cb0 */ esp -= 4; M32(esp) = 0x535c35u; SAVEALL; F_00535cb0(c); ABI_CHECK(0x535cb0u, 0x535c30u); RETCHK(0x535c35u, 0x535c30u); LOADALL;
  /* 00535c35 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00535c38 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00535c3b mov ecx, dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); ecx = (u32)(M32(m_)); }
  /* 00535c41 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535c43 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 00535c46 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00535c49 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535c4b jmp 0x535c87 */ goto L_00535c87;
L_00535c4d:;
  /* 00535c4d imul eax, eax, 0x104 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x104u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535c53 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00535c55 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535c57 mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 00535c5a mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00535c5d mov dword ptr [ebp - 0x11c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); M32(m_) = (u32)(eax); }
  /* 00535c63 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00535c64 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00535c66 call 0x535d60 */ esp -= 4; M32(esp) = 0x535c6bu; SAVEALL; F_00535d60(c); ABI_CHECK(0x535d60u, 0x535c66u); RETCHK(0x535c6bu, 0x535c66u); LOADALL;
  /* 00535c6b mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00535c6e mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00535c71 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00535c73 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535c76 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 00535c78 call 0x535d00 */ esp -= 4; M32(esp) = 0x535c7du; SAVEALL; F_00535d00(c); ABI_CHECK(0x535d00u, 0x535c78u); RETCHK(0x535c7du, 0x535c78u); LOADALL;
  /* 00535c7d mov edx, dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); edx = (u32)(M32(m_)); }
  /* 00535c83 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535c85 mov eax, esi */ { eax = (u32)(esi); }
L_00535c87:;
  /* 00535c87 lea ebx, [ebp - 0x118] */ ebx = (u32)((u32)(ebp + 0xfffffee8u));
  /* 00535c8d call 0x535ce0 */ esp -= 4; M32(esp) = 0x535c92u; SAVEALL; F_00535ce0(c); ABI_CHECK(0x535ce0u, 0x535c8du); RETCHK(0x535c92u, 0x535c8du); LOADALL;
  /* 00535c92 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00535c95 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00535c9c mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00535c9f call 0x61af31 */ esp -= 4; M32(esp) = 0x535ca4u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x535c9fu); RETCHK(0x535ca4u, 0x535c9fu); LOADALL;
  /* 00535ca4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00535ca5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00535ca6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00535ca7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00535ca9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00535caa ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00535bbd(CPU *c) {
  NATIVE_HOOK(0x535bbdu) REGS; LOADALL;
L_00535bbd:;
  /* 00535bbd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00535bbf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00535bc1 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 00535bc6 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00535bc9 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00535bcc mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00535bce sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535bd0 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00535bd5 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535bd7 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00535bda mov eax, edx */ { eax = (u32)(edx); }
  /* 00535bdc shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00535bdf add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535be1 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535be3 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00535be5 jae 0x535c4d */ if (!CF_) goto L_00535c4d;
  /* 00535be7 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00535bea imul eax, eax, 0x104 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x104u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535bf0 mov dword ptr [ebp - 0x11c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); M32(m_) = (u32)(eax); }
  /* 00535bf6 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535bf8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00535bf9 mov edx, esi */ { edx = (u32)(esi); }
  /* 00535bfb call 0x535d60 */ esp -= 4; M32(esp) = 0x535c00u; SAVEALL; F_00535d60(c); ABI_CHECK(0x535d60u, 0x535bfbu); RETCHK(0x535c00u, 0x535bfbu); LOADALL;
  /* 00535c00 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 00535c07 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00535c0a mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00535c0c sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535c0e mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 00535c11 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00535c16 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535c18 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00535c1b mov eax, edx */ { eax = (u32)(edx); }
  /* 00535c1d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00535c20 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535c23 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535c25 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00535c26 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00535c28 lea ebx, [ebp - 0x118] */ ebx = (u32)((u32)(ebp + 0xfffffee8u));
  /* 00535c2e mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00535c30 call 0x535cb0 */ esp -= 4; M32(esp) = 0x535c35u; SAVEALL; F_00535cb0(c); ABI_CHECK(0x535cb0u, 0x535c30u); RETCHK(0x535c35u, 0x535c30u); LOADALL;
  /* 00535c35 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00535c38 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00535c3b mov ecx, dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); ecx = (u32)(M32(m_)); }
  /* 00535c41 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535c43 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 00535c46 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00535c49 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535c4b jmp 0x535c87 */ goto L_00535c87;
L_00535c4d:;
  /* 00535c4d imul eax, eax, 0x104 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x104u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535c53 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00535c55 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535c57 mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 00535c5a mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00535c5d mov dword ptr [ebp - 0x11c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); M32(m_) = (u32)(eax); }
  /* 00535c63 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00535c64 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00535c66 call 0x535d60 */ esp -= 4; M32(esp) = 0x535c6bu; SAVEALL; F_00535d60(c); ABI_CHECK(0x535d60u, 0x535c66u); RETCHK(0x535c6bu, 0x535c66u); LOADALL;
  /* 00535c6b mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00535c6e mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00535c71 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00535c73 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535c76 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 00535c78 call 0x535d00 */ esp -= 4; M32(esp) = 0x535c7du; SAVEALL; F_00535d00(c); ABI_CHECK(0x535d00u, 0x535c78u); RETCHK(0x535c7du, 0x535c78u); LOADALL;
  /* 00535c7d mov edx, dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); edx = (u32)(M32(m_)); }
  /* 00535c83 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535c85 mov eax, esi */ { eax = (u32)(esi); }
L_00535c87:;
  /* 00535c87 lea ebx, [ebp - 0x118] */ ebx = (u32)((u32)(ebp + 0xfffffee8u));
  /* 00535c8d call 0x535ce0 */ esp -= 4; M32(esp) = 0x535c92u; SAVEALL; F_00535ce0(c); ABI_CHECK(0x535ce0u, 0x535c8du); RETCHK(0x535c92u, 0x535c8du); LOADALL;
  /* 00535c92 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00535c95 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00535c9c mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00535c9f call 0x61af31 */ esp -= 4; M32(esp) = 0x535ca4u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x535c9fu); RETCHK(0x535ca4u, 0x535c9fu); LOADALL;
  /* 00535ca4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00535ca5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00535ca6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00535ca7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00535ca9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00535caa ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00535cb0(CPU *c) {
  NATIVE_HOOK(0x535cb0u) REGS; LOADALL;
L_00535cb0:;
  /* 00535cb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00535cb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00535cb3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00535cb4 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00535cb7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535cb8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00535cba mov eax, edi */ { eax = (u32)(edi); }
  /* 00535cbc call 0x535d30 */ esp -= 4; M32(esp) = 0x535cc1u; SAVEALL; F_00535d30(c); ABI_CHECK(0x535d30u, 0x535cbcu); RETCHK(0x535cc1u, 0x535cbcu); LOADALL;
  /* 00535cc1 mov eax, esi */ { eax = (u32)(esi); }
  /* 00535cc3 imul eax, eax, 0x104 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x104u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535cc9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535ccc add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535cce mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00535cd0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00535cd1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00535ce0(CPU *c) {
  NATIVE_HOOK(0x535ce0u) REGS; LOADALL;
L_00535ce0:;
  /* 00535ce0 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535ce2 je 0x535cfc */ if (ZF_) goto L_00535cfc;
  /* 00535ce4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535ce5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_00535ce6:;
  /* 00535ce6 mov edi, eax */ { edi = (u32)(eax); }
  /* 00535ce8 add eax, 0x104 */ { u32 a_ = eax, b_ = 0x104u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535ced cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535cef mov ecx, 0x41 */ { ecx = (u32)(0x41u); }
  /* 00535cf4 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00535cf6 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00535cf8 jne 0x535ce6 */ if (!ZF_) goto L_00535ce6;
  /* 00535cfa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00535cfb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00535cfc:;
  /* 00535cfc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00535d00(CPU *c) {
  NATIVE_HOOK(0x535d00u) REGS; LOADALL;
L_00535d00:;
  /* 00535d00 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535d02 je 0x535d2c */ if (ZF_) goto L_00535d2c;
  /* 00535d04 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535d05 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00535d06 jmp 0x535d10 */ goto L_00535d10;
L_00535d10:;
  /* 00535d10 sub edx, 0x104 */ { u32 a_ = edx, b_ = 0x104u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535d16 sub eax, 0x104 */ { u32 a_ = eax, b_ = 0x104u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535d1b cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535d1d mov ecx, 0x41 */ { ecx = (u32)(0x41u); }
  /* 00535d22 mov esi, edx */ { esi = (u32)(edx); }
  /* 00535d24 mov edi, eax */ { edi = (u32)(eax); }
  /* 00535d26 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00535d28 jne 0x535d10 */ if (!ZF_) goto L_00535d10;
  /* 00535d2a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00535d2b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00535d2c:;
  /* 00535d2c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00535d30(CPU *c) {
  NATIVE_HOOK(0x535d30u) REGS; LOADALL;
L_00535d30:;
  /* 00535d30 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00535d32 jbe 0x535d51 */ if ((CF_|ZF_)) goto L_00535d51;
  /* 00535d34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535d35 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00535d37 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_00535d38:;
  /* 00535d38 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00535d3a je 0x535d47 */ if (ZF_) goto L_00535d47;
  /* 00535d3c mov ecx, 0x41 */ { ecx = (u32)(0x41u); }
  /* 00535d41 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00535d43 mov edi, eax */ { edi = (u32)(eax); }
  /* 00535d45 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_00535d47:;
  /* 00535d47 add eax, 0x104 */ { u32 a_ = eax, b_ = 0x104u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535d4c dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00535d4d jne 0x535d38 */ if (!ZF_) goto L_00535d38;
  /* 00535d4f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00535d50 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00535d51:;
  /* 00535d51 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00535d60(CPU *c) {
  NATIVE_HOOK(0x535d60u) REGS; LOADALL;
L_00535d60:;
  /* 00535d60 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535d62 je 0x535d86 */ if (ZF_) goto L_00535d86;
  /* 00535d64 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535d65 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_00535d66:;
  /* 00535d66 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00535d68 je 0x535d75 */ if (ZF_) goto L_00535d75;
  /* 00535d6a mov ecx, 0x41 */ { ecx = (u32)(0x41u); }
  /* 00535d6f mov esi, edx */ { esi = (u32)(edx); }
  /* 00535d71 mov edi, eax */ { edi = (u32)(eax); }
  /* 00535d73 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_00535d75:;
  /* 00535d75 add edx, 0x104 */ { u32 a_ = edx, b_ = 0x104u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535d7b add eax, 0x104 */ { u32 a_ = eax, b_ = 0x104u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535d80 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535d82 jne 0x535d66 */ if (!ZF_) goto L_00535d66;
  /* 00535d84 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00535d85 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00535d86:;
  /* 00535d86 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00535d90(CPU *c) {
  NATIVE_HOOK(0x535d90u) REGS; LOADALL;
L_00535d90:;
  /* 00535d90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00535d91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00535d93 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00535d99 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00535d9b push 0x620048 */ { u32 v_ = 0x620048u; esp -= 4; M32(esp) = v_; }
  /* 00535da0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535da1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00535da4 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00535dab push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535dac mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00535daf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535db0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535db1 call 0x50d810 */ esp -= 4; M32(esp) = 0x535db6u; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x535db1u); RETCHK(0x535db6u, 0x535db1u); LOADALL;
  /* 00535db6 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00535db8 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00535dbf push 0x642bd4 */ { u32 v_ = 0x642bd4u; esp -= 4; M32(esp) = v_; }
  /* 00535dc4 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00535dc7 mov dword ptr [esi], 0x653978 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x653978u); }
  /* 00535dcd call 0x404420 */ esp -= 4; M32(esp) = 0x535dd2u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x535dcdu); RETCHK(0x535dd2u, 0x535dcdu); LOADALL;
  /* 00535dd2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00535dd5 mov eax, esi */ { eax = (u32)(esi); }
  /* 00535dd7 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00535dde pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00535ddf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00535de1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00535de2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00535df0(CPU *c) {
  NATIVE_HOOK(0x535df0u) REGS; LOADALL;
L_00535df0:;
  /* 00535df0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00535df1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00535df3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535df4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00535df6 call 0x535e20 */ esp -= 4; M32(esp) = 0x535dfbu; SAVEALL; F_00535e20(c); ABI_CHECK(0x535e20u, 0x535df6u); RETCHK(0x535dfbu, 0x535df6u); LOADALL;
  /* 00535dfb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00535dff je 0x535e0a */ if (ZF_) goto L_00535e0a;
  /* 00535e01 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535e02 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x535e07u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x535e02u); RETCHK(0x535e07u, 0x535e02u); LOADALL;
  /* 00535e07 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00535e0a:;
  /* 00535e0a mov eax, esi */ { eax = (u32)(esi); }
  /* 00535e0c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00535e0d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00535e0e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00535e20(CPU *c) {
  NATIVE_HOOK(0x535e20u) REGS; LOADALL;
L_00535e20:;
  /* 00535e20 mov dword ptr [ecx], 0x653978 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x653978u); }
  /* 00535e26 jmp 0x50d8e0 */ SAVEALL; F_0050d8e0(c); return;
}

void F_00535e30(CPU *c) {
  NATIVE_HOOK(0x535e30u) REGS; LOADALL;
L_00535e30:;
  /* 00535e30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00535e31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00535e33 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00535e34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535e35 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00535e37 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535e38 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535e3b mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00535e3d lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 00535e40 mov eax, esp */ { eax = (u32)(esp); }
  /* 00535e42 call 0x52cea0 */ esp -= 4; M32(esp) = 0x535e47u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x535e42u); RETCHK(0x535e47u, 0x535e42u); LOADALL;
  /* 00535e47 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00535e4a call 0x50da30 */ esp -= 4; M32(esp) = 0x535e4fu; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x535e4au); RETCHK(0x535e4fu, 0x535e4au); LOADALL;
  /* 00535e4f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00535e51 jne 0x535e59 */ if (!ZF_) goto L_00535e59;
  /* 00535e53 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00535e54 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00535e55 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00535e56 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
L_00535e59:;
  /* 00535e59 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00535e5c mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00535e5f mov esi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); esi = (u32)(M32(m_)); }
  /* 00535e61 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00535e62 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00535e63 lea eax, [ebp + 0x14] */ eax = (u32)((u32)(ebp + 0x14u));
  /* 00535e66 call 0x52ce60 */ esp -= 4; M32(esp) = 0x535e6bu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x535e66u); RETCHK(0x535e6bu, 0x535e66u); LOADALL;
  /* 00535e6b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535e6c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00535e6e call dword ptr [esi + 0x8c] */ { const u32 m_ = (u32)(esi + 0x8cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x535e74u; SAVEALL; call_ind(c, t_); RETCHK(0x535e74u, 0x535e6eu); LOADALL; }
  /* 00535e74 mov al, 0xff */ { eax = (eax & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 00535e76 mov byte ptr [ebp + 8], al */ { const u32 m_ = (u32)(ebp + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00535e79 mov byte ptr [ebp + 9], al */ { const u32 m_ = (u32)(ebp + 0x9u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00535e7c mov byte ptr [ebp + 0xa], al */ { const u32 m_ = (u32)(ebp + 0xau); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00535e7f mov byte ptr [ebp + 0xb], al */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00535e82 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00535e85 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00535e87 mov dword ptr [ebx + 0x1c4], eax */ { const u32 m_ = (u32)(ebx + 0x1c4u); M32(m_) = (u32)(eax); }
  /* 00535e8d mov dword ptr [ebx + 0x1d8], eax */ { const u32 m_ = (u32)(ebx + 0x1d8u); M32(m_) = (u32)(eax); }
  /* 00535e93 mov dword ptr [ebx + 0x1ec], eax */ { const u32 m_ = (u32)(ebx + 0x1ecu); M32(m_) = (u32)(eax); }
  /* 00535e99 mov dword ptr [ebx + 0x200], eax */ { const u32 m_ = (u32)(ebx + 0x200u); M32(m_) = (u32)(eax); }
  /* 00535e9f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00535ea1 lea eax, [ebp + 0x14] */ eax = (u32)((u32)(ebp + 0x14u));
  /* 00535ea4 call 0x52ce60 */ esp -= 4; M32(esp) = 0x535ea9u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x535ea4u); RETCHK(0x535ea9u, 0x535ea4u); LOADALL;
  /* 00535ea9 lea ecx, [ebx + 0x1c8] */ ecx = (u32)((u32)(ebx + 0x1c8u));
  /* 00535eaf call 0x52ce90 */ esp -= 4; M32(esp) = 0x535eb4u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x535eafu); RETCHK(0x535eb4u, 0x535eafu); LOADALL;
  /* 00535eb4 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00535eb9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00535ebb lea eax, [ebp + 0x14] */ eax = (u32)((u32)(ebp + 0x14u));
  /* 00535ebe call 0x52ce60 */ esp -= 4; M32(esp) = 0x535ec3u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x535ebeu); RETCHK(0x535ec3u, 0x535ebeu); LOADALL;
  /* 00535ec3 lea ecx, [ebx + 0x1dc] */ ecx = (u32)((u32)(ebx + 0x1dcu));
  /* 00535ec9 call 0x52ce90 */ esp -= 4; M32(esp) = 0x535eceu; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x535ec9u); RETCHK(0x535eceu, 0x535ec9u); LOADALL;
  /* 00535ece push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00535ed0 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00535ed5 lea eax, [ebp + 0x14] */ eax = (u32)((u32)(ebp + 0x14u));
  /* 00535ed8 call 0x52ce60 */ esp -= 4; M32(esp) = 0x535eddu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x535ed8u); RETCHK(0x535eddu, 0x535ed8u); LOADALL;
  /* 00535edd lea ecx, [ebx + 0x1f0] */ ecx = (u32)((u32)(ebx + 0x1f0u));
  /* 00535ee3 call 0x52ce90 */ esp -= 4; M32(esp) = 0x535ee8u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x535ee3u); RETCHK(0x535ee8u, 0x535ee3u); LOADALL;
  /* 00535ee8 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00535eed push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00535ef2 lea eax, [ebp + 0x14] */ eax = (u32)((u32)(ebp + 0x14u));
  /* 00535ef5 call 0x52ce60 */ esp -= 4; M32(esp) = 0x535efau; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x535ef5u); RETCHK(0x535efau, 0x535ef5u); LOADALL;
  /* 00535efa lea ecx, [ebx + 0x204] */ ecx = (u32)((u32)(ebx + 0x204u));
  /* 00535f00 call 0x52ce90 */ esp -= 4; M32(esp) = 0x535f05u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x535f00u); RETCHK(0x535f05u, 0x535f00u); LOADALL;
  /* 00535f05 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00535f06 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00535f08 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00535f09 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00535f0a ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_00535f10(CPU *c) {
  NATIVE_HOOK(0x535f10u) REGS; LOADALL;
L_00535f10:;
  /* 00535f10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00535f11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00535f13 mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00535f16 mov byte ptr [ecx + 0x1c7], al */ { const u32 m_ = (u32)(ecx + 0x1c7u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00535f1c mov byte ptr [ecx + 0x1db], al */ { const u32 m_ = (u32)(ecx + 0x1dbu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00535f22 mov byte ptr [ecx + 0x1ef], al */ { const u32 m_ = (u32)(ecx + 0x1efu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00535f28 mov byte ptr [ecx + 0x203], al */ { const u32 m_ = (u32)(ecx + 0x203u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00535f2e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00535f2f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00535f40(CPU *c) {
  NATIVE_HOOK(0x535f40u) REGS; LOADALL;
L_00535f40:;
  /* 00535f40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00535f41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00535f43 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535f46 fld dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 00535f49 fsub dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00535f4c fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00535f52 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00535f54 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00535f57 je 0x535f61 */ if (ZF_) goto L_00535f61;
  /* 00535f59 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00535f5b fld dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 00535f5e fsub dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00535f61:;
  /* 00535f61 fld dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 00535f64 fsub dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00535f67 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00535f6d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00535f6f test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00535f72 je 0x535f7c */ if (ZF_) goto L_00535f7c;
  /* 00535f74 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00535f76 fld dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 00535f79 fsub dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00535f7c:;
  /* 00535f7c fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00535f7e sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535f81 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00535f87 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00535f8a fadd dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00535f8d fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00535f91 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00535f97 fadd dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00535f9a fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00535f9d call 0x52ce60 */ esp -= 4; M32(esp) = 0x535fa2u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x535f9du); RETCHK(0x535fa2u, 0x535f9du); LOADALL;
  /* 00535fa2 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00535fa5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535fa6 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00535fa9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00535faa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535fab call 0x535fc0 */ esp -= 4; M32(esp) = 0x535fb0u; SAVEALL; F_00535fc0(c); ABI_CHECK(0x535fc0u, 0x535fabu); RETCHK(0x535fb0u, 0x535fabu); LOADALL;
  /* 00535fb0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00535fb2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00535fb3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00535fc0(CPU *c) {
  NATIVE_HOOK(0x535fc0u) REGS; LOADALL;
L_00535fc0:;
  /* 00535fc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00535fc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00535fc3 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535fc6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00535fc7 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00535fca push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535fcb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00535fcc add ebx, 0x1bc */ { u32 a_ = ebx, b_ = 0x1bcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00535fd2 mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 00535fd9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00535fe0:;
  /* 00535fe0 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00535fe2 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00535fe5 call 0x52ce90 */ esp -= 4; M32(esp) = 0x535feau; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x535fe5u); RETCHK(0x535feau, 0x535fe5u); LOADALL;
  /* 00535fea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00535fed mov ecx, dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00535ff0 lea edi, [ebp - 0xc] */ edi = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00535ff3 call 0x52cf40 */ esp -= 4; M32(esp) = 0x535ff8u; SAVEALL; F_0052cf40(c); ABI_CHECK(0x52cf40u, 0x535ff3u); RETCHK(0x535ff8u, 0x535ff3u); LOADALL;
  /* 00535ff8 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00535ffb mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00535ffe push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00535fff mov esi, edi */ { esi = (u32)(edi); }
  /* 00536001 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00536003 call 0x52d130 */ esp -= 4; M32(esp) = 0x536008u; SAVEALL; F_0052d130(c); ABI_CHECK(0x52d130u, 0x536003u); RETCHK(0x536008u, 0x536003u); LOADALL;
  /* 00536008 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0053600b mov eax, dword ptr [edx + 0x5c] */ { const u32 m_ = (u32)(edx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0053600e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00536011 call 0x52d000 */ esp -= 4; M32(esp) = 0x536016u; SAVEALL; F_0052d000(c); ABI_CHECK(0x52d000u, 0x536011u); RETCHK(0x536016u, 0x536011u); LOADALL;
  /* 00536016 mov eax, edi */ { eax = (u32)(edi); }
  /* 00536018 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0053601a call 0x52ce90 */ esp -= 4; M32(esp) = 0x53601fu; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x53601au); RETCHK(0x53601fu, 0x53601au); LOADALL;
  /* 0053601f mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00536022 add ebx, 0x14 */ { u32 a_ = ebx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00536025 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00536026 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00536029 jne 0x535fe0 */ if (!ZF_) goto L_00535fe0;
  /* 0053602b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053602c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053602d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053602e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00536030 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536031 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00536040(CPU *c) {
  NATIVE_HOOK(0x536040u) REGS; LOADALL;
L_00536040:;
  /* 00536040 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00536041 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00536043 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00536046 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00536049 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053604a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0053604c lea ecx, [esi + 0x1bc] */ ecx = (u32)((u32)(esi + 0x1bcu));
  /* 00536052 call 0x52ce90 */ esp -= 4; M32(esp) = 0x536057u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x536052u); RETCHK(0x536057u, 0x536052u); LOADALL;
  /* 00536057 mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 0053605a mov ecx, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ecx = (u32)(M32(m_)); }
  /* 0053605d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053605e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053605f lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00536062 call 0x52ce60 */ esp -= 4; M32(esp) = 0x536067u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x536062u); RETCHK(0x536067u, 0x536062u); LOADALL;
  /* 00536067 lea ecx, [esi + 0x1d0] */ ecx = (u32)((u32)(esi + 0x1d0u));
  /* 0053606d call 0x52ce90 */ esp -= 4; M32(esp) = 0x536072u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x53606du); RETCHK(0x536072u, 0x53606du); LOADALL;
  /* 00536072 mov edx, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); edx = (u32)(M32(m_)); }
  /* 00536075 mov eax, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); eax = (u32)(M32(m_)); }
  /* 00536078 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00536079 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053607a lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0053607d call 0x52ce60 */ esp -= 4; M32(esp) = 0x536082u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x53607du); RETCHK(0x536082u, 0x53607du); LOADALL;
  /* 00536082 lea ecx, [esi + 0x1e4] */ ecx = (u32)((u32)(esi + 0x1e4u));
  /* 00536088 call 0x52ce90 */ esp -= 4; M32(esp) = 0x53608du; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x536088u); RETCHK(0x53608du, 0x536088u); LOADALL;
  /* 0053608d mov ecx, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); ecx = (u32)(M32(m_)); }
  /* 00536090 mov edx, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); edx = (u32)(M32(m_)); }
  /* 00536093 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00536094 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00536095 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00536098 call 0x52ce60 */ esp -= 4; M32(esp) = 0x53609du; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x536098u); RETCHK(0x53609du, 0x536098u); LOADALL;
  /* 0053609d lea ecx, [esi + 0x1f8] */ ecx = (u32)((u32)(esi + 0x1f8u));
  /* 005360a3 call 0x52ce90 */ esp -= 4; M32(esp) = 0x5360a8u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x5360a3u); RETCHK(0x5360a8u, 0x5360a3u); LOADALL;
  /* 005360a8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005360a9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005360ab pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005360ac ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005360b0(CPU *c) {
  NATIVE_HOOK(0x5360b0u) REGS; LOADALL;
L_005360b0:;
  /* 005360b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005360b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005360b3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005360b6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005360b7 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005360ba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005360bb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005360bc mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 005360bf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005360c0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005360c1 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005360c4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005360c6 call 0x52ce60 */ esp -= 4; M32(esp) = 0x5360cbu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x5360c6u); RETCHK(0x5360cbu, 0x5360c6u); LOADALL;
  /* 005360cb lea ecx, [esi + 0x1c8] */ ecx = (u32)((u32)(esi + 0x1c8u));
  /* 005360d1 call 0x52ce90 */ esp -= 4; M32(esp) = 0x5360d6u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x5360d1u); RETCHK(0x5360d6u, 0x5360d1u); LOADALL;
  /* 005360d6 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005360d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005360da push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005360db lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005360de call 0x52ce60 */ esp -= 4; M32(esp) = 0x5360e3u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x5360deu); RETCHK(0x5360e3u, 0x5360deu); LOADALL;
  /* 005360e3 lea ecx, [esi + 0x1dc] */ ecx = (u32)((u32)(esi + 0x1dcu));
  /* 005360e9 call 0x52ce90 */ esp -= 4; M32(esp) = 0x5360eeu; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x5360e9u); RETCHK(0x5360eeu, 0x5360e9u); LOADALL;
  /* 005360ee push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005360ef mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005360f2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005360f3 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005360f6 call 0x52ce60 */ esp -= 4; M32(esp) = 0x5360fbu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x5360f6u); RETCHK(0x5360fbu, 0x5360f6u); LOADALL;
  /* 005360fb lea ecx, [esi + 0x1f0] */ ecx = (u32)((u32)(esi + 0x1f0u));
  /* 00536101 call 0x52ce90 */ esp -= 4; M32(esp) = 0x536106u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x536101u); RETCHK(0x536106u, 0x536101u); LOADALL;
  /* 00536106 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00536109 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053610a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053610b lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0053610e call 0x52ce60 */ esp -= 4; M32(esp) = 0x536113u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x53610eu); RETCHK(0x536113u, 0x53610eu); LOADALL;
  /* 00536113 lea ecx, [esi + 0x204] */ ecx = (u32)((u32)(esi + 0x204u));
  /* 00536119 call 0x52ce90 */ esp -= 4; M32(esp) = 0x53611eu; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x536119u); RETCHK(0x53611eu, 0x536119u); LOADALL;
  /* 0053611e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053611f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536120 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00536121 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00536123 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536124 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00536130(CPU *c) {
  NATIVE_HOOK(0x536130u) REGS; LOADALL;
L_00536130:;
  /* 00536130 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00536131 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00536133 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536134 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00536135 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00536138 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0053613a lea ecx, [esi + 0x1c8] */ ecx = (u32)((u32)(esi + 0x1c8u));
  /* 00536140 mov eax, edi */ { eax = (u32)(edi); }
  /* 00536142 call 0x52ce90 */ esp -= 4; M32(esp) = 0x536147u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x536142u); RETCHK(0x536147u, 0x536142u); LOADALL;
  /* 00536147 lea eax, [edi + 8] */ eax = (u32)((u32)(edi + 0x8u));
  /* 0053614a lea ecx, [esi + 0x1dc] */ ecx = (u32)((u32)(esi + 0x1dcu));
  /* 00536150 call 0x52ce90 */ esp -= 4; M32(esp) = 0x536155u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x536150u); RETCHK(0x536155u, 0x536150u); LOADALL;
  /* 00536155 lea eax, [edi + 0x10] */ eax = (u32)((u32)(edi + 0x10u));
  /* 00536158 lea ecx, [esi + 0x1f0] */ ecx = (u32)((u32)(esi + 0x1f0u));
  /* 0053615e call 0x52ce90 */ esp -= 4; M32(esp) = 0x536163u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x53615eu); RETCHK(0x536163u, 0x53615eu); LOADALL;
  /* 00536163 lea eax, [edi + 0x18] */ eax = (u32)((u32)(edi + 0x18u));
  /* 00536166 lea ecx, [esi + 0x204] */ ecx = (u32)((u32)(esi + 0x204u));
  /* 0053616c call 0x52ce90 */ esp -= 4; M32(esp) = 0x536171u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x53616cu); RETCHK(0x536171u, 0x53616cu); LOADALL;
  /* 00536171 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00536172 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536173 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536174 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00536180(CPU *c) {
  NATIVE_HOOK(0x536180u) REGS; LOADALL;
L_00536180:;
  /* 00536180 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00536181 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00536183 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00536186 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00536187 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00536189 mov edx, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); edx = (u32)(M32(m_)); }
  /* 0053618f test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00536191 je 0x536253 */ if (ZF_) goto L_00536253;
  /* 00536197 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536198 mov eax, edx */ { eax = (u32)(edx); }
  /* 0053619a call 0x526810 */ esp -= 4; M32(esp) = 0x53619fu; SAVEALL; F_00526810(c); ABI_CHECK(0x526810u, 0x53619au); RETCHK(0x53619fu, 0x53619au); LOADALL;
  /* 0053619f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005361a2 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 005361a7 mov eax, edx */ { eax = (u32)(edx); }
  /* 005361a9 call 0x526820 */ esp -= 4; M32(esp) = 0x5361aeu; SAVEALL; F_00526820(c); ABI_CHECK(0x526820u, 0x5361a9u); RETCHK(0x5361aeu, 0x5361a9u); LOADALL;
  /* 005361ae lea ecx, [ebx + 0x44] */ ecx = (u32)((u32)(ebx + 0x44u));
  /* 005361b1 lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 005361b4 call 0x52cea0 */ esp -= 4; M32(esp) = 0x5361b9u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x5361b4u); RETCHK(0x5361b9u, 0x5361b4u); LOADALL;
  /* 005361b9 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 005361bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005361bd lea esi, [ebp - 0x14] */ esi = (u32)((u32)(ebp + 0xffffffecu));
  /* 005361c0 call 0x52cf90 */ esp -= 4; M32(esp) = 0x5361c5u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x5361c0u); RETCHK(0x5361c5u, 0x5361c0u); LOADALL;
  /* 005361c5 mov eax, dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); eax = (u32)(M32(m_)); }
  /* 005361cb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005361ce test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005361d0 je 0x536244 */ if (ZF_) goto L_00536244;
  /* 005361d2 mov ecx, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); ecx = (u32)(M32(m_)); }
  /* 005361d8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005361d9 call 0x5267f0 */ esp -= 4; M32(esp) = 0x5361deu; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x5361d9u); RETCHK(0x5361deu, 0x5361d9u); LOADALL;
  /* 005361de lea eax, [ebx + 0x1d0] */ eax = (u32)((u32)(ebx + 0x1d0u));
  /* 005361e4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005361e5 lea eax, [ebx + 0x1bc] */ eax = (u32)((u32)(ebx + 0x1bcu));
  /* 005361eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005361ec mov eax, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); eax = (u32)(M32(m_)); }
  /* 005361f2 lea ecx, [ebx + 0x1f8] */ ecx = (u32)((u32)(ebx + 0x1f8u));
  /* 005361f8 lea edx, [ebx + 0x1e4] */ edx = (u32)((u32)(ebx + 0x1e4u));
  /* 005361fe call 0x526920 */ esp -= 4; M32(esp) = 0x536203u; SAVEALL; F_00526920(c); ABI_CHECK(0x526920u, 0x5361feu); RETCHK(0x536203u, 0x5361feu); LOADALL;
  /* 00536203 mov eax, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); eax = (u32)(M32(m_)); }
  /* 00536209 lea ecx, [ebx + 0x204] */ ecx = (u32)((u32)(ebx + 0x204u));
  /* 0053620f lea edx, [ebx + 0x1f0] */ edx = (u32)((u32)(ebx + 0x1f0u));
  /* 00536215 lea esi, [ebx + 0x1dc] */ esi = (u32)((u32)(ebx + 0x1dcu));
  /* 0053621b lea edi, [ebx + 0x1c8] */ edi = (u32)((u32)(ebx + 0x1c8u));
  /* 00536221 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536222 call 0x5269c0 */ esp -= 4; M32(esp) = 0x536227u; SAVEALL; F_005269c0(c); ABI_CHECK(0x5269c0u, 0x536222u); RETCHK(0x536227u, 0x536222u); LOADALL;
  /* 00536227 mov ecx, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); ecx = (u32)(M32(m_)); }
  /* 0053622d lea eax, [ebx + 0x1c4] */ eax = (u32)((u32)(ebx + 0x1c4u));
  /* 00536233 call 0x526840 */ esp -= 4; M32(esp) = 0x536238u; SAVEALL; F_00526840(c); ABI_CHECK(0x526840u, 0x536233u); RETCHK(0x536238u, 0x536233u); LOADALL;
  /* 00536238 mov ecx, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); ecx = (u32)(M32(m_)); }
  /* 0053623e call 0x526a00 */ esp -= 4; M32(esp) = 0x536243u; SAVEALL; F_00526a00(c); ABI_CHECK(0x526a00u, 0x53623eu); RETCHK(0x536243u, 0x53623eu); LOADALL;
  /* 00536243 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00536244:;
  /* 00536244 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00536247 mov eax, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); eax = (u32)(M32(m_)); }
  /* 0053624d call 0x526820 */ esp -= 4; M32(esp) = 0x536252u; SAVEALL; F_00526820(c); ABI_CHECK(0x526820u, 0x53624du); RETCHK(0x536252u, 0x53624du); LOADALL;
  /* 00536252 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00536253:;
  /* 00536253 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00536254 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00536256 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536257 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00536260(CPU *c) {
  NATIVE_HOOK(0x536260u) REGS; LOADALL;
L_00536260:;
  /* 00536260 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00536261 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00536263 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00536265 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0053626a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00536270 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536271 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00536278 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00536279 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053627a push 0x5362e0 */ { u32 v_ = 0x5362e0u; esp -= 4; M32(esp) = v_; }
  /* 0053627f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00536282 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00536284 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00536286 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00536289 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0053628c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053628e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053628f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00536292 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00536299 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0053629c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053629d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005362a0 call 0x404140 */ esp -= 4; M32(esp) = 0x5362a5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5362a0u); RETCHK(0x5362a5u, 0x5362a0u); LOADALL;
  /* 005362a5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005362a8 call 0x405c00 */ esp -= 4; M32(esp) = 0x5362adu; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x5362a8u); RETCHK(0x5362adu, 0x5362a8u); LOADALL;
  /* 005362ad mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005362af call 0x405c80 */ esp -= 4; M32(esp) = 0x5362b4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x5362afu); RETCHK(0x5362b4u, 0x5362afu); LOADALL;
  /* 005362b4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005362b8 jb 0x5362c6 */ if (CF_) goto L_005362c6;
  /* 005362ba mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005362bd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005362be call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5362c3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5362beu); RETCHK(0x5362c3u, 0x5362beu); LOADALL;
  /* 005362c3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005362c6:;
  /* 005362c6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005362c9 mov eax, esi */ { eax = (u32)(esi); }
  /* 005362cb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005362d2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005362d3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005362d5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005362d6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_005362e0(CPU *c) {
  NATIVE_HOOK(0x5362e0u) REGS; LOADALL;
L_005362e0:;
  /* 005362e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005362e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005362e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005362e5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 005362ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005362f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005362f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005362f8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005362f9 push 0x20c */ { u32 v_ = 0x20cu; esp -= 4; M32(esp) = v_; }
  /* 005362fe call 0x5fe934 */ esp -= 4; M32(esp) = 0x536303u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5362feu); RETCHK(0x536303u, 0x5362feu); LOADALL;
  /* 00536303 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00536306 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00536309 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053630b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00536312 je 0x53632a */ if (ZF_) goto L_0053632a;
  /* 00536314 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00536316 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536317 call 0x535d90 */ esp -= 4; M32(esp) = 0x53631cu; SAVEALL; F_00535d90(c); ABI_CHECK(0x535d90u, 0x536317u); RETCHK(0x53631cu, 0x536317u); LOADALL;
  /* 0053631c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053631f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00536326 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00536328 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536329 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0053632a:;
  /* 0053632a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053632d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053632f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00536336 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00536338 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536339 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00536340(CPU *c) {
  NATIVE_HOOK(0x536340u) REGS; LOADALL;
L_00536340:;
  /* 00536340 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536341 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00536343 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00536344 call 0x506b60 */ esp -= 4; M32(esp) = 0x536349u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x536344u); RETCHK(0x536349u, 0x536344u); LOADALL;
  /* 00536349 lea esi, [edi + 0x180] */ esi = (u32)((u32)(edi + 0x180u));
  /* 0053634f mov dword ptr [edi], 0x653a70 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x653a70u); }
  /* 00536355 call 0x5267c0 */ esp -= 4; M32(esp) = 0x53635au; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x536355u); RETCHK(0x53635au, 0x536355u); LOADALL;
  /* 0053635a mov dword ptr [edi + 0x214], 0x64d178 */ { const u32 m_ = (u32)(edi + 0x214u); M32(m_) = (u32)(0x64d178u); }
  /* 00536364 mov dword ptr [edi + 0x218], 0 */ { const u32 m_ = (u32)(edi + 0x218u); M32(m_) = (u32)(0x0u); }
  /* 0053636e mov dword ptr [edi + 0x21c], 1 */ { const u32 m_ = (u32)(edi + 0x21cu); M32(m_) = (u32)(0x1u); }
  /* 00536378 mov byte ptr [edi + 0x220], 0 */ { const u32 m_ = (u32)(edi + 0x220u); M8(m_) = (u8)(0x0u); }
  /* 0053637f mov eax, edi */ { eax = (u32)(edi); }
  /* 00536381 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536382 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00536390(CPU *c) {
  NATIVE_HOOK(0x536390u) REGS; LOADALL;
L_00536390:;
  /* 00536390 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00536391 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00536393 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536394 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00536396 call 0x5363c0 */ esp -= 4; M32(esp) = 0x53639bu; SAVEALL; F_005363c0(c); ABI_CHECK(0x5363c0u, 0x536396u); RETCHK(0x53639bu, 0x536396u); LOADALL;
  /* 0053639b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053639f je 0x5363aa */ if (ZF_) goto L_005363aa;
  /* 005363a1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005363a2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5363a7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5363a2u); RETCHK(0x5363a7u, 0x5363a2u); LOADALL;
  /* 005363a7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005363aa:;
  /* 005363aa mov eax, esi */ { eax = (u32)(esi); }
  /* 005363ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005363ad pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005363ae ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005363c0(CPU *c) {
  NATIVE_HOOK(0x5363c0u) REGS; LOADALL;
L_005363c0:;
  /* 005363c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005363c1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005363c3 lea ecx, [esi + 0x214] */ ecx = (u32)((u32)(esi + 0x214u));
  /* 005363c9 mov dword ptr [esi], 0x653a70 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x653a70u); }
  /* 005363cf call 0x529300 */ esp -= 4; M32(esp) = 0x5363d4u; SAVEALL; F_00529300(c); ABI_CHECK(0x529300u, 0x5363cfu); RETCHK(0x5363d4u, 0x5363cfu); LOADALL;
  /* 005363d4 lea ecx, [esi + 0x180] */ ecx = (u32)((u32)(esi + 0x180u));
  /* 005363da call 0x5267e0 */ esp -= 4; M32(esp) = 0x5363dfu; SAVEALL; F_005267e0(c); ABI_CHECK(0x5267e0u, 0x5363dau); RETCHK(0x5363dfu, 0x5363dau); LOADALL;
  /* 005363df mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005363e1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005363e2 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_005363f0(CPU *c) {
  NATIVE_HOOK(0x5363f0u) REGS; LOADALL;
L_005363f0:;
  /* 005363f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005363f1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005363f2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005363f4 call 0x507260 */ esp -= 4; M32(esp) = 0x5363f9u; SAVEALL; F_00507260(c); ABI_CHECK(0x507260u, 0x5363f4u); RETCHK(0x5363f9u, 0x5363f4u); LOADALL;
  /* 005363f9 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005363fb je 0x53640b */ if (ZF_) goto L_0053640b;
  /* 005363fd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005363ff push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536400 lea eax, [edi + 0x214] */ eax = (u32)((u32)(edi + 0x214u));
  /* 00536406 call 0x529310 */ esp -= 4; M32(esp) = 0x53640bu; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x536406u); RETCHK(0x53640bu, 0x536406u); LOADALL;
L_0053640b:;
  /* 0053640b mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053640d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00536410(CPU *c) {
  NATIVE_HOOK(0x536410u) REGS; LOADALL;
L_00536410:;
  /* 00536410 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00536411 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00536413 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00536416 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00536417 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00536419 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0053641b call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53641eu; SAVEALL; call_ind(c, t_); RETCHK(0x53641eu, 0x53641bu); LOADALL; }
  /* 0053641e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00536420 je 0x536596 */ if (ZF_) goto L_00536596;
  /* 00536426 mov eax, dword ptr [edi + 0x218] */ { const u32 m_ = (u32)(edi + 0x218u); eax = (u32)(M32(m_)); }
  /* 0053642c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053642e mov ecx, dword ptr [edi + 0x21c] */ { const u32 m_ = (u32)(edi + 0x21cu); ecx = (u32)(M32(m_)); }
  /* 00536434 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 00536437 je 0x536440 */ if (ZF_) goto L_00536440;
  /* 00536439 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0053643b mov ecx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053643e jmp 0x536442 */ goto L_00536442;
L_00536440:;
  /* 00536440 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_00536442:;
  /* 00536442 mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 00536447 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00536449 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053644a sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0053644d mov ebx, edx */ { ebx = (u32)(edx); }
  /* 0053644f shr ebx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00536452 add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00536454 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536455 lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 00536458 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0053645b mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 0053645e call 0x52cea0 */ esp -= 4; M32(esp) = 0x536463u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x53645eu); RETCHK(0x536463u, 0x53645eu); LOADALL;
  /* 00536463 mov eax, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00536466 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536467 lea esi, [ebp - 0x28] */ esi = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0053646a call 0x52cf90 */ esp -= 4; M32(esp) = 0x53646fu; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x53646au); RETCHK(0x53646fu, 0x53646au); LOADALL;
  /* 0053646f mov eax, dword ptr [edi + 0x218] */ { const u32 m_ = (u32)(edi + 0x218u); eax = (u32)(M32(m_)); }
  /* 00536475 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00536478 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053647a je 0x536480 */ if (ZF_) goto L_00536480;
  /* 0053647c mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0053647e jmp 0x536482 */ goto L_00536482;
L_00536480:;
  /* 00536480 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_00536482:;
  /* 00536482 lea eax, [edi + 0x180] */ eax = (u32)((u32)(edi + 0x180u));
  /* 00536488 call 0x526830 */ esp -= 4; M32(esp) = 0x53648du; SAVEALL; F_00526830(c); ABI_CHECK(0x526830u, 0x536488u); RETCHK(0x53648du, 0x536488u); LOADALL;
  /* 0053648d mov al, byte ptr [edi + 0x220] */ { const u32 m_ = (u32)(edi + 0x220u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00536493 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00536495 jne 0x5364f4 */ if (!ZF_) goto L_005364f4;
  /* 00536497 mov ecx, dword ptr [edi + 0x21c] */ { const u32 m_ = (u32)(edi + 0x21cu); ecx = (u32)(M32(m_)); }
  /* 0053649d call 0x536700 */ esp -= 4; M32(esp) = 0x5364a2u; SAVEALL; F_00536700(c); ABI_CHECK(0x536700u, 0x53649du); RETCHK(0x5364a2u, 0x53649du); LOADALL;
  /* 005364a2 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 005364a5 fsub dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005364a8 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005364aa mov dword ptr [edi + 0x224], ecx */ { const u32 m_ = (u32)(edi + 0x224u); M32(m_) = (u32)(ecx); }
  /* 005364b0 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005364b6 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005364b8 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005364bb je 0x5364c5 */ if (ZF_) goto L_005364c5;
  /* 005364bd fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005364bf fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 005364c2 fsub dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005364c5:;
  /* 005364c5 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005364c7 imul eax, ebx */ { s64 p_ = (s64)(s32)eax * (s64)(s32)ebx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005364ca cdq */ edx = (u32)((s32)eax >> 31);
  /* 005364cb sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005364cd sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005364cf mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 005364d2 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 005364d5 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005364d7 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005364dd faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005364df fadd dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005364e2 call 0x61b154 */ esp -= 4; M32(esp) = 0x5364e7u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5364e2u); RETCHK(0x5364e7u, 0x5364e2u); LOADALL;
  /* 005364e7 mov dword ptr [edi + 0x228], eax */ { const u32 m_ = (u32)(edi + 0x228u); M32(m_) = (u32)(eax); }
  /* 005364ed mov byte ptr [edi + 0x220], 1 */ { const u32 m_ = (u32)(edi + 0x220u); M8(m_) = (u8)(0x1u); }
L_005364f4:;
  /* 005364f4 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 005364f7 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 005364f9 fsub dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005364fc fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005364ff fild dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)(s32)M32(m_)); }
  /* 00536502 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
L_00536505:;
  /* 00536505 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00536508 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00536509 mov ecx, 0xa */ { ecx = (u32)(0xau); }
  /* 0053650e idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x53650eu); eax = q_; edx = r_; }
  /* 00536510 mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 00536513 fild dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)(s32)M32(m_)); }
  /* 00536516 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00536519 fmul dword ptr [0x656ee0] */ { const u32 m_ = (u32)(0x656ee0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0053651f fst dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); }
  /* 00536522 fadd dword ptr [0x656ee0] */ { const u32 m_ = (u32)(0x656ee0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00536528 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053652b fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0053652e fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00536534 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00536536 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00536539 jne 0x536543 */ if (!ZF_) goto L_00536543;
  /* 0053653b mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0053653e mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 00536541 jmp 0x53654c */ goto L_0053654c;
L_00536543:;
  /* 00536543 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 00536546 fsub dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00536549 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
L_0053654c:;
  /* 0053654c mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0053654f mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 00536552 mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 00536555 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0053655a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053655b mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0053655e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00536560 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00536561 mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 00536564 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00536565 mov edx, dword ptr [edi + 0x228] */ { const u32 m_ = (u32)(edi + 0x228u); edx = (u32)(M32(m_)); }
  /* 0053656b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053656c sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0053656e mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 00536571 fild dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)(s32)M32(m_)); }
  /* 00536574 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00536575 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00536576 lea eax, [edi + 0x180] */ eax = (u32)((u32)(edi + 0x180u));
  /* 0053657c fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053657f call 0x526bd0 */ esp -= 4; M32(esp) = 0x536584u; SAVEALL; F_00526bd0(c); ABI_CHECK(0x526bd0u, 0x53657fu); RETCHK(0x536584u, 0x53657fu); LOADALL;
  /* 00536584 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00536587 add esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00536589 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053658b mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0053658e jg 0x536505 */ if (!(ZF_|LT_)) goto L_00536505;
  /* 00536594 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536595 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00536596:;
  /* 00536596 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00536597 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00536599 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053659a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005365a0(CPU *c) {
  NATIVE_HOOK(0x5365a0u) REGS; LOADALL;
L_005365a0:;
  /* 005365a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005365a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005365a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005365a5 push 0x624328 */ { u32 v_ = 0x624328u; esp -= 4; M32(esp) = v_; }
  /* 005365aa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005365b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005365b1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005365b8 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005365bb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005365bc mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005365be mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005365c1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005365c3 jne 0x5365d8 */ if (!ZF_) goto L_005365d8;
  /* 005365c5 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005365c7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005365c8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005365cb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005365d2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005365d4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005365d5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005365d8:;
  /* 005365d8 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005365da push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005365db push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005365dc call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5365dfu; SAVEALL; call_ind(c, t_); RETCHK(0x5365dfu, 0x5365dcu); LOADALL; }
  /* 005365df push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 005365e4 mov edi, eax */ { edi = (u32)(eax); }
  /* 005365e6 call 0x560fd0 */ esp -= 4; M32(esp) = 0x5365ebu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5365e6u); RETCHK(0x5365ebu, 0x5365e6u); LOADALL;
  /* 005365eb mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005365ee fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005365f1 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 005365f6 mov eax, edi */ { eax = (u32)(edi); }
  /* 005365f8 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005365fb call 0x560fd0 */ esp -= 4; M32(esp) = 0x536600u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5365fbu); RETCHK(0x536600u, 0x5365fbu); LOADALL;
  /* 00536600 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00536603 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00536606 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 0053660b mov eax, edi */ { eax = (u32)(edi); }
  /* 0053660d fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00536610 call 0x560fd0 */ esp -= 4; M32(esp) = 0x536615u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x536610u); RETCHK(0x536615u, 0x536610u); LOADALL;
  /* 00536615 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00536618 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0053661b push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 00536620 mov eax, edi */ { eax = (u32)(edi); }
  /* 00536622 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00536625 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00536628 call 0x560fd0 */ esp -= 4; M32(esp) = 0x53662du; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x536628u); RETCHK(0x53662du, 0x536628u); LOADALL;
  /* 0053662d mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00536630 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00536633 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00536634 mov eax, 0x653b54 */ { eax = (u32)(0x653b54u); }
  /* 00536639 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053663c fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053663f call 0x560ed0 */ esp -= 4; M32(esp) = 0x536644u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x53663fu); RETCHK(0x536644u, 0x53663fu); LOADALL;
  /* 00536644 mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00536647 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00536648 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0053664b mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0053664e call 0x52d060 */ esp -= 4; M32(esp) = 0x536653u; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x53664eu); RETCHK(0x536653u, 0x53664eu); LOADALL;
  /* 00536653 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00536656 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00536657 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 0053665c call 0x560ed0 */ esp -= 4; M32(esp) = 0x536661u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x53665cu); RETCHK(0x536661u, 0x53665cu); LOADALL;
  /* 00536661 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00536663 mov dword ptr [ebp - 0x20], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xfu); }
  /* 0053666a mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 00536671 mov byte ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)(0x0u); }
  /* 00536675 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
L_00536678:;
  /* 00536678 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053667a inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0053667b test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053667d jne 0x536678 */ if (!ZF_) goto L_00536678;
  /* 0053667f sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00536681 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00536682 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536683 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00536686 call 0x404420 */ esp -= 4; M32(esp) = 0x53668bu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x536686u); RETCHK(0x53668bu, 0x536686u); LOADALL;
  /* 0053668b mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053668e lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00536691 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00536694 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00536696 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0053669d call 0x5363f0 */ esp -= 4; M32(esp) = 0x5366a2u; SAVEALL; F_005363f0(c); ABI_CHECK(0x5363f0u, 0x53669du); RETCHK(0x5366a2u, 0x53669du); LOADALL;
  /* 005366a2 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 005366a4 cmp dword ptr [ebp - 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005366a8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005366a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005366aa jb 0x5366b8 */ if (CF_) goto L_005366b8;
  /* 005366ac mov edx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edx = (u32)(M32(m_)); }
  /* 005366af push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005366b0 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5366b5u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5366b0u); RETCHK(0x5366b5u, 0x5366b0u); LOADALL;
  /* 005366b5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005366b8:;
  /* 005366b8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005366bb mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 005366bd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005366be mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005366c5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005366c7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005366c8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005366d0(CPU *c) {
  NATIVE_HOOK(0x5366d0u) REGS; LOADALL;
L_005366d0:;
  /* 005366d0 mov dword ptr [eax + 0x21c], ecx */ { const u32 m_ = (u32)(eax + 0x21cu); M32(m_) = (u32)(ecx); }
  /* 005366d6 mov byte ptr [eax + 0x220], 0 */ { const u32 m_ = (u32)(eax + 0x220u); M8(m_) = (u8)(0x0u); }
  /* 005366dd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005366e0(CPU *c) {
  NATIVE_HOOK(0x5366e0u) REGS; LOADALL;
L_005366e0:;
  /* 005366e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005366e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005366e3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005366e5 je 0x5366f7 */ if (ZF_) goto L_005366f7;
  /* 005366e7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005366e9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005366ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005366ed add eax, 0x214 */ { u32 a_ = eax, b_ = 0x214u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005366f2 call 0x529310 */ esp -= 4; M32(esp) = 0x5366f7u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x5366f2u); RETCHK(0x5366f7u, 0x5366f2u); LOADALL;
L_005366f7:;
  /* 005366f7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005366f8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00536700(CPU *c) {
  NATIVE_HOOK(0x536700u) REGS; LOADALL;
L_00536700:;
  /* 00536700 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00536702 jne 0x53670a */ if (!ZF_) goto L_0053670a;
  /* 00536704 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00536709 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0053670a:;
  /* 0053670a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053670b xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0053670d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053670f jle 0x536729 */ if ((ZF_|LT_)) goto L_00536729;
L_00536711:;
  /* 00536711 mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 00536716 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00536718 sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0053671b mov eax, edx */ { eax = (u32)(edx); }
  /* 0053671d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00536720 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00536722 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00536724 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00536725 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00536727 jg 0x536711 */ if (!(ZF_|LT_)) goto L_00536711;
L_00536729:;
  /* 00536729 mov eax, esi */ { eax = (u32)(esi); }
  /* 0053672b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053672c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00536730(CPU *c) {
  NATIVE_HOOK(0x536730u) REGS; LOADALL;
L_00536730:;
  /* 00536730 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00536731 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00536733 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00536735 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0053673a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00536740 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536741 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00536748 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00536749 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053674a push 0x5367b0 */ { u32 v_ = 0x5367b0u; esp -= 4; M32(esp) = v_; }
  /* 0053674f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00536752 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00536754 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00536756 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00536759 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0053675c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053675e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053675f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00536762 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00536769 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0053676c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053676d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00536770 call 0x404140 */ esp -= 4; M32(esp) = 0x536775u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x536770u); RETCHK(0x536775u, 0x536770u); LOADALL;
  /* 00536775 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00536778 call 0x405c00 */ esp -= 4; M32(esp) = 0x53677du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x536778u); RETCHK(0x53677du, 0x536778u); LOADALL;
  /* 0053677d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0053677f call 0x405c80 */ esp -= 4; M32(esp) = 0x536784u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x53677fu); RETCHK(0x536784u, 0x53677fu); LOADALL;
  /* 00536784 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00536788 jb 0x536796 */ if (CF_) goto L_00536796;
  /* 0053678a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053678d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053678e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x536793u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53678eu); RETCHK(0x536793u, 0x53678eu); LOADALL;
  /* 00536793 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00536796:;
  /* 00536796 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00536799 mov eax, esi */ { eax = (u32)(esi); }
  /* 0053679b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005367a2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005367a3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005367a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005367a6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_005367b0(CPU *c) {
  NATIVE_HOOK(0x5367b0u) REGS; LOADALL;
L_005367b0:;
  /* 005367b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005367b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005367b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005367b5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 005367ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005367c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005367c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005367c8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005367c9 push 0x22c */ { u32 v_ = 0x22cu; esp -= 4; M32(esp) = v_; }
  /* 005367ce call 0x5fe934 */ esp -= 4; M32(esp) = 0x5367d3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5367ceu); RETCHK(0x5367d3u, 0x5367ceu); LOADALL;
  /* 005367d3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005367d6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005367d9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005367db mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005367e2 je 0x5367fb */ if (ZF_) goto L_005367fb;
  /* 005367e4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005367e5 mov edi, eax */ { edi = (u32)(eax); }
  /* 005367e7 call 0x536340 */ esp -= 4; M32(esp) = 0x5367ecu; SAVEALL; F_00536340(c); ABI_CHECK(0x536340u, 0x5367e7u); RETCHK(0x5367ecu, 0x5367e7u); LOADALL;
  /* 005367ec pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005367ed mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005367f0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005367f7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005367f9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005367fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005367fb:;
  /* 005367fb mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005367fe xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00536800 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00536807 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00536809 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053680a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00536810(CPU *c) {
  NATIVE_HOOK(0x536810u) REGS; LOADALL;
L_00536810:;
  /* 00536810 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00536811 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00536813 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00536819 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053681b push 0x61d984 */ { u32 v_ = 0x61d984u; esp -= 4; M32(esp) = v_; }
  /* 00536820 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536821 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00536824 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0053682b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053682c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053682f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536830 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536831 call 0x506b60 */ esp -= 4; M32(esp) = 0x536836u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x536831u); RETCHK(0x536836u, 0x536831u); LOADALL;
  /* 00536836 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00536839 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0053683c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053683e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00536841 mov dword ptr [esi + 0x180], ecx */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(ecx); }
  /* 00536847 mov cl, byte ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053684a mov byte ptr [esi + 0x18c], cl */ { const u32 m_ = (u32)(esi + 0x18cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00536850 mov dword ptr [esi], 0x653d60 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x653d60u); }
  /* 00536856 mov dword ptr [esi + 0x184], edx */ { const u32 m_ = (u32)(esi + 0x184u); M32(m_) = (u32)(edx); }
  /* 0053685c mov dword ptr [esi + 0x188], edi */ { const u32 m_ = (u32)(esi + 0x188u); M32(m_) = (u32)(edi); }
  /* 00536862 mov byte ptr [esi + 0x18d], al */ { const u32 m_ = (u32)(esi + 0x18du); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00536868 mov ecx, 0xf */ { ecx = (u32)(0xfu); }
  /* 0053686d mov dword ptr [esi + 0x1a8], ecx */ { const u32 m_ = (u32)(esi + 0x1a8u); M32(m_) = (u32)(ecx); }
  /* 00536873 mov dword ptr [esi + 0x1a4], eax */ { const u32 m_ = (u32)(esi + 0x1a4u); M32(m_) = (u32)(eax); }
  /* 00536879 mov byte ptr [esi + 0x194], al */ { const u32 m_ = (u32)(esi + 0x194u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0053687f mov dword ptr [esi + 0x1c4], ecx */ { const u32 m_ = (u32)(esi + 0x1c4u); M32(m_) = (u32)(ecx); }
  /* 00536885 mov dword ptr [esi + 0x1c0], eax */ { const u32 m_ = (u32)(esi + 0x1c0u); M32(m_) = (u32)(eax); }
  /* 0053688b mov byte ptr [esi + 0x1b0], al */ { const u32 m_ = (u32)(esi + 0x1b0u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00536891 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00536893 push 0x653e84 */ { u32 v_ = 0x653e84u; esp -= 4; M32(esp) = v_; }
  /* 00536898 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0053689b mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0053689f call 0x404420 */ esp -= 4; M32(esp) = 0x5368a4u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53689fu); RETCHK(0x5368a4u, 0x53689fu); LOADALL;
  /* 005368a4 mov eax, dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); eax = (u32)(M32(m_)); }
  /* 005368aa mov ecx, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); ecx = (u32)(M32(m_)); }
  /* 005368b0 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005368b2 mov dword ptr [esi + 0x188], edi */ { const u32 m_ = (u32)(esi + 0x188u); M32(m_) = (u32)(edi); }
  /* 005368b8 jle 0x5368c6 */ if ((ZF_|LT_)) goto L_005368c6;
  /* 005368ba mov dword ptr [esi + 0x180], ecx */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(ecx); }
  /* 005368c0 mov dword ptr [esi + 0x184], eax */ { const u32 m_ = (u32)(esi + 0x184u); M32(m_) = (u32)(eax); }
L_005368c6:;
  /* 005368c6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005368c9 mov eax, esi */ { eax = (u32)(esi); }
  /* 005368cb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005368d2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005368d3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005368d5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005368d6 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_005368e0(CPU *c) {
  NATIVE_HOOK(0x5368e0u) REGS; LOADALL;
L_005368e0:;
  /* 005368e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005368e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005368e3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005368e4 jmp 0x5078a0 */ SAVEALL; F_005078a0(c); return;
}

void F_005368f0(CPU *c) {
  NATIVE_HOOK(0x5368f0u) REGS; LOADALL;
L_005368f0:;
  /* 005368f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005368f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005368f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005368f4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005368f6 call 0x536920 */ esp -= 4; M32(esp) = 0x5368fbu; SAVEALL; F_00536920(c); ABI_CHECK(0x536920u, 0x5368f6u); RETCHK(0x5368fbu, 0x5368f6u); LOADALL;
  /* 005368fb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005368ff je 0x53690a */ if (ZF_) goto L_0053690a;
  /* 00536901 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536902 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x536907u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x536902u); RETCHK(0x536907u, 0x536902u); LOADALL;
  /* 00536907 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053690a:;
  /* 0053690a mov eax, esi */ { eax = (u32)(esi); }
  /* 0053690c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053690d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053690e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00536920(CPU *c) {
  NATIVE_HOOK(0x536920u) REGS; LOADALL;
L_00536920:;
  /* 00536920 cmp dword ptr [esi + 0x1c4], 0x10 */ { const u32 m_ = (u32)(esi + 0x1c4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00536927 jb 0x536938 */ if (CF_) goto L_00536938;
  /* 00536929 mov eax, dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); eax = (u32)(M32(m_)); }
  /* 0053692f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536930 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x536935u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x536930u); RETCHK(0x536935u, 0x536930u); LOADALL;
  /* 00536935 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00536938:;
  /* 00536938 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00536939 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0053693b mov dword ptr [esi + 0x1c4], 0xf */ { const u32 m_ = (u32)(esi + 0x1c4u); M32(m_) = (u32)(0xfu); }
  /* 00536945 mov dword ptr [esi + 0x1c0], ebx */ { const u32 m_ = (u32)(esi + 0x1c0u); M32(m_) = (u32)(ebx); }
  /* 0053694b mov byte ptr [esi + 0x1b0], bl */ { const u32 m_ = (u32)(esi + 0x1b0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00536951 cmp dword ptr [esi + 0x1a8], 0x10 */ { const u32 m_ = (u32)(esi + 0x1a8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00536958 jb 0x536969 */ if (CF_) goto L_00536969;
  /* 0053695a mov ecx, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); ecx = (u32)(M32(m_)); }
  /* 00536960 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00536961 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x536966u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x536961u); RETCHK(0x536966u, 0x536961u); LOADALL;
  /* 00536966 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00536969:;
  /* 00536969 mov dword ptr [esi + 0x1a4], ebx */ { const u32 m_ = (u32)(esi + 0x1a4u); M32(m_) = (u32)(ebx); }
  /* 0053696f mov dword ptr [esi + 0x1a8], 0xf */ { const u32 m_ = (u32)(esi + 0x1a8u); M32(m_) = (u32)(0xfu); }
  /* 00536979 mov byte ptr [esi + 0x194], bl */ { const u32 m_ = (u32)(esi + 0x194u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053697f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00536981 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00536982 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_00536990(CPU *c) {
  NATIVE_HOOK(0x536990u) REGS; LOADALL;
L_00536990:;
  /* 00536990 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00536991 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00536993 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00536999 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053699b push 0x626838 */ { u32 v_ = 0x626838u; esp -= 4; M32(esp) = v_; }
  /* 005369a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005369a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005369a8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005369a9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005369ac xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005369ae mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 005369b5 mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 005369b8 mov byte ptr [esi + 4], al */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005369bb push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 005369bd push 0x653e78 */ { u32 v_ = 0x653e78u; esp -= 4; M32(esp) = v_; }
  /* 005369c2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005369c4 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005369c7 call 0x404420 */ esp -= 4; M32(esp) = 0x5369ccu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5369c7u); RETCHK(0x5369ccu, 0x5369c7u); LOADALL;
  /* 005369cc mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005369cf mov eax, esi */ { eax = (u32)(esi); }
  /* 005369d1 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005369d8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005369d9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005369db pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005369dc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005369e0(CPU *c) {
  NATIVE_HOOK(0x5369e0u) REGS; LOADALL;
L_005369e0:;
  /* 005369e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005369e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005369e3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005369e9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005369eb push 0x626838 */ { u32 v_ = 0x626838u; esp -= 4; M32(esp) = v_; }
  /* 005369f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005369f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005369f8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005369f9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005369fc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005369fe mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00536a05 mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 00536a08 mov byte ptr [esi + 4], al */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00536a0b push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00536a0d push 0x653e6c */ { u32 v_ = 0x653e6cu; esp -= 4; M32(esp) = v_; }
  /* 00536a12 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00536a14 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00536a17 call 0x404420 */ esp -= 4; M32(esp) = 0x536a1cu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x536a17u); RETCHK(0x536a1cu, 0x536a17u); LOADALL;
  /* 00536a1c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00536a1f mov eax, esi */ { eax = (u32)(esi); }
  /* 00536a21 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00536a28 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536a29 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00536a2b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536a2c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00536a30(CPU *c) {
  NATIVE_HOOK(0x536a30u) REGS; LOADALL;
L_00536a30:;
  /* 00536a30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00536a31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00536a33 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536a34 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00536a36 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00536a39 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00536a3b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00536a3c call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536a3fu; SAVEALL; call_ind(c, t_); RETCHK(0x536a3fu, 0x536a3cu); LOADALL; }
  /* 00536a3f push 0x652890 */ { u32 v_ = 0x652890u; esp -= 4; M32(esp) = v_; }
  /* 00536a44 mov edi, eax */ { edi = (u32)(eax); }
  /* 00536a46 call 0x560fd0 */ esp -= 4; M32(esp) = 0x536a4bu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x536a46u); RETCHK(0x536a4bu, 0x536a46u); LOADALL;
  /* 00536a4b mov dword ptr [esi + 0x180], eax */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(eax); }
  /* 00536a51 push 0x65288c */ { u32 v_ = 0x65288cu; esp -= 4; M32(esp) = v_; }
  /* 00536a56 mov eax, edi */ { eax = (u32)(edi); }
  /* 00536a58 call 0x560fd0 */ esp -= 4; M32(esp) = 0x536a5du; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x536a58u); RETCHK(0x536a5du, 0x536a58u); LOADALL;
  /* 00536a5d mov dword ptr [esi + 0x184], eax */ { const u32 m_ = (u32)(esi + 0x184u); M32(m_) = (u32)(eax); }
  /* 00536a63 push 0x65327c */ { u32 v_ = 0x65327cu; esp -= 4; M32(esp) = v_; }
  /* 00536a68 mov eax, edi */ { eax = (u32)(edi); }
  /* 00536a6a call 0x560fd0 */ esp -= 4; M32(esp) = 0x536a6fu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x536a6au); RETCHK(0x536a6fu, 0x536a6au); LOADALL;
  /* 00536a6f mov ecx, dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); ecx = (u32)(M32(m_)); }
  /* 00536a75 mov edx, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); edx = (u32)(M32(m_)); }
  /* 00536a7b cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00536a7d mov dword ptr [esi + 0x188], eax */ { const u32 m_ = (u32)(esi + 0x188u); M32(m_) = (u32)(eax); }
  /* 00536a83 jle 0x536a91 */ if ((ZF_|LT_)) goto L_00536a91;
  /* 00536a85 mov dword ptr [esi + 0x180], edx */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(edx); }
  /* 00536a8b mov dword ptr [esi + 0x184], ecx */ { const u32 m_ = (u32)(esi + 0x184u); M32(m_) = (u32)(ecx); }
L_00536a91:;
  /* 00536a91 mov ecx, dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); ecx = (u32)(M32(m_)); }
  /* 00536a97 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00536a99 jg 0x536a9d */ if (!(ZF_|LT_)) goto L_00536a9d;
  /* 00536a9b mov eax, ecx */ { eax = (u32)(ecx); }
L_00536a9d:;
  /* 00536a9d mov ecx, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); ecx = (u32)(M32(m_)); }
  /* 00536aa3 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00536aa5 mov dword ptr [esi + 0x188], eax */ { const u32 m_ = (u32)(esi + 0x188u); M32(m_) = (u32)(eax); }
  /* 00536aab jl 0x536aaf */ if (LT_) goto L_00536aaf;
  /* 00536aad mov eax, ecx */ { eax = (u32)(ecx); }
L_00536aaf:;
  /* 00536aaf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00536ab0 mov dword ptr [esi + 0x188], eax */ { const u32 m_ = (u32)(esi + 0x188u); M32(m_) = (u32)(eax); }
  /* 00536ab6 push 0x652394 */ { u32 v_ = 0x652394u; esp -= 4; M32(esp) = v_; }
  /* 00536abb mov eax, edi */ { eax = (u32)(edi); }
  /* 00536abd call 0x560fd0 */ esp -= 4; M32(esp) = 0x536ac2u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x536abdu); RETCHK(0x536ac2u, 0x536abdu); LOADALL;
  /* 00536ac2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00536ac4 setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00536ac7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00536ac8 mov eax, 0x642b08 */ { eax = (u32)(0x642b08u); }
  /* 00536acd mov byte ptr [esi + 0x18c], cl */ { const u32 m_ = (u32)(esi + 0x18cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00536ad3 call 0x560ed0 */ esp -= 4; M32(esp) = 0x536ad8u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x536ad3u); RETCHK(0x536ad8u, 0x536ad3u); LOADALL;
  /* 00536ad8 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00536ada lea ebx, [ecx + 1] */ ebx = (u32)((u32)(ecx + 0x1u));
  /* 00536add lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00536ae0:;
  /* 00536ae0 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00536ae2 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00536ae3 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00536ae5 jne 0x536ae0 */ if (!ZF_) goto L_00536ae0;
  /* 00536ae7 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00536ae9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00536aea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536aeb lea ecx, [esi + 0x190] */ ecx = (u32)((u32)(esi + 0x190u));
  /* 00536af1 call 0x404420 */ esp -= 4; M32(esp) = 0x536af6u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x536af1u); RETCHK(0x536af6u, 0x536af1u); LOADALL;
  /* 00536af6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00536af7 mov eax, 0x642af0 */ { eax = (u32)(0x642af0u); }
  /* 00536afc call 0x560ed0 */ esp -= 4; M32(esp) = 0x536b01u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x536afcu); RETCHK(0x536b01u, 0x536afcu); LOADALL;
  /* 00536b01 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00536b03 lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
L_00536b06:;
  /* 00536b06 mov bl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00536b08 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00536b09 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00536b0b jne 0x536b06 */ if (!ZF_) goto L_00536b06;
  /* 00536b0d sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00536b0f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00536b10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536b11 lea ecx, [esi + 0x1ac] */ ecx = (u32)((u32)(esi + 0x1acu));
  /* 00536b17 call 0x404420 */ esp -= 4; M32(esp) = 0x536b1cu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x536b17u); RETCHK(0x536b1cu, 0x536b17u); LOADALL;
  /* 00536b1c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00536b1d mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 00536b22 call 0x560ed0 */ esp -= 4; M32(esp) = 0x536b27u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x536b22u); RETCHK(0x536b27u, 0x536b22u); LOADALL;
  /* 00536b27 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00536b29 lea edi, [ecx + 1] */ edi = (u32)((u32)(ecx + 0x1u));
  /* 00536b2c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00536b2d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00536b30:;
  /* 00536b30 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00536b32 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00536b33 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00536b35 jne 0x536b30 */ if (!ZF_) goto L_00536b30;
  /* 00536b37 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00536b39 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00536b3a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536b3b lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 00536b3e call 0x404420 */ esp -= 4; M32(esp) = 0x536b43u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x536b3eu); RETCHK(0x536b43u, 0x536b3eu); LOADALL;
  /* 00536b43 call 0x536cf0 */ esp -= 4; M32(esp) = 0x536b48u; SAVEALL; F_00536cf0(c); ABI_CHECK(0x536cf0u, 0x536b43u); RETCHK(0x536b48u, 0x536b43u); LOADALL;
  /* 00536b48 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00536b49 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00536b4b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536b4c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536b4d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00536b50(CPU *c) {
  NATIVE_HOOK(0x536b50u) REGS; LOADALL;
L_00536b50:;
  /* 00536b50 mov eax, dword ptr [ecx + 0x188] */ { const u32 m_ = (u32)(ecx + 0x188u); eax = (u32)(M32(m_)); }
  /* 00536b56 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00536b57 mov edx, eax */ { edx = (u32)(eax); }
  /* 00536b59 mov dword ptr [ecx + 0x188], eax */ { const u32 m_ = (u32)(ecx + 0x188u); M32(m_) = (u32)(eax); }
  /* 00536b5f mov eax, dword ptr [ecx + 0x180] */ { const u32 m_ = (u32)(ecx + 0x180u); eax = (u32)(M32(m_)); }
  /* 00536b65 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00536b67 jge 0x536b7f */ if (!LT_) goto L_00536b7f;
  /* 00536b69 mov dl, byte ptr [ecx + 0x18c] */ { const u32 m_ = (u32)(ecx + 0x18cu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00536b6f test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00536b71 je 0x536b8f */ if (ZF_) goto L_00536b8f;
  /* 00536b73 mov eax, dword ptr [ecx + 0x184] */ { const u32 m_ = (u32)(ecx + 0x184u); eax = (u32)(M32(m_)); }
  /* 00536b79 mov dword ptr [ecx + 0x188], eax */ { const u32 m_ = (u32)(ecx + 0x188u); M32(m_) = (u32)(eax); }
L_00536b7f:;
  /* 00536b7f mov eax, dword ptr [ecx + 0x188] */ { const u32 m_ = (u32)(ecx + 0x188u); eax = (u32)(M32(m_)); }
  /* 00536b85 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00536b87 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536b88 call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536b8eu; SAVEALL; call_ind(c, t_); RETCHK(0x536b8eu, 0x536b88u); LOADALL; }
  /* 00536b8e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00536b8f:;
  /* 00536b8f mov dword ptr [ecx + 0x188], eax */ { const u32 m_ = (u32)(ecx + 0x188u); M32(m_) = (u32)(eax); }
  /* 00536b95 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00536ba0(CPU *c) {
  NATIVE_HOOK(0x536ba0u) REGS; LOADALL;
L_00536ba0:;
  /* 00536ba0 mov eax, dword ptr [ecx + 0x188] */ { const u32 m_ = (u32)(ecx + 0x188u); eax = (u32)(M32(m_)); }
  /* 00536ba6 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00536ba7 mov edx, eax */ { edx = (u32)(eax); }
  /* 00536ba9 mov dword ptr [ecx + 0x188], eax */ { const u32 m_ = (u32)(ecx + 0x188u); M32(m_) = (u32)(eax); }
  /* 00536baf mov eax, dword ptr [ecx + 0x184] */ { const u32 m_ = (u32)(ecx + 0x184u); eax = (u32)(M32(m_)); }
  /* 00536bb5 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00536bb7 jle 0x536bcf */ if ((ZF_|LT_)) goto L_00536bcf;
  /* 00536bb9 mov dl, byte ptr [ecx + 0x18c] */ { const u32 m_ = (u32)(ecx + 0x18cu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00536bbf test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00536bc1 je 0x536bdf */ if (ZF_) goto L_00536bdf;
  /* 00536bc3 mov eax, dword ptr [ecx + 0x180] */ { const u32 m_ = (u32)(ecx + 0x180u); eax = (u32)(M32(m_)); }
  /* 00536bc9 mov dword ptr [ecx + 0x188], eax */ { const u32 m_ = (u32)(ecx + 0x188u); M32(m_) = (u32)(eax); }
L_00536bcf:;
  /* 00536bcf mov eax, dword ptr [ecx + 0x188] */ { const u32 m_ = (u32)(ecx + 0x188u); eax = (u32)(M32(m_)); }
  /* 00536bd5 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00536bd7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536bd8 call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536bdeu; SAVEALL; call_ind(c, t_); RETCHK(0x536bdeu, 0x536bd8u); LOADALL; }
  /* 00536bde ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00536bdf:;
  /* 00536bdf mov dword ptr [ecx + 0x188], eax */ { const u32 m_ = (u32)(ecx + 0x188u); M32(m_) = (u32)(eax); }
  /* 00536be5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00536bf0(CPU *c) {
  NATIVE_HOOK(0x536bf0u) REGS; LOADALL;
L_00536bf0:;
  /* 00536bf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00536bf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00536bf3 mov eax, dword ptr [ecx + 0x180] */ { const u32 m_ = (u32)(ecx + 0x180u); eax = (u32)(M32(m_)); }
  /* 00536bf9 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00536bfc cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00536bfe jge 0x536c13 */ if (!LT_) goto L_00536c13;
L_00536c00:;
  /* 00536c00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536c01 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00536c03 mov dword ptr [ecx + 0x188], eax */ { const u32 m_ = (u32)(ecx + 0x188u); M32(m_) = (u32)(eax); }
  /* 00536c09 call 0x536cf0 */ esp -= 4; M32(esp) = 0x536c0eu; SAVEALL; F_00536cf0(c); ABI_CHECK(0x536cf0u, 0x536c09u); RETCHK(0x536c0eu, 0x536c09u); LOADALL;
  /* 00536c0e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536c0f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536c10 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00536c13:;
  /* 00536c13 mov eax, dword ptr [ecx + 0x184] */ { const u32 m_ = (u32)(ecx + 0x184u); eax = (u32)(M32(m_)); }
  /* 00536c19 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00536c1b jge 0x536c00 */ if (!LT_) goto L_00536c00;
  /* 00536c1d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536c1e mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00536c20 mov dword ptr [ecx + 0x188], edx */ { const u32 m_ = (u32)(ecx + 0x188u); M32(m_) = (u32)(edx); }
  /* 00536c26 call 0x536cf0 */ esp -= 4; M32(esp) = 0x536c2bu; SAVEALL; F_00536cf0(c); ABI_CHECK(0x536cf0u, 0x536c26u); RETCHK(0x536c2bu, 0x536c26u); LOADALL;
  /* 00536c2b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536c2c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536c2d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00536c30(CPU *c) {
  NATIVE_HOOK(0x536c30u) REGS; LOADALL;
L_00536c30:;
  /* 00536c30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00536c31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00536c33 mov edx, dword ptr [ecx + 0x184] */ { const u32 m_ = (u32)(ecx + 0x184u); edx = (u32)(M32(m_)); }
  /* 00536c39 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00536c3c cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00536c3e jle 0x536c61 */ if ((ZF_|LT_)) goto L_00536c61;
  /* 00536c40 mov dword ptr [ecx + 0x184], eax */ { const u32 m_ = (u32)(ecx + 0x184u); M32(m_) = (u32)(eax); }
  /* 00536c46 mov eax, edx */ { eax = (u32)(edx); }
  /* 00536c48 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536c49 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00536c4b mov dword ptr [ecx + 0x180], edx */ { const u32 m_ = (u32)(ecx + 0x180u); M32(m_) = (u32)(edx); }
  /* 00536c51 mov dword ptr [ecx + 0x188], eax */ { const u32 m_ = (u32)(ecx + 0x188u); M32(m_) = (u32)(eax); }
  /* 00536c57 call 0x536cf0 */ esp -= 4; M32(esp) = 0x536c5cu; SAVEALL; F_00536cf0(c); ABI_CHECK(0x536cf0u, 0x536c57u); RETCHK(0x536c5cu, 0x536c57u); LOADALL;
  /* 00536c5c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536c5d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536c5e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00536c61:;
  /* 00536c61 cmp dword ptr [ecx + 0x188], eax */ { const u32 m_ = (u32)(ecx + 0x188u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00536c67 mov dword ptr [ecx + 0x180], eax */ { const u32 m_ = (u32)(ecx + 0x180u); M32(m_) = (u32)(eax); }
  /* 00536c6d jge 0x536c75 */ if (!LT_) goto L_00536c75;
  /* 00536c6f mov dword ptr [ecx + 0x188], eax */ { const u32 m_ = (u32)(ecx + 0x188u); M32(m_) = (u32)(eax); }
L_00536c75:;
  /* 00536c75 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536c76 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00536c78 call 0x536cf0 */ esp -= 4; M32(esp) = 0x536c7du; SAVEALL; F_00536cf0(c); ABI_CHECK(0x536cf0u, 0x536c78u); RETCHK(0x536c7du, 0x536c78u); LOADALL;
  /* 00536c7d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536c7e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536c7f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00536c90(CPU *c) {
  NATIVE_HOOK(0x536c90u) REGS; LOADALL;
L_00536c90:;
  /* 00536c90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00536c91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00536c93 mov edx, dword ptr [ecx + 0x180] */ { const u32 m_ = (u32)(ecx + 0x180u); edx = (u32)(M32(m_)); }
  /* 00536c99 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00536c9c cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00536c9e jge 0x536cc1 */ if (!LT_) goto L_00536cc1;
  /* 00536ca0 mov dword ptr [ecx + 0x180], eax */ { const u32 m_ = (u32)(ecx + 0x180u); M32(m_) = (u32)(eax); }
  /* 00536ca6 mov eax, edx */ { eax = (u32)(edx); }
  /* 00536ca8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536ca9 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00536cab mov dword ptr [ecx + 0x184], edx */ { const u32 m_ = (u32)(ecx + 0x184u); M32(m_) = (u32)(edx); }
  /* 00536cb1 mov dword ptr [ecx + 0x188], eax */ { const u32 m_ = (u32)(ecx + 0x188u); M32(m_) = (u32)(eax); }
  /* 00536cb7 call 0x536cf0 */ esp -= 4; M32(esp) = 0x536cbcu; SAVEALL; F_00536cf0(c); ABI_CHECK(0x536cf0u, 0x536cb7u); RETCHK(0x536cbcu, 0x536cb7u); LOADALL;
  /* 00536cbc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536cbd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536cbe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00536cc1:;
  /* 00536cc1 cmp dword ptr [ecx + 0x188], eax */ { const u32 m_ = (u32)(ecx + 0x188u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00536cc7 mov dword ptr [ecx + 0x184], eax */ { const u32 m_ = (u32)(ecx + 0x184u); M32(m_) = (u32)(eax); }
  /* 00536ccd jle 0x536cd5 */ if ((ZF_|LT_)) goto L_00536cd5;
  /* 00536ccf mov dword ptr [ecx + 0x188], eax */ { const u32 m_ = (u32)(ecx + 0x188u); M32(m_) = (u32)(eax); }
L_00536cd5:;
  /* 00536cd5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536cd6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00536cd8 call 0x536cf0 */ esp -= 4; M32(esp) = 0x536cddu; SAVEALL; F_00536cf0(c); ABI_CHECK(0x536cf0u, 0x536cd8u); RETCHK(0x536cddu, 0x536cd8u); LOADALL;
  /* 00536cdd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536cde pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536cdf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00536cf0(CPU *c) {
  NATIVE_HOOK(0x536cf0u) REGS; LOADALL;
L_00536cf0:;
  /* 00536cf0 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00536cf3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00536cf4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00536cf5 lea eax, [esi + 0x190] */ eax = (u32)((u32)(esi + 0x190u));
  /* 00536cfb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536cfc call 0x5075d0 */ esp -= 4; M32(esp) = 0x536d01u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x536cfcu); RETCHK(0x536d01u, 0x536cfcu); LOADALL;
  /* 00536d01 lea ecx, [esi + 0x1ac] */ ecx = (u32)((u32)(esi + 0x1acu));
  /* 00536d07 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00536d08 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00536d0b mov edi, eax */ { edi = (u32)(eax); }
  /* 00536d0d call 0x5075d0 */ esp -= 4; M32(esp) = 0x536d12u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x536d0du); RETCHK(0x536d12u, 0x536d0du); LOADALL;
  /* 00536d12 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00536d14 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00536d16 je 0x536d4f */ if (ZF_) goto L_00536d4f;
  /* 00536d18 mov al, byte ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00536d1e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00536d20 je 0x536d2d */ if (ZF_) goto L_00536d2d;
  /* 00536d22 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00536d24 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00536d26 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00536d28 call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536d2bu; SAVEALL; call_ind(c, t_); RETCHK(0x536d2bu, 0x536d28u); LOADALL; }
  /* 00536d2b jmp 0x536d4f */ goto L_00536d4f;
L_00536d2d:;
  /* 00536d2d mov ecx, dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); ecx = (u32)(M32(m_)); }
  /* 00536d33 mov eax, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); eax = (u32)(M32(m_)); }
  /* 00536d39 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00536d3b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00536d3d jne 0x536d48 */ if (!ZF_) goto L_00536d48;
  /* 00536d3f mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00536d41 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00536d43 call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536d46u; SAVEALL; call_ind(c, t_); RETCHK(0x536d46u, 0x536d43u); LOADALL; }
  /* 00536d46 jmp 0x536d4f */ goto L_00536d4f;
L_00536d48:;
  /* 00536d48 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00536d4a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00536d4c call dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536d4fu; SAVEALL; call_ind(c, t_); RETCHK(0x536d4fu, 0x536d4cu); LOADALL; }
L_00536d4f:;
  /* 00536d4f test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00536d51 je 0x536d8c */ if (ZF_) goto L_00536d8c;
  /* 00536d53 mov al, byte ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00536d59 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00536d5b je 0x536d69 */ if (ZF_) goto L_00536d69;
  /* 00536d5d mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00536d5f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00536d61 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00536d63 call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536d66u; SAVEALL; call_ind(c, t_); RETCHK(0x536d66u, 0x536d63u); LOADALL; }
  /* 00536d66 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00536d67 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00536d68 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00536d69:;
  /* 00536d69 mov ecx, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); ecx = (u32)(M32(m_)); }
  /* 00536d6f mov eax, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); eax = (u32)(M32(m_)); }
  /* 00536d75 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00536d77 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00536d79 jne 0x536d85 */ if (!ZF_) goto L_00536d85;
  /* 00536d7b mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00536d7d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00536d7f call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536d82u; SAVEALL; call_ind(c, t_); RETCHK(0x536d82u, 0x536d7fu); LOADALL; }
  /* 00536d82 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00536d83 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00536d84 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00536d85:;
  /* 00536d85 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00536d87 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00536d89 call dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536d8cu; SAVEALL; call_ind(c, t_); RETCHK(0x536d8cu, 0x536d89u); LOADALL; }
L_00536d8c:;
  /* 00536d8c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00536d8d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00536d8e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00536d90(CPU *c) {
  NATIVE_HOOK(0x536d90u) REGS; LOADALL;
L_00536d90:;
  /* 00536d90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00536d91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00536d93 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00536d94 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00536d97 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536d98 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00536d99 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00536d9b call 0x507380 */ esp -= 4; M32(esp) = 0x536da0u; SAVEALL; F_00507380(c); ABI_CHECK(0x507380u, 0x536d9bu); RETCHK(0x536da0u, 0x536d9bu); LOADALL;
  /* 00536da0 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00536da2 je 0x536daf */ if (ZF_) goto L_00536daf;
  /* 00536da4 call 0x536cf0 */ esp -= 4; M32(esp) = 0x536da9u; SAVEALL; F_00536cf0(c); ABI_CHECK(0x536cf0u, 0x536da4u); RETCHK(0x536da9u, 0x536da4u); LOADALL;
  /* 00536da9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536daa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00536dab pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536dac ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00536daf:;
  /* 00536daf mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00536db2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00536db3 lea eax, [esi + 0x190] */ eax = (u32)((u32)(esi + 0x190u));
  /* 00536db9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536dba call 0x5075d0 */ esp -= 4; M32(esp) = 0x536dbfu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x536dbau); RETCHK(0x536dbfu, 0x536dbau); LOADALL;
  /* 00536dbf lea ecx, [esi + 0x1ac] */ ecx = (u32)((u32)(esi + 0x1acu));
  /* 00536dc5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00536dc6 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00536dc9 mov edi, eax */ { edi = (u32)(eax); }
  /* 00536dcb call 0x5075d0 */ esp -= 4; M32(esp) = 0x536dd0u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x536dcbu); RETCHK(0x536dd0u, 0x536dcbu); LOADALL;
  /* 00536dd0 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00536dd2 mov esi, eax */ { esi = (u32)(eax); }
  /* 00536dd4 je 0x536ddf */ if (ZF_) goto L_00536ddf;
  /* 00536dd6 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00536dd8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00536dda mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00536ddc call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536ddfu; SAVEALL; call_ind(c, t_); RETCHK(0x536ddfu, 0x536ddcu); LOADALL; }
L_00536ddf:;
  /* 00536ddf test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00536de1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00536de2 je 0x536ded */ if (ZF_) goto L_00536ded;
  /* 00536de4 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00536de6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00536de8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00536dea call dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536dedu; SAVEALL; call_ind(c, t_); RETCHK(0x536dedu, 0x536deau); LOADALL; }
L_00536ded:;
  /* 00536ded pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536dee pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00536def pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536df0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00536e00(CPU *c) {
  NATIVE_HOOK(0x536e00u) REGS; LOADALL;
L_00536e00:;
  /* 00536e00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536e01 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00536e03 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00536e06 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00536e07 lea eax, [esi + 0x190] */ eax = (u32)((u32)(esi + 0x190u));
  /* 00536e0d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536e0e call 0x5075d0 */ esp -= 4; M32(esp) = 0x536e13u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x536e0eu); RETCHK(0x536e13u, 0x536e0eu); LOADALL;
  /* 00536e13 lea ecx, [esi + 0x1ac] */ ecx = (u32)((u32)(esi + 0x1acu));
  /* 00536e19 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00536e1a mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00536e1d mov edi, eax */ { edi = (u32)(eax); }
  /* 00536e1f call 0x5075d0 */ esp -= 4; M32(esp) = 0x536e24u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x536e1fu); RETCHK(0x536e24u, 0x536e1fu); LOADALL;
  /* 00536e24 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00536e26 mov esi, eax */ { esi = (u32)(eax); }
  /* 00536e28 je 0x536e33 */ if (ZF_) goto L_00536e33;
  /* 00536e2a mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00536e2c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00536e2e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00536e30 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536e33u; SAVEALL; call_ind(c, t_); RETCHK(0x536e33u, 0x536e30u); LOADALL; }
L_00536e33:;
  /* 00536e33 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00536e35 je 0x536e40 */ if (ZF_) goto L_00536e40;
  /* 00536e37 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00536e39 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00536e3b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00536e3d call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536e40u; SAVEALL; call_ind(c, t_); RETCHK(0x536e40u, 0x536e3du); LOADALL; }
L_00536e40:;
  /* 00536e40 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00536e41 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536e42 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00536e50(CPU *c) {
  NATIVE_HOOK(0x536e50u) REGS; LOADALL;
L_00536e50:;
  /* 00536e50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536e51 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00536e53 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00536e56 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00536e57 lea eax, [esi + 0x190] */ eax = (u32)((u32)(esi + 0x190u));
  /* 00536e5d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536e5e call 0x5075d0 */ esp -= 4; M32(esp) = 0x536e63u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x536e5eu); RETCHK(0x536e63u, 0x536e5eu); LOADALL;
  /* 00536e63 lea ecx, [esi + 0x1ac] */ ecx = (u32)((u32)(esi + 0x1acu));
  /* 00536e69 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00536e6a mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00536e6d mov edi, eax */ { edi = (u32)(eax); }
  /* 00536e6f call 0x5075d0 */ esp -= 4; M32(esp) = 0x536e74u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x536e6fu); RETCHK(0x536e74u, 0x536e6fu); LOADALL;
  /* 00536e74 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00536e76 mov esi, eax */ { esi = (u32)(eax); }
  /* 00536e78 je 0x536e83 */ if (ZF_) goto L_00536e83;
  /* 00536e7a mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00536e7c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00536e7e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00536e80 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536e83u; SAVEALL; call_ind(c, t_); RETCHK(0x536e83u, 0x536e80u); LOADALL; }
L_00536e83:;
  /* 00536e83 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00536e85 je 0x536e90 */ if (ZF_) goto L_00536e90;
  /* 00536e87 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00536e89 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00536e8b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00536e8d call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536e90u; SAVEALL; call_ind(c, t_); RETCHK(0x536e90u, 0x536e8du); LOADALL; }
L_00536e90:;
  /* 00536e90 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00536e91 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536e92 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00536ea0(CPU *c) {
  NATIVE_HOOK(0x536ea0u) REGS; LOADALL;
L_00536ea0:;
  /* 00536ea0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536ea1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00536ea3 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00536ea5 call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536ea8u; SAVEALL; call_ind(c, t_); RETCHK(0x536ea8u, 0x536ea5u); LOADALL; }
  /* 00536ea8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00536eaa je 0x536eea */ if (ZF_) goto L_00536eea;
  /* 00536eac mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00536eae mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00536eb0 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536eb3u; SAVEALL; call_ind(c, t_); RETCHK(0x536eb3u, 0x536eb0u); LOADALL; }
  /* 00536eb3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00536eb5 je 0x536eea */ if (ZF_) goto L_00536eea;
  /* 00536eb7 call 0x5084b0 */ esp -= 4; M32(esp) = 0x536ebcu; SAVEALL; F_005084b0(c); ABI_CHECK(0x5084b0u, 0x536eb7u); RETCHK(0x536ebcu, 0x536eb7u); LOADALL;
  /* 00536ebc test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00536ebe je 0x536eea */ if (ZF_) goto L_00536eea;
  /* 00536ec0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536ec1 call 0x508500 */ esp -= 4; M32(esp) = 0x536ec6u; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x536ec1u); RETCHK(0x536ec6u, 0x536ec1u); LOADALL;
  /* 00536ec6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00536ec8 je 0x536ece */ if (ZF_) goto L_00536ece;
  /* 00536eca mov eax, esi */ { eax = (u32)(esi); }
  /* 00536ecc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536ecd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00536ece:;
  /* 00536ece push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00536ecf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00536ed1 call 0x507ac0 */ esp -= 4; M32(esp) = 0x536ed6u; SAVEALL; F_00507ac0(c); ABI_CHECK(0x507ac0u, 0x536ed1u); RETCHK(0x536ed6u, 0x536ed1u); LOADALL;
  /* 00536ed6 call 0x518bb0 */ esp -= 4; M32(esp) = 0x536edbu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x536ed6u); RETCHK(0x536edbu, 0x536ed6u); LOADALL;
  /* 00536edb call 0x5180e0 */ esp -= 4; M32(esp) = 0x536ee0u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x536edbu); RETCHK(0x536ee0u, 0x536edbu); LOADALL;
  /* 00536ee0 mov edi, eax */ { edi = (u32)(eax); }
  /* 00536ee2 call 0x508d30 */ esp -= 4; M32(esp) = 0x536ee7u; SAVEALL; F_00508d30(c); ABI_CHECK(0x508d30u, 0x536ee2u); RETCHK(0x536ee7u, 0x536ee2u); LOADALL;
  /* 00536ee7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00536ee8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536ee9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00536eea:;
  /* 00536eea xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00536eec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536eed ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00536ef0(CPU *c) {
  NATIVE_HOOK(0x536ef0u) REGS; LOADALL;
L_00536ef0:;
  /* 00536ef0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00536ef1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00536ef3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00536ef5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536ef6 jmp dword ptr [eax + 0x6c] */ { const u32 m_ = (u32)(eax + 0x6cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00536f00(CPU *c) {
  NATIVE_HOOK(0x536f00u) REGS; LOADALL;
L_00536f00:;
  /* 00536f00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00536f01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00536f03 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00536f06 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00536f07 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00536f0a mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00536f0c sub eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00536f0f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00536f10 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00536f11 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00536f13 jne 0x536fd2 */ if (!ZF_) goto L_00536fd2;
  /* 00536f19 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00536f1c cmp eax, 0x25 */ { u32 a_ = eax, b_ = 0x25u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00536f1f jne 0x536f79 */ if (!ZF_) goto L_00536f79;
  /* 00536f21 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00536f24 lea eax, [esi + 0x190] */ eax = (u32)((u32)(esi + 0x190u));
  /* 00536f2a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536f2b call 0x5075d0 */ esp -= 4; M32(esp) = 0x536f30u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x536f2bu); RETCHK(0x536f30u, 0x536f2bu); LOADALL;
  /* 00536f30 mov edi, eax */ { edi = (u32)(eax); }
  /* 00536f32 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00536f34 je 0x536fd2 */ if (ZF_) goto L_00536fd2;
  /* 00536f3a mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00536f3c lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00536f3f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536f40 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00536f42 call dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536f45u; SAVEALL; call_ind(c, t_); RETCHK(0x536f45u, 0x536f42u); LOADALL; }
  /* 00536f45 mov eax, edi */ { eax = (u32)(edi); }
  /* 00536f47 call 0x507890 */ esp -= 4; M32(esp) = 0x536f4cu; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x536f47u); RETCHK(0x536f4cu, 0x536f47u); LOADALL;
  /* 00536f4c lea edi, [ebp - 8] */ edi = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00536f4f mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00536f51 call 0x52cf40 */ esp -= 4; M32(esp) = 0x536f56u; SAVEALL; F_0052cf40(c); ABI_CHECK(0x52cf40u, 0x536f51u); RETCHK(0x536f56u, 0x536f51u); LOADALL;
  /* 00536f56 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00536f58 mov eax, edi */ { eax = (u32)(edi); }
  /* 00536f5a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536f5b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00536f5d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00536f5f call dword ptr [edx + 0x6c] */ { const u32 m_ = (u32)(edx + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536f62u; SAVEALL; call_ind(c, t_); RETCHK(0x536f62u, 0x536f5fu); LOADALL; }
  /* 00536f62 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00536f64 mov eax, edi */ { eax = (u32)(edi); }
  /* 00536f66 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536f67 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00536f69 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00536f6b call dword ptr [edx + 0x70] */ { const u32 m_ = (u32)(edx + 0x70u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536f6eu; SAVEALL; call_ind(c, t_); RETCHK(0x536f6eu, 0x536f6bu); LOADALL; }
  /* 00536f6e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00536f6f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536f70 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00536f72 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00536f73 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00536f75 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536f76 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00536f79:;
  /* 00536f79 cmp eax, 0x27 */ { u32 a_ = eax, b_ = 0x27u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00536f7c jne 0x536fd2 */ if (!ZF_) goto L_00536fd2;
  /* 00536f7e lea ecx, [esi + 0x1ac] */ ecx = (u32)((u32)(esi + 0x1acu));
  /* 00536f84 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00536f85 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00536f88 call 0x5075d0 */ esp -= 4; M32(esp) = 0x536f8du; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x536f88u); RETCHK(0x536f8du, 0x536f88u); LOADALL;
  /* 00536f8d mov edi, eax */ { edi = (u32)(eax); }
  /* 00536f8f test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00536f91 je 0x536fd2 */ if (ZF_) goto L_00536fd2;
  /* 00536f93 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00536f95 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00536f98 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536f99 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00536f9b call dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536f9eu; SAVEALL; call_ind(c, t_); RETCHK(0x536f9eu, 0x536f9bu); LOADALL; }
  /* 00536f9e mov eax, edi */ { eax = (u32)(edi); }
  /* 00536fa0 call 0x507890 */ esp -= 4; M32(esp) = 0x536fa5u; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x536fa0u); RETCHK(0x536fa5u, 0x536fa0u); LOADALL;
  /* 00536fa5 lea edi, [ebp - 8] */ edi = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00536fa8 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00536faa call 0x52cf40 */ esp -= 4; M32(esp) = 0x536fafu; SAVEALL; F_0052cf40(c); ABI_CHECK(0x52cf40u, 0x536faau); RETCHK(0x536fafu, 0x536faau); LOADALL;
  /* 00536faf mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00536fb1 mov eax, edi */ { eax = (u32)(edi); }
  /* 00536fb3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536fb4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00536fb6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00536fb8 call dword ptr [edx + 0x6c] */ { const u32 m_ = (u32)(edx + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536fbbu; SAVEALL; call_ind(c, t_); RETCHK(0x536fbbu, 0x536fb8u); LOADALL; }
  /* 00536fbb mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00536fbd mov eax, edi */ { eax = (u32)(edi); }
  /* 00536fbf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00536fc0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00536fc2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00536fc4 call dword ptr [edx + 0x70] */ { const u32 m_ = (u32)(edx + 0x70u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x536fc7u; SAVEALL; call_ind(c, t_); RETCHK(0x536fc7u, 0x536fc4u); LOADALL; }
  /* 00536fc7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00536fc8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536fc9 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00536fcb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00536fcc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00536fce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536fcf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00536fd2:;
  /* 00536fd2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00536fd3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00536fd5 call 0x507c50 */ esp -= 4; M32(esp) = 0x536fdau; SAVEALL; F_00507c50(c); ABI_CHECK(0x507c50u, 0x536fd5u); RETCHK(0x536fdau, 0x536fd5u); LOADALL;
  /* 00536fda pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00536fdb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00536fdc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00536fdd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00536fdf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00536fe0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00536ff0(CPU *c) {
  NATIVE_HOOK(0x536ff0u) REGS; LOADALL;
L_00536ff0:;
  /* 00536ff0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00536ff1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00536ff3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00536ff5 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 00536ffa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00537000 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537001 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00537008 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537009 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053700a push 0x537170 */ { u32 v_ = 0x537170u; esp -= 4; M32(esp) = v_; }
  /* 0053700f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00537012 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00537014 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00537016 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00537019 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0053701c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053701e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053701f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00537022 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00537029 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0053702c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053702d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00537030 call 0x404140 */ esp -= 4; M32(esp) = 0x537035u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x537030u); RETCHK(0x537035u, 0x537030u); LOADALL;
  /* 00537035 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00537038 call 0x405c00 */ esp -= 4; M32(esp) = 0x53703du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x537038u); RETCHK(0x53703du, 0x537038u); LOADALL;
  /* 0053703d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0053703f call 0x405c80 */ esp -= 4; M32(esp) = 0x537044u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x53703fu); RETCHK(0x537044u, 0x53703fu); LOADALL;
  /* 00537044 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537048 jb 0x537056 */ if (CF_) goto L_00537056;
  /* 0053704a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053704d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053704e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x537053u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53704eu); RETCHK(0x537053u, 0x53704eu); LOADALL;
  /* 00537053 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00537056:;
  /* 00537056 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00537059 mov eax, esi */ { eax = (u32)(esi); }
  /* 0053705b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00537062 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00537063 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00537065 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00537066 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00537070(CPU *c) {
  NATIVE_HOOK(0x537070u) REGS; LOADALL;
L_00537070:;
  /* 00537070 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00537071 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00537073 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00537075 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0053707a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00537080 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537081 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00537088 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537089 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053708a push 0x5371e0 */ { u32 v_ = 0x5371e0u; esp -= 4; M32(esp) = v_; }
  /* 0053708f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00537092 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00537094 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00537096 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00537099 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0053709c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053709e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053709f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 005370a2 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 005370a9 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 005370ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005370ad mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005370b0 call 0x404140 */ esp -= 4; M32(esp) = 0x5370b5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5370b0u); RETCHK(0x5370b5u, 0x5370b0u); LOADALL;
  /* 005370b5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005370b8 call 0x405c00 */ esp -= 4; M32(esp) = 0x5370bdu; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x5370b8u); RETCHK(0x5370bdu, 0x5370b8u); LOADALL;
  /* 005370bd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005370bf call 0x405c80 */ esp -= 4; M32(esp) = 0x5370c4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x5370bfu); RETCHK(0x5370c4u, 0x5370bfu); LOADALL;
  /* 005370c4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005370c8 jb 0x5370d6 */ if (CF_) goto L_005370d6;
  /* 005370ca mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005370cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005370ce call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5370d3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5370ceu); RETCHK(0x5370d3u, 0x5370ceu); LOADALL;
  /* 005370d3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005370d6:;
  /* 005370d6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005370d9 mov eax, esi */ { eax = (u32)(esi); }
  /* 005370db mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005370e2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005370e3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005370e5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005370e6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_005370f0(CPU *c) {
  NATIVE_HOOK(0x5370f0u) REGS; LOADALL;
L_005370f0:;
  /* 005370f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005370f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005370f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005370f5 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 005370fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00537100 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537101 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00537108 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537109 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053710a push 0x537250 */ { u32 v_ = 0x537250u; esp -= 4; M32(esp) = v_; }
  /* 0053710f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00537112 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00537114 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00537116 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00537119 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0053711c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053711e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053711f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00537122 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00537129 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0053712c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053712d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00537130 call 0x404140 */ esp -= 4; M32(esp) = 0x537135u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x537130u); RETCHK(0x537135u, 0x537130u); LOADALL;
  /* 00537135 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00537138 call 0x405c00 */ esp -= 4; M32(esp) = 0x53713du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x537138u); RETCHK(0x53713du, 0x537138u); LOADALL;
  /* 0053713d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0053713f call 0x405c80 */ esp -= 4; M32(esp) = 0x537144u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x53713fu); RETCHK(0x537144u, 0x53713fu); LOADALL;
  /* 00537144 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537148 jb 0x537156 */ if (CF_) goto L_00537156;
  /* 0053714a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053714d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053714e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x537153u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53714eu); RETCHK(0x537153u, 0x53714eu); LOADALL;
  /* 00537153 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00537156:;
  /* 00537156 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00537159 mov eax, esi */ { eax = (u32)(esi); }
  /* 0053715b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00537162 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00537163 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00537165 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00537166 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00537170(CPU *c) {
  NATIVE_HOOK(0x537170u) REGS; LOADALL;
L_00537170:;
  /* 00537170 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00537171 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00537173 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00537175 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0053717a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00537180 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537181 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00537188 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537189 push 0x1c8 */ { u32 v_ = 0x1c8u; esp -= 4; M32(esp) = v_; }
  /* 0053718e call 0x5fe934 */ esp -= 4; M32(esp) = 0x537193u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53718eu); RETCHK(0x537193u, 0x53718eu); LOADALL;
  /* 00537193 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00537196 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00537199 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053719b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005371a2 je 0x5371c4 */ if (ZF_) goto L_005371c4;
  /* 005371a4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005371a5 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005371a7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005371a9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005371ab push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005371ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005371ae xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005371b0 call 0x536810 */ esp -= 4; M32(esp) = 0x5371b5u; SAVEALL; F_00536810(c); ABI_CHECK(0x536810u, 0x5371b0u); RETCHK(0x5371b5u, 0x5371b0u); LOADALL;
  /* 005371b5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005371b6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005371b9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005371c0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005371c2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005371c3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005371c4:;
  /* 005371c4 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005371c7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005371c9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005371d0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005371d2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005371d3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005371e0(CPU *c) {
  NATIVE_HOOK(0x5371e0u) REGS; LOADALL;
L_005371e0:;
  /* 005371e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005371e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005371e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005371e5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 005371ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005371f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005371f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005371f8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005371f9 push 0x1f8 */ { u32 v_ = 0x1f8u; esp -= 4; M32(esp) = v_; }
  /* 005371fe call 0x5fe934 */ esp -= 4; M32(esp) = 0x537203u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5371feu); RETCHK(0x537203u, 0x5371feu); LOADALL;
  /* 00537203 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00537206 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00537209 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053720b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00537212 je 0x537234 */ if (ZF_) goto L_00537234;
  /* 00537214 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00537215 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00537217 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00537219 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053721a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0053721c xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0053721e xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00537220 call 0x5372c0 */ esp -= 4; M32(esp) = 0x537225u; SAVEALL; F_005372c0(c); ABI_CHECK(0x5372c0u, 0x537220u); RETCHK(0x537225u, 0x537220u); LOADALL;
  /* 00537225 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00537226 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00537229 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00537230 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00537232 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00537233 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00537234:;
  /* 00537234 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00537237 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00537239 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00537240 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00537242 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00537243 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00537250(CPU *c) {
  NATIVE_HOOK(0x537250u) REGS; LOADALL;
L_00537250:;
  /* 00537250 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00537251 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00537253 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00537255 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0053725a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00537260 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537261 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00537268 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537269 push 0x1f8 */ { u32 v_ = 0x1f8u; esp -= 4; M32(esp) = v_; }
  /* 0053726e call 0x5fe934 */ esp -= 4; M32(esp) = 0x537273u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53726eu); RETCHK(0x537273u, 0x53726eu); LOADALL;
  /* 00537273 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00537276 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00537279 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053727b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00537282 je 0x5372a4 */ if (ZF_) goto L_005372a4;
  /* 00537284 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00537285 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00537287 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00537289 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053728a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0053728c xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0053728e xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00537290 call 0x5377f0 */ esp -= 4; M32(esp) = 0x537295u; SAVEALL; F_005377f0(c); ABI_CHECK(0x5377f0u, 0x537290u); RETCHK(0x537295u, 0x537290u); LOADALL;
  /* 00537295 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00537296 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00537299 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005372a0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005372a2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005372a3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005372a4:;
  /* 005372a4 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005372a7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005372a9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005372b0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005372b2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005372b3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005372c0(CPU *c) {
  NATIVE_HOOK(0x5372c0u) REGS; LOADALL;
L_005372c0:;
  /* 005372c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005372c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005372c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005372c5 push 0x61ffdc */ { u32 v_ = 0x61ffdcu; esp -= 4; M32(esp) = v_; }
  /* 005372ca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005372d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005372d1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005372d8 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005372db mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005372e0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005372e1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005372e2 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005372e5 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005372e8 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005372eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005372ec mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005372ef push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005372f0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005372f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005372f2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005372f3 call 0x536810 */ esp -= 4; M32(esp) = 0x5372f8u; SAVEALL; F_00536810(c); ABI_CHECK(0x536810u, 0x5372f3u); RETCHK(0x5372f8u, 0x5372f3u); LOADALL;
  /* 005372f8 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005372fa mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005372fd mov dword ptr [esi], 0x653b70 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x653b70u); }
  /* 00537303 mov dword ptr [esi + 0x1e0], 0xf */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(0xfu); }
  /* 0053730d mov dword ptr [esi + 0x1dc], ebx */ { const u32 m_ = (u32)(esi + 0x1dcu); M32(m_) = (u32)(ebx); }
  /* 00537313 mov byte ptr [esi + 0x1cc], bl */ { const u32 m_ = (u32)(esi + 0x1ccu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00537319 mov dword ptr [esi + 0x1e8], ebx */ { const u32 m_ = (u32)(esi + 0x1e8u); M32(m_) = (u32)(ebx); }
  /* 0053731f mov dword ptr [esi + 0x1ec], ebx */ { const u32 m_ = (u32)(esi + 0x1ecu); M32(m_) = (u32)(ebx); }
  /* 00537325 mov dword ptr [esi + 0x1f0], ebx */ { const u32 m_ = (u32)(esi + 0x1f0u); M32(m_) = (u32)(ebx); }
  /* 0053732b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053732e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053732f mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00537333 call 0x5369e0 */ esp -= 4; M32(esp) = 0x537338u; SAVEALL; F_005369e0(c); ABI_CHECK(0x5369e0u, 0x537333u); RETCHK(0x537338u, 0x537333u); LOADALL;
  /* 00537338 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053733a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053733b lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053733e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053733f lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00537342 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 00537346 call 0x404140 */ esp -= 4; M32(esp) = 0x53734bu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x537346u); RETCHK(0x53734bu, 0x537346u); LOADALL;
  /* 0053734b cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053734f jb 0x53735d */ if (CF_) goto L_0053735d;
  /* 00537351 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00537354 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537355 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53735au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x537355u); RETCHK(0x53735au, 0x537355u); LOADALL;
  /* 0053735a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053735d:;
  /* 0053735d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00537360 mov eax, esi */ { eax = (u32)(esi); }
  /* 00537362 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00537363 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0053736a mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0053736d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053736e call 0x61af31 */ esp -= 4; M32(esp) = 0x537373u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x53736eu); RETCHK(0x537373u, 0x53736eu); LOADALL;
  /* 00537373 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00537375 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00537376 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00537380(CPU *c) {
  NATIVE_HOOK(0x537380u) REGS; LOADALL;
L_00537380:;
  /* 00537380 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00537381 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00537383 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00537385 push 0x61d950 */ { u32 v_ = 0x61d950u; esp -= 4; M32(esp) = v_; }
  /* 0053738a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00537390 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537391 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00537398 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053739b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005373a0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005373a1 mov dword ptr [ebp - 0x34], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ecx); }
  /* 005373a4 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005373a7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005373a8 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005373ab mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005373ad push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005373ae call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5373b1u; SAVEALL; call_ind(c, t_); RETCHK(0x5373b1u, 0x5373aeu); LOADALL; }
  /* 005373b1 mov esi, eax */ { esi = (u32)(eax); }
  /* 005373b3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005373b4 mov eax, 0x653e60 */ { eax = (u32)(0x653e60u); }
  /* 005373b9 call 0x560ed0 */ esp -= 4; M32(esp) = 0x5373beu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5373b9u); RETCHK(0x5373beu, 0x5373b9u); LOADALL;
  /* 005373be mov edi, eax */ { edi = (u32)(eax); }
  /* 005373c0 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005373c2 lea eax, [ecx + 1] */ eax = (u32)((u32)(ecx + 0x1u));
  /* 005373c5 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_005373c7:;
  /* 005373c7 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005373c9 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005373ca cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005373cc jne 0x5373c7 */ if (!ZF_) goto L_005373c7;
  /* 005373ce sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005373d0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005373d1 mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 005373d4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005373d5 add ecx, 0x1c8 */ { u32 a_ = ecx, b_ = 0x1c8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005373db call 0x404420 */ esp -= 4; M32(esp) = 0x5373e0u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5373dbu); RETCHK(0x5373e0u, 0x5373dbu); LOADALL;
  /* 005373e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005373e1 mov eax, 0x653e58 */ { eax = (u32)(0x653e58u); }
  /* 005373e6 call 0x560ed0 */ esp -= 4; M32(esp) = 0x5373ebu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5373e6u); RETCHK(0x5373ebu, 0x5373e6u); LOADALL;
  /* 005373eb mov esi, eax */ { esi = (u32)(eax); }
  /* 005373ed mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005373ef mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 005373f6 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 005373f9 mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005373fc lea edi, [ecx + 1] */ edi = (u32)((u32)(ecx + 0x1u));
  /* 005373ff nop */ ;
L_00537400:;
  /* 00537400 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00537402 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00537403 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00537405 jne 0x537400 */ if (!ZF_) goto L_00537400;
  /* 00537407 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00537409 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053740a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053740b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053740e call 0x404420 */ esp -= 4; M32(esp) = 0x537413u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53740eu); RETCHK(0x537413u, 0x53740eu); LOADALL;
  /* 00537413 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00537415 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00537418 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537419 lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053741c mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0053741f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00537420 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00537422 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00537424 mov byte ptr [ebp - 0x30], 0x7c */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M8(m_) = (u8)(0x7cu); }
  /* 00537428 call 0x40a4a0 */ esp -= 4; M32(esp) = 0x53742du; SAVEALL; F_0040a4a0(c); ABI_CHECK(0x40a4a0u, 0x537428u); RETCHK(0x53742du, 0x537428u); LOADALL;
  /* 0053742d mov edi, eax */ { edi = (u32)(eax); }
  /* 0053742f cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537432 je 0x537499 */ if (ZF_) goto L_00537499;
L_00537434:;
  /* 00537434 mov eax, edi */ { eax = (u32)(edi); }
  /* 00537436 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00537438 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053743a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053743b lea esi, [ebp - 0x50] */ esi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0053743e lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00537441 call 0x40c990 */ esp -= 4; M32(esp) = 0x537446u; SAVEALL; F_0040c990(c); ABI_CHECK(0x40c990u, 0x537441u); RETCHK(0x537446u, 0x537441u); LOADALL;
  /* 00537446 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537447 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 0053744a add eax, 0x1e4 */ { u32 a_ = eax, b_ = 0x1e4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0053744f mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00537453 call 0x4030f0 */ esp -= 4; M32(esp) = 0x537458u; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x537453u); RETCHK(0x537458u, 0x537453u); LOADALL;
  /* 00537458 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053745b cmp dword ptr [ebp - 0x38], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053745f jb 0x53746d */ if (CF_) goto L_0053746d;
  /* 00537461 mov ecx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (u32)(M32(m_)); }
  /* 00537464 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537465 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53746au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x537465u); RETCHK(0x53746au, 0x537465u); LOADALL;
  /* 0053746a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053746d:;
  /* 0053746d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053746f lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00537472 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00537473 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00537476 lea esi, [edi + 1] */ esi = (u32)((u32)(edi + 0x1u));
  /* 00537479 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053747a mov eax, esi */ { eax = (u32)(esi); }
  /* 0053747c mov dword ptr [ebp - 0x38], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0xfu); }
  /* 00537483 mov dword ptr [ebp - 0x3c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(ebx); }
  /* 00537486 mov byte ptr [ebp - 0x4c], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00537489 mov byte ptr [ebp - 0x30], 0x7c */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M8(m_) = (u8)(0x7cu); }
  /* 0053748d call 0x40a4a0 */ esp -= 4; M32(esp) = 0x537492u; SAVEALL; F_0040a4a0(c); ABI_CHECK(0x40a4a0u, 0x53748du); RETCHK(0x537492u, 0x53748du); LOADALL;
  /* 00537492 mov edi, eax */ { edi = (u32)(eax); }
  /* 00537494 cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537497 jne 0x537434 */ if (!ZF_) goto L_00537434;
L_00537499:;
  /* 00537499 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053749c mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0053749f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005374a0 mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 005374a3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005374a4 call 0x536a30 */ esp -= 4; M32(esp) = 0x5374a9u; SAVEALL; F_00536a30(c); ABI_CHECK(0x536a30u, 0x5374a4u); RETCHK(0x5374a9u, 0x5374a4u); LOADALL;
  /* 005374a9 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 005374ab cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005374af jb 0x5374bd */ if (CF_) goto L_005374bd;
  /* 005374b1 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 005374b4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005374b5 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5374bau; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5374b5u); RETCHK(0x5374bau, 0x5374b5u); LOADALL;
  /* 005374ba add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005374bd:;
  /* 005374bd mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005374c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005374c1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005374c2 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005374c9 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005374cc mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 005374ce pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005374cf call 0x61af31 */ esp -= 4; M32(esp) = 0x5374d4u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x5374cfu); RETCHK(0x5374d4u, 0x5374cfu); LOADALL;
  /* 005374d4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005374d6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005374d7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005374e0(CPU *c) {
  NATIVE_HOOK(0x5374e0u) REGS; LOADALL;
L_005374e0:;
  /* 005374e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005374e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005374e3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005374e6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005374e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005374e8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005374ea call 0x536bf0 */ esp -= 4; M32(esp) = 0x5374efu; SAVEALL; F_00536bf0(c); ABI_CHECK(0x536bf0u, 0x5374eau); RETCHK(0x5374efu, 0x5374eau); LOADALL;
  /* 005374ef lea ecx, [esi + 0x1c8] */ ecx = (u32)((u32)(esi + 0x1c8u));
  /* 005374f5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005374f6 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005374f9 call 0x5075d0 */ esp -= 4; M32(esp) = 0x5374feu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x5374f9u); RETCHK(0x5374feu, 0x5374f9u); LOADALL;
  /* 005374fe mov ecx, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); ecx = (u32)(M32(m_)); }
  /* 00537504 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00537507 cmp ecx, dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053750d jl 0x537599 */ if (LT_) goto L_00537599;
  /* 00537513 cmp ecx, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537519 jg 0x537599 */ if (!(ZF_|LT_)) goto L_00537599;
  /* 0053751b mov eax, dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 00537521 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00537523 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537524 lea ebx, [esi + 0x1e4] */ ebx = (u32)((u32)(esi + 0x1e4u));
  /* 0053752a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053752b je 0x537545 */ if (ZF_) goto L_00537545;
  /* 0053752d mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 00537530 sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00537532 mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 00537537 imul edi */ { s64 p_ = (s64)(s32)eax * (s32)edi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00537539 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0053753b sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0053753e mov eax, edx */ { eax = (u32)(edx); }
  /* 00537540 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00537543 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00537545:;
  /* 00537545 mov edi, dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); edi = (u32)(M32(m_)); }
  /* 0053754b sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0053754d cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053754f jge 0x537597 */ if (!LT_) goto L_00537597;
  /* 00537551 mov eax, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); eax = (u32)(M32(m_)); }
  /* 00537557 mov edx, edi */ { edx = (u32)(edi); }
  /* 00537559 mov edi, eax */ { edi = (u32)(eax); }
  /* 0053755b sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0053755d imul eax, eax, 0x1c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x1cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00537560 sub edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00537562 mov edx, dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); edx = (u32)(M32(m_)); }
  /* 00537568 mov ecx, dword ptr [eax + edx + 0x18] */ { const u32 m_ = (u32)(eax + edx + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0053756c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0053756e cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537571 jb 0x537578 */ if (CF_) goto L_00537578;
  /* 00537573 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 00537576 jmp 0x53757b */ goto L_0053757b;
L_00537578:;
  /* 00537578 lea esi, [eax + 4] */ esi = (u32)((u32)(eax + 0x4u));
L_0053757b:;
  /* 0053757b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053757d je 0x537597 */ if (ZF_) goto L_00537597;
  /* 0053757f test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00537581 jl 0x537597 */ if (LT_) goto L_00537597;
  /* 00537583 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00537585 call 0x4030c0 */ esp -= 4; M32(esp) = 0x53758au; SAVEALL; F_004030c0(c); ABI_CHECK(0x4030c0u, 0x537585u); RETCHK(0x53758au, 0x537585u); LOADALL;
  /* 0053758a cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053758c jge 0x537597 */ if (!LT_) goto L_00537597;
  /* 0053758e mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00537591 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537592 call 0x50dc70 */ esp -= 4; M32(esp) = 0x537597u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x537592u); RETCHK(0x537597u, 0x537592u); LOADALL;
L_00537597:;
  /* 00537597 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00537598 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00537599:;
  /* 00537599 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053759a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053759b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005375a0(CPU *c) {
  NATIVE_HOOK(0x5375a0u) REGS; LOADALL;
L_005375a0:;
  /* 005375a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005375a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005375a3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005375a6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005375a7 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005375a9 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005375ab call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5375aeu; SAVEALL; call_ind(c, t_); RETCHK(0x5375aeu, 0x5375abu); LOADALL; }
  /* 005375ae test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005375b0 je 0x53769a */ if (ZF_) goto L_0053769a;
  /* 005375b6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005375b7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005375b8 lea ecx, [edi + 0x190] */ ecx = (u32)((u32)(edi + 0x190u));
  /* 005375be push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005375bf mov ecx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005375c2 call 0x5075d0 */ esp -= 4; M32(esp) = 0x5375c7u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x5375c2u); RETCHK(0x5375c7u, 0x5375c2u); LOADALL;
  /* 005375c7 mov ecx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005375ca lea edx, [edi + 0x1ac] */ edx = (u32)((u32)(edi + 0x1acu));
  /* 005375d0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005375d1 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005375d3 call 0x5075d0 */ esp -= 4; M32(esp) = 0x5375d8u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x5375d3u); RETCHK(0x5375d8u, 0x5375d3u); LOADALL;
  /* 005375d8 mov ecx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005375db mov esi, eax */ { esi = (u32)(eax); }
  /* 005375dd lea eax, [edi + 0x1c8] */ eax = (u32)((u32)(edi + 0x1c8u));
  /* 005375e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005375e4 call 0x5075d0 */ esp -= 4; M32(esp) = 0x5375e9u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x5375e4u); RETCHK(0x5375e9u, 0x5375e4u); LOADALL;
  /* 005375e9 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005375ec call 0x518bb0 */ esp -= 4; M32(esp) = 0x5375f1u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x5375ecu); RETCHK(0x5375f1u, 0x5375ecu); LOADALL;
  /* 005375f1 call 0x5180e0 */ esp -= 4; M32(esp) = 0x5375f6u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x5375f1u); RETCHK(0x5375f6u, 0x5375f1u); LOADALL;
  /* 005375f6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005375f8 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005375fb je 0x537698 */ if (ZF_) goto L_00537698;
  /* 00537601 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00537603 call 0x508d10 */ esp -= 4; M32(esp) = 0x537608u; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x537603u); RETCHK(0x537608u, 0x537603u); LOADALL;
  /* 00537608 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0053760a mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0053760d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00537610 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537611 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00537613 call dword ptr [edx + 0x58] */ { const u32 m_ = (u32)(edx + 0x58u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537616u; SAVEALL; call_ind(c, t_); RETCHK(0x537616u, 0x537613u); LOADALL; }
  /* 00537616 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00537618 je 0x537628 */ if (ZF_) goto L_00537628;
  /* 0053761a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0053761d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00537620 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00537622 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537623 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537624 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00537626 jmp 0x53768a */ goto L_0053768a;
L_00537628:;
  /* 00537628 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0053762b mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0053762d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053762e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00537630 call dword ptr [edx + 0x58] */ { const u32 m_ = (u32)(edx + 0x58u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537633u; SAVEALL; call_ind(c, t_); RETCHK(0x537633u, 0x537630u); LOADALL; }
  /* 00537633 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00537635 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537636 je 0x537657 */ if (ZF_) goto L_00537657;
  /* 00537638 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0053763b mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0053763d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053763e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00537640 call dword ptr [eax + 0x6c] */ { const u32 m_ = (u32)(eax + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537643u; SAVEALL; call_ind(c, t_); RETCHK(0x537643u, 0x537640u); LOADALL; }
  /* 00537643 mov esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); esi = (u32)(M32(m_)); }
  /* 00537646 mov edi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edi = (u32)(M32(m_)); }
  /* 00537649 call 0x508d30 */ esp -= 4; M32(esp) = 0x53764eu; SAVEALL; F_00508d30(c); ABI_CHECK(0x508d30u, 0x537649u); RETCHK(0x53764eu, 0x537649u); LOADALL;
  /* 0053764e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053764f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00537650 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00537651 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00537653 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00537654 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00537657:;
  /* 00537657 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0053765a mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053765c call dword ptr [edx + 0x58] */ { const u32 m_ = (u32)(edx + 0x58u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53765fu; SAVEALL; call_ind(c, t_); RETCHK(0x53765fu, 0x53765cu); LOADALL; }
  /* 0053765f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00537661 je 0x53768d */ if (ZF_) goto L_0053768d;
  /* 00537663 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00537665 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00537668 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537669 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053766b call dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53766eu; SAVEALL; call_ind(c, t_); RETCHK(0x53766eu, 0x53766bu); LOADALL; }
  /* 0053766e mov eax, edi */ { eax = (u32)(edi); }
  /* 00537670 call 0x507890 */ esp -= 4; M32(esp) = 0x537675u; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x537670u); RETCHK(0x537675u, 0x537670u); LOADALL;
  /* 00537675 lea edi, [ebp - 8] */ edi = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00537678 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053767a call 0x52cf40 */ esp -= 4; M32(esp) = 0x53767fu; SAVEALL; F_0052cf40(c); ABI_CHECK(0x52cf40u, 0x53767au); RETCHK(0x53767fu, 0x53767au); LOADALL;
  /* 0053767f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00537682 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00537684 mov eax, edi */ { eax = (u32)(edi); }
  /* 00537686 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537687 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537688 mov ecx, esi */ { ecx = (u32)(esi); }
L_0053768a:;
  /* 0053768a call dword ptr [edx + 0x6c] */ { const u32 m_ = (u32)(edx + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53768du; SAVEALL; call_ind(c, t_); RETCHK(0x53768du, 0x53768au); LOADALL; }
L_0053768d:;
  /* 0053768d mov esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); esi = (u32)(M32(m_)); }
  /* 00537690 mov edi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edi = (u32)(M32(m_)); }
  /* 00537693 call 0x508d30 */ esp -= 4; M32(esp) = 0x537698u; SAVEALL; F_00508d30(c); ABI_CHECK(0x508d30u, 0x537693u); RETCHK(0x537698u, 0x537693u); LOADALL;
L_00537698:;
  /* 00537698 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00537699 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0053769a:;
  /* 0053769a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053769b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053769d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053769e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005376b0(CPU *c) {
  NATIVE_HOOK(0x5376b0u) REGS; LOADALL;
L_005376b0:;
  /* 005376b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005376b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005376b3 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005376b6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005376b7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005376b8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005376ba mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005376bd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005376be lea eax, [esi + 0x190] */ eax = (u32)((u32)(esi + 0x190u));
  /* 005376c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005376c5 call 0x5075d0 */ esp -= 4; M32(esp) = 0x5376cau; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x5376c5u); RETCHK(0x5376cau, 0x5376c5u); LOADALL;
  /* 005376ca lea ecx, [esi + 0x1ac] */ ecx = (u32)((u32)(esi + 0x1acu));
  /* 005376d0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005376d1 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005376d4 mov edi, eax */ { edi = (u32)(eax); }
  /* 005376d6 call 0x5075d0 */ esp -= 4; M32(esp) = 0x5376dbu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x5376d6u); RETCHK(0x5376dbu, 0x5376d6u); LOADALL;
  /* 005376db mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005376de lea edx, [esi + 0x1c8] */ edx = (u32)((u32)(esi + 0x1c8u));
  /* 005376e4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005376e5 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005376e7 call 0x5075d0 */ esp -= 4; M32(esp) = 0x5376ecu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x5376e7u); RETCHK(0x5376ecu, 0x5376e7u); LOADALL;
  /* 005376ec mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005376ef call 0x518bb0 */ esp -= 4; M32(esp) = 0x5376f4u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x5376efu); RETCHK(0x5376f4u, 0x5376efu); LOADALL;
  /* 005376f4 call 0x5180e0 */ esp -= 4; M32(esp) = 0x5376f9u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x5376f4u); RETCHK(0x5376f9u, 0x5376f4u); LOADALL;
  /* 005376f9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005376fb je 0x5377ab */ if (ZF_) goto L_005377ab;
  /* 00537701 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00537703 call 0x508d10 */ esp -= 4; M32(esp) = 0x537708u; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x537703u); RETCHK(0x537708u, 0x537703u); LOADALL;
  /* 00537708 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053770b mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0053770d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053770e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00537710 call dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537713u; SAVEALL; call_ind(c, t_); RETCHK(0x537713u, 0x537710u); LOADALL; }
  /* 00537713 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00537715 je 0x53772c */ if (ZF_) goto L_0053772c;
  /* 00537717 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00537719 call 0x536b50 */ esp -= 4; M32(esp) = 0x53771eu; SAVEALL; F_00536b50(c); ABI_CHECK(0x536b50u, 0x537719u); RETCHK(0x53771eu, 0x537719u); LOADALL;
  /* 0053771e mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00537721 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00537724 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00537726 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537727 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537728 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0053772a jmp 0x53779d */ goto L_0053779d;
L_0053772c:;
  /* 0053772c mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0053772f mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00537731 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00537732 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00537734 call dword ptr [edx + 0x58] */ { const u32 m_ = (u32)(edx + 0x58u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537737u; SAVEALL; call_ind(c, t_); RETCHK(0x537737u, 0x537734u); LOADALL; }
  /* 00537737 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00537739 je 0x537762 */ if (ZF_) goto L_00537762;
  /* 0053773b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053773d call 0x536ba0 */ esp -= 4; M32(esp) = 0x537742u; SAVEALL; F_00536ba0(c); ABI_CHECK(0x536ba0u, 0x53773du); RETCHK(0x537742u, 0x53773du); LOADALL;
  /* 00537742 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00537745 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00537747 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00537748 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537749 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0053774b call dword ptr [eax + 0x70] */ { const u32 m_ = (u32)(eax + 0x70u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53774eu; SAVEALL; call_ind(c, t_); RETCHK(0x53774eu, 0x53774bu); LOADALL; }
  /* 0053774e mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00537751 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00537753 call dword ptr [edx + 0xbc] */ { const u32 m_ = (u32)(edx + 0xbcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537759u; SAVEALL; call_ind(c, t_); RETCHK(0x537759u, 0x537753u); LOADALL; }
  /* 00537759 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053775a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053775b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053775c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053775e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053775f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00537762:;
  /* 00537762 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00537765 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00537767 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00537768 call dword ptr [edx + 0x58] */ { const u32 m_ = (u32)(edx + 0x58u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53776bu; SAVEALL; call_ind(c, t_); RETCHK(0x53776bu, 0x537768u); LOADALL; }
  /* 0053776b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053776d je 0x5377a0 */ if (ZF_) goto L_005377a0;
  /* 0053776f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00537771 call 0x536ba0 */ esp -= 4; M32(esp) = 0x537776u; SAVEALL; F_00536ba0(c); ABI_CHECK(0x536ba0u, 0x537771u); RETCHK(0x537776u, 0x537771u); LOADALL;
  /* 00537776 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00537778 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0053777b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053777c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0053777e call dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537781u; SAVEALL; call_ind(c, t_); RETCHK(0x537781u, 0x53777eu); LOADALL; }
  /* 00537781 mov eax, esi */ { eax = (u32)(esi); }
  /* 00537783 call 0x507890 */ esp -= 4; M32(esp) = 0x537788u; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x537783u); RETCHK(0x537788u, 0x537783u); LOADALL;
  /* 00537788 lea edi, [ebp - 0xc] */ edi = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0053778b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053778d call 0x52cf40 */ esp -= 4; M32(esp) = 0x537792u; SAVEALL; F_0052cf40(c); ABI_CHECK(0x52cf40u, 0x53778du); RETCHK(0x537792u, 0x53778du); LOADALL;
  /* 00537792 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00537795 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00537797 mov eax, edi */ { eax = (u32)(edi); }
  /* 00537799 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053779a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053779b mov ecx, ebx */ { ecx = (u32)(ebx); }
L_0053779d:;
  /* 0053779d call dword ptr [edx + 0x70] */ { const u32 m_ = (u32)(edx + 0x70u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5377a0u; SAVEALL; call_ind(c, t_); RETCHK(0x5377a0u, 0x53779du); LOADALL; }
L_005377a0:;
  /* 005377a0 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005377a3 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005377a5 call dword ptr [edx + 0xbc] */ { const u32 m_ = (u32)(edx + 0xbcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5377abu; SAVEALL; call_ind(c, t_); RETCHK(0x5377abu, 0x5377a5u); LOADALL; }
L_005377ab:;
  /* 005377ab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005377ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005377ad pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005377ae mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005377b0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005377b1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005377c0(CPU *c) {
  NATIVE_HOOK(0x5377c0u) REGS; LOADALL;
L_005377c0:;
  /* 005377c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005377c1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005377c3 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005377c6 lea eax, [esi + 0x1c8] */ eax = (u32)((u32)(esi + 0x1c8u));
  /* 005377cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005377cd call 0x5075d0 */ esp -= 4; M32(esp) = 0x5377d2u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x5377cdu); RETCHK(0x5377d2u, 0x5377cdu); LOADALL;
  /* 005377d2 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005377d4 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005377d6 call dword ptr [edx + 0xbc] */ { const u32 m_ = (u32)(edx + 0xbcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5377dcu; SAVEALL; call_ind(c, t_); RETCHK(0x5377dcu, 0x5377d6u); LOADALL; }
  /* 005377dc mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005377de pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005377df jmp 0x536ea0 */ SAVEALL; F_00536ea0(c); return;
}

void F_005377f0(CPU *c) {
  NATIVE_HOOK(0x5377f0u) REGS; LOADALL;
L_005377f0:;
  /* 005377f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005377f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005377f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005377f5 push 0x61ffdc */ { u32 v_ = 0x61ffdcu; esp -= 4; M32(esp) = v_; }
  /* 005377fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00537800 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537801 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00537808 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053780b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00537810 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537811 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537812 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00537815 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00537818 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0053781b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053781c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0053781f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537820 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00537821 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537822 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537823 call 0x536810 */ esp -= 4; M32(esp) = 0x537828u; SAVEALL; F_00536810(c); ABI_CHECK(0x536810u, 0x537823u); RETCHK(0x537828u, 0x537823u); LOADALL;
  /* 00537828 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0053782a mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0053782d mov dword ptr [esi], 0x653c68 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x653c68u); }
  /* 00537833 mov dword ptr [esi + 0x1e0], 0xf */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(0xfu); }
  /* 0053783d mov dword ptr [esi + 0x1dc], ebx */ { const u32 m_ = (u32)(esi + 0x1dcu); M32(m_) = (u32)(ebx); }
  /* 00537843 mov byte ptr [esi + 0x1cc], bl */ { const u32 m_ = (u32)(esi + 0x1ccu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00537849 mov dword ptr [esi + 0x1e8], ebx */ { const u32 m_ = (u32)(esi + 0x1e8u); M32(m_) = (u32)(ebx); }
  /* 0053784f mov dword ptr [esi + 0x1ec], ebx */ { const u32 m_ = (u32)(esi + 0x1ecu); M32(m_) = (u32)(ebx); }
  /* 00537855 mov dword ptr [esi + 0x1f0], ebx */ { const u32 m_ = (u32)(esi + 0x1f0u); M32(m_) = (u32)(ebx); }
  /* 0053785b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053785e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053785f mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00537863 call 0x536990 */ esp -= 4; M32(esp) = 0x537868u; SAVEALL; F_00536990(c); ABI_CHECK(0x536990u, 0x537863u); RETCHK(0x537868u, 0x537863u); LOADALL;
  /* 00537868 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053786a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053786b lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053786e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053786f lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00537872 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 00537876 call 0x404140 */ esp -= 4; M32(esp) = 0x53787bu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x537876u); RETCHK(0x53787bu, 0x537876u); LOADALL;
  /* 0053787b cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053787f jb 0x53788d */ if (CF_) goto L_0053788d;
  /* 00537881 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00537884 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537885 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53788au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x537885u); RETCHK(0x53788au, 0x537885u); LOADALL;
  /* 0053788a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053788d:;
  /* 0053788d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00537890 mov eax, esi */ { eax = (u32)(esi); }
  /* 00537892 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00537893 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0053789a mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0053789d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053789e call 0x61af31 */ esp -= 4; M32(esp) = 0x5378a3u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x53789eu); RETCHK(0x5378a3u, 0x53789eu); LOADALL;
  /* 005378a3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005378a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005378a6 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_005378b0(CPU *c) {
  NATIVE_HOOK(0x5378b0u) REGS; LOADALL;
L_005378b0:;
  /* 005378b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005378b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005378b3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005378b6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005378b7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005378b8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005378ba call 0x536bf0 */ esp -= 4; M32(esp) = 0x5378bfu; SAVEALL; F_00536bf0(c); ABI_CHECK(0x536bf0u, 0x5378bau); RETCHK(0x5378bfu, 0x5378bau); LOADALL;
  /* 005378bf lea ecx, [esi + 0x1c8] */ ecx = (u32)((u32)(esi + 0x1c8u));
  /* 005378c5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005378c6 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005378c9 call 0x5075d0 */ esp -= 4; M32(esp) = 0x5378ceu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x5378c9u); RETCHK(0x5378ceu, 0x5378c9u); LOADALL;
  /* 005378ce mov ecx, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); ecx = (u32)(M32(m_)); }
  /* 005378d4 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005378d7 cmp ecx, dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005378dd jl 0x537970 */ if (LT_) goto L_00537970;
  /* 005378e3 cmp ecx, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005378e9 jg 0x537970 */ if (!(ZF_|LT_)) goto L_00537970;
  /* 005378ef mov eax, dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 005378f5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005378f7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005378f8 lea ebx, [esi + 0x1e4] */ ebx = (u32)((u32)(esi + 0x1e4u));
  /* 005378fe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005378ff je 0x537919 */ if (ZF_) goto L_00537919;
  /* 00537901 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 00537904 sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00537906 mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 0053790b imul edi */ { s64 p_ = (s64)(s32)eax * (s32)edi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0053790d add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0053790f sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00537912 mov eax, edx */ { eax = (u32)(edx); }
  /* 00537914 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00537917 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00537919:;
  /* 00537919 mov edi, dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); edi = (u32)(M32(m_)); }
  /* 0053791f sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00537921 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537923 jge 0x53796e */ if (!LT_) goto L_0053796e;
  /* 00537925 mov eax, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); eax = (u32)(M32(m_)); }
  /* 0053792b mov edx, edi */ { edx = (u32)(edi); }
  /* 0053792d mov edi, eax */ { edi = (u32)(eax); }
  /* 0053792f sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00537931 imul eax, eax, 0x1c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x1cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00537934 sub edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00537936 mov edx, dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); edx = (u32)(M32(m_)); }
  /* 0053793c mov ecx, dword ptr [eax + edx + 0x18] */ { const u32 m_ = (u32)(eax + edx + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00537940 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00537942 cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537945 jb 0x53794c */ if (CF_) goto L_0053794c;
  /* 00537947 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 0053794a jmp 0x53794f */ goto L_0053794f;
L_0053794c:;
  /* 0053794c lea esi, [eax + 4] */ esi = (u32)((u32)(eax + 0x4u));
L_0053794f:;
  /* 0053794f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00537951 je 0x53796e */ if (ZF_) goto L_0053796e;
  /* 00537953 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00537955 jl 0x53796e */ if (LT_) goto L_0053796e;
  /* 00537957 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00537959 call 0x4030c0 */ esp -= 4; M32(esp) = 0x53795eu; SAVEALL; F_004030c0(c); ABI_CHECK(0x4030c0u, 0x537959u); RETCHK(0x53795eu, 0x537959u); LOADALL;
  /* 0053795e cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537960 jge 0x53796e */ if (!LT_) goto L_0053796e;
  /* 00537962 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00537965 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00537967 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537968 call dword ptr [edx + 0xec] */ { const u32 m_ = (u32)(edx + 0xecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53796eu; SAVEALL; call_ind(c, t_); RETCHK(0x53796eu, 0x537968u); LOADALL; }
L_0053796e:;
  /* 0053796e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053796f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00537970:;
  /* 00537970 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00537971 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00537972 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00537980(CPU *c) {
  NATIVE_HOOK(0x537980u) REGS; LOADALL;
L_00537980:;
  /* 00537980 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00537981 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00537983 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537984 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537985 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00537987 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00537989 call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53798cu; SAVEALL; call_ind(c, t_); RETCHK(0x53798cu, 0x537989u); LOADALL; }
  /* 0053798c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053798e je 0x5379f1 */ if (ZF_) goto L_005379f1;
  /* 00537990 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537991 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00537992 lea ecx, [esi + 0x1c8] */ ecx = (u32)((u32)(esi + 0x1c8u));
  /* 00537998 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537999 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0053799c call 0x5075d0 */ esp -= 4; M32(esp) = 0x5379a1u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x53799cu); RETCHK(0x5379a1u, 0x53799cu); LOADALL;
  /* 005379a1 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005379a4 lea edx, [esi + 0x190] */ edx = (u32)((u32)(esi + 0x190u));
  /* 005379aa push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005379ab mov edi, eax */ { edi = (u32)(eax); }
  /* 005379ad call 0x5075d0 */ esp -= 4; M32(esp) = 0x5379b2u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x5379adu); RETCHK(0x5379b2u, 0x5379adu); LOADALL;
  /* 005379b2 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005379b5 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005379b7 lea eax, [esi + 0x1ac] */ eax = (u32)((u32)(esi + 0x1acu));
  /* 005379bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005379be call 0x5075d0 */ esp -= 4; M32(esp) = 0x5379c3u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x5379beu); RETCHK(0x5379c3u, 0x5379beu); LOADALL;
  /* 005379c3 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005379c5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005379c7 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005379ca call dword ptr [edx + 0xf0] */ { const u32 m_ = (u32)(edx + 0xf0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5379d0u; SAVEALL; call_ind(c, t_); RETCHK(0x5379d0u, 0x5379cau); LOADALL; }
  /* 005379d0 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005379d2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005379d4 call dword ptr [eax + 0xbc] */ { const u32 m_ = (u32)(eax + 0xbcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5379dau; SAVEALL; call_ind(c, t_); RETCHK(0x5379dau, 0x5379d4u); LOADALL; }
  /* 005379da mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 005379dc mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005379de call dword ptr [edx + 0xbc] */ { const u32 m_ = (u32)(edx + 0xbcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5379e4u; SAVEALL; call_ind(c, t_); RETCHK(0x5379e4u, 0x5379deu); LOADALL; }
  /* 005379e4 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005379e7 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005379e9 call dword ptr [eax + 0xbc] */ { const u32 m_ = (u32)(eax + 0xbcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5379efu; SAVEALL; call_ind(c, t_); RETCHK(0x5379efu, 0x5379e9u); LOADALL; }
  /* 005379ef pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005379f0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_005379f1:;
  /* 005379f1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005379f2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005379f4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005379f5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00537a00(CPU *c) {
  NATIVE_HOOK(0x537a00u) REGS; LOADALL;
L_00537a00:;
  /* 00537a00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00537a01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00537a03 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537a04 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537a05 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00537a07 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00537a09 call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537a0cu; SAVEALL; call_ind(c, t_); RETCHK(0x537a0cu, 0x537a09u); LOADALL; }
  /* 00537a0c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00537a0e je 0x537a71 */ if (ZF_) goto L_00537a71;
  /* 00537a10 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537a11 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00537a12 lea ecx, [esi + 0x1c8] */ ecx = (u32)((u32)(esi + 0x1c8u));
  /* 00537a18 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537a19 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00537a1c call 0x5075d0 */ esp -= 4; M32(esp) = 0x537a21u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x537a1cu); RETCHK(0x537a21u, 0x537a1cu); LOADALL;
  /* 00537a21 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00537a24 lea edx, [esi + 0x190] */ edx = (u32)((u32)(esi + 0x190u));
  /* 00537a2a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00537a2b mov edi, eax */ { edi = (u32)(eax); }
  /* 00537a2d call 0x5075d0 */ esp -= 4; M32(esp) = 0x537a32u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x537a2du); RETCHK(0x537a32u, 0x537a2du); LOADALL;
  /* 00537a32 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00537a35 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00537a37 lea eax, [esi + 0x1ac] */ eax = (u32)((u32)(esi + 0x1acu));
  /* 00537a3d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537a3e call 0x5075d0 */ esp -= 4; M32(esp) = 0x537a43u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x537a3eu); RETCHK(0x537a43u, 0x537a3eu); LOADALL;
  /* 00537a43 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00537a45 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00537a47 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00537a4a call dword ptr [edx + 0xf4] */ { const u32 m_ = (u32)(edx + 0xf4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537a50u; SAVEALL; call_ind(c, t_); RETCHK(0x537a50u, 0x537a4au); LOADALL; }
  /* 00537a50 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00537a52 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00537a54 call dword ptr [eax + 0xc0] */ { const u32 m_ = (u32)(eax + 0xc0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537a5au; SAVEALL; call_ind(c, t_); RETCHK(0x537a5au, 0x537a54u); LOADALL; }
  /* 00537a5a mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00537a5c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00537a5e call dword ptr [edx + 0xc0] */ { const u32 m_ = (u32)(edx + 0xc0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537a64u; SAVEALL; call_ind(c, t_); RETCHK(0x537a64u, 0x537a5eu); LOADALL; }
  /* 00537a64 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00537a67 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00537a69 call dword ptr [eax + 0xc0] */ { const u32 m_ = (u32)(eax + 0xc0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537a6fu; SAVEALL; call_ind(c, t_); RETCHK(0x537a6fu, 0x537a69u); LOADALL; }
  /* 00537a6f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00537a70 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00537a71:;
  /* 00537a71 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00537a72 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00537a74 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00537a75 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00537a80(CPU *c) {
  NATIVE_HOOK(0x537a80u) REGS; LOADALL;
L_00537a80:;
  /* 00537a80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00537a81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00537a83 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537a84 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537a85 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00537a87 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00537a8a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00537a8b lea eax, [esi + 0x1c8] */ eax = (u32)((u32)(esi + 0x1c8u));
  /* 00537a91 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537a92 call 0x5075d0 */ esp -= 4; M32(esp) = 0x537a97u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x537a92u); RETCHK(0x537a97u, 0x537a92u); LOADALL;
  /* 00537a97 lea ecx, [esi + 0x190] */ ecx = (u32)((u32)(esi + 0x190u));
  /* 00537a9d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537a9e mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00537aa1 mov edi, eax */ { edi = (u32)(eax); }
  /* 00537aa3 call 0x5075d0 */ esp -= 4; M32(esp) = 0x537aa8u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x537aa3u); RETCHK(0x537aa8u, 0x537aa3u); LOADALL;
  /* 00537aa8 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00537aab lea edx, [esi + 0x1ac] */ edx = (u32)((u32)(esi + 0x1acu));
  /* 00537ab1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00537ab2 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00537ab4 call 0x5075d0 */ esp -= 4; M32(esp) = 0x537ab9u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x537ab4u); RETCHK(0x537ab9u, 0x537ab4u); LOADALL;
  /* 00537ab9 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00537abc mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00537abf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537ac0 mov esi, eax */ { esi = (u32)(eax); }
  /* 00537ac2 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00537ac4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00537ac5 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00537ac7 call dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537acau; SAVEALL; call_ind(c, t_); RETCHK(0x537acau, 0x537ac7u); LOADALL; }
  /* 00537aca mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 00537acd mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00537ad0 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00537ad2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537ad3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537ad4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00537ad6 call dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537ad9u; SAVEALL; call_ind(c, t_); RETCHK(0x537ad9u, 0x537ad6u); LOADALL; }
  /* 00537ad9 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00537adc mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00537ade push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537adf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537ae0 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00537ae2 call dword ptr [edx + 0x64] */ { const u32 m_ = (u32)(edx + 0x64u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537ae5u; SAVEALL; call_ind(c, t_); RETCHK(0x537ae5u, 0x537ae2u); LOADALL; }
  /* 00537ae5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00537ae6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00537ae7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00537ae8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00537ae9 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00537af0(CPU *c) {
  NATIVE_HOOK(0x537af0u) REGS; LOADALL;
L_00537af0:;
  /* 00537af0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00537af1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00537af3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537af4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537af5 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00537af7 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00537afa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00537afb lea eax, [esi + 0x1c8] */ eax = (u32)((u32)(esi + 0x1c8u));
  /* 00537b01 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537b02 call 0x5075d0 */ esp -= 4; M32(esp) = 0x537b07u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x537b02u); RETCHK(0x537b07u, 0x537b02u); LOADALL;
  /* 00537b07 lea ecx, [esi + 0x190] */ ecx = (u32)((u32)(esi + 0x190u));
  /* 00537b0d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537b0e mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00537b11 mov edi, eax */ { edi = (u32)(eax); }
  /* 00537b13 call 0x5075d0 */ esp -= 4; M32(esp) = 0x537b18u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x537b13u); RETCHK(0x537b18u, 0x537b13u); LOADALL;
  /* 00537b18 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00537b1b lea edx, [esi + 0x1ac] */ edx = (u32)((u32)(esi + 0x1acu));
  /* 00537b21 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00537b22 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00537b24 call 0x5075d0 */ esp -= 4; M32(esp) = 0x537b29u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x537b24u); RETCHK(0x537b29u, 0x537b24u); LOADALL;
  /* 00537b29 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00537b2c mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00537b2f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537b30 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00537b33 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00537b34 mov esi, eax */ { esi = (u32)(eax); }
  /* 00537b36 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00537b38 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537b39 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00537b3b call dword ptr [eax + 0x68] */ { const u32 m_ = (u32)(eax + 0x68u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537b3eu; SAVEALL; call_ind(c, t_); RETCHK(0x537b3eu, 0x537b3bu); LOADALL; }
  /* 00537b3e mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00537b41 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00537b44 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00537b47 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00537b49 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537b4a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537b4b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537b4c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00537b4e call dword ptr [edx + 0x68] */ { const u32 m_ = (u32)(edx + 0x68u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537b51u; SAVEALL; call_ind(c, t_); RETCHK(0x537b51u, 0x537b4eu); LOADALL; }
  /* 00537b51 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00537b54 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00537b57 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00537b59 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537b5a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537b5b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537b5c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00537b5e call dword ptr [edx + 0x68] */ { const u32 m_ = (u32)(edx + 0x68u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537b61u; SAVEALL; call_ind(c, t_); RETCHK(0x537b61u, 0x537b5eu); LOADALL; }
  /* 00537b61 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00537b62 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00537b63 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00537b64 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00537b65 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00537b70(CPU *c) {
  NATIVE_HOOK(0x537b70u) REGS; LOADALL;
L_00537b70:;
  /* 00537b70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00537b71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00537b73 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537b74 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00537b76 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00537b79 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00537b7a lea eax, [esi + 0x1c8] */ eax = (u32)((u32)(esi + 0x1c8u));
  /* 00537b80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537b81 call 0x5075d0 */ esp -= 4; M32(esp) = 0x537b86u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x537b81u); RETCHK(0x537b86u, 0x537b81u); LOADALL;
  /* 00537b86 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00537b89 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00537b8b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00537b8c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00537b8e call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537b91u; SAVEALL; call_ind(c, t_); RETCHK(0x537b91u, 0x537b8eu); LOADALL; }
  /* 00537b91 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00537b92 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00537b94 call 0x536d90 */ esp -= 4; M32(esp) = 0x537b99u; SAVEALL; F_00536d90(c); ABI_CHECK(0x536d90u, 0x537b94u); RETCHK(0x537b99u, 0x537b94u); LOADALL;
  /* 00537b99 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00537b9a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00537b9b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00537b9c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00537ba0(CPU *c) {
  NATIVE_HOOK(0x537ba0u) REGS; LOADALL;
L_00537ba0:;
  /* 00537ba0 lea eax, [ecx + 0x1c8] */ eax = (u32)((u32)(ecx + 0x1c8u));
  /* 00537ba6 mov ecx, dword ptr [ecx + 0x5c] */ { const u32 m_ = (u32)(ecx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00537ba9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537baa call 0x5075d0 */ esp -= 4; M32(esp) = 0x537bafu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x537baau); RETCHK(0x537bafu, 0x537baau); LOADALL;
  /* 00537baf mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00537bb1 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00537bb3 jmp dword ptr [edx + 0xc0] */ { const u32 m_ = (u32)(edx + 0xc0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00537bc0(CPU *c) {
  NATIVE_HOOK(0x537bc0u) REGS; LOADALL;
L_00537bc0:;
  /* 00537bc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00537bc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00537bc3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537bc4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00537bc6 mov eax, esi */ { eax = (u32)(esi); }
  /* 00537bc8 call 0x537bf0 */ esp -= 4; M32(esp) = 0x537bcdu; SAVEALL; F_00537bf0(c); ABI_CHECK(0x537bf0u, 0x537bc8u); RETCHK(0x537bcdu, 0x537bc8u); LOADALL;
  /* 00537bcd test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00537bd1 je 0x537bdc */ if (ZF_) goto L_00537bdc;
  /* 00537bd3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537bd4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x537bd9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x537bd4u); RETCHK(0x537bd9u, 0x537bd4u); LOADALL;
  /* 00537bd9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00537bdc:;
  /* 00537bdc mov eax, esi */ { eax = (u32)(esi); }
  /* 00537bde pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00537bdf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00537be0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00537bf0(CPU *c) {
  NATIVE_HOOK(0x537bf0u) REGS; LOADALL;
L_00537bf0:;
  /* 00537bf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00537bf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00537bf3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537bf4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537bf5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537bf6 mov esi, eax */ { esi = (u32)(eax); }
  /* 00537bf8 mov eax, dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 00537bfe xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00537c00 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537c02 je 0x537c24 */ if (ZF_) goto L_00537c24;
  /* 00537c04 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00537c07 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00537c08 mov edi, dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); edi = (u32)(M32(m_)); }
  /* 00537c0e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537c0f call 0x403f60 */ esp -= 4; M32(esp) = 0x537c14u; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x537c0fu); RETCHK(0x537c14u, 0x537c0fu); LOADALL;
  /* 00537c14 mov edx, dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); edx = (u32)(M32(m_)); }
  /* 00537c1a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00537c1b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x537c20u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x537c1bu); RETCHK(0x537c20u, 0x537c1bu); LOADALL;
  /* 00537c20 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00537c23 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00537c24:;
  /* 00537c24 mov dword ptr [esi + 0x1e8], ebx */ { const u32 m_ = (u32)(esi + 0x1e8u); M32(m_) = (u32)(ebx); }
  /* 00537c2a mov dword ptr [esi + 0x1ec], ebx */ { const u32 m_ = (u32)(esi + 0x1ecu); M32(m_) = (u32)(ebx); }
  /* 00537c30 mov dword ptr [esi + 0x1f0], ebx */ { const u32 m_ = (u32)(esi + 0x1f0u); M32(m_) = (u32)(ebx); }
  /* 00537c36 cmp dword ptr [esi + 0x1e0], 0x10 */ { const u32 m_ = (u32)(esi + 0x1e0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537c3d jb 0x537c4e */ if (CF_) goto L_00537c4e;
  /* 00537c3f mov eax, dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); eax = (u32)(M32(m_)); }
  /* 00537c45 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537c46 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x537c4bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x537c46u); RETCHK(0x537c4bu, 0x537c46u); LOADALL;
  /* 00537c4b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00537c4e:;
  /* 00537c4e mov dword ptr [esi + 0x1e0], 0xf */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(0xfu); }
  /* 00537c58 mov dword ptr [esi + 0x1dc], ebx */ { const u32 m_ = (u32)(esi + 0x1dcu); M32(m_) = (u32)(ebx); }
  /* 00537c5e mov byte ptr [esi + 0x1cc], bl */ { const u32 m_ = (u32)(esi + 0x1ccu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00537c64 call 0x536920 */ esp -= 4; M32(esp) = 0x537c69u; SAVEALL; F_00536920(c); ABI_CHECK(0x536920u, 0x537c64u); RETCHK(0x537c69u, 0x537c64u); LOADALL;
  /* 00537c69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00537c6a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00537c6b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00537c6d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00537c6e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00537c70(CPU *c) {
  NATIVE_HOOK(0x537c70u) REGS; LOADALL;
L_00537c70:;
  /* 00537c70 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537c71 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00537c73 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537c74 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537c75 call 0x506b60 */ esp -= 4; M32(esp) = 0x537c7au; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x537c75u); RETCHK(0x537c7au, 0x537c75u); LOADALL;
  /* 00537c7a mov dword ptr [esi], 0x653e90 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x653e90u); }
  /* 00537c80 mov dword ptr [esi + 0x1b4], ebx */ { const u32 m_ = (u32)(esi + 0x1b4u); M32(m_) = (u32)(ebx); }
  /* 00537c86 mov dword ptr [esi + 0x1b8], 0xf */ { const u32 m_ = (u32)(esi + 0x1b8u); M32(m_) = (u32)(0xfu); }
  /* 00537c90 mov byte ptr [esi + 0x1a4], bl */ { const u32 m_ = (u32)(esi + 0x1a4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00537c96 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00537c9b mov dword ptr [esi + 0x1d8], eax */ { const u32 m_ = (u32)(esi + 0x1d8u); M32(m_) = (u32)(eax); }
  /* 00537ca1 mov byte ptr [esi + 0x1c8], al */ { const u32 m_ = (u32)(esi + 0x1c8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00537ca7 mov dword ptr [esi + 0x1c0], ebx */ { const u32 m_ = (u32)(esi + 0x1c0u); M32(m_) = (u32)(ebx); }
  /* 00537cad mov dword ptr [esi + 0x1c4], ebx */ { const u32 m_ = (u32)(esi + 0x1c4u); M32(m_) = (u32)(ebx); }
  /* 00537cb3 mov dword ptr [esi + 0x1bc], ebx */ { const u32 m_ = (u32)(esi + 0x1bcu); M32(m_) = (u32)(ebx); }
  /* 00537cb9 mov dword ptr [esi + 0x180], ebx */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(ebx); }
  /* 00537cbf mov dword ptr [esi + 0x184], ebx */ { const u32 m_ = (u32)(esi + 0x184u); M32(m_) = (u32)(ebx); }
  /* 00537cc5 mov dword ptr [esi + 0x188], ebx */ { const u32 m_ = (u32)(esi + 0x188u); M32(m_) = (u32)(ebx); }
  /* 00537ccb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00537ccd mov dword ptr [esi + 0x1cc], 0x40 */ { const u32 m_ = (u32)(esi + 0x1ccu); M32(m_) = (u32)(0x40u); }
  /* 00537cd7 mov dword ptr [esi + 0x1d0], 0x100 */ { const u32 m_ = (u32)(esi + 0x1d0u); M32(m_) = (u32)(0x100u); }
  /* 00537ce1 mov dword ptr [esi + 0x1d4], 0x3c */ { const u32 m_ = (u32)(esi + 0x1d4u); M32(m_) = (u32)(0x3cu); }
  /* 00537ceb mov dword ptr [esi + 0x1dc], 0x40e00000 */ { const u32 m_ = (u32)(esi + 0x1dcu); M32(m_) = (u32)(0x40e00000u); }
  /* 00537cf5 mov dword ptr [esi + 0x1e0], 4 */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(0x4u); }
  /* 00537cff lea ecx, [esi + 0x194] */ ecx = (u32)((u32)(esi + 0x194u));
  /* 00537d05 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 00537d07 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00537d0a mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00537d0d mov eax, esi */ { eax = (u32)(esi); }
  /* 00537d0f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00537d10 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00537d20(CPU *c) {
  NATIVE_HOOK(0x537d20u) REGS; LOADALL;
L_00537d20:;
  /* 00537d20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00537d21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00537d23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537d24 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00537d26 call 0x537d50 */ esp -= 4; M32(esp) = 0x537d2bu; SAVEALL; F_00537d50(c); ABI_CHECK(0x537d50u, 0x537d26u); RETCHK(0x537d2bu, 0x537d26u); LOADALL;
  /* 00537d2b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00537d2f je 0x537d3a */ if (ZF_) goto L_00537d3a;
  /* 00537d31 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537d32 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x537d37u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x537d32u); RETCHK(0x537d37u, 0x537d32u); LOADALL;
  /* 00537d37 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00537d3a:;
  /* 00537d3a mov eax, esi */ { eax = (u32)(esi); }
  /* 00537d3c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00537d3d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00537d3e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00537d50(CPU *c) {
  NATIVE_HOOK(0x537d50u) REGS; LOADALL;
L_00537d50:;
  /* 00537d50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537d51 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00537d53 mov dword ptr [esi], 0x653e90 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x653e90u); }
  /* 00537d59 cmp dword ptr [esi + 0x1b8], 0x10 */ { const u32 m_ = (u32)(esi + 0x1b8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537d60 jb 0x537d71 */ if (CF_) goto L_00537d71;
  /* 00537d62 mov eax, dword ptr [esi + 0x1a4] */ { const u32 m_ = (u32)(esi + 0x1a4u); eax = (u32)(M32(m_)); }
  /* 00537d68 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537d69 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x537d6eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x537d69u); RETCHK(0x537d6eu, 0x537d69u); LOADALL;
  /* 00537d6e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00537d71:;
  /* 00537d71 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00537d73 mov dword ptr [esi + 0x1b8], 0xf */ { const u32 m_ = (u32)(esi + 0x1b8u); M32(m_) = (u32)(0xfu); }
  /* 00537d7d mov dword ptr [esi + 0x1b4], eax */ { const u32 m_ = (u32)(esi + 0x1b4u); M32(m_) = (u32)(eax); }
  /* 00537d83 mov byte ptr [esi + 0x1a4], al */ { const u32 m_ = (u32)(esi + 0x1a4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00537d89 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00537d8b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00537d8c jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_00537da0(CPU *c) {
  NATIVE_HOOK(0x537da0u) REGS; LOADALL;
L_00537da0:;
  /* 00537da0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00537da1 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00537da3 mov eax, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); eax = (u32)(M32(m_)); }
  /* 00537da9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00537dab je 0x537dca */ if (ZF_) goto L_00537dca;
  /* 00537dad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537dae call 0x5ab020 */ esp -= 4; M32(esp) = 0x537db3u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x537daeu); RETCHK(0x537db3u, 0x537daeu); LOADALL;
  /* 00537db3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00537db6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00537db8 mov dword ptr [edi + 0x194], eax */ { const u32 m_ = (u32)(edi + 0x194u); M32(m_) = (u32)(eax); }
  /* 00537dbe mov dword ptr [edi + 0x198], eax */ { const u32 m_ = (u32)(edi + 0x198u); M32(m_) = (u32)(eax); }
  /* 00537dc4 mov dword ptr [edi + 0x19c], eax */ { const u32 m_ = (u32)(edi + 0x19cu); M32(m_) = (u32)(eax); }
L_00537dca:;
  /* 00537dca push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537dcb mov esi, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); esi = (u32)(M32(m_)); }
  /* 00537dd1 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00537dd3 je 0x537df4 */ if (ZF_) goto L_00537df4;
  /* 00537dd5 call 0x5293f0 */ esp -= 4; M32(esp) = 0x537ddau; SAVEALL; F_005293f0(c); ABI_CHECK(0x5293f0u, 0x537dd5u); RETCHK(0x537ddau, 0x537dd5u); LOADALL;
  /* 00537dda mov ecx, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); ecx = (u32)(M32(m_)); }
  /* 00537de0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00537de2 je 0x537dea */ if (ZF_) goto L_00537dea;
  /* 00537de4 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00537de6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00537de8 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537deau; SAVEALL; call_ind(c, t_); RETCHK(0x537deau, 0x537de8u); LOADALL; }
L_00537dea:;
  /* 00537dea mov dword ptr [edi + 0x180], 0 */ { const u32 m_ = (u32)(edi + 0x180u); M32(m_) = (u32)(0x0u); }
L_00537df4:;
  /* 00537df4 mov esi, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); esi = (u32)(M32(m_)); }
  /* 00537dfa test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00537dfc je 0x537e1d */ if (ZF_) goto L_00537e1d;
  /* 00537dfe call 0x5293f0 */ esp -= 4; M32(esp) = 0x537e03u; SAVEALL; F_005293f0(c); ABI_CHECK(0x5293f0u, 0x537dfeu); RETCHK(0x537e03u, 0x537dfeu); LOADALL;
  /* 00537e03 mov ecx, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); ecx = (u32)(M32(m_)); }
  /* 00537e09 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00537e0b je 0x537e13 */ if (ZF_) goto L_00537e13;
  /* 00537e0d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00537e0f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00537e11 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537e13u; SAVEALL; call_ind(c, t_); RETCHK(0x537e13u, 0x537e11u); LOADALL; }
L_00537e13:;
  /* 00537e13 mov dword ptr [edi + 0x184], 0 */ { const u32 m_ = (u32)(edi + 0x184u); M32(m_) = (u32)(0x0u); }
L_00537e1d:;
  /* 00537e1d mov edx, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); edx = (u32)(M32(m_)); }
  /* 00537e23 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00537e25 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00537e26 je 0x537e42 */ if (ZF_) goto L_00537e42;
  /* 00537e28 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00537e2a call 0x5267e0 */ esp -= 4; M32(esp) = 0x537e2fu; SAVEALL; F_005267e0(c); ABI_CHECK(0x5267e0u, 0x537e2au); RETCHK(0x537e2fu, 0x537e2au); LOADALL;
  /* 00537e2f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00537e30 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x537e35u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x537e30u); RETCHK(0x537e35u, 0x537e30u); LOADALL;
  /* 00537e35 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00537e38 mov dword ptr [edi + 0x188], 0 */ { const u32 m_ = (u32)(edi + 0x188u); M32(m_) = (u32)(0x0u); }
L_00537e42:;
  /* 00537e42 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00537e43 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00537e50(CPU *c) {
  NATIVE_HOOK(0x537e50u) REGS; LOADALL;
L_00537e50:;
  /* 00537e50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00537e51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00537e53 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00537e56 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00537e59 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537e5a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537e5b mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00537e5e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00537e5f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00537e60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537e61 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00537e63 call 0x507260 */ esp -= 4; M32(esp) = 0x537e68u; SAVEALL; F_00507260(c); ABI_CHECK(0x507260u, 0x537e63u); RETCHK(0x537e68u, 0x537e63u); LOADALL;
  /* 00537e68 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00537e6a call 0x5fe934 */ esp -= 4; M32(esp) = 0x537e6fu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x537e6au); RETCHK(0x537e6fu, 0x537e6au); LOADALL;
  /* 00537e6f xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00537e71 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00537e74 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537e76 je 0x537e83 */ if (ZF_) goto L_00537e83;
  /* 00537e78 mov dword ptr [eax], 0x64d178 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64d178u); }
  /* 00537e7e mov dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00537e81 jmp 0x537e85 */ goto L_00537e85;
L_00537e83:;
  /* 00537e83 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00537e85:;
  /* 00537e85 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537e87 mov dword ptr [edi + 0x180], eax */ { const u32 m_ = (u32)(edi + 0x180u); M32(m_) = (u32)(eax); }
  /* 00537e8d je 0x537f4c */ if (ZF_) goto L_00537f4c;
  /* 00537e93 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537e94 push 0x653fc4 */ { u32 v_ = 0x653fc4u; esp -= 4; M32(esp) = v_; }
  /* 00537e99 call 0x529310 */ esp -= 4; M32(esp) = 0x537e9eu; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x537e99u); RETCHK(0x537e9eu, 0x537e99u); LOADALL;
  /* 00537e9e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00537ea0 jne 0x537ec3 */ if (!ZF_) goto L_00537ec3;
  /* 00537ea2 mov ecx, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); ecx = (u32)(M32(m_)); }
  /* 00537ea8 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537eaa je 0x537eb2 */ if (ZF_) goto L_00537eb2;
  /* 00537eac mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00537eae push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00537eb0 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537eb2u; SAVEALL; call_ind(c, t_); RETCHK(0x537eb2u, 0x537eb0u); LOADALL; }
L_00537eb2:;
  /* 00537eb2 mov dword ptr [edi + 0x180], ebx */ { const u32 m_ = (u32)(edi + 0x180u); M32(m_) = (u32)(ebx); }
  /* 00537eb8 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00537eba pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00537ebb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00537ebc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00537ebd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00537ebf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00537ec0 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00537ec3:;
  /* 00537ec3 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00537ec5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x537ecau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x537ec5u); RETCHK(0x537ecau, 0x537ec5u); LOADALL;
  /* 00537eca add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00537ecd cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537ecf je 0x537edc */ if (ZF_) goto L_00537edc;
  /* 00537ed1 mov dword ptr [eax], 0x64d178 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64d178u); }
  /* 00537ed7 mov dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00537eda jmp 0x537ede */ goto L_00537ede;
L_00537edc:;
  /* 00537edc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00537ede:;
  /* 00537ede cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537ee0 mov dword ptr [edi + 0x184], eax */ { const u32 m_ = (u32)(edi + 0x184u); M32(m_) = (u32)(eax); }
  /* 00537ee6 je 0x537f4c */ if (ZF_) goto L_00537f4c;
  /* 00537ee8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537ee9 push 0x653fbc */ { u32 v_ = 0x653fbcu; esp -= 4; M32(esp) = v_; }
  /* 00537eee call 0x529310 */ esp -= 4; M32(esp) = 0x537ef3u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x537eeeu); RETCHK(0x537ef3u, 0x537eeeu); LOADALL;
  /* 00537ef3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00537ef5 je 0x537f36 */ if (ZF_) goto L_00537f36;
  /* 00537ef7 push 0x94 */ { u32 v_ = 0x94u; esp -= 4; M32(esp) = v_; }
  /* 00537efc call 0x5fe934 */ esp -= 4; M32(esp) = 0x537f01u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x537efcu); RETCHK(0x537f01u, 0x537efcu); LOADALL;
  /* 00537f01 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00537f04 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537f06 je 0x537f14 */ if (ZF_) goto L_00537f14;
  /* 00537f08 mov esi, eax */ { esi = (u32)(eax); }
  /* 00537f0a call 0x5267c0 */ esp -= 4; M32(esp) = 0x537f0fu; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x537f0au); RETCHK(0x537f0fu, 0x537f0au); LOADALL;
  /* 00537f0f mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00537f12 jmp 0x537f16 */ goto L_00537f16;
L_00537f14:;
  /* 00537f14 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00537f16:;
  /* 00537f16 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537f18 mov dword ptr [edi + 0x188], eax */ { const u32 m_ = (u32)(edi + 0x188u); M32(m_) = (u32)(eax); }
  /* 00537f1e jne 0x537f57 */ if (!ZF_) goto L_00537f57;
  /* 00537f20 mov ecx, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); ecx = (u32)(M32(m_)); }
  /* 00537f26 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537f28 je 0x537f30 */ if (ZF_) goto L_00537f30;
  /* 00537f2a mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00537f2c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00537f2e call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537f30u; SAVEALL; call_ind(c, t_); RETCHK(0x537f30u, 0x537f2eu); LOADALL; }
L_00537f30:;
  /* 00537f30 mov dword ptr [edi + 0x180], ebx */ { const u32 m_ = (u32)(edi + 0x180u); M32(m_) = (u32)(ebx); }
L_00537f36:;
  /* 00537f36 mov ecx, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); ecx = (u32)(M32(m_)); }
  /* 00537f3c cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00537f3e je 0x537f46 */ if (ZF_) goto L_00537f46;
  /* 00537f40 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00537f42 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00537f44 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537f46u; SAVEALL; call_ind(c, t_); RETCHK(0x537f46u, 0x537f44u); LOADALL; }
L_00537f46:;
  /* 00537f46 mov dword ptr [edi + 0x184], ebx */ { const u32 m_ = (u32)(edi + 0x184u); M32(m_) = (u32)(ebx); }
L_00537f4c:;
  /* 00537f4c xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00537f4e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00537f4f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00537f50 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00537f51 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00537f53 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00537f54 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00537f57:;
  /* 00537f57 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00537f59 call 0x40d9f0 */ esp -= 4; M32(esp) = 0x537f5eu; SAVEALL; F_0040d9f0(c); ABI_CHECK(0x40d9f0u, 0x537f59u); RETCHK(0x537f5eu, 0x537f59u); LOADALL;
  /* 00537f5e fsub dword ptr [0x656ef0] */ { const u32 m_ = (u32)(0x656ef0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00537f64 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537f65 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00537f67 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00537f6a call 0x40d9d0 */ esp -= 4; M32(esp) = 0x537f6fu; SAVEALL; F_0040d9d0(c); ABI_CHECK(0x40d9d0u, 0x537f6au); RETCHK(0x537f6fu, 0x537f6au); LOADALL;
  /* 00537f6f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00537f70 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00537f73 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537f74 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00537f75 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00537f78 call 0x52cec0 */ esp -= 4; M32(esp) = 0x537f7du; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x537f78u); RETCHK(0x537f7du, 0x537f78u); LOADALL;
  /* 00537f7d mov edx, eax */ { edx = (u32)(eax); }
  /* 00537f7f lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 00537f82 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00537f85 call 0x52cee0 */ esp -= 4; M32(esp) = 0x537f8au; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x537f85u); RETCHK(0x537f8au, 0x537f85u); LOADALL;
  /* 00537f8a push 0x653fb0 */ { u32 v_ = 0x653fb0u; esp -= 4; M32(esp) = v_; }
  /* 00537f8f lea ecx, [edi + 0x20] */ ecx = (u32)((u32)(edi + 0x20u));
  /* 00537f92 call 0x404590 */ esp -= 4; M32(esp) = 0x537f97u; SAVEALL; F_00404590(c); ABI_CHECK(0x404590u, 0x537f92u); RETCHK(0x537f97u, 0x537f92u); LOADALL;
  /* 00537f97 mov byte ptr [edi + 0x18f], 0xff */ { const u32 m_ = (u32)(edi + 0x18fu); M8(m_) = (u8)(0xffu); }
  /* 00537f9e mov byte ptr [edi + 0x18e], bl */ { const u32 m_ = (u32)(edi + 0x18eu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00537fa4 mov byte ptr [edi + 0x18c], bl */ { const u32 m_ = (u32)(edi + 0x18cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00537faa mov byte ptr [edi + 0x18d], bl */ { const u32 m_ = (u32)(edi + 0x18du); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00537fb0 call 0x52a540 */ esp -= 4; M32(esp) = 0x537fb5u; SAVEALL; F_0052a540(c); ABI_CHECK(0x52a540u, 0x537fb0u); RETCHK(0x537fb5u, 0x537fb0u); LOADALL;
  /* 00537fb5 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00537fb7 mov eax, 2 */ { eax = (u32)(0x2u); }
  /* 00537fbc call 0x52a5a0 */ esp -= 4; M32(esp) = 0x537fc1u; SAVEALL; F_0052a5a0(c); ABI_CHECK(0x52a5a0u, 0x537fbcu); RETCHK(0x537fc1u, 0x537fbcu); LOADALL;
  /* 00537fc1 push 0x119 */ { u32 v_ = 0x119u; esp -= 4; M32(esp) = v_; }
  /* 00537fc6 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 00537fcb mov dword ptr [edi + 0x190], eax */ { const u32 m_ = (u32)(edi + 0x190u); M32(m_) = (u32)(eax); }
  /* 00537fd1 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x537fd7u; SAVEALL; call_ind(c, t_); RETCHK(0x537fd7u, 0x537fd1u); LOADALL; }
  /* 00537fd7 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00537fda mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00537fdc mov dword ptr [ebp + 0xc], esp */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esp); }
  /* 00537fdf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00537fe0 call 0x403060 */ esp -= 4; M32(esp) = 0x537fe5u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x537fe0u); RETCHK(0x537fe5u, 0x537fe0u); LOADALL;
  /* 00537fe5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00537fe7 call 0x538490 */ esp -= 4; M32(esp) = 0x537fecu; SAVEALL; F_00538490(c); ABI_CHECK(0x538490u, 0x537fe7u); RETCHK(0x537fecu, 0x537fe7u); LOADALL;
  /* 00537fec mov ecx, dword ptr [edi + 0x1d4] */ { const u32 m_ = (u32)(edi + 0x1d4u); ecx = (u32)(M32(m_)); }
  /* 00537ff2 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00537ff4 mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00537ff7 fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 00537ffa mov dword ptr [edi + 0x50], ebx */ { const u32 m_ = (u32)(edi + 0x50u); M32(m_) = (u32)(ebx); }
  /* 00537ffd fstp dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538000 call 0x518bb0 */ esp -= 4; M32(esp) = 0x538005u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x538000u); RETCHK(0x538005u, 0x538000u); LOADALL;
  /* 00538005 call 0x518320 */ esp -= 4; M32(esp) = 0x53800au; SAVEALL; F_00518320(c); ABI_CHECK(0x518320u, 0x538005u); RETCHK(0x53800au, 0x538005u); LOADALL;
  /* 0053800a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053800c cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053800e je 0x537f4c */ if (ZF_) goto L_00537f4c;
  /* 00538014 mov eax, 0x64e38c */ { eax = (u32)(0x64e38cu); }
  /* 00538019 call 0x560ba0 */ esp -= 4; M32(esp) = 0x53801eu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x538019u); RETCHK(0x53801eu, 0x538019u); LOADALL;
  /* 0053801e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00538020 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538022 je 0x537f4c */ if (ZF_) goto L_00537f4c;
  /* 00538028 mov eax, 0x64e384 */ { eax = (u32)(0x64e384u); }
  /* 0053802d call 0x560ba0 */ esp -= 4; M32(esp) = 0x538032u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x53802du); RETCHK(0x538032u, 0x53802du); LOADALL;
  /* 00538032 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00538034 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538036 je 0x537f4c */ if (ZF_) goto L_00537f4c;
  /* 0053803c mov eax, 0x653fcc */ { eax = (u32)(0x653fccu); }
  /* 00538041 call 0x560ba0 */ esp -= 4; M32(esp) = 0x538046u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x538041u); RETCHK(0x538046u, 0x538041u); LOADALL;
  /* 00538046 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00538048 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053804a je 0x537f4c */ if (ZF_) goto L_00537f4c;
  /* 00538050 mov eax, 0x653fa4 */ { eax = (u32)(0x653fa4u); }
  /* 00538055 call 0x560ba0 */ esp -= 4; M32(esp) = 0x53805au; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x538055u); RETCHK(0x53805au, 0x538055u); LOADALL;
  /* 0053805a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053805c je 0x537f4c */ if (ZF_) goto L_00537f4c;
  /* 00538062 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00538064 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00538066 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x538069u; SAVEALL; call_ind(c, t_); RETCHK(0x538069u, 0x538066u); LOADALL; }
  /* 00538069 mov esi, eax */ { esi = (u32)(eax); }
  /* 0053806b cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053806d je 0x5380b5 */ if (ZF_) goto L_005380b5;
  /* 0053806f push 0x653f98 */ { u32 v_ = 0x653f98u; esp -= 4; M32(esp) = v_; }
  /* 00538074 call 0x560fd0 */ esp -= 4; M32(esp) = 0x538079u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x538074u); RETCHK(0x538079u, 0x538074u); LOADALL;
  /* 00538079 mov dword ptr [edi + 0x1cc], eax */ { const u32 m_ = (u32)(edi + 0x1ccu); M32(m_) = (u32)(eax); }
  /* 0053807f push 0x653f8c */ { u32 v_ = 0x653f8cu; esp -= 4; M32(esp) = v_; }
  /* 00538084 mov eax, esi */ { eax = (u32)(esi); }
  /* 00538086 call 0x560fd0 */ esp -= 4; M32(esp) = 0x53808bu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x538086u); RETCHK(0x53808bu, 0x538086u); LOADALL;
  /* 0053808b mov dword ptr [edi + 0x1d0], eax */ { const u32 m_ = (u32)(edi + 0x1d0u); M32(m_) = (u32)(eax); }
  /* 00538091 push 0x653f80 */ { u32 v_ = 0x653f80u; esp -= 4; M32(esp) = v_; }
  /* 00538096 mov eax, esi */ { eax = (u32)(esi); }
  /* 00538098 call 0x560fd0 */ esp -= 4; M32(esp) = 0x53809du; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x538098u); RETCHK(0x53809du, 0x538098u); LOADALL;
  /* 0053809d mov dword ptr [edi + 0x1d4], eax */ { const u32 m_ = (u32)(edi + 0x1d4u); M32(m_) = (u32)(eax); }
  /* 005380a3 push 0x653f74 */ { u32 v_ = 0x653f74u; esp -= 4; M32(esp) = v_; }
  /* 005380a8 mov eax, esi */ { eax = (u32)(esi); }
  /* 005380aa call 0x560fd0 */ esp -= 4; M32(esp) = 0x5380afu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5380aau); RETCHK(0x5380afu, 0x5380aau); LOADALL;
  /* 005380af mov dword ptr [edi + 0x1d8], eax */ { const u32 m_ = (u32)(edi + 0x1d8u); M32(m_) = (u32)(eax); }
L_005380b5:;
  /* 005380b5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005380b6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005380b7 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005380b9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005380ba mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005380bc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005380bd ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005380c0(CPU *c) {
  NATIVE_HOOK(0x5380c0u) REGS; LOADALL;
L_005380c0:;
  /* 005380c0 jmp 0x9dd279 */ goto L_009dd279;
L_005380c6:;
  /* 005380c6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005380c7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005380c8 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005380ca mov eax, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); eax = (u32)(M32(m_)); }
  /* 005380d0 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005380d2 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005380d4 je 0x538271 */ if (ZF_) goto L_00538271;
  /* 005380da cmp dword ptr [edi + 0x1e0], 4 */ { const u32 m_ = (u32)(edi + 0x1e0u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005380e1 je 0x538271 */ if (ZF_) goto L_00538271;
  /* 005380e7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005380e8 lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 005380eb lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005380ee call 0x52cea0 */ esp -= 4; M32(esp) = 0x5380f3u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x5380eeu); RETCHK(0x5380f3u, 0x5380eeu); LOADALL;
  /* 005380f3 mov eax, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 005380f6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005380f7 lea esi, [ebp - 0x18] */ esi = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005380fa call 0x52cf90 */ esp -= 4; M32(esp) = 0x5380ffu; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x5380fau); RETCHK(0x5380ffu, 0x5380fau); LOADALL;
  /* 005380ff mov eax, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); eax = (u32)(M32(m_)); }
  /* 00538105 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00538108 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053810a je 0x53817a */ if (ZF_) goto L_0053817a;
  /* 0053810c mov ecx, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); ecx = (u32)(M32(m_)); }
  /* 00538112 call 0x5267f0 */ esp -= 4; M32(esp) = 0x538117u; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x538112u); RETCHK(0x538117u, 0x538112u); LOADALL;
  /* 00538117 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0053811a fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053811d fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00538123 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00538125 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538128 je 0x538132 */ if (ZF_) goto L_00538132;
  /* 0053812a fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0053812c fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 0053812f fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00538132:;
  /* 00538132 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538135 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00538138 fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053813b fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00538141 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00538143 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538146 je 0x538150 */ if (ZF_) goto L_00538150;
  /* 00538148 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0053814a fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 0053814d fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00538150:;
  /* 00538150 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00538153 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538156 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00538159 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0053815c push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00538161 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00538166 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00538167 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00538168 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00538169 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0053816c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053816d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053816e mov eax, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); eax = (u32)(M32(m_)); }
  /* 00538174 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00538175 call 0x526a10 */ esp -= 4; M32(esp) = 0x53817au; SAVEALL; F_00526a10(c); ABI_CHECK(0x526a10u, 0x538175u); RETCHK(0x53817au, 0x538175u); LOADALL;
L_0053817a:;
  /* 0053817a mov ecx, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); ecx = (u32)(M32(m_)); }
  /* 00538180 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538182 jne 0x538189 */ if (!ZF_) goto L_00538189;
  /* 00538184 mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 00538187 jmp 0x53818f */ goto L_0053818f;
L_00538189:;
  /* 00538189 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 0053818c mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
L_0053818f:;
  /* 0053818f cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538191 call 0x9c13c0 */ esp -= 4; M32(esp) = 0x538196u; SAVEALL; F_009c13c0(c); ABI_CHECK(0x9c13c0u, 0x538191u); RETCHK(0x538196u, 0x538191u); LOADALL;
  /* 00538196 nop */ ;
  /* 00538197 nop */ ;
  /* 00538198 nop */ ;
  /* 00538199 nop */ ;
  /* 0053819a je 0x538270 */ if (ZF_) goto L_00538270;
  /* 005381a0 mov eax, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); eax = (u32)(M32(m_)); }
  /* 005381a6 call 0x526830 */ esp -= 4; M32(esp) = 0x5381abu; SAVEALL; F_00526830(c); ABI_CHECK(0x526830u, 0x5381a6u); RETCHK(0x5381abu, 0x5381a6u); LOADALL;
  /* 005381ab mov eax, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); eax = (u32)(M32(m_)); }
  /* 005381b1 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005381b3 mov esi, dword ptr [0x688108] */ { const u32 m_ = (u32)(0x688108u); esi = (u32)(M32(m_)); }
  /* 005381b9 mov dword ptr [0x688108], 1 */ { const u32 m_ = (u32)(0x688108u); M32(m_) = (u32)(0x1u); }
  /* 005381c3 nop */ ;
  /* 005381c4 nop */ ;
  /* 005381c5 nop */ ;
  /* 005381c6 nop */ ;
  /* 005381c7 nop */ ;
  /* 005381c8 nop */ ;
  /* 005381c9 nop */ ;
  /* 005381ca mov dword ptr [ebp - 0x14], 0x41800000 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x41800000u); }
  /* 005381d1 jne 0x5381d8 */ if (!ZF_) goto L_005381d8;
  /* 005381d3 mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 005381d6 jmp 0x5381de */ goto L_005381de;
L_005381d8:;
  /* 005381d8 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 005381db mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_005381de:;
  /* 005381de fild dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)(s32)M32(m_)); }
  /* 005381e1 push 0x41ba40 */ { u32 v_ = 0x41ba40u; esp -= 4; M32(esp) = v_; }
  /* 005381e6 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005381e8 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005381ea lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 005381ed fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005381ef nop */ ;
  /* 005381f0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005381f1 mov dword ptr [ebp - 0xc], 0x42400000 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x42400000u); }
  /* 005381f8 call 0x4b91a0 */ esp -= 4; M32(esp) = 0x5381fdu; SAVEALL; F_004b91a0(c); ABI_CHECK(0x4b91a0u, 0x5381f8u); RETCHK(0x5381fdu, 0x5381f8u); LOADALL;
  /* 005381fd mov eax, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); eax = (u32)(M32(m_)); }
  /* 00538203 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538205 mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 0053820c jne 0x538213 */ if (!ZF_) goto L_00538213;
  /* 0053820e mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 00538211 jmp 0x538219 */ goto L_00538219;
L_00538213:;
  /* 00538213 mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 00538216 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
L_00538219:;
  /* 00538219 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053821b fld dword ptr [edi + 0x1bc] */ { const u32 m_ = (u32)(edi + 0x1bcu); FPUSH((double)MF32(m_)); }
  /* 00538221 fsub dword ptr [0x657020] */ { const u32 m_ = (u32)(0x657020u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00538227 mov dword ptr [ebp - 0x20], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x3f800000u); }
  /* 0053822e fidiv dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 00538231 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538234 jne 0x53823b */ if (!ZF_) goto L_0053823b;
  /* 00538236 mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 00538239 jmp 0x538241 */ goto L_00538241;
L_0053823b:;
  /* 0053823b mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 0053823e mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_00538241:;
  /* 00538241 fild dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)(s32)M32(m_)); }
  /* 00538244 mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 00538247 mov eax, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); eax = (u32)(M32(m_)); }
  /* 0053824d fdivr dword ptr [edi + 0x1bc] */ { const u32 m_ = (u32)(edi + 0x1bcu); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 00538253 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538256 mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 00538259 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053825a push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0053825f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00538260 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00538261 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00538262 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00538265 call 0x500ca0 */ esp -= 4; M32(esp) = 0x53826au; SAVEALL; F_00500ca0(c); ABI_CHECK(0x500ca0u, 0x538265u); RETCHK(0x53826au, 0x538265u); LOADALL;
  /* 0053826a mov dword ptr [0x688108], esi */ { const u32 m_ = (u32)(0x688108u); M32(m_) = (u32)(esi); }
L_00538270:;
  /* 00538270 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00538271:;
  /* 00538271 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00538272 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00538273 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00538275 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00538276 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009dd279:;
  /* 009dd279 cmp dword ptr [0x9dd808], 0 */ { const u32 m_ = (u32)(0x9dd808u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009dd280 jne 0x9dd28d */ if (!ZF_) goto L_009dd28d;
  /* 009dd282 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 009dd283 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 009dd285 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009dd288 jmp 0x5380c6 */ goto L_005380c6;
L_009dd28d:;
  /* 009dd28d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00538280(CPU *c) {
  NATIVE_HOOK(0x538280u) REGS; LOADALL;
L_00538280:;
  /* 00538280 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00538281 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00538283 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00538284 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00538285 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00538287 mov eax, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); eax = (u32)(M32(m_)); }
  /* 0053828d cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538290 ja 0x53845f */ if (!(CF_|ZF_)) goto L_0053845f;
  /* 00538296 jmp dword ptr [eax*4 + 0x538474] */ { const u32 m_ = (u32)(eax * 4u + 0x538474u); u32 t_ = M32(m_); switch (t_) { case 0x53829du: goto L_0053829d; case 0x5382f3u: goto L_005382f3; case 0x5383bdu: goto L_005383bd; case 0x538410u: goto L_00538410; default: SAVEALL; call_ind(c, t_); return; } }
L_0053829d:;
  /* 0053829d fild dword ptr [esi + 0x1d4] */ { const u32 m_ = (u32)(esi + 0x1d4u); FPUSH((double)(s32)M32(m_)); }
  /* 005382a3 fcom dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005382a6 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005382a8 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005382ab jne 0x5382d5 */ if (!ZF_) goto L_005382d5;
  /* 005382ad fild dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); FPUSH((double)(s32)M32(m_)); }
  /* 005382b3 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005382b6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005382b7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005382b9 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005382bc fadd dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005382bf fst dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); MF32(m_) = (float)ST(0); }
  /* 005382c2 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 005382c4 fstp dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005382c7 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005382c9 call 0x508630 */ esp -= 4; M32(esp) = 0x5382ceu; SAVEALL; F_00508630(c); ABI_CHECK(0x508630u, 0x5382c9u); RETCHK(0x5382ceu, 0x5382c9u); LOADALL;
  /* 005382ce pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005382cf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005382d1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005382d2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005382d5:;
  /* 005382d5 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005382d8 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005382da push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005382db mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005382dd mov dword ptr [esi + 0x1e0], 1 */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(0x1u); }
  /* 005382e7 call 0x508630 */ esp -= 4; M32(esp) = 0x5382ecu; SAVEALL; F_00508630(c); ABI_CHECK(0x508630u, 0x5382e7u); RETCHK(0x5382ecu, 0x5382e7u); LOADALL;
  /* 005382ec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005382ed mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005382ef pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005382f0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005382f3:;
  /* 005382f3 fild dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); FPUSH((double)(s32)M32(m_)); }
  /* 005382f9 mov ecx, dword ptr [esi + 0x1c0] */ { const u32 m_ = (u32)(esi + 0x1c0u); ecx = (u32)(M32(m_)); }
  /* 005382ff lea eax, [ecx + 1] */ eax = (u32)((u32)(ecx + 0x1u));
  /* 00538302 shl eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00538305 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00538308 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0053830b fadd dword ptr [esi + 0x1bc] */ { const u32 m_ = (u32)(esi + 0x1bcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00538311 fst dword ptr [esi + 0x1bc] */ { const u32 m_ = (u32)(esi + 0x1bcu); MF32(m_) = (float)ST(0); }
  /* 00538317 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0053831a fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053831d fcomp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00538320 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00538322 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538325 jne 0x53845f */ if (!ZF_) goto L_0053845f;
  /* 0053832b mov eax, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); eax = (u32)(M32(m_)); }
  /* 00538331 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00538333 je 0x538338 */ if (ZF_) goto L_00538338;
  /* 00538335 mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
L_00538338:;
  /* 00538338 shl ecx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0053833b cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053833d jl 0x538398 */ if (LT_) goto L_00538398;
  /* 0053833f mov ecx, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 00538345 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00538346 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00538348 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053834a mov dword ptr [esi + 0x1d8], ecx */ { const u32 m_ = (u32)(esi + 0x1d8u); M32(m_) = (u32)(ecx); }
  /* 00538350 jg 0x538378 */ if (!(ZF_|LT_)) goto L_00538378;
  /* 00538352 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00538355 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00538356 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00538358 mov dword ptr [esi + 0x1c0], 0 */ { const u32 m_ = (u32)(esi + 0x1c0u); M32(m_) = (u32)(0x0u); }
  /* 00538362 mov dword ptr [esi + 0x1e0], 3 */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(0x3u); }
  /* 0053836c call 0x508630 */ esp -= 4; M32(esp) = 0x538371u; SAVEALL; F_00508630(c); ABI_CHECK(0x508630u, 0x53836cu); RETCHK(0x538371u, 0x53836cu); LOADALL;
  /* 00538371 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00538372 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00538374 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00538375 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00538378:;
  /* 00538378 lea ecx, [esi + 0x44] */ ecx = (u32)((u32)(esi + 0x44u));
  /* 0053837b call 0x40d9f0 */ esp -= 4; M32(esp) = 0x538380u; SAVEALL; F_0040d9f0(c); ABI_CHECK(0x40d9f0u, 0x53837bu); RETCHK(0x538380u, 0x53837bu); LOADALL;
  /* 00538380 fstp dword ptr [esi + 0x1bc] */ { const u32 m_ = (u32)(esi + 0x1bcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538386 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00538389 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053838a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053838c call 0x508630 */ esp -= 4; M32(esp) = 0x538391u; SAVEALL; F_00508630(c); ABI_CHECK(0x508630u, 0x53838cu); RETCHK(0x538391u, 0x53838cu); LOADALL;
  /* 00538391 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00538392 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00538394 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00538395 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00538398:;
  /* 00538398 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0053839b mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0053839e mov dword ptr [esi + 0x1bc], ecx */ { const u32 m_ = (u32)(esi + 0x1bcu); M32(m_) = (u32)(ecx); }
  /* 005383a4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005383a5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005383a7 mov dword ptr [esi + 0x1e0], 2 */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(0x2u); }
  /* 005383b1 call 0x508630 */ esp -= 4; M32(esp) = 0x5383b6u; SAVEALL; F_00508630(c); ABI_CHECK(0x508630u, 0x5383b1u); RETCHK(0x5383b6u, 0x5383b1u); LOADALL;
  /* 005383b6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005383b7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005383b9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005383ba ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005383bd:;
  /* 005383bd fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005383c0 fadd dword ptr [esi + 0x1c4] */ { const u32 m_ = (u32)(esi + 0x1c4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005383c6 fst dword ptr [esi + 0x1c4] */ { const u32 m_ = (u32)(esi + 0x1c4u); MF32(m_) = (float)ST(0); }
  /* 005383cc fcomp dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005383d2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005383d4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005383d7 jne 0x53845f */ if (!ZF_) goto L_0053845f;
  /* 005383dd mov eax, dword ptr [esi + 0x1c0] */ { const u32 m_ = (u32)(esi + 0x1c0u); eax = (u32)(M32(m_)); }
  /* 005383e3 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005383e6 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005383e7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005383e8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005383ea mov dword ptr [esi + 0x1c4], 0 */ { const u32 m_ = (u32)(esi + 0x1c4u); M32(m_) = (u32)(0x0u); }
  /* 005383f4 mov dword ptr [esi + 0x1c0], eax */ { const u32 m_ = (u32)(esi + 0x1c0u); M32(m_) = (u32)(eax); }
  /* 005383fa mov dword ptr [esi + 0x1e0], 1 */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(0x1u); }
  /* 00538404 call 0x508630 */ esp -= 4; M32(esp) = 0x538409u; SAVEALL; F_00508630(c); ABI_CHECK(0x508630u, 0x538404u); RETCHK(0x538409u, 0x538404u); LOADALL;
  /* 00538409 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053840a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053840c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053840d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00538410:;
  /* 00538410 fld dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 00538413 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00538419 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053841b test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053841e jne 0x53844e */ if (!ZF_) goto L_0053844e;
  /* 00538420 fild dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); FPUSH((double)(s32)M32(m_)); }
  /* 00538426 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00538429 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053842a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053842c fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0053842f fsubr dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 00538432 fst dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); MF32(m_) = (float)ST(0); }
  /* 00538435 fild dword ptr [esi + 0x1d4] */ { const u32 m_ = (u32)(esi + 0x1d4u); FPUSH((double)(s32)M32(m_)); }
  /* 0053843b fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 0053843d fstp dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538440 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00538442 call 0x508630 */ esp -= 4; M32(esp) = 0x538447u; SAVEALL; F_00508630(c); ABI_CHECK(0x508630u, 0x538442u); RETCHK(0x538447u, 0x538442u); LOADALL;
  /* 00538447 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00538448 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053844a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053844b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0053844e:;
  /* 0053844e mov byte ptr [esi + 0x1c8], 1 */ { const u32 m_ = (u32)(esi + 0x1c8u); M8(m_) = (u8)(0x1u); }
  /* 00538455 mov dword ptr [esi + 0x1e0], 4 */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(0x4u); }
L_0053845f:;
  /* 0053845f mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00538462 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00538463 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00538465 call 0x508630 */ esp -= 4; M32(esp) = 0x53846au; SAVEALL; F_00508630(c); ABI_CHECK(0x508630u, 0x538465u); RETCHK(0x53846au, 0x538465u); LOADALL;
  /* 0053846a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053846b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053846d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053846e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00538490(CPU *c) {
  NATIVE_HOOK(0x538490u) REGS; LOADALL;
L_00538490:;
  /* 00538490 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00538491 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00538493 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00538495 push 0x6240a8 */ { u32 v_ = 0x6240a8u; esp -= 4; M32(esp) = v_; }
  /* 0053849a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005384a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005384a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005384a8 sub esp, 0x5c */ { u32 a_ = esp, b_ = 0x5cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005384ab mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005384b0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005384b1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005384b2 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005384b5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005384b6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005384b8 lea ebx, [esi + 0x1a0] */ ebx = (u32)((u32)(esi + 0x1a0u));
  /* 005384be mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005384c5 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 005384c8 mov ecx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005384cb mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 005384d0 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005384d2 jb 0x5384d9 */ if (CF_) goto L_005384d9;
  /* 005384d4 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005384d7 jmp 0x5384dc */ goto L_005384dc;
L_005384d9:;
  /* 005384d9 lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
L_005384dc:;
  /* 005384dc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005384dd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005384de mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005384e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005384e2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005384e4 lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 005384e7 call 0x405de0 */ esp -= 4; M32(esp) = 0x5384ecu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x5384e7u); RETCHK(0x5384ecu, 0x5384e7u); LOADALL;
  /* 005384ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005384ee jne 0x538502 */ if (!ZF_) goto L_00538502;
  /* 005384f0 cmp dword ptr [ebp + 0x20], edi */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005384f3 jb 0x53859e */ if (CF_) goto L_0053859e;
  /* 005384f9 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005384fc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005384fd jmp 0x538596 */ goto L_00538596;
L_00538502:;
  /* 00538502 mov eax, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); eax = (u32)(M32(m_)); }
  /* 00538508 add esi, 0x194 */ { u32 a_ = esi, b_ = 0x194u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0053850e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00538510 mov dword ptr [ebp - 0x68], esi */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(esi); }
  /* 00538513 je 0x538528 */ if (ZF_) goto L_00538528;
  /* 00538515 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00538516 call 0x5ab020 */ esp -= 4; M32(esp) = 0x53851bu; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x538516u); RETCHK(0x53851bu, 0x538516u); LOADALL;
  /* 0053851b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053851e xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00538520 mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 00538522 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 00538525 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
L_00538528:;
  /* 00538528 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053852a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053852c lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0053852f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00538530 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00538532 call 0x404140 */ esp -= 4; M32(esp) = 0x538537u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x538532u); RETCHK(0x538537u, 0x538532u); LOADALL;
  /* 00538537 call 0x52a850 */ esp -= 4; M32(esp) = 0x53853cu; SAVEALL; F_0052a850(c); ABI_CHECK(0x52a850u, 0x538537u); RETCHK(0x53853cu, 0x538537u); LOADALL;
  /* 0053853c mov ecx, 2 */ { ecx = (u32)(0x2u); }
  /* 00538541 mov edx, eax */ { edx = (u32)(eax); }
  /* 00538543 call 0x52a8b0 */ esp -= 4; M32(esp) = 0x538548u; SAVEALL; F_0052a8b0(c); ABI_CHECK(0x52a8b0u, 0x538543u); RETCHK(0x538548u, 0x538543u); LOADALL;
  /* 00538548 mov esi, eax */ { esi = (u32)(eax); }
  /* 0053854a mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 0053854d mov ecx, 0x15 */ { ecx = (u32)(0x15u); }
  /* 00538552 lea edi, [ebp - 0x64] */ edi = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00538555 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00538557 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0053855c cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053855e mov dword ptr [ebp - 0x1c], 0xff00e8fb */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0xff00e8fbu); }
  /* 00538565 jb 0x53856c */ if (CF_) goto L_0053856c;
  /* 00538567 mov ebx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0053856a jmp 0x53856f */ goto L_0053856f;
L_0053856c:;
  /* 0053856c add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
L_0053856f:;
  /* 0053856f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00538571 push 0x320 */ { u32 v_ = 0x320u; esp -= 4; M32(esp) = v_; }
  /* 00538576 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00538579 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053857a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053857b call 0x5288e0 */ esp -= 4; M32(esp) = 0x538580u; SAVEALL; F_005288e0(c); ABI_CHECK(0x5288e0u, 0x53857bu); RETCHK(0x538580u, 0x53857bu); LOADALL;
  /* 00538580 mov ecx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); ecx = (u32)(M32(m_)); }
  /* 00538583 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00538586 mov edx, eax */ { edx = (u32)(eax); }
  /* 00538588 call 0x528970 */ esp -= 4; M32(esp) = 0x53858du; SAVEALL; F_00528970(c); ABI_CHECK(0x528970u, 0x538588u); RETCHK(0x53858du, 0x538588u); LOADALL;
  /* 0053858d cmp dword ptr [ebp + 0x20], esi */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538590 jb 0x53859e */ if (CF_) goto L_0053859e;
  /* 00538592 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00538595 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
L_00538596:;
  /* 00538596 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53859bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x538596u); RETCHK(0x53859bu, 0x538596u); LOADALL;
  /* 0053859b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053859e:;
  /* 0053859e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005385a1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005385a2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005385a3 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005385aa mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005385ad pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005385ae call 0x61af31 */ esp -= 4; M32(esp) = 0x5385b3u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x5385aeu); RETCHK(0x5385b3u, 0x5385aeu); LOADALL;
  /* 005385b3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005385b5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005385b6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_005385c0(CPU *c) {
  NATIVE_HOOK(0x5385c0u) REGS; LOADALL;
L_005385c0:;
  /* 005385c0 mov dl, byte ptr [eax + 0x1c8] */ { const u32 m_ = (u32)(eax + 0x1c8u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005385c6 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005385c8 cmp dl, cl */ { u32 a_ = (edx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005385ca je 0x5385d8 */ if (ZF_) goto L_005385d8;
  /* 005385cc mov dword ptr [eax + 0x1bc], ecx */ { const u32 m_ = (u32)(eax + 0x1bcu); M32(m_) = (u32)(ecx); }
  /* 005385d2 mov byte ptr [eax + 0x1c8], cl */ { const u32 m_ = (u32)(eax + 0x1c8u); M8(m_) = (u8)((ecx & 0xffu)); }
L_005385d8:;
  /* 005385d8 cmp dword ptr [eax + 0x1e0], 4 */ { const u32 m_ = (u32)(eax + 0x1e0u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005385df jne 0x5385e7 */ if (!ZF_) goto L_005385e7;
  /* 005385e1 mov dword ptr [eax + 0x1e0], ecx */ { const u32 m_ = (u32)(eax + 0x1e0u); M32(m_) = (u32)(ecx); }
L_005385e7:;
  /* 005385e7 cmp dword ptr [eax + 0x1e0], 3 */ { const u32 m_ = (u32)(eax + 0x1e0u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005385ee jne 0x5385fc */ if (!ZF_) goto L_005385fc;
  /* 005385f0 mov dword ptr [eax + 0x1bc], ecx */ { const u32 m_ = (u32)(eax + 0x1bcu); M32(m_) = (u32)(ecx); }
  /* 005385f6 mov dword ptr [eax + 0x1e0], ecx */ { const u32 m_ = (u32)(eax + 0x1e0u); M32(m_) = (u32)(ecx); }
L_005385fc:;
  /* 005385fc cmp dword ptr [eax + 0x1e0], 2 */ { const u32 m_ = (u32)(eax + 0x1e0u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538603 mov dword ptr [eax + 0x1c4], ecx */ { const u32 m_ = (u32)(eax + 0x1c4u); M32(m_) = (u32)(ecx); }
  /* 00538609 mov dword ptr [eax + 0x1c0], ecx */ { const u32 m_ = (u32)(eax + 0x1c0u); M32(m_) = (u32)(ecx); }
  /* 0053860f jne 0x538621 */ if (!ZF_) goto L_00538621;
  /* 00538611 mov dword ptr [eax + 0x1bc], ecx */ { const u32 m_ = (u32)(eax + 0x1bcu); M32(m_) = (u32)(ecx); }
  /* 00538617 mov dword ptr [eax + 0x1e0], 1 */ { const u32 m_ = (u32)(eax + 0x1e0u); M32(m_) = (u32)(0x1u); }
L_00538621:;
  /* 00538621 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00538630(CPU *c) {
  NATIVE_HOOK(0x538630u) REGS; LOADALL;
L_00538630:;
  /* 00538630 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00538631 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00538633 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00538635 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0053863a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00538640 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00538641 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00538648 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00538649 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053864a push 0x5386b0 */ { u32 v_ = 0x5386b0u; esp -= 4; M32(esp) = v_; }
  /* 0053864f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00538652 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00538654 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00538656 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00538659 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0053865c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053865e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053865f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00538662 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00538669 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0053866c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053866d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00538670 call 0x404140 */ esp -= 4; M32(esp) = 0x538675u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x538670u); RETCHK(0x538675u, 0x538670u); LOADALL;
  /* 00538675 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00538678 call 0x405c00 */ esp -= 4; M32(esp) = 0x53867du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x538678u); RETCHK(0x53867du, 0x538678u); LOADALL;
  /* 0053867d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0053867f call 0x405c80 */ esp -= 4; M32(esp) = 0x538684u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x53867fu); RETCHK(0x538684u, 0x53867fu); LOADALL;
  /* 00538684 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538688 jb 0x538696 */ if (CF_) goto L_00538696;
  /* 0053868a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053868d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053868e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x538693u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53868eu); RETCHK(0x538693u, 0x53868eu); LOADALL;
  /* 00538693 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00538696:;
  /* 00538696 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00538699 mov eax, esi */ { eax = (u32)(esi); }
  /* 0053869b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005386a2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005386a3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005386a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005386a6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_005386b0(CPU *c) {
  NATIVE_HOOK(0x5386b0u) REGS; LOADALL;
L_005386b0:;
  /* 005386b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005386b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005386b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005386b5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 005386ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005386c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005386c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005386c8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005386c9 push 0x1e4 */ { u32 v_ = 0x1e4u; esp -= 4; M32(esp) = v_; }
  /* 005386ce call 0x5fe934 */ esp -= 4; M32(esp) = 0x5386d3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5386ceu); RETCHK(0x5386d3u, 0x5386ceu); LOADALL;
  /* 005386d3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005386d6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005386d9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005386db mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005386e2 je 0x5386fb */ if (ZF_) goto L_005386fb;
  /* 005386e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005386e5 mov esi, eax */ { esi = (u32)(eax); }
  /* 005386e7 call 0x537c70 */ esp -= 4; M32(esp) = 0x5386ecu; SAVEALL; F_00537c70(c); ABI_CHECK(0x537c70u, 0x5386e7u); RETCHK(0x5386ecu, 0x5386e7u); LOADALL;
  /* 005386ec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005386ed mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005386f0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005386f7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005386f9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005386fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005386fb:;
  /* 005386fb mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005386fe xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00538700 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00538707 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00538709 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053870a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00538710(CPU *c) {
  NATIVE_HOOK(0x538710u) REGS; LOADALL;
L_00538710:;
  /* 00538710 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00538712 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00538713 call 0x50bb70 */ esp -= 4; M32(esp) = 0x538718u; SAVEALL; F_0050bb70(c); ABI_CHECK(0x50bb70u, 0x538713u); RETCHK(0x538718u, 0x538713u); LOADALL;
  /* 00538718 mov dword ptr [esi], 0x653fd8 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x653fd8u); }
  /* 0053871e mov eax, esi */ { eax = (u32)(esi); }
  /* 00538720 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00538730(CPU *c) {
  NATIVE_HOOK(0x538730u) REGS; LOADALL;
L_00538730:;
  /* 00538730 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00538731 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00538733 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00538734 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00538736 call 0x538760 */ esp -= 4; M32(esp) = 0x53873bu; SAVEALL; F_00538760(c); ABI_CHECK(0x538760u, 0x538736u); RETCHK(0x53873bu, 0x538736u); LOADALL;
  /* 0053873b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053873f je 0x53874a */ if (ZF_) goto L_0053874a;
  /* 00538741 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00538742 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x538747u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x538742u); RETCHK(0x538747u, 0x538742u); LOADALL;
  /* 00538747 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053874a:;
  /* 0053874a mov eax, esi */ { eax = (u32)(esi); }
  /* 0053874c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053874d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053874e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00538760(CPU *c) {
  NATIVE_HOOK(0x538760u) REGS; LOADALL;
L_00538760:;
  /* 00538760 mov dword ptr [ecx], 0x653fd8 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x653fd8u); }
  /* 00538766 jmp 0x50bc50 */ SAVEALL; F_0050bc50(c); return;
}

void F_00538770(CPU *c) {
  NATIVE_HOOK(0x538770u) REGS; LOADALL;
L_00538770:;
  /* 00538770 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00538771 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00538773 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00538775 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0053877a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00538780 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00538781 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00538788 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00538789 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053878a push 0x5387f0 */ { u32 v_ = 0x5387f0u; esp -= 4; M32(esp) = v_; }
  /* 0053878f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00538792 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00538794 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00538796 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00538799 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0053879c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053879e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053879f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 005387a2 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 005387a9 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 005387ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005387ad mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005387b0 call 0x404140 */ esp -= 4; M32(esp) = 0x5387b5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5387b0u); RETCHK(0x5387b5u, 0x5387b0u); LOADALL;
  /* 005387b5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005387b8 call 0x405c00 */ esp -= 4; M32(esp) = 0x5387bdu; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x5387b8u); RETCHK(0x5387bdu, 0x5387b8u); LOADALL;
  /* 005387bd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005387bf call 0x405c80 */ esp -= 4; M32(esp) = 0x5387c4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x5387bfu); RETCHK(0x5387c4u, 0x5387bfu); LOADALL;
  /* 005387c4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005387c8 jb 0x5387d6 */ if (CF_) goto L_005387d6;
  /* 005387ca mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005387cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005387ce call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5387d3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5387ceu); RETCHK(0x5387d3u, 0x5387ceu); LOADALL;
  /* 005387d3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005387d6:;
  /* 005387d6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005387d9 mov eax, esi */ { eax = (u32)(esi); }
  /* 005387db mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005387e2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005387e3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005387e5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005387e6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_005387f0(CPU *c) {
  NATIVE_HOOK(0x5387f0u) REGS; LOADALL;
L_005387f0:;
  /* 005387f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005387f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005387f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005387f5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 005387fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00538800 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00538801 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00538808 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00538809 push 0x1cc */ { u32 v_ = 0x1ccu; esp -= 4; M32(esp) = v_; }
  /* 0053880e call 0x5fe934 */ esp -= 4; M32(esp) = 0x538813u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53880eu); RETCHK(0x538813u, 0x53880eu); LOADALL;
  /* 00538813 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00538816 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00538819 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053881b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00538822 je 0x53883b */ if (ZF_) goto L_0053883b;
  /* 00538824 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00538825 mov esi, eax */ { esi = (u32)(eax); }
  /* 00538827 call 0x538710 */ esp -= 4; M32(esp) = 0x53882cu; SAVEALL; F_00538710(c); ABI_CHECK(0x538710u, 0x538827u); RETCHK(0x53882cu, 0x538827u); LOADALL;
  /* 0053882c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053882d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00538830 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00538837 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00538839 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053883a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0053883b:;
  /* 0053883b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053883e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00538840 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00538847 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00538849 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053884a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00538850(CPU *c) {
  NATIVE_HOOK(0x538850u) REGS; LOADALL;
L_00538850:;
  /* 00538850 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00538851 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00538853 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00538859 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053885b push 0x621028 */ { u32 v_ = 0x621028u; esp -= 4; M32(esp) = v_; }
  /* 00538860 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00538861 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00538864 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0053886b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053886c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053886d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00538870 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00538871 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00538872 call 0x50e2a0 */ esp -= 4; M32(esp) = 0x538877u; SAVEALL; F_0050e2a0(c); ABI_CHECK(0x50e2a0u, 0x538872u); RETCHK(0x538877u, 0x538872u); LOADALL;
  /* 00538877 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00538879 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0053887b mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0053887e push 0x6541e4 */ { u32 v_ = 0x6541e4u; esp -= 4; M32(esp) = v_; }
  /* 00538883 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00538886 mov dword ptr [esi], 0x6540d8 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6540d8u); }
  /* 0053888c call 0x404420 */ esp -= 4; M32(esp) = 0x538891u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53888cu); RETCHK(0x538891u, 0x53888cu); LOADALL;
  /* 00538891 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00538894 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00538897 mov dword ptr [esi + 0x1d4], eax */ { const u32 m_ = (u32)(esi + 0x1d4u); M32(m_) = (u32)(eax); }
  /* 0053889d mov dword ptr [esi + 0x1d8], eax */ { const u32 m_ = (u32)(esi + 0x1d8u); M32(m_) = (u32)(eax); }
  /* 005388a3 mov dword ptr [esi + 0x1d0], ebx */ { const u32 m_ = (u32)(esi + 0x1d0u); M32(m_) = (u32)(ebx); }
  /* 005388a9 mov byte ptr [esi + 0x20c], bl */ { const u32 m_ = (u32)(esi + 0x20cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005388af mov byte ptr [esi + 0x20e], bl */ { const u32 m_ = (u32)(esi + 0x20eu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005388b5 mov byte ptr [esi + 0x20d], bl */ { const u32 m_ = (u32)(esi + 0x20du); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005388bb mov dword ptr [esi + 0x208], ebx */ { const u32 m_ = (u32)(esi + 0x208u); M32(m_) = (u32)(ebx); }
  /* 005388c1 mov eax, esi */ { eax = (u32)(esi); }
  /* 005388c3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005388c4 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005388cb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005388cc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005388ce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005388cf ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005388e0(CPU *c) {
  NATIVE_HOOK(0x5388e0u) REGS; LOADALL;
L_005388e0:;
  /* 005388e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005388e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005388e3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005388e4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005388e6 call 0x538910 */ esp -= 4; M32(esp) = 0x5388ebu; SAVEALL; F_00538910(c); ABI_CHECK(0x538910u, 0x5388e6u); RETCHK(0x5388ebu, 0x5388e6u); LOADALL;
  /* 005388eb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005388ef je 0x5388fa */ if (ZF_) goto L_005388fa;
  /* 005388f1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005388f2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5388f7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5388f2u); RETCHK(0x5388f7u, 0x5388f2u); LOADALL;
  /* 005388f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005388fa:;
  /* 005388fa mov eax, esi */ { eax = (u32)(esi); }
  /* 005388fc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005388fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005388fe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00538910(CPU *c) {
  NATIVE_HOOK(0x538910u) REGS; LOADALL;
L_00538910:;
  /* 00538910 mov dword ptr [ecx], 0x6540d8 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x6540d8u); }
  /* 00538916 jmp 0x50e350 */ SAVEALL; F_0050e350(c); return;
}

void F_00538920(CPU *c) {
  NATIVE_HOOK(0x538920u) REGS; LOADALL;
L_00538920:;
  /* 00538920 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00538921 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00538923 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00538924 mov dword ptr [esi + 0x1c], 0x3f570a3d */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(0x3f570a3du); }
  /* 0053892b mov dword ptr [esi + 0x20], 0x3f19999a */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(0x3f19999au); }
  /* 00538932 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 00538938 mov dword ptr [esi + 0x14], 0x3f800000 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x3f800000u); }
  /* 0053893f call 0x529ec0 */ esp -= 4; M32(esp) = 0x538944u; SAVEALL; F_00529ec0(c); ABI_CHECK(0x529ec0u, 0x53893fu); RETCHK(0x538944u, 0x53893fu); LOADALL;
  /* 00538944 call 0x529f20 */ esp -= 4; M32(esp) = 0x538949u; SAVEALL; F_00529f20(c); ABI_CHECK(0x529f20u, 0x538944u); RETCHK(0x538949u, 0x538944u); LOADALL;
  /* 00538949 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0053894c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0053894d mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00538950 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00538953 mov eax, 0x3e99999a */ { eax = (u32)(0x3e99999au); }
  /* 00538958 mov dword ptr [esi + 4], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0xffffffffu); }
  /* 0053895f mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 00538962 fdivr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 00538968 mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
  /* 0053896b mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 00538972 mov dword ptr [esi + 0x10], 0 */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(0x0u); }
  /* 00538979 fstp dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053897c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053897e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053897f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00538980(CPU *c) {
  NATIVE_HOOK(0x538980u) REGS; LOADALL;
L_00538980:;
  /* 00538980 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00538981 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00538983 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00538985 push 0x626a23 */ { u32 v_ = 0x626a23u; esp -= 4; M32(esp) = v_; }
  /* 0053898a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00538990 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00538991 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00538998 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053899b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053899c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053899d mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0053899f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005389a0 lea esi, [ebx + 0x1dc] */ esi = (u32)((u32)(ebx + 0x1dcu));
  /* 005389a6 call 0x538920 */ esp -= 4; M32(esp) = 0x5389abu; SAVEALL; F_00538920(c); ABI_CHECK(0x538920u, 0x5389a6u); RETCHK(0x5389abu, 0x5389a6u); LOADALL;
  /* 005389ab mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005389ae mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005389b1 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 005389b4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005389b5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005389b6 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 005389b8 mov dword ptr [ebx + 0x1d8], 0xffffffff */ { const u32 m_ = (u32)(ebx + 0x1d8u); M32(m_) = (u32)(0xffffffffu); }
  /* 005389c2 call 0x50e360 */ esp -= 4; M32(esp) = 0x5389c7u; SAVEALL; F_0050e360(c); ABI_CHECK(0x50e360u, 0x5389c2u); RETCHK(0x5389c7u, 0x5389c2u); LOADALL;
  /* 005389c7 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 005389c9 mov byte ptr [ebp - 0x14], al */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005389cc call 0x538c80 */ esp -= 4; M32(esp) = 0x5389d1u; SAVEALL; F_00538c80(c); ABI_CHECK(0x538c80u, 0x5389ccu); RETCHK(0x5389d1u, 0x5389ccu); LOADALL;
  /* 005389d1 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005389d4 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005389d7 fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005389d9 fst dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); }
  /* 005389dc fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005389e2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005389e4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005389e7 jne 0x5389ee */ if (!ZF_) goto L_005389ee;
  /* 005389e9 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005389ec jmp 0x5389f3 */ goto L_005389f3;
L_005389ee:;
  /* 005389ee fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005389f0 fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005389f3:;
  /* 005389f3 fmul dword ptr [0x656ee0] */ { const u32 m_ = (u32)(0x656ee0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005389f9 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005389fc fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005389ff fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00538a02 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00538a08 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00538a0a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538a0d jne 0x538a13 */ if (!ZF_) goto L_00538a13;
  /* 00538a0f fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00538a11 jmp 0x538a19 */ goto L_00538a19;
L_00538a13:;
  /* 00538a13 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00538a16 fsub dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00538a19:;
  /* 00538a19 fmul dword ptr [0x656ee0] */ { const u32 m_ = (u32)(0x656ee0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00538a1f fstp dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538a22 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00538a28 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00538a2a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538a2d je 0x538a37 */ if (ZF_) goto L_00538a37;
  /* 00538a2f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00538a31 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00538a34 fsub dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00538a37:;
  /* 00538a37 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00538a3a fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00538a40 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00538a42 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538a45 jne 0x538a4c */ if (!ZF_) goto L_00538a4c;
  /* 00538a47 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00538a4a jmp 0x538a51 */ goto L_00538a51;
L_00538a4c:;
  /* 00538a4c fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 00538a4e fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00538a51:;
  /* 00538a51 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00538a54 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00538a56 fsub dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00538a59 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00538a5c sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00538a5f fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538a63 fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00538a66 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538a69 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00538a6a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00538a6b lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00538a6e call 0x52cec0 */ esp -= 4; M32(esp) = 0x538a73u; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x538a6eu); RETCHK(0x538a73u, 0x538a6eu); LOADALL;
  /* 00538a73 push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 00538a78 call 0x5fe934 */ esp -= 4; M32(esp) = 0x538a7du; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x538a78u); RETCHK(0x538a7du, 0x538a78u); LOADALL;
  /* 00538a7d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00538a80 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 00538a83 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00538a85 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00538a8c je 0x538a97 */ if (ZF_) goto L_00538a97;
  /* 00538a8e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00538a8f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00538a90 call 0x50d810 */ esp -= 4; M32(esp) = 0x538a95u; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x538a90u); RETCHK(0x538a95u, 0x538a90u); LOADALL;
  /* 00538a95 jmp 0x538a99 */ goto L_00538a99;
L_00538a97:;
  /* 00538a97 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00538a99:;
  /* 00538a99 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00538a9c mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00538aa3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00538aa4 mov edi, 0x6541c8 */ { edi = (u32)(0x6541c8u); }
  /* 00538aa9 lea esi, [ebp - 0x40] */ esi = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00538aac mov dword ptr [ebx + 0x208], eax */ { const u32 m_ = (u32)(ebx + 0x208u); M32(m_) = (u32)(eax); }
  /* 00538ab2 call 0x4646d0 */ esp -= 4; M32(esp) = 0x538ab7u; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x538ab2u); RETCHK(0x538ab7u, 0x538ab2u); LOADALL;
  /* 00538ab7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00538aba mov esi, eax */ { esi = (u32)(eax); }
  /* 00538abc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00538abe push 0x6541d4 */ { u32 v_ = 0x6541d4u; esp -= 4; M32(esp) = v_; }
  /* 00538ac3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00538ac6 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00538acd lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00538ad0 mov eax, esp */ { eax = (u32)(esp); }
  /* 00538ad2 mov dword ptr [ebp + 0xc], esp */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esp); }
  /* 00538ad5 call 0x52cea0 */ esp -= 4; M32(esp) = 0x538adau; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x538ad5u); RETCHK(0x538adau, 0x538ad5u); LOADALL;
  /* 00538ada mov ebx, dword ptr [ebx + 0x208] */ { const u32 m_ = (u32)(ebx + 0x208u); ebx = (u32)(M32(m_)); }
  /* 00538ae0 mov eax, esi */ { eax = (u32)(esi); }
  /* 00538ae2 call 0x50da30 */ esp -= 4; M32(esp) = 0x538ae7u; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x538ae2u); RETCHK(0x538ae7u, 0x538ae2u); LOADALL;
  /* 00538ae7 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 00538ae9 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00538aec neg bl */ { u32 a_ = (ebx & 0xffu); u32 r_ = (0u - a_) & 0xffu; ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 00538aee sbb bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00538af0 inc bl */ { u32 a_ = (ebx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 00538af2 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538af5 jb 0x538b03 */ if (CF_) goto L_00538b03;
  /* 00538af7 mov edx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edx = (u32)(M32(m_)); }
  /* 00538afa push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00538afb call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x538b00u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x538afbu); RETCHK(0x538b00u, 0x538afbu); LOADALL;
  /* 00538b00 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00538b03:;
  /* 00538b03 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00538b06 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538b08 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00538b0b dec al */ { u32 a_ = (eax & 0xffu); u32 r_ = (a_ - 1u) & 0xffu; eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 00538b0d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00538b0e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00538b0f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00538b10 and eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00538b12 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00538b15 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00538b1c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00538b1e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00538b1f ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00538b30(CPU *c) {
  NATIVE_HOOK(0x538b30u) REGS; LOADALL;
L_00538b30:;
  /* 00538b30 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00538b31 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00538b32 mov esi, eax */ { esi = (u32)(eax); }
  /* 00538b34 add esi, 0x1dc */ { u32 a_ = esi, b_ = 0x1dcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00538b3a mov ecx, 0xb */ { ecx = (u32)(0xbu); }
  /* 00538b3f mov edi, edx */ { edi = (u32)(edx); }
  /* 00538b41 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00538b43 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00538b44 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00538b45 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00538b50(CPU *c) {
  NATIVE_HOOK(0x538b50u) REGS; LOADALL;
L_00538b50:;
  /* 00538b50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00538b51 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00538b52 mov edi, eax */ { edi = (u32)(eax); }
  /* 00538b54 add edi, 0x1dc */ { u32 a_ = edi, b_ = 0x1dcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00538b5a mov ecx, 0xb */ { ecx = (u32)(0xbu); }
  /* 00538b5f mov esi, edx */ { esi = (u32)(edx); }
  /* 00538b61 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00538b63 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00538b64 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00538b65 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00538b70(CPU *c) {
  NATIVE_HOOK(0x538b70u) REGS; LOADALL;
L_00538b70:;
  /* 00538b70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00538b71 mov esi, eax */ { esi = (u32)(eax); }
  /* 00538b73 cmp dword ptr [esi + 0x1d4], -1 */ { const u32 m_ = (u32)(esi + 0x1d4u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538b7a mov dword ptr [esi + 0x1d0], 1 */ { const u32 m_ = (u32)(esi + 0x1d0u); M32(m_) = (u32)(0x1u); }
  /* 00538b84 jne 0x538b94 */ if (!ZF_) goto L_00538b94;
  /* 00538b86 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00538b88 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00538b89 call 0x507ba0 */ esp -= 4; M32(esp) = 0x538b8eu; SAVEALL; F_00507ba0(c); ABI_CHECK(0x507ba0u, 0x538b89u); RETCHK(0x538b8eu, 0x538b89u); LOADALL;
  /* 00538b8e mov dword ptr [esi + 0x1d4], eax */ { const u32 m_ = (u32)(esi + 0x1d4u); M32(m_) = (u32)(eax); }
L_00538b94:;
  /* 00538b94 call 0x538c80 */ esp -= 4; M32(esp) = 0x538b99u; SAVEALL; F_00538c80(c); ABI_CHECK(0x538c80u, 0x538b94u); RETCHK(0x538b99u, 0x538b94u); LOADALL;
  /* 00538b99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00538b9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00538ba0(CPU *c) {
  NATIVE_HOOK(0x538ba0u) REGS; LOADALL;
L_00538ba0:;
  /* 00538ba0 mov eax, dword ptr [eax + 0x1d0] */ { const u32 m_ = (u32)(eax + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 00538ba6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00538bb0(CPU *c) {
  NATIVE_HOOK(0x538bb0u) REGS; LOADALL;
L_00538bb0:;
  /* 00538bb0 cmp dword ptr [esi + 0x1d4], -1 */ { const u32 m_ = (u32)(esi + 0x1d4u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538bb7 jne 0x538c00 */ if (!ZF_) goto L_00538c00;
  /* 00538bb9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00538bbb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00538bbc call 0x507ba0 */ esp -= 4; M32(esp) = 0x538bc1u; SAVEALL; F_00507ba0(c); ABI_CHECK(0x507ba0u, 0x538bbcu); RETCHK(0x538bc1u, 0x538bbcu); LOADALL;
  /* 00538bc1 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538bc3 mov dword ptr [esi + 0x1d4], eax */ { const u32 m_ = (u32)(esi + 0x1d4u); M32(m_) = (u32)(eax); }
  /* 00538bc9 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00538bce mov dword ptr [esi + 0x1ec], 0 */ { const u32 m_ = (u32)(esi + 0x1ecu); M32(m_) = (u32)(0x0u); }
  /* 00538bd8 mov dword ptr [esi + 0x1e0], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(0xffffffffu); }
  /* 00538be2 mov dword ptr [esi + 0x1d0], eax */ { const u32 m_ = (u32)(esi + 0x1d0u); M32(m_) = (u32)(eax); }
  /* 00538be8 mov byte ptr [esi + 0x20d], bl */ { const u32 m_ = (u32)(esi + 0x20du); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00538bee jne 0x538bfa */ if (!ZF_) goto L_00538bfa;
  /* 00538bf0 mov dword ptr [esi + 0x1d8], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x1d8u); M32(m_) = (u32)(0xffffffffu); }
L_00538bfa:;
  /* 00538bfa mov byte ptr [esi + 0x20c], al */ { const u32 m_ = (u32)(esi + 0x20cu); M8(m_) = (u8)((eax & 0xffu)); }
L_00538c00:;
  /* 00538c00 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00538c10(CPU *c) {
  NATIVE_HOOK(0x538c10u) REGS; LOADALL;
L_00538c10:;
  /* 00538c10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00538c11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00538c13 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00538c16 mov eax, dword ptr [edi + 0x1d4] */ { const u32 m_ = (u32)(edi + 0x1d4u); eax = (u32)(M32(m_)); }
  /* 00538c1c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00538c1d or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00538c20 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538c22 je 0x538c76 */ if (ZF_) goto L_00538c76;
  /* 00538c24 mov ecx, dword ptr [edi + 0x1e0] */ { const u32 m_ = (u32)(edi + 0x1e0u); ecx = (u32)(M32(m_)); }
  /* 00538c2a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00538c2b mov dword ptr [edi + 0x1d8], ecx */ { const u32 m_ = (u32)(edi + 0x1d8u); M32(m_) = (u32)(ecx); }
  /* 00538c31 mov dword ptr [edi + 0x1e0], esi */ { const u32 m_ = (u32)(edi + 0x1e0u); M32(m_) = (u32)(esi); }
  /* 00538c37 mov dword ptr [edi + 0x1dc], 0 */ { const u32 m_ = (u32)(edi + 0x1dcu); M32(m_) = (u32)(0x0u); }
  /* 00538c41 call 0x507be0 */ esp -= 4; M32(esp) = 0x538c46u; SAVEALL; F_00507be0(c); ABI_CHECK(0x507be0u, 0x538c41u); RETCHK(0x538c46u, 0x538c41u); LOADALL;
  /* 00538c46 mov dword ptr [edi + 0x1d4], esi */ { const u32 m_ = (u32)(edi + 0x1d4u); M32(m_) = (u32)(esi); }
  /* 00538c4c mov dword ptr [ebp - 0x18], 0x206 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x206u); }
  /* 00538c53 mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 00538c56 call 0x529ec0 */ esp -= 4; M32(esp) = 0x538c5bu; SAVEALL; F_00529ec0(c); ABI_CHECK(0x529ec0u, 0x538c56u); RETCHK(0x538c5bu, 0x538c56u); LOADALL;
  /* 00538c5b mov esi, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); esi = (u32)(M32(m_)); }
  /* 00538c61 mov edx, eax */ { edx = (u32)(eax); }
  /* 00538c63 call 0x529f40 */ esp -= 4; M32(esp) = 0x538c68u; SAVEALL; F_00529f40(c); ABI_CHECK(0x529f40u, 0x538c63u); RETCHK(0x538c68u, 0x538c63u); LOADALL;
  /* 00538c68 mov ecx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00538c6b lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00538c6e mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00538c71 call 0x508540 */ esp -= 4; M32(esp) = 0x538c76u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x538c71u); RETCHK(0x538c76u, 0x538c71u); LOADALL;
L_00538c76:;
  /* 00538c76 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00538c77 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00538c79 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00538c7a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00538c80(CPU *c) {
  NATIVE_HOOK(0x538c80u) REGS; LOADALL;
L_00538c80:;
  /* 00538c80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00538c81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00538c83 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00538c84 mov ecx, dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); ecx = (u32)(M32(m_)); }
  /* 00538c8a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00538c8c je 0x538d89 */ if (ZF_) goto L_00538d89;
  /* 00538c92 fld dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); FPUSH((double)MF32(m_)); }
  /* 00538c98 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00538c9e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00538ca0 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538ca3 jp 0x538cb7 */ if (PF_) goto L_00538cb7;
  /* 00538ca5 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 00538cab fsub dword ptr [esi + 0x1f4] */ { const u32 m_ = (u32)(esi + 0x1f4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00538cb1 fstp dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); MF32(m_) = (float)ST(0); FPOP(); }
L_00538cb7:;
  /* 00538cb7 fld dword ptr [esi + 0x1f4] */ { const u32 m_ = (u32)(esi + 0x1f4u); FPUSH((double)MF32(m_)); }
  /* 00538cbd fadd dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00538cc3 fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00538cc9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00538ccb test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538cce jne 0x538cda */ if (!ZF_) goto L_00538cda;
  /* 00538cd0 mov dword ptr [esi + 0x1ec], 0 */ { const u32 m_ = (u32)(esi + 0x1ecu); M32(m_) = (u32)(0x0u); }
L_00538cda:;
  /* 00538cda mov eax, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); eax = (u32)(M32(m_)); }
  /* 00538ce0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538ce3 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00538ce6 jl 0x538d79 */ if (LT_) goto L_00538d79;
  /* 00538cec cmp eax, dword ptr [esi + 0x1e4] */ { const u32 m_ = (u32)(esi + 0x1e4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538cf2 jg 0x538d79 */ if (!(ZF_|LT_)) goto L_00538d79;
  /* 00538cf8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538cfb mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 00538d00 jne 0x538d1a */ if (!ZF_) goto L_00538d1a;
  /* 00538d02 cmp dword ptr [esi + 0x1d0], edx */ { const u32 m_ = (u32)(esi + 0x1d0u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538d08 je 0x538d15 */ if (ZF_) goto L_00538d15;
  /* 00538d0a mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00538d0c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00538d0e call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x538d11u; SAVEALL; call_ind(c, t_); RETCHK(0x538d11u, 0x538d0eu); LOADALL; }
  /* 00538d11 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00538d13 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00538d14 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00538d15:;
  /* 00538d15 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538d18 je 0x538d31 */ if (ZF_) goto L_00538d31;
L_00538d1a:;
  /* 00538d1a cmp dword ptr [esi + 0x1d0], edx */ { const u32 m_ = (u32)(esi + 0x1d0u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538d20 je 0x538d31 */ if (ZF_) goto L_00538d31;
  /* 00538d22 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00538d25 fmul dword ptr [esi + 0x1f4] */ { const u32 m_ = (u32)(esi + 0x1f4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00538d2b fstp dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); MF32(m_) = (float)ST(0); FPOP(); }
L_00538d31:;
  /* 00538d31 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00538d33 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00538d34 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x538d37u; SAVEALL; call_ind(c, t_); RETCHK(0x538d37u, 0x538d34u); LOADALL; }
  /* 00538d37 fld dword ptr [esi + 0x1f4] */ { const u32 m_ = (u32)(esi + 0x1f4u); FPUSH((double)MF32(m_)); }
  /* 00538d3d fadd dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00538d43 mov eax, dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); eax = (u32)(M32(m_)); }
  /* 00538d49 mov ecx, dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); ecx = (u32)(M32(m_)); }
  /* 00538d4f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00538d51 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00538d54 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538d58 fld dword ptr [esi + 0x1f0] */ { const u32 m_ = (u32)(esi + 0x1f0u); FPUSH((double)MF32(m_)); }
  /* 00538d5e fadd dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00538d64 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538d67 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00538d68 mov eax, dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 00538d6e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00538d6f call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x538d75u; SAVEALL; call_ind(c, t_); RETCHK(0x538d75u, 0x538d6fu); LOADALL; }
  /* 00538d75 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00538d77 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00538d78 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00538d79:;
  /* 00538d79 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00538d7b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00538d7d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00538d7f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00538d81 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00538d83 call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x538d89u; SAVEALL; call_ind(c, t_); RETCHK(0x538d89u, 0x538d83u); LOADALL; }
L_00538d89:;
  /* 00538d89 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00538d8b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00538d8c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00538d90(CPU *c) {
  NATIVE_HOOK(0x538d90u) REGS; LOADALL;
L_00538d90:;
  /* 00538d90 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00538d92 jl 0x538db3 */ if (LT_) goto L_00538db3;
  /* 00538d94 cmp ecx, dword ptr [eax + 0x1e4] */ { const u32 m_ = (u32)(eax + 0x1e4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538d9a jg 0x538db3 */ if (!(ZF_|LT_)) goto L_00538db3;
  /* 00538d9c mov dl, byte ptr [eax + 0x20d] */ { const u32 m_ = (u32)(eax + 0x20du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00538da2 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538da4 jne 0x538dad */ if (!ZF_) goto L_00538dad;
  /* 00538da6 mov byte ptr [eax + 0x20c], 0 */ { const u32 m_ = (u32)(eax + 0x20cu); M8(m_) = (u8)(0x0u); }
L_00538dad:;
  /* 00538dad mov dword ptr [eax + 0x1e0], ecx */ { const u32 m_ = (u32)(eax + 0x1e0u); M32(m_) = (u32)(ecx); }
L_00538db3:;
  /* 00538db3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00538dc0(CPU *c) {
  NATIVE_HOOK(0x538dc0u) REGS; LOADALL;
L_00538dc0:;
  /* 00538dc0 mov eax, dword ptr [eax + 0x1d8] */ { const u32 m_ = (u32)(eax + 0x1d8u); eax = (u32)(M32(m_)); }
  /* 00538dc6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00538dd0(CPU *c) {
  NATIVE_HOOK(0x538dd0u) REGS; LOADALL;
L_00538dd0:;
  /* 00538dd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00538dd1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00538dd3 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00538dd5 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538dd8 sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 00538ddb mov dword ptr [esi + 0x1d8], eax */ { const u32 m_ = (u32)(esi + 0x1d8u); M32(m_) = (u32)(eax); }
  /* 00538de1 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00538de2 and ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00538de5 mov dword ptr [esi + 0x1d0], ecx */ { const u32 m_ = (u32)(esi + 0x1d0u); M32(m_) = (u32)(ecx); }
  /* 00538deb call 0x538c80 */ esp -= 4; M32(esp) = 0x538df0u; SAVEALL; F_00538c80(c); ABI_CHECK(0x538c80u, 0x538debu); RETCHK(0x538df0u, 0x538debu); LOADALL;
  /* 00538df0 mov byte ptr [esi + 0x20c], 0 */ { const u32 m_ = (u32)(esi + 0x20cu); M8(m_) = (u8)(0x0u); }
  /* 00538df7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00538df8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00538e00(CPU *c) {
  NATIVE_HOOK(0x538e00u) REGS; LOADALL;
L_00538e00:;
  /* 00538e00 mov eax, dword ptr [eax + 0x1e0] */ { const u32 m_ = (u32)(eax + 0x1e0u); eax = (u32)(M32(m_)); }
  /* 00538e06 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00538e10(CPU *c) {
  NATIVE_HOOK(0x538e10u) REGS; LOADALL;
L_00538e10:;
  /* 00538e10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00538e11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00538e13 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00538e14 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00538e17 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00538e18 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00538e1a mov al, byte ptr [esi + 0x20c] */ { const u32 m_ = (u32)(esi + 0x20cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00538e20 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538e22 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00538e23 je 0x538e65 */ if (ZF_) goto L_00538e65;
  /* 00538e25 fmul dword ptr [esi + 0x1f8] */ { const u32 m_ = (u32)(esi + 0x1f8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00538e2b fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538e2e fld dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); FPUSH((double)MF32(m_)); }
  /* 00538e34 fcomp dword ptr [esi + 0x200] */ { const u32 m_ = (u32)(esi + 0x200u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00538e3a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00538e3c test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538e3f jp 0x538e52 */ if (PF_) goto L_00538e52;
  /* 00538e41 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00538e44 fadd dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00538e4a fstp dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538e50 jmp 0x538eae */ goto L_00538eae;
L_00538e52:;
  /* 00538e52 mov al, byte ptr [esi + 0x20d] */ { const u32 m_ = (u32)(esi + 0x20du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00538e58 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538e5a je 0x538eae */ if (ZF_) goto L_00538eae;
  /* 00538e5c mov byte ptr [esi + 0x20c], 0 */ { const u32 m_ = (u32)(esi + 0x20cu); M8(m_) = (u8)(0x0u); }
  /* 00538e63 jmp 0x538eae */ goto L_00538eae;
L_00538e65:;
  /* 00538e65 fadd dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00538e6b fcom dword ptr [esi + 0x200] */ { const u32 m_ = (u32)(esi + 0x200u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00538e71 fst dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); MF32(m_) = (float)ST(0); }
  /* 00538e77 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00538e79 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538e7c jp 0x538e8b */ if (PF_) goto L_00538e8b;
  /* 00538e7e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00538e80 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00538e83 fmul dword ptr [esi + 0x1f8] */ { const u32 m_ = (u32)(esi + 0x1f8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00538e89 jmp 0x538eab */ goto L_00538eab;
L_00538e8b:;
  /* 00538e8b fld dword ptr [esi + 0x204] */ { const u32 m_ = (u32)(esi + 0x204u); FPUSH((double)MF32(m_)); }
  /* 00538e91 fadd dword ptr [esi + 0x200] */ { const u32 m_ = (u32)(esi + 0x200u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00538e97 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00538e99 fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 00538e9b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00538e9d test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538ea0 jp 0x538f1c */ if (PF_) goto L_00538f1c;
  /* 00538ea2 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00538ea5 fmul dword ptr [esi + 0x1fc] */ { const u32 m_ = (u32)(esi + 0x1fcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
L_00538eab:;
  /* 00538eab fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
L_00538eae:;
  /* 00538eae mov eax, dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 00538eb4 or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00538eb7 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538eba je 0x538f00 */ if (ZF_) goto L_00538f00;
  /* 00538ebc cmp dword ptr [esi + 0x1d4], edi */ { const u32 m_ = (u32)(esi + 0x1d4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538ec2 je 0x538eef */ if (ZF_) goto L_00538eef;
  /* 00538ec4 call 0x529ec0 */ esp -= 4; M32(esp) = 0x538ec9u; SAVEALL; F_00529ec0(c); ABI_CHECK(0x529ec0u, 0x538ec4u); RETCHK(0x538ec9u, 0x538ec4u); LOADALL;
  /* 00538ec9 mov edx, eax */ { edx = (u32)(eax); }
  /* 00538ecb call 0x529f70 */ esp -= 4; M32(esp) = 0x538ed0u; SAVEALL; F_00529f70(c); ABI_CHECK(0x529f70u, 0x538ecbu); RETCHK(0x538ed0u, 0x538ecbu); LOADALL;
  /* 00538ed0 mov dword ptr [esi + 0x1e0], eax */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(eax); }
  /* 00538ed6 mov eax, dword ptr [esi + 0x1d4] */ { const u32 m_ = (u32)(esi + 0x1d4u); eax = (u32)(M32(m_)); }
  /* 00538edc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00538edd mov byte ptr [esi + 0x20c], 0 */ { const u32 m_ = (u32)(esi + 0x20cu); M8(m_) = (u8)(0x0u); }
  /* 00538ee4 call 0x507be0 */ esp -= 4; M32(esp) = 0x538ee9u; SAVEALL; F_00507be0(c); ABI_CHECK(0x507be0u, 0x538ee4u); RETCHK(0x538ee9u, 0x538ee4u); LOADALL;
  /* 00538ee9 mov dword ptr [esi + 0x1d4], edi */ { const u32 m_ = (u32)(esi + 0x1d4u); M32(m_) = (u32)(edi); }
L_00538eef:;
  /* 00538eef cmp dword ptr [esi + 0x1d0], 1 */ { const u32 m_ = (u32)(esi + 0x1d0u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538ef6 je 0x538f00 */ if (ZF_) goto L_00538f00;
  /* 00538ef8 cmp dword ptr [esi + 0x1e0], edi */ { const u32 m_ = (u32)(esi + 0x1e0u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00538efe je 0x538f3a */ if (ZF_) goto L_00538f3a;
L_00538f00:;
  /* 00538f00 fld dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); FPUSH((double)MF32(m_)); }
  /* 00538f06 fsub dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00538f09 fstp dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538f0f call 0x538c80 */ esp -= 4; M32(esp) = 0x538f14u; SAVEALL; F_00538c80(c); ABI_CHECK(0x538c80u, 0x538f0fu); RETCHK(0x538f14u, 0x538f0fu); LOADALL;
  /* 00538f14 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00538f15 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00538f16 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00538f18 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00538f19 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00538f1c:;
  /* 00538f1c fild dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); FPUSH((double)(s32)M32(m_)); }
  /* 00538f22 fmul dword ptr [esi + 0x1f4] */ { const u32 m_ = (u32)(esi + 0x1f4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00538f28 fstp dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538f2e call 0x538c80 */ esp -= 4; M32(esp) = 0x538f33u; SAVEALL; F_00538c80(c); ABI_CHECK(0x538c80u, 0x538f2eu); RETCHK(0x538f33u, 0x538f2eu); LOADALL;
  /* 00538f33 mov edi, esi */ { edi = (u32)(esi); }
  /* 00538f35 call 0x538c10 */ esp -= 4; M32(esp) = 0x538f3au; SAVEALL; F_00538c10(c); ABI_CHECK(0x538c10u, 0x538f35u); RETCHK(0x538f3au, 0x538f35u); LOADALL;
L_00538f3a:;
  /* 00538f3a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00538f3b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00538f3c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00538f3e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00538f3f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00538f50(CPU *c) {
  NATIVE_HOOK(0x538f50u) REGS; LOADALL;
L_00538f50:;
  /* 00538f50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00538f51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00538f53 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00538f56 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00538f57 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00538f59 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00538f5b call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x538f5eu; SAVEALL; call_ind(c, t_); RETCHK(0x538f5eu, 0x538f5bu); LOADALL; }
  /* 00538f5e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00538f60 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00538f63 fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00538f65 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00538f6b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00538f6d test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538f70 je 0x538f79 */ if (ZF_) goto L_00538f79;
  /* 00538f72 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00538f74 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 00538f76 fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00538f79:;
  /* 00538f79 fmul dword ptr [0x656ee0] */ { const u32 m_ = (u32)(0x656ee0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00538f7f mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00538f81 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00538f83 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538f86 call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x538f89u; SAVEALL; call_ind(c, t_); RETCHK(0x538f89u, 0x538f86u); LOADALL; }
  /* 00538f89 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00538f8b fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00538f8e fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00538f91 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00538f97 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00538f99 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538f9c je 0x538fa6 */ if (ZF_) goto L_00538fa6;
  /* 00538f9e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00538fa0 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00538fa3 fsub dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00538fa6:;
  /* 00538fa6 fmul dword ptr [0x656ee0] */ { const u32 m_ = (u32)(0x656ee0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00538fac mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00538fae mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00538fb0 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538fb3 call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x538fb6u; SAVEALL; call_ind(c, t_); RETCHK(0x538fb6u, 0x538fb3u); LOADALL; }
  /* 00538fb6 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00538fb8 fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00538fbb fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00538fbe fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00538fc4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00538fc6 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538fc9 je 0x538fd3 */ if (ZF_) goto L_00538fd3;
  /* 00538fcb fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00538fcd fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00538fd0 fsub dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00538fd3:;
  /* 00538fd3 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00538fd5 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00538fd8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00538fda call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x538fddu; SAVEALL; call_ind(c, t_); RETCHK(0x538fddu, 0x538fdau); LOADALL; }
  /* 00538fdd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00538fdf fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00538fe2 fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00538fe4 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00538fea fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00538fec test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00538fef je 0x538ff8 */ if (ZF_) goto L_00538ff8;
  /* 00538ff1 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00538ff3 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 00538ff5 fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00538ff8:;
  /* 00538ff8 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00538ffb mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00538ffe fsub dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00539001 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00539004 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00539007 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053900b fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053900e fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00539011 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539012 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00539013 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00539016 call 0x52cec0 */ esp -= 4; M32(esp) = 0x53901bu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x539016u); RETCHK(0x53901bu, 0x539016u); LOADALL;
  /* 0053901b mov eax, dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); eax = (u32)(M32(m_)); }
  /* 00539021 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00539023 je 0x53906c */ if (ZF_) goto L_0053906c;
  /* 00539025 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00539027 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00539029 call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53902cu; SAVEALL; call_ind(c, t_); RETCHK(0x53902cu, 0x539029u); LOADALL; }
  /* 0053902c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053902e lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00539031 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00539034 call 0x52cee0 */ esp -= 4; M32(esp) = 0x539039u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x539034u); RETCHK(0x539039u, 0x539034u); LOADALL;
  /* 00539039 mov ecx, dword ptr [esi + 0x208] */ { const u32 m_ = (u32)(esi + 0x208u); ecx = (u32)(M32(m_)); }
  /* 0053903f mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00539041 call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x539044u; SAVEALL; call_ind(c, t_); RETCHK(0x539044u, 0x539041u); LOADALL; }
  /* 00539044 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00539046 lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00539049 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053904c call 0x52cee0 */ esp -= 4; M32(esp) = 0x539051u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x53904cu); RETCHK(0x539051u, 0x53904cu); LOADALL;
  /* 00539051 mov ecx, dword ptr [esi + 0x208] */ { const u32 m_ = (u32)(esi + 0x208u); ecx = (u32)(M32(m_)); }
  /* 00539057 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00539059 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053905b mov al, byte ptr [esi + 0x20e] */ { const u32 m_ = (u32)(esi + 0x20eu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00539061 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539062 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x539065u; SAVEALL; call_ind(c, t_); RETCHK(0x539065u, 0x539062u); LOADALL; }
  /* 00539065 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00539067 call 0x509700 */ esp -= 4; M32(esp) = 0x53906cu; SAVEALL; F_00509700(c); ABI_CHECK(0x509700u, 0x539067u); RETCHK(0x53906cu, 0x539067u); LOADALL;
L_0053906c:;
  /* 0053906c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053906d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053906f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00539070 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00539080(CPU *c) {
  NATIVE_HOOK(0x539080u) REGS; LOADALL;
L_00539080:;
  /* 00539080 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00539081 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00539083 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00539085 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0053908a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00539090 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539091 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00539098 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00539099 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053909a push 0x539100 */ { u32 v_ = 0x539100u; esp -= 4; M32(esp) = v_; }
  /* 0053909f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005390a2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005390a4 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 005390a6 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005390a9 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 005390ac push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005390ae push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005390af lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 005390b2 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 005390b9 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 005390bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005390bd mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005390c0 call 0x404140 */ esp -= 4; M32(esp) = 0x5390c5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5390c0u); RETCHK(0x5390c5u, 0x5390c0u); LOADALL;
  /* 005390c5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005390c8 call 0x405c00 */ esp -= 4; M32(esp) = 0x5390cdu; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x5390c8u); RETCHK(0x5390cdu, 0x5390c8u); LOADALL;
  /* 005390cd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005390cf call 0x405c80 */ esp -= 4; M32(esp) = 0x5390d4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x5390cfu); RETCHK(0x5390d4u, 0x5390cfu); LOADALL;
  /* 005390d4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005390d8 jb 0x5390e6 */ if (CF_) goto L_005390e6;
  /* 005390da mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005390dd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005390de call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5390e3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5390deu); RETCHK(0x5390e3u, 0x5390deu); LOADALL;
  /* 005390e3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005390e6:;
  /* 005390e6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005390e9 mov eax, esi */ { eax = (u32)(esi); }
  /* 005390eb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005390f2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005390f3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005390f5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005390f6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00539100(CPU *c) {
  NATIVE_HOOK(0x539100u) REGS; LOADALL;
L_00539100:;
  /* 00539100 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00539101 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00539103 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00539105 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0053910a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00539110 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539111 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00539118 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00539119 push 0x210 */ { u32 v_ = 0x210u; esp -= 4; M32(esp) = v_; }
  /* 0053911e call 0x5fe934 */ esp -= 4; M32(esp) = 0x539123u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53911eu); RETCHK(0x539123u, 0x53911eu); LOADALL;
  /* 00539123 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00539126 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00539129 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053912b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00539132 je 0x53914a */ if (ZF_) goto L_0053914a;
  /* 00539134 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00539136 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539137 call 0x538850 */ esp -= 4; M32(esp) = 0x53913cu; SAVEALL; F_00538850(c); ABI_CHECK(0x538850u, 0x539137u); RETCHK(0x53913cu, 0x539137u); LOADALL;
  /* 0053913c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053913f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00539146 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00539148 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00539149 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0053914a:;
  /* 0053914a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053914d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053914f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00539156 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00539158 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00539159 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00539160(CPU *c) {
  NATIVE_HOOK(0x539160u) REGS; LOADALL;
L_00539160:;
  /* 00539160 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00539161 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00539163 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00539169 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053916b push 0x61d936 */ { u32 v_ = 0x61d936u; esp -= 4; M32(esp) = v_; }
  /* 00539170 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539171 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00539174 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0053917b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053917c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053917d mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00539180 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539181 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00539182 call 0x506b60 */ esp -= 4; M32(esp) = 0x539187u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x539182u); RETCHK(0x539187u, 0x539182u); LOADALL;
  /* 00539187 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0053918e lea esi, [edi + 0x180] */ esi = (u32)((u32)(edi + 0x180u));
  /* 00539194 mov dword ptr [edi], 0x6541f8 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x6541f8u); }
  /* 0053919a call 0x5267c0 */ esp -= 4; M32(esp) = 0x53919fu; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x53919au); RETCHK(0x53919fu, 0x53919au); LOADALL;
  /* 0053919f lea edx, [edi + 0x218] */ edx = (u32)((u32)(edi + 0x218u));
  /* 005391a5 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 005391a9 call 0x549dc0 */ esp -= 4; M32(esp) = 0x5391aeu; SAVEALL; F_00549dc0(c); ABI_CHECK(0x549dc0u, 0x5391a9u); RETCHK(0x5391aeu, 0x5391a9u); LOADALL;
  /* 005391ae push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 005391b0 push 0x654308 */ { u32 v_ = 0x654308u; esp -= 4; M32(esp) = v_; }
  /* 005391b5 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 005391b8 call 0x404420 */ esp -= 4; M32(esp) = 0x5391bdu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5391b8u); RETCHK(0x5391bdu, 0x5391b8u); LOADALL;
  /* 005391bd mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005391c0 mov byte ptr [edi + 0x3c], 0 */ { const u32 m_ = (u32)(edi + 0x3cu); M8(m_) = (u8)(0x0u); }
  /* 005391c4 mov byte ptr [edi + 0x3d], 1 */ { const u32 m_ = (u32)(edi + 0x3du); M8(m_) = (u8)(0x1u); }
  /* 005391c8 mov dword ptr [edi + 0x214], 0 */ { const u32 m_ = (u32)(edi + 0x214u); M32(m_) = (u32)(0x0u); }
  /* 005391d2 mov eax, edi */ { eax = (u32)(edi); }
  /* 005391d4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005391d5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005391dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005391dd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005391df pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005391e0 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005391f0(CPU *c) {
  NATIVE_HOOK(0x5391f0u) REGS; LOADALL;
L_005391f0:;
  /* 005391f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005391f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005391f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005391f4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005391f6 call 0x539220 */ esp -= 4; M32(esp) = 0x5391fbu; SAVEALL; F_00539220(c); ABI_CHECK(0x539220u, 0x5391f6u); RETCHK(0x5391fbu, 0x5391f6u); LOADALL;
  /* 005391fb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005391ff je 0x53920a */ if (ZF_) goto L_0053920a;
  /* 00539201 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00539202 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x539207u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x539202u); RETCHK(0x539207u, 0x539202u); LOADALL;
  /* 00539207 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053920a:;
  /* 0053920a mov eax, esi */ { eax = (u32)(esi); }
  /* 0053920c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053920d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053920e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00539220(CPU *c) {
  NATIVE_HOOK(0x539220u) REGS; LOADALL;
L_00539220:;
  /* 00539220 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00539222 lea ecx, [edx + 0x180] */ ecx = (u32)((u32)(edx + 0x180u));
  /* 00539228 mov dword ptr [edx], 0x6541f8 */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0x6541f8u); }
  /* 0053922e call 0x5267e0 */ esp -= 4; M32(esp) = 0x539233u; SAVEALL; F_005267e0(c); ABI_CHECK(0x5267e0u, 0x53922eu); RETCHK(0x539233u, 0x53922eu); LOADALL;
  /* 00539233 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00539235 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_00539240(CPU *c) {
  NATIVE_HOOK(0x539240u) REGS; LOADALL;
L_00539240:;
  /* 00539240 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00539241 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00539243 sub esp, 0x214 */ { u32 a_ = esp, b_ = 0x214u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00539249 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0053924e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053924f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00539250 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00539251 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00539254 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00539257 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539258 push 0x6542f8 */ { u32 v_ = 0x6542f8u; esp -= 4; M32(esp) = v_; }
  /* 0053925d mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0053925f lea ecx, [ebp - 0x204] */ ecx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 00539265 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0053926a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053926b call 0x5fe928 */ esp -= 4; M32(esp) = 0x539270u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x53926bu); RETCHK(0x539270u, 0x53926bu); LOADALL;
  /* 00539270 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00539273 lea esi, [edi + 0x218] */ esi = (u32)((u32)(edi + 0x218u));
  /* 00539279 call 0x549e20 */ esp -= 4; M32(esp) = 0x53927eu; SAVEALL; F_00549e20(c); ABI_CHECK(0x549e20u, 0x539279u); RETCHK(0x53927eu, 0x539279u); LOADALL;
  /* 0053927e call 0x559eb0 */ esp -= 4; M32(esp) = 0x539283u; SAVEALL; F_00559eb0(c); ABI_CHECK(0x559eb0u, 0x53927eu); RETCHK(0x539283u, 0x53927eu); LOADALL;
  /* 00539283 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539284 lea ebx, [ebp - 0x204] */ ebx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 0053928a call 0x549ea0 */ esp -= 4; M32(esp) = 0x53928fu; SAVEALL; F_00549ea0(c); ABI_CHECK(0x549ea0u, 0x53928au); RETCHK(0x53928fu, 0x53928au); LOADALL;
  /* 0053928f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00539291 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00539293 je 0x5392a1 */ if (ZF_) goto L_005392a1;
  /* 00539295 mov dword ptr [edi + 0x22c], 0x7fffffff */ { const u32 m_ = (u32)(edi + 0x22cu); M32(m_) = (u32)(0x7fffffffu); }
  /* 0053929f jmp 0x5392e7 */ goto L_005392e7;
L_005392a1:;
  /* 005392a1 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005392a3 call 0x5fe934 */ esp -= 4; M32(esp) = 0x5392a8u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5392a3u); RETCHK(0x5392a8u, 0x5392a3u); LOADALL;
  /* 005392a8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005392ab cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005392ad je 0x5392ba */ if (ZF_) goto L_005392ba;
  /* 005392af mov dword ptr [eax], 0x64d178 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64d178u); }
  /* 005392b5 mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 005392b8 jmp 0x5392bc */ goto L_005392bc;
L_005392ba:;
  /* 005392ba xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005392bc:;
  /* 005392bc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005392bd push 0x6542ec */ { u32 v_ = 0x6542ecu; esp -= 4; M32(esp) = v_; }
  /* 005392c2 mov dword ptr [edi + 0x214], eax */ { const u32 m_ = (u32)(edi + 0x214u); M32(m_) = (u32)(eax); }
  /* 005392c8 call 0x529310 */ esp -= 4; M32(esp) = 0x5392cdu; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x5392c8u); RETCHK(0x5392cdu, 0x5392c8u); LOADALL;
  /* 005392cd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005392cf jne 0x5392e7 */ if (!ZF_) goto L_005392e7;
  /* 005392d1 mov ecx, dword ptr [edi + 0x214] */ { const u32 m_ = (u32)(edi + 0x214u); ecx = (u32)(M32(m_)); }
  /* 005392d7 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005392d9 je 0x5392e1 */ if (ZF_) goto L_005392e1;
  /* 005392db mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005392dd push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005392df call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5392e1u; SAVEALL; call_ind(c, t_); RETCHK(0x5392e1u, 0x5392dfu); LOADALL; }
L_005392e1:;
  /* 005392e1 mov dword ptr [edi + 0x214], esi */ { const u32 m_ = (u32)(edi + 0x214u); M32(m_) = (u32)(esi); }
L_005392e7:;
  /* 005392e7 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005392ea push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005392ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005392ed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005392ee lea ecx, [edi + 0x20] */ ecx = (u32)((u32)(edi + 0x20u));
  /* 005392f1 call 0x404140 */ esp -= 4; M32(esp) = 0x5392f6u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5392f1u); RETCHK(0x5392f6u, 0x5392f1u); LOADALL;
  /* 005392f6 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005392f9 lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 005392fc lea eax, [ebp - 0x214] */ eax = (u32)((u32)(ebp + 0xfffffdecu));
  /* 00539302 call 0x52cee0 */ esp -= 4; M32(esp) = 0x539307u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x539302u); RETCHK(0x539307u, 0x539302u); LOADALL;
  /* 00539307 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0053930a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053930b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053930c mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053930e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053930f call 0x61af31 */ esp -= 4; M32(esp) = 0x539314u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x53930fu); RETCHK(0x539314u, 0x53930fu); LOADALL;
  /* 00539314 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00539316 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00539317 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00539320(CPU *c) {
  NATIVE_HOOK(0x539320u) REGS; LOADALL;
L_00539320:;
  /* 00539320 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00539321 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00539322 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00539324 lea esi, [edi + 0x218] */ esi = (u32)((u32)(edi + 0x218u));
  /* 0053932a call 0x54a030 */ esp -= 4; M32(esp) = 0x53932fu; SAVEALL; F_0054a030(c); ABI_CHECK(0x54a030u, 0x53932au); RETCHK(0x53932fu, 0x53932au); LOADALL;
  /* 0053932f call 0x549e90 */ esp -= 4; M32(esp) = 0x539334u; SAVEALL; F_00549e90(c); ABI_CHECK(0x549e90u, 0x53932fu); RETCHK(0x539334u, 0x53932fu); LOADALL;
  /* 00539334 mov ecx, dword ptr [edi + 0x214] */ { const u32 m_ = (u32)(edi + 0x214u); ecx = (u32)(M32(m_)); }
  /* 0053933a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053933c je 0x53934e */ if (ZF_) goto L_0053934e;
  /* 0053933e mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00539340 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00539342 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x539344u; SAVEALL; call_ind(c, t_); RETCHK(0x539344u, 0x539342u); LOADALL; }
  /* 00539344 mov dword ptr [edi + 0x214], 0 */ { const u32 m_ = (u32)(edi + 0x214u); M32(m_) = (u32)(0x0u); }
L_0053934e:;
  /* 0053934e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053934f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00539350 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00539360(CPU *c) {
  NATIVE_HOOK(0x539360u) REGS; LOADALL;
L_00539360:;
  /* 00539360 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00539361 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00539363 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00539366 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00539367 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00539368 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0053936a lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 0053936d lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00539370 call 0x52cea0 */ esp -= 4; M32(esp) = 0x539375u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x539370u); RETCHK(0x539375u, 0x539370u); LOADALL;
  /* 00539375 mov eax, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00539378 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539379 lea esi, [ebp - 0x18] */ esi = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0053937c call 0x52cf90 */ esp -= 4; M32(esp) = 0x539381u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x53937cu); RETCHK(0x539381u, 0x53937cu); LOADALL;
  /* 00539381 mov eax, dword ptr [edi + 0x214] */ { const u32 m_ = (u32)(edi + 0x214u); eax = (u32)(M32(m_)); }
  /* 00539387 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053938a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053938c je 0x539400 */ if (ZF_) goto L_00539400;
  /* 0053938e lea ecx, [edi + 0x180] */ ecx = (u32)((u32)(edi + 0x180u));
  /* 00539394 call 0x5267f0 */ esp -= 4; M32(esp) = 0x539399u; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x539394u); RETCHK(0x539399u, 0x539394u); LOADALL;
  /* 00539399 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0053939c fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053939f fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005393a5 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005393a7 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005393aa je 0x5393b4 */ if (ZF_) goto L_005393b4;
  /* 005393ac fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005393ae fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 005393b1 fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005393b4:;
  /* 005393b4 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005393b7 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 005393ba fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005393bd fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005393c3 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005393c5 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005393c8 je 0x5393d2 */ if (ZF_) goto L_005393d2;
  /* 005393ca fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005393cc fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 005393cf fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005393d2:;
  /* 005393d2 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 005393d5 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005393d8 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 005393db push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 005393e0 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 005393e5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005393e7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005393e9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005393ea mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 005393ed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005393ee mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 005393f1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005393f2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005393f3 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005393f5 call 0x526a10 */ esp -= 4; M32(esp) = 0x5393fau; SAVEALL; F_00526a10(c); ABI_CHECK(0x526a10u, 0x5393f5u); RETCHK(0x5393fau, 0x5393f5u); LOADALL;
  /* 005393fa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005393fb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005393fc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005393fe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005393ff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00539400:;
  /* 00539400 lea eax, [edi + 0x218] */ eax = (u32)((u32)(edi + 0x218u));
  /* 00539406 call 0x54a150 */ esp -= 4; M32(esp) = 0x53940bu; SAVEALL; F_0054a150(c); ABI_CHECK(0x54a150u, 0x539406u); RETCHK(0x53940bu, 0x539406u); LOADALL;
  /* 0053940b mov ecx, dword ptr [edi + 0x234] */ { const u32 m_ = (u32)(edi + 0x234u); ecx = (u32)(M32(m_)); }
  /* 00539411 lea edx, [edi + 0x180] */ edx = (u32)((u32)(edi + 0x180u));
  /* 00539417 mov eax, edx */ { eax = (u32)(edx); }
  /* 00539419 call 0x526830 */ esp -= 4; M32(esp) = 0x53941eu; SAVEALL; F_00526830(c); ABI_CHECK(0x526830u, 0x539419u); RETCHK(0x53941eu, 0x539419u); LOADALL;
  /* 0053941e fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00539421 fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00539424 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0053942a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053942c test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053942f je 0x539439 */ if (ZF_) goto L_00539439;
  /* 00539431 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00539433 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00539436 fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00539439:;
  /* 00539439 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053943c fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0053943f fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00539442 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00539448 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053944a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053944d je 0x539457 */ if (ZF_) goto L_00539457;
  /* 0053944f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00539451 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00539454 fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00539457:;
  /* 00539457 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 0053945a fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053945d mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00539460 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00539465 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0053946a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053946c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053946e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053946f mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00539472 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539473 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00539476 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00539477 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539478 mov eax, edx */ { eax = (u32)(edx); }
  /* 0053947a call 0x526bd0 */ esp -= 4; M32(esp) = 0x53947fu; SAVEALL; F_00526bd0(c); ABI_CHECK(0x526bd0u, 0x53947au); RETCHK(0x53947fu, 0x53947au); LOADALL;
  /* 0053947f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00539480 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00539481 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00539483 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00539484 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00539490(CPU *c) {
  NATIVE_HOOK(0x539490u) REGS; LOADALL;
L_00539490:;
  /* 00539490 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00539491 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00539493 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00539496 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00539497 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539498 lea esi, [ecx + 0x218] */ esi = (u32)((u32)(ecx + 0x218u));
  /* 0053949e call 0x54a090 */ esp -= 4; M32(esp) = 0x5394a3u; SAVEALL; F_0054a090(c); ABI_CHECK(0x54a090u, 0x53949eu); RETCHK(0x5394a3u, 0x53949eu); LOADALL;
  /* 005394a3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005394a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005394a5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005394b0(CPU *c) {
  NATIVE_HOOK(0x5394b0u) REGS; LOADALL;
L_005394b0:;
  /* 005394b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005394b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005394b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005394b5 push 0x624328 */ { u32 v_ = 0x624328u; esp -= 4; M32(esp) = v_; }
  /* 005394ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005394c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005394c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005394c8 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005394cb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005394cc mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005394ce mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005394d1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005394d3 jne 0x5394e8 */ if (!ZF_) goto L_005394e8;
  /* 005394d5 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005394d7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005394d8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005394db mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005394e2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005394e4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005394e5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005394e8:;
  /* 005394e8 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005394ea push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005394eb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005394ec call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5394efu; SAVEALL; call_ind(c, t_); RETCHK(0x5394efu, 0x5394ecu); LOADALL; }
  /* 005394ef push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 005394f4 mov edi, eax */ { edi = (u32)(eax); }
  /* 005394f6 call 0x560fd0 */ esp -= 4; M32(esp) = 0x5394fbu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5394f6u); RETCHK(0x5394fbu, 0x5394f6u); LOADALL;
  /* 005394fb mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005394fe fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00539501 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 00539506 mov eax, edi */ { eax = (u32)(edi); }
  /* 00539508 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053950b call 0x560fd0 */ esp -= 4; M32(esp) = 0x539510u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x53950bu); RETCHK(0x539510u, 0x53950bu); LOADALL;
  /* 00539510 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00539513 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00539516 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 0053951b mov eax, edi */ { eax = (u32)(edi); }
  /* 0053951d fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00539520 call 0x560fd0 */ esp -= 4; M32(esp) = 0x539525u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x539520u); RETCHK(0x539525u, 0x539520u); LOADALL;
  /* 00539525 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00539528 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0053952b push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 00539530 mov eax, edi */ { eax = (u32)(edi); }
  /* 00539532 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00539535 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00539538 call 0x560fd0 */ esp -= 4; M32(esp) = 0x53953du; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x539538u); RETCHK(0x53953du, 0x539538u); LOADALL;
  /* 0053953d mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00539540 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00539543 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00539546 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00539548 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053954b fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053954e je 0x53955c */ if (ZF_) goto L_0053955c;
  /* 00539550 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539551 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00539554 call 0x52d060 */ esp -= 4; M32(esp) = 0x539559u; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x539554u); RETCHK(0x539559u, 0x539554u); LOADALL;
  /* 00539559 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053955c:;
  /* 0053955c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053955d mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 00539562 call 0x560ed0 */ esp -= 4; M32(esp) = 0x539567u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x539562u); RETCHK(0x539567u, 0x539562u); LOADALL;
  /* 00539567 mov esi, eax */ { esi = (u32)(eax); }
  /* 00539569 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053956b mov dword ptr [ebp - 0x20], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xfu); }
  /* 00539572 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 00539579 mov byte ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)(0x0u); }
  /* 0053957d lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
L_00539580:;
  /* 00539580 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00539582 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00539583 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539585 jne 0x539580 */ if (!ZF_) goto L_00539580;
  /* 00539587 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00539589 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053958a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053958b lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0053958e call 0x404420 */ esp -= 4; M32(esp) = 0x539593u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53958eu); RETCHK(0x539593u, 0x53958eu); LOADALL;
  /* 00539593 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0053959a mov esi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); esi = (u32)(M32(m_)); }
  /* 0053959c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053959d mov eax, 0x6542e0 */ { eax = (u32)(0x6542e0u); }
  /* 005395a2 call 0x560ed0 */ esp -= 4; M32(esp) = 0x5395a7u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5395a2u); RETCHK(0x5395a7u, 0x5395a2u); LOADALL;
  /* 005395a7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005395a8 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 005395ab push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005395ac lea edx, [ebp - 0x38] */ edx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 005395af push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005395b0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005395b2 call dword ptr [esi + 0xe4] */ { const u32 m_ = (u32)(esi + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5395b8u; SAVEALL; call_ind(c, t_); RETCHK(0x5395b8u, 0x5395b2u); LOADALL; }
  /* 005395b8 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 005395ba cmp dword ptr [ebp - 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005395be pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005395bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005395c0 jb 0x5395ce */ if (CF_) goto L_005395ce;
  /* 005395c2 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 005395c5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005395c6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5395cbu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5395c6u); RETCHK(0x5395cbu, 0x5395c6u); LOADALL;
  /* 005395cb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005395ce:;
  /* 005395ce mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005395d1 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 005395d3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005395d4 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005395db mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005395dd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005395de ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005395f0(CPU *c) {
  NATIVE_HOOK(0x5395f0u) REGS; LOADALL;
L_005395f0:;
  /* 005395f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005395f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005395f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005395f5 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 005395fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00539600 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539601 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00539608 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00539609 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053960a push 0x539670 */ { u32 v_ = 0x539670u; esp -= 4; M32(esp) = v_; }
  /* 0053960f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00539612 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00539614 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00539616 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00539619 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0053961c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053961e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053961f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00539622 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00539629 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0053962c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053962d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00539630 call 0x404140 */ esp -= 4; M32(esp) = 0x539635u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x539630u); RETCHK(0x539635u, 0x539630u); LOADALL;
  /* 00539635 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00539638 call 0x405c00 */ esp -= 4; M32(esp) = 0x53963du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x539638u); RETCHK(0x53963du, 0x539638u); LOADALL;
  /* 0053963d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0053963f call 0x405c80 */ esp -= 4; M32(esp) = 0x539644u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x53963fu); RETCHK(0x539644u, 0x53963fu); LOADALL;
  /* 00539644 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00539648 jb 0x539656 */ if (CF_) goto L_00539656;
  /* 0053964a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053964d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053964e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x539653u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53964eu); RETCHK(0x539653u, 0x53964eu); LOADALL;
  /* 00539653 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00539656:;
  /* 00539656 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00539659 mov eax, esi */ { eax = (u32)(esi); }
  /* 0053965b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00539662 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00539663 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00539665 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00539666 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00539670(CPU *c) {
  NATIVE_HOOK(0x539670u) REGS; LOADALL;
L_00539670:;
  /* 00539670 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00539671 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00539673 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00539675 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0053967a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00539680 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539681 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00539688 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00539689 push 0x3c0 */ { u32 v_ = 0x3c0u; esp -= 4; M32(esp) = v_; }
  /* 0053968e call 0x5fe934 */ esp -= 4; M32(esp) = 0x539693u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53968eu); RETCHK(0x539693u, 0x53968eu); LOADALL;
  /* 00539693 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00539696 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00539699 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053969b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005396a2 je 0x5396ba */ if (ZF_) goto L_005396ba;
  /* 005396a4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005396a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005396a7 call 0x539160 */ esp -= 4; M32(esp) = 0x5396acu; SAVEALL; F_00539160(c); ABI_CHECK(0x539160u, 0x5396a7u); RETCHK(0x5396acu, 0x5396a7u); LOADALL;
  /* 005396ac mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005396af mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005396b6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005396b8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005396b9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005396ba:;
  /* 005396ba mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005396bd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005396bf mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005396c6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005396c8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005396c9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00539700(CPU *c) {
  NATIVE_HOOK(0x539700u) REGS; LOADALL;
L_00539700:;
  /* 00539700 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00539701 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00539703 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00539706 mov eax, edi */ { eax = (u32)(edi); }
  /* 00539708 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00539709 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0053970b lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 0053970e mov edi, edi */ { edi = (u32)(edi); }
L_00539710:;
  /* 00539710 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00539712 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00539713 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539715 jne 0x539710 */ if (!ZF_) goto L_00539710;
  /* 00539717 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00539719 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0053971b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053971d jle 0x53972e */ if ((ZF_|LT_)) goto L_0053972e;
  /* 0053971f nop */ ;
L_00539720:;
  /* 00539720 movsx esi, byte ptr [ecx + edi] */ { const u32 m_ = (u32)(ecx + edi); esi = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 00539724 imul esi, ecx */ { s64 p_ = (s64)(s32)esi * (s64)(s32)ecx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00539727 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00539729 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0053972a cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053972c jl 0x539720 */ if (LT_) goto L_00539720;
L_0053972e:;
  /* 0053972e mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00539731 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00539732 lea ebx, [ebp - 4] */ ebx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00539735 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00539738 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053973a mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0053973d call 0x552e40 */ esp -= 4; M32(esp) = 0x539742u; SAVEALL; F_00552e40(c); ABI_CHECK(0x552e40u, 0x53973du); RETCHK(0x539742u, 0x53973du); LOADALL;
  /* 00539742 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00539745 cmp eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00539748 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00539749 je 0x539755 */ if (ZF_) goto L_00539755;
  /* 0053974b mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 0053974e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053974f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00539751 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00539752 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00539755:;
  /* 00539755 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00539757 call 0x5fe934 */ esp -= 4; M32(esp) = 0x53975cu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x539757u); RETCHK(0x53975cu, 0x539757u); LOADALL;
  /* 0053975c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053975f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00539761 je 0x539774 */ if (ZF_) goto L_00539774;
  /* 00539763 mov dword ptr [eax], 0x64d178 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64d178u); }
  /* 00539769 mov dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 00539770 mov esi, eax */ { esi = (u32)(eax); }
  /* 00539772 jmp 0x539776 */ goto L_00539776;
L_00539774:;
  /* 00539774 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_00539776:;
  /* 00539776 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00539778 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00539779 mov eax, esi */ { eax = (u32)(esi); }
  /* 0053977b call 0x529310 */ esp -= 4; M32(esp) = 0x539780u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x53977bu); RETCHK(0x539780u, 0x53977bu); LOADALL;
  /* 00539780 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539782 je 0x53979a */ if (ZF_) goto L_0053979a;
  /* 00539784 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00539787 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0053978a call 0x53d100 */ esp -= 4; M32(esp) = 0x53978fu; SAVEALL; F_0053d100(c); ABI_CHECK(0x53d100u, 0x53978au); RETCHK(0x53978fu, 0x53978au); LOADALL;
  /* 0053978f mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 00539791 mov eax, esi */ { eax = (u32)(esi); }
  /* 00539793 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00539794 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00539796 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00539797 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0053979a:;
  /* 0053979a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053979c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053979d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053979f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005397a0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005397b0(CPU *c) {
  NATIVE_HOOK(0x5397b0u) REGS; LOADALL;
L_005397b0:;
  /* 005397b0 fld dword ptr [eax + 0x174] */ { const u32 m_ = (u32)(eax + 0x174u); FPUSH((double)MF32(m_)); }
  /* 005397b6 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005397bc fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005397be test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005397c1 jne 0x5397c9 */ if (!ZF_) goto L_005397c9;
  /* 005397c3 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005397c8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005397c9:;
  /* 005397c9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005397cb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005397d0(CPU *c) {
  NATIVE_HOOK(0x5397d0u) REGS; LOADALL;
L_005397d0:;
  /* 005397d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005397d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005397d3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005397d9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005397db push 0x61d90e */ { u32 v_ = 0x61d90eu; esp -= 4; M32(esp) = v_; }
  /* 005397e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005397e1 test byte ptr [0x9ba720], 1 */ { const u32 m_ = (u32)(0x9ba720u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005397e8 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005397ef jne 0x53983b */ if (!ZF_) goto L_0053983b;
  /* 005397f1 or dword ptr [0x9ba720], 1 */ { const u32 m_ = (u32)(0x9ba720u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005397f8 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005397ff call 0x53d4e0 */ esp -= 4; M32(esp) = 0x539804u; SAVEALL; F_0053d4e0(c); ABI_CHECK(0x53d4e0u, 0x5397ffu); RETCHK(0x539804u, 0x5397ffu); LOADALL;
  /* 00539804 mov dword ptr [0x9ba718], eax */ { const u32 m_ = (u32)(0x9ba718u); M32(m_) = (u32)(eax); }
  /* 00539809 mov byte ptr [eax + 0x15], 1 */ { const u32 m_ = (u32)(eax + 0x15u); M8(m_) = (u8)(0x1u); }
  /* 0053980d mov eax, dword ptr [0x9ba718] */ { const u32 m_ = (u32)(0x9ba718u); eax = (u32)(M32(m_)); }
  /* 00539812 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 00539815 mov eax, dword ptr [0x9ba718] */ { const u32 m_ = (u32)(0x9ba718u); eax = (u32)(M32(m_)); }
  /* 0053981a mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 0053981c mov eax, dword ptr [0x9ba718] */ { const u32 m_ = (u32)(0x9ba718u); eax = (u32)(M32(m_)); }
  /* 00539821 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 00539824 push 0x62c710 */ { u32 v_ = 0x62c710u; esp -= 4; M32(esp) = v_; }
  /* 00539829 mov dword ptr [0x9ba71c], 0 */ { const u32 m_ = (u32)(0x9ba71cu); M32(m_) = (u32)(0x0u); }
  /* 00539833 call 0x5fe916 */ esp -= 4; M32(esp) = 0x539838u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x539833u); RETCHK(0x539838u, 0x539833u); LOADALL;
  /* 00539838 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053983b:;
  /* 0053983b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053983e mov eax, 0x9ba714 */ { eax = (u32)(0x9ba714u); }
  /* 00539843 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0053984a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053984c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053984d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00539850(CPU *c) {
  NATIVE_HOOK(0x539850u) REGS; LOADALL;
L_00539850:;
  /* 00539850 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00539851 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00539854 mov ecx, 0x100 */ { ecx = (u32)(0x100u); }
  /* 00539859 mov edi, 0x7975d0 */ { edi = (u32)(0x7975d0u); }
  /* 0053985e rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00539860 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00539862 mov ecx, 0x100 */ { ecx = (u32)(0x100u); }
  /* 00539867 mov edi, 0x7971d0 */ { edi = (u32)(0x7971d0u); }
  /* 0053986c rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0053986e mov dword ptr [0x7a6dd8], eax */ { const u32 m_ = (u32)(0x7a6dd8u); M32(m_) = (u32)(eax); }
  /* 00539873 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00539874 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00539880(CPU *c) {
  NATIVE_HOOK(0x539880u) REGS; LOADALL;
L_00539880:;
  /* 00539880 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00539881 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00539882 mov edi, 0x7971d0 */ { edi = (u32)(0x7971d0u); }
L_00539887:;
  /* 00539887 mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 00539889 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053988b je 0x5398a4 */ if (ZF_) goto L_005398a4;
  /* 0053988d call 0x5293f0 */ esp -= 4; M32(esp) = 0x539892u; SAVEALL; F_005293f0(c); ABI_CHECK(0x5293f0u, 0x53988du); RETCHK(0x539892u, 0x53988du); LOADALL;
  /* 00539892 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 00539894 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00539896 je 0x53989e */ if (ZF_) goto L_0053989e;
  /* 00539898 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053989a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053989c call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53989eu; SAVEALL; call_ind(c, t_); RETCHK(0x53989eu, 0x53989cu); LOADALL; }
L_0053989e:;
  /* 0053989e mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
L_005398a4:;
  /* 005398a4 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005398a7 cmp edi, 0x7975d0 */ { u32 a_ = edi, b_ = 0x7975d0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005398ad jl 0x539887 */ if (LT_) goto L_00539887;
  /* 005398af pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005398b0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005398b1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005398c0(CPU *c) {
  NATIVE_HOOK(0x5398c0u) REGS; LOADALL;
L_005398c0:;
  /* 005398c0 call 0x5397d0 */ esp -= 4; M32(esp) = 0x5398c5u; SAVEALL; F_005397d0(c); ABI_CHECK(0x5397d0u, 0x5398c0u); RETCHK(0x5398c5u, 0x5398c0u); LOADALL;
  /* 005398c5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005398c6 call 0x539700 */ esp -= 4; M32(esp) = 0x5398cbu; SAVEALL; F_00539700(c); ABI_CHECK(0x539700u, 0x5398c6u); RETCHK(0x5398cbu, 0x5398c6u); LOADALL;
  /* 005398cb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005398d0(CPU *c) {
  NATIVE_HOOK(0x5398d0u) REGS; LOADALL;
L_005398d0:;
  /* 005398d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005398d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005398d3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005398d5 push 0x625f68 */ { u32 v_ = 0x625f68u; esp -= 4; M32(esp) = v_; }
  /* 005398da mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005398e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005398e1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005398e8 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005398eb mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005398f0 push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 005398f2 push 0x654810 */ { u32 v_ = 0x654810u; esp -= 4; M32(esp) = v_; }
  /* 005398f7 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 005398fa mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005398fd mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 00539904 mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 0053990b mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0053990f call 0x404420 */ esp -= 4; M32(esp) = 0x539914u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53990fu); RETCHK(0x539914u, 0x53990fu); LOADALL;
  /* 00539914 mov eax, esi */ { eax = (u32)(esi); }
  /* 00539916 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0053991d lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00539920:;
  /* 00539920 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00539922 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00539923 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539925 jne 0x539920 */ if (!ZF_) goto L_00539920;
  /* 00539927 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00539929 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053992a mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0053992d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053992e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053992f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00539931 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00539934 call 0x405de0 */ esp -= 4; M32(esp) = 0x539939u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x539934u); RETCHK(0x539939u, 0x539934u); LOADALL;
  /* 00539939 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053993b jne 0x539956 */ if (!ZF_) goto L_00539956;
  /* 0053993d cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00539941 jb 0x53994f */ if (CF_) goto L_0053994f;
  /* 00539943 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 00539946 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00539947 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53994cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x539947u); RETCHK(0x53994cu, 0x539947u); LOADALL;
  /* 0053994c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053994f:;
  /* 0053994f mov eax, 0x3b06 */ { eax = (u32)(0x3b06u); }
  /* 00539954 jmp 0x539994 */ goto L_00539994;
L_00539956:;
  /* 00539956 mov eax, esi */ { eax = (u32)(esi); }
  /* 00539958 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00539959 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0053995b lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0053995e mov edi, edi */ { edi = (u32)(edi); }
L_00539960:;
  /* 00539960 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00539962 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00539963 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539965 jne 0x539960 */ if (!ZF_) goto L_00539960;
  /* 00539967 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00539969 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053996b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053996d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053996f jle 0x53997f */ if ((ZF_|LT_)) goto L_0053997f;
L_00539971:;
  /* 00539971 movsx edx, byte ptr [eax + esi] */ { const u32 m_ = (u32)(eax + esi); edx = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 00539975 imul edx, eax */ { s64 p_ = (s64)(s32)edx * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00539978 add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0053997a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0053997b cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053997d jl 0x539971 */ if (LT_) goto L_00539971;
L_0053997f:;
  /* 0053997f cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00539983 jb 0x539991 */ if (CF_) goto L_00539991;
  /* 00539985 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00539988 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539989 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53998eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x539989u); RETCHK(0x53998eu, 0x539989u); LOADALL;
  /* 0053998e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00539991:;
  /* 00539991 mov eax, edi */ { eax = (u32)(edi); }
  /* 00539993 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00539994:;
  /* 00539994 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00539997 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0053999e mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005399a1 call 0x61af31 */ esp -= 4; M32(esp) = 0x5399a6u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x5399a1u); RETCHK(0x5399a6u, 0x5399a1u); LOADALL;
  /* 005399a6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005399a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005399a9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005399b0(CPU *c) {
  NATIVE_HOOK(0x5399b0u) REGS; LOADALL;
L_005399b0:;
  /* 005399b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005399b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005399b3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005399b9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005399bb push 0x61c968 */ { u32 v_ = 0x61c968u; esp -= 4; M32(esp) = v_; }
  /* 005399c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005399c1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005399c4 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005399cb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005399cc mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005399cf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005399d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005399d1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005399d2 call 0x506b60 */ esp -= 4; M32(esp) = 0x5399d7u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x5399d2u); RETCHK(0x5399d7u, 0x5399d2u); LOADALL;
  /* 005399d7 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005399d9 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 005399dc push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 005399de push 0x654800 */ { u32 v_ = 0x654800u; esp -= 4; M32(esp) = v_; }
  /* 005399e3 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 005399e6 mov dword ptr [esi], 0x654310 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x654310u); }
  /* 005399ec mov dword ptr [esi + 0x184], edi */ { const u32 m_ = (u32)(esi + 0x184u); M32(m_) = (u32)(edi); }
  /* 005399f2 mov dword ptr [esi + 0x190], edi */ { const u32 m_ = (u32)(esi + 0x190u); M32(m_) = (u32)(edi); }
  /* 005399f8 call 0x404420 */ esp -= 4; M32(esp) = 0x5399fdu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5399f8u); RETCHK(0x5399fdu, 0x5399f8u); LOADALL;
  /* 005399fd mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00539a00 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00539a05 mov dword ptr [esi + 0x1e4], eax */ { const u32 m_ = (u32)(esi + 0x1e4u); M32(m_) = (u32)(eax); }
  /* 00539a0b mov dword ptr [esi + 0x1dc], eax */ { const u32 m_ = (u32)(esi + 0x1dcu); M32(m_) = (u32)(eax); }
  /* 00539a11 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00539a14 mov dword ptr [esi + 0x180], edi */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(edi); }
  /* 00539a1a mov dword ptr [esi + 0x188], edi */ { const u32 m_ = (u32)(esi + 0x188u); M32(m_) = (u32)(edi); }
  /* 00539a20 mov dword ptr [esi + 0x18c], edi */ { const u32 m_ = (u32)(esi + 0x18cu); M32(m_) = (u32)(edi); }
  /* 00539a26 mov dword ptr [esi + 0x1cc], edi */ { const u32 m_ = (u32)(esi + 0x1ccu); M32(m_) = (u32)(edi); }
  /* 00539a2c mov dword ptr [esi + 0x1ec], edi */ { const u32 m_ = (u32)(esi + 0x1ecu); M32(m_) = (u32)(edi); }
  /* 00539a32 mov dword ptr [esi + 0x1e8], edi */ { const u32 m_ = (u32)(esi + 0x1e8u); M32(m_) = (u32)(edi); }
  /* 00539a38 mov dword ptr [esi + 0x1d0], edi */ { const u32 m_ = (u32)(esi + 0x1d0u); M32(m_) = (u32)(edi); }
  /* 00539a3e mov dword ptr [esi + 0x1d4], edi */ { const u32 m_ = (u32)(esi + 0x1d4u); M32(m_) = (u32)(edi); }
  /* 00539a44 mov dword ptr [esi + 0x1e0], edi */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(edi); }
  /* 00539a4a mov dword ptr [esi + 0x194], edi */ { const u32 m_ = (u32)(esi + 0x194u); M32(m_) = (u32)(edi); }
  /* 00539a50 mov dword ptr [esi + 0x198], edi */ { const u32 m_ = (u32)(esi + 0x198u); M32(m_) = (u32)(edi); }
  /* 00539a56 mov dword ptr [esi + 0x1bc], edi */ { const u32 m_ = (u32)(esi + 0x1bcu); M32(m_) = (u32)(edi); }
  /* 00539a5c mov dword ptr [esi + 0x19c], eax */ { const u32 m_ = (u32)(esi + 0x19cu); M32(m_) = (u32)(eax); }
  /* 00539a62 mov dword ptr [esi + 0x1a4], eax */ { const u32 m_ = (u32)(esi + 0x1a4u); M32(m_) = (u32)(eax); }
  /* 00539a68 mov dword ptr [esi + 0x1a8], eax */ { const u32 m_ = (u32)(esi + 0x1a8u); M32(m_) = (u32)(eax); }
  /* 00539a6e mov dword ptr [esi + 0x1c4], 0x3fe66666 */ { const u32 m_ = (u32)(esi + 0x1c4u); M32(m_) = (u32)(0x3fe66666u); }
  /* 00539a78 mov dword ptr [esi + 0x1c8], 0x3f800000 */ { const u32 m_ = (u32)(esi + 0x1c8u); M32(m_) = (u32)(0x3f800000u); }
  /* 00539a82 mov dword ptr [esi + 0x1d8], 0x40a00000 */ { const u32 m_ = (u32)(esi + 0x1d8u); M32(m_) = (u32)(0x40a00000u); }
  /* 00539a8c mov dword ptr [esi + 0x1c0], 2 */ { const u32 m_ = (u32)(esi + 0x1c0u); M32(m_) = (u32)(0x2u); }
  /* 00539a96 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00539a97 mov eax, esi */ { eax = (u32)(esi); }
  /* 00539a99 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00539aa0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00539aa1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00539aa3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00539aa4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00539ab0(CPU *c) {
  NATIVE_HOOK(0x539ab0u) REGS; LOADALL;
L_00539ab0:;
  /* 00539ab0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00539ab1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00539ab3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00539ab4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00539ab6 call 0x539ae0 */ esp -= 4; M32(esp) = 0x539abbu; SAVEALL; F_00539ae0(c); ABI_CHECK(0x539ae0u, 0x539ab6u); RETCHK(0x539abbu, 0x539ab6u); LOADALL;
  /* 00539abb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539abf je 0x539aca */ if (ZF_) goto L_00539aca;
  /* 00539ac1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00539ac2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x539ac7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x539ac2u); RETCHK(0x539ac7u, 0x539ac2u); LOADALL;
  /* 00539ac7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00539aca:;
  /* 00539aca mov eax, esi */ { eax = (u32)(esi); }
  /* 00539acc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00539acd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00539ace ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00539ae0(CPU *c) {
  NATIVE_HOOK(0x539ae0u) REGS; LOADALL;
L_00539ae0:;
  /* 00539ae0 mov dword ptr [ecx], 0x654310 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x654310u); }
  /* 00539ae6 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_00539af0(CPU *c) {
  NATIVE_HOOK(0x539af0u) REGS; LOADALL;
L_00539af0:;
  /* 00539af0 mov eax, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 00539af6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00539af8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00539af9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00539afa mov ecx, 0x5209 */ { ecx = (u32)(0x5209u); }
  /* 00539aff je 0x539b26 */ if (ZF_) goto L_00539b26;
  /* 00539b01 call 0x4dfc10 */ esp -= 4; M32(esp) = 0x539b06u; SAVEALL; F_004dfc10(c); ABI_CHECK(0x4dfc10u, 0x539b01u); RETCHK(0x539b06u, 0x539b01u); LOADALL;
  /* 00539b06 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00539b08 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00539b09 call 0x554450 */ esp -= 4; M32(esp) = 0x539b0eu; SAVEALL; F_00554450(c); ABI_CHECK(0x554450u, 0x539b09u); RETCHK(0x539b0eu, 0x539b09u); LOADALL;
  /* 00539b0e mov esi, eax */ { esi = (u32)(eax); }
  /* 00539b10 call 0x554870 */ esp -= 4; M32(esp) = 0x539b15u; SAVEALL; F_00554870(c); ABI_CHECK(0x554870u, 0x539b10u); RETCHK(0x539b15u, 0x539b10u); LOADALL;
  /* 00539b15 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00539b17 je 0x539b1d */ if (ZF_) goto L_00539b1d;
  /* 00539b19 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00539b1b jmp 0x539b26 */ goto L_00539b26;
L_00539b1d:;
  /* 00539b1d mov eax, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 00539b23 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
L_00539b26:;
  /* 00539b26 mov eax, dword ptr [edi + 0x1ec] */ { const u32 m_ = (u32)(edi + 0x1ecu); eax = (u32)(M32(m_)); }
  /* 00539b2c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00539b2e je 0x539b59 */ if (ZF_) goto L_00539b59;
  /* 00539b30 call 0x4e6e10 */ esp -= 4; M32(esp) = 0x539b35u; SAVEALL; F_004e6e10(c); ABI_CHECK(0x4e6e10u, 0x539b30u); RETCHK(0x539b35u, 0x539b30u); LOADALL;
  /* 00539b35 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00539b37 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00539b38 call 0x554450 */ esp -= 4; M32(esp) = 0x539b3du; SAVEALL; F_00554450(c); ABI_CHECK(0x554450u, 0x539b38u); RETCHK(0x539b3du, 0x539b38u); LOADALL;
  /* 00539b3d mov esi, eax */ { esi = (u32)(eax); }
  /* 00539b3f call 0x554870 */ esp -= 4; M32(esp) = 0x539b44u; SAVEALL; F_00554870(c); ABI_CHECK(0x554870u, 0x539b3fu); RETCHK(0x539b44u, 0x539b3fu); LOADALL;
  /* 00539b44 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00539b46 je 0x539b4d */ if (ZF_) goto L_00539b4d;
  /* 00539b48 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00539b49 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00539b4b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00539b4c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00539b4d:;
  /* 00539b4d mov ecx, dword ptr [edi + 0x1ec] */ { const u32 m_ = (u32)(edi + 0x1ecu); ecx = (u32)(M32(m_)); }
  /* 00539b53 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00539b56 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00539b57 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00539b58 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00539b59:;
  /* 00539b59 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00539b5a mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00539b5c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00539b5d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00539b60(CPU *c) {
  NATIVE_HOOK(0x539b60u) REGS; LOADALL;
L_00539b60:;
  /* 00539b60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00539b61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00539b63 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00539b65 push 0x624093 */ { u32 v_ = 0x624093u; esp -= 4; M32(esp) = v_; }
  /* 00539b6a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00539b70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539b71 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00539b78 sub esp, 0xa8 */ { u32 a_ = esp, b_ = 0xa8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00539b7e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00539b83 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00539b84 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00539b87 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00539b88 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00539b89 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00539b8c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00539b8e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00539b90 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00539b92 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00539b93 lea ecx, [ebx + 0x20] */ ecx = (u32)((u32)(ebx + 0x20u));
  /* 00539b96 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00539b99 mov byte ptr [ebp - 0x2d], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)(0x1u); }
  /* 00539b9d call 0x404140 */ esp -= 4; M32(esp) = 0x539ba2u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x539b9du); RETCHK(0x539ba2u, 0x539b9du); LOADALL;
  /* 00539ba2 lea ecx, [ebx + 0x44] */ ecx = (u32)((u32)(ebx + 0x44u));
  /* 00539ba5 mov edx, esi */ { edx = (u32)(esi); }
  /* 00539ba7 lea eax, [ebp - 0x84] */ eax = (u32)((u32)(ebp + 0xffffff7cu));
  /* 00539bad mov dword ptr [ebp - 0x74], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(ecx); }
  /* 00539bb0 call 0x52cee0 */ esp -= 4; M32(esp) = 0x539bb5u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x539bb0u); RETCHK(0x539bb5u, 0x539bb0u); LOADALL;
  /* 00539bb5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00539bb7 call 0x4019a0 */ esp -= 4; M32(esp) = 0x539bbcu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x539bb7u); RETCHK(0x539bbcu, 0x539bb7u); LOADALL;
  /* 00539bbc mov cl, byte ptr [eax + 0xb30] */ { const u32 m_ = (u32)(eax + 0xb30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00539bc2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00539bc5 test cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539bc8 jne 0x539dce */ if (!ZF_) goto L_00539dce;
  /* 00539bce push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00539bd0 call 0x4019a0 */ esp -= 4; M32(esp) = 0x539bd5u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x539bd0u); RETCHK(0x539bd5u, 0x539bd0u); LOADALL;
  /* 00539bd5 mov cl, byte ptr [eax + 0xb30] */ { const u32 m_ = (u32)(eax + 0xb30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00539bdb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00539bde test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539be0 js 0x539dce */ if (SF_) goto L_00539dce;
  /* 00539be6 fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00539be9 mov dword ptr [ebp - 0x50], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x0u); }
  /* 00539bf0 fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00539bf3 mov dword ptr [ebp - 0x54], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x0u); }
  /* 00539bfa fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00539c00 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00539c02 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539c05 jne 0x539c0c */ if (!ZF_) goto L_00539c0c;
  /* 00539c07 fst dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); }
  /* 00539c0a jmp 0x539c15 */ goto L_00539c15;
L_00539c0c:;
  /* 00539c0c fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00539c0f fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00539c12 fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
L_00539c15:;
  /* 00539c15 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00539c1b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00539c1d test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539c20 jne 0x539c27 */ if (!ZF_) goto L_00539c27;
  /* 00539c22 fst dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); }
  /* 00539c25 jmp 0x539c30 */ goto L_00539c30;
L_00539c27:;
  /* 00539c27 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00539c2a fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00539c2d fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
L_00539c30:;
  /* 00539c30 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00539c36 mov dword ptr [ebp - 0x40], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x0u); }
  /* 00539c3d mov dword ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x0u); }
  /* 00539c44 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00539c46 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539c49 jne 0x539c50 */ if (!ZF_) goto L_00539c50;
  /* 00539c4b fst dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); }
  /* 00539c4e jmp 0x539c59 */ goto L_00539c59;
L_00539c50:;
  /* 00539c50 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00539c53 fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00539c56 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
L_00539c59:;
  /* 00539c59 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00539c5f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00539c61 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539c64 je 0x539c6e */ if (ZF_) goto L_00539c6e;
  /* 00539c66 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00539c68 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00539c6b fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00539c6e:;
  /* 00539c6e fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00539c71 mov dword ptr [ebp - 0x90], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M32(m_) = (u32)(0x3f800000u); }
  /* 00539c7b fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 00539c7e fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00539c84 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00539c86 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539c89 jne 0x539c8f */ if (!ZF_) goto L_00539c8f;
  /* 00539c8b fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00539c8d jmp 0x539c94 */ goto L_00539c94;
L_00539c8f:;
  /* 00539c8f fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 00539c92 fchs */ ST(0) = -ST(0);
L_00539c94:;
  /* 00539c94 fadd dword ptr [0x657074] */ { const u32 m_ = (u32)(0x657074u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00539c9a mov dword ptr [ebp - 0x88], 0x41880000 */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(0x41880000u); }
  /* 00539ca4 fstp dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00539caa fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00539cb0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00539cb2 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539cb5 jne 0x539cbb */ if (!ZF_) goto L_00539cbb;
  /* 00539cb7 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00539cb9 jmp 0x539cc0 */ goto L_00539cc0;
L_00539cbb:;
  /* 00539cbb fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 00539cbe fchs */ ST(0) = -ST(0);
L_00539cc0:;
  /* 00539cc0 fadd dword ptr [0x657020] */ { const u32 m_ = (u32)(0x657020u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00539cc6 mov dword ptr [ebp - 0xb0], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffff50u); M32(m_) = (u32)(0x3f800000u); }
  /* 00539cd0 fstp dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00539cd6 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00539cdc fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00539cde test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539ce1 jne 0x539ce7 */ if (!ZF_) goto L_00539ce7;
  /* 00539ce3 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00539ce5 jmp 0x539cec */ goto L_00539cec;
L_00539ce7:;
  /* 00539ce7 fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 00539cea fchs */ ST(0) = -ST(0);
L_00539cec:;
  /* 00539cec fadd dword ptr [0x656f88] */ { const u32 m_ = (u32)(0x656f88u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00539cf2 mov dword ptr [ebp - 0xa8], 0x41880000 */ { const u32 m_ = (u32)(ebp + 0xffffff58u); M32(m_) = (u32)(0x41880000u); }
  /* 00539cfc fstp dword ptr [ebp - 0xb4] */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00539d02 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00539d08 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00539d0a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539d0d jne 0x539d13 */ if (!ZF_) goto L_00539d13;
  /* 00539d0f fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00539d11 jmp 0x539d18 */ goto L_00539d18;
L_00539d13:;
  /* 00539d13 fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 00539d16 fchs */ ST(0) = -ST(0);
L_00539d18:;
  /* 00539d18 fadd dword ptr [0x657170] */ { const u32 m_ = (u32)(0x657170u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00539d1e mov dword ptr [ebp - 0xa0], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(0x3f800000u); }
  /* 00539d28 fstp dword ptr [ebp - 0xac] */ { const u32 m_ = (u32)(ebp + 0xffffff54u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00539d2e fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00539d34 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00539d36 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539d39 jne 0x539d3f */ if (!ZF_) goto L_00539d3f;
  /* 00539d3b fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00539d3d jmp 0x539d44 */ goto L_00539d44;
L_00539d3f:;
  /* 00539d3f fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 00539d42 fchs */ ST(0) = -ST(0);
L_00539d44:;
  /* 00539d44 fadd dword ptr [0x65716c] */ { const u32 m_ = (u32)(0x65716cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00539d4a mov dword ptr [ebp - 0x98], 0x41880000 */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(0x41880000u); }
  /* 00539d54 fstp dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00539d5a fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00539d60 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00539d62 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539d65 jne 0x539d6b */ if (!ZF_) goto L_00539d6b;
  /* 00539d67 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00539d69 jmp 0x539d70 */ goto L_00539d70;
L_00539d6b:;
  /* 00539d6b fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 00539d6e fchs */ ST(0) = -ST(0);
L_00539d70:;
  /* 00539d70 fadd dword ptr [0x657168] */ { const u32 m_ = (u32)(0x657168u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00539d76 mov dword ptr [ebp - 0x80], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M32(m_) = (u32)(0x3f800000u); }
  /* 00539d7d fstp dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00539d83 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00539d89 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00539d8b test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539d8e jne 0x539d94 */ if (!ZF_) goto L_00539d94;
  /* 00539d90 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00539d92 jmp 0x539d99 */ goto L_00539d99;
L_00539d94:;
  /* 00539d94 fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 00539d97 fchs */ ST(0) = -ST(0);
L_00539d99:;
  /* 00539d99 fadd dword ptr [0x65715c] */ { const u32 m_ = (u32)(0x65715cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00539d9f mov dword ptr [ebp - 0x78], 0x41880000 */ { const u32 m_ = (u32)(ebp + 0xffffff88u); M32(m_) = (u32)(0x41880000u); }
  /* 00539da6 fstp dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00539dac fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00539db2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00539db4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539db7 je 0x539dc0 */ if (ZF_) goto L_00539dc0;
  /* 00539db9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00539dbb fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 00539dbe fchs */ ST(0) = -ST(0);
L_00539dc0:;
  /* 00539dc0 fadd dword ptr [0x657164] */ { const u32 m_ = (u32)(0x657164u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00539dc6 fstp dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00539dc9 jmp 0x539e9d */ goto L_00539e9d;
L_00539dce:;
  /* 00539dce mov dword ptr [ebp - 0x50], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x3f800000u); }
  /* 00539dd5 mov dword ptr [ebp - 0x54], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x3f800000u); }
  /* 00539ddc mov dword ptr [ebp - 0x48], 0x41d80000 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x41d80000u); }
  /* 00539de3 mov dword ptr [ebp - 0x4c], 0x42280000 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(0x42280000u); }
  /* 00539dea mov dword ptr [ebp - 0x40], 0x40000000 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x40000000u); }
  /* 00539df1 mov dword ptr [ebp - 0x44], 0x40000000 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x40000000u); }
  /* 00539df8 mov dword ptr [ebp - 0x38], 0x41d00000 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x41d00000u); }
  /* 00539dff mov dword ptr [ebp - 0x3c], 0x41d00000 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0x41d00000u); }
  /* 00539e06 mov dword ptr [ebp - 0x90], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M32(m_) = (u32)(0x0u); }
  /* 00539e10 mov dword ptr [ebp - 0x94], 0x42580000 */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(0x42580000u); }
  /* 00539e1a mov dword ptr [ebp - 0x88], 0x41000000 */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(0x41000000u); }
  /* 00539e24 mov dword ptr [ebp - 0x8c], 0x42780000 */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M32(m_) = (u32)(0x42780000u); }
  /* 00539e2e mov dword ptr [ebp - 0xb0], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff50u); M32(m_) = (u32)(0x0u); }
  /* 00539e38 mov dword ptr [ebp - 0xb4], 0x42880000 */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); M32(m_) = (u32)(0x42880000u); }
  /* 00539e42 mov dword ptr [ebp - 0xa8], 0x41000000 */ { const u32 m_ = (u32)(ebp + 0xffffff58u); M32(m_) = (u32)(0x41000000u); }
  /* 00539e4c mov dword ptr [ebp - 0xac], 0x42980000 */ { const u32 m_ = (u32)(ebp + 0xffffff54u); M32(m_) = (u32)(0x42980000u); }
  /* 00539e56 mov dword ptr [ebp - 0xa0], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(0x0u); }
  /* 00539e60 mov dword ptr [ebp - 0xa4], 0x42a80000 */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(0x42a80000u); }
  /* 00539e6a mov dword ptr [ebp - 0x98], 0x41000000 */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(0x41000000u); }
  /* 00539e74 mov dword ptr [ebp - 0x9c], 0x42b80000 */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(0x42b80000u); }
  /* 00539e7e mov dword ptr [ebp - 0x80], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M32(m_) = (u32)(0x0u); }
  /* 00539e85 mov dword ptr [ebp - 0x84], 0x42c40000 */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(0x42c40000u); }
  /* 00539e8f mov dword ptr [ebp - 0x78], 0x41000000 */ { const u32 m_ = (u32)(ebp + 0xffffff88u); M32(m_) = (u32)(0x41000000u); }
  /* 00539e96 mov dword ptr [ebp - 0x7c], 0x42d40000 */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(0x42d40000u); }
L_00539e9d:;
  /* 00539e9d push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 00539ea2 call 0x5fe934 */ esp -= 4; M32(esp) = 0x539ea7u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x539ea2u); RETCHK(0x539ea7u, 0x539ea2u); LOADALL;
  /* 00539ea7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00539eaa mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 00539ead test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00539eaf mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00539eb6 je 0x539ec1 */ if (ZF_) goto L_00539ec1;
  /* 00539eb8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00539eb9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539eba call 0x50d810 */ esp -= 4; M32(esp) = 0x539ebfu; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x539ebau); RETCHK(0x539ebfu, 0x539ebau); LOADALL;
  /* 00539ebf jmp 0x539ec3 */ goto L_00539ec3;
L_00539ec1:;
  /* 00539ec1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00539ec3:;
  /* 00539ec3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00539ec4 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00539ecb mov edi, 0x6547f0 */ { edi = (u32)(0x6547f0u); }
  /* 00539ed0 lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00539ed3 mov dword ptr [ebx + 0x188], eax */ { const u32 m_ = (u32)(ebx + 0x188u); M32(m_) = (u32)(eax); }
  /* 00539ed9 call 0x4646d0 */ esp -= 4; M32(esp) = 0x539edeu; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x539ed9u); RETCHK(0x539edeu, 0x539ed9u); LOADALL;
  /* 00539ede add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00539ee1 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00539ee4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00539ee6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539ee7 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00539eea mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00539ef1 lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 00539ef4 mov eax, esp */ { eax = (u32)(esp); }
  /* 00539ef6 mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 00539ef9 call 0x52cea0 */ esp -= 4; M32(esp) = 0x539efeu; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x539ef9u); RETCHK(0x539efeu, 0x539ef9u); LOADALL;
  /* 00539efe mov ebx, dword ptr [ebx + 0x188] */ { const u32 m_ = (u32)(ebx + 0x188u); ebx = (u32)(M32(m_)); }
  /* 00539f04 mov eax, esi */ { eax = (u32)(esi); }
  /* 00539f06 call 0x50da30 */ esp -= 4; M32(esp) = 0x539f0bu; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x539f06u); RETCHK(0x539f0bu, 0x539f06u); LOADALL;
  /* 00539f0b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539f0d mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00539f10 je 0x539f3d */ if (ZF_) goto L_00539f3d;
  /* 00539f12 mov ecx, dword ptr [ebx + 0x188] */ { const u32 m_ = (u32)(ebx + 0x188u); ecx = (u32)(M32(m_)); }
  /* 00539f18 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00539f1a push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00539f1f push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00539f24 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00539f26 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00539f28 call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x539f2eu; SAVEALL; call_ind(c, t_); RETCHK(0x539f2eu, 0x539f28u); LOADALL; }
  /* 00539f2e mov ecx, dword ptr [ebx + 0x188] */ { const u32 m_ = (u32)(ebx + 0x188u); ecx = (u32)(M32(m_)); }
  /* 00539f34 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00539f36 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00539f38 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x539f3bu; SAVEALL; call_ind(c, t_); RETCHK(0x539f3bu, 0x539f38u); LOADALL; }
  /* 00539f3b jmp 0x539f41 */ goto L_00539f41;
L_00539f3d:;
  /* 00539f3d mov byte ptr [ebp - 0x2d], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)(0x0u); }
L_00539f41:;
  /* 00539f41 push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 00539f46 call 0x5fe934 */ esp -= 4; M32(esp) = 0x539f4bu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x539f46u); RETCHK(0x539f4bu, 0x539f46u); LOADALL;
  /* 00539f4b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00539f4e mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 00539f51 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00539f53 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00539f57 je 0x539f62 */ if (ZF_) goto L_00539f62;
  /* 00539f59 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00539f5a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539f5b call 0x50d810 */ esp -= 4; M32(esp) = 0x539f60u; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x539f5bu); RETCHK(0x539f60u, 0x539f5bu); LOADALL;
  /* 00539f60 jmp 0x539f64 */ goto L_00539f64;
L_00539f62:;
  /* 00539f62 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00539f64:;
  /* 00539f64 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00539f67 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00539f6b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00539f6c mov edi, 0x653500 */ { edi = (u32)(0x653500u); }
  /* 00539f71 lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 00539f74 mov dword ptr [ebx + 0x184], eax */ { const u32 m_ = (u32)(ebx + 0x184u); M32(m_) = (u32)(eax); }
  /* 00539f7a call 0x4646d0 */ esp -= 4; M32(esp) = 0x539f7fu; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x539f7au); RETCHK(0x539f7fu, 0x539f7au); LOADALL;
  /* 00539f7f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00539f82 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00539f84 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00539f86 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539f87 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00539f8a mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 00539f8e call 0x404140 */ esp -= 4; M32(esp) = 0x539f93u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x539f8eu); RETCHK(0x539f93u, 0x539f8eu); LOADALL;
  /* 00539f93 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00539f97 cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00539f9b jb 0x539fa9 */ if (CF_) goto L_00539fa9;
  /* 00539f9d mov edx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); edx = (u32)(M32(m_)); }
  /* 00539fa0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00539fa1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x539fa6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x539fa1u); RETCHK(0x539fa6u, 0x539fa1u); LOADALL;
  /* 00539fa6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00539fa9:;
  /* 00539fa9 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00539fac push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00539fae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00539faf sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00539fb2 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00539fb5 mov eax, esp */ { eax = (u32)(esp); }
  /* 00539fb7 mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 00539fba call 0x52cea0 */ esp -= 4; M32(esp) = 0x539fbfu; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x539fbau); RETCHK(0x539fbfu, 0x539fbau); LOADALL;
  /* 00539fbf mov ebx, dword ptr [ebx + 0x184] */ { const u32 m_ = (u32)(ebx + 0x184u); ebx = (u32)(M32(m_)); }
  /* 00539fc5 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00539fc8 call 0x50da30 */ esp -= 4; M32(esp) = 0x539fcdu; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x539fc8u); RETCHK(0x539fcdu, 0x539fc8u); LOADALL;
  /* 00539fcd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00539fcf mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00539fd2 je 0x539fff */ if (ZF_) goto L_00539fff;
  /* 00539fd4 mov ecx, dword ptr [ebx + 0x184] */ { const u32 m_ = (u32)(ebx + 0x184u); ecx = (u32)(M32(m_)); }
  /* 00539fda mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00539fdc push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00539fe1 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00539fe6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00539fe8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00539fea call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x539ff0u; SAVEALL; call_ind(c, t_); RETCHK(0x539ff0u, 0x539feau); LOADALL; }
  /* 00539ff0 mov ecx, dword ptr [ebx + 0x184] */ { const u32 m_ = (u32)(ebx + 0x184u); ecx = (u32)(M32(m_)); }
  /* 00539ff6 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00539ff8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00539ffa call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x539ffdu; SAVEALL; call_ind(c, t_); RETCHK(0x539ffdu, 0x539ffau); LOADALL; }
  /* 00539ffd jmp 0x53a003 */ goto L_0053a003;
L_00539fff:;
  /* 00539fff mov byte ptr [ebp - 0x2d], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)(0x0u); }
L_0053a003:;
  /* 0053a003 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a005 call 0x4019a0 */ esp -= 4; M32(esp) = 0x53a00au; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x53a005u); RETCHK(0x53a00au, 0x53a005u); LOADALL;
  /* 0053a00a mov cl, byte ptr [eax + 0xb30] */ { const u32 m_ = (u32)(eax + 0xb30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053a010 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a013 test cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a016 jne 0x53a080 */ if (!ZF_) goto L_0053a080;
  /* 0053a018 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a01a call 0x4019a0 */ esp -= 4; M32(esp) = 0x53a01fu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x53a01au); RETCHK(0x53a01fu, 0x53a01au); LOADALL;
  /* 0053a01f mov cl, byte ptr [eax + 0xb30] */ { const u32 m_ = (u32)(eax + 0xb30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053a025 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a028 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a02a js 0x53a080 */ if (SF_) goto L_0053a080;
  /* 0053a02c fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 0053a02f mov dword ptr [ebp - 0x40], 0x41700000 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x41700000u); }
  /* 0053a036 fsub dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053a039 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0053a03f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053a041 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a044 jne 0x53a04a */ if (!ZF_) goto L_0053a04a;
  /* 0053a046 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0053a048 jmp 0x53a050 */ goto L_0053a050;
L_0053a04a:;
  /* 0053a04a fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 0053a04d fsub dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0053a050:;
  /* 0053a050 fadd dword ptr [0x656db4] */ { const u32 m_ = (u32)(0x656db4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053a056 mov dword ptr [ebp - 0x38], 0x421c0000 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x421c0000u); }
  /* 0053a05d fstp dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053a060 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0053a066 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053a068 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a06b je 0x53a075 */ if (ZF_) goto L_0053a075;
  /* 0053a06d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0053a06f fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 0053a072 fsub dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0053a075:;
  /* 0053a075 fadd dword ptr [0x657160] */ { const u32 m_ = (u32)(0x657160u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053a07b fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053a07e jmp 0x53a09c */ goto L_0053a09c;
L_0053a080:;
  /* 0053a080 mov dword ptr [ebp - 0x40], 0x42200000 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x42200000u); }
  /* 0053a087 mov dword ptr [ebp - 0x44], 0x42900000 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x42900000u); }
  /* 0053a08e mov dword ptr [ebp - 0x38], 0x42800000 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x42800000u); }
  /* 0053a095 mov dword ptr [ebp - 0x3c], 0x42c00000 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0x42c00000u); }
L_0053a09c:;
  /* 0053a09c push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 0053a0a1 call 0x5fe934 */ esp -= 4; M32(esp) = 0x53a0a6u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53a0a1u); RETCHK(0x53a0a6u, 0x53a0a1u); LOADALL;
  /* 0053a0a6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a0a9 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0053a0ac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053a0ae mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 0053a0b2 je 0x53a0bd */ if (ZF_) goto L_0053a0bd;
  /* 0053a0b4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053a0b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a0b6 call 0x50d810 */ esp -= 4; M32(esp) = 0x53a0bbu; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x53a0b6u); RETCHK(0x53a0bbu, 0x53a0b6u); LOADALL;
  /* 0053a0bb jmp 0x53a0bf */ goto L_0053a0bf;
L_0053a0bd:;
  /* 0053a0bd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0053a0bf:;
  /* 0053a0bf mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053a0c2 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0053a0c6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053a0c7 mov edi, 0x6547e4 */ { edi = (u32)(0x6547e4u); }
  /* 0053a0cc lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 0053a0cf mov dword ptr [ebx + 0x18c], eax */ { const u32 m_ = (u32)(ebx + 0x18cu); M32(m_) = (u32)(eax); }
  /* 0053a0d5 call 0x4646d0 */ esp -= 4; M32(esp) = 0x53a0dau; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x53a0d5u); RETCHK(0x53a0dau, 0x53a0d5u); LOADALL;
  /* 0053a0da add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a0dd push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053a0df push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a0e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a0e2 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a0e5 mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 0053a0e9 call 0x404140 */ esp -= 4; M32(esp) = 0x53a0eeu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x53a0e9u); RETCHK(0x53a0eeu, 0x53a0e9u); LOADALL;
  /* 0053a0ee mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0053a0f2 cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053a0f6 jb 0x53a104 */ if (CF_) goto L_0053a104;
  /* 0053a0f8 mov edx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); edx = (u32)(M32(m_)); }
  /* 0053a0fb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053a0fc call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53a101u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53a0fcu); RETCHK(0x53a101u, 0x53a0fcu); LOADALL;
  /* 0053a101 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053a104:;
  /* 0053a104 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0053a107 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a109 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a10a sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a10d lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0053a110 mov eax, esp */ { eax = (u32)(esp); }
  /* 0053a112 mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 0053a115 call 0x52cea0 */ esp -= 4; M32(esp) = 0x53a11au; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x53a115u); RETCHK(0x53a11au, 0x53a115u); LOADALL;
  /* 0053a11a mov ebx, dword ptr [ebx + 0x18c] */ { const u32 m_ = (u32)(ebx + 0x18cu); ebx = (u32)(M32(m_)); }
  /* 0053a120 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a123 call 0x50da30 */ esp -= 4; M32(esp) = 0x53a128u; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x53a123u); RETCHK(0x53a128u, 0x53a123u); LOADALL;
  /* 0053a128 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a12a je 0x53a171 */ if (ZF_) goto L_0053a171;
  /* 0053a12c mov edi, 0x64e508 */ { edi = (u32)(0x64e508u); }
  /* 0053a131 call 0x5398c0 */ esp -= 4; M32(esp) = 0x53a136u; SAVEALL; F_005398c0(c); ABI_CHECK(0x5398c0u, 0x53a131u); RETCHK(0x53a136u, 0x53a131u); LOADALL;
  /* 0053a136 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053a139 mov edi, dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); edi = (u32)(M32(m_)); }
  /* 0053a13f mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0053a141 call 0x50dbb0 */ esp -= 4; M32(esp) = 0x53a146u; SAVEALL; F_0050dbb0(c); ABI_CHECK(0x50dbb0u, 0x53a141u); RETCHK(0x53a146u, 0x53a141u); LOADALL;
  /* 0053a146 mov ecx, dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); ecx = (u32)(M32(m_)); }
  /* 0053a14c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053a14e push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0053a153 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0053a158 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a15a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a15c call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53a162u; SAVEALL; call_ind(c, t_); RETCHK(0x53a162u, 0x53a15cu); LOADALL; }
  /* 0053a162 mov ecx, dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); ecx = (u32)(M32(m_)); }
  /* 0053a168 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053a16a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a16c call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53a16fu; SAVEALL; call_ind(c, t_); RETCHK(0x53a16fu, 0x53a16cu); LOADALL; }
  /* 0053a16f jmp 0x53a178 */ goto L_0053a178;
L_0053a171:;
  /* 0053a171 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053a174 mov byte ptr [ebp - 0x2d], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)(0x0u); }
L_0053a178:;
  /* 0053a178 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a17a call 0x4019a0 */ esp -= 4; M32(esp) = 0x53a17fu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x53a17au); RETCHK(0x53a17fu, 0x53a17au); LOADALL;
  /* 0053a17f mov cl, byte ptr [eax + 0xb30] */ { const u32 m_ = (u32)(eax + 0xb30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053a185 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a188 test cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a18b jne 0x53a3b7 */ if (!ZF_) goto L_0053a3b7;
  /* 0053a191 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a193 call 0x4019a0 */ esp -= 4; M32(esp) = 0x53a198u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x53a193u); RETCHK(0x53a198u, 0x53a193u); LOADALL;
  /* 0053a198 mov cl, byte ptr [eax + 0xb30] */ { const u32 m_ = (u32)(eax + 0xb30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053a19e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a1a1 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a1a3 js 0x53a3b7 */ if (SF_) goto L_0053a3b7;
  /* 0053a1a9 fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 0053a1ac fsub dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053a1af fst dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); MF32(m_) = (float)ST(0); }
  /* 0053a1b2 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0053a1b8 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053a1ba test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a1bd jne 0x53a1c4 */ if (!ZF_) goto L_0053a1c4;
  /* 0053a1bf fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0053a1c2 jmp 0x53a1ca */ goto L_0053a1ca;
L_0053a1c4:;
  /* 0053a1c4 fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 0053a1c7 fsub dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0053a1ca:;
  /* 0053a1ca fadd dword ptr [0x656ef0] */ { const u32 m_ = (u32)(0x656ef0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053a1d0 mov dword ptr [ebp - 0x40], 0x41300000 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x41300000u); }
  /* 0053a1d7 fstp dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053a1da fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 0053a1dd fsub dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053a1e0 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0053a1e6 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053a1e8 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a1eb je 0x53a1f5 */ if (ZF_) goto L_0053a1f5;
  /* 0053a1ed fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0053a1ef fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 0053a1f2 fsub dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0053a1f5:;
  /* 0053a1f5 mov ecx, dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); ecx = (u32)(M32(m_)); }
  /* 0053a1f8 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053a1fb fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0053a1fe fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053a200 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0053a206 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053a208 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a20b je 0x53a214 */ if (ZF_) goto L_0053a214;
  /* 0053a20d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0053a20f fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0053a211 fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0053a214:;
  /* 0053a214 push 0x2d4 */ { u32 v_ = 0x2d4u; esp -= 4; M32(esp) = v_; }
  /* 0053a219 fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053a21c call 0x5fe934 */ esp -= 4; M32(esp) = 0x53a221u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53a21cu); RETCHK(0x53a221u, 0x53a21cu); LOADALL;
  /* 0053a221 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a224 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0053a227 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053a229 mov byte ptr [ebp - 4], 0xe */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xeu); }
  /* 0053a22d je 0x53a238 */ if (ZF_) goto L_0053a238;
  /* 0053a22f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053a230 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a231 call 0x5221d0 */ esp -= 4; M32(esp) = 0x53a236u; SAVEALL; F_005221d0(c); ABI_CHECK(0x5221d0u, 0x53a231u); RETCHK(0x53a236u, 0x53a231u); LOADALL;
  /* 0053a236 jmp 0x53a23a */ goto L_0053a23a;
L_0053a238:;
  /* 0053a238 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0053a23a:;
  /* 0053a23a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053a23d mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053a23f mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a242 mov dword ptr [esi + 0x190], eax */ { const u32 m_ = (u32)(esi + 0x190u); M32(m_) = (u32)(eax); }
  /* 0053a248 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053a249 mov edi, 0x6547d8 */ { edi = (u32)(0x6547d8u); }
  /* 0053a24e lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 0053a251 call 0x4646d0 */ esp -= 4; M32(esp) = 0x53a256u; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x53a251u); RETCHK(0x53a256u, 0x53a251u); LOADALL;
  /* 0053a256 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a259 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053a25b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a25d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a25e lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a261 mov byte ptr [ebp - 4], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xfu); }
  /* 0053a265 call 0x404140 */ esp -= 4; M32(esp) = 0x53a26au; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x53a265u); RETCHK(0x53a26au, 0x53a265u); LOADALL;
  /* 0053a26a mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a26d cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053a271 jb 0x53a27f */ if (CF_) goto L_0053a27f;
  /* 0053a273 mov edx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); edx = (u32)(M32(m_)); }
  /* 0053a276 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053a277 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53a27cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53a277u); RETCHK(0x53a27cu, 0x53a277u); LOADALL;
  /* 0053a27c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053a27f:;
  /* 0053a27f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a281 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053a283 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0053a285 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a288 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0053a28b mov eax, esp */ { eax = (u32)(esp); }
  /* 0053a28d mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 0053a290 call 0x52cea0 */ esp -= 4; M32(esp) = 0x53a295u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x53a290u); RETCHK(0x53a295u, 0x53a290u); LOADALL;
  /* 0053a295 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053a298 mov ebx, dword ptr [esi + 0x190] */ { const u32 m_ = (u32)(esi + 0x190u); ebx = (u32)(M32(m_)); }
  /* 0053a29e lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a2a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a2a2 call 0x5223f0 */ esp -= 4; M32(esp) = 0x53a2a7u; SAVEALL; F_005223f0(c); ABI_CHECK(0x5223f0u, 0x53a2a2u); RETCHK(0x53a2a7u, 0x53a2a2u); LOADALL;
  /* 0053a2a7 call 0x62ce90 */ esp -= 4; M32(esp) = 0x53a2acu; SAVEALL; F_0062ce90(c); ABI_CHECK(0x62ce90u, 0x53a2a7u); RETCHK(0x53a2acu, 0x53a2a7u); LOADALL;
  /* 0053a2ac nop */ ;
  /* 0053a2ad nop */ ;
  /* 0053a2ae fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0053a2b1 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0053a2b7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053a2b9 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a2bc jne 0x53a2c3 */ if (!ZF_) goto L_0053a2c3;
  /* 0053a2be fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0053a2c1 jmp 0x53a2c9 */ goto L_0053a2c9;
L_0053a2c3:;
  /* 0053a2c3 fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 0053a2c6 fsub dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0053a2c9:;
  /* 0053a2c9 fadd dword ptr [0x656ef0] */ { const u32 m_ = (u32)(0x656ef0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053a2cf push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 0053a2d4 mov dword ptr [ebp - 0x40], 0x41300000 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x41300000u); }
  /* 0053a2db mov dword ptr [ebp - 0x38], 0x42100000 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x42100000u); }
  /* 0053a2e2 fstp dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053a2e5 fld dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)MF32(m_)); }
  /* 0053a2e8 fadd dword ptr [0x657074] */ { const u32 m_ = (u32)(0x657074u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053a2ee fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053a2f1 call 0x5fe934 */ esp -= 4; M32(esp) = 0x53a2f6u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53a2f1u); RETCHK(0x53a2f6u, 0x53a2f1u); LOADALL;
  /* 0053a2f6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a2f9 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0053a2fc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053a2fe mov byte ptr [ebp - 4], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x10u); }
  /* 0053a302 je 0x53a30d */ if (ZF_) goto L_0053a30d;
  /* 0053a304 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053a305 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a306 call 0x50d810 */ esp -= 4; M32(esp) = 0x53a30bu; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x53a306u); RETCHK(0x53a30bu, 0x53a306u); LOADALL;
  /* 0053a30b jmp 0x53a30f */ goto L_0053a30f;
L_0053a30d:;
  /* 0053a30d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0053a30f:;
  /* 0053a30f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053a312 mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053a314 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a317 mov dword ptr [esi + 0x1bc], eax */ { const u32 m_ = (u32)(esi + 0x1bcu); M32(m_) = (u32)(eax); }
  /* 0053a31d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053a31e mov edi, 0x6547d0 */ { edi = (u32)(0x6547d0u); }
  /* 0053a323 lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 0053a326 call 0x4646d0 */ esp -= 4; M32(esp) = 0x53a32bu; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x53a326u); RETCHK(0x53a32bu, 0x53a326u); LOADALL;
  /* 0053a32b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a32e push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053a330 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a332 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a333 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a336 mov byte ptr [ebp - 4], 0x11 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x11u); }
  /* 0053a33a call 0x404140 */ esp -= 4; M32(esp) = 0x53a33fu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x53a33au); RETCHK(0x53a33fu, 0x53a33au); LOADALL;
  /* 0053a33f mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a342 cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053a346 jb 0x53a354 */ if (CF_) goto L_0053a354;
  /* 0053a348 mov edx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); edx = (u32)(M32(m_)); }
  /* 0053a34b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053a34c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53a351u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53a34cu); RETCHK(0x53a351u, 0x53a34cu); LOADALL;
  /* 0053a351 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053a354:;
  /* 0053a354 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a356 push 0x644290 */ { u32 v_ = 0x644290u; esp -= 4; M32(esp) = v_; }
  /* 0053a35b sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a35e lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0053a361 mov eax, esp */ { eax = (u32)(esp); }
  /* 0053a363 mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 0053a366 call 0x52cea0 */ esp -= 4; M32(esp) = 0x53a36bu; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x53a366u); RETCHK(0x53a36bu, 0x53a366u); LOADALL;
  /* 0053a36b mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053a36e mov ebx, dword ptr [esi + 0x1bc] */ { const u32 m_ = (u32)(esi + 0x1bcu); ebx = (u32)(M32(m_)); }
  /* 0053a374 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a377 call 0x50da30 */ esp -= 4; M32(esp) = 0x53a37cu; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x53a377u); RETCHK(0x53a37cu, 0x53a377u); LOADALL;
  /* 0053a37c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a37e je 0x53a3ae */ if (ZF_) goto L_0053a3ae;
  /* 0053a380 mov ecx, dword ptr [esi + 0x1bc] */ { const u32 m_ = (u32)(esi + 0x1bcu); ecx = (u32)(M32(m_)); }
  /* 0053a386 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053a388 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0053a38d push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0053a392 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a394 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a396 call dword ptr [eax + 0xe4] */ { const u32 m_ = (u32)(eax + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53a39cu; SAVEALL; call_ind(c, t_); RETCHK(0x53a39cu, 0x53a396u); LOADALL; }
  /* 0053a39c mov ecx, dword ptr [esi + 0x1bc] */ { const u32 m_ = (u32)(esi + 0x1bcu); ecx = (u32)(M32(m_)); }
  /* 0053a3a2 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053a3a4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a3a6 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53a3a9u; SAVEALL; call_ind(c, t_); RETCHK(0x53a3a9u, 0x53a3a6u); LOADALL; }
  /* 0053a3a9 jmp 0x53a76c */ goto L_0053a76c;
L_0053a3ae:;
  /* 0053a3ae mov byte ptr [ebp - 0x2d], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)(0x0u); }
  /* 0053a3b2 jmp 0x53a76c */ goto L_0053a76c;
L_0053a3b7:;
  /* 0053a3b7 fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 0053a3ba mov dword ptr [ebp - 0x44], 0x42280000 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x42280000u); }
  /* 0053a3c1 fsub dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053a3c4 mov dword ptr [ebp - 0x40], 0x40000000 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x40000000u); }
  /* 0053a3cb fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0053a3d1 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053a3d3 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a3d6 je 0x53a3e0 */ if (ZF_) goto L_0053a3e0;
  /* 0053a3d8 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0053a3da fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 0053a3dd fsub dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0053a3e0:;
  /* 0053a3e0 fsub dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053a3e6 mov ecx, dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); ecx = (u32)(M32(m_)); }
  /* 0053a3e9 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053a3ec fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0053a3ef fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053a3f1 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0053a3f7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053a3f9 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a3fc je 0x53a405 */ if (ZF_) goto L_0053a405;
  /* 0053a3fe fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0053a400 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0053a402 fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0053a405:;
  /* 0053a405 fsub dword ptr [0x6570c8] */ { const u32 m_ = (u32)(0x6570c8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053a40b push 0x2d4 */ { u32 v_ = 0x2d4u; esp -= 4; M32(esp) = v_; }
  /* 0053a410 fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053a413 call 0x5fe934 */ esp -= 4; M32(esp) = 0x53a418u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53a413u); RETCHK(0x53a418u, 0x53a413u); LOADALL;
  /* 0053a418 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a41b mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0053a41e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053a420 mov byte ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x6u); }
  /* 0053a424 je 0x53a42f */ if (ZF_) goto L_0053a42f;
  /* 0053a426 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053a427 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a428 call 0x5221d0 */ esp -= 4; M32(esp) = 0x53a42du; SAVEALL; F_005221d0(c); ABI_CHECK(0x5221d0u, 0x53a428u); RETCHK(0x53a42du, 0x53a428u); LOADALL;
  /* 0053a42d jmp 0x53a431 */ goto L_0053a431;
L_0053a42f:;
  /* 0053a42f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0053a431:;
  /* 0053a431 mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053a433 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a436 mov dword ptr [esi + 0x190], eax */ { const u32 m_ = (u32)(esi + 0x190u); M32(m_) = (u32)(eax); }
  /* 0053a43c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0053a43f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a440 mov edi, 0x6547d8 */ { edi = (u32)(0x6547d8u); }
  /* 0053a445 lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 0053a448 call 0x4646d0 */ esp -= 4; M32(esp) = 0x53a44du; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x53a448u); RETCHK(0x53a44du, 0x53a448u); LOADALL;
  /* 0053a44d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a450 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053a452 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a454 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a455 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a458 mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 0053a45c call 0x404140 */ esp -= 4; M32(esp) = 0x53a461u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x53a45cu); RETCHK(0x53a461u, 0x53a45cu); LOADALL;
  /* 0053a461 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a464 cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053a468 jb 0x53a476 */ if (CF_) goto L_0053a476;
  /* 0053a46a mov ecx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); ecx = (u32)(M32(m_)); }
  /* 0053a46d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053a46e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53a473u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53a46eu); RETCHK(0x53a473u, 0x53a46eu); LOADALL;
  /* 0053a473 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053a476:;
  /* 0053a476 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a478 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053a47a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a47c sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a47f lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0053a482 mov eax, esp */ { eax = (u32)(esp); }
  /* 0053a484 mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 0053a487 call 0x52cea0 */ esp -= 4; M32(esp) = 0x53a48cu; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x53a487u); RETCHK(0x53a48cu, 0x53a487u); LOADALL;
  /* 0053a48c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053a48f mov ebx, dword ptr [esi + 0x190] */ { const u32 m_ = (u32)(esi + 0x190u); ebx = (u32)(M32(m_)); }
  /* 0053a495 lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a498 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053a499 call 0x5223f0 */ esp -= 4; M32(esp) = 0x53a49eu; SAVEALL; F_005223f0(c); ABI_CHECK(0x5223f0u, 0x53a499u); RETCHK(0x53a49eu, 0x53a499u); LOADALL;
  /* 0053a49e call 0x62dafc */ esp -= 4; M32(esp) = 0x53a4a3u; SAVEALL; F_0062dafc(c); ABI_CHECK(0x62dafcu, 0x53a49eu); RETCHK(0x53a4a3u, 0x53a49eu); LOADALL;
  /* 0053a4a3 nop */ ;
  /* 0053a4a4 nop */ ;
  /* 0053a4a5 push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 0053a4aa mov dword ptr [ebp - 0x44], 0x42440000 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x42440000u); }
  /* 0053a4b1 mov dword ptr [ebp - 0x40], 0x40c00000 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x40c00000u); }
  /* 0053a4b8 mov dword ptr [ebp - 0x38], 0x41d00000 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x41d00000u); }
  /* 0053a4bf mov dword ptr [ebp - 0x3c], 0x42780000 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0x42780000u); }
  /* 0053a4c6 call 0x5fe934 */ esp -= 4; M32(esp) = 0x53a4cbu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53a4c6u); RETCHK(0x53a4cbu, 0x53a4c6u); LOADALL;
  /* 0053a4cb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a4ce mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0053a4d1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053a4d3 mov byte ptr [ebp - 4], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x8u); }
  /* 0053a4d7 je 0x53a4e2 */ if (ZF_) goto L_0053a4e2;
  /* 0053a4d9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053a4da push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a4db call 0x50d810 */ esp -= 4; M32(esp) = 0x53a4e0u; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x53a4dbu); RETCHK(0x53a4e0u, 0x53a4dbu); LOADALL;
  /* 0053a4e0 jmp 0x53a4e4 */ goto L_0053a4e4;
L_0053a4e2:;
  /* 0053a4e2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0053a4e4:;
  /* 0053a4e4 mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053a4e6 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a4e9 mov dword ptr [esi + 0x1bc], eax */ { const u32 m_ = (u32)(esi + 0x1bcu); M32(m_) = (u32)(eax); }
  /* 0053a4ef mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0053a4f2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a4f3 mov edi, 0x6547d0 */ { edi = (u32)(0x6547d0u); }
  /* 0053a4f8 lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 0053a4fb call 0x4646d0 */ esp -= 4; M32(esp) = 0x53a500u; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x53a4fbu); RETCHK(0x53a500u, 0x53a4fbu); LOADALL;
  /* 0053a500 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a503 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053a505 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a507 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a508 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a50b mov byte ptr [ebp - 4], 9 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x9u); }
  /* 0053a50f call 0x404140 */ esp -= 4; M32(esp) = 0x53a514u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x53a50fu); RETCHK(0x53a514u, 0x53a50fu); LOADALL;
  /* 0053a514 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a517 cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053a51b jb 0x53a529 */ if (CF_) goto L_0053a529;
  /* 0053a51d mov ecx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); ecx = (u32)(M32(m_)); }
  /* 0053a520 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053a521 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53a526u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53a521u); RETCHK(0x53a526u, 0x53a521u); LOADALL;
  /* 0053a526 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053a529:;
  /* 0053a529 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a52b push 0x644290 */ { u32 v_ = 0x644290u; esp -= 4; M32(esp) = v_; }
  /* 0053a530 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a533 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0053a536 mov eax, esp */ { eax = (u32)(esp); }
  /* 0053a538 mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 0053a53b call 0x52cea0 */ esp -= 4; M32(esp) = 0x53a540u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x53a53bu); RETCHK(0x53a540u, 0x53a53bu); LOADALL;
  /* 0053a540 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053a543 mov ebx, dword ptr [esi + 0x1bc] */ { const u32 m_ = (u32)(esi + 0x1bcu); ebx = (u32)(M32(m_)); }
  /* 0053a549 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a54c call 0x50da30 */ esp -= 4; M32(esp) = 0x53a551u; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x53a54cu); RETCHK(0x53a551u, 0x53a54cu); LOADALL;
  /* 0053a551 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a553 je 0x53a580 */ if (ZF_) goto L_0053a580;
  /* 0053a555 mov ecx, dword ptr [esi + 0x1bc] */ { const u32 m_ = (u32)(esi + 0x1bcu); ecx = (u32)(M32(m_)); }
  /* 0053a55b mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053a55d push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0053a562 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0053a567 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a569 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a56b call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53a571u; SAVEALL; call_ind(c, t_); RETCHK(0x53a571u, 0x53a56bu); LOADALL; }
  /* 0053a571 mov ecx, dword ptr [esi + 0x1bc] */ { const u32 m_ = (u32)(esi + 0x1bcu); ecx = (u32)(M32(m_)); }
  /* 0053a577 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053a579 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a57b call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53a57eu; SAVEALL; call_ind(c, t_); RETCHK(0x53a57eu, 0x53a57bu); LOADALL; }
  /* 0053a57e jmp 0x53a584 */ goto L_0053a584;
L_0053a580:;
  /* 0053a580 mov byte ptr [ebp - 0x2d], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)(0x0u); }
L_0053a584:;
  /* 0053a584 mov ecx, dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); ecx = (u32)(M32(m_)); }
  /* 0053a587 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0053a58a fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053a58c fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0053a592 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053a594 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a597 je 0x53a5a0 */ if (ZF_) goto L_0053a5a0;
  /* 0053a599 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0053a59b fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0053a59d fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0053a5a0:;
  /* 0053a5a0 fsub dword ptr [0x657170] */ { const u32 m_ = (u32)(0x657170u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053a5a6 mov dword ptr [ebp - 0x40], 0x40000000 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x40000000u); }
  /* 0053a5ad mov dword ptr [ebp - 0x38], 0x41d80000 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x41d80000u); }
  /* 0053a5b4 fstp dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053a5b7 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0053a5ba fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053a5bc fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0053a5c2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053a5c4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a5c7 je 0x53a5d0 */ if (ZF_) goto L_0053a5d0;
  /* 0053a5c9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0053a5cb fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0053a5cd fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0053a5d0:;
  /* 0053a5d0 fsub dword ptr [0x6570dc] */ { const u32 m_ = (u32)(0x6570dcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053a5d6 fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053a5d9 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0053a5dc fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053a5de fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0053a5e4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053a5e6 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a5e9 je 0x53a5f2 */ if (ZF_) goto L_0053a5f2;
  /* 0053a5eb fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0053a5ed fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0053a5ef fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0053a5f2:;
  /* 0053a5f2 fsub dword ptr [0x657160] */ { const u32 m_ = (u32)(0x657160u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053a5f8 mov dword ptr [ebp - 0x50], 0x40000000 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x40000000u); }
  /* 0053a5ff mov dword ptr [ebp - 0x48], 0x41d80000 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x41d80000u); }
  /* 0053a606 fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053a609 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0053a60c fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053a60e fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0053a614 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053a616 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a619 je 0x53a622 */ if (ZF_) goto L_0053a622;
  /* 0053a61b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0053a61d fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0053a61f fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0053a622:;
  /* 0053a622 fsub dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053a628 push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 0053a62d fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053a630 call 0x5fe934 */ esp -= 4; M32(esp) = 0x53a635u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53a630u); RETCHK(0x53a635u, 0x53a630u); LOADALL;
  /* 0053a635 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a638 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0053a63b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053a63d mov byte ptr [ebp - 4], 0xa */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xau); }
  /* 0053a641 je 0x53a64c */ if (ZF_) goto L_0053a64c;
  /* 0053a643 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053a644 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a645 call 0x50d810 */ esp -= 4; M32(esp) = 0x53a64au; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x53a645u); RETCHK(0x53a64au, 0x53a645u); LOADALL;
  /* 0053a64a jmp 0x53a64e */ goto L_0053a64e;
L_0053a64c:;
  /* 0053a64c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0053a64e:;
  /* 0053a64e mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053a650 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a653 push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 0053a658 mov dword ptr [esi + 0x194], eax */ { const u32 m_ = (u32)(esi + 0x194u); M32(m_) = (u32)(eax); }
  /* 0053a65e call 0x5fe934 */ esp -= 4; M32(esp) = 0x53a663u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53a65eu); RETCHK(0x53a663u, 0x53a65eu); LOADALL;
  /* 0053a663 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a666 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0053a669 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053a66b mov byte ptr [ebp - 4], 0xb */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xbu); }
  /* 0053a66f je 0x53a67a */ if (ZF_) goto L_0053a67a;
  /* 0053a671 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053a672 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a673 call 0x50d810 */ esp -= 4; M32(esp) = 0x53a678u; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x53a673u); RETCHK(0x53a678u, 0x53a673u); LOADALL;
  /* 0053a678 jmp 0x53a67c */ goto L_0053a67c;
L_0053a67a:;
  /* 0053a67a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0053a67c:;
  /* 0053a67c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053a67f mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a682 mov dword ptr [esi + 0x198], eax */ { const u32 m_ = (u32)(esi + 0x198u); M32(m_) = (u32)(eax); }
  /* 0053a688 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053a689 mov edi, 0x6547c4 */ { edi = (u32)(0x6547c4u); }
  /* 0053a68e lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 0053a691 call 0x4646d0 */ esp -= 4; M32(esp) = 0x53a696u; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x53a691u); RETCHK(0x53a696u, 0x53a691u); LOADALL;
  /* 0053a696 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a699 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053a69b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a69d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a69e lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a6a1 mov byte ptr [ebp - 4], 0xc */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xcu); }
  /* 0053a6a5 call 0x404140 */ esp -= 4; M32(esp) = 0x53a6aau; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x53a6a5u); RETCHK(0x53a6aau, 0x53a6a5u); LOADALL;
  /* 0053a6aa mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a6ad cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053a6b1 jb 0x53a6bf */ if (CF_) goto L_0053a6bf;
  /* 0053a6b3 mov edx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); edx = (u32)(M32(m_)); }
  /* 0053a6b6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053a6b7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53a6bcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53a6b7u); RETCHK(0x53a6bcu, 0x53a6b7u); LOADALL;
  /* 0053a6bc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053a6bf:;
  /* 0053a6bf mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0053a6c2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a6c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a6c5 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a6c8 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0053a6cb mov eax, esp */ { eax = (u32)(esp); }
  /* 0053a6cd mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 0053a6d0 call 0x52cea0 */ esp -= 4; M32(esp) = 0x53a6d5u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x53a6d0u); RETCHK(0x53a6d5u, 0x53a6d0u); LOADALL;
  /* 0053a6d5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0053a6d8 mov ebx, dword ptr [ecx + 0x194] */ { const u32 m_ = (u32)(ecx + 0x194u); ebx = (u32)(M32(m_)); }
  /* 0053a6de lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a6e1 call 0x50da30 */ esp -= 4; M32(esp) = 0x53a6e6u; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x53a6e1u); RETCHK(0x53a6e6u, 0x53a6e1u); LOADALL;
  /* 0053a6e6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a6e8 je 0x53a750 */ if (ZF_) goto L_0053a750;
  /* 0053a6ea mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0053a6ed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a6ee mov edi, 0x6547b8 */ { edi = (u32)(0x6547b8u); }
  /* 0053a6f3 lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 0053a6f6 call 0x4646d0 */ esp -= 4; M32(esp) = 0x53a6fbu; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x53a6f6u); RETCHK(0x53a6fbu, 0x53a6f6u); LOADALL;
  /* 0053a6fb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a6fe push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053a700 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a702 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a703 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a706 mov byte ptr [ebp - 4], 0xd */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xdu); }
  /* 0053a70a call 0x404140 */ esp -= 4; M32(esp) = 0x53a70fu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x53a70au); RETCHK(0x53a70fu, 0x53a70au); LOADALL;
  /* 0053a70f mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0053a713 cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053a717 jb 0x53a725 */ if (CF_) goto L_0053a725;
  /* 0053a719 mov ecx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); ecx = (u32)(M32(m_)); }
  /* 0053a71c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053a71d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53a722u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53a71du); RETCHK(0x53a722u, 0x53a71du); LOADALL;
  /* 0053a722 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053a725:;
  /* 0053a725 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0053a728 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a72a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053a72b sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a72e lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 0053a731 mov eax, esp */ { eax = (u32)(esp); }
  /* 0053a733 mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 0053a736 call 0x52cea0 */ esp -= 4; M32(esp) = 0x53a73bu; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x53a736u); RETCHK(0x53a73bu, 0x53a736u); LOADALL;
  /* 0053a73b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0053a73e mov ebx, dword ptr [ecx + 0x198] */ { const u32 m_ = (u32)(ecx + 0x198u); ebx = (u32)(M32(m_)); }
  /* 0053a744 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a747 call 0x50da30 */ esp -= 4; M32(esp) = 0x53a74cu; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x53a747u); RETCHK(0x53a74cu, 0x53a747u); LOADALL;
  /* 0053a74c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a74e jne 0x53a769 */ if (!ZF_) goto L_0053a769;
L_0053a750:;
  /* 0053a750 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053a754 jb 0x53a762 */ if (CF_) goto L_0053a762;
  /* 0053a756 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 0053a759 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053a75a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53a75fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53a75au); RETCHK(0x53a75fu, 0x53a75au); LOADALL;
  /* 0053a75f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053a762:;
  /* 0053a762 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0053a764 jmp 0x53ac8b */ goto L_0053ac8b;
L_0053a769:;
  /* 0053a769 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_0053a76c:;
  /* 0053a76c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a76e call 0x4019a0 */ esp -= 4; M32(esp) = 0x53a773u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x53a76eu); RETCHK(0x53a773u, 0x53a76eu); LOADALL;
  /* 0053a773 mov cl, byte ptr [eax + 0xb30] */ { const u32 m_ = (u32)(eax + 0xb30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053a779 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a77c test cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a77f jne 0x53a9d7 */ if (!ZF_) goto L_0053a9d7;
  /* 0053a785 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a787 call 0x4019a0 */ esp -= 4; M32(esp) = 0x53a78cu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x53a787u); RETCHK(0x53a78cu, 0x53a787u); LOADALL;
  /* 0053a78c mov cl, byte ptr [eax + 0xb30] */ { const u32 m_ = (u32)(eax + 0xb30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053a792 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a795 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a797 js 0x53a9d7 */ if (SF_) goto L_0053a9d7;
  /* 0053a79d push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 0053a7a2 call 0x5fe934 */ esp -= 4; M32(esp) = 0x53a7a7u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53a7a2u); RETCHK(0x53a7a7u, 0x53a7a2u); LOADALL;
  /* 0053a7a7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a7aa mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0053a7ad test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053a7af mov byte ptr [ebp - 4], 0x1a */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1au); }
  /* 0053a7b3 je 0x53a7be */ if (ZF_) goto L_0053a7be;
  /* 0053a7b5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053a7b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a7b7 call 0x50d810 */ esp -= 4; M32(esp) = 0x53a7bcu; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x53a7b7u); RETCHK(0x53a7bcu, 0x53a7b7u); LOADALL;
  /* 0053a7bc jmp 0x53a7c0 */ goto L_0053a7c0;
L_0053a7be:;
  /* 0053a7be xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0053a7c0:;
  /* 0053a7c0 mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053a7c2 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a7c5 mov dword ptr [esi + 0x1ac], eax */ { const u32 m_ = (u32)(esi + 0x1acu); M32(m_) = (u32)(eax); }
  /* 0053a7cb mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0053a7ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a7cf mov edi, 0x6547ac */ { edi = (u32)(0x6547acu); }
  /* 0053a7d4 lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 0053a7d7 call 0x4646d0 */ esp -= 4; M32(esp) = 0x53a7dcu; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x53a7d7u); RETCHK(0x53a7dcu, 0x53a7d7u); LOADALL;
  /* 0053a7dc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a7df push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053a7e1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a7e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a7e4 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a7e7 mov byte ptr [ebp - 4], 0x1b */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1bu); }
  /* 0053a7eb call 0x404140 */ esp -= 4; M32(esp) = 0x53a7f0u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x53a7ebu); RETCHK(0x53a7f0u, 0x53a7ebu); LOADALL;
  /* 0053a7f0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053a7f2 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a7f5 call 0x43ee60 */ esp -= 4; M32(esp) = 0x53a7fau; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x53a7f5u); RETCHK(0x53a7fau, 0x53a7f5u); LOADALL;
  /* 0053a7fa push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a7fc push 0x654724 */ { u32 v_ = 0x654724u; esp -= 4; M32(esp) = v_; }
  /* 0053a801 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a804 lea ecx, [ebp - 0x94] */ ecx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0053a80a mov eax, esp */ { eax = (u32)(esp); }
  /* 0053a80c mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 0053a80f call 0x52cea0 */ esp -= 4; M32(esp) = 0x53a814u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x53a80fu); RETCHK(0x53a814u, 0x53a80fu); LOADALL;
  /* 0053a814 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053a817 mov ebx, dword ptr [esi + 0x1ac] */ { const u32 m_ = (u32)(esi + 0x1acu); ebx = (u32)(M32(m_)); }
  /* 0053a81d lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a820 call 0x50da30 */ esp -= 4; M32(esp) = 0x53a825u; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x53a820u); RETCHK(0x53a825u, 0x53a820u); LOADALL;
  /* 0053a825 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a827 jne 0x53a82c */ if (!ZF_) goto L_0053a82c;
  /* 0053a829 mov byte ptr [ebp - 0x2d], al */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)((eax & 0xffu)); }
L_0053a82c:;
  /* 0053a82c push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 0053a831 call 0x5fe934 */ esp -= 4; M32(esp) = 0x53a836u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53a831u); RETCHK(0x53a836u, 0x53a831u); LOADALL;
  /* 0053a836 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a839 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0053a83c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053a83e mov byte ptr [ebp - 4], 0x1c */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1cu); }
  /* 0053a842 je 0x53a84d */ if (ZF_) goto L_0053a84d;
  /* 0053a844 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053a845 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a846 call 0x50d810 */ esp -= 4; M32(esp) = 0x53a84bu; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x53a846u); RETCHK(0x53a84bu, 0x53a846u); LOADALL;
  /* 0053a84b jmp 0x53a84f */ goto L_0053a84f;
L_0053a84d:;
  /* 0053a84d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0053a84f:;
  /* 0053a84f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053a852 mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053a854 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a857 mov dword ptr [esi + 0x1b0], eax */ { const u32 m_ = (u32)(esi + 0x1b0u); M32(m_) = (u32)(eax); }
  /* 0053a85d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053a85e mov edi, 0x65478c */ { edi = (u32)(0x65478cu); }
  /* 0053a863 lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 0053a866 call 0x4646d0 */ esp -= 4; M32(esp) = 0x53a86bu; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x53a866u); RETCHK(0x53a86bu, 0x53a866u); LOADALL;
  /* 0053a86b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a86e push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053a870 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a872 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a873 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a876 mov byte ptr [ebp - 4], 0x1d */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1du); }
  /* 0053a87a call 0x404140 */ esp -= 4; M32(esp) = 0x53a87fu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x53a87au); RETCHK(0x53a87fu, 0x53a87au); LOADALL;
  /* 0053a87f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053a881 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a884 call 0x43ee60 */ esp -= 4; M32(esp) = 0x53a889u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x53a884u); RETCHK(0x53a889u, 0x53a884u); LOADALL;
  /* 0053a889 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a88b push 0x654710 */ { u32 v_ = 0x654710u; esp -= 4; M32(esp) = v_; }
  /* 0053a890 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a893 lea ecx, [ebp - 0xb4] */ ecx = (u32)((u32)(ebp + 0xffffff4cu));
  /* 0053a899 mov eax, esp */ { eax = (u32)(esp); }
  /* 0053a89b mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 0053a89e call 0x52cea0 */ esp -= 4; M32(esp) = 0x53a8a3u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x53a89eu); RETCHK(0x53a8a3u, 0x53a89eu); LOADALL;
  /* 0053a8a3 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053a8a6 mov ebx, dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); ebx = (u32)(M32(m_)); }
  /* 0053a8ac lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a8af call 0x50da30 */ esp -= 4; M32(esp) = 0x53a8b4u; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x53a8afu); RETCHK(0x53a8b4u, 0x53a8afu); LOADALL;
  /* 0053a8b4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a8b6 jne 0x53a8bb */ if (!ZF_) goto L_0053a8bb;
  /* 0053a8b8 mov byte ptr [ebp - 0x2d], al */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)((eax & 0xffu)); }
L_0053a8bb:;
  /* 0053a8bb push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 0053a8c0 call 0x5fe934 */ esp -= 4; M32(esp) = 0x53a8c5u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53a8c0u); RETCHK(0x53a8c5u, 0x53a8c0u); LOADALL;
  /* 0053a8c5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a8c8 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0053a8cb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053a8cd mov byte ptr [ebp - 4], 0x1e */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1eu); }
  /* 0053a8d1 je 0x53a8dc */ if (ZF_) goto L_0053a8dc;
  /* 0053a8d3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053a8d4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a8d5 call 0x50d810 */ esp -= 4; M32(esp) = 0x53a8dau; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x53a8d5u); RETCHK(0x53a8dau, 0x53a8d5u); LOADALL;
  /* 0053a8da jmp 0x53a8de */ goto L_0053a8de;
L_0053a8dc:;
  /* 0053a8dc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0053a8de:;
  /* 0053a8de mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0053a8e1 mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053a8e3 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a8e6 mov dword ptr [esi + 0x1b4], eax */ { const u32 m_ = (u32)(esi + 0x1b4u); M32(m_) = (u32)(eax); }
  /* 0053a8ec push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053a8ed mov edi, 0x65476c */ { edi = (u32)(0x65476cu); }
  /* 0053a8f2 lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 0053a8f5 call 0x4646d0 */ esp -= 4; M32(esp) = 0x53a8fau; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x53a8f5u); RETCHK(0x53a8fau, 0x53a8f5u); LOADALL;
  /* 0053a8fa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a8fd push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053a8ff push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a901 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a902 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a905 mov byte ptr [ebp - 4], 0x1f */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1fu); }
  /* 0053a909 call 0x404140 */ esp -= 4; M32(esp) = 0x53a90eu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x53a909u); RETCHK(0x53a90eu, 0x53a909u); LOADALL;
  /* 0053a90e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053a910 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a913 call 0x43ee60 */ esp -= 4; M32(esp) = 0x53a918u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x53a913u); RETCHK(0x53a918u, 0x53a913u); LOADALL;
  /* 0053a918 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a91a push 0x6546fc */ { u32 v_ = 0x6546fcu; esp -= 4; M32(esp) = v_; }
  /* 0053a91f sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a922 lea ecx, [ebp - 0xa4] */ ecx = (u32)((u32)(ebp + 0xffffff5cu));
  /* 0053a928 mov eax, esp */ { eax = (u32)(esp); }
  /* 0053a92a mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 0053a92d call 0x52cea0 */ esp -= 4; M32(esp) = 0x53a932u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x53a92du); RETCHK(0x53a932u, 0x53a92du); LOADALL;
  /* 0053a932 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053a935 mov ebx, dword ptr [esi + 0x1b4] */ { const u32 m_ = (u32)(esi + 0x1b4u); ebx = (u32)(M32(m_)); }
  /* 0053a93b lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a93e call 0x50da30 */ esp -= 4; M32(esp) = 0x53a943u; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x53a93eu); RETCHK(0x53a943u, 0x53a93eu); LOADALL;
  /* 0053a943 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053a945 jne 0x53a94a */ if (!ZF_) goto L_0053a94a;
  /* 0053a947 mov byte ptr [ebp - 0x2d], al */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)((eax & 0xffu)); }
L_0053a94a:;
  /* 0053a94a push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 0053a94f call 0x5fe934 */ esp -= 4; M32(esp) = 0x53a954u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53a94fu); RETCHK(0x53a954u, 0x53a94fu); LOADALL;
  /* 0053a954 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a957 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0053a95a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053a95c mov byte ptr [ebp - 4], 0x20 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x20u); }
  /* 0053a960 je 0x53a96b */ if (ZF_) goto L_0053a96b;
  /* 0053a962 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053a963 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a964 call 0x50d810 */ esp -= 4; M32(esp) = 0x53a969u; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x53a964u); RETCHK(0x53a969u, 0x53a964u); LOADALL;
  /* 0053a969 jmp 0x53a96d */ goto L_0053a96d;
L_0053a96b:;
  /* 0053a96b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0053a96d:;
  /* 0053a96d mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053a96f mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a972 mov dword ptr [esi + 0x1b8], eax */ { const u32 m_ = (u32)(esi + 0x1b8u); M32(m_) = (u32)(eax); }
  /* 0053a978 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0053a97b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a97c mov edi, 0x65474c */ { edi = (u32)(0x65474cu); }
  /* 0053a981 lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 0053a984 call 0x4646d0 */ esp -= 4; M32(esp) = 0x53a989u; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x53a984u); RETCHK(0x53a989u, 0x53a984u); LOADALL;
  /* 0053a989 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a98c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053a98e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a990 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a991 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a994 mov byte ptr [ebp - 4], 0x21 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x21u); }
  /* 0053a998 call 0x404140 */ esp -= 4; M32(esp) = 0x53a99du; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x53a998u); RETCHK(0x53a99du, 0x53a998u); LOADALL;
  /* 0053a99d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053a99f mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053a9a2 call 0x43ee60 */ esp -= 4; M32(esp) = 0x53a9a7u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x53a9a2u); RETCHK(0x53a9a7u, 0x53a9a2u); LOADALL;
  /* 0053a9a7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053a9a9 push 0x6546e8 */ { u32 v_ = 0x6546e8u; esp -= 4; M32(esp) = v_; }
  /* 0053a9ae sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a9b1 lea ecx, [ebp - 0x84] */ ecx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 0053a9b7 mov eax, esp */ { eax = (u32)(esp); }
  /* 0053a9b9 mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 0053a9bc call 0x52cea0 */ esp -= 4; M32(esp) = 0x53a9c1u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x53a9bcu); RETCHK(0x53a9c1u, 0x53a9bcu); LOADALL;
  /* 0053a9c1 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053a9c4 mov ebx, dword ptr [esi + 0x1b8] */ { const u32 m_ = (u32)(esi + 0x1b8u); ebx = (u32)(M32(m_)); }
  /* 0053a9ca lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053a9cd call 0x50da30 */ esp -= 4; M32(esp) = 0x53a9d2u; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x53a9cdu); RETCHK(0x53a9d2u, 0x53a9cdu); LOADALL;
  /* 0053a9d2 jmp 0x53ac3b */ goto L_0053ac3b;
L_0053a9d7:;
  /* 0053a9d7 push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 0053a9dc call 0x5fe934 */ esp -= 4; M32(esp) = 0x53a9e1u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53a9dcu); RETCHK(0x53a9e1u, 0x53a9dcu); LOADALL;
  /* 0053a9e1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053a9e4 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0053a9e7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053a9e9 mov byte ptr [ebp - 4], 0x12 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x12u); }
  /* 0053a9ed je 0x53a9f8 */ if (ZF_) goto L_0053a9f8;
  /* 0053a9ef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053a9f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053a9f1 call 0x50d810 */ esp -= 4; M32(esp) = 0x53a9f6u; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x53a9f1u); RETCHK(0x53a9f6u, 0x53a9f1u); LOADALL;
  /* 0053a9f6 jmp 0x53a9fa */ goto L_0053a9fa;
L_0053a9f8:;
  /* 0053a9f8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0053a9fa:;
  /* 0053a9fa mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053a9fd mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053a9ff mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053aa02 mov dword ptr [esi + 0x1ac], eax */ { const u32 m_ = (u32)(esi + 0x1acu); M32(m_) = (u32)(eax); }
  /* 0053aa08 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053aa09 mov edi, 0x6547ac */ { edi = (u32)(0x6547acu); }
  /* 0053aa0e lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 0053aa11 call 0x4646d0 */ esp -= 4; M32(esp) = 0x53aa16u; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x53aa11u); RETCHK(0x53aa16u, 0x53aa11u); LOADALL;
  /* 0053aa16 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053aa19 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053aa1b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053aa1d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053aa1e lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053aa21 mov byte ptr [ebp - 4], 0x13 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x13u); }
  /* 0053aa25 call 0x404140 */ esp -= 4; M32(esp) = 0x53aa2au; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x53aa25u); RETCHK(0x53aa2au, 0x53aa25u); LOADALL;
  /* 0053aa2a mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053aa2d cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053aa31 jb 0x53aa3f */ if (CF_) goto L_0053aa3f;
  /* 0053aa33 mov edx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); edx = (u32)(M32(m_)); }
  /* 0053aa36 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053aa37 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53aa3cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53aa37u); RETCHK(0x53aa3cu, 0x53aa37u); LOADALL;
  /* 0053aa3c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053aa3f:;
  /* 0053aa3f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053aa41 push 0x654798 */ { u32 v_ = 0x654798u; esp -= 4; M32(esp) = v_; }
  /* 0053aa46 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053aa49 lea ecx, [ebp - 0x94] */ ecx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0053aa4f mov eax, esp */ { eax = (u32)(esp); }
  /* 0053aa51 mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 0053aa54 call 0x52cea0 */ esp -= 4; M32(esp) = 0x53aa59u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x53aa54u); RETCHK(0x53aa59u, 0x53aa54u); LOADALL;
  /* 0053aa59 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053aa5c mov ebx, dword ptr [esi + 0x1ac] */ { const u32 m_ = (u32)(esi + 0x1acu); ebx = (u32)(M32(m_)); }
  /* 0053aa62 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053aa65 call 0x50da30 */ esp -= 4; M32(esp) = 0x53aa6au; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x53aa65u); RETCHK(0x53aa6au, 0x53aa65u); LOADALL;
  /* 0053aa6a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053aa6c jne 0x53aa71 */ if (!ZF_) goto L_0053aa71;
  /* 0053aa6e mov byte ptr [ebp - 0x2d], al */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)((eax & 0xffu)); }
L_0053aa71:;
  /* 0053aa71 push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 0053aa76 call 0x5fe934 */ esp -= 4; M32(esp) = 0x53aa7bu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53aa76u); RETCHK(0x53aa7bu, 0x53aa76u); LOADALL;
  /* 0053aa7b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053aa7e mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0053aa81 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053aa83 mov byte ptr [ebp - 4], 0x14 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x14u); }
  /* 0053aa87 je 0x53aa92 */ if (ZF_) goto L_0053aa92;
  /* 0053aa89 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053aa8a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053aa8b call 0x50d810 */ esp -= 4; M32(esp) = 0x53aa90u; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x53aa8bu); RETCHK(0x53aa90u, 0x53aa8bu); LOADALL;
  /* 0053aa90 jmp 0x53aa94 */ goto L_0053aa94;
L_0053aa92:;
  /* 0053aa92 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0053aa94:;
  /* 0053aa94 mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053aa96 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053aa99 mov dword ptr [esi + 0x1b0], eax */ { const u32 m_ = (u32)(esi + 0x1b0u); M32(m_) = (u32)(eax); }
  /* 0053aa9f mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0053aaa2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053aaa3 mov edi, 0x65478c */ { edi = (u32)(0x65478cu); }
  /* 0053aaa8 lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 0053aaab call 0x4646d0 */ esp -= 4; M32(esp) = 0x53aab0u; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x53aaabu); RETCHK(0x53aab0u, 0x53aaabu); LOADALL;
  /* 0053aab0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053aab3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053aab5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053aab7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053aab8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053aabb mov byte ptr [ebp - 4], 0x15 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x15u); }
  /* 0053aabf call 0x404140 */ esp -= 4; M32(esp) = 0x53aac4u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x53aabfu); RETCHK(0x53aac4u, 0x53aabfu); LOADALL;
  /* 0053aac4 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053aac7 cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053aacb jb 0x53aad9 */ if (CF_) goto L_0053aad9;
  /* 0053aacd mov ecx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); ecx = (u32)(M32(m_)); }
  /* 0053aad0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053aad1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53aad6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53aad1u); RETCHK(0x53aad6u, 0x53aad1u); LOADALL;
  /* 0053aad6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053aad9:;
  /* 0053aad9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053aadb push 0x654778 */ { u32 v_ = 0x654778u; esp -= 4; M32(esp) = v_; }
  /* 0053aae0 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053aae3 lea ecx, [ebp - 0xb4] */ ecx = (u32)((u32)(ebp + 0xffffff4cu));
  /* 0053aae9 mov eax, esp */ { eax = (u32)(esp); }
  /* 0053aaeb mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 0053aaee call 0x52cea0 */ esp -= 4; M32(esp) = 0x53aaf3u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x53aaeeu); RETCHK(0x53aaf3u, 0x53aaeeu); LOADALL;
  /* 0053aaf3 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053aaf6 mov ebx, dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); ebx = (u32)(M32(m_)); }
  /* 0053aafc lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053aaff call 0x50da30 */ esp -= 4; M32(esp) = 0x53ab04u; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x53aaffu); RETCHK(0x53ab04u, 0x53aaffu); LOADALL;
  /* 0053ab04 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053ab06 jne 0x53ab0b */ if (!ZF_) goto L_0053ab0b;
  /* 0053ab08 mov byte ptr [ebp - 0x2d], al */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)((eax & 0xffu)); }
L_0053ab0b:;
  /* 0053ab0b push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 0053ab10 call 0x5fe934 */ esp -= 4; M32(esp) = 0x53ab15u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53ab10u); RETCHK(0x53ab15u, 0x53ab10u); LOADALL;
  /* 0053ab15 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053ab18 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0053ab1b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053ab1d mov byte ptr [ebp - 4], 0x16 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x16u); }
  /* 0053ab21 je 0x53ab2c */ if (ZF_) goto L_0053ab2c;
  /* 0053ab23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053ab24 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053ab25 call 0x50d810 */ esp -= 4; M32(esp) = 0x53ab2au; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x53ab25u); RETCHK(0x53ab2au, 0x53ab25u); LOADALL;
  /* 0053ab2a jmp 0x53ab2e */ goto L_0053ab2e;
L_0053ab2c:;
  /* 0053ab2c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0053ab2e:;
  /* 0053ab2e mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0053ab31 mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053ab33 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053ab36 mov dword ptr [esi + 0x1b4], eax */ { const u32 m_ = (u32)(esi + 0x1b4u); M32(m_) = (u32)(eax); }
  /* 0053ab3c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053ab3d mov edi, 0x65476c */ { edi = (u32)(0x65476cu); }
  /* 0053ab42 lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 0053ab45 call 0x4646d0 */ esp -= 4; M32(esp) = 0x53ab4au; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x53ab45u); RETCHK(0x53ab4au, 0x53ab45u); LOADALL;
  /* 0053ab4a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053ab4d push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053ab4f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053ab51 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053ab52 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053ab55 mov byte ptr [ebp - 4], 0x17 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x17u); }
  /* 0053ab59 call 0x404140 */ esp -= 4; M32(esp) = 0x53ab5eu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x53ab59u); RETCHK(0x53ab5eu, 0x53ab59u); LOADALL;
  /* 0053ab5e mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053ab61 cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053ab65 jb 0x53ab73 */ if (CF_) goto L_0053ab73;
  /* 0053ab67 mov eax, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); eax = (u32)(M32(m_)); }
  /* 0053ab6a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053ab6b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53ab70u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53ab6bu); RETCHK(0x53ab70u, 0x53ab6bu); LOADALL;
  /* 0053ab70 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053ab73:;
  /* 0053ab73 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053ab75 push 0x654758 */ { u32 v_ = 0x654758u; esp -= 4; M32(esp) = v_; }
  /* 0053ab7a sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053ab7d lea ecx, [ebp - 0xa4] */ ecx = (u32)((u32)(ebp + 0xffffff5cu));
  /* 0053ab83 mov eax, esp */ { eax = (u32)(esp); }
  /* 0053ab85 mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 0053ab88 call 0x52cea0 */ esp -= 4; M32(esp) = 0x53ab8du; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x53ab88u); RETCHK(0x53ab8du, 0x53ab88u); LOADALL;
  /* 0053ab8d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053ab90 mov ebx, dword ptr [esi + 0x1b4] */ { const u32 m_ = (u32)(esi + 0x1b4u); ebx = (u32)(M32(m_)); }
  /* 0053ab96 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053ab99 call 0x50da30 */ esp -= 4; M32(esp) = 0x53ab9eu; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x53ab99u); RETCHK(0x53ab9eu, 0x53ab99u); LOADALL;
  /* 0053ab9e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053aba0 jne 0x53aba5 */ if (!ZF_) goto L_0053aba5;
  /* 0053aba2 mov byte ptr [ebp - 0x2d], al */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)((eax & 0xffu)); }
L_0053aba5:;
  /* 0053aba5 push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 0053abaa call 0x5fe934 */ esp -= 4; M32(esp) = 0x53abafu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53abaau); RETCHK(0x53abafu, 0x53abaau); LOADALL;
  /* 0053abaf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053abb2 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0053abb5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053abb7 mov byte ptr [ebp - 4], 0x18 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x18u); }
  /* 0053abbb je 0x53abc6 */ if (ZF_) goto L_0053abc6;
  /* 0053abbd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053abbe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053abbf call 0x50d810 */ esp -= 4; M32(esp) = 0x53abc4u; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x53abbfu); RETCHK(0x53abc4u, 0x53abbfu); LOADALL;
  /* 0053abc4 jmp 0x53abc8 */ goto L_0053abc8;
L_0053abc6:;
  /* 0053abc6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0053abc8:;
  /* 0053abc8 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053abcb mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053abcd mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053abd0 mov dword ptr [esi + 0x1b8], eax */ { const u32 m_ = (u32)(esi + 0x1b8u); M32(m_) = (u32)(eax); }
  /* 0053abd6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053abd7 mov edi, 0x65474c */ { edi = (u32)(0x65474cu); }
  /* 0053abdc lea esi, [ebp - 0x70] */ esi = (u32)((u32)(ebp + 0xffffff90u));
  /* 0053abdf call 0x4646d0 */ esp -= 4; M32(esp) = 0x53abe4u; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x53abdfu); RETCHK(0x53abe4u, 0x53abdfu); LOADALL;
  /* 0053abe4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053abe7 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053abe9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053abeb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053abec lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053abef mov byte ptr [ebp - 4], 0x19 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x19u); }
  /* 0053abf3 call 0x404140 */ esp -= 4; M32(esp) = 0x53abf8u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x53abf3u); RETCHK(0x53abf8u, 0x53abf3u); LOADALL;
  /* 0053abf8 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053abfb cmp dword ptr [ebp - 0x58], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053abff jb 0x53ac0d */ if (CF_) goto L_0053ac0d;
  /* 0053ac01 mov edx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); edx = (u32)(M32(m_)); }
  /* 0053ac04 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053ac05 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53ac0au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53ac05u); RETCHK(0x53ac0au, 0x53ac05u); LOADALL;
  /* 0053ac0a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053ac0d:;
  /* 0053ac0d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053ac0f push 0x654738 */ { u32 v_ = 0x654738u; esp -= 4; M32(esp) = v_; }
  /* 0053ac14 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053ac17 lea ecx, [ebp - 0x84] */ ecx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 0053ac1d mov eax, esp */ { eax = (u32)(esp); }
  /* 0053ac1f mov dword ptr [ebp - 0x34], esp */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esp); }
  /* 0053ac22 call 0x52cea0 */ esp -= 4; M32(esp) = 0x53ac27u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x53ac22u); RETCHK(0x53ac27u, 0x53ac22u); LOADALL;
  /* 0053ac27 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0053ac2a mov ebx, dword ptr [ecx + 0x1b8] */ { const u32 m_ = (u32)(ecx + 0x1b8u); ebx = (u32)(M32(m_)); }
  /* 0053ac30 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053ac33 call 0x50da30 */ esp -= 4; M32(esp) = 0x53ac38u; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x53ac33u); RETCHK(0x53ac38u, 0x53ac33u); LOADALL;
  /* 0053ac38 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_0053ac3b:;
  /* 0053ac3b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053ac3d jne 0x53ac42 */ if (!ZF_) goto L_0053ac42;
  /* 0053ac3f mov byte ptr [ebp - 0x2d], al */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)((eax & 0xffu)); }
L_0053ac42:;
  /* 0053ac42 mov ecx, dword ptr [esi + 0x1ac] */ { const u32 m_ = (u32)(esi + 0x1acu); ecx = (u32)(M32(m_)); }
  /* 0053ac48 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053ac4a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053ac4c call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53ac4fu; SAVEALL; call_ind(c, t_); RETCHK(0x53ac4fu, 0x53ac4cu); LOADALL; }
  /* 0053ac4f mov ecx, dword ptr [esi + 0x1b0] */ { const u32 m_ = (u32)(esi + 0x1b0u); ecx = (u32)(M32(m_)); }
  /* 0053ac55 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053ac57 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053ac59 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53ac5cu; SAVEALL; call_ind(c, t_); RETCHK(0x53ac5cu, 0x53ac59u); LOADALL; }
  /* 0053ac5c mov ecx, dword ptr [esi + 0x1b4] */ { const u32 m_ = (u32)(esi + 0x1b4u); ecx = (u32)(M32(m_)); }
  /* 0053ac62 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053ac64 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053ac66 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53ac69u; SAVEALL; call_ind(c, t_); RETCHK(0x53ac69u, 0x53ac66u); LOADALL; }
  /* 0053ac69 mov ecx, dword ptr [esi + 0x1b8] */ { const u32 m_ = (u32)(esi + 0x1b8u); ecx = (u32)(M32(m_)); }
  /* 0053ac6f mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053ac71 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053ac73 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53ac76u; SAVEALL; call_ind(c, t_); RETCHK(0x53ac76u, 0x53ac73u); LOADALL; }
  /* 0053ac76 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053ac7a jb 0x53ac88 */ if (CF_) goto L_0053ac88;
  /* 0053ac7c mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 0053ac7f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053ac80 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53ac85u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53ac80u); RETCHK(0x53ac85u, 0x53ac80u); LOADALL;
  /* 0053ac85 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053ac88:;
  /* 0053ac88 mov al, byte ptr [ebp - 0x2d] */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
L_0053ac8b:;
  /* 0053ac8b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053ac8e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0053ac95 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0053ac98 call 0x61af31 */ esp -= 4; M32(esp) = 0x53ac9du; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x53ac98u); RETCHK(0x53ac9du, 0x53ac98u); LOADALL;
  /* 0053ac9d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053ac9e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053ac9f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053aca0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053aca2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053aca3 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0053acb0(CPU *c) {
  NATIVE_HOOK(0x53acb0u) REGS; LOADALL;
L_0053acb0:;
  /* 0053acb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0053acb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0053acb3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053acb4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053acb5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053acb6 mov edi, eax */ { edi = (u32)(eax); }
  /* 0053acb8 mov esi, edi */ { esi = (u32)(edi); }
  /* 0053acba call 0x5398d0 */ esp -= 4; M32(esp) = 0x53acbfu; SAVEALL; F_005398d0(c); ABI_CHECK(0x5398d0u, 0x53acbau); RETCHK(0x53acbfu, 0x53acbau); LOADALL;
  /* 0053acbf mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053acc2 cmp dword ptr [esi + 0x19c], eax */ { const u32 m_ = (u32)(esi + 0x19cu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053acc8 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0053accb je 0x53ad06 */ if (ZF_) goto L_0053ad06;
  /* 0053accd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053acce call 0x5398c0 */ esp -= 4; M32(esp) = 0x53acd3u; SAVEALL; F_005398c0(c); ABI_CHECK(0x5398c0u, 0x53acceu); RETCHK(0x53acd3u, 0x53acceu); LOADALL;
  /* 0053acd3 mov edi, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); edi = (u32)(M32(m_)); }
  /* 0053acd9 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0053acdb call 0x50dbb0 */ esp -= 4; M32(esp) = 0x53ace0u; SAVEALL; F_0050dbb0(c); ABI_CHECK(0x50dbb0u, 0x53acdbu); RETCHK(0x53ace0u, 0x53acdbu); LOADALL;
  /* 0053ace0 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0053ace3 mov ecx, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); ecx = (u32)(M32(m_)); }
  /* 0053ace9 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0053acee push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0053acf3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053acf5 mov dword ptr [esi + 0x19c], eax */ { const u32 m_ = (u32)(esi + 0x19cu); M32(m_) = (u32)(eax); }
  /* 0053acfb mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053acfd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053acff call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53ad05u; SAVEALL; call_ind(c, t_); RETCHK(0x53ad05u, 0x53acffu); LOADALL; }
  /* 0053ad05 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0053ad06:;
  /* 0053ad06 mov ecx, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); ecx = (u32)(M32(m_)); }
  /* 0053ad0c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053ad0e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053ad10 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53ad13u; SAVEALL; call_ind(c, t_); RETCHK(0x53ad13u, 0x53ad10u); LOADALL; }
  /* 0053ad13 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053ad14 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053ad15 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053ad17 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053ad18 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0053ad20(CPU *c) {
  NATIVE_HOOK(0x53ad20u) REGS; LOADALL;
L_0053ad20:;
  /* 0053ad20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0053ad21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0053ad23 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053ad26 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053ad27 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0053ad2a mov eax, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); eax = (u32)(M32(m_)); }
  /* 0053ad30 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053ad32 je 0x53ae31 */ if (ZF_) goto L_0053ae31;
  /* 0053ad38 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053ad39 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053ad3a mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0053ad3d call 0x5398d0 */ esp -= 4; M32(esp) = 0x53ad42u; SAVEALL; F_005398d0(c); ABI_CHECK(0x5398d0u, 0x53ad3du); RETCHK(0x53ad42u, 0x53ad3du); LOADALL;
  /* 0053ad42 mov ecx, dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); ecx = (u32)(M32(m_)); }
  /* 0053ad48 mov esi, eax */ { esi = (u32)(eax); }
  /* 0053ad4a mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053ad4c lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053ad4f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053ad50 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0053ad53 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53ad56u; SAVEALL; call_ind(c, t_); RETCHK(0x53ad56u, 0x53ad53u); LOADALL; }
  /* 0053ad56 mov eax, dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); eax = (u32)(M32(m_)); }
  /* 0053ad5c mov ecx, dword ptr [eax + 0x28c] */ { const u32 m_ = (u32)(eax + 0x28cu); ecx = (u32)(M32(m_)); }
  /* 0053ad62 mov edx, dword ptr [eax + 0x290] */ { const u32 m_ = (u32)(eax + 0x290u); edx = (u32)(M32(m_)); }
  /* 0053ad68 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 0053ad6b fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 0053ad6e mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 0053ad71 fadd dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053ad74 fadd dword ptr [0x656db4] */ { const u32 m_ = (u32)(0x656db4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053ad7a fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053ad7d mov ecx, dword ptr [eax + 0x28c] */ { const u32 m_ = (u32)(eax + 0x28cu); ecx = (u32)(M32(m_)); }
  /* 0053ad83 mov edx, dword ptr [eax + 0x290] */ { const u32 m_ = (u32)(eax + 0x290u); edx = (u32)(M32(m_)); }
  /* 0053ad89 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 0053ad8c fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 0053ad8f mov ecx, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); ecx = (u32)(M32(m_)); }
  /* 0053ad95 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 0053ad98 fadd dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053ad9b lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0053ad9e mov dword ptr [ebp - 0x18], 0x40000000 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x40000000u); }
  /* 0053ada5 mov dword ptr [ebp - 0x10], 0x41d80000 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x41d80000u); }
  /* 0053adac fadd dword ptr [0x6570dc] */ { const u32 m_ = (u32)(0x6570dcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053adb2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053adb3 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053adb6 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053adb8 call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53adbbu; SAVEALL; call_ind(c, t_); RETCHK(0x53adbbu, 0x53adb8u); LOADALL; }
  /* 0053adbb mov eax, dword ptr [edi + 0x1a4] */ { const u32 m_ = (u32)(edi + 0x1a4u); eax = (u32)(M32(m_)); }
  /* 0053adc1 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0053adc3 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053adc5 je 0x53ae06 */ if (ZF_) goto L_0053ae06;
  /* 0053adc7 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0053adca call 0x5398c0 */ esp -= 4; M32(esp) = 0x53adcfu; SAVEALL; F_005398c0(c); ABI_CHECK(0x5398c0u, 0x53adcau); RETCHK(0x53adcfu, 0x53adcau); LOADALL;
  /* 0053adcf mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053add2 mov edi, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); edi = (u32)(M32(m_)); }
  /* 0053add8 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0053adda call 0x50dbb0 */ esp -= 4; M32(esp) = 0x53addfu; SAVEALL; F_0050dbb0(c); ABI_CHECK(0x50dbb0u, 0x53addau); RETCHK(0x53addfu, 0x53addau); LOADALL;
  /* 0053addf mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0053ade2 mov ecx, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); ecx = (u32)(M32(m_)); }
  /* 0053ade8 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0053aded push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0053adf2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053adf4 mov dword ptr [esi + 0x1a4], eax */ { const u32 m_ = (u32)(esi + 0x1a4u); M32(m_) = (u32)(eax); }
  /* 0053adfa mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053adfc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053adfe call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53ae04u; SAVEALL; call_ind(c, t_); RETCHK(0x53ae04u, 0x53adfeu); LOADALL; }
  /* 0053ae04 mov edi, esi */ { edi = (u32)(esi); }
L_0053ae06:;
  /* 0053ae06 mov ecx, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); ecx = (u32)(M32(m_)); }
  /* 0053ae0c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053ae0e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053ae10 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53ae13u; SAVEALL; call_ind(c, t_); RETCHK(0x53ae13u, 0x53ae10u); LOADALL; }
  /* 0053ae13 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053ae15 jne 0x53ae21 */ if (!ZF_) goto L_0053ae21;
  /* 0053ae17 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0053ae1a call 0x5398c0 */ esp -= 4; M32(esp) = 0x53ae1fu; SAVEALL; F_005398c0(c); ABI_CHECK(0x5398c0u, 0x53ae1au); RETCHK(0x53ae1fu, 0x53ae1au); LOADALL;
  /* 0053ae1f mov ebx, eax */ { ebx = (u32)(eax); }
L_0053ae21:;
  /* 0053ae21 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0053ae24 mov edi, dword ptr [ecx + 0x194] */ { const u32 m_ = (u32)(ecx + 0x194u); edi = (u32)(M32(m_)); }
  /* 0053ae2a call 0x50dbb0 */ esp -= 4; M32(esp) = 0x53ae2fu; SAVEALL; F_0050dbb0(c); ABI_CHECK(0x50dbb0u, 0x53ae2au); RETCHK(0x53ae2fu, 0x53ae2au); LOADALL;
  /* 0053ae2f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053ae30 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0053ae31:;
  /* 0053ae31 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053ae32 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053ae34 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053ae35 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0053ae40(CPU *c) {
  NATIVE_HOOK(0x53ae40u) REGS; LOADALL;
L_0053ae40:;
  /* 0053ae40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0053ae41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0053ae43 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053ae46 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053ae47 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0053ae4a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053ae4b mov esi, eax */ { esi = (u32)(eax); }
  /* 0053ae4d mov eax, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); eax = (u32)(M32(m_)); }
  /* 0053ae53 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053ae55 je 0x53af2c */ if (ZF_) goto L_0053af2c;
  /* 0053ae5b mov ecx, dword ptr [ebx + 0x190] */ { const u32 m_ = (u32)(ebx + 0x190u); ecx = (u32)(M32(m_)); }
  /* 0053ae61 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053ae63 lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0053ae66 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053ae67 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53ae6au; SAVEALL; call_ind(c, t_); RETCHK(0x53ae6au, 0x53ae67u); LOADALL; }
  /* 0053ae6a mov eax, dword ptr [ebx + 0x190] */ { const u32 m_ = (u32)(ebx + 0x190u); eax = (u32)(M32(m_)); }
  /* 0053ae70 mov ecx, dword ptr [eax + 0x28c] */ { const u32 m_ = (u32)(eax + 0x28cu); ecx = (u32)(M32(m_)); }
  /* 0053ae76 mov edx, dword ptr [eax + 0x290] */ { const u32 m_ = (u32)(eax + 0x290u); edx = (u32)(M32(m_)); }
  /* 0053ae7c mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 0053ae7f fild dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)(s32)M32(m_)); }
  /* 0053ae82 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0053ae85 fadd dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053ae88 fadd dword ptr [0x657108] */ { const u32 m_ = (u32)(0x657108u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053ae8e fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053ae91 mov ecx, dword ptr [eax + 0x28c] */ { const u32 m_ = (u32)(eax + 0x28cu); ecx = (u32)(M32(m_)); }
  /* 0053ae97 mov edx, dword ptr [eax + 0x290] */ { const u32 m_ = (u32)(eax + 0x290u); edx = (u32)(M32(m_)); }
  /* 0053ae9d mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 0053aea0 fild dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)(s32)M32(m_)); }
  /* 0053aea3 mov ecx, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); ecx = (u32)(M32(m_)); }
  /* 0053aea9 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0053aeac fadd dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053aeaf lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0053aeb2 mov dword ptr [ebp - 0x14], 0x40000000 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x40000000u); }
  /* 0053aeb9 mov dword ptr [ebp - 0xc], 0x41d80000 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x41d80000u); }
  /* 0053aec0 fadd dword ptr [0x657104] */ { const u32 m_ = (u32)(0x657104u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053aec6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053aec7 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053aeca mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053aecc call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53aecfu; SAVEALL; call_ind(c, t_); RETCHK(0x53aecfu, 0x53aeccu); LOADALL; }
  /* 0053aecf call 0x5398d0 */ esp -= 4; M32(esp) = 0x53aed4u; SAVEALL; F_005398d0(c); ABI_CHECK(0x5398d0u, 0x53aecfu); RETCHK(0x53aed4u, 0x53aecfu); LOADALL;
  /* 0053aed4 cmp dword ptr [ebx + 0x1a8], eax */ { const u32 m_ = (u32)(ebx + 0x1a8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053aeda mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0053aedd je 0x53af1f */ if (ZF_) goto L_0053af1f;
  /* 0053aedf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053aee0 mov edi, esi */ { edi = (u32)(esi); }
  /* 0053aee2 call 0x5398c0 */ esp -= 4; M32(esp) = 0x53aee7u; SAVEALL; F_005398c0(c); ABI_CHECK(0x5398c0u, 0x53aee2u); RETCHK(0x53aee7u, 0x53aee2u); LOADALL;
  /* 0053aee7 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053aeea mov edi, dword ptr [esi + 0x198] */ { const u32 m_ = (u32)(esi + 0x198u); edi = (u32)(M32(m_)); }
  /* 0053aef0 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0053aef2 call 0x50dbb0 */ esp -= 4; M32(esp) = 0x53aef7u; SAVEALL; F_0050dbb0(c); ABI_CHECK(0x50dbb0u, 0x53aef2u); RETCHK(0x53aef7u, 0x53aef2u); LOADALL;
  /* 0053aef7 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0053aefa mov ecx, dword ptr [esi + 0x198] */ { const u32 m_ = (u32)(esi + 0x198u); ecx = (u32)(M32(m_)); }
  /* 0053af00 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0053af05 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0053af0a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053af0c mov dword ptr [esi + 0x1a8], eax */ { const u32 m_ = (u32)(esi + 0x1a8u); M32(m_) = (u32)(eax); }
  /* 0053af12 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053af14 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053af16 call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53af1cu; SAVEALL; call_ind(c, t_); RETCHK(0x53af1cu, 0x53af16u); LOADALL; }
  /* 0053af1c mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0053af1e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0053af1f:;
  /* 0053af1f mov ecx, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); ecx = (u32)(M32(m_)); }
  /* 0053af25 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053af27 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053af29 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53af2cu; SAVEALL; call_ind(c, t_); RETCHK(0x53af2cu, 0x53af29u); LOADALL; }
L_0053af2c:;
  /* 0053af2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053af2d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053af2e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053af30 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053af31 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0053af40(CPU *c) {
  NATIVE_HOOK(0x53af40u) REGS; LOADALL;
L_0053af40:;
  /* 0053af40 mov eax, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 0053af46 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053af48 jne 0x53b17c */ if (!ZF_) goto L_0053b17c;
  /* 0053af4e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053af4f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053af51 call 0x4019a0 */ esp -= 4; M32(esp) = 0x53af56u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x53af51u); RETCHK(0x53af56u, 0x53af51u); LOADALL;
  /* 0053af56 mov esi, eax */ { esi = (u32)(eax); }
  /* 0053af58 mov eax, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 0053af5e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053af61 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053af63 je 0x53af95 */ if (ZF_) goto L_0053af95;
  /* 0053af65 mov ecx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); ecx = (u32)(M32(m_)); }
  /* 0053af6b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053af6d je 0x53af78 */ if (ZF_) goto L_0053af78;
  /* 0053af6f mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0053af71 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0053af73 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53af76u; SAVEALL; call_ind(c, t_); RETCHK(0x53af76u, 0x53af73u); LOADALL; }
  /* 0053af76 jmp 0x53af7b */ goto L_0053af7b;
L_0053af78:;
  /* 0053af78 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0053af7b:;
  /* 0053af7b mov esi, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); esi = (u32)(M32(m_)); }
  /* 0053af81 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053af83 jne 0x53af8b */ if (!ZF_) goto L_0053af8b;
  /* 0053af85 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053af87 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053af89 jmp 0x53af97 */ goto L_0053af97;
L_0053af8b:;
  /* 0053af8b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053af8c call 0x55ead0 */ esp -= 4; M32(esp) = 0x53af91u; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x53af8cu); RETCHK(0x53af91u, 0x53af8cu); LOADALL;
  /* 0053af91 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053af93 jmp 0x53af97 */ goto L_0053af97;
L_0053af95:;
  /* 0053af95 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_0053af97:;
  /* 0053af97 mov eax, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 0053af9d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053af9f je 0x53afda */ if (ZF_) goto L_0053afda;
  /* 0053afa1 mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 0053afa4 cmp eax, dword ptr [ecx + 0xb5c] */ { const u32 m_ = (u32)(ecx + 0xb5cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053afaa je 0x53afdc */ if (ZF_) goto L_0053afdc;
  /* 0053afac push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053afae call 0x4019a0 */ esp -= 4; M32(esp) = 0x53afb3u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x53afaeu); RETCHK(0x53afb3u, 0x53afaeu); LOADALL;
  /* 0053afb3 mov cl, byte ptr [eax + 0xb30] */ { const u32 m_ = (u32)(eax + 0xb30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053afb9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053afbc test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053afbe js 0x53afdc */ if (SF_) goto L_0053afdc;
  /* 0053afc0 mov ecx, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); ecx = (u32)(M32(m_)); }
  /* 0053afc6 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053afc8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053afca call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53afcdu; SAVEALL; call_ind(c, t_); RETCHK(0x53afcdu, 0x53afcau); LOADALL; }
  /* 0053afcd mov ecx, dword ptr [edi + 0x198] */ { const u32 m_ = (u32)(edi + 0x198u); ecx = (u32)(M32(m_)); }
  /* 0053afd3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053afd5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053afd7 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53afdau; SAVEALL; call_ind(c, t_); RETCHK(0x53afdau, 0x53afd7u); LOADALL; }
L_0053afda:;
  /* 0053afda pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053afdb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0053afdc:;
  /* 0053afdc xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0053afde mov edi, edi */ { edi = (u32)(edi); }
L_0053afe0:;
  /* 0053afe0 mov ecx, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 0053afe6 mov eax, dword ptr [ecx + esi*4 + 0x1040] */ { const u32 m_ = (u32)(ecx + esi * 4u + 0x1040u); eax = (u32)(M32(m_)); }
  /* 0053afed cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053aff0 jne 0x53b022 */ if (!ZF_) goto L_0053b022;
  /* 0053aff2 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053aff4 jne 0x53b007 */ if (!ZF_) goto L_0053b007;
  /* 0053aff6 mov ecx, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); ecx = (u32)(M32(m_)); }
  /* 0053affc mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053affe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053afff call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b002u; SAVEALL; call_ind(c, t_); RETCHK(0x53b002u, 0x53afffu); LOADALL; }
  /* 0053b002 jmp 0x53b170 */ goto L_0053b170;
L_0053b007:;
  /* 0053b007 cmp esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b00a jne 0x53b170 */ if (!ZF_) goto L_0053b170;
  /* 0053b010 mov ecx, dword ptr [edi + 0x198] */ { const u32 m_ = (u32)(edi + 0x198u); ecx = (u32)(M32(m_)); }
  /* 0053b016 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053b018 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b01a call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b01du; SAVEALL; call_ind(c, t_); RETCHK(0x53b01du, 0x53b01au); LOADALL; }
  /* 0053b01d jmp 0x53b170 */ goto L_0053b170;
L_0053b022:;
  /* 0053b022 cmp eax, 0x127a3980 */ { u32 a_ = eax, b_ = 0x127a3980u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b027 jg 0x53b0e6 */ if (!(ZF_|LT_)) goto L_0053b0e6;
  /* 0053b02d je 0x53b0df */ if (ZF_) goto L_0053b0df;
  /* 0053b033 cmp eax, 0x122dee40 */ { u32 a_ = eax, b_ = 0x122dee40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b038 jg 0x53b094 */ if (!(ZF_|LT_)) goto L_0053b094;
  /* 0053b03a je 0x53b08a */ if (ZF_) goto L_0053b08a;
  /* 0053b03c cmp eax, 0x120f69c0 */ { u32 a_ = eax, b_ = 0x120f69c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b041 jg 0x53b075 */ if (!(ZF_|LT_)) goto L_0053b075;
  /* 0053b043 je 0x53b06b */ if (ZF_) goto L_0053b06b;
  /* 0053b045 cmp eax, 0x11f0e540 */ { u32 a_ = eax, b_ = 0x11f0e540u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b04a je 0x53b061 */ if (ZF_) goto L_0053b061;
  /* 0053b04c cmp eax, 0x12002780 */ { u32 a_ = eax, b_ = 0x12002780u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b051 jne 0x53b170 */ if (!ZF_) goto L_0053b170;
  /* 0053b057 mov eax, 0x6546d0 */ { eax = (u32)(0x6546d0u); }
  /* 0053b05c jmp 0x53b158 */ goto L_0053b158;
L_0053b061:;
  /* 0053b061 mov eax, 0x65460c */ { eax = (u32)(0x65460cu); }
  /* 0053b066 jmp 0x53b158 */ goto L_0053b158;
L_0053b06b:;
  /* 0053b06b mov eax, 0x6545f4 */ { eax = (u32)(0x6545f4u); }
  /* 0053b070 jmp 0x53b158 */ goto L_0053b158;
L_0053b075:;
  /* 0053b075 cmp eax, 0x121eac00 */ { u32 a_ = eax, b_ = 0x121eac00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b07a jne 0x53b170 */ if (!ZF_) goto L_0053b170;
  /* 0053b080 mov eax, 0x6546b8 */ { eax = (u32)(0x6546b8u); }
  /* 0053b085 jmp 0x53b158 */ goto L_0053b158;
L_0053b08a:;
  /* 0053b08a mov eax, 0x6546a0 */ { eax = (u32)(0x6546a0u); }
  /* 0053b08f jmp 0x53b158 */ goto L_0053b158;
L_0053b094:;
  /* 0053b094 cmp eax, 0x125bb500 */ { u32 a_ = eax, b_ = 0x125bb500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b099 jg 0x53b0cd */ if (!(ZF_|LT_)) goto L_0053b0cd;
  /* 0053b09b je 0x53b0c3 */ if (ZF_) goto L_0053b0c3;
  /* 0053b09d cmp eax, 0x123d3080 */ { u32 a_ = eax, b_ = 0x123d3080u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b0a2 je 0x53b0b9 */ if (ZF_) goto L_0053b0b9;
  /* 0053b0a4 cmp eax, 0x124c72c0 */ { u32 a_ = eax, b_ = 0x124c72c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b0a9 jne 0x53b170 */ if (!ZF_) goto L_0053b170;
  /* 0053b0af mov eax, 0x654670 */ { eax = (u32)(0x654670u); }
  /* 0053b0b4 jmp 0x53b158 */ goto L_0053b158;
L_0053b0b9:;
  /* 0053b0b9 mov eax, 0x65468c */ { eax = (u32)(0x65468cu); }
  /* 0053b0be jmp 0x53b158 */ goto L_0053b158;
L_0053b0c3:;
  /* 0053b0c3 mov eax, 0x6545dc */ { eax = (u32)(0x6545dcu); }
  /* 0053b0c8 jmp 0x53b158 */ goto L_0053b158;
L_0053b0cd:;
  /* 0053b0cd cmp eax, 0x126af740 */ { u32 a_ = eax, b_ = 0x126af740u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b0d2 jne 0x53b170 */ if (!ZF_) goto L_0053b170;
  /* 0053b0d8 mov eax, 0x654658 */ { eax = (u32)(0x654658u); }
  /* 0053b0dd jmp 0x53b158 */ goto L_0053b158;
L_0053b0df:;
  /* 0053b0df mov eax, 0x6545c4 */ { eax = (u32)(0x6545c4u); }
  /* 0053b0e4 jmp 0x53b158 */ goto L_0053b158;
L_0053b0e6:;
  /* 0053b0e6 cmp eax, 0x12c684c0 */ { u32 a_ = eax, b_ = 0x12c684c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b0eb jg 0x53b130 */ if (!(ZF_|LT_)) goto L_0053b130;
  /* 0053b0ed je 0x53b129 */ if (ZF_) goto L_0053b129;
  /* 0053b0ef cmp eax, 0x12a80040 */ { u32 a_ = eax, b_ = 0x12a80040u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b0f4 jg 0x53b11b */ if (!(ZF_|LT_)) goto L_0053b11b;
  /* 0053b0f6 je 0x53b114 */ if (ZF_) goto L_0053b114;
  /* 0053b0f8 cmp eax, 0x12897bc0 */ { u32 a_ = eax, b_ = 0x12897bc0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b0fd je 0x53b10d */ if (ZF_) goto L_0053b10d;
  /* 0053b0ff cmp eax, 0x1298be00 */ { u32 a_ = eax, b_ = 0x1298be00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b104 jne 0x53b170 */ if (!ZF_) goto L_0053b170;
  /* 0053b106 mov eax, 0x6545ac */ { eax = (u32)(0x6545acu); }
  /* 0053b10b jmp 0x53b158 */ goto L_0053b158;
L_0053b10d:;
  /* 0053b10d mov eax, 0x65463c */ { eax = (u32)(0x65463cu); }
  /* 0053b112 jmp 0x53b158 */ goto L_0053b158;
L_0053b114:;
  /* 0053b114 mov eax, 0x654624 */ { eax = (u32)(0x654624u); }
  /* 0053b119 jmp 0x53b158 */ goto L_0053b158;
L_0053b11b:;
  /* 0053b11b cmp eax, 0x12b74280 */ { u32 a_ = eax, b_ = 0x12b74280u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b120 jne 0x53b170 */ if (!ZF_) goto L_0053b170;
  /* 0053b122 mov eax, 0x65458c */ { eax = (u32)(0x65458cu); }
  /* 0053b127 jmp 0x53b158 */ goto L_0053b158;
L_0053b129:;
  /* 0053b129 mov eax, 0x654574 */ { eax = (u32)(0x654574u); }
  /* 0053b12e jmp 0x53b158 */ goto L_0053b158;
L_0053b130:;
  /* 0053b130 cmp eax, 0x13038dc0 */ { u32 a_ = eax, b_ = 0x13038dc0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b135 je 0x53b153 */ if (ZF_) goto L_0053b153;
  /* 0053b137 cmp eax, 0x1312d000 */ { u32 a_ = eax, b_ = 0x1312d000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b13c je 0x53b14c */ if (ZF_) goto L_0053b14c;
  /* 0053b13e cmp eax, 0x13221240 */ { u32 a_ = eax, b_ = 0x13221240u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b143 jne 0x53b170 */ if (!ZF_) goto L_0053b170;
  /* 0053b145 mov eax, 0x65453c */ { eax = (u32)(0x65453cu); }
  /* 0053b14a jmp 0x53b158 */ goto L_0053b158;
L_0053b14c:;
  /* 0053b14c mov eax, 0x65455c */ { eax = (u32)(0x65455cu); }
  /* 0053b151 jmp 0x53b158 */ goto L_0053b158;
L_0053b153:;
  /* 0053b153 mov eax, 0x654520 */ { eax = (u32)(0x654520u); }
L_0053b158:;
  /* 0053b158 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b15a jne 0x53b165 */ if (!ZF_) goto L_0053b165;
  /* 0053b15c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b15d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053b15e call 0x53ad20 */ esp -= 4; M32(esp) = 0x53b163u; SAVEALL; F_0053ad20(c); ABI_CHECK(0x53ad20u, 0x53b15eu); RETCHK(0x53b163u, 0x53b15eu); LOADALL;
  /* 0053b163 jmp 0x53b170 */ goto L_0053b170;
L_0053b165:;
  /* 0053b165 cmp esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b168 jne 0x53b170 */ if (!ZF_) goto L_0053b170;
  /* 0053b16a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053b16b call 0x53ae40 */ esp -= 4; M32(esp) = 0x53b170u; SAVEALL; F_0053ae40(c); ABI_CHECK(0x53ae40u, 0x53b16bu); RETCHK(0x53b170u, 0x53b16bu); LOADALL;
L_0053b170:;
  /* 0053b170 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0053b171 cmp esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b174 jl 0x53afe0 */ if (LT_) goto L_0053afe0;
  /* 0053b17a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053b17b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0053b17c:;
  /* 0053b17c mov ecx, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); ecx = (u32)(M32(m_)); }
  /* 0053b182 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053b184 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b186 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b189u; SAVEALL; call_ind(c, t_); RETCHK(0x53b189u, 0x53b186u); LOADALL; }
  /* 0053b189 mov ecx, dword ptr [edi + 0x198] */ { const u32 m_ = (u32)(edi + 0x198u); ecx = (u32)(M32(m_)); }
  /* 0053b18f mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053b191 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b193 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b196u; SAVEALL; call_ind(c, t_); RETCHK(0x53b196u, 0x53b193u); LOADALL; }
  /* 0053b196 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0053b1a0(CPU *c) {
  NATIVE_HOOK(0x53b1a0u) REGS; LOADALL;
L_0053b1a0:;
  /* 0053b1a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0053b1a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0053b1a3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053b1a4 mov edi, 0x1eff5550 */ { edi = (u32)(0x1eff5550u); }
  /* 0053b1a9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053b1ab call 0x463dd0 */ esp -= 4; M32(esp) = 0x53b1b0u; SAVEALL; F_00463dd0(c); ABI_CHECK(0x463dd0u, 0x53b1abu); RETCHK(0x53b1b0u, 0x53b1abu); LOADALL;
  /* 0053b1b0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053b1b2 jne 0x53b1c4 */ if (!ZF_) goto L_0053b1c4;
  /* 0053b1b4 mov edi, 0x1eff7c60 */ { edi = (u32)(0x1eff7c60u); }
  /* 0053b1b9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053b1bb call 0x463dd0 */ esp -= 4; M32(esp) = 0x53b1c0u; SAVEALL; F_00463dd0(c); ABI_CHECK(0x463dd0u, 0x53b1bbu); RETCHK(0x53b1c0u, 0x53b1bbu); LOADALL;
  /* 0053b1c0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053b1c2 je 0x53b1d9 */ if (ZF_) goto L_0053b1d9;
L_0053b1c4:;
  /* 0053b1c4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0053b1c7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053b1c8 mov ebx, dword ptr [eax + 0x18c] */ { const u32 m_ = (u32)(eax + 0x18cu); ebx = (u32)(M32(m_)); }
  /* 0053b1ce push 0x64e4f4 */ { u32 v_ = 0x64e4f4u; esp -= 4; M32(esp) = v_; }
  /* 0053b1d3 call 0x50dc70 */ esp -= 4; M32(esp) = 0x53b1d8u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x53b1d3u); RETCHK(0x53b1d8u, 0x53b1d3u); LOADALL;
  /* 0053b1d8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0053b1d9:;
  /* 0053b1d9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053b1da pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053b1db ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0053b1e0(CPU *c) {
  NATIVE_HOOK(0x53b1e0u) REGS; LOADALL;
L_0053b1e0:;
  /* 0053b1e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0053b1e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0053b1e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053b1e5 push 0x625f68 */ { u32 v_ = 0x625f68u; esp -= 4; M32(esp) = v_; }
  /* 0053b1ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0053b1f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b1f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0053b1f8 sub esp, 0x148 */ { u32 a_ = esp, b_ = 0x148u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053b1fe mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0053b203 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053b204 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0053b207 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0053b20a mov eax, dword ptr [ebx + 0x1e4] */ { const u32 m_ = (u32)(ebx + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 0053b210 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b212 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053b213 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053b214 je 0x53b288 */ if (ZF_) goto L_0053b288;
  /* 0053b216 mov eax, dword ptr [ebx + 0x1ec] */ { const u32 m_ = (u32)(ebx + 0x1ecu); eax = (u32)(M32(m_)); }
  /* 0053b21c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b21e jne 0x53b277 */ if (!ZF_) goto L_0053b277;
L_0053b220:;
  /* 0053b220 mov eax, dword ptr [ebx + 0x1ac] */ { const u32 m_ = (u32)(ebx + 0x1acu); eax = (u32)(M32(m_)); }
  /* 0053b226 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b228 je 0x53b233 */ if (ZF_) goto L_0053b233;
  /* 0053b22a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b22c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053b22e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b230 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b233u; SAVEALL; call_ind(c, t_); RETCHK(0x53b233u, 0x53b230u); LOADALL; }
L_0053b233:;
  /* 0053b233 mov eax, dword ptr [ebx + 0x1b0] */ { const u32 m_ = (u32)(ebx + 0x1b0u); eax = (u32)(M32(m_)); }
  /* 0053b239 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b23b je 0x53b246 */ if (ZF_) goto L_0053b246;
  /* 0053b23d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b23f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053b241 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b243 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b246u; SAVEALL; call_ind(c, t_); RETCHK(0x53b246u, 0x53b243u); LOADALL; }
L_0053b246:;
  /* 0053b246 mov eax, dword ptr [ebx + 0x1b4] */ { const u32 m_ = (u32)(ebx + 0x1b4u); eax = (u32)(M32(m_)); }
  /* 0053b24c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b24e je 0x53b259 */ if (ZF_) goto L_0053b259;
  /* 0053b250 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b252 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053b254 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b256 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b259u; SAVEALL; call_ind(c, t_); RETCHK(0x53b259u, 0x53b256u); LOADALL; }
L_0053b259:;
  /* 0053b259 mov eax, dword ptr [ebx + 0x1b8] */ { const u32 m_ = (u32)(ebx + 0x1b8u); eax = (u32)(M32(m_)); }
  /* 0053b25f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b261 je 0x53ba09 */ if (ZF_) goto L_0053ba09;
  /* 0053b267 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0053b269 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0053b26b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b26d mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0053b26f call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b272u; SAVEALL; call_ind(c, t_); RETCHK(0x53b272u, 0x53b26fu); LOADALL; }
  /* 0053b272 jmp 0x53ba09 */ goto L_0053ba09;
L_0053b277:;
  /* 0053b277 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b279 call 0x4019a0 */ esp -= 4; M32(esp) = 0x53b27eu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x53b279u); RETCHK(0x53b27eu, 0x53b279u); LOADALL;
  /* 0053b27e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053b281 call 0x401020 */ esp -= 4; M32(esp) = 0x53b286u; SAVEALL; F_00401020(c); ABI_CHECK(0x401020u, 0x53b281u); RETCHK(0x53b286u, 0x53b281u); LOADALL;
  /* 0053b286 jmp 0x53b2b7 */ goto L_0053b2b7;
L_0053b288:;
  /* 0053b288 mov eax, dword ptr [ebx + 0x1e8] */ { const u32 m_ = (u32)(ebx + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 0053b28e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b290 je 0x53b220 */ if (ZF_) goto L_0053b220;
  /* 0053b292 mov edi, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); edi = (u32)(M32(m_)); }
  /* 0053b295 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b297 call 0x4019a0 */ esp -= 4; M32(esp) = 0x53b29cu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x53b297u); RETCHK(0x53b29cu, 0x53b297u); LOADALL;
  /* 0053b29c mov esi, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); esi = (u32)(M32(m_)); }
  /* 0053b2a2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053b2a5 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b2a7 jne 0x53b2b1 */ if (!ZF_) goto L_0053b2b1;
  /* 0053b2a9 mov dword ptr [ebp - 0x150], esi */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); M32(m_) = (u32)(esi); }
  /* 0053b2af jmp 0x53b2bd */ goto L_0053b2bd;
L_0053b2b1:;
  /* 0053b2b1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053b2b2 call 0x55ead0 */ esp -= 4; M32(esp) = 0x53b2b7u; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x53b2b2u); RETCHK(0x53b2b7u, 0x53b2b2u); LOADALL;
L_0053b2b7:;
  /* 0053b2b7 mov dword ptr [ebp - 0x150], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); M32(m_) = (u32)(eax); }
L_0053b2bd:;
  /* 0053b2bd xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0053b2bf xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053b2c1 mov dword ptr [ebp - 0x154], edi */ { const u32 m_ = (u32)(ebp + 0xfffffeacu); M32(m_) = (u32)(edi); }
  /* 0053b2c7 mov dword ptr [ebp - 0x3c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(edi); }
  /* 0053b2ca mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 0053b2cd mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 0053b2d0 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0053b2d3 mov dword ptr [ebp - 0x154], edi */ { const u32 m_ = (u32)(ebp + 0xfffffeacu); M32(m_) = (u32)(edi); }
  /* 0053b2d9 mov esi, 0x1e678220 */ { esi = (u32)(0x1e678220u); }
  /* 0053b2de mov edi, edi */ { edi = (u32)(edi); }
L_0053b2e0:;
  /* 0053b2e0 mov edx, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); edx = (u32)(M32(m_)); }
  /* 0053b2e6 call 0x463e50 */ esp -= 4; M32(esp) = 0x53b2ebu; SAVEALL; F_00463e50(c); ABI_CHECK(0x463e50u, 0x53b2e6u); RETCHK(0x53b2ebu, 0x53b2e6u); LOADALL;
  /* 0053b2eb test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053b2ed je 0x53b2fb */ if (ZF_) goto L_0053b2fb;
  /* 0053b2ef mov eax, dword ptr [ebp - 0x154] */ { const u32 m_ = (u32)(ebp + 0xfffffeacu); eax = (u32)(M32(m_)); }
  /* 0053b2f5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0053b2f6 mov dword ptr [ebp + edi*4 - 0x3c], eax */ { const u32 m_ = (u32)(ebp + edi * 4u + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 0053b2fa inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_0053b2fb:;
  /* 0053b2fb mov edx, dword ptr [ebp - 0x154] */ { const u32 m_ = (u32)(ebp + 0xfffffeacu); edx = (u32)(M32(m_)); }
  /* 0053b301 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0053b302 add esi, 0x3e8 */ { u32 a_ = esi, b_ = 0x3e8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0053b308 cmp esi, 0x1e6791c0 */ { u32 a_ = esi, b_ = 0x1e6791c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b30e mov dword ptr [ebp - 0x154], edx */ { const u32 m_ = (u32)(ebp + 0xfffffeacu); M32(m_) = (u32)(edx); }
  /* 0053b314 jl 0x53b2e0 */ if (LT_) goto L_0053b2e0;
  /* 0053b316 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0053b318 mov dword ptr [ebp - 0x154], edi */ { const u32 m_ = (u32)(ebp + 0xfffffeacu); M32(m_) = (u32)(edi); }
  /* 0053b31e mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0053b325 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 0053b328 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0053b32c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053b32d mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0053b330 call 0x4019a0 */ esp -= 4; M32(esp) = 0x53b335u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x53b330u); RETCHK(0x53b335u, 0x53b330u); LOADALL;
  /* 0053b335 mov cl, byte ptr [eax + 0xb30] */ { const u32 m_ = (u32)(eax + 0xb30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053b33b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053b33e test cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053b341 jne 0x53b35f */ if (!ZF_) goto L_0053b35f;
  /* 0053b343 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053b344 call 0x4019a0 */ esp -= 4; M32(esp) = 0x53b349u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x53b344u); RETCHK(0x53b349u, 0x53b344u); LOADALL;
  /* 0053b349 mov cl, byte ptr [eax + 0xb30] */ { const u32 m_ = (u32)(eax + 0xb30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053b34f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053b352 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053b354 js 0x53b35f */ if (SF_) goto L_0053b35f;
  /* 0053b356 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0053b358 push 0x654500 */ { u32 v_ = 0x654500u; esp -= 4; M32(esp) = v_; }
  /* 0053b35d jmp 0x53b366 */ goto L_0053b366;
L_0053b35f:;
  /* 0053b35f push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 0053b361 push 0x654510 */ { u32 v_ = 0x654510u; esp -= 4; M32(esp) = v_; }
L_0053b366:;
  /* 0053b366 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053b369 call 0x404420 */ esp -= 4; M32(esp) = 0x53b36eu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53b369u); RETCHK(0x53b36eu, 0x53b369u); LOADALL;
  /* 0053b36e cmp edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b371 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0053b376 ja 0x53b8fd */ if (!(CF_|ZF_)) goto L_0053b8fd;
  /* 0053b37c jmp dword ptr [edi*4 + 0x53ba24] */ { const u32 m_ = (u32)(edi * 4u + 0x53ba24u); u32 t_ = M32(m_); switch (t_) { case 0x53b383u: goto L_0053b383; case 0x53b3d8u: goto L_0053b3d8; case 0x53b48du: goto L_0053b48d; case 0x53b5a6u: goto L_0053b5a6; case 0x53b720u: goto L_0053b720; default: SAVEALL; call_ind(c, t_); return; } }
L_0053b383:;
  /* 0053b383 mov eax, dword ptr [ebx + 0x1ac] */ { const u32 m_ = (u32)(ebx + 0x1acu); eax = (u32)(M32(m_)); }
  /* 0053b389 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b38b je 0x53b396 */ if (ZF_) goto L_0053b396;
  /* 0053b38d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b38f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053b391 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b393 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b396u; SAVEALL; call_ind(c, t_); RETCHK(0x53b396u, 0x53b393u); LOADALL; }
L_0053b396:;
  /* 0053b396 mov eax, dword ptr [ebx + 0x1b0] */ { const u32 m_ = (u32)(ebx + 0x1b0u); eax = (u32)(M32(m_)); }
  /* 0053b39c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b39e je 0x53b3a9 */ if (ZF_) goto L_0053b3a9;
  /* 0053b3a0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b3a2 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053b3a4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b3a6 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b3a9u; SAVEALL; call_ind(c, t_); RETCHK(0x53b3a9u, 0x53b3a6u); LOADALL; }
L_0053b3a9:;
  /* 0053b3a9 mov eax, dword ptr [ebx + 0x1b4] */ { const u32 m_ = (u32)(ebx + 0x1b4u); eax = (u32)(M32(m_)); }
  /* 0053b3af test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b3b1 je 0x53b3bc */ if (ZF_) goto L_0053b3bc;
  /* 0053b3b3 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b3b5 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053b3b7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b3b9 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b3bcu; SAVEALL; call_ind(c, t_); RETCHK(0x53b3bcu, 0x53b3b9u); LOADALL; }
L_0053b3bc:;
  /* 0053b3bc mov eax, dword ptr [ebx + 0x1b8] */ { const u32 m_ = (u32)(ebx + 0x1b8u); eax = (u32)(M32(m_)); }
  /* 0053b3c2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b3c4 je 0x53b903 */ if (ZF_) goto L_0053b903;
  /* 0053b3ca mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b3cc mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053b3ce push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b3d0 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b3d3u; SAVEALL; call_ind(c, t_); RETCHK(0x53b3d3u, 0x53b3d0u); LOADALL; }
  /* 0053b3d3 jmp 0x53b903 */ goto L_0053b903;
L_0053b3d8:;
  /* 0053b3d8 mov eax, dword ptr [ebx + 0x1ac] */ { const u32 m_ = (u32)(ebx + 0x1acu); eax = (u32)(M32(m_)); }
  /* 0053b3de test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b3e0 je 0x53b3eb */ if (ZF_) goto L_0053b3eb;
  /* 0053b3e2 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b3e4 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053b3e6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053b3e8 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b3ebu; SAVEALL; call_ind(c, t_); RETCHK(0x53b3ebu, 0x53b3e8u); LOADALL; }
L_0053b3eb:;
  /* 0053b3eb mov eax, dword ptr [ebx + 0x1b0] */ { const u32 m_ = (u32)(ebx + 0x1b0u); eax = (u32)(M32(m_)); }
  /* 0053b3f1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b3f3 je 0x53b3fe */ if (ZF_) goto L_0053b3fe;
  /* 0053b3f5 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b3f7 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053b3f9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b3fb call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b3feu; SAVEALL; call_ind(c, t_); RETCHK(0x53b3feu, 0x53b3fbu); LOADALL; }
L_0053b3fe:;
  /* 0053b3fe mov eax, dword ptr [ebx + 0x1b4] */ { const u32 m_ = (u32)(ebx + 0x1b4u); eax = (u32)(M32(m_)); }
  /* 0053b404 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b406 je 0x53b411 */ if (ZF_) goto L_0053b411;
  /* 0053b408 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b40a mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053b40c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b40e call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b411u; SAVEALL; call_ind(c, t_); RETCHK(0x53b411u, 0x53b40eu); LOADALL; }
L_0053b411:;
  /* 0053b411 mov eax, dword ptr [ebx + 0x1b8] */ { const u32 m_ = (u32)(ebx + 0x1b8u); eax = (u32)(M32(m_)); }
  /* 0053b417 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b419 je 0x53b424 */ if (ZF_) goto L_0053b424;
  /* 0053b41b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b41d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053b41f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b421 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b424u; SAVEALL; call_ind(c, t_); RETCHK(0x53b424u, 0x53b421u); LOADALL; }
L_0053b424:;
  /* 0053b424 mov ecx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ecx = (u32)(M32(m_)); }
  /* 0053b427 cmp ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b42a jne 0x53b452 */ if (!ZF_) goto L_0053b452;
  /* 0053b42c mov edx, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); edx = (u32)(M32(m_)); }
  /* 0053b432 mov al, byte ptr [edx + 0xd29] */ { const u32 m_ = (u32)(edx + 0xd29u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053b438 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053b43a je 0x53b452 */ if (ZF_) goto L_0053b452;
  /* 0053b43c call 0x9c4766 */ esp -= 4; M32(esp) = 0x53b441u; SAVEALL; F_009c4766(c); ABI_CHECK(0x9c4766u, 0x53b43cu); RETCHK(0x53b441u, 0x53b43cu); LOADALL;
  /* 0053b441 nop */ ;
  /* 0053b442 nop */ ;
  /* 0053b443 nop */ ;
  /* 0053b444 nop */ ;
  /* 0053b445 nop */ ;
  /* 0053b446 nop */ ;
  /* 0053b447 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b448 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b44du; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b448u); RETCHK(0x53b44du, 0x53b448u); LOADALL;
  /* 0053b44d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053b450 jmp 0x53b473 */ goto L_0053b473;
L_0053b452:;
  /* 0053b452 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b455 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0053b458 jae 0x53b45d */ if (!CF_) goto L_0053b45d;
  /* 0053b45a lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_0053b45d:;
  /* 0053b45d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b45e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b45f lea ecx, [ebp - 0x14c] */ ecx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b465 push 0x6544d8 */ { u32 v_ = 0x6544d8u; esp -= 4; M32(esp) = v_; }
  /* 0053b46a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b46b call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b470u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b46bu); RETCHK(0x53b470u, 0x53b46bu); LOADALL;
  /* 0053b470 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053b473:;
  /* 0053b473 mov ebx, dword ptr [ebx + 0x1ac] */ { const u32 m_ = (u32)(ebx + 0x1acu); ebx = (u32)(M32(m_)); }
  /* 0053b479 lea edx, [ebp - 0x14c] */ edx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b47f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053b480 call 0x50dc70 */ esp -= 4; M32(esp) = 0x53b485u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x53b480u); RETCHK(0x53b485u, 0x53b480u); LOADALL;
  /* 0053b485 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0053b488 jmp 0x53b903 */ goto L_0053b903;
L_0053b48d:;
  /* 0053b48d mov eax, dword ptr [ebx + 0x1ac] */ { const u32 m_ = (u32)(ebx + 0x1acu); eax = (u32)(M32(m_)); }
  /* 0053b493 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b495 je 0x53b4a0 */ if (ZF_) goto L_0053b4a0;
  /* 0053b497 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b499 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053b49b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053b49d call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b4a0u; SAVEALL; call_ind(c, t_); RETCHK(0x53b4a0u, 0x53b49du); LOADALL; }
L_0053b4a0:;
  /* 0053b4a0 mov eax, dword ptr [ebx + 0x1b0] */ { const u32 m_ = (u32)(ebx + 0x1b0u); eax = (u32)(M32(m_)); }
  /* 0053b4a6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b4a8 je 0x53b4b3 */ if (ZF_) goto L_0053b4b3;
  /* 0053b4aa mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b4ac mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053b4ae push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053b4b0 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b4b3u; SAVEALL; call_ind(c, t_); RETCHK(0x53b4b3u, 0x53b4b0u); LOADALL; }
L_0053b4b3:;
  /* 0053b4b3 mov eax, dword ptr [ebx + 0x1b4] */ { const u32 m_ = (u32)(ebx + 0x1b4u); eax = (u32)(M32(m_)); }
  /* 0053b4b9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b4bb je 0x53b4c6 */ if (ZF_) goto L_0053b4c6;
  /* 0053b4bd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b4bf mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053b4c1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b4c3 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b4c6u; SAVEALL; call_ind(c, t_); RETCHK(0x53b4c6u, 0x53b4c3u); LOADALL; }
L_0053b4c6:;
  /* 0053b4c6 mov eax, dword ptr [ebx + 0x1b8] */ { const u32 m_ = (u32)(ebx + 0x1b8u); eax = (u32)(M32(m_)); }
  /* 0053b4cc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b4ce je 0x53b4d9 */ if (ZF_) goto L_0053b4d9;
  /* 0053b4d0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b4d2 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053b4d4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b4d6 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b4d9u; SAVEALL; call_ind(c, t_); RETCHK(0x53b4d9u, 0x53b4d6u); LOADALL; }
L_0053b4d9:;
  /* 0053b4d9 mov eax, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); eax = (u32)(M32(m_)); }
  /* 0053b4dc cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b4df jne 0x53b507 */ if (!ZF_) goto L_0053b507;
  /* 0053b4e1 mov ecx, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); ecx = (u32)(M32(m_)); }
  /* 0053b4e7 mov dl, byte ptr [ecx + 0xd29] */ { const u32 m_ = (u32)(ecx + 0xd29u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053b4ed test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053b4ef je 0x53b507 */ if (ZF_) goto L_0053b507;
  /* 0053b4f1 call 0x9c4784 */ esp -= 4; M32(esp) = 0x53b4f6u; SAVEALL; F_009c4784(c); ABI_CHECK(0x9c4784u, 0x53b4f1u); RETCHK(0x53b4f6u, 0x53b4f1u); LOADALL;
  /* 0053b4f6 nop */ ;
  /* 0053b4f7 nop */ ;
  /* 0053b4f8 nop */ ;
  /* 0053b4f9 nop */ ;
  /* 0053b4fa nop */ ;
  /* 0053b4fb nop */ ;
  /* 0053b4fc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053b4fd call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b502u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b4fdu); RETCHK(0x53b502u, 0x53b4fdu); LOADALL;
  /* 0053b502 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053b505 jmp 0x53b528 */ goto L_0053b528;
L_0053b507:;
  /* 0053b507 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b50a mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 0053b50d jae 0x53b512 */ if (!CF_) goto L_0053b512;
  /* 0053b50f lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
L_0053b512:;
  /* 0053b512 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b513 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b514 lea eax, [ebp - 0x14c] */ eax = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b51a push 0x6544d8 */ { u32 v_ = 0x6544d8u; esp -= 4; M32(esp) = v_; }
  /* 0053b51f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b520 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b525u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b520u); RETCHK(0x53b525u, 0x53b520u); LOADALL;
  /* 0053b525 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053b528:;
  /* 0053b528 mov ebx, dword ptr [ebx + 0x1ac] */ { const u32 m_ = (u32)(ebx + 0x1acu); ebx = (u32)(M32(m_)); }
  /* 0053b52e lea ecx, [ebp - 0x14c] */ ecx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b534 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b535 call 0x50dc70 */ esp -= 4; M32(esp) = 0x53b53au; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x53b535u); RETCHK(0x53b53au, 0x53b535u); LOADALL;
  /* 0053b53a mov ecx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ecx = (u32)(M32(m_)); }
  /* 0053b53d cmp ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b540 jne 0x53b568 */ if (!ZF_) goto L_0053b568;
  /* 0053b542 mov edx, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); edx = (u32)(M32(m_)); }
  /* 0053b548 mov al, byte ptr [edx + 0xd29] */ { const u32 m_ = (u32)(edx + 0xd29u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053b54e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053b550 je 0x53b568 */ if (ZF_) goto L_0053b568;
  /* 0053b552 call 0x9c4766 */ esp -= 4; M32(esp) = 0x53b557u; SAVEALL; F_009c4766(c); ABI_CHECK(0x9c4766u, 0x53b552u); RETCHK(0x53b557u, 0x53b552u); LOADALL;
  /* 0053b557 nop */ ;
  /* 0053b558 nop */ ;
  /* 0053b559 nop */ ;
  /* 0053b55a nop */ ;
  /* 0053b55b nop */ ;
  /* 0053b55c nop */ ;
  /* 0053b55d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b55e call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b563u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b55eu); RETCHK(0x53b563u, 0x53b55eu); LOADALL;
  /* 0053b563 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053b566 jmp 0x53b589 */ goto L_0053b589;
L_0053b568:;
  /* 0053b568 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b56b mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0053b56e jae 0x53b573 */ if (!CF_) goto L_0053b573;
  /* 0053b570 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_0053b573:;
  /* 0053b573 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b574 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b575 lea ecx, [ebp - 0x14c] */ ecx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b57b push 0x6544d8 */ { u32 v_ = 0x6544d8u; esp -= 4; M32(esp) = v_; }
  /* 0053b580 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b581 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b586u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b581u); RETCHK(0x53b586u, 0x53b581u); LOADALL;
  /* 0053b586 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053b589:;
  /* 0053b589 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0053b58c mov ebx, dword ptr [eax + 0x1b0] */ { const u32 m_ = (u32)(eax + 0x1b0u); ebx = (u32)(M32(m_)); }
  /* 0053b592 lea edx, [ebp - 0x14c] */ edx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b598 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053b599 call 0x50dc70 */ esp -= 4; M32(esp) = 0x53b59eu; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x53b599u); RETCHK(0x53b59eu, 0x53b599u); LOADALL;
  /* 0053b59e mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0053b5a1 jmp 0x53b903 */ goto L_0053b903;
L_0053b5a6:;
  /* 0053b5a6 mov eax, dword ptr [ebx + 0x1ac] */ { const u32 m_ = (u32)(ebx + 0x1acu); eax = (u32)(M32(m_)); }
  /* 0053b5ac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b5ae je 0x53b5b9 */ if (ZF_) goto L_0053b5b9;
  /* 0053b5b0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b5b2 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053b5b4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053b5b6 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b5b9u; SAVEALL; call_ind(c, t_); RETCHK(0x53b5b9u, 0x53b5b6u); LOADALL; }
L_0053b5b9:;
  /* 0053b5b9 mov eax, dword ptr [ebx + 0x1b0] */ { const u32 m_ = (u32)(ebx + 0x1b0u); eax = (u32)(M32(m_)); }
  /* 0053b5bf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b5c1 je 0x53b5cc */ if (ZF_) goto L_0053b5cc;
  /* 0053b5c3 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b5c5 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053b5c7 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053b5c9 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b5ccu; SAVEALL; call_ind(c, t_); RETCHK(0x53b5ccu, 0x53b5c9u); LOADALL; }
L_0053b5cc:;
  /* 0053b5cc mov eax, dword ptr [ebx + 0x1b4] */ { const u32 m_ = (u32)(ebx + 0x1b4u); eax = (u32)(M32(m_)); }
  /* 0053b5d2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b5d4 je 0x53b5df */ if (ZF_) goto L_0053b5df;
  /* 0053b5d6 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b5d8 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053b5da push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053b5dc call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b5dfu; SAVEALL; call_ind(c, t_); RETCHK(0x53b5dfu, 0x53b5dcu); LOADALL; }
L_0053b5df:;
  /* 0053b5df mov eax, dword ptr [ebx + 0x1b8] */ { const u32 m_ = (u32)(ebx + 0x1b8u); eax = (u32)(M32(m_)); }
  /* 0053b5e5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b5e7 je 0x53b5f2 */ if (ZF_) goto L_0053b5f2;
  /* 0053b5e9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b5eb mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053b5ed push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053b5ef call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b5f2u; SAVEALL; call_ind(c, t_); RETCHK(0x53b5f2u, 0x53b5efu); LOADALL; }
L_0053b5f2:;
  /* 0053b5f2 mov eax, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); eax = (u32)(M32(m_)); }
  /* 0053b5f5 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b5f8 jne 0x53b620 */ if (!ZF_) goto L_0053b620;
  /* 0053b5fa mov ecx, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); ecx = (u32)(M32(m_)); }
  /* 0053b600 mov dl, byte ptr [ecx + 0xd29] */ { const u32 m_ = (u32)(ecx + 0xd29u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053b606 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053b608 je 0x53b620 */ if (ZF_) goto L_0053b620;
  /* 0053b60a call 0x9c4784 */ esp -= 4; M32(esp) = 0x53b60fu; SAVEALL; F_009c4784(c); ABI_CHECK(0x9c4784u, 0x53b60au); RETCHK(0x53b60fu, 0x53b60au); LOADALL;
  /* 0053b60f nop */ ;
  /* 0053b610 nop */ ;
  /* 0053b611 nop */ ;
  /* 0053b612 nop */ ;
  /* 0053b613 nop */ ;
  /* 0053b614 nop */ ;
  /* 0053b615 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053b616 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b61bu; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b616u); RETCHK(0x53b61bu, 0x53b616u); LOADALL;
  /* 0053b61b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053b61e jmp 0x53b641 */ goto L_0053b641;
L_0053b620:;
  /* 0053b620 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b623 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 0053b626 jae 0x53b62b */ if (!CF_) goto L_0053b62b;
  /* 0053b628 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
L_0053b62b:;
  /* 0053b62b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b62c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b62d lea eax, [ebp - 0x14c] */ eax = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b633 push 0x6544d8 */ { u32 v_ = 0x6544d8u; esp -= 4; M32(esp) = v_; }
  /* 0053b638 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b639 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b63eu; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b639u); RETCHK(0x53b63eu, 0x53b639u); LOADALL;
  /* 0053b63e add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053b641:;
  /* 0053b641 mov ebx, dword ptr [ebx + 0x1ac] */ { const u32 m_ = (u32)(ebx + 0x1acu); ebx = (u32)(M32(m_)); }
  /* 0053b647 lea ecx, [ebp - 0x14c] */ ecx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b64d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b64e call 0x50dc70 */ esp -= 4; M32(esp) = 0x53b653u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x53b64eu); RETCHK(0x53b653u, 0x53b64eu); LOADALL;
  /* 0053b653 mov ecx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ecx = (u32)(M32(m_)); }
  /* 0053b656 cmp ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b659 jne 0x53b681 */ if (!ZF_) goto L_0053b681;
  /* 0053b65b mov edx, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); edx = (u32)(M32(m_)); }
  /* 0053b661 mov al, byte ptr [edx + 0xd29] */ { const u32 m_ = (u32)(edx + 0xd29u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053b667 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053b669 je 0x53b681 */ if (ZF_) goto L_0053b681;
  /* 0053b66b call 0x9c4766 */ esp -= 4; M32(esp) = 0x53b670u; SAVEALL; F_009c4766(c); ABI_CHECK(0x9c4766u, 0x53b66bu); RETCHK(0x53b670u, 0x53b66bu); LOADALL;
  /* 0053b670 nop */ ;
  /* 0053b671 nop */ ;
  /* 0053b672 nop */ ;
  /* 0053b673 nop */ ;
  /* 0053b674 nop */ ;
  /* 0053b675 nop */ ;
  /* 0053b676 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b677 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b67cu; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b677u); RETCHK(0x53b67cu, 0x53b677u); LOADALL;
  /* 0053b67c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053b67f jmp 0x53b6a2 */ goto L_0053b6a2;
L_0053b681:;
  /* 0053b681 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b684 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0053b687 jae 0x53b68c */ if (!CF_) goto L_0053b68c;
  /* 0053b689 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_0053b68c:;
  /* 0053b68c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b68d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b68e lea ecx, [ebp - 0x14c] */ ecx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b694 push 0x6544d8 */ { u32 v_ = 0x6544d8u; esp -= 4; M32(esp) = v_; }
  /* 0053b699 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b69a call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b69fu; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b69au); RETCHK(0x53b69fu, 0x53b69au); LOADALL;
  /* 0053b69f add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053b6a2:;
  /* 0053b6a2 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0053b6a5 mov ebx, dword ptr [edi + 0x1b0] */ { const u32 m_ = (u32)(edi + 0x1b0u); ebx = (u32)(M32(m_)); }
  /* 0053b6ab lea edx, [ebp - 0x14c] */ edx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b6b1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053b6b2 call 0x50dc70 */ esp -= 4; M32(esp) = 0x53b6b7u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x53b6b2u); RETCHK(0x53b6b7u, 0x53b6b2u); LOADALL;
  /* 0053b6b7 mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 0053b6ba cmp ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b6bd jne 0x53b6e5 */ if (!ZF_) goto L_0053b6e5;
  /* 0053b6bf mov eax, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); eax = (u32)(M32(m_)); }
  /* 0053b6c5 mov dl, byte ptr [eax + 0xd29] */ { const u32 m_ = (u32)(eax + 0xd29u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053b6cb test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053b6cd je 0x53b6e5 */ if (ZF_) goto L_0053b6e5;
  /* 0053b6cf call 0x9c47a3 */ esp -= 4; M32(esp) = 0x53b6d4u; SAVEALL; F_009c47a3(c); ABI_CHECK(0x9c47a3u, 0x53b6cfu); RETCHK(0x53b6d4u, 0x53b6cfu); LOADALL;
  /* 0053b6d4 nop */ ;
  /* 0053b6d5 nop */ ;
  /* 0053b6d6 nop */ ;
  /* 0053b6d7 nop */ ;
  /* 0053b6d8 nop */ ;
  /* 0053b6d9 nop */ ;
  /* 0053b6da push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b6db call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b6e0u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b6dbu); RETCHK(0x53b6e0u, 0x53b6dbu); LOADALL;
  /* 0053b6e0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053b6e3 jmp 0x53b706 */ goto L_0053b706;
L_0053b6e5:;
  /* 0053b6e5 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b6e8 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0053b6eb jae 0x53b6f0 */ if (!CF_) goto L_0053b6f0;
  /* 0053b6ed lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_0053b6f0:;
  /* 0053b6f0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b6f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b6f2 lea edx, [ebp - 0x14c] */ edx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b6f8 push 0x6544d8 */ { u32 v_ = 0x6544d8u; esp -= 4; M32(esp) = v_; }
  /* 0053b6fd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053b6fe call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b703u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b6feu); RETCHK(0x53b703u, 0x53b6feu); LOADALL;
  /* 0053b703 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053b706:;
  /* 0053b706 mov ebx, dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); ebx = (u32)(M32(m_)); }
  /* 0053b70c lea eax, [ebp - 0x14c] */ eax = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b712 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b713 call 0x50dc70 */ esp -= 4; M32(esp) = 0x53b718u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x53b713u); RETCHK(0x53b718u, 0x53b713u); LOADALL;
  /* 0053b718 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0053b71b jmp 0x53b903 */ goto L_0053b903;
L_0053b720:;
  /* 0053b720 mov eax, dword ptr [ebx + 0x1ac] */ { const u32 m_ = (u32)(ebx + 0x1acu); eax = (u32)(M32(m_)); }
  /* 0053b726 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b728 je 0x53b733 */ if (ZF_) goto L_0053b733;
  /* 0053b72a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b72c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053b72e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053b730 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b733u; SAVEALL; call_ind(c, t_); RETCHK(0x53b733u, 0x53b730u); LOADALL; }
L_0053b733:;
  /* 0053b733 mov eax, dword ptr [ebx + 0x1b0] */ { const u32 m_ = (u32)(ebx + 0x1b0u); eax = (u32)(M32(m_)); }
  /* 0053b739 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b73b je 0x53b746 */ if (ZF_) goto L_0053b746;
  /* 0053b73d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b73f mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053b741 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053b743 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b746u; SAVEALL; call_ind(c, t_); RETCHK(0x53b746u, 0x53b743u); LOADALL; }
L_0053b746:;
  /* 0053b746 mov eax, dword ptr [ebx + 0x1b4] */ { const u32 m_ = (u32)(ebx + 0x1b4u); eax = (u32)(M32(m_)); }
  /* 0053b74c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b74e je 0x53b759 */ if (ZF_) goto L_0053b759;
  /* 0053b750 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b752 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053b754 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053b756 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b759u; SAVEALL; call_ind(c, t_); RETCHK(0x53b759u, 0x53b756u); LOADALL; }
L_0053b759:;
  /* 0053b759 mov eax, dword ptr [ebx + 0x1b8] */ { const u32 m_ = (u32)(ebx + 0x1b8u); eax = (u32)(M32(m_)); }
  /* 0053b75f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b761 je 0x53b76c */ if (ZF_) goto L_0053b76c;
  /* 0053b763 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b765 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053b767 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053b769 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b76cu; SAVEALL; call_ind(c, t_); RETCHK(0x53b76cu, 0x53b769u); LOADALL; }
L_0053b76c:;
  /* 0053b76c mov eax, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); eax = (u32)(M32(m_)); }
  /* 0053b76f cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b772 jne 0x53b79a */ if (!ZF_) goto L_0053b79a;
  /* 0053b774 mov ecx, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); ecx = (u32)(M32(m_)); }
  /* 0053b77a mov dl, byte ptr [ecx + 0xd29] */ { const u32 m_ = (u32)(ecx + 0xd29u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053b780 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053b782 je 0x53b79a */ if (ZF_) goto L_0053b79a;
  /* 0053b784 call 0x9c4784 */ esp -= 4; M32(esp) = 0x53b789u; SAVEALL; F_009c4784(c); ABI_CHECK(0x9c4784u, 0x53b784u); RETCHK(0x53b789u, 0x53b784u); LOADALL;
  /* 0053b789 nop */ ;
  /* 0053b78a nop */ ;
  /* 0053b78b nop */ ;
  /* 0053b78c nop */ ;
  /* 0053b78d nop */ ;
  /* 0053b78e nop */ ;
  /* 0053b78f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053b790 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b795u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b790u); RETCHK(0x53b795u, 0x53b790u); LOADALL;
  /* 0053b795 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053b798 jmp 0x53b7bb */ goto L_0053b7bb;
L_0053b79a:;
  /* 0053b79a cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b79d mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 0053b7a0 jae 0x53b7a5 */ if (!CF_) goto L_0053b7a5;
  /* 0053b7a2 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
L_0053b7a5:;
  /* 0053b7a5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b7a6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b7a7 lea eax, [ebp - 0x14c] */ eax = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b7ad push 0x6544d8 */ { u32 v_ = 0x6544d8u; esp -= 4; M32(esp) = v_; }
  /* 0053b7b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b7b3 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b7b8u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b7b3u); RETCHK(0x53b7b8u, 0x53b7b3u); LOADALL;
  /* 0053b7b8 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053b7bb:;
  /* 0053b7bb mov ebx, dword ptr [ebx + 0x1ac] */ { const u32 m_ = (u32)(ebx + 0x1acu); ebx = (u32)(M32(m_)); }
  /* 0053b7c1 lea ecx, [ebp - 0x14c] */ ecx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b7c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b7c8 call 0x50dc70 */ esp -= 4; M32(esp) = 0x53b7cdu; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x53b7c8u); RETCHK(0x53b7cdu, 0x53b7c8u); LOADALL;
  /* 0053b7cd mov ecx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ecx = (u32)(M32(m_)); }
  /* 0053b7d0 cmp ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b7d3 mov esi, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); esi = (u32)(M32(m_)); }
  /* 0053b7d9 jne 0x53b7fb */ if (!ZF_) goto L_0053b7fb;
  /* 0053b7db mov al, byte ptr [esi + 0xd29] */ { const u32 m_ = (u32)(esi + 0xd29u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053b7e1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053b7e3 je 0x53b7fb */ if (ZF_) goto L_0053b7fb;
  /* 0053b7e5 call 0x9c47c2 */ esp -= 4; M32(esp) = 0x53b7eau; SAVEALL; F_009c47c2(c); ABI_CHECK(0x9c47c2u, 0x53b7e5u); RETCHK(0x53b7eau, 0x53b7e5u); LOADALL;
  /* 0053b7ea nop */ ;
  /* 0053b7eb nop */ ;
  /* 0053b7ec nop */ ;
  /* 0053b7ed nop */ ;
  /* 0053b7ee nop */ ;
  /* 0053b7ef nop */ ;
  /* 0053b7f0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053b7f1 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b7f6u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b7f1u); RETCHK(0x53b7f6u, 0x53b7f1u); LOADALL;
  /* 0053b7f6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053b7f9 jmp 0x53b81d */ goto L_0053b81d;
L_0053b7fb:;
  /* 0053b7fb cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b7ff mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0053b802 jae 0x53b807 */ if (!CF_) goto L_0053b807;
  /* 0053b804 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_0053b807:;
  /* 0053b807 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b808 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b809 lea eax, [ebp - 0x14c] */ eax = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b80f push 0x6544d8 */ { u32 v_ = 0x6544d8u; esp -= 4; M32(esp) = v_; }
  /* 0053b814 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b815 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b81au; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b815u); RETCHK(0x53b81au, 0x53b815u); LOADALL;
  /* 0053b81a add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053b81d:;
  /* 0053b81d mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0053b820 mov ebx, dword ptr [edi + 0x1b0] */ { const u32 m_ = (u32)(edi + 0x1b0u); ebx = (u32)(M32(m_)); }
  /* 0053b826 lea ecx, [ebp - 0x14c] */ ecx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b82c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b82d call 0x50dc70 */ esp -= 4; M32(esp) = 0x53b832u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x53b82du); RETCHK(0x53b832u, 0x53b82du); LOADALL;
  /* 0053b832 mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 0053b835 cmp ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b838 jne 0x53b85a */ if (!ZF_) goto L_0053b85a;
  /* 0053b83a mov al, byte ptr [esi + 0xd29] */ { const u32 m_ = (u32)(esi + 0xd29u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053b840 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053b842 je 0x53b85a */ if (ZF_) goto L_0053b85a;
  /* 0053b844 call 0x9c47c2 */ esp -= 4; M32(esp) = 0x53b849u; SAVEALL; F_009c47c2(c); ABI_CHECK(0x9c47c2u, 0x53b844u); RETCHK(0x53b849u, 0x53b844u); LOADALL;
  /* 0053b849 nop */ ;
  /* 0053b84a nop */ ;
  /* 0053b84b nop */ ;
  /* 0053b84c nop */ ;
  /* 0053b84d nop */ ;
  /* 0053b84e nop */ ;
  /* 0053b84f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053b850 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b855u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b850u); RETCHK(0x53b855u, 0x53b850u); LOADALL;
  /* 0053b855 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053b858 jmp 0x53b87c */ goto L_0053b87c;
L_0053b85a:;
  /* 0053b85a cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b85e mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0053b861 jae 0x53b866 */ if (!CF_) goto L_0053b866;
  /* 0053b863 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_0053b866:;
  /* 0053b866 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b867 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b868 lea eax, [ebp - 0x14c] */ eax = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b86e push 0x6544d8 */ { u32 v_ = 0x6544d8u; esp -= 4; M32(esp) = v_; }
  /* 0053b873 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b874 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b879u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b874u); RETCHK(0x53b879u, 0x53b874u); LOADALL;
  /* 0053b879 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053b87c:;
  /* 0053b87c mov ebx, dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); ebx = (u32)(M32(m_)); }
  /* 0053b882 lea ecx, [ebp - 0x14c] */ ecx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b888 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b889 call 0x50dc70 */ esp -= 4; M32(esp) = 0x53b88eu; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x53b889u); RETCHK(0x53b88eu, 0x53b889u); LOADALL;
  /* 0053b88e mov ecx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ecx = (u32)(M32(m_)); }
  /* 0053b891 cmp ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b894 jne 0x53b8c6 */ if (!ZF_) goto L_0053b8c6;
  /* 0053b896 mov al, byte ptr [esi + 0xd29] */ { const u32 m_ = (u32)(esi + 0xd29u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053b89c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053b89e je 0x53b8c6 */ if (ZF_) goto L_0053b8c6;
  /* 0053b8a0 call 0x9c47c2 */ esp -= 4; M32(esp) = 0x53b8a5u; SAVEALL; F_009c47c2(c); ABI_CHECK(0x9c47c2u, 0x53b8a0u); RETCHK(0x53b8a5u, 0x53b8a0u); LOADALL;
  /* 0053b8a5 nop */ ;
  /* 0053b8a6 nop */ ;
  /* 0053b8a7 nop */ ;
  /* 0053b8a8 nop */ ;
  /* 0053b8a9 nop */ ;
  /* 0053b8aa nop */ ;
  /* 0053b8ab push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053b8ac call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b8b1u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b8acu); RETCHK(0x53b8b1u, 0x53b8acu); LOADALL;
  /* 0053b8b1 mov ebx, dword ptr [edi + 0x1b8] */ { const u32 m_ = (u32)(edi + 0x1b8u); ebx = (u32)(M32(m_)); }
  /* 0053b8b7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053b8ba lea ecx, [ebp - 0x14c] */ ecx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b8c0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b8c1 jmp 0x53b9f2 */ goto L_0053b9f2;
L_0053b8c6:;
  /* 0053b8c6 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b8ca mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0053b8cd jae 0x53b8d2 */ if (!CF_) goto L_0053b8d2;
  /* 0053b8cf lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_0053b8d2:;
  /* 0053b8d2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b8d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b8d4 lea eax, [ebp - 0x14c] */ eax = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b8da push 0x6544d8 */ { u32 v_ = 0x6544d8u; esp -= 4; M32(esp) = v_; }
  /* 0053b8df push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b8e0 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x53b8e5u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x53b8e0u); RETCHK(0x53b8e5u, 0x53b8e0u); LOADALL;
  /* 0053b8e5 mov ebx, dword ptr [edi + 0x1b8] */ { const u32 m_ = (u32)(edi + 0x1b8u); ebx = (u32)(M32(m_)); }
  /* 0053b8eb add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053b8ee lea ecx, [ebp - 0x14c] */ ecx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 0053b8f4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053b8f5 jmp 0x53b9f2 */ goto L_0053b9f2;
L_0053b8fd:;
  /* 0053b8fd jge 0x53b9f7 */ if (!LT_) goto L_0053b9f7;
L_0053b903:;
  /* 0053b903 mov dword ptr [ebp + 8], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(0xffffffffu); }
  /* 0053b90a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0053b90c mov edi, 0x1f0325ea */ { edi = (u32)(0x1f0325eau); }
L_0053b911:;
  /* 0053b911 mov eax, dword ptr [ebp - 0x150] */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); eax = (u32)(M32(m_)); }
  /* 0053b917 call 0x463e80 */ esp -= 4; M32(esp) = 0x53b91cu; SAVEALL; F_00463e80(c); ABI_CHECK(0x463e80u, 0x53b917u); RETCHK(0x53b91cu, 0x53b917u); LOADALL;
  /* 0053b91c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053b91e je 0x53b923 */ if (ZF_) goto L_0053b923;
  /* 0053b920 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
L_0053b923:;
  /* 0053b923 add edi, 0xa */ { u32 a_ = edi, b_ = 0xau; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0053b926 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0053b927 cmp edi, 0x1f032612 */ { u32 a_ = edi, b_ = 0x1f032612u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b92d jl 0x53b911 */ if (LT_) goto L_0053b911;
  /* 0053b92f cmp dword ptr [ebp + 8], -1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b933 jle 0x53b9f7 */ if ((ZF_|LT_)) goto L_0053b9f7;
  /* 0053b939 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0053b93b mov dword ptr [ebp - 0x4b], edx */ { const u32 m_ = (u32)(ebp + 0xffffffb5u); M32(m_) = (u32)(edx); }
  /* 0053b93e mov dword ptr [ebp - 0x47], edx */ { const u32 m_ = (u32)(ebp + 0xffffffb9u); M32(m_) = (u32)(edx); }
  /* 0053b941 mov dword ptr [ebp - 0x43], edx */ { const u32 m_ = (u32)(ebp + 0xffffffbdu); M32(m_) = (u32)(edx); }
  /* 0053b944 mov dword ptr [ebp - 0x3f], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc1u); M32(m_) = (u32)(edx); }
  /* 0053b947 mov dword ptr [ebp - 0x3b], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); M32(m_) = (u32)(edx); }
  /* 0053b94a mov dword ptr [ebp - 0x37], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc9u); M32(m_) = (u32)(edx); }
  /* 0053b94d push 0x6544c4 */ { u32 v_ = 0x6544c4u; esp -= 4; M32(esp) = v_; }
  /* 0053b952 mov dword ptr [ebp - 0x33], edx */ { const u32 m_ = (u32)(ebp + 0xffffffcdu); M32(m_) = (u32)(edx); }
  /* 0053b955 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0053b958 mov word ptr [ebp - 0x2f], dx */ { const u32 m_ = (u32)(ebp + 0xffffffd1u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 0053b95c push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 0053b95e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053b95f mov byte ptr [ebp - 0x4c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M8(m_) = (u8)(0x0u); }
  /* 0053b963 mov byte ptr [ebp - 0x2d], dl */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0053b966 call 0x5fe928 */ esp -= 4; M32(esp) = 0x53b96bu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x53b966u); RETCHK(0x53b96bu, 0x53b966u); LOADALL;
  /* 0053b96b mov eax, dword ptr [ebp - 0x154] */ { const u32 m_ = (u32)(ebp + 0xfffffeacu); eax = (u32)(M32(m_)); }
  /* 0053b971 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053b974 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b977 ja 0x53b9f7 */ if (!(CF_|ZF_)) goto L_0053b9f7;
  /* 0053b97d jmp dword ptr [eax*4 + 0x53ba38] */ { const u32 m_ = (u32)(eax * 4u + 0x53ba38u); u32 t_ = M32(m_); switch (t_) { case 0x53b984u: goto L_0053b984; case 0x53b99fu: goto L_0053b99f; case 0x53b9bau: goto L_0053b9ba; case 0x53b9d5u: goto L_0053b9d5; default: SAVEALL; call_ind(c, t_); return; } }
L_0053b984:;
  /* 0053b984 mov eax, dword ptr [ebx + 0x1ac] */ { const u32 m_ = (u32)(ebx + 0x1acu); eax = (u32)(M32(m_)); }
  /* 0053b98a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b98c je 0x53b997 */ if (ZF_) goto L_0053b997;
  /* 0053b98e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b990 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053b992 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053b994 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b997u; SAVEALL; call_ind(c, t_); RETCHK(0x53b997u, 0x53b994u); LOADALL; }
L_0053b997:;
  /* 0053b997 mov ebx, dword ptr [ebx + 0x1ac] */ { const u32 m_ = (u32)(ebx + 0x1acu); ebx = (u32)(M32(m_)); }
  /* 0053b99d jmp 0x53b9ee */ goto L_0053b9ee;
L_0053b99f:;
  /* 0053b99f mov eax, dword ptr [ebx + 0x1b0] */ { const u32 m_ = (u32)(ebx + 0x1b0u); eax = (u32)(M32(m_)); }
  /* 0053b9a5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b9a7 je 0x53b9b2 */ if (ZF_) goto L_0053b9b2;
  /* 0053b9a9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b9ab mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053b9ad push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053b9af call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b9b2u; SAVEALL; call_ind(c, t_); RETCHK(0x53b9b2u, 0x53b9afu); LOADALL; }
L_0053b9b2:;
  /* 0053b9b2 mov ebx, dword ptr [ebx + 0x1b0] */ { const u32 m_ = (u32)(ebx + 0x1b0u); ebx = (u32)(M32(m_)); }
  /* 0053b9b8 jmp 0x53b9ee */ goto L_0053b9ee;
L_0053b9ba:;
  /* 0053b9ba mov eax, dword ptr [ebx + 0x1b4] */ { const u32 m_ = (u32)(ebx + 0x1b4u); eax = (u32)(M32(m_)); }
  /* 0053b9c0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b9c2 je 0x53b9cd */ if (ZF_) goto L_0053b9cd;
  /* 0053b9c4 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b9c6 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053b9c8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053b9ca call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b9cdu; SAVEALL; call_ind(c, t_); RETCHK(0x53b9cdu, 0x53b9cau); LOADALL; }
L_0053b9cd:;
  /* 0053b9cd mov ebx, dword ptr [ebx + 0x1b4] */ { const u32 m_ = (u32)(ebx + 0x1b4u); ebx = (u32)(M32(m_)); }
  /* 0053b9d3 jmp 0x53b9ee */ goto L_0053b9ee;
L_0053b9d5:;
  /* 0053b9d5 mov eax, dword ptr [ebx + 0x1b8] */ { const u32 m_ = (u32)(ebx + 0x1b8u); eax = (u32)(M32(m_)); }
  /* 0053b9db test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053b9dd je 0x53b9e8 */ if (ZF_) goto L_0053b9e8;
  /* 0053b9df mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053b9e1 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053b9e3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053b9e5 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53b9e8u; SAVEALL; call_ind(c, t_); RETCHK(0x53b9e8u, 0x53b9e5u); LOADALL; }
L_0053b9e8:;
  /* 0053b9e8 mov ebx, dword ptr [ebx + 0x1b8] */ { const u32 m_ = (u32)(ebx + 0x1b8u); ebx = (u32)(M32(m_)); }
L_0053b9ee:;
  /* 0053b9ee lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0053b9f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
L_0053b9f2:;
  /* 0053b9f2 call 0x50dc70 */ esp -= 4; M32(esp) = 0x53b9f7u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x53b9f2u); RETCHK(0x53b9f7u, 0x53b9f2u); LOADALL;
L_0053b9f7:;
  /* 0053b9f7 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053b9fb jb 0x53ba09 */ if (CF_) goto L_0053ba09;
  /* 0053b9fd mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 0053ba00 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053ba01 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53ba06u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53ba01u); RETCHK(0x53ba06u, 0x53ba01u); LOADALL;
  /* 0053ba06 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053ba09:;
  /* 0053ba09 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053ba0c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053ba0d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053ba0e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0053ba15 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0053ba18 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053ba19 call 0x61af31 */ esp -= 4; M32(esp) = 0x53ba1eu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x53ba19u); RETCHK(0x53ba1eu, 0x53ba19u); LOADALL;
  /* 0053ba1e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053ba20 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053ba21 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0053ba50(CPU *c) {
  NATIVE_HOOK(0x53ba50u) REGS; LOADALL;
L_0053ba50:;
  /* 0053ba50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0053ba51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0053ba53 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053ba55 push 0x61ff78 */ { u32 v_ = 0x61ff78u; esp -= 4; M32(esp) = v_; }
  /* 0053ba5a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0053ba60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053ba61 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0053ba68 sub esp, 0x58 */ { u32 a_ = esp, b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053ba6b mov eax, dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); eax = (u32)(M32(m_)); }
  /* 0053ba71 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053ba72 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0053ba74 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053ba76 je 0x53bd9a */ if (ZF_) goto L_0053bd9a;
  /* 0053ba7c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053ba7d call 0x4019a0 */ esp -= 4; M32(esp) = 0x53ba82u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x53ba7du); RETCHK(0x53ba82u, 0x53ba7du); LOADALL;
  /* 0053ba82 mov cl, byte ptr [eax + 0xb30] */ { const u32 m_ = (u32)(eax + 0xb30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053ba88 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053ba8b test cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053ba8e jne 0x53bcb7 */ if (!ZF_) goto L_0053bcb7;
  /* 0053ba94 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053ba95 call 0x4019a0 */ esp -= 4; M32(esp) = 0x53ba9au; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x53ba95u); RETCHK(0x53ba9au, 0x53ba95u); LOADALL;
  /* 0053ba9a mov cl, byte ptr [eax + 0xb30] */ { const u32 m_ = (u32)(eax + 0xb30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053baa0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053baa3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053baa5 js 0x53bcb7 */ if (SF_) goto L_0053bcb7;
  /* 0053baab mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053baae test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053bab0 mov ecx, dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); ecx = (u32)(M32(m_)); }
  /* 0053bab6 jne 0x53bbb6 */ if (!ZF_) goto L_0053bbb6;
  /* 0053babc mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053babe lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0053bac1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053bac2 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53bac5u; SAVEALL; call_ind(c, t_); RETCHK(0x53bac5u, 0x53bac2u); LOADALL; }
  /* 0053bac5 lea esi, [edi + 0x44] */ esi = (u32)((u32)(edi + 0x44u));
  /* 0053bac8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053baca call 0x40d9f0 */ esp -= 4; M32(esp) = 0x53bacfu; SAVEALL; F_0040d9f0(c); ABI_CHECK(0x40d9f0u, 0x53bacau); RETCHK(0x53bacfu, 0x53bacau); LOADALL;
  /* 0053bacf fadd dword ptr [0x656ef0] */ { const u32 m_ = (u32)(0x656ef0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053bad5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053bad7 mov dword ptr [ebp - 0x18], 0x41300000 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x41300000u); }
  /* 0053bade fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053bae1 call 0x40d9f0 */ esp -= 4; M32(esp) = 0x53bae6u; SAVEALL; F_0040d9f0(c); ABI_CHECK(0x40d9f0u, 0x53bae1u); RETCHK(0x53bae6u, 0x53bae1u); LOADALL;
  /* 0053bae6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053bae8 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053baeb call 0x40d9d0 */ esp -= 4; M32(esp) = 0x53baf0u; SAVEALL; F_0040d9d0(c); ABI_CHECK(0x40d9d0u, 0x53baebu); RETCHK(0x53baf0u, 0x53baebu); LOADALL;
  /* 0053baf0 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053baf3 mov eax, dword ptr [edi + 0x1c0] */ { const u32 m_ = (u32)(edi + 0x1c0u); eax = (u32)(M32(m_)); }
  /* 0053baf9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053bafb je 0x53bb02 */ if (ZF_) goto L_0053bb02;
  /* 0053bafd cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053bb00 jne 0x53bb4d */ if (!ZF_) goto L_0053bb4d;
L_0053bb02:;
  /* 0053bb02 mov ecx, dword ptr [edi + 0x1bc] */ { const u32 m_ = (u32)(edi + 0x1bcu); ecx = (u32)(M32(m_)); }
  /* 0053bb08 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053bb0a lea edx, [ebp - 0x3c] */ edx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0053bb0d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053bb0e call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53bb11u; SAVEALL; call_ind(c, t_); RETCHK(0x53bb11u, 0x53bb0eu); LOADALL; }
  /* 0053bb11 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 0053bb14 fadd dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053bb1a mov ecx, dword ptr [edi + 0x1bc] */ { const u32 m_ = (u32)(edi + 0x1bcu); ecx = (u32)(M32(m_)); }
  /* 0053bb20 lea edx, [ebp - 0x3c] */ edx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0053bb23 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053bb24 fst dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); }
  /* 0053bb27 fadd dword ptr [0x657028] */ { const u32 m_ = (u32)(0x657028u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053bb2d fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053bb30 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053bb32 call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53bb35u; SAVEALL; call_ind(c, t_); RETCHK(0x53bb35u, 0x53bb32u); LOADALL; }
  /* 0053bb35 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 0053bb38 fadd dword ptr [0x657028] */ { const u32 m_ = (u32)(0x657028u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053bb3e fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053bb41 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 0053bb44 fadd dword ptr [0x657028] */ { const u32 m_ = (u32)(0x657028u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053bb4a fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
L_0053bb4d:;
  /* 0053bb4d mov ecx, dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); ecx = (u32)(M32(m_)); }
  /* 0053bb53 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053bb55 lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0053bb58 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053bb59 call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53bb5cu; SAVEALL; call_ind(c, t_); RETCHK(0x53bb5cu, 0x53bb59u); LOADALL; }
  /* 0053bb5c mov ecx, dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); ecx = (u32)(M32(m_)); }
  /* 0053bb62 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053bb64 lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 0053bb67 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053bb68 call dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53bb6bu; SAVEALL; call_ind(c, t_); RETCHK(0x53bb6bu, 0x53bb68u); LOADALL; }
  /* 0053bb6b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053bb6c lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0053bb6f call 0x403060 */ esp -= 4; M32(esp) = 0x53bb74u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x53bb6fu); RETCHK(0x53bb74u, 0x53bb6fu); LOADALL;
  /* 0053bb74 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 0053bb7b mov esi, dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); esi = (u32)(M32(m_)); }
  /* 0053bb81 lea eax, [ebp - 0x48] */ eax = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0053bb84 call 0x5224b0 */ esp -= 4; M32(esp) = 0x53bb89u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x53bb84u); RETCHK(0x53bb89u, 0x53bb84u); LOADALL;
  /* 0053bb89 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0053bb8c mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0053bb93 call 0x43ee60 */ esp -= 4; M32(esp) = 0x53bb98u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x53bb93u); RETCHK(0x53bb98u, 0x53bb93u); LOADALL;
  /* 0053bb98 mov ecx, dword ptr [edi + 0x18c] */ { const u32 m_ = (u32)(edi + 0x18cu); ecx = (u32)(M32(m_)); }
  /* 0053bb9e mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053bba0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053bba2 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53bba5u; SAVEALL; call_ind(c, t_); RETCHK(0x53bba5u, 0x53bba2u); LOADALL; }
  /* 0053bba5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053bba6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053bba9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0053bbb0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053bbb2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053bbb3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0053bbb6:;
  /* 0053bbb6 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053bbb8 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053bbbb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053bbbc call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53bbbfu; SAVEALL; call_ind(c, t_); RETCHK(0x53bbbfu, 0x53bbbcu); LOADALL; }
  /* 0053bbbf lea esi, [edi + 0x44] */ esi = (u32)((u32)(edi + 0x44u));
  /* 0053bbc2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053bbc4 call 0x40d9f0 */ esp -= 4; M32(esp) = 0x53bbc9u; SAVEALL; F_0040d9f0(c); ABI_CHECK(0x40d9f0u, 0x53bbc4u); RETCHK(0x53bbc9u, 0x53bbc4u); LOADALL;
  /* 0053bbc9 fadd dword ptr [0x6570cc] */ { const u32 m_ = (u32)(0x6570ccu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053bbcf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053bbd1 mov dword ptr [ebp - 0x28], 0x41300000 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x41300000u); }
  /* 0053bbd8 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053bbdb call 0x40d9f0 */ esp -= 4; M32(esp) = 0x53bbe0u; SAVEALL; F_0040d9f0(c); ABI_CHECK(0x40d9f0u, 0x53bbdbu); RETCHK(0x53bbe0u, 0x53bbdbu); LOADALL;
  /* 0053bbe0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053bbe2 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053bbe5 call 0x40d9d0 */ esp -= 4; M32(esp) = 0x53bbeau; SAVEALL; F_0040d9d0(c); ABI_CHECK(0x40d9d0u, 0x53bbe5u); RETCHK(0x53bbeau, 0x53bbe5u); LOADALL;
  /* 0053bbea fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053bbed mov eax, dword ptr [edi + 0x1c0] */ { const u32 m_ = (u32)(edi + 0x1c0u); eax = (u32)(M32(m_)); }
  /* 0053bbf3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053bbf5 je 0x53bbfc */ if (ZF_) goto L_0053bbfc;
  /* 0053bbf7 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053bbfa jne 0x53bc55 */ if (!ZF_) goto L_0053bc55;
L_0053bbfc:;
  /* 0053bbfc mov ecx, dword ptr [edi + 0x1bc] */ { const u32 m_ = (u32)(edi + 0x1bcu); ecx = (u32)(M32(m_)); }
  /* 0053bc02 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053bc04 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0053bc07 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053bc08 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53bc0bu; SAVEALL; call_ind(c, t_); RETCHK(0x53bc0bu, 0x53bc08u); LOADALL; }
  /* 0053bc0b fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 0053bc0e fadd dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053bc14 mov ecx, dword ptr [edi + 0x1bc] */ { const u32 m_ = (u32)(edi + 0x1bcu); ecx = (u32)(M32(m_)); }
  /* 0053bc1a lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0053bc1d mov dword ptr [ebp - 0x18], 0x41300000 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x41300000u); }
  /* 0053bc24 fst dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); }
  /* 0053bc27 mov dword ptr [ebp - 0x10], 0x42140000 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x42140000u); }
  /* 0053bc2e fadd dword ptr [0x657028] */ { const u32 m_ = (u32)(0x657028u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053bc34 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053bc35 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053bc38 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053bc3a call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53bc3du; SAVEALL; call_ind(c, t_); RETCHK(0x53bc3du, 0x53bc3au); LOADALL; }
  /* 0053bc3d fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 0053bc40 fadd dword ptr [0x657074] */ { const u32 m_ = (u32)(0x657074u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053bc46 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053bc49 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 0053bc4c fadd dword ptr [0x657074] */ { const u32 m_ = (u32)(0x657074u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053bc52 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
L_0053bc55:;
  /* 0053bc55 mov ecx, dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); ecx = (u32)(M32(m_)); }
  /* 0053bc5b mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053bc5d lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053bc60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053bc61 call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53bc64u; SAVEALL; call_ind(c, t_); RETCHK(0x53bc64u, 0x53bc61u); LOADALL; }
  /* 0053bc64 mov ecx, dword ptr [edi + 0x18c] */ { const u32 m_ = (u32)(edi + 0x18cu); ecx = (u32)(M32(m_)); }
  /* 0053bc6a mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053bc6c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053bc6e call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53bc71u; SAVEALL; call_ind(c, t_); RETCHK(0x53bc71u, 0x53bc6eu); LOADALL; }
  /* 0053bc71 mov ecx, dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); ecx = (u32)(M32(m_)); }
  /* 0053bc77 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053bc79 lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 0053bc7c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053bc7d call dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53bc80u; SAVEALL; call_ind(c, t_); RETCHK(0x53bc80u, 0x53bc7du); LOADALL; }
  /* 0053bc80 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053bc81 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0053bc84 call 0x403060 */ esp -= 4; M32(esp) = 0x53bc89u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x53bc84u); RETCHK(0x53bc89u, 0x53bc84u); LOADALL;
  /* 0053bc89 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0053bc90 mov esi, dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); esi = (u32)(M32(m_)); }
  /* 0053bc96 lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0053bc99 call 0x5224b0 */ esp -= 4; M32(esp) = 0x53bc9eu; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x53bc99u); RETCHK(0x53bc9eu, 0x53bc99u); LOADALL;
  /* 0053bc9e lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0053bca1 call 0x43ee60 */ esp -= 4; M32(esp) = 0x53bca6u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x53bca1u); RETCHK(0x53bca6u, 0x53bca1u); LOADALL;
  /* 0053bca6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053bca7 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053bcaa mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0053bcb1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053bcb3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053bcb4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0053bcb7:;
  /* 0053bcb7 mov ecx, dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); ecx = (u32)(M32(m_)); }
  /* 0053bcbd mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053bcbf lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0053bcc2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053bcc3 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53bcc6u; SAVEALL; call_ind(c, t_); RETCHK(0x53bcc6u, 0x53bcc3u); LOADALL; }
  /* 0053bcc6 fld dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 0053bcc9 fsub dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053bccc mov dword ptr [ebp - 0x1c], 0x42600000 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x42600000u); }
  /* 0053bcd3 mov dword ptr [ebp - 0x18], 0x40000000 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x40000000u); }
  /* 0053bcda fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0053bce0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053bce2 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053bce5 je 0x53bcef */ if (ZF_) goto L_0053bcef;
  /* 0053bce7 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0053bce9 fld dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 0053bcec fsub dword ptr [edi + 0x50] */ { const u32 m_ = (u32)(edi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0053bcef:;
  /* 0053bcef fsub dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053bcf5 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053bcf8 fld dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 0053bcfb fsub dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053bcfe fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0053bd04 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053bd06 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053bd09 je 0x53bd13 */ if (ZF_) goto L_0053bd13;
  /* 0053bd0b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0053bd0d fld dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 0053bd10 fsub dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0053bd13:;
  /* 0053bd13 fsub dword ptr [0x6570c8] */ { const u32 m_ = (u32)(0x6570c8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053bd19 mov ecx, dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); ecx = (u32)(M32(m_)); }
  /* 0053bd1f lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0053bd22 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053bd23 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053bd26 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053bd28 call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53bd2bu; SAVEALL; call_ind(c, t_); RETCHK(0x53bd2bu, 0x53bd28u); LOADALL; }
  /* 0053bd2b mov ecx, dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); ecx = (u32)(M32(m_)); }
  /* 0053bd31 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053bd33 lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 0053bd36 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053bd37 call dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53bd3au; SAVEALL; call_ind(c, t_); RETCHK(0x53bd3au, 0x53bd37u); LOADALL; }
  /* 0053bd3a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0053bd3c mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 0053bd43 mov dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(esi); }
  /* 0053bd46 mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 0053bd4a lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0053bd4d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_0053bd50:;
  /* 0053bd50 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053bd52 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0053bd53 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053bd55 jne 0x53bd50 */ if (!ZF_) goto L_0053bd50;
  /* 0053bd57 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0053bd59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053bd5a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053bd5b lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0053bd5e call 0x404420 */ esp -= 4; M32(esp) = 0x53bd63u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53bd5eu); RETCHK(0x53bd63u, 0x53bd5eu); LOADALL;
  /* 0053bd63 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0053bd66 mov esi, dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); esi = (u32)(M32(m_)); }
  /* 0053bd6c lea eax, [ebp - 0x48] */ eax = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0053bd6f call 0x5224b0 */ esp -= 4; M32(esp) = 0x53bd74u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x53bd6fu); RETCHK(0x53bd74u, 0x53bd6fu); LOADALL;
  /* 0053bd74 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0053bd7b cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053bd7f jb 0x53bd8d */ if (CF_) goto L_0053bd8d;
  /* 0053bd81 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 0053bd84 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053bd85 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53bd8au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53bd85u); RETCHK(0x53bd8au, 0x53bd85u); LOADALL;
  /* 0053bd8a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053bd8d:;
  /* 0053bd8d mov ecx, dword ptr [edi + 0x18c] */ { const u32 m_ = (u32)(edi + 0x18cu); ecx = (u32)(M32(m_)); }
  /* 0053bd93 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053bd95 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053bd97 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53bd9au; SAVEALL; call_ind(c, t_); RETCHK(0x53bd9au, 0x53bd97u); LOADALL; }
L_0053bd9a:;
  /* 0053bd9a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053bd9d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053bd9e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0053bda5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053bda7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053bda8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0053bdb0(CPU *c) {
  NATIVE_HOOK(0x53bdb0u) REGS; LOADALL;
L_0053bdb0:;
  /* 0053bdb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0053bdb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0053bdb3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053bdb4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053bdb5 mov edi, eax */ { edi = (u32)(eax); }
  /* 0053bdb7 mov esi, edi */ { esi = (u32)(edi); }
  /* 0053bdb9 call 0x5398d0 */ esp -= 4; M32(esp) = 0x53bdbeu; SAVEALL; F_005398d0(c); ABI_CHECK(0x5398d0u, 0x53bdb9u); RETCHK(0x53bdbeu, 0x53bdb9u); LOADALL;
  /* 0053bdbe mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053bdc1 cmp dword ptr [esi + 0x1a0], eax */ { const u32 m_ = (u32)(esi + 0x1a0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053bdc7 je 0x53bdff */ if (ZF_) goto L_0053bdff;
  /* 0053bdc9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053bdca mov dword ptr [esi + 0x1a0], eax */ { const u32 m_ = (u32)(esi + 0x1a0u); M32(m_) = (u32)(eax); }
  /* 0053bdd0 call 0x5398c0 */ esp -= 4; M32(esp) = 0x53bdd5u; SAVEALL; F_005398c0(c); ABI_CHECK(0x5398c0u, 0x53bdd0u); RETCHK(0x53bdd5u, 0x53bdd0u); LOADALL;
  /* 0053bdd5 mov edi, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); edi = (u32)(M32(m_)); }
  /* 0053bddb mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0053bddd call 0x50dbb0 */ esp -= 4; M32(esp) = 0x53bde2u; SAVEALL; F_0050dbb0(c); ABI_CHECK(0x50dbb0u, 0x53bdddu); RETCHK(0x53bde2u, 0x53bdddu); LOADALL;
  /* 0053bde2 mov ecx, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); ecx = (u32)(M32(m_)); }
  /* 0053bde8 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053bdea push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0053bdef push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0053bdf4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053bdf6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053bdf8 call dword ptr [eax + 0xe4] */ { const u32 m_ = (u32)(eax + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53bdfeu; SAVEALL; call_ind(c, t_); RETCHK(0x53bdfeu, 0x53bdf8u); LOADALL; }
  /* 0053bdfe pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0053bdff:;
  /* 0053bdff mov ecx, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); ecx = (u32)(M32(m_)); }
  /* 0053be05 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053be07 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053be09 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53be0cu; SAVEALL; call_ind(c, t_); RETCHK(0x53be0cu, 0x53be09u); LOADALL; }
  /* 0053be0c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053be0d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053be0e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053be0f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0053be20(CPU *c) {
  NATIVE_HOOK(0x53be20u) REGS; LOADALL;
L_0053be20:;
  /* 0053be20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0053be21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0053be23 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053be26 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053be27 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053be28 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053be29 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0053be2b mov eax, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 0053be31 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0053be33 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053be35 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0053be38 mov dword ptr [ebp - 8], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0xffffffffu); }
  /* 0053be3f je 0x53bed9 */ if (ZF_) goto L_0053bed9;
  /* 0053be45 mov esi, dword ptr [edi + 0x1ec] */ { const u32 m_ = (u32)(edi + 0x1ecu); esi = (u32)(M32(m_)); }
  /* 0053be4b cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053be4d je 0x53bf6e */ if (ZF_) goto L_0053bf6e;
  /* 0053be53 mov eax, esi */ { eax = (u32)(esi); }
  /* 0053be55 call 0x4e0d70 */ esp -= 4; M32(esp) = 0x53be5au; SAVEALL; F_004e0d70(c); ABI_CHECK(0x4e0d70u, 0x53be55u); RETCHK(0x53be5au, 0x53be55u); LOADALL;
  /* 0053be5a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053be5c je 0x53be98 */ if (ZF_) goto L_0053be98;
  /* 0053be5e fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0053be61 mov eax, dword ptr [esi + 0xc0] */ { const u32 m_ = (u32)(esi + 0xc0u); eax = (u32)(M32(m_)); }
  /* 0053be67 fadd dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053be6d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053be6f mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0053be72 mov dword ptr [edi + 0x1d0], 1 */ { const u32 m_ = (u32)(edi + 0x1d0u); M32(m_) = (u32)(0x1u); }
  /* 0053be7c fstp dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053be82 call 0x4e8ac0 */ esp -= 4; M32(esp) = 0x53be87u; SAVEALL; F_004e8ac0(c); ABI_CHECK(0x4e8ac0u, 0x53be82u); RETCHK(0x53be87u, 0x53be82u); LOADALL;
  /* 0053be87 neg al */ { u32 a_ = (eax & 0xffu); u32 r_ = (0u - a_) & 0xffu; eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 0053be89 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0053be8b neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0053be8d mov dword ptr [edi + 0x1d4], eax */ { const u32 m_ = (u32)(edi + 0x1d4u); M32(m_) = (u32)(eax); }
  /* 0053be93 jmp 0x53bf6e */ goto L_0053bf6e;
L_0053be98:;
  /* 0053be98 mov ecx, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); ecx = (u32)(M32(m_)); }
  /* 0053be9e mov dword ptr [edi + 0x1cc], ebx */ { const u32 m_ = (u32)(edi + 0x1ccu); M32(m_) = (u32)(ebx); }
  /* 0053bea4 mov dword ptr [edi + 0x1d0], ebx */ { const u32 m_ = (u32)(edi + 0x1d0u); M32(m_) = (u32)(ebx); }
  /* 0053beaa mov dword ptr [ecx + 0x1b0], ebx */ { const u32 m_ = (u32)(ecx + 0x1b0u); M32(m_) = (u32)(ebx); }
  /* 0053beb0 mov edx, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); edx = (u32)(M32(m_)); }
  /* 0053beb6 mov dword ptr [edx + 0x1b0], ebx */ { const u32 m_ = (u32)(edx + 0x1b0u); M32(m_) = (u32)(ebx); }
  /* 0053bebc mov eax, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); eax = (u32)(M32(m_)); }
  /* 0053bec2 mov byte ptr [eax + 0x1b8], bl */ { const u32 m_ = (u32)(eax + 0x1b8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053bec8 mov ecx, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); ecx = (u32)(M32(m_)); }
  /* 0053bece mov byte ptr [ecx + 0x1b8], bl */ { const u32 m_ = (u32)(ecx + 0x1b8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053bed4 jmp 0x53bf6e */ goto L_0053bf6e;
L_0053bed9:;
  /* 0053bed9 mov esi, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); esi = (u32)(M32(m_)); }
  /* 0053bedf cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053bee1 je 0x53bf6e */ if (ZF_) goto L_0053bf6e;
  /* 0053bee7 call 0x4db230 */ esp -= 4; M32(esp) = 0x53beecu; SAVEALL; F_004db230(c); ABI_CHECK(0x4db230u, 0x53bee7u); RETCHK(0x53beecu, 0x53bee7u); LOADALL;
  /* 0053beec test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053beee je 0x53bf2c */ if (ZF_) goto L_0053bf2c;
  /* 0053bef0 mov ecx, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 0053bef6 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0053bef8 call 0x4db300 */ esp -= 4; M32(esp) = 0x53befdu; SAVEALL; F_004db300(c); ABI_CHECK(0x4db300u, 0x53bef8u); RETCHK(0x53befdu, 0x53bef8u); LOADALL;
  /* 0053befd fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0053bf00 fadd dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053bf06 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0053bf09 mov dword ptr [edi + 0x1d0], 1 */ { const u32 m_ = (u32)(edi + 0x1d0u); M32(m_) = (u32)(0x1u); }
  /* 0053bf13 fstp dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053bf19 call 0x4df0e0 */ esp -= 4; M32(esp) = 0x53bf1eu; SAVEALL; F_004df0e0(c); ABI_CHECK(0x4df0e0u, 0x53bf19u); RETCHK(0x53bf1eu, 0x53bf19u); LOADALL;
  /* 0053bf1e neg al */ { u32 a_ = (eax & 0xffu); u32 r_ = (0u - a_) & 0xffu; eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 0053bf20 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0053bf22 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0053bf24 mov dword ptr [edi + 0x1d4], eax */ { const u32 m_ = (u32)(edi + 0x1d4u); M32(m_) = (u32)(eax); }
  /* 0053bf2a jmp 0x53bf6e */ goto L_0053bf6e;
L_0053bf2c:;
  /* 0053bf2c mov edx, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); edx = (u32)(M32(m_)); }
  /* 0053bf32 mov dword ptr [edi + 0x1cc], ebx */ { const u32 m_ = (u32)(edi + 0x1ccu); M32(m_) = (u32)(ebx); }
  /* 0053bf38 mov dword ptr [edi + 0x1e0], ebx */ { const u32 m_ = (u32)(edi + 0x1e0u); M32(m_) = (u32)(ebx); }
  /* 0053bf3e mov dword ptr [edi + 0x1d0], ebx */ { const u32 m_ = (u32)(edi + 0x1d0u); M32(m_) = (u32)(ebx); }
  /* 0053bf44 mov dword ptr [edx + 0x1b0], ebx */ { const u32 m_ = (u32)(edx + 0x1b0u); M32(m_) = (u32)(ebx); }
  /* 0053bf4a mov eax, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); eax = (u32)(M32(m_)); }
  /* 0053bf50 mov dword ptr [eax + 0x1b0], ebx */ { const u32 m_ = (u32)(eax + 0x1b0u); M32(m_) = (u32)(ebx); }
  /* 0053bf56 mov ecx, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); ecx = (u32)(M32(m_)); }
  /* 0053bf5c mov byte ptr [ecx + 0x1b8], bl */ { const u32 m_ = (u32)(ecx + 0x1b8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053bf62 mov edx, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); edx = (u32)(M32(m_)); }
  /* 0053bf68 mov byte ptr [edx + 0x1b8], bl */ { const u32 m_ = (u32)(edx + 0x1b8u); M8(m_) = (u8)((ebx & 0xffu)); }
L_0053bf6e:;
  /* 0053bf6e call 0x550820 */ esp -= 4; M32(esp) = 0x53bf73u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x53bf6eu); RETCHK(0x53bf73u, 0x53bf6eu); LOADALL;
  /* 0053bf73 mov ebx, 0x2007 */ { ebx = (u32)(0x2007u); }
  /* 0053bf78 mov edi, eax */ { edi = (u32)(eax); }
  /* 0053bf7a call 0x54be60 */ esp -= 4; M32(esp) = 0x53bf7fu; SAVEALL; F_0054be60(c); ABI_CHECK(0x54be60u, 0x53bf7au); RETCHK(0x53bf7fu, 0x53bf7au); LOADALL;
  /* 0053bf7f mov esi, eax */ { esi = (u32)(eax); }
  /* 0053bf81 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053bf83 mov dword ptr [ebp - 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(esi); }
  /* 0053bf86 call 0x4019a0 */ esp -= 4; M32(esp) = 0x53bf8bu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x53bf86u); RETCHK(0x53bf8bu, 0x53bf86u); LOADALL;
  /* 0053bf8b mov cl, byte ptr [eax + 0xb30] */ { const u32 m_ = (u32)(eax + 0xb30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053bf91 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053bf94 test cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053bf97 mov bl, 0x80 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x80u) & 0xffu); }
  /* 0053bf99 jne 0x53c078 */ if (!ZF_) goto L_0053c078;
  /* 0053bf9f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053bfa1 call 0x4019a0 */ esp -= 4; M32(esp) = 0x53bfa6u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x53bfa1u); RETCHK(0x53bfa6u, 0x53bfa1u); LOADALL;
  /* 0053bfa6 mov cl, byte ptr [eax + 0xb30] */ { const u32 m_ = (u32)(eax + 0xb30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053bfac add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053bfaf test bl, cl */ { u32 a_ = (ebx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053bfb1 jne 0x53c078 */ if (!ZF_) goto L_0053c078;
  /* 0053bfb7 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 0053bfba mov eax, dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 0053bfc0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053bfc2 je 0x53c290 */ if (ZF_) goto L_0053c290;
  /* 0053bfc8 mov eax, dword ptr [esi + 0x1d4] */ { const u32 m_ = (u32)(esi + 0x1d4u); eax = (u32)(M32(m_)); }
  /* 0053bfce fld dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); FPUSH((double)MF32(m_)); }
  /* 0053bfd4 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053bfd7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053bfd9 je 0x53c035 */ if (ZF_) goto L_0053c035;
  /* 0053bfdb fmul dword ptr [esi + 0x1c8] */ { const u32 m_ = (u32)(esi + 0x1c8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0053bfe1 fst dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); }
  /* 0053bfe4 fstp qword ptr [esp] */ { const u32 m_ = (u32)(esp); MF64(m_) = ST(0); FPOP(); }
  /* 0053bfe7 call 0x5feb5a */ esp -= 4; M32(esp) = 0x53bfecu; SAVEALL; F_005feb5a(c); ABI_CHECK(0x5feb5au, 0x53bfe7u); RETCHK(0x53bfecu, 0x53bfe7u); LOADALL;
  /* 0053bfec mov eax, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); eax = (u32)(M32(m_)); }
  /* 0053bff2 fsubr dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 0053bff5 mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053bff7 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053bffa fsubr dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 0053c000 mov byte ptr [eax + 0x1b8], cl */ { const u32 m_ = (u32)(eax + 0x1b8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0053c006 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053c007 fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 0053c009 fmul dword ptr [0x656f18] */ { const u32 m_ = (u32)(0x656f18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0053c00f fadd dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053c015 fst dword ptr [eax + 0x1b4] */ { const u32 m_ = (u32)(eax + 0x1b4u); MF32(m_) = (float)ST(0); }
  /* 0053c01b mov esi, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); esi = (u32)(M32(m_)); }
  /* 0053c021 fstp dword ptr [esi + 0x1b4] */ { const u32 m_ = (u32)(esi + 0x1b4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053c027 mov byte ptr [esi + 0x1b8], cl */ { const u32 m_ = (u32)(esi + 0x1b8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0053c02d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053c02e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053c02f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053c031 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053c032 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0053c035:;
  /* 0053c035 fmul dword ptr [esi + 0x1c4] */ { const u32 m_ = (u32)(esi + 0x1c4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0053c03b fst dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); }
  /* 0053c03e fstp qword ptr [esp] */ { const u32 m_ = (u32)(esp); MF64(m_) = ST(0); FPOP(); }
  /* 0053c041 call 0x5feb5a */ esp -= 4; M32(esp) = 0x53c046u; SAVEALL; F_005feb5a(c); ABI_CHECK(0x5feb5au, 0x53c041u); RETCHK(0x53c046u, 0x53c041u); LOADALL;
  /* 0053c046 fsubr dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 0053c049 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053c04c fmul dword ptr [0x657158] */ { const u32 m_ = (u32)(0x657158u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0053c052 call 0x61b154 */ esp -= 4; M32(esp) = 0x53c057u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x53c052u); RETCHK(0x53c057u, 0x53c052u); LOADALL;
  /* 0053c057 mov ecx, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); ecx = (u32)(M32(m_)); }
  /* 0053c05d mov dword ptr [ecx + 0x1b0], eax */ { const u32 m_ = (u32)(ecx + 0x1b0u); M32(m_) = (u32)(eax); }
  /* 0053c063 mov edx, dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); edx = (u32)(M32(m_)); }
  /* 0053c069 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053c06a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053c06b mov dword ptr [edx + 0x1b0], eax */ { const u32 m_ = (u32)(edx + 0x1b0u); M32(m_) = (u32)(eax); }
  /* 0053c071 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053c072 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053c074 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053c075 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0053c078:;
  /* 0053c078 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053c07a call 0x4019a0 */ esp -= 4; M32(esp) = 0x53c07fu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x53c07au); RETCHK(0x53c07fu, 0x53c07au); LOADALL;
  /* 0053c07f mov cl, byte ptr [eax + 0xb30] */ { const u32 m_ = (u32)(eax + 0xb30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053c085 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053c088 test bl, cl */ { u32 a_ = (ebx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053c08a je 0x53c19d */ if (ZF_) goto L_0053c19d;
  /* 0053c090 fld dword ptr [0x68a6bc] */ { const u32 m_ = (u32)(0x68a6bcu); FPUSH((double)MF32(m_)); }
  /* 0053c096 xor cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0053c098 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053c09b fst dword ptr [0x68a6bc] */ { const u32 m_ = (u32)(0x68a6bcu); MF32(m_) = (float)ST(0); }
  /* 0053c0a1 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0053c0a7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053c0a9 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053c0ac jp 0x53c0c8 */ if (PF_) goto L_0053c0c8;
  /* 0053c0ae mov al, byte ptr [0x9b8b74] */ { const u32 m_ = (u32)(0x9b8b74u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053c0b3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053c0b5 mov dword ptr [0x68a6bc], 0x3e800000 */ { const u32 m_ = (u32)(0x68a6bcu); M32(m_) = (u32)(0x3e800000u); }
  /* 0053c0bf sete byte ptr [0x9b8b74] */ { const u32 m_ = (u32)(0x9b8b74u); M8(m_) = (u8)((ZF_) ? 1u : 0u); }
  /* 0053c0c6 mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
L_0053c0c8:;
  /* 0053c0c8 mov al, byte ptr [esi + 0xc5e1] */ { const u32 m_ = (u32)(esi + 0xc5e1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053c0ce test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053c0d0 je 0x53c19d */ if (ZF_) goto L_0053c19d;
  /* 0053c0d6 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053c0d8 je 0x53c19d */ if (ZF_) goto L_0053c19d;
  /* 0053c0de mov al, byte ptr [0x9b8b74] */ { const u32 m_ = (u32)(0x9b8b74u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053c0e3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053c0e5 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 0053c0e8 je 0x53c174 */ if (ZF_) goto L_0053c174;
  /* 0053c0ee mov eax, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 0053c0f4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053c0f6 jne 0x53c102 */ if (!ZF_) goto L_0053c102;
  /* 0053c0f8 mov eax, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); eax = (u32)(M32(m_)); }
  /* 0053c0fe test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053c100 je 0x53c134 */ if (ZF_) goto L_0053c134;
L_0053c102:;
  /* 0053c102 add esi, 0xbcd0 */ { u32 a_ = esi, b_ = 0xbcd0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0053c108 mov eax, esi */ { eax = (u32)(esi); }
  /* 0053c10a call 0x4b1a90 */ esp -= 4; M32(esp) = 0x53c10fu; SAVEALL; F_004b1a90(c); ABI_CHECK(0x4b1a90u, 0x53c10au); RETCHK(0x53c10fu, 0x53c10au); LOADALL;
  /* 0053c10f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053c111 je 0x53c11e */ if (ZF_) goto L_0053c11e;
  /* 0053c113 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053c114 mov eax, 0x6544a8 */ { eax = (u32)(0x6544a8u); }
  /* 0053c119 call 0x53acb0 */ esp -= 4; M32(esp) = 0x53c11eu; SAVEALL; F_0053acb0(c); ABI_CHECK(0x53acb0u, 0x53c119u); RETCHK(0x53c11eu, 0x53c119u); LOADALL;
L_0053c11e:;
  /* 0053c11e mov eax, esi */ { eax = (u32)(esi); }
  /* 0053c120 call 0x5397b0 */ esp -= 4; M32(esp) = 0x53c125u; SAVEALL; F_005397b0(c); ABI_CHECK(0x5397b0u, 0x53c120u); RETCHK(0x53c125u, 0x53c120u); LOADALL;
  /* 0053c125 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053c127 je 0x53c134 */ if (ZF_) goto L_0053c134;
  /* 0053c129 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053c12a mov eax, 0x65455c */ { eax = (u32)(0x65455cu); }
  /* 0053c12f call 0x53acb0 */ esp -= 4; M32(esp) = 0x53c134u; SAVEALL; F_0053acb0(c); ABI_CHECK(0x53acb0u, 0x53c12fu); RETCHK(0x53c134u, 0x53c12fu); LOADALL;
L_0053c134:;
  /* 0053c134 mov esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); esi = (u32)(M32(m_)); }
L_0053c137:;
  /* 0053c137 mov eax, dword ptr [edi + 0x1d0] */ { const u32 m_ = (u32)(edi + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 0053c13d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053c13f je 0x53c290 */ if (ZF_) goto L_0053c290;
  /* 0053c145 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053c148 je 0x53c290 */ if (ZF_) goto L_0053c290;
  /* 0053c14e mov eax, dword ptr [edi + 0x1dc] */ { const u32 m_ = (u32)(edi + 0x1dcu); eax = (u32)(M32(m_)); }
  /* 0053c154 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053c156 je 0x53c1a5 */ if (ZF_) goto L_0053c1a5;
  /* 0053c158 call 0x539af0 */ esp -= 4; M32(esp) = 0x53c15du; SAVEALL; F_00539af0(c); ABI_CHECK(0x539af0u, 0x53c158u); RETCHK(0x53c15du, 0x53c158u); LOADALL;
  /* 0053c15d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053c15f jl 0x53c258 */ if (LT_) goto L_0053c258;
  /* 0053c165 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053c168 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053c169 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053c16a call 0x53c600 */ esp -= 4; M32(esp) = 0x53c16fu; SAVEALL; F_0053c600(c); ABI_CHECK(0x53c600u, 0x53c16au); RETCHK(0x53c16fu, 0x53c16au); LOADALL;
  /* 0053c16f jmp 0x53c252 */ goto L_0053c252;
L_0053c174:;
  /* 0053c174 call 0x539af0 */ esp -= 4; M32(esp) = 0x53c179u; SAVEALL; F_00539af0(c); ABI_CHECK(0x539af0u, 0x53c174u); RETCHK(0x53c179u, 0x53c174u); LOADALL;
  /* 0053c179 mov esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); esi = (u32)(M32(m_)); }
  /* 0053c17c cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053c17f je 0x53c1a0 */ if (ZF_) goto L_0053c1a0;
  /* 0053c181 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053c183 jle 0x53c1a0 */ if ((ZF_|LT_)) goto L_0053c1a0;
  /* 0053c185 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053c188 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053c189 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053c18a call 0x53c600 */ esp -= 4; M32(esp) = 0x53c18fu; SAVEALL; F_0053c600(c); ABI_CHECK(0x53c600u, 0x53c18au); RETCHK(0x53c18fu, 0x53c18au); LOADALL;
  /* 0053c18f mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0053c192 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053c193 call 0x53acb0 */ esp -= 4; M32(esp) = 0x53c198u; SAVEALL; F_0053acb0(c); ABI_CHECK(0x53acb0u, 0x53c193u); RETCHK(0x53c198u, 0x53c193u); LOADALL;
  /* 0053c198 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 0053c19b jmp 0x53c137 */ goto L_0053c137;
L_0053c19d:;
  /* 0053c19d mov esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); esi = (u32)(M32(m_)); }
L_0053c1a0:;
  /* 0053c1a0 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 0053c1a3 jmp 0x53c137 */ goto L_0053c137;
L_0053c1a5:;
  /* 0053c1a5 cmp esi, 0x126af740 */ { u32 a_ = esi, b_ = 0x126af740u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053c1ab jg 0x53c207 */ if (!(ZF_|LT_)) goto L_0053c207;
  /* 0053c1ad je 0x53c200 */ if (ZF_) goto L_0053c200;
  /* 0053c1af cmp esi, 0x122dee40 */ { u32 a_ = esi, b_ = 0x122dee40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053c1b5 jg 0x53c1e2 */ if (!(ZF_|LT_)) goto L_0053c1e2;
  /* 0053c1b7 je 0x53c1db */ if (ZF_) goto L_0053c1db;
  /* 0053c1b9 cmp esi, 0x12002780 */ { u32 a_ = esi, b_ = 0x12002780u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053c1bf je 0x53c1d4 */ if (ZF_) goto L_0053c1d4;
  /* 0053c1c1 cmp esi, 0x121eac00 */ { u32 a_ = esi, b_ = 0x121eac00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053c1c7 jne 0x53c258 */ if (!ZF_) goto L_0053c258;
  /* 0053c1cd mov eax, 0x654480 */ { eax = (u32)(0x654480u); }
  /* 0053c1d2 jmp 0x53c252 */ goto L_0053c252;
L_0053c1d4:;
  /* 0053c1d4 mov eax, 0x654494 */ { eax = (u32)(0x654494u); }
  /* 0053c1d9 jmp 0x53c252 */ goto L_0053c252;
L_0053c1db:;
  /* 0053c1db mov eax, 0x6546a0 */ { eax = (u32)(0x6546a0u); }
  /* 0053c1e0 jmp 0x53c252 */ goto L_0053c252;
L_0053c1e2:;
  /* 0053c1e2 cmp esi, 0x123d3080 */ { u32 a_ = esi, b_ = 0x123d3080u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053c1e8 je 0x53c1f9 */ if (ZF_) goto L_0053c1f9;
  /* 0053c1ea cmp esi, 0x124c72c0 */ { u32 a_ = esi, b_ = 0x124c72c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053c1f0 jne 0x53c258 */ if (!ZF_) goto L_0053c258;
  /* 0053c1f2 mov eax, 0x654458 */ { eax = (u32)(0x654458u); }
  /* 0053c1f7 jmp 0x53c252 */ goto L_0053c252;
L_0053c1f9:;
  /* 0053c1f9 mov eax, 0x654470 */ { eax = (u32)(0x654470u); }
  /* 0053c1fe jmp 0x53c252 */ goto L_0053c252;
L_0053c200:;
  /* 0053c200 mov eax, 0x654444 */ { eax = (u32)(0x654444u); }
  /* 0053c205 jmp 0x53c252 */ goto L_0053c252;
L_0053c207:;
  /* 0053c207 cmp esi, 0x13038dc0 */ { u32 a_ = esi, b_ = 0x13038dc0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053c20d jg 0x53c236 */ if (!(ZF_|LT_)) goto L_0053c236;
  /* 0053c20f je 0x53c22f */ if (ZF_) goto L_0053c22f;
  /* 0053c211 cmp esi, 0x12897bc0 */ { u32 a_ = esi, b_ = 0x12897bc0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053c217 je 0x53c228 */ if (ZF_) goto L_0053c228;
  /* 0053c219 cmp esi, 0x12a80040 */ { u32 a_ = esi, b_ = 0x12a80040u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053c21f jne 0x53c258 */ if (!ZF_) goto L_0053c258;
  /* 0053c221 mov eax, 0x654418 */ { eax = (u32)(0x654418u); }
  /* 0053c226 jmp 0x53c252 */ goto L_0053c252;
L_0053c228:;
  /* 0053c228 mov eax, 0x65442c */ { eax = (u32)(0x65442cu); }
  /* 0053c22d jmp 0x53c252 */ goto L_0053c252;
L_0053c22f:;
  /* 0053c22f mov eax, 0x654520 */ { eax = (u32)(0x654520u); }
  /* 0053c234 jmp 0x53c252 */ goto L_0053c252;
L_0053c236:;
  /* 0053c236 cmp esi, 0x1312d000 */ { u32 a_ = esi, b_ = 0x1312d000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053c23c je 0x53c24d */ if (ZF_) goto L_0053c24d;
  /* 0053c23e cmp esi, 0x13221240 */ { u32 a_ = esi, b_ = 0x13221240u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053c244 jne 0x53c258 */ if (!ZF_) goto L_0053c258;
  /* 0053c246 mov eax, 0x65453c */ { eax = (u32)(0x65453cu); }
  /* 0053c24b jmp 0x53c252 */ goto L_0053c252;
L_0053c24d:;
  /* 0053c24d mov eax, 0x65455c */ { eax = (u32)(0x65455cu); }
L_0053c252:;
  /* 0053c252 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053c253 call 0x53acb0 */ esp -= 4; M32(esp) = 0x53c258u; SAVEALL; F_0053acb0(c); ABI_CHECK(0x53acb0u, 0x53c253u); RETCHK(0x53c258u, 0x53c253u); LOADALL;
L_0053c258:;
  /* 0053c258 fld dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); FPUSH((double)MF32(m_)); }
  /* 0053c25e fsub dword ptr [edi + 0x1e0] */ { const u32 m_ = (u32)(edi + 0x1e0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053c264 fcomp dword ptr [0x656e54] */ { const u32 m_ = (u32)(0x656e54u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0053c26a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053c26c test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053c26f jne 0x53c290 */ if (!ZF_) goto L_0053c290;
  /* 0053c271 mov ecx, dword ptr [edi + 0x1dc] */ { const u32 m_ = (u32)(edi + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 0053c277 mov edx, dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); edx = (u32)(M32(m_)); }
  /* 0053c27d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053c27f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053c281 sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 0053c284 mov dword ptr [edi + 0x1e0], edx */ { const u32 m_ = (u32)(edi + 0x1e0u); M32(m_) = (u32)(edx); }
  /* 0053c28a mov dword ptr [edi + 0x1dc], eax */ { const u32 m_ = (u32)(edi + 0x1dcu); M32(m_) = (u32)(eax); }
L_0053c290:;
  /* 0053c290 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053c291 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053c292 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053c293 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053c295 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053c296 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0053c2a0(CPU *c) {
  NATIVE_HOOK(0x53c2a0u) REGS; LOADALL;
L_0053c2a0:;
  /* 0053c2a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0053c2a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0053c2a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053c2a5 push 0x624328 */ { u32 v_ = 0x624328u; esp -= 4; M32(esp) = v_; }
  /* 0053c2aa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0053c2b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053c2b1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0053c2b8 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053c2bb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053c2bc mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0053c2be mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0053c2c1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053c2c3 jne 0x53c2d8 */ if (!ZF_) goto L_0053c2d8;
  /* 0053c2c5 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0053c2c7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053c2c8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053c2cb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0053c2d2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053c2d4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053c2d5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0053c2d8:;
  /* 0053c2d8 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053c2da push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053c2db push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053c2dc call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53c2dfu; SAVEALL; call_ind(c, t_); RETCHK(0x53c2dfu, 0x53c2dcu); LOADALL; }
  /* 0053c2df push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 0053c2e4 mov edi, eax */ { edi = (u32)(eax); }
  /* 0053c2e6 call 0x560fd0 */ esp -= 4; M32(esp) = 0x53c2ebu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x53c2e6u); RETCHK(0x53c2ebu, 0x53c2e6u); LOADALL;
  /* 0053c2eb mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0053c2ee fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0053c2f1 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 0053c2f6 mov eax, edi */ { eax = (u32)(edi); }
  /* 0053c2f8 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053c2fb call 0x560fd0 */ esp -= 4; M32(esp) = 0x53c300u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x53c2fbu); RETCHK(0x53c300u, 0x53c2fbu); LOADALL;
  /* 0053c300 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0053c303 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0053c306 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 0053c30b mov eax, edi */ { eax = (u32)(edi); }
  /* 0053c30d fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053c310 call 0x560fd0 */ esp -= 4; M32(esp) = 0x53c315u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x53c310u); RETCHK(0x53c315u, 0x53c310u); LOADALL;
  /* 0053c315 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0053c318 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0053c31b push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 0053c320 mov eax, edi */ { eax = (u32)(edi); }
  /* 0053c322 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053c325 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053c328 call 0x560fd0 */ esp -= 4; M32(esp) = 0x53c32du; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x53c328u); RETCHK(0x53c32du, 0x53c328u); LOADALL;
  /* 0053c32d mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0053c330 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0053c333 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0053c336 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053c338 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053c33b fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053c33e je 0x53c34c */ if (ZF_) goto L_0053c34c;
  /* 0053c340 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053c341 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0053c344 call 0x52d060 */ esp -= 4; M32(esp) = 0x53c349u; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x53c344u); RETCHK(0x53c349u, 0x53c344u); LOADALL;
  /* 0053c349 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053c34c:;
  /* 0053c34c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053c34d mov eax, 0x650194 */ { eax = (u32)(0x650194u); }
  /* 0053c352 call 0x560ed0 */ esp -= 4; M32(esp) = 0x53c357u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x53c352u); RETCHK(0x53c357u, 0x53c352u); LOADALL;
  /* 0053c357 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053c358 call 0x5fe92e */ esp -= 4; M32(esp) = 0x53c35du; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x53c358u); RETCHK(0x53c35du, 0x53c358u); LOADALL;
  /* 0053c35d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053c360 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0053c363 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053c364 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 0053c369 call 0x560ed0 */ esp -= 4; M32(esp) = 0x53c36eu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x53c369u); RETCHK(0x53c36eu, 0x53c369u); LOADALL;
  /* 0053c36e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053c370 mov dword ptr [ebp - 0x20], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xfu); }
  /* 0053c377 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 0053c37e mov byte ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)(0x0u); }
  /* 0053c382 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
L_0053c385:;
  /* 0053c385 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053c387 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0053c388 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053c38a jne 0x53c385 */ if (!ZF_) goto L_0053c385;
  /* 0053c38c sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0053c38e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053c38f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053c390 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0053c393 call 0x404420 */ esp -= 4; M32(esp) = 0x53c398u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53c393u); RETCHK(0x53c398u, 0x53c393u); LOADALL;
  /* 0053c398 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053c399 mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 0053c39e mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0053c3a5 call 0x560ed0 */ esp -= 4; M32(esp) = 0x53c3aau; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x53c3a5u); RETCHK(0x53c3aau, 0x53c3a5u); LOADALL;
  /* 0053c3aa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053c3ab lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0053c3ae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053c3af push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053c3b0 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0053c3b3 call 0x539b60 */ esp -= 4; M32(esp) = 0x53c3b8u; SAVEALL; F_00539b60(c); ABI_CHECK(0x539b60u, 0x53c3b3u); RETCHK(0x53c3b8u, 0x53c3b3u); LOADALL;
  /* 0053c3b8 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0053c3ba cmp dword ptr [ebp - 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053c3be pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053c3bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053c3c0 jb 0x53c3ce */ if (CF_) goto L_0053c3ce;
  /* 0053c3c2 mov edx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edx = (u32)(M32(m_)); }
  /* 0053c3c5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053c3c6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53c3cbu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53c3c6u); RETCHK(0x53c3cbu, 0x53c3c6u); LOADALL;
  /* 0053c3cb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053c3ce:;
  /* 0053c3ce mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053c3d1 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 0053c3d3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053c3d4 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0053c3db mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053c3dd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053c3de ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0053c3f0(CPU *c) {
  NATIVE_HOOK(0x53c3f0u) REGS; LOADALL;
L_0053c3f0:;
  /* 0053c3f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0053c3f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0053c3f3 mov ecx, dword ptr [eax + 0x190] */ { const u32 m_ = (u32)(eax + 0x190u); ecx = (u32)(M32(m_)); }
  /* 0053c3f9 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053c3fb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053c3fc jmp dword ptr [edx + 0x60] */ { const u32 m_ = (u32)(edx + 0x60u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0053c400(CPU *c) {
  NATIVE_HOOK(0x53c400u) REGS; LOADALL;
L_0053c400:;
  /* 0053c400 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053c401 mov ebx, dword ptr [esi + 0x1bc] */ { const u32 m_ = (u32)(esi + 0x1bcu); ebx = (u32)(M32(m_)); }
  /* 0053c407 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053c409 je 0x53c455 */ if (ZF_) goto L_0053c455;
  /* 0053c40b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053c40d mov dword ptr [esi + 0x1c0], eax */ { const u32 m_ = (u32)(esi + 0x1c0u); M32(m_) = (u32)(eax); }
  /* 0053c413 jne 0x53c42e */ if (!ZF_) goto L_0053c42e;
  /* 0053c415 push 0x644290 */ { u32 v_ = 0x644290u; esp -= 4; M32(esp) = v_; }
  /* 0053c41a call 0x50dc70 */ esp -= 4; M32(esp) = 0x53c41fu; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x53c41au); RETCHK(0x53c41fu, 0x53c41au); LOADALL;
  /* 0053c41f mov ecx, dword ptr [esi + 0x1bc] */ { const u32 m_ = (u32)(esi + 0x1bcu); ecx = (u32)(M32(m_)); }
  /* 0053c425 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053c427 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053c429 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53c42cu; SAVEALL; call_ind(c, t_); RETCHK(0x53c42cu, 0x53c429u); LOADALL; }
  /* 0053c42c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053c42d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0053c42e:;
  /* 0053c42e cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053c431 jne 0x53c44c */ if (!ZF_) goto L_0053c44c;
  /* 0053c433 push 0x644278 */ { u32 v_ = 0x644278u; esp -= 4; M32(esp) = v_; }
  /* 0053c438 call 0x50dc70 */ esp -= 4; M32(esp) = 0x53c43du; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x53c438u); RETCHK(0x53c43du, 0x53c438u); LOADALL;
  /* 0053c43d mov ecx, dword ptr [esi + 0x1bc] */ { const u32 m_ = (u32)(esi + 0x1bcu); ecx = (u32)(M32(m_)); }
  /* 0053c443 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053c445 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053c447 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53c44au; SAVEALL; call_ind(c, t_); RETCHK(0x53c44au, 0x53c447u); LOADALL; }
  /* 0053c44a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053c44b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0053c44c:;
  /* 0053c44c mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0053c44e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053c450 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0053c452 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53c455u; SAVEALL; call_ind(c, t_); RETCHK(0x53c455u, 0x53c452u); LOADALL; }
L_0053c455:;
  /* 0053c455 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053c456 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0053c460(CPU *c) {
  NATIVE_HOOK(0x53c460u) REGS; LOADALL;
L_0053c460:;
  /* 0053c460 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0053c462 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0053c465 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0053c467 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0053c46a mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0053c46d mov dword ptr [eax + 0xc], 0x3f000000 */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(0x3f000000u); }
  /* 0053c474 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0053c477 mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0053c47a mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0053c47d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0053c480(CPU *c) {
  NATIVE_HOOK(0x53c480u) REGS; LOADALL;
L_0053c480:;
  /* 0053c480 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0053c483 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053c485 je 0x53c497 */ if (ZF_) goto L_0053c497;
  /* 0053c487 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053c488 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x53c48du; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x53c488u); RETCHK(0x53c48du, 0x53c488u); LOADALL;
  /* 0053c48d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053c490 mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
L_0053c497:;
  /* 0053c497 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0053c49a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053c49c je 0x53c4ae */ if (ZF_) goto L_0053c4ae;
  /* 0053c49e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053c49f call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x53c4a4u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x53c49fu); RETCHK(0x53c4a4u, 0x53c49fu); LOADALL;
  /* 0053c4a4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053c4a7 mov dword ptr [esi + 0x1c], 0 */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(0x0u); }
L_0053c4ae:;
  /* 0053c4ae mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0053c4b1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053c4b3 je 0x53c4c5 */ if (ZF_) goto L_0053c4c5;
  /* 0053c4b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053c4b6 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x53c4bbu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x53c4b6u); RETCHK(0x53c4bbu, 0x53c4b6u); LOADALL;
  /* 0053c4bb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053c4be mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
L_0053c4c5:;
  /* 0053c4c5 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053c4c7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0053c4d0(CPU *c) {
  NATIVE_HOOK(0x53c4d0u) REGS; LOADALL;
L_0053c4d0:;
  /* 0053c4d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0053c4d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0053c4d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053c4d4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0053c4d7 call 0x53c4e0 */ esp -= 4; M32(esp) = 0x53c4dcu; SAVEALL; F_0053c4e0(c); ABI_CHECK(0x53c4e0u, 0x53c4d7u); RETCHK(0x53c4dcu, 0x53c4d7u); LOADALL;
  /* 0053c4dc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053c4dd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0053c4e0(CPU *c) {
  NATIVE_HOOK(0x53c4e0u) REGS; LOADALL;
L_0053c4e0:;
  /* 0053c4e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0053c4e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0053c4e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053c4e4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053c4e5 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0053c4e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053c4e9 lea edi, [ebx*8] */ edi = (u32)((u32)(ebx * 8u));
  /* 0053c4f0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053c4f1 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0053c4f3 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0053c4f6 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x53c4fbu; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x53c4f6u); RETCHK(0x53c4fbu, 0x53c4f6u); LOADALL;
  /* 0053c4fb lea ecx, [ebx + ebx*2] */ ecx = (u32)((u32)(ebx + ebx * 2u));
  /* 0053c4fe shl ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0053c501 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053c502 mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0053c505 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x53c50au; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x53c505u); RETCHK(0x53c50au, 0x53c505u); LOADALL;
  /* 0053c50a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053c50b mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0053c50e call 0x5fe9ce */ esp -= 4; M32(esp) = 0x53c513u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x53c50eu); RETCHK(0x53c513u, 0x53c50eu); LOADALL;
  /* 0053c513 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053c516 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0053c518 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053c51a mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0053c51d jle 0x53c593 */ if ((ZF_|LT_)) goto L_0053c593;
  /* 0053c51f xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0053c521:;
  /* 0053c521 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0053c523 mov eax, dword ptr [edx + edi*4] */ { const u32 m_ = (u32)(edx + edi * 4u); eax = (u32)(M32(m_)); }
  /* 0053c526 mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 0053c529 lea ecx, [edi*8] */ ecx = (u32)((u32)(edi * 8u));
  /* 0053c530 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0053c533 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0053c535 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0053c537 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0053c53a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053c53b call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53c53eu; SAVEALL; call_ind(c, t_); RETCHK(0x53c53eu, 0x53c53bu); LOADALL; }
  /* 0053c53e mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0053c540 mov ecx, dword ptr [eax + edi*4] */ { const u32 m_ = (u32)(eax + edi * 4u); ecx = (u32)(M32(m_)); }
  /* 0053c543 mov eax, dword ptr [ecx + 0x1e4] */ { const u32 m_ = (u32)(ecx + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 0053c549 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0053c54c mov dword ptr [ebx + edx], eax */ { const u32 m_ = (u32)(ebx + edx); M32(m_) = (u32)(eax); }
  /* 0053c54f mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0053c551 mov edx, dword ptr [ecx + edi*4] */ { const u32 m_ = (u32)(ecx + edi * 4u); edx = (u32)(M32(m_)); }
  /* 0053c554 mov ecx, dword ptr [edx + 0x1e8] */ { const u32 m_ = (u32)(edx + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 0053c55a mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0053c55d mov dword ptr [ebx + eax + 4], ecx */ { const u32 m_ = (u32)(ebx + eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0053c561 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0053c563 mov eax, dword ptr [edx + edi*4] */ { const u32 m_ = (u32)(edx + edi * 4u); eax = (u32)(M32(m_)); }
  /* 0053c566 mov edx, dword ptr [eax + 0x1ec] */ { const u32 m_ = (u32)(eax + 0x1ecu); edx = (u32)(M32(m_)); }
  /* 0053c56c mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0053c56f mov dword ptr [ebx + ecx + 8], edx */ { const u32 m_ = (u32)(ebx + ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0053c573 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0053c576 mov dword ptr [eax + edi*8], 0 */ { const u32 m_ = (u32)(eax + edi * 8u); M32(m_) = (u32)(0x0u); }
  /* 0053c57d mov ecx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0053c580 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0053c583 mov dword ptr [ecx + edi*8 + 4], 0 */ { const u32 m_ = (u32)(ecx + edi * 8u + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0053c58b inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0053c58c add ebx, 0xc */ { u32 a_ = ebx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0053c58f cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053c591 jl 0x53c521 */ if (LT_) goto L_0053c521;
L_0053c593:;
  /* 0053c593 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053c594 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053c595 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053c597 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053c598 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0053c5a0(CPU *c) {
  NATIVE_HOOK(0x53c5a0u) REGS; LOADALL;
L_0053c5a0:;
  /* 0053c5a0 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0053c5a3 lea eax, [eax + eax*2] */ eax = (u32)((u32)(eax + eax * 2u));
  /* 0053c5a6 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0053c5a9 mov dword ptr [eax + edx], 1 */ { const u32 m_ = (u32)(eax + edx); M32(m_) = (u32)(0x1u); }
  /* 0053c5b0 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0053c5b3 mov dword ptr [edx + eax + 8], esi */ { const u32 m_ = (u32)(edx + eax + 0x8u); M32(m_) = (u32)(esi); }
  /* 0053c5b7 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0053c5ba mov dword ptr [ecx + eax + 4], 0 */ { const u32 m_ = (u32)(ecx + eax + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0053c5c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
