#include "funcs.h"

void F_00549a80(CPU *c) {
  NATIVE_HOOK(0x549a80u) REGS; LOADALL;
L_00549a80:;
  /* 00549a80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00549a81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00549a83 mov ecx, dword ptr [0x7a6e04] */ { const u32 m_ = (u32)(0x7a6e04u); ecx = (u32)(M32(m_)); }
  /* 00549a89 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00549a8c mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00549a8f mov dword ptr [edx + ecx*4], eax */ { const u32 m_ = (u32)(edx + ecx * 4u); M32(m_) = (u32)(eax); }
  /* 00549a92 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00549a93 mov dword ptr [0x7a6e04], ecx */ { const u32 m_ = (u32)(0x7a6e04u); M32(m_) = (u32)(ecx); }
  /* 00549a99 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00549a9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00549aa0(CPU *c) {
  NATIVE_HOOK(0x549aa0u) REGS; LOADALL;
L_00549aa0:;
  /* 00549aa0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00549aa1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00549aa3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00549aa5 push 0x656fc8 */ { u32 v_ = 0x656fc8u; esp -= 4; M32(esp) = v_; }
  /* 00549aaa push 0x5fee56 */ { u32 v_ = 0x5fee56u; esp -= 4; M32(esp) = v_; }
  /* 00549aaf mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00549ab5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549ab6 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00549abd sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549ac0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00549ac1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00549ac2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549ac3 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 00549ac6 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00549ac8 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00549acb mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00549ace cmp dword ptr [edi + 0x18], ebx */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00549ad1 je 0x549bcc */ if (ZF_) goto L_00549bcc;
  /* 00549ad7 mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00549ada mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00549add add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00549ae0 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00549ae3 call 0x547680 */ esp -= 4; M32(esp) = 0x549ae8u; SAVEALL; F_00547680(c); ABI_CHECK(0x547680u, 0x549ae3u); RETCHK(0x549ae8u, 0x549ae3u); LOADALL;
  /* 00549ae8 mov dword ptr [0x7a6e04], ebx */ { const u32 m_ = (u32)(0x7a6e04u); M32(m_) = (u32)(ebx); }
  /* 00549aee push 0x7a4f40 */ { u32 v_ = 0x7a4f40u; esp -= 4; M32(esp) = v_; }
  /* 00549af3 push 0x549a80 */ { u32 v_ = 0x549a80u; esp -= 4; M32(esp) = v_; }
  /* 00549af8 mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00549afb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00549afc call 0x577da0 */ esp -= 4; M32(esp) = 0x549b01u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x549afcu); RETCHK(0x549b01u, 0x549afcu); LOADALL;
  /* 00549b01 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549b04 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_00549b06:;
  /* 00549b06 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 00549b09 cmp esi, dword ptr [0x7a6e04] */ { const u32 m_ = (u32)(0x7a6e04u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00549b0f jge 0x549b5c */ if (!LT_) goto L_00549b5c;
  /* 00549b11 mov edx, dword ptr [esi*4 + 0x7a4f40] */ { const u32 m_ = (u32)(esi * 4u + 0x7a4f40u); edx = (u32)(M32(m_)); }
  /* 00549b18 mov edi, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); edi = (u32)(M32(m_)); }
  /* 00549b1b mov dword ptr [ebp - 0x28], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edi); }
  /* 00549b1e mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 00549b21 mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 00549b23 mov dword ptr [ebp - 0x2c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ebx); }
  /* 00549b26 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00549b27 call 0x5e1c80 */ esp -= 4; M32(esp) = 0x549b2cu; SAVEALL; F_005e1c80(c); ABI_CHECK(0x5e1c80u, 0x549b27u); RETCHK(0x549b2cu, 0x549b27u); LOADALL;
  /* 00549b2c mov dword ptr [esi*4 + 0x7a4ec8], eax */ { const u32 m_ = (u32)(esi * 4u + 0x7a4ec8u); M32(m_) = (u32)(eax); }
  /* 00549b33 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00549b35 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00549b36 call 0x5e1b00 */ esp -= 4; M32(esp) = 0x549b3bu; SAVEALL; F_005e1b00(c); ABI_CHECK(0x5e1b00u, 0x549b36u); RETCHK(0x549b3bu, 0x549b36u); LOADALL;
  /* 00549b3b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549b3e mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00549b41 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 00549b44 mov dword ptr [esi*4 + 0x7a4fb8], eax */ { const u32 m_ = (u32)(esi * 4u + 0x7a4fb8u); M32(m_) = (u32)(eax); }
  /* 00549b4b and eax, 0xffffff0b */ { u32 a_ = eax, b_ = 0xffffff0bu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00549b50 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 00549b53 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00549b56 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00549b57 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00549b5a jmp 0x549b06 */ goto L_00549b06;
L_00549b5c:;
  /* 00549b5c mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00549b5f mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00549b62 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00549b63 call 0x5ac470 */ esp -= 4; M32(esp) = 0x549b68u; SAVEALL; F_005ac470(c); ABI_CHECK(0x5ac470u, 0x549b63u); RETCHK(0x549b68u, 0x549b63u); LOADALL;
  /* 00549b68 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00549b6a mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00549b6d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549b6e mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00549b71 call 0x547700 */ esp -= 4; M32(esp) = 0x549b76u; SAVEALL; F_00547700(c); ABI_CHECK(0x547700u, 0x549b71u); RETCHK(0x549b76u, 0x549b71u); LOADALL;
  /* 00549b76 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549b79 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_00549b7b:;
  /* 00549b7b mov dword ptr [ebp - 0x24], esi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(esi); }
  /* 00549b7e cmp esi, dword ptr [0x7a6e04] */ { const u32 m_ = (u32)(0x7a6e04u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00549b84 jge 0x549bcc */ if (!LT_) goto L_00549bcc;
  /* 00549b86 mov ecx, dword ptr [esi*4 + 0x7a4f40] */ { const u32 m_ = (u32)(esi * 4u + 0x7a4f40u); ecx = (u32)(M32(m_)); }
  /* 00549b8d mov eax, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); eax = (u32)(M32(m_)); }
  /* 00549b90 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 00549b93 mov edx, dword ptr [esi*4 + 0x7a4fb8] */ { const u32 m_ = (u32)(esi * 4u + 0x7a4fb8u); edx = (u32)(M32(m_)); }
  /* 00549b9a mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 00549b9d mov eax, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); eax = (u32)(M32(m_)); }
  /* 00549ba0 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00549ba2 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 00549ba5 mov ecx, dword ptr [esi*4 + 0x7a4ec8] */ { const u32 m_ = (u32)(esi * 4u + 0x7a4ec8u); ecx = (u32)(M32(m_)); }
  /* 00549bac push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00549bad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549bae call 0x5e1b00 */ esp -= 4; M32(esp) = 0x549bb3u; SAVEALL; F_005e1b00(c); ABI_CHECK(0x5e1b00u, 0x549baeu); RETCHK(0x549bb3u, 0x549baeu); LOADALL;
  /* 00549bb3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549bb6 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00549bb7 jmp 0x549b7b */ goto L_00549b7b;
L_00549bcc:;
  /* 00549bcc mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00549bd3 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00549bd6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00549bdd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00549bde pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00549bdf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00549be0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00549be2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00549be3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00549bb9(CPU *c) {
  NATIVE_HOOK(0x549bb9u) REGS; LOADALL;
L_00549bb9:;
  /* 00549bb9 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00549bbe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00549bbf(CPU *c) {
  NATIVE_HOOK(0x549bbfu) REGS; LOADALL;
L_00549bbf:;
  /* 00549bbf mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 00549bc2 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00549bc5 mov dword ptr [edx + 0x18], 0 */ { const u32 m_ = (u32)(edx + 0x18u); M32(m_) = (u32)(0x0u); }
  /* 00549bcc mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00549bd3 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00549bd6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00549bdd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00549bde pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00549bdf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00549be0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00549be2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00549be3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00549bf0(CPU *c) {
  NATIVE_HOOK(0x549bf0u) REGS; LOADALL;
L_00549bf0:;
  /* 00549bf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00549bf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00549bf3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00549bf5 push 0x656fb8 */ { u32 v_ = 0x656fb8u; esp -= 4; M32(esp) = v_; }
  /* 00549bfa push 0x5fee56 */ { u32 v_ = 0x5fee56u; esp -= 4; M32(esp) = v_; }
  /* 00549bff mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00549c05 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549c06 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00549c0d sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549c10 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00549c11 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00549c12 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549c13 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 00549c16 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00549c19 wait */ ;
  /* 00549c1a mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00549c21 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 00549c24 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549c26 je 0x549d06 */ if (ZF_) goto L_00549d06;
  /* 00549c2c mov dword ptr [ebp - 0x1c], 0x41400000 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x41400000u); }
  /* 00549c33 mov dword ptr [ebp - 0x20], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x1u); }
  /* 00549c3a mov dword ptr [ebp - 0x24], 0x3ecccccd */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x3ecccccdu); }
  /* 00549c41 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00549c44 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00549c47 add eax, 0x40 */ { u32 a_ = eax, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00549c4a mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 00549c4d mov dword ptr [ebp - 0x3c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0x4u); }
  /* 00549c54 mov dword ptr [ebp - 0x30], 0x40400000 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0x40400000u); }
  /* 00549c5b mov dword ptr [ebp - 0x34], 0x40400000 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x40400000u); }
  /* 00549c62 mov dword ptr [ebp - 0x38], 0x40400000 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x40400000u); }
  /* 00549c69 mov dword ptr [ebp - 0x34], 0x40400000 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x40400000u); }
  /* 00549c70 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 00549c72 fadd dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00549c78 fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00549c7b fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00549c7e fadd dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00549c84 fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00549c87 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00549c8a fadd dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00549c90 fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00549c93 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 00549c95 fsub dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00549c9b fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00549c9e fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00549ca1 fsub dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00549ca7 fstp dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00549caa fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00549cad fsub dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00549cb3 fstp dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00549cb6 fld dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)MF32(m_)); }
  /* 00549cb9 fsub dword ptr [0x656ef0] */ { const u32 m_ = (u32)(0x656ef0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00549cbf fstp dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00549cc2 mov dword ptr [ebp - 0x2c], 0x41400000 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x41400000u); }
  /* 00549cc9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00549ccb push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 00549ccd mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00549cd3 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x549cd6u; SAVEALL; call_ind(c, t_); RETCHK(0x549cd6u, 0x549cd3u); LOADALL; }
  /* 00549cd6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00549cd8 push 0x41400000 */ { u32 v_ = 0x41400000u; esp -= 4; M32(esp) = v_; }
  /* 00549cdd push 0x3ecccccd */ { u32 v_ = 0x3ecccccdu; esp -= 4; M32(esp) = v_; }
  /* 00549ce2 lea edx, [ebp - 0x54] */ edx = (u32)((u32)(ebp + 0xffffffacu));
  /* 00549ce5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00549ce6 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 00549ce9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549cea mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00549ced push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00549cee mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00549cf1 call 0x547b20 */ esp -= 4; M32(esp) = 0x549cf6u; SAVEALL; F_00547b20(c); ABI_CHECK(0x547b20u, 0x549cf1u); RETCHK(0x549cf6u, 0x549cf1u); LOADALL;
  /* 00549cf6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00549cf8 push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 00549cfa mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00549d00 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x549d03u; SAVEALL; call_ind(c, t_); RETCHK(0x549d03u, 0x549d00u); LOADALL; }
  /* 00549d03 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00549d06:;
  /* 00549d06 wait */ ;
  /* 00549d07 jmp 0x549d1c */ goto L_00549d1c;
L_00549d1c:;
  /* 00549d1c mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00549d23 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00549d26 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00549d2d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00549d2e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00549d2f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00549d30 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00549d32 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00549d33 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00549d09(CPU *c) {
  NATIVE_HOOK(0x549d09u) REGS; LOADALL;
L_00549d09:;
  /* 00549d09 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00549d0e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00549d0f(CPU *c) {
  NATIVE_HOOK(0x549d0fu) REGS; LOADALL;
L_00549d0f:;
  /* 00549d0f mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 00549d12 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00549d15 mov dword ptr [eax + 0x18], 0 */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(0x0u); }
  /* 00549d1c mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00549d23 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00549d26 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00549d2d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00549d2e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00549d2f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00549d30 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00549d32 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00549d33 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00549d40(CPU *c) {
  NATIVE_HOOK(0x549d40u) REGS; LOADALL;
L_00549d40:;
  /* 00549d40 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00549d43 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549d45 je 0x549d74 */ if (ZF_) goto L_00549d74;
  /* 00549d47 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549d48 call 0x57b220 */ esp -= 4; M32(esp) = 0x549d4du; SAVEALL; F_0057b220(c); ABI_CHECK(0x57b220u, 0x549d48u); RETCHK(0x549d4du, 0x549d48u); LOADALL;
  /* 00549d4d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549d50 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549d52 je 0x549d61 */ if (ZF_) goto L_00549d61;
  /* 00549d54 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00549d57 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00549d58 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549d59 call 0x57b1a0 */ esp -= 4; M32(esp) = 0x549d5eu; SAVEALL; F_0057b1a0(c); ABI_CHECK(0x57b1a0u, 0x549d59u); RETCHK(0x549d5eu, 0x549d59u); LOADALL;
  /* 00549d5e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00549d61:;
  /* 00549d61 mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 00549d64 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00549d65 call 0x57d320 */ esp -= 4; M32(esp) = 0x549d6au; SAVEALL; F_0057d320(c); ABI_CHECK(0x57d320u, 0x549d65u); RETCHK(0x549d6au, 0x549d65u); LOADALL;
  /* 00549d6a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549d6d mov dword ptr [edi + 0xc], 0 */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(0x0u); }
L_00549d74:;
  /* 00549d74 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00549d77 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549d79 je 0x549da6 */ if (ZF_) goto L_00549da6;
  /* 00549d7b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549d7c call 0x57ad70 */ esp -= 4; M32(esp) = 0x549d81u; SAVEALL; F_0057ad70(c); ABI_CHECK(0x57ad70u, 0x549d7cu); RETCHK(0x549d81u, 0x549d7cu); LOADALL;
  /* 00549d81 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549d84 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549d86 je 0x549d95 */ if (ZF_) goto L_00549d95;
  /* 00549d88 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00549d8b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00549d8c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549d8d call 0x57ad40 */ esp -= 4; M32(esp) = 0x549d92u; SAVEALL; F_0057ad40(c); ABI_CHECK(0x57ad40u, 0x549d8du); RETCHK(0x549d92u, 0x549d8du); LOADALL;
  /* 00549d92 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00549d95:;
  /* 00549d95 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00549d96 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00549d99 call 0x547560 */ esp -= 4; M32(esp) = 0x549d9eu; SAVEALL; F_00547560(c); ABI_CHECK(0x547560u, 0x549d99u); RETCHK(0x549d9eu, 0x549d99u); LOADALL;
  /* 00549d9e mov dword ptr [edi + 4], 0 */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 00549da5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00549da6:;
  /* 00549da6 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00549da9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549dab je 0x549db9 */ if (ZF_) goto L_00549db9;
  /* 00549dad call 0x547770 */ esp -= 4; M32(esp) = 0x549db2u; SAVEALL; F_00547770(c); ABI_CHECK(0x547770u, 0x549dadu); RETCHK(0x549db2u, 0x549dadu); LOADALL;
  /* 00549db2 mov dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(0x0u); }
L_00549db9:;
  /* 00549db9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00549dc0(CPU *c) {
  NATIVE_HOOK(0x549dc0u) REGS; LOADALL;
L_00549dc0:;
  /* 00549dc0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00549dc1 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00549dc3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549dc4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00549dc6 mov dword ptr [edx], esi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(esi); }
  /* 00549dc8 mov dword ptr [edx + 4], esi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(esi); }
  /* 00549dcb mov dword ptr [edx + 0x10], esi */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(esi); }
  /* 00549dce mov dword ptr [edx + 0x1c], esi */ { const u32 m_ = (u32)(edx + 0x1cu); M32(m_) = (u32)(esi); }
  /* 00549dd1 mov dword ptr [edx + 0x24], esi */ { const u32 m_ = (u32)(edx + 0x24u); M32(m_) = (u32)(esi); }
  /* 00549dd4 mov dword ptr [edx + 0x28], esi */ { const u32 m_ = (u32)(edx + 0x28u); M32(m_) = (u32)(esi); }
  /* 00549dd7 mov dword ptr [edx + 0x2c], esi */ { const u32 m_ = (u32)(edx + 0x2cu); M32(m_) = (u32)(esi); }
  /* 00549dda mov dword ptr [edx + 0x30], esi */ { const u32 m_ = (u32)(edx + 0x30u); M32(m_) = (u32)(esi); }
  /* 00549ddd mov dword ptr [edx + 0x20], esi */ { const u32 m_ = (u32)(edx + 0x20u); M32(m_) = (u32)(esi); }
  /* 00549de0 mov dword ptr [edx + 0x150], esi */ { const u32 m_ = (u32)(edx + 0x150u); M32(m_) = (u32)(esi); }
  /* 00549de6 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 00549deb lea edi, [edx + 0x154] */ edi = (u32)((u32)(edx + 0x154u));
  /* 00549df1 mov dword ptr [edx + 8], 0x3f800000 */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(0x3f800000u); }
  /* 00549df8 mov dword ptr [edx + 0x14], 1 */ { const u32 m_ = (u32)(edx + 0x14u); M32(m_) = (u32)(0x1u); }
  /* 00549dff rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00549e01 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00549e02 mov dword ptr [edx + 0x194], esi */ { const u32 m_ = (u32)(edx + 0x194u); M32(m_) = (u32)(esi); }
  /* 00549e08 mov dword ptr [edx + 0x198], esi */ { const u32 m_ = (u32)(edx + 0x198u); M32(m_) = (u32)(esi); }
  /* 00549e0e mov eax, edx */ { eax = (u32)(edx); }
  /* 00549e10 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00549e11 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00549e20(CPU *c) {
  NATIVE_HOOK(0x549e20u) REGS; LOADALL;
L_00549e20:;
  /* 00549e20 call 0x5fe77c */ esp -= 4; M32(esp) = 0x549e25u; SAVEALL; F_005fe77c(c); ABI_CHECK(0x5fe77cu, 0x549e20u); RETCHK(0x549e25u, 0x549e20u); LOADALL;
  /* 00549e25 mov eax, dword ptr [0x7a6e08] */ { const u32 m_ = (u32)(0x7a6e08u); eax = (u32)(M32(m_)); }
  /* 00549e2a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549e2c jne 0x549e7b */ if (!ZF_) goto L_00549e7b;
  /* 00549e2e mov dword ptr [0x7a6e08], 0 */ { const u32 m_ = (u32)(0x7a6e08u); M32(m_) = (u32)(0x0u); }
  /* 00549e38 call 0x5b96b0 */ esp -= 4; M32(esp) = 0x549e3du; SAVEALL; F_005b96b0(c); ABI_CHECK(0x5b96b0u, 0x549e38u); RETCHK(0x549e3du, 0x549e38u); LOADALL;
  /* 00549e3d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549e3f je 0x549e48 */ if (ZF_) goto L_00549e48;
  /* 00549e41 or dword ptr [0x7a6e08], 1 */ { const u32 m_ = (u32)(0x7a6e08u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_00549e48:;
  /* 00549e48 call 0x5b9710 */ esp -= 4; M32(esp) = 0x549e4du; SAVEALL; F_005b9710(c); ABI_CHECK(0x5b9710u, 0x549e48u); RETCHK(0x549e4du, 0x549e48u); LOADALL;
  /* 00549e4d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549e4f je 0x549e58 */ if (ZF_) goto L_00549e58;
  /* 00549e51 or dword ptr [0x7a6e08], 2 */ { const u32 m_ = (u32)(0x7a6e08u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_00549e58:;
  /* 00549e58 call 0x5b9770 */ esp -= 4; M32(esp) = 0x549e5du; SAVEALL; F_005b9770(c); ABI_CHECK(0x5b9770u, 0x549e58u); RETCHK(0x549e5du, 0x549e58u); LOADALL;
  /* 00549e5d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549e5f je 0x549e68 */ if (ZF_) goto L_00549e68;
  /* 00549e61 or dword ptr [0x7a6e08], 4 */ { const u32 m_ = (u32)(0x7a6e08u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_00549e68:;
  /* 00549e68 call 0x5b97d0 */ esp -= 4; M32(esp) = 0x549e6du; SAVEALL; F_005b97d0(c); ABI_CHECK(0x5b97d0u, 0x549e68u); RETCHK(0x549e6du, 0x549e68u); LOADALL;
  /* 00549e6d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549e6f je 0x549e7b */ if (ZF_) goto L_00549e7b;
  /* 00549e71 or dword ptr [0x7a6e08], 0x10000 */ { const u32 m_ = (u32)(0x7a6e08u); u32 a_ = M32(m_), b_ = 0x10000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_00549e7b:;
  /* 00549e7b mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00549e80 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00549e90(CPU *c) {
  NATIVE_HOOK(0x549e90u) REGS; LOADALL;
L_00549e90:;
  /* 00549e90 jmp 0x5fe782 */ goto L_005fe782;
L_005fe782:;
  /* 005fe782 jmp dword ptr [0x62e028] */ { const u32 m_ = (u32)(0x62e028u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00549ea0(CPU *c) {
  NATIVE_HOOK(0x549ea0u) REGS; LOADALL;
L_00549ea0:;
  /* 00549ea0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00549ea1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00549ea3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549ea4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00549ea6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00549ea8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00549eaa push 0x73646976 */ { u32 v_ = 0x73646976u; esp -= 4; M32(esp) = v_; }
  /* 00549eaf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00549eb0 lea edi, [esi + 0x2c] */ edi = (u32)((u32)(esi + 0x2cu));
  /* 00549eb3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549eb4 mov dword ptr [esi + 0x20], 0 */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(0x0u); }
  /* 00549ebb call 0x5fe788 */ esp -= 4; M32(esp) = 0x549ec0u; SAVEALL; F_005fe788(c); ABI_CHECK(0x5fe788u, 0x549ebbu); RETCHK(0x549ec0u, 0x549ebbu); LOADALL;
  /* 00549ec0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549ec2 jne 0x549f76 */ if (!ZF_) goto L_00549f76;
  /* 00549ec8 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 00549eca push 0x8c */ { u32 v_ = 0x8cu; esp -= 4; M32(esp) = v_; }
  /* 00549ecf lea eax, [esi + 0x34] */ eax = (u32)((u32)(esi + 0x34u));
  /* 00549ed2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549ed3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00549ed4 call 0x5fe78e */ esp -= 4; M32(esp) = 0x549ed9u; SAVEALL; F_005fe78e(c); ABI_CHECK(0x5fe78eu, 0x549ed4u); RETCHK(0x549ed9u, 0x549ed4u); LOADALL;
  /* 00549ed9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549edb jne 0x549f76 */ if (!ZF_) goto L_00549f76;
  /* 00549ee1 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00549ee3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549ee4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00549ee5 call 0x5fe794 */ esp -= 4; M32(esp) = 0x549eeau; SAVEALL; F_005fe794(c); ABI_CHECK(0x5fe794u, 0x549ee5u); RETCHK(0x549eeau, 0x549ee5u); LOADALL;
  /* 00549eea test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549eec mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
  /* 00549eef je 0x549f76 */ if (ZF_) goto L_00549f76;
  /* 00549ef5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00549ef7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00549ef9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00549efb push 0x73647561 */ { u32 v_ = 0x73647561u; esp -= 4; M32(esp) = v_; }
  /* 00549f00 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00549f01 lea edi, [esi + 0x30] */ edi = (u32)((u32)(esi + 0x30u));
  /* 00549f04 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549f05 call 0x5fe788 */ esp -= 4; M32(esp) = 0x549f0au; SAVEALL; F_005fe788(c); ABI_CHECK(0x5fe788u, 0x549f05u); RETCHK(0x549f0au, 0x549f05u); LOADALL;
  /* 00549f0a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549f0c jne 0x549f22 */ if (!ZF_) goto L_00549f22;
  /* 00549f0e mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 00549f10 push 0x8c */ { u32 v_ = 0x8cu; esp -= 4; M32(esp) = v_; }
  /* 00549f15 lea eax, [esi + 0xc0] */ eax = (u32)((u32)(esi + 0xc0u));
  /* 00549f1b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549f1c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00549f1d call 0x5fe78e */ esp -= 4; M32(esp) = 0x549f22u; SAVEALL; F_005fe78e(c); ABI_CHECK(0x5fe78eu, 0x549f1du); RETCHK(0x549f22u, 0x549f1du); LOADALL;
L_00549f22:;
  /* 00549f22 cmp dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00549f25 je 0x549f31 */ if (ZF_) goto L_00549f31;
  /* 00549f27 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00549f2a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00549f2c call 0x54a510 */ esp -= 4; M32(esp) = 0x549f31u; SAVEALL; F_0054a510(c); ABI_CHECK(0x54a510u, 0x549f2cu); RETCHK(0x549f31u, 0x549f2cu); LOADALL;
L_00549f31:;
  /* 00549f31 mov edx, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); edx = (u32)(M32(m_)); }
  /* 00549f34 fild dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); FPUSH((double)(s32)M32(m_)); }
  /* 00549f37 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549f39 jge 0x549f41 */ if (!LT_) goto L_00549f41;
  /* 00549f3b fadd dword ptr [0x656f48] */ { const u32 m_ = (u32)(0x656f48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_00549f41:;
  /* 00549f41 mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 00549f44 fild dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); FPUSH((double)(s32)M32(m_)); }
  /* 00549f47 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549f49 jge 0x549f51 */ if (!LT_) goto L_00549f51;
  /* 00549f4b fadd dword ptr [0x656f48] */ { const u32 m_ = (u32)(0x656f48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_00549f51:;
  /* 00549f51 fdivp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) / s0_); FPOP(); }
  /* 00549f53 fstp dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00549f56 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00549f59 call 0x61b154 */ esp -= 4; M32(esp) = 0x549f5eu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x549f59u); RETCHK(0x549f5eu, 0x549f59u); LOADALL;
  /* 00549f5e mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00549f61 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549f62 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00549f63 call 0x5fe79a */ esp -= 4; M32(esp) = 0x549f68u; SAVEALL; F_005fe79a(c); ABI_CHECK(0x5fe79au, 0x549f63u); RETCHK(0x549f68u, 0x549f63u); LOADALL;
  /* 00549f68 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549f6a mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 00549f6d je 0x549f76 */ if (ZF_) goto L_00549f76;
  /* 00549f6f mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00549f72 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549f74 je 0x549f7d */ if (ZF_) goto L_00549f7d;
L_00549f76:;
  /* 00549f76 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00549f78 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00549f79 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00549f7a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00549f7d:;
  /* 00549f7d mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00549f80 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00549f83 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00549f85 mov edi, 0x20 */ { edi = (u32)(0x20u); }
  /* 00549f8a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549f8b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00549f8c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549f8d call 0x5ab230 */ esp -= 4; M32(esp) = 0x549f92u; SAVEALL; F_005ab230(c); ABI_CHECK(0x5ab230u, 0x549f8du); RETCHK(0x549f92u, 0x549f8du); LOADALL;
  /* 00549f92 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549f95 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549f97 mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00549f9a je 0x549fb1 */ if (ZF_) goto L_00549fb1;
  /* 00549f9c cmp dword ptr [eax + 0x14], edi */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00549f9f je 0x549fb1 */ if (ZF_) goto L_00549fb1;
  /* 00549fa1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549fa2 call 0x5ab020 */ esp -= 4; M32(esp) = 0x549fa7u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x549fa2u); RETCHK(0x549fa7u, 0x549fa2u); LOADALL;
  /* 00549fa7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549faa mov dword ptr [esi + 0x1c], 0 */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(0x0u); }
L_00549fb1:;
  /* 00549fb1 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00549fb4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549fb6 jne 0x549ff9 */ if (!ZF_) goto L_00549ff9;
  /* 00549fb8 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 00549fbb mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00549fbe mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 00549fc1 push 0x204 */ { u32 v_ = 0x204u; esp -= 4; M32(esp) = v_; }
  /* 00549fc6 mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 00549fcb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00549fcc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00549fcd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00549fce call 0x5ab230 */ esp -= 4; M32(esp) = 0x549fd3u; SAVEALL; F_005ab230(c); ABI_CHECK(0x5ab230u, 0x549fceu); RETCHK(0x549fd3u, 0x549fceu); LOADALL;
  /* 00549fd3 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549fd6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549fd8 mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00549fdb je 0x549ff2 */ if (ZF_) goto L_00549ff2;
  /* 00549fdd cmp dword ptr [eax + 0x14], edi */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00549fe0 je 0x549ff2 */ if (ZF_) goto L_00549ff2;
  /* 00549fe2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00549fe3 call 0x5ab020 */ esp -= 4; M32(esp) = 0x549fe8u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x549fe3u); RETCHK(0x549fe8u, 0x549fe3u); LOADALL;
  /* 00549fe8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00549feb mov dword ptr [esi + 0x1c], 0 */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(0x0u); }
L_00549ff2:;
  /* 00549ff2 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00549ff5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00549ff7 je 0x54a01e */ if (ZF_) goto L_0054a01e;
L_00549ff9:;
  /* 00549ff9 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 00549ffc cmp word ptr [eax + 0xe], 0x18 */ { const u32 m_ = (u32)(eax + 0xeu); u32 a_ = M16(m_), b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0054a001 jne 0x54a01e */ if (!ZF_) goto L_0054a01e;
  /* 0054a003 mov eax, dword ptr [0x7a6e08] */ { const u32 m_ = (u32)(0x7a6e08u); eax = (u32)(M32(m_)); }
  /* 0054a008 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a00a je 0x54a01e */ if (ZF_) goto L_0054a01e;
  /* 0054a00c cmp edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a00f mov eax, 0x544da0 */ { eax = (u32)(0x544da0u); }
  /* 0054a014 je 0x54a01b */ if (ZF_) goto L_0054a01b;
  /* 0054a016 mov eax, 0x544eb0 */ { eax = (u32)(0x544eb0u); }
L_0054a01b:;
  /* 0054a01b mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
L_0054a01e:;
  /* 0054a01e mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054a023 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054a024 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054a025 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054a030(CPU *c) {
  NATIVE_HOOK(0x54a030u) REGS; LOADALL;
L_0054a030:;
  /* 0054a030 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0054a033 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054a034 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0054a036 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a038 je 0x54a046 */ if (ZF_) goto L_0054a046;
  /* 0054a03a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a03b call 0x5ab020 */ esp -= 4; M32(esp) = 0x54a040u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x54a03bu); RETCHK(0x54a040u, 0x54a03bu); LOADALL;
  /* 0054a040 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054a043 mov dword ptr [esi + 0x1c], edi */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(edi); }
L_0054a046:;
  /* 0054a046 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054a048 call 0x54a610 */ esp -= 4; M32(esp) = 0x54a04du; SAVEALL; F_0054a610(c); ABI_CHECK(0x54a610u, 0x54a048u); RETCHK(0x54a04du, 0x54a048u); LOADALL;
  /* 0054a04d mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 0054a050 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a052 je 0x54a05a */ if (ZF_) goto L_0054a05a;
  /* 0054a054 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a055 call 0x5fe7a0 */ esp -= 4; M32(esp) = 0x54a05au; SAVEALL; F_005fe7a0(c); ABI_CHECK(0x5fe7a0u, 0x54a055u); RETCHK(0x54a05au, 0x54a055u); LOADALL;
L_0054a05a:;
  /* 0054a05a mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 0054a05d cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a05f je 0x54a06a */ if (ZF_) goto L_0054a06a;
  /* 0054a061 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a062 call 0x5fe7a6 */ esp -= 4; M32(esp) = 0x54a067u; SAVEALL; F_005fe7a6(c); ABI_CHECK(0x5fe7a6u, 0x54a062u); RETCHK(0x54a067u, 0x54a062u); LOADALL;
  /* 0054a067 mov dword ptr [esi + 0x30], edi */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(edi); }
L_0054a06a:;
  /* 0054a06a cmp dword ptr [esi + 0x2c], edi */ { const u32 m_ = (u32)(esi + 0x2cu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a06d je 0x54a080 */ if (ZF_) goto L_0054a080;
  /* 0054a06f nop */ ;
L_0054a070:;
  /* 0054a070 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0054a073 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a074 call 0x5fe7a6 */ esp -= 4; M32(esp) = 0x54a079u; SAVEALL; F_005fe7a6(c); ABI_CHECK(0x5fe7a6u, 0x54a074u); RETCHK(0x54a079u, 0x54a074u); LOADALL;
  /* 0054a079 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a07b jg 0x54a070 */ if (!(ZF_|LT_)) goto L_0054a070;
  /* 0054a07d mov dword ptr [esi + 0x2c], edi */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(edi); }
L_0054a080:;
  /* 0054a080 mov dword ptr [esi + 0x28], edi */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(edi); }
  /* 0054a083 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054a084 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054a090(CPU *c) {
  NATIVE_HOOK(0x54a090u) REGS; LOADALL;
L_0054a090:;
  /* 0054a090 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054a091 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054a093 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 0054a096 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a098 je 0x54a143 */ if (ZF_) goto L_0054a143;
  /* 0054a09e cmp dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a0a1 jne 0x54a143 */ if (!ZF_) goto L_0054a143;
  /* 0054a0a7 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054a0aa cmp ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a0ad jge 0x54a143 */ if (!LT_) goto L_0054a143;
  /* 0054a0b3 fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0054a0b6 mov eax, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); eax = (u32)(M32(m_)); }
  /* 0054a0b9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a0bb fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054a0be mov dword ptr [esi + 0x18], 0 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x0u); }
  /* 0054a0c5 fmul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054a0c8 fadd dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0054a0cb fst dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); }
  /* 0054a0ce fild dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); FPUSH((double)(s32)M32(m_)); }
  /* 0054a0d1 jge 0x54a0d9 */ if (!LT_) goto L_0054a0d9;
  /* 0054a0d3 fadd dword ptr [0x656f48] */ { const u32 m_ = (u32)(0x656f48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_0054a0d9:;
  /* 0054a0d9 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0054a0db fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 0054a0dd fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0054a0df test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054a0e2 jne 0x54a12e */ if (!ZF_) goto L_0054a12e;
  /* 0054a0e4 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054a0e5 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054a0e7 mov dword ptr [esi + 0x10], ecx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0054a0ea mov dword ptr [esi + 0x18], 1 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x1u); }
  /* 0054a0f1 call 0x54a610 */ esp -= 4; M32(esp) = 0x54a0f6u; SAVEALL; F_0054a610(c); ABI_CHECK(0x54a610u, 0x54a0f1u); RETCHK(0x54a0f6u, 0x54a0f1u); LOADALL;
  /* 0054a0f6 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054a0f9 cmp ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a0fc jge 0x54a11b */ if (!LT_) goto L_0054a11b;
  /* 0054a0fe mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 0054a101 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a103 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0054a10a je 0x54a12e */ if (ZF_) goto L_0054a12e;
  /* 0054a10c mov eax, dword ptr [esi + 0x14c] */ { const u32 m_ = (u32)(esi + 0x14cu); eax = (u32)(M32(m_)); }
  /* 0054a112 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054a114 call 0x54a510 */ esp -= 4; M32(esp) = 0x54a119u; SAVEALL; F_0054a510(c); ABI_CHECK(0x54a510u, 0x54a114u); RETCHK(0x54a119u, 0x54a114u); LOADALL;
  /* 0054a119 jmp 0x54a12e */ goto L_0054a12e;
L_0054a11b:;
  /* 0054a11b mov edx, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); edx = (u32)(M32(m_)); }
  /* 0054a11e fild dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); FPUSH((double)(s32)M32(m_)); }
  /* 0054a121 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a123 jge 0x54a12b */ if (!LT_) goto L_0054a12b;
  /* 0054a125 fadd dword ptr [0x656f48] */ { const u32 m_ = (u32)(0x656f48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_0054a12b:;
  /* 0054a12b fstp dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
L_0054a12e:;
  /* 0054a12e fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0054a131 call 0x61b154 */ esp -= 4; M32(esp) = 0x54a136u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x54a131u); RETCHK(0x54a136u, 0x54a131u); LOADALL;
  /* 0054a136 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a137 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 0054a13a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a13b call 0x5fe79a */ esp -= 4; M32(esp) = 0x54a140u; SAVEALL; F_005fe79a(c); ABI_CHECK(0x5fe79au, 0x54a13bu); RETCHK(0x54a140u, 0x54a13bu); LOADALL;
  /* 0054a140 mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
L_0054a143:;
  /* 0054a143 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054a144 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054a150(CPU *c) {
  NATIVE_HOOK(0x54a150u) REGS; LOADALL;
L_0054a150:;
  /* 0054a150 cmp dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a153 jne 0x54a16d */ if (!ZF_) goto L_0054a16d;
  /* 0054a155 mov edx, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); edx = (u32)(M32(m_)); }
  /* 0054a158 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a15a je 0x54a16d */ if (ZF_) goto L_0054a16d;
  /* 0054a15c mov ecx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0054a15f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a161 je 0x54a16d */ if (ZF_) goto L_0054a16d;
  /* 0054a163 mov eax, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0054a166 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054a167 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a168 call ecx */ { u32 t_ = ecx; esp -= 4; M32(esp) = 0x54a16au; SAVEALL; call_ind(c, t_); RETCHK(0x54a16au, 0x54a168u); LOADALL; }
  /* 0054a16a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054a16d:;
  /* 0054a16d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054a170(CPU *c) {
  NATIVE_HOOK(0x54a170u) REGS; LOADALL;
L_0054a170:;
  /* 0054a170 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054a171 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054a173 sub esp, 0x94 */ { u32 a_ = esp, b_ = 0x94u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054a179 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054a17e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054a17f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054a180 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054a182 lea ebx, [esi + 0x150] */ ebx = (u32)((u32)(esi + 0x150u));
  /* 0054a188 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054a18b cmp dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a18e je 0x54a1a5 */ if (ZF_) goto L_0054a1a5;
  /* 0054a190 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054a191 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054a196 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054a197 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054a19a call 0x61af31 */ esp -= 4; M32(esp) = 0x54a19fu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54a19au); RETCHK(0x54a19fu, 0x54a19au); LOADALL;
  /* 0054a19f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054a1a1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054a1a2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054a1a5:;
  /* 0054a1a5 mov ecx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0054a1a8 push 0x8c */ { u32 v_ = 0x8cu; esp -= 4; M32(esp) = v_; }
  /* 0054a1ad lea eax, [ebp - 0x90] */ eax = (u32)((u32)(ebp + 0xffffff70u));
  /* 0054a1b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a1b4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054a1b5 call 0x5fe78e */ esp -= 4; M32(esp) = 0x54a1bau; SAVEALL; F_005fe78e(c); ABI_CHECK(0x5fe78eu, 0x54a1b5u); RETCHK(0x54a1bau, 0x54a1b5u); LOADALL;
  /* 0054a1ba mov eax, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); eax = (u32)(M32(m_)); }
  /* 0054a1bd cmp eax, 0x8000 */ { u32 a_ = eax, b_ = 0x8000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a1c2 mov dword ptr [esi + 0x19c], eax */ { const u32 m_ = (u32)(esi + 0x19cu); M32(m_) = (u32)(eax); }
  /* 0054a1c8 jbe 0x54a1dc */ if ((CF_|ZF_)) goto L_0054a1dc;
  /* 0054a1ca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054a1cb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054a1cd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054a1ce mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054a1d1 call 0x61af31 */ esp -= 4; M32(esp) = 0x54a1d6u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54a1d1u); RETCHK(0x54a1d6u, 0x54a1d1u); LOADALL;
  /* 0054a1d6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054a1d8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054a1d9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054a1dc:;
  /* 0054a1dc mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 0054a1df push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054a1e0 lea edx, [ebp - 0x94] */ edx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0054a1e6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054a1e7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054a1e9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054a1eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a1ec call 0x5fe7ac */ esp -= 4; M32(esp) = 0x54a1f1u; SAVEALL; F_005fe7ac(c); ABI_CHECK(0x5fe7acu, 0x54a1ecu); RETCHK(0x54a1f1u, 0x54a1ecu); LOADALL;
  /* 0054a1f1 mov ecx, dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); ecx = (u32)(M32(m_)); }
  /* 0054a1f7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054a1f8 push 0x42 */ { u32 v_ = 0x42u; esp -= 4; M32(esp) = v_; }
  /* 0054a1fa call dword ptr [0x62e0cc] */ { const u32 m_ = (u32)(0x62e0ccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a200u; SAVEALL; call_ind(c, t_); RETCHK(0x54a200u, 0x54a1fau); LOADALL; }
  /* 0054a200 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a201 call dword ptr [0x62e0c4] */ { const u32 m_ = (u32)(0x62e0c4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a207u; SAVEALL; call_ind(c, t_); RETCHK(0x54a207u, 0x54a201u); LOADALL; }
  /* 0054a207 mov edi, eax */ { edi = (u32)(eax); }
  /* 0054a209 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a20b je 0x54a288 */ if (ZF_) goto L_0054a288;
  /* 0054a20d mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 0054a210 lea edx, [ebp - 0x94] */ edx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0054a216 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054a217 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054a218 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054a21a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a21b call 0x5fe7ac */ esp -= 4; M32(esp) = 0x54a220u; SAVEALL; F_005fe7ac(c); ABI_CHECK(0x5fe7acu, 0x54a21bu); RETCHK(0x54a220u, 0x54a21bu); LOADALL;
  /* 0054a220 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054a223 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054a226 push 0x10000 */ { u32 v_ = 0x10000u; esp -= 4; M32(esp) = v_; }
  /* 0054a22b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054a22d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a22e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054a22f mov dword ptr [esi + 0x1a4], ecx */ { const u32 m_ = (u32)(esi + 0x1a4u); M32(m_) = (u32)(ecx); }
  /* 0054a235 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054a238 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054a23a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054a23b mov dword ptr [esi + 0x1a0], edx */ { const u32 m_ = (u32)(esi + 0x1a0u); M32(m_) = (u32)(edx); }
  /* 0054a241 call dword ptr [0x62e604] */ { const u32 m_ = (u32)(0x62e604u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a247u; SAVEALL; call_ind(c, t_); RETCHK(0x54a247u, 0x54a241u); LOADALL; }
  /* 0054a247 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a249 je 0x54a29b */ if (ZF_) goto L_0054a29b;
  /* 0054a24b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054a24d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054a24f call dword ptr [0x62e5f8] */ { const u32 m_ = (u32)(0x62e5f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a255u; SAVEALL; call_ind(c, t_); RETCHK(0x54a255u, 0x54a24fu); LOADALL; }
  /* 0054a255 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054a258 push 0x10000 */ { u32 v_ = 0x10000u; esp -= 4; M32(esp) = v_; }
  /* 0054a25d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054a25f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054a260 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054a261 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054a263 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054a264 call dword ptr [0x62e604] */ { const u32 m_ = (u32)(0x62e604u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a26au; SAVEALL; call_ind(c, t_); RETCHK(0x54a26au, 0x54a264u); LOADALL; }
  /* 0054a26a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a26c je 0x54a29b */ if (ZF_) goto L_0054a29b;
  /* 0054a26e mov esi, dword ptr [0x62e0f8] */ { const u32 m_ = (u32)(0x62e0f8u); esi = (u32)(M32(m_)); }
  /* 0054a274 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054a275 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x54a277u; SAVEALL; call_ind(c, t_); RETCHK(0x54a277u, 0x54a275u); LOADALL; }
  /* 0054a277 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a278 call dword ptr [0x62e0c0] */ { const u32 m_ = (u32)(0x62e0c0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a27eu; SAVEALL; call_ind(c, t_); RETCHK(0x54a27eu, 0x54a278u); LOADALL; }
  /* 0054a27e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054a27f call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x54a281u; SAVEALL; call_ind(c, t_); RETCHK(0x54a281u, 0x54a27fu); LOADALL; }
  /* 0054a281 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a282 call dword ptr [0x62e0c8] */ { const u32 m_ = (u32)(0x62e0c8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a288u; SAVEALL; call_ind(c, t_); RETCHK(0x54a288u, 0x54a282u); LOADALL; }
L_0054a288:;
  /* 0054a288 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054a289 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054a28a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054a28c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054a28d mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054a290 call 0x61af31 */ esp -= 4; M32(esp) = 0x54a295u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54a290u); RETCHK(0x54a295u, 0x54a290u); LOADALL;
  /* 0054a295 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054a297 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054a298 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054a29b:;
  /* 0054a29b mov dword ptr [esi + 0x194], 0 */ { const u32 m_ = (u32)(esi + 0x194u); M32(m_) = (u32)(0x0u); }
  /* 0054a2a5 jmp 0x54a2b0 */ goto L_0054a2b0;
L_0054a2b0:;
  /* 0054a2b0 push 0x8020 */ { u32 v_ = 0x8020u; esp -= 4; M32(esp) = v_; }
  /* 0054a2b5 push 0x2002 */ { u32 v_ = 0x2002u; esp -= 4; M32(esp) = v_; }
  /* 0054a2ba call dword ptr [0x62e0cc] */ { const u32 m_ = (u32)(0x62e0ccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a2c0u; SAVEALL; call_ind(c, t_); RETCHK(0x54a2c0u, 0x54a2bau); LOADALL; }
  /* 0054a2c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a2c1 call dword ptr [0x62e0c4] */ { const u32 m_ = (u32)(0x62e0c4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a2c7u; SAVEALL; call_ind(c, t_); RETCHK(0x54a2c7u, 0x54a2c1u); LOADALL; }
  /* 0054a2c7 mov edx, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); edx = (u32)(M32(m_)); }
  /* 0054a2cd mov ebx, dword ptr [0x62e0f8] */ { const u32 m_ = (u32)(0x62e0f8u); ebx = (u32)(M32(m_)); }
  /* 0054a2d3 mov dword ptr [esi + edx*4 + 0x154], eax */ { const u32 m_ = (u32)(esi + edx * 4u + 0x154u); M32(m_) = (u32)(eax); }
  /* 0054a2da mov eax, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); eax = (u32)(M32(m_)); }
  /* 0054a2e0 mov eax, dword ptr [esi + eax*4 + 0x154] */ { const u32 m_ = (u32)(esi + eax * 4u + 0x154u); eax = (u32)(M32(m_)); }
  /* 0054a2e7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a2e9 je 0x54a385 */ if (ZF_) goto L_0054a385;
  /* 0054a2ef mov dword ptr [eax + 0x10], 1 */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(0x1u); }
  /* 0054a2f6 mov ecx, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); ecx = (u32)(M32(m_)); }
  /* 0054a2fc mov eax, dword ptr [esi + ecx*4 + 0x154] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x154u); eax = (u32)(M32(m_)); }
  /* 0054a303 lea edx, [eax + 0x20] */ edx = (u32)((u32)(eax + 0x20u));
  /* 0054a306 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0054a308 mov eax, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); eax = (u32)(M32(m_)); }
  /* 0054a30e mov ecx, dword ptr [esi + eax*4 + 0x154] */ { const u32 m_ = (u32)(esi + eax * 4u + 0x154u); ecx = (u32)(M32(m_)); }
  /* 0054a315 mov dword ptr [ecx + 4], 0x8000 */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(0x8000u); }
  /* 0054a31c mov edx, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); edx = (u32)(M32(m_)); }
  /* 0054a322 mov eax, dword ptr [esi + edx*4 + 0x154] */ { const u32 m_ = (u32)(esi + edx * 4u + 0x154u); eax = (u32)(M32(m_)); }
  /* 0054a329 mov ecx, dword ptr [esi + 0x150] */ { const u32 m_ = (u32)(esi + 0x150u); ecx = (u32)(M32(m_)); }
  /* 0054a32f push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 0054a331 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a332 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054a333 call dword ptr [0x62e5e0] */ { const u32 m_ = (u32)(0x62e5e0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a339u; SAVEALL; call_ind(c, t_); RETCHK(0x54a339u, 0x54a333u); LOADALL; }
  /* 0054a339 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a33b jne 0x54a357 */ if (!ZF_) goto L_0054a357;
  /* 0054a33d mov ecx, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); ecx = (u32)(M32(m_)); }
  /* 0054a343 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054a344 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0054a346 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a349 mov dword ptr [esi + 0x194], ecx */ { const u32 m_ = (u32)(esi + 0x194u); M32(m_) = (u32)(ecx); }
  /* 0054a34f jb 0x54a2b0 */ if (CF_) goto L_0054a2b0;
  /* 0054a355 jmp 0x54a385 */ goto L_0054a385;
L_0054a357:;
  /* 0054a357 mov edx, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); edx = (u32)(M32(m_)); }
  /* 0054a35d mov eax, dword ptr [esi + edx*4 + 0x154] */ { const u32 m_ = (u32)(esi + edx * 4u + 0x154u); eax = (u32)(M32(m_)); }
  /* 0054a364 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a365 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54a367u; SAVEALL; call_ind(c, t_); RETCHK(0x54a367u, 0x54a365u); LOADALL; }
  /* 0054a367 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a368 call dword ptr [0x62e0c0] */ { const u32 m_ = (u32)(0x62e0c0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a36eu; SAVEALL; call_ind(c, t_); RETCHK(0x54a36eu, 0x54a368u); LOADALL; }
  /* 0054a36e mov ecx, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); ecx = (u32)(M32(m_)); }
  /* 0054a374 mov edx, dword ptr [esi + ecx*4 + 0x154] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x154u); edx = (u32)(M32(m_)); }
  /* 0054a37b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054a37c call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54a37eu; SAVEALL; call_ind(c, t_); RETCHK(0x54a37eu, 0x54a37cu); LOADALL; }
  /* 0054a37e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a37f call dword ptr [0x62e0c8] */ { const u32 m_ = (u32)(0x62e0c8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a385u; SAVEALL; call_ind(c, t_); RETCHK(0x54a385u, 0x54a37fu); LOADALL; }
L_0054a385:;
  /* 0054a385 cmp dword ptr [esi + 0x194], 2 */ { const u32 m_ = (u32)(esi + 0x194u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a38c jae 0x54a3ba */ if (!CF_) goto L_0054a3ba;
  /* 0054a38e call 0x54a560 */ esp -= 4; M32(esp) = 0x54a393u; SAVEALL; F_0054a560(c); ABI_CHECK(0x54a560u, 0x54a38eu); RETCHK(0x54a393u, 0x54a38eu); LOADALL;
  /* 0054a393 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054a394 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54a396u; SAVEALL; call_ind(c, t_); RETCHK(0x54a396u, 0x54a394u); LOADALL; }
  /* 0054a396 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a397 call dword ptr [0x62e0c0] */ { const u32 m_ = (u32)(0x62e0c0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a39du; SAVEALL; call_ind(c, t_); RETCHK(0x54a39du, 0x54a397u); LOADALL; }
  /* 0054a39d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054a39e call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54a3a0u; SAVEALL; call_ind(c, t_); RETCHK(0x54a3a0u, 0x54a39eu); LOADALL; }
  /* 0054a3a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a3a1 call dword ptr [0x62e0c8] */ { const u32 m_ = (u32)(0x62e0c8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a3a7u; SAVEALL; call_ind(c, t_); RETCHK(0x54a3a7u, 0x54a3a1u); LOADALL; }
  /* 0054a3a7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054a3a8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054a3a9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054a3ab pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054a3ac mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054a3af call 0x61af31 */ esp -= 4; M32(esp) = 0x54a3b4u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54a3afu); RETCHK(0x54a3b4u, 0x54a3afu); LOADALL;
  /* 0054a3b4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054a3b6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054a3b7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054a3ba:;
  /* 0054a3ba push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054a3bb mov dword ptr [esi + 0x198], 0 */ { const u32 m_ = (u32)(esi + 0x198u); M32(m_) = (u32)(0x0u); }
  /* 0054a3c5 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54a3c7u; SAVEALL; call_ind(c, t_); RETCHK(0x54a3c7u, 0x54a3c5u); LOADALL; }
  /* 0054a3c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a3c8 call dword ptr [0x62e0c0] */ { const u32 m_ = (u32)(0x62e0c0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a3ceu; SAVEALL; call_ind(c, t_); RETCHK(0x54a3ceu, 0x54a3c8u); LOADALL; }
  /* 0054a3ce push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054a3cf call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54a3d1u; SAVEALL; call_ind(c, t_); RETCHK(0x54a3d1u, 0x54a3cfu); LOADALL; }
  /* 0054a3d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a3d2 call dword ptr [0x62e0c8] */ { const u32 m_ = (u32)(0x62e0c8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a3d8u; SAVEALL; call_ind(c, t_); RETCHK(0x54a3d8u, 0x54a3d2u); LOADALL; }
  /* 0054a3d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054a3db mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054a3de pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054a3df mov dword ptr [esi + 0x14c], eax */ { const u32 m_ = (u32)(esi + 0x14cu); M32(m_) = (u32)(eax); }
  /* 0054a3e5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054a3e6 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054a3eb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054a3ec call 0x61af31 */ esp -= 4; M32(esp) = 0x54a3f1u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54a3ecu); RETCHK(0x54a3f1u, 0x54a3ecu); LOADALL;
  /* 0054a3f1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054a3f3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054a3f4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054a400(CPU *c) {
  NATIVE_HOOK(0x54a400u) REGS; LOADALL;
L_0054a400:;
  /* 0054a400 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054a401 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054a403 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054a406 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 0054a409 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054a40a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054a40b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a40c call 0x5fe7b2 */ esp -= 4; M32(esp) = 0x54a411u; SAVEALL; F_005fe7b2(c); ABI_CHECK(0x5fe7b2u, 0x54a40cu); RETCHK(0x54a411u, 0x54a40cu); LOADALL;
  /* 0054a411 mov ecx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0054a414 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054a415 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054a418 call 0x5fe7b2 */ esp -= 4; M32(esp) = 0x54a41du; SAVEALL; F_005fe7b2(c); ABI_CHECK(0x5fe7b2u, 0x54a418u); RETCHK(0x54a41du, 0x54a418u); LOADALL;
  /* 0054a41d mov edx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); edx = (u32)(M32(m_)); }
  /* 0054a420 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054a421 mov edi, eax */ { edi = (u32)(eax); }
  /* 0054a423 call 0x5fe7b8 */ esp -= 4; M32(esp) = 0x54a428u; SAVEALL; F_005fe7b8(c); ABI_CHECK(0x5fe7b8u, 0x54a423u); RETCHK(0x54a428u, 0x54a423u); LOADALL;
  /* 0054a428 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0054a42a mov eax, dword ptr [esi + 0x198] */ { const u32 m_ = (u32)(esi + 0x198u); eax = (u32)(M32(m_)); }
  /* 0054a430 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0054a432 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a434 mov dword ptr [ebp - 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edi); }
  /* 0054a437 je 0x54a4f7 */ if (ZF_) goto L_0054a4f7;
  /* 0054a43d cmp dword ptr [esi + 0x194], ebx */ { const u32 m_ = (u32)(esi + 0x194u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a443 mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 0054a446 jbe 0x54a4eb */ if ((CF_|ZF_)) goto L_0054a4eb;
  /* 0054a44c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0054a450:;
  /* 0054a450 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0054a453 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a455 jge 0x54a4e4 */ if (!LT_) goto L_0054a4e4;
  /* 0054a45b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0054a45d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0054a45f mov eax, 0x8000 */ { eax = (u32)(0x8000u); }
  /* 0054a464 div dword ptr [esi + 0x19c] */ { const u32 m_ = (u32)(esi + 0x19cu); u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, M32(m_), &q_, &r_, 0x54a464u); eax = q_; edx = r_; }
  /* 0054a46a sub edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0054a46c cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a46e jbe 0x54a472 */ if ((CF_|ZF_)) goto L_0054a472;
  /* 0054a470 mov edi, eax */ { edi = (u32)(eax); }
L_0054a472:;
  /* 0054a472 mov eax, dword ptr [esi + ebx*4 + 0x154] */ { const u32 m_ = (u32)(esi + ebx * 4u + 0x154u); eax = (u32)(M32(m_)); }
  /* 0054a479 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054a47c mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 0054a47f mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0054a481 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0054a484 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054a485 lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0054a488 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054a489 push 0x8000 */ { u32 v_ = 0x8000u; esp -= 4; M32(esp) = v_; }
  /* 0054a48e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a48f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054a490 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054a491 mov ecx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0054a494 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054a495 call 0x5fe7be */ esp -= 4; M32(esp) = 0x54a49au; SAVEALL; F_005fe7be(c); ABI_CHECK(0x5fe7beu, 0x54a495u); RETCHK(0x54a49au, 0x54a495u); LOADALL;
  /* 0054a49a mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0054a49d cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a49f jne 0x54a502 */ if (!ZF_) goto L_0054a502;
  /* 0054a4a1 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054a4a4 mov edx, dword ptr [esi + ebx*4 + 0x154] */ { const u32 m_ = (u32)(esi + ebx * 4u + 0x154u); edx = (u32)(M32(m_)); }
  /* 0054a4ab push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 0054a4ad add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054a4af mov eax, dword ptr [esi + 0x150] */ { const u32 m_ = (u32)(esi + 0x150u); eax = (u32)(M32(m_)); }
  /* 0054a4b5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054a4b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a4b7 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0054a4ba call dword ptr [0x62e5dc] */ { const u32 m_ = (u32)(0x62e5dcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a4c0u; SAVEALL; call_ind(c, t_); RETCHK(0x54a4c0u, 0x54a4bau); LOADALL; }
  /* 0054a4c0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a4c2 jne 0x54a502 */ if (!ZF_) goto L_0054a502;
  /* 0054a4c4 mov edi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edi = (u32)(M32(m_)); }
  /* 0054a4c7 mov eax, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); eax = (u32)(M32(m_)); }
  /* 0054a4cd inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054a4ce inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054a4cf cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a4d1 mov dword ptr [ebp - 8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edi); }
  /* 0054a4d4 jb 0x54a4d8 */ if (CF_) goto L_0054a4d8;
  /* 0054a4d6 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0054a4d8:;
  /* 0054a4d8 cmp dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a4db mov edi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edi = (u32)(M32(m_)); }
  /* 0054a4de jb 0x54a450 */ if (CF_) goto L_0054a450;
L_0054a4e4:;
  /* 0054a4e4 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0054a4e7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a4e9 jne 0x54a4f7 */ if (!ZF_) goto L_0054a4f7;
L_0054a4eb:;
  /* 0054a4eb cmp dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a4ee jl 0x54a4f7 */ if (LT_) goto L_0054a4f7;
  /* 0054a4f0 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054a4f2 call 0x54a610 */ esp -= 4; M32(esp) = 0x54a4f7u; SAVEALL; F_0054a610(c); ABI_CHECK(0x54a610u, 0x54a4f2u); RETCHK(0x54a4f7u, 0x54a4f2u); LOADALL;
L_0054a4f7:;
  /* 0054a4f7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054a4f8 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054a4fd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054a4fe mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054a500 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054a501 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054a502:;
  /* 0054a502 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054a503 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054a505 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054a506 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054a508 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054a509 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054a510(CPU *c) {
  NATIVE_HOOK(0x54a510u) REGS; LOADALL;
L_0054a510:;
  /* 0054a510 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054a511 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a512 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054a514 call 0x54a170 */ esp -= 4; M32(esp) = 0x54a519u; SAVEALL; F_0054a170(c); ABI_CHECK(0x54a170u, 0x54a514u); RETCHK(0x54a519u, 0x54a514u); LOADALL;
  /* 0054a519 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a51b jne 0x54a51f */ if (!ZF_) goto L_0054a51f;
  /* 0054a51d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054a51e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054a51f:;
  /* 0054a51f mov eax, dword ptr [esi + 0x198] */ { const u32 m_ = (u32)(esi + 0x198u); eax = (u32)(M32(m_)); }
  /* 0054a525 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a527 jne 0x54a540 */ if (!ZF_) goto L_0054a540;
  /* 0054a529 mov ecx, dword ptr [esi + 0x150] */ { const u32 m_ = (u32)(esi + 0x150u); ecx = (u32)(M32(m_)); }
  /* 0054a52f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054a530 call dword ptr [0x62e5fc] */ { const u32 m_ = (u32)(0x62e5fcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a536u; SAVEALL; call_ind(c, t_); RETCHK(0x54a536u, 0x54a530u); LOADALL; }
  /* 0054a536 mov dword ptr [esi + 0x198], 1 */ { const u32 m_ = (u32)(esi + 0x198u); M32(m_) = (u32)(0x1u); }
L_0054a540:;
  /* 0054a540 call 0x54a400 */ esp -= 4; M32(esp) = 0x54a545u; SAVEALL; F_0054a400(c); ABI_CHECK(0x54a400u, 0x54a540u); RETCHK(0x54a545u, 0x54a540u); LOADALL;
  /* 0054a545 mov edx, dword ptr [esi + 0x150] */ { const u32 m_ = (u32)(esi + 0x150u); edx = (u32)(M32(m_)); }
  /* 0054a54b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054a54c call dword ptr [0x62e600] */ { const u32 m_ = (u32)(0x62e600u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a552u; SAVEALL; call_ind(c, t_); RETCHK(0x54a552u, 0x54a54cu); LOADALL; }
  /* 0054a552 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054a557 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054a558 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054a560(CPU *c) {
  NATIVE_HOOK(0x54a560u) REGS; LOADALL;
L_0054a560:;
  /* 0054a560 mov eax, dword ptr [esi + 0x150] */ { const u32 m_ = (u32)(esi + 0x150u); eax = (u32)(M32(m_)); }
  /* 0054a566 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a568 je 0x54a60e */ if (ZF_) goto L_0054a60e;
  /* 0054a56e mov eax, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); eax = (u32)(M32(m_)); }
  /* 0054a574 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a576 jbe 0x54a5ea */ if ((CF_|ZF_)) goto L_0054a5ea;
  /* 0054a578 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054a579 mov ebx, dword ptr [0x62e5f4] */ { const u32 m_ = (u32)(0x62e5f4u); ebx = (u32)(M32(m_)); }
  /* 0054a57f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054a580 mov edi, dword ptr [0x62e0f8] */ { const u32 m_ = (u32)(0x62e0f8u); edi = (u32)(M32(m_)); }
  /* 0054a586 jmp 0x54a590 */ goto L_0054a590;
L_0054a590:;
  /* 0054a590 mov eax, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); eax = (u32)(M32(m_)); }
  /* 0054a596 mov ecx, dword ptr [esi + 0x150] */ { const u32 m_ = (u32)(esi + 0x150u); ecx = (u32)(M32(m_)); }
  /* 0054a59c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0054a59d mov dword ptr [esi + 0x194], eax */ { const u32 m_ = (u32)(esi + 0x194u); M32(m_) = (u32)(eax); }
  /* 0054a5a3 mov eax, dword ptr [esi + eax*4 + 0x154] */ { const u32 m_ = (u32)(esi + eax * 4u + 0x154u); eax = (u32)(M32(m_)); }
  /* 0054a5aa push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 0054a5ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a5ad push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054a5ae call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54a5b0u; SAVEALL; call_ind(c, t_); RETCHK(0x54a5b0u, 0x54a5aeu); LOADALL; }
  /* 0054a5b0 mov edx, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); edx = (u32)(M32(m_)); }
  /* 0054a5b6 mov eax, dword ptr [esi + edx*4 + 0x154] */ { const u32 m_ = (u32)(esi + edx * 4u + 0x154u); eax = (u32)(M32(m_)); }
  /* 0054a5bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a5be call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54a5c0u; SAVEALL; call_ind(c, t_); RETCHK(0x54a5c0u, 0x54a5beu); LOADALL; }
  /* 0054a5c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a5c1 call dword ptr [0x62e0c0] */ { const u32 m_ = (u32)(0x62e0c0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a5c7u; SAVEALL; call_ind(c, t_); RETCHK(0x54a5c7u, 0x54a5c1u); LOADALL; }
  /* 0054a5c7 mov ecx, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); ecx = (u32)(M32(m_)); }
  /* 0054a5cd mov edx, dword ptr [esi + ecx*4 + 0x154] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x154u); edx = (u32)(M32(m_)); }
  /* 0054a5d4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054a5d5 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54a5d7u; SAVEALL; call_ind(c, t_); RETCHK(0x54a5d7u, 0x54a5d5u); LOADALL; }
  /* 0054a5d7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a5d8 call dword ptr [0x62e0c8] */ { const u32 m_ = (u32)(0x62e0c8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a5deu; SAVEALL; call_ind(c, t_); RETCHK(0x54a5deu, 0x54a5d8u); LOADALL; }
  /* 0054a5de mov eax, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); eax = (u32)(M32(m_)); }
  /* 0054a5e4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a5e6 ja 0x54a590 */ if (!(CF_|ZF_)) goto L_0054a590;
  /* 0054a5e8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054a5e9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0054a5ea:;
  /* 0054a5ea mov edx, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); edx = (u32)(M32(m_)); }
  /* 0054a5f0 mov eax, dword ptr [esi + 0x150] */ { const u32 m_ = (u32)(esi + 0x150u); eax = (u32)(M32(m_)); }
  /* 0054a5f6 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0054a5f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a5f8 mov dword ptr [esi + 0x194], edx */ { const u32 m_ = (u32)(esi + 0x194u); M32(m_) = (u32)(edx); }
  /* 0054a5fe call dword ptr [0x62e5d4] */ { const u32 m_ = (u32)(0x62e5d4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a604u; SAVEALL; call_ind(c, t_); RETCHK(0x54a604u, 0x54a5feu); LOADALL; }
  /* 0054a604 mov dword ptr [esi + 0x150], 0 */ { const u32 m_ = (u32)(esi + 0x150u); M32(m_) = (u32)(0x0u); }
L_0054a60e:;
  /* 0054a60e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054a610(CPU *c) {
  NATIVE_HOOK(0x54a610u) REGS; LOADALL;
L_0054a610:;
  /* 0054a610 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054a611 mov esi, eax */ { esi = (u32)(eax); }
  /* 0054a613 mov eax, dword ptr [esi + 0x150] */ { const u32 m_ = (u32)(esi + 0x150u); eax = (u32)(M32(m_)); }
  /* 0054a619 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a61b je 0x54a633 */ if (ZF_) goto L_0054a633;
  /* 0054a61d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a61e call dword ptr [0x62e5d8] */ { const u32 m_ = (u32)(0x62e5d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a624u; SAVEALL; call_ind(c, t_); RETCHK(0x54a624u, 0x54a61eu); LOADALL; }
  /* 0054a624 call 0x54a560 */ esp -= 4; M32(esp) = 0x54a629u; SAVEALL; F_0054a560(c); ABI_CHECK(0x54a560u, 0x54a624u); RETCHK(0x54a629u, 0x54a624u); LOADALL;
  /* 0054a629 mov dword ptr [esi + 0x198], 0 */ { const u32 m_ = (u32)(esi + 0x198u); M32(m_) = (u32)(0x0u); }
L_0054a633:;
  /* 0054a633 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054a634 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054a640(CPU *c) {
  NATIVE_HOOK(0x54a640u) REGS; LOADALL;
L_0054a640:;
  /* 0054a640 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054a642 mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0054a645 mov dword ptr [eax + 4], 0x78 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x78u); }
  /* 0054a64c mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0054a64f mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0054a652 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0054a655 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0054a658 mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0054a65b mov dword ptr [eax + 8], 0x3f800000 */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0054a662 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0054a665 mov dword ptr [eax + 0x24], 0xffffffff */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(0xffffffffu); }
  /* 0054a66c mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 0054a66f mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0054a671 mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 0054a678 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054a680(CPU *c) {
  NATIVE_HOOK(0x54a680u) REGS; LOADALL;
L_0054a680:;
  /* 0054a680 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054a681 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054a683 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054a686 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054a687 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0054a689 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054a68a mov esi, eax */ { esi = (u32)(eax); }
  /* 0054a68c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054a68d mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0054a690 mov dword ptr [edi + 4], 0x78 */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(0x78u); }
  /* 0054a697 mov dword ptr [edi + 8], 0x3f800000 */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0054a69e mov dword ptr [edi], ebx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebx); }
  /* 0054a6a0 mov dword ptr [edi + 0x2c], ebx */ { const u32 m_ = (u32)(edi + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 0054a6a3 mov dword ptr [edi + 0x18], ebx */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 0054a6a6 mov dword ptr [edi + 0xc], ebx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0054a6a9 mov dword ptr [edi + 0x10], ebx */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(ebx); }
  /* 0054a6ac mov dword ptr [edi + 0x14], ebx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0054a6af mov dword ptr [edi + 0x1c], ebx */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 0054a6b2 mov dword ptr [edi + 0x20], ebx */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 0054a6b5 mov dword ptr [edi + 0x24], 0xffffffff */ { const u32 m_ = (u32)(edi + 0x24u); M32(m_) = (u32)(0xffffffffu); }
  /* 0054a6bc mov dword ptr [edi + 0x30], ebx */ { const u32 m_ = (u32)(edi + 0x30u); M32(m_) = (u32)(ebx); }
  /* 0054a6bf mov eax, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 0054a6c2 mov dword ptr [edi + 0x3c], eax */ { const u32 m_ = (u32)(edi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 0054a6c5 mov ecx, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); ecx = (u32)(M32(m_)); }
  /* 0054a6c8 mov dword ptr [edi + 0x40], ecx */ { const u32 m_ = (u32)(edi + 0x40u); M32(m_) = (u32)(ecx); }
  /* 0054a6cb mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0054a6cd mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 0054a6cf mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054a6d2 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0054a6d5 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054a6d8 mov dword ptr [edi + 8], ecx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0054a6db call 0x5ab9b0 */ esp -= 4; M32(esp) = 0x54a6e0u; SAVEALL; F_005ab9b0(c); ABI_CHECK(0x5ab9b0u, 0x54a6dbu); RETCHK(0x54a6e0u, 0x54a6dbu); LOADALL;
  /* 0054a6e0 mov dword ptr [edi + 0x18], eax */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(eax); }
  /* 0054a6e3 mov dword ptr [edi + 0x14], ebx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0054a6e6 mov esi, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); esi = (u32)(M32(m_)); }
  /* 0054a6e9 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a6eb mov dword ptr [ebp - 8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 0054a6ee je 0x54a913 */ if (ZF_) goto L_0054a913;
  /* 0054a6f4 jmp 0x54a700 */ goto L_0054a700;
L_0054a6f6:;
  /* 0054a6f6 mov esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); esi = (u32)(M32(m_)); }
  /* 0054a6f9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0054a700:;
  /* 0054a700 push 0x64 */ { u32 v_ = 0x64u; esp -= 4; M32(esp) = v_; }
  /* 0054a702 call 0x5fe934 */ esp -= 4; M32(esp) = 0x54a707u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x54a702u); RETCHK(0x54a707u, 0x54a702u); LOADALL;
  /* 0054a707 mov ecx, 0x19 */ { ecx = (u32)(0x19u); }
  /* 0054a70c mov edi, eax */ { edi = (u32)(eax); }
  /* 0054a70e rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0054a710 mov esi, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); esi = (u32)(M32(m_)); }
  /* 0054a713 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054a716 and esi, 0xdfffffff */ { u32 a_ = esi, b_ = 0xdfffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0054a71c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054a71f sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054a721 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054a724 mov dword ptr [eax], 0x64 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64u); }
  /* 0054a72a mov dword ptr [eax + 0x34], esi */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(esi); }
  /* 0054a72d mov dword ptr [eax + 0x30], ebx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ebx); }
  /* 0054a730 je 0x54a756 */ if (ZF_) goto L_0054a756;
  /* 0054a732 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0054a733 je 0x54a73a */ if (ZF_) goto L_0054a73a;
  /* 0054a735 mov dword ptr [eax + 0x28], ebx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ebx); }
  /* 0054a738 jmp 0x54a77c */ goto L_0054a77c;
L_0054a73a:;
  /* 0054a73a push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0054a73c call 0x5fe934 */ esp -= 4; M32(esp) = 0x54a741u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x54a73cu); RETCHK(0x54a741u, 0x54a73cu); LOADALL;
  /* 0054a741 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054a744 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a746 je 0x54a772 */ if (ZF_) goto L_0054a772;
  /* 0054a748 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0054a74b add edx, 0x30 */ { u32 a_ = edx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054a74e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054a74f call 0x54af40 */ esp -= 4; M32(esp) = 0x54a754u; SAVEALL; F_0054af40(c); ABI_CHECK(0x54af40u, 0x54a74fu); RETCHK(0x54a754u, 0x54a74fu); LOADALL;
  /* 0054a754 jmp 0x54a774 */ goto L_0054a774;
L_0054a756:;
  /* 0054a756 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 0054a758 call 0x5fe934 */ esp -= 4; M32(esp) = 0x54a75du; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x54a758u); RETCHK(0x54a75du, 0x54a758u); LOADALL;
  /* 0054a75d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054a760 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a762 je 0x54a772 */ if (ZF_) goto L_0054a772;
  /* 0054a764 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0054a767 add edx, 0x30 */ { u32 a_ = edx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054a76a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054a76b call 0x54b260 */ esp -= 4; M32(esp) = 0x54a770u; SAVEALL; F_0054b260(c); ABI_CHECK(0x54b260u, 0x54a76bu); RETCHK(0x54a770u, 0x54a76bu); LOADALL;
  /* 0054a770 jmp 0x54a774 */ goto L_0054a774;
L_0054a772:;
  /* 0054a772 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0054a774:;
  /* 0054a774 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054a777 mov dword ptr [ecx + 0x28], eax */ { const u32 m_ = (u32)(ecx + 0x28u); M32(m_) = (u32)(eax); }
  /* 0054a77a mov eax, ecx */ { eax = (u32)(ecx); }
L_0054a77c:;
  /* 0054a77c mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0054a77f cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a781 je 0x54a8f6 */ if (ZF_) goto L_0054a8f6;
  /* 0054a787 mov esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); esi = (u32)(M32(m_)); }
  /* 0054a78a mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 0054a78d mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0054a78f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a790 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a793u; SAVEALL; call_ind(c, t_); RETCHK(0x54a793u, 0x54a790u); LOADALL; }
  /* 0054a793 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a795 je 0x54a8e5 */ if (ZF_) goto L_0054a8e5;
  /* 0054a79b mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 0054a79e mov ecx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0054a7a1 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054a7a4 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a7a6 je 0x54a7b8 */ if (ZF_) goto L_0054a7b8;
  /* 0054a7a8 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054a7ab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a7ac mov eax, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); eax = (u32)(M32(m_)); }
  /* 0054a7af push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a7b0 call 0x5abec0 */ esp -= 4; M32(esp) = 0x54a7b5u; SAVEALL; F_005abec0(c); ABI_CHECK(0x5abec0u, 0x54a7b0u); RETCHK(0x54a7b5u, 0x54a7b0u); LOADALL;
  /* 0054a7b5 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054a7b8:;
  /* 0054a7b8 mov esi, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); esi = (u32)(M32(m_)); }
  /* 0054a7bb cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a7bd mov dword ptr [ebp - 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(esi); }
  /* 0054a7c0 jne 0x54a7d6 */ if (!ZF_) goto L_0054a7d6;
  /* 0054a7c2 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054a7c5 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0054a7c8 mov dword ptr [edi + 0x2c], ecx */ { const u32 m_ = (u32)(edi + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0054a7cb mov dword ptr [eax + 0x14], edi */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edi); }
  /* 0054a7ce jmp 0x54a8ff */ goto L_0054a8ff;
L_0054a7d3:;
  /* 0054a7d3 mov esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); esi = (u32)(M32(m_)); }
L_0054a7d6:;
  /* 0054a7d6 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 0054a7d9 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054a7dc sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054a7de je 0x54a840 */ if (ZF_) goto L_0054a840;
  /* 0054a7e0 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0054a7e1 jne 0x54a8c6 */ if (!ZF_) goto L_0054a8c6;
  /* 0054a7e7 push 0x38 */ { u32 v_ = 0x38u; esp -= 4; M32(esp) = v_; }
  /* 0054a7e9 call 0x5fe934 */ esp -= 4; M32(esp) = 0x54a7eeu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x54a7e9u); RETCHK(0x54a7eeu, 0x54a7e9u); LOADALL;
  /* 0054a7ee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054a7f1 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a7f3 je 0x54a839 */ if (ZF_) goto L_0054a839;
  /* 0054a7f5 mov ecx, 0x3f800000 */ { ecx = (u32)(0x3f800000u); }
  /* 0054a7fa mov dword ptr [eax + 0xc], ebx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0054a7fd mov dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0054a800 mov dword ptr [eax + 8], ebx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0054a803 mov dword ptr [eax + 0x10], ebx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ebx); }
  /* 0054a806 mov dword ptr [eax + 0x14], ebx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0054a809 mov dword ptr [eax + 0x18], ebx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ebx); }
  /* 0054a80c mov dword ptr [eax + 0x1c], ebx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 0054a80f mov dword ptr [eax + 0x20], ebx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ebx); }
  /* 0054a812 mov dword ptr [eax + 0x24], ebx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(ebx); }
  /* 0054a815 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 0054a818 mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0054a81b mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 0054a81e mov dword ptr [eax], 0x38 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x38u); }
  /* 0054a824 mov byte ptr [eax + 0x34], 0xff */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)(0xffu); }
  /* 0054a828 mov byte ptr [eax + 0x35], 0xff */ { const u32 m_ = (u32)(eax + 0x35u); M8(m_) = (u8)(0xffu); }
  /* 0054a82c mov byte ptr [eax + 0x36], 0xff */ { const u32 m_ = (u32)(eax + 0x36u); M8(m_) = (u8)(0xffu); }
  /* 0054a830 mov byte ptr [eax + 0x37], 0xff */ { const u32 m_ = (u32)(eax + 0x37u); M8(m_) = (u8)(0xffu); }
  /* 0054a834 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0054a837 jmp 0x54a894 */ goto L_0054a894;
L_0054a839:;
  /* 0054a839 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054a83b mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0054a83e jmp 0x54a894 */ goto L_0054a894;
L_0054a840:;
  /* 0054a840 push 0x38 */ { u32 v_ = 0x38u; esp -= 4; M32(esp) = v_; }
  /* 0054a842 call 0x5fe934 */ esp -= 4; M32(esp) = 0x54a847u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x54a842u); RETCHK(0x54a847u, 0x54a842u); LOADALL;
  /* 0054a847 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054a84a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a84c je 0x54a88f */ if (ZF_) goto L_0054a88f;
  /* 0054a84e mov ecx, 0x3f800000 */ { ecx = (u32)(0x3f800000u); }
  /* 0054a853 mov dword ptr [eax + 0xc], ebx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0054a856 mov dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0054a859 mov dword ptr [eax + 8], ebx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0054a85c mov dword ptr [eax + 0x10], ebx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ebx); }
  /* 0054a85f mov dword ptr [eax + 0x14], ebx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0054a862 mov dword ptr [eax + 0x18], ebx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ebx); }
  /* 0054a865 mov dword ptr [eax + 0x1c], ebx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 0054a868 mov dword ptr [eax + 0x20], ebx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ebx); }
  /* 0054a86b mov dword ptr [eax + 0x24], ebx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(ebx); }
  /* 0054a86e mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 0054a871 mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0054a874 mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 0054a877 mov dword ptr [eax], 0x38 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x38u); }
  /* 0054a87d mov byte ptr [eax + 0x34], 0xff */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)(0xffu); }
  /* 0054a881 mov byte ptr [eax + 0x35], 0xff */ { const u32 m_ = (u32)(eax + 0x35u); M8(m_) = (u8)(0xffu); }
  /* 0054a885 mov byte ptr [eax + 0x36], 0xff */ { const u32 m_ = (u32)(eax + 0x36u); M8(m_) = (u8)(0xffu); }
  /* 0054a889 mov byte ptr [eax + 0x37], 0xff */ { const u32 m_ = (u32)(eax + 0x37u); M8(m_) = (u8)(0xffu); }
  /* 0054a88d jmp 0x54a891 */ goto L_0054a891;
L_0054a88f:;
  /* 0054a88f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0054a891:;
  /* 0054a891 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_0054a894:;
  /* 0054a894 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a896 je 0x54a8c6 */ if (ZF_) goto L_0054a8c6;
  /* 0054a898 mov edi, eax */ { edi = (u32)(eax); }
  /* 0054a89a mov ecx, 0xd */ { ecx = (u32)(0xdu); }
  /* 0054a89f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0054a8a1 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 0054a8a4 mov edi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edi = (u32)(M32(m_)); }
  /* 0054a8a7 mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0054a8aa mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0054a8ac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054a8ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a8ae call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a8b1u; SAVEALL; call_ind(c, t_); RETCHK(0x54a8b1u, 0x54a8aeu); LOADALL; }
  /* 0054a8b1 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0054a8b4 and dword ptr [eax + 0xc], 0xdfffffff */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = M32(m_), b_ = 0xdfffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0054a8bb mov ecx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0054a8be mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0054a8c1 mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 0054a8c4 mov esi, edi */ { esi = (u32)(edi); }
L_0054a8c6:;
  /* 0054a8c6 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054a8c9 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a8cb mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0054a8ce jne 0x54a7d3 */ if (!ZF_) goto L_0054a7d3;
  /* 0054a8d4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054a8d7 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 0054a8da mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0054a8dd mov dword ptr [edi + 0x2c], ecx */ { const u32 m_ = (u32)(edi + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0054a8e0 mov dword ptr [eax + 0x14], edi */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edi); }
  /* 0054a8e3 jmp 0x54a8ff */ goto L_0054a8ff;
L_0054a8e5:;
  /* 0054a8e5 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 0054a8e8 mov edx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); edx = (u32)(M32(m_)); }
  /* 0054a8eb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054a8ec call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54a8f1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54a8ecu); RETCHK(0x54a8f1u, 0x54a8ecu); LOADALL;
  /* 0054a8f1 mov dword ptr [esi + 0x28], ebx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(ebx); }
  /* 0054a8f4 jmp 0x54a8fc */ goto L_0054a8fc;
L_0054a8f6:;
  /* 0054a8f6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a8f7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54a8fcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54a8f7u); RETCHK(0x54a8fcu, 0x54a8f7u); LOADALL;
L_0054a8fc:;
  /* 0054a8fc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054a8ff:;
  /* 0054a8ff mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0054a902 mov eax, dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0054a905 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a907 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0054a90a jne 0x54a6f6 */ if (!ZF_) goto L_0054a6f6;
  /* 0054a910 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
L_0054a913:;
  /* 0054a913 mov eax, edi */ { eax = (u32)(edi); }
  /* 0054a915 mov dword ptr [edi + 0x28], ebx */ { const u32 m_ = (u32)(edi + 0x28u); M32(m_) = (u32)(ebx); }
  /* 0054a918 call 0x54ada0 */ esp -= 4; M32(esp) = 0x54a91du; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x54a918u); RETCHK(0x54a91du, 0x54a918u); LOADALL;
  /* 0054a91d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054a91e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054a91f mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054a924 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054a925 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054a927 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054a928 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054a930(CPU *c) {
  NATIVE_HOOK(0x54a930u) REGS; LOADALL;
L_0054a930:;
  /* 0054a930 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054a931 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054a933 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054a935 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054a937 call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a93au; SAVEALL; call_ind(c, t_); RETCHK(0x54a93au, 0x54a937u); LOADALL; }
  /* 0054a93a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a93c jne 0x54a942 */ if (!ZF_) goto L_0054a942;
  /* 0054a93e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054a93f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054a942:;
  /* 0054a942 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054a945 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a947 je 0x54a959 */ if (ZF_) goto L_0054a959;
  /* 0054a949 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054a94c mov edx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edx = (u32)(M32(m_)); }
  /* 0054a94f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a950 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054a951 call 0x5abec0 */ esp -= 4; M32(esp) = 0x54a956u; SAVEALL; F_005abec0(c); ABI_CHECK(0x5abec0u, 0x54a951u); RETCHK(0x54a956u, 0x54a951u); LOADALL;
  /* 0054a956 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054a959:;
  /* 0054a959 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054a95e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054a95f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054a970(CPU *c) {
  NATIVE_HOOK(0x54a970u) REGS; LOADALL;
L_0054a970:;
  /* 0054a970 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054a973 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054a975 je 0x54a980 */ if (ZF_) goto L_0054a980;
  /* 0054a977 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054a978 call 0x5ac090 */ esp -= 4; M32(esp) = 0x54a97du; SAVEALL; F_005ac090(c); ABI_CHECK(0x5ac090u, 0x54a978u); RETCHK(0x54a97du, 0x54a978u); LOADALL;
  /* 0054a97d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054a980:;
  /* 0054a980 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054a982 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054a984 call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54a987u; SAVEALL; call_ind(c, t_); RETCHK(0x54a987u, 0x54a984u); LOADALL; }
  /* 0054a987 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054a98c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054a990(CPU *c) {
  NATIVE_HOOK(0x54a990u) REGS; LOADALL;
L_0054a990:;
  /* 0054a990 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054a991 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054a993 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054a994 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054a995 call 0x5ab9b0 */ esp -= 4; M32(esp) = 0x54a99au; SAVEALL; F_005ab9b0(c); ABI_CHECK(0x5ab9b0u, 0x54a995u); RETCHK(0x54a99au, 0x54a995u); LOADALL;
  /* 0054a99a mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054a99d mov edi, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); edi = (u32)(M32(m_)); }
  /* 0054a9a0 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0054a9a2 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a9a4 mov dword ptr [ecx + 0x18], eax */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(eax); }
  /* 0054a9a7 je 0x54aa40 */ if (ZF_) goto L_0054aa40;
  /* 0054a9ad push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054a9ae mov edi, edi */ { edi = (u32)(edi); }
L_0054a9b0:;
  /* 0054a9b0 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054a9b3 sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054a9b5 je 0x54a9d8 */ if (ZF_) goto L_0054a9d8;
  /* 0054a9b7 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0054a9b8 je 0x54a9bf */ if (ZF_) goto L_0054a9bf;
  /* 0054a9ba mov dword ptr [edi + 0x28], ebx */ { const u32 m_ = (u32)(edi + 0x28u); M32(m_) = (u32)(ebx); }
  /* 0054a9bd jmp 0x54a9f6 */ goto L_0054a9f6;
L_0054a9bf:;
  /* 0054a9bf push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0054a9c1 call 0x5fe934 */ esp -= 4; M32(esp) = 0x54a9c6u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x54a9c1u); RETCHK(0x54a9c6u, 0x54a9c1u); LOADALL;
  /* 0054a9c6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054a9c9 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a9cb je 0x54a9f1 */ if (ZF_) goto L_0054a9f1;
  /* 0054a9cd lea ecx, [edi + 0x30] */ ecx = (u32)((u32)(edi + 0x30u));
  /* 0054a9d0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054a9d1 call 0x54af40 */ esp -= 4; M32(esp) = 0x54a9d6u; SAVEALL; F_0054af40(c); ABI_CHECK(0x54af40u, 0x54a9d1u); RETCHK(0x54a9d6u, 0x54a9d1u); LOADALL;
  /* 0054a9d6 jmp 0x54a9f3 */ goto L_0054a9f3;
L_0054a9d8:;
  /* 0054a9d8 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 0054a9da call 0x5fe934 */ esp -= 4; M32(esp) = 0x54a9dfu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x54a9dau); RETCHK(0x54a9dfu, 0x54a9dau); LOADALL;
  /* 0054a9df add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054a9e2 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a9e4 je 0x54a9f1 */ if (ZF_) goto L_0054a9f1;
  /* 0054a9e6 lea edx, [edi + 0x30] */ edx = (u32)((u32)(edi + 0x30u));
  /* 0054a9e9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054a9ea call 0x54b260 */ esp -= 4; M32(esp) = 0x54a9efu; SAVEALL; F_0054b260(c); ABI_CHECK(0x54b260u, 0x54a9eau); RETCHK(0x54a9efu, 0x54a9eau); LOADALL;
  /* 0054a9ef jmp 0x54a9f3 */ goto L_0054a9f3;
L_0054a9f1:;
  /* 0054a9f1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0054a9f3:;
  /* 0054a9f3 mov dword ptr [edi + 0x28], eax */ { const u32 m_ = (u32)(edi + 0x28u); M32(m_) = (u32)(eax); }
L_0054a9f6:;
  /* 0054a9f6 mov esi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0054a9f9 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054a9fb je 0x54aa31 */ if (ZF_) goto L_0054aa31;
  /* 0054a9fd mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054aa00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054aa01 call 0x54a930 */ esp -= 4; M32(esp) = 0x54aa06u; SAVEALL; F_0054a930(c); ABI_CHECK(0x54a930u, 0x54aa01u); RETCHK(0x54aa06u, 0x54aa01u); LOADALL;
  /* 0054aa06 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054aa08 jne 0x54aa1b */ if (!ZF_) goto L_0054aa1b;
  /* 0054aa0a mov ecx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0054aa0d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054aa0e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54aa13u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54aa0eu); RETCHK(0x54aa13u, 0x54aa0eu); LOADALL;
  /* 0054aa13 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054aa16 mov dword ptr [edi + 0x28], ebx */ { const u32 m_ = (u32)(edi + 0x28u); M32(m_) = (u32)(ebx); }
  /* 0054aa19 jmp 0x54aa31 */ goto L_0054aa31;
L_0054aa1b:;
  /* 0054aa1b mov esi, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); esi = (u32)(M32(m_)); }
  /* 0054aa1e cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054aa20 je 0x54aa31 */ if (ZF_) goto L_0054aa31;
L_0054aa22:;
  /* 0054aa22 mov ecx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0054aa25 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0054aa27 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054aa28 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54aa2au; SAVEALL; call_ind(c, t_); RETCHK(0x54aa2au, 0x54aa28u); LOADALL; }
  /* 0054aa2a mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0054aa2d cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054aa2f jne 0x54aa22 */ if (!ZF_) goto L_0054aa22;
L_0054aa31:;
  /* 0054aa31 mov edi, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); edi = (u32)(M32(m_)); }
  /* 0054aa34 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054aa36 jne 0x54a9b0 */ if (!ZF_) goto L_0054a9b0;
  /* 0054aa3c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054aa3f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0054aa40:;
  /* 0054aa40 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0054aa42 mov dword ptr [ecx + 0x28], ebx */ { const u32 m_ = (u32)(ecx + 0x28u); M32(m_) = (u32)(ebx); }
  /* 0054aa45 call 0x54ada0 */ esp -= 4; M32(esp) = 0x54aa4au; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x54aa45u); RETCHK(0x54aa4au, 0x54aa45u); LOADALL;
  /* 0054aa4a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054aa4b mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054aa50 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054aa51 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054aa52 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054aa60(CPU *c) {
  NATIVE_HOOK(0x54aa60u) REGS; LOADALL;
L_0054aa60:;
  /* 0054aa60 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054aa63 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054aa64 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0054aa66 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054aa68 je 0x54aa7f */ if (ZF_) goto L_0054aa7f;
  /* 0054aa6a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0054aa70:;
  /* 0054aa70 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054aa73 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054aa75 call 0x54acf0 */ esp -= 4; M32(esp) = 0x54aa7au; SAVEALL; F_0054acf0(c); ABI_CHECK(0x54acf0u, 0x54aa75u); RETCHK(0x54aa7au, 0x54aa75u); LOADALL;
  /* 0054aa7a cmp dword ptr [esi + 0x14], edi */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054aa7d jne 0x54aa70 */ if (!ZF_) goto L_0054aa70;
L_0054aa7f:;
  /* 0054aa7f mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054aa82 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054aa84 je 0x54aa92 */ if (ZF_) goto L_0054aa92;
  /* 0054aa86 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054aa87 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54aa8cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54aa87u); RETCHK(0x54aa8cu, 0x54aa87u); LOADALL;
  /* 0054aa8c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054aa8f mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
L_0054aa92:;
  /* 0054aa92 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0054aa95 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054aa97 je 0x54aaa5 */ if (ZF_) goto L_0054aaa5;
  /* 0054aa99 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054aa9a call 0x5abaa0 */ esp -= 4; M32(esp) = 0x54aa9fu; SAVEALL; F_005abaa0(c); ABI_CHECK(0x5abaa0u, 0x54aa9au); RETCHK(0x54aa9fu, 0x54aa9au); LOADALL;
  /* 0054aa9f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054aaa2 mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
L_0054aaa5:;
  /* 0054aaa5 mov dword ptr [esi + 0x30], edi */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(edi); }
  /* 0054aaa8 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054aaad pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054aaae ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054aab0(CPU *c) {
  NATIVE_HOOK(0x54aab0u) REGS; LOADALL;
L_0054aab0:;
  /* 0054aab0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054aab1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054aab3 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0054aab6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054aab7 fmul dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054aaba fadd dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0054aabd fst dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); MF32(m_) = (float)ST(0); }
  /* 0054aac0 fcomp dword ptr [0x656da4] */ { const u32 m_ = (u32)(0x656da4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0054aac6 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0054aac8 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054aacb jne 0x54ab1c */ if (!ZF_) goto L_0054ab1c;
  /* 0054aacd mov edx, 1 */ { edx = (u32)(0x1u); }
L_0054aad2:;
  /* 0054aad2 fld dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0054aad5 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0054aad8 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054aada fsub dword ptr [0x656da4] */ { const u32 m_ = (u32)(0x656da4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054aae0 fstp dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054aae3 jne 0x54ab0c */ if (!ZF_) goto L_0054ab0c;
  /* 0054aae5 mov edi, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edi = (u32)(M32(m_)); }
  /* 0054aae8 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054aaeb inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054aaec mov eax, edi */ { eax = (u32)(edi); }
  /* 0054aaee cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054aaf0 mov dword ptr [esi + 0x20], edi */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edi); }
  /* 0054aaf3 jle 0x54ab0c */ if ((ZF_|LT_)) goto L_0054ab0c;
  /* 0054aaf5 mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 0054aaf8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054aafa je 0x54ab05 */ if (ZF_) goto L_0054ab05;
  /* 0054aafc mov dword ptr [esi + 0x20], 0 */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(0x0u); }
  /* 0054ab03 jmp 0x54ab0c */ goto L_0054ab0c;
L_0054ab05:;
  /* 0054ab05 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054ab07 call 0x54ada0 */ esp -= 4; M32(esp) = 0x54ab0cu; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x54ab07u); RETCHK(0x54ab0cu, 0x54ab07u); LOADALL;
L_0054ab0c:;
  /* 0054ab0c fld dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0054ab0f fcomp dword ptr [0x656da4] */ { const u32 m_ = (u32)(0x656da4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0054ab15 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0054ab17 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054ab1a je 0x54aad2 */ if (ZF_) goto L_0054aad2;
L_0054ab1c:;
  /* 0054ab1c mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 0054ab1f cmp eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ab22 jne 0x54ab2b */ if (!ZF_) goto L_0054ab2b;
  /* 0054ab24 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 0054ab27 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ab29 je 0x54ab58 */ if (ZF_) goto L_0054ab58;
L_0054ab2b:;
  /* 0054ab2b mov edi, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edi = (u32)(M32(m_)); }
  /* 0054ab2e test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ab30 je 0x54ab4b */ if (ZF_) goto L_0054ab4b;
L_0054ab32:;
  /* 0054ab32 mov eax, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (u32)(M32(m_)); }
  /* 0054ab35 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ab37 je 0x54ab44 */ if (ZF_) goto L_0054ab44;
  /* 0054ab39 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0054ab3b mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0054ab3e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0054ab40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ab41 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54ab44u; SAVEALL; call_ind(c, t_); RETCHK(0x54ab44u, 0x54ab41u); LOADALL; }
L_0054ab44:;
  /* 0054ab44 mov edi, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); edi = (u32)(M32(m_)); }
  /* 0054ab47 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ab49 jne 0x54ab32 */ if (!ZF_) goto L_0054ab32;
L_0054ab4b:;
  /* 0054ab4b mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0054ab4e mov dword ptr [esi + 0x24], ecx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ecx); }
  /* 0054ab51 mov dword ptr [esi + 0x28], 0 */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0x0u); }
L_0054ab58:;
  /* 0054ab58 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054ab59 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054ab5a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054ab60(CPU *c) {
  NATIVE_HOOK(0x54ab60u) REGS; LOADALL;
L_0054ab60:;
  /* 0054ab60 mov ecx, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0054ab63 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ab65 jl 0x54ab8a */ if (LT_) goto L_0054ab8a;
  /* 0054ab67 cmp ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ab6a jge 0x54ab8a */ if (!LT_) goto L_0054ab8a;
  /* 0054ab6c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054ab6d mov esi, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); esi = (u32)(M32(m_)); }
  /* 0054ab70 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ab72 je 0x54ab89 */ if (ZF_) goto L_0054ab89;
L_0054ab74:;
  /* 0054ab74 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 0054ab77 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ab79 je 0x54ab82 */ if (ZF_) goto L_0054ab82;
  /* 0054ab7b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0054ab7d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054ab7f call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54ab82u; SAVEALL; call_ind(c, t_); RETCHK(0x54ab82u, 0x54ab7fu); LOADALL; }
L_0054ab82:;
  /* 0054ab82 mov esi, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); esi = (u32)(M32(m_)); }
  /* 0054ab85 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ab87 jne 0x54ab74 */ if (!ZF_) goto L_0054ab74;
L_0054ab89:;
  /* 0054ab89 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0054ab8a:;
  /* 0054ab8a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054ab90(CPU *c) {
  NATIVE_HOOK(0x54ab90u) REGS; LOADALL;
L_0054ab90:;
  /* 0054ab90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054ab91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054ab93 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054ab94 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054ab95 mov edi, eax */ { edi = (u32)(eax); }
  /* 0054ab97 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054ab9a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ab9c jne 0x54abc5 */ if (!ZF_) goto L_0054abc5;
  /* 0054ab9e push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0054aba0 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054aba3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054aba4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054aba5 call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x54abaau; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x54aba5u); RETCHK(0x54abaau, 0x54aba5u); LOADALL;
  /* 0054abaa add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054abad cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054abb0 jne 0x54abc5 */ if (!ZF_) goto L_0054abc5;
  /* 0054abb2 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054abb5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054abb6 call 0x5fe934 */ esp -= 4; M32(esp) = 0x54abbbu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x54abb6u); RETCHK(0x54abbbu, 0x54abb6u); LOADALL;
  /* 0054abbb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054abbe test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054abc0 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0054abc3 jne 0x54abcc */ if (!ZF_) goto L_0054abcc;
L_0054abc5:;
  /* 0054abc5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054abc7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054abc8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054abca pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054abcb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054abcc:;
  /* 0054abcc mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054abcf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054abd0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054abd1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054abd2 mov dword ptr [esi + 0x10], ecx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0054abd5 call 0x5b2fe0 */ esp -= 4; M32(esp) = 0x54abdau; SAVEALL; F_005b2fe0(c); ABI_CHECK(0x5b2fe0u, 0x54abd5u); RETCHK(0x54abdau, 0x54abd5u); LOADALL;
  /* 0054abda mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054abdd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0054abdf mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0054abe1 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054abe4 mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 0054abe6 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0054abe8 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054abeb mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 0054abee mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0054abf0 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0054abf3 mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 0054abf6 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054abf9 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054abfb add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054abfe cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ac00 jae 0x54acb3 */ if (!CF_) goto L_0054acb3;
  /* 0054ac06 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054ac07 jmp 0x54ac10 */ goto L_0054ac10;
L_0054ac10:;
  /* 0054ac10 cmp dword ptr [ecx], 0x12345678 */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = 0x12345678u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ac16 jne 0x54acb2 */ if (!ZF_) goto L_0054acb2;
  /* 0054ac1c mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054ac1f add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054ac22 cmp edx, 0x64 */ { u32 a_ = edx, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ac25 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0054ac27 je 0x54ac30 */ if (ZF_) goto L_0054ac30;
  /* 0054ac29 mov dword ptr [esi + 0x30], 1 */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(0x1u); }
L_0054ac30:;
  /* 0054ac30 mov edx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); edx = (u32)(M32(m_)); }
  /* 0054ac33 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 0054ac35 or edx, 0x20000000 */ { u32 a_ = edx, b_ = 0x20000000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0054ac3b mov dword ptr [eax + 0x34], edx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(edx); }
  /* 0054ac3e xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0054ac40 mov dword ptr [eax + 0x30], ebx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ebx); }
  /* 0054ac43 mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 0054ac46 mov dword ptr [eax + 0x2c], edx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(edx); }
  /* 0054ac49 mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 0054ac4c add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054ac4e add edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054ac51 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ac53 mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0054ac56 jae 0x54aca4 */ if (!CF_) goto L_0054aca4;
L_0054ac58:;
  /* 0054ac58 cmp dword ptr [ecx], 0x87654321 */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = 0x87654321u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ac5e jne 0x54aca4 */ if (!ZF_) goto L_0054aca4;
  /* 0054ac60 mov edi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edi = (u32)(M32(m_)); }
  /* 0054ac63 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054ac66 sub edi, 0 */ { u32 a_ = edi, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0054ac69 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0054ac6b je 0x54ac70 */ if (ZF_) goto L_0054ac70;
  /* 0054ac6d dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0054ac6e jne 0x54ac7c */ if (!ZF_) goto L_0054ac7c;
L_0054ac70:;
  /* 0054ac70 cmp dword ptr [ecx], 0x38 */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ac73 je 0x54ac7c */ if (ZF_) goto L_0054ac7c;
  /* 0054ac75 mov dword ptr [esi + 0x30], 1 */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(0x1u); }
L_0054ac7c:;
  /* 0054ac7c add ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054ac7e mov edi, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edi = (u32)(M32(m_)); }
  /* 0054ac81 or edi, 0x20000000 */ { u32 a_ = edi, b_ = 0x20000000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0054ac87 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ac89 mov dword ptr [edx + 0xc], edi */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(edi); }
  /* 0054ac8c je 0x54ac93 */ if (ZF_) goto L_0054ac93;
  /* 0054ac8e mov dword ptr [ebx + 4], edx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0054ac91 jmp 0x54ac96 */ goto L_0054ac96;
L_0054ac93:;
  /* 0054ac93 mov dword ptr [eax + 0x30], edx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(edx); }
L_0054ac96:;
  /* 0054ac96 mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 0054ac99 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 0054ac9b mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 0054ac9e add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054aca0 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054aca2 jb 0x54ac58 */ if (CF_) goto L_0054ac58;
L_0054aca4:;
  /* 0054aca4 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054aca7 add eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054acaa cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054acac jb 0x54ac10 */ if (CF_) goto L_0054ac10;
L_0054acb2:;
  /* 0054acb2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0054acb3:;
  /* 0054acb3 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054acb6 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054acb8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054acba je 0x54acd5 */ if (ZF_) goto L_0054acd5;
  /* 0054acbc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0054acc0:;
  /* 0054acc0 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054acc3 mov edx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); edx = (u32)(M32(m_)); }
  /* 0054acc6 mov dword ptr [esi + 0x14], edx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edx); }
  /* 0054acc9 mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0054accc mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0054acce mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054acd1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054acd3 jne 0x54acc0 */ if (!ZF_) goto L_0054acc0;
L_0054acd5:;
  /* 0054acd5 mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0054acd8 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054acdd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054acde mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054ace0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054ace1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054acf0(CPU *c) {
  NATIVE_HOOK(0x54acf0u) REGS; LOADALL;
L_0054acf0:;
  /* 0054acf0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054acf1 mov ebx, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); ebx = (u32)(M32(m_)); }
  /* 0054acf4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054acf5 mov esi, eax */ { esi = (u32)(eax); }
  /* 0054acf7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054acf9 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054acfb je 0x54ad6e */ if (ZF_) goto L_0054ad6e;
  /* 0054acfd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_0054ad00:;
  /* 0054ad00 cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ad02 je 0x54ad15 */ if (ZF_) goto L_0054ad15;
  /* 0054ad04 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054ad06 mov ebx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 0054ad09 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ad0b jne 0x54ad00 */ if (!ZF_) goto L_0054ad00;
  /* 0054ad0d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054ad0e mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054ad13 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054ad14 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054ad15:;
  /* 0054ad15 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ad17 je 0x54ad6e */ if (ZF_) goto L_0054ad6e;
  /* 0054ad19 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ad1b je 0x54ad25 */ if (ZF_) goto L_0054ad25;
  /* 0054ad1d mov ecx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0054ad20 mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0054ad23 jmp 0x54ad2b */ goto L_0054ad2b;
L_0054ad25:;
  /* 0054ad25 mov edx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); edx = (u32)(M32(m_)); }
  /* 0054ad28 mov dword ptr [ecx + 0x14], edx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(edx); }
L_0054ad2b:;
  /* 0054ad2b mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 0054ad2e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ad30 je 0x54ad41 */ if (ZF_) goto L_0054ad41;
L_0054ad32:;
  /* 0054ad32 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054ad35 call 0x54adc0 */ esp -= 4; M32(esp) = 0x54ad3au; SAVEALL; F_0054adc0(c); ABI_CHECK(0x54adc0u, 0x54ad35u); RETCHK(0x54ad3au, 0x54ad35u); LOADALL;
  /* 0054ad3a mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 0054ad3d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ad3f jne 0x54ad32 */ if (!ZF_) goto L_0054ad32;
L_0054ad41:;
  /* 0054ad41 mov eax, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); eax = (u32)(M32(m_)); }
  /* 0054ad44 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ad46 je 0x54ad5c */ if (ZF_) goto L_0054ad5c;
  /* 0054ad48 mov esi, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0054ad4b call 0x54a970 */ esp -= 4; M32(esp) = 0x54ad50u; SAVEALL; F_0054a970(c); ABI_CHECK(0x54a970u, 0x54ad4bu); RETCHK(0x54ad50u, 0x54ad4bu); LOADALL;
  /* 0054ad50 mov eax, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); eax = (u32)(M32(m_)); }
  /* 0054ad53 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ad54 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54ad59u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54ad54u); RETCHK(0x54ad59u, 0x54ad54u); LOADALL;
  /* 0054ad59 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054ad5c:;
  /* 0054ad5c test dword ptr [ebx + 0x34], 0x20000000 */ { const u32 m_ = (u32)(ebx + 0x34u); u32 a_ = M32(m_), b_ = 0x20000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ad63 jne 0x54ad6e */ if (!ZF_) goto L_0054ad6e;
  /* 0054ad65 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054ad66 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54ad6bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54ad66u); RETCHK(0x54ad6bu, 0x54ad66u); LOADALL;
  /* 0054ad6b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054ad6e:;
  /* 0054ad6e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054ad6f mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054ad74 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054ad75 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054ad80(CPU *c) {
  NATIVE_HOOK(0x54ad80u) REGS; LOADALL;
L_0054ad80:;
  /* 0054ad80 mov dword ptr [eax + 0x2c], 1 */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(0x1u); }
  /* 0054ad87 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054ad90(CPU *c) {
  NATIVE_HOOK(0x54ad90u) REGS; LOADALL;
L_0054ad90:;
  /* 0054ad90 cmp dword ptr [eax + 0x2c], 1 */ { const u32 m_ = (u32)(eax + 0x2cu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ad94 jne 0x54ad9d */ if (!ZF_) goto L_0054ad9d;
  /* 0054ad96 mov dword ptr [eax + 0x2c], 2 */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(0x2u); }
L_0054ad9d:;
  /* 0054ad9d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054ada0(CPU *c) {
  NATIVE_HOOK(0x54ada0u) REGS; LOADALL;
L_0054ada0:;
  /* 0054ada0 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054ada2 mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0054ada5 mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0054ada8 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054adab mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0054adae mov dword ptr [eax + 0x24], ecx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(ecx); }
  /* 0054adb1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054adc0(CPU *c) {
  NATIVE_HOOK(0x54adc0u) REGS; LOADALL;
L_0054adc0:;
  /* 0054adc0 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054adc2 jne 0x54adc7 */ if (!ZF_) goto L_0054adc7;
  /* 0054adc4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054adc6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054adc7:;
  /* 0054adc7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054adc8 mov esi, dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); esi = (u32)(M32(m_)); }
  /* 0054adcb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054adcc xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0054adce test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054add0 je 0x54ade0 */ if (ZF_) goto L_0054ade0;
L_0054add2:;
  /* 0054add2 cmp dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054add5 je 0x54ade5 */ if (ZF_) goto L_0054ade5;
  /* 0054add7 mov edi, esi */ { edi = (u32)(esi); }
  /* 0054add9 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0054addc test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054adde jne 0x54add2 */ if (!ZF_) goto L_0054add2;
L_0054ade0:;
  /* 0054ade0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054ade1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054ade3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054ade4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054ade5:;
  /* 0054ade5 mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0054ade8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054adea je 0x54adf2 */ if (ZF_) goto L_0054adf2;
  /* 0054adec mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054adee push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054adef call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54adf2u; SAVEALL; call_ind(c, t_); RETCHK(0x54adf2u, 0x54adefu); LOADALL; }
L_0054adf2:;
  /* 0054adf2 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054adf4 je 0x54adfe */ if (ZF_) goto L_0054adfe;
  /* 0054adf6 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054adf9 mov dword ptr [edi + 4], ecx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0054adfc jmp 0x54ae04 */ goto L_0054ae04;
L_0054adfe:;
  /* 0054adfe mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054ae01 mov dword ptr [ebx + 0x30], edx */ { const u32 m_ = (u32)(ebx + 0x30u); M32(m_) = (u32)(edx); }
L_0054ae04:;
  /* 0054ae04 test dword ptr [esi + 0xc], 0x20000000 */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M32(m_), b_ = 0x20000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ae0b jne 0x54ae16 */ if (!ZF_) goto L_0054ae16;
  /* 0054ae0d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054ae0e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54ae13u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54ae0eu); RETCHK(0x54ae13u, 0x54ae0eu); LOADALL;
  /* 0054ae13 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054ae16:;
  /* 0054ae16 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054ae17 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054ae1c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054ae1d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054ae20(CPU *c) {
  NATIVE_HOOK(0x54ae20u) REGS; LOADALL;
L_0054ae20:;
  /* 0054ae20 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054ae25 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0054ae30(CPU *c) {
  NATIVE_HOOK(0x54ae30u) REGS; LOADALL;
L_0054ae30:;
  /* 0054ae30 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054ae35 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054ae40(CPU *c) {
  NATIVE_HOOK(0x54ae40u) REGS; LOADALL;
L_0054ae40:;
  /* 0054ae40 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054ae42 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0054ae50(CPU *c) {
  NATIVE_HOOK(0x54ae50u) REGS; LOADALL;
L_0054ae50:;
  /* 0054ae50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054ae51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054ae53 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054ae54 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054ae57 test esi, 0x40000000 */ { u32 a_ = esi, b_ = 0x40000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ae5d jne 0x54ae6e */ if (!ZF_) goto L_0054ae6e;
  /* 0054ae5f mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0054ae64 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054ae66 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0054ae68 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54ae6bu; SAVEALL; call_ind(c, t_); RETCHK(0x54ae6bu, 0x54ae68u); LOADALL; }
  /* 0054ae6b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054ae6e:;
  /* 0054ae6e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ae70 js 0x54ae82 */ if (SF_) goto L_0054ae82;
  /* 0054ae72 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0054ae78 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054ae7a push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0054ae7c call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54ae7fu; SAVEALL; call_ind(c, t_); RETCHK(0x54ae7fu, 0x54ae7cu); LOADALL; }
  /* 0054ae7f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054ae82:;
  /* 0054ae82 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054ae84 sar eax, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0054ae87 and eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054ae8a cmp ax, 5 */ { u32 a_ = (eax & 0xffffu), b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0054ae8e je 0x54aea1 */ if (ZF_) goto L_0054aea1;
  /* 0054ae90 movsx edx, ax */ { edx = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 0054ae93 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0054ae98 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ae99 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0054ae9b call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54ae9eu; SAVEALL; call_ind(c, t_); RETCHK(0x54ae9eu, 0x54ae9bu); LOADALL; }
  /* 0054ae9e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054aea1:;
  /* 0054aea1 sar esi, 0x14 */ { u32 n_ = (20u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0054aea4 and esi, 0xf */ { u32 a_ = esi, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0054aea7 cmp si, 6 */ { u32 a_ = (esi & 0xffffu), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0054aeab je 0x54aebf */ if (ZF_) goto L_0054aebf;
  /* 0054aead mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0054aeb3 movsx ecx, si */ { ecx = (u32)((u32)sxt((esi & 0xffffu), 2) & 0xffffffffu); }
  /* 0054aeb6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054aeb7 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0054aeb9 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54aebcu; SAVEALL; call_ind(c, t_); RETCHK(0x54aebcu, 0x54aeb9u); LOADALL; }
  /* 0054aebc add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054aebf:;
  /* 0054aebf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054aec0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054aec1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054aed0(CPU *c) {
  NATIVE_HOOK(0x54aed0u) REGS; LOADALL;
L_0054aed0:;
  /* 0054aed0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054aed1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054aed3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054aed4 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054aed7 test esi, 0x40000000 */ { u32 a_ = esi, b_ = 0x40000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054aedd jne 0x54aeee */ if (!ZF_) goto L_0054aeee;
  /* 0054aedf mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0054aee4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054aee6 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0054aee8 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54aeebu; SAVEALL; call_ind(c, t_); RETCHK(0x54aeebu, 0x54aee8u); LOADALL; }
  /* 0054aeeb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054aeee:;
  /* 0054aeee test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054aef0 js 0x54af02 */ if (SF_) goto L_0054af02;
  /* 0054aef2 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0054aef8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054aefa push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0054aefc call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54aeffu; SAVEALL; call_ind(c, t_); RETCHK(0x54aeffu, 0x54aefcu); LOADALL; }
  /* 0054aeff add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054af02:;
  /* 0054af02 mov edx, esi */ { edx = (u32)(esi); }
  /* 0054af04 sar edx, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0054af07 and dl, 0xf */ { u32 a_ = (edx & 0xffu), b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054af0a cmp dl, 5 */ { u32 a_ = (edx & 0xffu), b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054af0d je 0x54af1e */ if (ZF_) goto L_0054af1e;
  /* 0054af0f mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0054af14 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0054af16 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0054af18 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54af1bu; SAVEALL; call_ind(c, t_); RETCHK(0x54af1bu, 0x54af18u); LOADALL; }
  /* 0054af1b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054af1e:;
  /* 0054af1e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054af20 sar ecx, 0x14 */ { u32 n_ = (20u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0054af23 and cl, 0xf */ { u32 a_ = (ecx & 0xffu), b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054af26 cmp cl, 6 */ { u32 a_ = (ecx & 0xffu), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054af29 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054af2a je 0x54af3c */ if (ZF_) goto L_0054af3c;
  /* 0054af2c mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0054af32 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0054af34 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0054af36 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54af39u; SAVEALL; call_ind(c, t_); RETCHK(0x54af39u, 0x54af36u); LOADALL; }
  /* 0054af39 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054af3c:;
  /* 0054af3c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054af3d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054af40(CPU *c) {
  NATIVE_HOOK(0x54af40u) REGS; LOADALL;
L_0054af40:;
  /* 0054af40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054af41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054af43 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0054af48 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0054af4b mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0054af4e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054af51 mov dword ptr [eax + 0xc], 0 */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 0054af58 mov dword ptr [eax], 0x655068 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x655068u); }
  /* 0054af5e mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0054af61 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054af62 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054af70(CPU *c) {
  NATIVE_HOOK(0x54af70u) REGS; LOADALL;
L_0054af70:;
  /* 0054af70 mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 0054af73 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054af75 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054af77 je 0x54af8e */ if (ZF_) goto L_0054af8e;
  /* 0054af79 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054af7c mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 0054af7f mov dword ptr [edx + 0xc], eax */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(eax); }
  /* 0054af82 mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 0054af85 mov dword ptr [edx + 0x10], eax */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(eax); }
  /* 0054af88 mov ecx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054af8b mov byte ptr [ecx + 0x14], al */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)((eax & 0xffu)); }
L_0054af8e:;
  /* 0054af8e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054af90(CPU *c) {
  NATIVE_HOOK(0x54af90u) REGS; LOADALL;
L_0054af90:;
  /* 0054af90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054af91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054af93 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054af94 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054af97 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054af98 call 0x5e94e0 */ esp -= 4; M32(esp) = 0x54af9du; SAVEALL; F_005e94e0(c); ABI_CHECK(0x5e94e0u, 0x54af98u); RETCHK(0x54af9du, 0x54af98u); LOADALL;
  /* 0054af9d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054afa0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054afa2 je 0x54afb9 */ if (ZF_) goto L_0054afb9;
  /* 0054afa4 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054afa7 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0054afa9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054afaa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054afab call 0x5e9460 */ esp -= 4; M32(esp) = 0x54afb0u; SAVEALL; F_005e9460(c); ABI_CHECK(0x5e9460u, 0x54afabu); RETCHK(0x54afb0u, 0x54afabu); LOADALL;
  /* 0054afb0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054afb1 call 0x5e91c0 */ esp -= 4; M32(esp) = 0x54afb6u; SAVEALL; F_005e91c0(c); ABI_CHECK(0x5e91c0u, 0x54afb1u); RETCHK(0x54afb6u, 0x54afb1u); LOADALL;
  /* 0054afb6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054afb9:;
  /* 0054afb9 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054afbb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054afbc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054afbd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054afc0(CPU *c) {
  NATIVE_HOOK(0x54afc0u) REGS; LOADALL;
L_0054afc0:;
  /* 0054afc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054afc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054afc3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054afc6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054afc7 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054afca mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0054afcd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054afce push 0x54af90 */ { u32 v_ = 0x54af90u; esp -= 4; M32(esp) = v_; }
  /* 0054afd3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054afd4 call 0x57bed0 */ esp -= 4; M32(esp) = 0x54afd9u; SAVEALL; F_0057bed0(c); ABI_CHECK(0x57bed0u, 0x54afd4u); RETCHK(0x54afd9u, 0x54afd4u); LOADALL;
  /* 0054afd9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054afdc mov eax, esi */ { eax = (u32)(esi); }
  /* 0054afde pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054afdf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054afe0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054aff0(CPU *c) {
  NATIVE_HOOK(0x54aff0u) REGS; LOADALL;
L_0054aff0:;
  /* 0054aff0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054aff1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054aff3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054aff6 mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0054aff9 or dword ptr [ecx + 8], 0x40 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0054affd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054affe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054b000(CPU *c) {
  NATIVE_HOOK(0x54b000u) REGS; LOADALL;
L_0054b000:;
  /* 0054b000 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054b001 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054b003 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054b006 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0054b008 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054b00b mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0054b00e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054b00f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054b010(CPU *c) {
  NATIVE_HOOK(0x54b010u) REGS; LOADALL;
L_0054b010:;
  /* 0054b010 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054b011 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054b013 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054b016 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054b017 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054b01a mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0054b01d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b01e push 0x54b000 */ { u32 v_ = 0x54b000u; esp -= 4; M32(esp) = v_; }
  /* 0054b023 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b024 call 0x57bed0 */ esp -= 4; M32(esp) = 0x54b029u; SAVEALL; F_0057bed0(c); ABI_CHECK(0x57bed0u, 0x54b024u); RETCHK(0x54b029u, 0x54b024u); LOADALL;
  /* 0054b029 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b02c mov eax, esi */ { eax = (u32)(esi); }
  /* 0054b02e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054b02f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054b030 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054b040(CPU *c) {
  NATIVE_HOOK(0x54b040u) REGS; LOADALL;
L_0054b040:;
  /* 0054b040 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054b041 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054b043 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054b046 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054b049 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054b04c mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0054b04f mov cl, byte ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054b051 mov byte ptr [ebp + 0xb], cl */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054b054 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054b057 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0054b05a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054b05b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054b060(CPU *c) {
  NATIVE_HOOK(0x54b060u) REGS; LOADALL;
L_0054b060:;
  /* 0054b060 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054b061 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054b063 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054b066 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054b067 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054b06a mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0054b06d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b06e push 0x54b040 */ { u32 v_ = 0x54b040u; esp -= 4; M32(esp) = v_; }
  /* 0054b073 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b074 call 0x57bed0 */ esp -= 4; M32(esp) = 0x54b079u; SAVEALL; F_0057bed0(c); ABI_CHECK(0x57bed0u, 0x54b074u); RETCHK(0x54b079u, 0x54b074u); LOADALL;
  /* 0054b079 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b07c mov eax, esi */ { eax = (u32)(esi); }
  /* 0054b07e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054b07f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054b080 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054b090(CPU *c) {
  NATIVE_HOOK(0x54b090u) REGS; LOADALL;
L_0054b090:;
  /* 0054b090 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054b091 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054b093 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054b094 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0054b097 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054b098 call 0x5d3ae0 */ esp -= 4; M32(esp) = 0x54b09du; SAVEALL; F_005d3ae0(c); ABI_CHECK(0x5d3ae0u, 0x54b098u); RETCHK(0x54b09du, 0x54b098u); LOADALL;
  /* 0054b09d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b0a0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b0a2 je 0x54b0d4 */ if (ZF_) goto L_0054b0d4;
  /* 0054b0a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054b0a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054b0a6 call 0x5d3b00 */ esp -= 4; M32(esp) = 0x54b0abu; SAVEALL; F_005d3b00(c); ABI_CHECK(0x5d3b00u, 0x54b0a6u); RETCHK(0x54b0abu, 0x54b0a6u); LOADALL;
  /* 0054b0ab mov esi, eax */ { esi = (u32)(eax); }
  /* 0054b0ad mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054b0b0 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054b0b3 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0054b0b5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b0b6 call 0x5d3f90 */ esp -= 4; M32(esp) = 0x54b0bbu; SAVEALL; F_005d3f90(c); ABI_CHECK(0x5d3f90u, 0x54b0b6u); RETCHK(0x54b0bbu, 0x54b0b6u); LOADALL;
  /* 0054b0bb movsx ecx, word ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0054b0bf add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054b0c1 movzx edx, ch */ { edx = (u32)(((ecx >> 8) & 0xffu)); }
  /* 0054b0c4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b0c7 and ecx, 0xff */ { u32 a_ = ecx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054b0cd mov dword ptr [eax + 0x28], edx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(edx); }
  /* 0054b0d0 mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0054b0d3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0054b0d4:;
  /* 0054b0d4 mov eax, edi */ { eax = (u32)(edi); }
  /* 0054b0d6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054b0d7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054b0d8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054b0e0(CPU *c) {
  NATIVE_HOOK(0x54b0e0u) REGS; LOADALL;
L_0054b0e0:;
  /* 0054b0e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054b0e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054b0e3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054b0e4 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054b0e7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054b0e8 call 0x5d3ae0 */ esp -= 4; M32(esp) = 0x54b0edu; SAVEALL; F_005d3ae0(c); ABI_CHECK(0x5d3ae0u, 0x54b0e8u); RETCHK(0x54b0edu, 0x54b0e8u); LOADALL;
  /* 0054b0ed add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b0f0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b0f2 je 0x54b101 */ if (ZF_) goto L_0054b101;
  /* 0054b0f4 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054b0f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b0f8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054b0f9 call 0x5d3b40 */ esp -= 4; M32(esp) = 0x54b0feu; SAVEALL; F_005d3b40(c); ABI_CHECK(0x5d3b40u, 0x54b0f9u); RETCHK(0x54b0feu, 0x54b0f9u); LOADALL;
  /* 0054b0fe add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054b101:;
  /* 0054b101 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054b103 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054b104 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054b105 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054b110(CPU *c) {
  NATIVE_HOOK(0x54b110u) REGS; LOADALL;
L_0054b110:;
  /* 0054b110 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054b111 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054b113 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054b114 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054b117 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054b118 call 0x5d3ae0 */ esp -= 4; M32(esp) = 0x54b11du; SAVEALL; F_005d3ae0(c); ABI_CHECK(0x5d3ae0u, 0x54b118u); RETCHK(0x54b11du, 0x54b118u); LOADALL;
  /* 0054b11d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b120 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b122 je 0x54b14b */ if (ZF_) goto L_0054b14b;
  /* 0054b124 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054b127 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b128 call 0x5abd50 */ esp -= 4; M32(esp) = 0x54b12du; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x54b128u); RETCHK(0x54b12du, 0x54b128u); LOADALL;
  /* 0054b12d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054b12f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b130 mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 0054b133 mov dword ptr [eax + 0x34], ecx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(ecx); }
  /* 0054b136 mov dword ptr [eax + 0x38], ecx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(ecx); }
  /* 0054b139 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x54b13eu; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x54b139u); RETCHK(0x54b13eu, 0x54b139u); LOADALL;
  /* 0054b13e mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054b141 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b142 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054b143 call 0x5d3b40 */ esp -= 4; M32(esp) = 0x54b148u; SAVEALL; F_005d3b40(c); ABI_CHECK(0x5d3b40u, 0x54b143u); RETCHK(0x54b148u, 0x54b143u); LOADALL;
  /* 0054b148 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054b14b:;
  /* 0054b14b mov eax, esi */ { eax = (u32)(esi); }
  /* 0054b14d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054b14e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054b14f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054b150(CPU *c) {
  NATIVE_HOOK(0x54b150u) REGS; LOADALL;
L_0054b150:;
  /* 0054b150 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054b151 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054b153 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b156 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054b157 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054b158 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0054b15b mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054b15e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b15f call 0x5abd50 */ esp -= 4; M32(esp) = 0x54b164u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x54b15fu); RETCHK(0x54b164u, 0x54b15fu); LOADALL;
  /* 0054b164 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0054b16a mov esi, eax */ { esi = (u32)(eax); }
  /* 0054b16c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054b16e mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054b171 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054b172 call 0x5abd50 */ esp -= 4; M32(esp) = 0x54b177u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x54b172u); RETCHK(0x54b177u, 0x54b172u); LOADALL;
  /* 0054b177 fld dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0054b17a fsub dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054b17d fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b180 fld dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0054b183 fsub dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054b186 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b189 fld dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0054b18c lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0054b18f fsub dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054b192 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b193 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0054b195 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b196 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b199 call 0x5aa860 */ esp -= 4; M32(esp) = 0x54b19eu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x54b199u); RETCHK(0x54b19eu, 0x54b199u); LOADALL;
  /* 0054b19e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0054b1a0 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0054b1a3 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0054b1a6 fmul dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054b1a9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054b1aa mov eax, edx */ { eax = (u32)(edx); }
  /* 0054b1ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b1ad fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0054b1b0 fmul dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054b1b3 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0054b1b5 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b1b8 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0054b1bb fmul dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054b1be fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0054b1c1 fmul dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054b1c4 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0054b1c6 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b1c9 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0054b1cc fmul dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054b1cf fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0054b1d2 fmul dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054b1d5 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0054b1d7 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b1da call 0x5aa860 */ esp -= 4; M32(esp) = 0x54b1dfu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x54b1dau); RETCHK(0x54b1dfu, 0x54b1dau); LOADALL;
  /* 0054b1df fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0054b1e1 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 0054b1e4 fmul dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054b1e7 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0054b1ea fmul dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054b1ed fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0054b1ef fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b1f2 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0054b1f5 fmul dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054b1f8 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0054b1fb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b1fc mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0054b1fe fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 0054b201 fmul dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054b204 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054b205 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0054b207 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b20a fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 0054b20d fmul dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054b210 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 0054b213 fmul dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054b216 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0054b218 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b21b call 0x5aa860 */ esp -= 4; M32(esp) = 0x54b220u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x54b21bu); RETCHK(0x54b220u, 0x54b21bu); LOADALL;
  /* 0054b220 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0054b222 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054b225 lea eax, [esi + 0x20] */ eax = (u32)((u32)(esi + 0x20u));
  /* 0054b228 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0054b22a mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0054b22d mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0054b230 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054b233 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0054b236 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0054b239 mov edx, esi */ { edx = (u32)(esi); }
  /* 0054b23b mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0054b23d mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0054b240 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0054b243 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0054b246 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054b247 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054b24a call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x54b24fu; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x54b24au); RETCHK(0x54b24fu, 0x54b24au); LOADALL;
  /* 0054b24f add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b252 mov eax, edi */ { eax = (u32)(edi); }
  /* 0054b254 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054b255 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054b256 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054b258 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054b259 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054b260(CPU *c) {
  NATIVE_HOOK(0x54b260u) REGS; LOADALL;
L_0054b260:;
  /* 0054b260 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054b261 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054b263 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 0054b268 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054b26a mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0054b26d mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0054b270 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054b273 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0054b276 mov dword ptr [eax], 0x655098 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x655098u); }
  /* 0054b27c mov dword ptr [eax + 0x10], edx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(edx); }
  /* 0054b27f mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0054b282 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0054b285 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054b286 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054b290(CPU *c) {
  NATIVE_HOOK(0x54b290u) REGS; LOADALL;
L_0054b290:;
  /* 0054b290 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054b291 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054b293 sub esp, 0x104 */ { u32 a_ = esp, b_ = 0x104u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b299 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054b29e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054b29f mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054b2a1 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054b2a4 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054b2a7 mov cl, byte ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054b2aa test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054b2ac je 0x54b4bf */ if (ZF_) goto L_0054b4bf;
  /* 0054b2b2 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0054b2b8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054b2b9 mov byte ptr [ebp - 0x104], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffefcu); M8(m_) = (u8)(0x0u); }
  /* 0054b2c0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054b2c2 mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 0054b2c7 lea edi, [ebp - 0x103] */ edi = (u32)((u32)(ebp + 0xfffffefdu));
  /* 0054b2cd rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0054b2cf stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 0054b2d1 lea ecx, [ebp - 0x104] */ ecx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0054b2d7 push 0x6887d0 */ { u32 v_ = 0x6887d0u; esp -= 4; M32(esp) = v_; }
  /* 0054b2dc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b2dd stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 0054b2de call dword ptr [edx + 0xcc] */ { const u32 m_ = (u32)(edx + 0xccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54b2e4u; SAVEALL; call_ind(c, t_); RETCHK(0x54b2e4u, 0x54b2deu); LOADALL; }
  /* 0054b2e4 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0054b2ea lea eax, [ebp - 0x104] */ eax = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0054b2f0 push 0x6550d0 */ { u32 v_ = 0x6550d0u; esp -= 4; M32(esp) = v_; }
  /* 0054b2f5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b2f6 call dword ptr [ecx + 0xd4] */ { const u32 m_ = (u32)(ecx + 0xd4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54b2fcu; SAVEALL; call_ind(c, t_); RETCHK(0x54b2fcu, 0x54b2f6u); LOADALL; }
  /* 0054b2fc lea edx, [ebp - 0x104] */ edx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0054b302 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054b303 call 0x5b17e0 */ esp -= 4; M32(esp) = 0x54b308u; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x54b303u); RETCHK(0x54b308u, 0x54b303u); LOADALL;
  /* 0054b308 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054b30b mov cl, byte ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054b30e add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b311 test cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054b314 je 0x54b3de */ if (ZF_) goto L_0054b3de;
  /* 0054b31a mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0054b320 lea ecx, [ebp - 0x104] */ ecx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0054b326 push 0x6887d0 */ { u32 v_ = 0x6887d0u; esp -= 4; M32(esp) = v_; }
  /* 0054b32b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b32c call dword ptr [edx + 0xcc] */ { const u32 m_ = (u32)(edx + 0xccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54b332u; SAVEALL; call_ind(c, t_); RETCHK(0x54b332u, 0x54b32cu); LOADALL; }
  /* 0054b332 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054b335 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0054b33b add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054b33e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b33f lea ecx, [ebp - 0x104] */ ecx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0054b345 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b346 call dword ptr [edx + 0xd4] */ { const u32 m_ = (u32)(edx + 0xd4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54b34cu; SAVEALL; call_ind(c, t_); RETCHK(0x54b34cu, 0x54b346u); LOADALL; }
  /* 0054b34c mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0054b352 lea eax, [ebp - 0x104] */ eax = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0054b358 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b359 call dword ptr [ecx + 0xf4] */ { const u32 m_ = (u32)(ecx + 0xf4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54b35fu; SAVEALL; call_ind(c, t_); RETCHK(0x54b35fu, 0x54b359u); LOADALL; }
  /* 0054b35f mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0054b365 lea edx, [ebp - 0x104] */ edx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0054b36b sub edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054b36e mov byte ptr [eax + edx], 0 */ { const u32 m_ = (u32)(eax + edx); M8(m_) = (u8)(0x0u); }
  /* 0054b372 lea eax, [ebp - 0x104] */ eax = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0054b378 push 0x6550c8 */ { u32 v_ = 0x6550c8u; esp -= 4; M32(esp) = v_; }
  /* 0054b37d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b37e call dword ptr [ecx + 0xd4] */ { const u32 m_ = (u32)(ecx + 0xd4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54b384u; SAVEALL; call_ind(c, t_); RETCHK(0x54b384u, 0x54b37eu); LOADALL; }
  /* 0054b384 lea edx, [ebp - 0x104] */ edx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0054b38a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054b38b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054b38d push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0054b38f call 0x5b34e0 */ esp -= 4; M32(esp) = 0x54b394u; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x54b38fu); RETCHK(0x54b394u, 0x54b38fu); LOADALL;
  /* 0054b394 mov edi, eax */ { edi = (u32)(eax); }
  /* 0054b396 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b399 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b39b je 0x54b3de */ if (ZF_) goto L_0054b3de;
  /* 0054b39d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054b39f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054b3a1 push 0x2b */ { u32 v_ = 0x2bu; esp -= 4; M32(esp) = v_; }
  /* 0054b3a3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054b3a4 call 0x5b3890 */ esp -= 4; M32(esp) = 0x54b3a9u; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x54b3a4u); RETCHK(0x54b3a9u, 0x54b3a4u); LOADALL;
  /* 0054b3a9 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b3ac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b3ae je 0x54b3d3 */ if (ZF_) goto L_0054b3d3;
  /* 0054b3b0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054b3b1 push 0x67d2d4 */ { u32 v_ = 0x67d2d4u; esp -= 4; M32(esp) = v_; }
  /* 0054b3b6 call 0x5f0390 */ esp -= 4; M32(esp) = 0x54b3bbu; SAVEALL; F_005f0390(c); ABI_CHECK(0x5f0390u, 0x54b3b6u); RETCHK(0x54b3bbu, 0x54b3b6u); LOADALL;
  /* 0054b3bb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b3be test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b3c0 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 0054b3c3 je 0x54b3d3 */ if (ZF_) goto L_0054b3d3;
  /* 0054b3c5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b3c6 push 0x67d2d4 */ { u32 v_ = 0x67d2d4u; esp -= 4; M32(esp) = v_; }
  /* 0054b3cb call 0x5f0240 */ esp -= 4; M32(esp) = 0x54b3d0u; SAVEALL; F_005f0240(c); ABI_CHECK(0x5f0240u, 0x54b3cbu); RETCHK(0x54b3d0u, 0x54b3cbu); LOADALL;
  /* 0054b3d0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054b3d3:;
  /* 0054b3d3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054b3d5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054b3d6 call 0x5b3410 */ esp -= 4; M32(esp) = 0x54b3dbu; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x54b3d6u); RETCHK(0x54b3dbu, 0x54b3d6u); LOADALL;
  /* 0054b3db add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054b3de:;
  /* 0054b3de mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0054b3e4 lea eax, [ebp - 0x104] */ eax = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0054b3ea push 0x6887d0 */ { u32 v_ = 0x6887d0u; esp -= 4; M32(esp) = v_; }
  /* 0054b3ef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b3f0 call dword ptr [ecx + 0xcc] */ { const u32 m_ = (u32)(ecx + 0xccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54b3f6u; SAVEALL; call_ind(c, t_); RETCHK(0x54b3f6u, 0x54b3f0u); LOADALL; }
  /* 0054b3f6 mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 0054b3f9 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 0054b3ff add edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054b402 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054b403 lea eax, [ebp - 0x104] */ eax = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0054b409 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b40a call dword ptr [ecx + 0xd4] */ { const u32 m_ = (u32)(ecx + 0xd4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54b410u; SAVEALL; call_ind(c, t_); RETCHK(0x54b410u, 0x54b40au); LOADALL; }
  /* 0054b410 lea edx, [ebp - 0x104] */ edx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0054b416 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054b417 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054b419 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0054b41b call 0x5b34e0 */ esp -= 4; M32(esp) = 0x54b420u; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x54b41bu); RETCHK(0x54b420u, 0x54b41bu); LOADALL;
  /* 0054b420 mov edi, eax */ { edi = (u32)(eax); }
  /* 0054b422 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b425 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b427 je 0x54b453 */ if (ZF_) goto L_0054b453;
  /* 0054b429 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054b42b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054b42d push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0054b42f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054b430 call 0x5b3890 */ esp -= 4; M32(esp) = 0x54b435u; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x54b430u); RETCHK(0x54b435u, 0x54b430u); LOADALL;
  /* 0054b435 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b438 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b43a je 0x54b448 */ if (ZF_) goto L_0054b448;
  /* 0054b43c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054b43d call 0x579380 */ esp -= 4; M32(esp) = 0x54b442u; SAVEALL; F_00579380(c); ABI_CHECK(0x579380u, 0x54b43du); RETCHK(0x54b442u, 0x54b43du); LOADALL;
  /* 0054b442 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b445 mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
L_0054b448:;
  /* 0054b448 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054b44a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054b44b call 0x5b3410 */ esp -= 4; M32(esp) = 0x54b450u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x54b44bu); RETCHK(0x54b450u, 0x54b44bu); LOADALL;
  /* 0054b450 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054b453:;
  /* 0054b453 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054b456 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b458 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054b459 jne 0x54b468 */ if (!ZF_) goto L_0054b468;
  /* 0054b45b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054b45c mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054b45f call 0x61af31 */ esp -= 4; M32(esp) = 0x54b464u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54b45fu); RETCHK(0x54b464u, 0x54b45fu); LOADALL;
  /* 0054b464 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054b466 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054b467 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054b468:;
  /* 0054b468 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054b46b test byte ptr [ecx + 4], 6 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M8(m_), b_ = 0x6u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054b46f je 0x54b481 */ if (ZF_) goto L_0054b481;
  /* 0054b471 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054b473 push 0x54aff0 */ { u32 v_ = 0x54aff0u; esp -= 4; M32(esp) = v_; }
  /* 0054b478 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b479 call 0x577da0 */ esp -= 4; M32(esp) = 0x54b47eu; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x54b479u); RETCHK(0x54b47eu, 0x54b479u); LOADALL;
  /* 0054b47e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054b481:;
  /* 0054b481 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054b484 test byte ptr [eax + 4], 8 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054b488 je 0x54b4b6 */ if (ZF_) goto L_0054b4b6;
  /* 0054b48a mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054b48d mov edx, eax */ { edx = (u32)(eax); }
  /* 0054b48f sar edx, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0054b492 and dl, 0xf */ { u32 a_ = (edx & 0xffu), b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054b495 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054b497 mov ch, dl */ { ecx = (ecx & 0xffff00ffu) | (((u32)((edx & 0xffu)) & 0xffu) << 8); }
  /* 0054b499 sar eax, 0x14 */ { u32 n_ = (20u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0054b49c and eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054b49f movsx edx, cx */ { edx = (u32)((u32)sxt((ecx & 0xffffu), 2) & 0xffffffffu); }
  /* 0054b4a2 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0054b4a4 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054b4a7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054b4a8 push 0x54b090 */ { u32 v_ = 0x54b090u; esp -= 4; M32(esp) = v_; }
  /* 0054b4ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b4ae call 0x577da0 */ esp -= 4; M32(esp) = 0x54b4b3u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x54b4aeu); RETCHK(0x54b4b3u, 0x54b4aeu); LOADALL;
  /* 0054b4b3 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054b4b6:;
  /* 0054b4b6 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0054b4b9 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054b4bc mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
L_0054b4bf:;
  /* 0054b4bf mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054b4c2 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054b4c7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054b4c8 call 0x61af31 */ esp -= 4; M32(esp) = 0x54b4cdu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54b4c8u); RETCHK(0x54b4cdu, 0x54b4c8u); LOADALL;
  /* 0054b4cd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054b4cf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054b4d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054b4e0(CPU *c) {
  NATIVE_HOOK(0x54b4e0u) REGS; LOADALL;
L_0054b4e0:;
  /* 0054b4e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054b4e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054b4e3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054b4e4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054b4e5 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0054b4e8 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b4ea mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054b4ec mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 0054b4f3 je 0x54b599 */ if (ZF_) goto L_0054b599;
  /* 0054b4f9 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054b4fc mov cl, byte ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054b4ff test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054b501 je 0x54b599 */ if (ZF_) goto L_0054b599;
  /* 0054b507 test byte ptr [eax + 4], 1 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054b50b je 0x54b529 */ if (ZF_) goto L_0054b529;
  /* 0054b50d mov eax, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0054b510 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b512 je 0x54b522 */ if (ZF_) goto L_0054b522;
  /* 0054b514 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b515 push 0x67d2d4 */ { u32 v_ = 0x67d2d4u; esp -= 4; M32(esp) = v_; }
  /* 0054b51a call 0x5f0240 */ esp -= 4; M32(esp) = 0x54b51fu; SAVEALL; F_005f0240(c); ABI_CHECK(0x5f0240u, 0x54b51au); RETCHK(0x54b51fu, 0x54b51au); LOADALL;
  /* 0054b51f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054b522:;
  /* 0054b522 mov dword ptr [esi + 0x18], 0 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x0u); }
L_0054b529:;
  /* 0054b529 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054b52c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b52d call 0x578180 */ esp -= 4; M32(esp) = 0x54b532u; SAVEALL; F_00578180(c); ABI_CHECK(0x578180u, 0x54b52du); RETCHK(0x54b532u, 0x54b52du); LOADALL;
  /* 0054b532 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b535 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b537 mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0054b53a jne 0x54b542 */ if (!ZF_) goto L_0054b542;
  /* 0054b53c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054b53d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054b53e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054b53f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054b542:;
  /* 0054b542 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054b545 test byte ptr [ecx + 4], 6 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M8(m_), b_ = 0x6u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054b549 je 0x54b55b */ if (ZF_) goto L_0054b55b;
  /* 0054b54b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054b54d push 0x54aff0 */ { u32 v_ = 0x54aff0u; esp -= 4; M32(esp) = v_; }
  /* 0054b552 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b553 call 0x577da0 */ esp -= 4; M32(esp) = 0x54b558u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x54b553u); RETCHK(0x54b558u, 0x54b553u); LOADALL;
  /* 0054b558 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054b55b:;
  /* 0054b55b mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054b55e test byte ptr [eax + 4], 8 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054b562 je 0x54b590 */ if (ZF_) goto L_0054b590;
  /* 0054b564 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054b567 mov edx, eax */ { edx = (u32)(eax); }
  /* 0054b569 sar edx, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0054b56c and dl, 0xf */ { u32 a_ = (edx & 0xffu), b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054b56f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054b571 mov ch, dl */ { ecx = (ecx & 0xffff00ffu) | (((u32)((edx & 0xffu)) & 0xffu) << 8); }
  /* 0054b573 sar eax, 0x14 */ { u32 n_ = (20u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0054b576 and eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054b579 movsx edx, cx */ { edx = (u32)((u32)sxt((ecx & 0xffffu), 2) & 0xffffffffu); }
  /* 0054b57c or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0054b57e mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054b581 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054b582 push 0x54b090 */ { u32 v_ = 0x54b090u; esp -= 4; M32(esp) = v_; }
  /* 0054b587 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b588 call 0x577da0 */ esp -= 4; M32(esp) = 0x54b58du; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x54b588u); RETCHK(0x54b58du, 0x54b588u); LOADALL;
  /* 0054b58d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054b590:;
  /* 0054b590 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0054b593 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054b596 mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
L_0054b599:;
  /* 0054b599 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054b59a mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054b59f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054b5a0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054b5a1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054b5b0(CPU *c) {
  NATIVE_HOOK(0x54b5b0u) REGS; LOADALL;
L_0054b5b0:;
  /* 0054b5b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054b5b1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054b5b3 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054b5b6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b5b8 je 0x54b5ca */ if (ZF_) goto L_0054b5ca;
  /* 0054b5ba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b5bb call 0x5784d0 */ esp -= 4; M32(esp) = 0x54b5c0u; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x54b5bbu); RETCHK(0x54b5c0u, 0x54b5bbu); LOADALL;
  /* 0054b5c0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b5c3 mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
L_0054b5ca:;
  /* 0054b5ca mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0054b5cd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b5cf je 0x54b5e1 */ if (ZF_) goto L_0054b5e1;
  /* 0054b5d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b5d2 call 0x5f02d0 */ esp -= 4; M32(esp) = 0x54b5d7u; SAVEALL; F_005f02d0(c); ABI_CHECK(0x5f02d0u, 0x54b5d2u); RETCHK(0x54b5d7u, 0x54b5d2u); LOADALL;
  /* 0054b5d7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b5da mov dword ptr [esi + 0x18], 0 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x0u); }
L_0054b5e1:;
  /* 0054b5e1 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054b5e6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054b5e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054b5f0(CPU *c) {
  NATIVE_HOOK(0x54b5f0u) REGS; LOADALL;
L_0054b5f0:;
  /* 0054b5f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054b5f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054b5f3 sub esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b5f6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054b5f7 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054b5f9 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054b5fc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054b5fd xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0054b5ff cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054b601 je 0x54b764 */ if (ZF_) goto L_0054b764;
  /* 0054b607 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054b60a mov al, 0xff */ { eax = (eax & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 0054b60c lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0054b60f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b610 mov byte ptr [ebp - 8], al */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0054b613 mov byte ptr [ebp - 7], al */ { const u32 m_ = (u32)(ebp + 0xfffffff9u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0054b616 mov byte ptr [ebp - 6], al */ { const u32 m_ = (u32)(ebp + 0xfffffffau); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0054b619 mov byte ptr [ebp - 5], al */ { const u32 m_ = (u32)(ebp + 0xfffffffbu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0054b61c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054b61e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054b61f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054b621 mov dword ptr [ebp - 0x30], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(edi); }
  /* 0054b624 mov dword ptr [ebp - 0x38], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(edi); }
  /* 0054b627 mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 0054b62a mov dword ptr [ebp - 0x2c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edi); }
  /* 0054b62d mov dword ptr [ebp - 0x28], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edi); }
  /* 0054b630 mov dword ptr [ebp - 0x24], edi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edi); }
  /* 0054b633 mov dword ptr [ebp - 0x20], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edi); }
  /* 0054b636 mov dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edi); }
  /* 0054b639 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 0054b63c mov dword ptr [ebp - 0x14], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x3f800000u); }
  /* 0054b643 mov dword ptr [ebp - 0x10], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x3f800000u); }
  /* 0054b64a mov dword ptr [ebp - 0xc], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x3f800000u); }
  /* 0054b651 mov dword ptr [ebp - 0x3c], 0x38 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0x38u); }
  /* 0054b658 call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54b65bu; SAVEALL; call_ind(c, t_); RETCHK(0x54b65bu, 0x54b658u); LOADALL; }
  /* 0054b65b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054b65d jne 0x54b66a */ if (!ZF_) goto L_0054b66a;
  /* 0054b65f mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 0054b662 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054b663 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054b664 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054b666 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054b667 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054b66a:;
  /* 0054b66a mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 0054b66d mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054b670 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054b671 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b672 push 0x6406ac */ { u32 v_ = 0x6406acu; esp -= 4; M32(esp) = v_; }
  /* 0054b677 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b678 call 0x5ac3d0 */ esp -= 4; M32(esp) = 0x54b67du; SAVEALL; F_005ac3d0(c); ABI_CHECK(0x5ac3d0u, 0x54b678u); RETCHK(0x54b67du, 0x54b678u); LOADALL;
  /* 0054b67d mov edx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edx = (u32)(M32(m_)); }
  /* 0054b680 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054b683 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0054b685 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054b686 push 0x6406b8 */ { u32 v_ = 0x6406b8u; esp -= 4; M32(esp) = v_; }
  /* 0054b68b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b68c call 0x5ac3d0 */ esp -= 4; M32(esp) = 0x54b691u; SAVEALL; F_005ac3d0(c); ABI_CHECK(0x5ac3d0u, 0x54b68cu); RETCHK(0x54b691u, 0x54b68cu); LOADALL;
  /* 0054b691 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0054b694 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054b697 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0054b699 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b69a push 0x6406c4 */ { u32 v_ = 0x6406c4u; esp -= 4; M32(esp) = v_; }
  /* 0054b69f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054b6a0 call 0x5ac3d0 */ esp -= 4; M32(esp) = 0x54b6a5u; SAVEALL; F_005ac3d0(c); ABI_CHECK(0x5ac3d0u, 0x54b6a0u); RETCHK(0x54b6a5u, 0x54b6a0u); LOADALL;
  /* 0054b6a5 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054b6a8 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0054b6aa lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 0054b6ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b6ae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b6af call 0x5ac290 */ esp -= 4; M32(esp) = 0x54b6b4u; SAVEALL; F_005ac290(c); ABI_CHECK(0x5ac290u, 0x54b6afu); RETCHK(0x54b6b4u, 0x54b6afu); LOADALL;
  /* 0054b6b4 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054b6b7 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0054b6b9 lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0054b6bc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054b6bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b6be call 0x5ac1f0 */ esp -= 4; M32(esp) = 0x54b6c3u; SAVEALL; F_005ac1f0(c); ABI_CHECK(0x5ac1f0u, 0x54b6beu); RETCHK(0x54b6c3u, 0x54b6beu); LOADALL;
  /* 0054b6c3 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054b6c6 mov cl, byte ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054b6c9 add esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b6cc test cl, 8 */ { u32 a_ = (ecx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054b6cf je 0x54b701 */ if (ZF_) goto L_0054b701;
  /* 0054b6d1 test cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054b6d4 mov dword ptr [ebp - 4], 0x3ca3d70a */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3ca3d70au); }
  /* 0054b6db je 0x54b6ec */ if (ZF_) goto L_0054b6ec;
  /* 0054b6dd mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 0054b6e0 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054b6e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b6e4 push 0x54b110 */ { u32 v_ = 0x54b110u; esp -= 4; M32(esp) = v_; }
  /* 0054b6e9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054b6ea jmp 0x54b6f9 */ goto L_0054b6f9;
L_0054b6ec:;
  /* 0054b6ec mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0054b6ef lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054b6f2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b6f3 push 0x54b0e0 */ { u32 v_ = 0x54b0e0u; esp -= 4; M32(esp) = v_; }
  /* 0054b6f8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
L_0054b6f9:;
  /* 0054b6f9 call 0x577da0 */ esp -= 4; M32(esp) = 0x54b6feu; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x54b6f9u); RETCHK(0x54b6feu, 0x54b6f9u); LOADALL;
  /* 0054b6fe add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054b701:;
  /* 0054b701 mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 0054b704 test byte ptr [edx + 4], 1 */ { const u32 m_ = (u32)(edx + 0x4u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054b708 je 0x54b72b */ if (ZF_) goto L_0054b72b;
  /* 0054b70a fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0054b70d mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0054b710 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0054b713 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b714 fmul dword ptr [0x656da4] */ { const u32 m_ = (u32)(0x656da4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0054b71a push 0x54afc0 */ { u32 v_ = 0x54afc0u; esp -= 4; M32(esp) = v_; }
  /* 0054b71f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b720 fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b723 call 0x577da0 */ esp -= 4; M32(esp) = 0x54b728u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x54b723u); RETCHK(0x54b728u, 0x54b723u); LOADALL;
  /* 0054b728 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054b72b:;
  /* 0054b72b mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 0054b72e mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054b731 test al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054b733 je 0x54b744 */ if (ZF_) goto L_0054b744;
  /* 0054b735 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0054b738 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0054b73b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b73c push 0x54b010 */ { u32 v_ = 0x54b010u; esp -= 4; M32(esp) = v_; }
  /* 0054b741 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b742 jmp 0x54b755 */ goto L_0054b755;
L_0054b744:;
  /* 0054b744 test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054b746 je 0x54b75d */ if (ZF_) goto L_0054b75d;
  /* 0054b748 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054b74b lea edx, [ebp - 5] */ edx = (u32)((u32)(ebp + 0xfffffffbu));
  /* 0054b74e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054b74f push 0x54b060 */ { u32 v_ = 0x54b060u; esp -= 4; M32(esp) = v_; }
  /* 0054b754 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
L_0054b755:;
  /* 0054b755 call 0x577da0 */ esp -= 4; M32(esp) = 0x54b75au; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x54b755u); RETCHK(0x54b75au, 0x54b755u); LOADALL;
  /* 0054b75a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054b75d:;
  /* 0054b75d mov dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x1u); }
L_0054b764:;
  /* 0054b764 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054b765 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054b766 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054b768 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054b769 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054b770(CPU *c) {
  NATIVE_HOOK(0x54b770u) REGS; LOADALL;
L_0054b770:;
  /* 0054b770 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054b771 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054b773 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b776 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054b777 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054b779 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054b77c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b77e je 0x54b8b6 */ if (ZF_) goto L_0054b8b6;
  /* 0054b784 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054b787 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b789 je 0x54b8b6 */ if (ZF_) goto L_0054b8b6;
  /* 0054b78f mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054b792 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b794 je 0x54b8b6 */ if (ZF_) goto L_0054b8b6;
  /* 0054b79a mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054b79d test byte ptr [ecx + 4], 0x10 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054b7a1 je 0x54b7b3 */ if (ZF_) goto L_0054b7b3;
  /* 0054b7a3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054b7a5 push 0x54b150 */ { u32 v_ = 0x54b150u; esp -= 4; M32(esp) = v_; }
  /* 0054b7aa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b7ab call 0x577da0 */ esp -= 4; M32(esp) = 0x54b7b0u; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x54b7abu); RETCHK(0x54b7b0u, 0x54b7abu); LOADALL;
  /* 0054b7b0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054b7b3:;
  /* 0054b7b3 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054b7b6 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054b7b9 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0054b7bb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054b7bc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b7bd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054b7bf call dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54b7c2u; SAVEALL; call_ind(c, t_); RETCHK(0x54b7c2u, 0x54b7bfu); LOADALL; }
  /* 0054b7c2 mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 0054b7c5 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054b7c8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b7c9 call 0x5abd50 */ esp -= 4; M32(esp) = 0x54b7ceu; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x54b7c9u); RETCHK(0x54b7ceu, 0x54b7c9u); LOADALL;
  /* 0054b7ce mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054b7d1 mov edi, eax */ { edi = (u32)(eax); }
  /* 0054b7d3 mov al, byte ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054b7d6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b7d9 test al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054b7db je 0x54b888 */ if (ZF_) goto L_0054b888;
  /* 0054b7e1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054b7e2 call 0x5bcc20 */ esp -= 4; M32(esp) = 0x54b7e7u; SAVEALL; F_005bcc20(c); ABI_CHECK(0x5bcc20u, 0x54b7e2u); RETCHK(0x54b7e7u, 0x54b7e2u); LOADALL;
  /* 0054b7e7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054b7e9 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0054b7eb mov dword ptr [ebp - 0x40], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x3f800000u); }
  /* 0054b7f2 mov dword ptr [ebp - 0x3c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0x0u); }
  /* 0054b7f9 mov dword ptr [ebp - 0x38], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x0u); }
  /* 0054b800 mov dword ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x0u); }
  /* 0054b807 mov dword ptr [ebp - 0x30], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0x0u); }
  /* 0054b80e mov dword ptr [ebp - 0x2c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x3f800000u); }
  /* 0054b815 mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 0054b81c mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 0054b823 mov dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x0u); }
  /* 0054b82a mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 0054b831 mov dword ptr [ebp - 0x18], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0054b838 mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 0054b83f mov dword ptr [ebp - 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x0u); }
  /* 0054b846 mov dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x0u); }
  /* 0054b84d mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 0054b854 mov dword ptr [ebp - 4], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3f800000u); }
  /* 0054b85b call 0x5bd200 */ esp -= 4; M32(esp) = 0x54b860u; SAVEALL; F_005bd200(c); ABI_CHECK(0x5bd200u, 0x54b85bu); RETCHK(0x54b860u, 0x54b85bu); LOADALL;
  /* 0054b860 mov eax, dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); eax = (u32)(M32(m_)); }
  /* 0054b863 mov edx, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); edx = (u32)(M32(m_)); }
  /* 0054b866 mov ecx, dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); ecx = (u32)(M32(m_)); }
  /* 0054b869 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b86c mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0054b86f lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0054b872 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054b873 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 0054b878 mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 0054b87b mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 0054b87e mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0054b880 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054b881 call dword ptr [edx + 0xb0] */ { const u32 m_ = (u32)(edx + 0xb0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54b887u; SAVEALL; call_ind(c, t_); RETCHK(0x54b887u, 0x54b881u); LOADALL; }
  /* 0054b887 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0054b888:;
  /* 0054b888 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0054b88b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b88c call 0x577d50 */ esp -= 4; M32(esp) = 0x54b891u; SAVEALL; F_00577d50(c); ABI_CHECK(0x577d50u, 0x54b88cu); RETCHK(0x54b891u, 0x54b88cu); LOADALL;
  /* 0054b891 mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 0054b894 mov al, byte ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054b897 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054b89a test al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054b89c je 0x54b8a7 */ if (ZF_) goto L_0054b8a7;
  /* 0054b89e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054b89f call 0x5bd200 */ esp -= 4; M32(esp) = 0x54b8a4u; SAVEALL; F_005bd200(c); ABI_CHECK(0x5bd200u, 0x54b89fu); RETCHK(0x54b8a4u, 0x54b89fu); LOADALL;
  /* 0054b8a4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054b8a7:;
  /* 0054b8a7 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054b8aa mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054b8ad mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054b8af push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054b8b0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054b8b2 call dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54b8b5u; SAVEALL; call_ind(c, t_); RETCHK(0x54b8b5u, 0x54b8b2u); LOADALL; }
  /* 0054b8b5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0054b8b6:;
  /* 0054b8b6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054b8b7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054b8b9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054b8ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054b8c0(CPU *c) {
  NATIVE_HOOK(0x54b8c0u) REGS; LOADALL;
L_0054b8c0:;
  /* 0054b8c0 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054b8c3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b8c5 je 0x54b8e6 */ if (ZF_) goto L_0054b8e6;
  /* 0054b8c7 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 0054b8cd mov byte ptr [eax + 8], 0 */ { const u32 m_ = (u32)(eax + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 0054b8d1 mov ecx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054b8d4 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054b8d7 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0054b8dc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054b8dd call dword ptr [edx + 0xcc] */ { const u32 m_ = (u32)(edx + 0xccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54b8e3u; SAVEALL; call_ind(c, t_); RETCHK(0x54b8e3u, 0x54b8ddu); LOADALL; }
  /* 0054b8e3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054b8e6:;
  /* 0054b8e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054b8f0(CPU *c) {
  NATIVE_HOOK(0x54b8f0u) REGS; LOADALL;
L_0054b8f0:;
  /* 0054b8f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054b8f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054b8f3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054b8f4 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0054b8f7 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b8f9 je 0x54b902 */ if (ZF_) goto L_0054b902;
  /* 0054b8fb mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054b8fe test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b900 jge 0x54b909 */ if (!LT_) goto L_0054b909;
L_0054b902:;
  /* 0054b902 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054b904 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054b905 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054b906 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0054b909:;
  /* 0054b909 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054b90c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054b90d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054b90e mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 0054b910 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0054b912 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b914 je 0x54b924 */ if (ZF_) goto L_0054b924;
L_0054b916:;
  /* 0054b916 cmp dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054b919 jg 0x54b92d */ if (!(ZF_|LT_)) goto L_0054b92d;
  /* 0054b91b mov esi, edi */ { esi = (u32)(edi); }
  /* 0054b91d mov edi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edi = (u32)(M32(m_)); }
  /* 0054b920 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b922 jne 0x54b916 */ if (!ZF_) goto L_0054b916;
L_0054b924:;
  /* 0054b924 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054b925 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054b926 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054b928 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054b929 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054b92a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0054b92d:;
  /* 0054b92d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b92f je 0x54b924 */ if (ZF_) goto L_0054b924;
  /* 0054b931 test dword ptr [esi + 0xc], 0x40000000 */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M32(m_), b_ = 0x40000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054b938 je 0x54b924 */ if (ZF_) goto L_0054b924;
  /* 0054b93a mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054b93d mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054b940 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054b942 mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 0054b945 fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0054b948 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054b94a mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0054b94d fidiv dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 0054b950 fld dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0054b953 fsub dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054b956 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0054b958 fadd dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0054b95b fstp dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b95e fld dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0054b961 fsub dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054b964 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0054b966 fadd dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0054b969 fstp dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b96c fld dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0054b96f fsub dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054b972 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0054b974 fadd dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0054b977 fstp dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b97a fld dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0054b97d fsub dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054b980 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0054b982 fadd dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0054b985 fstp dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b988 fld dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0054b98b fsub dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054b98e fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0054b990 fadd dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0054b993 fstp dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b996 fld dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0054b999 fsub dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054b99c fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0054b99e fadd dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0054b9a1 fstp dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b9a4 fld dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0054b9a7 fsub dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054b9aa fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0054b9ac fadd dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0054b9af fstp dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b9b2 fld dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0054b9b5 fsub dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054b9b8 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0054b9ba fadd dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0054b9bd fstp dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b9c0 fld dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0054b9c3 fsub dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0054b9c6 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0054b9c8 fadd dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0054b9cb fstp dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0054b9ce movzx eax, byte ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M8(m_)); }
  /* 0054b9d2 movzx edx, byte ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); edx = (u32)(M8(m_)); }
  /* 0054b9d6 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054b9d8 mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 0054b9db mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054b9de fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0054b9e1 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0054b9e3 fiadd dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) + (double)(s32)M32(m_)); }
  /* 0054b9e6 call 0x61b154 */ esp -= 4; M32(esp) = 0x54b9ebu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x54b9e6u); RETCHK(0x54b9ebu, 0x54b9e6u); LOADALL;
  /* 0054b9eb mov byte ptr [ebx + 0x34], al */ { const u32 m_ = (u32)(ebx + 0x34u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0054b9ee movzx eax, byte ptr [esi + 0x35] */ { const u32 m_ = (u32)(esi + 0x35u); eax = (u32)(M8(m_)); }
  /* 0054b9f2 movzx ecx, byte ptr [edi + 0x35] */ { const u32 m_ = (u32)(edi + 0x35u); ecx = (u32)(M8(m_)); }
  /* 0054b9f6 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054b9f8 mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0054b9fb mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054b9fe fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0054ba01 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0054ba03 fiadd dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) + (double)(s32)M32(m_)); }
  /* 0054ba06 call 0x61b154 */ esp -= 4; M32(esp) = 0x54ba0bu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x54ba06u); RETCHK(0x54ba0bu, 0x54ba06u); LOADALL;
  /* 0054ba0b mov byte ptr [ebx + 0x35], al */ { const u32 m_ = (u32)(ebx + 0x35u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0054ba0e movzx eax, byte ptr [esi + 0x36] */ { const u32 m_ = (u32)(esi + 0x36u); eax = (u32)(M8(m_)); }
  /* 0054ba12 movzx edx, byte ptr [edi + 0x36] */ { const u32 m_ = (u32)(edi + 0x36u); edx = (u32)(M8(m_)); }
  /* 0054ba16 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054ba18 mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 0054ba1b mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054ba1e fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0054ba21 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0054ba23 fiadd dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) + (double)(s32)M32(m_)); }
  /* 0054ba26 call 0x61b154 */ esp -= 4; M32(esp) = 0x54ba2bu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x54ba26u); RETCHK(0x54ba2bu, 0x54ba26u); LOADALL;
  /* 0054ba2b mov byte ptr [ebx + 0x36], al */ { const u32 m_ = (u32)(ebx + 0x36u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0054ba2e movzx eax, byte ptr [esi + 0x37] */ { const u32 m_ = (u32)(esi + 0x37u); eax = (u32)(M8(m_)); }
  /* 0054ba32 movzx ecx, byte ptr [edi + 0x37] */ { const u32 m_ = (u32)(edi + 0x37u); ecx = (u32)(M8(m_)); }
  /* 0054ba36 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054ba38 mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0054ba3b mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054ba3e fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0054ba41 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0054ba43 fiadd dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) + (double)(s32)M32(m_)); }
  /* 0054ba46 call 0x61b154 */ esp -= 4; M32(esp) = 0x54ba4bu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x54ba46u); RETCHK(0x54ba4bu, 0x54ba46u); LOADALL;
  /* 0054ba4b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0054ba4d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054ba4e mov byte ptr [ebx + 0x37], al */ { const u32 m_ = (u32)(ebx + 0x37u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0054ba51 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054ba52 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054ba54 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054ba55 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054ba56 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0054ba60(CPU *c) {
  NATIVE_HOOK(0x54ba60u) REGS; LOADALL;
L_0054ba60:;
  /* 0054ba60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054ba61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054ba63 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0054ba69 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054ba6b push 0x61b4cb */ { u32 v_ = 0x61b4cbu; esp -= 4; M32(esp) = v_; }
  /* 0054ba70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ba71 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0054ba78 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054ba79 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054ba7a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054ba7d mov dword ptr [esi], 0x6550e0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6550e0u); }
  /* 0054ba83 call 0x54c480 */ esp -= 4; M32(esp) = 0x54ba88u; SAVEALL; F_0054c480(c); ABI_CHECK(0x54c480u, 0x54ba83u); RETCHK(0x54ba88u, 0x54ba83u); LOADALL;
  /* 0054ba88 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0054ba8a mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 0054ba8d mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0054ba90 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0054ba93 call 0x54c480 */ esp -= 4; M32(esp) = 0x54ba98u; SAVEALL; F_0054c480(c); ABI_CHECK(0x54c480u, 0x54ba93u); RETCHK(0x54ba98u, 0x54ba93u); LOADALL;
  /* 0054ba98 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054ba9b mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0054ba9e mov dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 0054baa1 mov byte ptr [esi + 0x28], bl */ { const u32 m_ = (u32)(esi + 0x28u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054baa4 mov dword ptr [esi + 0x24], ebx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ebx); }
  /* 0054baa7 mov dword ptr [esi + 0x30], ebx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(ebx); }
  /* 0054baaa mov byte ptr [esi + 0x44], bl */ { const u32 m_ = (u32)(esi + 0x44u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054baad mov dword ptr [esi + 4], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0xffffffffu); }
  /* 0054bab4 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054bab6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054bab7 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054babe pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054babf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054bac1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054bac2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054bad0(CPU *c) {
  NATIVE_HOOK(0x54bad0u) REGS; LOADALL;
L_0054bad0:;
  /* 0054bad0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054bad1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054bad3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054bad4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054bad6 call 0x54bb00 */ esp -= 4; M32(esp) = 0x54badbu; SAVEALL; F_0054bb00(c); ABI_CHECK(0x54bb00u, 0x54bad6u); RETCHK(0x54badbu, 0x54bad6u); LOADALL;
  /* 0054badb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054badf je 0x54baea */ if (ZF_) goto L_0054baea;
  /* 0054bae1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054bae2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54bae7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54bae2u); RETCHK(0x54bae7u, 0x54bae2u); LOADALL;
  /* 0054bae7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054baea:;
  /* 0054baea mov eax, esi */ { eax = (u32)(esi); }
  /* 0054baec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054baed pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054baee ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054bb00(CPU *c) {
  NATIVE_HOOK(0x54bb00u) REGS; LOADALL;
L_0054bb00:;
  /* 0054bb00 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054bb01 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054bb02 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054bb04 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054bb07 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054bb08 mov dword ptr [esi], 0x6550e0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6550e0u); }
  /* 0054bb0e mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 0054bb10 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bb12 je 0x54bb2c */ if (ZF_) goto L_0054bb2c;
L_0054bb14:;
  /* 0054bb14 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054bb16 push 0x642874 */ { u32 v_ = 0x642874u; esp -= 4; M32(esp) = v_; }
  /* 0054bb1b call 0x5feb72 */ esp -= 4; M32(esp) = 0x54bb20u; SAVEALL; F_005feb72(c); ABI_CHECK(0x5feb72u, 0x54bb1bu); RETCHK(0x54bb20u, 0x54bb1bu); LOADALL;
  /* 0054bb20 mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 0054bb22 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054bb25 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054bb28 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bb2a jne 0x54bb14 */ if (!ZF_) goto L_0054bb14;
L_0054bb2c:;
  /* 0054bb2c mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0054bb2f mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 0054bb31 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bb33 je 0x54bb58 */ if (ZF_) goto L_0054bb58;
  /* 0054bb35 jmp 0x54bb40 */ goto L_0054bb40;
L_0054bb40:;
  /* 0054bb40 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054bb42 push 0x642874 */ { u32 v_ = 0x642874u; esp -= 4; M32(esp) = v_; }
  /* 0054bb47 call 0x5feb72 */ esp -= 4; M32(esp) = 0x54bb4cu; SAVEALL; F_005feb72(c); ABI_CHECK(0x5feb72u, 0x54bb47u); RETCHK(0x54bb4cu, 0x54bb47u); LOADALL;
  /* 0054bb4c mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 0054bb4e mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0054bb51 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054bb54 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bb56 jne 0x54bb40 */ if (!ZF_) goto L_0054bb40;
L_0054bb58:;
  /* 0054bb58 mov ecx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0054bb5b mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054bb5d mov dword ptr [ecx], ecx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ecx); }
  /* 0054bb5f mov ecx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0054bb62 mov dword ptr [ecx + 4], ecx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0054bb65 mov ecx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0054bb68 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0054bb6a cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bb6c mov dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 0054bb6f je 0x54bb85 */ if (ZF_) goto L_0054bb85;
L_0054bb71:;
  /* 0054bb71 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 0054bb73 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054bb74 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54bb79u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54bb74u); RETCHK(0x54bb79u, 0x54bb74u); LOADALL;
  /* 0054bb79 mov ecx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0054bb7c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054bb7f cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bb81 mov eax, edi */ { eax = (u32)(edi); }
  /* 0054bb83 jne 0x54bb71 */ if (!ZF_) goto L_0054bb71;
L_0054bb85:;
  /* 0054bb85 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0054bb88 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054bb89 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54bb8eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54bb89u); RETCHK(0x54bb8eu, 0x54bb89u); LOADALL;
  /* 0054bb8e mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 0054bb91 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054bb94 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054bb96 mov dword ptr [ecx], ecx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ecx); }
  /* 0054bb98 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054bb9b mov dword ptr [ecx + 4], ecx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0054bb9e mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054bba1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054bba4 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bba6 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0054bba9 je 0x54bbc4 */ if (ZF_) goto L_0054bbc4;
  /* 0054bbab jmp 0x54bbb0 */ goto L_0054bbb0;
L_0054bbb0:;
  /* 0054bbb0 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 0054bbb2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054bbb3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54bbb8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54bbb3u); RETCHK(0x54bbb8u, 0x54bbb3u); LOADALL;
  /* 0054bbb8 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054bbbb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054bbbe cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bbc0 mov eax, edi */ { eax = (u32)(edi); }
  /* 0054bbc2 jne 0x54bbb0 */ if (!ZF_) goto L_0054bbb0;
L_0054bbc4:;
  /* 0054bbc4 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054bbc7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054bbc8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54bbcdu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54bbc8u); RETCHK(0x54bbcdu, 0x54bbc8u); LOADALL;
  /* 0054bbcd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054bbd0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054bbd1 mov dword ptr [esi + 0x10], ebx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ebx); }
  /* 0054bbd4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054bbd5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054bbd6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054bbe0(CPU *c) {
  NATIVE_HOOK(0x54bbe0u) REGS; LOADALL;
L_0054bbe0:;
  /* 0054bbe0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054bbe1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054bbe3 mov eax, dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); eax = (u32)(M32(m_)); }
  /* 0054bbe6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054bbe8 je 0x54bbfd */ if (ZF_) goto L_0054bbfd;
  /* 0054bbea mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054bbed push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054bbee push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054bbef mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054bbf2 xor dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054bbf4 call 0x54c030 */ esp -= 4; M32(esp) = 0x54bbf9u; SAVEALL; F_0054c030(c); ABI_CHECK(0x54c030u, 0x54bbf4u); RETCHK(0x54bbf9u, 0x54bbf4u); LOADALL;
  /* 0054bbf9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054bbfa ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0054bbfd:;
  /* 0054bbfd xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054bbff pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054bc00 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0054bc10(CPU *c) {
  NATIVE_HOOK(0x54bc10u) REGS; LOADALL;
L_0054bc10:;
  /* 0054bc10 mov eax, dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); eax = (u32)(M32(m_)); }
  /* 0054bc13 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054bc15 je 0x54bc25 */ if (ZF_) goto L_0054bc25;
  /* 0054bc17 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054bc19 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054bc1a mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054bc1d mov dl, 1 */ { edx = (edx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054bc1f call 0x54c030 */ esp -= 4; M32(esp) = 0x54bc24u; SAVEALL; F_0054c030(c); ABI_CHECK(0x54c030u, 0x54bc1fu); RETCHK(0x54bc24u, 0x54bc1fu); LOADALL;
  /* 0054bc24 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054bc25:;
  /* 0054bc25 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054bc27 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054bc30(CPU *c) {
  NATIVE_HOOK(0x54bc30u) REGS; LOADALL;
L_0054bc30:;
  /* 0054bc30 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054bc32 mov byte ptr [ecx + 8], al */ { const u32 m_ = (u32)(ecx + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0054bc35 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054bc40(CPU *c) {
  NATIVE_HOOK(0x54bc40u) REGS; LOADALL;
L_0054bc40:;
  /* 0054bc40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054bc41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054bc43 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054bc44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054bc45 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054bc46 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0054bc48 mov al, byte ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054bc4b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054bc4d je 0x54bcb3 */ if (ZF_) goto L_0054bcb3;
  /* 0054bc4f fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0054bc52 fadd dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0054bc55 fst dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); MF32(m_) = (float)ST(0); }
  /* 0054bc58 fcomp dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0054bc5b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0054bc5d test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054bc60 jne 0x54bcb3 */ if (!ZF_) goto L_0054bcb3;
  /* 0054bc62 mov ecx, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0054bc65 mov byte ptr [edi + 0x28], 0 */ { const u32 m_ = (u32)(edi + 0x28u); M8(m_) = (u8)(0x0u); }
  /* 0054bc69 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054bc6b call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54bc6eu; SAVEALL; call_ind(c, t_); RETCHK(0x54bc6eu, 0x54bc6bu); LOADALL; }
  /* 0054bc6e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054bc6f call 0x54bf60 */ esp -= 4; M32(esp) = 0x54bc74u; SAVEALL; F_0054bf60(c); ABI_CHECK(0x54bf60u, 0x54bc6fu); RETCHK(0x54bc74u, 0x54bc6fu); LOADALL;
  /* 0054bc74 mov ecx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0054bc77 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054bc78 mov eax, edi */ { eax = (u32)(edi); }
  /* 0054bc7a call 0x54be90 */ esp -= 4; M32(esp) = 0x54bc7fu; SAVEALL; F_0054be90(c); ABI_CHECK(0x54be90u, 0x54bc7au); RETCHK(0x54bc7fu, 0x54bc7au); LOADALL;
  /* 0054bc7f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054bc81 je 0x54bca4 */ if (ZF_) goto L_0054bca4;
  /* 0054bc83 mov al, byte ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054bc86 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054bc88 jne 0x54bca4 */ if (!ZF_) goto L_0054bca4;
  /* 0054bc8a mov ecx, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0054bc8d mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0054bc8f call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54bc92u; SAVEALL; call_ind(c, t_); RETCHK(0x54bc92u, 0x54bc8fu); LOADALL; }
  /* 0054bc92 mov ebx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 0054bc95 mov esi, eax */ { esi = (u32)(eax); }
  /* 0054bc97 call 0x54be20 */ esp -= 4; M32(esp) = 0x54bc9cu; SAVEALL; F_0054be20(c); ABI_CHECK(0x54be20u, 0x54bc97u); RETCHK(0x54bc9cu, 0x54bc97u); LOADALL;
  /* 0054bc9c cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bc9f je 0x54bca4 */ if (ZF_) goto L_0054bca4;
  /* 0054bca1 mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
L_0054bca4:;
  /* 0054bca4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054bca6 mov dword ptr [edi + 0x40], eax */ { const u32 m_ = (u32)(edi + 0x40u); M32(m_) = (u32)(eax); }
  /* 0054bca9 mov dword ptr [edi + 0x3c], eax */ { const u32 m_ = (u32)(edi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 0054bcac pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054bcad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054bcae pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054bcaf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054bcb0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054bcb3:;
  /* 0054bcb3 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0054bcb6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054bcb8 je 0x54bcd6 */ if (ZF_) goto L_0054bcd6;
  /* 0054bcba mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0054bcbd mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0054bcbf cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bcc1 je 0x54bcd6 */ if (ZF_) goto L_0054bcd6;
  /* 0054bcc3 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_0054bcc6:;
  /* 0054bcc6 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054bcc9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054bccb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054bccc call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54bccfu; SAVEALL; call_ind(c, t_); RETCHK(0x54bccfu, 0x54bcccu); LOADALL; }
  /* 0054bccf mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0054bcd1 cmp esi, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bcd4 jne 0x54bcc6 */ if (!ZF_) goto L_0054bcc6;
L_0054bcd6:;
  /* 0054bcd6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054bcd7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054bcd8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054bcd9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054bcda ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054bce0(CPU *c) {
  NATIVE_HOOK(0x54bce0u) REGS; LOADALL;
L_0054bce0:;
  /* 0054bce0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054bce1 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0054bce3 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0054bce6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054bce8 je 0x54bd04 */ if (ZF_) goto L_0054bd04;
  /* 0054bcea mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0054bced push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054bcee mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0054bcf0 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bcf2 je 0x54bd03 */ if (ZF_) goto L_0054bd03;
L_0054bcf4:;
  /* 0054bcf4 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054bcf7 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054bcf9 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54bcfcu; SAVEALL; call_ind(c, t_); RETCHK(0x54bcfcu, 0x54bcf9u); LOADALL; }
  /* 0054bcfc mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0054bcfe cmp esi, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bd01 jne 0x54bcf4 */ if (!ZF_) goto L_0054bcf4;
L_0054bd03:;
  /* 0054bd03 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0054bd04:;
  /* 0054bd04 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054bd05 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054bd10(CPU *c) {
  NATIVE_HOOK(0x54bd10u) REGS; LOADALL;
L_0054bd10:;
  /* 0054bd10 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054bd11 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054bd12 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054bd13 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0054bd15 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0054bd18 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0054bd1a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bd1c je 0x54bd26 */ if (ZF_) goto L_0054bd26;
  /* 0054bd1e lea esi, [edi + 0x18] */ esi = (u32)((u32)(edi + 0x18u));
  /* 0054bd21 call 0x529410 */ esp -= 4; M32(esp) = 0x54bd26u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x54bd21u); RETCHK(0x54bd26u, 0x54bd21u); LOADALL;
L_0054bd26:;
  /* 0054bd26 cmp dword ptr [edi + 0x14], ebx */ { const u32 m_ = (u32)(edi + 0x14u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bd29 je 0x54bd84 */ if (ZF_) goto L_0054bd84;
  /* 0054bd2b mov esi, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); esi = (u32)(M32(m_)); }
  /* 0054bd2e cmp esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bd30 je 0x54bd57 */ if (ZF_) goto L_0054bd57;
L_0054bd32:;
  /* 0054bd32 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054bd35 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054bd38 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0054bd3a call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54bd3du; SAVEALL; call_ind(c, t_); RETCHK(0x54bd3du, 0x54bd3au); LOADALL; }
  /* 0054bd3d mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054bd40 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054bd43 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bd45 je 0x54bd4d */ if (ZF_) goto L_0054bd4d;
  /* 0054bd47 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0054bd49 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054bd4b call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54bd4du; SAVEALL; call_ind(c, t_); RETCHK(0x54bd4du, 0x54bd4bu); LOADALL; }
L_0054bd4d:;
  /* 0054bd4d mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054bd50 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0054bd53 cmp esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bd55 jne 0x54bd32 */ if (!ZF_) goto L_0054bd32;
L_0054bd57:;
  /* 0054bd57 mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054bd5a mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054bd5c mov dword ptr [ecx], ecx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ecx); }
  /* 0054bd5e mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054bd61 mov dword ptr [ecx + 4], ecx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0054bd64 cmp eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bd67 mov dword ptr [edi + 0x14], ebx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0054bd6a je 0x54bd84 */ if (ZF_) goto L_0054bd84;
  /* 0054bd6c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0054bd70:;
  /* 0054bd70 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0054bd72 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054bd73 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54bd78u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54bd73u); RETCHK(0x54bd78u, 0x54bd73u); LOADALL;
  /* 0054bd78 mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054bd7b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054bd7e cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bd80 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054bd82 jne 0x54bd70 */ if (!ZF_) goto L_0054bd70;
L_0054bd84:;
  /* 0054bd84 mov byte ptr [edi + 8], bl */ { const u32 m_ = (u32)(edi + 0x8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054bd87 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054bd88 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054bd89 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054bd8a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054bd90(CPU *c) {
  NATIVE_HOOK(0x54bd90u) REGS; LOADALL;
L_0054bd90:;
  /* 0054bd90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054bd91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054bd93 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054bd94 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0054bd97 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054bd9a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054bd9c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054bd9d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054bd9e je 0x54bdcd */ if (ZF_) goto L_0054bdcd;
  /* 0054bda0 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054bda3 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0054bda5 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bda7 je 0x54bdcd */ if (ZF_) goto L_0054bdcd;
  /* 0054bda9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0054bdb0:;
  /* 0054bdb0 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054bdb3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054bdb5 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54bdb8u; SAVEALL; call_ind(c, t_); RETCHK(0x54bdb8u, 0x54bdb5u); LOADALL; }
  /* 0054bdb8 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054bdbb mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0054bdbd mov edi, eax */ { edi = (u32)(eax); }
  /* 0054bdbf call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54bdc2u; SAVEALL; call_ind(c, t_); RETCHK(0x54bdc2u, 0x54bdbfu); LOADALL; }
  /* 0054bdc2 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bdc4 je 0x54be0b */ if (ZF_) goto L_0054be0b;
  /* 0054bdc6 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0054bdc8 cmp esi, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bdcb jne 0x54bdb0 */ if (!ZF_) goto L_0054bdb0;
L_0054bdcd:;
  /* 0054bdcd mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054bdd0 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0054bdd2 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054bdd5 add ebx, 0xc */ { u32 a_ = ebx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0054bdd8 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 0054bddb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054bddc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054bddd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054bdde call 0x508af0 */ esp -= 4; M32(esp) = 0x54bde3u; SAVEALL; F_00508af0(c); ABI_CHECK(0x508af0u, 0x54bddeu); RETCHK(0x54bde3u, 0x54bddeu); LOADALL;
  /* 0054bde3 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0054bde8 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0054bdea mov edi, eax */ { edi = (u32)(eax); }
  /* 0054bdec call 0x518d90 */ esp -= 4; M32(esp) = 0x54bdf1u; SAVEALL; F_00518d90(c); ABI_CHECK(0x518d90u, 0x54bdecu); RETCHK(0x54bdf1u, 0x54bdecu); LOADALL;
  /* 0054bdf1 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054bdf4 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054bdf7 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 0054bdfa mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054bdfd mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 0054bdff pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054be00 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054be01 mov dword ptr [edx + 0x24], ecx */ { const u32 m_ = (u32)(edx + 0x24u); M32(m_) = (u32)(ecx); }
  /* 0054be04 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054be06 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054be07 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054be08 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0054be0b:;
  /* 0054be0b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054be0c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054be0d xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054be0f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054be10 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054be11 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0054be20(CPU *c) {
  NATIVE_HOOK(0x54be20u) REGS; LOADALL;
L_0054be20:;
  /* 0054be20 cmp ebx, -1 */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054be23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054be24 je 0x54be49 */ if (ZF_) goto L_0054be49;
  /* 0054be26 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054be29 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054be2b je 0x54be49 */ if (ZF_) goto L_0054be49;
  /* 0054be2d mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054be30 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0054be32 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054be34 je 0x54be49 */ if (ZF_) goto L_0054be49;
L_0054be36:;
  /* 0054be36 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054be39 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054be3b call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54be3eu; SAVEALL; call_ind(c, t_); RETCHK(0x54be3eu, 0x54be3bu); LOADALL; }
  /* 0054be3e cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054be40 je 0x54be4d */ if (ZF_) goto L_0054be4d;
  /* 0054be42 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0054be44 cmp esi, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054be47 jne 0x54be36 */ if (!ZF_) goto L_0054be36;
L_0054be49:;
  /* 0054be49 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054be4b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054be4c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054be4d:;
  /* 0054be4d mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054be50 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054be51 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054be60(CPU *c) {
  NATIVE_HOOK(0x54be60u) REGS; LOADALL;
L_0054be60:;
  /* 0054be60 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0054be63 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054be65 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054be66 je 0x54be84 */ if (ZF_) goto L_0054be84;
  /* 0054be68 mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0054be6b mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0054be6d cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054be6f je 0x54be84 */ if (ZF_) goto L_0054be84;
L_0054be71:;
  /* 0054be71 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054be74 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054be76 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54be79u; SAVEALL; call_ind(c, t_); RETCHK(0x54be79u, 0x54be76u); LOADALL; }
  /* 0054be79 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054be7b je 0x54be88 */ if (ZF_) goto L_0054be88;
  /* 0054be7d mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0054be7f cmp esi, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054be82 jne 0x54be71 */ if (!ZF_) goto L_0054be71;
L_0054be84:;
  /* 0054be84 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054be86 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054be87 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054be88:;
  /* 0054be88 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054be8b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054be8c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054be90(CPU *c) {
  NATIVE_HOOK(0x54be90u) REGS; LOADALL;
L_0054be90:;
  /* 0054be90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054be91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054be93 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054be94 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054be95 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054be96 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0054be99 cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054be9c mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0054be9e jne 0x54beaa */ if (!ZF_) goto L_0054beaa;
  /* 0054bea0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054bea1 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054bea3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054bea4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054bea6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054bea7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054beaa:;
  /* 0054beaa mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054bead test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054beaf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054beb0 je 0x54bf47 */ if (ZF_) goto L_0054bf47;
  /* 0054beb6 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054beb9 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0054bebb cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bebd je 0x54bf47 */ if (ZF_) goto L_0054bf47;
L_0054bec3:;
  /* 0054bec3 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054bec6 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054bec8 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54becbu; SAVEALL; call_ind(c, t_); RETCHK(0x54becbu, 0x54bec8u); LOADALL; }
  /* 0054becb cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054becd je 0x54bee1 */ if (ZF_) goto L_0054bee1;
  /* 0054becf mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0054bed1 cmp esi, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bed4 jne 0x54bec3 */ if (!ZF_) goto L_0054bec3;
  /* 0054bed6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054bed7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054bed8 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054beda pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054bedb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054bedd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054bede ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054bee1:;
  /* 0054bee1 mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054bee4 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054bee6 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0054bee9 je 0x54bf47 */ if (ZF_) goto L_0054bf47;
  /* 0054beeb mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 0054beee test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054bef0 je 0x54bf14 */ if (ZF_) goto L_0054bf14;
  /* 0054bef2 mov eax, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0054bef5 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 0054bef7 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bef9 je 0x54bf14 */ if (ZF_) goto L_0054bf14;
  /* 0054befb jmp 0x54bf00 */ goto L_0054bf00;
L_0054bf00:;
  /* 0054bf00 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054bf03 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0054bf05 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54bf08u; SAVEALL; call_ind(c, t_); RETCHK(0x54bf08u, 0x54bf05u); LOADALL; }
  /* 0054bf08 cmp eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bf0b je 0x54bf52 */ if (ZF_) goto L_0054bf52;
  /* 0054bf0d mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 0054bf0f cmp edi, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bf12 jne 0x54bf00 */ if (!ZF_) goto L_0054bf00;
L_0054bf14:;
  /* 0054bf14 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054bf16 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054bf18 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54bf1bu; SAVEALL; call_ind(c, t_); RETCHK(0x54bf1bu, 0x54bf18u); LOADALL; }
  /* 0054bf1b mov ecx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0054bf1e mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 0054bf20 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054bf23 add ebx, 0x18 */ { u32 a_ = ebx, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0054bf26 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054bf29 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054bf2a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054bf2b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054bf2c call 0x508af0 */ esp -= 4; M32(esp) = 0x54bf31u; SAVEALL; F_00508af0(c); ABI_CHECK(0x508af0u, 0x54bf2cu); RETCHK(0x54bf31u, 0x54bf2cu); LOADALL;
  /* 0054bf31 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0054bf36 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0054bf38 mov edi, eax */ { edi = (u32)(eax); }
  /* 0054bf3a call 0x518d90 */ esp -= 4; M32(esp) = 0x54bf3fu; SAVEALL; F_00518d90(c); ABI_CHECK(0x518d90u, 0x54bf3au); RETCHK(0x54bf3fu, 0x54bf3au); LOADALL;
  /* 0054bf3f mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 0054bf42 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054bf45 mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
L_0054bf47:;
  /* 0054bf47 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054bf48 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054bf49 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054bf4b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054bf4c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054bf4e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054bf4f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054bf52:;
  /* 0054bf52 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054bf53 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054bf54 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054bf56 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054bf57 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054bf59 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054bf5a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054bf60(CPU *c) {
  NATIVE_HOOK(0x54bf60u) REGS; LOADALL;
L_0054bf60:;
  /* 0054bf60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054bf61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054bf63 cmp dword ptr [ebp + 8], -1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bf67 jne 0x54bf6f */ if (!ZF_) goto L_0054bf6f;
  /* 0054bf69 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054bf6b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054bf6c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054bf6f:;
  /* 0054bf6f mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0054bf72 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054bf74 je 0x54bfc7 */ if (ZF_) goto L_0054bfc7;
  /* 0054bf76 mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0054bf79 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054bf7a mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0054bf7c cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bf7e je 0x54bfc6 */ if (ZF_) goto L_0054bfc6;
  /* 0054bf80 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
L_0054bf81:;
  /* 0054bf81 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054bf84 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054bf86 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54bf89u; SAVEALL; call_ind(c, t_); RETCHK(0x54bf89u, 0x54bf86u); LOADALL; }
  /* 0054bf89 cmp eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bf8c jne 0x54bfbe */ if (!ZF_) goto L_0054bfbe;
  /* 0054bf8e mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054bf91 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0054bf93 call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54bf96u; SAVEALL; call_ind(c, t_); RETCHK(0x54bf96u, 0x54bf93u); LOADALL; }
  /* 0054bf96 cmp esi, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bf99 mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 0054bf9b je 0x54bfba */ if (ZF_) goto L_0054bfba;
  /* 0054bf9d mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054bfa0 mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
  /* 0054bfa2 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0054bfa4 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054bfa7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054bfa8 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0054bfab call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54bfb0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54bfabu); RETCHK(0x54bfb0u, 0x54bfabu); LOADALL;
  /* 0054bfb0 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0054bfb3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054bfb6 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0054bfb7 mov dword ptr [edi + 0x20], eax */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(eax); }
L_0054bfba:;
  /* 0054bfba mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0054bfbc jmp 0x54bfc0 */ goto L_0054bfc0;
L_0054bfbe:;
  /* 0054bfbe mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
L_0054bfc0:;
  /* 0054bfc0 cmp esi, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bfc3 jne 0x54bf81 */ if (!ZF_) goto L_0054bf81;
  /* 0054bfc5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0054bfc6:;
  /* 0054bfc6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0054bfc7:;
  /* 0054bfc7 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054bfc9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054bfca ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054bfd0(CPU *c) {
  NATIVE_HOOK(0x54bfd0u) REGS; LOADALL;
L_0054bfd0:;
  /* 0054bfd0 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0054bfd3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054bfd5 je 0x54c025 */ if (ZF_) goto L_0054c025;
  /* 0054bfd7 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0054bfda push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054bfdb mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 0054bfdd cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bfdf je 0x54bff0 */ if (ZF_) goto L_0054bff0;
L_0054bfe1:;
  /* 0054bfe1 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054bfe4 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054bfe6 call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54bfe9u; SAVEALL; call_ind(c, t_); RETCHK(0x54bfe9u, 0x54bfe6u); LOADALL; }
  /* 0054bfe9 mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 0054bfeb cmp edi, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054bfee jne 0x54bfe1 */ if (!ZF_) goto L_0054bfe1;
L_0054bff0:;
  /* 0054bff0 mov ecx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0054bff3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054bff5 mov dword ptr [ecx], ecx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ecx); }
  /* 0054bff7 mov ecx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0054bffa mov dword ptr [ecx + 4], ecx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0054bffd cmp eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c000 mov dword ptr [esi + 0x20], 0 */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(0x0u); }
  /* 0054c007 je 0x54c024 */ if (ZF_) goto L_0054c024;
  /* 0054c009 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0054c010:;
  /* 0054c010 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 0054c012 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054c013 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54c018u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54c013u); RETCHK(0x54c018u, 0x54c013u); LOADALL;
  /* 0054c018 mov ecx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0054c01b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054c01e cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c020 mov eax, edi */ { eax = (u32)(edi); }
  /* 0054c022 jne 0x54c010 */ if (!ZF_) goto L_0054c010;
L_0054c024:;
  /* 0054c024 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0054c025:;
  /* 0054c025 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054c030(CPU *c) {
  NATIVE_HOOK(0x54c030u) REGS; LOADALL;
L_0054c030:;
  /* 0054c030 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054c031 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054c033 cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c036 jne 0x54c03e */ if (!ZF_) goto L_0054c03e;
  /* 0054c038 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054c03a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c03b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0054c03e:;
  /* 0054c03e mov byte ptr [eax + 0x34], dl */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0054c041 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054c044 mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0054c047 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054c04a mov byte ptr [eax + 0x28], 1 */ { const u32 m_ = (u32)(eax + 0x28u); M8(m_) = (u8)(0x1u); }
  /* 0054c04e mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 0054c051 mov dword ptr [eax + 0x3c], edx */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(edx); }
  /* 0054c054 mov dword ptr [eax + 0x40], 0 */ { const u32 m_ = (u32)(eax + 0x40u); M32(m_) = (u32)(0x0u); }
  /* 0054c05b mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054c05d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c05e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0054c070(CPU *c) {
  NATIVE_HOOK(0x54c070u) REGS; LOADALL;
L_0054c070:;
  /* 0054c070 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054c071 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054c073 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054c074 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0054c076 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0054c079 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c07b je 0x54c0a6 */ if (ZF_) goto L_0054c0a6;
  /* 0054c07d mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0054c080 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c081 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0054c083 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c085 je 0x54c0a5 */ if (ZF_) goto L_0054c0a5;
  /* 0054c087 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054c088 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0054c08b jmp 0x54c090 */ goto L_0054c090;
L_0054c090:;
  /* 0054c090 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054c093 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054c096 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054c098 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054c099 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054c09a call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54c09du; SAVEALL; call_ind(c, t_); RETCHK(0x54c09du, 0x54c09au); LOADALL; }
  /* 0054c09d mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0054c09f cmp esi, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c0a2 jne 0x54c090 */ if (!ZF_) goto L_0054c090;
  /* 0054c0a4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0054c0a5:;
  /* 0054c0a5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0054c0a6:;
  /* 0054c0a6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054c0a7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c0a8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0054c0b0(CPU *c) {
  NATIVE_HOOK(0x54c0b0u) REGS; LOADALL;
L_0054c0b0:;
  /* 0054c0b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054c0b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054c0b3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054c0b4 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0054c0b6 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0054c0b9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c0bb je 0x54c0ea */ if (ZF_) goto L_0054c0ea;
  /* 0054c0bd mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0054c0c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c0c1 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0054c0c3 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c0c5 je 0x54c0e9 */ if (ZF_) goto L_0054c0e9;
  /* 0054c0c7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054c0c8 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0054c0cb jmp 0x54c0d0 */ goto L_0054c0d0;
L_0054c0d0:;
  /* 0054c0d0 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0054c0d3 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054c0d6 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054c0d8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054c0d9 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054c0dc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054c0dd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054c0de call dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54c0e1u; SAVEALL; call_ind(c, t_); RETCHK(0x54c0e1u, 0x54c0deu); LOADALL; }
  /* 0054c0e1 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0054c0e3 cmp esi, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c0e6 jne 0x54c0d0 */ if (!ZF_) goto L_0054c0d0;
  /* 0054c0e8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0054c0e9:;
  /* 0054c0e9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0054c0ea:;
  /* 0054c0ea pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054c0eb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c0ec ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0054c0f0(CPU *c) {
  NATIVE_HOOK(0x54c0f0u) REGS; LOADALL;
L_0054c0f0:;
  /* 0054c0f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054c0f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054c0f3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054c0f4 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0054c0f6 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0054c0f9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c0fb je 0x54c135 */ if (ZF_) goto L_0054c135;
  /* 0054c0fd mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0054c100 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c101 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0054c103 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c105 je 0x54c134 */ if (ZF_) goto L_0054c134;
  /* 0054c107 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054c108 mov ebx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ebx = (u32)(M32(m_)); }
  /* 0054c10b jmp 0x54c110 */ goto L_0054c110;
L_0054c110:;
  /* 0054c110 mov al, byte ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054c113 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054c115 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054c118 jne 0x54c12c */ if (!ZF_) goto L_0054c12c;
  /* 0054c11a mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0054c11d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054c11f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054c120 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054c121 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054c124 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054c125 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054c128 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054c129 call dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54c12cu; SAVEALL; call_ind(c, t_); RETCHK(0x54c12cu, 0x54c129u); LOADALL; }
L_0054c12c:;
  /* 0054c12c mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0054c12e cmp esi, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c131 jne 0x54c110 */ if (!ZF_) goto L_0054c110;
  /* 0054c133 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0054c134:;
  /* 0054c134 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0054c135:;
  /* 0054c135 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054c136 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c137 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0054c140(CPU *c) {
  NATIVE_HOOK(0x54c140u) REGS; LOADALL;
L_0054c140:;
  /* 0054c140 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054c142 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054c180(CPU *c) {
  NATIVE_HOOK(0x54c180u) REGS; LOADALL;
L_0054c180:;
  /* 0054c180 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054c181 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054c183 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054c184 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c185 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054c186 lea edx, [ebp + 8] */ edx = (u32)((u32)(ebp + 0x8u));
  /* 0054c189 mov edi, 0x7a877c */ { edi = (u32)(0x7a877cu); }
  /* 0054c18e mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0054c195 call 0x54c2e0 */ esp -= 4; M32(esp) = 0x54c19au; SAVEALL; F_0054c2e0(c); ABI_CHECK(0x54c2e0u, 0x54c195u); RETCHK(0x54c19au, 0x54c195u); LOADALL;
  /* 0054c19a lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054c19d mov esi, eax */ { esi = (u32)(eax); }
  /* 0054c19f call 0x54c3f0 */ esp -= 4; M32(esp) = 0x54c1a4u; SAVEALL; F_0054c3f0(c); ABI_CHECK(0x54c3f0u, 0x54c19fu); RETCHK(0x54c1a4u, 0x54c19fu); LOADALL;
  /* 0054c1a4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054c1a5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054c1a6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c1a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c1a9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054c1b0(CPU *c) {
  NATIVE_HOOK(0x54c1b0u) REGS; LOADALL;
L_0054c1b0:;
  /* 0054c1b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054c1b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054c1b3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c1b4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054c1b5 lea edx, [ebp + 8] */ edx = (u32)((u32)(ebp + 0x8u));
  /* 0054c1b8 mov edi, 0x7a877c */ { edi = (u32)(0x7a877cu); }
  /* 0054c1bd call 0x54c2e0 */ esp -= 4; M32(esp) = 0x54c1c2u; SAVEALL; F_0054c2e0(c); ABI_CHECK(0x54c2e0u, 0x54c1bdu); RETCHK(0x54c1c2u, 0x54c1bdu); LOADALL;
  /* 0054c1c2 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 0054c1c5 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c1c7 je 0x54c1dd */ if (ZF_) goto L_0054c1dd;
  /* 0054c1c9 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054c1cc mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0054c1ce sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054c1d0 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0054c1d3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c1d5 je 0x54c1dd */ if (ZF_) goto L_0054c1dd;
  /* 0054c1d7 add edx, -4 */ { u32 a_ = edx, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054c1da mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
L_0054c1dd:;
  /* 0054c1dd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054c1de pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054c1df pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c1e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054c1f0(CPU *c) {
  NATIVE_HOOK(0x54c1f0u) REGS; LOADALL;
L_0054c1f0:;
  /* 0054c1f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054c1f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054c1f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054c1f4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054c1f5 lea ebx, [ebp + 8] */ ebx = (u32)((u32)(ebp + 0x8u));
  /* 0054c1f8 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054c1fb mov ecx, 0x7a877c */ { ecx = (u32)(0x7a877cu); }
  /* 0054c200 call 0x54c390 */ esp -= 4; M32(esp) = 0x54c205u; SAVEALL; F_0054c390(c); ABI_CHECK(0x54c390u, 0x54c200u); RETCHK(0x54c205u, 0x54c200u); LOADALL;
  /* 0054c205 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0054c208 cmp eax, dword ptr [0x7a8780] */ { const u32 m_ = (u32)(0x7a8780u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c20e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054c20f je 0x54c218 */ if (ZF_) goto L_0054c218;
  /* 0054c211 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0054c214 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c216 jne 0x54c21e */ if (!ZF_) goto L_0054c21e;
L_0054c218:;
  /* 0054c218 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054c21a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c21c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c21d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054c21e:;
  /* 0054c21e mov eax, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); eax = (u32)(M32(m_)); }
  /* 0054c221 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054c223 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0054c226 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c228 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c229 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054c230(CPU *c) {
  NATIVE_HOOK(0x54c230u) REGS; LOADALL;
L_0054c230:;
  /* 0054c230 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054c231 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054c233 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054c234 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054c235 lea ebx, [ebp + 8] */ ebx = (u32)((u32)(ebp + 0x8u));
  /* 0054c238 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054c23b mov ecx, 0x7a877c */ { ecx = (u32)(0x7a877cu); }
  /* 0054c240 call 0x54c390 */ esp -= 4; M32(esp) = 0x54c245u; SAVEALL; F_0054c390(c); ABI_CHECK(0x54c390u, 0x54c240u); RETCHK(0x54c245u, 0x54c240u); LOADALL;
  /* 0054c245 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0054c248 cmp edx, dword ptr [0x7a8780] */ { const u32 m_ = (u32)(0x7a8780u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c24e je 0x54c2a3 */ if (ZF_) goto L_0054c2a3;
  /* 0054c250 mov eax, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); eax = (u32)(M32(m_)); }
  /* 0054c253 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054c254 mov edi, dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); edi = (u32)(M32(m_)); }
  /* 0054c257 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c259 je 0x54c2a2 */ if (ZF_) goto L_0054c2a2;
  /* 0054c25b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c25c lea esi, [edi + 4] */ esi = (u32)((u32)(edi + 0x4u));
  /* 0054c25f nop */ ;
L_0054c260:;
  /* 0054c260 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0054c263 fadd dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0054c265 fst dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); }
  /* 0054c267 fcomp dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0054c26d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0054c26f test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054c272 jne 0x54c296 */ if (!ZF_) goto L_0054c296;
  /* 0054c274 mov ecx, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0054c277 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c279 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054c27b je 0x54c290 */ if (ZF_) goto L_0054c290;
  /* 0054c27d mov edx, edi */ { edx = (u32)(edi); }
  /* 0054c27f sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
L_0054c281:;
  /* 0054c281 mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 0054c283 mov dword ptr [edx + eax], ebx */ { const u32 m_ = (u32)(edx + eax); M32(m_) = (u32)(ebx); }
  /* 0054c286 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054c289 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c28b jne 0x54c281 */ if (!ZF_) goto L_0054c281;
  /* 0054c28d mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
L_0054c290:;
  /* 0054c290 add dword ptr [edx + 0x18], -4 */ { const u32 m_ = (u32)(edx + 0x18u); u32 a_ = M32(m_), b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 0054c294 jmp 0x54c29c */ goto L_0054c29c;
L_0054c296:;
  /* 0054c296 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0054c299 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0054c29c:;
  /* 0054c29c cmp edi, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c29f jne 0x54c260 */ if (!ZF_) goto L_0054c260;
  /* 0054c2a1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0054c2a2:;
  /* 0054c2a2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0054c2a3:;
  /* 0054c2a3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054c2a4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c2a6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c2a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054c2b0(CPU *c) {
  NATIVE_HOOK(0x54c2b0u) REGS; LOADALL;
L_0054c2b0:;
  /* 0054c2b0 call 0x54ce50 */ esp -= 4; M32(esp) = 0x54c2b5u; SAVEALL; F_0054ce50(c); ABI_CHECK(0x54ce50u, 0x54c2b0u); RETCHK(0x54c2b5u, 0x54c2b0u); LOADALL;
  /* 0054c2b5 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0054c2b8 mov byte ptr [eax + 0x21], 1 */ { const u32 m_ = (u32)(eax + 0x21u); M8(m_) = (u8)(0x1u); }
  /* 0054c2bc mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c2bf mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 0054c2c2 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c2c5 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 0054c2c7 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c2ca mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054c2cd mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0054c2d4 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054c2d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054c2e0(CPU *c) {
  NATIVE_HOOK(0x54c2e0u) REGS; LOADALL;
L_0054c2e0:;
  /* 0054c2e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054c2e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054c2e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054c2e5 push 0x61d820 */ { u32 v_ = 0x61d820u; esp -= 4; M32(esp) = v_; }
  /* 0054c2ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0054c2f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054c2f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0054c2f8 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054c2fb mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054c2fe mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c301 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054c302 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c303 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054c305 mov cl, byte ptr [eax + 0x21] */ { const u32 m_ = (u32)(eax + 0x21u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054c308 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0054c30a cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054c30c jne 0x54c323 */ if (!ZF_) goto L_0054c323;
  /* 0054c30e mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
L_0054c310:;
  /* 0054c310 cmp dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c313 jge 0x54c31a */ if (!LT_) goto L_0054c31a;
  /* 0054c315 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054c318 jmp 0x54c31e */ goto L_0054c31e;
L_0054c31a:;
  /* 0054c31a mov esi, eax */ { esi = (u32)(eax); }
  /* 0054c31c mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
L_0054c31e:;
  /* 0054c31e cmp byte ptr [eax + 0x21], bl */ { const u32 m_ = (u32)(eax + 0x21u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054c321 je 0x54c310 */ if (ZF_) goto L_0054c310;
L_0054c323:;
  /* 0054c323 cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c326 je 0x54c32f */ if (ZF_) goto L_0054c32f;
  /* 0054c328 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 0054c32a cmp eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c32d jge 0x54c370 */ if (!LT_) goto L_0054c370;
L_0054c32f:;
  /* 0054c32f mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 0054c332 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0054c335 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0054c338 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0054c33b mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 0054c33d lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0054c340 mov dword ptr [ebp - 0x34], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ecx); }
  /* 0054c343 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054c344 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0054c347 call 0x51b1a0 */ esp -= 4; M32(esp) = 0x54c34cu; SAVEALL; F_0051b1a0(c); ABI_CHECK(0x51b1a0u, 0x54c347u); RETCHK(0x54c34cu, 0x54c347u); LOADALL;
  /* 0054c34c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c34d lea eax, [ebp - 0x34] */ eax = (u32)((u32)(ebp + 0xffffffccu));
  /* 0054c350 lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0054c353 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0054c355 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0054c359 call 0x54c4a0 */ esp -= 4; M32(esp) = 0x54c35eu; SAVEALL; F_0054c4a0(c); ABI_CHECK(0x54c4a0u, 0x54c359u); RETCHK(0x54c35eu, 0x54c359u); LOADALL;
  /* 0054c35e mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0054c360 mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 0054c363 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c365 je 0x54c370 */ if (ZF_) goto L_0054c370;
  /* 0054c367 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054c368 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54c36du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54c368u); RETCHK(0x54c36du, 0x54c368u); LOADALL;
  /* 0054c36d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054c370:;
  /* 0054c370 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054c373 lea eax, [esi + 0x10] */ eax = (u32)((u32)(esi + 0x10u));
  /* 0054c376 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054c377 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054c378 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054c37f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c381 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c382 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054c390(CPU *c) {
  NATIVE_HOOK(0x54c390u) REGS; LOADALL;
L_0054c390:;
  /* 0054c390 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054c391 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054c393 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054c396 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c397 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054c399 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054c39c mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054c39f cmp byte ptr [ecx + 0x21], 0 */ { const u32 m_ = (u32)(ecx + 0x21u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054c3a3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054c3a4 jne 0x54c3bc */ if (!ZF_) goto L_0054c3bc;
  /* 0054c3a6 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
L_0054c3a8:;
  /* 0054c3a8 cmp dword ptr [ecx + 0xc], edi */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c3ab jge 0x54c3b2 */ if (!LT_) goto L_0054c3b2;
  /* 0054c3ad mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054c3b0 jmp 0x54c3b6 */ goto L_0054c3b6;
L_0054c3b2:;
  /* 0054c3b2 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0054c3b4 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
L_0054c3b6:;
  /* 0054c3b6 cmp byte ptr [ecx + 0x21], 0 */ { const u32 m_ = (u32)(ecx + 0x21u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054c3ba je 0x54c3a8 */ if (ZF_) goto L_0054c3a8;
L_0054c3bc:;
  /* 0054c3bc mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054c3bf cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c3c1 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0054c3c4 je 0x54c3da */ if (ZF_) goto L_0054c3da;
  /* 0054c3c6 mov esi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); esi = (u32)(M32(m_)); }
  /* 0054c3c8 cmp esi, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c3cb jl 0x54c3da */ if (LT_) goto L_0054c3da;
  /* 0054c3cd lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054c3d0 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 0054c3d2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054c3d3 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0054c3d5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054c3d6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c3d8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c3d9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054c3da:;
  /* 0054c3da mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 0054c3dd lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0054c3e0 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 0054c3e2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054c3e3 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0054c3e5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054c3e6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c3e8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c3e9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054c3f0(CPU *c) {
  NATIVE_HOOK(0x54c3f0u) REGS; LOADALL;
L_0054c3f0:;
  /* 0054c3f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054c3f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054c3f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054c3f4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054c3f5 mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 0054c3f8 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c3fa jne 0x54c400 */ if (!ZF_) goto L_0054c400;
  /* 0054c3fc xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054c3fe jmp 0x54c408 */ goto L_0054c408;
L_0054c400:;
  /* 0054c400 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054c403 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054c405 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
L_0054c408:;
  /* 0054c408 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c40a je 0x54c439 */ if (ZF_) goto L_0054c439;
  /* 0054c40c mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054c40f sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054c411 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0054c414 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c416 jae 0x54c439 */ if (!CF_) goto L_0054c439;
  /* 0054c418 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0054c41b mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 0054c41e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054c41f mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0054c424 mov eax, edi */ { eax = (u32)(edi); }
  /* 0054c426 call 0x54d0c0 */ esp -= 4; M32(esp) = 0x54c42bu; SAVEALL; F_0054d0c0(c); ABI_CHECK(0x54d0c0u, 0x54c426u); RETCHK(0x54c42bu, 0x54c426u); LOADALL;
  /* 0054c42b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054c42e add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0054c431 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 0054c434 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054c435 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c437 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c438 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054c439:;
  /* 0054c439 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054c43c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054c43d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054c43f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054c440 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054c442 call 0x54c860 */ esp -= 4; M32(esp) = 0x54c447u; SAVEALL; F_0054c860(c); ABI_CHECK(0x54c860u, 0x54c442u); RETCHK(0x54c447u, 0x54c442u); LOADALL;
  /* 0054c447 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054c448 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c44a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c44b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054c480(CPU *c) {
  NATIVE_HOOK(0x54c480u) REGS; LOADALL;
L_0054c480:;
  /* 0054c480 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0054c482 call 0x5fe934 */ esp -= 4; M32(esp) = 0x54c487u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x54c482u); RETCHK(0x54c487u, 0x54c482u); LOADALL;
  /* 0054c487 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054c48a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c48c je 0x54c490 */ if (ZF_) goto L_0054c490;
  /* 0054c48e mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
L_0054c490:;
  /* 0054c490 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 0054c493 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c495 je 0x54c499 */ if (ZF_) goto L_0054c499;
  /* 0054c497 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
L_0054c499:;
  /* 0054c499 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054c4a0(CPU *c) {
  NATIVE_HOOK(0x54c4a0u) REGS; LOADALL;
L_0054c4a0:;
  /* 0054c4a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054c4a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054c4a3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054c4a6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054c4a7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054c4a8 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0054c4aa mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0054c4ac mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054c4af test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c4b1 jne 0x54c4c9 */ if (!ZF_) goto L_0054c4c9;
  /* 0054c4b3 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054c4b6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054c4b7 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054c4b9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c4ba call 0x54c6d0 */ esp -= 4; M32(esp) = 0x54c4bfu; SAVEALL; F_0054c6d0(c); ABI_CHECK(0x54c6d0u, 0x54c4bau); RETCHK(0x54c4bfu, 0x54c4bau); LOADALL;
  /* 0054c4bf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054c4c0 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054c4c2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054c4c3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c4c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c4c6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054c4c9:;
  /* 0054c4c9 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c4cc mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054c4cf cmp ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c4d1 jne 0x54c4f1 */ if (!ZF_) goto L_0054c4f1;
  /* 0054c4d3 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0054c4d5 cmp eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c4d8 jge 0x54c597 */ if (!LT_) goto L_0054c597;
  /* 0054c4de push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054c4df push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054c4e1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c4e2 call 0x54c6d0 */ esp -= 4; M32(esp) = 0x54c4e7u; SAVEALL; F_0054c6d0(c); ABI_CHECK(0x54c6d0u, 0x54c4e2u); RETCHK(0x54c4e7u, 0x54c4e2u); LOADALL;
  /* 0054c4e7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054c4e8 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054c4ea pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054c4eb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c4ed pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c4ee ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054c4f1:;
  /* 0054c4f1 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c4f3 jne 0x54c516 */ if (!ZF_) goto L_0054c516;
  /* 0054c4f5 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054c4f8 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054c4fb cmp edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c4fd jge 0x54c597 */ if (!LT_) goto L_0054c597;
  /* 0054c503 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
L_0054c504:;
  /* 0054c504 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054c506 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c507 call 0x54c6d0 */ esp -= 4; M32(esp) = 0x54c50cu; SAVEALL; F_0054c6d0(c); ABI_CHECK(0x54c6d0u, 0x54c507u); RETCHK(0x54c50cu, 0x54c507u); LOADALL;
  /* 0054c50c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054c50d mov eax, esi */ { eax = (u32)(esi); }
  /* 0054c50f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054c510 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c512 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c513 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054c516:;
  /* 0054c516 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0054c518 cmp eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c51b jge 0x54c555 */ if (!LT_) goto L_0054c555;
  /* 0054c51d lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054c520 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0054c523 call 0x54cfb0 */ esp -= 4; M32(esp) = 0x54c528u; SAVEALL; F_0054cfb0(c); ABI_CHECK(0x54cfb0u, 0x54c523u); RETCHK(0x54c528u, 0x54c523u); LOADALL;
  /* 0054c528 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054c52b mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0054c52d cmp dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c530 jge 0x54c552 */ if (!LT_) goto L_0054c552;
  /* 0054c532 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054c535 mov dl, byte ptr [eax + 0x21] */ { const u32 m_ = (u32)(eax + 0x21u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054c538 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054c53a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054c53b jne 0x54c504 */ if (!ZF_) goto L_0054c504;
  /* 0054c53d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054c540 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054c542 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c543 call 0x54c6d0 */ esp -= 4; M32(esp) = 0x54c548u; SAVEALL; F_0054c6d0(c); ABI_CHECK(0x54c6d0u, 0x54c543u); RETCHK(0x54c548u, 0x54c543u); LOADALL;
  /* 0054c548 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054c549 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054c54b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054c54c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c54e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c54f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054c552:;
  /* 0054c552 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
L_0054c555:;
  /* 0054c555 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0054c557 cmp dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c55a jge 0x54c597 */ if (!LT_) goto L_0054c597;
  /* 0054c55c lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054c55f mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0054c562 call 0x54d010 */ esp -= 4; M32(esp) = 0x54c567u; SAVEALL; F_0054d010(c); ABI_CHECK(0x54d010u, 0x54c562u); RETCHK(0x54c567u, 0x54c562u); LOADALL;
  /* 0054c567 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0054c56a cmp eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c56d je 0x54c576 */ if (ZF_) goto L_0054c576;
  /* 0054c56f mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 0054c571 cmp ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c574 jge 0x54c597 */ if (!LT_) goto L_0054c597;
L_0054c576:;
  /* 0054c576 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054c579 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054c57c cmp byte ptr [edx + 0x21], 0 */ { const u32 m_ = (u32)(edx + 0x21u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054c580 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054c581 jne 0x54c504 */ if (!ZF_) goto L_0054c504;
  /* 0054c583 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054c585 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c586 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0054c588 call 0x54c6d0 */ esp -= 4; M32(esp) = 0x54c58du; SAVEALL; F_0054c6d0(c); ABI_CHECK(0x54c6d0u, 0x54c588u); RETCHK(0x54c58du, 0x54c588u); LOADALL;
  /* 0054c58d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054c58e mov eax, esi */ { eax = (u32)(esi); }
  /* 0054c590 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054c591 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c593 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c594 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054c597:;
  /* 0054c597 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054c598 lea ebx, [ebp - 8] */ ebx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0054c59b mov eax, edi */ { eax = (u32)(edi); }
  /* 0054c59d call 0x54c5b0 */ esp -= 4; M32(esp) = 0x54c5a2u; SAVEALL; F_0054c5b0(c); ABI_CHECK(0x54c5b0u, 0x54c59du); RETCHK(0x54c5a2u, 0x54c59du); LOADALL;
  /* 0054c5a2 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0054c5a4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054c5a5 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0054c5a7 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054c5a9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054c5aa mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c5ac pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c5ad ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054c5b0(CPU *c) {
  NATIVE_HOOK(0x54c5b0u) REGS; LOADALL;
L_0054c5b0:;
  /* 0054c5b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054c5b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054c5b3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054c5b6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c5b7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054c5b8 mov edi, eax */ { edi = (u32)(eax); }
  /* 0054c5ba mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0054c5bd mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c5c0 mov dl, byte ptr [eax + 0x21] */ { const u32 m_ = (u32)(eax + 0x21u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054c5c3 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054c5c5 mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054c5c7 mov byte ptr [ebp - 8], cl */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054c5ca jne 0x54c5ed */ if (!ZF_) goto L_0054c5ed;
  /* 0054c5cc mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054c5cf mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
L_0054c5d1:;
  /* 0054c5d1 cmp edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c5d4 setl cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((LT_) ? 1u : 0u) & 0xffu); }
  /* 0054c5d7 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054c5d9 mov esi, eax */ { esi = (u32)(eax); }
  /* 0054c5db mov byte ptr [ebp - 8], cl */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054c5de je 0x54c5e4 */ if (ZF_) goto L_0054c5e4;
  /* 0054c5e0 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0054c5e2 jmp 0x54c5e7 */ goto L_0054c5e7;
L_0054c5e4:;
  /* 0054c5e4 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
L_0054c5e7:;
  /* 0054c5e7 cmp byte ptr [eax + 0x21], 0 */ { const u32 m_ = (u32)(eax + 0x21u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054c5eb je 0x54c5d1 */ if (ZF_) goto L_0054c5d1;
L_0054c5ed:;
  /* 0054c5ed test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054c5ef mov eax, esi */ { eax = (u32)(esi); }
  /* 0054c5f1 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054c5f4 je 0x54c610 */ if (ZF_) goto L_0054c610;
  /* 0054c5f6 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054c5f9 cmp esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c5fb jne 0x54c605 */ if (!ZF_) goto L_0054c605;
  /* 0054c5fd mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054c600 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054c601 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054c603 jmp 0x54c61f */ goto L_0054c61f;
L_0054c605:;
  /* 0054c605 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054c608 call 0x54cfb0 */ esp -= 4; M32(esp) = 0x54c60du; SAVEALL; F_0054cfb0(c); ABI_CHECK(0x54cfb0u, 0x54c608u); RETCHK(0x54c60du, 0x54c608u); LOADALL;
  /* 0054c60d mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
L_0054c610:;
  /* 0054c610 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054c613 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054c616 cmp edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c618 jge 0x54c63c */ if (!LT_) goto L_0054c63c;
  /* 0054c61a mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0054c61d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054c61e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
L_0054c61f:;
  /* 0054c61f lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 0054c622 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054c623 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054c625 call 0x54c6d0 */ esp -= 4; M32(esp) = 0x54c62au; SAVEALL; F_0054c6d0(c); ABI_CHECK(0x54c6d0u, 0x54c625u); RETCHK(0x54c62au, 0x54c625u); LOADALL;
  /* 0054c62a mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0054c62c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054c62d mov dword ptr [ebx], edx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edx); }
  /* 0054c62f mov byte ptr [ebx + 4], 1 */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)(0x1u); }
  /* 0054c633 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054c635 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054c636 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c638 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c639 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054c63c:;
  /* 0054c63c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054c63d mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 0054c63f mov byte ptr [ebx + 4], 0 */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0054c643 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054c645 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054c646 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c648 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c649 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054c650(CPU *c) {
  NATIVE_HOOK(0x54c650u) REGS; LOADALL;
L_0054c650:;
  /* 0054c650 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054c651 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054c653 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054c656 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054c659 cmp eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c65b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054c65c mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0054c65f jne 0x54c697 */ if (!ZF_) goto L_0054c697;
  /* 0054c661 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c663 jne 0x54c697 */ if (!ZF_) goto L_0054c697;
  /* 0054c665 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c668 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054c669 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054c66b call 0x54cf30 */ esp -= 4; M32(esp) = 0x54c670u; SAVEALL; F_0054cf30(c); ABI_CHECK(0x54cf30u, 0x54c66bu); RETCHK(0x54c670u, 0x54c66bu); LOADALL;
  /* 0054c670 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c673 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 0054c676 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c679 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0054c680 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 0054c682 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c685 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054c688 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054c68b mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0054c68d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054c690 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0054c692 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054c693 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c694 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0054c697:;
  /* 0054c697 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c699 je 0x54c6bd */ if (ZF_) goto L_0054c6bd;
  /* 0054c69b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054c69c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0054c6a0:;
  /* 0054c6a0 lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 0054c6a3 mov edi, eax */ { edi = (u32)(eax); }
  /* 0054c6a5 call 0x54d010 */ esp -= 4; M32(esp) = 0x54c6aau; SAVEALL; F_0054d010(c); ABI_CHECK(0x54d010u, 0x54c6a5u); RETCHK(0x54c6aau, 0x54c6a5u); LOADALL;
  /* 0054c6aa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054c6ab lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 0054c6ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054c6af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c6b0 call 0x54cab0 */ esp -= 4; M32(esp) = 0x54c6b5u; SAVEALL; F_0054cab0(c); ABI_CHECK(0x54cab0u, 0x54c6b0u); RETCHK(0x54c6b5u, 0x54c6b0u); LOADALL;
  /* 0054c6b5 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054c6b8 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c6ba jne 0x54c6a0 */ if (!ZF_) goto L_0054c6a0;
  /* 0054c6bc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0054c6bd:;
  /* 0054c6bd mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054c6c0 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0054c6c2 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0054c6c4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054c6c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c6c6 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0054c6d0(CPU *c) {
  NATIVE_HOOK(0x54c6d0u) REGS; LOADALL;
L_0054c6d0:;
  /* 0054c6d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054c6d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054c6d3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054c6d5 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 0054c6da mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0054c6e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054c6e1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0054c6e8 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054c6eb cmp dword ptr [edi + 8], 0xccccccb */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M32(m_), b_ = 0xccccccbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c6f2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054c6f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c6f4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054c6f6 jb 0x54c73b */ if (CF_) goto L_0054c73b;
  /* 0054c6f8 push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 0054c6fa xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0054c6fc push 0x642714 */ { u32 v_ = 0x642714u; esp -= 4; M32(esp) = v_; }
  /* 0054c701 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0054c704 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 0054c70b mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0054c70e mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 0054c712 call 0x404420 */ esp -= 4; M32(esp) = 0x54c717u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54c712u); RETCHK(0x54c717u, 0x54c712u); LOADALL;
  /* 0054c717 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0054c71a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054c71b lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0054c71e mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0054c721 call 0x4040e0 */ esp -= 4; M32(esp) = 0x54c726u; SAVEALL; F_004040e0(c); ABI_CHECK(0x4040e0u, 0x54c721u); RETCHK(0x54c726u, 0x54c721u); LOADALL;
  /* 0054c726 push 0x657ab8 */ { u32 v_ = 0x657ab8u; esp -= 4; M32(esp) = v_; }
  /* 0054c72b lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0054c72e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054c72f mov dword ptr [ebp - 0x50], 0x63cf80 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x63cf80u); }
  /* 0054c736 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
L_0054c73b:;
  /* 0054c73b mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c73e mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054c741 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054c743 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054c744 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c745 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054c746 call 0x54ce90 */ esp -= 4; M32(esp) = 0x54c74bu; SAVEALL; F_0054ce90(c); ABI_CHECK(0x54ce90u, 0x54c746u); RETCHK(0x54c74bu, 0x54c746u); LOADALL;
  /* 0054c74b mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0054c74e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0054c750 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c753 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054c754 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c756 mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0054c759 mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0054c75c jne 0x54c76b */ if (!ZF_) goto L_0054c76b;
  /* 0054c75e mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0054c761 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054c764 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0054c766 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c769 jmp 0x54c78a */ goto L_0054c78a;
L_0054c76b:;
  /* 0054c76b mov al, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054c76e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054c770 je 0x54c77f */ if (ZF_) goto L_0054c77f;
  /* 0054c772 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 0054c774 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c777 cmp esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c779 jne 0x54c78d */ if (!ZF_) goto L_0054c78d;
  /* 0054c77b mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0054c77d jmp 0x54c78d */ goto L_0054c78d;
L_0054c77f:;
  /* 0054c77f mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0054c782 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c785 cmp esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c788 jne 0x54c78d */ if (!ZF_) goto L_0054c78d;
L_0054c78a:;
  /* 0054c78a mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_0054c78d:;
  /* 0054c78d mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054c790 mov bl, byte ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054c793 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054c795 lea eax, [ecx + 4] */ eax = (u32)((u32)(ecx + 0x4u));
  /* 0054c798 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054c79a jne 0x54c83f */ if (!ZF_) goto L_0054c83f;
L_0054c7a0:;
  /* 0054c7a0 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0054c7a2 mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0054c7a5 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0054c7a7 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c7a9 jne 0x54c7fb */ if (!ZF_) goto L_0054c7fb;
  /* 0054c7ab mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054c7ae mov bl, byte ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054c7b1 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054c7b3 jne 0x54c7cf */ if (!ZF_) goto L_0054c7cf;
L_0054c7b5:;
  /* 0054c7b5 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0054c7b7 mov byte ptr [ecx + 0x20], 1 */ { const u32 m_ = (u32)(ecx + 0x20u); M8(m_) = (u8)(0x1u); }
  /* 0054c7bb mov byte ptr [edx + 0x20], 1 */ { const u32 m_ = (u32)(edx + 0x20u); M8(m_) = (u8)(0x1u); }
  /* 0054c7bf mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0054c7c1 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054c7c4 mov byte ptr [ecx + 0x20], 0 */ { const u32 m_ = (u32)(ecx + 0x20u); M8(m_) = (u8)(0x0u); }
  /* 0054c7c8 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0054c7ca mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0054c7cd jmp 0x54c82b */ goto L_0054c82b;
L_0054c7cf:;
  /* 0054c7cf cmp esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c7d2 jne 0x54c7dc */ if (!ZF_) goto L_0054c7dc;
  /* 0054c7d4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054c7d5 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054c7d7 call 0x54cd90 */ esp -= 4; M32(esp) = 0x54c7dcu; SAVEALL; F_0054cd90(c); ABI_CHECK(0x54cd90u, 0x54c7d7u); RETCHK(0x54c7dcu, 0x54c7d7u); LOADALL;
L_0054c7dc:;
  /* 0054c7dc mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c7df mov byte ptr [eax + 0x20], 1 */ { const u32 m_ = (u32)(eax + 0x20u); M8(m_) = (u8)(0x1u); }
  /* 0054c7e3 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054c7e6 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054c7e9 mov byte ptr [edx + 0x20], 0 */ { const u32 m_ = (u32)(edx + 0x20u); M8(m_) = (u8)(0x0u); }
  /* 0054c7ed mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c7f0 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054c7f3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054c7f4 call 0x54cdf0 */ esp -= 4; M32(esp) = 0x54c7f9u; SAVEALL; F_0054cdf0(c); ABI_CHECK(0x54cdf0u, 0x54c7f4u); RETCHK(0x54c7f9u, 0x54c7f4u); LOADALL;
  /* 0054c7f9 jmp 0x54c82b */ goto L_0054c82b;
L_0054c7fb:;
  /* 0054c7fb mov bl, byte ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054c7fe test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054c800 je 0x54c7b5 */ if (ZF_) goto L_0054c7b5;
  /* 0054c802 cmp esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c804 jne 0x54c80e */ if (!ZF_) goto L_0054c80e;
  /* 0054c806 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054c807 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054c809 call 0x54cdf0 */ esp -= 4; M32(esp) = 0x54c80eu; SAVEALL; F_0054cdf0(c); ABI_CHECK(0x54cdf0u, 0x54c809u); RETCHK(0x54c80eu, 0x54c809u); LOADALL;
L_0054c80e:;
  /* 0054c80e mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c811 mov byte ptr [eax + 0x20], 1 */ { const u32 m_ = (u32)(eax + 0x20u); M8(m_) = (u8)(0x1u); }
  /* 0054c815 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054c818 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054c81b mov byte ptr [edx + 0x20], 0 */ { const u32 m_ = (u32)(edx + 0x20u); M8(m_) = (u8)(0x0u); }
  /* 0054c81f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c822 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054c825 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054c826 call 0x54cd90 */ esp -= 4; M32(esp) = 0x54c82bu; SAVEALL; F_0054cd90(c); ABI_CHECK(0x54cd90u, 0x54c826u); RETCHK(0x54c82bu, 0x54c826u); LOADALL;
L_0054c82b:;
  /* 0054c82b mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054c82e mov dl, byte ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054c831 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054c833 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 0054c836 je 0x54c7a0 */ if (ZF_) goto L_0054c7a0;
  /* 0054c83c mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
L_0054c83f:;
  /* 0054c83f mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054c842 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c845 mov byte ptr [eax + 0x20], 1 */ { const u32 m_ = (u32)(eax + 0x20u); M8(m_) = (u8)(0x1u); }
  /* 0054c849 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054c84c mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0054c84e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054c851 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054c852 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054c853 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054c85a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c85c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c85d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0054c860(CPU *c) {
  NATIVE_HOOK(0x54c860u) REGS; LOADALL;
L_0054c860:;
  /* 0054c860 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054c861 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054c863 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054c865 push 0x61c570 */ { u32 v_ = 0x61c570u; esp -= 4; M32(esp) = v_; }
  /* 0054c86a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0054c870 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054c871 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0054c878 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054c87b mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054c87e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054c87f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c880 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054c881 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0054c883 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0054c885 mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0054c888 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054c88b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c88d mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0054c890 jne 0x54c896 */ if (!ZF_) goto L_0054c896;
  /* 0054c892 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054c894 jmp 0x54c89e */ goto L_0054c89e;
L_0054c896:;
  /* 0054c896 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054c899 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054c89b sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_0054c89e:;
  /* 0054c89e mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054c8a1 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c8a3 je 0x54ca92 */ if (ZF_) goto L_0054ca92;
  /* 0054c8a9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c8ab jne 0x54c8b1 */ if (!ZF_) goto L_0054c8b1;
  /* 0054c8ad xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0054c8af jmp 0x54c8b9 */ goto L_0054c8b9;
L_0054c8b1:;
  /* 0054c8b1 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054c8b4 sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054c8b6 sar esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
L_0054c8b9:;
  /* 0054c8b9 mov ebx, 0x3fffffff */ { ebx = (u32)(0x3fffffffu); }
  /* 0054c8be sub ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0054c8c0 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c8c2 jae 0x54c8c9 */ if (!CF_) goto L_0054c8c9;
  /* 0054c8c4 call 0x49ac70 */ esp -= 4; M32(esp) = 0x54c8c9u; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x54c8c4u); RETCHK(0x54c8c9u, 0x54c8c4u); LOADALL;
L_0054c8c9:;
  /* 0054c8c9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c8cb jne 0x54c8d1 */ if (!ZF_) goto L_0054c8d1;
  /* 0054c8cd xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0054c8cf jmp 0x54c8d9 */ goto L_0054c8d9;
L_0054c8d1:;
  /* 0054c8d1 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054c8d4 sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054c8d6 sar esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
L_0054c8d9:;
  /* 0054c8d9 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054c8db cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c8dd jae 0x54c9d6 */ if (!CF_) goto L_0054c9d6;
  /* 0054c8e3 mov esi, eax */ { esi = (u32)(eax); }
  /* 0054c8e5 shr esi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0054c8e7 mov ebx, 0x3fffffff */ { ebx = (u32)(0x3fffffffu); }
  /* 0054c8ec sub ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0054c8ee cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c8f0 jae 0x54c8f6 */ if (!CF_) goto L_0054c8f6;
  /* 0054c8f2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054c8f4 jmp 0x54c8f8 */ goto L_0054c8f8;
L_0054c8f6:;
  /* 0054c8f6 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0054c8f8:;
  /* 0054c8f8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c8fa jne 0x54c900 */ if (!ZF_) goto L_0054c900;
  /* 0054c8fc xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0054c8fe jmp 0x54c908 */ goto L_0054c908;
L_0054c900:;
  /* 0054c900 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054c903 sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054c905 sar esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
L_0054c908:;
  /* 0054c908 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054c90a cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c90c jae 0x54c920 */ if (!CF_) goto L_0054c920;
  /* 0054c90e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c910 jne 0x54c916 */ if (!ZF_) goto L_0054c916;
  /* 0054c912 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054c914 jmp 0x54c91e */ goto L_0054c91e;
L_0054c916:;
  /* 0054c916 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054c919 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054c91b sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_0054c91e:;
  /* 0054c91e add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0054c920:;
  /* 0054c920 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0054c923 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054c924 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0054c927 call 0x5fe934 */ esp -= 4; M32(esp) = 0x54c92cu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x54c927u); RETCHK(0x54c92cu, 0x54c927u); LOADALL;
  /* 0054c92c mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0054c933 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054c936 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054c939 mov esi, eax */ { esi = (u32)(eax); }
  /* 0054c93b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054c93c mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054c93f mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 0054c942 call 0x54d0e0 */ esp -= 4; M32(esp) = 0x54c947u; SAVEALL; F_0054d0e0(c); ABI_CHECK(0x54d0e0u, 0x54c942u); RETCHK(0x54c947u, 0x54c942u); LOADALL;
  /* 0054c947 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054c94a mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0054c94c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054c94f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054c952 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054c953 lea edx, [ebp + 0x10] */ edx = (u32)((u32)(ebp + 0x10u));
  /* 0054c956 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054c958 call 0x54d0c0 */ esp -= 4; M32(esp) = 0x54c95du; SAVEALL; F_0054d0c0(c); ABI_CHECK(0x54d0c0u, 0x54c958u); RETCHK(0x54c95du, 0x54c958u); LOADALL;
  /* 0054c95d mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054c960 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054c963 lea eax, [ebx + ecx*4] */ eax = (u32)((u32)(ebx + ecx * 4u));
  /* 0054c966 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054c969 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054c96c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054c96d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054c970 call 0x54d0e0 */ esp -= 4; M32(esp) = 0x54c975u; SAVEALL; F_0054d0e0(c); ABI_CHECK(0x54d0e0u, 0x54c970u); RETCHK(0x54c975u, 0x54c970u); LOADALL;
  /* 0054c975 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054c978 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054c97b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c97d jne 0x54c983 */ if (!ZF_) goto L_0054c983;
  /* 0054c97f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054c981 jmp 0x54c98b */ goto L_0054c98b;
L_0054c983:;
  /* 0054c983 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054c986 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054c988 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_0054c98b:;
  /* 0054c98b mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0054c98e add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0054c990 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054c992 je 0x54c99d */ if (ZF_) goto L_0054c99d;
  /* 0054c994 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054c995 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54c99au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54c995u); RETCHK(0x54c99au, 0x54c995u); LOADALL;
  /* 0054c99a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054c99d:;
  /* 0054c99d mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 0054c9a0 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054c9a2 lea eax, [esi + ebx*4] */ eax = (u32)((u32)(esi + ebx * 4u));
  /* 0054c9a5 mov dword ptr [edi + 0xc], edx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(edx); }
  /* 0054c9a8 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054c9ab mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
  /* 0054c9ae mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054c9b1 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054c9b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054c9b9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054c9ba pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054c9bb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c9bd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c9be ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0054c9d6:;
  /* 0054c9d6 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0054c9d9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054c9dc mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054c9de sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054c9e0 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0054c9e3 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c9e5 lea eax, [edx*4] */ eax = (u32)((u32)(edx * 4u));
  /* 0054c9ec mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054c9ef jae 0x54ca57 */ if (!CF_) goto L_0054ca57;
  /* 0054c9f1 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054c9f4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054c9f5 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054c9f7 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0054c9f9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054c9fb call 0x54d0e0 */ esp -= 4; M32(esp) = 0x54ca00u; SAVEALL; F_0054d0e0(c); ABI_CHECK(0x54d0e0u, 0x54c9fbu); RETCHK(0x54ca00u, 0x54c9fbu); LOADALL;
  /* 0054ca00 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0054ca07 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054ca0a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054ca0d mov edx, eax */ { edx = (u32)(eax); }
  /* 0054ca0f sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054ca11 sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0054ca14 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054ca16 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054ca19 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ca1a lea edx, [ebp + 0x10] */ edx = (u32)((u32)(ebp + 0x10u));
  /* 0054ca1d call 0x54d0c0 */ esp -= 4; M32(esp) = 0x54ca22u; SAVEALL; F_0054d0c0(c); ABI_CHECK(0x54d0c0u, 0x54ca1du); RETCHK(0x54ca22u, 0x54ca1du); LOADALL;
  /* 0054ca22 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054ca25 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054ca28 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054ca2a mov dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0054ca2d mov edi, edx */ { edi = (u32)(edx); }
  /* 0054ca2f sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0054ca31 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054ca34 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ca36 je 0x54ca92 */ if (ZF_) goto L_0054ca92;
L_0054ca38:;
  /* 0054ca38 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054ca3b mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0054ca3d add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054ca40 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ca42 jne 0x54ca38 */ if (!ZF_) goto L_0054ca38;
  /* 0054ca44 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054ca47 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054ca4e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054ca4f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054ca50 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054ca51 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054ca53 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054ca54 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0054ca57:;
  /* 0054ca57 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0054ca59 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054ca5b mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0054ca5e mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054ca61 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ca62 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054ca64 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0054ca66 call 0x54d0e0 */ esp -= 4; M32(esp) = 0x54ca6bu; SAVEALL; F_0054d0e0(c); ABI_CHECK(0x54d0e0u, 0x54ca66u); RETCHK(0x54ca6bu, 0x54ca66u); LOADALL;
  /* 0054ca6b mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054ca6e mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054ca71 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054ca74 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054ca76 mov edx, esi */ { edx = (u32)(esi); }
  /* 0054ca78 call 0x54d070 */ esp -= 4; M32(esp) = 0x54ca7du; SAVEALL; F_0054d070(c); ABI_CHECK(0x54d070u, 0x54ca78u); RETCHK(0x54ca7du, 0x54ca78u); LOADALL;
  /* 0054ca7d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054ca80 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054ca82 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ca84 je 0x54ca92 */ if (ZF_) goto L_0054ca92;
L_0054ca86:;
  /* 0054ca86 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054ca89 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 0054ca8b add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054ca8e cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ca90 jne 0x54ca86 */ if (!ZF_) goto L_0054ca86;
L_0054ca92:;
  /* 0054ca92 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054ca95 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054ca96 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054ca97 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054ca9e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054ca9f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054caa1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054caa2 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0054c9c1(CPU *c) {
  NATIVE_HOOK(0x54c9c1u) REGS; LOADALL;
L_0054c9c1:;
  /* 0054c9c1 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0054c9c4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054c9c5 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54c9cau; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54c9c5u); RETCHK(0x54c9cau, 0x54c9c5u); LOADALL;
  /* 0054c9ca add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054c9cd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054c9cf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054c9d1 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0054c9d6 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0054c9d9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054c9dc mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054c9de sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054c9e0 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0054c9e3 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c9e5 lea eax, [edx*4] */ eax = (u32)((u32)(edx * 4u));
  /* 0054c9ec mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054c9ef jae 0x54ca57 */ if (!CF_) goto L_0054ca57;
  /* 0054c9f1 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054c9f4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054c9f5 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054c9f7 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0054c9f9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054c9fb call 0x54d0e0 */ esp -= 4; M32(esp) = 0x54ca00u; SAVEALL; F_0054d0e0(c); ABI_CHECK(0x54d0e0u, 0x54c9fbu); RETCHK(0x54ca00u, 0x54c9fbu); LOADALL;
  /* 0054ca00 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0054ca07 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054ca0a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054ca0d mov edx, eax */ { edx = (u32)(eax); }
  /* 0054ca0f sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054ca11 sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0054ca14 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054ca16 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054ca19 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ca1a lea edx, [ebp + 0x10] */ edx = (u32)((u32)(ebp + 0x10u));
  /* 0054ca1d call 0x54d0c0 */ esp -= 4; M32(esp) = 0x54ca22u; SAVEALL; F_0054d0c0(c); ABI_CHECK(0x54d0c0u, 0x54ca1du); RETCHK(0x54ca22u, 0x54ca1du); LOADALL;
  /* 0054ca22 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054ca25 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054ca28 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054ca2a mov dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0054ca2d mov edi, edx */ { edi = (u32)(edx); }
  /* 0054ca2f sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0054ca31 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054ca34 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ca36 je 0x54ca92 */ if (ZF_) goto L_0054ca92;
L_0054ca38:;
  /* 0054ca38 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054ca3b mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0054ca3d add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054ca40 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ca42 jne 0x54ca38 */ if (!ZF_) goto L_0054ca38;
  /* 0054ca44 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054ca47 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054ca4e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054ca4f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054ca50 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054ca51 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054ca53 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054ca54 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0054ca57:;
  /* 0054ca57 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0054ca59 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054ca5b mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0054ca5e mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054ca61 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ca62 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054ca64 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0054ca66 call 0x54d0e0 */ esp -= 4; M32(esp) = 0x54ca6bu; SAVEALL; F_0054d0e0(c); ABI_CHECK(0x54d0e0u, 0x54ca66u); RETCHK(0x54ca6bu, 0x54ca66u); LOADALL;
  /* 0054ca6b mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054ca6e mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054ca71 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054ca74 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054ca76 mov edx, esi */ { edx = (u32)(esi); }
  /* 0054ca78 call 0x54d070 */ esp -= 4; M32(esp) = 0x54ca7du; SAVEALL; F_0054d070(c); ABI_CHECK(0x54d070u, 0x54ca78u); RETCHK(0x54ca7du, 0x54ca78u); LOADALL;
  /* 0054ca7d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054ca80 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054ca82 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ca84 je 0x54ca92 */ if (ZF_) goto L_0054ca92;
L_0054ca86:;
  /* 0054ca86 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054ca89 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 0054ca8b add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054ca8e cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ca90 jne 0x54ca86 */ if (!ZF_) goto L_0054ca86;
L_0054ca92:;
  /* 0054ca92 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054ca95 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054ca96 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054ca97 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054ca9e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054ca9f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054caa1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054caa2 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0054c9cd(CPU *c) {
  NATIVE_HOOK(0x54c9cdu) REGS; LOADALL;
L_0054c9cd:;
  /* 0054c9cd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054c9cf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054c9d1 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0054c9d6 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0054c9d9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054c9dc mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054c9de sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054c9e0 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0054c9e3 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054c9e5 lea eax, [edx*4] */ eax = (u32)((u32)(edx * 4u));
  /* 0054c9ec mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054c9ef jae 0x54ca57 */ if (!CF_) goto L_0054ca57;
  /* 0054c9f1 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054c9f4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054c9f5 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054c9f7 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0054c9f9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054c9fb call 0x54d0e0 */ esp -= 4; M32(esp) = 0x54ca00u; SAVEALL; F_0054d0e0(c); ABI_CHECK(0x54d0e0u, 0x54c9fbu); RETCHK(0x54ca00u, 0x54c9fbu); LOADALL;
  /* 0054ca00 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0054ca07 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054ca0a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054ca0d mov edx, eax */ { edx = (u32)(eax); }
  /* 0054ca0f sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054ca11 sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0054ca14 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054ca16 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054ca19 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ca1a lea edx, [ebp + 0x10] */ edx = (u32)((u32)(ebp + 0x10u));
  /* 0054ca1d call 0x54d0c0 */ esp -= 4; M32(esp) = 0x54ca22u; SAVEALL; F_0054d0c0(c); ABI_CHECK(0x54d0c0u, 0x54ca1du); RETCHK(0x54ca22u, 0x54ca1du); LOADALL;
  /* 0054ca22 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054ca25 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054ca28 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054ca2a mov dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0054ca2d mov edi, edx */ { edi = (u32)(edx); }
  /* 0054ca2f sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0054ca31 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054ca34 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ca36 je 0x54ca92 */ if (ZF_) goto L_0054ca92;
L_0054ca38:;
  /* 0054ca38 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054ca3b mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0054ca3d add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054ca40 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ca42 jne 0x54ca38 */ if (!ZF_) goto L_0054ca38;
  /* 0054ca44 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054ca47 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054ca4e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054ca4f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054ca50 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054ca51 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054ca53 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054ca54 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0054ca57:;
  /* 0054ca57 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0054ca59 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054ca5b mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0054ca5e mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054ca61 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ca62 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054ca64 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0054ca66 call 0x54d0e0 */ esp -= 4; M32(esp) = 0x54ca6bu; SAVEALL; F_0054d0e0(c); ABI_CHECK(0x54d0e0u, 0x54ca66u); RETCHK(0x54ca6bu, 0x54ca66u); LOADALL;
  /* 0054ca6b mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054ca6e mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054ca71 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054ca74 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054ca76 mov edx, esi */ { edx = (u32)(esi); }
  /* 0054ca78 call 0x54d070 */ esp -= 4; M32(esp) = 0x54ca7du; SAVEALL; F_0054d070(c); ABI_CHECK(0x54d070u, 0x54ca78u); RETCHK(0x54ca7du, 0x54ca78u); LOADALL;
  /* 0054ca7d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054ca80 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054ca82 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ca84 je 0x54ca92 */ if (ZF_) goto L_0054ca92;
L_0054ca86:;
  /* 0054ca86 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054ca89 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 0054ca8b add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054ca8e cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ca90 jne 0x54ca86 */ if (!ZF_) goto L_0054ca86;
L_0054ca92:;
  /* 0054ca92 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054ca95 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054ca96 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054ca97 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054ca9e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054ca9f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054caa1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054caa2 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0054cab0(CPU *c) {
  NATIVE_HOOK(0x54cab0u) REGS; LOADALL;
L_0054cab0:;
  /* 0054cab0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054cab1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054cab3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054cab5 push 0x620068 */ { u32 v_ = 0x620068u; esp -= 4; M32(esp) = v_; }
  /* 0054caba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0054cac0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054cac1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0054cac8 sub esp, 0x4c */ { u32 a_ = esp, b_ = 0x4cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054cacb mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054cace mov cl, byte ptr [eax + 0x21] */ { const u32 m_ = (u32)(eax + 0x21u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cad1 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cad3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054cad4 je 0x54cb19 */ if (ZF_) goto L_0054cb19;
  /* 0054cad6 push 0x1b */ { u32 v_ = 0x1bu; esp -= 4; M32(esp) = v_; }
  /* 0054cad8 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0054cada push 0x6426f8 */ { u32 v_ = 0x6426f8u; esp -= 4; M32(esp) = v_; }
  /* 0054cadf lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0054cae2 mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 0054cae9 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 0054caec mov byte ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)(0x0u); }
  /* 0054caf0 call 0x404420 */ esp -= 4; M32(esp) = 0x54caf5u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54caf0u); RETCHK(0x54caf5u, 0x54caf0u); LOADALL;
  /* 0054caf5 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0054caf8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054caf9 lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0054cafc mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0054caff call 0x4040e0 */ esp -= 4; M32(esp) = 0x54cb04u; SAVEALL; F_004040e0(c); ABI_CHECK(0x4040e0u, 0x54caffu); RETCHK(0x54cb04u, 0x54caffu); LOADALL;
  /* 0054cb04 push 0x657b2c */ { u32 v_ = 0x657b2cu; esp -= 4; M32(esp) = v_; }
  /* 0054cb09 lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0054cb0c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054cb0d mov dword ptr [ebp - 0x58], 0x63cf8c */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(0x63cf8cu); }
  /* 0054cb14 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
L_0054cb19:;
  /* 0054cb19 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054cb1a mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0054cb1c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054cb1d lea edx, [ebp + 0x10] */ edx = (u32)((u32)(ebp + 0x10u));
  /* 0054cb20 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 0054cb23 call 0x54d010 */ esp -= 4; M32(esp) = 0x54cb28u; SAVEALL; F_0054d010(c); ABI_CHECK(0x54d010u, 0x54cb23u); RETCHK(0x54cb28u, 0x54cb23u); LOADALL;
  /* 0054cb28 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0054cb2a mov cl, byte ptr [eax + 0x21] */ { const u32 m_ = (u32)(eax + 0x21u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cb2d test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cb2f je 0x54cb36 */ if (ZF_) goto L_0054cb36;
  /* 0054cb31 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0054cb34 jmp 0x54cb4e */ goto L_0054cb4e;
L_0054cb36:;
  /* 0054cb36 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054cb39 mov cl, byte ptr [edx + 0x21] */ { const u32 m_ = (u32)(edx + 0x21u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cb3c test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cb3e je 0x54cb44 */ if (ZF_) goto L_0054cb44;
  /* 0054cb40 mov edi, eax */ { edi = (u32)(eax); }
  /* 0054cb42 jmp 0x54cb4e */ goto L_0054cb4e;
L_0054cb44:;
  /* 0054cb44 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054cb47 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054cb49 mov edi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0054cb4c jne 0x54cbc5 */ if (!ZF_) goto L_0054cbc5;
L_0054cb4e:;
  /* 0054cb4e mov al, byte ptr [edi + 0x21] */ { const u32 m_ = (u32)(edi + 0x21u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cb51 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cb53 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0054cb56 jne 0x54cb5b */ if (!ZF_) goto L_0054cb5b;
  /* 0054cb58 mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
L_0054cb5b:;
  /* 0054cb5b mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054cb5e mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054cb61 cmp dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054cb64 jne 0x54cb6b */ if (!ZF_) goto L_0054cb6b;
  /* 0054cb66 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 0054cb69 jmp 0x54cb76 */ goto L_0054cb76;
L_0054cb6b:;
  /* 0054cb6b cmp dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054cb6d jne 0x54cb73 */ if (!ZF_) goto L_0054cb73;
  /* 0054cb6f mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 0054cb71 jmp 0x54cb76 */ goto L_0054cb76;
L_0054cb73:;
  /* 0054cb73 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
L_0054cb76:;
  /* 0054cb76 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054cb79 cmp dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054cb7b mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0054cb7e jne 0x54cb9a */ if (!ZF_) goto L_0054cb9a;
  /* 0054cb80 mov al, byte ptr [edi + 0x21] */ { const u32 m_ = (u32)(edi + 0x21u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cb83 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cb85 je 0x54cb8b */ if (ZF_) goto L_0054cb8b;
  /* 0054cb87 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054cb89 jmp 0x54cb98 */ goto L_0054cb98;
L_0054cb8b:;
  /* 0054cb8b mov eax, edi */ { eax = (u32)(edi); }
  /* 0054cb8d call 0x54cf90 */ esp -= 4; M32(esp) = 0x54cb92u; SAVEALL; F_0054cf90(c); ABI_CHECK(0x54cf90u, 0x54cb8du); RETCHK(0x54cb92u, 0x54cb8du); LOADALL;
  /* 0054cb92 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054cb95 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
L_0054cb98:;
  /* 0054cb98 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
L_0054cb9a:;
  /* 0054cb9a mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054cb9d cmp dword ptr [ecx + 8], ebx */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054cba0 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0054cba3 jne 0x54cc23 */ if (!ZF_) goto L_0054cc23;
  /* 0054cba5 mov al, byte ptr [edi + 0x21] */ { const u32 m_ = (u32)(edi + 0x21u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cba8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cbaa je 0x54cbb3 */ if (ZF_) goto L_0054cbb3;
  /* 0054cbac mov eax, esi */ { eax = (u32)(esi); }
  /* 0054cbae mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054cbb1 jmp 0x54cc23 */ goto L_0054cc23;
L_0054cbb3:;
  /* 0054cbb3 mov eax, edi */ { eax = (u32)(edi); }
  /* 0054cbb5 call 0x54cf70 */ esp -= 4; M32(esp) = 0x54cbbau; SAVEALL; F_0054cf70(c); ABI_CHECK(0x54cf70u, 0x54cbb5u); RETCHK(0x54cbbau, 0x54cbb5u); LOADALL;
  /* 0054cbba mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0054cbbd mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054cbc0 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054cbc3 jmp 0x54cc23 */ goto L_0054cc23;
L_0054cbc5:;
  /* 0054cbc5 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0054cbc8 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0054cbca mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0054cbcc cmp ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054cbcf jne 0x54cbd5 */ if (!ZF_) goto L_0054cbd5;
  /* 0054cbd1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054cbd3 jmp 0x54cbf0 */ goto L_0054cbf0;
L_0054cbd5:;
  /* 0054cbd5 mov al, byte ptr [edi + 0x21] */ { const u32 m_ = (u32)(edi + 0x21u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cbd8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cbda mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0054cbdd jne 0x54cbe2 */ if (!ZF_) goto L_0054cbe2;
  /* 0054cbdf mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
L_0054cbe2:;
  /* 0054cbe2 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 0054cbe4 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054cbe7 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0054cbea mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054cbed mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
L_0054cbf0:;
  /* 0054cbf0 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054cbf3 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054cbf6 cmp dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054cbf9 jne 0x54cc00 */ if (!ZF_) goto L_0054cc00;
  /* 0054cbfb mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0054cbfe jmp 0x54cc0e */ goto L_0054cc0e;
L_0054cc00:;
  /* 0054cc00 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054cc03 cmp dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054cc05 jne 0x54cc0b */ if (!ZF_) goto L_0054cc0b;
  /* 0054cc07 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0054cc09 jmp 0x54cc0e */ goto L_0054cc0e;
L_0054cc0b:;
  /* 0054cc0b mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_0054cc0e:;
  /* 0054cc0e mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054cc11 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0054cc14 mov dl, byte ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cc17 mov al, byte ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cc1a mov byte ptr [ecx + 0x20], dl */ { const u32 m_ = (u32)(ecx + 0x20u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0054cc1d mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054cc20 mov byte ptr [ebx + 0x20], al */ { const u32 m_ = (u32)(ebx + 0x20u); M8(m_) = (u8)((eax & 0xffu)); }
L_0054cc23:;
  /* 0054cc23 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0054cc26 mov cl, byte ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cc29 mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054cc2b cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054cc2d jne 0x54cd39 */ if (!ZF_) goto L_0054cd39;
  /* 0054cc33 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054cc36 cmp edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054cc39 je 0x54cd36 */ if (ZF_) goto L_0054cd36;
  /* 0054cc3f nop */ ;
L_0054cc40:;
  /* 0054cc40 cmp byte ptr [edi + 0x20], bl */ { const u32 m_ = (u32)(edi + 0x20u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054cc43 jne 0x54cd36 */ if (!ZF_) goto L_0054cd36;
  /* 0054cc49 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0054cc4b cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054cc4d jne 0x54ccba */ if (!ZF_) goto L_0054ccba;
  /* 0054cc4f mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054cc52 mov al, byte ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cc55 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cc57 jne 0x54cc6e */ if (!ZF_) goto L_0054cc6e;
  /* 0054cc59 mov byte ptr [ecx + 0x20], bl */ { const u32 m_ = (u32)(ecx + 0x20u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054cc5c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054cc5d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054cc5f mov byte ptr [esi + 0x20], 0 */ { const u32 m_ = (u32)(esi + 0x20u); M8(m_) = (u8)(0x0u); }
  /* 0054cc63 call 0x54cd90 */ esp -= 4; M32(esp) = 0x54cc68u; SAVEALL; F_0054cd90(c); ABI_CHECK(0x54cd90u, 0x54cc63u); RETCHK(0x54cc68u, 0x54cc63u); LOADALL;
  /* 0054cc68 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054cc6b mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_0054cc6e:;
  /* 0054cc6e mov al, byte ptr [ecx + 0x21] */ { const u32 m_ = (u32)(ecx + 0x21u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cc71 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cc73 jne 0x54ccef */ if (!ZF_) goto L_0054ccef;
  /* 0054cc75 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054cc77 cmp byte ptr [eax + 0x20], bl */ { const u32 m_ = (u32)(eax + 0x20u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054cc7a jne 0x54cc84 */ if (!ZF_) goto L_0054cc84;
  /* 0054cc7c mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054cc7f cmp byte ptr [eax + 0x20], bl */ { const u32 m_ = (u32)(eax + 0x20u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054cc82 je 0x54cceb */ if (ZF_) goto L_0054cceb;
L_0054cc84:;
  /* 0054cc84 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054cc87 cmp byte ptr [eax + 0x20], bl */ { const u32 m_ = (u32)(eax + 0x20u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054cc8a jne 0x54cca1 */ if (!ZF_) goto L_0054cca1;
  /* 0054cc8c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054cc8e mov byte ptr [eax + 0x20], bl */ { const u32 m_ = (u32)(eax + 0x20u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054cc91 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054cc92 mov byte ptr [ecx + 0x20], 0 */ { const u32 m_ = (u32)(ecx + 0x20u); M8(m_) = (u8)(0x0u); }
  /* 0054cc96 call 0x54cdf0 */ esp -= 4; M32(esp) = 0x54cc9bu; SAVEALL; F_0054cdf0(c); ABI_CHECK(0x54cdf0u, 0x54cc96u); RETCHK(0x54cc9bu, 0x54cc96u); LOADALL;
  /* 0054cc9b mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054cc9e mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_0054cca1:;
  /* 0054cca1 mov al, byte ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cca4 mov byte ptr [ecx + 0x20], al */ { const u32 m_ = (u32)(ecx + 0x20u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0054cca7 mov byte ptr [esi + 0x20], bl */ { const u32 m_ = (u32)(esi + 0x20u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054ccaa mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054ccad mov byte ptr [ecx + 0x20], bl */ { const u32 m_ = (u32)(ecx + 0x20u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054ccb0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ccb1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054ccb3 call 0x54cd90 */ esp -= 4; M32(esp) = 0x54ccb8u; SAVEALL; F_0054cd90(c); ABI_CHECK(0x54cd90u, 0x54ccb3u); RETCHK(0x54ccb8u, 0x54ccb3u); LOADALL;
  /* 0054ccb8 jmp 0x54cd36 */ goto L_0054cd36;
L_0054ccba:;
  /* 0054ccba mov al, byte ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054ccbd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054ccbf jne 0x54ccd5 */ if (!ZF_) goto L_0054ccd5;
  /* 0054ccc1 mov byte ptr [ecx + 0x20], bl */ { const u32 m_ = (u32)(ecx + 0x20u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054ccc4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ccc5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054ccc7 mov byte ptr [esi + 0x20], 0 */ { const u32 m_ = (u32)(esi + 0x20u); M8(m_) = (u8)(0x0u); }
  /* 0054cccb call 0x54cdf0 */ esp -= 4; M32(esp) = 0x54ccd0u; SAVEALL; F_0054cdf0(c); ABI_CHECK(0x54cdf0u, 0x54cccbu); RETCHK(0x54ccd0u, 0x54cccbu); LOADALL;
  /* 0054ccd0 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0054ccd2 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_0054ccd5:;
  /* 0054ccd5 mov al, byte ptr [ecx + 0x21] */ { const u32 m_ = (u32)(ecx + 0x21u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054ccd8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054ccda jne 0x54ccef */ if (!ZF_) goto L_0054ccef;
  /* 0054ccdc mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054ccdf cmp byte ptr [eax + 0x20], bl */ { const u32 m_ = (u32)(eax + 0x20u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054cce2 jne 0x54cd04 */ if (!ZF_) goto L_0054cd04;
  /* 0054cce4 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054cce6 cmp byte ptr [eax + 0x20], bl */ { const u32 m_ = (u32)(eax + 0x20u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054cce9 jne 0x54cd04 */ if (!ZF_) goto L_0054cd04;
L_0054cceb:;
  /* 0054cceb mov byte ptr [ecx + 0x20], 0 */ { const u32 m_ = (u32)(ecx + 0x20u); M8(m_) = (u8)(0x0u); }
L_0054ccef:;
  /* 0054ccef mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054ccf2 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054ccf5 mov edi, esi */ { edi = (u32)(esi); }
  /* 0054ccf7 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ccf9 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0054ccfc jne 0x54cc40 */ if (!ZF_) goto L_0054cc40;
  /* 0054cd02 jmp 0x54cd36 */ goto L_0054cd36;
L_0054cd04:;
  /* 0054cd04 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054cd06 cmp byte ptr [eax + 0x20], bl */ { const u32 m_ = (u32)(eax + 0x20u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054cd09 jne 0x54cd20 */ if (!ZF_) goto L_0054cd20;
  /* 0054cd0b mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054cd0e mov byte ptr [eax + 0x20], bl */ { const u32 m_ = (u32)(eax + 0x20u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054cd11 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054cd12 mov byte ptr [ecx + 0x20], 0 */ { const u32 m_ = (u32)(ecx + 0x20u); M8(m_) = (u8)(0x0u); }
  /* 0054cd16 call 0x54cd90 */ esp -= 4; M32(esp) = 0x54cd1bu; SAVEALL; F_0054cd90(c); ABI_CHECK(0x54cd90u, 0x54cd16u); RETCHK(0x54cd1bu, 0x54cd16u); LOADALL;
  /* 0054cd1b mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0054cd1d mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_0054cd20:;
  /* 0054cd20 mov al, byte ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cd23 mov byte ptr [ecx + 0x20], al */ { const u32 m_ = (u32)(ecx + 0x20u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0054cd26 mov byte ptr [esi + 0x20], bl */ { const u32 m_ = (u32)(esi + 0x20u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054cd29 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 0054cd2b mov byte ptr [ecx + 0x20], bl */ { const u32 m_ = (u32)(ecx + 0x20u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054cd2e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054cd2f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054cd31 call 0x54cdf0 */ esp -= 4; M32(esp) = 0x54cd36u; SAVEALL; F_0054cdf0(c); ABI_CHECK(0x54cdf0u, 0x54cd31u); RETCHK(0x54cd36u, 0x54cd31u); LOADALL;
L_0054cd36:;
  /* 0054cd36 mov byte ptr [edi + 0x20], bl */ { const u32 m_ = (u32)(edi + 0x20u); M8(m_) = (u8)((ebx & 0xffu)); }
L_0054cd39:;
  /* 0054cd39 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 0054cd3c mov eax, dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054cd3f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0054cd41 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054cd43 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054cd44 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054cd45 je 0x54cd50 */ if (ZF_) goto L_0054cd50;
  /* 0054cd47 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054cd48 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54cd4du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54cd48u); RETCHK(0x54cd4du, 0x54cd48u); LOADALL;
  /* 0054cd4d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054cd50:;
  /* 0054cd50 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0054cd53 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054cd54 mov dword ptr [eax + 0x14], esi */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(esi); }
  /* 0054cd57 mov dword ptr [eax + 0x18], esi */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(esi); }
  /* 0054cd5a mov dword ptr [eax + 0x1c], esi */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(esi); }
  /* 0054cd5d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54cd62u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54cd5du); RETCHK(0x54cd62u, 0x54cd5du); LOADALL;
  /* 0054cd62 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054cd65 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054cd68 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054cd6b cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054cd6d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054cd6e jbe 0x54cd74 */ if ((CF_|ZF_)) goto L_0054cd74;
  /* 0054cd70 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0054cd71 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
L_0054cd74:;
  /* 0054cd74 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054cd77 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054cd7a mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0054cd7c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054cd7f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054cd86 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054cd88 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054cd89 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0054cd90(CPU *c) {
  NATIVE_HOOK(0x54cd90u) REGS; LOADALL;
L_0054cd90:;
  /* 0054cd90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054cd91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054cd93 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054cd96 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0054cd98 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0054cd9b mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0054cd9d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054cd9e mov bl, byte ptr [edx + 0x21] */ { const u32 m_ = (u32)(edx + 0x21u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cda1 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cda3 jne 0x54cda8 */ if (!ZF_) goto L_0054cda8;
  /* 0054cda5 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
L_0054cda8:;
  /* 0054cda8 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054cdab mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0054cdae mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054cdb1 mov edx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054cdb4 cmp ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054cdb7 jne 0x54cdc6 */ if (!ZF_) goto L_0054cdc6;
  /* 0054cdb9 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0054cdbc mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0054cdbe mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0054cdc1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054cdc2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054cdc3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054cdc6:;
  /* 0054cdc6 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054cdc9 cmp ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054cdcb jne 0x54cdd9 */ if (!ZF_) goto L_0054cdd9;
  /* 0054cdcd mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0054cdcf mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0054cdd1 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0054cdd4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054cdd5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054cdd6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054cdd9:;
  /* 0054cdd9 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054cddc mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0054cdde mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0054cde1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054cde2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054cde3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054cdf0(CPU *c) {
  NATIVE_HOOK(0x54cdf0u) REGS; LOADALL;
L_0054cdf0:;
  /* 0054cdf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054cdf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054cdf3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054cdf5 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054cdf8 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0054cdfa mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054cdfd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054cdfe mov bl, byte ptr [edx + 0x21] */ { const u32 m_ = (u32)(edx + 0x21u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054ce01 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054ce03 jne 0x54ce08 */ if (!ZF_) goto L_0054ce08;
  /* 0054ce05 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
L_0054ce08:;
  /* 0054ce08 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054ce0b mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0054ce0e mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054ce11 mov edx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054ce14 cmp ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ce17 jne 0x54ce27 */ if (!ZF_) goto L_0054ce27;
  /* 0054ce19 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0054ce1c mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0054ce1f mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0054ce22 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054ce23 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054ce24 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054ce27:;
  /* 0054ce27 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054ce2a cmp ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ce2d jne 0x54ce3d */ if (!ZF_) goto L_0054ce3d;
  /* 0054ce2f mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054ce32 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0054ce35 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0054ce38 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054ce39 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054ce3a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054ce3d:;
  /* 0054ce3d mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0054ce3f mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0054ce42 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0054ce45 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054ce46 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054ce47 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054ce50(CPU *c) {
  NATIVE_HOOK(0x54ce50u) REGS; LOADALL;
L_0054ce50:;
  /* 0054ce50 push 0x24 */ { u32 v_ = 0x24u; esp -= 4; M32(esp) = v_; }
  /* 0054ce52 call 0x5fe934 */ esp -= 4; M32(esp) = 0x54ce57u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x54ce52u); RETCHK(0x54ce57u, 0x54ce52u); LOADALL;
  /* 0054ce57 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054ce5a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ce5c je 0x54ce64 */ if (ZF_) goto L_0054ce64;
  /* 0054ce5e mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
L_0054ce64:;
  /* 0054ce64 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 0054ce67 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ce69 je 0x54ce71 */ if (ZF_) goto L_0054ce71;
  /* 0054ce6b mov dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x0u); }
L_0054ce71:;
  /* 0054ce71 lea ecx, [eax + 8] */ ecx = (u32)((u32)(eax + 0x8u));
  /* 0054ce74 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ce76 je 0x54ce7e */ if (ZF_) goto L_0054ce7e;
  /* 0054ce78 mov dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x0u); }
L_0054ce7e:;
  /* 0054ce7e mov byte ptr [eax + 0x20], 1 */ { const u32 m_ = (u32)(eax + 0x20u); M8(m_) = (u8)(0x1u); }
  /* 0054ce82 mov byte ptr [eax + 0x21], 0 */ { const u32 m_ = (u32)(eax + 0x21u); M8(m_) = (u8)(0x0u); }
  /* 0054ce86 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054ce90(CPU *c) {
  NATIVE_HOOK(0x54ce90u) REGS; LOADALL;
L_0054ce90:;
  /* 0054ce90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054ce91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054ce93 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054ce95 push 0x61d801 */ { u32 v_ = 0x61d801u; esp -= 4; M32(esp) = v_; }
  /* 0054ce9a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0054cea0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054cea1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0054cea8 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054ceab push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054ceac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054cead push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054ceae mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0054ceb1 push 0x24 */ { u32 v_ = 0x24u; esp -= 4; M32(esp) = v_; }
  /* 0054ceb3 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0054ceb5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x54cebau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x54ceb5u); RETCHK(0x54cebau, 0x54ceb5u); LOADALL;
  /* 0054ceba mov esi, eax */ { esi = (u32)(eax); }
  /* 0054cebc mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0054cec3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054cec6 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0054cec9 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 0054cecc test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054cece mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0054ced2 je 0x54cf00 */ if (ZF_) goto L_0054cf00;
  /* 0054ced4 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0054ced7 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054ceda mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054cedd mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0054cee0 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0054cee3 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0054cee5 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0054cee7 lea edx, [esi + 0x10] */ edx = (u32)((u32)(esi + 0x10u));
  /* 0054ceea lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0054ceed push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ceee mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0054cef1 call 0x51b1a0 */ esp -= 4; M32(esp) = 0x54cef6u; SAVEALL; F_0051b1a0(c); ABI_CHECK(0x51b1a0u, 0x54cef1u); RETCHK(0x54cef6u, 0x54cef1u); LOADALL;
  /* 0054cef6 mov al, byte ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cef9 mov byte ptr [esi + 0x20], al */ { const u32 m_ = (u32)(esi + 0x20u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0054cefc mov byte ptr [esi + 0x21], 0 */ { const u32 m_ = (u32)(esi + 0x21u); M8(m_) = (u8)(0x0u); }
L_0054cf00:;
  /* 0054cf00 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054cf03 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054cf04 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054cf06 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054cf07 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054cf0e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054cf0f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054cf11 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054cf12 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0054cf15(CPU *c) {
  NATIVE_HOOK(0x54cf15u) REGS; LOADALL;
L_0054cf15:;
  /* 0054cf15 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0054cf18 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054cf19 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54cf1eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54cf19u); RETCHK(0x54cf1eu, 0x54cf19u); LOADALL;
  /* 0054cf1e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054cf21 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054cf23 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054cf25 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0054cf2a int3 */ TRAP(0x54cf2au, "int3");
}

void F_0054cf30(CPU *c) {
  NATIVE_HOOK(0x54cf30u) REGS; LOADALL;
L_0054cf30:;
  /* 0054cf30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054cf31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054cf33 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054cf34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054cf35 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054cf38 mov al, byte ptr [esi + 0x21] */ { const u32 m_ = (u32)(esi + 0x21u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cf3b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cf3d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054cf3e mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0054cf40 mov edi, esi */ { edi = (u32)(esi); }
  /* 0054cf42 jne 0x54cf68 */ if (!ZF_) goto L_0054cf68;
L_0054cf44:;
  /* 0054cf44 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054cf47 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054cf48 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0054cf4a call 0x54cf30 */ esp -= 4; M32(esp) = 0x54cf4fu; SAVEALL; F_0054cf30(c); ABI_CHECK(0x54cf30u, 0x54cf4au); RETCHK(0x54cf4fu, 0x54cf4au); LOADALL;
  /* 0054cf4f mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 0054cf51 call 0x54d090 */ esp -= 4; M32(esp) = 0x54cf56u; SAVEALL; F_0054d090(c); ABI_CHECK(0x54d090u, 0x54cf51u); RETCHK(0x54cf56u, 0x54cf51u); LOADALL;
  /* 0054cf56 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054cf57 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54cf5cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54cf57u); RETCHK(0x54cf5cu, 0x54cf57u); LOADALL;
  /* 0054cf5c mov al, byte ptr [edi + 0x21] */ { const u32 m_ = (u32)(edi + 0x21u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cf5f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054cf62 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cf64 mov esi, edi */ { esi = (u32)(edi); }
  /* 0054cf66 je 0x54cf44 */ if (ZF_) goto L_0054cf44;
L_0054cf68:;
  /* 0054cf68 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054cf69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054cf6a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054cf6b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054cf6c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054cf70(CPU *c) {
  NATIVE_HOOK(0x54cf70u) REGS; LOADALL;
L_0054cf70:;
  /* 0054cf70 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054cf73 mov dl, byte ptr [ecx + 0x21] */ { const u32 m_ = (u32)(ecx + 0x21u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cf76 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cf78 jne 0x54cf8c */ if (!ZF_) goto L_0054cf8c;
  /* 0054cf7a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0054cf80:;
  /* 0054cf80 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0054cf82 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054cf85 mov dl, byte ptr [ecx + 0x21] */ { const u32 m_ = (u32)(ecx + 0x21u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cf88 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cf8a je 0x54cf80 */ if (ZF_) goto L_0054cf80;
L_0054cf8c:;
  /* 0054cf8c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054cf90(CPU *c) {
  NATIVE_HOOK(0x54cf90u) REGS; LOADALL;
L_0054cf90:;
  /* 0054cf90 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0054cf92 mov dl, byte ptr [ecx + 0x21] */ { const u32 m_ = (u32)(ecx + 0x21u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cf95 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cf97 jne 0x54cfab */ if (!ZF_) goto L_0054cfab;
  /* 0054cf99 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0054cfa0:;
  /* 0054cfa0 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0054cfa2 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0054cfa4 mov dl, byte ptr [ecx + 0x21] */ { const u32 m_ = (u32)(ecx + 0x21u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cfa7 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cfa9 je 0x54cfa0 */ if (ZF_) goto L_0054cfa0;
L_0054cfab:;
  /* 0054cfab ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054cfb0(CPU *c) {
  NATIVE_HOOK(0x54cfb0u) REGS; LOADALL;
L_0054cfb0:;
  /* 0054cfb0 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 0054cfb2 mov cl, byte ptr [eax + 0x21] */ { const u32 m_ = (u32)(eax + 0x21u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cfb5 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cfb7 je 0x54cfbf */ if (ZF_) goto L_0054cfbf;
  /* 0054cfb9 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054cfbc mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0054cfbe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054cfbf:;
  /* 0054cfbf mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0054cfc1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054cfc2 mov bl, byte ptr [ecx + 0x21] */ { const u32 m_ = (u32)(ecx + 0x21u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cfc5 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cfc7 jne 0x54cfe3 */ if (!ZF_) goto L_0054cfe3;
  /* 0054cfc9 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054cfcc mov bl, byte ptr [eax + 0x21] */ { const u32 m_ = (u32)(eax + 0x21u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cfcf test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cfd1 jne 0x54cfdf */ if (!ZF_) goto L_0054cfdf;
L_0054cfd3:;
  /* 0054cfd3 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0054cfd5 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054cfd8 mov bl, byte ptr [eax + 0x21] */ { const u32 m_ = (u32)(eax + 0x21u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cfdb test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cfdd je 0x54cfd3 */ if (ZF_) goto L_0054cfd3;
L_0054cfdf:;
  /* 0054cfdf mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0054cfe1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054cfe2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054cfe3:;
  /* 0054cfe3 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054cfe6 mov cl, byte ptr [eax + 0x21] */ { const u32 m_ = (u32)(eax + 0x21u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cfe9 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054cfeb jne 0x54d00b */ if (!ZF_) goto L_0054d00b;
  /* 0054cfed lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_0054cff0:;
  /* 0054cff0 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 0054cff2 cmp ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054cff4 jne 0x54d002 */ if (!ZF_) goto L_0054d002;
  /* 0054cff6 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0054cff8 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054cffb mov cl, byte ptr [eax + 0x21] */ { const u32 m_ = (u32)(eax + 0x21u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054cffe test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054d000 je 0x54cff0 */ if (ZF_) goto L_0054cff0;
L_0054d002:;
  /* 0054d002 mov cl, byte ptr [eax + 0x21] */ { const u32 m_ = (u32)(eax + 0x21u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054d005 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054d007 jne 0x54d00b */ if (!ZF_) goto L_0054d00b;
  /* 0054d009 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
L_0054d00b:;
  /* 0054d00b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054d00c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d010(CPU *c) {
  NATIVE_HOOK(0x54d010u) REGS; LOADALL;
L_0054d010:;
  /* 0054d010 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 0054d012 mov cl, byte ptr [eax + 0x21] */ { const u32 m_ = (u32)(eax + 0x21u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054d015 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054d017 jne 0x54d066 */ if (!ZF_) goto L_0054d066;
  /* 0054d019 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054d01c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054d01d mov bl, byte ptr [ecx + 0x21] */ { const u32 m_ = (u32)(ecx + 0x21u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054d020 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054d022 jne 0x54d03f */ if (!ZF_) goto L_0054d03f;
  /* 0054d024 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054d026 mov bl, byte ptr [eax + 0x21] */ { const u32 m_ = (u32)(eax + 0x21u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054d029 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054d02b jne 0x54d03b */ if (!ZF_) goto L_0054d03b;
  /* 0054d02d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_0054d030:;
  /* 0054d030 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0054d032 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054d034 mov bl, byte ptr [eax + 0x21] */ { const u32 m_ = (u32)(eax + 0x21u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054d037 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054d039 je 0x54d030 */ if (ZF_) goto L_0054d030;
L_0054d03b:;
  /* 0054d03b mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0054d03d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054d03e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054d03f:;
  /* 0054d03f mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054d042 mov cl, byte ptr [eax + 0x21] */ { const u32 m_ = (u32)(eax + 0x21u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054d045 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054d047 jne 0x54d063 */ if (!ZF_) goto L_0054d063;
  /* 0054d049 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0054d050:;
  /* 0054d050 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 0054d052 cmp ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d055 jne 0x54d063 */ if (!ZF_) goto L_0054d063;
  /* 0054d057 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0054d059 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054d05c mov cl, byte ptr [eax + 0x21] */ { const u32 m_ = (u32)(eax + 0x21u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054d05f test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054d061 je 0x54d050 */ if (ZF_) goto L_0054d050;
L_0054d063:;
  /* 0054d063 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0054d065 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0054d066:;
  /* 0054d066 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d070(CPU *c) {
  NATIVE_HOOK(0x54d070u) REGS; LOADALL;
L_0054d070:;
  /* 0054d070 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d072 je 0x54d085 */ if (ZF_) goto L_0054d085;
  /* 0054d074 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_0054d075:;
  /* 0054d075 mov esi, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 0054d078 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054d07b sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054d07e cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d080 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0054d082 jne 0x54d075 */ if (!ZF_) goto L_0054d075;
  /* 0054d084 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0054d085:;
  /* 0054d085 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d090(CPU *c) {
  NATIVE_HOOK(0x54d090u) REGS; LOADALL;
L_0054d090:;
  /* 0054d090 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054d093 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054d095 je 0x54d0a0 */ if (ZF_) goto L_0054d0a0;
  /* 0054d097 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d098 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54d09du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54d098u); RETCHK(0x54d09du, 0x54d098u); LOADALL;
  /* 0054d09d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054d0a0:;
  /* 0054d0a0 mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0054d0a7 mov dword ptr [esi + 0x18], 0 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x0u); }
  /* 0054d0ae mov dword ptr [esi + 0x1c], 0 */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(0x0u); }
  /* 0054d0b5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d0c0(CPU *c) {
  NATIVE_HOOK(0x54d0c0u) REGS; LOADALL;
L_0054d0c0:;
  /* 0054d0c0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054d0c2 jbe 0x54d0d4 */ if ((CF_|ZF_)) goto L_0054d0d4;
  /* 0054d0c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_0054d0c5:;
  /* 0054d0c5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054d0c7 je 0x54d0cd */ if (ZF_) goto L_0054d0cd;
  /* 0054d0c9 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 0054d0cb mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
L_0054d0cd:;
  /* 0054d0cd add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054d0d0 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0054d0d1 jne 0x54d0c5 */ if (!ZF_) goto L_0054d0c5;
  /* 0054d0d3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0054d0d4:;
  /* 0054d0d4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d0e0(CPU *c) {
  NATIVE_HOOK(0x54d0e0u) REGS; LOADALL;
L_0054d0e0:;
  /* 0054d0e0 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d0e2 je 0x54d0f8 */ if (ZF_) goto L_0054d0f8;
  /* 0054d0e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_0054d0e5:;
  /* 0054d0e5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054d0e7 je 0x54d0ed */ if (ZF_) goto L_0054d0ed;
  /* 0054d0e9 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 0054d0eb mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
L_0054d0ed:;
  /* 0054d0ed add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054d0f0 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054d0f3 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d0f5 jne 0x54d0e5 */ if (!ZF_) goto L_0054d0e5;
  /* 0054d0f7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0054d0f8:;
  /* 0054d0f8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d100(CPU *c) {
  NATIVE_HOOK(0x54d100u) REGS; LOADALL;
L_0054d100:;
  /* 0054d100 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d101 mov edi, eax */ { edi = (u32)(eax); }
  /* 0054d103 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054d105 jg 0x54d10c */ if (!(ZF_|LT_)) goto L_0054d10c;
  /* 0054d107 mov edi, 8 */ { edi = (u32)(0x8u); }
L_0054d10c:;
  /* 0054d10c lea eax, [edi*8] */ eax = (u32)((u32)(edi * 8u));
  /* 0054d113 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d114 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 0054d11a mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0054d121 call 0x5fea94 */ esp -= 4; M32(esp) = 0x54d126u; SAVEALL; F_005fea94(c); ABI_CHECK(0x5fea94u, 0x54d121u); RETCHK(0x54d126u, 0x54d121u); LOADALL;
  /* 0054d126 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054d129 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054d12b mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054d12e je 0x54d133 */ if (ZF_) goto L_0054d133;
  /* 0054d130 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
L_0054d133:;
  /* 0054d133 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054d134 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d140(CPU *c) {
  NATIVE_HOOK(0x54d140u) REGS; LOADALL;
L_0054d140:;
  /* 0054d140 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054d143 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054d145 je 0x54d157 */ if (ZF_) goto L_0054d157;
  /* 0054d147 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d148 call 0x5fe99e */ esp -= 4; M32(esp) = 0x54d14du; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x54d148u); RETCHK(0x54d14du, 0x54d148u); LOADALL;
  /* 0054d14d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054d150 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
L_0054d157:;
  /* 0054d157 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 0054d15d mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0054d164 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d170(CPU *c) {
  NATIVE_HOOK(0x54d170u) REGS; LOADALL;
L_0054d170:;
  /* 0054d170 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054d171 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054d173 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054d176 cmp dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d178 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054d179 jl 0x54d1a4 */ if (LT_) goto L_0054d1a4;
  /* 0054d17b mov esi, eax */ { esi = (u32)(eax); }
  /* 0054d17d sar esi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0054d17f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054d181 jne 0x54d188 */ if (!ZF_) goto L_0054d188;
  /* 0054d183 mov esi, 8 */ { esi = (u32)(0x8u); }
L_0054d188:;
  /* 0054d188 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054d18a shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0054d18d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d18e mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054d191 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d192 call 0x5feb78 */ esp -= 4; M32(esp) = 0x54d197u; SAVEALL; F_005feb78(c); ABI_CHECK(0x5feb78u, 0x54d192u); RETCHK(0x54d197u, 0x54d192u); LOADALL;
  /* 0054d197 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054d19a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054d19c je 0x54d1c5 */ if (ZF_) goto L_0054d1c5;
  /* 0054d19e mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054d1a1 add dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
L_0054d1a4:;
  /* 0054d1a4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054d1a5 mov ebx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (u32)(M32(m_)); }
  /* 0054d1a7 lea edx, [ebx - 1] */ edx = (u32)((u32)(ebx + 0xffffffffu));
  /* 0054d1aa xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0054d1ac test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054d1ae jl 0x54d1d9 */ if (LT_) goto L_0054d1d9;
L_0054d1b0:;
  /* 0054d1b0 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054d1b3 lea eax, [edx + esi] */ eax = (u32)((u32)(edx + esi));
  /* 0054d1b6 sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0054d1b8 mov ecx, dword ptr [ecx + eax*8] */ { const u32 m_ = (u32)(ecx + eax * 8u); ecx = (u32)(M32(m_)); }
  /* 0054d1bb cmp dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d1be jle 0x54d1cd */ if ((ZF_|LT_)) goto L_0054d1cd;
  /* 0054d1c0 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 0054d1c3 jmp 0x54d1d5 */ goto L_0054d1d5;
L_0054d1c5:;
  /* 0054d1c5 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054d1c8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054d1c9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054d1ca ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0054d1cd:;
  /* 0054d1cd cmp dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d1d0 jge 0x54d212 */ if (!LT_) goto L_0054d212;
  /* 0054d1d2 lea edx, [eax - 1] */ edx = (u32)((u32)(eax + 0xffffffffu));
L_0054d1d5:;
  /* 0054d1d5 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d1d7 jle 0x54d1b0 */ if ((ZF_|LT_)) goto L_0054d1b0;
L_0054d1d9:;
  /* 0054d1d9 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054d1dc sub ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0054d1de lea eax, [ecx + esi*8] */ eax = (u32)((u32)(ecx + esi * 8u));
  /* 0054d1e1 shl ebx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0054d1e4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054d1e5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d1e6 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054d1e9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d1ea call 0x5fe998 */ esp -= 4; M32(esp) = 0x54d1efu; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x54d1eau); RETCHK(0x54d1efu, 0x54d1eau); LOADALL;
  /* 0054d1ef mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054d1f2 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054d1f5 mov dword ptr [edx + esi*8], eax */ { const u32 m_ = (u32)(edx + esi * 8u); M32(m_) = (u32)(eax); }
  /* 0054d1f8 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054d1fb mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054d1fe mov dword ptr [ecx + esi*8 + 4], edx */ { const u32 m_ = (u32)(ecx + esi * 8u + 0x4u); M32(m_) = (u32)(edx); }
  /* 0054d202 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0054d204 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054d207 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054d208 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 0054d20a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054d20b mov eax, esi */ { eax = (u32)(esi); }
  /* 0054d20d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054d20e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054d20f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0054d212:;
  /* 0054d212 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054d213 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054d216 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054d217 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054d218 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0054d220(CPU *c) {
  NATIVE_HOOK(0x54d220u) REGS; LOADALL;
L_0054d220:;
  /* 0054d220 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054d222 call 0x54d240 */ esp -= 4; M32(esp) = 0x54d227u; SAVEALL; F_0054d240(c); ABI_CHECK(0x54d240u, 0x54d222u); RETCHK(0x54d227u, 0x54d222u); LOADALL;
  /* 0054d227 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054d229 jl 0x54d233 */ if (LT_) goto L_0054d233;
  /* 0054d22b mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054d22e mov eax, dword ptr [ecx + eax*8 + 4] */ { const u32 m_ = (u32)(ecx + eax * 8u + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054d232 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054d233:;
  /* 0054d233 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054d235 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d240(CPU *c) {
  NATIVE_HOOK(0x54d240u) REGS; LOADALL;
L_0054d240:;
  /* 0054d240 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0054d242 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054d243 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054d244 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0054d246 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0054d247 js 0x54d26a */ if (SF_) goto L_0054d26a;
  /* 0054d249 mov ebx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0054d24c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0054d250:;
  /* 0054d250 lea eax, [ecx + esi] */ eax = (u32)((u32)(ecx + esi));
  /* 0054d253 sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0054d255 mov edx, dword ptr [ebx + eax*8] */ { const u32 m_ = (u32)(ebx + eax * 8u); edx = (u32)(M32(m_)); }
  /* 0054d258 cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d25a jle 0x54d261 */ if ((ZF_|LT_)) goto L_0054d261;
  /* 0054d25c lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 0054d25f jmp 0x54d266 */ goto L_0054d266;
L_0054d261:;
  /* 0054d261 jge 0x54d26d */ if (!LT_) goto L_0054d26d;
  /* 0054d263 lea ecx, [eax - 1] */ ecx = (u32)((u32)(eax + 0xffffffffu));
L_0054d266:;
  /* 0054d266 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d268 jle 0x54d250 */ if ((ZF_|LT_)) goto L_0054d250;
L_0054d26a:;
  /* 0054d26a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0054d26d:;
  /* 0054d26d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054d26e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054d26f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d270(CPU *c) {
  NATIVE_HOOK(0x54d270u) REGS; LOADALL;
L_0054d270:;
  /* 0054d270 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054d271 mov esi, eax */ { esi = (u32)(eax); }
  /* 0054d273 call 0x54d240 */ esp -= 4; M32(esp) = 0x54d278u; SAVEALL; F_0054d240(c); ABI_CHECK(0x54d240u, 0x54d273u); RETCHK(0x54d278u, 0x54d273u); LOADALL;
  /* 0054d278 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0054d27a call 0x54d290 */ esp -= 4; M32(esp) = 0x54d27fu; SAVEALL; F_0054d290(c); ABI_CHECK(0x54d290u, 0x54d27au); RETCHK(0x54d27fu, 0x54d27au); LOADALL;
  /* 0054d27f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054d280 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d290(CPU *c) {
  NATIVE_HOOK(0x54d290u) REGS; LOADALL;
L_0054d290:;
  /* 0054d290 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054d292 jl 0x54d2bf */ if (LT_) goto L_0054d2bf;
  /* 0054d294 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054d296 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d298 jge 0x54d2bf */ if (!LT_) goto L_0054d2bf;
  /* 0054d29a mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054d29d sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054d29f lea edx, [edx + ecx*8] */ edx = (u32)((u32)(edx + ecx * 8u));
  /* 0054d2a2 lea eax, [eax*8 - 8] */ eax = (u32)((u32)(eax * 8u + 0xfffffff8u));
  /* 0054d2a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d2aa lea ecx, [edx + 8] */ ecx = (u32)((u32)(edx + 0x8u));
  /* 0054d2ad push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d2ae push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d2af call 0x5fe998 */ esp -= 4; M32(esp) = 0x54d2b4u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x54d2afu); RETCHK(0x54d2b4u, 0x54d2afu); LOADALL;
  /* 0054d2b4 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054d2b6 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054d2b9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0054d2ba mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0054d2bc mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054d2be ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054d2bf:;
  /* 0054d2bf xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054d2c1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d2d0(CPU *c) {
  NATIVE_HOOK(0x54d2d0u) REGS; LOADALL;
L_0054d2d0:;
  /* 0054d2d0 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0054d2d2 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0054d2d4 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 0054d2d9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054d2da mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0054d2dd mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0054d2e0 mov dword ptr [eax + 0xc], esi */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(esi); }
  /* 0054d2e3 mov esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054d2e6 mov dword ptr [eax + 0x10], esi */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(esi); }
  /* 0054d2e9 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054d2ec mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0054d2ef mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0054d2f2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054d2f3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d300(CPU *c) {
  NATIVE_HOOK(0x54d300u) REGS; LOADALL;
L_0054d300:;
  /* 0054d300 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0054d302 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0054d304 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054d307 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0054d30a mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054d30d mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
  /* 0054d310 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054d313 mov dword ptr [eax + 0x10], edx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(edx); }
  /* 0054d316 mov ecx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0054d319 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0054d31c mov dword ptr [eax + 8], 1 */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(0x1u); }
  /* 0054d323 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d330(CPU *c) {
  NATIVE_HOOK(0x54d330u) REGS; LOADALL;
L_0054d330:;
  /* 0054d330 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054d331 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054d333 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0054d339 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054d33b push 0x61d898 */ { u32 v_ = 0x61d898u; esp -= 4; M32(esp) = v_; }
  /* 0054d340 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d341 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0054d348 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054d349 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054d34c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054d34e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d34f mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0054d352 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054d355 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0054d358 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054d35a mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054d35d mov edi, dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); edi = (u32)(M32(m_)); }
  /* 0054d363 push 0x6554c4 */ { u32 v_ = 0x6554c4u; esp -= 4; M32(esp) = v_; }
  /* 0054d368 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54d36au; SAVEALL; call_ind(c, t_); RETCHK(0x54d36au, 0x54d368u); LOADALL; }
  /* 0054d36a mov edx, esi */ { edx = (u32)(esi); }
  /* 0054d36c call 0x5427e0 */ esp -= 4; M32(esp) = 0x54d371u; SAVEALL; F_005427e0(c); ABI_CHECK(0x5427e0u, 0x54d36cu); RETCHK(0x54d371u, 0x54d36cu); LOADALL;
  /* 0054d371 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0054d373 push 0x6554c4 */ { u32 v_ = 0x6554c4u; esp -= 4; M32(esp) = v_; }
  /* 0054d378 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54d37au; SAVEALL; call_ind(c, t_); RETCHK(0x54d37au, 0x54d378u); LOADALL; }
  /* 0054d37a mov edx, esi */ { edx = (u32)(esi); }
  /* 0054d37c call 0x5427e0 */ esp -= 4; M32(esp) = 0x54d381u; SAVEALL; F_005427e0(c); ABI_CHECK(0x5427e0u, 0x54d37cu); RETCHK(0x54d381u, 0x54d37cu); LOADALL;
  /* 0054d381 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0054d383 push 0x6554c4 */ { u32 v_ = 0x6554c4u; esp -= 4; M32(esp) = v_; }
  /* 0054d388 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54d38au; SAVEALL; call_ind(c, t_); RETCHK(0x54d38au, 0x54d388u); LOADALL; }
  /* 0054d38a mov edx, esi */ { edx = (u32)(esi); }
  /* 0054d38c call 0x5427e0 */ esp -= 4; M32(esp) = 0x54d391u; SAVEALL; F_005427e0(c); ABI_CHECK(0x5427e0u, 0x54d38cu); RETCHK(0x54d391u, 0x54d38cu); LOADALL;
  /* 0054d391 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0054d393 push 0x6554c4 */ { u32 v_ = 0x6554c4u; esp -= 4; M32(esp) = v_; }
  /* 0054d398 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54d39au; SAVEALL; call_ind(c, t_); RETCHK(0x54d39au, 0x54d398u); LOADALL; }
  /* 0054d39a mov edx, esi */ { edx = (u32)(esi); }
  /* 0054d39c call 0x5427e0 */ esp -= 4; M32(esp) = 0x54d3a1u; SAVEALL; F_005427e0(c); ABI_CHECK(0x5427e0u, 0x54d39cu); RETCHK(0x54d3a1u, 0x54d39cu); LOADALL;
  /* 0054d3a1 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0054d3a3 push 0x6554c4 */ { u32 v_ = 0x6554c4u; esp -= 4; M32(esp) = v_; }
  /* 0054d3a8 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54d3aau; SAVEALL; call_ind(c, t_); RETCHK(0x54d3aau, 0x54d3a8u); LOADALL; }
  /* 0054d3aa mov edx, esi */ { edx = (u32)(esi); }
  /* 0054d3ac call 0x5427e0 */ esp -= 4; M32(esp) = 0x54d3b1u; SAVEALL; F_005427e0(c); ABI_CHECK(0x5427e0u, 0x54d3acu); RETCHK(0x54d3b1u, 0x54d3acu); LOADALL;
  /* 0054d3b1 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0054d3b3 push 0x6554c4 */ { u32 v_ = 0x6554c4u; esp -= 4; M32(esp) = v_; }
  /* 0054d3b8 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54d3bau; SAVEALL; call_ind(c, t_); RETCHK(0x54d3bau, 0x54d3b8u); LOADALL; }
  /* 0054d3ba mov edx, esi */ { edx = (u32)(esi); }
  /* 0054d3bc call 0x5427e0 */ esp -= 4; M32(esp) = 0x54d3c1u; SAVEALL; F_005427e0(c); ABI_CHECK(0x5427e0u, 0x54d3bcu); RETCHK(0x54d3c1u, 0x54d3bcu); LOADALL;
  /* 0054d3c1 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0054d3c3 push 0x6554c4 */ { u32 v_ = 0x6554c4u; esp -= 4; M32(esp) = v_; }
  /* 0054d3c8 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54d3cau; SAVEALL; call_ind(c, t_); RETCHK(0x54d3cau, 0x54d3c8u); LOADALL; }
  /* 0054d3ca mov edx, esi */ { edx = (u32)(esi); }
  /* 0054d3cc call 0x5427e0 */ esp -= 4; M32(esp) = 0x54d3d1u; SAVEALL; F_005427e0(c); ABI_CHECK(0x5427e0u, 0x54d3ccu); RETCHK(0x54d3d1u, 0x54d3ccu); LOADALL;
  /* 0054d3d1 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0054d3d3 push 0x6554c4 */ { u32 v_ = 0x6554c4u; esp -= 4; M32(esp) = v_; }
  /* 0054d3d8 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54d3dau; SAVEALL; call_ind(c, t_); RETCHK(0x54d3dau, 0x54d3d8u); LOADALL; }
  /* 0054d3da mov edx, esi */ { edx = (u32)(esi); }
  /* 0054d3dc call 0x5427e0 */ esp -= 4; M32(esp) = 0x54d3e1u; SAVEALL; F_005427e0(c); ABI_CHECK(0x5427e0u, 0x54d3dcu); RETCHK(0x54d3e1u, 0x54d3dcu); LOADALL;
  /* 0054d3e1 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0054d3e3 push 0x6554c4 */ { u32 v_ = 0x6554c4u; esp -= 4; M32(esp) = v_; }
  /* 0054d3e8 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54d3eau; SAVEALL; call_ind(c, t_); RETCHK(0x54d3eau, 0x54d3e8u); LOADALL; }
  /* 0054d3ea mov edx, esi */ { edx = (u32)(esi); }
  /* 0054d3ec call 0x5427e0 */ esp -= 4; M32(esp) = 0x54d3f1u; SAVEALL; F_005427e0(c); ABI_CHECK(0x5427e0u, 0x54d3ecu); RETCHK(0x54d3f1u, 0x54d3ecu); LOADALL;
  /* 0054d3f1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054d3f4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054d3f5 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054d3f7 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054d3fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054d3ff mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054d401 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054d402 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054d410(CPU *c) {
  NATIVE_HOOK(0x54d410u) REGS; LOADALL;
L_0054d410:;
  /* 0054d410 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0054d412:;
  /* 0054d412 cmp dword ptr [eax*8 + 0x640710], ecx */ { const u32 m_ = (u32)(eax * 8u + 0x640710u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d419 je 0x54d487 */ if (ZF_) goto L_0054d487;
  /* 0054d41b cmp dword ptr [eax*8 + 0x640718], ecx */ { const u32 m_ = (u32)(eax * 8u + 0x640718u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d422 je 0x54d45a */ if (ZF_) goto L_0054d45a;
  /* 0054d424 cmp dword ptr [eax*8 + 0x640720], ecx */ { const u32 m_ = (u32)(eax * 8u + 0x640720u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d42b je 0x54d463 */ if (ZF_) goto L_0054d463;
  /* 0054d42d cmp dword ptr [eax*8 + 0x640728], ecx */ { const u32 m_ = (u32)(eax * 8u + 0x640728u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d434 je 0x54d46e */ if (ZF_) goto L_0054d46e;
  /* 0054d436 cmp dword ptr [eax*8 + 0x640730], ecx */ { const u32 m_ = (u32)(eax * 8u + 0x640730u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d43d je 0x54d479 */ if (ZF_) goto L_0054d479;
  /* 0054d43f cmp dword ptr [eax*8 + 0x640738], ecx */ { const u32 m_ = (u32)(eax * 8u + 0x640738u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d446 je 0x54d484 */ if (ZF_) goto L_0054d484;
  /* 0054d448 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054d44b cmp eax, 0x90 */ { u32 a_ = eax, b_ = 0x90u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d450 jb 0x54d412 */ if (CF_) goto L_0054d412;
  /* 0054d452 lea eax, [eax*8 + 0x640710] */ eax = (u32)((u32)(eax * 8u + 0x640710u));
  /* 0054d459 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054d45a:;
  /* 0054d45a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054d45b lea eax, [eax*8 + 0x640710] */ eax = (u32)((u32)(eax * 8u + 0x640710u));
  /* 0054d462 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054d463:;
  /* 0054d463 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054d466 lea eax, [eax*8 + 0x640710] */ eax = (u32)((u32)(eax * 8u + 0x640710u));
  /* 0054d46d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054d46e:;
  /* 0054d46e add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054d471 lea eax, [eax*8 + 0x640710] */ eax = (u32)((u32)(eax * 8u + 0x640710u));
  /* 0054d478 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054d479:;
  /* 0054d479 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054d47c lea eax, [eax*8 + 0x640710] */ eax = (u32)((u32)(eax * 8u + 0x640710u));
  /* 0054d483 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054d484:;
  /* 0054d484 add eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0054d487:;
  /* 0054d487 lea eax, [eax*8 + 0x640710] */ eax = (u32)((u32)(eax * 8u + 0x640710u));
  /* 0054d48e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d490(CPU *c) {
  NATIVE_HOOK(0x54d490u) REGS; LOADALL;
L_0054d490:;
  /* 0054d490 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0054d492 call 0x54d5f0 */ esp -= 4; M32(esp) = 0x54d497u; SAVEALL; F_0054d5f0(c); ABI_CHECK(0x54d5f0u, 0x54d492u); RETCHK(0x54d497u, 0x54d492u); LOADALL;
  /* 0054d497 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054d499 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054d49b jne 0x54d4a4 */ if (!ZF_) goto L_0054d4a4;
  /* 0054d49d call 0x54d5c0 */ esp -= 4; M32(esp) = 0x54d4a2u; SAVEALL; F_0054d5c0(c); ABI_CHECK(0x54d5c0u, 0x54d49du); RETCHK(0x54d4a2u, 0x54d49du); LOADALL;
  /* 0054d4a2 mov eax, esi */ { eax = (u32)(esi); }
L_0054d4a4:;
  /* 0054d4a4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d4b0(CPU *c) {
  NATIVE_HOOK(0x54d4b0u) REGS; LOADALL;
L_0054d4b0:;
  /* 0054d4b0 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0054d4b5 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0054d4b8 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0054d4bb mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0054d4be mov dword ptr [eax + 0x18], 0 */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(0x0u); }
  /* 0054d4c5 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0054d4c8 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0054d4cb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d4d0(CPU *c) {
  NATIVE_HOOK(0x54d4d0u) REGS; LOADALL;
L_0054d4d0:;
  /* 0054d4d0 mov dword ptr [eax + 0x1c], 0x3f800000 */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(0x3f800000u); }
  /* 0054d4d7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d4e0(CPU *c) {
  NATIVE_HOOK(0x54d4e0u) REGS; LOADALL;
L_0054d4e0:;
  /* 0054d4e0 mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054d4e2 mov byte ptr [eax + 0x20], cl */ { const u32 m_ = (u32)(eax + 0x20u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054d4e5 mov dword ptr [eax + 0x24], 5 */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(0x5u); }
  /* 0054d4ec mov byte ptr [eax + 0x28], cl */ { const u32 m_ = (u32)(eax + 0x28u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054d4ef mov dword ptr [eax + 0x2c], 6 */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(0x6u); }
  /* 0054d4f6 mov byte ptr [eax + 0x30], 0 */ { const u32 m_ = (u32)(eax + 0x30u); M8(m_) = (u8)(0x0u); }
  /* 0054d4fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d500(CPU *c) {
  NATIVE_HOOK(0x54d500u) REGS; LOADALL;
L_0054d500:;
  /* 0054d500 mov word ptr [eax + 0x34], 0xc8 */ { const u32 m_ = (u32)(eax + 0x34u); M16(m_) = (u16)(0xc8u); }
  /* 0054d506 mov word ptr [eax + 0x36], 0xd0 */ { const u32 m_ = (u32)(eax + 0x36u); M16(m_) = (u16)(0xd0u); }
  /* 0054d50c mov word ptr [eax + 0x38], 0xcb */ { const u32 m_ = (u32)(eax + 0x38u); M16(m_) = (u16)(0xcbu); }
  /* 0054d512 mov word ptr [eax + 0x3a], 0xcd */ { const u32 m_ = (u32)(eax + 0x3au); M16(m_) = (u16)(0xcdu); }
  /* 0054d518 mov word ptr [eax + 0x3c], 0x1d */ { const u32 m_ = (u32)(eax + 0x3cu); M16(m_) = (u16)(0x1du); }
  /* 0054d51e mov word ptr [eax + 0x3e], 0x39 */ { const u32 m_ = (u32)(eax + 0x3eu); M16(m_) = (u16)(0x39u); }
  /* 0054d524 mov word ptr [eax + 0x40], 0x2a */ { const u32 m_ = (u32)(eax + 0x40u); M16(m_) = (u16)(0x2au); }
  /* 0054d52a mov word ptr [eax + 0x42], 0x9d */ { const u32 m_ = (u32)(eax + 0x42u); M16(m_) = (u16)(0x9du); }
  /* 0054d530 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d540(CPU *c) {
  NATIVE_HOOK(0x54d540u) REGS; LOADALL;
L_0054d540:;
  /* 0054d540 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054d541 lea ecx, [eax + 0x44] */ ecx = (u32)((u32)(eax + 0x44u));
  /* 0054d544 or edx, 0xffffffff */ { u32 a_ = edx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0054d547 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054d549 mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 0054d54b mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 0054d54e mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0054d551 mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
  /* 0054d554 mov dword ptr [esi + 0x10], edx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edx); }
  /* 0054d557 mov byte ptr [ecx], 2 */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)(0x2u); }
  /* 0054d55a xor dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054d55c mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054d55e mov byte ptr [eax + 0x46], dl */ { const u32 m_ = (u32)(eax + 0x46u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0054d561 mov byte ptr [eax + 0x4c], 3 */ { const u32 m_ = (u32)(eax + 0x4cu); M8(m_) = (u8)(0x3u); }
  /* 0054d565 mov byte ptr [eax + 0x4e], cl */ { const u32 m_ = (u32)(eax + 0x4eu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054d568 mov byte ptr [eax + 0x50], 4 */ { const u32 m_ = (u32)(eax + 0x50u); M8(m_) = (u8)(0x4u); }
  /* 0054d56c mov byte ptr [eax + 0x45], 5 */ { const u32 m_ = (u32)(eax + 0x45u); M8(m_) = (u8)(0x5u); }
  /* 0054d570 mov byte ptr [eax + 0x52], 2 */ { const u32 m_ = (u32)(eax + 0x52u); M8(m_) = (u8)(0x2u); }
  /* 0054d574 mov byte ptr [eax + 0x54], cl */ { const u32 m_ = (u32)(eax + 0x54u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054d577 mov byte ptr [eax + 0x56], dl */ { const u32 m_ = (u32)(eax + 0x56u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0054d57a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054d57b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d580(CPU *c) {
  NATIVE_HOOK(0x54d580u) REGS; LOADALL;
L_0054d580:;
  /* 0054d580 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054d581 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d582 mov edi, eax */ { edi = (u32)(eax); }
  /* 0054d584 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0054d586 add edi, 0x58 */ { u32 a_ = edi, b_ = 0x58u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0054d589 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0054d590:;
  /* 0054d590 mov eax, dword ptr [0x7a878c] */ { const u32 m_ = (u32)(0x7a878cu); eax = (u32)(M32(m_)); }
  /* 0054d595 mov ecx, dword ptr [esi + eax] */ { const u32 m_ = (u32)(esi + eax); ecx = (u32)(M32(m_)); }
  /* 0054d598 mov edx, edi */ { edx = (u32)(edi); }
  /* 0054d59a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0054d5a0:;
  /* 0054d5a0 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054d5a2 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054d5a3 mov byte ptr [edx], al */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0054d5a5 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054d5a6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054d5a8 jne 0x54d5a0 */ if (!ZF_) goto L_0054d5a0;
  /* 0054d5aa add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0054d5ad add edi, 0x200 */ { u32 a_ = edi, b_ = 0x200u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0054d5b3 cmp esi, 0x24 */ { u32 a_ = esi, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d5b6 jl 0x54d590 */ if (LT_) goto L_0054d590;
  /* 0054d5b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054d5b9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054d5ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054d5c0(CPU *c) {
  NATIVE_HOOK(0x54d5c0u) REGS; LOADALL;
L_0054d5c0:;
  /* 0054d5c0 mov dword ptr [eax], 9 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x9u); }
  /* 0054d5c6 call 0x54d4b0 */ esp -= 4; M32(esp) = 0x54d5cbu; SAVEALL; F_0054d4b0(c); ABI_CHECK(0x54d4b0u, 0x54d5c6u); RETCHK(0x54d5cbu, 0x54d5c6u); LOADALL;
  /* 0054d5cb call 0x54d4d0 */ esp -= 4; M32(esp) = 0x54d5d0u; SAVEALL; F_0054d4d0(c); ABI_CHECK(0x54d4d0u, 0x54d5cbu); RETCHK(0x54d5d0u, 0x54d5cbu); LOADALL;
  /* 0054d5d0 call 0x54d4e0 */ esp -= 4; M32(esp) = 0x54d5d5u; SAVEALL; F_0054d4e0(c); ABI_CHECK(0x54d4e0u, 0x54d5d0u); RETCHK(0x54d5d5u, 0x54d5d0u); LOADALL;
  /* 0054d5d5 call 0x54d500 */ esp -= 4; M32(esp) = 0x54d5dau; SAVEALL; F_0054d500(c); ABI_CHECK(0x54d500u, 0x54d5d5u); RETCHK(0x54d5dau, 0x54d5d5u); LOADALL;
  /* 0054d5da call 0x54d540 */ esp -= 4; M32(esp) = 0x54d5dfu; SAVEALL; F_0054d540(c); ABI_CHECK(0x54d540u, 0x54d5dau); RETCHK(0x54d5dfu, 0x54d5dau); LOADALL;
  /* 0054d5df jmp 0x54d580 */ SAVEALL; F_0054d580(c); return;
}

void F_0054d5f0(CPU *c) {
  NATIVE_HOOK(0x54d5f0u) REGS; LOADALL;
L_0054d5f0:;
  /* 0054d5f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054d5f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054d5f3 mov eax, 0x243c */ { eax = (u32)(0x243cu); }
  /* 0054d5f8 call 0x5fede0 */ esp -= 4; M32(esp) = 0x54d5fdu; SAVEALL; F_005fede0(c); ABI_CHECK(0x5fede0u, 0x54d5f8u); RETCHK(0x54d5fdu, 0x54d5f8u); LOADALL;
  /* 0054d5fd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054d5fe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d5ff push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d601 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d603 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0054d605 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d607 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054d609 push 0x80000000 */ { u32 v_ = 0x80000000u; esp -= 4; M32(esp) = v_; }
  /* 0054d60e push 0x655120 */ { u32 v_ = 0x655120u; esp -= 4; M32(esp) = v_; }
  /* 0054d613 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054d615 call dword ptr [0x62e0bc] */ { const u32 m_ = (u32)(0x62e0bcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54d61bu; SAVEALL; call_ind(c, t_); RETCHK(0x54d61bu, 0x54d615u); LOADALL; }
  /* 0054d61b mov edi, eax */ { edi = (u32)(eax); }
  /* 0054d61d cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d620 jne 0x54d62a */ if (!ZF_) goto L_0054d62a;
  /* 0054d622 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054d623 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054d625 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054d626 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054d628 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054d629 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054d62a:;
  /* 0054d62a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054d62b mov ebx, dword ptr [0x62e0fc] */ { const u32 m_ = (u32)(0x62e0fcu); ebx = (u32)(M32(m_)); }
  /* 0054d631 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d633 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d636 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d637 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0054d639 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054d63a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d63b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0054d642 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d644u; SAVEALL; call_ind(c, t_); RETCHK(0x54d644u, 0x54d642u); LOADALL; }
  /* 0054d644 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054d646 cmp eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d649 ja 0x54d9e6 */ if (!(CF_|ZF_)) goto L_0054d9e6;
  /* 0054d64f jmp dword ptr [eax*4 + 0x54d9f8] */ { const u32 m_ = (u32)(eax * 4u + 0x54d9f8u); u32 t_ = M32(m_); switch (t_) { case 0x54d656u: goto L_0054d656; case 0x54d6aau: goto L_0054d6aa; case 0x54d70bu: goto L_0054d70b; case 0x54d774u: goto L_0054d774; case 0x54d7c7u: goto L_0054d7c7; case 0x54d834u: goto L_0054d834; case 0x54d8a1u: goto L_0054d8a1; default: SAVEALL; call_ind(c, t_); return; } }
L_0054d656:;
  /* 0054d656 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d658 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d65b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d65c push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0054d65e lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0054d661 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d662 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d663 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d665u; SAVEALL; call_ind(c, t_); RETCHK(0x54d665u, 0x54d663u); LOADALL; }
  /* 0054d665 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 0054d668 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0054d66b call 0x54d2d0 */ esp -= 4; M32(esp) = 0x54d670u; SAVEALL; F_0054d2d0(c); ABI_CHECK(0x54d2d0u, 0x54d66bu); RETCHK(0x54d670u, 0x54d66bu); LOADALL;
  /* 0054d670 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054d672 call 0x54d4d0 */ esp -= 4; M32(esp) = 0x54d677u; SAVEALL; F_0054d4d0(c); ABI_CHECK(0x54d4d0u, 0x54d672u); RETCHK(0x54d677u, 0x54d672u); LOADALL;
  /* 0054d677 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d679 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d67c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d67d push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0054d67f lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 0054d682 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d683 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d684 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d686u; SAVEALL; call_ind(c, t_); RETCHK(0x54d686u, 0x54d684u); LOADALL; }
  /* 0054d686 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d688 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d68b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d68c push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0054d68e lea eax, [esi + 0x34] */ eax = (u32)((u32)(esi + 0x34u));
  /* 0054d691 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d692 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d693 mov byte ptr [esi + 0x30], 0 */ { const u32 m_ = (u32)(esi + 0x30u); M8(m_) = (u8)(0x0u); }
  /* 0054d697 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d699u; SAVEALL; call_ind(c, t_); RETCHK(0x54d699u, 0x54d697u); LOADALL; }
  /* 0054d699 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054d69b call 0x54d540 */ esp -= 4; M32(esp) = 0x54d6a0u; SAVEALL; F_0054d540(c); ABI_CHECK(0x54d540u, 0x54d69bu); RETCHK(0x54d6a0u, 0x54d69bu); LOADALL;
  /* 0054d6a0 call 0x54d580 */ esp -= 4; M32(esp) = 0x54d6a5u; SAVEALL; F_0054d580(c); ABI_CHECK(0x54d580u, 0x54d6a0u); RETCHK(0x54d6a5u, 0x54d6a0u); LOADALL;
  /* 0054d6a5 jmp 0x54d974 */ goto L_0054d974;
L_0054d6aa:;
  /* 0054d6aa push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d6ac lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d6af push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d6b0 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0054d6b2 lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0054d6b5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d6b6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d6b7 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d6b9u; SAVEALL; call_ind(c, t_); RETCHK(0x54d6b9u, 0x54d6b7u); LOADALL; }
  /* 0054d6b9 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 0054d6bc lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0054d6bf call 0x54d2d0 */ esp -= 4; M32(esp) = 0x54d6c4u; SAVEALL; F_0054d2d0(c); ABI_CHECK(0x54d2d0u, 0x54d6bfu); RETCHK(0x54d6c4u, 0x54d6bfu); LOADALL;
  /* 0054d6c4 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054d6c6 call 0x54d4d0 */ esp -= 4; M32(esp) = 0x54d6cbu; SAVEALL; F_0054d4d0(c); ABI_CHECK(0x54d4d0u, 0x54d6c6u); RETCHK(0x54d6cbu, 0x54d6c6u); LOADALL;
  /* 0054d6cb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d6cd lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d6d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d6d1 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0054d6d3 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 0054d6d6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d6d7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d6d8 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d6dau; SAVEALL; call_ind(c, t_); RETCHK(0x54d6dau, 0x54d6d8u); LOADALL; }
  /* 0054d6da push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d6dc lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d6df push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d6e0 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0054d6e2 lea eax, [esi + 0x34] */ eax = (u32)((u32)(esi + 0x34u));
  /* 0054d6e5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d6e6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d6e7 mov byte ptr [esi + 0x30], 0 */ { const u32 m_ = (u32)(esi + 0x30u); M8(m_) = (u8)(0x0u); }
  /* 0054d6eb call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d6edu; SAVEALL; call_ind(c, t_); RETCHK(0x54d6edu, 0x54d6ebu); LOADALL; }
  /* 0054d6ed mov eax, esi */ { eax = (u32)(esi); }
  /* 0054d6ef call 0x54d540 */ esp -= 4; M32(esp) = 0x54d6f4u; SAVEALL; F_0054d540(c); ABI_CHECK(0x54d540u, 0x54d6efu); RETCHK(0x54d6f4u, 0x54d6efu); LOADALL;
  /* 0054d6f4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d6f6 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d6f9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d6fa push 0x1200 */ { u32 v_ = 0x1200u; esp -= 4; M32(esp) = v_; }
  /* 0054d6ff lea edx, [esi + 0x58] */ edx = (u32)((u32)(esi + 0x58u));
  /* 0054d702 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d703 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d704 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d706u; SAVEALL; call_ind(c, t_); RETCHK(0x54d706u, 0x54d704u); LOADALL; }
  /* 0054d706 jmp 0x54d974 */ goto L_0054d974;
L_0054d70b:;
  /* 0054d70b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d70d lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d710 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d711 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0054d713 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0054d716 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d717 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d718 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d71au; SAVEALL; call_ind(c, t_); RETCHK(0x54d71au, 0x54d718u); LOADALL; }
  /* 0054d71a lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 0054d71d lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0054d720 call 0x54d2d0 */ esp -= 4; M32(esp) = 0x54d725u; SAVEALL; F_0054d2d0(c); ABI_CHECK(0x54d2d0u, 0x54d720u); RETCHK(0x54d725u, 0x54d720u); LOADALL;
  /* 0054d725 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d727 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d72a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d72b push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0054d72d lea eax, [esi + 0x1c] */ eax = (u32)((u32)(esi + 0x1cu));
  /* 0054d730 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d731 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d732 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d734u; SAVEALL; call_ind(c, t_); RETCHK(0x54d734u, 0x54d732u); LOADALL; }
  /* 0054d734 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d736 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d739 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d73a push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0054d73c lea edx, [esi + 0x20] */ edx = (u32)((u32)(esi + 0x20u));
  /* 0054d73f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d740 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d741 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d743u; SAVEALL; call_ind(c, t_); RETCHK(0x54d743u, 0x54d741u); LOADALL; }
  /* 0054d743 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d745 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d748 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d749 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0054d74b lea ecx, [esi + 0x34] */ ecx = (u32)((u32)(esi + 0x34u));
  /* 0054d74e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d74f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d750 mov byte ptr [esi + 0x30], 0 */ { const u32 m_ = (u32)(esi + 0x30u); M8(m_) = (u8)(0x0u); }
  /* 0054d754 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d756u; SAVEALL; call_ind(c, t_); RETCHK(0x54d756u, 0x54d754u); LOADALL; }
  /* 0054d756 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054d758 call 0x54d540 */ esp -= 4; M32(esp) = 0x54d75du; SAVEALL; F_0054d540(c); ABI_CHECK(0x54d540u, 0x54d758u); RETCHK(0x54d75du, 0x54d758u); LOADALL;
  /* 0054d75d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d75f lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d762 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d763 push 0x1200 */ { u32 v_ = 0x1200u; esp -= 4; M32(esp) = v_; }
  /* 0054d768 lea eax, [esi + 0x58] */ eax = (u32)((u32)(esi + 0x58u));
  /* 0054d76b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d76c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d76d call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d76fu; SAVEALL; call_ind(c, t_); RETCHK(0x54d76fu, 0x54d76du); LOADALL; }
  /* 0054d76f jmp 0x54d974 */ goto L_0054d974;
L_0054d774:;
  /* 0054d774 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d776 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d779 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d77a push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0054d77c lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0054d77f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d780 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d781 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d783u; SAVEALL; call_ind(c, t_); RETCHK(0x54d783u, 0x54d781u); LOADALL; }
  /* 0054d783 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 0054d786 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0054d789 call 0x54d2d0 */ esp -= 4; M32(esp) = 0x54d78eu; SAVEALL; F_0054d2d0(c); ABI_CHECK(0x54d2d0u, 0x54d789u); RETCHK(0x54d78eu, 0x54d789u); LOADALL;
  /* 0054d78e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d790 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d793 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d794 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0054d796 lea ecx, [esi + 0x1c] */ ecx = (u32)((u32)(esi + 0x1cu));
  /* 0054d799 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d79a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d79b call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d79du; SAVEALL; call_ind(c, t_); RETCHK(0x54d79du, 0x54d79bu); LOADALL; }
  /* 0054d79d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d79f lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d7a2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d7a3 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0054d7a5 lea eax, [esi + 0x20] */ eax = (u32)((u32)(esi + 0x20u));
  /* 0054d7a8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d7a9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d7aa call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d7acu; SAVEALL; call_ind(c, t_); RETCHK(0x54d7acu, 0x54d7aau); LOADALL; }
  /* 0054d7ac push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d7ae lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d7b1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d7b2 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0054d7b4 lea edx, [esi + 0x34] */ edx = (u32)((u32)(esi + 0x34u));
  /* 0054d7b7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d7b8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d7b9 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d7bbu; SAVEALL; call_ind(c, t_); RETCHK(0x54d7bbu, 0x54d7b9u); LOADALL; }
  /* 0054d7bb mov eax, esi */ { eax = (u32)(esi); }
  /* 0054d7bd call 0x54d540 */ esp -= 4; M32(esp) = 0x54d7c2u; SAVEALL; F_0054d540(c); ABI_CHECK(0x54d540u, 0x54d7bdu); RETCHK(0x54d7c2u, 0x54d7bdu); LOADALL;
  /* 0054d7c2 jmp 0x54d88a */ goto L_0054d88a;
L_0054d7c7:;
  /* 0054d7c7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d7c9 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d7cc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d7cd push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0054d7cf lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0054d7d2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d7d3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d7d4 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d7d6u; SAVEALL; call_ind(c, t_); RETCHK(0x54d7d6u, 0x54d7d4u); LOADALL; }
  /* 0054d7d6 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 0054d7d9 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0054d7dc call 0x54d2d0 */ esp -= 4; M32(esp) = 0x54d7e1u; SAVEALL; F_0054d2d0(c); ABI_CHECK(0x54d2d0u, 0x54d7dcu); RETCHK(0x54d7e1u, 0x54d7dcu); LOADALL;
  /* 0054d7e1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d7e3 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d7e6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d7e7 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0054d7e9 lea edx, [esi + 0x1c] */ edx = (u32)((u32)(esi + 0x1cu));
  /* 0054d7ec push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d7ed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d7ee call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d7f0u; SAVEALL; call_ind(c, t_); RETCHK(0x54d7f0u, 0x54d7eeu); LOADALL; }
  /* 0054d7f0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d7f2 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d7f5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d7f6 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0054d7f8 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 0054d7fb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d7fc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d7fd call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d7ffu; SAVEALL; call_ind(c, t_); RETCHK(0x54d7ffu, 0x54d7fdu); LOADALL; }
  /* 0054d7ff push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d801 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d804 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d805 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0054d807 lea eax, [esi + 0x34] */ eax = (u32)((u32)(esi + 0x34u));
  /* 0054d80a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d80b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d80c call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d80eu; SAVEALL; call_ind(c, t_); RETCHK(0x54d80eu, 0x54d80cu); LOADALL; }
  /* 0054d80e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d810 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d813 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d814 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0054d816 lea edx, [esi + 0x44] */ edx = (u32)((u32)(esi + 0x44u));
  /* 0054d819 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d81a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d81b call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d81du; SAVEALL; call_ind(c, t_); RETCHK(0x54d81du, 0x54d81bu); LOADALL; }
  /* 0054d81d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d81f lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d822 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d823 push 0x1200 */ { u32 v_ = 0x1200u; esp -= 4; M32(esp) = v_; }
  /* 0054d828 lea ecx, [esi + 0x58] */ ecx = (u32)((u32)(esi + 0x58u));
  /* 0054d82b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d82c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d82d call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d82fu; SAVEALL; call_ind(c, t_); RETCHK(0x54d82fu, 0x54d82du); LOADALL; }
  /* 0054d82f jmp 0x54d974 */ goto L_0054d974;
L_0054d834:;
  /* 0054d834 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d836 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d839 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d83a push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0054d83c lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0054d83f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d840 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d841 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d843u; SAVEALL; call_ind(c, t_); RETCHK(0x54d843u, 0x54d841u); LOADALL; }
  /* 0054d843 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 0054d846 lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0054d849 call 0x54d300 */ esp -= 4; M32(esp) = 0x54d84eu; SAVEALL; F_0054d300(c); ABI_CHECK(0x54d300u, 0x54d849u); RETCHK(0x54d84eu, 0x54d849u); LOADALL;
  /* 0054d84e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d850 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d853 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d854 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0054d856 lea edx, [esi + 0x1c] */ edx = (u32)((u32)(esi + 0x1cu));
  /* 0054d859 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d85a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d85b call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d85du; SAVEALL; call_ind(c, t_); RETCHK(0x54d85du, 0x54d85bu); LOADALL; }
  /* 0054d85d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d85f lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d862 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d863 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0054d865 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 0054d868 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d869 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d86a call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d86cu; SAVEALL; call_ind(c, t_); RETCHK(0x54d86cu, 0x54d86au); LOADALL; }
  /* 0054d86c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d86e lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d871 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d872 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0054d874 lea eax, [esi + 0x34] */ eax = (u32)((u32)(esi + 0x34u));
  /* 0054d877 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d878 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d879 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d87bu; SAVEALL; call_ind(c, t_); RETCHK(0x54d87bu, 0x54d879u); LOADALL; }
  /* 0054d87b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d87d lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d880 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d881 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0054d883 lea edx, [esi + 0x44] */ edx = (u32)((u32)(esi + 0x44u));
  /* 0054d886 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d887 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d888 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d88au; SAVEALL; call_ind(c, t_); RETCHK(0x54d88au, 0x54d888u); LOADALL; }
L_0054d88a:;
  /* 0054d88a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d88c lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d88f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d890 push 0x1200 */ { u32 v_ = 0x1200u; esp -= 4; M32(esp) = v_; }
  /* 0054d895 lea ecx, [esi + 0x58] */ ecx = (u32)((u32)(esi + 0x58u));
  /* 0054d898 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d899 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d89a call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d89cu; SAVEALL; call_ind(c, t_); RETCHK(0x54d89cu, 0x54d89au); LOADALL; }
  /* 0054d89c jmp 0x54d974 */ goto L_0054d974;
L_0054d8a1:;
  /* 0054d8a1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d8a3 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d8a6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d8a7 push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 0054d8a9 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 0054d8ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d8ad push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d8ae call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d8b0u; SAVEALL; call_ind(c, t_); RETCHK(0x54d8b0u, 0x54d8aeu); LOADALL; }
  /* 0054d8b0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d8b2 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d8b5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d8b6 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0054d8b8 lea edx, [esi + 0x1c] */ edx = (u32)((u32)(esi + 0x1cu));
  /* 0054d8bb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d8bc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d8bd call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d8bfu; SAVEALL; call_ind(c, t_); RETCHK(0x54d8bfu, 0x54d8bdu); LOADALL; }
  /* 0054d8bf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d8c1 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d8c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d8c5 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0054d8c7 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 0054d8ca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d8cb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d8cc call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d8ceu; SAVEALL; call_ind(c, t_); RETCHK(0x54d8ceu, 0x54d8ccu); LOADALL; }
  /* 0054d8ce push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d8d0 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d8d3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d8d4 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0054d8d6 lea eax, [esi + 0x34] */ eax = (u32)((u32)(esi + 0x34u));
  /* 0054d8d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d8da push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d8db call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d8ddu; SAVEALL; call_ind(c, t_); RETCHK(0x54d8ddu, 0x54d8dbu); LOADALL; }
  /* 0054d8dd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d8df lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d8e2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d8e3 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0054d8e5 lea edx, [esi + 0x44] */ edx = (u32)((u32)(esi + 0x44u));
  /* 0054d8e8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d8e9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d8ea call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d8ecu; SAVEALL; call_ind(c, t_); RETCHK(0x54d8ecu, 0x54d8eau); LOADALL; }
  /* 0054d8ec push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054d8ee lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054d8f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054d8f2 push 0x2400 */ { u32 v_ = 0x2400u; esp -= 4; M32(esp) = v_; }
  /* 0054d8f7 lea ecx, [ebp - 0x243c] */ ecx = (u32)((u32)(ebp + 0xffffdbc4u));
  /* 0054d8fd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d8fe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d8ff call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54d901u; SAVEALL; call_ind(c, t_); RETCHK(0x54d901u, 0x54d8ffu); LOADALL; }
  /* 0054d901 lea edx, [ebp - 0x243c] */ edx = (u32)((u32)(ebp + 0xffffdbc4u));
  /* 0054d907 lea eax, [esi + 0x58] */ eax = (u32)((u32)(esi + 0x58u));
  /* 0054d90a mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 0054d90d mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0054d910 mov dword ptr [ebp - 0x10], 9 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x9u); }
L_0054d917:;
  /* 0054d917 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 0054d91a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054d91b lea ebx, [ebp - 0x28] */ ebx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0054d91e call 0x51eaf0 */ esp -= 4; M32(esp) = 0x54d923u; SAVEALL; F_0051eaf0(c); ABI_CHECK(0x51eaf0u, 0x54d91eu); RETCHK(0x54d923u, 0x54d91eu); LOADALL;
  /* 0054d923 mov ebx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ebx = (u32)(M32(m_)); }
  /* 0054d926 mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 0054d929 push 0x1ff */ { u32 v_ = 0x1ffu; esp -= 4; M32(esp) = v_; }
  /* 0054d92e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054d92f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054d930 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x54d935u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x54d930u); RETCHK(0x54d935u, 0x54d930u); LOADALL;
  /* 0054d935 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054d938 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054d93a mov dword ptr [ebp - 0x28], 0x652afc */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x652afcu); }
  /* 0054d941 je 0x54d953 */ if (ZF_) goto L_0054d953;
  /* 0054d943 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054d944 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x54d949u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x54d944u); RETCHK(0x54d949u, 0x54d944u); LOADALL;
  /* 0054d949 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054d94c mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
L_0054d953:;
  /* 0054d953 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0054d956 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054d959 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0054d95c add edx, 0x400 */ { u32 a_ = edx, b_ = 0x400u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054d962 add ecx, 0x200 */ { u32 a_ = ecx, b_ = 0x200u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054d968 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0054d969 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 0054d96c mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 0054d96f mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0054d972 jne 0x54d917 */ if (!ZF_) goto L_0054d917;
L_0054d974:;
  /* 0054d974 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d975 mov dword ptr [esi], 9 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x9u); }
  /* 0054d97b call dword ptr [0x62e0d4] */ { const u32 m_ = (u32)(0x62e0d4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54d981u; SAVEALL; call_ind(c, t_); RETCHK(0x54d981u, 0x54d97bu); LOADALL; }
  /* 0054d981 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0054d984 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054d986 jl 0x54d9ed */ if (LT_) goto L_0054d9ed;
  /* 0054d988 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d98b jge 0x54d9ed */ if (!LT_) goto L_0054d9ed;
  /* 0054d98d mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0054d990 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054d992 jl 0x54d9ed */ if (LT_) goto L_0054d9ed;
  /* 0054d994 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d997 jge 0x54d9ed */ if (!LT_) goto L_0054d9ed;
  /* 0054d999 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054d99c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054d99e jl 0x54d9ed */ if (LT_) goto L_0054d9ed;
  /* 0054d9a0 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d9a3 jge 0x54d9ed */ if (!LT_) goto L_0054d9ed;
  /* 0054d9a5 fld dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0054d9a8 fcomp dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0054d9ae fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0054d9b0 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054d9b3 jnp 0x54d9ed */ if (!PF_) goto L_0054d9ed;
  /* 0054d9b5 fld dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0054d9b8 fcomp dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0054d9be fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0054d9c0 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054d9c3 je 0x54d9ed */ if (ZF_) goto L_0054d9ed;
  /* 0054d9c5 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 0054d9c8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054d9ca jl 0x54d9ed */ if (LT_) goto L_0054d9ed;
  /* 0054d9cc cmp eax, 0xa */ { u32 a_ = eax, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d9cf jg 0x54d9ed */ if (!(ZF_|LT_)) goto L_0054d9ed;
  /* 0054d9d1 mov esi, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); esi = (u32)(M32(m_)); }
  /* 0054d9d4 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054d9d6 jl 0x54d9ed */ if (LT_) goto L_0054d9ed;
  /* 0054d9d8 cmp esi, 0xa */ { u32 a_ = esi, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054d9db jg 0x54d9ed */ if (!(ZF_|LT_)) goto L_0054d9ed;
  /* 0054d9dd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054d9de pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054d9df mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054d9e1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054d9e2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054d9e4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054d9e5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054d9e6:;
  /* 0054d9e6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054d9e7 call dword ptr [0x62e0d4] */ { const u32 m_ = (u32)(0x62e0d4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54d9edu; SAVEALL; call_ind(c, t_); RETCHK(0x54d9edu, 0x54d9e7u); LOADALL; }
L_0054d9ed:;
  /* 0054d9ed pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054d9ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054d9ef xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054d9f1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054d9f2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054d9f4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054d9f5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054da20(CPU *c) {
  NATIVE_HOOK(0x54da20u) REGS; LOADALL;
L_0054da20:;
  /* 0054da20 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054da22 jne 0x54da25 */ if (!ZF_) goto L_0054da25;
  /* 0054da24 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054da25:;
  /* 0054da25 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054da28 je 0x54da60 */ if (ZF_) goto L_0054da60;
  /* 0054da2a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054da2c je 0x54da60 */ if (ZF_) goto L_0054da60;
  /* 0054da2e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0054da30 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054da31 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
L_0054da34:;
  /* 0054da34 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054da36 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054da37 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054da39 jne 0x54da34 */ if (!ZF_) goto L_0054da34;
  /* 0054da3b sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054da3d cmp byte ptr [ecx + eax - 1], 0x5c */ { const u32 m_ = (u32)(ecx + eax + 0xffffffffu); u32 a_ = M8(m_), b_ = 0x5cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054da42 lea edx, [ecx + eax] */ edx = (u32)((u32)(ecx + eax));
  /* 0054da45 je 0x54da4f */ if (ZF_) goto L_0054da4f;
  /* 0054da47 lea edx, [ecx + eax + 1] */ edx = (u32)((u32)(ecx + eax + 0x1u));
  /* 0054da4b mov byte ptr [edx - 1], 0x5c */ { const u32 m_ = (u32)(edx + 0xffffffffu); M8(m_) = (u8)(0x5cu); }
L_0054da4f:;
  /* 0054da4f mov esi, edx */ { esi = (u32)(edx); }
  /* 0054da51 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0054da53 sub esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
L_0054da55:;
  /* 0054da55 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054da57 mov byte ptr [esi + ecx], dl */ { const u32 m_ = (u32)(esi + ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0054da5a inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054da5b test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054da5d jne 0x54da55 */ if (!ZF_) goto L_0054da55;
  /* 0054da5f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0054da60:;
  /* 0054da60 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054da70(CPU *c) {
  NATIVE_HOOK(0x54da70u) REGS; LOADALL;
L_0054da70:;
  /* 0054da70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054da71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054da73 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054da79 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054da7e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054da81 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054da82 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054da88 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054da8d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054da8e call 0x5feb7e */ esp -= 4; M32(esp) = 0x54da93u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54da8eu); RETCHK(0x54da93u, 0x54da8eu); LOADALL;
  /* 0054da93 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054da96 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054da9b lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054daa1 call 0x54da20 */ esp -= 4; M32(esp) = 0x54daa6u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54daa1u); RETCHK(0x54daa6u, 0x54daa1u); LOADALL;
  /* 0054daa6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054daa7 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 0054daac push 0x9b9078 */ { u32 v_ = 0x9b9078u; esp -= 4; M32(esp) = v_; }
  /* 0054dab1 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0054dab6 push 0x655588 */ { u32 v_ = 0x655588u; esp -= 4; M32(esp) = v_; }
  /* 0054dabb push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054dac0 call dword ptr [0x62e1b8] */ { const u32 m_ = (u32)(0x62e1b8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54dac6u; SAVEALL; call_ind(c, t_); RETCHK(0x54dac6u, 0x54dac0u); LOADALL; }
  /* 0054dac6 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054dac9 mov eax, 0x9b9078 */ { eax = (u32)(0x9b9078u); }
  /* 0054dace pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054dacf call 0x61af31 */ esp -= 4; M32(esp) = 0x54dad4u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54dacfu); RETCHK(0x54dad4u, 0x54dacfu); LOADALL;
  /* 0054dad4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054dad6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054dad7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054dae0(CPU *c) {
  NATIVE_HOOK(0x54dae0u) REGS; LOADALL;
L_0054dae0:;
  /* 0054dae0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054dae1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054dae3 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054dae9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054daee mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054daf1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054daf2 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054daf8 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054dafd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054dafe call 0x5feb7e */ esp -= 4; M32(esp) = 0x54db03u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54dafeu); RETCHK(0x54db03u, 0x54dafeu); LOADALL;
  /* 0054db03 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054db06 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054db0b lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054db11 call 0x54da20 */ esp -= 4; M32(esp) = 0x54db16u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54db11u); RETCHK(0x54db16u, 0x54db11u); LOADALL;
  /* 0054db16 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054db19 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054db1a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054db1b push 0x655588 */ { u32 v_ = 0x655588u; esp -= 4; M32(esp) = v_; }
  /* 0054db20 push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054db25 call dword ptr [0x62e104] */ { const u32 m_ = (u32)(0x62e104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54db2bu; SAVEALL; call_ind(c, t_); RETCHK(0x54db2bu, 0x54db25u); LOADALL; }
  /* 0054db2b mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054db2e neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054db30 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0054db32 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054db34 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054db35 call 0x61af31 */ esp -= 4; M32(esp) = 0x54db3au; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54db35u); RETCHK(0x54db3au, 0x54db35u); LOADALL;
  /* 0054db3a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054db3c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054db3d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054db40(CPU *c) {
  NATIVE_HOOK(0x54db40u) REGS; LOADALL;
L_0054db40:;
  /* 0054db40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054db41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054db43 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054db49 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054db4e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054db51 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054db52 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054db58 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054db5d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054db5e call 0x5feb7e */ esp -= 4; M32(esp) = 0x54db63u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54db5eu); RETCHK(0x54db63u, 0x54db5eu); LOADALL;
  /* 0054db63 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054db66 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054db6b lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054db71 call 0x54da20 */ esp -= 4; M32(esp) = 0x54db76u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54db71u); RETCHK(0x54db76u, 0x54db71u); LOADALL;
  /* 0054db76 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054db77 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054db79 push 0x65556c */ { u32 v_ = 0x65556cu; esp -= 4; M32(esp) = v_; }
  /* 0054db7e push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054db83 call dword ptr [0x62e100] */ { const u32 m_ = (u32)(0x62e100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54db89u; SAVEALL; call_ind(c, t_); RETCHK(0x54db89u, 0x54db83u); LOADALL; }
  /* 0054db89 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054db8c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054db8d call 0x61af31 */ esp -= 4; M32(esp) = 0x54db92u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54db8du); RETCHK(0x54db92u, 0x54db8du); LOADALL;
  /* 0054db92 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054db94 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054db95 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054dba0(CPU *c) {
  NATIVE_HOOK(0x54dba0u) REGS; LOADALL;
L_0054dba0:;
  /* 0054dba0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054dba1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054dba3 sub esp, 0x308 */ { u32 a_ = esp, b_ = 0x308u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054dba9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054dbae mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054dbb1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054dbb2 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054dbb8 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054dbbd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054dbbe call 0x5feb7e */ esp -= 4; M32(esp) = 0x54dbc3u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54dbbeu); RETCHK(0x54dbc3u, 0x54dbbeu); LOADALL;
  /* 0054dbc3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054dbc6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054dbc7 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0054dbcc lea edx, [ebp - 0x308] */ edx = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0054dbd2 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0054dbd7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054dbd8 call 0x5fe928 */ esp -= 4; M32(esp) = 0x54dbddu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x54dbd8u); RETCHK(0x54dbddu, 0x54dbd8u); LOADALL;
  /* 0054dbdd add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054dbe0 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054dbe5 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054dbeb call 0x54da20 */ esp -= 4; M32(esp) = 0x54dbf0u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54dbebu); RETCHK(0x54dbf0u, 0x54dbebu); LOADALL;
  /* 0054dbf0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054dbf1 lea eax, [ebp - 0x308] */ eax = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0054dbf7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054dbf8 push 0x65556c */ { u32 v_ = 0x65556cu; esp -= 4; M32(esp) = v_; }
  /* 0054dbfd push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054dc02 call dword ptr [0x62e104] */ { const u32 m_ = (u32)(0x62e104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54dc08u; SAVEALL; call_ind(c, t_); RETCHK(0x54dc08u, 0x54dc02u); LOADALL; }
  /* 0054dc08 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054dc0b neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054dc0d sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0054dc0f neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054dc11 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054dc12 call 0x61af31 */ esp -= 4; M32(esp) = 0x54dc17u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54dc12u); RETCHK(0x54dc17u, 0x54dc12u); LOADALL;
  /* 0054dc17 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054dc19 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054dc1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054dc20(CPU *c) {
  NATIVE_HOOK(0x54dc20u) REGS; LOADALL;
L_0054dc20:;
  /* 0054dc20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054dc21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054dc23 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054dc29 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054dc2e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054dc31 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054dc32 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054dc38 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054dc3d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054dc3e call 0x5feb7e */ esp -= 4; M32(esp) = 0x54dc43u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54dc3eu); RETCHK(0x54dc43u, 0x54dc3eu); LOADALL;
  /* 0054dc43 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054dc46 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054dc4b lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054dc51 call 0x54da20 */ esp -= 4; M32(esp) = 0x54dc56u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54dc51u); RETCHK(0x54dc56u, 0x54dc51u); LOADALL;
  /* 0054dc56 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054dc59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054dc5a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054dc5c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054dc5d push 0x655560 */ { u32 v_ = 0x655560u; esp -= 4; M32(esp) = v_; }
  /* 0054dc62 call dword ptr [0x62e100] */ { const u32 m_ = (u32)(0x62e100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54dc68u; SAVEALL; call_ind(c, t_); RETCHK(0x54dc68u, 0x54dc62u); LOADALL; }
  /* 0054dc68 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054dc6b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054dc6c call 0x61af31 */ esp -= 4; M32(esp) = 0x54dc71u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54dc6cu); RETCHK(0x54dc71u, 0x54dc6cu); LOADALL;
  /* 0054dc71 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054dc73 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054dc74 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054dc80(CPU *c) {
  NATIVE_HOOK(0x54dc80u) REGS; LOADALL;
L_0054dc80:;
  /* 0054dc80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054dc81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054dc83 sub esp, 0x308 */ { u32 a_ = esp, b_ = 0x308u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054dc89 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054dc8e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054dc91 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054dc92 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054dc98 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054dc9d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054dc9e call 0x5feb7e */ esp -= 4; M32(esp) = 0x54dca3u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54dc9eu); RETCHK(0x54dca3u, 0x54dc9eu); LOADALL;
  /* 0054dca3 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054dca6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054dca7 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0054dcac lea edx, [ebp - 0x308] */ edx = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0054dcb2 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0054dcb7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054dcb8 call 0x5fe928 */ esp -= 4; M32(esp) = 0x54dcbdu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x54dcb8u); RETCHK(0x54dcbdu, 0x54dcb8u); LOADALL;
  /* 0054dcbd add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054dcc0 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054dcc5 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054dccb call 0x54da20 */ esp -= 4; M32(esp) = 0x54dcd0u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54dccbu); RETCHK(0x54dcd0u, 0x54dccbu); LOADALL;
  /* 0054dcd0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054dcd3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054dcd4 lea eax, [ebp - 0x308] */ eax = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0054dcda push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054dcdb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054dcdc push 0x655560 */ { u32 v_ = 0x655560u; esp -= 4; M32(esp) = v_; }
  /* 0054dce1 call dword ptr [0x62e104] */ { const u32 m_ = (u32)(0x62e104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54dce7u; SAVEALL; call_ind(c, t_); RETCHK(0x54dce7u, 0x54dce1u); LOADALL; }
  /* 0054dce7 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054dcea neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054dcec sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0054dcee neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054dcf0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054dcf1 call 0x61af31 */ esp -= 4; M32(esp) = 0x54dcf6u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54dcf1u); RETCHK(0x54dcf6u, 0x54dcf1u); LOADALL;
  /* 0054dcf6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054dcf8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054dcf9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054dd00(CPU *c) {
  NATIVE_HOOK(0x54dd00u) REGS; LOADALL;
L_0054dd00:;
  /* 0054dd00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054dd01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054dd03 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054dd09 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054dd0e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054dd11 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054dd12 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054dd18 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054dd1d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054dd1e call 0x5feb7e */ esp -= 4; M32(esp) = 0x54dd23u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54dd1eu); RETCHK(0x54dd23u, 0x54dd1eu); LOADALL;
  /* 0054dd23 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054dd26 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054dd2b lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054dd31 call 0x54da20 */ esp -= 4; M32(esp) = 0x54dd36u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54dd31u); RETCHK(0x54dd36u, 0x54dd31u); LOADALL;
  /* 0054dd36 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054dd37 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 0054dd3c push 0x9b8f78 */ { u32 v_ = 0x9b8f78u; esp -= 4; M32(esp) = v_; }
  /* 0054dd41 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0054dd46 push 0x655554 */ { u32 v_ = 0x655554u; esp -= 4; M32(esp) = v_; }
  /* 0054dd4b push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054dd50 call dword ptr [0x62e1b8] */ { const u32 m_ = (u32)(0x62e1b8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54dd56u; SAVEALL; call_ind(c, t_); RETCHK(0x54dd56u, 0x54dd50u); LOADALL; }
  /* 0054dd56 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054dd59 mov eax, 0x9b8f78 */ { eax = (u32)(0x9b8f78u); }
  /* 0054dd5e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054dd5f call 0x61af31 */ esp -= 4; M32(esp) = 0x54dd64u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54dd5fu); RETCHK(0x54dd64u, 0x54dd5fu); LOADALL;
  /* 0054dd64 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054dd66 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054dd67 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054dd70(CPU *c) {
  NATIVE_HOOK(0x54dd70u) REGS; LOADALL;
L_0054dd70:;
  /* 0054dd70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054dd71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054dd73 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054dd79 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054dd7e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054dd81 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054dd82 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054dd88 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054dd8d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054dd8e call 0x5feb7e */ esp -= 4; M32(esp) = 0x54dd93u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54dd8eu); RETCHK(0x54dd93u, 0x54dd8eu); LOADALL;
  /* 0054dd93 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054dd96 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054dd9b lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054dda1 call 0x54da20 */ esp -= 4; M32(esp) = 0x54dda6u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54dda1u); RETCHK(0x54dda6u, 0x54dda1u); LOADALL;
  /* 0054dda6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054dda9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ddaa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054ddab push 0x655554 */ { u32 v_ = 0x655554u; esp -= 4; M32(esp) = v_; }
  /* 0054ddb0 push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054ddb5 call dword ptr [0x62e104] */ { const u32 m_ = (u32)(0x62e104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54ddbbu; SAVEALL; call_ind(c, t_); RETCHK(0x54ddbbu, 0x54ddb5u); LOADALL; }
  /* 0054ddbb mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054ddbe neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054ddc0 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0054ddc2 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054ddc4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054ddc5 call 0x61af31 */ esp -= 4; M32(esp) = 0x54ddcau; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54ddc5u); RETCHK(0x54ddcau, 0x54ddc5u); LOADALL;
  /* 0054ddca mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054ddcc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054ddcd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054ddd0(CPU *c) {
  NATIVE_HOOK(0x54ddd0u) REGS; LOADALL;
L_0054ddd0:;
  /* 0054ddd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054ddd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054ddd3 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054ddd9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054ddde mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054dde1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054dde2 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054dde8 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054dded push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ddee call 0x5feb7e */ esp -= 4; M32(esp) = 0x54ddf3u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54ddeeu); RETCHK(0x54ddf3u, 0x54ddeeu); LOADALL;
  /* 0054ddf3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054ddf6 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054ddfb lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054de01 call 0x54da20 */ esp -= 4; M32(esp) = 0x54de06u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54de01u); RETCHK(0x54de06u, 0x54de01u); LOADALL;
  /* 0054de06 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054de07 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054de09 push 0x655540 */ { u32 v_ = 0x655540u; esp -= 4; M32(esp) = v_; }
  /* 0054de0e push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054de13 call dword ptr [0x62e100] */ { const u32 m_ = (u32)(0x62e100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54de19u; SAVEALL; call_ind(c, t_); RETCHK(0x54de19u, 0x54de13u); LOADALL; }
  /* 0054de19 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054de1c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054de1d call 0x61af31 */ esp -= 4; M32(esp) = 0x54de22u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54de1du); RETCHK(0x54de22u, 0x54de1du); LOADALL;
  /* 0054de22 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054de24 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054de25 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054de30(CPU *c) {
  NATIVE_HOOK(0x54de30u) REGS; LOADALL;
L_0054de30:;
  /* 0054de30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054de31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054de33 sub esp, 0x308 */ { u32 a_ = esp, b_ = 0x308u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054de39 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054de3e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054de41 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054de42 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054de48 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054de4d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054de4e call 0x5feb7e */ esp -= 4; M32(esp) = 0x54de53u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54de4eu); RETCHK(0x54de53u, 0x54de4eu); LOADALL;
  /* 0054de53 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054de56 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054de57 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0054de5c lea edx, [ebp - 0x308] */ edx = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0054de62 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0054de67 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054de68 call 0x5fe928 */ esp -= 4; M32(esp) = 0x54de6du; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x54de68u); RETCHK(0x54de6du, 0x54de68u); LOADALL;
  /* 0054de6d add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054de70 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054de75 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054de7b call 0x54da20 */ esp -= 4; M32(esp) = 0x54de80u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54de7bu); RETCHK(0x54de80u, 0x54de7bu); LOADALL;
  /* 0054de80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054de81 lea eax, [ebp - 0x308] */ eax = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0054de87 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054de88 push 0x655540 */ { u32 v_ = 0x655540u; esp -= 4; M32(esp) = v_; }
  /* 0054de8d push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054de92 call dword ptr [0x62e104] */ { const u32 m_ = (u32)(0x62e104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54de98u; SAVEALL; call_ind(c, t_); RETCHK(0x54de98u, 0x54de92u); LOADALL; }
  /* 0054de98 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054de9b neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054de9d sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0054de9f neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054dea1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054dea2 call 0x61af31 */ esp -= 4; M32(esp) = 0x54dea7u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54dea2u); RETCHK(0x54dea7u, 0x54dea2u); LOADALL;
  /* 0054dea7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054dea9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054deaa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054deb0(CPU *c) {
  NATIVE_HOOK(0x54deb0u) REGS; LOADALL;
L_0054deb0:;
  /* 0054deb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054deb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054deb3 sub esp, 0x308 */ { u32 a_ = esp, b_ = 0x308u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054deb9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054debe mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054dec1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054dec2 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054dec8 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054decd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054dece call 0x5feb7e */ esp -= 4; M32(esp) = 0x54ded3u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54deceu); RETCHK(0x54ded3u, 0x54deceu); LOADALL;
  /* 0054ded3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054ded6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054ded7 push 0x65552c */ { u32 v_ = 0x65552cu; esp -= 4; M32(esp) = v_; }
  /* 0054dedc lea edx, [ebp - 0x308] */ edx = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0054dee2 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0054dee7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054dee8 call 0x5fe928 */ esp -= 4; M32(esp) = 0x54deedu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x54dee8u); RETCHK(0x54deedu, 0x54dee8u); LOADALL;
  /* 0054deed add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054def0 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054def5 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054defb call 0x54da20 */ esp -= 4; M32(esp) = 0x54df00u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54defbu); RETCHK(0x54df00u, 0x54defbu); LOADALL;
  /* 0054df00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054df01 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 0054df06 push 0x9b8e78 */ { u32 v_ = 0x9b8e78u; esp -= 4; M32(esp) = v_; }
  /* 0054df0b push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0054df10 lea eax, [ebp - 0x308] */ eax = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0054df16 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054df17 push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054df1c call dword ptr [0x62e1b8] */ { const u32 m_ = (u32)(0x62e1b8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54df22u; SAVEALL; call_ind(c, t_); RETCHK(0x54df22u, 0x54df1cu); LOADALL; }
  /* 0054df22 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054df25 mov eax, 0x9b8e78 */ { eax = (u32)(0x9b8e78u); }
  /* 0054df2a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054df2b call 0x61af31 */ esp -= 4; M32(esp) = 0x54df30u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54df2bu); RETCHK(0x54df30u, 0x54df2bu); LOADALL;
  /* 0054df30 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054df32 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054df33 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054df40(CPU *c) {
  NATIVE_HOOK(0x54df40u) REGS; LOADALL;
L_0054df40:;
  /* 0054df40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054df41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054df43 sub esp, 0x308 */ { u32 a_ = esp, b_ = 0x308u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054df49 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054df4e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054df51 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054df52 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054df58 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054df5d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054df5e call 0x5feb7e */ esp -= 4; M32(esp) = 0x54df63u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54df5eu); RETCHK(0x54df63u, 0x54df5eu); LOADALL;
  /* 0054df63 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054df66 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054df67 push 0x65552c */ { u32 v_ = 0x65552cu; esp -= 4; M32(esp) = v_; }
  /* 0054df6c lea edx, [ebp - 0x308] */ edx = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0054df72 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0054df77 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054df78 call 0x5fe928 */ esp -= 4; M32(esp) = 0x54df7du; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x54df78u); RETCHK(0x54df7du, 0x54df78u); LOADALL;
  /* 0054df7d add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054df80 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054df85 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054df8b call 0x54da20 */ esp -= 4; M32(esp) = 0x54df90u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54df8bu); RETCHK(0x54df90u, 0x54df8bu); LOADALL;
  /* 0054df90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054df91 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054df94 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054df95 lea ecx, [ebp - 0x308] */ ecx = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0054df9b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054df9c push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054dfa1 call dword ptr [0x62e104] */ { const u32 m_ = (u32)(0x62e104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54dfa7u; SAVEALL; call_ind(c, t_); RETCHK(0x54dfa7u, 0x54dfa1u); LOADALL; }
  /* 0054dfa7 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054dfaa neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054dfac sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0054dfae neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054dfb0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054dfb1 call 0x61af31 */ esp -= 4; M32(esp) = 0x54dfb6u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54dfb1u); RETCHK(0x54dfb6u, 0x54dfb1u); LOADALL;
  /* 0054dfb6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054dfb8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054dfb9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054dfc0(CPU *c) {
  NATIVE_HOOK(0x54dfc0u) REGS; LOADALL;
L_0054dfc0:;
  /* 0054dfc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054dfc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054dfc3 sub esp, 0x308 */ { u32 a_ = esp, b_ = 0x308u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054dfc9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054dfce mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054dfd1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054dfd2 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054dfd8 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054dfdd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054dfde call 0x5feb7e */ esp -= 4; M32(esp) = 0x54dfe3u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54dfdeu); RETCHK(0x54dfe3u, 0x54dfdeu); LOADALL;
  /* 0054dfe3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054dfe6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054dfe7 push 0x655518 */ { u32 v_ = 0x655518u; esp -= 4; M32(esp) = v_; }
  /* 0054dfec lea edx, [ebp - 0x308] */ edx = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0054dff2 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0054dff7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054dff8 call 0x5fe928 */ esp -= 4; M32(esp) = 0x54dffdu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x54dff8u); RETCHK(0x54dffdu, 0x54dff8u); LOADALL;
  /* 0054dffd add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e000 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054e005 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e00b call 0x54da20 */ esp -= 4; M32(esp) = 0x54e010u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54e00bu); RETCHK(0x54e010u, 0x54e00bu); LOADALL;
  /* 0054e010 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e011 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 0054e016 push 0x9b8d78 */ { u32 v_ = 0x9b8d78u; esp -= 4; M32(esp) = v_; }
  /* 0054e01b push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0054e020 lea eax, [ebp - 0x308] */ eax = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0054e026 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e027 push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054e02c call dword ptr [0x62e1b8] */ { const u32 m_ = (u32)(0x62e1b8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54e032u; SAVEALL; call_ind(c, t_); RETCHK(0x54e032u, 0x54e02cu); LOADALL; }
  /* 0054e032 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054e035 mov eax, 0x9b8d78 */ { eax = (u32)(0x9b8d78u); }
  /* 0054e03a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054e03b call 0x61af31 */ esp -= 4; M32(esp) = 0x54e040u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54e03bu); RETCHK(0x54e040u, 0x54e03bu); LOADALL;
  /* 0054e040 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054e042 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e043 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054e050(CPU *c) {
  NATIVE_HOOK(0x54e050u) REGS; LOADALL;
L_0054e050:;
  /* 0054e050 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054e051 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054e053 sub esp, 0x308 */ { u32 a_ = esp, b_ = 0x308u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e059 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054e05e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054e061 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e062 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e068 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054e06d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e06e call 0x5feb7e */ esp -= 4; M32(esp) = 0x54e073u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54e06eu); RETCHK(0x54e073u, 0x54e06eu); LOADALL;
  /* 0054e073 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054e076 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054e077 push 0x655518 */ { u32 v_ = 0x655518u; esp -= 4; M32(esp) = v_; }
  /* 0054e07c lea edx, [ebp - 0x308] */ edx = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0054e082 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0054e087 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054e088 call 0x5fe928 */ esp -= 4; M32(esp) = 0x54e08du; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x54e088u); RETCHK(0x54e08du, 0x54e088u); LOADALL;
  /* 0054e08d add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e090 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054e095 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e09b call 0x54da20 */ esp -= 4; M32(esp) = 0x54e0a0u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54e09bu); RETCHK(0x54e0a0u, 0x54e09bu); LOADALL;
  /* 0054e0a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e0a1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054e0a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e0a5 lea ecx, [ebp - 0x308] */ ecx = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0054e0ab push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054e0ac push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054e0b1 call dword ptr [0x62e104] */ { const u32 m_ = (u32)(0x62e104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54e0b7u; SAVEALL; call_ind(c, t_); RETCHK(0x54e0b7u, 0x54e0b1u); LOADALL; }
  /* 0054e0b7 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054e0ba neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054e0bc sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0054e0be neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054e0c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054e0c1 call 0x61af31 */ esp -= 4; M32(esp) = 0x54e0c6u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54e0c1u); RETCHK(0x54e0c6u, 0x54e0c1u); LOADALL;
  /* 0054e0c6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054e0c8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e0c9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054e0d0(CPU *c) {
  NATIVE_HOOK(0x54e0d0u) REGS; LOADALL;
L_0054e0d0:;
  /* 0054e0d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054e0d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054e0d3 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e0d9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054e0de mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054e0e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e0e2 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e0e8 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054e0ed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e0ee call 0x5feb7e */ esp -= 4; M32(esp) = 0x54e0f3u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54e0eeu); RETCHK(0x54e0f3u, 0x54e0eeu); LOADALL;
  /* 0054e0f3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e0f6 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054e0fb lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e101 call 0x54da20 */ esp -= 4; M32(esp) = 0x54e106u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54e101u); RETCHK(0x54e106u, 0x54e101u); LOADALL;
  /* 0054e106 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e107 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 0054e10c push 0x9b8c78 */ { u32 v_ = 0x9b8c78u; esp -= 4; M32(esp) = v_; }
  /* 0054e111 push 0x655514 */ { u32 v_ = 0x655514u; esp -= 4; M32(esp) = v_; }
  /* 0054e116 push 0x655508 */ { u32 v_ = 0x655508u; esp -= 4; M32(esp) = v_; }
  /* 0054e11b push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054e120 call dword ptr [0x62e1b8] */ { const u32 m_ = (u32)(0x62e1b8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54e126u; SAVEALL; call_ind(c, t_); RETCHK(0x54e126u, 0x54e120u); LOADALL; }
  /* 0054e126 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054e129 mov eax, 0x9b8c78 */ { eax = (u32)(0x9b8c78u); }
  /* 0054e12e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054e12f call 0x61af31 */ esp -= 4; M32(esp) = 0x54e134u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54e12fu); RETCHK(0x54e134u, 0x54e12fu); LOADALL;
  /* 0054e134 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054e136 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e137 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054e140(CPU *c) {
  NATIVE_HOOK(0x54e140u) REGS; LOADALL;
L_0054e140:;
  /* 0054e140 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054e141 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054e143 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e149 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054e14e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054e151 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e152 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e158 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054e15d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e15e call 0x5feb7e */ esp -= 4; M32(esp) = 0x54e163u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54e15eu); RETCHK(0x54e163u, 0x54e15eu); LOADALL;
  /* 0054e163 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e166 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054e16b lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e171 call 0x54da20 */ esp -= 4; M32(esp) = 0x54e176u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54e171u); RETCHK(0x54e176u, 0x54e171u); LOADALL;
  /* 0054e176 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054e179 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e17a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054e17b push 0x655508 */ { u32 v_ = 0x655508u; esp -= 4; M32(esp) = v_; }
  /* 0054e180 push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054e185 call dword ptr [0x62e104] */ { const u32 m_ = (u32)(0x62e104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54e18bu; SAVEALL; call_ind(c, t_); RETCHK(0x54e18bu, 0x54e185u); LOADALL; }
  /* 0054e18b mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054e18e neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054e190 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0054e192 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054e194 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054e195 call 0x61af31 */ esp -= 4; M32(esp) = 0x54e19au; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54e195u); RETCHK(0x54e19au, 0x54e195u); LOADALL;
  /* 0054e19a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054e19c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e19d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054e1a0(CPU *c) {
  NATIVE_HOOK(0x54e1a0u) REGS; LOADALL;
L_0054e1a0:;
  /* 0054e1a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054e1a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054e1a3 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e1a9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054e1ae mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054e1b1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e1b2 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e1b8 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054e1bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e1be call 0x5feb7e */ esp -= 4; M32(esp) = 0x54e1c3u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54e1beu); RETCHK(0x54e1c3u, 0x54e1beu); LOADALL;
  /* 0054e1c3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e1c6 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054e1cb lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e1d1 call 0x54da20 */ esp -= 4; M32(esp) = 0x54e1d6u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54e1d1u); RETCHK(0x54e1d6u, 0x54e1d1u); LOADALL;
  /* 0054e1d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e1d7 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 0054e1dc push 0x9b8b78 */ { u32 v_ = 0x9b8b78u; esp -= 4; M32(esp) = v_; }
  /* 0054e1e1 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0054e1e6 push 0x6554f8 */ { u32 v_ = 0x6554f8u; esp -= 4; M32(esp) = v_; }
  /* 0054e1eb push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054e1f0 call dword ptr [0x62e1b8] */ { const u32 m_ = (u32)(0x62e1b8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54e1f6u; SAVEALL; call_ind(c, t_); RETCHK(0x54e1f6u, 0x54e1f0u); LOADALL; }
  /* 0054e1f6 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054e1f9 mov eax, 0x9b8b78 */ { eax = (u32)(0x9b8b78u); }
  /* 0054e1fe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054e1ff call 0x61af31 */ esp -= 4; M32(esp) = 0x54e204u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54e1ffu); RETCHK(0x54e204u, 0x54e1ffu); LOADALL;
  /* 0054e204 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054e206 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e207 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054e210(CPU *c) {
  NATIVE_HOOK(0x54e210u) REGS; LOADALL;
L_0054e210:;
  /* 0054e210 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054e211 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054e213 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e219 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054e21e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054e221 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e222 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e228 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054e22d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e22e call 0x5feb7e */ esp -= 4; M32(esp) = 0x54e233u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54e22eu); RETCHK(0x54e233u, 0x54e22eu); LOADALL;
  /* 0054e233 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e236 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054e23b lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e241 call 0x54da20 */ esp -= 4; M32(esp) = 0x54e246u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54e241u); RETCHK(0x54e246u, 0x54e241u); LOADALL;
  /* 0054e246 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054e249 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e24a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054e24b push 0x6554f8 */ { u32 v_ = 0x6554f8u; esp -= 4; M32(esp) = v_; }
  /* 0054e250 push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054e255 call dword ptr [0x62e104] */ { const u32 m_ = (u32)(0x62e104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54e25bu; SAVEALL; call_ind(c, t_); RETCHK(0x54e25bu, 0x54e255u); LOADALL; }
  /* 0054e25b mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054e25e neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054e260 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0054e262 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054e264 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054e265 call 0x61af31 */ esp -= 4; M32(esp) = 0x54e26au; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54e265u); RETCHK(0x54e26au, 0x54e265u); LOADALL;
  /* 0054e26a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054e26c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e26d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
