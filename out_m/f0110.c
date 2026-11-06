#include "funcs.h"

void F_10303a4a(CPU *c) {
  NATIVE_HOOK(0x10303a4au) REGS; LOADALL;
L_10303a4a:;
  /* 10303a4a mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 10303a4d mov dword ptr [edi - 4], eax */ { const u32 m_ = (u32)(edi + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10303a50 push dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303a53 call 0x10302ef8 */ esp -= 4; M32(esp) = 0x10303a58u; SAVEALL; F_10302ef8(c); ABI_CHECK(0x10302ef8u, 0x10303a53u); RETCHK(0x10303a58u, 0x10303a53u); LOADALL;
  /* 10303a58 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303a59 call 0x10304039 */ esp -= 4; M32(esp) = 0x10303a5eu; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10303a59u); RETCHK(0x10303a5eu, 0x10303a59u); LOADALL;
  /* 10303a5e mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 10303a61 mov dword ptr [eax + 0x7c], ecx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(ecx); }
  /* 10303a64 call 0x10304039 */ esp -= 4; M32(esp) = 0x10303a69u; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10303a64u); RETCHK(0x10303a69u, 0x10303a64u); LOADALL;
  /* 10303a69 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 10303a6c mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 10303a72 cmp dword ptr [esi], 0xe06d7363 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303a78 jne 0x10303ab8 */ if (!ZF_) goto L_10303ab8;
  /* 10303a7a cmp dword ptr [esi + 0x10], 3 */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303a7e jne 0x10303ab8 */ if (!ZF_) goto L_10303ab8;
  /* 10303a80 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 10303a83 cmp eax, 0x19930520 */ { u32 a_ = eax, b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303a88 je 0x10303a91 */ if (ZF_) goto L_10303a91;
  /* 10303a8a cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303a8f jne 0x10303ab8 */ if (!ZF_) goto L_10303ab8;
L_10303a91:;
  /* 10303a91 cmp dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303a95 jne 0x10303ab8 */ if (!ZF_) goto L_10303ab8;
  /* 10303a97 cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303a9b je 0x10303ab8 */ if (ZF_) goto L_10303ab8;
  /* 10303a9d push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303aa0 call 0x10302ed7 */ esp -= 4; M32(esp) = 0x10303aa5u; SAVEALL; F_10302ed7(c); ABI_CHECK(0x10302ed7u, 0x10303aa0u); RETCHK(0x10303aa5u, 0x10303aa0u); LOADALL;
  /* 10303aa5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303aa6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303aa8 je 0x10303ab8 */ if (ZF_) goto L_10303ab8;
  /* 10303aaa call 0x1030304a */ esp -= 4; M32(esp) = 0x10303aafu; SAVEALL; F_1030304a(c); ABI_CHECK(0x1030304au, 0x10303aaau); RETCHK(0x10303aafu, 0x10303aaau); LOADALL;
  /* 10303aaf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10303ab0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303ab1 call 0x10303891 */ esp -= 4; M32(esp) = 0x10303ab6u; SAVEALL; F_10303891(c); ABI_CHECK(0x10303891u, 0x10303ab1u); RETCHK(0x10303ab6u, 0x10303ab1u); LOADALL;
  /* 10303ab6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303ab7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10303ab8:;
  /* 10303ab8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10303ab9(CPU *c) {
  NATIVE_HOOK(0x10303ab9u) REGS; LOADALL;
L_10303ab9:;
  /* 10303ab9 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10303abb push 0x103093d0 */ { u32 v_ = 0x103093d0u; esp -= 4; M32(esp) = v_; }
  /* 10303ac0 call 0x10303548 */ esp -= 4; M32(esp) = 0x10303ac5u; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x10303ac0u); RETCHK(0x10303ac5u, 0x10303ac0u); LOADALL;
  /* 10303ac5 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10303ac7 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10303aca mov edi, edx */ { edi = (u32)(edx); }
  /* 10303acc mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10303acf mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10303ad2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303ad4 je 0x10303c23 */ if (ZF_) goto L_10303c23;
  /* 10303ada cmp byte ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10303ade je 0x10303c23 */ if (ZF_) goto L_10303c23;
  /* 10303ae4 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10303ae7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303ae9 jne 0x10303af5 */ if (!ZF_) goto L_10303af5;
  /* 10303aeb test byte ptr [eax + 3], 0x80 */ { const u32 m_ = (u32)(eax + 0x3u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10303aef je 0x10303c23 */ if (ZF_) goto L_10303c23;
L_10303af5:;
  /* 10303af5 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10303af7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303af9 js 0x10303aff */ if (SF_) goto L_10303aff;
  /* 10303afb lea edi, [ecx + edi + 0xc] */ edi = (u32)((u32)(ecx + edi + 0xcu));
L_10303aff:;
  /* 10303aff and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10303b03 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10303b05 push dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303b08 test al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10303b0a je 0x10303b41 */ if (ZF_) goto L_10303b41;
  /* 10303b0c call 0x103063c8 */ esp -= 4; M32(esp) = 0x10303b11u; SAVEALL; F_103063c8(c); ABI_CHECK(0x103063c8u, 0x10303b0cu); RETCHK(0x10303b11u, 0x10303b0cu); LOADALL;
  /* 10303b11 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303b12 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303b13 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303b15 je 0x10303c1a */ if (ZF_) goto L_10303c1a;
  /* 10303b1b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10303b1d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10303b1e call 0x103063e4 */ esp -= 4; M32(esp) = 0x10303b23u; SAVEALL; F_103063e4(c); ABI_CHECK(0x103063e4u, 0x10303b1eu); RETCHK(0x10303b23u, 0x10303b1eu); LOADALL;
  /* 10303b23 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303b24 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303b25 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303b27 je 0x10303c1a */ if (ZF_) goto L_10303c1a;
  /* 10303b2d mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 10303b30 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
L_10303b32:;
  /* 10303b32 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10303b35 call 0x103038d6 */ esp -= 4; M32(esp) = 0x10303b3au; SAVEALL; F_103038d6(c); ABI_CHECK(0x103038d6u, 0x10303b35u); RETCHK(0x10303b3au, 0x10303b35u); LOADALL;
  /* 10303b3a mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 10303b3c jmp 0x10303c1f */ goto L_10303c1f;
L_10303b41:;
  /* 10303b41 test byte ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10303b44 je 0x10303b8c */ if (ZF_) goto L_10303b8c;
  /* 10303b46 call 0x103063c8 */ esp -= 4; M32(esp) = 0x10303b4bu; SAVEALL; F_103063c8(c); ABI_CHECK(0x103063c8u, 0x10303b46u); RETCHK(0x10303b4bu, 0x10303b46u); LOADALL;
  /* 10303b4b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303b4c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303b4d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303b4f je 0x10303c1a */ if (ZF_) goto L_10303c1a;
  /* 10303b55 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10303b57 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10303b58 call 0x103063e4 */ esp -= 4; M32(esp) = 0x10303b5du; SAVEALL; F_103063e4(c); ABI_CHECK(0x103063e4u, 0x10303b58u); RETCHK(0x10303b5du, 0x10303b58u); LOADALL;
  /* 10303b5d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303b5e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303b5f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303b61 je 0x10303c1a */ if (ZF_) goto L_10303c1a;
  /* 10303b67 push dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303b6a push dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303b6d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10303b6e call 0x10306420 */ esp -= 4; M32(esp) = 0x10303b73u; SAVEALL; F_10306420(c); ABI_CHECK(0x10306420u, 0x10303b6eu); RETCHK(0x10303b73u, 0x10303b6eu); LOADALL;
  /* 10303b73 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10303b76 cmp dword ptr [esi + 0x14], 4 */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303b7a jne 0x10303c1f */ if (!ZF_) goto L_10303c1f;
  /* 10303b80 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10303b82 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303b84 je 0x10303c1f */ if (ZF_) goto L_10303c1f;
  /* 10303b8a jmp 0x10303b32 */ goto L_10303b32;
L_10303b8c:;
  /* 10303b8c cmp dword ptr [esi + 0x18], 0 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303b90 jne 0x10303bc5 */ if (!ZF_) goto L_10303bc5;
  /* 10303b92 call 0x103063c8 */ esp -= 4; M32(esp) = 0x10303b97u; SAVEALL; F_103063c8(c); ABI_CHECK(0x103063c8u, 0x10303b92u); RETCHK(0x10303b97u, 0x10303b92u); LOADALL;
  /* 10303b97 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303b98 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303b99 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303b9b je 0x10303c1a */ if (ZF_) goto L_10303c1a;
  /* 10303b9d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10303b9f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10303ba0 call 0x103063e4 */ esp -= 4; M32(esp) = 0x10303ba5u; SAVEALL; F_103063e4(c); ABI_CHECK(0x103063e4u, 0x10303ba0u); RETCHK(0x10303ba5u, 0x10303ba0u); LOADALL;
  /* 10303ba5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303ba6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303ba7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303ba9 je 0x10303c1a */ if (ZF_) goto L_10303c1a;
  /* 10303bab push dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303bae lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10303bb1 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 10303bb4 call 0x103038d6 */ esp -= 4; M32(esp) = 0x10303bb9u; SAVEALL; F_103038d6(c); ABI_CHECK(0x103038d6u, 0x10303bb4u); RETCHK(0x10303bb9u, 0x10303bb4u); LOADALL;
  /* 10303bb9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10303bba push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10303bbb call 0x10306420 */ esp -= 4; M32(esp) = 0x10303bc0u; SAVEALL; F_10306420(c); ABI_CHECK(0x10306420u, 0x10303bbbu); RETCHK(0x10303bc0u, 0x10303bbbu); LOADALL;
  /* 10303bc0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10303bc3 jmp 0x10303c1f */ goto L_10303c1f;
L_10303bc5:;
  /* 10303bc5 call 0x103063c8 */ esp -= 4; M32(esp) = 0x10303bcau; SAVEALL; F_103063c8(c); ABI_CHECK(0x103063c8u, 0x10303bc5u); RETCHK(0x10303bcau, 0x10303bc5u); LOADALL;
  /* 10303bca pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303bcb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303bcc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303bce je 0x10303c1a */ if (ZF_) goto L_10303c1a;
  /* 10303bd0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10303bd2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10303bd3 call 0x103063e4 */ esp -= 4; M32(esp) = 0x10303bd8u; SAVEALL; F_103063e4(c); ABI_CHECK(0x103063e4u, 0x10303bd3u); RETCHK(0x10303bd8u, 0x10303bd3u); LOADALL;
  /* 10303bd8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303bd9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303bda test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303bdc je 0x10303c1a */ if (ZF_) goto L_10303c1a;
  /* 10303bde push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303be1 call 0x10306400 */ esp -= 4; M32(esp) = 0x10303be6u; SAVEALL; F_10306400(c); ABI_CHECK(0x10306400u, 0x10303be1u); RETCHK(0x10303be6u, 0x10303be1u); LOADALL;
  /* 10303be6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303be7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303be9 je 0x10303c1a */ if (ZF_) goto L_10303c1a;
  /* 10303beb mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 10303bee lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10303bf1 test byte ptr [esi], 4 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10303bf4 je 0x10303c09 */ if (ZF_) goto L_10303c09;
  /* 10303bf6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10303bf8 call 0x103038d6 */ esp -= 4; M32(esp) = 0x10303bfdu; SAVEALL; F_103038d6(c); ABI_CHECK(0x103038d6u, 0x10303bf8u); RETCHK(0x10303bfdu, 0x10303bf8u); LOADALL;
  /* 10303bfd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10303bfe push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303c01 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10303c02 call 0x10302bf2 */ esp -= 4; M32(esp) = 0x10303c07u; SAVEALL; F_10302bf2(c); ABI_CHECK(0x10302bf2u, 0x10303c02u); RETCHK(0x10303c07u, 0x10303c02u); LOADALL;
  /* 10303c07 jmp 0x10303c1f */ goto L_10303c1f;
L_10303c09:;
  /* 10303c09 call 0x103038d6 */ esp -= 4; M32(esp) = 0x10303c0eu; SAVEALL; F_103038d6(c); ABI_CHECK(0x103038d6u, 0x10303c09u); RETCHK(0x10303c0eu, 0x10303c09u); LOADALL;
  /* 10303c0e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10303c0f push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303c12 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10303c13 call 0x10302bf2 */ esp -= 4; M32(esp) = 0x10303c18u; SAVEALL; F_10302bf2(c); ABI_CHECK(0x10302bf2u, 0x10303c13u); RETCHK(0x10303c18u, 0x10303c13u); LOADALL;
  /* 10303c18 jmp 0x10303c1f */ goto L_10303c1f;
L_10303c1a:;
  /* 10303c1a call 0x10304344 */ esp -= 4; M32(esp) = 0x10303c1fu; SAVEALL; F_10304344(c); ABI_CHECK(0x10304344u, 0x10303c1au); RETCHK(0x10303c1fu, 0x10303c1au); LOADALL;
L_10303c1f:;
  /* 10303c1f or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10303c23:;
  /* 10303c23 call 0x10303583 */ esp -= 4; M32(esp) = 0x10303c28u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10303c23u); RETCHK(0x10303c28u, 0x10303c23u); LOADALL;
  /* 10303c28 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10303c29(CPU *c) {
  NATIVE_HOOK(0x10303c29u) REGS; LOADALL;
L_10303c29:;
  /* 10303c29 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10303c2b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10303c2c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10303c2d(CPU *c) {
  NATIVE_HOOK(0x10303c2du) REGS; LOADALL;
L_10303c2d:;
  /* 10303c2d mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10303c30 jmp 0x1030430f */ SAVEALL; F_1030430f(c); return;
}

void F_10303c35(CPU *c) {
  NATIVE_HOOK(0x10303c35u) REGS; LOADALL;
L_10303c35:;
  /* 10303c35 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10303c36 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10303c38 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303c3a je 0x10303c49 */ if (ZF_) goto L_10303c49;
  /* 10303c3c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10303c3d push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303c40 mov edx, esi */ { edx = (u32)(esi); }
  /* 10303c42 call 0x10303ab9 */ esp -= 4; M32(esp) = 0x10303c47u; SAVEALL; F_10303ab9(c); ABI_CHECK(0x10303ab9u, 0x10303c42u); RETCHK(0x10303c47u, 0x10303c42u); LOADALL;
  /* 10303c47 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303c48 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10303c49:;
  /* 10303c49 cmp dword ptr [ebp + 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303c4d push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303c50 jne 0x10303c55 */ if (!ZF_) goto L_10303c55;
  /* 10303c52 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303c53 jmp 0x10303c58 */ goto L_10303c58;
L_10303c55:;
  /* 10303c55 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
L_10303c58:;
  /* 10303c58 call 0x10302bf9 */ esp -= 4; M32(esp) = 0x10303c5du; SAVEALL; F_10302bf9(c); ABI_CHECK(0x10302bf9u, 0x10303c58u); RETCHK(0x10303c5du, 0x10303c58u); LOADALL;
  /* 10303c5d push dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303c5f push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303c62 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303c65 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303c66 call 0x103037c3 */ esp -= 4; M32(esp) = 0x10303c6bu; SAVEALL; F_103037c3(c); ABI_CHECK(0x103037c3u, 0x10303c66u); RETCHK(0x10303c6bu, 0x10303c66u); LOADALL;
  /* 10303c6b mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10303c6e push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10303c73 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303c76 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10303c77 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303c7a mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 10303c7d push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303c80 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10303c83 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303c84 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303c87 call 0x103038f5 */ esp -= 4; M32(esp) = 0x10303c8cu; SAVEALL; F_103038f5(c); ABI_CHECK(0x103038f5u, 0x10303c87u); RETCHK(0x10303c8cu, 0x10303c87u); LOADALL;
  /* 10303c8c add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10303c8f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303c91 je 0x10303c9a */ if (ZF_) goto L_10303c9a;
  /* 10303c93 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303c94 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10303c95 call 0x10302bc2 */ esp -= 4; M32(esp) = 0x10303c9au; SAVEALL; F_10302bc2(c); ABI_CHECK(0x10302bc2u, 0x10303c95u); RETCHK(0x10303c9au, 0x10303c95u); LOADALL;
L_10303c9a:;
  /* 10303c9a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10303c9b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10303c9c(CPU *c) {
  NATIVE_HOOK(0x10303c9cu) REGS; LOADALL;
L_10303c9c:;
  /* 10303c9c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10303c9d mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10303c9f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10303ca0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10303ca1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303ca2 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10303ca5 cmp dword ptr [esi], 0x80000003 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x80000003u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303cab je 0x10303d57 */ if (ZF_) goto L_10303d57;
  /* 10303cb1 call 0x10304039 */ esp -= 4; M32(esp) = 0x10303cb6u; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10303cb1u); RETCHK(0x10303cb6u, 0x10303cb1u); LOADALL;
  /* 10303cb6 cmp dword ptr [eax + 0x74], 0 */ { const u32 m_ = (u32)(eax + 0x74u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303cba je 0x10303cdb */ if (ZF_) goto L_10303cdb;
  /* 10303cbc push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303cbf push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303cc2 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303cc5 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303cc8 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303ccb push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303cce push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303ccf call 0x10302cbc */ esp -= 4; M32(esp) = 0x10303cd4u; SAVEALL; F_10302cbc(c); ABI_CHECK(0x10302cbcu, 0x10303ccfu); RETCHK(0x10303cd4u, 0x10303ccfu); LOADALL;
  /* 10303cd4 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10303cd7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303cd9 jne 0x10303d57 */ if (!ZF_) goto L_10303d57;
L_10303cdb:;
  /* 10303cdb mov esi, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 10303cde push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10303cdf lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 10303ce2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10303ce3 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10303ce6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10303ce7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303ce8 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303ceb push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303cee call 0x10302e35 */ esp -= 4; M32(esp) = 0x10303cf3u; SAVEALL; F_10302e35(c); ABI_CHECK(0x10302e35u, 0x10303ceeu); RETCHK(0x10303cf3u, 0x10303ceeu); LOADALL;
  /* 10303cf3 mov edi, eax */ { edi = (u32)(eax); }
  /* 10303cf5 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10303cf8 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10303cfb cmp eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303cfe jae 0x10303d56 */ if (!CF_) goto L_10303d56;
  /* 10303d00 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
L_10303d01:;
  /* 10303d01 cmp esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303d03 jl 0x10303d47 */ if (LT_) goto L_10303d47;
  /* 10303d05 cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303d08 jg 0x10303d47 */ if (!(ZF_|LT_)) goto L_10303d47;
  /* 10303d0a mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10303d0d mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10303d10 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10303d13 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10303d15 mov ecx, dword ptr [eax - 0xc] */ { const u32 m_ = (u32)(eax + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10303d18 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303d1a je 0x10303d22 */ if (ZF_) goto L_10303d22;
  /* 10303d1c cmp byte ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10303d20 jne 0x10303d47 */ if (!ZF_) goto L_10303d47;
L_10303d22:;
  /* 10303d22 push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303d25 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10303d28 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303d2b lea ebx, [eax - 0x10] */ ebx = (u32)((u32)(eax + 0xfffffff0u));
  /* 10303d2e push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303d31 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10303d33 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303d36 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303d39 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303d3c call 0x10303c35 */ esp -= 4; M32(esp) = 0x10303d41u; SAVEALL; F_10303c35(c); ABI_CHECK(0x10303c35u, 0x10303d3cu); RETCHK(0x10303d41u, 0x10303d3cu); LOADALL;
  /* 10303d41 mov esi, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 10303d44 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10303d47:;
  /* 10303d47 inc dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10303d4a mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10303d4d add edi, 0x14 */ { u32 a_ = edi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10303d50 cmp eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303d53 jb 0x10303d01 */ if (CF_) goto L_10303d01;
  /* 10303d55 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_10303d56:;
  /* 10303d56 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_10303d57:;
  /* 10303d57 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10303d58 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10303d59 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10303d5a(CPU *c) {
  NATIVE_HOOK(0x10303d5au) REGS; LOADALL;
L_10303d5a:;
  /* 10303d5a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10303d5b mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10303d5d sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10303d60 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10303d63 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 10303d66 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303d69 mov byte ptr [ebp - 1], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)(0x0u); }
  /* 10303d6d mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10303d70 jl 0x10303d7a */ if (LT_) goto L_10303d7a;
  /* 10303d72 mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 10303d75 cmp eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303d78 jl 0x10303d7f */ if (LT_) goto L_10303d7f;
L_10303d7a:;
  /* 10303d7a call 0x10304344 */ esp -= 4; M32(esp) = 0x10303d7fu; SAVEALL; F_10304344(c); ABI_CHECK(0x10304344u, 0x10303d7au); RETCHK(0x10303d7fu, 0x10303d7au); LOADALL;
L_10303d7f:;
  /* 10303d7f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10303d80 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10303d83 cmp dword ptr [ebx], 0xe06d7363 */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303d89 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303d8a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10303d8b jne 0x10303f33 */ if (!ZF_) goto L_10303f33;
  /* 10303d91 cmp dword ptr [ebx + 0x10], 3 */ { const u32 m_ = (u32)(ebx + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303d95 mov edi, 0x19930520 */ { edi = (u32)(0x19930520u); }
  /* 10303d9a jne 0x10303e27 */ if (!ZF_) goto L_10303e27;
  /* 10303da0 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 10303da3 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303da5 je 0x10303dae */ if (ZF_) goto L_10303dae;
  /* 10303da7 cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303dac jne 0x10303e27 */ if (!ZF_) goto L_10303e27;
L_10303dae:;
  /* 10303dae cmp dword ptr [ebx + 0x1c], 0 */ { const u32 m_ = (u32)(ebx + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303db2 jne 0x10303e27 */ if (!ZF_) goto L_10303e27;
  /* 10303db4 call 0x10304039 */ esp -= 4; M32(esp) = 0x10303db9u; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10303db4u); RETCHK(0x10303db9u, 0x10303db4u); LOADALL;
  /* 10303db9 cmp dword ptr [eax + 0x7c], 0 */ { const u32 m_ = (u32)(eax + 0x7cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303dbd je 0x10303f2b */ if (ZF_) goto L_10303f2b;
  /* 10303dc3 call 0x10304039 */ esp -= 4; M32(esp) = 0x10303dc8u; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10303dc3u); RETCHK(0x10303dc8u, 0x10303dc3u); LOADALL;
  /* 10303dc8 mov esi, dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); esi = (u32)(M32(m_)); }
  /* 10303dcb mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 10303dce call 0x10304039 */ esp -= 4; M32(esp) = 0x10303dd3u; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10303dceu); RETCHK(0x10303dd3u, 0x10303dceu); LOADALL;
  /* 10303dd3 mov eax, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); eax = (u32)(M32(m_)); }
  /* 10303dd9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10303ddb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303ddc mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10303ddf mov byte ptr [ebp - 1], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)(0x1u); }
  /* 10303de3 call 0x103063c8 */ esp -= 4; M32(esp) = 0x10303de8u; SAVEALL; F_103063c8(c); ABI_CHECK(0x103063c8u, 0x10303de3u); RETCHK(0x10303de8u, 0x10303de3u); LOADALL;
  /* 10303de8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303dea pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303deb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303dec jne 0x10303df3 */ if (!ZF_) goto L_10303df3;
  /* 10303dee call 0x10304344 */ esp -= 4; M32(esp) = 0x10303df3u; SAVEALL; F_10304344(c); ABI_CHECK(0x10304344u, 0x10303deeu); RETCHK(0x10303df3u, 0x10303deeu); LOADALL;
L_10303df3:;
  /* 10303df3 cmp dword ptr [esi], 0xe06d7363 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303df9 jne 0x10303f30 */ if (!ZF_) goto L_10303f30;
  /* 10303dff mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10303e02 cmp dword ptr [eax + 0x10], 3 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303e06 jne 0x10303e24 */ if (!ZF_) goto L_10303e24;
  /* 10303e08 mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 10303e0b cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303e0d je 0x10303e16 */ if (ZF_) goto L_10303e16;
  /* 10303e0f cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303e14 jne 0x10303e24 */ if (!ZF_) goto L_10303e24;
L_10303e16:;
  /* 10303e16 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10303e19 cmp dword ptr [eax + 0x1c], 0 */ { const u32 m_ = (u32)(eax + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303e1d jne 0x10303e24 */ if (!ZF_) goto L_10303e24;
  /* 10303e1f call 0x10304344 */ esp -= 4; M32(esp) = 0x10303e24u; SAVEALL; F_10304344(c); ABI_CHECK(0x10304344u, 0x10303e1fu); RETCHK(0x10303e24u, 0x10303e1fu); LOADALL;
L_10303e24:;
  /* 10303e24 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_10303e27:;
  /* 10303e27 cmp dword ptr [ebx], 0xe06d7363 */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303e2d jne 0x10303f33 */ if (!ZF_) goto L_10303f33;
  /* 10303e33 cmp dword ptr [ebx + 0x10], 3 */ { const u32 m_ = (u32)(ebx + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303e37 jne 0x10303f33 */ if (!ZF_) goto L_10303f33;
  /* 10303e3d mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 10303e40 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303e42 je 0x10303e4f */ if (ZF_) goto L_10303e4f;
  /* 10303e44 cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303e49 jne 0x10303f33 */ if (!ZF_) goto L_10303f33;
L_10303e4f:;
  /* 10303e4f mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 10303e52 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 10303e55 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10303e56 lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 10303e59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10303e5a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303e5b push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303e5e push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303e61 call 0x10302e35 */ esp -= 4; M32(esp) = 0x10303e66u; SAVEALL; F_10302e35(c); ABI_CHECK(0x10302e35u, 0x10303e61u); RETCHK(0x10303e66u, 0x10303e61u); LOADALL;
  /* 10303e66 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10303e69 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10303e6c cmp ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303e6f mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10303e72 jae 0x10303f1b */ if (!CF_) goto L_10303f1b;
  /* 10303e78 jmp 0x10303e7d */ goto L_10303e7d;
L_10303e7a:;
  /* 10303e7a mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
L_10303e7d:;
  /* 10303e7d cmp dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303e7f jg 0x10303f06 */ if (!(ZF_|LT_)) goto L_10303f06;
  /* 10303e85 cmp esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303e88 jg 0x10303f06 */ if (!(ZF_|LT_)) goto L_10303f06;
  /* 10303e8a mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10303e8d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303e8f mov esi, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); esi = (u32)(M32(m_)); }
  /* 10303e92 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 10303e95 jle 0x10303f06 */ if ((ZF_|LT_)) goto L_10303f06;
L_10303e97:;
  /* 10303e97 mov ecx, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10303e9a mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10303e9d lea edx, [ecx + 4] */ edx = (u32)((u32)(ecx + 0x4u));
  /* 10303ea0 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 10303ea2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303ea4 mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 10303ea7 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 10303eaa jle 0x10303ed0 */ if ((ZF_|LT_)) goto L_10303ed0;
L_10303eac:;
  /* 10303eac mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 10303eaf mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 10303eb1 push dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303eb4 mov dword ptr [ebp - 0x24], edi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edi); }
  /* 10303eb7 call 0x10303756 */ esp -= 4; M32(esp) = 0x10303ebcu; SAVEALL; F_10303756(c); ABI_CHECK(0x10303756u, 0x10303eb7u); RETCHK(0x10303ebcu, 0x10303eb7u); LOADALL;
  /* 10303ebc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303ebe pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303ebf jne 0x10303ede */ if (!ZF_) goto L_10303ede;
  /* 10303ec1 dec dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10303ec4 add dword ptr [ebp - 0x10], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10303ec8 cmp dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303ecb jg 0x10303eac */ if (!(ZF_|LT_)) goto L_10303eac;
  /* 10303ecd mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
L_10303ed0:;
  /* 10303ed0 dec dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10303ed3 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10303ed6 cmp dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303eda jg 0x10303e97 */ if (!(ZF_|LT_)) goto L_10303e97;
  /* 10303edc jmp 0x10303f06 */ goto L_10303f06;
L_10303ede:;
  /* 10303ede push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303ee1 mov edi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edi = (u32)(M32(m_)); }
  /* 10303ee4 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303ee7 mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 10303eea push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303eed push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303ef0 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303ef3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10303ef4 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 10303ef6 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10303ef9 call 0x10303c35 */ esp -= 4; M32(esp) = 0x10303efeu; SAVEALL; F_10303c35(c); ABI_CHECK(0x10303c35u, 0x10303ef9u); RETCHK(0x10303efeu, 0x10303ef9u); LOADALL;
  /* 10303efe mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10303f01 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10303f04 mov eax, edi */ { eax = (u32)(edi); }
L_10303f06:;
  /* 10303f06 inc dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10303f09 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10303f0c add eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10303f0f cmp ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303f12 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10303f15 jb 0x10303e7a */ if (CF_) goto L_10303e7a;
L_10303f1b:;
  /* 10303f1b cmp byte ptr [ebp + 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10303f1f je 0x10303f2b */ if (ZF_) goto L_10303f2b;
  /* 10303f21 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10303f23 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10303f24 call 0x10303891 */ esp -= 4; M32(esp) = 0x10303f29u; SAVEALL; F_10303891(c); ABI_CHECK(0x10303891u, 0x10303f24u); RETCHK(0x10303f29u, 0x10303f24u); LOADALL;
  /* 10303f29 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303f2a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10303f2b:;
  /* 10303f2b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10303f2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10303f2d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10303f2e leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10303f2f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10303f30:;
  /* 10303f30 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_10303f33:;
  /* 10303f33 cmp byte ptr [ebp + 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10303f37 jne 0x10303f59 */ if (!ZF_) goto L_10303f59;
  /* 10303f39 push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303f3c push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303f3f push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303f42 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303f45 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303f48 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303f4b push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303f4e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10303f4f call 0x10303c9c */ esp -= 4; M32(esp) = 0x10303f54u; SAVEALL; F_10303c9c(c); ABI_CHECK(0x10303c9cu, 0x10303f4fu); RETCHK(0x10303f54u, 0x10303f4fu); LOADALL;
  /* 10303f54 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10303f57 jmp 0x10303f2b */ goto L_10303f2b;
L_10303f59:;
  /* 10303f59 jmp 0x1030430f */ SAVEALL; F_1030430f(c); return;
}

void F_10303f5e(CPU *c) {
  NATIVE_HOOK(0x10303f5eu) REGS; LOADALL;
L_10303f5e:;
  /* 10303f5e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10303f5f mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10303f61 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303f62 mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
  /* 10303f65 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10303f67 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10303f68 and eax, 0x1fffffff */ { u32 a_ = eax, b_ = 0x1fffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10303f6d mov edi, 0x19930520 */ { edi = (u32)(0x19930520u); }
  /* 10303f72 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303f74 je 0x10303f7b */ if (ZF_) goto L_10303f7b;
  /* 10303f76 call 0x10304344 */ esp -= 4; M32(esp) = 0x10303f7bu; SAVEALL; F_10304344(c); ABI_CHECK(0x10304344u, 0x10303f76u); RETCHK(0x10303f7bu, 0x10303f76u); LOADALL;
L_10303f7b:;
  /* 10303f7b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10303f7e test byte ptr [eax + 4], 0x66 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M8(m_), b_ = 0x66u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10303f82 je 0x10303fa3 */ if (ZF_) goto L_10303fa3;
  /* 10303f84 cmp dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303f88 je 0x10303ff9 */ if (ZF_) goto L_10303ff9;
  /* 10303f8a cmp dword ptr [ebp + 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303f8e jne 0x10303ff9 */ if (!ZF_) goto L_10303ff9;
  /* 10303f90 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10303f92 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303f93 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303f96 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303f99 call 0x103037c3 */ esp -= 4; M32(esp) = 0x10303f9eu; SAVEALL; F_103037c3(c); ABI_CHECK(0x103037c3u, 0x10303f99u); RETCHK(0x10303f9eu, 0x10303f99u); LOADALL;
  /* 10303f9e add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10303fa1 jmp 0x10303ff9 */ goto L_10303ff9;
L_10303fa3:;
  /* 10303fa3 cmp dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303fa7 je 0x10303ff9 */ if (ZF_) goto L_10303ff9;
  /* 10303fa9 cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303faf jne 0x10303fdd */ if (!ZF_) goto L_10303fdd;
  /* 10303fb1 cmp dword ptr [eax + 0x14], edi */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303fb4 jbe 0x10303fdd */ if ((CF_|ZF_)) goto L_10303fdd;
  /* 10303fb6 mov ecx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10303fb9 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10303fbc test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303fbe je 0x10303fdd */ if (ZF_) goto L_10303fdd;
  /* 10303fc0 movzx edx, byte ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); edx = (u32)(M8(m_)); }
  /* 10303fc4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10303fc5 push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303fc8 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303fcb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303fcc push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303fcf push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303fd2 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303fd5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10303fd6 call ecx */ { u32 t_ = ecx; esp -= 4; M32(esp) = 0x10303fd8u; SAVEALL; call_ind(c, t_); RETCHK(0x10303fd8u, 0x10303fd6u); LOADALL; }
  /* 10303fd8 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10303fdb jmp 0x10303ffc */ goto L_10303ffc;
L_10303fdd:;
  /* 10303fdd push dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303fe0 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303fe3 push dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303fe6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303fe7 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303fea push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303fed push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303ff0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10303ff1 call 0x10303d5a */ esp -= 4; M32(esp) = 0x10303ff6u; SAVEALL; F_10303d5a(c); ABI_CHECK(0x10303d5au, 0x10303ff1u); RETCHK(0x10303ff6u, 0x10303ff1u); LOADALL;
  /* 10303ff6 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10303ff9:;
  /* 10303ff9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10303ffb inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10303ffc:;
  /* 10303ffc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10303ffd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10303ffe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10303fff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304000(CPU *c) {
  NATIVE_HOOK(0x10304000u) REGS; LOADALL;
L_10304000:;
  /* 10304000 call dword ptr [0x10309034] */ { const u32 m_ = (u32)(0x10309034u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10304006u; SAVEALL; call_ind(c, t_); RETCHK(0x10304006u, 0x10304000u); LOADALL; }
  /* 10304006 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10304009(CPU *c) {
  NATIVE_HOOK(0x10304009u) REGS; LOADALL;
L_10304009:;
  /* 10304009 mov eax, dword ptr [0x1030b068] */ { const u32 m_ = (u32)(0x1030b068u); eax = (u32)(M32(m_)); }
  /* 1030400e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304011 je 0x10304021 */ if (ZF_) goto L_10304021;
  /* 10304013 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10304014 call dword ptr [0x1030b948] */ { const u32 m_ = (u32)(0x1030b948u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030401au; SAVEALL; call_ind(c, t_); RETCHK(0x1030401au, 0x10304014u); LOADALL; }
  /* 1030401a or dword ptr [0x1030b068], 0xffffffff */ { const u32 m_ = (u32)(0x1030b068u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10304021:;
  /* 10304021 jmp 0x103051a5 */ goto L_103051a5;
L_103051a5:;
  /* 103051a5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103051a6 mov ebx, dword ptr [0x1030906c] */ { const u32 m_ = (u32)(0x1030906cu); ebx = (u32)(M32(m_)); }
  /* 103051ac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103051ad mov esi, 0x1030b1c0 */ { esi = (u32)(0x1030b1c0u); }
  /* 103051b2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_103051b3:;
  /* 103051b3 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 103051b5 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103051b7 je 0x103051cc */ if (ZF_) goto L_103051cc;
  /* 103051b9 cmp dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103051bd je 0x103051cc */ if (ZF_) goto L_103051cc;
  /* 103051bf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103051c0 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x103051c2u; SAVEALL; call_ind(c, t_); RETCHK(0x103051c2u, 0x103051c0u); LOADALL; }
  /* 103051c2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103051c3 call 0x10303326 */ esp -= 4; M32(esp) = 0x103051c8u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103051c3u); RETCHK(0x103051c8u, 0x103051c3u); LOADALL;
  /* 103051c8 and dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103051cb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103051cc:;
  /* 103051cc add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103051cf cmp esi, 0x1030b2e0 */ { u32 a_ = esi, b_ = 0x1030b2e0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103051d5 jl 0x103051b3 */ if (LT_) goto L_103051b3;
  /* 103051d7 mov esi, 0x1030b1c0 */ { esi = (u32)(0x1030b1c0u); }
  /* 103051dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_103051dd:;
  /* 103051dd mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 103051df test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103051e1 je 0x103051ec */ if (ZF_) goto L_103051ec;
  /* 103051e3 cmp dword ptr [esi + 4], 1 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103051e7 jne 0x103051ec */ if (!ZF_) goto L_103051ec;
  /* 103051e9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103051ea call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x103051ecu; SAVEALL; call_ind(c, t_); RETCHK(0x103051ecu, 0x103051eau); LOADALL; }
L_103051ec:;
  /* 103051ec add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103051ef cmp esi, 0x1030b2e0 */ { u32 a_ = esi, b_ = 0x1030b2e0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103051f5 jl 0x103051dd */ if (LT_) goto L_103051dd;
  /* 103051f7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103051f8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 103051f9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304026(CPU *c) {
  NATIVE_HOOK(0x10304026u) REGS; LOADALL;
L_10304026:;
  /* 10304026 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 1030402a mov dword ptr [eax + 0x54], 0x1030b0a0 */ { const u32 m_ = (u32)(eax + 0x54u); M32(m_) = (u32)(0x1030b0a0u); }
  /* 10304031 mov dword ptr [eax + 0x14], 1 */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(0x1u); }
  /* 10304038 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304039(CPU *c) {
  NATIVE_HOOK(0x10304039u) REGS; LOADALL;
L_10304039:;
  /* 10304039 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1030403a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030403b call dword ptr [0x1030903c] */ { const u32 m_ = (u32)(0x1030903cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10304041u; SAVEALL; call_ind(c, t_); RETCHK(0x10304041u, 0x1030403bu); LOADALL; }
  /* 10304041 push dword ptr [0x1030b068] */ { const u32 m_ = (u32)(0x1030b068u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304047 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10304049 call dword ptr [0x1030b940] */ { const u32 m_ = (u32)(0x1030b940u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030404fu; SAVEALL; call_ind(c, t_); RETCHK(0x1030404fu, 0x10304049u); LOADALL; }
  /* 1030404f mov esi, eax */ { esi = (u32)(eax); }
  /* 10304051 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304053 jne 0x1030409e */ if (!ZF_) goto L_1030409e;
  /* 10304055 push 0x8c */ { u32 v_ = 0x8cu; esp -= 4; M32(esp) = v_; }
  /* 1030405a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1030405c call 0x10304573 */ esp -= 4; M32(esp) = 0x10304061u; SAVEALL; F_10304573(c); ABI_CHECK(0x10304573u, 0x1030405cu); RETCHK(0x10304061u, 0x1030405cu); LOADALL;
  /* 10304061 mov esi, eax */ { esi = (u32)(eax); }
  /* 10304063 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304065 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304066 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304067 je 0x10304096 */ if (ZF_) goto L_10304096;
  /* 10304069 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030406a push dword ptr [0x1030b068] */ { const u32 m_ = (u32)(0x1030b068u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304070 call dword ptr [0x1030b944] */ { const u32 m_ = (u32)(0x1030b944u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10304076u; SAVEALL; call_ind(c, t_); RETCHK(0x10304076u, 0x10304070u); LOADALL; }
  /* 10304076 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304078 je 0x10304096 */ if (ZF_) goto L_10304096;
  /* 1030407a mov dword ptr [esi + 0x54], 0x1030b0a0 */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x1030b0a0u); }
  /* 10304081 mov dword ptr [esi + 0x14], 1 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x1u); }
  /* 10304088 call dword ptr [0x1030900c] */ { const u32 m_ = (u32)(0x1030900cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030408eu; SAVEALL; call_ind(c, t_); RETCHK(0x1030408eu, 0x10304088u); LOADALL; }
  /* 1030408e or dword ptr [esi + 4], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304092 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10304094 jmp 0x1030409e */ goto L_1030409e;
L_10304096:;
  /* 10304096 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10304098 call 0x103032f3 */ esp -= 4; M32(esp) = 0x1030409du; SAVEALL; F_103032f3(c); ABI_CHECK(0x103032f3u, 0x10304098u); RETCHK(0x1030409du, 0x10304098u); LOADALL;
  /* 1030409d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1030409e:;
  /* 1030409e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1030409f call dword ptr [0x10309038] */ { const u32 m_ = (u32)(0x10309038u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103040a5u; SAVEALL; call_ind(c, t_); RETCHK(0x103040a5u, 0x1030409fu); LOADALL; }
  /* 103040a5 mov eax, esi */ { eax = (u32)(esi); }
  /* 103040a7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103040a8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 103040a9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103040aa(CPU *c) {
  NATIVE_HOOK(0x103040aau) REGS; LOADALL;
L_103040aa:;
  /* 103040aa push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 103040ac push 0x103093e0 */ { u32 v_ = 0x103093e0u; esp -= 4; M32(esp) = v_; }
  /* 103040b1 call 0x10303548 */ esp -= 4; M32(esp) = 0x103040b6u; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x103040b1u); RETCHK(0x103040b6u, 0x103040b1u); LOADALL;
  /* 103040b6 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 103040b9 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 103040bb cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103040bd je 0x103041cf */ if (ZF_) goto L_103041cf;
  /* 103040c3 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 103040c6 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103040c8 je 0x103040d1 */ if (ZF_) goto L_103040d1;
  /* 103040ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103040cb call 0x10303326 */ esp -= 4; M32(esp) = 0x103040d0u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103040cbu); RETCHK(0x103040d0u, 0x103040cbu); LOADALL;
  /* 103040d0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103040d1:;
  /* 103040d1 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 103040d4 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103040d6 je 0x103040df */ if (ZF_) goto L_103040df;
  /* 103040d8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103040d9 call 0x10303326 */ esp -= 4; M32(esp) = 0x103040deu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103040d9u); RETCHK(0x103040deu, 0x103040d9u); LOADALL;
  /* 103040de pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103040df:;
  /* 103040df mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 103040e2 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103040e4 je 0x103040ed */ if (ZF_) goto L_103040ed;
  /* 103040e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103040e7 call 0x10303326 */ esp -= 4; M32(esp) = 0x103040ecu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103040e7u); RETCHK(0x103040ecu, 0x103040e7u); LOADALL;
  /* 103040ec pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103040ed:;
  /* 103040ed mov eax, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 103040f0 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103040f2 je 0x103040fb */ if (ZF_) goto L_103040fb;
  /* 103040f4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103040f5 call 0x10303326 */ esp -= 4; M32(esp) = 0x103040fau; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103040f5u); RETCHK(0x103040fau, 0x103040f5u); LOADALL;
  /* 103040fa pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103040fb:;
  /* 103040fb mov eax, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); eax = (u32)(M32(m_)); }
  /* 103040fe cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304100 je 0x10304109 */ if (ZF_) goto L_10304109;
  /* 10304102 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10304103 call 0x10303326 */ esp -= 4; M32(esp) = 0x10304108u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10304103u); RETCHK(0x10304108u, 0x10304103u); LOADALL;
  /* 10304108 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10304109:;
  /* 10304109 mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 1030410c cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030410e je 0x10304117 */ if (ZF_) goto L_10304117;
  /* 10304110 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10304111 call 0x10303326 */ esp -= 4; M32(esp) = 0x10304116u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10304111u); RETCHK(0x10304116u, 0x10304111u); LOADALL;
  /* 10304116 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10304117:;
  /* 10304117 mov eax, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); eax = (u32)(M32(m_)); }
  /* 1030411a cmp eax, 0x1030b0a0 */ { u32 a_ = eax, b_ = 0x1030b0a0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030411f je 0x10304128 */ if (ZF_) goto L_10304128;
  /* 10304121 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10304122 call 0x10303326 */ esp -= 4; M32(esp) = 0x10304127u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10304122u); RETCHK(0x10304127u, 0x10304122u); LOADALL;
  /* 10304127 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10304128:;
  /* 10304128 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 1030412a call 0x103052af */ esp -= 4; M32(esp) = 0x1030412fu; SAVEALL; F_103052af(c); ABI_CHECK(0x103052afu, 0x1030412au); RETCHK(0x1030412fu, 0x1030412au); LOADALL;
  /* 1030412f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304130 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 10304133 mov eax, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); eax = (u32)(M32(m_)); }
  /* 10304136 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10304139 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030413b je 0x10304150 */ if (ZF_) goto L_10304150;
  /* 1030413d dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1030413f jne 0x10304150 */ if (!ZF_) goto L_10304150;
  /* 10304141 cmp eax, dword ptr [0x1030bdec] */ { const u32 m_ = (u32)(0x1030bdecu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304147 je 0x10304150 */ if (ZF_) goto L_10304150;
  /* 10304149 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030414a call 0x10303326 */ esp -= 4; M32(esp) = 0x1030414fu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x1030414au); RETCHK(0x1030414fu, 0x1030414au); LOADALL;
  /* 1030414f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10304150:;
  /* 10304150 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304154 call 0x103041dc */ esp -= 4; M32(esp) = 0x10304159u; SAVEALL; F_103041dc(c); ABI_CHECK(0x103041dcu, 0x10304154u); RETCHK(0x10304159u, 0x10304154u); LOADALL;
  /* 10304159 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 1030415b call 0x103052af */ esp -= 4; M32(esp) = 0x10304160u; SAVEALL; F_103052af(c); ABI_CHECK(0x103052afu, 0x1030415bu); RETCHK(0x10304160u, 0x1030415bu); LOADALL;
  /* 10304160 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304161 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 10304168 mov eax, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); eax = (u32)(M32(m_)); }
  /* 1030416b mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 1030416e cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304170 je 0x103041bf */ if (ZF_) goto L_103041bf;
  /* 10304172 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10304174 cmp dword ptr [eax + 0x2c], edi */ { const u32 m_ = (u32)(eax + 0x2cu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304177 je 0x1030417e */ if (ZF_) goto L_1030417e;
  /* 10304179 mov ecx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 1030417c dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_1030417e:;
  /* 1030417e cmp dword ptr [eax + 0x34], edi */ { const u32 m_ = (u32)(eax + 0x34u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304181 je 0x10304188 */ if (ZF_) goto L_10304188;
  /* 10304183 mov ecx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (u32)(M32(m_)); }
  /* 10304186 dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10304188:;
  /* 10304188 cmp dword ptr [eax + 0x30], edi */ { const u32 m_ = (u32)(eax + 0x30u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030418b je 0x10304192 */ if (ZF_) goto L_10304192;
  /* 1030418d mov ecx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ecx = (u32)(M32(m_)); }
  /* 10304190 dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10304192:;
  /* 10304192 cmp dword ptr [eax + 0x40], edi */ { const u32 m_ = (u32)(eax + 0x40u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304195 je 0x1030419c */ if (ZF_) goto L_1030419c;
  /* 10304197 mov ecx, dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); ecx = (u32)(M32(m_)); }
  /* 1030419a dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_1030419c:;
  /* 1030419c mov ecx, dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 1030419f dec dword ptr [ecx + 0xb4] */ { const u32 m_ = (u32)(ecx + 0xb4u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 103041a5 cmp eax, dword ptr [0x1030b33c] */ { const u32 m_ = (u32)(0x1030b33cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103041ab je 0x103041bf */ if (ZF_) goto L_103041bf;
  /* 103041ad cmp eax, 0x1030b2e8 */ { u32 a_ = eax, b_ = 0x1030b2e8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103041b2 je 0x103041bf */ if (ZF_) goto L_103041bf;
  /* 103041b4 cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103041b6 jne 0x103041bf */ if (!ZF_) goto L_103041bf;
  /* 103041b8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103041b9 call 0x1030675d */ esp -= 4; M32(esp) = 0x103041beu; SAVEALL; F_1030675d(c); ABI_CHECK(0x1030675du, 0x103041b9u); RETCHK(0x103041beu, 0x103041b9u); LOADALL;
  /* 103041be pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103041bf:;
  /* 103041bf or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103041c3 call 0x103041e8 */ esp -= 4; M32(esp) = 0x103041c8u; SAVEALL; F_103041e8(c); ABI_CHECK(0x103041e8u, 0x103041c3u); RETCHK(0x103041c8u, 0x103041c3u); LOADALL;
  /* 103041c8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103041c9 call 0x10303326 */ esp -= 4; M32(esp) = 0x103041ceu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103041c9u); RETCHK(0x103041ceu, 0x103041c9u); LOADALL;
  /* 103041ce pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103041cf:;
  /* 103041cf call 0x10303583 */ esp -= 4; M32(esp) = 0x103041d4u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x103041cfu); RETCHK(0x103041d4u, 0x103041cfu); LOADALL;
  /* 103041d4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_103041d7(CPU *c) {
  NATIVE_HOOK(0x103041d7u) REGS; LOADALL;
L_103041d7:;
  /* 103041d7 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 103041d9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 103041dc push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 103041de call 0x103051fa */ esp -= 4; M32(esp) = 0x103041e3u; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x103041deu); RETCHK(0x103041e3u, 0x103041deu); LOADALL;
  /* 103041e3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103041e4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103041dc(CPU *c) {
  NATIVE_HOOK(0x103041dcu) REGS; LOADALL;
L_103041dc:;
  /* 103041dc push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 103041de call 0x103051fa */ esp -= 4; M32(esp) = 0x103041e3u; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x103041deu); RETCHK(0x103041e3u, 0x103041deu); LOADALL;
  /* 103041e3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103041e4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103041e5(CPU *c) {
  NATIVE_HOOK(0x103041e5u) REGS; LOADALL;
L_103041e5:;
  /* 103041e5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 103041e8 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 103041ea call 0x103051fa */ esp -= 4; M32(esp) = 0x103041efu; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x103041eau); RETCHK(0x103041efu, 0x103041eau); LOADALL;
  /* 103041ef pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103041f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103041e8(CPU *c) {
  NATIVE_HOOK(0x103041e8u) REGS; LOADALL;
L_103041e8:;
  /* 103041e8 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 103041ea call 0x103051fa */ esp -= 4; M32(esp) = 0x103041efu; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x103041eau); RETCHK(0x103041efu, 0x103041eau); LOADALL;
  /* 103041ef pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103041f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103041f1(CPU *c) {
  NATIVE_HOOK(0x103041f1u) REGS; LOADALL;
L_103041f1:;
  /* 103041f1 mov ecx, dword ptr [0x1030b068] */ { const u32 m_ = (u32)(0x1030b068u); ecx = (u32)(M32(m_)); }
  /* 103041f7 cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103041fa je 0x1030421f */ if (ZF_) goto L_1030421f;
  /* 103041fc mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10304200 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304202 jne 0x1030420b */ if (!ZF_) goto L_1030420b;
  /* 10304204 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10304205 call dword ptr [0x1030b940] */ { const u32 m_ = (u32)(0x1030b940u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030420bu; SAVEALL; call_ind(c, t_); RETCHK(0x1030420bu, 0x10304205u); LOADALL; }
L_1030420b:;
  /* 1030420b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030420c call 0x103040aa */ esp -= 4; M32(esp) = 0x10304211u; SAVEALL; F_103040aa(c); ABI_CHECK(0x103040aau, 0x1030420cu); RETCHK(0x10304211u, 0x1030420cu); LOADALL;
  /* 10304211 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10304213 push dword ptr [0x1030b068] */ { const u32 m_ = (u32)(0x1030b068u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304219 call dword ptr [0x1030b944] */ { const u32 m_ = (u32)(0x1030b944u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030421fu; SAVEALL; call_ind(c, t_); RETCHK(0x1030421fu, 0x10304219u); LOADALL; }
L_1030421f:;
  /* 1030421f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304220(CPU *c) {
  NATIVE_HOOK(0x10304220u) REGS; LOADALL;
L_10304220:;
  /* 10304220 call 0x1030515c */ esp -= 4; M32(esp) = 0x10304225u; SAVEALL; F_1030515c(c); ABI_CHECK(0x1030515cu, 0x10304220u); RETCHK(0x10304225u, 0x10304220u); LOADALL;
  /* 10304225 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304227 jne 0x10304231 */ if (!ZF_) goto L_10304231;
  /* 10304229 call 0x10304009 */ esp -= 4; M32(esp) = 0x1030422eu; SAVEALL; F_10304009(c); ABI_CHECK(0x10304009u, 0x10304229u); RETCHK(0x1030422eu, 0x10304229u); LOADALL;
  /* 1030422e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10304230 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10304231:;
  /* 10304231 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10304232 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10304233 push 0x10309424 */ { u32 v_ = 0x10309424u; esp -= 4; M32(esp) = v_; }
  /* 10304238 call dword ptr [0x10309050] */ { const u32 m_ = (u32)(0x10309050u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030423eu; SAVEALL; call_ind(c, t_); RETCHK(0x1030423eu, 0x10304238u); LOADALL; }
  /* 1030423e mov edi, eax */ { edi = (u32)(eax); }
  /* 10304240 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304242 je 0x103042af */ if (ZF_) goto L_103042af;
  /* 10304244 mov esi, dword ptr [0x1030904c] */ { const u32 m_ = (u32)(0x1030904cu); esi = (u32)(M32(m_)); }
  /* 1030424a push 0x10309418 */ { u32 v_ = 0x10309418u; esp -= 4; M32(esp) = v_; }
  /* 1030424f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10304250 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10304252u; SAVEALL; call_ind(c, t_); RETCHK(0x10304252u, 0x10304250u); LOADALL; }
  /* 10304252 push 0x1030940c */ { u32 v_ = 0x1030940cu; esp -= 4; M32(esp) = v_; }
  /* 10304257 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10304258 mov dword ptr [0x1030b93c], eax */ { const u32 m_ = (u32)(0x1030b93cu); M32(m_) = (u32)(eax); }
  /* 1030425d call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x1030425fu; SAVEALL; call_ind(c, t_); RETCHK(0x1030425fu, 0x1030425du); LOADALL; }
  /* 1030425f push 0x10309400 */ { u32 v_ = 0x10309400u; esp -= 4; M32(esp) = v_; }
  /* 10304264 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10304265 mov dword ptr [0x1030b940], eax */ { const u32 m_ = (u32)(0x1030b940u); M32(m_) = (u32)(eax); }
  /* 1030426a call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x1030426cu; SAVEALL; call_ind(c, t_); RETCHK(0x1030426cu, 0x1030426au); LOADALL; }
  /* 1030426c push 0x103093f8 */ { u32 v_ = 0x103093f8u; esp -= 4; M32(esp) = v_; }
  /* 10304271 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10304272 mov dword ptr [0x1030b944], eax */ { const u32 m_ = (u32)(0x1030b944u); M32(m_) = (u32)(eax); }
  /* 10304277 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10304279u; SAVEALL; call_ind(c, t_); RETCHK(0x10304279u, 0x10304277u); LOADALL; }
  /* 10304279 cmp dword ptr [0x1030b940], 0 */ { const u32 m_ = (u32)(0x1030b940u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304280 mov dword ptr [0x1030b948], eax */ { const u32 m_ = (u32)(0x1030b948u); M32(m_) = (u32)(eax); }
  /* 10304285 jne 0x103042af */ if (!ZF_) goto L_103042af;
  /* 10304287 mov eax, dword ptr [0x10309048] */ { const u32 m_ = (u32)(0x10309048u); eax = (u32)(M32(m_)); }
  /* 1030428c mov dword ptr [0x1030b940], eax */ { const u32 m_ = (u32)(0x1030b940u); M32(m_) = (u32)(eax); }
  /* 10304291 mov eax, dword ptr [0x10309044] */ { const u32 m_ = (u32)(0x10309044u); eax = (u32)(M32(m_)); }
  /* 10304296 mov dword ptr [0x1030b944], eax */ { const u32 m_ = (u32)(0x1030b944u); M32(m_) = (u32)(eax); }
  /* 1030429b mov eax, dword ptr [0x10309040] */ { const u32 m_ = (u32)(0x10309040u); eax = (u32)(M32(m_)); }
  /* 103042a0 mov dword ptr [0x1030b93c], 0x10304000 */ { const u32 m_ = (u32)(0x1030b93cu); M32(m_) = (u32)(0x10304000u); }
  /* 103042aa mov dword ptr [0x1030b948], eax */ { const u32 m_ = (u32)(0x1030b948u); M32(m_) = (u32)(eax); }
L_103042af:;
  /* 103042af push 0x103040aa */ { u32 v_ = 0x103040aau; esp -= 4; M32(esp) = v_; }
  /* 103042b4 call dword ptr [0x1030b93c] */ { const u32 m_ = (u32)(0x1030b93cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103042bau; SAVEALL; call_ind(c, t_); RETCHK(0x103042bau, 0x103042b4u); LOADALL; }
  /* 103042ba cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103042bd mov dword ptr [0x1030b068], eax */ { const u32 m_ = (u32)(0x1030b068u); M32(m_) = (u32)(eax); }
  /* 103042c2 je 0x10304305 */ if (ZF_) goto L_10304305;
  /* 103042c4 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 103042c6 push 0x8c */ { u32 v_ = 0x8cu; esp -= 4; M32(esp) = v_; }
  /* 103042cb inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103042cc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103042cd call 0x10304573 */ esp -= 4; M32(esp) = 0x103042d2u; SAVEALL; F_10304573(c); ABI_CHECK(0x10304573u, 0x103042cdu); RETCHK(0x103042d2u, 0x103042cdu); LOADALL;
  /* 103042d2 mov esi, eax */ { esi = (u32)(eax); }
  /* 103042d4 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103042d6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103042d7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103042d8 je 0x10304305 */ if (ZF_) goto L_10304305;
  /* 103042da push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103042db push dword ptr [0x1030b068] */ { const u32 m_ = (u32)(0x1030b068u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103042e1 call dword ptr [0x1030b944] */ { const u32 m_ = (u32)(0x1030b944u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103042e7u; SAVEALL; call_ind(c, t_); RETCHK(0x103042e7u, 0x103042e1u); LOADALL; }
  /* 103042e7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103042e9 je 0x10304305 */ if (ZF_) goto L_10304305;
  /* 103042eb mov dword ptr [esi + 0x54], 0x1030b0a0 */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(0x1030b0a0u); }
  /* 103042f2 mov dword ptr [esi + 0x14], edi */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edi); }
  /* 103042f5 call dword ptr [0x1030900c] */ { const u32 m_ = (u32)(0x1030900cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103042fbu; SAVEALL; call_ind(c, t_); RETCHK(0x103042fbu, 0x103042f5u); LOADALL; }
  /* 103042fb or dword ptr [esi + 4], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103042ff mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10304301 mov eax, edi */ { eax = (u32)(edi); }
  /* 10304303 jmp 0x1030430c */ goto L_1030430c;
L_10304305:;
  /* 10304305 call 0x10304009 */ esp -= 4; M32(esp) = 0x1030430au; SAVEALL; F_10304009(c); ABI_CHECK(0x10304009u, 0x10304305u); RETCHK(0x1030430au, 0x10304305u); LOADALL;
  /* 1030430a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_1030430c:;
  /* 1030430c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030430d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030430e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030430f(CPU *c) {
  NATIVE_HOOK(0x1030430fu) REGS; LOADALL;
L_1030430f:;
  /* 1030430f push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10304311 push 0x10309438 */ { u32 v_ = 0x10309438u; esp -= 4; M32(esp) = v_; }
  /* 10304316 call 0x10303548 */ esp -= 4; M32(esp) = 0x1030431bu; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x10304316u); RETCHK(0x1030431bu, 0x10304316u); LOADALL;
  /* 1030431b call 0x10304039 */ esp -= 4; M32(esp) = 0x10304320u; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x1030431bu); RETCHK(0x10304320u, 0x1030431bu); LOADALL;
  /* 10304320 cmp dword ptr [eax + 0x6c], 0 */ { const u32 m_ = (u32)(eax + 0x6cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304324 je 0x1030433f */ if (ZF_) goto L_1030433f;
  /* 10304326 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1030432a call 0x10304039 */ esp -= 4; M32(esp) = 0x1030432fu; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x1030432au); RETCHK(0x1030432fu, 0x1030432au); LOADALL;
  /* 1030432f call dword ptr [eax + 0x6c] */ { const u32 m_ = (u32)(eax + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10304332u; SAVEALL; call_ind(c, t_); RETCHK(0x10304332u, 0x1030432fu); LOADALL; }
  /* 10304332 jmp 0x1030433b */ goto L_1030433b;
L_1030433b:;
  /* 1030433b or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1030433f:;
  /* 1030433f jmp 0x10306e0b */ goto L_10306e0b;
L_10306e0b:;
  /* 10306e0b push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 10306e0d call 0x10304fac */ esp -= 4; M32(esp) = 0x10306e12u; SAVEALL; F_10304fac(c); ABI_CHECK(0x10304facu, 0x10306e0du); RETCHK(0x10306e12u, 0x10306e0du); LOADALL;
  /* 10306e12 push 0x16 */ { u32 v_ = 0x16u; esp -= 4; M32(esp) = v_; }
  /* 10306e14 call 0x10307d6a */ esp -= 4; M32(esp) = 0x10306e19u; SAVEALL; F_10307d6a(c); ABI_CHECK(0x10307d6au, 0x10306e14u); RETCHK(0x10306e19u, 0x10306e14u); LOADALL;
  /* 10306e19 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306e1a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306e1b push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10306e1d call 0x10304553 */ esp -= 4; M32(esp) = 0x10306e22u; SAVEALL; F_10304553(c); ABI_CHECK(0x10304553u, 0x10306e1du); RETCHK(0x10306e22u, 0x10306e1du); LOADALL;
  /* 10306e22 int3 */ TRAP(0x10306e22u, "int3");
}

void F_10304334(CPU *c) {
  NATIVE_HOOK(0x10304334u) REGS; LOADALL;
L_10304334:;
  /* 10304334 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10304336 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304337 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304338(CPU *c) {
  NATIVE_HOOK(0x10304338u) REGS; LOADALL;
L_10304338:;
  /* 10304338 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 1030433b or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1030433f jmp 0x10306e0b */ goto L_10306e0b;
L_10306e0b:;
  /* 10306e0b push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 10306e0d call 0x10304fac */ esp -= 4; M32(esp) = 0x10306e12u; SAVEALL; F_10304fac(c); ABI_CHECK(0x10304facu, 0x10306e0du); RETCHK(0x10306e12u, 0x10306e0du); LOADALL;
  /* 10306e12 push 0x16 */ { u32 v_ = 0x16u; esp -= 4; M32(esp) = v_; }
  /* 10306e14 call 0x10307d6a */ esp -= 4; M32(esp) = 0x10306e19u; SAVEALL; F_10307d6a(c); ABI_CHECK(0x10307d6au, 0x10306e14u); RETCHK(0x10306e19u, 0x10306e14u); LOADALL;
  /* 10306e19 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306e1a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306e1b push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10306e1d call 0x10304553 */ esp -= 4; M32(esp) = 0x10306e22u; SAVEALL; F_10304553(c); ABI_CHECK(0x10304553u, 0x10306e1du); RETCHK(0x10306e22u, 0x10306e1du); LOADALL;
  /* 10306e22 int3 */ TRAP(0x10306e22u, "int3");
}

void F_10304344(CPU *c) {
  NATIVE_HOOK(0x10304344u) REGS; LOADALL;
L_10304344:;
  /* 10304344 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10304346 push 0x10309448 */ { u32 v_ = 0x10309448u; esp -= 4; M32(esp) = v_; }
  /* 1030434b call 0x10303548 */ esp -= 4; M32(esp) = 0x10304350u; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x1030434bu); RETCHK(0x10304350u, 0x1030434bu); LOADALL;
  /* 10304350 mov eax, dword ptr [0x1030b06c] */ { const u32 m_ = (u32)(0x1030b06cu); eax = (u32)(M32(m_)); }
  /* 10304355 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304357 je 0x1030436c */ if (ZF_) goto L_1030436c;
  /* 10304359 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1030435d call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1030435fu; SAVEALL; call_ind(c, t_); RETCHK(0x1030435fu, 0x1030435du); LOADALL; }
  /* 1030435f jmp 0x10304368 */ goto L_10304368;
L_10304368:;
  /* 10304368 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1030436c:;
  /* 1030436c jmp 0x1030430f */ SAVEALL; F_1030430f(c); return;
}

void F_10304361(CPU *c) {
  NATIVE_HOOK(0x10304361u) REGS; LOADALL;
L_10304361:;
  /* 10304361 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10304363 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304364 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304365(CPU *c) {
  NATIVE_HOOK(0x10304365u) REGS; LOADALL;
L_10304365:;
  /* 10304365 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10304368 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1030436c jmp 0x1030430f */ SAVEALL; F_1030430f(c); return;
}

void F_10304380(CPU *c) {
  NATIVE_HOOK(0x10304380u) REGS; LOADALL;
L_10304380:;
  /* 10304380 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10304381 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10304383 sub esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10304386 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304387 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10304388 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1030438b add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1030438e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10304391 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10304394 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10304395 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304398 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1030439b mov ebp, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebp = (u32)(M32(m_)); }
  /* 1030439e call 0x1030306d */ esp -= 4; M32(esp) = 0x103043a3u; SAVEALL; F_1030306d(c); ABI_CHECK(0x1030306du, 0x1030439eu); RETCHK(0x103043a3u, 0x1030439eu); LOADALL;
  /* 103043a3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103043a4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103043a5 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x103043a7u; SAVEALL; call_ind(c, t_); RETCHK(0x103043a7u, 0x103043a5u); LOADALL; }
  /* 103043a7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103043a8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103043a9 mov ebx, ebp */ { ebx = (u32)(ebp); }
  /* 103043ab pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 103043ac mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 103043af push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 103043b0 mov ebp, ebx */ { ebp = (u32)(ebx); }
  /* 103043b2 cmp ecx, 0x100 */ { u32 a_ = ecx, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103043b8 jne 0x103043bf */ if (!ZF_) goto L_103043bf;
  /* 103043ba mov ecx, 2 */ { ecx = (u32)(0x2u); }
L_103043bf:;
  /* 103043bf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103043c0 call 0x1030306d */ esp -= 4; M32(esp) = 0x103043c5u; SAVEALL; F_1030306d(c); ABI_CHECK(0x1030306du, 0x103043c0u); RETCHK(0x103043c5u, 0x103043c0u); LOADALL;
  /* 103043c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 103043c6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103043c7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 103043c8 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103043c9 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_103043cc(CPU *c) {
  NATIVE_HOOK(0x103043ccu) REGS; LOADALL;
L_103043cc:;
  /* 103043cc push 0x10309464 */ { u32 v_ = 0x10309464u; esp -= 4; M32(esp) = v_; }
  /* 103043d1 call dword ptr [0x10309050] */ { const u32 m_ = (u32)(0x10309050u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103043d7u; SAVEALL; call_ind(c, t_); RETCHK(0x103043d7u, 0x103043d1u); LOADALL; }
  /* 103043d7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103043d9 je 0x103043f1 */ if (ZF_) goto L_103043f1;
  /* 103043db push 0x10309454 */ { u32 v_ = 0x10309454u; esp -= 4; M32(esp) = v_; }
  /* 103043e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103043e1 call dword ptr [0x1030904c] */ { const u32 m_ = (u32)(0x1030904cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103043e7u; SAVEALL; call_ind(c, t_); RETCHK(0x103043e7u, 0x103043e1u); LOADALL; }
  /* 103043e7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103043e9 je 0x103043f1 */ if (ZF_) goto L_103043f1;
  /* 103043eb push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103043ef call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x103043f1u; SAVEALL; call_ind(c, t_); RETCHK(0x103043f1u, 0x103043efu); LOADALL; }
L_103043f1:;
  /* 103043f1 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103043f5 call dword ptr [0x10309004] */ { const u32 m_ = (u32)(0x10309004u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103043fbu; SAVEALL; call_ind(c, t_); RETCHK(0x103043fbu, 0x103043f5u); LOADALL; }
}

void F_103043fc(CPU *c) {
  NATIVE_HOOK(0x103043fcu) REGS; LOADALL;
L_103043fc:;
  /* 103043fc push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 103043fe call 0x103052af */ esp -= 4; M32(esp) = 0x10304403u; SAVEALL; F_103052af(c); ABI_CHECK(0x103052afu, 0x103043feu); RETCHK(0x10304403u, 0x103043feu); LOADALL;
  /* 10304403 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304404 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304405(CPU *c) {
  NATIVE_HOOK(0x10304405u) REGS; LOADALL;
L_10304405:;
  /* 10304405 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10304407 call 0x103051fa */ esp -= 4; M32(esp) = 0x1030440cu; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x10304407u); RETCHK(0x1030440cu, 0x10304407u); LOADALL;
  /* 1030440c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030440d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030440e(CPU *c) {
  NATIVE_HOOK(0x1030440eu) REGS; LOADALL;
L_1030440e:;
  /* 1030440e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030440f mov esi, eax */ { esi = (u32)(eax); }
  /* 10304411 jmp 0x1030441e */ goto L_1030441e;
L_10304413:;
  /* 10304413 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10304415 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304417 je 0x1030441b */ if (ZF_) goto L_1030441b;
  /* 10304419 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1030441bu; SAVEALL; call_ind(c, t_); RETCHK(0x1030441bu, 0x10304419u); LOADALL; }
L_1030441b:;
  /* 1030441b add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_1030441e:;
  /* 1030441e cmp esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304422 jb 0x10304413 */ if (CF_) goto L_10304413;
  /* 10304424 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10304425 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304426(CPU *c) {
  NATIVE_HOOK(0x10304426u) REGS; LOADALL;
L_10304426:;
  /* 10304426 mov eax, dword ptr [0x1030c170] */ { const u32 m_ = (u32)(0x1030c170u); eax = (u32)(M32(m_)); }
  /* 1030442b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030442d je 0x10304436 */ if (ZF_) goto L_10304436;
  /* 1030442f push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304433 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10304435u; SAVEALL; call_ind(c, t_); RETCHK(0x10304435u, 0x10304433u); LOADALL; }
  /* 10304435 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10304436:;
  /* 10304436 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10304437 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10304438 mov ecx, 0x1030b00c */ { ecx = (u32)(0x1030b00cu); }
  /* 1030443d mov edi, 0x1030b01c */ { edi = (u32)(0x1030b01cu); }
  /* 10304442 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10304444 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304446 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10304448 jae 0x10304461 */ if (!CF_) goto L_10304461;
L_1030444a:;
  /* 1030444a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030444c jne 0x1030448d */ if (!ZF_) goto L_1030448d;
  /* 1030444e mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 10304450 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304452 je 0x10304456 */ if (ZF_) goto L_10304456;
  /* 10304454 call ecx */ { u32 t_ = ecx; esp -= 4; M32(esp) = 0x10304456u; SAVEALL; call_ind(c, t_); RETCHK(0x10304456u, 0x10304454u); LOADALL; }
L_10304456:;
  /* 10304456 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10304459 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030445b jb 0x1030444a */ if (CF_) goto L_1030444a;
  /* 1030445d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030445f jne 0x1030448d */ if (!ZF_) goto L_1030448d;
L_10304461:;
  /* 10304461 push 0x10304cb3 */ { u32 v_ = 0x10304cb3u; esp -= 4; M32(esp) = v_; }
  /* 10304466 call 0x10306f03 */ esp -= 4; M32(esp) = 0x1030446bu; SAVEALL; F_10306f03(c); ABI_CHECK(0x10306f03u, 0x10304466u); RETCHK(0x1030446bu, 0x10304466u); LOADALL;
  /* 1030446b mov esi, 0x1030b000 */ { esi = (u32)(0x1030b000u); }
  /* 10304470 mov eax, esi */ { eax = (u32)(esi); }
  /* 10304472 mov edi, 0x1030b008 */ { edi = (u32)(0x1030b008u); }
  /* 10304477 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304479 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030447a jae 0x1030448b */ if (!CF_) goto L_1030448b;
L_1030447c:;
  /* 1030447c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 1030447e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304480 je 0x10304484 */ if (ZF_) goto L_10304484;
  /* 10304482 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10304484u; SAVEALL; call_ind(c, t_); RETCHK(0x10304484u, 0x10304482u); LOADALL; }
L_10304484:;
  /* 10304484 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10304487 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304489 jb 0x1030447c */ if (CF_) goto L_1030447c;
L_1030448b:;
  /* 1030448b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_1030448d:;
  /* 1030448d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030448e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030448f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304490(CPU *c) {
  NATIVE_HOOK(0x10304490u) REGS; LOADALL;
L_10304490:;
  /* 10304490 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10304492 push 0x10309470 */ { u32 v_ = 0x10309470u; esp -= 4; M32(esp) = v_; }
  /* 10304497 call 0x10303548 */ esp -= 4; M32(esp) = 0x1030449cu; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x10304497u); RETCHK(0x1030449cu, 0x10304497u); LOADALL;
  /* 1030449c push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 1030449e call 0x103052af */ esp -= 4; M32(esp) = 0x103044a3u; SAVEALL; F_103052af(c); ABI_CHECK(0x103052afu, 0x1030449eu); RETCHK(0x103044a3u, 0x1030449eu); LOADALL;
  /* 103044a3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103044a4 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 103044a6 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 103044a9 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 103044ab inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103044ac cmp dword ptr [0x1030b990], esi */ { const u32 m_ = (u32)(0x1030b990u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103044b2 jne 0x103044c4 */ if (!ZF_) goto L_103044c4;
  /* 103044b4 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103044b7 call dword ptr [0x10309058] */ { const u32 m_ = (u32)(0x10309058u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103044bdu; SAVEALL; call_ind(c, t_); RETCHK(0x103044bdu, 0x103044b7u); LOADALL; }
  /* 103044bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103044be call dword ptr [0x10309054] */ { const u32 m_ = (u32)(0x10309054u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103044c4u; SAVEALL; call_ind(c, t_); RETCHK(0x103044c4u, 0x103044beu); LOADALL; }
L_103044c4:;
  /* 103044c4 mov dword ptr [0x1030b98c], esi */ { const u32 m_ = (u32)(0x1030b98cu); M32(m_) = (u32)(esi); }
  /* 103044ca mov al, byte ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103044cd mov byte ptr [0x1030b988], al */ { const u32 m_ = (u32)(0x1030b988u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103044d2 cmp dword ptr [ebp + 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103044d5 jne 0x1030450e */ if (!ZF_) goto L_1030450e;
  /* 103044d7 cmp dword ptr [0x1030c168], edi */ { const u32 m_ = (u32)(0x1030c168u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103044dd je 0x103044fe */ if (ZF_) goto L_103044fe;
L_103044df:;
  /* 103044df mov eax, dword ptr [0x1030c164] */ { const u32 m_ = (u32)(0x1030c164u); eax = (u32)(M32(m_)); }
  /* 103044e4 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103044e7 mov dword ptr [0x1030c164], eax */ { const u32 m_ = (u32)(0x1030c164u); M32(m_) = (u32)(eax); }
  /* 103044ec cmp eax, dword ptr [0x1030c168] */ { const u32 m_ = (u32)(0x1030c168u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103044f2 jb 0x103044fe */ if (CF_) goto L_103044fe;
  /* 103044f4 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 103044f6 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103044f8 je 0x103044df */ if (ZF_) goto L_103044df;
  /* 103044fa call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x103044fcu; SAVEALL; call_ind(c, t_); RETCHK(0x103044fcu, 0x103044fau); LOADALL; }
  /* 103044fc jmp 0x103044df */ goto L_103044df;
L_103044fe:;
  /* 103044fe push 0x1030b024 */ { u32 v_ = 0x1030b024u; esp -= 4; M32(esp) = v_; }
  /* 10304503 mov eax, 0x1030b020 */ { eax = (u32)(0x1030b020u); }
  /* 10304508 call 0x1030440e */ esp -= 4; M32(esp) = 0x1030450du; SAVEALL; F_1030440e(c); ABI_CHECK(0x1030440eu, 0x10304508u); RETCHK(0x1030450du, 0x10304508u); LOADALL;
  /* 1030450d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1030450e:;
  /* 1030450e push 0x1030b030 */ { u32 v_ = 0x1030b030u; esp -= 4; M32(esp) = v_; }
  /* 10304513 mov eax, 0x1030b028 */ { eax = (u32)(0x1030b028u); }
  /* 10304518 call 0x1030440e */ esp -= 4; M32(esp) = 0x1030451du; SAVEALL; F_1030440e(c); ABI_CHECK(0x1030440eu, 0x10304518u); RETCHK(0x1030451du, 0x10304518u); LOADALL;
  /* 1030451d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030451e or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304522 call 0x1030453f */ esp -= 4; M32(esp) = 0x10304527u; SAVEALL; F_1030453f(c); ABI_CHECK(0x1030453fu, 0x10304522u); RETCHK(0x10304527u, 0x10304522u); LOADALL;
  /* 10304527 cmp dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030452a jne 0x1030454d */ if (!ZF_) goto L_1030454d;
  /* 1030452c mov dword ptr [0x1030b990], esi */ { const u32 m_ = (u32)(0x1030b990u); M32(m_) = (u32)(esi); }
  /* 10304532 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304535 call 0x103043cc */ esp -= 4; M32(esp) = 0x1030453au; SAVEALL; F_103043cc(c); ABI_CHECK(0x103043ccu, 0x10304535u); RETCHK(0x1030453au, 0x10304535u); LOADALL;
  /* 1030453a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1030453c xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1030453e inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1030453f cmp dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304542 je 0x1030454c */ if (ZF_) goto L_1030454c;
  /* 10304544 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10304546 call 0x103051fa */ esp -= 4; M32(esp) = 0x1030454bu; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x10304546u); RETCHK(0x1030454bu, 0x10304546u); LOADALL;
  /* 1030454b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1030454c:;
  /* 1030454c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1030454d:;
  /* 1030454d call 0x10303583 */ esp -= 4; M32(esp) = 0x10304552u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x1030454du); RETCHK(0x10304552u, 0x1030454du); LOADALL;
  /* 10304552 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030453a(CPU *c) {
  NATIVE_HOOK(0x1030453au) REGS; LOADALL;
L_1030453a:;
  /* 1030453a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1030453c xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1030453e inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1030453f cmp dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304542 je 0x1030454c */ if (ZF_) goto L_1030454c;
  /* 10304544 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10304546 call 0x103051fa */ esp -= 4; M32(esp) = 0x1030454bu; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x10304546u); RETCHK(0x1030454bu, 0x10304546u); LOADALL;
  /* 1030454b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1030454c:;
  /* 1030454c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030453f(CPU *c) {
  NATIVE_HOOK(0x1030453fu) REGS; LOADALL;
L_1030453f:;
  /* 1030453f cmp dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304542 je 0x1030454c */ if (ZF_) goto L_1030454c;
  /* 10304544 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10304546 call 0x103051fa */ esp -= 4; M32(esp) = 0x1030454bu; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x10304546u); RETCHK(0x1030454bu, 0x10304546u); LOADALL;
  /* 1030454b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1030454c:;
  /* 1030454c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304553(CPU *c) {
  NATIVE_HOOK(0x10304553u) REGS; LOADALL;
L_10304553:;
  /* 10304553 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10304555 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10304557 push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030455b call 0x10304490 */ esp -= 4; M32(esp) = 0x10304560u; SAVEALL; F_10304490(c); ABI_CHECK(0x10304490u, 0x1030455bu); RETCHK(0x10304560u, 0x1030455bu); LOADALL;
  /* 10304560 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10304563 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304564(CPU *c) {
  NATIVE_HOOK(0x10304564u) REGS; LOADALL;
L_10304564:;
  /* 10304564 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10304566 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10304568 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1030456a call 0x10304490 */ esp -= 4; M32(esp) = 0x1030456fu; SAVEALL; F_10304490(c); ABI_CHECK(0x10304490u, 0x1030456au); RETCHK(0x1030456fu, 0x1030456au); LOADALL;
  /* 1030456f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10304572 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304573(CPU *c) {
  NATIVE_HOOK(0x10304573u) REGS; LOADALL;
L_10304573:;
  /* 10304573 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10304575 push 0x10309480 */ { u32 v_ = 0x10309480u; esp -= 4; M32(esp) = v_; }
  /* 1030457a call 0x10303548 */ esp -= 4; M32(esp) = 0x1030457fu; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x1030457au); RETCHK(0x1030457fu, 0x1030457au); LOADALL;
  /* 1030457f mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10304582 imul esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); s64 p_ = (s64)(s32)esi * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10304586 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 10304589 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030458b jne 0x1030458e */ if (!ZF_) goto L_1030458e;
  /* 1030458d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1030458e:;
  /* 1030458e xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10304590 mov dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edi); }
  /* 10304593 cmp esi, -0x20 */ { u32 a_ = esi, b_ = 0xffffffe0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304596 ja 0x103045fd */ if (!(CF_|ZF_)) goto L_103045fd;
  /* 10304598 cmp dword ptr [0x1030c040], 3 */ { const u32 m_ = (u32)(0x1030c040u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030459f jne 0x103045e8 */ if (!ZF_) goto L_103045e8;
  /* 103045a1 add esi, 0xf */ { u32 a_ = esi, b_ = 0xfu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103045a4 and esi, 0xfffffff0 */ { u32 a_ = esi, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 103045a7 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 103045aa mov ebx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ebx = (u32)(M32(m_)); }
  /* 103045ad cmp ebx, dword ptr [0x1030c02c] */ { const u32 m_ = (u32)(0x1030c02cu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103045b3 ja 0x103045e8 */ if (!(CF_|ZF_)) goto L_103045e8;
  /* 103045b5 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 103045b7 call 0x103052af */ esp -= 4; M32(esp) = 0x103045bcu; SAVEALL; F_103052af(c); ABI_CHECK(0x103052afu, 0x103045b7u); RETCHK(0x103045bcu, 0x103045b7u); LOADALL;
  /* 103045bc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103045bd and dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103045c0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103045c1 call 0x10305b07 */ esp -= 4; M32(esp) = 0x103045c6u; SAVEALL; F_10305b07(c); ABI_CHECK(0x10305b07u, 0x103045c1u); RETCHK(0x103045c6u, 0x103045c1u); LOADALL;
  /* 103045c6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103045c7 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 103045ca or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103045ce call 0x1030461d */ esp -= 4; M32(esp) = 0x103045d3u; SAVEALL; F_1030461d(c); ABI_CHECK(0x1030461du, 0x103045ceu); RETCHK(0x103045d3u, 0x103045ceu); LOADALL;
  /* 103045d3 mov edi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edi = (u32)(M32(m_)); }
  /* 103045d6 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103045d8 je 0x103045ec */ if (ZF_) goto L_103045ec;
  /* 103045da push dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103045dd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 103045df push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103045e0 call 0x10306f20 */ esp -= 4; M32(esp) = 0x103045e5u; SAVEALL; F_10306f20(c); ABI_CHECK(0x10306f20u, 0x103045e0u); RETCHK(0x103045e5u, 0x103045e0u); LOADALL;
  /* 103045e5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_103045e8:;
  /* 103045e8 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103045ea jne 0x10304626 */ if (!ZF_) goto L_10304626;
L_103045ec:;
  /* 103045ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103045ed push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 103045ef push dword ptr [0x1030c03c] */ { const u32 m_ = (u32)(0x1030c03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103045f5 call dword ptr [0x10309030] */ { const u32 m_ = (u32)(0x10309030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103045fbu; SAVEALL; call_ind(c, t_); RETCHK(0x103045fbu, 0x103045f5u); LOADALL; }
  /* 103045fb mov edi, eax */ { edi = (u32)(eax); }
L_103045fd:;
  /* 103045fd test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103045ff jne 0x10304626 */ if (!ZF_) goto L_10304626;
  /* 10304601 cmp dword ptr [0x1030bc60], edi */ { const u32 m_ = (u32)(0x1030bc60u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304607 je 0x10304626 */ if (ZF_) goto L_10304626;
  /* 10304609 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030460a call 0x103062b4 */ esp -= 4; M32(esp) = 0x1030460fu; SAVEALL; F_103062b4(c); ABI_CHECK(0x103062b4u, 0x1030460au); RETCHK(0x1030460fu, 0x1030460au); LOADALL;
  /* 1030460f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304610 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304612 jne 0x1030458e */ if (!ZF_) goto L_1030458e;
  /* 10304618 jmp 0x10304628 */ goto L_10304628;
L_10304626:;
  /* 10304626 mov eax, edi */ { eax = (u32)(edi); }
L_10304628:;
  /* 10304628 call 0x10303583 */ esp -= 4; M32(esp) = 0x1030462du; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10304628u); RETCHK(0x1030462du, 0x10304628u); LOADALL;
  /* 1030462d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030461a(CPU *c) {
  NATIVE_HOOK(0x1030461au) REGS; LOADALL;
L_1030461a:;
  /* 1030461a mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 1030461d push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 1030461f call 0x103051fa */ esp -= 4; M32(esp) = 0x10304624u; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x1030461fu); RETCHK(0x10304624u, 0x1030461fu); LOADALL;
  /* 10304624 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304625 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030461d(CPU *c) {
  NATIVE_HOOK(0x1030461du) REGS; LOADALL;
L_1030461d:;
  /* 1030461d push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 1030461f call 0x103051fa */ esp -= 4; M32(esp) = 0x10304624u; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x1030461fu); RETCHK(0x10304624u, 0x1030461fu); LOADALL;
  /* 10304624 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304625 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030462e(CPU *c) {
  NATIVE_HOOK(0x1030462eu) REGS; LOADALL;
L_1030462e:;
  /* 1030462e sub esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10304631 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304632 mov ebx, 0x480 */ { ebx = (u32)(0x480u); }
  /* 10304637 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304638 call 0x10303744 */ esp -= 4; M32(esp) = 0x1030463du; SAVEALL; F_10303744(c); ABI_CHECK(0x10303744u, 0x10304638u); RETCHK(0x1030463du, 0x10304638u); LOADALL;
  /* 1030463d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030463f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304640 jne 0x1030464a */ if (!ZF_) goto L_1030464a;
  /* 10304642 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10304645 jmp 0x10304827 */ goto L_10304827;
L_1030464a:;
  /* 1030464a mov dword ptr [0x1030c060], eax */ { const u32 m_ = (u32)(0x1030c060u); M32(m_) = (u32)(eax); }
  /* 1030464f mov dword ptr [0x1030c044], 0x20 */ { const u32 m_ = (u32)(0x1030c044u); M32(m_) = (u32)(0x20u); }
  /* 10304659 lea ecx, [eax + 0x480] */ ecx = (u32)((u32)(eax + 0x480u));
  /* 1030465f jmp 0x1030467f */ goto L_1030467f;
L_10304661:;
  /* 10304661 or dword ptr [eax], 0xffffffff */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304664 and dword ptr [eax + 8], 0 */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304668 mov byte ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 1030466c mov byte ptr [eax + 5], 0xa */ { const u32 m_ = (u32)(eax + 0x5u); M8(m_) = (u8)(0xau); }
  /* 10304670 mov ecx, dword ptr [0x1030c060] */ { const u32 m_ = (u32)(0x1030c060u); ecx = (u32)(M32(m_)); }
  /* 10304676 add eax, 0x24 */ { u32 a_ = eax, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10304679 add ecx, 0x480 */ { u32 a_ = ecx, b_ = 0x480u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_1030467f:;
  /* 1030467f cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304681 jb 0x10304661 */ if (CF_) goto L_10304661;
  /* 10304683 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10304684 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10304685 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10304686 lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 1030468a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030468b call dword ptr [0x10309068] */ { const u32 m_ = (u32)(0x10309068u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10304691u; SAVEALL; call_ind(c, t_); RETCHK(0x10304691u, 0x1030468bu); LOADALL; }
  /* 10304691 cmp word ptr [esp + 0x46], 0 */ { const u32 m_ = (u32)(esp + 0x46u); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10304697 je 0x10304786 */ if (ZF_) goto L_10304786;
  /* 1030469d mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 103046a1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103046a3 je 0x10304786 */ if (ZF_) goto L_10304786;
  /* 103046a9 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 103046ab lea ebp, [eax + 4] */ ebp = (u32)((u32)(eax + 0x4u));
  /* 103046ae lea eax, [edi + ebp] */ eax = (u32)((u32)(edi + ebp));
  /* 103046b1 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 103046b5 mov eax, 0x800 */ { eax = (u32)(0x800u); }
  /* 103046ba cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103046bc jl 0x103046c0 */ if (LT_) goto L_103046c0;
  /* 103046be mov edi, eax */ { edi = (u32)(eax); }
L_103046c0:;
  /* 103046c0 cmp dword ptr [0x1030c044], edi */ { const u32 m_ = (u32)(0x1030c044u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103046c6 jge 0x10304716 */ if (!LT_) goto L_10304716;
  /* 103046c8 mov esi, 0x1030c064 */ { esi = (u32)(0x1030c064u); }
L_103046cd:;
  /* 103046cd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103046ce call 0x10303744 */ esp -= 4; M32(esp) = 0x103046d3u; SAVEALL; F_10303744(c); ABI_CHECK(0x10303744u, 0x103046ceu); RETCHK(0x103046d3u, 0x103046ceu); LOADALL;
  /* 103046d3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103046d5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103046d6 je 0x10304710 */ if (ZF_) goto L_10304710;
  /* 103046d8 add dword ptr [0x1030c044], 0x20 */ { const u32 m_ = (u32)(0x1030c044u); u32 a_ = M32(m_), b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 103046df mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 103046e1 lea ecx, [eax + 0x480] */ ecx = (u32)((u32)(eax + 0x480u));
  /* 103046e7 jmp 0x103046ff */ goto L_103046ff;
L_103046e9:;
  /* 103046e9 or dword ptr [eax], 0xffffffff */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103046ec and dword ptr [eax + 8], 0 */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103046f0 mov byte ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 103046f4 mov byte ptr [eax + 5], 0xa */ { const u32 m_ = (u32)(eax + 0x5u); M8(m_) = (u8)(0xau); }
  /* 103046f8 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 103046fa add eax, 0x24 */ { u32 a_ = eax, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103046fd add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_103046ff:;
  /* 103046ff cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304701 jb 0x103046e9 */ if (CF_) goto L_103046e9;
  /* 10304703 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10304706 cmp dword ptr [0x1030c044], edi */ { const u32 m_ = (u32)(0x1030c044u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030470c jl 0x103046cd */ if (LT_) goto L_103046cd;
  /* 1030470e jmp 0x10304716 */ goto L_10304716;
L_10304710:;
  /* 10304710 mov edi, dword ptr [0x1030c044] */ { const u32 m_ = (u32)(0x1030c044u); edi = (u32)(M32(m_)); }
L_10304716:;
  /* 10304716 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10304718 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030471a jle 0x10304786 */ if ((ZF_|LT_)) goto L_10304786;
L_1030471c:;
  /* 1030471c mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10304720 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10304722 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304725 je 0x1030477b */ if (ZF_) goto L_1030477b;
  /* 10304727 mov cl, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030472a test cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1030472d je 0x1030477b */ if (ZF_) goto L_1030477b;
  /* 1030472f test cl, 8 */ { u32 a_ = (ecx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10304732 jne 0x1030473f */ if (!ZF_) goto L_1030473f;
  /* 10304734 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10304735 call dword ptr [0x10309064] */ { const u32 m_ = (u32)(0x10309064u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030473bu; SAVEALL; call_ind(c, t_); RETCHK(0x1030473bu, 0x10304735u); LOADALL; }
  /* 1030473b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030473d je 0x1030477b */ if (ZF_) goto L_1030477b;
L_1030473f:;
  /* 1030473f mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10304741 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10304743 and eax, 0x1f */ { u32 a_ = eax, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10304746 lea eax, [eax + eax*8] */ eax = (u32)((u32)(eax + eax * 8u));
  /* 10304749 sar ecx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1030474c mov ecx, dword ptr [ecx*4 + 0x1030c060] */ { const u32 m_ = (u32)(ecx * 4u + 0x1030c060u); ecx = (u32)(M32(m_)); }
  /* 10304753 lea esi, [ecx + eax*4] */ esi = (u32)((u32)(ecx + eax * 4u));
  /* 10304756 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 1030475a mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 1030475c mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 1030475e mov al, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10304761 mov byte ptr [esi + 4], al */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10304764 lea eax, [esi + 0xc] */ eax = (u32)((u32)(esi + 0xcu));
  /* 10304767 push 0xfa0 */ { u32 v_ = 0xfa0u; esp -= 4; M32(esp) = v_; }
  /* 1030476c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030476d call 0x10306f90 */ esp -= 4; M32(esp) = 0x10304772u; SAVEALL; F_10306f90(c); ABI_CHECK(0x10306f90u, 0x1030476du); RETCHK(0x10304772u, 0x1030476du); LOADALL;
  /* 10304772 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304774 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304775 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304776 je 0x103047a6 */ if (ZF_) goto L_103047a6;
  /* 10304778 inc dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1030477b:;
  /* 1030477b add dword ptr [esp + 0x10], 4 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304780 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304781 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304782 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304784 jl 0x1030471c */ if (LT_) goto L_1030471c;
L_10304786:;
  /* 10304786 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_10304788:;
  /* 10304788 mov ecx, dword ptr [0x1030c060] */ { const u32 m_ = (u32)(0x1030c060u); ecx = (u32)(M32(m_)); }
  /* 1030478e lea eax, [ebx + ebx*8] */ eax = (u32)((u32)(ebx + ebx * 8u));
  /* 10304791 lea esi, [ecx + eax*4] */ esi = (u32)((u32)(ecx + eax * 4u));
  /* 10304794 cmp dword ptr [esi], -1 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304797 jne 0x10304808 */ if (!ZF_) goto L_10304808;
  /* 10304799 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030479b mov byte ptr [esi + 4], 0x81 */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)(0x81u); }
  /* 1030479f jne 0x103047ab */ if (!ZF_) goto L_103047ab;
  /* 103047a1 push -0xa */ { u32 v_ = 0xfffffff6u; esp -= 4; M32(esp) = v_; }
  /* 103047a3 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 103047a4 jmp 0x103047b5 */ goto L_103047b5;
L_103047a6:;
  /* 103047a6 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103047a9 jmp 0x10304824 */ goto L_10304824;
L_103047ab:;
  /* 103047ab mov eax, ebx */ { eax = (u32)(ebx); }
  /* 103047ad dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 103047ae neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 103047b0 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 103047b2 add eax, -0xb */ { u32 a_ = eax, b_ = 0xfffffff5u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_103047b5:;
  /* 103047b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103047b6 call dword ptr [0x10309060] */ { const u32 m_ = (u32)(0x10309060u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103047bcu; SAVEALL; call_ind(c, t_); RETCHK(0x103047bcu, 0x103047b6u); LOADALL; }
  /* 103047bc mov edi, eax */ { edi = (u32)(eax); }
  /* 103047be cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103047c1 je 0x10304802 */ if (ZF_) goto L_10304802;
  /* 103047c3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103047c4 call dword ptr [0x10309064] */ { const u32 m_ = (u32)(0x10309064u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103047cau; SAVEALL; call_ind(c, t_); RETCHK(0x103047cau, 0x103047c4u); LOADALL; }
  /* 103047ca test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103047cc je 0x10304802 */ if (ZF_) goto L_10304802;
  /* 103047ce and eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103047d3 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103047d6 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 103047d8 jne 0x103047e0 */ if (!ZF_) goto L_103047e0;
  /* 103047da or byte ptr [esi + 4], 0x40 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M8(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 103047de jmp 0x103047e9 */ goto L_103047e9;
L_103047e0:;
  /* 103047e0 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103047e3 jne 0x103047e9 */ if (!ZF_) goto L_103047e9;
  /* 103047e5 or byte ptr [esi + 4], 8 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_103047e9:;
  /* 103047e9 lea eax, [esi + 0xc] */ eax = (u32)((u32)(esi + 0xcu));
  /* 103047ec push 0xfa0 */ { u32 v_ = 0xfa0u; esp -= 4; M32(esp) = v_; }
  /* 103047f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103047f2 call 0x10306f90 */ esp -= 4; M32(esp) = 0x103047f7u; SAVEALL; F_10306f90(c); ABI_CHECK(0x10306f90u, 0x103047f2u); RETCHK(0x103047f7u, 0x103047f2u); LOADALL;
  /* 103047f7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103047f9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103047fa pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103047fb je 0x103047a6 */ if (ZF_) goto L_103047a6;
  /* 103047fd inc dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304800 jmp 0x1030480c */ goto L_1030480c;
L_10304802:;
  /* 10304802 or byte ptr [esi + 4], 0x40 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M8(m_), b_ = 0x40u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10304806 jmp 0x1030480c */ goto L_1030480c;
L_10304808:;
  /* 10304808 or byte ptr [esi + 4], 0x80 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
L_1030480c:;
  /* 1030480c inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1030480d cmp ebx, 3 */ { u32 a_ = ebx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304810 jl 0x10304788 */ if (LT_) goto L_10304788;
  /* 10304816 push dword ptr [0x1030c044] */ { const u32 m_ = (u32)(0x1030c044u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030481c call dword ptr [0x1030905c] */ { const u32 m_ = (u32)(0x1030905cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10304822u; SAVEALL; call_ind(c, t_); RETCHK(0x10304822u, 0x1030481cu); LOADALL; }
  /* 10304822 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10304824:;
  /* 10304824 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10304825 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10304826 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_10304827:;
  /* 10304827 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10304828 add esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1030482b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030482c(CPU *c) {
  NATIVE_HOOK(0x1030482cu) REGS; LOADALL;
L_1030482c:;
  /* 1030482c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030482d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030482e mov esi, 0x1030c060 */ { esi = (u32)(0x1030c060u); }
L_10304833:;
  /* 10304833 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 10304835 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304837 je 0x1030486a */ if (ZF_) goto L_1030486a;
  /* 10304839 lea eax, [edi + 0x480] */ eax = (u32)((u32)(edi + 0x480u));
  /* 1030483f jmp 0x1030485b */ goto L_1030485b;
L_10304841:;
  /* 10304841 cmp dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304845 je 0x10304851 */ if (ZF_) goto L_10304851;
  /* 10304847 lea eax, [edi + 0xc] */ eax = (u32)((u32)(edi + 0xcu));
  /* 1030484a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030484b call dword ptr [0x1030906c] */ { const u32 m_ = (u32)(0x1030906cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10304851u; SAVEALL; call_ind(c, t_); RETCHK(0x10304851u, 0x1030484bu); LOADALL; }
L_10304851:;
  /* 10304851 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10304853 add edi, 0x24 */ { u32 a_ = edi, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10304856 add eax, 0x480 */ { u32 a_ = eax, b_ = 0x480u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_1030485b:;
  /* 1030485b cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030485d jb 0x10304841 */ if (CF_) goto L_10304841;
  /* 1030485f push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304861 call 0x10303326 */ esp -= 4; M32(esp) = 0x10304866u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10304861u); RETCHK(0x10304866u, 0x10304861u); LOADALL;
  /* 10304866 and dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304869 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1030486a:;
  /* 1030486a add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1030486d cmp esi, 0x1030c160 */ { u32 a_ = esi, b_ = 0x1030c160u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304873 jl 0x10304833 */ if (LT_) goto L_10304833;
  /* 10304875 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10304876 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10304877 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304878(CPU *c) {
  NATIVE_HOOK(0x10304878u) REGS; LOADALL;
L_10304878:;
  /* 10304878 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304879 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1030487b cmp dword ptr [0x1030c16c], ebx */ { const u32 m_ = (u32)(0x1030c16cu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304881 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10304882 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10304883 jne 0x1030488a */ if (!ZF_) goto L_1030488a;
  /* 10304885 call 0x10306ded */ esp -= 4; M32(esp) = 0x1030488au; SAVEALL; F_10306ded(c); ABI_CHECK(0x10306dedu, 0x10304885u); RETCHK(0x1030488au, 0x10304885u); LOADALL;
L_1030488a:;
  /* 1030488a mov esi, dword ptr [0x1030b928] */ { const u32 m_ = (u32)(0x1030b928u); esi = (u32)(M32(m_)); }
  /* 10304890 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10304892 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304894 jne 0x103048a8 */ if (!ZF_) goto L_103048a8;
  /* 10304896 jmp 0x103048c8 */ goto L_103048c8;
L_10304898:;
  /* 10304898 cmp al, 0x3d */ { u32 a_ = (eax & 0xffu), b_ = 0x3du; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1030489a je 0x1030489d */ if (ZF_) goto L_1030489d;
  /* 1030489c inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1030489d:;
  /* 1030489d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030489e call 0x10306000 */ esp -= 4; M32(esp) = 0x103048a3u; SAVEALL; F_10306000(c); ABI_CHECK(0x10306000u, 0x1030489eu); RETCHK(0x103048a3u, 0x1030489eu); LOADALL;
  /* 103048a3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103048a4 lea esi, [esi + eax + 1] */ esi = (u32)((u32)(esi + eax + 0x1u));
L_103048a8:;
  /* 103048a8 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103048aa cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 103048ac jne 0x10304898 */ if (!ZF_) goto L_10304898;
  /* 103048ae lea eax, [edi*4 + 4] */ eax = (u32)((u32)(edi * 4u + 0x4u));
  /* 103048b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103048b6 call 0x10303744 */ esp -= 4; M32(esp) = 0x103048bbu; SAVEALL; F_10303744(c); ABI_CHECK(0x10303744u, 0x103048b6u); RETCHK(0x103048bbu, 0x103048b6u); LOADALL;
  /* 103048bb mov edi, eax */ { edi = (u32)(eax); }
  /* 103048bd cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103048bf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103048c0 mov dword ptr [0x1030b970], edi */ { const u32 m_ = (u32)(0x1030b970u); M32(m_) = (u32)(edi); }
  /* 103048c6 jne 0x103048cd */ if (!ZF_) goto L_103048cd;
L_103048c8:;
  /* 103048c8 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103048cb jmp 0x10304925 */ goto L_10304925;
L_103048cd:;
  /* 103048cd mov esi, dword ptr [0x1030b928] */ { const u32 m_ = (u32)(0x1030b928u); esi = (u32)(M32(m_)); }
  /* 103048d3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 103048d4 jmp 0x10304900 */ goto L_10304900;
L_103048d6:;
  /* 103048d6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103048d7 call 0x10306000 */ esp -= 4; M32(esp) = 0x103048dcu; SAVEALL; F_10306000(c); ABI_CHECK(0x10306000u, 0x103048d7u); RETCHK(0x103048dcu, 0x103048d7u); LOADALL;
  /* 103048dc mov ebp, eax */ { ebp = (u32)(eax); }
  /* 103048de inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103048df cmp byte ptr [esi], 0x3d */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x3du; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 103048e2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103048e3 je 0x103048fe */ if (ZF_) goto L_103048fe;
  /* 103048e5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 103048e6 call 0x10303744 */ esp -= 4; M32(esp) = 0x103048ebu; SAVEALL; F_10303744(c); ABI_CHECK(0x10303744u, 0x103048e6u); RETCHK(0x103048ebu, 0x103048e6u); LOADALL;
  /* 103048eb cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103048ed pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103048ee mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 103048f0 je 0x10304929 */ if (ZF_) goto L_10304929;
  /* 103048f2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103048f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103048f4 call 0x10305f00 */ esp -= 4; M32(esp) = 0x103048f9u; SAVEALL; F_10305f00(c); ABI_CHECK(0x10305f00u, 0x103048f4u); RETCHK(0x103048f9u, 0x103048f4u); LOADALL;
  /* 103048f9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103048fa pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103048fb add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_103048fe:;
  /* 103048fe add esi, ebp */ { u32 a_ = esi, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_10304900:;
  /* 10304900 cmp byte ptr [esi], bl */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10304902 jne 0x103048d6 */ if (!ZF_) goto L_103048d6;
  /* 10304904 push dword ptr [0x1030b928] */ { const u32 m_ = (u32)(0x1030b928u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030490a call 0x10303326 */ esp -= 4; M32(esp) = 0x1030490fu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x1030490au); RETCHK(0x1030490fu, 0x1030490au); LOADALL;
  /* 1030490f mov dword ptr [0x1030b928], ebx */ { const u32 m_ = (u32)(0x1030b928u); M32(m_) = (u32)(ebx); }
  /* 10304915 mov dword ptr [edi], ebx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebx); }
  /* 10304917 mov dword ptr [0x1030c160], 1 */ { const u32 m_ = (u32)(0x1030c160u); M32(m_) = (u32)(0x1u); }
  /* 10304921 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10304923:;
  /* 10304923 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304924 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_10304925:;
  /* 10304925 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10304926 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10304927 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10304928 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10304929:;
  /* 10304929 push dword ptr [0x1030b970] */ { const u32 m_ = (u32)(0x1030b970u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030492f call 0x10303326 */ esp -= 4; M32(esp) = 0x10304934u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x1030492fu); RETCHK(0x10304934u, 0x1030492fu); LOADALL;
  /* 10304934 mov dword ptr [0x1030b970], ebx */ { const u32 m_ = (u32)(0x1030b970u); M32(m_) = (u32)(ebx); }
  /* 1030493a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030493d jmp 0x10304923 */ goto L_10304923;
}

void F_1030493f(CPU *c) {
  NATIVE_HOOK(0x1030493fu) REGS; LOADALL;
L_1030493f:;
  /* 1030493f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10304940 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10304942 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10304943 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304944 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10304947 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10304949 cmp dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030494c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030494d mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 1030494f mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10304951 mov dword ptr [ebx], 1 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x1u); }
  /* 10304957 je 0x10304962 */ if (ZF_) goto L_10304962;
  /* 10304959 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1030495c add dword ptr [ebp + 8], 4 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304960 mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
L_10304962:;
  /* 10304962 cmp byte ptr [eax], 0x22 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x22u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10304965 jne 0x10304975 */ if (!ZF_) goto L_10304975;
  /* 10304967 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10304969 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030496b sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 1030496e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1030496f mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10304971 mov cl, 0x22 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x22u) & 0xffu); }
  /* 10304973 jmp 0x103049a2 */ goto L_103049a2;
L_10304975:;
  /* 10304975 inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304977 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304979 je 0x10304980 */ if (ZF_) goto L_10304980;
  /* 1030497b mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030497d mov byte ptr [edi], cl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 1030497f inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10304980:;
  /* 10304980 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10304982 movzx ebx, cl */ { ebx = (u32)((ecx & 0xffu)); }
  /* 10304985 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304986 test byte ptr [ebx + 0x1030be01], 4 */ { const u32 m_ = (u32)(ebx + 0x1030be01u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1030498d je 0x1030499b */ if (ZF_) goto L_1030499b;
  /* 1030498f inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304991 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304993 je 0x1030499a */ if (ZF_) goto L_1030499a;
  /* 10304995 mov bl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10304997 mov byte ptr [edi], bl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10304999 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1030499a:;
  /* 1030499a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1030499b:;
  /* 1030499b test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1030499d mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 103049a0 je 0x103049d4 */ if (ZF_) goto L_103049d4;
L_103049a2:;
  /* 103049a2 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103049a4 jne 0x10304962 */ if (!ZF_) goto L_10304962;
  /* 103049a6 cmp cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 103049a9 je 0x103049b0 */ if (ZF_) goto L_103049b0;
  /* 103049ab cmp cl, 9 */ { u32 a_ = (ecx & 0xffu), b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 103049ae jne 0x10304962 */ if (!ZF_) goto L_10304962;
L_103049b0:;
  /* 103049b0 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103049b2 je 0x103049b8 */ if (ZF_) goto L_103049b8;
  /* 103049b4 mov byte ptr [edi - 1], 0 */ { const u32 m_ = (u32)(edi + 0xffffffffu); M8(m_) = (u8)(0x0u); }
L_103049b8:;
  /* 103049b8 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_103049bc:;
  /* 103049bc cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 103049bf je 0x10304a9b */ if (ZF_) goto L_10304a9b;
L_103049c5:;
  /* 103049c5 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103049c7 cmp cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 103049ca je 0x103049d1 */ if (ZF_) goto L_103049d1;
  /* 103049cc cmp cl, 9 */ { u32 a_ = (ecx & 0xffu), b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 103049cf jne 0x103049d7 */ if (!ZF_) goto L_103049d7;
L_103049d1:;
  /* 103049d1 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103049d2 jmp 0x103049c5 */ goto L_103049c5;
L_103049d4:;
  /* 103049d4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 103049d5 jmp 0x103049b8 */ goto L_103049b8;
L_103049d7:;
  /* 103049d7 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 103049da je 0x10304a9b */ if (ZF_) goto L_10304a9b;
  /* 103049e0 cmp dword ptr [ebp + 8], 0 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103049e4 je 0x103049ef */ if (ZF_) goto L_103049ef;
  /* 103049e6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 103049e9 add dword ptr [ebp + 8], 4 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 103049ed mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
L_103049ef:;
  /* 103049ef inc dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_103049f1:;
  /* 103049f1 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 103049f3 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103049f4 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 103049f6 jmp 0x103049fa */ goto L_103049fa;
L_103049f8:;
  /* 103049f8 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103049f9 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_103049fa:;
  /* 103049fa cmp byte ptr [eax], 0x5c */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x5cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 103049fd je 0x103049f8 */ if (ZF_) goto L_103049f8;
  /* 103049ff cmp byte ptr [eax], 0x22 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x22u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10304a02 jne 0x10304a2a */ if (!ZF_) goto L_10304a2a;
  /* 10304a04 test dl, 1 */ { u32 a_ = (edx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10304a07 jne 0x10304a28 */ if (!ZF_) goto L_10304a28;
  /* 10304a09 cmp dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304a0d je 0x10304a1b */ if (ZF_) goto L_10304a1b;
  /* 10304a0f lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 10304a12 cmp byte ptr [ecx], 0x22 */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = 0x22u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10304a15 jne 0x10304a1b */ if (!ZF_) goto L_10304a1b;
  /* 10304a17 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10304a19 jmp 0x10304a1d */ goto L_10304a1d;
L_10304a1b:;
  /* 10304a1b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_10304a1d:;
  /* 10304a1d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10304a1f cmp dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304a22 sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 10304a25 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
L_10304a28:;
  /* 10304a28 shr edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
L_10304a2a:;
  /* 10304a2a test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304a2c je 0x10304a3b */ if (ZF_) goto L_10304a3b;
L_10304a2e:;
  /* 10304a2e test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304a30 je 0x10304a36 */ if (ZF_) goto L_10304a36;
  /* 10304a32 mov byte ptr [edi], 0x5c */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)(0x5cu); }
  /* 10304a35 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10304a36:;
  /* 10304a36 inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304a38 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10304a39 jne 0x10304a2e */ if (!ZF_) goto L_10304a2e;
L_10304a3b:;
  /* 10304a3b mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10304a3d test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10304a3f je 0x10304a89 */ if (ZF_) goto L_10304a89;
  /* 10304a41 cmp dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304a45 jne 0x10304a51 */ if (!ZF_) goto L_10304a51;
  /* 10304a47 cmp cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10304a4a je 0x10304a89 */ if (ZF_) goto L_10304a89;
  /* 10304a4c cmp cl, 9 */ { u32 a_ = (ecx & 0xffu), b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10304a4f je 0x10304a89 */ if (ZF_) goto L_10304a89;
L_10304a51:;
  /* 10304a51 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304a53 je 0x10304a83 */ if (ZF_) goto L_10304a83;
  /* 10304a55 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304a57 je 0x10304a72 */ if (ZF_) goto L_10304a72;
  /* 10304a59 movzx edx, cl */ { edx = (u32)((ecx & 0xffu)); }
  /* 10304a5c test byte ptr [edx + 0x1030be01], 4 */ { const u32 m_ = (u32)(edx + 0x1030be01u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10304a63 je 0x10304a6b */ if (ZF_) goto L_10304a6b;
  /* 10304a65 mov byte ptr [edi], cl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10304a67 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304a68 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304a69 inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10304a6b:;
  /* 10304a6b mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10304a6d mov byte ptr [edi], cl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10304a6f inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304a70 jmp 0x10304a81 */ goto L_10304a81;
L_10304a72:;
  /* 10304a72 movzx ecx, cl */ { ecx = (u32)((ecx & 0xffu)); }
  /* 10304a75 test byte ptr [ecx + 0x1030be01], 4 */ { const u32 m_ = (u32)(ecx + 0x1030be01u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10304a7c je 0x10304a81 */ if (ZF_) goto L_10304a81;
  /* 10304a7e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304a7f inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10304a81:;
  /* 10304a81 inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10304a83:;
  /* 10304a83 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304a84 jmp 0x103049f1 */ goto L_103049f1;
L_10304a89:;
  /* 10304a89 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304a8b je 0x10304a91 */ if (ZF_) goto L_10304a91;
  /* 10304a8d mov byte ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)(0x0u); }
  /* 10304a90 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10304a91:;
  /* 10304a91 inc dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304a93 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10304a96 jmp 0x103049bc */ goto L_103049bc;
L_10304a9b:;
  /* 10304a9b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10304a9e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304aa0 je 0x10304aa5 */ if (ZF_) goto L_10304aa5;
  /* 10304aa2 and dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10304aa5:;
  /* 10304aa5 inc dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304aa7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10304aa8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10304aa9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10304aaa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304aab(CPU *c) {
  NATIVE_HOOK(0x10304aabu) REGS; LOADALL;
L_10304aab:;
  /* 10304aab push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10304aac mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10304aae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10304aaf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10304ab0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304ab1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10304ab2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10304ab3 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10304ab5 cmp dword ptr [0x1030c16c], edi */ { const u32 m_ = (u32)(0x1030c16cu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304abb jne 0x10304ac2 */ if (!ZF_) goto L_10304ac2;
  /* 10304abd call 0x10306ded */ esp -= 4; M32(esp) = 0x10304ac2u; SAVEALL; F_10306ded(c); ABI_CHECK(0x10306dedu, 0x10304abdu); RETCHK(0x10304ac2u, 0x10304abdu); LOADALL;
L_10304ac2:;
  /* 10304ac2 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 10304ac7 mov esi, 0x1030b998 */ { esi = (u32)(0x1030b998u); }
  /* 10304acc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10304acd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10304ace mov byte ptr [0x1030ba9c], 0 */ { const u32 m_ = (u32)(0x1030ba9cu); M8(m_) = (u8)(0x0u); }
  /* 10304ad5 call dword ptr [0x1030902c] */ { const u32 m_ = (u32)(0x1030902cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10304adbu; SAVEALL; call_ind(c, t_); RETCHK(0x10304adbu, 0x10304ad5u); LOADALL; }
  /* 10304adb mov eax, dword ptr [0x1030c174] */ { const u32 m_ = (u32)(0x1030c174u); eax = (u32)(M32(m_)); }
  /* 10304ae0 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304ae2 mov dword ptr [0x1030b980], esi */ { const u32 m_ = (u32)(0x1030b980u); M32(m_) = (u32)(esi); }
  /* 10304ae8 je 0x10304af1 */ if (ZF_) goto L_10304af1;
  /* 10304aea cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10304aed mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10304aef jne 0x10304af3 */ if (!ZF_) goto L_10304af3;
L_10304af1:;
  /* 10304af1 mov ebx, esi */ { ebx = (u32)(esi); }
L_10304af3:;
  /* 10304af3 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10304af6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10304af7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10304af8 lea esi, [ebp - 8] */ esi = (u32)((u32)(ebp + 0xfffffff8u));
  /* 10304afb xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10304afd mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10304aff call 0x1030493f */ esp -= 4; M32(esp) = 0x10304b04u; SAVEALL; F_1030493f(c); ABI_CHECK(0x1030493fu, 0x10304affu); RETCHK(0x10304b04u, 0x10304affu); LOADALL;
  /* 10304b04 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 10304b07 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 10304b0a shl esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10304b0d add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10304b0f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10304b10 call 0x10303744 */ esp -= 4; M32(esp) = 0x10304b15u; SAVEALL; F_10303744(c); ABI_CHECK(0x10303744u, 0x10304b10u); RETCHK(0x10304b15u, 0x10304b10u); LOADALL;
  /* 10304b15 mov edi, eax */ { edi = (u32)(eax); }
  /* 10304b17 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10304b1a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304b1c jne 0x10304b23 */ if (!ZF_) goto L_10304b23;
  /* 10304b1e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10304b21 jmp 0x10304b48 */ goto L_10304b48;
L_10304b23:;
  /* 10304b23 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10304b26 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10304b27 lea ecx, [esi + edi] */ ecx = (u32)((u32)(esi + edi));
  /* 10304b2a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10304b2b lea esi, [ebp - 8] */ esi = (u32)((u32)(ebp + 0xfffffff8u));
  /* 10304b2e mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10304b30 call 0x1030493f */ esp -= 4; M32(esp) = 0x10304b35u; SAVEALL; F_1030493f(c); ABI_CHECK(0x1030493fu, 0x10304b30u); RETCHK(0x10304b35u, 0x10304b30u); LOADALL;
  /* 10304b35 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10304b38 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10304b39 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304b3a mov dword ptr [0x1030b964], eax */ { const u32 m_ = (u32)(0x1030b964u); M32(m_) = (u32)(eax); }
  /* 10304b3f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304b40 mov dword ptr [0x1030b968], edi */ { const u32 m_ = (u32)(0x1030b968u); M32(m_) = (u32)(edi); }
  /* 10304b46 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10304b48:;
  /* 10304b48 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10304b49 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10304b4a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10304b4b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10304b4c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304b4d(CPU *c) {
  NATIVE_HOOK(0x10304b4du) REGS; LOADALL;
L_10304b4d:;
  /* 10304b4d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10304b4e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10304b4f mov eax, dword ptr [0x1030baa0] */ { const u32 m_ = (u32)(0x1030baa0u); eax = (u32)(M32(m_)); }
  /* 10304b54 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304b55 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10304b56 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10304b57 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10304b58 mov edi, dword ptr [0x10309080] */ { const u32 m_ = (u32)(0x10309080u); edi = (u32)(M32(m_)); }
  /* 10304b5e xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10304b60 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10304b62 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304b64 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 10304b66 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10304b67 jne 0x10304b96 */ if (!ZF_) goto L_10304b96;
  /* 10304b69 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x10304b6bu; SAVEALL; call_ind(c, t_); RETCHK(0x10304b6bu, 0x10304b69u); LOADALL; }
  /* 10304b6b mov esi, eax */ { esi = (u32)(eax); }
  /* 10304b6d cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304b6f je 0x10304b7d */ if (ZF_) goto L_10304b7d;
  /* 10304b71 mov dword ptr [0x1030baa0], 1 */ { const u32 m_ = (u32)(0x1030baa0u); M32(m_) = (u32)(0x1u); }
  /* 10304b7b jmp 0x10304b9b */ goto L_10304b9b;
L_10304b7d:;
  /* 10304b7d call dword ptr [0x1030903c] */ { const u32 m_ = (u32)(0x1030903cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10304b83u; SAVEALL; call_ind(c, t_); RETCHK(0x10304b83u, 0x10304b7du); LOADALL; }
  /* 10304b83 cmp eax, 0x78 */ { u32 a_ = eax, b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304b86 jne 0x10304b91 */ if (!ZF_) goto L_10304b91;
  /* 10304b88 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 10304b8a mov dword ptr [0x1030baa0], eax */ { const u32 m_ = (u32)(0x1030baa0u); M32(m_) = (u32)(eax); }
  /* 10304b8f jmp 0x10304b96 */ goto L_10304b96;
L_10304b91:;
  /* 10304b91 mov eax, dword ptr [0x1030baa0] */ { const u32 m_ = (u32)(0x1030baa0u); eax = (u32)(M32(m_)); }
L_10304b96:;
  /* 10304b96 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304b99 jne 0x10304c18 */ if (!ZF_) goto L_10304c18;
L_10304b9b:;
  /* 10304b9b cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304b9d jne 0x10304ba7 */ if (!ZF_) goto L_10304ba7;
  /* 10304b9f call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x10304ba1u; SAVEALL; call_ind(c, t_); RETCHK(0x10304ba1u, 0x10304b9fu); LOADALL; }
  /* 10304ba1 mov esi, eax */ { esi = (u32)(eax); }
  /* 10304ba3 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304ba5 je 0x10304c20 */ if (ZF_) goto L_10304c20;
L_10304ba7:;
  /* 10304ba7 cmp word ptr [esi], bx */ { const u32 m_ = (u32)(esi); u32 a_ = M16(m_), b_ = (ebx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10304baa mov eax, esi */ { eax = (u32)(esi); }
  /* 10304bac je 0x10304bbc */ if (ZF_) goto L_10304bbc;
L_10304bae:;
  /* 10304bae add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10304bb0 cmp word ptr [eax], bx */ { const u32 m_ = (u32)(eax); u32 a_ = M16(m_), b_ = (ebx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10304bb3 jne 0x10304bae */ if (!ZF_) goto L_10304bae;
  /* 10304bb5 add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10304bb7 cmp word ptr [eax], bx */ { const u32 m_ = (u32)(eax); u32 a_ = M16(m_), b_ = (ebx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10304bba jne 0x10304bae */ if (!ZF_) goto L_10304bae;
L_10304bbc:;
  /* 10304bbc mov edi, dword ptr [0x1030907c] */ { const u32 m_ = (u32)(0x1030907cu); edi = (u32)(M32(m_)); }
  /* 10304bc2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304bc3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304bc4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304bc5 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10304bc7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304bc8 sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10304bca inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304bcb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10304bcc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10304bcd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304bce push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304bcf mov dword ptr [esp + 0x34], eax */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(eax); }
  /* 10304bd3 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x10304bd5u; SAVEALL; call_ind(c, t_); RETCHK(0x10304bd5u, 0x10304bd3u); LOADALL; }
  /* 10304bd5 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 10304bd7 cmp ebp, ebx */ { u32 a_ = ebp, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304bd9 je 0x10304c0d */ if (ZF_) goto L_10304c0d;
  /* 10304bdb push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10304bdc call 0x10303744 */ esp -= 4; M32(esp) = 0x10304be1u; SAVEALL; F_10303744(c); ABI_CHECK(0x10303744u, 0x10304bdcu); RETCHK(0x10304be1u, 0x10304bdcu); LOADALL;
  /* 10304be1 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304be3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304be4 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10304be8 je 0x10304c0d */ if (ZF_) goto L_10304c0d;
  /* 10304bea push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304beb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304bec push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10304bed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10304bee push dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304bf2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10304bf3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304bf4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304bf5 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x10304bf7u; SAVEALL; call_ind(c, t_); RETCHK(0x10304bf7u, 0x10304bf5u); LOADALL; }
  /* 10304bf7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304bf9 jne 0x10304c09 */ if (!ZF_) goto L_10304c09;
  /* 10304bfb push dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304bff call 0x10303326 */ esp -= 4; M32(esp) = 0x10304c04u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10304bffu); RETCHK(0x10304c04u, 0x10304bffu); LOADALL;
  /* 10304c04 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304c05 mov dword ptr [esp + 0x10], ebx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebx); }
L_10304c09:;
  /* 10304c09 mov ebx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebx = (u32)(M32(m_)); }
L_10304c0d:;
  /* 10304c0d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10304c0e call dword ptr [0x10309078] */ { const u32 m_ = (u32)(0x10309078u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10304c14u; SAVEALL; call_ind(c, t_); RETCHK(0x10304c14u, 0x10304c0eu); LOADALL; }
  /* 10304c14 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10304c16 jmp 0x10304c68 */ goto L_10304c68;
L_10304c18:;
  /* 10304c18 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304c1a je 0x10304c24 */ if (ZF_) goto L_10304c24;
  /* 10304c1c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304c1e je 0x10304c24 */ if (ZF_) goto L_10304c24;
L_10304c20:;
  /* 10304c20 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10304c22 jmp 0x10304c68 */ goto L_10304c68;
L_10304c24:;
  /* 10304c24 call dword ptr [0x10309074] */ { const u32 m_ = (u32)(0x10309074u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10304c2au; SAVEALL; call_ind(c, t_); RETCHK(0x10304c2au, 0x10304c24u); LOADALL; }
  /* 10304c2a mov esi, eax */ { esi = (u32)(eax); }
  /* 10304c2c cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304c2e je 0x10304c20 */ if (ZF_) goto L_10304c20;
  /* 10304c30 cmp byte ptr [esi], bl */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10304c32 je 0x10304c3e */ if (ZF_) goto L_10304c3e;
L_10304c34:;
  /* 10304c34 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304c35 cmp byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10304c37 jne 0x10304c34 */ if (!ZF_) goto L_10304c34;
  /* 10304c39 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304c3a cmp byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10304c3c jne 0x10304c34 */ if (!ZF_) goto L_10304c34;
L_10304c3e:;
  /* 10304c3e sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10304c40 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304c41 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 10304c43 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10304c44 call 0x10303744 */ esp -= 4; M32(esp) = 0x10304c49u; SAVEALL; F_10303744(c); ABI_CHECK(0x10303744u, 0x10304c44u); RETCHK(0x10304c49u, 0x10304c44u); LOADALL;
  /* 10304c49 mov edi, eax */ { edi = (u32)(eax); }
  /* 10304c4b cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304c4d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304c4e jne 0x10304c54 */ if (!ZF_) goto L_10304c54;
  /* 10304c50 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10304c52 jmp 0x10304c5f */ goto L_10304c5f;
L_10304c54:;
  /* 10304c54 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10304c55 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10304c56 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10304c57 call 0x10307020 */ esp -= 4; M32(esp) = 0x10304c5cu; SAVEALL; F_10307020(c); ABI_CHECK(0x10307020u, 0x10304c57u); RETCHK(0x10304c5cu, 0x10304c57u); LOADALL;
  /* 10304c5c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10304c5f:;
  /* 10304c5f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10304c60 call dword ptr [0x10309070] */ { const u32 m_ = (u32)(0x10309070u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10304c66u; SAVEALL; call_ind(c, t_); RETCHK(0x10304c66u, 0x10304c60u); LOADALL; }
  /* 10304c66 mov eax, edi */ { eax = (u32)(edi); }
L_10304c68:;
  /* 10304c68 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10304c69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10304c6a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10304c6b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10304c6c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304c6d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304c6e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304c6f(CPU *c) {
  NATIVE_HOOK(0x10304c6fu) REGS; LOADALL;
L_10304c6f:;
  /* 10304c6f push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10304c71 push 0x10309490 */ { u32 v_ = 0x10309490u; esp -= 4; M32(esp) = v_; }
  /* 10304c76 call 0x10303548 */ esp -= 4; M32(esp) = 0x10304c7bu; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x10304c76u); RETCHK(0x10304c7bu, 0x10304c76u); LOADALL;
  /* 10304c7b mov dword ptr [ebp - 0x1c], 0x1030a288 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x1030a288u); }
L_10304c82:;
  /* 10304c82 cmp dword ptr [ebp - 0x1c], 0x1030a288 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x1030a288u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304c89 jae 0x10304cad */ if (!CF_) goto L_10304cad;
  /* 10304c8b and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304c8f mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10304c92 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10304c94 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304c96 je 0x10304ca3 */ if (ZF_) goto L_10304ca3;
  /* 10304c98 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10304c9au; SAVEALL; call_ind(c, t_); RETCHK(0x10304c9au, 0x10304c98u); LOADALL; }
  /* 10304c9a jmp 0x10304ca3 */ goto L_10304ca3;
L_10304ca3:;
  /* 10304ca3 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304ca7 add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304cab jmp 0x10304c82 */ goto L_10304c82;
L_10304cad:;
  /* 10304cad call 0x10303583 */ esp -= 4; M32(esp) = 0x10304cb2u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10304cadu); RETCHK(0x10304cb2u, 0x10304cadu); LOADALL;
  /* 10304cb2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304c9c(CPU *c) {
  NATIVE_HOOK(0x10304c9cu) REGS; LOADALL;
L_10304c9c:;
  /* 10304c9c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10304c9e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304c9f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304ca0(CPU *c) {
  NATIVE_HOOK(0x10304ca0u) REGS; LOADALL;
  goto L_10304ca0;
L_10304c82:;
  /* 10304c82 cmp dword ptr [ebp - 0x1c], 0x1030a288 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x1030a288u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304c89 jae 0x10304cad */ if (!CF_) goto L_10304cad;
  /* 10304c8b and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304c8f mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10304c92 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10304c94 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304c96 je 0x10304ca3 */ if (ZF_) goto L_10304ca3;
  /* 10304c98 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10304c9au; SAVEALL; call_ind(c, t_); RETCHK(0x10304c9au, 0x10304c98u); LOADALL; }
  /* 10304c9a jmp 0x10304ca3 */ goto L_10304ca3;
L_10304ca0:;
  /* 10304ca0 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
L_10304ca3:;
  /* 10304ca3 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304ca7 add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304cab jmp 0x10304c82 */ goto L_10304c82;
L_10304cad:;
  /* 10304cad call 0x10303583 */ esp -= 4; M32(esp) = 0x10304cb2u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10304cadu); RETCHK(0x10304cb2u, 0x10304cadu); LOADALL;
  /* 10304cb2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304cb3(CPU *c) {
  NATIVE_HOOK(0x10304cb3u) REGS; LOADALL;
L_10304cb3:;
  /* 10304cb3 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10304cb5 push 0x103094a0 */ { u32 v_ = 0x103094a0u; esp -= 4; M32(esp) = v_; }
  /* 10304cba call 0x10303548 */ esp -= 4; M32(esp) = 0x10304cbfu; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x10304cbau); RETCHK(0x10304cbfu, 0x10304cbau); LOADALL;
  /* 10304cbf mov dword ptr [ebp - 0x1c], 0x1030a290 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x1030a290u); }
L_10304cc6:;
  /* 10304cc6 cmp dword ptr [ebp - 0x1c], 0x1030a290 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x1030a290u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304ccd jae 0x10304cf1 */ if (!CF_) goto L_10304cf1;
  /* 10304ccf and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304cd3 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10304cd6 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10304cd8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304cda je 0x10304ce7 */ if (ZF_) goto L_10304ce7;
  /* 10304cdc call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10304cdeu; SAVEALL; call_ind(c, t_); RETCHK(0x10304cdeu, 0x10304cdcu); LOADALL; }
  /* 10304cde jmp 0x10304ce7 */ goto L_10304ce7;
L_10304ce7:;
  /* 10304ce7 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304ceb add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304cef jmp 0x10304cc6 */ goto L_10304cc6;
L_10304cf1:;
  /* 10304cf1 call 0x10303583 */ esp -= 4; M32(esp) = 0x10304cf6u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10304cf1u); RETCHK(0x10304cf6u, 0x10304cf1u); LOADALL;
  /* 10304cf6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304ce0(CPU *c) {
  NATIVE_HOOK(0x10304ce0u) REGS; LOADALL;
L_10304ce0:;
  /* 10304ce0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10304ce2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304ce3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304ce4(CPU *c) {
  NATIVE_HOOK(0x10304ce4u) REGS; LOADALL;
  goto L_10304ce4;
L_10304cc6:;
  /* 10304cc6 cmp dword ptr [ebp - 0x1c], 0x1030a290 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x1030a290u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304ccd jae 0x10304cf1 */ if (!CF_) goto L_10304cf1;
  /* 10304ccf and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304cd3 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10304cd6 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10304cd8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304cda je 0x10304ce7 */ if (ZF_) goto L_10304ce7;
  /* 10304cdc call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10304cdeu; SAVEALL; call_ind(c, t_); RETCHK(0x10304cdeu, 0x10304cdcu); LOADALL; }
  /* 10304cde jmp 0x10304ce7 */ goto L_10304ce7;
L_10304ce4:;
  /* 10304ce4 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
L_10304ce7:;
  /* 10304ce7 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304ceb add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304cef jmp 0x10304cc6 */ goto L_10304cc6;
L_10304cf1:;
  /* 10304cf1 call 0x10303583 */ esp -= 4; M32(esp) = 0x10304cf6u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10304cf1u); RETCHK(0x10304cf6u, 0x10304cf1u); LOADALL;
  /* 10304cf6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304cf7(CPU *c) {
  NATIVE_HOOK(0x10304cf7u) REGS; LOADALL;
L_10304cf7:;
  /* 10304cf7 cmp dword ptr [0x1030b950], 2 */ { const u32 m_ = (u32)(0x1030b950u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304cfe jne 0x10304d0d */ if (!ZF_) goto L_10304d0d;
  /* 10304d00 cmp dword ptr [0x1030b95c], 5 */ { const u32 m_ = (u32)(0x1030b95cu); u32 a_ = M32(m_), b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304d07 jb 0x10304d0d */ if (CF_) goto L_10304d0d;
  /* 10304d09 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10304d0b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304d0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10304d0d:;
  /* 10304d0d push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10304d0f pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 10304d10 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304d11(CPU *c) {
  NATIVE_HOOK(0x10304d11u) REGS; LOADALL;
L_10304d11:;
  /* 10304d11 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10304d13 cmp dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304d17 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10304d19 sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 10304d1c push 0x1000 */ { u32 v_ = 0x1000u; esp -= 4; M32(esp) = v_; }
  /* 10304d21 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10304d22 call dword ptr [0x10309088] */ { const u32 m_ = (u32)(0x10309088u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10304d28u; SAVEALL; call_ind(c, t_); RETCHK(0x10304d28u, 0x10304d22u); LOADALL; }
  /* 10304d28 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304d2a mov dword ptr [0x1030c03c], eax */ { const u32 m_ = (u32)(0x1030c03cu); M32(m_) = (u32)(eax); }
  /* 10304d2f je 0x10304d5b */ if (ZF_) goto L_10304d5b;
  /* 10304d31 call 0x10304cf7 */ esp -= 4; M32(esp) = 0x10304d36u; SAVEALL; F_10304cf7(c); ABI_CHECK(0x10304cf7u, 0x10304d31u); RETCHK(0x10304d36u, 0x10304d31u); LOADALL;
  /* 10304d36 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304d39 mov dword ptr [0x1030c040], eax */ { const u32 m_ = (u32)(0x1030c040u); M32(m_) = (u32)(eax); }
  /* 10304d3e jne 0x10304d5e */ if (!ZF_) goto L_10304d5e;
  /* 10304d40 push 0x3f8 */ { u32 v_ = 0x3f8u; esp -= 4; M32(esp) = v_; }
  /* 10304d45 call 0x103052e0 */ esp -= 4; M32(esp) = 0x10304d4au; SAVEALL; F_103052e0(c); ABI_CHECK(0x103052e0u, 0x10304d45u); RETCHK(0x10304d4au, 0x10304d45u); LOADALL;
  /* 10304d4a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304d4c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304d4d jne 0x10304d5e */ if (!ZF_) goto L_10304d5e;
  /* 10304d4f push dword ptr [0x1030c03c] */ { const u32 m_ = (u32)(0x1030c03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304d55 call dword ptr [0x10309084] */ { const u32 m_ = (u32)(0x10309084u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10304d5bu; SAVEALL; call_ind(c, t_); RETCHK(0x10304d5bu, 0x10304d55u); LOADALL; }
L_10304d5b:;
  /* 10304d5b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10304d5d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10304d5e:;
  /* 10304d5e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10304d60 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304d61 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304d62(CPU *c) {
  NATIVE_HOOK(0x10304d62u) REGS; LOADALL;
L_10304d62:;
  /* 10304d62 cmp dword ptr [0x1030c040], 3 */ { const u32 m_ = (u32)(0x1030c040u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304d69 jne 0x10304dd4 */ if (!ZF_) goto L_10304dd4;
  /* 10304d6b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304d6c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10304d6e cmp dword ptr [0x1030c024], ebx */ { const u32 m_ = (u32)(0x1030c024u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304d74 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10304d75 mov ebp, dword ptr [0x10309018] */ { const u32 m_ = (u32)(0x10309018u); ebp = (u32)(M32(m_)); }
  /* 10304d7b jle 0x10304dc2 */ if ((ZF_|LT_)) goto L_10304dc2;
  /* 10304d7d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10304d7e mov esi, dword ptr [0x1030c028] */ { const u32 m_ = (u32)(0x1030c028u); esi = (u32)(M32(m_)); }
  /* 10304d84 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10304d85 mov edi, dword ptr [0x10309000] */ { const u32 m_ = (u32)(0x10309000u); edi = (u32)(M32(m_)); }
  /* 10304d8b add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_10304d8e:;
  /* 10304d8e push 0x4000 */ { u32 v_ = 0x4000u; esp -= 4; M32(esp) = v_; }
  /* 10304d93 push 0x100000 */ { u32 v_ = 0x100000u; esp -= 4; M32(esp) = v_; }
  /* 10304d98 push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304d9a call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x10304d9cu; SAVEALL; call_ind(c, t_); RETCHK(0x10304d9cu, 0x10304d9au); LOADALL; }
  /* 10304d9c push 0x8000 */ { u32 v_ = 0x8000u; esp -= 4; M32(esp) = v_; }
  /* 10304da1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10304da3 push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304da5 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x10304da7u; SAVEALL; call_ind(c, t_); RETCHK(0x10304da7u, 0x10304da5u); LOADALL; }
  /* 10304da7 push dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304daa push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10304dac push dword ptr [0x1030c03c] */ { const u32 m_ = (u32)(0x1030c03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304db2 call ebp */ { u32 t_ = ebp; esp -= 4; M32(esp) = 0x10304db4u; SAVEALL; call_ind(c, t_); RETCHK(0x10304db4u, 0x10304db2u); LOADALL; }
  /* 10304db4 add esi, 0x14 */ { u32 a_ = esi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10304db7 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304db8 cmp ebx, dword ptr [0x1030c024] */ { const u32 m_ = (u32)(0x1030c024u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304dbe jl 0x10304d8e */ if (LT_) goto L_10304d8e;
  /* 10304dc0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10304dc1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10304dc2:;
  /* 10304dc2 push dword ptr [0x1030c028] */ { const u32 m_ = (u32)(0x1030c028u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304dc8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10304dca push dword ptr [0x1030c03c] */ { const u32 m_ = (u32)(0x1030c03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304dd0 call ebp */ { u32 t_ = ebp; esp -= 4; M32(esp) = 0x10304dd2u; SAVEALL; call_ind(c, t_); RETCHK(0x10304dd2u, 0x10304dd0u); LOADALL; }
  /* 10304dd2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10304dd3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_10304dd4:;
  /* 10304dd4 push dword ptr [0x1030c03c] */ { const u32 m_ = (u32)(0x1030c03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304dda call dword ptr [0x10309084] */ { const u32 m_ = (u32)(0x10309084u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10304de0u; SAVEALL; call_ind(c, t_); RETCHK(0x10304de0u, 0x10304ddau); LOADALL; }
  /* 10304de0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304df0(CPU *c) {
  NATIVE_HOOK(0x10304df0u) REGS; LOADALL;
L_10304df0:;
  /* 10304df0 cmp eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304df5 jae 0x10304e05 */ if (!CF_) goto L_10304e05;
  /* 10304df7 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10304df9 add eax, esp */ { u32 a_ = eax, b_ = esp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10304dfb add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10304dfe test dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304e00 xchg esp, eax */ { u32 t_ = esp; esp = (u32)(eax); eax = (u32)(t_); }
  /* 10304e01 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10304e03 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10304e04 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10304e05:;
  /* 10304e05 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10304e06 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
L_10304e0a:;
  /* 10304e0a sub ecx, 0x1000 */ { u32 a_ = ecx, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10304e10 sub eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10304e15 test dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304e17 cmp eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304e1c jae 0x10304e0a */ if (!CF_) goto L_10304e0a;
  /* 10304e1e sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10304e20 mov eax, esp */ { eax = (u32)(esp); }
  /* 10304e22 test dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304e24 mov esp, ecx */ { esp = (u32)(ecx); }
  /* 10304e26 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10304e28 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 10304e2b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10304e2c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304e2d(CPU *c) {
  NATIVE_HOOK(0x10304e2du) REGS; LOADALL;
L_10304e2d:;
  /* 10304e2d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10304e2e mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10304e30 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10304e31 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304e32 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10304e33 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10304e34 call 0x10304039 */ esp -= 4; M32(esp) = 0x10304e39u; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10304e34u); RETCHK(0x10304e39u, 0x10304e34u); LOADALL;
  /* 10304e39 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10304e3c mov esi, eax */ { esi = (u32)(eax); }
  /* 10304e3e mov edx, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); edx = (u32)(M32(m_)); }
  /* 10304e41 mov eax, dword ptr [0x1030b124] */ { const u32 m_ = (u32)(0x1030b124u); eax = (u32)(M32(m_)); }
  /* 10304e46 mov ecx, edx */ { ecx = (u32)(edx); }
L_10304e48:;
  /* 10304e48 cmp dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304e4a je 0x10304e59 */ if (ZF_) goto L_10304e59;
  /* 10304e4c lea ebx, [eax + eax*2] */ ebx = (u32)((u32)(eax + eax * 2u));
  /* 10304e4f add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10304e52 lea ebx, [edx + ebx*4] */ ebx = (u32)((u32)(edx + ebx * 4u));
  /* 10304e55 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304e57 jb 0x10304e48 */ if (CF_) goto L_10304e48;
L_10304e59:;
  /* 10304e59 lea eax, [eax + eax*2] */ eax = (u32)((u32)(eax + eax * 2u));
  /* 10304e5c lea eax, [edx + eax*4] */ eax = (u32)((u32)(edx + eax * 4u));
  /* 10304e5f cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304e61 jae 0x10304e67 */ if (!CF_) goto L_10304e67;
  /* 10304e63 cmp dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304e65 je 0x10304e69 */ if (ZF_) goto L_10304e69;
L_10304e67:;
  /* 10304e67 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_10304e69:;
  /* 10304e69 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304e6b je 0x10304f83 */ if (ZF_) goto L_10304f83;
  /* 10304e71 mov ebx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10304e74 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10304e76 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10304e79 je 0x10304f83 */ if (ZF_) goto L_10304f83;
  /* 10304e7f cmp ebx, 5 */ { u32 a_ = ebx, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304e82 jne 0x10304e90 */ if (!ZF_) goto L_10304e90;
  /* 10304e84 and dword ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304e88 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10304e8a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304e8b jmp 0x10304f8c */ goto L_10304f8c;
L_10304e90:;
  /* 10304e90 cmp ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304e93 je 0x10304f7e */ if (ZF_) goto L_10304f7e;
  /* 10304e99 mov eax, dword ptr [esi + 0x58] */ { const u32 m_ = (u32)(esi + 0x58u); eax = (u32)(M32(m_)); }
  /* 10304e9c mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10304e9f mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10304ea2 mov dword ptr [esi + 0x58], eax */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(eax); }
  /* 10304ea5 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10304ea8 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304eab jne 0x10304f70 */ if (!ZF_) goto L_10304f70;
  /* 10304eb1 mov edx, dword ptr [0x1030b118] */ { const u32 m_ = (u32)(0x1030b118u); edx = (u32)(M32(m_)); }
  /* 10304eb7 mov eax, dword ptr [0x1030b11c] */ { const u32 m_ = (u32)(0x1030b11cu); eax = (u32)(M32(m_)); }
  /* 10304ebc add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10304ebe cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304ec0 jge 0x10304ee9 */ if (!LT_) goto L_10304ee9;
  /* 10304ec2 lea eax, [edx + edx*2] */ eax = (u32)((u32)(edx + edx * 2u));
  /* 10304ec5 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_10304ec8:;
  /* 10304ec8 mov edi, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); edi = (u32)(M32(m_)); }
  /* 10304ecb and dword ptr [eax + edi + 8], 0 */ { const u32 m_ = (u32)(eax + edi + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304ed0 mov edi, dword ptr [0x1030b118] */ { const u32 m_ = (u32)(0x1030b118u); edi = (u32)(M32(m_)); }
  /* 10304ed6 mov ebx, dword ptr [0x1030b11c] */ { const u32 m_ = (u32)(0x1030b11cu); ebx = (u32)(M32(m_)); }
  /* 10304edc inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304edd add ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10304edf add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10304ee2 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304ee4 jl 0x10304ec8 */ if (LT_) goto L_10304ec8;
  /* 10304ee6 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_10304ee9:;
  /* 10304ee9 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 10304eeb cmp ecx, 0xc000008e */ { u32 a_ = ecx, b_ = 0xc000008eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304ef1 mov edi, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); edi = (u32)(M32(m_)); }
  /* 10304ef4 jne 0x10304eff */ if (!ZF_) goto L_10304eff;
  /* 10304ef6 mov dword ptr [esi + 0x5c], 0x83 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x83u); }
  /* 10304efd jmp 0x10304f63 */ goto L_10304f63;
L_10304eff:;
  /* 10304eff cmp ecx, 0xc0000090 */ { u32 a_ = ecx, b_ = 0xc0000090u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304f05 jne 0x10304f10 */ if (!ZF_) goto L_10304f10;
  /* 10304f07 mov dword ptr [esi + 0x5c], 0x81 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x81u); }
  /* 10304f0e jmp 0x10304f63 */ goto L_10304f63;
L_10304f10:;
  /* 10304f10 cmp ecx, 0xc0000091 */ { u32 a_ = ecx, b_ = 0xc0000091u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304f16 jne 0x10304f21 */ if (!ZF_) goto L_10304f21;
  /* 10304f18 mov dword ptr [esi + 0x5c], 0x84 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x84u); }
  /* 10304f1f jmp 0x10304f63 */ goto L_10304f63;
L_10304f21:;
  /* 10304f21 cmp ecx, 0xc0000093 */ { u32 a_ = ecx, b_ = 0xc0000093u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304f27 jne 0x10304f32 */ if (!ZF_) goto L_10304f32;
  /* 10304f29 mov dword ptr [esi + 0x5c], 0x85 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x85u); }
  /* 10304f30 jmp 0x10304f63 */ goto L_10304f63;
L_10304f32:;
  /* 10304f32 cmp ecx, 0xc000008d */ { u32 a_ = ecx, b_ = 0xc000008du; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304f38 jne 0x10304f43 */ if (!ZF_) goto L_10304f43;
  /* 10304f3a mov dword ptr [esi + 0x5c], 0x82 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x82u); }
  /* 10304f41 jmp 0x10304f63 */ goto L_10304f63;
L_10304f43:;
  /* 10304f43 cmp ecx, 0xc000008f */ { u32 a_ = ecx, b_ = 0xc000008fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304f49 jne 0x10304f54 */ if (!ZF_) goto L_10304f54;
  /* 10304f4b mov dword ptr [esi + 0x5c], 0x86 */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x86u); }
  /* 10304f52 jmp 0x10304f63 */ goto L_10304f63;
L_10304f54:;
  /* 10304f54 cmp ecx, 0xc0000092 */ { u32 a_ = ecx, b_ = 0xc0000092u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304f5a jne 0x10304f63 */ if (!ZF_) goto L_10304f63;
  /* 10304f5c mov dword ptr [esi + 0x5c], 0x8a */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(0x8au); }
L_10304f63:;
  /* 10304f63 push dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304f66 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10304f68 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x10304f6au; SAVEALL; call_ind(c, t_); RETCHK(0x10304f6au, 0x10304f68u); LOADALL; }
  /* 10304f6a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304f6b mov dword ptr [esi + 0x5c], edi */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(edi); }
  /* 10304f6e jmp 0x10304f77 */ goto L_10304f77;
L_10304f70:;
  /* 10304f70 and dword ptr [ecx + 8], 0 */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10304f74 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10304f75 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x10304f77u; SAVEALL; call_ind(c, t_); RETCHK(0x10304f77u, 0x10304f75u); LOADALL; }
L_10304f77:;
  /* 10304f77 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10304f7a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304f7b mov dword ptr [esi + 0x58], eax */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(eax); }
L_10304f7e:;
  /* 10304f7e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10304f81 jmp 0x10304f8c */ goto L_10304f8c;
L_10304f83:;
  /* 10304f83 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304f86 call dword ptr [0x1030908c] */ { const u32 m_ = (u32)(0x1030908cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10304f8cu; SAVEALL; call_ind(c, t_); RETCHK(0x10304f8cu, 0x10304f86u); LOADALL; }
L_10304f8c:;
  /* 10304f8c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10304f8d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10304f8e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10304f8f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10304f90 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304f91(CPU *c) {
  NATIVE_HOOK(0x10304f91u) REGS; LOADALL;
L_10304f91:;
  /* 10304f91 mov eax, 0xe06d7363 */ { eax = (u32)(0xe06d7363u); }
  /* 10304f96 cmp dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304f9a jne 0x10304fa9 */ if (!ZF_) goto L_10304fa9;
  /* 10304f9c push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10304fa0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10304fa1 call 0x10304e2d */ esp -= 4; M32(esp) = 0x10304fa6u; SAVEALL; F_10304e2d(c); ABI_CHECK(0x10304e2du, 0x10304fa1u); RETCHK(0x10304fa6u, 0x10304fa1u); LOADALL;
  /* 10304fa6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304fa7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10304fa8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10304fa9:;
  /* 10304fa9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10304fab ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10304fac(CPU *c) {
  NATIVE_HOOK(0x10304facu) REGS; LOADALL;
L_10304fac:;
  /* 10304fac push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10304fad lea ebp, [esp - 0x8c] */ ebp = (u32)((u32)(esp + 0xffffff74u));
  /* 10304fb4 sub esp, 0x10c */ { u32 a_ = esp, b_ = 0x10cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10304fba mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 10304fbf mov ecx, dword ptr [ebp + 0x94] */ { const u32 m_ = (u32)(ebp + 0x94u); ecx = (u32)(M32(m_)); }
  /* 10304fc5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10304fc6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10304fc7 mov dword ptr [ebp + 0x88], eax */ { const u32 m_ = (u32)(ebp + 0x88u); M32(m_) = (u32)(eax); }
  /* 10304fcd xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10304fcf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10304fd0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10304fd2:;
  /* 10304fd2 cmp ecx, dword ptr [eax*8 + 0x1030b128] */ { const u32 m_ = (u32)(eax * 8u + 0x1030b128u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304fd9 je 0x10304fe1 */ if (ZF_) goto L_10304fe1;
  /* 10304fdb inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10304fdc cmp eax, 0x13 */ { u32 a_ = eax, b_ = 0x13u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304fdf jb 0x10304fd2 */ if (CF_) goto L_10304fd2;
L_10304fe1:;
  /* 10304fe1 mov esi, eax */ { esi = (u32)(eax); }
  /* 10304fe3 shl esi, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10304fe6 cmp ecx, dword ptr [esi + 0x1030b128] */ { const u32 m_ = (u32)(esi + 0x1030b128u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304fec jne 0x10305107 */ if (!ZF_) goto L_10305107;
  /* 10304ff2 mov eax, dword ptr [0x1030b930] */ { const u32 m_ = (u32)(0x1030b930u); eax = (u32)(M32(m_)); }
  /* 10304ff7 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10304ffa je 0x103050df */ if (ZF_) goto L_103050df;
  /* 10305000 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305002 jne 0x10305011 */ if (!ZF_) goto L_10305011;
  /* 10305004 cmp dword ptr [0x1030b934], 1 */ { const u32 m_ = (u32)(0x1030b934u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030500b je 0x103050df */ if (ZF_) goto L_103050df;
L_10305011:;
  /* 10305011 cmp ecx, 0xfc */ { u32 a_ = ecx, b_ = 0xfcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305017 je 0x10305107 */ if (ZF_) goto L_10305107;
  /* 1030501d push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 10305022 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 10305025 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10305026 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10305027 mov byte ptr [ebp + 0x84], dl */ { const u32 m_ = (u32)(ebp + 0x84u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 1030502d call dword ptr [0x1030902c] */ { const u32 m_ = (u32)(0x1030902cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10305033u; SAVEALL; call_ind(c, t_); RETCHK(0x10305033u, 0x1030502du); LOADALL; }
  /* 10305033 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305035 jne 0x10305047 */ if (!ZF_) goto L_10305047;
  /* 10305037 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 1030503a push 0x103091c0 */ { u32 v_ = 0x103091c0u; esp -= 4; M32(esp) = v_; }
  /* 1030503f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10305040 call 0x10305f00 */ esp -= 4; M32(esp) = 0x10305045u; SAVEALL; F_10305f00(c); ABI_CHECK(0x10305f00u, 0x10305040u); RETCHK(0x10305045u, 0x10305040u); LOADALL;
  /* 10305045 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10305046 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10305047:;
  /* 10305047 lea edi, [ebp - 0x80] */ edi = (u32)((u32)(ebp + 0xffffff80u));
  /* 1030504a mov eax, edi */ { eax = (u32)(edi); }
  /* 1030504c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030504d call 0x10306000 */ esp -= 4; M32(esp) = 0x10305052u; SAVEALL; F_10306000(c); ABI_CHECK(0x10306000u, 0x1030504du); RETCHK(0x10305052u, 0x1030504du); LOADALL;
  /* 10305052 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10305053 cmp eax, 0x3c */ { u32 a_ = eax, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305056 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10305057 jbe 0x1030507b */ if ((CF_|ZF_)) goto L_1030507b;
  /* 10305059 mov eax, edi */ { eax = (u32)(edi); }
  /* 1030505b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030505c call 0x10306000 */ esp -= 4; M32(esp) = 0x10305061u; SAVEALL; F_10306000(c); ABI_CHECK(0x10306000u, 0x1030505cu); RETCHK(0x10305061u, 0x1030505cu); LOADALL;
  /* 10305061 mov edi, eax */ { edi = (u32)(eax); }
  /* 10305063 lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 10305066 sub eax, 0x3b */ { u32 a_ = eax, b_ = 0x3bu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10305069 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 1030506b add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1030506d push 0x103091bc */ { u32 v_ = 0x103091bcu; esp -= 4; M32(esp) = v_; }
  /* 10305072 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10305073 call 0x10302a90 */ esp -= 4; M32(esp) = 0x10305078u; SAVEALL; F_10302a90(c); ABI_CHECK(0x10302a90u, 0x10305073u); RETCHK(0x10305078u, 0x10305073u); LOADALL;
  /* 10305078 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1030507b:;
  /* 1030507b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030507c call 0x10306000 */ esp -= 4; M32(esp) = 0x10305081u; SAVEALL; F_10306000(c); ABI_CHECK(0x10306000u, 0x1030507cu); RETCHK(0x10305081u, 0x1030507cu); LOADALL;
  /* 10305081 push dword ptr [esi + 0x1030b12c] */ { const u32 m_ = (u32)(esi + 0x1030b12cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10305087 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10305089 call 0x10306000 */ esp -= 4; M32(esp) = 0x1030508eu; SAVEALL; F_10306000(c); ABI_CHECK(0x10306000u, 0x10305089u); RETCHK(0x1030508eu, 0x10305089u); LOADALL;
  /* 1030508e lea eax, [ebx + eax + 0x1c] */ eax = (u32)((u32)(ebx + eax + 0x1cu));
  /* 10305092 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10305093 add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10305096 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10305097 and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030509a call 0x10304df0 */ esp -= 4; M32(esp) = 0x1030509fu; SAVEALL; F_10304df0(c); ABI_CHECK(0x10304df0u, 0x1030509au); RETCHK(0x1030509fu, 0x1030509au); LOADALL;
  /* 1030509f mov ebx, esp */ { ebx = (u32)(esp); }
  /* 103050a1 push 0x10309850 */ { u32 v_ = 0x10309850u; esp -= 4; M32(esp) = v_; }
  /* 103050a6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103050a7 call 0x10305f00 */ esp -= 4; M32(esp) = 0x103050acu; SAVEALL; F_10305f00(c); ABI_CHECK(0x10305f00u, 0x103050a7u); RETCHK(0x103050acu, 0x103050a7u); LOADALL;
  /* 103050ac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103050ad push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103050ae call 0x10305f10 */ esp -= 4; M32(esp) = 0x103050b3u; SAVEALL; F_10305f10(c); ABI_CHECK(0x10305f10u, 0x103050aeu); RETCHK(0x103050b3u, 0x103050aeu); LOADALL;
  /* 103050b3 push 0x103091b8 */ { u32 v_ = 0x103091b8u; esp -= 4; M32(esp) = v_; }
  /* 103050b8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103050b9 call 0x10305f10 */ esp -= 4; M32(esp) = 0x103050beu; SAVEALL; F_10305f10(c); ABI_CHECK(0x10305f10u, 0x103050b9u); RETCHK(0x103050beu, 0x103050b9u); LOADALL;
  /* 103050be push dword ptr [esi + 0x1030b12c] */ { const u32 m_ = (u32)(esi + 0x1030b12cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103050c4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103050c5 call 0x10305f10 */ esp -= 4; M32(esp) = 0x103050cau; SAVEALL; F_10305f10(c); ABI_CHECK(0x10305f10u, 0x103050c5u); RETCHK(0x103050cau, 0x103050c5u); LOADALL;
  /* 103050ca push 0x12010 */ { u32 v_ = 0x12010u; esp -= 4; M32(esp) = v_; }
  /* 103050cf push 0x10309184 */ { u32 v_ = 0x10309184u; esp -= 4; M32(esp) = v_; }
  /* 103050d4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103050d5 call 0x10305e03 */ esp -= 4; M32(esp) = 0x103050dau; SAVEALL; F_10305e03(c); ABI_CHECK(0x10305e03u, 0x103050d5u); RETCHK(0x103050dau, 0x103050d5u); LOADALL;
  /* 103050da add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 103050dd jmp 0x10305107 */ goto L_10305107;
L_103050df:;
  /* 103050df push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 103050e0 lea eax, [ebp + 0x94] */ eax = (u32)((u32)(ebp + 0x94u));
  /* 103050e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103050e7 lea esi, [esi + 0x1030b12c] */ esi = (u32)((u32)(esi + 0x1030b12cu));
  /* 103050ed push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103050ef call 0x10306000 */ esp -= 4; M32(esp) = 0x103050f4u; SAVEALL; F_10306000(c); ABI_CHECK(0x10306000u, 0x103050efu); RETCHK(0x103050f4u, 0x103050efu); LOADALL;
  /* 103050f4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103050f5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103050f6 push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103050f8 push -0xc */ { u32 v_ = 0xfffffff4u; esp -= 4; M32(esp) = v_; }
  /* 103050fa call dword ptr [0x10309060] */ { const u32 m_ = (u32)(0x10309060u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10305100u; SAVEALL; call_ind(c, t_); RETCHK(0x10305100u, 0x103050fau); LOADALL; }
  /* 10305100 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10305101 call dword ptr [0x10309090] */ { const u32 m_ = (u32)(0x10309090u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10305107u; SAVEALL; call_ind(c, t_); RETCHK(0x10305107u, 0x10305101u); LOADALL; }
L_10305107:;
  /* 10305107 lea esp, [ebp - 0x8c] */ esp = (u32)((u32)(ebp + 0xffffff74u));
  /* 1030510d mov ecx, dword ptr [ebp + 0x88] */ { const u32 m_ = (u32)(ebp + 0x88u); ecx = (u32)(M32(m_)); }
  /* 10305113 call 0x10302a7d */ esp -= 4; M32(esp) = 0x10305118u; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x10305113u); RETCHK(0x10305118u, 0x10305113u); LOADALL;
  /* 10305118 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10305119 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030511a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1030511b add ebp, 0x8c */ { u32 a_ = ebp, b_ = 0x8cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 10305121 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10305122 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10305123(CPU *c) {
  NATIVE_HOOK(0x10305123u) REGS; LOADALL;
L_10305123:;
  /* 10305123 mov eax, dword ptr [0x1030b930] */ { const u32 m_ = (u32)(0x1030b930u); eax = (u32)(M32(m_)); }
  /* 10305128 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030512b je 0x1030513a */ if (ZF_) goto L_1030513a;
  /* 1030512d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030512f jne 0x1030515b */ if (!ZF_) goto L_1030515b;
  /* 10305131 cmp dword ptr [0x1030b934], 1 */ { const u32 m_ = (u32)(0x1030b934u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305138 jne 0x1030515b */ if (!ZF_) goto L_1030515b;
L_1030513a:;
  /* 1030513a push 0xfc */ { u32 v_ = 0xfcu; esp -= 4; M32(esp) = v_; }
  /* 1030513f call 0x10304fac */ esp -= 4; M32(esp) = 0x10305144u; SAVEALL; F_10304fac(c); ABI_CHECK(0x10304facu, 0x1030513fu); RETCHK(0x10305144u, 0x1030513fu); LOADALL;
  /* 10305144 mov eax, dword ptr [0x1030baa4] */ { const u32 m_ = (u32)(0x1030baa4u); eax = (u32)(M32(m_)); }
  /* 10305149 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030514b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030514c je 0x10305150 */ if (ZF_) goto L_10305150;
  /* 1030514e call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10305150u; SAVEALL; call_ind(c, t_); RETCHK(0x10305150u, 0x1030514eu); LOADALL; }
L_10305150:;
  /* 10305150 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 10305155 call 0x10304fac */ esp -= 4; M32(esp) = 0x1030515au; SAVEALL; F_10304fac(c); ABI_CHECK(0x10304facu, 0x10305155u); RETCHK(0x1030515au, 0x10305155u); LOADALL;
  /* 1030515a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1030515b:;
  /* 1030515b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030515c(CPU *c) {
  NATIVE_HOOK(0x1030515cu) REGS; LOADALL;
L_1030515c:;
  /* 1030515c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030515d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030515e xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10305160 mov edi, 0x1030baa8 */ { edi = (u32)(0x1030baa8u); }
L_10305165:;
  /* 10305165 cmp dword ptr [esi*8 + 0x1030b1c4], 1 */ { const u32 m_ = (u32)(esi * 8u + 0x1030b1c4u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030516d jne 0x1030518d */ if (!ZF_) goto L_1030518d;
  /* 1030516f lea eax, [esi*8 + 0x1030b1c0] */ eax = (u32)((u32)(esi * 8u + 0x1030b1c0u));
  /* 10305176 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 10305178 push 0xfa0 */ { u32 v_ = 0xfa0u; esp -= 4; M32(esp) = v_; }
  /* 1030517d push dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030517f add edi, 0x18 */ { u32 a_ = edi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10305182 call 0x10306f90 */ esp -= 4; M32(esp) = 0x10305187u; SAVEALL; F_10306f90(c); ABI_CHECK(0x10306f90u, 0x10305182u); RETCHK(0x10305187u, 0x10305182u); LOADALL;
  /* 10305187 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305189 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030518a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030518b je 0x10305199 */ if (ZF_) goto L_10305199;
L_1030518d:;
  /* 1030518d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1030518e cmp esi, 0x24 */ { u32 a_ = esi, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305191 jl 0x10305165 */ if (LT_) goto L_10305165;
  /* 10305193 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10305195 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10305196:;
  /* 10305196 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10305197 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10305198 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10305199:;
  /* 10305199 and dword ptr [esi*8 + 0x1030b1c0], 0 */ { const u32 m_ = (u32)(esi * 8u + 0x1030b1c0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103051a1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103051a3 jmp 0x10305196 */ goto L_10305196;
}

void F_103051fa(CPU *c) {
  NATIVE_HOOK(0x103051fau) REGS; LOADALL;
L_103051fa:;
  /* 103051fa push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 103051fb mov ebp, esp */ { ebp = (u32)(esp); }
  /* 103051fd mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10305200 push dword ptr [eax*8 + 0x1030b1c0] */ { const u32 m_ = (u32)(eax * 8u + 0x1030b1c0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10305207 call dword ptr [0x10309094] */ { const u32 m_ = (u32)(0x10309094u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030520du; SAVEALL; call_ind(c, t_); RETCHK(0x1030520du, 0x10305207u); LOADALL; }
  /* 1030520d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1030520e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030520f(CPU *c) {
  NATIVE_HOOK(0x1030520fu) REGS; LOADALL;
L_1030520f:;
  /* 1030520f push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10305211 push 0x10309870 */ { u32 v_ = 0x10309870u; esp -= 4; M32(esp) = v_; }
  /* 10305216 call 0x10303548 */ esp -= 4; M32(esp) = 0x1030521bu; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x10305216u); RETCHK(0x1030521bu, 0x10305216u); LOADALL;
  /* 1030521b mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 1030521e lea esi, [esi*8 + 0x1030b1c0] */ esi = (u32)((u32)(esi * 8u + 0x1030b1c0u));
  /* 10305225 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10305227 cmp dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305229 jne 0x1030529d */ if (!ZF_) goto L_1030529d;
  /* 1030522b push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 1030522d call 0x10303744 */ esp -= 4; M32(esp) = 0x10305232u; SAVEALL; F_10303744(c); ABI_CHECK(0x10303744u, 0x1030522du); RETCHK(0x10305232u, 0x1030522du); LOADALL;
  /* 10305232 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10305233 mov edi, eax */ { edi = (u32)(eax); }
  /* 10305235 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305237 jne 0x10305246 */ if (!ZF_) goto L_10305246;
  /* 10305239 call 0x1030735d */ esp -= 4; M32(esp) = 0x1030523eu; SAVEALL; F_1030735d(c); ABI_CHECK(0x1030735du, 0x10305239u); RETCHK(0x1030523eu, 0x10305239u); LOADALL;
  /* 1030523e mov dword ptr [eax], 0xc */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0xcu); }
  /* 10305244 jmp 0x10305285 */ goto L_10305285;
L_10305246:;
  /* 10305246 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 10305248 call 0x103052af */ esp -= 4; M32(esp) = 0x1030524du; SAVEALL; F_103052af(c); ABI_CHECK(0x103052afu, 0x10305248u); RETCHK(0x1030524du, 0x10305248u); LOADALL;
  /* 1030524d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030524e mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 10305251 cmp dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305253 jne 0x1030528d */ if (!ZF_) goto L_1030528d;
  /* 10305255 push 0xfa0 */ { u32 v_ = 0xfa0u; esp -= 4; M32(esp) = v_; }
  /* 1030525a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030525b call 0x10306f90 */ esp -= 4; M32(esp) = 0x10305260u; SAVEALL; F_10306f90(c); ABI_CHECK(0x10306f90u, 0x1030525bu); RETCHK(0x10305260u, 0x1030525bu); LOADALL;
  /* 10305260 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10305261 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10305262 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305264 jne 0x10305289 */ if (!ZF_) goto L_10305289;
  /* 10305266 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10305267 call 0x10303326 */ esp -= 4; M32(esp) = 0x1030526cu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10305267u); RETCHK(0x1030526cu, 0x10305267u); LOADALL;
  /* 1030526c call 0x1030735d */ esp -= 4; M32(esp) = 0x10305271u; SAVEALL; F_1030735d(c); ABI_CHECK(0x1030735du, 0x1030526cu); RETCHK(0x10305271u, 0x1030526cu); LOADALL;
  /* 10305271 mov dword ptr [eax], 0xc */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0xcu); }
  /* 10305277 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10305279 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 1030527c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030527d call 0x10302fe2 */ esp -= 4; M32(esp) = 0x10305282u; SAVEALL; F_10302fe2(c); ABI_CHECK(0x10302fe2u, 0x1030527du); RETCHK(0x10305282u, 0x1030527du); LOADALL;
  /* 10305282 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10305285:;
  /* 10305285 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10305287 jmp 0x103052a0 */ goto L_103052a0;
L_10305289:;
  /* 10305289 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 1030528b jmp 0x10305294 */ goto L_10305294;
L_1030528d:;
  /* 1030528d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030528e call 0x10303326 */ esp -= 4; M32(esp) = 0x10305293u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x1030528eu); RETCHK(0x10305293u, 0x1030528eu); LOADALL;
  /* 10305293 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10305294:;
  /* 10305294 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10305298 call 0x103052a6 */ esp -= 4; M32(esp) = 0x1030529du; SAVEALL; F_103052a6(c); ABI_CHECK(0x103052a6u, 0x10305298u); RETCHK(0x1030529du, 0x10305298u); LOADALL;
L_1030529d:;
  /* 1030529d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030529f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_103052a0:;
  /* 103052a0 call 0x10303583 */ esp -= 4; M32(esp) = 0x103052a5u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x103052a0u); RETCHK(0x103052a5u, 0x103052a0u); LOADALL;
  /* 103052a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103052a6(CPU *c) {
  NATIVE_HOOK(0x103052a6u) REGS; LOADALL;
L_103052a6:;
  /* 103052a6 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 103052a8 call 0x103051fa */ esp -= 4; M32(esp) = 0x103052adu; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x103052a8u); RETCHK(0x103052adu, 0x103052a8u); LOADALL;
  /* 103052ad pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103052ae ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103052af(CPU *c) {
  NATIVE_HOOK(0x103052afu) REGS; LOADALL;
L_103052af:;
  /* 103052af push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 103052b0 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 103052b2 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103052b5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103052b6 lea esi, [eax*8 + 0x1030b1c0] */ esi = (u32)((u32)(eax * 8u + 0x1030b1c0u));
  /* 103052bd cmp dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103052c0 jne 0x103052d5 */ if (!ZF_) goto L_103052d5;
  /* 103052c2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103052c3 call 0x1030520f */ esp -= 4; M32(esp) = 0x103052c8u; SAVEALL; F_1030520f(c); ABI_CHECK(0x1030520fu, 0x103052c3u); RETCHK(0x103052c8u, 0x103052c3u); LOADALL;
  /* 103052c8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103052ca pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103052cb jne 0x103052d5 */ if (!ZF_) goto L_103052d5;
  /* 103052cd push 0x11 */ { u32 v_ = 0x11u; esp -= 4; M32(esp) = v_; }
  /* 103052cf call 0x103032f3 */ esp -= 4; M32(esp) = 0x103052d4u; SAVEALL; F_103032f3(c); ABI_CHECK(0x103032f3u, 0x103052cfu); RETCHK(0x103052d4u, 0x103052cfu); LOADALL;
  /* 103052d4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103052d5:;
  /* 103052d5 push dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103052d7 call dword ptr [0x10309098] */ { const u32 m_ = (u32)(0x10309098u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103052ddu; SAVEALL; call_ind(c, t_); RETCHK(0x103052ddu, 0x103052d7u); LOADALL; }
  /* 103052dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103052de pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 103052df ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103052e0(CPU *c) {
  NATIVE_HOOK(0x103052e0u) REGS; LOADALL;
L_103052e0:;
  /* 103052e0 push 0x140 */ { u32 v_ = 0x140u; esp -= 4; M32(esp) = v_; }
  /* 103052e5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 103052e7 push dword ptr [0x1030c03c] */ { const u32 m_ = (u32)(0x1030c03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103052ed call dword ptr [0x10309030] */ { const u32 m_ = (u32)(0x10309030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103052f3u; SAVEALL; call_ind(c, t_); RETCHK(0x103052f3u, 0x103052edu); LOADALL; }
  /* 103052f3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103052f5 mov dword ptr [0x1030c028], eax */ { const u32 m_ = (u32)(0x1030c028u); M32(m_) = (u32)(eax); }
  /* 103052fa jne 0x103052fd */ if (!ZF_) goto L_103052fd;
  /* 103052fc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103052fd:;
  /* 103052fd mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10305301 and dword ptr [0x1030c020], 0 */ { const u32 m_ = (u32)(0x1030c020u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10305308 and dword ptr [0x1030c024], 0 */ { const u32 m_ = (u32)(0x1030c024u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1030530f mov dword ptr [0x1030c030], eax */ { const u32 m_ = (u32)(0x1030c030u); M32(m_) = (u32)(eax); }
  /* 10305314 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10305316 mov dword ptr [0x1030c02c], ecx */ { const u32 m_ = (u32)(0x1030c02cu); M32(m_) = (u32)(ecx); }
  /* 1030531c mov dword ptr [0x1030c034], 0x10 */ { const u32 m_ = (u32)(0x1030c034u); M32(m_) = (u32)(0x10u); }
  /* 10305326 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10305327 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10305328(CPU *c) {
  NATIVE_HOOK(0x10305328u) REGS; LOADALL;
L_10305328:;
  /* 10305328 mov eax, dword ptr [0x1030c024] */ { const u32 m_ = (u32)(0x1030c024u); eax = (u32)(M32(m_)); }
  /* 1030532d lea ecx, [eax + eax*4] */ ecx = (u32)((u32)(eax + eax * 4u));
  /* 10305330 mov eax, dword ptr [0x1030c028] */ { const u32 m_ = (u32)(0x1030c028u); eax = (u32)(M32(m_)); }
  /* 10305335 lea ecx, [eax + ecx*4] */ ecx = (u32)((u32)(eax + ecx * 4u));
  /* 10305338 jmp 0x1030534c */ goto L_1030534c;
L_1030533a:;
  /* 1030533a mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 1030533e sub edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10305341 cmp edx, 0x100000 */ { u32 a_ = edx, b_ = 0x100000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305347 jb 0x10305352 */ if (CF_) goto L_10305352;
  /* 10305349 add eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_1030534c:;
  /* 1030534c cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030534e jb 0x1030533a */ if (CF_) goto L_1030533a;
  /* 10305350 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10305352:;
  /* 10305352 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10305353(CPU *c) {
  NATIVE_HOOK(0x10305353u) REGS; LOADALL;
L_10305353:;
  /* 10305353 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10305354 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10305356 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10305359 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1030535c mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 1030535f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10305360 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10305363 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10305364 mov edi, esi */ { edi = (u32)(esi); }
  /* 10305366 sub edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10305369 add esi, -4 */ { u32 a_ = esi, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1030536c shr edi, 0xf */ { u32 n_ = (15u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 1030536f mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10305371 imul ecx, ecx, 0x204 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x204u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10305377 lea ecx, [ecx + eax + 0x144] */ ecx = (u32)((u32)(ecx + eax + 0x144u));
  /* 1030537e mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 10305381 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 10305383 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10305384 test cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10305387 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 1030538a jne 0x10305667 */ if (!ZF_) goto L_10305667;
  /* 10305390 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10305391 lea ebx, [ecx + esi] */ ebx = (u32)((u32)(ecx + esi));
  /* 10305394 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 10305396 mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 10305399 mov edx, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 1030539c mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 1030539f mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 103053a2 test dl, 1 */ { u32 a_ = (edx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 103053a5 mov dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 103053a8 jne 0x1030541e */ if (!ZF_) goto L_1030541e;
  /* 103053aa sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 103053ad dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 103053ae cmp edx, 0x3f */ { u32 a_ = edx, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103053b1 jbe 0x103053b6 */ if ((CF_|ZF_)) goto L_103053b6;
  /* 103053b3 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 103053b5 pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
L_103053b6:;
  /* 103053b6 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 103053b9 cmp ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103053bc jne 0x10305400 */ if (!ZF_) goto L_10305400;
  /* 103053be cmp edx, 0x20 */ { u32 a_ = edx, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103053c1 mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 103053c6 jae 0x103053e1 */ if (!CF_) goto L_103053e1;
  /* 103053c8 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 103053ca shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 103053cc lea ecx, [edx + eax + 4] */ ecx = (u32)((u32)(edx + eax + 0x4u));
  /* 103053d0 not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 103053d2 and dword ptr [eax + edi*4 + 0x44], ebx */ { const u32 m_ = (u32)(eax + edi * 4u + 0x44u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103053d6 dec byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 103053d8 jne 0x103053fd */ if (!ZF_) goto L_103053fd;
  /* 103053da mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 103053dd and dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103053df jmp 0x103053fd */ goto L_103053fd;
L_103053e1:;
  /* 103053e1 lea ecx, [edx - 0x20] */ ecx = (u32)((u32)(edx + 0xffffffe0u));
  /* 103053e4 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 103053e6 lea ecx, [edx + eax + 4] */ ecx = (u32)((u32)(edx + eax + 0x4u));
  /* 103053ea not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 103053ec and dword ptr [eax + edi*4 + 0xc4], ebx */ { const u32 m_ = (u32)(eax + edi * 4u + 0xc4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103053f3 dec byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 103053f5 jne 0x103053fd */ if (!ZF_) goto L_103053fd;
  /* 103053f7 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 103053fa and dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_103053fd:;
  /* 103053fd mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
L_10305400:;
  /* 10305400 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10305403 mov ebx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10305406 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10305409 add ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1030540c mov dword ptr [edx + 4], ebx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 1030540f mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10305412 mov ebx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10305415 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10305418 mov dword ptr [ebx + 8], edx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(edx); }
  /* 1030541b mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
L_1030541e:;
  /* 1030541e mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10305420 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10305423 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10305424 cmp edx, 0x3f */ { u32 a_ = edx, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305427 jbe 0x1030542c */ if ((CF_|ZF_)) goto L_1030542c;
  /* 10305429 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 1030542b pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
L_1030542c:;
  /* 1030542c mov ebx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ebx = (u32)(M32(m_)); }
  /* 1030542f and ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10305432 mov dword ptr [ebp - 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ebx); }
  /* 10305435 jne 0x103054ca */ if (!ZF_) goto L_103054ca;
  /* 1030543b sub esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1030543e mov ebx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ebx = (u32)(M32(m_)); }
  /* 10305441 sar ebx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ebx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10305444 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10305446 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 10305449 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1030544a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030544b cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030544d jbe 0x10305451 */ if ((CF_|ZF_)) goto L_10305451;
  /* 1030544f mov ebx, esi */ { ebx = (u32)(esi); }
L_10305451:;
  /* 10305451 add ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10305454 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10305456 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10305459 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1030545a cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030545c mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 1030545f jbe 0x10305463 */ if ((CF_|ZF_)) goto L_10305463;
  /* 10305461 mov edx, esi */ { edx = (u32)(esi); }
L_10305463:;
  /* 10305463 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305465 je 0x103054c5 */ if (ZF_) goto L_103054c5;
  /* 10305467 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1030546a mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 1030546d cmp esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305470 jne 0x103054ad */ if (!ZF_) goto L_103054ad;
  /* 10305472 cmp ebx, 0x20 */ { u32 a_ = ebx, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305475 mov esi, 0x80000000 */ { esi = (u32)(0x80000000u); }
  /* 1030547a jae 0x10305493 */ if (!CF_) goto L_10305493;
  /* 1030547c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 1030547e shr esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10305480 not esi */ { esi = (u32)(~esi & 0xffffffffu); }
  /* 10305482 and dword ptr [eax + edi*4 + 0x44], esi */ { const u32 m_ = (u32)(eax + edi * 4u + 0x44u); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10305486 dec byte ptr [ebx + eax + 4] */ { const u32 m_ = (u32)(ebx + eax + 0x4u); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 1030548a jne 0x103054ad */ if (!ZF_) goto L_103054ad;
  /* 1030548c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1030548f and dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10305491 jmp 0x103054ad */ goto L_103054ad;
L_10305493:;
  /* 10305493 lea ecx, [ebx - 0x20] */ ecx = (u32)((u32)(ebx + 0xffffffe0u));
  /* 10305496 shr esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10305498 not esi */ { esi = (u32)(~esi & 0xffffffffu); }
  /* 1030549a and dword ptr [eax + edi*4 + 0xc4], esi */ { const u32 m_ = (u32)(eax + edi * 4u + 0xc4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103054a1 dec byte ptr [ebx + eax + 4] */ { const u32 m_ = (u32)(ebx + eax + 0x4u); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 103054a5 jne 0x103054ad */ if (!ZF_) goto L_103054ad;
  /* 103054a7 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 103054aa and dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_103054ad:;
  /* 103054ad mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 103054b0 mov esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); esi = (u32)(M32(m_)); }
  /* 103054b3 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 103054b6 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 103054b9 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 103054bc mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 103054bf mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 103054c2 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
L_103054c5:;
  /* 103054c5 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 103054c8 jmp 0x103054cd */ goto L_103054cd;
L_103054ca:;
  /* 103054ca mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_103054cd:;
  /* 103054cd cmp dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103054d1 jne 0x103054db */ if (!ZF_) goto L_103054db;
  /* 103054d3 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103054d5 je 0x1030555b */ if (ZF_) goto L_1030555b;
L_103054db:;
  /* 103054db mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 103054de lea ecx, [ecx + edx*8] */ ecx = (u32)((u32)(ecx + edx * 8u));
  /* 103054e1 mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 103054e4 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 103054e7 mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 103054ea mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 103054ed mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 103054f0 mov dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(esi); }
  /* 103054f3 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 103054f6 cmp ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103054f9 jne 0x1030555b */ if (!ZF_) goto L_1030555b;
  /* 103054fb mov cl, byte ptr [edx + eax + 4] */ { const u32 m_ = (u32)(edx + eax + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103054ff mov byte ptr [ebp + 0xf], cl */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10305502 inc cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 10305504 cmp edx, 0x20 */ { u32 a_ = edx, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305507 mov byte ptr [edx + eax + 4], cl */ { const u32 m_ = (u32)(edx + eax + 0x4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 1030550b jae 0x10305532 */ if (!CF_) goto L_10305532;
  /* 1030550d cmp byte ptr [ebp + 0xf], 0 */ { const u32 m_ = (u32)(ebp + 0xfu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10305511 jne 0x10305521 */ if (!ZF_) goto L_10305521;
  /* 10305513 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10305515 mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 1030551a shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 1030551c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1030551f or dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10305521:;
  /* 10305521 mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 10305526 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10305528 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 1030552a lea eax, [eax + edi*4 + 0x44] */ eax = (u32)((u32)(eax + edi * 4u + 0x44u));
  /* 1030552e or dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10305530 jmp 0x1030555b */ goto L_1030555b;
L_10305532:;
  /* 10305532 cmp byte ptr [ebp + 0xf], 0 */ { const u32 m_ = (u32)(ebp + 0xfu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10305536 jne 0x10305548 */ if (!ZF_) goto L_10305548;
  /* 10305538 lea ecx, [edx - 0x20] */ ecx = (u32)((u32)(edx + 0xffffffe0u));
  /* 1030553b mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 10305540 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10305542 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10305545 or dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10305548:;
  /* 10305548 lea ecx, [edx - 0x20] */ ecx = (u32)((u32)(edx + 0xffffffe0u));
  /* 1030554b mov edx, 0x80000000 */ { edx = (u32)(0x80000000u); }
  /* 10305550 shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10305552 lea eax, [eax + edi*4 + 0xc4] */ eax = (u32)((u32)(eax + edi * 4u + 0xc4u));
  /* 10305559 or dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1030555b:;
  /* 1030555b mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 1030555e mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10305560 mov dword ptr [eax + esi - 4], eax */ { const u32 m_ = (u32)(eax + esi + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10305564 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 10305567 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10305569 jne 0x10305666 */ if (!ZF_) goto L_10305666;
  /* 1030556f mov eax, dword ptr [0x1030c020] */ { const u32 m_ = (u32)(0x1030c020u); eax = (u32)(M32(m_)); }
  /* 10305574 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305576 je 0x10305658 */ if (ZF_) goto L_10305658;
  /* 1030557c mov ecx, dword ptr [0x1030c038] */ { const u32 m_ = (u32)(0x1030c038u); ecx = (u32)(M32(m_)); }
  /* 10305582 mov esi, dword ptr [0x10309000] */ { const u32 m_ = (u32)(0x10309000u); esi = (u32)(M32(m_)); }
  /* 10305588 push 0x4000 */ { u32 v_ = 0x4000u; esp -= 4; M32(esp) = v_; }
  /* 1030558d shl ecx, 0xf */ { u32 n_ = (15u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10305590 add ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10305593 mov ebx, 0x8000 */ { ebx = (u32)(0x8000u); }
  /* 10305598 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10305599 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1030559a call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x1030559cu; SAVEALL; call_ind(c, t_); RETCHK(0x1030559cu, 0x1030559au); LOADALL; }
  /* 1030559c mov ecx, dword ptr [0x1030c038] */ { const u32 m_ = (u32)(0x1030c038u); ecx = (u32)(M32(m_)); }
  /* 103055a2 mov eax, dword ptr [0x1030c020] */ { const u32 m_ = (u32)(0x1030c020u); eax = (u32)(M32(m_)); }
  /* 103055a7 mov edx, 0x80000000 */ { edx = (u32)(0x80000000u); }
  /* 103055ac shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 103055ae or dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103055b1 mov eax, dword ptr [0x1030c020] */ { const u32 m_ = (u32)(0x1030c020u); eax = (u32)(M32(m_)); }
  /* 103055b6 mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 103055b9 mov ecx, dword ptr [0x1030c038] */ { const u32 m_ = (u32)(0x1030c038u); ecx = (u32)(M32(m_)); }
  /* 103055bf and dword ptr [eax + ecx*4 + 0xc4], 0 */ { const u32 m_ = (u32)(eax + ecx * 4u + 0xc4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103055c7 mov eax, dword ptr [0x1030c020] */ { const u32 m_ = (u32)(0x1030c020u); eax = (u32)(M32(m_)); }
  /* 103055cc mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 103055cf dec byte ptr [eax + 0x43] */ { const u32 m_ = (u32)(eax + 0x43u); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 103055d2 mov eax, dword ptr [0x1030c020] */ { const u32 m_ = (u32)(0x1030c020u); eax = (u32)(M32(m_)); }
  /* 103055d7 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 103055da cmp byte ptr [ecx + 0x43], 0 */ { const u32 m_ = (u32)(ecx + 0x43u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 103055de jne 0x103055e9 */ if (!ZF_) goto L_103055e9;
  /* 103055e0 and dword ptr [eax + 4], 0xfffffffe */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103055e4 mov eax, dword ptr [0x1030c020] */ { const u32 m_ = (u32)(0x1030c020u); eax = (u32)(M32(m_)); }
L_103055e9:;
  /* 103055e9 cmp dword ptr [eax + 8], -1 */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103055ed jne 0x10305658 */ if (!ZF_) goto L_10305658;
  /* 103055ef push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103055f0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 103055f2 push dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103055f5 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x103055f7u; SAVEALL; call_ind(c, t_); RETCHK(0x103055f7u, 0x103055f5u); LOADALL; }
  /* 103055f7 mov eax, dword ptr [0x1030c020] */ { const u32 m_ = (u32)(0x1030c020u); eax = (u32)(M32(m_)); }
  /* 103055fc push dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103055ff push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10305601 push dword ptr [0x1030c03c] */ { const u32 m_ = (u32)(0x1030c03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10305607 call dword ptr [0x10309018] */ { const u32 m_ = (u32)(0x10309018u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030560du; SAVEALL; call_ind(c, t_); RETCHK(0x1030560du, 0x10305607u); LOADALL; }
  /* 1030560d mov eax, dword ptr [0x1030c024] */ { const u32 m_ = (u32)(0x1030c024u); eax = (u32)(M32(m_)); }
  /* 10305612 mov edx, dword ptr [0x1030c028] */ { const u32 m_ = (u32)(0x1030c028u); edx = (u32)(M32(m_)); }
  /* 10305618 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 1030561b shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 1030561e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10305620 mov eax, dword ptr [0x1030c020] */ { const u32 m_ = (u32)(0x1030c020u); eax = (u32)(M32(m_)); }
  /* 10305625 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10305627 lea ecx, [ecx + edx - 0x14] */ ecx = (u32)((u32)(ecx + edx + 0xffffffecu));
  /* 1030562b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1030562c lea ecx, [eax + 0x14] */ ecx = (u32)((u32)(eax + 0x14u));
  /* 1030562f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10305630 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10305631 call 0x10306420 */ esp -= 4; M32(esp) = 0x10305636u; SAVEALL; F_10306420(c); ABI_CHECK(0x10306420u, 0x10305631u); RETCHK(0x10305636u, 0x10305631u); LOADALL;
  /* 10305636 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10305639 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1030563c dec dword ptr [0x1030c024] */ { const u32 m_ = (u32)(0x1030c024u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10305642 cmp eax, dword ptr [0x1030c020] */ { const u32 m_ = (u32)(0x1030c020u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305648 jbe 0x1030564e */ if ((CF_|ZF_)) goto L_1030564e;
  /* 1030564a sub dword ptr [ebp + 8], 0x14 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
L_1030564e:;
  /* 1030564e mov eax, dword ptr [0x1030c028] */ { const u32 m_ = (u32)(0x1030c028u); eax = (u32)(M32(m_)); }
  /* 10305653 mov dword ptr [0x1030c030], eax */ { const u32 m_ = (u32)(0x1030c030u); M32(m_) = (u32)(eax); }
L_10305658:;
  /* 10305658 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030565b mov dword ptr [0x1030c020], eax */ { const u32 m_ = (u32)(0x1030c020u); M32(m_) = (u32)(eax); }
  /* 10305660 mov dword ptr [0x1030c038], edi */ { const u32 m_ = (u32)(0x1030c038u); M32(m_) = (u32)(edi); }
L_10305666:;
  /* 10305666 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_10305667:;
  /* 10305667 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10305668 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10305669 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030566a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030566b(CPU *c) {
  NATIVE_HOOK(0x1030566bu) REGS; LOADALL;
L_1030566b:;
  /* 1030566b mov eax, dword ptr [0x1030c024] */ { const u32 m_ = (u32)(0x1030c024u); eax = (u32)(M32(m_)); }
  /* 10305670 mov ecx, dword ptr [0x1030c034] */ { const u32 m_ = (u32)(0x1030c034u); ecx = (u32)(M32(m_)); }
  /* 10305676 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10305677 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10305679 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030567b jne 0x103056b1 */ if (!ZF_) goto L_103056b1;
  /* 1030567d lea eax, [ecx + ecx*4 + 0x50] */ eax = (u32)((u32)(ecx + ecx * 4u + 0x50u));
  /* 10305681 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10305684 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10305685 push dword ptr [0x1030c028] */ { const u32 m_ = (u32)(0x1030c028u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030568b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030568c push dword ptr [0x1030c03c] */ { const u32 m_ = (u32)(0x1030c03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10305692 call dword ptr [0x103090a0] */ { const u32 m_ = (u32)(0x103090a0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10305698u; SAVEALL; call_ind(c, t_); RETCHK(0x10305698u, 0x10305692u); LOADALL; }
  /* 10305698 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030569a jne 0x103056a0 */ if (!ZF_) goto L_103056a0;
  /* 1030569c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030569e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030569f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103056a0:;
  /* 103056a0 add dword ptr [0x1030c034], 0x10 */ { const u32 m_ = (u32)(0x1030c034u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 103056a7 mov dword ptr [0x1030c028], eax */ { const u32 m_ = (u32)(0x1030c028u); M32(m_) = (u32)(eax); }
  /* 103056ac mov eax, dword ptr [0x1030c024] */ { const u32 m_ = (u32)(0x1030c024u); eax = (u32)(M32(m_)); }
L_103056b1:;
  /* 103056b1 mov ecx, dword ptr [0x1030c028] */ { const u32 m_ = (u32)(0x1030c028u); ecx = (u32)(M32(m_)); }
  /* 103056b7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103056b8 push 0x41c4 */ { u32 v_ = 0x41c4u; esp -= 4; M32(esp) = v_; }
  /* 103056bd push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 103056bf push dword ptr [0x1030c03c] */ { const u32 m_ = (u32)(0x1030c03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103056c5 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 103056c8 lea esi, [ecx + eax*4] */ esi = (u32)((u32)(ecx + eax * 4u));
  /* 103056cb call dword ptr [0x10309030] */ { const u32 m_ = (u32)(0x10309030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103056d1u; SAVEALL; call_ind(c, t_); RETCHK(0x103056d1u, 0x103056cbu); LOADALL; }
  /* 103056d1 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103056d3 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 103056d6 jne 0x103056dc */ if (!ZF_) goto L_103056dc;
L_103056d8:;
  /* 103056d8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103056da jmp 0x1030571f */ goto L_1030571f;
L_103056dc:;
  /* 103056dc push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 103056de push 0x2000 */ { u32 v_ = 0x2000u; esp -= 4; M32(esp) = v_; }
  /* 103056e3 push 0x100000 */ { u32 v_ = 0x100000u; esp -= 4; M32(esp) = v_; }
  /* 103056e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103056e9 call dword ptr [0x1030909c] */ { const u32 m_ = (u32)(0x1030909cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103056efu; SAVEALL; call_ind(c, t_); RETCHK(0x103056efu, 0x103056e9u); LOADALL; }
  /* 103056ef cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103056f1 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 103056f4 jne 0x10305708 */ if (!ZF_) goto L_10305708;
  /* 103056f6 push dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103056f9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103056fa push dword ptr [0x1030c03c] */ { const u32 m_ = (u32)(0x1030c03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10305700 call dword ptr [0x10309018] */ { const u32 m_ = (u32)(0x10309018u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10305706u; SAVEALL; call_ind(c, t_); RETCHK(0x10305706u, 0x10305700u); LOADALL; }
  /* 10305706 jmp 0x103056d8 */ goto L_103056d8;
L_10305708:;
  /* 10305708 or dword ptr [esi + 8], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1030570c mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 1030570e mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 10305711 inc dword ptr [0x1030c024] */ { const u32 m_ = (u32)(0x1030c024u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10305717 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 1030571a or dword ptr [eax], 0xffffffff */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1030571d mov eax, esi */ { eax = (u32)(esi); }
L_1030571f:;
  /* 1030571f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10305720 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10305721 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10305722(CPU *c) {
  NATIVE_HOOK(0x10305722u) REGS; LOADALL;
L_10305722:;
  /* 10305722 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10305723 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10305725 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10305726 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10305727 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1030572a mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030572d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1030572e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030572f mov esi, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); esi = (u32)(M32(m_)); }
  /* 10305732 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10305733 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10305735 jmp 0x1030573a */ goto L_1030573a;
L_10305737:;
  /* 10305737 shl eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10305739 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1030573a:;
  /* 1030573a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030573c jge 0x10305737 */ if (!LT_) goto L_10305737;
  /* 1030573e mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10305740 imul eax, eax, 0x204 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x204u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10305746 lea eax, [eax + esi + 0x144] */ eax = (u32)((u32)(eax + esi + 0x144u));
  /* 1030574d push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 1030574f mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10305752 pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
L_10305753:;
  /* 10305753 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 10305756 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 10305759 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1030575c dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1030575d jne 0x10305753 */ if (!ZF_) goto L_10305753;
  /* 1030575f push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10305761 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 10305763 push 0x1000 */ { u32 v_ = 0x1000u; esp -= 4; M32(esp) = v_; }
  /* 10305768 shl edi, 0xf */ { u32 n_ = (15u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 1030576b add edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1030576e push 0x8000 */ { u32 v_ = 0x8000u; esp -= 4; M32(esp) = v_; }
  /* 10305773 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10305774 call dword ptr [0x1030909c] */ { const u32 m_ = (u32)(0x1030909cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030577au; SAVEALL; call_ind(c, t_); RETCHK(0x1030577au, 0x10305774u); LOADALL; }
  /* 1030577a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030577c jne 0x10305786 */ if (!ZF_) goto L_10305786;
  /* 1030577e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10305781 jmp 0x10305823 */ goto L_10305823;
L_10305786:;
  /* 10305786 lea edx, [edi + 0x7000] */ edx = (u32)((u32)(edi + 0x7000u));
  /* 1030578c cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030578e mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 10305791 ja 0x103057d6 */ if (!(CF_|ZF_)) goto L_103057d6;
  /* 10305793 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10305795 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10305797 shr ecx, 0xc */ { u32 n_ = (12u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1030579a lea eax, [edi + 0x10] */ eax = (u32)((u32)(edi + 0x10u));
  /* 1030579d inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1030579e:;
  /* 1030579e or dword ptr [eax - 8], 0xffffffff */ { const u32 m_ = (u32)(eax + 0xfffffff8u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103057a2 or dword ptr [eax + 0xfec], 0xffffffff */ { const u32 m_ = (u32)(eax + 0xfecu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103057a9 lea edx, [eax + 0xffc] */ edx = (u32)((u32)(eax + 0xffcu));
  /* 103057af mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 103057b1 lea edx, [eax - 0x1004] */ edx = (u32)((u32)(eax + 0xffffeffcu));
  /* 103057b7 mov dword ptr [eax - 4], 0xff0 */ { const u32 m_ = (u32)(eax + 0xfffffffcu); M32(m_) = (u32)(0xff0u); }
  /* 103057be mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 103057c1 mov dword ptr [eax + 0xfe8], 0xff0 */ { const u32 m_ = (u32)(eax + 0xfe8u); M32(m_) = (u32)(0xff0u); }
  /* 103057cb add eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103057d0 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 103057d1 jne 0x1030579e */ if (!ZF_) goto L_1030579e;
  /* 103057d3 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
L_103057d6:;
  /* 103057d6 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 103057d9 add eax, 0x1f8 */ { u32 a_ = eax, b_ = 0x1f8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103057de lea ecx, [edi + 0xc] */ ecx = (u32)((u32)(edi + 0xcu));
  /* 103057e1 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 103057e4 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 103057e7 lea ecx, [edx + 0xc] */ ecx = (u32)((u32)(edx + 0xcu));
  /* 103057ea mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 103057ed mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 103057f0 and dword ptr [esi + ebx*4 + 0x44], 0 */ { const u32 m_ = (u32)(esi + ebx * 4u + 0x44u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103057f5 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 103057f7 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103057f8 mov dword ptr [esi + ebx*4 + 0xc4], edi */ { const u32 m_ = (u32)(esi + ebx * 4u + 0xc4u); M32(m_) = (u32)(edi); }
  /* 103057ff mov al, byte ptr [esi + 0x43] */ { const u32 m_ = (u32)(esi + 0x43u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10305802 mov cl, al */ { ecx = (ecx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 10305804 inc cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 10305806 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10305808 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030580b mov byte ptr [esi + 0x43], cl */ { const u32 m_ = (u32)(esi + 0x43u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 1030580e jne 0x10305813 */ if (!ZF_) goto L_10305813;
  /* 10305810 or dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10305813:;
  /* 10305813 mov edx, 0x80000000 */ { edx = (u32)(0x80000000u); }
  /* 10305818 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 1030581a shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 1030581c not edx */ { edx = (u32)(~edx & 0xffffffffu); }
  /* 1030581e and dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10305821 mov eax, ebx */ { eax = (u32)(ebx); }
L_10305823:;
  /* 10305823 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10305824 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10305825 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10305826 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10305827 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10305828(CPU *c) {
  NATIVE_HOOK(0x10305828u) REGS; LOADALL;
L_10305828:;
  /* 10305828 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10305829 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1030582b sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1030582e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10305831 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 10305834 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10305835 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10305836 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10305839 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030583a mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 1030583d mov edx, edi */ { edx = (u32)(edi); }
  /* 1030583f sub edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10305842 add esi, 0x17 */ { u32 a_ = esi, b_ = 0x17u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10305845 shr edx, 0xf */ { u32 n_ = (15u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10305848 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 1030584a imul ecx, ecx, 0x204 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x204u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10305850 lea ecx, [ecx + eax + 0x144] */ ecx = (u32)((u32)(ecx + eax + 0x144u));
  /* 10305857 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 1030585a mov ecx, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 1030585d and esi, 0xfffffff0 */ { u32 a_ = esi, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10305860 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10305861 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305863 lea edi, [ecx + edi - 4] */ edi = (u32)((u32)(ecx + edi + 0xfffffffcu));
  /* 10305867 mov ebx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (u32)(M32(m_)); }
  /* 10305869 mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 1030586c mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 1030586f jle 0x103059ca */ if ((ZF_|LT_)) goto L_103059ca;
  /* 10305875 test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10305878 jne 0x103059c3 */ if (!ZF_) goto L_103059c3;
  /* 1030587e add ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10305880 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305882 jg 0x103059c3 */ if (!(ZF_|LT_)) goto L_103059c3;
  /* 10305888 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 1030588b sar ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1030588e dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1030588f cmp ecx, 0x3f */ { u32 a_ = ecx, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305892 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 10305895 jbe 0x1030589d */ if ((CF_|ZF_)) goto L_1030589d;
  /* 10305897 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10305899 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030589a mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
L_1030589d:;
  /* 1030589d mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 103058a0 cmp ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103058a3 jne 0x103058e8 */ if (!ZF_) goto L_103058e8;
  /* 103058a5 cmp ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103058a8 mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 103058ad jae 0x103058c9 */ if (!CF_) goto L_103058c9;
  /* 103058af shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 103058b1 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 103058b4 lea ecx, [ecx + eax + 4] */ ecx = (u32)((u32)(ecx + eax + 0x4u));
  /* 103058b8 not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 103058ba and dword ptr [eax + edx*4 + 0x44], ebx */ { const u32 m_ = (u32)(eax + edx * 4u + 0x44u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103058be dec byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 103058c0 jne 0x103058e8 */ if (!ZF_) goto L_103058e8;
  /* 103058c2 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 103058c5 and dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103058c7 jmp 0x103058e8 */ goto L_103058e8;
L_103058c9:;
  /* 103058c9 add ecx, -0x20 */ { u32 a_ = ecx, b_ = 0xffffffe0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 103058cc shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 103058ce mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 103058d1 lea ecx, [ecx + eax + 4] */ ecx = (u32)((u32)(ecx + eax + 0x4u));
  /* 103058d5 not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 103058d7 and dword ptr [eax + edx*4 + 0xc4], ebx */ { const u32 m_ = (u32)(eax + edx * 4u + 0xc4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103058de dec byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 103058e0 jne 0x103058e8 */ if (!ZF_) goto L_103058e8;
  /* 103058e2 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 103058e5 and dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_103058e8:;
  /* 103058e8 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 103058eb mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 103058ee mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 103058f1 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 103058f4 mov edi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edi = (u32)(M32(m_)); }
  /* 103058f7 mov dword ptr [ecx + 8], edi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edi); }
  /* 103058fa mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 103058fd sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 103058ff add dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10305902 cmp dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305906 jle 0x103059b1 */ if ((ZF_|LT_)) goto L_103059b1;
  /* 1030590c mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 1030590f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10305912 sar edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10305915 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10305916 cmp edi, 0x3f */ { u32 a_ = edi, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305919 lea ecx, [ecx + esi - 4] */ ecx = (u32)((u32)(ecx + esi + 0xfffffffcu));
  /* 1030591d jbe 0x10305922 */ if ((CF_|ZF_)) goto L_10305922;
  /* 1030591f push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10305921 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_10305922:;
  /* 10305922 mov ebx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ebx = (u32)(M32(m_)); }
  /* 10305925 lea ebx, [ebx + edi*8] */ ebx = (u32)((u32)(ebx + edi * 8u));
  /* 10305928 mov dword ptr [ebp + 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 1030592b mov ebx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 1030592e mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 10305931 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 10305934 mov dword ptr [ecx + 8], ebx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10305937 mov dword ptr [ebx + 4], ecx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 1030593a mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 1030593d mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10305940 mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10305943 cmp ebx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305946 jne 0x1030599f */ if (!ZF_) goto L_1030599f;
  /* 10305948 mov cl, byte ptr [edi + eax + 4] */ { const u32 m_ = (u32)(edi + eax + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030594c mov byte ptr [ebp + 0x13], cl */ { const u32 m_ = (u32)(ebp + 0x13u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 1030594f inc cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 10305951 cmp edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305954 mov byte ptr [edi + eax + 4], cl */ { const u32 m_ = (u32)(edi + eax + 0x4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10305958 jae 0x10305976 */ if (!CF_) goto L_10305976;
  /* 1030595a cmp byte ptr [ebp + 0x13], 0 */ { const u32 m_ = (u32)(ebp + 0x13u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1030595e jne 0x1030596e */ if (!ZF_) goto L_1030596e;
  /* 10305960 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10305962 mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 10305967 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10305969 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1030596c or dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1030596e:;
  /* 1030596e lea eax, [eax + edx*4 + 0x44] */ eax = (u32)((u32)(eax + edx * 4u + 0x44u));
  /* 10305972 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10305974 jmp 0x10305996 */ goto L_10305996;
L_10305976:;
  /* 10305976 cmp byte ptr [ebp + 0x13], 0 */ { const u32 m_ = (u32)(ebp + 0x13u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1030597a jne 0x1030598c */ if (!ZF_) goto L_1030598c;
  /* 1030597c lea ecx, [edi - 0x20] */ ecx = (u32)((u32)(edi + 0xffffffe0u));
  /* 1030597f mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 10305984 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10305986 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10305989 or dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1030598c:;
  /* 1030598c lea eax, [eax + edx*4 + 0xc4] */ eax = (u32)((u32)(eax + edx * 4u + 0xc4u));
  /* 10305993 lea ecx, [edi - 0x20] */ ecx = (u32)((u32)(edi + 0xffffffe0u));
L_10305996:;
  /* 10305996 mov edx, 0x80000000 */ { edx = (u32)(0x80000000u); }
  /* 1030599b shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 1030599d or dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1030599f:;
  /* 1030599f mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 103059a2 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 103059a5 lea eax, [edx + esi - 4] */ eax = (u32)((u32)(edx + esi + 0xfffffffcu));
  /* 103059a9 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 103059ab mov dword ptr [ecx + eax - 4], ecx */ { const u32 m_ = (u32)(ecx + eax + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 103059af jmp 0x103059b4 */ goto L_103059b4;
L_103059b1:;
  /* 103059b1 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
L_103059b4:;
  /* 103059b4 lea eax, [esi + 1] */ eax = (u32)((u32)(esi + 0x1u));
  /* 103059b7 mov dword ptr [edx - 4], eax */ { const u32 m_ = (u32)(edx + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 103059ba mov dword ptr [edx + esi - 8], eax */ { const u32 m_ = (u32)(edx + esi + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 103059be jmp 0x10305aff */ goto L_10305aff;
L_103059c3:;
  /* 103059c3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103059c5 jmp 0x10305b02 */ goto L_10305b02;
L_103059ca:;
  /* 103059ca jge 0x10305aff */ if (!LT_) goto L_10305aff;
  /* 103059d0 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 103059d3 sub dword ptr [ebp + 0x10], esi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 103059d6 lea ecx, [esi + 1] */ ecx = (u32)((u32)(esi + 0x1u));
  /* 103059d9 mov dword ptr [ebx - 4], ecx */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 103059dc lea ebx, [ebx + esi - 4] */ ebx = (u32)((u32)(ebx + esi + 0xfffffffcu));
  /* 103059e0 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 103059e3 sar esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 103059e6 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 103059e7 cmp esi, 0x3f */ { u32 a_ = esi, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103059ea mov dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 103059ed mov dword ptr [ebx - 4], ecx */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 103059f0 jbe 0x103059f5 */ if ((CF_|ZF_)) goto L_103059f5;
  /* 103059f2 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 103059f4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_103059f5:;
  /* 103059f5 test byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 103059f9 jne 0x10305a7f */ if (!ZF_) goto L_10305a7f;
  /* 103059ff mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 10305a02 sar esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10305a05 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10305a06 cmp esi, 0x3f */ { u32 a_ = esi, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305a09 jbe 0x10305a0e */ if ((CF_|ZF_)) goto L_10305a0e;
  /* 10305a0b push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10305a0d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10305a0e:;
  /* 10305a0e mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10305a11 cmp ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305a14 jne 0x10305a58 */ if (!ZF_) goto L_10305a58;
  /* 10305a16 cmp esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305a19 mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 10305a1e jae 0x10305a39 */ if (!CF_) goto L_10305a39;
  /* 10305a20 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10305a22 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10305a24 lea esi, [esi + eax + 4] */ esi = (u32)((u32)(esi + eax + 0x4u));
  /* 10305a28 not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 10305a2a and dword ptr [eax + edx*4 + 0x44], ebx */ { const u32 m_ = (u32)(eax + edx * 4u + 0x44u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10305a2e dec byte ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 10305a30 jne 0x10305a55 */ if (!ZF_) goto L_10305a55;
  /* 10305a32 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10305a35 and dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10305a37 jmp 0x10305a55 */ goto L_10305a55;
L_10305a39:;
  /* 10305a39 lea ecx, [esi - 0x20] */ ecx = (u32)((u32)(esi + 0xffffffe0u));
  /* 10305a3c shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10305a3e lea ecx, [esi + eax + 4] */ ecx = (u32)((u32)(esi + eax + 0x4u));
  /* 10305a42 not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 10305a44 and dword ptr [eax + edx*4 + 0xc4], ebx */ { const u32 m_ = (u32)(eax + edx * 4u + 0xc4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10305a4b dec byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 10305a4d jne 0x10305a55 */ if (!ZF_) goto L_10305a55;
  /* 10305a4f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10305a52 and dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10305a55:;
  /* 10305a55 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
L_10305a58:;
  /* 10305a58 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10305a5b mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 10305a5e mov dword ptr [ecx + 4], esi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(esi); }
  /* 10305a61 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 10305a64 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10305a67 mov dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(esi); }
  /* 10305a6a mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10305a6d add esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10305a70 mov dword ptr [ebp + 0x10], esi */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esi); }
  /* 10305a73 sar esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10305a76 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10305a77 cmp esi, 0x3f */ { u32 a_ = esi, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305a7a jbe 0x10305a7f */ if ((CF_|ZF_)) goto L_10305a7f;
  /* 10305a7c push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10305a7e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10305a7f:;
  /* 10305a7f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10305a82 lea ecx, [ecx + esi*8] */ ecx = (u32)((u32)(ecx + esi * 8u));
  /* 10305a85 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 10305a88 mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10305a8b mov dword ptr [ebx + 4], edi */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(edi); }
  /* 10305a8e mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 10305a91 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10305a94 mov dword ptr [ecx + 8], ebx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10305a97 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10305a9a cmp ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305a9d jne 0x10305af6 */ if (!ZF_) goto L_10305af6;
  /* 10305a9f mov cl, byte ptr [esi + eax + 4] */ { const u32 m_ = (u32)(esi + eax + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10305aa3 mov byte ptr [ebp + 0xf], cl */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10305aa6 inc cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 10305aa8 cmp esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305aab mov byte ptr [esi + eax + 4], cl */ { const u32 m_ = (u32)(esi + eax + 0x4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10305aaf jae 0x10305acd */ if (!CF_) goto L_10305acd;
  /* 10305ab1 cmp byte ptr [ebp + 0xf], 0 */ { const u32 m_ = (u32)(ebp + 0xfu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10305ab5 jne 0x10305ac5 */ if (!ZF_) goto L_10305ac5;
  /* 10305ab7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10305ab9 mov edi, 0x80000000 */ { edi = (u32)(0x80000000u); }
  /* 10305abe shr edi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10305ac0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10305ac3 or dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10305ac5:;
  /* 10305ac5 lea eax, [eax + edx*4 + 0x44] */ eax = (u32)((u32)(eax + edx * 4u + 0x44u));
  /* 10305ac9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10305acb jmp 0x10305aed */ goto L_10305aed;
L_10305acd:;
  /* 10305acd cmp byte ptr [ebp + 0xf], 0 */ { const u32 m_ = (u32)(ebp + 0xfu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10305ad1 jne 0x10305ae3 */ if (!ZF_) goto L_10305ae3;
  /* 10305ad3 lea ecx, [esi - 0x20] */ ecx = (u32)((u32)(esi + 0xffffffe0u));
  /* 10305ad6 mov edi, 0x80000000 */ { edi = (u32)(0x80000000u); }
  /* 10305adb shr edi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10305add mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10305ae0 or dword ptr [ecx + 4], edi */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10305ae3:;
  /* 10305ae3 lea eax, [eax + edx*4 + 0xc4] */ eax = (u32)((u32)(eax + edx * 4u + 0xc4u));
  /* 10305aea lea ecx, [esi - 0x20] */ ecx = (u32)((u32)(esi + 0xffffffe0u));
L_10305aed:;
  /* 10305aed mov edx, 0x80000000 */ { edx = (u32)(0x80000000u); }
  /* 10305af2 shr edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 10305af4 or dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10305af6:;
  /* 10305af6 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10305af9 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 10305afb mov dword ptr [eax + ebx - 4], eax */ { const u32 m_ = (u32)(eax + ebx + 0xfffffffcu); M32(m_) = (u32)(eax); }
L_10305aff:;
  /* 10305aff xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10305b01 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10305b02:;
  /* 10305b02 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10305b03 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10305b04 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10305b05 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10305b06 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10305b07(CPU *c) {
  NATIVE_HOOK(0x10305b07u) REGS; LOADALL;
L_10305b07:;
  /* 10305b07 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10305b08 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10305b0a sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10305b0d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10305b10 mov eax, dword ptr [0x1030c024] */ { const u32 m_ = (u32)(0x1030c024u); eax = (u32)(M32(m_)); }
  /* 10305b15 mov edx, dword ptr [0x1030c028] */ { const u32 m_ = (u32)(0x1030c028u); edx = (u32)(M32(m_)); }
  /* 10305b1b add ecx, 0x17 */ { u32 a_ = ecx, b_ = 0x17u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10305b1e and ecx, 0xfffffff0 */ { u32 a_ = ecx, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10305b21 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10305b22 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 10305b25 sar ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10305b28 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10305b29 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 10305b2c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10305b2d dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10305b2e cmp ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305b31 lea edi, [edx + eax*4] */ edi = (u32)((u32)(edx + eax * 4u));
  /* 10305b34 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 10305b37 jge 0x10305b44 */ if (!LT_) goto L_10305b44;
  /* 10305b39 or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10305b3c shr esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10305b3e or dword ptr [ebp - 8], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10305b42 jmp 0x10305b51 */ goto L_10305b51;
L_10305b44:;
  /* 10305b44 add ecx, -0x20 */ { u32 a_ = ecx, b_ = 0xffffffe0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10305b47 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10305b4a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10305b4c shr eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10305b4e mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10305b51:;
  /* 10305b51 mov eax, dword ptr [0x1030c030] */ { const u32 m_ = (u32)(0x1030c030u); eax = (u32)(M32(m_)); }
  /* 10305b56 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10305b58 mov dword ptr [ebp - 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(esi); }
  /* 10305b5b cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305b5d jmp 0x10305b73 */ goto L_10305b73;
L_10305b5f:;
  /* 10305b5f mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10305b62 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 10305b64 and ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10305b67 and edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10305b69 or ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10305b6b jne 0x10305b78 */ if (!ZF_) goto L_10305b78;
  /* 10305b6d add ebx, 0x14 */ { u32 a_ = ebx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10305b70 cmp ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
L_10305b73:;
  /* 10305b73 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10305b76 jb 0x10305b5f */ if (CF_) goto L_10305b5f;
L_10305b78:;
  /* 10305b78 cmp ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305b7b jne 0x10305ba1 */ if (!ZF_) goto L_10305ba1;
  /* 10305b7d mov ebx, edx */ { ebx = (u32)(edx); }
  /* 10305b7f jmp 0x10305b92 */ goto L_10305b92;
L_10305b81:;
  /* 10305b81 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10305b84 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 10305b86 and ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10305b89 and edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10305b8b or ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10305b8d jne 0x10305b99 */ if (!ZF_) goto L_10305b99;
  /* 10305b8f add ebx, 0x14 */ { u32 a_ = ebx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
L_10305b92:;
  /* 10305b92 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305b94 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10305b97 jb 0x10305b81 */ if (CF_) goto L_10305b81;
L_10305b99:;
  /* 10305b99 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305b9b je 0x10305c35 */ if (ZF_) goto L_10305c35;
L_10305ba1:;
  /* 10305ba1 mov dword ptr [0x1030c030], ebx */ { const u32 m_ = (u32)(0x1030c030u); M32(m_) = (u32)(ebx); }
  /* 10305ba7 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 10305baa mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10305bac cmp edx, -1 */ { u32 a_ = edx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305baf mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 10305bb2 je 0x10305bc8 */ if (ZF_) goto L_10305bc8;
  /* 10305bb4 mov ecx, dword ptr [eax + edx*4 + 0xc4] */ { const u32 m_ = (u32)(eax + edx * 4u + 0xc4u); ecx = (u32)(M32(m_)); }
  /* 10305bbb mov edi, dword ptr [eax + edx*4 + 0x44] */ { const u32 m_ = (u32)(eax + edx * 4u + 0x44u); edi = (u32)(M32(m_)); }
  /* 10305bbf and ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10305bc2 and edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10305bc4 or ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10305bc6 jne 0x10305bfe */ if (!ZF_) goto L_10305bfe;
L_10305bc8:;
  /* 10305bc8 mov edx, dword ptr [eax + 0xc4] */ { const u32 m_ = (u32)(eax + 0xc4u); edx = (u32)(M32(m_)); }
  /* 10305bce and edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = edx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10305bd1 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10305bd5 lea ecx, [eax + 0x44] */ ecx = (u32)((u32)(eax + 0x44u));
  /* 10305bd8 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 10305bda and esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10305bdd or edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10305bdf mov esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); esi = (u32)(M32(m_)); }
  /* 10305be2 jne 0x10305bfb */ if (!ZF_) goto L_10305bfb;
L_10305be4:;
  /* 10305be4 mov edx, dword ptr [ecx + 0x84] */ { const u32 m_ = (u32)(ecx + 0x84u); edx = (u32)(M32(m_)); }
  /* 10305bea and edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = edx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10305bed inc dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10305bf0 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10305bf3 mov edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edi = (u32)(M32(m_)); }
  /* 10305bf5 and edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10305bf7 or edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10305bf9 je 0x10305be4 */ if (ZF_) goto L_10305be4;
L_10305bfb:;
  /* 10305bfb mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
L_10305bfe:;
  /* 10305bfe mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10305c00 imul ecx, ecx, 0x204 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x204u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10305c06 lea ecx, [ecx + eax + 0x144] */ ecx = (u32)((u32)(ecx + eax + 0x144u));
  /* 10305c0d mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 10305c10 mov ecx, dword ptr [eax + edx*4 + 0x44] */ { const u32 m_ = (u32)(eax + edx * 4u + 0x44u); ecx = (u32)(M32(m_)); }
  /* 10305c14 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10305c16 and ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10305c18 jne 0x10305c87 */ if (!ZF_) goto L_10305c87;
  /* 10305c1a mov ecx, dword ptr [eax + edx*4 + 0xc4] */ { const u32 m_ = (u32)(eax + edx * 4u + 0xc4u); ecx = (u32)(M32(m_)); }
  /* 10305c21 and ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10305c24 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10305c26 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10305c27 jmp 0x10305c87 */ goto L_10305c87;
L_10305c29:;
  /* 10305c29 cmp dword ptr [ebx + 8], 0 */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305c2d jne 0x10305c3a */ if (!ZF_) goto L_10305c3a;
  /* 10305c2f add ebx, 0x14 */ { u32 a_ = ebx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10305c32 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
L_10305c35:;
  /* 10305c35 cmp ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305c38 jb 0x10305c29 */ if (CF_) goto L_10305c29;
L_10305c3a:;
  /* 10305c3a cmp ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305c3d jne 0x10305c65 */ if (!ZF_) goto L_10305c65;
  /* 10305c3f mov ebx, edx */ { ebx = (u32)(edx); }
  /* 10305c41 jmp 0x10305c4c */ goto L_10305c4c;
L_10305c43:;
  /* 10305c43 cmp dword ptr [ebx + 8], 0 */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305c47 jne 0x10305c53 */ if (!ZF_) goto L_10305c53;
  /* 10305c49 add ebx, 0x14 */ { u32 a_ = ebx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
L_10305c4c:;
  /* 10305c4c cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305c4e mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10305c51 jb 0x10305c43 */ if (CF_) goto L_10305c43;
L_10305c53:;
  /* 10305c53 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305c55 jne 0x10305c65 */ if (!ZF_) goto L_10305c65;
  /* 10305c57 call 0x1030566b */ esp -= 4; M32(esp) = 0x10305c5cu; SAVEALL; F_1030566b(c); ABI_CHECK(0x1030566bu, 0x10305c57u); RETCHK(0x10305c5cu, 0x10305c57u); LOADALL;
  /* 10305c5c mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10305c5e test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305c60 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10305c63 je 0x10305c7d */ if (ZF_) goto L_10305c7d;
L_10305c65:;
  /* 10305c65 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10305c66 call 0x10305722 */ esp -= 4; M32(esp) = 0x10305c6bu; SAVEALL; F_10305722(c); ABI_CHECK(0x10305722u, 0x10305c66u); RETCHK(0x10305c6bu, 0x10305c66u); LOADALL;
  /* 10305c6b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10305c6c mov ecx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10305c6f mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 10305c71 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 10305c74 cmp dword ptr [eax], -1 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305c77 jne 0x10305ba1 */ if (!ZF_) goto L_10305ba1;
L_10305c7d:;
  /* 10305c7d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10305c7f jmp 0x10305dfe */ goto L_10305dfe;
L_10305c84:;
  /* 10305c84 shl ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10305c86 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10305c87:;
  /* 10305c87 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305c89 jge 0x10305c84 */ if (!LT_) goto L_10305c84;
  /* 10305c8b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10305c8e mov edx, dword ptr [ecx + edi*8 + 4] */ { const u32 m_ = (u32)(ecx + edi * 8u + 0x4u); edx = (u32)(M32(m_)); }
  /* 10305c92 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 10305c94 sub ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10305c97 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10305c99 sar esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10305c9c dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10305c9d cmp esi, 0x3f */ { u32 a_ = esi, b_ = 0x3fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305ca0 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 10305ca3 jle 0x10305ca8 */ if ((ZF_|LT_)) goto L_10305ca8;
  /* 10305ca5 push 0x3f */ { u32 v_ = 0x3fu; esp -= 4; M32(esp) = v_; }
  /* 10305ca7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10305ca8:;
  /* 10305ca8 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305caa je 0x10305db1 */ if (ZF_) goto L_10305db1;
  /* 10305cb0 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10305cb3 cmp ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305cb6 jne 0x10305d14 */ if (!ZF_) goto L_10305d14;
  /* 10305cb8 cmp edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305cbb mov ebx, 0x80000000 */ { ebx = (u32)(0x80000000u); }
  /* 10305cc0 jge 0x10305ce8 */ if (!LT_) goto L_10305ce8;
  /* 10305cc2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10305cc4 shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10305cc6 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10305cc9 lea edi, [eax + edi + 4] */ edi = (u32)((u32)(eax + edi + 0x4u));
  /* 10305ccd not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 10305ccf mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 10305cd2 and ebx, dword ptr [eax + ecx*4 + 0x44] */ { const u32 m_ = (u32)(eax + ecx * 4u + 0x44u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10305cd6 mov dword ptr [eax + ecx*4 + 0x44], ebx */ { const u32 m_ = (u32)(eax + ecx * 4u + 0x44u); M32(m_) = (u32)(ebx); }
  /* 10305cda dec byte ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 10305cdc jne 0x10305d11 */ if (!ZF_) goto L_10305d11;
  /* 10305cde mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 10305ce1 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10305ce4 and dword ptr [ebx], ecx */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10305ce6 jmp 0x10305d14 */ goto L_10305d14;
L_10305ce8:;
  /* 10305ce8 lea ecx, [edi - 0x20] */ ecx = (u32)((u32)(edi + 0xffffffe0u));
  /* 10305ceb shr ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 10305ced mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10305cf0 lea ecx, [eax + ecx*4 + 0xc4] */ ecx = (u32)((u32)(eax + ecx * 4u + 0xc4u));
  /* 10305cf7 lea edi, [eax + edi + 4] */ edi = (u32)((u32)(eax + edi + 0x4u));
  /* 10305cfb not ebx */ { ebx = (u32)(~ebx & 0xffffffffu); }
  /* 10305cfd and dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10305cff dec byte ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_); u32 r_ = (a_ - 1u) & 0xffu; M8(m_) = (u8)(r_); SETF(OP_DEC, a_, 1, r_, 1); }
  /* 10305d01 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 10305d04 jne 0x10305d11 */ if (!ZF_) goto L_10305d11;
  /* 10305d06 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10305d09 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 10305d0c and dword ptr [ebx + 4], ecx */ { const u32 m_ = (u32)(ebx + 0x4u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10305d0f jmp 0x10305d14 */ goto L_10305d14;
L_10305d11:;
  /* 10305d11 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_10305d14:;
  /* 10305d14 cmp dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305d18 mov ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10305d1b mov edi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edi = (u32)(M32(m_)); }
  /* 10305d1e mov dword ptr [ecx + 4], edi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edi); }
  /* 10305d21 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10305d24 mov edi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edi = (u32)(M32(m_)); }
  /* 10305d27 mov dword ptr [ecx + 8], edi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edi); }
  /* 10305d2a je 0x10305dbd */ if (ZF_) goto L_10305dbd;
  /* 10305d30 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10305d33 lea ecx, [ecx + esi*8] */ ecx = (u32)((u32)(ecx + esi * 8u));
  /* 10305d36 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 10305d39 mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10305d3c mov dword ptr [edx + 4], edi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(edi); }
  /* 10305d3f mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 10305d42 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10305d45 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 10305d48 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10305d4b cmp ecx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305d4e jne 0x10305dae */ if (!ZF_) goto L_10305dae;
  /* 10305d50 mov cl, byte ptr [esi + eax + 4] */ { const u32 m_ = (u32)(esi + eax + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10305d54 mov byte ptr [ebp + 0xb], cl */ { const u32 m_ = (u32)(ebp + 0xbu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10305d57 inc cl */ { u32 a_ = (ecx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 10305d59 cmp esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305d5c mov byte ptr [esi + eax + 4], cl */ { const u32 m_ = (u32)(esi + eax + 0x4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10305d60 jge 0x10305d85 */ if (!LT_) goto L_10305d85;
  /* 10305d62 cmp byte ptr [ebp + 0xb], 0 */ { const u32 m_ = (u32)(ebp + 0xbu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10305d66 jne 0x10305d73 */ if (!ZF_) goto L_10305d73;
  /* 10305d68 mov edi, 0x80000000 */ { edi = (u32)(0x80000000u); }
  /* 10305d6d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10305d6f shr edi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10305d71 or dword ptr [ebx], edi */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10305d73:;
  /* 10305d73 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10305d75 mov edi, 0x80000000 */ { edi = (u32)(0x80000000u); }
  /* 10305d7a shr edi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10305d7c mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10305d7f or dword ptr [eax + ecx*4 + 0x44], edi */ { const u32 m_ = (u32)(eax + ecx * 4u + 0x44u); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10305d83 jmp 0x10305dae */ goto L_10305dae;
L_10305d85:;
  /* 10305d85 cmp byte ptr [ebp + 0xb], 0 */ { const u32 m_ = (u32)(ebp + 0xbu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10305d89 jne 0x10305d98 */ if (!ZF_) goto L_10305d98;
  /* 10305d8b lea ecx, [esi - 0x20] */ ecx = (u32)((u32)(esi + 0xffffffe0u));
  /* 10305d8e mov edi, 0x80000000 */ { edi = (u32)(0x80000000u); }
  /* 10305d93 shr edi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 10305d95 or dword ptr [ebx + 4], edi */ { const u32 m_ = (u32)(ebx + 0x4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10305d98:;
  /* 10305d98 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10305d9b lea edi, [eax + ecx*4 + 0xc4] */ edi = (u32)((u32)(eax + ecx * 4u + 0xc4u));
  /* 10305da2 lea ecx, [esi - 0x20] */ ecx = (u32)((u32)(esi + 0xffffffe0u));
  /* 10305da5 mov esi, 0x80000000 */ { esi = (u32)(0x80000000u); }
  /* 10305daa shr esi, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10305dac or dword ptr [edi], esi */ { const u32 m_ = (u32)(edi); u32 a_ = M32(m_), b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10305dae:;
  /* 10305dae mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
L_10305db1:;
  /* 10305db1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305db3 je 0x10305dc0 */ if (ZF_) goto L_10305dc0;
  /* 10305db5 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 10305db7 mov dword ptr [ecx + edx - 4], ecx */ { const u32 m_ = (u32)(ecx + edx + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10305dbb jmp 0x10305dc0 */ goto L_10305dc0;
L_10305dbd:;
  /* 10305dbd mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
L_10305dc0:;
  /* 10305dc0 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 10305dc3 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10305dc5 lea ecx, [esi + 1] */ ecx = (u32)((u32)(esi + 0x1u));
  /* 10305dc8 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 10305dca mov dword ptr [edx + esi - 4], ecx */ { const u32 m_ = (u32)(edx + esi + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10305dce mov esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); esi = (u32)(M32(m_)); }
  /* 10305dd1 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 10305dd3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305dd5 lea edi, [ecx + 1] */ edi = (u32)((u32)(ecx + 0x1u));
  /* 10305dd8 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 10305dda jne 0x10305df6 */ if (!ZF_) goto L_10305df6;
  /* 10305ddc cmp ebx, dword ptr [0x1030c020] */ { const u32 m_ = (u32)(0x1030c020u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305de2 jne 0x10305df6 */ if (!ZF_) goto L_10305df6;
  /* 10305de4 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10305de7 cmp ecx, dword ptr [0x1030c038] */ { const u32 m_ = (u32)(0x1030c038u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305ded jne 0x10305df6 */ if (!ZF_) goto L_10305df6;
  /* 10305def and dword ptr [0x1030c020], 0 */ { const u32 m_ = (u32)(0x1030c020u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10305df6:;
  /* 10305df6 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10305df9 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10305dfb lea eax, [edx + 4] */ eax = (u32)((u32)(edx + 0x4u));
L_10305dfe:;
  /* 10305dfe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10305dff pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10305e00 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10305e01 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10305e02 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10305e03(CPU *c) {
  NATIVE_HOOK(0x10305e03u) REGS; LOADALL;
L_10305e03:;
  /* 10305e03 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10305e04 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10305e06 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10305e09 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10305e0a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10305e0c cmp dword ptr [0x1030bbf8], ebx */ { const u32 m_ = (u32)(0x1030bbf8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305e12 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10305e13 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10305e14 jne 0x10305e83 */ if (!ZF_) goto L_10305e83;
  /* 10305e16 push 0x103098e0 */ { u32 v_ = 0x103098e0u; esp -= 4; M32(esp) = v_; }
  /* 10305e1b call dword ptr [0x103090a8] */ { const u32 m_ = (u32)(0x103090a8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10305e21u; SAVEALL; call_ind(c, t_); RETCHK(0x10305e21u, 0x10305e1bu); LOADALL; }
  /* 10305e21 mov edi, eax */ { edi = (u32)(eax); }
  /* 10305e23 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305e25 je 0x10305ebe */ if (ZF_) goto L_10305ebe;
  /* 10305e2b mov esi, dword ptr [0x1030904c] */ { const u32 m_ = (u32)(0x1030904cu); esi = (u32)(M32(m_)); }
  /* 10305e31 push 0x103098d4 */ { u32 v_ = 0x103098d4u; esp -= 4; M32(esp) = v_; }
  /* 10305e36 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10305e37 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10305e39u; SAVEALL; call_ind(c, t_); RETCHK(0x10305e39u, 0x10305e37u); LOADALL; }
  /* 10305e39 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305e3b mov dword ptr [0x1030bbf8], eax */ { const u32 m_ = (u32)(0x1030bbf8u); M32(m_) = (u32)(eax); }
  /* 10305e40 je 0x10305ebe */ if (ZF_) goto L_10305ebe;
  /* 10305e42 push 0x103098c4 */ { u32 v_ = 0x103098c4u; esp -= 4; M32(esp) = v_; }
  /* 10305e47 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10305e48 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10305e4au; SAVEALL; call_ind(c, t_); RETCHK(0x10305e4au, 0x10305e48u); LOADALL; }
  /* 10305e4a push 0x103098b0 */ { u32 v_ = 0x103098b0u; esp -= 4; M32(esp) = v_; }
  /* 10305e4f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10305e50 mov dword ptr [0x1030bbfc], eax */ { const u32 m_ = (u32)(0x1030bbfcu); M32(m_) = (u32)(eax); }
  /* 10305e55 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10305e57u; SAVEALL; call_ind(c, t_); RETCHK(0x10305e57u, 0x10305e55u); LOADALL; }
  /* 10305e57 cmp dword ptr [0x1030b950], 2 */ { const u32 m_ = (u32)(0x1030b950u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305e5e mov dword ptr [0x1030bc00], eax */ { const u32 m_ = (u32)(0x1030bc00u); M32(m_) = (u32)(eax); }
  /* 10305e63 jne 0x10305e83 */ if (!ZF_) goto L_10305e83;
  /* 10305e65 push 0x10309894 */ { u32 v_ = 0x10309894u; esp -= 4; M32(esp) = v_; }
  /* 10305e6a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10305e6b call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10305e6du; SAVEALL; call_ind(c, t_); RETCHK(0x10305e6du, 0x10305e6bu); LOADALL; }
  /* 10305e6d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305e6f mov dword ptr [0x1030bc08], eax */ { const u32 m_ = (u32)(0x1030bc08u); M32(m_) = (u32)(eax); }
  /* 10305e74 je 0x10305e83 */ if (ZF_) goto L_10305e83;
  /* 10305e76 push 0x1030987c */ { u32 v_ = 0x1030987cu; esp -= 4; M32(esp) = v_; }
  /* 10305e7b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10305e7c call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x10305e7eu; SAVEALL; call_ind(c, t_); RETCHK(0x10305e7eu, 0x10305e7cu); LOADALL; }
  /* 10305e7e mov dword ptr [0x1030bc04], eax */ { const u32 m_ = (u32)(0x1030bc04u); M32(m_) = (u32)(eax); }
L_10305e83:;
  /* 10305e83 mov eax, dword ptr [0x1030bc04] */ { const u32 m_ = (u32)(0x1030bc04u); eax = (u32)(M32(m_)); }
  /* 10305e88 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305e8a je 0x10305ec8 */ if (ZF_) goto L_10305ec8;
  /* 10305e8c call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10305e8eu; SAVEALL; call_ind(c, t_); RETCHK(0x10305e8eu, 0x10305e8cu); LOADALL; }
  /* 10305e8e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305e90 je 0x10305eaf */ if (ZF_) goto L_10305eaf;
  /* 10305e92 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10305e95 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10305e96 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10305e98 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 10305e9b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10305e9c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10305e9e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10305e9f call dword ptr [0x1030bc08] */ { const u32 m_ = (u32)(0x1030bc08u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10305ea5u; SAVEALL; call_ind(c, t_); RETCHK(0x10305ea5u, 0x10305e9fu); LOADALL; }
  /* 10305ea5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305ea7 je 0x10305eaf */ if (ZF_) goto L_10305eaf;
  /* 10305ea9 test byte ptr [ebp - 8], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10305ead jne 0x10305ec8 */ if (!ZF_) goto L_10305ec8;
L_10305eaf:;
  /* 10305eaf cmp dword ptr [0x1030b95c], 4 */ { const u32 m_ = (u32)(0x1030b95cu); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10305eb6 jb 0x10305ec2 */ if (CF_) goto L_10305ec2;
  /* 10305eb8 or byte ptr [ebp + 0x12], 0x20 */ { const u32 m_ = (u32)(ebp + 0x12u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10305ebc jmp 0x10305ee7 */ goto L_10305ee7;
L_10305ebe:;
  /* 10305ebe xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10305ec0 jmp 0x10305ef7 */ goto L_10305ef7;
L_10305ec2:;
  /* 10305ec2 or byte ptr [ebp + 0x12], 4 */ { const u32 m_ = (u32)(ebp + 0x12u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10305ec6 jmp 0x10305ee7 */ goto L_10305ee7;
L_10305ec8:;
  /* 10305ec8 mov eax, dword ptr [0x1030bbfc] */ { const u32 m_ = (u32)(0x1030bbfcu); eax = (u32)(M32(m_)); }
  /* 10305ecd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305ecf je 0x10305ee7 */ if (ZF_) goto L_10305ee7;
  /* 10305ed1 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10305ed3u; SAVEALL; call_ind(c, t_); RETCHK(0x10305ed3u, 0x10305ed1u); LOADALL; }
  /* 10305ed3 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10305ed5 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305ed7 je 0x10305ee7 */ if (ZF_) goto L_10305ee7;
  /* 10305ed9 mov eax, dword ptr [0x1030bc00] */ { const u32 m_ = (u32)(0x1030bc00u); eax = (u32)(M32(m_)); }
  /* 10305ede test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305ee0 je 0x10305ee7 */ if (ZF_) goto L_10305ee7;
  /* 10305ee2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10305ee3 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10305ee5u; SAVEALL; call_ind(c, t_); RETCHK(0x10305ee5u, 0x10305ee3u); LOADALL; }
  /* 10305ee5 mov ebx, eax */ { ebx = (u32)(eax); }
L_10305ee7:;
  /* 10305ee7 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10305eea push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10305eed push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10305ef0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10305ef1 call dword ptr [0x1030bbf8] */ { const u32 m_ = (u32)(0x1030bbf8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10305ef7u; SAVEALL; call_ind(c, t_); RETCHK(0x10305ef7u, 0x10305ef1u); LOADALL; }
L_10305ef7:;
  /* 10305ef7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10305ef8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10305ef9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10305efa leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10305efb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10305f00(CPU *c) {
  NATIVE_HOOK(0x10305f00u) REGS; LOADALL;
L_10305f00:;
  /* 10305f00 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10305f01 mov edi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10305f05 jmp 0x10305f75 */ goto L_10305f75;
L_10305f75:;
  /* 10305f75 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10305f79 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305f7f je 0x10305f9e */ if (ZF_) goto L_10305f9e;
L_10305f81:;
  /* 10305f81 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10305f83 add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10305f86 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10305f88 je 0x10305ff0 */ if (ZF_) goto L_10305ff0;
  /* 10305f8a mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10305f8c add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10305f8f test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305f95 jne 0x10305f81 */ if (!ZF_) goto L_10305f81;
  /* 10305f97 jmp 0x10305f9e */ goto L_10305f9e;
L_10305f99:;
  /* 10305f99 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10305f9b add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10305f9e:;
  /* 10305f9e mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 10305fa3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10305fa5 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10305fa7 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10305faa xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10305fac mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10305fae add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10305fb1 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305fb6 je 0x10305f99 */ if (ZF_) goto L_10305f99;
  /* 10305fb8 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10305fba je 0x10305ff0 */ if (ZF_) goto L_10305ff0;
  /* 10305fbc test dh, dh */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = ((edx >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10305fbe je 0x10305fe7 */ if (ZF_) goto L_10305fe7;
  /* 10305fc0 test edx, 0xff0000 */ { u32 a_ = edx, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305fc6 je 0x10305fda */ if (ZF_) goto L_10305fda;
  /* 10305fc8 test edx, 0xff000000 */ { u32 a_ = edx, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305fce je 0x10305fd2 */ if (ZF_) goto L_10305fd2;
  /* 10305fd0 jmp 0x10305f99 */ goto L_10305f99;
L_10305fd2:;
  /* 10305fd2 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10305fd4 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10305fd8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10305fd9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10305fda:;
  /* 10305fda mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 10305fdd mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10305fe1 mov byte ptr [edi + 2], 0 */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)(0x0u); }
  /* 10305fe5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10305fe6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10305fe7:;
  /* 10305fe7 mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 10305fea mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10305fee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10305fef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10305ff0:;
  /* 10305ff0 mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10305ff2 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10305ff6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10305ff7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10305f10(CPU *c) {
  NATIVE_HOOK(0x10305f10u) REGS; LOADALL;
L_10305f10:;
  /* 10305f10 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10305f14 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10305f15 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305f1b je 0x10305f30 */ if (ZF_) goto L_10305f30;
L_10305f1d:;
  /* 10305f1d mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10305f1f add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10305f22 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10305f24 je 0x10305f63 */ if (ZF_) goto L_10305f63;
  /* 10305f26 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305f2c jne 0x10305f1d */ if (!ZF_) goto L_10305f1d;
  /* 10305f2e mov edi, edi */ { edi = (u32)(edi); }
L_10305f30:;
  /* 10305f30 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10305f32 mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 10305f37 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10305f39 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10305f3c xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10305f3e add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10305f41 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305f46 je 0x10305f30 */ if (ZF_) goto L_10305f30;
  /* 10305f48 mov eax, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10305f4b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10305f4d je 0x10305f72 */ if (ZF_) goto L_10305f72;
  /* 10305f4f test ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10305f51 je 0x10305f6d */ if (ZF_) goto L_10305f6d;
  /* 10305f53 test eax, 0xff0000 */ { u32 a_ = eax, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305f58 je 0x10305f68 */ if (ZF_) goto L_10305f68;
  /* 10305f5a test eax, 0xff000000 */ { u32 a_ = eax, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305f5f je 0x10305f63 */ if (ZF_) goto L_10305f63;
  /* 10305f61 jmp 0x10305f30 */ goto L_10305f30;
L_10305f63:;
  /* 10305f63 lea edi, [ecx - 1] */ edi = (u32)((u32)(ecx + 0xffffffffu));
  /* 10305f66 jmp 0x10305f75 */ goto L_10305f75;
L_10305f68:;
  /* 10305f68 lea edi, [ecx - 2] */ edi = (u32)((u32)(ecx + 0xfffffffeu));
  /* 10305f6b jmp 0x10305f75 */ goto L_10305f75;
L_10305f6d:;
  /* 10305f6d lea edi, [ecx - 3] */ edi = (u32)((u32)(ecx + 0xfffffffdu));
  /* 10305f70 jmp 0x10305f75 */ goto L_10305f75;
L_10305f72:;
  /* 10305f72 lea edi, [ecx - 4] */ edi = (u32)((u32)(ecx + 0xfffffffcu));
L_10305f75:;
  /* 10305f75 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10305f79 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305f7f je 0x10305f9e */ if (ZF_) goto L_10305f9e;
L_10305f81:;
  /* 10305f81 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10305f83 add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10305f86 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10305f88 je 0x10305ff0 */ if (ZF_) goto L_10305ff0;
  /* 10305f8a mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10305f8c add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10305f8f test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305f95 jne 0x10305f81 */ if (!ZF_) goto L_10305f81;
  /* 10305f97 jmp 0x10305f9e */ goto L_10305f9e;
L_10305f99:;
  /* 10305f99 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10305f9b add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10305f9e:;
  /* 10305f9e mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 10305fa3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10305fa5 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10305fa7 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10305faa xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10305fac mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10305fae add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10305fb1 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305fb6 je 0x10305f99 */ if (ZF_) goto L_10305f99;
  /* 10305fb8 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10305fba je 0x10305ff0 */ if (ZF_) goto L_10305ff0;
  /* 10305fbc test dh, dh */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = ((edx >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10305fbe je 0x10305fe7 */ if (ZF_) goto L_10305fe7;
  /* 10305fc0 test edx, 0xff0000 */ { u32 a_ = edx, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305fc6 je 0x10305fda */ if (ZF_) goto L_10305fda;
  /* 10305fc8 test edx, 0xff000000 */ { u32 a_ = edx, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10305fce je 0x10305fd2 */ if (ZF_) goto L_10305fd2;
  /* 10305fd0 jmp 0x10305f99 */ goto L_10305f99;
L_10305fd2:;
  /* 10305fd2 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10305fd4 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10305fd8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10305fd9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10305fda:;
  /* 10305fda mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 10305fdd mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10305fe1 mov byte ptr [edi + 2], 0 */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)(0x0u); }
  /* 10305fe5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10305fe6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10305fe7:;
  /* 10305fe7 mov word ptr [edi], dx */ { const u32 m_ = (u32)(edi); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 10305fea mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10305fee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10305fef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10305ff0:;
  /* 10305ff0 mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10305ff2 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10305ff6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10305ff7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306000(CPU *c) {
  NATIVE_HOOK(0x10306000u) REGS; LOADALL;
L_10306000:;
  /* 10306000 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10306004 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030600a je 0x10306030 */ if (ZF_) goto L_10306030;
L_1030600c:;
  /* 1030600c mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030600e add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10306011 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10306013 je 0x10306063 */ if (ZF_) goto L_10306063;
  /* 10306015 test ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030601b jne 0x1030600c */ if (!ZF_) goto L_1030600c;
  /* 1030601d add eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10306022 lea esp, [esp] */ esp = (u32)((u32)(esp));
  /* 10306029 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_10306030:;
  /* 10306030 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10306032 mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 10306037 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10306039 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030603c xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030603e add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10306041 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306046 je 0x10306030 */ if (ZF_) goto L_10306030;
  /* 10306048 mov eax, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 1030604b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1030604d je 0x10306081 */ if (ZF_) goto L_10306081;
  /* 1030604f test ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10306051 je 0x10306077 */ if (ZF_) goto L_10306077;
  /* 10306053 test eax, 0xff0000 */ { u32 a_ = eax, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306058 je 0x1030606d */ if (ZF_) goto L_1030606d;
  /* 1030605a test eax, 0xff000000 */ { u32 a_ = eax, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030605f je 0x10306063 */ if (ZF_) goto L_10306063;
  /* 10306061 jmp 0x10306030 */ goto L_10306030;
L_10306063:;
  /* 10306063 lea eax, [ecx - 1] */ eax = (u32)((u32)(ecx + 0xffffffffu));
  /* 10306066 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1030606a sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1030606c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1030606d:;
  /* 1030606d lea eax, [ecx - 2] */ eax = (u32)((u32)(ecx + 0xfffffffeu));
  /* 10306070 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10306074 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10306076 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306077:;
  /* 10306077 lea eax, [ecx - 3] */ eax = (u32)((u32)(ecx + 0xfffffffdu));
  /* 1030607a mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1030607e sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10306080 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306081:;
  /* 10306081 lea eax, [ecx - 4] */ eax = (u32)((u32)(ecx + 0xfffffffcu));
  /* 10306084 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10306088 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1030608a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030608b(CPU *c) {
  NATIVE_HOOK(0x1030608bu) REGS; LOADALL;
L_1030608b:;
  /* 1030608b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1030608c mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1030608e sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10306091 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10306092 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10306093 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10306096 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10306099 test bl, 3 */ { u32 a_ = (ebx & 0xffu), b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1030609c jne 0x103060b9 */ if (!ZF_) goto L_103060b9;
  /* 1030609e mov eax, dword ptr fs:[0x18] */ { const u32 m_ = (u32)(0x18u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 103060a4 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 103060a7 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103060aa mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 103060ad cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103060af mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 103060b2 jb 0x103060c0 */ if (CF_) goto L_103060c0;
  /* 103060b4 cmp ebx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103060b7 jae 0x103060c0 */ if (!CF_) goto L_103060c0;
L_103060b9:;
  /* 103060b9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103060bb jmp 0x103062b0 */ goto L_103062b0;
L_103060c0:;
  /* 103060c0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103060c1 mov edi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edi = (u32)(M32(m_)); }
  /* 103060c4 cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103060c7 jne 0x103060d1 */ if (!ZF_) goto L_103060d1;
L_103060c9:;
  /* 103060c9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103060cb inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103060cc jmp 0x103062af */ goto L_103062af;
L_103060d1:;
  /* 103060d1 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 103060d3 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 103060d6 mov eax, ebx */ { eax = (u32)(ebx); }
L_103060d8:;
  /* 103060d8 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 103060da cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103060dd je 0x103060e7 */ if (ZF_) goto L_103060e7;
  /* 103060df cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103060e1 jae 0x1030622c */ if (!CF_) goto L_1030622c;
L_103060e7:;
  /* 103060e7 cmp dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103060eb je 0x103060f0 */ if (ZF_) goto L_103060f0;
  /* 103060ed inc dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_103060f0:;
  /* 103060f0 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103060f1 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103060f4 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103060f6 jbe 0x103060d8 */ if ((CF_|ZF_)) goto L_103060d8;
  /* 103060f8 cmp dword ptr [ebp + 8], 0 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103060fc je 0x10306112 */ if (ZF_) goto L_10306112;
  /* 103060fe mov eax, dword ptr [esi - 8] */ { const u32 m_ = (u32)(esi + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 10306101 cmp eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306104 jb 0x1030622c */ if (CF_) goto L_1030622c;
  /* 1030610a cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030610c jae 0x1030622c */ if (!CF_) goto L_1030622c;
L_10306112:;
  /* 10306112 mov eax, dword ptr [0x1030bc10] */ { const u32 m_ = (u32)(0x1030bc10u); eax = (u32)(M32(m_)); }
  /* 10306117 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 10306119 and edi, 0xfffff000 */ { u32 a_ = edi, b_ = 0xfffff000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1030611f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10306121 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306123 jle 0x10306137 */ if ((ZF_|LT_)) goto L_10306137;
L_10306125:;
  /* 10306125 cmp dword ptr [esi*4 + 0x1030bc18], edi */ { const u32 m_ = (u32)(esi * 4u + 0x1030bc18u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030612c je 0x10306230 */ if (ZF_) goto L_10306230;
  /* 10306132 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306133 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306135 jl 0x10306125 */ if (LT_) goto L_10306125;
L_10306137:;
  /* 10306137 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 10306139 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 1030613c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030613d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1030613e call dword ptr [0x103090b0] */ { const u32 m_ = (u32)(0x103090b0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10306144u; SAVEALL; call_ind(c, t_); RETCHK(0x10306144u, 0x1030613eu); LOADALL; }
  /* 10306144 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306146 je 0x103062ac */ if (ZF_) goto L_103062ac;
  /* 1030614c cmp dword ptr [ebp - 8], 0x1000000 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_), b_ = 0x1000000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306153 jne 0x103062ac */ if (!ZF_) goto L_103062ac;
  /* 10306159 test byte ptr [ebp - 0xc], 0xcc */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M8(m_), b_ = 0xccu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1030615d je 0x103061b5 */ if (ZF_) goto L_103061b5;
  /* 1030615f mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 10306162 cmp word ptr [ecx], 0x5a4d */ { const u32 m_ = (u32)(ecx); u32 a_ = M16(m_), b_ = 0x5a4du; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10306167 jne 0x103062ac */ if (!ZF_) goto L_103062ac;
  /* 1030616d mov eax, dword ptr [ecx + 0x3c] */ { const u32 m_ = (u32)(ecx + 0x3cu); eax = (u32)(M32(m_)); }
  /* 10306170 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10306172 cmp dword ptr [eax], 0x4550 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x4550u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306178 jne 0x103062ac */ if (!ZF_) goto L_103062ac;
  /* 1030617e cmp word ptr [eax + 0x18], 0x10b */ { const u32 m_ = (u32)(eax + 0x18u); u32 a_ = M16(m_), b_ = 0x10bu; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10306184 jne 0x103062ac */ if (!ZF_) goto L_103062ac;
  /* 1030618a sub ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 1030618c cmp word ptr [eax + 6], 0 */ { const u32 m_ = (u32)(eax + 0x6u); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 10306191 movzx ecx, word ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M16(m_)); }
  /* 10306195 lea ecx, [ecx + eax + 0x18] */ ecx = (u32)((u32)(ecx + eax + 0x18u));
  /* 10306199 jbe 0x103062ac */ if ((CF_|ZF_)) goto L_103062ac;
  /* 1030619f mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 103061a2 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103061a4 jb 0x103061b5 */ if (CF_) goto L_103061b5;
  /* 103061a6 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 103061a9 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 103061ab cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103061ad jae 0x103061b5 */ if (!CF_) goto L_103061b5;
  /* 103061af test byte ptr [ecx + 0x27], 0x80 */ { const u32 m_ = (u32)(ecx + 0x27u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 103061b3 jne 0x1030622c */ if (!ZF_) goto L_1030622c;
L_103061b5:;
  /* 103061b5 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 103061b7 push 0x1030bc58 */ { u32 v_ = 0x1030bc58u; esp -= 4; M32(esp) = v_; }
  /* 103061bc call dword ptr [0x103090ac] */ { const u32 m_ = (u32)(0x103090acu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103061c2u; SAVEALL; call_ind(c, t_); RETCHK(0x103061c2u, 0x103061bcu); LOADALL; }
  /* 103061c2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103061c4 jne 0x103060c9 */ if (!ZF_) goto L_103060c9;
  /* 103061ca mov ecx, dword ptr [0x1030bc10] */ { const u32 m_ = (u32)(0x1030bc10u); ecx = (u32)(M32(m_)); }
  /* 103061d0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103061d2 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 103061d4 jle 0x103061e9 */ if ((ZF_|LT_)) goto L_103061e9;
  /* 103061d6 lea eax, [ecx*4 + 0x1030bc14] */ eax = (u32)((u32)(ecx * 4u + 0x1030bc14u));
L_103061dd:;
  /* 103061dd cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103061df je 0x103061e9 */ if (ZF_) goto L_103061e9;
  /* 103061e1 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 103061e2 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103061e5 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103061e7 jg 0x103061dd */ if (!(ZF_|LT_)) goto L_103061dd;
L_103061e9:;
  /* 103061e9 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103061eb jne 0x1030621a */ if (!ZF_) goto L_1030621a;
  /* 103061ed push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 103061ef pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 103061f0 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103061f2 jg 0x103061f6 */ if (!(ZF_|LT_)) goto L_103061f6;
  /* 103061f4 mov ebx, ecx */ { ebx = (u32)(ecx); }
L_103061f6:;
  /* 103061f6 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 103061f8 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103061fa jl 0x1030620e */ if (LT_) goto L_1030620e;
L_103061fc:;
  /* 103061fc lea eax, [edx*4 + 0x1030bc18] */ eax = (u32)((u32)(edx * 4u + 0x1030bc18u));
  /* 10306203 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 10306205 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306206 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306208 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 1030620a mov edi, esi */ { edi = (u32)(esi); }
  /* 1030620c jle 0x103061fc */ if ((ZF_|LT_)) goto L_103061fc;
L_1030620e:;
  /* 1030620e cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306211 jge 0x1030621a */ if (!LT_) goto L_1030621a;
  /* 10306213 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306214 mov dword ptr [0x1030bc10], ecx */ { const u32 m_ = (u32)(0x1030bc10u); M32(m_) = (u32)(ecx); }
L_1030621a:;
  /* 1030621a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1030621c push 0x1030bc58 */ { u32 v_ = 0x1030bc58u; esp -= 4; M32(esp) = v_; }
  /* 10306221 call dword ptr [0x103090ac] */ { const u32 m_ = (u32)(0x103090acu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10306227u; SAVEALL; call_ind(c, t_); RETCHK(0x10306227u, 0x10306221u); LOADALL; }
  /* 10306227 jmp 0x103060c9 */ goto L_103060c9;
L_1030622c:;
  /* 1030622c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030622e jmp 0x103062af */ goto L_103062af;
L_10306230:;
  /* 10306230 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306232 jle 0x103060c9 */ if ((ZF_|LT_)) goto L_103060c9;
  /* 10306238 mov ebx, dword ptr [0x103090ac] */ { const u32 m_ = (u32)(0x103090acu); ebx = (u32)(M32(m_)); }
  /* 1030623e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10306240 push 0x1030bc58 */ { u32 v_ = 0x1030bc58u; esp -= 4; M32(esp) = v_; }
  /* 10306245 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x10306247u; SAVEALL; call_ind(c, t_); RETCHK(0x10306247u, 0x10306245u); LOADALL; }
  /* 10306247 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306249 jne 0x103060c9 */ if (!ZF_) goto L_103060c9;
  /* 1030624f cmp dword ptr [esi*4 + 0x1030bc18], edi */ { const u32 m_ = (u32)(esi * 4u + 0x1030bc18u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306256 je 0x10306286 */ if (ZF_) goto L_10306286;
  /* 10306258 mov eax, dword ptr [0x1030bc10] */ { const u32 m_ = (u32)(0x1030bc10u); eax = (u32)(M32(m_)); }
  /* 1030625d lea esi, [eax - 1] */ esi = (u32)((u32)(eax + 0xffffffffu));
  /* 10306260 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306262 jl 0x10306274 */ if (LT_) goto L_10306274;
L_10306264:;
  /* 10306264 cmp dword ptr [esi*4 + 0x1030bc18], edi */ { const u32 m_ = (u32)(esi * 4u + 0x1030bc18u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030626b je 0x10306270 */ if (ZF_) goto L_10306270;
  /* 1030626d dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1030626e jns 0x10306264 */ if (!SF_) goto L_10306264;
L_10306270:;
  /* 10306270 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306272 jge 0x10306284 */ if (!LT_) goto L_10306284;
L_10306274:;
  /* 10306274 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306277 jge 0x1030627f */ if (!LT_) goto L_1030627f;
  /* 10306279 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1030627a mov dword ptr [0x1030bc10], eax */ { const u32 m_ = (u32)(0x1030bc10u); M32(m_) = (u32)(eax); }
L_1030627f:;
  /* 1030627f lea esi, [eax - 1] */ esi = (u32)((u32)(eax + 0xffffffffu));
  /* 10306282 jmp 0x10306286 */ goto L_10306286;
L_10306284:;
  /* 10306284 je 0x1030629e */ if (ZF_) goto L_1030629e;
L_10306286:;
  /* 10306286 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10306288 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030628a jl 0x1030629e */ if (LT_) goto L_1030629e;
L_1030628c:;
  /* 1030628c lea eax, [ecx*4 + 0x1030bc18] */ eax = (u32)((u32)(ecx * 4u + 0x1030bc18u));
  /* 10306293 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10306295 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306296 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306298 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 1030629a mov edi, edx */ { edi = (u32)(edx); }
  /* 1030629c jle 0x1030628c */ if ((ZF_|LT_)) goto L_1030628c;
L_1030629e:;
  /* 1030629e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 103062a0 push 0x1030bc58 */ { u32 v_ = 0x1030bc58u; esp -= 4; M32(esp) = v_; }
  /* 103062a5 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x103062a7u; SAVEALL; call_ind(c, t_); RETCHK(0x103062a7u, 0x103062a5u); LOADALL; }
  /* 103062a7 jmp 0x103060c9 */ goto L_103060c9;
L_103062ac:;
  /* 103062ac or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_103062af:;
  /* 103062af pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_103062b0:;
  /* 103062b0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103062b1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 103062b2 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103062b3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103062b4(CPU *c) {
  NATIVE_HOOK(0x103062b4u) REGS; LOADALL;
L_103062b4:;
  /* 103062b4 mov eax, dword ptr [0x1030bc5c] */ { const u32 m_ = (u32)(0x1030bc5cu); eax = (u32)(M32(m_)); }
  /* 103062b9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103062bb je 0x103062cc */ if (ZF_) goto L_103062cc;
  /* 103062bd push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103062c1 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x103062c3u; SAVEALL; call_ind(c, t_); RETCHK(0x103062c3u, 0x103062c1u); LOADALL; }
  /* 103062c3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103062c5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103062c6 je 0x103062cc */ if (ZF_) goto L_103062cc;
  /* 103062c8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103062ca inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103062cb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103062cc:;
  /* 103062cc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103062ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103062cf(CPU *c) {
  NATIVE_HOOK(0x103062cfu) REGS; LOADALL;
L_103062cf:;
  /* 103062cf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103062d0 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 103062d4 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 103062d6 cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103062dc jne 0x103062fa */ if (!ZF_) goto L_103062fa;
  /* 103062de cmp dword ptr [eax + 0x10], 3 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103062e2 jne 0x103062fa */ if (!ZF_) goto L_103062fa;
  /* 103062e4 mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 103062e7 cmp eax, 0x19930520 */ { u32 a_ = eax, b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103062ec je 0x103062f5 */ if (ZF_) goto L_103062f5;
  /* 103062ee cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103062f3 jne 0x103062fa */ if (!ZF_) goto L_103062fa;
L_103062f5:;
  /* 103062f5 call 0x1030430f */ esp -= 4; M32(esp) = 0x103062fau; SAVEALL; F_1030430f(c); ABI_CHECK(0x1030430fu, 0x103062f5u); RETCHK(0x103062fau, 0x103062f5u); LOADALL;
L_103062fa:;
  /* 103062fa mov eax, dword ptr [0x1030bc64] */ { const u32 m_ = (u32)(0x1030bc64u); eax = (u32)(M32(m_)); }
  /* 103062ff test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306301 je 0x10306317 */ if (ZF_) goto L_10306317;
  /* 10306303 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10306304 call 0x10306400 */ esp -= 4; M32(esp) = 0x10306309u; SAVEALL; F_10306400(c); ABI_CHECK(0x10306400u, 0x10306304u); RETCHK(0x10306309u, 0x10306304u); LOADALL;
  /* 10306309 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030630b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030630c je 0x10306317 */ if (ZF_) goto L_10306317;
  /* 1030630e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030630f call dword ptr [0x1030bc64] */ { const u32 m_ = (u32)(0x1030bc64u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10306315u; SAVEALL; call_ind(c, t_); RETCHK(0x10306315u, 0x1030630fu); LOADALL; }
  /* 10306315 jmp 0x10306319 */ goto L_10306319;
L_10306317:;
  /* 10306317 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10306319:;
  /* 10306319 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030631a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_1030631d(CPU *c) {
  NATIVE_HOOK(0x1030631du) REGS; LOADALL;
L_1030631d:;
  /* 1030631d push 0x103062cf */ { u32 v_ = 0x103062cfu; esp -= 4; M32(esp) = v_; }
  /* 10306322 call dword ptr [0x103090b4] */ { const u32 m_ = (u32)(0x103090b4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10306328u; SAVEALL; call_ind(c, t_); RETCHK(0x10306328u, 0x10306322u); LOADALL; }
  /* 10306328 mov dword ptr [0x1030bc64], eax */ { const u32 m_ = (u32)(0x1030bc64u); M32(m_) = (u32)(eax); }
  /* 1030632d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030632f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306330(CPU *c) {
  NATIVE_HOOK(0x10306330u) REGS; LOADALL;
L_10306330:;
  /* 10306330 push dword ptr [0x1030bc64] */ { const u32 m_ = (u32)(0x1030bc64u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10306336 call dword ptr [0x103090b4] */ { const u32 m_ = (u32)(0x103090b4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030633cu; SAVEALL; call_ind(c, t_); RETCHK(0x1030633cu, 0x10306336u); LOADALL; }
  /* 1030633c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306340(CPU *c) {
  NATIVE_HOOK(0x10306340u) REGS; LOADALL;
L_10306340:;
  /* 10306340 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10306344 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10306348 test edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030634e jne 0x1030638c */ if (!ZF_) goto L_1030638c;
L_10306350:;
  /* 10306350 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 10306352 cmp al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10306354 jne 0x10306384 */ if (!ZF_) goto L_10306384;
  /* 10306356 or al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10306358 je 0x10306380 */ if (ZF_) goto L_10306380;
  /* 1030635a cmp ah, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1030635d jne 0x10306384 */ if (!ZF_) goto L_10306384;
  /* 1030635f or ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10306361 je 0x10306380 */ if (ZF_) goto L_10306380;
  /* 10306363 shr eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10306366 cmp al, byte ptr [ecx + 2] */ { const u32 m_ = (u32)(ecx + 0x2u); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10306369 jne 0x10306384 */ if (!ZF_) goto L_10306384;
  /* 1030636b or al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 1030636d je 0x10306380 */ if (ZF_) goto L_10306380;
  /* 1030636f cmp ah, byte ptr [ecx + 3] */ { const u32 m_ = (u32)(ecx + 0x3u); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10306372 jne 0x10306384 */ if (!ZF_) goto L_10306384;
  /* 10306374 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10306377 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 1030637a or ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 1030637c jne 0x10306350 */ if (!ZF_) goto L_10306350;
  /* 1030637e mov edi, edi */ { edi = (u32)(edi); }
L_10306380:;
  /* 10306380 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10306382 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306384:;
  /* 10306384 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10306386 shl eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10306388 add eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1030638b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1030638c:;
  /* 1030638c test edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306392 je 0x103063ac */ if (ZF_) goto L_103063ac;
  /* 10306394 mov al, byte ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306396 add edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10306399 cmp al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1030639b jne 0x10306384 */ if (!ZF_) goto L_10306384;
  /* 1030639d add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 103063a0 or al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 103063a2 je 0x10306380 */ if (ZF_) goto L_10306380;
  /* 103063a4 test edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103063aa je 0x10306350 */ if (ZF_) goto L_10306350;
L_103063ac:;
  /* 103063ac mov ax, word ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 103063af add edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 103063b2 cmp al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 103063b4 jne 0x10306384 */ if (!ZF_) goto L_10306384;
  /* 103063b6 or al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 103063b8 je 0x10306380 */ if (ZF_) goto L_10306380;
  /* 103063ba cmp ah, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 103063bd jne 0x10306384 */ if (!ZF_) goto L_10306384;
  /* 103063bf or ah, ah */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 103063c1 je 0x10306380 */ if (ZF_) goto L_10306380;
  /* 103063c3 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 103063c6 jmp 0x10306350 */ goto L_10306350;
}

void F_103063c8(CPU *c) {
  NATIVE_HOOK(0x103063c8u) REGS; LOADALL;
L_103063c8:;
  /* 103063c8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103063c9 push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103063cd xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 103063cf push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103063d3 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103063d4 call dword ptr [0x103090b8] */ { const u32 m_ = (u32)(0x103090b8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103063dau; SAVEALL; call_ind(c, t_); RETCHK(0x103063dau, 0x103063d4u); LOADALL; }
  /* 103063da test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103063dc je 0x103063e0 */ if (ZF_) goto L_103063e0;
  /* 103063de xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_103063e0:;
  /* 103063e0 mov eax, esi */ { eax = (u32)(esi); }
  /* 103063e2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103063e3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103063e4(CPU *c) {
  NATIVE_HOOK(0x103063e4u) REGS; LOADALL;
L_103063e4:;
  /* 103063e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103063e5 push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103063e9 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 103063eb push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103063ef inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103063f0 call dword ptr [0x103090a4] */ { const u32 m_ = (u32)(0x103090a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103063f6u; SAVEALL; call_ind(c, t_); RETCHK(0x103063f6u, 0x103063f0u); LOADALL; }
  /* 103063f6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103063f8 je 0x103063fc */ if (ZF_) goto L_103063fc;
  /* 103063fa xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_103063fc:;
  /* 103063fc mov eax, esi */ { eax = (u32)(esi); }
  /* 103063fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103063ff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306400(CPU *c) {
  NATIVE_HOOK(0x10306400u) REGS; LOADALL;
L_10306400:;
  /* 10306400 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10306401 push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10306405 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10306407 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306408 call dword ptr [0x103090bc] */ { const u32 m_ = (u32)(0x103090bcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030640eu; SAVEALL; call_ind(c, t_); RETCHK(0x1030640eu, 0x10306408u); LOADALL; }
  /* 1030640e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306410 je 0x10306414 */ if (ZF_) goto L_10306414;
  /* 10306412 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_10306414:;
  /* 10306414 mov eax, esi */ { eax = (u32)(esi); }
  /* 10306416 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306417 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306420(CPU *c) {
  NATIVE_HOOK(0x10306420u) REGS; LOADALL;
L_10306420:;
  /* 10306420 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10306421 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10306423 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10306424 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10306425 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10306428 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1030642b mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 1030642e mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10306430 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10306432 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10306434 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306436 jbe 0x10306440 */ if ((CF_|ZF_)) goto L_10306440;
  /* 10306438 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030643a jb 0x103065bc */ if (CF_) goto L_103065bc;
L_10306440:;
  /* 10306440 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306446 jne 0x1030645c */ if (!ZF_) goto L_1030645c;
  /* 10306448 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1030644b and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1030644e cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306451 jb 0x1030647c */ if (CF_) goto L_1030647c;
  /* 10306453 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10306455 jmp dword ptr [edx*4 + 0x1030656c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030656cu); u32 t_ = M32(m_); switch (t_) { case 0x1030657cu: goto L_1030657c; case 0x10306584u: goto L_10306584; case 0x10306590u: goto L_10306590; case 0x103065a4u: goto L_103065a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030645c:;
  /* 1030645c mov eax, edi */ { eax = (u32)(edi); }
  /* 1030645e mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 10306463 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10306466 jb 0x10306474 */ if (CF_) goto L_10306474;
  /* 10306468 and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030646b add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1030646d jmp dword ptr [eax*4 + 0x10306480] */ { const u32 m_ = (u32)(eax * 4u + 0x10306480u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10306474:;
  /* 10306474 jmp dword ptr [ecx*4 + 0x1030657c] */ { const u32 m_ = (u32)(ecx * 4u + 0x1030657cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_1030647c:;
  /* 1030647c jmp dword ptr [ecx*4 + 0x10306500] */ { const u32 m_ = (u32)(ecx * 4u + 0x10306500u); u32 t_ = M32(m_); switch (t_) { case 0x10306520u: goto L_10306520; case 0x10306528u: goto L_10306528; case 0x10306530u: goto L_10306530; case 0x10306538u: goto L_10306538; case 0x10306540u: goto L_10306540; case 0x10306548u: goto L_10306548; case 0x10306550u: goto L_10306550; case 0x10306563u: goto L_10306563; default: SAVEALL; call_ind(c, t_); return; } }
L_10306520:;
  /* 10306520 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10306524 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10306528:;
  /* 10306528 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1030652c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10306530:;
  /* 10306530 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10306534 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10306538:;
  /* 10306538 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1030653c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10306540:;
  /* 10306540 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10306544 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10306548:;
  /* 10306548 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030654c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10306550:;
  /* 10306550 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10306554 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10306558 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030655f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10306561 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10306563:;
  /* 10306563 jmp dword ptr [edx*4 + 0x1030656c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030656cu); u32 t_ = M32(m_); switch (t_) { case 0x1030657cu: goto L_1030657c; case 0x10306584u: goto L_10306584; case 0x10306590u: goto L_10306590; case 0x103065a4u: goto L_103065a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030657c:;
  /* 1030657c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030657f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306580 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306581 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306582 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306584:;
  /* 10306584 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306586 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306588 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030658b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030658c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030658d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030658e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306590:;
  /* 10306590 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306592 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306594 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306597 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030659a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030659d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030659e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030659f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103065a4:;
  /* 103065a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103065b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103065b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103065b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103065bc:;
  /* 103065bc lea esi, [ecx + esi - 4] */ esi = (u32)((u32)(ecx + esi + 0xfffffffcu));
  /* 103065c0 lea edi, [ecx + edi - 4] */ edi = (u32)((u32)(ecx + edi + 0xfffffffcu));
  /* 103065c4 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103065ca jne 0x103065f0 */ if (!ZF_) goto L_103065f0;
  /* 103065cc shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 103065cf and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 103065d2 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103065d5 jb 0x103065e4 */ if (CF_) goto L_103065e4;
  /* 103065d7 std */ c->df = 1;
  /* 103065d8 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 103065da cld */ c->df = 0;
  /* 103065db jmp dword ptr [edx*4 + 0x10306708] */ { const u32 m_ = (u32)(edx * 4u + 0x10306708u); u32 t_ = M32(m_); switch (t_) { case 0x10306718u: goto L_10306718; case 0x10306720u: goto L_10306720; case 0x10306730u: goto L_10306730; case 0x10306744u: goto L_10306744; default: SAVEALL; call_ind(c, t_); return; } }
L_103065e4:;
  /* 103065e4 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 103065e6 jmp dword ptr [ecx*4 + 0x103066b8] */ { const u32 m_ = (u32)(ecx * 4u + 0x103066b8u); u32 t_ = M32(m_); switch (t_) { case 0x103066ffu: goto L_103066ff; default: SAVEALL; call_ind(c, t_); return; } }
L_103065f0:;
  /* 103065f0 mov eax, edi */ { eax = (u32)(edi); }
  /* 103065f2 mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 103065f7 cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103065fa jb 0x10306608 */ if (CF_) goto L_10306608;
  /* 103065fc and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103065ff sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10306601 jmp dword ptr [eax*4 + 0x1030660c] */ { const u32 m_ = (u32)(eax * 4u + 0x1030660cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10306608:;
  /* 10306608 jmp dword ptr [ecx*4 + 0x10306708] */ { const u32 m_ = (u32)(ecx * 4u + 0x10306708u); u32 t_ = M32(m_); switch (t_) { case 0x10306718u: goto L_10306718; case 0x10306720u: goto L_10306720; case 0x10306730u: goto L_10306730; case 0x10306744u: goto L_10306744; default: SAVEALL; call_ind(c, t_); return; } }
L_103066ff:;
  /* 103066ff jmp dword ptr [edx*4 + 0x10306708] */ { const u32 m_ = (u32)(edx * 4u + 0x10306708u); u32 t_ = M32(m_); switch (t_) { case 0x10306718u: goto L_10306718; case 0x10306720u: goto L_10306720; case 0x10306730u: goto L_10306730; case 0x10306744u: goto L_10306744; default: SAVEALL; call_ind(c, t_); return; } }
L_10306718:;
  /* 10306718 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030671b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030671c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030671d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030671e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306720:;
  /* 10306720 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306723 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306726 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306729 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030672a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030672b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030672c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306730:;
  /* 10306730 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306733 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306736 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306739 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030673c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030673f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306740 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306741 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306742 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306744:;
  /* 10306744 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306747 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030674a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030674d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306750 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306753 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306756 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306759 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030675a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030675b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030675c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306480(CPU *c) {
  NATIVE_HOOK(0x10306480u) REGS; LOADALL;
  goto L_10306480;
L_1030647c:;
  /* 1030647c jmp dword ptr [ecx*4 + 0x10306500] */ { const u32 m_ = (u32)(ecx * 4u + 0x10306500u); u32 t_ = M32(m_); switch (t_) { case 0x10306520u: goto L_10306520; case 0x10306528u: goto L_10306528; case 0x10306530u: goto L_10306530; case 0x10306538u: goto L_10306538; case 0x10306540u: goto L_10306540; case 0x10306548u: goto L_10306548; case 0x10306550u: goto L_10306550; case 0x10306563u: goto L_10306563; default: SAVEALL; call_ind(c, t_); return; } }
L_10306480:;
  /* 10306480 xor byte ptr gs:[eax], dl */ TRAP(0x10306480u, "unimpl xor byte ptr gs:[eax], dl");
  /* 10306483 nop */ ;
  /* 10306484 nop */ ;
  /* 10306485 xor byte ptr fs:[eax], dl */ { const u32 m_ = (u32)(eax + c->fs_base); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10306488 mov esp, 0xe0103064 */ { esp = (u32)(0xe0103064u); }
  /* 1030648d xor byte ptr fs:[eax], dl */ { const u32 m_ = (u32)(eax + c->fs_base); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10306490 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10306492 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306494 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306496 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306499 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030649c mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030649f shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 103064a2 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103064a5 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103064a8 add edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103064ab cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103064ae jb 0x1030647c */ if (CF_) goto L_1030647c;
  /* 103064b0 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 103064b2 jmp dword ptr [edx*4 + 0x1030656c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030656cu); u32 t_ = M32(m_); switch (t_) { case 0x1030657cu: goto L_1030657c; case 0x10306584u: goto L_10306584; case 0x10306590u: goto L_10306590; case 0x103065a4u: goto L_103065a4; default: SAVEALL; call_ind(c, t_); return; } }
L_10306520:;
  /* 10306520 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10306524 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10306528:;
  /* 10306528 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1030652c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10306530:;
  /* 10306530 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10306534 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10306538:;
  /* 10306538 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1030653c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10306540:;
  /* 10306540 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10306544 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10306548:;
  /* 10306548 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030654c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10306550:;
  /* 10306550 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10306554 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10306558 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030655f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10306561 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10306563:;
  /* 10306563 jmp dword ptr [edx*4 + 0x1030656c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030656cu); u32 t_ = M32(m_); switch (t_) { case 0x1030657cu: goto L_1030657c; case 0x10306584u: goto L_10306584; case 0x10306590u: goto L_10306590; case 0x103065a4u: goto L_103065a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030657c:;
  /* 1030657c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030657f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306580 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306581 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306582 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306584:;
  /* 10306584 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306586 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306588 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030658b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030658c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030658d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030658e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306590:;
  /* 10306590 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306592 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306594 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306597 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030659a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030659d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030659e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030659f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103065a4:;
  /* 103065a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103065b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103065b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103065b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306490(CPU *c) {
  NATIVE_HOOK(0x10306490u) REGS; LOADALL;
  goto L_10306490;
L_1030647c:;
  /* 1030647c jmp dword ptr [ecx*4 + 0x10306500] */ { const u32 m_ = (u32)(ecx * 4u + 0x10306500u); u32 t_ = M32(m_); switch (t_) { case 0x10306520u: goto L_10306520; case 0x10306528u: goto L_10306528; case 0x10306530u: goto L_10306530; case 0x10306538u: goto L_10306538; case 0x10306540u: goto L_10306540; case 0x10306548u: goto L_10306548; case 0x10306550u: goto L_10306550; case 0x10306563u: goto L_10306563; default: SAVEALL; call_ind(c, t_); return; } }
L_10306490:;
  /* 10306490 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10306492 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306494 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306496 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306499 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030649c mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030649f shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 103064a2 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103064a5 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103064a8 add edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103064ab cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103064ae jb 0x1030647c */ if (CF_) goto L_1030647c;
  /* 103064b0 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 103064b2 jmp dword ptr [edx*4 + 0x1030656c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030656cu); u32 t_ = M32(m_); switch (t_) { case 0x1030657cu: goto L_1030657c; case 0x10306584u: goto L_10306584; case 0x10306590u: goto L_10306590; case 0x103065a4u: goto L_103065a4; default: SAVEALL; call_ind(c, t_); return; } }
L_10306520:;
  /* 10306520 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10306524 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10306528:;
  /* 10306528 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1030652c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10306530:;
  /* 10306530 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10306534 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10306538:;
  /* 10306538 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1030653c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10306540:;
  /* 10306540 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10306544 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10306548:;
  /* 10306548 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030654c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10306550:;
  /* 10306550 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10306554 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10306558 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030655f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10306561 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10306563:;
  /* 10306563 jmp dword ptr [edx*4 + 0x1030656c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030656cu); u32 t_ = M32(m_); switch (t_) { case 0x1030657cu: goto L_1030657c; case 0x10306584u: goto L_10306584; case 0x10306590u: goto L_10306590; case 0x103065a4u: goto L_103065a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030657c:;
  /* 1030657c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030657f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306580 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306581 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306582 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306584:;
  /* 10306584 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306586 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306588 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030658b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030658c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030658d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030658e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306590:;
  /* 10306590 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306592 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306594 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306597 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030659a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030659d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030659e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030659f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103065a4:;
  /* 103065a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103065b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103065b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103065b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103064bc(CPU *c) {
  NATIVE_HOOK(0x103064bcu) REGS; LOADALL;
  goto L_103064bc;
L_1030647c:;
  /* 1030647c jmp dword ptr [ecx*4 + 0x10306500] */ { const u32 m_ = (u32)(ecx * 4u + 0x10306500u); u32 t_ = M32(m_); switch (t_) { case 0x10306520u: goto L_10306520; case 0x10306528u: goto L_10306528; case 0x10306530u: goto L_10306530; case 0x10306538u: goto L_10306538; case 0x10306540u: goto L_10306540; case 0x10306548u: goto L_10306548; case 0x10306550u: goto L_10306550; case 0x10306563u: goto L_10306563; default: SAVEALL; call_ind(c, t_); return; } }
L_103064bc:;
  /* 103064bc and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 103064be mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103064c0 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103064c2 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103064c5 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 103064c8 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103064cb add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103064ce add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103064d1 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103064d4 jb 0x1030647c */ if (CF_) goto L_1030647c;
  /* 103064d6 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 103064d8 jmp dword ptr [edx*4 + 0x1030656c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030656cu); u32 t_ = M32(m_); switch (t_) { case 0x1030657cu: goto L_1030657c; case 0x10306584u: goto L_10306584; case 0x10306590u: goto L_10306590; case 0x103065a4u: goto L_103065a4; default: SAVEALL; call_ind(c, t_); return; } }
L_10306520:;
  /* 10306520 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10306524 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10306528:;
  /* 10306528 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1030652c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10306530:;
  /* 10306530 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10306534 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10306538:;
  /* 10306538 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1030653c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10306540:;
  /* 10306540 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10306544 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10306548:;
  /* 10306548 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030654c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10306550:;
  /* 10306550 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10306554 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10306558 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030655f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10306561 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10306563:;
  /* 10306563 jmp dword ptr [edx*4 + 0x1030656c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030656cu); u32 t_ = M32(m_); switch (t_) { case 0x1030657cu: goto L_1030657c; case 0x10306584u: goto L_10306584; case 0x10306590u: goto L_10306590; case 0x103065a4u: goto L_103065a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030657c:;
  /* 1030657c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030657f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306580 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306581 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306582 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306584:;
  /* 10306584 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306586 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306588 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030658b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030658c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030658d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030658e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306590:;
  /* 10306590 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306592 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306594 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306597 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030659a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030659d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030659e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030659f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103065a4:;
  /* 103065a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103065b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103065b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103065b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103064e0(CPU *c) {
  NATIVE_HOOK(0x103064e0u) REGS; LOADALL;
  goto L_103064e0;
L_1030647c:;
  /* 1030647c jmp dword ptr [ecx*4 + 0x10306500] */ { const u32 m_ = (u32)(ecx * 4u + 0x10306500u); u32 t_ = M32(m_); switch (t_) { case 0x10306520u: goto L_10306520; case 0x10306528u: goto L_10306528; case 0x10306530u: goto L_10306530; case 0x10306538u: goto L_10306538; case 0x10306540u: goto L_10306540; case 0x10306548u: goto L_10306548; case 0x10306550u: goto L_10306550; case 0x10306563u: goto L_10306563; default: SAVEALL; call_ind(c, t_); return; } }
L_103064e0:;
  /* 103064e0 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 103064e2 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103064e4 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103064e6 add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103064e9 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 103064ec add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103064ef cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103064f2 jb 0x1030647c */ if (CF_) goto L_1030647c;
  /* 103064f4 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 103064f6 jmp dword ptr [edx*4 + 0x1030656c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030656cu); u32 t_ = M32(m_); switch (t_) { case 0x1030657cu: goto L_1030657c; case 0x10306584u: goto L_10306584; case 0x10306590u: goto L_10306590; case 0x103065a4u: goto L_103065a4; default: SAVEALL; call_ind(c, t_); return; } }
L_10306520:;
  /* 10306520 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10306524 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10306528:;
  /* 10306528 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1030652c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10306530:;
  /* 10306530 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10306534 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10306538:;
  /* 10306538 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1030653c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10306540:;
  /* 10306540 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10306544 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10306548:;
  /* 10306548 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030654c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10306550:;
  /* 10306550 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10306554 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10306558 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030655f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10306561 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10306563:;
  /* 10306563 jmp dword ptr [edx*4 + 0x1030656c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030656cu); u32 t_ = M32(m_); switch (t_) { case 0x1030657cu: goto L_1030657c; case 0x10306584u: goto L_10306584; case 0x10306590u: goto L_10306590; case 0x103065a4u: goto L_103065a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030657c:;
  /* 1030657c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030657f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306580 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306581 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306582 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306584:;
  /* 10306584 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306586 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306588 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030658b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030658c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030658d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030658e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306590:;
  /* 10306590 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306592 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306594 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306597 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030659a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030659d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030659e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030659f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103065a4:;
  /* 103065a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103065b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103065b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103065b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306500(CPU *c) {
  NATIVE_HOOK(0x10306500u) REGS; LOADALL;
L_10306500:;
  /* 10306500 arpl word ptr [ebp + 0x30], sp */ TRAP(0x10306500u, "arpl");
}

void F_10306520(CPU *c) {
  NATIVE_HOOK(0x10306520u) REGS; LOADALL;
L_10306520:;
  /* 10306520 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10306524 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10306528 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1030652c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 10306530 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10306534 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10306538 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1030653c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10306540 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10306544 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10306548 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030654c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10306550 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10306554 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10306558 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030655f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10306561 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10306563 jmp dword ptr [edx*4 + 0x1030656c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030656cu); u32 t_ = M32(m_); switch (t_) { case 0x1030657cu: goto L_1030657c; case 0x10306584u: goto L_10306584; case 0x10306590u: goto L_10306590; case 0x103065a4u: goto L_103065a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030657c:;
  /* 1030657c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030657f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306580 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306581 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306582 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306584:;
  /* 10306584 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306586 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306588 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030658b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030658c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030658d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030658e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306590:;
  /* 10306590 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306592 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306594 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306597 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030659a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030659d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030659e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030659f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103065a4:;
  /* 103065a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103065b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103065b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103065b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306528(CPU *c) {
  NATIVE_HOOK(0x10306528u) REGS; LOADALL;
L_10306528:;
  /* 10306528 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1030652c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 10306530 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10306534 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10306538 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1030653c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10306540 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10306544 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10306548 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030654c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10306550 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10306554 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10306558 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030655f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10306561 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10306563 jmp dword ptr [edx*4 + 0x1030656c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030656cu); u32 t_ = M32(m_); switch (t_) { case 0x1030657cu: goto L_1030657c; case 0x10306584u: goto L_10306584; case 0x10306590u: goto L_10306590; case 0x103065a4u: goto L_103065a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030657c:;
  /* 1030657c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030657f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306580 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306581 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306582 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306584:;
  /* 10306584 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306586 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306588 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030658b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030658c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030658d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030658e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306590:;
  /* 10306590 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306592 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306594 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306597 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030659a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030659d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030659e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030659f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103065a4:;
  /* 103065a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103065b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103065b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103065b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306530(CPU *c) {
  NATIVE_HOOK(0x10306530u) REGS; LOADALL;
L_10306530:;
  /* 10306530 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10306534 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10306538 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1030653c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10306540 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10306544 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10306548 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030654c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10306550 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10306554 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10306558 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030655f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10306561 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10306563 jmp dword ptr [edx*4 + 0x1030656c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030656cu); u32 t_ = M32(m_); switch (t_) { case 0x1030657cu: goto L_1030657c; case 0x10306584u: goto L_10306584; case 0x10306590u: goto L_10306590; case 0x103065a4u: goto L_103065a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030657c:;
  /* 1030657c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030657f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306580 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306581 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306582 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306584:;
  /* 10306584 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306586 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306588 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030658b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030658c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030658d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030658e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306590:;
  /* 10306590 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306592 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306594 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306597 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030659a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030659d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030659e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030659f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103065a4:;
  /* 103065a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103065b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103065b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103065b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306538(CPU *c) {
  NATIVE_HOOK(0x10306538u) REGS; LOADALL;
L_10306538:;
  /* 10306538 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1030653c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10306540 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10306544 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10306548 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030654c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10306550 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10306554 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10306558 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030655f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10306561 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10306563 jmp dword ptr [edx*4 + 0x1030656c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030656cu); u32 t_ = M32(m_); switch (t_) { case 0x1030657cu: goto L_1030657c; case 0x10306584u: goto L_10306584; case 0x10306590u: goto L_10306590; case 0x103065a4u: goto L_103065a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030657c:;
  /* 1030657c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030657f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306580 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306581 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306582 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306584:;
  /* 10306584 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306586 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306588 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030658b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030658c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030658d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030658e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306590:;
  /* 10306590 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306592 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306594 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306597 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030659a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030659d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030659e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030659f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103065a4:;
  /* 103065a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103065b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103065b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103065b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306540(CPU *c) {
  NATIVE_HOOK(0x10306540u) REGS; LOADALL;
L_10306540:;
  /* 10306540 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10306544 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10306548 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030654c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10306550 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10306554 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10306558 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030655f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10306561 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10306563 jmp dword ptr [edx*4 + 0x1030656c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030656cu); u32 t_ = M32(m_); switch (t_) { case 0x1030657cu: goto L_1030657c; case 0x10306584u: goto L_10306584; case 0x10306590u: goto L_10306590; case 0x103065a4u: goto L_103065a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030657c:;
  /* 1030657c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030657f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306580 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306581 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306582 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306584:;
  /* 10306584 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306586 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306588 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030658b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030658c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030658d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030658e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306590:;
  /* 10306590 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306592 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306594 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306597 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030659a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030659d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030659e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030659f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103065a4:;
  /* 103065a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103065b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103065b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103065b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306548(CPU *c) {
  NATIVE_HOOK(0x10306548u) REGS; LOADALL;
L_10306548:;
  /* 10306548 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030654c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10306550 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10306554 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10306558 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030655f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10306561 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10306563 jmp dword ptr [edx*4 + 0x1030656c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030656cu); u32 t_ = M32(m_); switch (t_) { case 0x1030657cu: goto L_1030657c; case 0x10306584u: goto L_10306584; case 0x10306590u: goto L_10306590; case 0x103065a4u: goto L_103065a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030657c:;
  /* 1030657c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030657f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306580 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306581 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306582 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306584:;
  /* 10306584 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306586 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306588 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030658b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030658c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030658d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030658e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306590:;
  /* 10306590 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306592 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306594 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306597 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030659a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030659d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030659e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030659f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103065a4:;
  /* 103065a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103065b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103065b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103065b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306550(CPU *c) {
  NATIVE_HOOK(0x10306550u) REGS; LOADALL;
L_10306550:;
  /* 10306550 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10306554 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10306558 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030655f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10306561 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10306563 jmp dword ptr [edx*4 + 0x1030656c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030656cu); u32 t_ = M32(m_); switch (t_) { case 0x1030657cu: goto L_1030657c; case 0x10306584u: goto L_10306584; case 0x10306590u: goto L_10306590; case 0x103065a4u: goto L_103065a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030657c:;
  /* 1030657c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030657f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306580 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306581 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306582 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306584:;
  /* 10306584 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306586 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306588 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030658b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030658c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030658d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030658e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306590:;
  /* 10306590 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306592 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306594 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306597 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030659a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030659d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030659e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030659f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103065a4:;
  /* 103065a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103065b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103065b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103065b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306563(CPU *c) {
  NATIVE_HOOK(0x10306563u) REGS; LOADALL;
L_10306563:;
  /* 10306563 jmp dword ptr [edx*4 + 0x1030656c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030656cu); u32 t_ = M32(m_); switch (t_) { case 0x1030657cu: goto L_1030657c; case 0x10306584u: goto L_10306584; case 0x10306590u: goto L_10306590; case 0x103065a4u: goto L_103065a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030657c:;
  /* 1030657c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030657f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306580 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306581 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306582 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306584:;
  /* 10306584 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306586 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306588 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030658b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030658c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030658d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030658e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306590:;
  /* 10306590 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306592 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306594 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306597 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030659a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030659d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030659e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030659f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103065a4:;
  /* 103065a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103065b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103065b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103065b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030656c(CPU *c) {
  NATIVE_HOOK(0x1030656cu) REGS; LOADALL;
L_1030656c:;
  /* 1030656c jl 0x103065d3 */ if (LT_) goto L_103065d3;
  /* 1030656e xor byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10306570 test byte ptr [ebp + 0x30], ah */ { const u32 m_ = (u32)(ebp + 0x30u); u32 a_ = M8(m_), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10306573 adc byte ptr [eax - 0x5befcf9b], dl */ { const u32 m_ = (u32)(eax + 0xa4103065u); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10306579 xor byte ptr gs:[eax], dl */ TRAP(0x10306579u, "unimpl xor byte ptr gs:[eax], dl");
  /* 1030657c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030657f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306580 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306581 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306582 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103065d3:;
  /* 103065d3 stc */ SETC(OP_RAW, 1, 0, 0, 4);
  /* 103065d4 or byte ptr [edx + 0xd], dh */ { const u32 m_ = (u32)(edx + 0xdu); u32 a_ = M8(m_), b_ = ((edx >> 8) & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 103065d7 std */ c->df = 1;
  /* 103065d8 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 103065da cld */ c->df = 0;
  /* 103065db jmp dword ptr [edx*4 + 0x10306708] */ { const u32 m_ = (u32)(edx * 4u + 0x10306708u); u32 t_ = M32(m_); switch (t_) { case 0x10306718u: goto L_10306718; case 0x10306720u: goto L_10306720; case 0x10306730u: goto L_10306730; case 0x10306744u: goto L_10306744; default: SAVEALL; call_ind(c, t_); return; } }
L_10306718:;
  /* 10306718 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030671b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030671c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030671d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030671e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306720:;
  /* 10306720 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306723 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306726 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306729 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030672a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030672b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030672c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306730:;
  /* 10306730 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306733 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306736 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306739 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030673c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030673f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306740 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306741 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306742 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306744:;
  /* 10306744 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306747 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030674a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030674d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306750 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306753 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306756 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306759 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030675a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030675b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030675c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030657c(CPU *c) {
  NATIVE_HOOK(0x1030657cu) REGS; LOADALL;
L_1030657c:;
  /* 1030657c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030657f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306580 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306581 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306582 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306584(CPU *c) {
  NATIVE_HOOK(0x10306584u) REGS; LOADALL;
L_10306584:;
  /* 10306584 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306586 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306588 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030658b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030658c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030658d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030658e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306590(CPU *c) {
  NATIVE_HOOK(0x10306590u) REGS; LOADALL;
L_10306590:;
  /* 10306590 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306592 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306594 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306597 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030659a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030659d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030659e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030659f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103065a4(CPU *c) {
  NATIVE_HOOK(0x103065a4u) REGS; LOADALL;
L_103065a4:;
  /* 103065a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103065b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103065b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103065b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103065b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103065b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103065ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030660c(CPU *c) {
  NATIVE_HOOK(0x1030660cu) REGS; LOADALL;
L_1030660c:;
  /* 1030660c xor byte ptr [bx + si], dl */ TRAP(0x1030660cu, "unimpl xor byte ptr [bx + si], dl");
  /* 1030660f nop */ ;
  /* 10306610 sbb al, 0x66 */ { u32 a_ = (eax & 0xffu), b_ = 0x66u; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10306612 xor byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10306614 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306615 xor byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10306618 push 0x8a103066 */ { u32 v_ = 0x8a103066u; esp -= 4; M32(esp) = v_; }
  /* 1030661d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1030661e add esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10306620 ror dword ptr [eax - 0x117cfcb9], 1 */ { const u32 m_ = (u32)(eax + 0xee830347u); u32 n_ = (1u) & 31u; if (n_) { u32 a_ = M32(m_); u32 k_ = n_ % 32u; u32 r_ = k_ ? (((a_ >> k_) | (a_ << (32u - k_))) & 0xffffffffu) : a_; u32 cf_ = (r_ >> 31) & 1u; u32 of_ = ((r_ >> 31) ^ (r_ >> 30)) & 1u; u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | (of_ << 11); SETRAW(e_); M32(m_) = (u32)(r_); } }
  /* 10306626 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10306628 jmp 0x121fe92f */ TRAP(0x121fe92fu, "bad jump target");
}

void F_1030661c(CPU *c) {
  NATIVE_HOOK(0x1030661cu) REGS; LOADALL;
  goto L_1030661c;
L_103065e4:;
  /* 103065e4 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 103065e6 jmp dword ptr [ecx*4 + 0x103066b8] */ { const u32 m_ = (u32)(ecx * 4u + 0x103066b8u); u32 t_ = M32(m_); switch (t_) { case 0x103066ffu: goto L_103066ff; default: SAVEALL; call_ind(c, t_); return; } }
L_1030661c:;
  /* 1030661c mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030661f and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10306621 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306624 sub esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10306627 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1030662a sub edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1030662d cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306630 jb 0x103065e4 */ if (CF_) goto L_103065e4;
  /* 10306632 std */ c->df = 1;
  /* 10306633 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10306635 cld */ c->df = 0;
  /* 10306636 jmp dword ptr [edx*4 + 0x10306708] */ { const u32 m_ = (u32)(edx * 4u + 0x10306708u); u32 t_ = M32(m_); switch (t_) { case 0x10306718u: goto L_10306718; case 0x10306720u: goto L_10306720; case 0x10306730u: goto L_10306730; case 0x10306744u: goto L_10306744; default: SAVEALL; call_ind(c, t_); return; } }
L_103066ff:;
  /* 103066ff jmp dword ptr [edx*4 + 0x10306708] */ { const u32 m_ = (u32)(edx * 4u + 0x10306708u); u32 t_ = M32(m_); switch (t_) { case 0x10306718u: goto L_10306718; case 0x10306720u: goto L_10306720; case 0x10306730u: goto L_10306730; case 0x10306744u: goto L_10306744; default: SAVEALL; call_ind(c, t_); return; } }
L_10306718:;
  /* 10306718 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030671b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030671c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030671d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030671e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306720:;
  /* 10306720 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306723 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306726 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306729 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030672a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030672b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030672c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306730:;
  /* 10306730 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306733 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306736 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306739 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030673c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030673f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306740 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306741 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306742 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306744:;
  /* 10306744 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306747 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030674a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030674d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306750 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306753 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306756 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306759 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030675a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030675b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030675c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306640(CPU *c) {
  NATIVE_HOOK(0x10306640u) REGS; LOADALL;
  goto L_10306640;
L_103065e4:;
  /* 103065e4 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 103065e6 jmp dword ptr [ecx*4 + 0x103066b8] */ { const u32 m_ = (u32)(ecx * 4u + 0x103066b8u); u32 t_ = M32(m_); switch (t_) { case 0x103066ffu: goto L_103066ff; default: SAVEALL; call_ind(c, t_); return; } }
L_10306640:;
  /* 10306640 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306643 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10306645 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306648 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030664b shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1030664e mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306651 sub esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10306654 sub edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10306657 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030665a jb 0x103065e4 */ if (CF_) goto L_103065e4;
  /* 1030665c std */ c->df = 1;
  /* 1030665d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1030665f cld */ c->df = 0;
  /* 10306660 jmp dword ptr [edx*4 + 0x10306708] */ { const u32 m_ = (u32)(edx * 4u + 0x10306708u); u32 t_ = M32(m_); switch (t_) { case 0x10306718u: goto L_10306718; case 0x10306720u: goto L_10306720; case 0x10306730u: goto L_10306730; case 0x10306744u: goto L_10306744; default: SAVEALL; call_ind(c, t_); return; } }
L_103066ff:;
  /* 103066ff jmp dword ptr [edx*4 + 0x10306708] */ { const u32 m_ = (u32)(edx * 4u + 0x10306708u); u32 t_ = M32(m_); switch (t_) { case 0x10306718u: goto L_10306718; case 0x10306720u: goto L_10306720; case 0x10306730u: goto L_10306730; case 0x10306744u: goto L_10306744; default: SAVEALL; call_ind(c, t_); return; } }
L_10306718:;
  /* 10306718 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030671b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030671c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030671d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030671e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306720:;
  /* 10306720 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306723 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306726 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306729 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030672a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030672b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030672c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306730:;
  /* 10306730 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306733 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306736 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306739 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030673c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030673f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306740 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306741 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306742 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306744:;
  /* 10306744 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306747 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030674a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030674d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306750 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306753 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306756 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306759 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030675a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030675b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030675c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306668(CPU *c) {
  NATIVE_HOOK(0x10306668u) REGS; LOADALL;
  goto L_10306668;
L_103065e4:;
  /* 103065e4 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 103065e6 jmp dword ptr [ecx*4 + 0x103066b8] */ { const u32 m_ = (u32)(ecx * 4u + 0x103066b8u); u32 t_ = M32(m_); switch (t_) { case 0x103066ffu: goto L_103066ff; default: SAVEALL; call_ind(c, t_); return; } }
L_10306668:;
  /* 10306668 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030666b and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1030666d mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306670 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306673 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306676 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306679 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1030667c mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030667f sub esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10306682 sub edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10306685 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306688 jb 0x103065e4 */ if (CF_) goto L_103065e4;
  /* 1030668e std */ c->df = 1;
  /* 1030668f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10306691 cld */ c->df = 0;
  /* 10306692 jmp dword ptr [edx*4 + 0x10306708] */ { const u32 m_ = (u32)(edx * 4u + 0x10306708u); u32 t_ = M32(m_); switch (t_) { case 0x10306718u: goto L_10306718; case 0x10306720u: goto L_10306720; case 0x10306730u: goto L_10306730; case 0x10306744u: goto L_10306744; default: SAVEALL; call_ind(c, t_); return; } }
L_103066ff:;
  /* 103066ff jmp dword ptr [edx*4 + 0x10306708] */ { const u32 m_ = (u32)(edx * 4u + 0x10306708u); u32 t_ = M32(m_); switch (t_) { case 0x10306718u: goto L_10306718; case 0x10306720u: goto L_10306720; case 0x10306730u: goto L_10306730; case 0x10306744u: goto L_10306744; default: SAVEALL; call_ind(c, t_); return; } }
L_10306718:;
  /* 10306718 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030671b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030671c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030671d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030671e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306720:;
  /* 10306720 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306723 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306726 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306729 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030672a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030672b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030672c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306730:;
  /* 10306730 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306733 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306736 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306739 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030673c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030673f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306740 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306741 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306742 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306744:;
  /* 10306744 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306747 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030674a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030674d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306750 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306753 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306756 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306759 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030675a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030675b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030675c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103066b8(CPU *c) {
  NATIVE_HOOK(0x103066b8u) REGS; LOADALL;
L_103066b8:;
  /* 103066b8 jmp dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_103066bc(CPU *c) {
  NATIVE_HOOK(0x103066bcu) REGS; LOADALL;
L_103066bc:;
  /* 103066bc mov eax, dword ptr [esi + ecx*4 + 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x1cu); eax = (u32)(M32(m_)); }
  /* 103066c0 mov dword ptr [edi + ecx*4 + 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x1cu); M32(m_) = (u32)(eax); }
  /* 103066c4 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 103066c8 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 103066cc mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 103066d0 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 103066d4 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 103066d8 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 103066dc mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 103066e0 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 103066e4 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 103066e8 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 103066ec mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 103066f0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 103066f4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 103066fb add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103066fd add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103066ff jmp dword ptr [edx*4 + 0x10306708] */ { const u32 m_ = (u32)(edx * 4u + 0x10306708u); u32 t_ = M32(m_); switch (t_) { case 0x10306718u: goto L_10306718; case 0x10306720u: goto L_10306720; case 0x10306730u: goto L_10306730; case 0x10306744u: goto L_10306744; default: SAVEALL; call_ind(c, t_); return; } }
L_10306718:;
  /* 10306718 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030671b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030671c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030671d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030671e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306720:;
  /* 10306720 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306723 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306726 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306729 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030672a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030672b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030672c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306730:;
  /* 10306730 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306733 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306736 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306739 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030673c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030673f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306740 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306741 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306742 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306744:;
  /* 10306744 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306747 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030674a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030674d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306750 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306753 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306756 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306759 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030675a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030675b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030675c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103066c4(CPU *c) {
  NATIVE_HOOK(0x103066c4u) REGS; LOADALL;
L_103066c4:;
  /* 103066c4 mov eax, dword ptr [esi + ecx*4 + 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x18u); eax = (u32)(M32(m_)); }
  /* 103066c8 mov dword ptr [edi + ecx*4 + 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x18u); M32(m_) = (u32)(eax); }
  /* 103066cc mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 103066d0 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 103066d4 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 103066d8 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 103066dc mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 103066e0 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 103066e4 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 103066e8 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 103066ec mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 103066f0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 103066f4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 103066fb add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103066fd add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103066ff jmp dword ptr [edx*4 + 0x10306708] */ { const u32 m_ = (u32)(edx * 4u + 0x10306708u); u32 t_ = M32(m_); switch (t_) { case 0x10306718u: goto L_10306718; case 0x10306720u: goto L_10306720; case 0x10306730u: goto L_10306730; case 0x10306744u: goto L_10306744; default: SAVEALL; call_ind(c, t_); return; } }
L_10306718:;
  /* 10306718 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030671b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030671c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030671d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030671e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306720:;
  /* 10306720 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306723 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306726 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306729 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030672a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030672b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030672c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306730:;
  /* 10306730 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306733 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306736 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306739 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030673c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030673f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306740 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306741 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306742 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306744:;
  /* 10306744 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306747 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030674a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030674d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306750 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306753 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306756 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306759 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030675a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030675b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030675c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103066cc(CPU *c) {
  NATIVE_HOOK(0x103066ccu) REGS; LOADALL;
L_103066cc:;
  /* 103066cc mov eax, dword ptr [esi + ecx*4 + 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x14u); eax = (u32)(M32(m_)); }
  /* 103066d0 mov dword ptr [edi + ecx*4 + 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x14u); M32(m_) = (u32)(eax); }
  /* 103066d4 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 103066d8 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 103066dc mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 103066e0 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 103066e4 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 103066e8 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 103066ec mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 103066f0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 103066f4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 103066fb add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103066fd add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103066ff jmp dword ptr [edx*4 + 0x10306708] */ { const u32 m_ = (u32)(edx * 4u + 0x10306708u); u32 t_ = M32(m_); switch (t_) { case 0x10306718u: goto L_10306718; case 0x10306720u: goto L_10306720; case 0x10306730u: goto L_10306730; case 0x10306744u: goto L_10306744; default: SAVEALL; call_ind(c, t_); return; } }
L_10306718:;
  /* 10306718 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030671b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030671c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030671d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030671e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306720:;
  /* 10306720 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306723 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306726 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306729 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030672a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030672b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030672c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306730:;
  /* 10306730 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306733 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306736 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306739 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030673c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030673f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306740 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306741 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306742 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306744:;
  /* 10306744 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306747 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030674a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030674d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306750 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306753 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306756 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306759 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030675a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030675b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030675c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103066d4(CPU *c) {
  NATIVE_HOOK(0x103066d4u) REGS; LOADALL;
L_103066d4:;
  /* 103066d4 mov eax, dword ptr [esi + ecx*4 + 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x10u); eax = (u32)(M32(m_)); }
  /* 103066d8 mov dword ptr [edi + ecx*4 + 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x10u); M32(m_) = (u32)(eax); }
  /* 103066dc mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 103066e0 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 103066e4 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 103066e8 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 103066ec mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 103066f0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 103066f4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 103066fb add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103066fd add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103066ff jmp dword ptr [edx*4 + 0x10306708] */ { const u32 m_ = (u32)(edx * 4u + 0x10306708u); u32 t_ = M32(m_); switch (t_) { case 0x10306718u: goto L_10306718; case 0x10306720u: goto L_10306720; case 0x10306730u: goto L_10306730; case 0x10306744u: goto L_10306744; default: SAVEALL; call_ind(c, t_); return; } }
L_10306718:;
  /* 10306718 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030671b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030671c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030671d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030671e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306720:;
  /* 10306720 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306723 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306726 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306729 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030672a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030672b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030672c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306730:;
  /* 10306730 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306733 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306736 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306739 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030673c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030673f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306740 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306741 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306742 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306744:;
  /* 10306744 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306747 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030674a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030674d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306750 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306753 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306756 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306759 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030675a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030675b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030675c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103066dc(CPU *c) {
  NATIVE_HOOK(0x103066dcu) REGS; LOADALL;
L_103066dc:;
  /* 103066dc mov eax, dword ptr [esi + ecx*4 + 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xcu); eax = (u32)(M32(m_)); }
  /* 103066e0 mov dword ptr [edi + ecx*4 + 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xcu); M32(m_) = (u32)(eax); }
  /* 103066e4 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 103066e8 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 103066ec mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 103066f0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 103066f4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 103066fb add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103066fd add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103066ff jmp dword ptr [edx*4 + 0x10306708] */ { const u32 m_ = (u32)(edx * 4u + 0x10306708u); u32 t_ = M32(m_); switch (t_) { case 0x10306718u: goto L_10306718; case 0x10306720u: goto L_10306720; case 0x10306730u: goto L_10306730; case 0x10306744u: goto L_10306744; default: SAVEALL; call_ind(c, t_); return; } }
L_10306718:;
  /* 10306718 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030671b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030671c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030671d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030671e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306720:;
  /* 10306720 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306723 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306726 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306729 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030672a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030672b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030672c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306730:;
  /* 10306730 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306733 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306736 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306739 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030673c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030673f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306740 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306741 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306742 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306744:;
  /* 10306744 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306747 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030674a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030674d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306750 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306753 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306756 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306759 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030675a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030675b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030675c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103066e4(CPU *c) {
  NATIVE_HOOK(0x103066e4u) REGS; LOADALL;
L_103066e4:;
  /* 103066e4 mov eax, dword ptr [esi + ecx*4 + 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 103066e8 mov dword ptr [edi + ecx*4 + 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); M32(m_) = (u32)(eax); }
  /* 103066ec mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 103066f0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 103066f4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 103066fb add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103066fd add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103066ff jmp dword ptr [edx*4 + 0x10306708] */ { const u32 m_ = (u32)(edx * 4u + 0x10306708u); u32 t_ = M32(m_); switch (t_) { case 0x10306718u: goto L_10306718; case 0x10306720u: goto L_10306720; case 0x10306730u: goto L_10306730; case 0x10306744u: goto L_10306744; default: SAVEALL; call_ind(c, t_); return; } }
L_10306718:;
  /* 10306718 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030671b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030671c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030671d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030671e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306720:;
  /* 10306720 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306723 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306726 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306729 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030672a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030672b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030672c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306730:;
  /* 10306730 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306733 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306736 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306739 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030673c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030673f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306740 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306741 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306742 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306744:;
  /* 10306744 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306747 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030674a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030674d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306750 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306753 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306756 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306759 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030675a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030675b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030675c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103066ec(CPU *c) {
  NATIVE_HOOK(0x103066ecu) REGS; LOADALL;
L_103066ec:;
  /* 103066ec mov eax, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 103066f0 mov dword ptr [edi + ecx*4 + 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); M32(m_) = (u32)(eax); }
  /* 103066f4 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 103066fb add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103066fd add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103066ff jmp dword ptr [edx*4 + 0x10306708] */ { const u32 m_ = (u32)(edx * 4u + 0x10306708u); u32 t_ = M32(m_); switch (t_) { case 0x10306718u: goto L_10306718; case 0x10306720u: goto L_10306720; case 0x10306730u: goto L_10306730; case 0x10306744u: goto L_10306744; default: SAVEALL; call_ind(c, t_); return; } }
L_10306718:;
  /* 10306718 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030671b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030671c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030671d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030671e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306720:;
  /* 10306720 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306723 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306726 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306729 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030672a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030672b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030672c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306730:;
  /* 10306730 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306733 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306736 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306739 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030673c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030673f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306740 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306741 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306742 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306744:;
  /* 10306744 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306747 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030674a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030674d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306750 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306753 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306756 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306759 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030675a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030675b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030675c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103066ff(CPU *c) {
  NATIVE_HOOK(0x103066ffu) REGS; LOADALL;
L_103066ff:;
  /* 103066ff jmp dword ptr [edx*4 + 0x10306708] */ { const u32 m_ = (u32)(edx * 4u + 0x10306708u); u32 t_ = M32(m_); switch (t_) { case 0x10306718u: goto L_10306718; case 0x10306720u: goto L_10306720; case 0x10306730u: goto L_10306730; case 0x10306744u: goto L_10306744; default: SAVEALL; call_ind(c, t_); return; } }
L_10306718:;
  /* 10306718 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030671b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030671c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030671d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030671e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306720:;
  /* 10306720 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306723 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306726 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306729 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030672a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030672b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030672c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306730:;
  /* 10306730 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306733 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306736 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306739 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030673c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030673f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306740 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306741 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306742 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306744:;
  /* 10306744 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306747 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030674a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030674d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306750 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306753 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306756 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306759 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030675a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030675b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030675c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306708(CPU *c) {
  NATIVE_HOOK(0x10306708u) REGS; LOADALL;
L_10306708:;
  /* 10306708 sbb byte ptr [edi + 0x30], ah */ { const u32 m_ = (u32)(edi + 0x30u); u32 a_ = M8(m_), b_ = ((eax >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 1030670b adc byte ptr [eax], ah */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = ((eax >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 1030670d xor byte ptr [bx + si], dl */ TRAP(0x1030670du, "unimpl xor byte ptr [bx + si], dl");
  /* 10306710 xor byte ptr [edi + 0x30], ah */ { const u32 m_ = (u32)(edi + 0x30u); u32 a_ = M8(m_), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10306713 adc byte ptr [edi + 0x30], al */ { const u32 m_ = (u32)(edi + 0x30u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10306717 adc byte ptr [ebx + 0x5f5e0845], cl */ { const u32 m_ = (u32)(ebx + 0x5f5e0845u); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 1030671d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030671e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306718(CPU *c) {
  NATIVE_HOOK(0x10306718u) REGS; LOADALL;
L_10306718:;
  /* 10306718 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030671b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030671c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030671d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030671e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306720(CPU *c) {
  NATIVE_HOOK(0x10306720u) REGS; LOADALL;
L_10306720:;
  /* 10306720 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306723 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306726 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306729 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030672a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030672b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030672c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306730(CPU *c) {
  NATIVE_HOOK(0x10306730u) REGS; LOADALL;
L_10306730:;
  /* 10306730 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306733 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306736 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306739 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030673c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030673f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306740 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306741 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306742 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306744(CPU *c) {
  NATIVE_HOOK(0x10306744u) REGS; LOADALL;
L_10306744:;
  /* 10306744 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306747 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030674a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030674d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306750 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306753 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306756 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306759 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030675a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030675b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030675c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030675d(CPU *c) {
  NATIVE_HOOK(0x1030675du) REGS; LOADALL;
L_1030675d:;
  /* 1030675d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030675e mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10306762 mov eax, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 10306765 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10306766 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10306768 cmp eax, dword ptr [0x1030bc84] */ { const u32 m_ = (u32)(0x1030bc84u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030676e je 0x103067d3 */ if (ZF_) goto L_103067d3;
  /* 10306770 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306772 je 0x103067d3 */ if (ZF_) goto L_103067d3;
  /* 10306774 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 10306777 cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306779 jne 0x103067d3 */ if (!ZF_) goto L_103067d3;
  /* 1030677b mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 1030677e cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306780 je 0x1030679e */ if (ZF_) goto L_1030679e;
  /* 10306782 cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306784 jne 0x1030679e */ if (!ZF_) goto L_1030679e;
  /* 10306786 cmp eax, dword ptr [0x1030bde0] */ { const u32 m_ = (u32)(0x1030bde0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030678c je 0x1030679e */ if (ZF_) goto L_1030679e;
  /* 1030678e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030678f call 0x10303326 */ esp -= 4; M32(esp) = 0x10306794u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x1030678fu); RETCHK(0x10306794u, 0x1030678fu); LOADALL;
  /* 10306794 push dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10306797 call 0x10307555 */ esp -= 4; M32(esp) = 0x1030679cu; SAVEALL; F_10307555(c); ABI_CHECK(0x10307555u, 0x10306797u); RETCHK(0x1030679cu, 0x10306797u); LOADALL;
  /* 1030679c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030679d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1030679e:;
  /* 1030679e mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 103067a1 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103067a3 je 0x103067c1 */ if (ZF_) goto L_103067c1;
  /* 103067a5 cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103067a7 jne 0x103067c1 */ if (!ZF_) goto L_103067c1;
  /* 103067a9 cmp eax, dword ptr [0x1030bde4] */ { const u32 m_ = (u32)(0x1030bde4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103067af je 0x103067c1 */ if (ZF_) goto L_103067c1;
  /* 103067b1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103067b2 call 0x10303326 */ esp -= 4; M32(esp) = 0x103067b7u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103067b2u); RETCHK(0x103067b7u, 0x103067b2u); LOADALL;
  /* 103067b7 push dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103067ba call 0x103074f6 */ esp -= 4; M32(esp) = 0x103067bfu; SAVEALL; F_103074f6(c); ABI_CHECK(0x103074f6u, 0x103067bau); RETCHK(0x103067bfu, 0x103067bau); LOADALL;
  /* 103067bf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103067c0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103067c1:;
  /* 103067c1 push dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103067c4 call 0x10303326 */ esp -= 4; M32(esp) = 0x103067c9u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103067c4u); RETCHK(0x103067c9u, 0x103067c4u); LOADALL;
  /* 103067c9 push dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103067cc call 0x10303326 */ esp -= 4; M32(esp) = 0x103067d1u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103067ccu); RETCHK(0x103067d1u, 0x103067ccu); LOADALL;
  /* 103067d1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103067d2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103067d3:;
  /* 103067d3 mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 103067d6 cmp eax, dword ptr [0x1030bddc] */ { const u32 m_ = (u32)(0x1030bddcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103067dc je 0x103067fc */ if (ZF_) goto L_103067fc;
  /* 103067de cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103067e0 je 0x103067fc */ if (ZF_) goto L_103067fc;
  /* 103067e2 cmp dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103067e4 jne 0x103067fc */ if (!ZF_) goto L_103067fc;
  /* 103067e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103067e7 call 0x10303326 */ esp -= 4; M32(esp) = 0x103067ecu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103067e7u); RETCHK(0x103067ecu, 0x103067e7u); LOADALL;
  /* 103067ec mov eax, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); eax = (u32)(M32(m_)); }
  /* 103067ef sub eax, 0xfe */ { u32 a_ = eax, b_ = 0xfeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103067f4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103067f5 call 0x10303326 */ esp -= 4; M32(esp) = 0x103067fau; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103067f5u); RETCHK(0x103067fau, 0x103067f5u); LOADALL;
  /* 103067fa pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103067fb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103067fc:;
  /* 103067fc mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 103067ff cmp eax, dword ptr [0x1030bc80] */ { const u32 m_ = (u32)(0x1030bc80u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306805 je 0x10306823 */ if (ZF_) goto L_10306823;
  /* 10306807 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306809 je 0x10306823 */ if (ZF_) goto L_10306823;
  /* 1030680b cmp dword ptr [eax + 0xb4], edi */ { const u32 m_ = (u32)(eax + 0xb4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306811 jne 0x10306823 */ if (!ZF_) goto L_10306823;
  /* 10306813 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10306814 call 0x10307366 */ esp -= 4; M32(esp) = 0x10306819u; SAVEALL; F_10307366(c); ABI_CHECK(0x10307366u, 0x10306814u); RETCHK(0x10306819u, 0x10306814u); LOADALL;
  /* 10306819 push dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030681c call 0x10303326 */ esp -= 4; M32(esp) = 0x10306821u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x1030681cu); RETCHK(0x10306821u, 0x1030681cu); LOADALL;
  /* 10306821 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306822 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10306823:;
  /* 10306823 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10306824 call 0x10303326 */ esp -= 4; M32(esp) = 0x10306829u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10306824u); RETCHK(0x10306829u, 0x10306824u); LOADALL;
  /* 10306829 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030682a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030682b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030682c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030682d(CPU *c) {
  NATIVE_HOOK(0x1030682du) REGS; LOADALL;
L_1030682d:;
  /* 1030682d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030682e call 0x10304039 */ esp -= 4; M32(esp) = 0x10306833u; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x1030682eu); RETCHK(0x10306833u, 0x1030682eu); LOADALL;
  /* 10306833 mov esi, eax */ { esi = (u32)(eax); }
  /* 10306835 mov ecx, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); ecx = (u32)(M32(m_)); }
  /* 10306838 cmp ecx, dword ptr [0x1030b33c] */ { const u32 m_ = (u32)(0x1030b33cu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030683e je 0x103068e9 */ if (ZF_) goto L_103068e9;
  /* 10306844 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10306846 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306848 je 0x10306879 */ if (ZF_) goto L_10306879;
  /* 1030684a mov eax, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 1030684d dec dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1030684f cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306851 je 0x10306855 */ if (ZF_) goto L_10306855;
  /* 10306853 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10306855:;
  /* 10306855 mov eax, dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); eax = (u32)(M32(m_)); }
  /* 10306858 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030685a je 0x1030685e */ if (ZF_) goto L_1030685e;
  /* 1030685c dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_1030685e:;
  /* 1030685e mov eax, dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); eax = (u32)(M32(m_)); }
  /* 10306861 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306863 je 0x10306867 */ if (ZF_) goto L_10306867;
  /* 10306865 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10306867:;
  /* 10306867 mov eax, dword ptr [ecx + 0x40] */ { const u32 m_ = (u32)(ecx + 0x40u); eax = (u32)(M32(m_)); }
  /* 1030686a cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030686c je 0x10306870 */ if (ZF_) goto L_10306870;
  /* 1030686e dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10306870:;
  /* 10306870 mov eax, dword ptr [ecx + 0x4c] */ { const u32 m_ = (u32)(ecx + 0x4cu); eax = (u32)(M32(m_)); }
  /* 10306873 dec dword ptr [eax + 0xb4] */ { const u32 m_ = (u32)(eax + 0xb4u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10306879:;
  /* 10306879 mov eax, dword ptr [0x1030b33c] */ { const u32 m_ = (u32)(0x1030b33cu); eax = (u32)(M32(m_)); }
  /* 1030687e mov dword ptr [esi + 0x64], eax */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(eax); }
  /* 10306881 mov eax, dword ptr [0x1030b33c] */ { const u32 m_ = (u32)(0x1030b33cu); eax = (u32)(M32(m_)); }
  /* 10306886 inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306888 mov eax, dword ptr [0x1030b33c] */ { const u32 m_ = (u32)(0x1030b33cu); eax = (u32)(M32(m_)); }
  /* 1030688d cmp dword ptr [eax + 0x2c], edx */ { const u32 m_ = (u32)(eax + 0x2cu); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306890 je 0x1030689c */ if (ZF_) goto L_1030689c;
  /* 10306892 mov eax, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); eax = (u32)(M32(m_)); }
  /* 10306895 inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306897 mov eax, dword ptr [0x1030b33c] */ { const u32 m_ = (u32)(0x1030b33cu); eax = (u32)(M32(m_)); }
L_1030689c:;
  /* 1030689c cmp dword ptr [eax + 0x34], edx */ { const u32 m_ = (u32)(eax + 0x34u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030689f je 0x103068ab */ if (ZF_) goto L_103068ab;
  /* 103068a1 mov eax, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); eax = (u32)(M32(m_)); }
  /* 103068a4 inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103068a6 mov eax, dword ptr [0x1030b33c] */ { const u32 m_ = (u32)(0x1030b33cu); eax = (u32)(M32(m_)); }
L_103068ab:;
  /* 103068ab cmp dword ptr [eax + 0x30], edx */ { const u32 m_ = (u32)(eax + 0x30u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103068ae je 0x103068ba */ if (ZF_) goto L_103068ba;
  /* 103068b0 mov eax, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); eax = (u32)(M32(m_)); }
  /* 103068b3 inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103068b5 mov eax, dword ptr [0x1030b33c] */ { const u32 m_ = (u32)(0x1030b33cu); eax = (u32)(M32(m_)); }
L_103068ba:;
  /* 103068ba cmp dword ptr [eax + 0x40], edx */ { const u32 m_ = (u32)(eax + 0x40u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103068bd je 0x103068c9 */ if (ZF_) goto L_103068c9;
  /* 103068bf mov eax, dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); eax = (u32)(M32(m_)); }
  /* 103068c2 inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103068c4 mov eax, dword ptr [0x1030b33c] */ { const u32 m_ = (u32)(0x1030b33cu); eax = (u32)(M32(m_)); }
L_103068c9:;
  /* 103068c9 mov eax, dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); eax = (u32)(M32(m_)); }
  /* 103068cc inc dword ptr [eax + 0xb4] */ { const u32 m_ = (u32)(eax + 0xb4u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103068d2 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103068d4 je 0x103068e9 */ if (ZF_) goto L_103068e9;
  /* 103068d6 cmp dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103068d8 jne 0x103068e9 */ if (!ZF_) goto L_103068e9;
  /* 103068da cmp ecx, 0x1030b2e8 */ { u32 a_ = ecx, b_ = 0x1030b2e8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103068e0 je 0x103068e9 */ if (ZF_) goto L_103068e9;
  /* 103068e2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103068e3 call 0x1030675d */ esp -= 4; M32(esp) = 0x103068e8u; SAVEALL; F_1030675d(c); ABI_CHECK(0x1030675du, 0x103068e3u); RETCHK(0x103068e8u, 0x103068e3u); LOADALL;
  /* 103068e8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103068e9:;
  /* 103068e9 mov eax, dword ptr [esi + 0x64] */ { const u32 m_ = (u32)(esi + 0x64u); eax = (u32)(M32(m_)); }
  /* 103068ec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103068ed ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103068ee(CPU *c) {
  NATIVE_HOOK(0x103068eeu) REGS; LOADALL;
L_103068ee:;
  /* 103068ee push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 103068f0 push 0x10309a70 */ { u32 v_ = 0x10309a70u; esp -= 4; M32(esp) = v_; }
  /* 103068f5 call 0x10303548 */ esp -= 4; M32(esp) = 0x103068fau; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x103068f5u); RETCHK(0x103068fau, 0x103068f5u); LOADALL;
  /* 103068fa push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 103068fc call 0x103052af */ esp -= 4; M32(esp) = 0x10306901u; SAVEALL; F_103052af(c); ABI_CHECK(0x103052afu, 0x103068fcu); RETCHK(0x10306901u, 0x103068fcu); LOADALL;
  /* 10306901 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306902 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10306906 call 0x1030682d */ esp -= 4; M32(esp) = 0x1030690bu; SAVEALL; F_1030682d(c); ABI_CHECK(0x1030682du, 0x10306906u); RETCHK(0x1030690bu, 0x10306906u); LOADALL;
  /* 1030690b mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 1030690e or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10306912 call 0x10306920 */ esp -= 4; M32(esp) = 0x10306917u; SAVEALL; F_10306920(c); ABI_CHECK(0x10306920u, 0x10306912u); RETCHK(0x10306917u, 0x10306912u); LOADALL;
  /* 10306917 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 1030691a call 0x10303583 */ esp -= 4; M32(esp) = 0x1030691fu; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x1030691au); RETCHK(0x1030691fu, 0x1030691au); LOADALL;
  /* 1030691f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306920(CPU *c) {
  NATIVE_HOOK(0x10306920u) REGS; LOADALL;
L_10306920:;
  /* 10306920 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10306922 call 0x103051fa */ esp -= 4; M32(esp) = 0x10306927u; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x10306922u); RETCHK(0x10306927u, 0x10306922u); LOADALL;
  /* 10306927 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306928 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306929(CPU *c) {
  NATIVE_HOOK(0x10306929u) REGS; LOADALL;
L_10306929:;
  /* 10306929 sub eax, 0x3a4 */ { u32 a_ = eax, b_ = 0x3a4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1030692e je 0x10306952 */ if (ZF_) goto L_10306952;
  /* 10306930 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10306933 je 0x1030694c */ if (ZF_) goto L_1030694c;
  /* 10306935 sub eax, 0xd */ { u32 a_ = eax, b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10306938 je 0x10306946 */ if (ZF_) goto L_10306946;
  /* 1030693a dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1030693b je 0x10306940 */ if (ZF_) goto L_10306940;
  /* 1030693d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030693f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306940:;
  /* 10306940 mov eax, 0x404 */ { eax = (u32)(0x404u); }
  /* 10306945 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306946:;
  /* 10306946 mov eax, 0x412 */ { eax = (u32)(0x412u); }
  /* 1030694b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1030694c:;
  /* 1030694c mov eax, 0x804 */ { eax = (u32)(0x804u); }
  /* 10306951 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306952:;
  /* 10306952 mov eax, 0x411 */ { eax = (u32)(0x411u); }
  /* 10306957 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306958(CPU *c) {
  NATIVE_HOOK(0x10306958u) REGS; LOADALL;
L_10306958:;
  /* 10306958 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10306959 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 1030695b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030695d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030695e mov edi, 0x1030be00 */ { edi = (u32)(0x1030be00u); }
  /* 10306963 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10306965 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 10306966 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10306968 mov dword ptr [0x1030bf04], eax */ { const u32 m_ = (u32)(0x1030bf04u); M32(m_) = (u32)(eax); }
  /* 1030696d mov dword ptr [0x1030bdf0], eax */ { const u32 m_ = (u32)(0x1030bdf0u); M32(m_) = (u32)(eax); }
  /* 10306972 mov dword ptr [0x1030bde8], eax */ { const u32 m_ = (u32)(0x1030bde8u); M32(m_) = (u32)(eax); }
  /* 10306977 mov edi, 0x1030bf10 */ { edi = (u32)(0x1030bf10u); }
  /* 1030697c stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = (u32)eax; edi += st_; }
  /* 1030697d stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = (u32)eax; edi += st_; }
  /* 1030697e stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = (u32)eax; edi += st_; }
  /* 1030697f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306980 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306981(CPU *c) {
  NATIVE_HOOK(0x10306981u) REGS; LOADALL;
L_10306981:;
  /* 10306981 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10306982 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10306984 sub esp, 0x518 */ { u32 a_ = esp, b_ = 0x518u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1030698a mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 1030698f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10306992 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10306993 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 10306996 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10306997 push dword ptr [0x1030bf04] */ { const u32 m_ = (u32)(0x1030bf04u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030699d call dword ptr [0x103090c8] */ { const u32 m_ = (u32)(0x103090c8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103069a3u; SAVEALL; call_ind(c, t_); RETCHK(0x103069a3u, 0x1030699du); LOADALL; }
  /* 103069a3 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103069a6 mov esi, 0x100 */ { esi = (u32)(0x100u); }
  /* 103069ab jne 0x10306abe */ if (!ZF_) goto L_10306abe;
  /* 103069b1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_103069b3:;
  /* 103069b3 mov byte ptr [ebp + eax - 0x118], al */ { const u32 m_ = (u32)(ebp + eax + 0xfffffee8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103069ba inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103069bb cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103069bd jb 0x103069b3 */ if (CF_) goto L_103069b3;
  /* 103069bf mov al, byte ptr [ebp - 0x12] */ { const u32 m_ = (u32)(ebp + 0xffffffeeu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103069c2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 103069c4 mov byte ptr [ebp - 0x118], 0x20 */ { const u32 m_ = (u32)(ebp + 0xfffffee8u); M8(m_) = (u8)(0x20u); }
  /* 103069cb je 0x10306a03 */ if (ZF_) goto L_10306a03;
  /* 103069cd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103069ce lea edx, [ebp - 0x11] */ edx = (u32)((u32)(ebp + 0xffffffefu));
  /* 103069d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_103069d2:;
  /* 103069d2 movzx ecx, byte ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M8(m_)); }
  /* 103069d5 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 103069d8 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103069da ja 0x103069f9 */ if (!(CF_|ZF_)) goto L_103069f9;
  /* 103069dc sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 103069de inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103069df mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 103069e1 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 103069e4 lea edi, [ebp + eax - 0x118] */ edi = (u32)((u32)(ebp + eax + 0xfffffee8u));
  /* 103069eb mov eax, 0x20202020 */ { eax = (u32)(0x20202020u); }
  /* 103069f0 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 103069f2 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 103069f4 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 103069f7 rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
L_103069f9:;
  /* 103069f9 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103069fa mov al, byte ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103069fc inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103069fd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 103069ff jne 0x103069d2 */ if (!ZF_) goto L_103069d2;
  /* 10306a01 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306a02 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_10306a03:;
  /* 10306a03 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10306a05 push dword ptr [0x1030bde8] */ { const u32 m_ = (u32)(0x1030bde8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10306a0b lea eax, [ebp - 0x518] */ eax = (u32)((u32)(ebp + 0xfffffae8u));
  /* 10306a11 push dword ptr [0x1030bf04] */ { const u32 m_ = (u32)(0x1030bf04u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10306a17 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10306a18 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10306a19 lea eax, [ebp - 0x118] */ eax = (u32)((u32)(ebp + 0xfffffee8u));
  /* 10306a1f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10306a20 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10306a22 call 0x10307738 */ esp -= 4; M32(esp) = 0x10306a27u; SAVEALL; F_10307738(c); ABI_CHECK(0x10307738u, 0x10306a22u); RETCHK(0x10306a27u, 0x10306a22u); LOADALL;
  /* 10306a27 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10306a29 push dword ptr [0x1030bf04] */ { const u32 m_ = (u32)(0x1030bf04u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10306a2f lea eax, [ebp - 0x218] */ eax = (u32)((u32)(ebp + 0xfffffde8u));
  /* 10306a35 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10306a36 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10306a37 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10306a38 lea eax, [ebp - 0x118] */ eax = (u32)((u32)(ebp + 0xfffffee8u));
  /* 10306a3e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10306a3f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10306a40 push dword ptr [0x1030bde8] */ { const u32 m_ = (u32)(0x1030bde8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10306a46 call 0x10307980 */ esp -= 4; M32(esp) = 0x10306a4bu; SAVEALL; F_10307980(c); ABI_CHECK(0x10307980u, 0x10306a46u); RETCHK(0x10306a4bu, 0x10306a46u); LOADALL;
  /* 10306a4b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10306a4d push dword ptr [0x1030bf04] */ { const u32 m_ = (u32)(0x1030bf04u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10306a53 lea eax, [ebp - 0x318] */ eax = (u32)((u32)(ebp + 0xfffffce8u));
  /* 10306a59 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10306a5a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10306a5b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10306a5c lea eax, [ebp - 0x118] */ eax = (u32)((u32)(ebp + 0xfffffee8u));
  /* 10306a62 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10306a63 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 10306a68 push dword ptr [0x1030bde8] */ { const u32 m_ = (u32)(0x1030bde8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10306a6e call 0x10307980 */ esp -= 4; M32(esp) = 0x10306a73u; SAVEALL; F_10307980(c); ABI_CHECK(0x10307980u, 0x10306a6eu); RETCHK(0x10306a73u, 0x10306a6eu); LOADALL;
  /* 10306a73 add esp, 0x5c */ { u32 a_ = esp, b_ = 0x5cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10306a76 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10306a78:;
  /* 10306a78 mov cx, word ptr [ebp + eax*2 - 0x518] */ { const u32 m_ = (u32)(ebp + eax * 2u + 0xfffffae8u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10306a80 test cl, 1 */ { u32 a_ = (ecx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10306a83 je 0x10306a9b */ if (ZF_) goto L_10306a9b;
  /* 10306a85 or byte ptr [eax + 0x1030be01], 0x10 */ { const u32 m_ = (u32)(eax + 0x1030be01u); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10306a8c mov cl, byte ptr [ebp + eax - 0x218] */ { const u32 m_ = (u32)(ebp + eax + 0xfffffde8u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
L_10306a93:;
  /* 10306a93 mov byte ptr [eax + 0x1030bf20], cl */ { const u32 m_ = (u32)(eax + 0x1030bf20u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10306a99 jmp 0x10306ab7 */ goto L_10306ab7;
L_10306a9b:;
  /* 10306a9b test cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10306a9e je 0x10306ab0 */ if (ZF_) goto L_10306ab0;
  /* 10306aa0 or byte ptr [eax + 0x1030be01], 0x20 */ { const u32 m_ = (u32)(eax + 0x1030be01u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10306aa7 mov cl, byte ptr [ebp + eax - 0x318] */ { const u32 m_ = (u32)(ebp + eax + 0xfffffce8u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306aae jmp 0x10306a93 */ goto L_10306a93;
L_10306ab0:;
  /* 10306ab0 mov byte ptr [eax + 0x1030bf20], 0 */ { const u32 m_ = (u32)(eax + 0x1030bf20u); M8(m_) = (u8)(0x0u); }
L_10306ab7:;
  /* 10306ab7 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306ab8 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306aba jb 0x10306a78 */ if (CF_) goto L_10306a78;
  /* 10306abc jmp 0x10306b02 */ goto L_10306b02;
L_10306abe:;
  /* 10306abe xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10306ac0:;
  /* 10306ac0 cmp eax, 0x41 */ { u32 a_ = eax, b_ = 0x41u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306ac3 jb 0x10306ade */ if (CF_) goto L_10306ade;
  /* 10306ac5 cmp eax, 0x5a */ { u32 a_ = eax, b_ = 0x5au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306ac8 ja 0x10306ade */ if (!(CF_|ZF_)) goto L_10306ade;
  /* 10306aca or byte ptr [eax + 0x1030be01], 0x10 */ { const u32 m_ = (u32)(eax + 0x1030be01u); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10306ad1 mov cl, al */ { ecx = (ecx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 10306ad3 add cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_10306ad6:;
  /* 10306ad6 mov byte ptr [eax + 0x1030bf20], cl */ { const u32 m_ = (u32)(eax + 0x1030bf20u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10306adc jmp 0x10306afd */ goto L_10306afd;
L_10306ade:;
  /* 10306ade cmp eax, 0x61 */ { u32 a_ = eax, b_ = 0x61u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306ae1 jb 0x10306af6 */ if (CF_) goto L_10306af6;
  /* 10306ae3 cmp eax, 0x7a */ { u32 a_ = eax, b_ = 0x7au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306ae6 ja 0x10306af6 */ if (!(CF_|ZF_)) goto L_10306af6;
  /* 10306ae8 or byte ptr [eax + 0x1030be01], 0x20 */ { const u32 m_ = (u32)(eax + 0x1030be01u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10306aef mov cl, al */ { ecx = (ecx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 10306af1 sub cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10306af4 jmp 0x10306ad6 */ goto L_10306ad6;
L_10306af6:;
  /* 10306af6 mov byte ptr [eax + 0x1030bf20], 0 */ { const u32 m_ = (u32)(eax + 0x1030bf20u); M8(m_) = (u8)(0x0u); }
L_10306afd:;
  /* 10306afd inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306afe cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306b00 jb 0x10306ac0 */ if (CF_) goto L_10306ac0;
L_10306b02:;
  /* 10306b02 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10306b05 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306b06 call 0x10302a7d */ esp -= 4; M32(esp) = 0x10306b0bu; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x10306b06u); RETCHK(0x10306b0bu, 0x10306b06u); LOADALL;
  /* 10306b0b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306b0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306b0d(CPU *c) {
  NATIVE_HOOK(0x10306b0du) REGS; LOADALL;
L_10306b0d:;
  /* 10306b0d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10306b0e mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10306b10 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10306b13 mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 10306b18 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10306b19 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10306b1a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10306b1d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10306b1f cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306b21 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10306b24 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10306b25 je 0x10306c7f */ if (ZF_) goto L_10306c7f;
  /* 10306b2b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10306b2d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10306b2f:;
  /* 10306b2f cmp dword ptr [eax + 0x1030b480], esi */ { const u32 m_ = (u32)(eax + 0x1030b480u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306b35 je 0x10306b9c */ if (ZF_) goto L_10306b9c;
  /* 10306b37 add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10306b3a inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306b3b cmp eax, 0xf0 */ { u32 a_ = eax, b_ = 0xf0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306b40 jb 0x10306b2f */ if (CF_) goto L_10306b2f;
  /* 10306b42 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 10306b45 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10306b46 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10306b47 call dword ptr [0x103090c8] */ { const u32 m_ = (u32)(0x103090c8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10306b4du; SAVEALL; call_ind(c, t_); RETCHK(0x10306b4du, 0x10306b47u); LOADALL; }
  /* 10306b4d cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306b50 jne 0x10306c77 */ if (!ZF_) goto L_10306c77;
  /* 10306b56 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 10306b58 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10306b5a cmp dword ptr [ebp - 0x18], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306b5e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306b5f mov edi, 0x1030be00 */ { edi = (u32)(0x1030be00u); }
  /* 10306b64 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10306b66 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 10306b67 mov dword ptr [0x1030bf04], esi */ { const u32 m_ = (u32)(0x1030bf04u); M32(m_) = (u32)(esi); }
  /* 10306b6d mov dword ptr [0x1030bde8], ebx */ { const u32 m_ = (u32)(0x1030bde8u); M32(m_) = (u32)(ebx); }
  /* 10306b73 jbe 0x10306c65 */ if ((CF_|ZF_)) goto L_10306c65;
  /* 10306b79 cmp byte ptr [ebp - 0x12], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffeeu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10306b7d je 0x10306c3d */ if (ZF_) goto L_10306c3d;
  /* 10306b83 lea ecx, [ebp - 0x11] */ ecx = (u32)((u32)(ebp + 0xffffffefu));
L_10306b86:;
  /* 10306b86 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306b88 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10306b8a je 0x10306c3d */ if (ZF_) goto L_10306c3d;
  /* 10306b90 movzx eax, byte ptr [ecx - 1] */ { const u32 m_ = (u32)(ecx + 0xffffffffu); eax = (u32)(M8(m_)); }
  /* 10306b94 movzx edx, dl */ { edx = (u32)((edx & 0xffu)); }
  /* 10306b97 jmp 0x10306c2d */ goto L_10306c2d;
L_10306b9c:;
  /* 10306b9c push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 10306b9e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10306ba0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306ba1 mov edi, 0x1030be00 */ { edi = (u32)(0x1030be00u); }
  /* 10306ba6 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10306ba8 lea ecx, [edx + edx*2] */ ecx = (u32)((u32)(edx + edx * 2u));
  /* 10306bab shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10306bae mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 10306bb1 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 10306bb2 lea ebx, [ecx + 0x1030b490] */ ebx = (u32)((u32)(ecx + 0x1030b490u));
L_10306bb8:;
  /* 10306bb8 mov al, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306bba mov esi, ebx */ { esi = (u32)(ebx); }
  /* 10306bbc jmp 0x10306be7 */ goto L_10306be7;
L_10306bbe:;
  /* 10306bbe mov dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306bc1 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10306bc3 je 0x10306beb */ if (ZF_) goto L_10306beb;
  /* 10306bc5 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 10306bc8 movzx edi, dl */ { edi = (u32)((edx & 0xffu)); }
  /* 10306bcb cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306bcd ja 0x10306be3 */ if (!(CF_|ZF_)) goto L_10306be3;
  /* 10306bcf mov edx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edx = (u32)(M32(m_)); }
  /* 10306bd2 mov dl, byte ptr [edx + 0x1030b478] */ { const u32 m_ = (u32)(edx + 0x1030b478u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
L_10306bd8:;
  /* 10306bd8 or byte ptr [eax + 0x1030be01], dl */ { const u32 m_ = (u32)(eax + 0x1030be01u); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10306bde inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306bdf cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306be1 jbe 0x10306bd8 */ if ((CF_|ZF_)) goto L_10306bd8;
L_10306be3:;
  /* 10306be3 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306be4 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306be5 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
L_10306be7:;
  /* 10306be7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10306be9 jne 0x10306bbe */ if (!ZF_) goto L_10306bbe;
L_10306beb:;
  /* 10306beb inc dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306bee add ebx, 8 */ { u32 a_ = ebx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10306bf1 cmp dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306bf5 jb 0x10306bb8 */ if (CF_) goto L_10306bb8;
  /* 10306bf7 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306bfa mov dword ptr [0x1030bf04], eax */ { const u32 m_ = (u32)(0x1030bf04u); M32(m_) = (u32)(eax); }
  /* 10306bff mov dword ptr [0x1030bdf0], 1 */ { const u32 m_ = (u32)(0x1030bdf0u); M32(m_) = (u32)(0x1u); }
  /* 10306c09 call 0x10306929 */ esp -= 4; M32(esp) = 0x10306c0eu; SAVEALL; F_10306929(c); ABI_CHECK(0x10306929u, 0x10306c09u); RETCHK(0x10306c0eu, 0x10306c09u); LOADALL;
  /* 10306c0e lea ecx, [ecx + 0x1030b484] */ ecx = (u32)((u32)(ecx + 0x1030b484u));
  /* 10306c14 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10306c16 mov edi, 0x1030bf10 */ { edi = (u32)(0x1030bf10u); }
  /* 10306c1b movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 10306c1c movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 10306c1d mov dword ptr [0x1030bde8], eax */ { const u32 m_ = (u32)(0x1030bde8u); M32(m_) = (u32)(eax); }
  /* 10306c22 movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = M32(esi); esi += st_; edi += st_; }
  /* 10306c23 jmp 0x10306c84 */ goto L_10306c84;
L_10306c25:;
  /* 10306c25 or byte ptr [eax + 0x1030be01], 4 */ { const u32 m_ = (u32)(eax + 0x1030be01u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10306c2c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10306c2d:;
  /* 10306c2d cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306c2f jbe 0x10306c25 */ if ((CF_|ZF_)) goto L_10306c25;
  /* 10306c31 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306c32 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306c33 cmp byte ptr [ecx - 1], 0 */ { const u32 m_ = (u32)(ecx + 0xffffffffu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10306c37 jne 0x10306b86 */ if (!ZF_) goto L_10306b86;
L_10306c3d:;
  /* 10306c3d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10306c3f inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306c40 mov eax, ecx */ { eax = (u32)(ecx); }
L_10306c42:;
  /* 10306c42 or byte ptr [eax + 0x1030be01], 8 */ { const u32 m_ = (u32)(eax + 0x1030be01u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10306c49 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306c4a cmp eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306c4f jb 0x10306c42 */ if (CF_) goto L_10306c42;
  /* 10306c51 mov eax, esi */ { eax = (u32)(esi); }
  /* 10306c53 call 0x10306929 */ esp -= 4; M32(esp) = 0x10306c58u; SAVEALL; F_10306929(c); ABI_CHECK(0x10306929u, 0x10306c53u); RETCHK(0x10306c58u, 0x10306c53u); LOADALL;
  /* 10306c58 mov dword ptr [0x1030bde8], eax */ { const u32 m_ = (u32)(0x1030bde8u); M32(m_) = (u32)(eax); }
  /* 10306c5d mov dword ptr [0x1030bdf0], ecx */ { const u32 m_ = (u32)(0x1030bdf0u); M32(m_) = (u32)(ecx); }
  /* 10306c63 jmp 0x10306c6b */ goto L_10306c6b;
L_10306c65:;
  /* 10306c65 mov dword ptr [0x1030bdf0], ebx */ { const u32 m_ = (u32)(0x1030bdf0u); M32(m_) = (u32)(ebx); }
L_10306c6b:;
  /* 10306c6b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10306c6d mov edi, 0x1030bf10 */ { edi = (u32)(0x1030bf10u); }
  /* 10306c72 stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = (u32)eax; edi += st_; }
  /* 10306c73 stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = (u32)eax; edi += st_; }
  /* 10306c74 stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; M32(edi) = (u32)eax; edi += st_; }
  /* 10306c75 jmp 0x10306c84 */ goto L_10306c84;
L_10306c77:;
  /* 10306c77 cmp dword ptr [0x1030bc74], ebx */ { const u32 m_ = (u32)(0x1030bc74u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306c7d je 0x10306c8d */ if (ZF_) goto L_10306c8d;
L_10306c7f:;
  /* 10306c7f call 0x10306958 */ esp -= 4; M32(esp) = 0x10306c84u; SAVEALL; F_10306958(c); ABI_CHECK(0x10306958u, 0x10306c7fu); RETCHK(0x10306c84u, 0x10306c7fu); LOADALL;
L_10306c84:;
  /* 10306c84 call 0x10306981 */ esp -= 4; M32(esp) = 0x10306c89u; SAVEALL; F_10306981(c); ABI_CHECK(0x10306981u, 0x10306c84u); RETCHK(0x10306c89u, 0x10306c84u); LOADALL;
  /* 10306c89 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10306c8b jmp 0x10306c90 */ goto L_10306c90;
L_10306c8d:;
  /* 10306c8d or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10306c90:;
  /* 10306c90 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 10306c93 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306c94 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306c95 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10306c96 call 0x10302a7d */ esp -= 4; M32(esp) = 0x10306c9bu; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x10306c96u); RETCHK(0x10306c9bu, 0x10306c96u); LOADALL;
  /* 10306c9b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10306c9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306c9d(CPU *c) {
  NATIVE_HOOK(0x10306c9du) REGS; LOADALL;
L_10306c9d:;
  /* 10306c9d push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 10306c9f push 0x10309a80 */ { u32 v_ = 0x10309a80u; esp -= 4; M32(esp) = v_; }
  /* 10306ca4 call 0x10303548 */ esp -= 4; M32(esp) = 0x10306ca9u; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x10306ca4u); RETCHK(0x10306ca9u, 0x10306ca4u); LOADALL;
  /* 10306ca9 or dword ptr [ebp - 0x20], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10306cad push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 10306caf call 0x103052af */ esp -= 4; M32(esp) = 0x10306cb4u; SAVEALL; F_103052af(c); ABI_CHECK(0x103052afu, 0x10306cafu); RETCHK(0x10306cb4u, 0x10306cafu); LOADALL;
  /* 10306cb4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306cb5 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10306cb7 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 10306cba mov dword ptr [0x1030bc74], edi */ { const u32 m_ = (u32)(0x1030bc74u); M32(m_) = (u32)(edi); }
  /* 10306cc0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306cc3 cmp eax, -2 */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306cc6 jne 0x10306cda */ if (!ZF_) goto L_10306cda;
  /* 10306cc8 mov dword ptr [0x1030bc74], 1 */ { const u32 m_ = (u32)(0x1030bc74u); M32(m_) = (u32)(0x1u); }
  /* 10306cd2 call dword ptr [0x103090c4] */ { const u32 m_ = (u32)(0x103090c4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10306cd8u; SAVEALL; call_ind(c, t_); RETCHK(0x10306cd8u, 0x10306cd2u); LOADALL; }
  /* 10306cd8 jmp 0x10306d05 */ goto L_10306d05;
L_10306cda:;
  /* 10306cda cmp eax, -3 */ { u32 a_ = eax, b_ = 0xfffffffdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306cdd jne 0x10306cf1 */ if (!ZF_) goto L_10306cf1;
  /* 10306cdf mov dword ptr [0x1030bc74], 1 */ { const u32 m_ = (u32)(0x1030bc74u); M32(m_) = (u32)(0x1u); }
  /* 10306ce9 call dword ptr [0x103090c0] */ { const u32 m_ = (u32)(0x103090c0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10306cefu; SAVEALL; call_ind(c, t_); RETCHK(0x10306cefu, 0x10306ce9u); LOADALL; }
  /* 10306cef jmp 0x10306d05 */ goto L_10306d05;
L_10306cf1:;
  /* 10306cf1 cmp eax, -4 */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306cf4 jne 0x10306d05 */ if (!ZF_) goto L_10306d05;
  /* 10306cf6 mov dword ptr [0x1030bc74], 1 */ { const u32 m_ = (u32)(0x1030bc74u); M32(m_) = (u32)(0x1u); }
  /* 10306d00 mov eax, dword ptr [0x1030bcc4] */ { const u32 m_ = (u32)(0x1030bcc4u); eax = (u32)(M32(m_)); }
L_10306d05:;
  /* 10306d05 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 10306d08 cmp eax, dword ptr [0x1030bf04] */ { const u32 m_ = (u32)(0x1030bf04u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306d0e je 0x10306dcf */ if (ZF_) goto L_10306dcf;
  /* 10306d14 mov esi, dword ptr [0x1030bdec] */ { const u32 m_ = (u32)(0x1030bdecu); esi = (u32)(M32(m_)); }
  /* 10306d1a mov dword ptr [ebp - 0x24], esi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(esi); }
  /* 10306d1d cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306d1f je 0x10306d25 */ if (ZF_) goto L_10306d25;
  /* 10306d21 cmp dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306d23 je 0x10306d35 */ if (ZF_) goto L_10306d35;
L_10306d25:;
  /* 10306d25 push 0x220 */ { u32 v_ = 0x220u; esp -= 4; M32(esp) = v_; }
  /* 10306d2a call 0x10303744 */ esp -= 4; M32(esp) = 0x10306d2fu; SAVEALL; F_10303744(c); ABI_CHECK(0x10303744u, 0x10306d2au); RETCHK(0x10306d2fu, 0x10306d2au); LOADALL;
  /* 10306d2f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306d30 mov esi, eax */ { esi = (u32)(eax); }
  /* 10306d32 mov dword ptr [ebp - 0x24], esi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(esi); }
L_10306d35:;
  /* 10306d35 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306d37 je 0x10306db8 */ if (ZF_) goto L_10306db8;
  /* 10306d39 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10306d3c call 0x10306b0d */ esp -= 4; M32(esp) = 0x10306d41u; SAVEALL; F_10306b0d(c); ABI_CHECK(0x10306b0du, 0x10306d3cu); RETCHK(0x10306d41u, 0x10306d3cu); LOADALL;
  /* 10306d41 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306d42 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10306d45 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306d47 jne 0x10306db8 */ if (!ZF_) goto L_10306db8;
  /* 10306d49 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 10306d4b mov eax, dword ptr [0x1030bf04] */ { const u32 m_ = (u32)(0x1030bf04u); eax = (u32)(M32(m_)); }
  /* 10306d50 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 10306d53 mov eax, dword ptr [0x1030bdf0] */ { const u32 m_ = (u32)(0x1030bdf0u); eax = (u32)(M32(m_)); }
  /* 10306d58 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 10306d5b mov eax, dword ptr [0x1030bde8] */ { const u32 m_ = (u32)(0x1030bde8u); eax = (u32)(M32(m_)); }
  /* 10306d60 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10306d63 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10306d65:;
  /* 10306d65 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10306d68 cmp eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306d6b jge 0x10306d7d */ if (!LT_) goto L_10306d7d;
  /* 10306d6d mov cx, word ptr [eax*2 + 0x1030bf10] */ { const u32 m_ = (u32)(eax * 2u + 0x1030bf10u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10306d75 mov word ptr [esi + eax*2 + 0x10], cx */ { const u32 m_ = (u32)(esi + eax * 2u + 0x10u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 10306d7a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306d7b jmp 0x10306d65 */ goto L_10306d65;
L_10306d7d:;
  /* 10306d7d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10306d7f:;
  /* 10306d7f mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10306d82 cmp eax, 0x101 */ { u32 a_ = eax, b_ = 0x101u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306d87 jge 0x10306d96 */ if (!LT_) goto L_10306d96;
  /* 10306d89 mov cl, byte ptr [eax + 0x1030be00] */ { const u32 m_ = (u32)(eax + 0x1030be00u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306d8f mov byte ptr [eax + esi + 0x1c], cl */ { const u32 m_ = (u32)(eax + esi + 0x1cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10306d93 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306d94 jmp 0x10306d7f */ goto L_10306d7f;
L_10306d96:;
  /* 10306d96 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10306d98:;
  /* 10306d98 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10306d9b cmp eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306da0 jge 0x10306db2 */ if (!LT_) goto L_10306db2;
  /* 10306da2 mov cl, byte ptr [eax + 0x1030bf20] */ { const u32 m_ = (u32)(eax + 0x1030bf20u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306da8 mov byte ptr [eax + esi + 0x11d], cl */ { const u32 m_ = (u32)(eax + esi + 0x11du); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10306daf inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306db0 jmp 0x10306d98 */ goto L_10306d98;
L_10306db2:;
  /* 10306db2 mov dword ptr [0x1030bdec], esi */ { const u32 m_ = (u32)(0x1030bdecu); M32(m_) = (u32)(esi); }
L_10306db8:;
  /* 10306db8 cmp dword ptr [ebp - 0x20], -1 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306dbc jne 0x10306dd2 */ if (!ZF_) goto L_10306dd2;
  /* 10306dbe cmp esi, dword ptr [0x1030bdec] */ { const u32 m_ = (u32)(0x1030bdecu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306dc4 je 0x10306dd2 */ if (ZF_) goto L_10306dd2;
  /* 10306dc6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10306dc7 call 0x10303326 */ esp -= 4; M32(esp) = 0x10306dccu; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x10306dc7u); RETCHK(0x10306dccu, 0x10306dc7u); LOADALL;
  /* 10306dcc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306dcd jmp 0x10306dd2 */ goto L_10306dd2;
L_10306dcf:;
  /* 10306dcf mov dword ptr [ebp - 0x20], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edi); }
L_10306dd2:;
  /* 10306dd2 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10306dd6 call 0x10306de4 */ esp -= 4; M32(esp) = 0x10306ddbu; SAVEALL; F_10306de4(c); ABI_CHECK(0x10306de4u, 0x10306dd6u); RETCHK(0x10306ddbu, 0x10306dd6u); LOADALL;
  /* 10306ddb mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 10306dde call 0x10303583 */ esp -= 4; M32(esp) = 0x10306de3u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10306ddeu); RETCHK(0x10306de3u, 0x10306ddeu); LOADALL;
  /* 10306de3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306de4(CPU *c) {
  NATIVE_HOOK(0x10306de4u) REGS; LOADALL;
L_10306de4:;
  /* 10306de4 push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 10306de6 call 0x103051fa */ esp -= 4; M32(esp) = 0x10306debu; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x10306de6u); RETCHK(0x10306debu, 0x10306de6u); LOADALL;
  /* 10306deb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306dec ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306ded(CPU *c) {
  NATIVE_HOOK(0x10306dedu) REGS; LOADALL;
L_10306ded:;
  /* 10306ded cmp dword ptr [0x1030c16c], 0 */ { const u32 m_ = (u32)(0x1030c16cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306df4 jne 0x10306e08 */ if (!ZF_) goto L_10306e08;
  /* 10306df6 push -3 */ { u32 v_ = 0xfffffffdu; esp -= 4; M32(esp) = v_; }
  /* 10306df8 call 0x10306c9d */ esp -= 4; M32(esp) = 0x10306dfdu; SAVEALL; F_10306c9d(c); ABI_CHECK(0x10306c9du, 0x10306df8u); RETCHK(0x10306dfdu, 0x10306df8u); LOADALL;
  /* 10306dfd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306dfe mov dword ptr [0x1030c16c], 1 */ { const u32 m_ = (u32)(0x1030c16cu); M32(m_) = (u32)(0x1u); }
L_10306e08:;
  /* 10306e08 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10306e0a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306e23(CPU *c) {
  NATIVE_HOOK(0x10306e23u) REGS; LOADALL;
L_10306e23:;
  /* 10306e23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10306e24 push dword ptr [0x1030c168] */ { const u32 m_ = (u32)(0x1030c168u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10306e2a call 0x10308090 */ esp -= 4; M32(esp) = 0x10306e2fu; SAVEALL; F_10308090(c); ABI_CHECK(0x10308090u, 0x10306e2au); RETCHK(0x10306e2fu, 0x10306e2au); LOADALL;
  /* 10306e2f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306e30 mov ecx, dword ptr [0x1030c164] */ { const u32 m_ = (u32)(0x1030c164u); ecx = (u32)(M32(m_)); }
  /* 10306e36 mov esi, eax */ { esi = (u32)(eax); }
  /* 10306e38 mov eax, dword ptr [0x1030c168] */ { const u32 m_ = (u32)(0x1030c168u); eax = (u32)(M32(m_)); }
  /* 10306e3d mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10306e3f sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10306e41 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10306e44 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306e46 jae 0x10306e96 */ if (!CF_) goto L_10306e96;
  /* 10306e48 mov ecx, 0x800 */ { ecx = (u32)(0x800u); }
  /* 10306e4d cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306e4f jae 0x10306e53 */ if (!CF_) goto L_10306e53;
  /* 10306e51 mov ecx, esi */ { ecx = (u32)(esi); }
L_10306e53:;
  /* 10306e53 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10306e55 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10306e56 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10306e57 call 0x10307ee3 */ esp -= 4; M32(esp) = 0x10306e5cu; SAVEALL; F_10307ee3(c); ABI_CHECK(0x10307ee3u, 0x10306e57u); RETCHK(0x10306e5cu, 0x10306e57u); LOADALL;
  /* 10306e5c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306e5e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306e5f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306e60 jne 0x10306e79 */ if (!ZF_) goto L_10306e79;
  /* 10306e62 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10306e65 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10306e66 push dword ptr [0x1030c168] */ { const u32 m_ = (u32)(0x1030c168u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10306e6c call 0x10307ee3 */ esp -= 4; M32(esp) = 0x10306e71u; SAVEALL; F_10307ee3(c); ABI_CHECK(0x10307ee3u, 0x10306e6cu); RETCHK(0x10306e71u, 0x10306e6cu); LOADALL;
  /* 10306e71 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306e73 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306e74 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306e75 jne 0x10306e79 */ if (!ZF_) goto L_10306e79;
  /* 10306e77 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306e78 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306e79:;
  /* 10306e79 mov ecx, dword ptr [0x1030c164] */ { const u32 m_ = (u32)(0x1030c164u); ecx = (u32)(M32(m_)); }
  /* 10306e7f sub ecx, dword ptr [0x1030c168] */ { const u32 m_ = (u32)(0x1030c168u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10306e85 mov dword ptr [0x1030c168], eax */ { const u32 m_ = (u32)(0x1030c168u); M32(m_) = (u32)(eax); }
  /* 10306e8a sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10306e8d lea ecx, [eax + ecx*4] */ ecx = (u32)((u32)(eax + ecx * 4u));
  /* 10306e90 mov dword ptr [0x1030c164], ecx */ { const u32 m_ = (u32)(0x1030c164u); M32(m_) = (u32)(ecx); }
L_10306e96:;
  /* 10306e96 mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 10306e98 add dword ptr [0x1030c164], 4 */ { const u32 m_ = (u32)(0x1030c164u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10306e9f mov eax, edi */ { eax = (u32)(edi); }
  /* 10306ea1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10306ea2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306ea3(CPU *c) {
  NATIVE_HOOK(0x10306ea3u) REGS; LOADALL;
L_10306ea3:;
  /* 10306ea3 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10306ea8 call 0x10303744 */ esp -= 4; M32(esp) = 0x10306eadu; SAVEALL; F_10303744(c); ABI_CHECK(0x10303744u, 0x10306ea8u); RETCHK(0x10306eadu, 0x10306ea8u); LOADALL;
  /* 10306ead test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306eaf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306eb0 mov dword ptr [0x1030c168], eax */ { const u32 m_ = (u32)(0x1030c168u); M32(m_) = (u32)(eax); }
  /* 10306eb5 jne 0x10306ebb */ if (!ZF_) goto L_10306ebb;
  /* 10306eb7 push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 10306eb9 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 10306eba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306ebb:;
  /* 10306ebb and dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10306ebe mov eax, dword ptr [0x1030c168] */ { const u32 m_ = (u32)(0x1030c168u); eax = (u32)(M32(m_)); }
  /* 10306ec3 mov dword ptr [0x1030c164], eax */ { const u32 m_ = (u32)(0x1030c164u); M32(m_) = (u32)(eax); }
  /* 10306ec8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10306eca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306ecb(CPU *c) {
  NATIVE_HOOK(0x10306ecbu) REGS; LOADALL;
L_10306ecb:;
  /* 10306ecb push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10306ecd push 0x10309a90 */ { u32 v_ = 0x10309a90u; esp -= 4; M32(esp) = v_; }
  /* 10306ed2 call 0x10303548 */ esp -= 4; M32(esp) = 0x10306ed7u; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x10306ed2u); RETCHK(0x10306ed7u, 0x10306ed2u); LOADALL;
  /* 10306ed7 call 0x103043fc */ esp -= 4; M32(esp) = 0x10306edcu; SAVEALL; F_103043fc(c); ABI_CHECK(0x103043fcu, 0x10306ed7u); RETCHK(0x10306edcu, 0x10306ed7u); LOADALL;
  /* 10306edc and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10306ee0 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10306ee3 call 0x10306e23 */ esp -= 4; M32(esp) = 0x10306ee8u; SAVEALL; F_10306e23(c); ABI_CHECK(0x10306e23u, 0x10306ee3u); RETCHK(0x10306ee8u, 0x10306ee3u); LOADALL;
  /* 10306ee8 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10306eeb or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10306eef call 0x10306efd */ esp -= 4; M32(esp) = 0x10306ef4u; SAVEALL; F_10306efd(c); ABI_CHECK(0x10306efdu, 0x10306eefu); RETCHK(0x10306ef4u, 0x10306eefu); LOADALL;
  /* 10306ef4 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10306ef7 call 0x10303583 */ esp -= 4; M32(esp) = 0x10306efcu; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10306ef7u); RETCHK(0x10306efcu, 0x10306ef7u); LOADALL;
  /* 10306efc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306efd(CPU *c) {
  NATIVE_HOOK(0x10306efdu) REGS; LOADALL;
L_10306efd:;
  /* 10306efd call 0x10304405 */ esp -= 4; M32(esp) = 0x10306f02u; SAVEALL; F_10304405(c); ABI_CHECK(0x10304405u, 0x10306efdu); RETCHK(0x10306f02u, 0x10306efdu); LOADALL;
  /* 10306f02 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306f03(CPU *c) {
  NATIVE_HOOK(0x10306f03u) REGS; LOADALL;
L_10306f03:;
  /* 10306f03 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10306f07 call 0x10306ecb */ esp -= 4; M32(esp) = 0x10306f0cu; SAVEALL; F_10306ecb(c); ABI_CHECK(0x10306ecbu, 0x10306f07u); RETCHK(0x10306f0cu, 0x10306f07u); LOADALL;
  /* 10306f0c neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10306f0e sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10306f10 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10306f12 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10306f13 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10306f14 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306f20(CPU *c) {
  NATIVE_HOOK(0x10306f20u) REGS; LOADALL;
L_10306f20:;
  /* 10306f20 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10306f24 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10306f28 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306f2a je 0x10306f7b */ if (ZF_) goto L_10306f7b;
  /* 10306f2c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10306f2e mov al, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10306f32 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10306f33 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10306f35 cmp edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306f38 jb 0x10306f6b */ if (CF_) goto L_10306f6b;
  /* 10306f3a neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10306f3c and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10306f3f je 0x10306f4d */ if (ZF_) goto L_10306f4d;
  /* 10306f41 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
L_10306f43:;
  /* 10306f43 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306f45 add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10306f48 sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10306f4b jne 0x10306f43 */ if (!ZF_) goto L_10306f43;
L_10306f4d:;
  /* 10306f4d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10306f4f shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10306f52 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10306f54 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10306f56 shl eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10306f59 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10306f5b mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10306f5d and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10306f60 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10306f63 je 0x10306f6b */ if (ZF_) goto L_10306f6b;
  /* 10306f65 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10306f67 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306f69 je 0x10306f75 */ if (ZF_) goto L_10306f75;
L_10306f6b:;
  /* 10306f6b mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10306f6d add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10306f70 sub edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10306f73 jne 0x10306f6b */ if (!ZF_) goto L_10306f6b;
L_10306f75:;
  /* 10306f75 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10306f79 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10306f7a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10306f7b:;
  /* 10306f7b mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10306f7f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306f80(CPU *c) {
  NATIVE_HOOK(0x10306f80u) REGS; LOADALL;
L_10306f80:;
  /* 10306f80 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10306f84 call dword ptr [0x103090cc] */ { const u32 m_ = (u32)(0x103090ccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10306f8au; SAVEALL; call_ind(c, t_); RETCHK(0x10306f8au, 0x10306f84u); LOADALL; }
  /* 10306f8a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10306f8c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306f8d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10306f90(CPU *c) {
  NATIVE_HOOK(0x10306f90u) REGS; LOADALL;
L_10306f90:;
  /* 10306f90 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10306f92 push 0x10309ac8 */ { u32 v_ = 0x10309ac8u; esp -= 4; M32(esp) = v_; }
  /* 10306f97 call 0x10303548 */ esp -= 4; M32(esp) = 0x10306f9cu; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x10306f97u); RETCHK(0x10306f9cu, 0x10306f97u); LOADALL;
  /* 10306f9c mov eax, dword ptr [0x1030bc78] */ { const u32 m_ = (u32)(0x1030bc78u); eax = (u32)(M32(m_)); }
  /* 10306fa1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306fa3 jne 0x10306fdc */ if (!ZF_) goto L_10306fdc;
  /* 10306fa5 cmp dword ptr [0x1030b950], 1 */ { const u32 m_ = (u32)(0x1030b950u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10306fac je 0x10306fd2 */ if (ZF_) goto L_10306fd2;
  /* 10306fae push 0x10309424 */ { u32 v_ = 0x10309424u; esp -= 4; M32(esp) = v_; }
  /* 10306fb3 call dword ptr [0x10309050] */ { const u32 m_ = (u32)(0x10309050u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10306fb9u; SAVEALL; call_ind(c, t_); RETCHK(0x10306fb9u, 0x10306fb3u); LOADALL; }
  /* 10306fb9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306fbb je 0x10306fd2 */ if (ZF_) goto L_10306fd2;
  /* 10306fbd push 0x10309a9c */ { u32 v_ = 0x10309a9cu; esp -= 4; M32(esp) = v_; }
  /* 10306fc2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10306fc3 call dword ptr [0x1030904c] */ { const u32 m_ = (u32)(0x1030904cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10306fc9u; SAVEALL; call_ind(c, t_); RETCHK(0x10306fc9u, 0x10306fc3u); LOADALL; }
  /* 10306fc9 mov dword ptr [0x1030bc78], eax */ { const u32 m_ = (u32)(0x1030bc78u); M32(m_) = (u32)(eax); }
  /* 10306fce test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10306fd0 jne 0x10306fdc */ if (!ZF_) goto L_10306fdc;
L_10306fd2:;
  /* 10306fd2 mov eax, 0x10306f80 */ { eax = (u32)(0x10306f80u); }
  /* 10306fd7 mov dword ptr [0x1030bc78], eax */ { const u32 m_ = (u32)(0x1030bc78u); M32(m_) = (u32)(eax); }
L_10306fdc:;
  /* 10306fdc and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10306fe0 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10306fe3 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10306fe6 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10306fe8u; SAVEALL; call_ind(c, t_); RETCHK(0x10306fe8u, 0x10306fe6u); LOADALL; }
  /* 10306fe8 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10306feb jmp 0x10307011 */ goto L_10307011;
L_10307011:;
  /* 10307011 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10307015 call 0x10303583 */ esp -= 4; M32(esp) = 0x1030701au; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10307015u); RETCHK(0x1030701au, 0x10307015u); LOADALL;
  /* 1030701a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306fed(CPU *c) {
  NATIVE_HOOK(0x10306fedu) REGS; LOADALL;
L_10306fed:;
  /* 10306fed mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10306ff0 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10306ff2 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10306ff4 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10306ff7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10306ff9 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10306ffa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10306ffb(CPU *c) {
  NATIVE_HOOK(0x10306ffbu) REGS; LOADALL;
L_10306ffb:;
  /* 10306ffb mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10306ffe cmp dword ptr [ebp - 0x1c], 0xc0000017 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0xc0000017u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307005 jne 0x1030700f */ if (!ZF_) goto L_1030700f;
  /* 10307007 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10307009 call dword ptr [0x10309038] */ { const u32 m_ = (u32)(0x10309038u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030700fu; SAVEALL; call_ind(c, t_); RETCHK(0x1030700fu, 0x10307009u); LOADALL; }
L_1030700f:;
  /* 1030700f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10307011 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10307015 call 0x10303583 */ esp -= 4; M32(esp) = 0x1030701au; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10307015u); RETCHK(0x1030701au, 0x10307015u); LOADALL;
  /* 1030701a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307020(CPU *c) {
  NATIVE_HOOK(0x10307020u) REGS; LOADALL;
L_10307020:;
  /* 10307020 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10307021 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10307023 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10307024 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10307025 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10307028 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1030702b mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 1030702e mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10307030 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10307032 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10307034 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307036 jbe 0x10307040 */ if ((CF_|ZF_)) goto L_10307040;
  /* 10307038 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030703a jb 0x103071bc */ if (CF_) goto L_103071bc;
L_10307040:;
  /* 10307040 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10307046 jne 0x1030705c */ if (!ZF_) goto L_1030705c;
  /* 10307048 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1030704b and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1030704e cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10307051 jb 0x1030707c */ if (CF_) goto L_1030707c;
  /* 10307053 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10307055 jmp dword ptr [edx*4 + 0x1030716c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030716cu); u32 t_ = M32(m_); switch (t_) { case 0x1030717cu: goto L_1030717c; case 0x10307184u: goto L_10307184; case 0x10307190u: goto L_10307190; case 0x103071a4u: goto L_103071a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030705c:;
  /* 1030705c mov eax, edi */ { eax = (u32)(edi); }
  /* 1030705e mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 10307063 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10307066 jb 0x10307074 */ if (CF_) goto L_10307074;
  /* 10307068 and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030706b add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1030706d jmp dword ptr [eax*4 + 0x10307080] */ { const u32 m_ = (u32)(eax * 4u + 0x10307080u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10307074:;
  /* 10307074 jmp dword ptr [ecx*4 + 0x1030717c] */ { const u32 m_ = (u32)(ecx * 4u + 0x1030717cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_1030707c:;
  /* 1030707c jmp dword ptr [ecx*4 + 0x10307100] */ { const u32 m_ = (u32)(ecx * 4u + 0x10307100u); u32 t_ = M32(m_); switch (t_) { case 0x10307120u: goto L_10307120; case 0x10307128u: goto L_10307128; case 0x10307130u: goto L_10307130; case 0x10307138u: goto L_10307138; case 0x10307140u: goto L_10307140; case 0x10307148u: goto L_10307148; case 0x10307150u: goto L_10307150; case 0x10307163u: goto L_10307163; default: SAVEALL; call_ind(c, t_); return; } }
L_10307120:;
  /* 10307120 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10307124 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10307128:;
  /* 10307128 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1030712c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10307130:;
  /* 10307130 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10307134 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10307138:;
  /* 10307138 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1030713c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10307140:;
  /* 10307140 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10307144 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10307148:;
  /* 10307148 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030714c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10307150:;
  /* 10307150 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10307154 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10307158 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030715f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10307161 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10307163:;
  /* 10307163 jmp dword ptr [edx*4 + 0x1030716c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030716cu); u32 t_ = M32(m_); switch (t_) { case 0x1030717cu: goto L_1030717c; case 0x10307184u: goto L_10307184; case 0x10307190u: goto L_10307190; case 0x103071a4u: goto L_103071a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030717c:;
  /* 1030717c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030717f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307180 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307181 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307182 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307184:;
  /* 10307184 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307186 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307188 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030718b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030718c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030718d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030718e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307190:;
  /* 10307190 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307192 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307194 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307197 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030719a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030719d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030719e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030719f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103071a4:;
  /* 103071a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103071b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103071b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103071b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103071bc:;
  /* 103071bc lea esi, [ecx + esi - 4] */ esi = (u32)((u32)(ecx + esi + 0xfffffffcu));
  /* 103071c0 lea edi, [ecx + edi - 4] */ edi = (u32)((u32)(ecx + edi + 0xfffffffcu));
  /* 103071c4 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103071ca jne 0x103071f0 */ if (!ZF_) goto L_103071f0;
  /* 103071cc shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 103071cf and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 103071d2 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103071d5 jb 0x103071e4 */ if (CF_) goto L_103071e4;
  /* 103071d7 std */ c->df = 1;
  /* 103071d8 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 103071da cld */ c->df = 0;
  /* 103071db jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_103071e4:;
  /* 103071e4 neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 103071e6 jmp dword ptr [ecx*4 + 0x103072b8] */ { const u32 m_ = (u32)(ecx * 4u + 0x103072b8u); u32 t_ = M32(m_); switch (t_) { case 0x103072ffu: goto L_103072ff; default: SAVEALL; call_ind(c, t_); return; } }
L_103071f0:;
  /* 103071f0 mov eax, edi */ { eax = (u32)(edi); }
  /* 103071f2 mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 103071f7 cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103071fa jb 0x10307208 */ if (CF_) goto L_10307208;
  /* 103071fc and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103071ff sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10307201 jmp dword ptr [eax*4 + 0x1030720c] */ { const u32 m_ = (u32)(eax * 4u + 0x1030720cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10307208:;
  /* 10307208 jmp dword ptr [ecx*4 + 0x10307308] */ { const u32 m_ = (u32)(ecx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_103072ff:;
  /* 103072ff jmp dword ptr [edx*4 + 0x10307308] */ { const u32 m_ = (u32)(edx * 4u + 0x10307308u); u32 t_ = M32(m_); switch (t_) { case 0x10307318u: goto L_10307318; case 0x10307320u: goto L_10307320; case 0x10307330u: goto L_10307330; case 0x10307344u: goto L_10307344; default: SAVEALL; call_ind(c, t_); return; } }
L_10307318:;
  /* 10307318 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030731b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030731c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030731d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030731e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307320:;
  /* 10307320 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307323 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307326 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307329 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030732a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030732b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030732c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307330:;
  /* 10307330 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307333 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307336 mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307339 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030733c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030733f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307341 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307342 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307344:;
  /* 10307344 mov al, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307347 mov byte ptr [edi + 3], al */ { const u32 m_ = (u32)(edi + 0x3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030734a mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030734d mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307350 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307353 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307356 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10307359 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030735a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030735b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030735c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307080(CPU *c) {
  NATIVE_HOOK(0x10307080u) REGS; LOADALL;
  goto L_10307080;
L_1030707c:;
  /* 1030707c jmp dword ptr [ecx*4 + 0x10307100] */ { const u32 m_ = (u32)(ecx * 4u + 0x10307100u); u32 t_ = M32(m_); switch (t_) { case 0x10307120u: goto L_10307120; case 0x10307128u: goto L_10307128; case 0x10307130u: goto L_10307130; case 0x10307138u: goto L_10307138; case 0x10307140u: goto L_10307140; case 0x10307148u: goto L_10307148; case 0x10307150u: goto L_10307150; case 0x10307163u: goto L_10307163; default: SAVEALL; call_ind(c, t_); return; } }
L_10307080:;
  /* 10307080 jno 0x103070b2 */ if (!OF_) goto L_103070b2;
  /* 10307082 adc byte ptr [eax + 0x10307090], dl */ { const u32 m_ = (u32)(eax + 0x10307090u); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10307088 mov esp, 0xe0103070 */ { esp = (u32)(0xe0103070u); }
  /* 1030708d jo 0x103070bf */ if (OF_) goto L_103070bf;
  /* 1030708f adc byte ptr [ebx], ah */ { const u32 m_ = (u32)(ebx); u32 a_ = M8(m_), b_ = ((eax >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10307091 ror dword ptr [edx - 0x75f877fa], 1 */ { const u32 m_ = (u32)(edx + 0x8a078806u); u32 n_ = (1u) & 31u; if (n_) { u32 a_ = M32(m_); u32 k_ = n_ % 32u; u32 r_ = k_ ? (((a_ >> k_) | (a_ << (32u - k_))) & 0xffffffffu) : a_; u32 cf_ = (r_ >> 31) & 1u; u32 of_ = ((r_ >> 31) ^ (r_ >> 30)) & 1u; u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | (of_ << 11); SETRAW(e_); M32(m_) = (u32)(r_); } }
  /* 10307097 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10307098 add dword ptr [eax + 0x468a0147], ecx */ { const u32 m_ = (u32)(eax + 0x468a0147u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 1030709e add al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 103070a0 jmp 0x1277f8a7 */ TRAP(0x1277f8a7u, "bad jump target");
L_103070b2:;
  /* 103070b2 jmp dword ptr [edx*4 + 0x1030716c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030716cu); u32 t_ = M32(m_); switch (t_) { case 0x1030717cu: goto L_1030717c; case 0x10307184u: goto L_10307184; case 0x10307190u: goto L_10307190; case 0x103071a4u: goto L_103071a4; default: SAVEALL; call_ind(c, t_); return; } }
L_103070bf:;
  /* 103070bf push es */ TRAP(0x103070bfu, "unimpl push es");
  /* 103070c0 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103070c2 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103070c5 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 103070c8 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103070cb add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103070ce add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103070d1 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103070d4 jb 0x1030707c */ if (CF_) goto L_1030707c;
  /* 103070d6 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 103070d8 jmp dword ptr [edx*4 + 0x1030716c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030716cu); u32 t_ = M32(m_); switch (t_) { case 0x1030717cu: goto L_1030717c; case 0x10307184u: goto L_10307184; case 0x10307190u: goto L_10307190; case 0x103071a4u: goto L_103071a4; default: SAVEALL; call_ind(c, t_); return; } }
L_10307120:;
  /* 10307120 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10307124 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10307128:;
  /* 10307128 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1030712c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10307130:;
  /* 10307130 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10307134 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10307138:;
  /* 10307138 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1030713c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10307140:;
  /* 10307140 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10307144 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10307148:;
  /* 10307148 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030714c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10307150:;
  /* 10307150 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10307154 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10307158 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030715f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10307161 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10307163:;
  /* 10307163 jmp dword ptr [edx*4 + 0x1030716c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030716cu); u32 t_ = M32(m_); switch (t_) { case 0x1030717cu: goto L_1030717c; case 0x10307184u: goto L_10307184; case 0x10307190u: goto L_10307190; case 0x103071a4u: goto L_103071a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030717c:;
  /* 1030717c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030717f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307180 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307181 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307182 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307184:;
  /* 10307184 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307186 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307188 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030718b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030718c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030718d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030718e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307190:;
  /* 10307190 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307192 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307194 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307197 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030719a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030719d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030719e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030719f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103071a4:;
  /* 103071a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103071b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103071b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103071b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307090(CPU *c) {
  NATIVE_HOOK(0x10307090u) REGS; LOADALL;
  goto L_10307090;
L_1030707c:;
  /* 1030707c jmp dword ptr [ecx*4 + 0x10307100] */ { const u32 m_ = (u32)(ecx * 4u + 0x10307100u); u32 t_ = M32(m_); switch (t_) { case 0x10307120u: goto L_10307120; case 0x10307128u: goto L_10307128; case 0x10307130u: goto L_10307130; case 0x10307138u: goto L_10307138; case 0x10307140u: goto L_10307140; case 0x10307148u: goto L_10307148; case 0x10307150u: goto L_10307150; case 0x10307163u: goto L_10307163; default: SAVEALL; call_ind(c, t_); return; } }
L_10307090:;
  /* 10307090 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10307092 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307094 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307096 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307099 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030709c mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1030709f shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 103070a2 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103070a5 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103070a8 add edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103070ab cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103070ae jb 0x1030707c */ if (CF_) goto L_1030707c;
  /* 103070b0 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 103070b2 jmp dword ptr [edx*4 + 0x1030716c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030716cu); u32 t_ = M32(m_); switch (t_) { case 0x1030717cu: goto L_1030717c; case 0x10307184u: goto L_10307184; case 0x10307190u: goto L_10307190; case 0x103071a4u: goto L_103071a4; default: SAVEALL; call_ind(c, t_); return; } }
L_10307120:;
  /* 10307120 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10307124 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10307128:;
  /* 10307128 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1030712c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10307130:;
  /* 10307130 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10307134 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10307138:;
  /* 10307138 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1030713c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10307140:;
  /* 10307140 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10307144 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10307148:;
  /* 10307148 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030714c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10307150:;
  /* 10307150 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10307154 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10307158 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030715f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10307161 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10307163:;
  /* 10307163 jmp dword ptr [edx*4 + 0x1030716c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030716cu); u32 t_ = M32(m_); switch (t_) { case 0x1030717cu: goto L_1030717c; case 0x10307184u: goto L_10307184; case 0x10307190u: goto L_10307190; case 0x103071a4u: goto L_103071a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030717c:;
  /* 1030717c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030717f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307180 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307181 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307182 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307184:;
  /* 10307184 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307186 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307188 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030718b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030718c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030718d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030718e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307190:;
  /* 10307190 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307192 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307194 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307197 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030719a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030719d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030719e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030719f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103071a4:;
  /* 103071a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103071b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103071b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103071b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103070bc(CPU *c) {
  NATIVE_HOOK(0x103070bcu) REGS; LOADALL;
  goto L_103070bc;
L_1030707c:;
  /* 1030707c jmp dword ptr [ecx*4 + 0x10307100] */ { const u32 m_ = (u32)(ecx * 4u + 0x10307100u); u32 t_ = M32(m_); switch (t_) { case 0x10307120u: goto L_10307120; case 0x10307128u: goto L_10307128; case 0x10307130u: goto L_10307130; case 0x10307138u: goto L_10307138; case 0x10307140u: goto L_10307140; case 0x10307148u: goto L_10307148; case 0x10307150u: goto L_10307150; case 0x10307163u: goto L_10307163; default: SAVEALL; call_ind(c, t_); return; } }
L_103070bc:;
  /* 103070bc and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 103070be mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103070c0 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103070c2 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103070c5 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 103070c8 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103070cb add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103070ce add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103070d1 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103070d4 jb 0x1030707c */ if (CF_) goto L_1030707c;
  /* 103070d6 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 103070d8 jmp dword ptr [edx*4 + 0x1030716c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030716cu); u32 t_ = M32(m_); switch (t_) { case 0x1030717cu: goto L_1030717c; case 0x10307184u: goto L_10307184; case 0x10307190u: goto L_10307190; case 0x103071a4u: goto L_103071a4; default: SAVEALL; call_ind(c, t_); return; } }
L_10307120:;
  /* 10307120 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10307124 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10307128:;
  /* 10307128 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1030712c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10307130:;
  /* 10307130 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10307134 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10307138:;
  /* 10307138 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1030713c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10307140:;
  /* 10307140 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10307144 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10307148:;
  /* 10307148 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030714c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10307150:;
  /* 10307150 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10307154 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10307158 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030715f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10307161 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10307163:;
  /* 10307163 jmp dword ptr [edx*4 + 0x1030716c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030716cu); u32 t_ = M32(m_); switch (t_) { case 0x1030717cu: goto L_1030717c; case 0x10307184u: goto L_10307184; case 0x10307190u: goto L_10307190; case 0x103071a4u: goto L_103071a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030717c:;
  /* 1030717c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030717f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307180 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307181 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307182 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307184:;
  /* 10307184 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307186 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307188 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030718b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030718c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030718d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030718e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307190:;
  /* 10307190 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307192 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307194 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307197 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030719a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030719d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030719e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030719f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103071a4:;
  /* 103071a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103071b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103071b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103071b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103070e0(CPU *c) {
  NATIVE_HOOK(0x103070e0u) REGS; LOADALL;
  goto L_103070e0;
L_1030707c:;
  /* 1030707c jmp dword ptr [ecx*4 + 0x10307100] */ { const u32 m_ = (u32)(ecx * 4u + 0x10307100u); u32 t_ = M32(m_); switch (t_) { case 0x10307120u: goto L_10307120; case 0x10307128u: goto L_10307128; case 0x10307130u: goto L_10307130; case 0x10307138u: goto L_10307138; case 0x10307140u: goto L_10307140; case 0x10307148u: goto L_10307148; case 0x10307150u: goto L_10307150; case 0x10307163u: goto L_10307163; default: SAVEALL; call_ind(c, t_); return; } }
L_103070e0:;
  /* 103070e0 and edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 103070e2 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103070e4 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103070e6 add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103070e9 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 103070ec add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103070ef cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103070f2 jb 0x1030707c */ if (CF_) goto L_1030707c;
  /* 103070f4 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 103070f6 jmp dword ptr [edx*4 + 0x1030716c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030716cu); u32 t_ = M32(m_); switch (t_) { case 0x1030717cu: goto L_1030717c; case 0x10307184u: goto L_10307184; case 0x10307190u: goto L_10307190; case 0x103071a4u: goto L_103071a4; default: SAVEALL; call_ind(c, t_); return; } }
L_10307120:;
  /* 10307120 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10307124 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10307128:;
  /* 10307128 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1030712c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
L_10307130:;
  /* 10307130 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10307134 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
L_10307138:;
  /* 10307138 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1030713c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
L_10307140:;
  /* 10307140 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10307144 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
L_10307148:;
  /* 10307148 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030714c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_10307150:;
  /* 10307150 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10307154 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10307158 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030715f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10307161 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10307163:;
  /* 10307163 jmp dword ptr [edx*4 + 0x1030716c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030716cu); u32 t_ = M32(m_); switch (t_) { case 0x1030717cu: goto L_1030717c; case 0x10307184u: goto L_10307184; case 0x10307190u: goto L_10307190; case 0x103071a4u: goto L_103071a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030717c:;
  /* 1030717c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030717f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307180 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307181 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307182 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307184:;
  /* 10307184 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307186 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307188 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030718b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030718c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030718d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030718e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307190:;
  /* 10307190 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307192 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307194 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307197 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030719a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030719d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030719e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030719f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103071a4:;
  /* 103071a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103071b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103071b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103071b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307100(CPU *c) {
  NATIVE_HOOK(0x10307100u) REGS; LOADALL;
L_10307100:;
  /* 10307100 arpl word ptr [ecx + 0x30], si */ TRAP(0x10307100u, "arpl");
}

void F_10307120(CPU *c) {
  NATIVE_HOOK(0x10307120u) REGS; LOADALL;
L_10307120:;
  /* 10307120 mov eax, dword ptr [esi + ecx*4 - 0x1c] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10307124 mov dword ptr [edi + ecx*4 - 0x1c], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10307128 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1030712c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 10307130 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10307134 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10307138 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1030713c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10307140 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10307144 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10307148 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030714c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10307150 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10307154 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10307158 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030715f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10307161 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10307163 jmp dword ptr [edx*4 + 0x1030716c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030716cu); u32 t_ = M32(m_); switch (t_) { case 0x1030717cu: goto L_1030717c; case 0x10307184u: goto L_10307184; case 0x10307190u: goto L_10307190; case 0x103071a4u: goto L_103071a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030717c:;
  /* 1030717c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030717f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307180 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307181 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307182 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307184:;
  /* 10307184 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307186 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307188 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030718b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030718c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030718d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030718e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307190:;
  /* 10307190 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307192 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307194 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307197 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030719a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030719d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030719e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030719f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103071a4:;
  /* 103071a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103071b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103071b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103071b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10307128(CPU *c) {
  NATIVE_HOOK(0x10307128u) REGS; LOADALL;
L_10307128:;
  /* 10307128 mov eax, dword ptr [esi + ecx*4 - 0x18] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1030712c mov dword ptr [edi + ecx*4 - 0x18], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 10307130 mov eax, dword ptr [esi + ecx*4 - 0x14] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10307134 mov dword ptr [edi + ecx*4 - 0x14], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10307138 mov eax, dword ptr [esi + ecx*4 - 0x10] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1030713c mov dword ptr [edi + ecx*4 - 0x10], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10307140 mov eax, dword ptr [esi + ecx*4 - 0xc] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 10307144 mov dword ptr [edi + ecx*4 - 0xc], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10307148 mov eax, dword ptr [esi + ecx*4 - 8] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 1030714c mov dword ptr [edi + ecx*4 - 8], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10307150 mov eax, dword ptr [esi + ecx*4 - 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10307154 mov dword ptr [edi + ecx*4 - 4], eax */ { const u32 m_ = (u32)(edi + ecx * 4u + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10307158 lea eax, [ecx*4] */ eax = (u32)((u32)(ecx * 4u));
  /* 1030715f add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10307161 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10307163 jmp dword ptr [edx*4 + 0x1030716c] */ { const u32 m_ = (u32)(edx * 4u + 0x1030716cu); u32 t_ = M32(m_); switch (t_) { case 0x1030717cu: goto L_1030717c; case 0x10307184u: goto L_10307184; case 0x10307190u: goto L_10307190; case 0x103071a4u: goto L_103071a4; default: SAVEALL; call_ind(c, t_); return; } }
L_1030717c:;
  /* 1030717c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030717f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10307180 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10307181 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10307182 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307184:;
  /* 10307184 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307186 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307188 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030718b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030718c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030718d leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1030718e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10307190:;
  /* 10307190 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307192 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10307194 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10307197 mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030719a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030719d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030719e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030719f leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103071a4:;
  /* 103071a4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071a6 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071a8 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071ab mov byte ptr [edi + 1], al */ { const u32 m_ = (u32)(edi + 0x1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071ae mov al, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103071b1 mov byte ptr [edi + 2], al */ { const u32 m_ = (u32)(edi + 0x2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 103071b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103071b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103071b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103071b9 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103071ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
