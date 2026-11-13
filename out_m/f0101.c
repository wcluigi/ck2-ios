#include "funcs.h"

void F_10001970(CPU *c) {
  NATIVE_HOOK(0x10001970u) REGS; LOADALL;
L_10001970:;
  /* 10001970 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10001971 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10001974 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001977 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10001978 mov bl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000197b test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000197d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000197e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000197f mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 10001983 jne 0x1000199c */ if (!ZF_) goto L_1000199c;
  /* 10001985 mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
L_10001987:;
  /* 10001987 cmp dword ptr [eax + 0xc], esi */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000198a jae 0x10001991 */ if (!CF_) goto L_10001991;
  /* 1000198c mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 1000198f jmp 0x10001995 */ goto L_10001995;
L_10001991:;
  /* 10001991 mov edx, eax */ { edx = (u32)(eax); }
  /* 10001993 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
L_10001995:;
  /* 10001995 mov bl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001998 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000199a je 0x10001987 */ if (ZF_) goto L_10001987;
L_1000199c:;
  /* 1000199c mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 1000199f cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100019a1 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 100019a5 je 0x100019c1 */ if (ZF_) goto L_100019c1;
  /* 100019a7 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 100019a9 cmp ecx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100019ac jb 0x100019c1 */ if (CF_) goto L_100019c1;
  /* 100019ae lea eax, [esp + 0x18] */ eax = (u32)((u32)(esp + 0x18u));
  /* 100019b2 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 100019b4 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 100019b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100019b9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100019ba mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 100019bc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100019bd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 100019be ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_100019c1:;
  /* 100019c1 mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 100019c5 lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 100019c9 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 100019cb mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 100019cf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100019d0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100019d1 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 100019d3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100019d4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 100019d5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_100019e0(CPU *c) {
  NATIVE_HOOK(0x100019e0u) REGS; LOADALL;
L_100019e0:;
  /* 100019e0 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 100019e6 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 100019e8 push 0x100073d2 */ { u32 v_ = 0x100073d2u; esp -= 4; M32(esp) = v_; }
  /* 100019ed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100019ee mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 100019f5 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100019f8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100019f9 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 100019fb cmp dword ptr [edi + 8], 0x7fffffe */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M32(m_), b_ = 0x7fffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001a02 jb 0x10001a5d */ if (CF_) goto L_10001a5d;
  /* 10001a04 push 0x10008144 */ { u32 v_ = 0x10008144u; esp -= 4; M32(esp) = v_; }
  /* 10001a09 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 10001a0d call dword ptr [0x10008050] */ { const u32 m_ = (u32)(0x10008050u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10001a13u; SAVEALL; call_ind(c, t_); RETCHK(0x10001a13u, 0x10001a0du); LOADALL; }
  /* 10001a13 lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 10001a17 mov dword ptr [esp + 0x50], 0 */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(0x0u); }
  /* 10001a1f call dword ptr [0x100080bc] */ { const u32 m_ = (u32)(0x100080bcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10001a25u; SAVEALL; call_ind(c, t_); RETCHK(0x10001a25u, 0x10001a1fu); LOADALL; }
  /* 10001a25 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10001a29 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10001a2a lea ecx, [esp + 0x30] */ ecx = (u32)((u32)(esp + 0x30u));
  /* 10001a2e mov byte ptr [esp + 0x54], 1 */ { const u32 m_ = (u32)(esp + 0x54u); M8(m_) = (u8)(0x1u); }
  /* 10001a33 mov dword ptr [esp + 0x24], 0x10008114 */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0x10008114u); }
  /* 10001a3b call dword ptr [0x1000803c] */ { const u32 m_ = (u32)(0x1000803cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10001a41u; SAVEALL; call_ind(c, t_); RETCHK(0x10001a41u, 0x10001a3bu); LOADALL; }
  /* 10001a41 push 0x10008bc0 */ { u32 v_ = 0x10008bc0u; esp -= 4; M32(esp) = v_; }
  /* 10001a46 lea ecx, [esp + 0x24] */ ecx = (u32)((u32)(esp + 0x24u));
  /* 10001a4a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10001a4b mov byte ptr [esp + 0x58], 0 */ { const u32 m_ = (u32)(esp + 0x58u); M8(m_) = (u8)(0x0u); }
  /* 10001a50 mov dword ptr [esp + 0x28], 0x1000811c */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0x1000811cu); }
  /* 10001a58 call 0x10006e40 */ { SAVEALL; rt_throw(c, 0x100080c4u); }
L_10001a5d:;
  /* 10001a5d mov edx, dword ptr [esp + 0x64] */ { const u32 m_ = (u32)(esp + 0x64u); edx = (u32)(M32(m_)); }
  /* 10001a61 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001a64 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10001a65 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001a66 mov esi, dword ptr [esp + 0x68] */ { const u32 m_ = (u32)(esp + 0x68u); esi = (u32)(M32(m_)); }
  /* 10001a6a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10001a6c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10001a6d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10001a6e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001a6f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10001a70 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10001a72 call 0x10001830 */ esp -= 4; M32(esp) = 0x10001a77u; SAVEALL; F_10001830(c); ABI_CHECK(0x10001830u, 0x10001a72u); RETCHK(0x10001a77u, 0x10001a72u); LOADALL;
  /* 10001a77 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10001a7a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10001a7c mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001a7f inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10001a80 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001a82 mov dword ptr [esp + 0x6c], ecx */ { const u32 m_ = (u32)(esp + 0x6cu); M32(m_) = (u32)(ecx); }
  /* 10001a86 mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10001a89 jne 0x10001a9b */ if (!ZF_) goto L_10001a9b;
  /* 10001a8b mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10001a8e mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001a91 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10001a93 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10001a96 mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10001a99 jmp 0x10001abe */ goto L_10001abe;
L_10001a9b:;
  /* 10001a9b mov al, byte ptr [esp + 0x64] */ { const u32 m_ = (u32)(esp + 0x64u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001a9f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001aa1 je 0x10001ab0 */ if (ZF_) goto L_10001ab0;
  /* 10001aa3 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10001aa5 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001aa8 cmp esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001aaa jne 0x10001abe */ if (!ZF_) goto L_10001abe;
  /* 10001aac mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10001aae jmp 0x10001abe */ goto L_10001abe;
L_10001ab0:;
  /* 10001ab0 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10001ab3 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001ab6 cmp esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001ab9 jne 0x10001abe */ if (!ZF_) goto L_10001abe;
  /* 10001abb mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_10001abe:;
  /* 10001abe mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10001ac1 cmp byte ptr [edx + 0x2c], 0 */ { const u32 m_ = (u32)(edx + 0x2cu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10001ac5 lea eax, [ecx + 4] */ eax = (u32)((u32)(ecx + 0x4u));
  /* 10001ac8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10001aca mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 10001acc jne 0x10001b77 */ if (!ZF_) goto L_10001b77;
  /* 10001ad2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
L_10001ad3:;
  /* 10001ad3 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10001ad5 mov ebp, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebp = (u32)(M32(m_)); }
  /* 10001ad8 mov edx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); edx = (u32)(M32(m_)); }
  /* 10001adb cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001add jne 0x10001b2f */ if (!ZF_) goto L_10001b2f;
  /* 10001adf mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10001ae2 cmp byte ptr [edx + 0x2c], 0 */ { const u32 m_ = (u32)(edx + 0x2cu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10001ae6 jne 0x10001b00 */ if (!ZF_) goto L_10001b00;
L_10001ae8:;
  /* 10001ae8 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10001aea mov byte ptr [ecx + 0x2c], bl */ { const u32 m_ = (u32)(ecx + 0x2cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10001aed mov byte ptr [edx + 0x2c], bl */ { const u32 m_ = (u32)(edx + 0x2cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10001af0 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10001af2 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10001af5 mov byte ptr [ecx + 0x2c], 0 */ { const u32 m_ = (u32)(ecx + 0x2cu); M8(m_) = (u8)(0x0u); }
  /* 10001af9 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10001afb mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 10001afe jmp 0x10001b61 */ goto L_10001b61;
L_10001b00:;
  /* 10001b00 cmp esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001b03 jne 0x10001b0f */ if (!ZF_) goto L_10001b0f;
  /* 10001b05 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10001b07 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001b08 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10001b0a call 0x10001790 */ esp -= 4; M32(esp) = 0x10001b0fu; SAVEALL; F_10001790(c); ABI_CHECK(0x10001790u, 0x10001b0au); RETCHK(0x10001b0fu, 0x10001b0au); LOADALL;
L_10001b0f:;
  /* 10001b0f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001b12 mov byte ptr [eax + 0x2c], bl */ { const u32 m_ = (u32)(eax + 0x2cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10001b15 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10001b18 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10001b1b mov byte ptr [edx + 0x2c], 0 */ { const u32 m_ = (u32)(edx + 0x2cu); M8(m_) = (u8)(0x0u); }
  /* 10001b1f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001b22 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10001b25 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10001b26 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10001b28 call 0x100013d0 */ esp -= 4; M32(esp) = 0x10001b2du; SAVEALL; F_100013d0(c); ABI_CHECK(0x100013d0u, 0x10001b28u); RETCHK(0x10001b2du, 0x10001b28u); LOADALL;
  /* 10001b2d jmp 0x10001b61 */ goto L_10001b61;
L_10001b2f:;
  /* 10001b2f cmp byte ptr [edx + 0x2c], 0 */ { const u32 m_ = (u32)(edx + 0x2cu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10001b33 je 0x10001ae8 */ if (ZF_) goto L_10001ae8;
  /* 10001b35 cmp esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001b37 jne 0x10001b43 */ if (!ZF_) goto L_10001b43;
  /* 10001b39 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10001b3b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001b3c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10001b3e call 0x100013d0 */ esp -= 4; M32(esp) = 0x10001b43u; SAVEALL; F_100013d0(c); ABI_CHECK(0x100013d0u, 0x10001b3eu); RETCHK(0x10001b43u, 0x10001b3eu); LOADALL;
L_10001b43:;
  /* 10001b43 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001b46 mov byte ptr [eax + 0x2c], bl */ { const u32 m_ = (u32)(eax + 0x2cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10001b49 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10001b4c mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10001b4f mov byte ptr [edx + 0x2c], 0 */ { const u32 m_ = (u32)(edx + 0x2cu); M8(m_) = (u8)(0x0u); }
  /* 10001b53 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001b56 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10001b59 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10001b5a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10001b5c call 0x10001790 */ esp -= 4; M32(esp) = 0x10001b61u; SAVEALL; F_10001790(c); ABI_CHECK(0x10001790u, 0x10001b5cu); RETCHK(0x10001b61u, 0x10001b5cu); LOADALL;
L_10001b61:;
  /* 10001b61 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10001b64 mov cl, byte ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001b67 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001b69 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 10001b6c je 0x10001ad3 */ if (ZF_) goto L_10001ad3;
  /* 10001b72 mov ecx, dword ptr [esp + 0x70] */ { const u32 m_ = (u32)(esp + 0x70u); ecx = (u32)(M32(m_)); }
  /* 10001b76 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_10001b77:;
  /* 10001b77 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001b7a mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 10001b7d mov eax, dword ptr [esp + 0x60] */ { const u32 m_ = (u32)(esp + 0x60u); eax = (u32)(M32(m_)); }
  /* 10001b81 mov byte ptr [edx + 0x2c], bl */ { const u32 m_ = (u32)(edx + 0x2cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10001b84 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10001b85 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10001b87 mov ecx, dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 10001b8b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10001b8c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10001b8d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10001b94 add esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10001b97 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_10001ba0(CPU *c) {
  NATIVE_HOOK(0x10001ba0u) REGS; LOADALL;
L_10001ba0:;
  /* 10001ba0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10001ba2 push 0x100072e9 */ { u32 v_ = 0x100072e9u; esp -= 4; M32(esp) = v_; }
  /* 10001ba7 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10001bad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10001bae mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10001bb5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10001bb6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001bb7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10001bb8 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 10001bbc mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10001bbe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10001bbf mov dword ptr [esp + 0xc], esi */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(esi); }
  /* 10001bc3 call dword ptr [0x100080c8] */ { const u32 m_ = (u32)(0x100080c8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10001bc9u; SAVEALL; call_ind(c, t_); RETCHK(0x10001bc9u, 0x10001bc3u); LOADALL; }
  /* 10001bc9 add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10001bcc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10001bcd lea ecx, [esi + 0xc] */ ecx = (u32)((u32)(esi + 0xcu));
  /* 10001bd0 mov dword ptr [esp + 0x18], 0 */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(0x0u); }
  /* 10001bd8 mov dword ptr [esi], 0x10008114 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x10008114u); }
  /* 10001bde call dword ptr [0x1000803c] */ { const u32 m_ = (u32)(0x1000803cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10001be4u; SAVEALL; call_ind(c, t_); RETCHK(0x10001be4u, 0x10001bdeu); LOADALL; }
  /* 10001be4 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10001be8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10001be9 mov eax, esi */ { eax = (u32)(esi); }
  /* 10001beb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10001bec mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10001bf3 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10001bf6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10001c00(CPU *c) {
  NATIVE_HOOK(0x10001c00u) REGS; LOADALL;
L_10001c00:;
  /* 10001c00 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001c04 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001c05 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10001c06 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10001c08 call 0x10001ba0 */ esp -= 4; M32(esp) = 0x10001c0du; SAVEALL; F_10001ba0(c); ABI_CHECK(0x10001ba0u, 0x10001c08u); RETCHK(0x10001c0du, 0x10001c08u); LOADALL;
  /* 10001c0d mov dword ptr [esi], 0x1000811c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1000811cu); }
  /* 10001c13 mov eax, esi */ { eax = (u32)(esi); }
  /* 10001c15 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10001c16 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10001d00(CPU *c) {
  NATIVE_HOOK(0x10001d00u) REGS; LOADALL;
  goto L_10001d00;
L_10001c20:;
  /* 10001c20 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10001c26 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10001c28 push 0x10007309 */ { u32 v_ = 0x10007309u; esp -= 4; M32(esp) = v_; }
  /* 10001c2d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10001c2e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10001c35 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10001c38 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001c39 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10001c3b mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10001c3e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10001c40 je 0x10001cab */ if (ZF_) goto L_10001cab;
  /* 10001c42 mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 10001c46 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10001c47 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 10001c4b call dword ptr [0x10008050] */ { const u32 m_ = (u32)(0x10008050u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10001c51u; SAVEALL; call_ind(c, t_); RETCHK(0x10001c51u, 0x10001c4bu); LOADALL; }
  /* 10001c51 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 10001c55 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10001c56 lea edx, [esp + 0x34] */ edx = (u32)((u32)(esp + 0x34u));
  /* 10001c5a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10001c5b lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 10001c5e mov dword ptr [esp + 0x30], 0 */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(0x0u); }
  /* 10001c66 call 0x10001910 */ esp -= 4; M32(esp) = 0x10001c6bu; SAVEALL; F_10001910(c); ABI_CHECK(0x10001910u, 0x10001c66u); RETCHK(0x10001c6bu, 0x10001c66u); LOADALL;
  /* 10001c6b lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 10001c6f mov dword ptr [esp + 0x28], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0xffffffffu); }
  /* 10001c77 call dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10001c7du; SAVEALL; call_ind(c, t_); RETCHK(0x10001c7du, 0x10001c77u); LOADALL; }
  /* 10001c7d mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 10001c81 cmp eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001c84 je 0x10001cab */ if (ZF_) goto L_10001cab;
  /* 10001c86 lea ecx, [esp + 0x30] */ ecx = (u32)((u32)(esp + 0x30u));
  /* 10001c8a lea esi, [eax + 0x28] */ esi = (u32)((u32)(eax + 0x28u));
  /* 10001c8d mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 10001c91 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10001c92 lea edx, [esp + 0x38] */ edx = (u32)((u32)(esp + 0x38u));
  /* 10001c96 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10001c97 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10001c99 mov dword ptr [esp + 0x38], eax */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(eax); }
  /* 10001c9d call 0x10001970 */ esp -= 4; M32(esp) = 0x10001ca2u; SAVEALL; F_10001970(c); ABI_CHECK(0x10001970u, 0x10001c9du); RETCHK(0x10001ca2u, 0x10001c9du); LOADALL;
  /* 10001ca2 mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 10001ca6 cmp eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001ca9 jne 0x10001cc2 */ if (!ZF_) goto L_10001cc2;
L_10001cab:;
  /* 10001cab mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
  /* 10001cb0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10001cb1 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10001cb5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10001cbc add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10001cbf ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10001cc2:;
  /* 10001cc2 cmp dword ptr [eax + 0x28], 0x10 */ { const u32 m_ = (u32)(eax + 0x28u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001cc6 jb 0x10001cdd */ if (CF_) goto L_10001cdd;
  /* 10001cc8 mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 10001ccb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10001ccc mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10001cd0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10001cd7 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10001cda ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10001cdd:;
  /* 10001cdd mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 10001ce1 add eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10001ce4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10001ce5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10001cec add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10001cef ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10001d00:;
  /* 10001d00 mov ecx, 0x1000a130 */ { ecx = (u32)(0x1000a130u); }
  /* 10001d05 jmp 0x10001c20 */ goto L_10001c20;
}

void F_10001d10(CPU *c) {
  NATIVE_HOOK(0x10001d10u) REGS; LOADALL;
L_10001d10:;
  /* 10001d10 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10001d11 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10001d12 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 10001d16 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001d17 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10001d18 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10001d1a mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 10001d1d mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001d20 mov dl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001d23 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001d25 mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 10001d27 mov byte ptr [esp + 0xc], cl */ { const u32 m_ = (u32)(esp + 0xcu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10001d2b jne 0x10001d4d */ if (!ZF_) goto L_10001d4d;
  /* 10001d2d mov edx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); edx = (u32)(M32(m_)); }
L_10001d30:;
  /* 10001d30 cmp edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001d33 setb cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((CF_) ? 1u : 0u) & 0xffu); }
  /* 10001d36 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001d38 mov esi, eax */ { esi = (u32)(eax); }
  /* 10001d3a mov byte ptr [esp + 0xc], cl */ { const u32 m_ = (u32)(esp + 0xcu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10001d3e je 0x10001d44 */ if (ZF_) goto L_10001d44;
  /* 10001d40 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10001d42 jmp 0x10001d47 */ goto L_10001d47;
L_10001d44:;
  /* 10001d44 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
L_10001d47:;
  /* 10001d47 cmp byte ptr [eax + 0x2d], 0 */ { const u32 m_ = (u32)(eax + 0x2du); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10001d4b je 0x10001d30 */ if (ZF_) goto L_10001d30;
L_10001d4d:;
  /* 10001d4d test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001d4f mov edx, esi */ { edx = (u32)(esi); }
  /* 10001d51 mov dword ptr [esp + 0x18], edx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edx); }
  /* 10001d55 je 0x10001d8a */ if (ZF_) goto L_10001d8a;
  /* 10001d57 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001d5a cmp esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001d5c lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 10001d60 jne 0x10001d81 */ if (!ZF_) goto L_10001d81;
  /* 10001d62 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10001d63 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001d64 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10001d66 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10001d67 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10001d69 call 0x100019e0 */ esp -= 4; M32(esp) = 0x10001d6eu; SAVEALL; F_100019e0(c); ABI_CHECK(0x100019e0u, 0x10001d69u); RETCHK(0x10001d6eu, 0x10001d69u); LOADALL;
  /* 10001d6e mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10001d70 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10001d74 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10001d75 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10001d76 mov byte ptr [eax + 4], 1 */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)(0x1u); }
  /* 10001d7a mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 10001d7c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10001d7d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10001d7e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10001d81:;
  /* 10001d81 call 0x10001570 */ esp -= 4; M32(esp) = 0x10001d86u; SAVEALL; F_10001570(c); ABI_CHECK(0x10001570u, 0x10001d81u); RETCHK(0x10001d86u, 0x10001d81u); LOADALL;
  /* 10001d86 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
L_10001d8a:;
  /* 10001d8a mov eax, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10001d8d cmp eax, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001d90 jae 0x10001db8 */ if (!CF_) goto L_10001db8;
  /* 10001d92 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10001d96 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10001d97 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001d98 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10001d99 lea edx, [esp + 0x24] */ edx = (u32)((u32)(esp + 0x24u));
  /* 10001d9d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10001d9e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10001da0 call 0x100019e0 */ esp -= 4; M32(esp) = 0x10001da5u; SAVEALL; F_100019e0(c); ABI_CHECK(0x100019e0u, 0x10001da0u); RETCHK(0x10001da5u, 0x10001da0u); LOADALL;
  /* 10001da5 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10001da7 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10001dab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10001dac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10001dad mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10001daf mov byte ptr [eax + 4], 1 */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)(0x1u); }
  /* 10001db3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10001db4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10001db5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10001db8:;
  /* 10001db8 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10001dbc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10001dbd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10001dbe mov byte ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 10001dc2 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 10001dc4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10001dc5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10001dc6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10001dd0(CPU *c) {
  NATIVE_HOOK(0x10001dd0u) REGS; LOADALL;
L_10001dd0:;
  /* 10001dd0 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10001dd6 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10001dd8 push 0x100073d2 */ { u32 v_ = 0x100073d2u; esp -= 4; M32(esp) = v_; }
  /* 10001ddd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10001dde mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10001de2 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10001de9 sub esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10001dec push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10001ded mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 10001def mov cl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001df2 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001df4 je 0x10001e4f */ if (ZF_) goto L_10001e4f;
  /* 10001df6 push 0x1000815c */ { u32 v_ = 0x1000815cu; esp -= 4; M32(esp) = v_; }
  /* 10001dfb lea ecx, [esp + 0xc] */ ecx = (u32)((u32)(esp + 0xcu));
  /* 10001dff call dword ptr [0x10008050] */ { const u32 m_ = (u32)(0x10008050u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10001e05u; SAVEALL; call_ind(c, t_); RETCHK(0x10001e05u, 0x10001dffu); LOADALL; }
  /* 10001e05 lea ecx, [esp + 0x24] */ ecx = (u32)((u32)(esp + 0x24u));
  /* 10001e09 mov dword ptr [esp + 0x54], 0 */ { const u32 m_ = (u32)(esp + 0x54u); M32(m_) = (u32)(0x0u); }
  /* 10001e11 call dword ptr [0x100080bc] */ { const u32 m_ = (u32)(0x100080bcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10001e17u; SAVEALL; call_ind(c, t_); RETCHK(0x10001e17u, 0x10001e11u); LOADALL; }
  /* 10001e17 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 10001e1b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10001e1c lea ecx, [esp + 0x34] */ ecx = (u32)((u32)(esp + 0x34u));
  /* 10001e20 mov byte ptr [esp + 0x58], 1 */ { const u32 m_ = (u32)(esp + 0x58u); M8(m_) = (u8)(0x1u); }
  /* 10001e25 mov dword ptr [esp + 0x28], 0x10008114 */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0x10008114u); }
  /* 10001e2d call dword ptr [0x1000803c] */ { const u32 m_ = (u32)(0x1000803cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10001e33u; SAVEALL; call_ind(c, t_); RETCHK(0x10001e33u, 0x10001e2du); LOADALL; }
  /* 10001e33 push 0x10008c20 */ { u32 v_ = 0x10008c20u; esp -= 4; M32(esp) = v_; }
  /* 10001e38 lea ecx, [esp + 0x28] */ ecx = (u32)((u32)(esp + 0x28u));
  /* 10001e3c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10001e3d mov byte ptr [esp + 0x5c], 0 */ { const u32 m_ = (u32)(esp + 0x5cu); M8(m_) = (u8)(0x0u); }
  /* 10001e42 mov dword ptr [esp + 0x2c], 0x10008124 */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(0x10008124u); }
  /* 10001e4a call 0x10006e40 */ { SAVEALL; rt_throw(c, 0x100080c4u); }
L_10001e4f:;
  /* 10001e4f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10001e50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001e51 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10001e53 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10001e54 lea ecx, [esp + 0x6c] */ ecx = (u32)((u32)(esp + 0x6cu));
  /* 10001e58 mov dword ptr [esp + 0x10], ebx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 10001e5c call 0x100015d0 */ esp -= 4; M32(esp) = 0x10001e61u; SAVEALL; F_100015d0(c); ABI_CHECK(0x100015d0u, 0x10001e5cu); RETCHK(0x10001e61u, 0x10001e5cu); LOADALL;
  /* 10001e61 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10001e63 mov cl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001e66 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001e68 je 0x10001e6f */ if (ZF_) goto L_10001e6f;
  /* 10001e6a mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 10001e6d jmp 0x10001e88 */ goto L_10001e88;
L_10001e6f:;
  /* 10001e6f mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10001e72 mov cl, byte ptr [edx + 0x2d] */ { const u32 m_ = (u32)(edx + 0x2du); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001e75 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001e77 je 0x10001e7d */ if (ZF_) goto L_10001e7d;
  /* 10001e79 mov edi, eax */ { edi = (u32)(eax); }
  /* 10001e7b jmp 0x10001e88 */ goto L_10001e88;
L_10001e7d:;
  /* 10001e7d mov ecx, dword ptr [esp + 0x6c] */ { const u32 m_ = (u32)(esp + 0x6cu); ecx = (u32)(M32(m_)); }
  /* 10001e81 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001e83 mov edi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 10001e86 jne 0x10001ef6 */ if (!ZF_) goto L_10001ef6;
L_10001e88:;
  /* 10001e88 mov al, byte ptr [edi + 0x2d] */ { const u32 m_ = (u32)(edi + 0x2du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001e8b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001e8d mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 10001e90 jne 0x10001e95 */ if (!ZF_) goto L_10001e95;
  /* 10001e92 mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
L_10001e95:;
  /* 10001e95 mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001e98 cmp dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001e9b jne 0x10001ea2 */ if (!ZF_) goto L_10001ea2;
  /* 10001e9d mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 10001ea0 jmp 0x10001ead */ goto L_10001ead;
L_10001ea2:;
  /* 10001ea2 cmp dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001ea4 jne 0x10001eaa */ if (!ZF_) goto L_10001eaa;
  /* 10001ea6 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 10001ea8 jmp 0x10001ead */ goto L_10001ead;
L_10001eaa:;
  /* 10001eaa mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
L_10001ead:;
  /* 10001ead mov ebx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10001eb0 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10001eb2 cmp eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001eb6 jne 0x10001ece */ if (!ZF_) goto L_10001ece;
  /* 10001eb8 mov al, byte ptr [edi + 0x2d] */ { const u32 m_ = (u32)(edi + 0x2du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001ebb test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001ebd je 0x10001ec3 */ if (ZF_) goto L_10001ec3;
  /* 10001ebf mov eax, esi */ { eax = (u32)(esi); }
  /* 10001ec1 jmp 0x10001ecc */ goto L_10001ecc;
L_10001ec3:;
  /* 10001ec3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10001ec4 call 0x10001550 */ esp -= 4; M32(esp) = 0x10001ec9u; SAVEALL; F_10001550(c); ABI_CHECK(0x10001550u, 0x10001ec4u); RETCHK(0x10001ec9u, 0x10001ec4u); LOADALL;
  /* 10001ec9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10001ecc:;
  /* 10001ecc mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
L_10001ece:;
  /* 10001ece mov ebx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10001ed1 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10001ed5 cmp dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001ed8 jne 0x10001f4e */ if (!ZF_) goto L_10001f4e;
  /* 10001eda mov al, byte ptr [edi + 0x2d] */ { const u32 m_ = (u32)(edi + 0x2du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001edd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001edf je 0x10001ee8 */ if (ZF_) goto L_10001ee8;
  /* 10001ee1 mov eax, esi */ { eax = (u32)(esi); }
  /* 10001ee3 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 10001ee6 jmp 0x10001f4e */ goto L_10001f4e;
L_10001ee8:;
  /* 10001ee8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10001ee9 call 0x10001530 */ esp -= 4; M32(esp) = 0x10001eeeu; SAVEALL; F_10001530(c); ABI_CHECK(0x10001530u, 0x10001ee9u); RETCHK(0x10001eeeu, 0x10001ee9u); LOADALL;
  /* 10001eee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10001ef1 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 10001ef4 jmp 0x10001f4e */ goto L_10001f4e;
L_10001ef6:;
  /* 10001ef6 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10001ef9 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 10001efb mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 10001efd cmp ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001f00 jne 0x10001f06 */ if (!ZF_) goto L_10001f06;
  /* 10001f02 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10001f04 jmp 0x10001f21 */ goto L_10001f21;
L_10001f06:;
  /* 10001f06 mov al, byte ptr [edi + 0x2d] */ { const u32 m_ = (u32)(edi + 0x2du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001f09 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001f0b mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 10001f0e jne 0x10001f13 */ if (!ZF_) goto L_10001f13;
  /* 10001f10 mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
L_10001f13:;
  /* 10001f13 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 10001f15 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10001f18 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 10001f1b mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10001f1e mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
L_10001f21:;
  /* 10001f21 mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001f24 cmp dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001f27 jne 0x10001f2e */ if (!ZF_) goto L_10001f2e;
  /* 10001f29 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10001f2c jmp 0x10001f3c */ goto L_10001f3c;
L_10001f2e:;
  /* 10001f2e mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001f31 cmp dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001f33 jne 0x10001f39 */ if (!ZF_) goto L_10001f39;
  /* 10001f35 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10001f37 jmp 0x10001f3c */ goto L_10001f3c;
L_10001f39:;
  /* 10001f39 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_10001f3c:;
  /* 10001f3c mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001f3f mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10001f42 mov dl, byte ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001f45 mov al, byte ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001f48 mov byte ptr [ecx + 0x2c], dl */ { const u32 m_ = (u32)(ecx + 0x2cu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10001f4b mov byte ptr [ebx + 0x2c], al */ { const u32 m_ = (u32)(ebx + 0x2cu); M8(m_) = (u8)((eax & 0xffu)); }
L_10001f4e:;
  /* 10001f4e mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10001f52 mov cl, byte ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001f55 mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 10001f57 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10001f59 jne 0x10002061 */ if (!ZF_) goto L_10002061;
  /* 10001f5f mov ecx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10001f62 cmp edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001f65 je 0x1000205e */ if (ZF_) goto L_1000205e;
  /* 10001f6b jmp 0x10001f70 */ goto L_10001f70;
L_10001f70:;
  /* 10001f70 cmp byte ptr [edi + 0x2c], bl */ { const u32 m_ = (u32)(edi + 0x2cu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10001f73 jne 0x1000205e */ if (!ZF_) goto L_1000205e;
  /* 10001f79 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10001f7b cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001f7d jne 0x10001fe6 */ if (!ZF_) goto L_10001fe6;
  /* 10001f7f mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10001f82 mov cl, byte ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001f85 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001f87 jne 0x10001f9b */ if (!ZF_) goto L_10001f9b;
  /* 10001f89 mov byte ptr [eax + 0x2c], bl */ { const u32 m_ = (u32)(eax + 0x2cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10001f8c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001f8d mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10001f8f mov byte ptr [esi + 0x2c], 0 */ { const u32 m_ = (u32)(esi + 0x2cu); M8(m_) = (u8)(0x0u); }
  /* 10001f93 call 0x10001790 */ esp -= 4; M32(esp) = 0x10001f98u; SAVEALL; F_10001790(c); ABI_CHECK(0x10001790u, 0x10001f93u); RETCHK(0x10001f98u, 0x10001f93u); LOADALL;
  /* 10001f98 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
L_10001f9b:;
  /* 10001f9b mov cl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001f9e test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001fa0 jne 0x10002018 */ if (!ZF_) goto L_10002018;
  /* 10001fa2 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10001fa4 cmp byte ptr [edx + 0x2c], bl */ { const u32 m_ = (u32)(edx + 0x2cu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10001fa7 jne 0x10001fb1 */ if (!ZF_) goto L_10001fb1;
  /* 10001fa9 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10001fac cmp byte ptr [ecx + 0x2c], bl */ { const u32 m_ = (u32)(ecx + 0x2cu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10001faf je 0x10002014 */ if (ZF_) goto L_10002014;
L_10001fb1:;
  /* 10001fb1 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10001fb4 cmp byte ptr [ecx + 0x2c], bl */ { const u32 m_ = (u32)(ecx + 0x2cu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10001fb7 jne 0x10001fcd */ if (!ZF_) goto L_10001fcd;
  /* 10001fb9 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10001fbb mov byte ptr [edx + 0x2c], bl */ { const u32 m_ = (u32)(edx + 0x2cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10001fbe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10001fbf mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10001fc1 mov byte ptr [eax + 0x2c], 0 */ { const u32 m_ = (u32)(eax + 0x2cu); M8(m_) = (u8)(0x0u); }
  /* 10001fc5 call 0x100013d0 */ esp -= 4; M32(esp) = 0x10001fcau; SAVEALL; F_100013d0(c); ABI_CHECK(0x100013d0u, 0x10001fc5u); RETCHK(0x10001fcau, 0x10001fc5u); LOADALL;
  /* 10001fca mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
L_10001fcd:;
  /* 10001fcd mov cl, byte ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001fd0 mov byte ptr [eax + 0x2c], cl */ { const u32 m_ = (u32)(eax + 0x2cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10001fd3 mov byte ptr [esi + 0x2c], bl */ { const u32 m_ = (u32)(esi + 0x2cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10001fd6 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 10001fd9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001fda mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10001fdc mov byte ptr [edx + 0x2c], bl */ { const u32 m_ = (u32)(edx + 0x2cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10001fdf call 0x10001790 */ esp -= 4; M32(esp) = 0x10001fe4u; SAVEALL; F_10001790(c); ABI_CHECK(0x10001790u, 0x10001fdfu); RETCHK(0x10001fe4u, 0x10001fdfu); LOADALL;
  /* 10001fe4 jmp 0x1000205e */ goto L_1000205e;
L_10001fe6:;
  /* 10001fe6 mov cl, byte ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001fe9 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001feb jne 0x10001ffe */ if (!ZF_) goto L_10001ffe;
  /* 10001fed mov byte ptr [eax + 0x2c], bl */ { const u32 m_ = (u32)(eax + 0x2cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10001ff0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001ff1 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10001ff3 mov byte ptr [esi + 0x2c], 0 */ { const u32 m_ = (u32)(esi + 0x2cu); M8(m_) = (u8)(0x0u); }
  /* 10001ff7 call 0x100013d0 */ esp -= 4; M32(esp) = 0x10001ffcu; SAVEALL; F_100013d0(c); ABI_CHECK(0x100013d0u, 0x10001ff7u); RETCHK(0x10001ffcu, 0x10001ff7u); LOADALL;
  /* 10001ffc mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
L_10001ffe:;
  /* 10001ffe mov cl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002001 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002003 jne 0x10002018 */ if (!ZF_) goto L_10002018;
  /* 10002005 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 10002008 cmp byte ptr [edx + 0x2c], bl */ { const u32 m_ = (u32)(edx + 0x2cu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000200b jne 0x1000202d */ if (!ZF_) goto L_1000202d;
  /* 1000200d mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1000200f cmp byte ptr [ecx + 0x2c], bl */ { const u32 m_ = (u32)(ecx + 0x2cu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10002012 jne 0x1000202d */ if (!ZF_) goto L_1000202d;
L_10002014:;
  /* 10002014 mov byte ptr [eax + 0x2c], 0 */ { const u32 m_ = (u32)(eax + 0x2cu); M8(m_) = (u8)(0x0u); }
L_10002018:;
  /* 10002018 mov edx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); edx = (u32)(M32(m_)); }
  /* 1000201b mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 1000201e mov edi, esi */ { edi = (u32)(esi); }
  /* 10002020 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002022 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 10002025 jne 0x10001f70 */ if (!ZF_) goto L_10001f70;
  /* 1000202b jmp 0x1000205e */ goto L_1000205e;
L_1000202d:;
  /* 1000202d mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1000202f cmp byte ptr [ecx + 0x2c], bl */ { const u32 m_ = (u32)(ecx + 0x2cu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10002032 jne 0x10002048 */ if (!ZF_) goto L_10002048;
  /* 10002034 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 10002037 mov byte ptr [edx + 0x2c], bl */ { const u32 m_ = (u32)(edx + 0x2cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 1000203a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000203b mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 1000203d mov byte ptr [eax + 0x2c], 0 */ { const u32 m_ = (u32)(eax + 0x2cu); M8(m_) = (u8)(0x0u); }
  /* 10002041 call 0x10001790 */ esp -= 4; M32(esp) = 0x10002046u; SAVEALL; F_10001790(c); ABI_CHECK(0x10001790u, 0x10002041u); RETCHK(0x10002046u, 0x10002041u); LOADALL;
  /* 10002046 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
L_10002048:;
  /* 10002048 mov cl, byte ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000204b mov byte ptr [eax + 0x2c], cl */ { const u32 m_ = (u32)(eax + 0x2cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 1000204e mov byte ptr [esi + 0x2c], bl */ { const u32 m_ = (u32)(esi + 0x2cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10002051 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10002053 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002054 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10002056 mov byte ptr [edx + 0x2c], bl */ { const u32 m_ = (u32)(edx + 0x2cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10002059 call 0x100013d0 */ esp -= 4; M32(esp) = 0x1000205eu; SAVEALL; F_100013d0(c); ABI_CHECK(0x100013d0u, 0x10002059u); RETCHK(0x1000205eu, 0x10002059u); LOADALL;
L_1000205e:;
  /* 1000205e mov byte ptr [edi + 0x2c], bl */ { const u32 m_ = (u32)(edi + 0x2cu); M8(m_) = (u8)((ebx & 0xffu)); }
L_10002061:;
  /* 10002061 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10002065 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10002068 call dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1000206eu; SAVEALL; call_ind(c, t_); RETCHK(0x1000206eu, 0x10002068u); LOADALL; }
  /* 1000206e mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10002072 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002073 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10002078u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10002073u); RETCHK(0x10002078u, 0x10002073u); LOADALL;
  /* 10002078 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1000207b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000207e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10002080 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002081 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002082 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10002083 jbe 0x10002089 */ if ((CF_|ZF_)) goto L_10002089;
  /* 10002085 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10002086 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
L_10002089:;
  /* 10002089 mov ecx, dword ptr [esp + 0x60] */ { const u32 m_ = (u32)(esp + 0x60u); ecx = (u32)(M32(m_)); }
  /* 1000208d mov eax, dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); eax = (u32)(M32(m_)); }
  /* 10002091 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10002093 mov ecx, dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 10002097 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10002098 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 1000209f add esp, 0x54 */ { u32 a_ = esp, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100020a2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_100020b0(CPU *c) {
  NATIVE_HOOK(0x100020b0u) REGS; LOADALL;
L_100020b0:;
  /* 100020b0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 100020b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100020b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100020b6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 100020b8 call 0x10001ba0 */ esp -= 4; M32(esp) = 0x100020bdu; SAVEALL; F_10001ba0(c); ABI_CHECK(0x10001ba0u, 0x100020b8u); RETCHK(0x100020bdu, 0x100020b8u); LOADALL;
  /* 100020bd mov dword ptr [esi], 0x10008124 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x10008124u); }
  /* 100020c3 mov eax, esi */ { eax = (u32)(esi); }
  /* 100020c5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100020c6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_100020d0(CPU *c) {
  NATIVE_HOOK(0x100020d0u) REGS; LOADALL;
L_100020d0:;
  /* 100020d0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100020d1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100020d2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100020d3 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 100020d7 mov al, byte ptr [edi + 0x2d] */ { const u32 m_ = (u32)(edi + 0x2du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100020da test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100020dc mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 100020de mov esi, edi */ { esi = (u32)(edi); }
  /* 100020e0 jne 0x10002108 */ if (!ZF_) goto L_10002108;
L_100020e2:;
  /* 100020e2 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 100020e5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100020e6 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 100020e8 call 0x100020d0 */ esp -= 4; M32(esp) = 0x100020edu; SAVEALL; F_100020d0(c); ABI_CHECK(0x100020d0u, 0x100020e8u); RETCHK(0x100020edu, 0x100020e8u); LOADALL;
  /* 100020ed mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 100020ef mov ecx, edi */ { ecx = (u32)(edi); }
  /* 100020f1 call 0x10001630 */ esp -= 4; M32(esp) = 0x100020f6u; SAVEALL; F_10001630(c); ABI_CHECK(0x10001630u, 0x100020f1u); RETCHK(0x100020f6u, 0x100020f1u); LOADALL;
  /* 100020f6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100020f7 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100020fcu; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100020f7u); RETCHK(0x100020fcu, 0x100020f7u); LOADALL;
  /* 100020fc mov al, byte ptr [esi + 0x2d] */ { const u32 m_ = (u32)(esi + 0x2du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100020ff add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002102 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002104 mov edi, esi */ { edi = (u32)(esi); }
  /* 10002106 je 0x100020e2 */ if (ZF_) goto L_100020e2;
L_10002108:;
  /* 10002108 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002109 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000210a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1000210b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10002110(CPU *c) {
  NATIVE_HOOK(0x10002110u) REGS; LOADALL;
L_10002110:;
  /* 10002110 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002113 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002114 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002115 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10002117 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 1000211a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000211c jne 0x1000213f */ if (!ZF_) goto L_1000213f;
  /* 1000211e mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10002122 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10002125 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 10002129 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000212a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1000212b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1000212d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000212e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10002130 call 0x100019e0 */ esp -= 4; M32(esp) = 0x10002135u; SAVEALL; F_100019e0(c); ABI_CHECK(0x100019e0u, 0x10002130u); RETCHK(0x10002135u, 0x10002130u); LOADALL;
  /* 10002135 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002136 mov eax, esi */ { eax = (u32)(esi); }
  /* 10002138 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002139 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000213c ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_1000213f:;
  /* 1000213f mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002142 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10002144 mov esi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 10002148 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10002149 mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 1000214d cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000214f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10002150 jne 0x10002179 */ if (!ZF_) goto L_10002179;
  /* 10002152 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 10002154 cmp edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002157 jae 0x1000225a */ if (!CF_) goto L_1000225a;
  /* 1000215d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000215e mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 10002162 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10002163 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10002165 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002166 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10002168 call 0x100019e0 */ esp -= 4; M32(esp) = 0x1000216du; SAVEALL; F_100019e0(c); ABI_CHECK(0x100019e0u, 0x10002168u); RETCHK(0x1000216du, 0x10002168u); LOADALL;
  /* 1000216d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000216e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1000216f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002170 mov eax, esi */ { eax = (u32)(esi); }
  /* 10002172 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002173 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002176 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10002179:;
  /* 10002179 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000217b jne 0x100021a7 */ if (!ZF_) goto L_100021a7;
  /* 1000217d mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 10002180 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10002183 cmp ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002185 jae 0x1000225a */ if (!CF_) goto L_1000225a;
  /* 1000218b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000218c mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 10002190 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002191 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10002193 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002194 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10002196 call 0x100019e0 */ esp -= 4; M32(esp) = 0x1000219bu; SAVEALL; F_100019e0(c); ABI_CHECK(0x100019e0u, 0x10002196u); RETCHK(0x1000219bu, 0x10002196u); LOADALL;
  /* 1000219b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000219c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1000219d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000219e mov eax, esi */ { eax = (u32)(esi); }
  /* 100021a0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100021a1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100021a4 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_100021a7:;
  /* 100021a7 mov ebp, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebp = (u32)(M32(m_)); }
  /* 100021a9 cmp dword ptr [ebx + 0xc], ebp */ { const u32 m_ = (u32)(ebx + 0xcu); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100021ac jbe 0x10002202 */ if ((CF_|ZF_)) goto L_10002202;
  /* 100021ae lea ecx, [esp + 0x24] */ ecx = (u32)((u32)(esp + 0x24u));
  /* 100021b2 mov dword ptr [esp + 0x24], ebx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ebx); }
  /* 100021b6 call 0x10001570 */ esp -= 4; M32(esp) = 0x100021bbu; SAVEALL; F_10001570(c); ABI_CHECK(0x10001570u, 0x100021b6u); RETCHK(0x100021bbu, 0x100021b6u); LOADALL;
  /* 100021bb mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 100021bf cmp dword ptr [eax + 0xc], ebp */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100021c2 jae 0x100021ff */ if (!CF_) goto L_100021ff;
  /* 100021c4 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 100021c7 mov cl, byte ptr [edx + 0x2d] */ { const u32 m_ = (u32)(edx + 0x2du); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100021ca push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100021cb mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 100021cf test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100021d1 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 100021d3 je 0x100021ea */ if (ZF_) goto L_100021ea;
  /* 100021d5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100021d6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100021d8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100021d9 call 0x100019e0 */ esp -= 4; M32(esp) = 0x100021deu; SAVEALL; F_100019e0(c); ABI_CHECK(0x100019e0u, 0x100021d9u); RETCHK(0x100021deu, 0x100021d9u); LOADALL;
  /* 100021de pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100021df pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100021e0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100021e1 mov eax, esi */ { eax = (u32)(esi); }
  /* 100021e3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100021e4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100021e7 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_100021ea:;
  /* 100021ea push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100021eb push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 100021ed push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100021ee call 0x100019e0 */ esp -= 4; M32(esp) = 0x100021f3u; SAVEALL; F_100019e0(c); ABI_CHECK(0x100019e0u, 0x100021eeu); RETCHK(0x100021f3u, 0x100021eeu); LOADALL;
  /* 100021f3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100021f4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100021f5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100021f6 mov eax, esi */ { eax = (u32)(esi); }
  /* 100021f8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100021f9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100021fc ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_100021ff:;
  /* 100021ff cmp dword ptr [ebx + 0xc], ebp */ { const u32 m_ = (u32)(ebx + 0xcu); u32 a_ = M32(m_), b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
L_10002202:;
  /* 10002202 jae 0x1000225a */ if (!CF_) goto L_1000225a;
  /* 10002204 lea ecx, [esp + 0x24] */ ecx = (u32)((u32)(esp + 0x24u));
  /* 10002208 mov dword ptr [esp + 0x24], ebx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ebx); }
  /* 1000220c call 0x100015d0 */ esp -= 4; M32(esp) = 0x10002211u; SAVEALL; F_100015d0(c); ABI_CHECK(0x100015d0u, 0x1000220cu); RETCHK(0x10002211u, 0x1000220cu); LOADALL;
  /* 10002211 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 10002215 cmp eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002218 je 0x1000221f */ if (ZF_) goto L_1000221f;
  /* 1000221a cmp ebp, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = ebp, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000221d jae 0x1000225a */ if (!CF_) goto L_1000225a;
L_1000221f:;
  /* 1000221f mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10002222 mov dl, byte ptr [ecx + 0x2d] */ { const u32 m_ = (u32)(ecx + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002225 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002227 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002228 mov esi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); esi = (u32)(M32(m_)); }
  /* 1000222c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 1000222e je 0x10002245 */ if (ZF_) goto L_10002245;
  /* 10002230 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10002231 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10002233 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002234 call 0x100019e0 */ esp -= 4; M32(esp) = 0x10002239u; SAVEALL; F_100019e0(c); ABI_CHECK(0x100019e0u, 0x10002234u); RETCHK(0x10002239u, 0x10002234u); LOADALL;
  /* 10002239 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000223a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1000223b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000223c mov eax, esi */ { eax = (u32)(esi); }
  /* 1000223e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000223f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002242 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10002245:;
  /* 10002245 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002246 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10002248 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002249 call 0x100019e0 */ esp -= 4; M32(esp) = 0x1000224eu; SAVEALL; F_100019e0(c); ABI_CHECK(0x100019e0u, 0x10002249u); RETCHK(0x1000224eu, 0x10002249u); LOADALL;
  /* 1000224e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000224f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10002250 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002251 mov eax, esi */ { eax = (u32)(esi); }
  /* 10002253 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002254 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002257 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_1000225a:;
  /* 1000225a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000225b lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 1000225f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10002260 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10002262 call 0x10001d10 */ esp -= 4; M32(esp) = 0x10002267u; SAVEALL; F_10001d10(c); ABI_CHECK(0x10001d10u, 0x10002262u); RETCHK(0x10002267u, 0x10002262u); LOADALL;
  /* 10002267 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10002269 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 1000226d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000226e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1000226f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002270 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10002272 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002273 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002276 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10002280(CPU *c) {
  NATIVE_HOOK(0x10002280u) REGS; LOADALL;
L_10002280:;
  /* 10002280 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10002281 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10002283 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10002285 push 0x10007320 */ { u32 v_ = 0x10007320u; esp -= 4; M32(esp) = v_; }
  /* 1000228a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10002290 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002291 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10002298 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000229b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1000229c mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 1000229f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100022a0 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 100022a2 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 100022a5 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 100022a8 mov al, byte ptr [ebx + 0x2d] */ { const u32 m_ = (u32)(ebx + 0x2du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100022ab test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100022ad push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100022ae mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 100022b1 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 100022b4 jne 0x10002302 */ if (!ZF_) goto L_10002302;
  /* 100022b6 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 100022b9 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 100022bb mov cl, byte ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100022be lea edx, [ebx + 0xc] */ edx = (u32)((u32)(ebx + 0xcu));
  /* 100022c1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100022c2 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 100022c5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 100022c6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100022c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100022c8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100022c9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 100022cb call 0x10001830 */ esp -= 4; M32(esp) = 0x100022d0u; SAVEALL; F_10001830(c); ABI_CHECK(0x10001830u, 0x100022cbu); RETCHK(0x100022d0u, 0x100022cbu); LOADALL;
  /* 100022d0 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 100022d3 mov edi, eax */ { edi = (u32)(eax); }
  /* 100022d5 mov al, byte ptr [edx + 0x2d] */ { const u32 m_ = (u32)(edx + 0x2du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100022d8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100022da je 0x100022df */ if (ZF_) goto L_100022df;
  /* 100022dc mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
L_100022df:;
  /* 100022df mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 100022e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100022e2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100022e3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 100022e5 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 100022ec call 0x10002280 */ esp -= 4; M32(esp) = 0x100022f1u; SAVEALL; F_10002280(c); ABI_CHECK(0x10002280u, 0x100022ecu); RETCHK(0x100022f1u, 0x100022ecu); LOADALL;
  /* 100022f1 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 100022f3 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 100022f6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100022f7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100022f8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 100022fa call 0x10002280 */ esp -= 4; M32(esp) = 0x100022ffu; SAVEALL; F_10002280(c); ABI_CHECK(0x10002280u, 0x100022fau); RETCHK(0x100022ffu, 0x100022fau); LOADALL;
  /* 100022ff mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
L_10002302:;
  /* 10002302 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 10002305 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10002308 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002309 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000230a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10002311 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10002312 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10002314 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10002315 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10002318(CPU *c) {
  NATIVE_HOOK(0x10002318u) REGS; LOADALL;
L_10002318:;
  /* 10002318 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 1000231b mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 1000231e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1000231f call 0x100020d0 */ esp -= 4; M32(esp) = 0x10002324u; SAVEALL; F_100020d0(c); ABI_CHECK(0x100020d0u, 0x1000231fu); RETCHK(0x10002324u, 0x1000231fu); LOADALL;
  /* 10002324 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10002326 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10002328 call 0x10006e40 */ { SAVEALL; rt_throw(c, 0x100080c4u); }
  /* 1000232d int3 */ TRAP(0x1000232du, "int3");
}

void F_10002330(CPU *c) {
  NATIVE_HOOK(0x10002330u) REGS; LOADALL;
L_10002330:;
  /* 10002330 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10002336 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10002338 push 0x10007341 */ { u32 v_ = 0x10007341u; esp -= 4; M32(esp) = v_; }
  /* 1000233d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000233e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10002345 sub esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002348 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10002349 mov ebp, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); ebp = (u32)(M32(m_)); }
  /* 1000234d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000234e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000234f mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10002351 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10002354 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002357 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10002359 mov cl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000235c test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000235e jne 0x10002378 */ if (!ZF_) goto L_10002378;
  /* 10002360 mov ecx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M32(m_)); }
L_10002363:;
  /* 10002363 cmp dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002366 jae 0x1000236d */ if (!CF_) goto L_1000236d;
  /* 10002368 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 1000236b jmp 0x10002371 */ goto L_10002371;
L_1000236d:;
  /* 1000236d mov esi, eax */ { esi = (u32)(eax); }
  /* 1000236f mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
L_10002371:;
  /* 10002371 mov dl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002374 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002376 je 0x10002363 */ if (ZF_) goto L_10002363;
L_10002378:;
  /* 10002378 cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000237b je 0x10002385 */ if (ZF_) goto L_10002385;
  /* 1000237d mov eax, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M32(m_)); }
  /* 10002380 cmp eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002383 jae 0x100023e3 */ if (!CF_) goto L_100023e3;
L_10002385:;
  /* 10002385 lea ecx, [esp + 0xc] */ ecx = (u32)((u32)(esp + 0xcu));
  /* 10002389 call dword ptr [0x10008044] */ { const u32 m_ = (u32)(0x10008044u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1000238fu; SAVEALL; call_ind(c, t_); RETCHK(0x1000238fu, 0x10002389u); LOADALL; }
  /* 1000238f mov ecx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M32(m_)); }
  /* 10002392 mov dword ptr [esp + 0x28], ecx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ecx); }
  /* 10002396 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002397 lea ecx, [esp + 0x30] */ ecx = (u32)((u32)(esp + 0x30u));
  /* 1000239b mov dword ptr [esp + 0x54], 0 */ { const u32 m_ = (u32)(esp + 0x54u); M32(m_) = (u32)(0x0u); }
  /* 100023a3 call dword ptr [0x1000803c] */ { const u32 m_ = (u32)(0x1000803cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100023a9u; SAVEALL; call_ind(c, t_); RETCHK(0x100023a9u, 0x100023a3u); LOADALL; }
  /* 100023a9 lea edx, [esp + 0x28] */ edx = (u32)((u32)(esp + 0x28u));
  /* 100023ad push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 100023ae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100023af lea eax, [esp + 0x60] */ eax = (u32)((u32)(esp + 0x60u));
  /* 100023b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100023b4 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 100023b6 mov byte ptr [esp + 0x5c], 1 */ { const u32 m_ = (u32)(esp + 0x5cu); M8(m_) = (u8)(0x1u); }
  /* 100023bb call 0x10002110 */ esp -= 4; M32(esp) = 0x100023c0u; SAVEALL; F_10002110(c); ABI_CHECK(0x10002110u, 0x100023bbu); RETCHK(0x100023c0u, 0x100023bbu); LOADALL;
  /* 100023c0 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 100023c2 lea ecx, [esp + 0x2c] */ ecx = (u32)((u32)(esp + 0x2cu));
  /* 100023c6 mov byte ptr [esp + 0x50], 0 */ { const u32 m_ = (u32)(esp + 0x50u); M8(m_) = (u8)(0x0u); }
  /* 100023cb call dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100023d1u; SAVEALL; call_ind(c, t_); RETCHK(0x100023d1u, 0x100023cbu); LOADALL; }
  /* 100023d1 lea ecx, [esp + 0xc] */ ecx = (u32)((u32)(esp + 0xcu));
  /* 100023d5 mov dword ptr [esp + 0x50], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(0xffffffffu); }
  /* 100023dd call dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100023e3u; SAVEALL; call_ind(c, t_); RETCHK(0x100023e3u, 0x100023ddu); LOADALL; }
L_100023e3:;
  /* 100023e3 mov ecx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); ecx = (u32)(M32(m_)); }
  /* 100023e7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100023e8 lea eax, [esi + 0x10] */ eax = (u32)((u32)(esi + 0x10u));
  /* 100023eb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100023ec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100023ed mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 100023f4 add esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100023f7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10002400(CPU *c) {
  NATIVE_HOOK(0x10002400u) REGS; LOADALL;
L_10002400:;
  /* 10002400 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10002401 mov ebx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 10002405 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002406 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 1000240a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000240b mov edi, ecx */ { edi = (u32)(ecx); }
  /* 1000240d mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002410 cmp esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002412 jne 0x1000244c */ if (!ZF_) goto L_1000244c;
  /* 10002414 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002416 jne 0x1000244c */ if (!ZF_) goto L_1000244c;
  /* 10002418 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 1000241b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000241c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 1000241e call 0x100020d0 */ esp -= 4; M32(esp) = 0x10002423u; SAVEALL; F_100020d0(c); ABI_CHECK(0x100020d0u, 0x1000241eu); RETCHK(0x10002423u, 0x1000241eu); LOADALL;
  /* 10002423 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002426 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 10002429 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 1000242c mov dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 10002433 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 10002435 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002438 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 1000243b mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1000243e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10002440 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10002444 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002445 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002446 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 10002448 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10002449 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_1000244c:;
  /* 1000244c cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000244e je 0x100024ab */ if (ZF_) goto L_100024ab;
L_10002450:;
  /* 10002450 mov al, byte ptr [esi + 0x2d] */ { const u32 m_ = (u32)(esi + 0x2du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002453 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002455 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10002457 jne 0x1000249a */ if (!ZF_) goto L_1000249a;
  /* 10002459 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 1000245c mov dl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000245f test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002461 jne 0x1000247d */ if (!ZF_) goto L_1000247d;
  /* 10002463 mov esi, eax */ { esi = (u32)(eax); }
  /* 10002465 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10002467 mov dl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000246a test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000246c jne 0x1000249a */ if (!ZF_) goto L_1000249a;
  /* 1000246e mov edi, edi */ { edi = (u32)(edi); }
L_10002470:;
  /* 10002470 mov esi, eax */ { esi = (u32)(eax); }
  /* 10002472 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10002474 mov dl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002477 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002479 je 0x10002470 */ if (ZF_) goto L_10002470;
  /* 1000247b jmp 0x1000249a */ goto L_1000249a;
L_1000247d:;
  /* 1000247d mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002480 mov dl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002483 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002485 jne 0x10002498 */ if (!ZF_) goto L_10002498;
L_10002487:;
  /* 10002487 cmp esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000248a jne 0x10002498 */ if (!ZF_) goto L_10002498;
  /* 1000248c mov esi, eax */ { esi = (u32)(eax); }
  /* 1000248e mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002491 mov dl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002494 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002496 je 0x10002487 */ if (ZF_) goto L_10002487;
L_10002498:;
  /* 10002498 mov esi, eax */ { esi = (u32)(eax); }
L_1000249a:;
  /* 1000249a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1000249b lea eax, [esp + 0x18] */ eax = (u32)((u32)(esp + 0x18u));
  /* 1000249f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100024a0 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 100024a2 call 0x10001dd0 */ esp -= 4; M32(esp) = 0x100024a7u; SAVEALL; F_10001dd0(c); ABI_CHECK(0x10001dd0u, 0x100024a2u); RETCHK(0x100024a7u, 0x100024a2u); LOADALL;
  /* 100024a7 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100024a9 jne 0x10002450 */ if (!ZF_) goto L_10002450;
L_100024ab:;
  /* 100024ab mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 100024af pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100024b0 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 100024b2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100024b3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100024b4 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_100024c0(CPU *c) {
  NATIVE_HOOK(0x100024c0u) REGS; LOADALL;
L_100024c0:;
  /* 100024c0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100024c1 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 100024c5 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 100024c8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100024c9 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 100024cb mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 100024ce push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100024cf mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 100024d2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100024d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100024d4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 100024d6 call 0x10002280 */ esp -= 4; M32(esp) = 0x100024dbu; SAVEALL; F_10002280(c); ABI_CHECK(0x10002280u, 0x100024d6u); RETCHK(0x100024dbu, 0x100024d6u); LOADALL;
  /* 100024db mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 100024de mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 100024e1 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 100024e4 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 100024e7 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 100024ea mov cl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100024ed test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100024ef jne 0x10002535 */ if (!ZF_) goto L_10002535;
  /* 100024f1 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 100024f3 mov bl, byte ptr [ecx + 0x2d] */ { const u32 m_ = (u32)(ecx + 0x2du); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100024f6 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100024f8 jne 0x1000250b */ if (!ZF_) goto L_1000250b;
  /* 100024fa lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_10002500:;
  /* 10002500 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10002502 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10002504 mov bl, byte ptr [ecx + 0x2d] */ { const u32 m_ = (u32)(ecx + 0x2du); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002507 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002509 je 0x10002500 */ if (ZF_) goto L_10002500;
L_1000250b:;
  /* 1000250b mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 1000250d mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 10002510 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10002513 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10002516 mov dl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002519 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000251b jne 0x1000252c */ if (!ZF_) goto L_1000252c;
  /* 1000251d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_10002520:;
  /* 10002520 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10002522 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10002525 mov dl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002528 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000252a je 0x10002520 */ if (ZF_) goto L_10002520;
L_1000252c:;
  /* 1000252c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000252d mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10002530 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002531 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10002532 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10002535:;
  /* 10002535 mov dword ptr [edx], edx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(edx); }
  /* 10002537 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 1000253a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000253b mov dword ptr [esi + 8], esi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(esi); }
  /* 1000253e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000253f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10002540 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10002550(CPU *c) {
  NATIVE_HOOK(0x10002550u) REGS; LOADALL;
L_10002550:;
  /* 10002550 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10002554 push 0x10008194 */ { u32 v_ = 0x10008194u; esp -= 4; M32(esp) = v_; }
  /* 10002559 call 0x10003b70 */ esp -= 4; M32(esp) = 0x1000255eu; SAVEALL; F_10003b70(c); ABI_CHECK(0x10003b70u, 0x10002559u); RETCHK(0x1000255eu, 0x10002559u); LOADALL;
  /* 1000255e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10002560 jne 0x10002565 */ if (!ZF_) goto L_10002565;
  /* 10002562 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10002565:;
  /* 10002565 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002566 push 0x10008188 */ { u32 v_ = 0x10008188u; esp -= 4; M32(esp) = v_; }
  /* 1000256b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 1000256d call 0x10003b70 */ esp -= 4; M32(esp) = 0x10002572u; SAVEALL; F_10003b70(c); ABI_CHECK(0x10003b70u, 0x1000256du); RETCHK(0x10002572u, 0x1000256du); LOADALL;
  /* 10002572 mov esi, eax */ { esi = (u32)(eax); }
  /* 10002574 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10002576 jne 0x1000257c */ if (!ZF_) goto L_1000257c;
  /* 10002578 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002579 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1000257c:;
  /* 1000257c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000257d mov ebp, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ebp = (u32)(M32(m_)); }
  /* 10002580 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10002582 cmp ebp, 1 */ { u32 a_ = ebp, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002585 setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 10002588 push 0x1000817c */ { u32 v_ = 0x1000817cu; esp -= 4; M32(esp) = v_; }
  /* 1000258d dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1000258e and ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10002590 call 0x10004740 */ esp -= 4; M32(esp) = 0x10002595u; SAVEALL; F_10004740(c); ABI_CHECK(0x10004740u, 0x10002590u); RETCHK(0x10002595u, 0x10002590u); LOADALL;
  /* 10002595 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 10002597 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10002599 jne 0x100025a0 */ if (!ZF_) goto L_100025a0;
  /* 1000259b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000259c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000259d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_100025a0:;
  /* 100025a0 mov esi, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); esi = (u32)(M32(m_)); }
  /* 100025a3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100025a5 je 0x100025fd */ if (ZF_) goto L_100025fd;
  /* 100025a7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100025a8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_100025a9:;
  /* 100025a9 cmp dword ptr [esi + 0x14], 1 */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100025ad jne 0x100025f4 */ if (!ZF_) goto L_100025f4;
  /* 100025af push 0x10008178 */ { u32 v_ = 0x10008178u; esp -= 4; M32(esp) = v_; }
  /* 100025b4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 100025b6 call 0x10004740 */ esp -= 4; M32(esp) = 0x100025bbu; SAVEALL; F_10004740(c); ABI_CHECK(0x10004740u, 0x100025b6u); RETCHK(0x100025bbu, 0x100025b6u); LOADALL;
  /* 100025bb mov ebx, eax */ { ebx = (u32)(eax); }
  /* 100025bd test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100025bf je 0x100025f4 */ if (ZF_) goto L_100025f4;
  /* 100025c1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100025c2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 100025c4 call 0x10004740 */ esp -= 4; M32(esp) = 0x100025c9u; SAVEALL; F_10004740(c); ABI_CHECK(0x10004740u, 0x100025c4u); RETCHK(0x100025c9u, 0x100025c4u); LOADALL;
  /* 100025c9 mov edi, eax */ { edi = (u32)(eax); }
  /* 100025cb test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100025cd je 0x100025f4 */ if (ZF_) goto L_100025f4;
  /* 100025cf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100025d0 call dword ptr [0x100080b0] */ { const u32 m_ = (u32)(0x100080b0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100025d6u; SAVEALL; call_ind(c, t_); RETCHK(0x100025d6u, 0x100025d0u); LOADALL; }
  /* 100025d6 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 100025da add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100025dd mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 100025e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100025e2 lea eax, [esp + 0x1c] */ eax = (u32)((u32)(esp + 0x1cu));
  /* 100025e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100025e7 call 0x10002330 */ esp -= 4; M32(esp) = 0x100025ecu; SAVEALL; F_10002330(c); ABI_CHECK(0x10002330u, 0x100025e7u); RETCHK(0x100025ecu, 0x100025e7u); LOADALL;
  /* 100025ec mov ecx, eax */ { ecx = (u32)(eax); }
  /* 100025ee call dword ptr [0x10008040] */ { const u32 m_ = (u32)(0x10008040u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100025f4u; SAVEALL; call_ind(c, t_); RETCHK(0x100025f4u, 0x100025eeu); LOADALL; }
L_100025f4:;
  /* 100025f4 mov esi, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); esi = (u32)(M32(m_)); }
  /* 100025f7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100025f9 jne 0x100025a9 */ if (!ZF_) goto L_100025a9;
  /* 100025fb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100025fc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_100025fd:;
  /* 100025fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100025fe mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 10002603 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002604 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10002610(CPU *c) {
  NATIVE_HOOK(0x10002610u) REGS; LOADALL;
L_10002610:;
  /* 10002610 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10002611 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002612 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10002614 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002617 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10002619 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000261a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1000261b lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 1000261f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002620 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10002622 call 0x10002400 */ esp -= 4; M32(esp) = 0x10002627u; SAVEALL; F_10002400(c); ABI_CHECK(0x10002400u, 0x10002622u); RETCHK(0x10002627u, 0x10002622u); LOADALL;
  /* 10002627 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1000262a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1000262b call 0x10006e46 */ esp -= 4; M32(esp) = 0x10002630u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x1000262bu); RETCHK(0x10002630u, 0x1000262bu); LOADALL;
  /* 10002630 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002633 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10002635 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 10002638 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 1000263b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000263c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1000263d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10002640(CPU *c) {
  NATIVE_HOOK(0x10002640u) REGS; LOADALL;
L_10002640:;
  /* 10002640 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10002641 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10002643 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10002645 push 0x10007350 */ { u32 v_ = 0x10007350u; esp -= 4; M32(esp) = v_; }
  /* 1000264a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10002650 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002651 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10002658 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000265b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1000265c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000265d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000265e mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10002660 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 10002663 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 10002666 call 0x100018d0 */ esp -= 4; M32(esp) = 0x1000266bu; SAVEALL; F_100018d0(c); ABI_CHECK(0x100018d0u, 0x10002666u); RETCHK(0x1000266bu, 0x10002666u); LOADALL;
  /* 1000266b mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 1000266e mov byte ptr [eax + 0x2d], 1 */ { const u32 m_ = (u32)(eax + 0x2du); M8(m_) = (u8)(0x1u); }
  /* 10002672 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002675 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 10002678 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 1000267b mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 1000267d mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002680 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 10002683 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10002686 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002687 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10002689 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 10002690 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 10002697 call 0x100024c0 */ esp -= 4; M32(esp) = 0x1000269cu; SAVEALL; F_100024c0(c); ABI_CHECK(0x100024c0u, 0x10002697u); RETCHK(0x1000269cu, 0x10002697u); LOADALL;
  /* 1000269c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 1000269f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100026a0 mov eax, esi */ { eax = (u32)(esi); }
  /* 100026a2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100026a3 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 100026aa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100026ab mov esp, ebp */ { esp = (u32)(ebp); }
  /* 100026ad pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100026ae ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_100026b1(CPU *c) {
  NATIVE_HOOK(0x100026b1u) REGS; LOADALL;
L_100026b1:;
  /* 100026b1 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 100026b4 call 0x10002610 */ esp -= 4; M32(esp) = 0x100026b9u; SAVEALL; F_10002610(c); ABI_CHECK(0x10002610u, 0x100026b4u); RETCHK(0x100026b9u, 0x100026b4u); LOADALL;
  /* 100026b9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100026bb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100026bd call 0x10006e40 */ { SAVEALL; rt_throw(c, 0x100080c4u); }
  /* 100026c2 int3 */ TRAP(0x100026c2u, "int3");
}

void F_100026d0(CPU *c) {
  NATIVE_HOOK(0x100026d0u) REGS; LOADALL;
L_100026d0:;
  /* 100026d0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 100026d2 push 0x10007369 */ { u32 v_ = 0x10007369u; esp -= 4; M32(esp) = v_; }
  /* 100026d7 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 100026dd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100026de mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 100026e5 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100026e8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100026e9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100026ea mov edi, ecx */ { edi = (u32)(ecx); }
  /* 100026ec mov dword ptr [esp + 8], edi */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edi); }
  /* 100026f0 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 100026f3 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 100026f5 lea esi, [edi + 0x1c] */ esi = (u32)((u32)(edi + 0x1cu));
  /* 100026f8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100026f9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100026fa lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 100026fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100026ff mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10002701 mov dword ptr [esp + 0x24], 0 */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0x0u); }
  /* 10002709 call 0x10002400 */ esp -= 4; M32(esp) = 0x1000270eu; SAVEALL; F_10002400(c); ABI_CHECK(0x10002400u, 0x10002709u); RETCHK(0x1000270eu, 0x10002709u); LOADALL;
  /* 1000270e mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002711 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002712 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10002717u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10002712u); RETCHK(0x10002717u, 0x10002712u); LOADALL;
  /* 10002717 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000271a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 1000271c mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 10002723 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 1000272a mov dword ptr [esp + 0x18], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(0xffffffffu); }
  /* 10002732 call dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10002738u; SAVEALL; call_ind(c, t_); RETCHK(0x10002738u, 0x10002732u); LOADALL; }
  /* 10002738 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1000273c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000273d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000273e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10002745 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002748 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10002750(CPU *c) {
  NATIVE_HOOK(0x10002750u) REGS; LOADALL;
L_10002750:;
  /* 10002750 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10002752 push 0x10007389 */ { u32 v_ = 0x10007389u; esp -= 4; M32(esp) = v_; }
  /* 10002757 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1000275d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000275e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10002765 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10002766 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002767 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002768 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 1000276c mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1000276e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000276f mov dword ptr [esp + 0xc], esi */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(esi); }
  /* 10002773 call dword ptr [0x1000803c] */ { const u32 m_ = (u32)(0x1000803cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10002779u; SAVEALL; call_ind(c, t_); RETCHK(0x10002779u, 0x10002773u); LOADALL; }
  /* 10002779 add edi, 0x1c */ { u32 a_ = edi, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1000277c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000277d lea ecx, [esi + 0x1c] */ ecx = (u32)((u32)(esi + 0x1cu));
  /* 10002780 mov dword ptr [esp + 0x18], 0 */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(0x0u); }
  /* 10002788 call 0x10002640 */ esp -= 4; M32(esp) = 0x1000278du; SAVEALL; F_10002640(c); ABI_CHECK(0x10002640u, 0x10002788u); RETCHK(0x1000278du, 0x10002788u); LOADALL;
  /* 1000278d mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10002791 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002792 mov eax, esi */ { eax = (u32)(esi); }
  /* 10002794 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002795 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 1000279c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000279f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_100027b0(CPU *c) {
  NATIVE_HOOK(0x100027b0u) REGS; LOADALL;
L_100027b0:;
  /* 100027b0 add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 100027b3 jmp 0x100026d0 */ SAVEALL; F_100026d0(c); return;
}

void F_100027c0(CPU *c) {
  NATIVE_HOOK(0x100027c0u) REGS; LOADALL;
L_100027c0:;
  /* 100027c0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 100027c2 push 0x10007389 */ { u32 v_ = 0x10007389u; esp -= 4; M32(esp) = v_; }
  /* 100027c7 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 100027cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100027ce mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 100027d5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100027d6 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 100027da push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100027db mov esi, ecx */ { esi = (u32)(ecx); }
  /* 100027dd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100027de mov dword ptr [esp + 8], esi */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(esi); }
  /* 100027e2 call dword ptr [0x1000803c] */ { const u32 m_ = (u32)(0x1000803cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100027e8u; SAVEALL; call_ind(c, t_); RETCHK(0x100027e8u, 0x100027e2u); LOADALL; }
  /* 100027e8 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 100027ec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100027ed lea ecx, [esi + 0x1c] */ ecx = (u32)((u32)(esi + 0x1cu));
  /* 100027f0 mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 100027f8 call 0x10002640 */ esp -= 4; M32(esp) = 0x100027fdu; SAVEALL; F_10002640(c); ABI_CHECK(0x10002640u, 0x100027f8u); RETCHK(0x100027fdu, 0x100027f8u); LOADALL;
  /* 100027fd mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10002801 mov eax, esi */ { eax = (u32)(esi); }
  /* 10002803 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002804 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 1000280b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000280e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10002820(CPU *c) {
  NATIVE_HOOK(0x10002820u) REGS; LOADALL;
L_10002820:;
  /* 10002820 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10002821 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10002823 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10002825 push 0x100073b1 */ { u32 v_ = 0x100073b1u; esp -= 4; M32(esp) = v_; }
  /* 1000282a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10002830 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002831 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10002838 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000283b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1000283c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000283d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000283e mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 10002841 push 0x38 */ { u32 v_ = 0x38u; esp -= 4; M32(esp) = v_; }
  /* 10002843 call 0x10006e4c */ esp -= 4; M32(esp) = 0x10002848u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x10002843u); RETCHK(0x10002848u, 0x10002843u); LOADALL;
  /* 10002848 mov esi, eax */ { esi = (u32)(eax); }
  /* 1000284a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000284d mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 10002850 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 10002857 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 1000285a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000285c mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 10002860 je 0x10002889 */ if (ZF_) goto L_10002889;
  /* 10002862 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10002865 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10002868 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 1000286b mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 1000286d mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10002870 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10002873 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002874 lea ecx, [esi + 0xc] */ ecx = (u32)((u32)(esi + 0xcu));
  /* 10002877 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 1000287a call 0x10002750 */ esp -= 4; M32(esp) = 0x1000287fu; SAVEALL; F_10002750(c); ABI_CHECK(0x10002750u, 0x1000287au); RETCHK(0x1000287fu, 0x1000287au); LOADALL;
  /* 1000287f mov cl, byte ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002882 mov byte ptr [esi + 0x34], cl */ { const u32 m_ = (u32)(esi + 0x34u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10002885 mov byte ptr [esi + 0x35], 0 */ { const u32 m_ = (u32)(esi + 0x35u); M8(m_) = (u8)(0x0u); }
L_10002889:;
  /* 10002889 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 1000288c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000288d mov eax, esi */ { eax = (u32)(esi); }
  /* 1000288f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002890 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10002897 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10002898 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 1000289a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000289b ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_1000289e(CPU *c) {
  NATIVE_HOOK(0x1000289eu) REGS; LOADALL;
L_1000289e:;
  /* 1000289e mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 100028a1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 100028a2 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100028a7u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100028a2u); RETCHK(0x100028a7u, 0x100028a2u); LOADALL;
  /* 100028a7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100028aa push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100028ac push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100028ae call 0x10006e40 */ { SAVEALL; rt_throw(c, 0x100080c4u); }
  /* 100028b3 int3 */ TRAP(0x100028b3u, "int3");
}

void F_100028c0(CPU *c) {
  NATIVE_HOOK(0x100028c0u) REGS; LOADALL;
L_100028c0:;
  /* 100028c0 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 100028c6 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 100028c8 push 0x100073d2 */ { u32 v_ = 0x100073d2u; esp -= 4; M32(esp) = v_; }
  /* 100028cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100028ce mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 100028d5 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100028d8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100028d9 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 100028db cmp dword ptr [edi + 8], 0x6666665 */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M32(m_), b_ = 0x6666665u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100028e2 jb 0x1000293d */ if (CF_) goto L_1000293d;
  /* 100028e4 push 0x10008144 */ { u32 v_ = 0x10008144u; esp -= 4; M32(esp) = v_; }
  /* 100028e9 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 100028ed call dword ptr [0x10008050] */ { const u32 m_ = (u32)(0x10008050u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100028f3u; SAVEALL; call_ind(c, t_); RETCHK(0x100028f3u, 0x100028edu); LOADALL; }
  /* 100028f3 lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 100028f7 mov dword ptr [esp + 0x50], 0 */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(0x0u); }
  /* 100028ff call dword ptr [0x100080bc] */ { const u32 m_ = (u32)(0x100080bcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10002905u; SAVEALL; call_ind(c, t_); RETCHK(0x10002905u, 0x100028ffu); LOADALL; }
  /* 10002905 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10002909 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000290a lea ecx, [esp + 0x30] */ ecx = (u32)((u32)(esp + 0x30u));
  /* 1000290e mov byte ptr [esp + 0x54], 1 */ { const u32 m_ = (u32)(esp + 0x54u); M8(m_) = (u8)(0x1u); }
  /* 10002913 mov dword ptr [esp + 0x24], 0x10008114 */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0x10008114u); }
  /* 1000291b call dword ptr [0x1000803c] */ { const u32 m_ = (u32)(0x1000803cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10002921u; SAVEALL; call_ind(c, t_); RETCHK(0x10002921u, 0x1000291bu); LOADALL; }
  /* 10002921 push 0x10008bc0 */ { u32 v_ = 0x10008bc0u; esp -= 4; M32(esp) = v_; }
  /* 10002926 lea ecx, [esp + 0x24] */ ecx = (u32)((u32)(esp + 0x24u));
  /* 1000292a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1000292b mov byte ptr [esp + 0x58], 0 */ { const u32 m_ = (u32)(esp + 0x58u); M8(m_) = (u8)(0x0u); }
  /* 10002930 mov dword ptr [esp + 0x28], 0x1000811c */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0x1000811cu); }
  /* 10002938 call 0x10006e40 */ { SAVEALL; rt_throw(c, 0x100080c4u); }
L_1000293d:;
  /* 1000293d mov edx, dword ptr [esp + 0x64] */ { const u32 m_ = (u32)(esp + 0x64u); edx = (u32)(M32(m_)); }
  /* 10002941 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002944 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10002945 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002946 mov esi, dword ptr [esp + 0x68] */ { const u32 m_ = (u32)(esp + 0x68u); esi = (u32)(M32(m_)); }
  /* 1000294a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1000294c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1000294d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000294e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000294f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002950 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10002952 call 0x10002820 */ esp -= 4; M32(esp) = 0x10002957u; SAVEALL; F_10002820(c); ABI_CHECK(0x10002820u, 0x10002952u); RETCHK(0x10002957u, 0x10002952u); LOADALL;
  /* 10002957 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 1000295a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 1000295c mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 1000295f inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10002960 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002962 mov dword ptr [esp + 0x6c], ecx */ { const u32 m_ = (u32)(esp + 0x6cu); M32(m_) = (u32)(ecx); }
  /* 10002966 mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10002969 jne 0x1000297b */ if (!ZF_) goto L_1000297b;
  /* 1000296b mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 1000296e mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002971 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10002973 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10002976 mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10002979 jmp 0x1000299e */ goto L_1000299e;
L_1000297b:;
  /* 1000297b mov al, byte ptr [esp + 0x64] */ { const u32 m_ = (u32)(esp + 0x64u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000297f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002981 je 0x10002990 */ if (ZF_) goto L_10002990;
  /* 10002983 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 10002985 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002988 cmp esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000298a jne 0x1000299e */ if (!ZF_) goto L_1000299e;
  /* 1000298c mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 1000298e jmp 0x1000299e */ goto L_1000299e;
L_10002990:;
  /* 10002990 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10002993 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002996 cmp esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002999 jne 0x1000299e */ if (!ZF_) goto L_1000299e;
  /* 1000299b mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_1000299e:;
  /* 1000299e mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 100029a1 cmp byte ptr [edx + 0x34], 0 */ { const u32 m_ = (u32)(edx + 0x34u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100029a5 lea eax, [ecx + 4] */ eax = (u32)((u32)(ecx + 0x4u));
  /* 100029a8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 100029aa mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 100029ac jne 0x10002a57 */ if (!ZF_) goto L_10002a57;
  /* 100029b2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
L_100029b3:;
  /* 100029b3 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 100029b5 mov ebp, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebp = (u32)(M32(m_)); }
  /* 100029b8 mov edx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); edx = (u32)(M32(m_)); }
  /* 100029bb cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100029bd jne 0x10002a0f */ if (!ZF_) goto L_10002a0f;
  /* 100029bf mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 100029c2 cmp byte ptr [edx + 0x34], 0 */ { const u32 m_ = (u32)(edx + 0x34u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100029c6 jne 0x100029e0 */ if (!ZF_) goto L_100029e0;
L_100029c8:;
  /* 100029c8 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 100029ca mov byte ptr [ecx + 0x34], bl */ { const u32 m_ = (u32)(ecx + 0x34u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 100029cd mov byte ptr [edx + 0x34], bl */ { const u32 m_ = (u32)(edx + 0x34u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 100029d0 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 100029d2 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 100029d5 mov byte ptr [ecx + 0x34], 0 */ { const u32 m_ = (u32)(ecx + 0x34u); M8(m_) = (u8)(0x0u); }
  /* 100029d9 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 100029db mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 100029de jmp 0x10002a41 */ goto L_10002a41;
L_100029e0:;
  /* 100029e0 cmp esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100029e3 jne 0x100029ef */ if (!ZF_) goto L_100029ef;
  /* 100029e5 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 100029e7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100029e8 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 100029ea call 0x10001730 */ esp -= 4; M32(esp) = 0x100029efu; SAVEALL; F_10001730(c); ABI_CHECK(0x10001730u, 0x100029eau); RETCHK(0x100029efu, 0x100029eau); LOADALL;
L_100029ef:;
  /* 100029ef mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 100029f2 mov byte ptr [eax + 0x34], bl */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 100029f5 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 100029f8 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 100029fb mov byte ptr [edx + 0x34], 0 */ { const u32 m_ = (u32)(edx + 0x34u); M8(m_) = (u8)(0x0u); }
  /* 100029ff mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002a02 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10002a05 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10002a06 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10002a08 call 0x10001370 */ esp -= 4; M32(esp) = 0x10002a0du; SAVEALL; F_10001370(c); ABI_CHECK(0x10001370u, 0x10002a08u); RETCHK(0x10002a0du, 0x10002a08u); LOADALL;
  /* 10002a0d jmp 0x10002a41 */ goto L_10002a41;
L_10002a0f:;
  /* 10002a0f cmp byte ptr [edx + 0x34], 0 */ { const u32 m_ = (u32)(edx + 0x34u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10002a13 je 0x100029c8 */ if (ZF_) goto L_100029c8;
  /* 10002a15 cmp esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002a17 jne 0x10002a23 */ if (!ZF_) goto L_10002a23;
  /* 10002a19 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10002a1b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002a1c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10002a1e call 0x10001370 */ esp -= 4; M32(esp) = 0x10002a23u; SAVEALL; F_10001370(c); ABI_CHECK(0x10001370u, 0x10002a1eu); RETCHK(0x10002a23u, 0x10002a1eu); LOADALL;
L_10002a23:;
  /* 10002a23 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002a26 mov byte ptr [eax + 0x34], bl */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10002a29 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10002a2c mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10002a2f mov byte ptr [edx + 0x34], 0 */ { const u32 m_ = (u32)(edx + 0x34u); M8(m_) = (u8)(0x0u); }
  /* 10002a33 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002a36 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10002a39 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10002a3a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10002a3c call 0x10001730 */ esp -= 4; M32(esp) = 0x10002a41u; SAVEALL; F_10001730(c); ABI_CHECK(0x10001730u, 0x10002a3cu); RETCHK(0x10002a41u, 0x10002a3cu); LOADALL;
L_10002a41:;
  /* 10002a41 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10002a44 mov cl, byte ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002a47 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002a49 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 10002a4c je 0x100029b3 */ if (ZF_) goto L_100029b3;
  /* 10002a52 mov ecx, dword ptr [esp + 0x70] */ { const u32 m_ = (u32)(esp + 0x70u); ecx = (u32)(M32(m_)); }
  /* 10002a56 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_10002a57:;
  /* 10002a57 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002a5a mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 10002a5d mov eax, dword ptr [esp + 0x60] */ { const u32 m_ = (u32)(esp + 0x60u); eax = (u32)(M32(m_)); }
  /* 10002a61 mov byte ptr [edx + 0x34], bl */ { const u32 m_ = (u32)(edx + 0x34u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10002a64 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002a65 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10002a67 mov ecx, dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 10002a6b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10002a6c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002a6d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10002a74 add esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002a77 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_10002a80(CPU *c) {
  NATIVE_HOOK(0x10002a80u) REGS; LOADALL;
L_10002a80:;
  /* 10002a80 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10002a81 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10002a82 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10002a83 mov ebp, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebp = (u32)(M32(m_)); }
  /* 10002a87 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002a88 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10002a8a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002a8b mov edi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edi = (u32)(M32(m_)); }
  /* 10002a8e mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 10002a91 mov cl, byte ptr [esi + 0x35] */ { const u32 m_ = (u32)(esi + 0x35u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002a94 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002a96 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 10002a98 mov byte ptr [esp + 0x10], al */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10002a9c jne 0x10002ac6 */ if (!ZF_) goto L_10002ac6;
  /* 10002a9e mov edi, edi */ { edi = (u32)(edi); }
L_10002aa0:;
  /* 10002aa0 lea eax, [esi + 0xc] */ eax = (u32)((u32)(esi + 0xcu));
  /* 10002aa3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002aa4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10002aa5 mov edi, esi */ { edi = (u32)(esi); }
  /* 10002aa7 call dword ptr [0x10008048] */ { const u32 m_ = (u32)(0x10008048u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10002aadu; SAVEALL; call_ind(c, t_); RETCHK(0x10002aadu, 0x10002aa7u); LOADALL; }
  /* 10002aad add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002ab0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002ab2 mov byte ptr [esp + 0x10], al */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10002ab6 je 0x10002abc */ if (ZF_) goto L_10002abc;
  /* 10002ab8 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10002aba jmp 0x10002abf */ goto L_10002abf;
L_10002abc:;
  /* 10002abc mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
L_10002abf:;
  /* 10002abf mov cl, byte ptr [esi + 0x35] */ { const u32 m_ = (u32)(esi + 0x35u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002ac2 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002ac4 je 0x10002aa0 */ if (ZF_) goto L_10002aa0;
L_10002ac6:;
  /* 10002ac6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002ac8 mov esi, edi */ { esi = (u32)(edi); }
  /* 10002aca mov dword ptr [esp + 0x1c], esi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(esi); }
  /* 10002ace je 0x10002b08 */ if (ZF_) goto L_10002b08;
  /* 10002ad0 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10002ad3 cmp edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002ad5 jne 0x10002afb */ if (!ZF_) goto L_10002afb;
  /* 10002ad7 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10002ad8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002ad9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10002adb lea edx, [esp + 0x28] */ edx = (u32)((u32)(esp + 0x28u));
  /* 10002adf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10002ae0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10002ae2 call 0x100028c0 */ esp -= 4; M32(esp) = 0x10002ae7u; SAVEALL; F_100028c0(c); ABI_CHECK(0x100028c0u, 0x10002ae2u); RETCHK(0x10002ae7u, 0x10002ae2u); LOADALL;
  /* 10002ae7 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10002ae9 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10002aed pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002aee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002aef pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10002af0 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10002af2 mov byte ptr [eax + 4], 1 */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)(0x1u); }
  /* 10002af6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10002af7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10002af8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10002afb:;
  /* 10002afb lea ecx, [esp + 0x1c] */ ecx = (u32)((u32)(esp + 0x1cu));
  /* 10002aff call 0x10001470 */ esp -= 4; M32(esp) = 0x10002b04u; SAVEALL; F_10001470(c); ABI_CHECK(0x10001470u, 0x10002affu); RETCHK(0x10002b04u, 0x10002affu); LOADALL;
  /* 10002b04 mov esi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); esi = (u32)(M32(m_)); }
L_10002b08:;
  /* 10002b08 lea edx, [esi + 0xc] */ edx = (u32)((u32)(esi + 0xcu));
  /* 10002b0b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10002b0c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10002b0d call dword ptr [0x10008048] */ { const u32 m_ = (u32)(0x10008048u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10002b13u; SAVEALL; call_ind(c, t_); RETCHK(0x10002b13u, 0x10002b0du); LOADALL; }
  /* 10002b13 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002b16 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002b18 je 0x10002b41 */ if (ZF_) goto L_10002b41;
  /* 10002b1a mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10002b1e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10002b1f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002b20 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002b21 lea ecx, [esp + 0x28] */ ecx = (u32)((u32)(esp + 0x28u));
  /* 10002b25 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10002b26 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10002b28 call 0x100028c0 */ esp -= 4; M32(esp) = 0x10002b2du; SAVEALL; F_100028c0(c); ABI_CHECK(0x100028c0u, 0x10002b28u); RETCHK(0x10002b2du, 0x10002b28u); LOADALL;
  /* 10002b2d mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10002b2f mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10002b33 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002b34 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002b35 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10002b36 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 10002b38 mov byte ptr [eax + 4], 1 */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)(0x1u); }
  /* 10002b3c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10002b3d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10002b3e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10002b41:;
  /* 10002b41 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10002b45 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002b46 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 10002b48 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002b49 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10002b4a mov byte ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 10002b4e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10002b4f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10002b50 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10002b60(CPU *c) {
  NATIVE_HOOK(0x10002b60u) REGS; LOADALL;
L_10002b60:;
  /* 10002b60 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10002b66 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10002b68 push 0x100073d2 */ { u32 v_ = 0x100073d2u; esp -= 4; M32(esp) = v_; }
  /* 10002b6d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002b6e mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10002b72 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10002b79 sub esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002b7c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10002b7d mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 10002b7f mov cl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002b82 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002b84 je 0x10002bdf */ if (ZF_) goto L_10002bdf;
  /* 10002b86 push 0x1000815c */ { u32 v_ = 0x1000815cu; esp -= 4; M32(esp) = v_; }
  /* 10002b8b lea ecx, [esp + 0xc] */ ecx = (u32)((u32)(esp + 0xcu));
  /* 10002b8f call dword ptr [0x10008050] */ { const u32 m_ = (u32)(0x10008050u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10002b95u; SAVEALL; call_ind(c, t_); RETCHK(0x10002b95u, 0x10002b8fu); LOADALL; }
  /* 10002b95 lea ecx, [esp + 0x24] */ ecx = (u32)((u32)(esp + 0x24u));
  /* 10002b99 mov dword ptr [esp + 0x54], 0 */ { const u32 m_ = (u32)(esp + 0x54u); M32(m_) = (u32)(0x0u); }
  /* 10002ba1 call dword ptr [0x100080bc] */ { const u32 m_ = (u32)(0x100080bcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10002ba7u; SAVEALL; call_ind(c, t_); RETCHK(0x10002ba7u, 0x10002ba1u); LOADALL; }
  /* 10002ba7 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 10002bab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002bac lea ecx, [esp + 0x34] */ ecx = (u32)((u32)(esp + 0x34u));
  /* 10002bb0 mov byte ptr [esp + 0x58], 1 */ { const u32 m_ = (u32)(esp + 0x58u); M8(m_) = (u8)(0x1u); }
  /* 10002bb5 mov dword ptr [esp + 0x28], 0x10008114 */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0x10008114u); }
  /* 10002bbd call dword ptr [0x1000803c] */ { const u32 m_ = (u32)(0x1000803cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10002bc3u; SAVEALL; call_ind(c, t_); RETCHK(0x10002bc3u, 0x10002bbdu); LOADALL; }
  /* 10002bc3 push 0x10008c20 */ { u32 v_ = 0x10008c20u; esp -= 4; M32(esp) = v_; }
  /* 10002bc8 lea ecx, [esp + 0x28] */ ecx = (u32)((u32)(esp + 0x28u));
  /* 10002bcc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10002bcd mov byte ptr [esp + 0x5c], 0 */ { const u32 m_ = (u32)(esp + 0x5cu); M8(m_) = (u8)(0x0u); }
  /* 10002bd2 mov dword ptr [esp + 0x2c], 0x10008124 */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(0x10008124u); }
  /* 10002bda call 0x10006e40 */ { SAVEALL; rt_throw(c, 0x100080c4u); }
L_10002bdf:;
  /* 10002bdf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10002be0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002be1 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10002be3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002be4 lea ecx, [esp + 0x6c] */ ecx = (u32)((u32)(esp + 0x6cu));
  /* 10002be8 mov dword ptr [esp + 0x10], ebx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 10002bec call 0x100014d0 */ esp -= 4; M32(esp) = 0x10002bf1u; SAVEALL; F_100014d0(c); ABI_CHECK(0x100014d0u, 0x10002becu); RETCHK(0x10002bf1u, 0x10002becu); LOADALL;
  /* 10002bf1 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10002bf3 mov cl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002bf6 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002bf8 je 0x10002bff */ if (ZF_) goto L_10002bff;
  /* 10002bfa mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 10002bfd jmp 0x10002c18 */ goto L_10002c18;
L_10002bff:;
  /* 10002bff mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10002c02 mov cl, byte ptr [edx + 0x35] */ { const u32 m_ = (u32)(edx + 0x35u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002c05 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002c07 je 0x10002c0d */ if (ZF_) goto L_10002c0d;
  /* 10002c09 mov edi, eax */ { edi = (u32)(eax); }
  /* 10002c0b jmp 0x10002c18 */ goto L_10002c18;
L_10002c0d:;
  /* 10002c0d mov ecx, dword ptr [esp + 0x6c] */ { const u32 m_ = (u32)(esp + 0x6cu); ecx = (u32)(M32(m_)); }
  /* 10002c11 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002c13 mov edi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 10002c16 jne 0x10002c86 */ if (!ZF_) goto L_10002c86;
L_10002c18:;
  /* 10002c18 mov al, byte ptr [edi + 0x35] */ { const u32 m_ = (u32)(edi + 0x35u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002c1b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002c1d mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 10002c20 jne 0x10002c25 */ if (!ZF_) goto L_10002c25;
  /* 10002c22 mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
L_10002c25:;
  /* 10002c25 mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002c28 cmp dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002c2b jne 0x10002c32 */ if (!ZF_) goto L_10002c32;
  /* 10002c2d mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 10002c30 jmp 0x10002c3d */ goto L_10002c3d;
L_10002c32:;
  /* 10002c32 cmp dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002c34 jne 0x10002c3a */ if (!ZF_) goto L_10002c3a;
  /* 10002c36 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 10002c38 jmp 0x10002c3d */ goto L_10002c3d;
L_10002c3a:;
  /* 10002c3a mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
L_10002c3d:;
  /* 10002c3d mov ebx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10002c40 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10002c42 cmp eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002c46 jne 0x10002c5e */ if (!ZF_) goto L_10002c5e;
  /* 10002c48 mov al, byte ptr [edi + 0x35] */ { const u32 m_ = (u32)(edi + 0x35u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002c4b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002c4d je 0x10002c53 */ if (ZF_) goto L_10002c53;
  /* 10002c4f mov eax, esi */ { eax = (u32)(esi); }
  /* 10002c51 jmp 0x10002c5c */ goto L_10002c5c;
L_10002c53:;
  /* 10002c53 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002c54 call 0x10001450 */ esp -= 4; M32(esp) = 0x10002c59u; SAVEALL; F_10001450(c); ABI_CHECK(0x10001450u, 0x10002c54u); RETCHK(0x10002c59u, 0x10002c54u); LOADALL;
  /* 10002c59 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10002c5c:;
  /* 10002c5c mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
L_10002c5e:;
  /* 10002c5e mov ebx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10002c61 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10002c65 cmp dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002c68 jne 0x10002cde */ if (!ZF_) goto L_10002cde;
  /* 10002c6a mov al, byte ptr [edi + 0x35] */ { const u32 m_ = (u32)(edi + 0x35u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002c6d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002c6f je 0x10002c78 */ if (ZF_) goto L_10002c78;
  /* 10002c71 mov eax, esi */ { eax = (u32)(esi); }
  /* 10002c73 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 10002c76 jmp 0x10002cde */ goto L_10002cde;
L_10002c78:;
  /* 10002c78 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002c79 call 0x10001430 */ esp -= 4; M32(esp) = 0x10002c7eu; SAVEALL; F_10001430(c); ABI_CHECK(0x10001430u, 0x10002c79u); RETCHK(0x10002c7eu, 0x10002c79u); LOADALL;
  /* 10002c7e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002c81 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 10002c84 jmp 0x10002cde */ goto L_10002cde;
L_10002c86:;
  /* 10002c86 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10002c89 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 10002c8b mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 10002c8d cmp ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002c90 jne 0x10002c96 */ if (!ZF_) goto L_10002c96;
  /* 10002c92 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10002c94 jmp 0x10002cb1 */ goto L_10002cb1;
L_10002c96:;
  /* 10002c96 mov al, byte ptr [edi + 0x35] */ { const u32 m_ = (u32)(edi + 0x35u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002c99 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002c9b mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 10002c9e jne 0x10002ca3 */ if (!ZF_) goto L_10002ca3;
  /* 10002ca0 mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
L_10002ca3:;
  /* 10002ca3 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 10002ca5 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10002ca8 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 10002cab mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10002cae mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
L_10002cb1:;
  /* 10002cb1 mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002cb4 cmp dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002cb7 jne 0x10002cbe */ if (!ZF_) goto L_10002cbe;
  /* 10002cb9 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10002cbc jmp 0x10002ccc */ goto L_10002ccc;
L_10002cbe:;
  /* 10002cbe mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002cc1 cmp dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002cc3 jne 0x10002cc9 */ if (!ZF_) goto L_10002cc9;
  /* 10002cc5 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10002cc7 jmp 0x10002ccc */ goto L_10002ccc;
L_10002cc9:;
  /* 10002cc9 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_10002ccc:;
  /* 10002ccc mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002ccf mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10002cd2 mov dl, byte ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002cd5 mov al, byte ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002cd8 mov byte ptr [ecx + 0x34], dl */ { const u32 m_ = (u32)(ecx + 0x34u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10002cdb mov byte ptr [ebx + 0x34], al */ { const u32 m_ = (u32)(ebx + 0x34u); M8(m_) = (u8)((eax & 0xffu)); }
L_10002cde:;
  /* 10002cde mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10002ce2 mov cl, byte ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002ce5 mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 10002ce7 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10002ce9 jne 0x10002df1 */ if (!ZF_) goto L_10002df1;
  /* 10002cef mov ecx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10002cf2 cmp edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002cf5 je 0x10002dee */ if (ZF_) goto L_10002dee;
  /* 10002cfb jmp 0x10002d00 */ goto L_10002d00;
L_10002d00:;
  /* 10002d00 cmp byte ptr [edi + 0x34], bl */ { const u32 m_ = (u32)(edi + 0x34u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10002d03 jne 0x10002dee */ if (!ZF_) goto L_10002dee;
  /* 10002d09 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10002d0b cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002d0d jne 0x10002d76 */ if (!ZF_) goto L_10002d76;
  /* 10002d0f mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10002d12 mov cl, byte ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002d15 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002d17 jne 0x10002d2b */ if (!ZF_) goto L_10002d2b;
  /* 10002d19 mov byte ptr [eax + 0x34], bl */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10002d1c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002d1d mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10002d1f mov byte ptr [esi + 0x34], 0 */ { const u32 m_ = (u32)(esi + 0x34u); M8(m_) = (u8)(0x0u); }
  /* 10002d23 call 0x10001730 */ esp -= 4; M32(esp) = 0x10002d28u; SAVEALL; F_10001730(c); ABI_CHECK(0x10001730u, 0x10002d23u); RETCHK(0x10002d28u, 0x10002d23u); LOADALL;
  /* 10002d28 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
L_10002d2b:;
  /* 10002d2b mov cl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002d2e test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002d30 jne 0x10002da8 */ if (!ZF_) goto L_10002da8;
  /* 10002d32 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10002d34 cmp byte ptr [edx + 0x34], bl */ { const u32 m_ = (u32)(edx + 0x34u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10002d37 jne 0x10002d41 */ if (!ZF_) goto L_10002d41;
  /* 10002d39 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10002d3c cmp byte ptr [ecx + 0x34], bl */ { const u32 m_ = (u32)(ecx + 0x34u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10002d3f je 0x10002da4 */ if (ZF_) goto L_10002da4;
L_10002d41:;
  /* 10002d41 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10002d44 cmp byte ptr [ecx + 0x34], bl */ { const u32 m_ = (u32)(ecx + 0x34u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10002d47 jne 0x10002d5d */ if (!ZF_) goto L_10002d5d;
  /* 10002d49 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10002d4b mov byte ptr [edx + 0x34], bl */ { const u32 m_ = (u32)(edx + 0x34u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10002d4e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002d4f mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10002d51 mov byte ptr [eax + 0x34], 0 */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)(0x0u); }
  /* 10002d55 call 0x10001370 */ esp -= 4; M32(esp) = 0x10002d5au; SAVEALL; F_10001370(c); ABI_CHECK(0x10001370u, 0x10002d55u); RETCHK(0x10002d5au, 0x10002d55u); LOADALL;
  /* 10002d5a mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
L_10002d5d:;
  /* 10002d5d mov cl, byte ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002d60 mov byte ptr [eax + 0x34], cl */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10002d63 mov byte ptr [esi + 0x34], bl */ { const u32 m_ = (u32)(esi + 0x34u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10002d66 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 10002d69 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002d6a mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10002d6c mov byte ptr [edx + 0x34], bl */ { const u32 m_ = (u32)(edx + 0x34u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10002d6f call 0x10001730 */ esp -= 4; M32(esp) = 0x10002d74u; SAVEALL; F_10001730(c); ABI_CHECK(0x10001730u, 0x10002d6fu); RETCHK(0x10002d74u, 0x10002d6fu); LOADALL;
  /* 10002d74 jmp 0x10002dee */ goto L_10002dee;
L_10002d76:;
  /* 10002d76 mov cl, byte ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002d79 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002d7b jne 0x10002d8e */ if (!ZF_) goto L_10002d8e;
  /* 10002d7d mov byte ptr [eax + 0x34], bl */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10002d80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002d81 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10002d83 mov byte ptr [esi + 0x34], 0 */ { const u32 m_ = (u32)(esi + 0x34u); M8(m_) = (u8)(0x0u); }
  /* 10002d87 call 0x10001370 */ esp -= 4; M32(esp) = 0x10002d8cu; SAVEALL; F_10001370(c); ABI_CHECK(0x10001370u, 0x10002d87u); RETCHK(0x10002d8cu, 0x10002d87u); LOADALL;
  /* 10002d8c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
L_10002d8e:;
  /* 10002d8e mov cl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002d91 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002d93 jne 0x10002da8 */ if (!ZF_) goto L_10002da8;
  /* 10002d95 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 10002d98 cmp byte ptr [edx + 0x34], bl */ { const u32 m_ = (u32)(edx + 0x34u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10002d9b jne 0x10002dbd */ if (!ZF_) goto L_10002dbd;
  /* 10002d9d mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10002d9f cmp byte ptr [ecx + 0x34], bl */ { const u32 m_ = (u32)(ecx + 0x34u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10002da2 jne 0x10002dbd */ if (!ZF_) goto L_10002dbd;
L_10002da4:;
  /* 10002da4 mov byte ptr [eax + 0x34], 0 */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)(0x0u); }
L_10002da8:;
  /* 10002da8 mov edx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10002dab mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002dae mov edi, esi */ { edi = (u32)(esi); }
  /* 10002db0 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002db2 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 10002db5 jne 0x10002d00 */ if (!ZF_) goto L_10002d00;
  /* 10002dbb jmp 0x10002dee */ goto L_10002dee;
L_10002dbd:;
  /* 10002dbd mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10002dbf cmp byte ptr [ecx + 0x34], bl */ { const u32 m_ = (u32)(ecx + 0x34u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10002dc2 jne 0x10002dd8 */ if (!ZF_) goto L_10002dd8;
  /* 10002dc4 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 10002dc7 mov byte ptr [edx + 0x34], bl */ { const u32 m_ = (u32)(edx + 0x34u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10002dca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002dcb mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10002dcd mov byte ptr [eax + 0x34], 0 */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)(0x0u); }
  /* 10002dd1 call 0x10001730 */ esp -= 4; M32(esp) = 0x10002dd6u; SAVEALL; F_10001730(c); ABI_CHECK(0x10001730u, 0x10002dd1u); RETCHK(0x10002dd6u, 0x10002dd1u); LOADALL;
  /* 10002dd6 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
L_10002dd8:;
  /* 10002dd8 mov cl, byte ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002ddb mov byte ptr [eax + 0x34], cl */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10002dde mov byte ptr [esi + 0x34], bl */ { const u32 m_ = (u32)(esi + 0x34u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10002de1 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10002de3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002de4 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10002de6 mov byte ptr [edx + 0x34], bl */ { const u32 m_ = (u32)(edx + 0x34u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10002de9 call 0x10001370 */ esp -= 4; M32(esp) = 0x10002deeu; SAVEALL; F_10001370(c); ABI_CHECK(0x10001370u, 0x10002de9u); RETCHK(0x10002deeu, 0x10002de9u); LOADALL;
L_10002dee:;
  /* 10002dee mov byte ptr [edi + 0x34], bl */ { const u32 m_ = (u32)(edi + 0x34u); M8(m_) = (u8)((ebx & 0xffu)); }
L_10002df1:;
  /* 10002df1 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10002df5 add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10002df8 call 0x100026d0 */ esp -= 4; M32(esp) = 0x10002dfdu; SAVEALL; F_100026d0(c); ABI_CHECK(0x100026d0u, 0x10002df8u); RETCHK(0x10002dfdu, 0x10002df8u); LOADALL;
  /* 10002dfd mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10002e01 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002e02 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10002e07u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10002e02u); RETCHK(0x10002e07u, 0x10002e02u); LOADALL;
  /* 10002e07 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10002e0a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002e0d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10002e0f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002e10 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002e11 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10002e12 jbe 0x10002e18 */ if ((CF_|ZF_)) goto L_10002e18;
  /* 10002e14 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10002e15 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
L_10002e18:;
  /* 10002e18 mov ecx, dword ptr [esp + 0x60] */ { const u32 m_ = (u32)(esp + 0x60u); ecx = (u32)(M32(m_)); }
  /* 10002e1c mov eax, dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); eax = (u32)(M32(m_)); }
  /* 10002e20 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10002e22 mov ecx, dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 10002e26 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10002e27 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10002e2e add esp, 0x54 */ { u32 a_ = esp, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002e31 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10002e40(CPU *c) {
  NATIVE_HOOK(0x10002e40u) REGS; LOADALL;
L_10002e40:;
  /* 10002e40 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10002e41 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002e42 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002e43 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10002e47 mov al, byte ptr [edi + 0x35] */ { const u32 m_ = (u32)(edi + 0x35u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002e4a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002e4c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10002e4e mov esi, edi */ { esi = (u32)(edi); }
  /* 10002e50 jne 0x10002e78 */ if (!ZF_) goto L_10002e78;
L_10002e52:;
  /* 10002e52 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10002e55 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002e56 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10002e58 call 0x10002e40 */ esp -= 4; M32(esp) = 0x10002e5du; SAVEALL; F_10002e40(c); ABI_CHECK(0x10002e40u, 0x10002e58u); RETCHK(0x10002e5du, 0x10002e58u); LOADALL;
  /* 10002e5d mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10002e5f mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10002e61 call 0x100027b0 */ esp -= 4; M32(esp) = 0x10002e66u; SAVEALL; F_100027b0(c); ABI_CHECK(0x100027b0u, 0x10002e61u); RETCHK(0x10002e66u, 0x10002e61u); LOADALL;
  /* 10002e66 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002e67 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10002e6cu; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10002e67u); RETCHK(0x10002e6cu, 0x10002e67u); LOADALL;
  /* 10002e6c mov al, byte ptr [esi + 0x35] */ { const u32 m_ = (u32)(esi + 0x35u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002e6f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002e72 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002e74 mov edi, esi */ { edi = (u32)(esi); }
  /* 10002e76 je 0x10002e52 */ if (ZF_) goto L_10002e52;
L_10002e78:;
  /* 10002e78 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002e79 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002e7a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10002e7b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10002e80(CPU *c) {
  NATIVE_HOOK(0x10002e80u) REGS; LOADALL;
L_10002e80:;
  /* 10002e80 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002e83 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10002e84 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10002e86 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10002e89 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10002e8b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002e8c jne 0x10002eaf */ if (!ZF_) goto L_10002eaf;
  /* 10002e8e mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10002e92 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10002e95 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 10002e99 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002e9a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10002e9b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10002e9d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002e9e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10002ea0 call 0x100028c0 */ esp -= 4; M32(esp) = 0x10002ea5u; SAVEALL; F_100028c0(c); ABI_CHECK(0x100028c0u, 0x10002ea0u); RETCHK(0x10002ea5u, 0x10002ea0u); LOADALL;
  /* 10002ea5 mov eax, edi */ { eax = (u32)(edi); }
  /* 10002ea7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002ea8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002ea9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002eac ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10002eaf:;
  /* 10002eaf mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002eb2 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10002eb4 mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 10002eb8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10002eb9 mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 10002ebd cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002ebf push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10002ec0 jne 0x10002ef4 */ if (!ZF_) goto L_10002ef4;
  /* 10002ec2 lea edx, [ebx + 0xc] */ edx = (u32)((u32)(ebx + 0xcu));
  /* 10002ec5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10002ec6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002ec7 call dword ptr [0x10008048] */ { const u32 m_ = (u32)(0x10008048u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10002ecdu; SAVEALL; call_ind(c, t_); RETCHK(0x10002ecdu, 0x10002ec7u); LOADALL; }
  /* 10002ecd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002ed0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002ed2 je 0x10003014 */ if (ZF_) goto L_10003014;
  /* 10002ed8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002ed9 mov edi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edi = (u32)(M32(m_)); }
  /* 10002edd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10002ede push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10002ee0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002ee1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10002ee3 call 0x100028c0 */ esp -= 4; M32(esp) = 0x10002ee8u; SAVEALL; F_100028c0(c); ABI_CHECK(0x100028c0u, 0x10002ee3u); RETCHK(0x10002ee8u, 0x10002ee3u); LOADALL;
  /* 10002ee8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10002ee9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10002eea mov eax, edi */ { eax = (u32)(edi); }
  /* 10002eec pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002eed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002eee add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002ef1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10002ef4:;
  /* 10002ef4 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002ef6 jne 0x10002f33 */ if (!ZF_) goto L_10002f33;
  /* 10002ef8 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 10002efb add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10002efe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002eff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002f00 call dword ptr [0x10008048] */ { const u32 m_ = (u32)(0x10008048u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10002f06u; SAVEALL; call_ind(c, t_); RETCHK(0x10002f06u, 0x10002f00u); LOADALL; }
  /* 10002f06 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002f09 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002f0b je 0x10003014 */ if (ZF_) goto L_10003014;
  /* 10002f11 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10002f14 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10002f17 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002f18 mov edi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edi = (u32)(M32(m_)); }
  /* 10002f1c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10002f1d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10002f1f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002f20 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10002f22 call 0x100028c0 */ esp -= 4; M32(esp) = 0x10002f27u; SAVEALL; F_100028c0(c); ABI_CHECK(0x100028c0u, 0x10002f22u); RETCHK(0x10002f27u, 0x10002f22u); LOADALL;
  /* 10002f27 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10002f28 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10002f29 mov eax, edi */ { eax = (u32)(edi); }
  /* 10002f2b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002f2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002f2d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002f30 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10002f33:;
  /* 10002f33 lea eax, [ebx + 0xc] */ eax = (u32)((u32)(ebx + 0xcu));
  /* 10002f36 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002f37 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002f38 call dword ptr [0x10008048] */ { const u32 m_ = (u32)(0x10008048u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10002f3eu; SAVEALL; call_ind(c, t_); RETCHK(0x10002f3eu, 0x10002f38u); LOADALL; }
  /* 10002f3e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002f41 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002f43 je 0x10002fa1 */ if (ZF_) goto L_10002fa1;
  /* 10002f45 lea ecx, [esp + 0x24] */ ecx = (u32)((u32)(esp + 0x24u));
  /* 10002f49 mov dword ptr [esp + 0x24], ebx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ebx); }
  /* 10002f4d call 0x10001470 */ esp -= 4; M32(esp) = 0x10002f52u; SAVEALL; F_10001470(c); ABI_CHECK(0x10001470u, 0x10002f4du); RETCHK(0x10002f52u, 0x10002f4du); LOADALL;
  /* 10002f52 mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 10002f56 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002f57 lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 10002f5a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10002f5b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10002f5d call 0x10001350 */ esp -= 4; M32(esp) = 0x10002f62u; SAVEALL; F_10001350(c); ABI_CHECK(0x10001350u, 0x10002f5du); RETCHK(0x10002f62u, 0x10002f5du); LOADALL;
  /* 10002f62 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002f64 je 0x10002fa1 */ if (ZF_) goto L_10002fa1;
  /* 10002f66 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10002f69 mov cl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002f6c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002f6d mov edi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edi = (u32)(M32(m_)); }
  /* 10002f71 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002f73 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10002f75 je 0x10002f8c */ if (ZF_) goto L_10002f8c;
  /* 10002f77 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10002f78 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10002f7a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002f7b call 0x100028c0 */ esp -= 4; M32(esp) = 0x10002f80u; SAVEALL; F_100028c0(c); ABI_CHECK(0x100028c0u, 0x10002f7bu); RETCHK(0x10002f80u, 0x10002f7bu); LOADALL;
  /* 10002f80 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10002f81 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10002f82 mov eax, edi */ { eax = (u32)(edi); }
  /* 10002f84 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002f85 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002f86 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002f89 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10002f8c:;
  /* 10002f8c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10002f8d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10002f8f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002f90 call 0x100028c0 */ esp -= 4; M32(esp) = 0x10002f95u; SAVEALL; F_100028c0(c); ABI_CHECK(0x100028c0u, 0x10002f90u); RETCHK(0x10002f95u, 0x10002f90u); LOADALL;
  /* 10002f95 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10002f96 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10002f97 mov eax, edi */ { eax = (u32)(edi); }
  /* 10002f99 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002f9a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002f9b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002f9e ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10002fa1:;
  /* 10002fa1 lea eax, [ebx + 0xc] */ eax = (u32)((u32)(ebx + 0xcu));
  /* 10002fa4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002fa5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10002fa6 call dword ptr [0x10008048] */ { const u32 m_ = (u32)(0x10008048u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10002facu; SAVEALL; call_ind(c, t_); RETCHK(0x10002facu, 0x10002fa6u); LOADALL; }
  /* 10002fac add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002faf test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002fb1 je 0x10003014 */ if (ZF_) goto L_10003014;
  /* 10002fb3 lea ecx, [esp + 0x24] */ ecx = (u32)((u32)(esp + 0x24u));
  /* 10002fb7 mov dword ptr [esp + 0x24], ebx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ebx); }
  /* 10002fbb call 0x100014d0 */ esp -= 4; M32(esp) = 0x10002fc0u; SAVEALL; F_100014d0(c); ABI_CHECK(0x100014d0u, 0x10002fbbu); RETCHK(0x10002fc0u, 0x10002fbbu); LOADALL;
  /* 10002fc0 mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 10002fc4 cmp ebp, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = ebp, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10002fc7 je 0x10002fd9 */ if (ZF_) goto L_10002fd9;
  /* 10002fc9 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 10002fcc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10002fcd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002fce mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10002fd0 call 0x10001350 */ esp -= 4; M32(esp) = 0x10002fd5u; SAVEALL; F_10001350(c); ABI_CHECK(0x10001350u, 0x10002fd0u); RETCHK(0x10002fd5u, 0x10002fd0u); LOADALL;
  /* 10002fd5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002fd7 je 0x10003014 */ if (ZF_) goto L_10003014;
L_10002fd9:;
  /* 10002fd9 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10002fdc mov al, byte ptr [edx + 0x35] */ { const u32 m_ = (u32)(edx + 0x35u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10002fdf test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10002fe1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002fe2 mov edi, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edi = (u32)(M32(m_)); }
  /* 10002fe6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10002fe8 je 0x10002fff */ if (ZF_) goto L_10002fff;
  /* 10002fea push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10002feb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10002fed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10002fee call 0x100028c0 */ esp -= 4; M32(esp) = 0x10002ff3u; SAVEALL; F_100028c0(c); ABI_CHECK(0x100028c0u, 0x10002feeu); RETCHK(0x10002ff3u, 0x10002feeu); LOADALL;
  /* 10002ff3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10002ff4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10002ff5 mov eax, edi */ { eax = (u32)(edi); }
  /* 10002ff7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10002ff8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10002ff9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10002ffc ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10002fff:;
  /* 10002fff push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10003000 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10003002 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003003 call 0x100028c0 */ esp -= 4; M32(esp) = 0x10003008u; SAVEALL; F_100028c0(c); ABI_CHECK(0x100028c0u, 0x10003003u); RETCHK(0x10003008u, 0x10003003u); LOADALL;
  /* 10003008 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10003009 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1000300a mov eax, edi */ { eax = (u32)(edi); }
  /* 1000300c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000300d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000300e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003011 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10003014:;
  /* 10003014 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003015 lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 10003019 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000301a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1000301c call 0x10002a80 */ esp -= 4; M32(esp) = 0x10003021u; SAVEALL; F_10002a80(c); ABI_CHECK(0x10002a80u, 0x1000301cu); RETCHK(0x10003021u, 0x1000301cu); LOADALL;
  /* 10003021 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10003023 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10003027 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10003028 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10003029 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000302a mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 1000302c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000302d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003030 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10003040(CPU *c) {
  NATIVE_HOOK(0x10003040u) REGS; LOADALL;
L_10003040:;
  /* 10003040 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10003046 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10003048 push 0x100073f0 */ { u32 v_ = 0x100073f0u; esp -= 4; M32(esp) = v_; }
  /* 1000304d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000304e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10003055 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003058 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10003059 mov ebp, dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); ebp = (u32)(M32(m_)); }
  /* 1000305d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000305e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000305f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10003060 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10003062 call 0x100016e0 */ esp -= 4; M32(esp) = 0x10003067u; SAVEALL; F_100016e0(c); ABI_CHECK(0x100016e0u, 0x10003062u); RETCHK(0x10003067u, 0x10003062u); LOADALL;
  /* 10003067 mov esi, eax */ { esi = (u32)(eax); }
  /* 10003069 cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000306c je 0x10003084 */ if (ZF_) goto L_10003084;
  /* 1000306e lea eax, [esi + 0xc] */ eax = (u32)((u32)(esi + 0xcu));
  /* 10003071 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003072 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10003073 call dword ptr [0x10008048] */ { const u32 m_ = (u32)(0x10008048u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10003079u; SAVEALL; call_ind(c, t_); RETCHK(0x10003079u, 0x10003073u); LOADALL; }
  /* 10003079 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000307c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000307e je 0x10003116 */ if (ZF_) goto L_10003116;
L_10003084:;
  /* 10003084 lea ecx, [esp + 0x10] */ ecx = (u32)((u32)(esp + 0x10u));
  /* 10003088 call 0x100018d0 */ esp -= 4; M32(esp) = 0x1000308du; SAVEALL; F_100018d0(c); ABI_CHECK(0x100018d0u, 0x10003088u); RETCHK(0x1000308du, 0x10003088u); LOADALL;
  /* 1000308d mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 10003091 mov byte ptr [eax + 0x2d], 1 */ { const u32 m_ = (u32)(eax + 0x2du); M8(m_) = (u8)(0x1u); }
  /* 10003095 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10003099 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 1000309c mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 100030a0 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 100030a2 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 100030a6 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 100030a9 mov dword ptr [esp + 0x18], 0 */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(0x0u); }
  /* 100030b1 lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 100030b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100030b6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100030b7 lea ecx, [esp + 0x24] */ ecx = (u32)((u32)(esp + 0x24u));
  /* 100030bb mov dword ptr [esp + 0x54], 0 */ { const u32 m_ = (u32)(esp + 0x54u); M32(m_) = (u32)(0x0u); }
  /* 100030c3 call 0x100027c0 */ esp -= 4; M32(esp) = 0x100030c8u; SAVEALL; F_100027c0(c); ABI_CHECK(0x100027c0u, 0x100030c3u); RETCHK(0x100030c8u, 0x100030c3u); LOADALL;
  /* 100030c8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100030c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100030ca lea ecx, [esp + 0x5c] */ ecx = (u32)((u32)(esp + 0x5cu));
  /* 100030ce push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100030cf mov ecx, edi */ { ecx = (u32)(edi); }
  /* 100030d1 mov byte ptr [esp + 0x58], 1 */ { const u32 m_ = (u32)(esp + 0x58u); M8(m_) = (u8)(0x1u); }
  /* 100030d6 call 0x10002e80 */ esp -= 4; M32(esp) = 0x100030dbu; SAVEALL; F_10002e80(c); ABI_CHECK(0x10002e80u, 0x100030d6u); RETCHK(0x100030dbu, 0x100030d6u); LOADALL;
  /* 100030db mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 100030dd lea ecx, [esp + 0x1c] */ ecx = (u32)((u32)(esp + 0x1cu));
  /* 100030e1 mov byte ptr [esp + 0x4c], 0 */ { const u32 m_ = (u32)(esp + 0x4cu); M8(m_) = (u8)(0x0u); }
  /* 100030e6 call 0x100026d0 */ esp -= 4; M32(esp) = 0x100030ebu; SAVEALL; F_100026d0(c); ABI_CHECK(0x100026d0u, 0x100030e6u); RETCHK(0x100030ebu, 0x100030e6u); LOADALL;
  /* 100030eb mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 100030ef mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 100030f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100030f2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100030f3 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 100030f7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 100030f8 lea ecx, [esp + 0x1c] */ ecx = (u32)((u32)(esp + 0x1cu));
  /* 100030fc mov dword ptr [esp + 0x58], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x58u); M32(m_) = (u32)(0xffffffffu); }
  /* 10003104 call 0x10002400 */ esp -= 4; M32(esp) = 0x10003109u; SAVEALL; F_10002400(c); ABI_CHECK(0x10002400u, 0x10003104u); RETCHK(0x10003109u, 0x10003104u); LOADALL;
  /* 10003109 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 1000310d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000310e call 0x10006e46 */ esp -= 4; M32(esp) = 0x10003113u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x1000310eu); RETCHK(0x10003113u, 0x1000310eu); LOADALL;
  /* 10003113 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10003116:;
  /* 10003116 mov ecx, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); ecx = (u32)(M32(m_)); }
  /* 1000311a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000311b lea eax, [esi + 0x28] */ eax = (u32)((u32)(esi + 0x28u));
  /* 1000311e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000311f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10003120 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10003127 add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000312a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10003130(CPU *c) {
  NATIVE_HOOK(0x10003130u) REGS; LOADALL;
L_10003130:;
  /* 10003130 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10003131 mov ebx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 10003135 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003136 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 1000313a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000313b mov edi, ecx */ { edi = (u32)(ecx); }
  /* 1000313d mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10003140 cmp esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003142 jne 0x1000317c */ if (!ZF_) goto L_1000317c;
  /* 10003144 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003146 jne 0x1000317c */ if (!ZF_) goto L_1000317c;
  /* 10003148 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 1000314b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000314c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 1000314e call 0x10002e40 */ esp -= 4; M32(esp) = 0x10003153u; SAVEALL; F_10002e40(c); ABI_CHECK(0x10002e40u, 0x1000314eu); RETCHK(0x10003153u, 0x1000314eu); LOADALL;
  /* 10003153 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10003156 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 10003159 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 1000315c mov dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 10003163 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 10003165 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10003168 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 1000316b mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1000316e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10003170 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10003174 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10003175 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10003176 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 10003178 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10003179 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_1000317c:;
  /* 1000317c cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000317e je 0x100031db */ if (ZF_) goto L_100031db;
L_10003180:;
  /* 10003180 mov al, byte ptr [esi + 0x35] */ { const u32 m_ = (u32)(esi + 0x35u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10003183 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10003185 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10003187 jne 0x100031ca */ if (!ZF_) goto L_100031ca;
  /* 10003189 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 1000318c mov dl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000318f test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10003191 jne 0x100031ad */ if (!ZF_) goto L_100031ad;
  /* 10003193 mov esi, eax */ { esi = (u32)(eax); }
  /* 10003195 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10003197 mov dl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000319a test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000319c jne 0x100031ca */ if (!ZF_) goto L_100031ca;
  /* 1000319e mov edi, edi */ { edi = (u32)(edi); }
L_100031a0:;
  /* 100031a0 mov esi, eax */ { esi = (u32)(eax); }
  /* 100031a2 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 100031a4 mov dl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100031a7 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100031a9 je 0x100031a0 */ if (ZF_) goto L_100031a0;
  /* 100031ab jmp 0x100031ca */ goto L_100031ca;
L_100031ad:;
  /* 100031ad mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 100031b0 mov dl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100031b3 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100031b5 jne 0x100031c8 */ if (!ZF_) goto L_100031c8;
L_100031b7:;
  /* 100031b7 cmp esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100031ba jne 0x100031c8 */ if (!ZF_) goto L_100031c8;
  /* 100031bc mov esi, eax */ { esi = (u32)(eax); }
  /* 100031be mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 100031c1 mov dl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100031c4 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100031c6 je 0x100031b7 */ if (ZF_) goto L_100031b7;
L_100031c8:;
  /* 100031c8 mov esi, eax */ { esi = (u32)(eax); }
L_100031ca:;
  /* 100031ca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100031cb lea eax, [esp + 0x18] */ eax = (u32)((u32)(esp + 0x18u));
  /* 100031cf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100031d0 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 100031d2 call 0x10002b60 */ esp -= 4; M32(esp) = 0x100031d7u; SAVEALL; F_10002b60(c); ABI_CHECK(0x10002b60u, 0x100031d2u); RETCHK(0x100031d7u, 0x100031d2u); LOADALL;
  /* 100031d7 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100031d9 jne 0x10003180 */ if (!ZF_) goto L_10003180;
L_100031db:;
  /* 100031db mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 100031df pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100031e0 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 100031e2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100031e3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100031e4 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_100031f0(CPU *c) {
  NATIVE_HOOK(0x100031f0u) REGS; LOADALL;
L_100031f0:;
  /* 100031f0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 100031f2 push 0x10007411 */ { u32 v_ = 0x10007411u; esp -= 4; M32(esp) = v_; }
  /* 100031f7 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 100031fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100031fe mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10003205 sub esp, 0x74 */ { u32 a_ = esp, b_ = 0x74u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003208 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10003209 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000320a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1000320c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1000320e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000320f lea ecx, [esp + 0x2c] */ ecx = (u32)((u32)(esp + 0x2cu));
  /* 10003213 mov dword ptr [esp + 0xc], ebx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 10003217 call 0x10003f10 */ esp -= 4; M32(esp) = 0x1000321cu; SAVEALL; F_10003f10(c); ABI_CHECK(0x10003f10u, 0x10003217u); RETCHK(0x1000321cu, 0x10003217u); LOADALL;
  /* 1000321c mov edi, dword ptr [esp + 0x90] */ { const u32 m_ = (u32)(esp + 0x90u); edi = (u32)(M32(m_)); }
  /* 10003223 lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 10003227 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003228 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003229 mov dword ptr [esp + 0x90], ebx */ { const u32 m_ = (u32)(esp + 0x90u); M32(m_) = (u32)(ebx); }
  /* 10003230 call 0x10001130 */ esp -= 4; M32(esp) = 0x10003235u; SAVEALL; F_10001130(c); ABI_CHECK(0x10001130u, 0x10003230u); RETCHK(0x10003235u, 0x10003230u); LOADALL;
  /* 10003235 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10003237 je 0x100032c8 */ if (ZF_) goto L_100032c8;
  /* 1000323d mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10003241 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10003242 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10003243 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10003244 lea ecx, [esp + 0x38] */ ecx = (u32)((u32)(esp + 0x38u));
  /* 10003248 call 0x10005d10 */ esp -= 4; M32(esp) = 0x1000324du; SAVEALL; F_10005d10(c); ABI_CHECK(0x10005d10u, 0x10003248u); RETCHK(0x1000324du, 0x10003248u); LOADALL;
  /* 1000324d mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10003251 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10003252 call 0x10006dda */ esp -= 4; M32(esp) = 0x10003257u; SAVEALL; F_10006dda(c); ABI_CHECK(0x10006ddau, 0x10003252u); RETCHK(0x10003257u, 0x10003252u); LOADALL;
  /* 10003257 mov al, byte ptr [esp + 0x64] */ { const u32 m_ = (u32)(esp + 0x64u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000325b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000325e cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10003260 jne 0x100032cd */ if (!ZF_) goto L_100032cd;
  /* 10003262 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003263 lea ecx, [esp + 0x14] */ ecx = (u32)((u32)(esp + 0x14u));
  /* 10003267 call dword ptr [0x10008050] */ { const u32 m_ = (u32)(0x10008050u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1000326du; SAVEALL; call_ind(c, t_); RETCHK(0x1000326du, 0x10003267u); LOADALL; }
  /* 1000326d lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 10003271 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003272 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 10003275 mov byte ptr [esp + 0x8c], 1 */ { const u32 m_ = (u32)(esp + 0x8cu); M8(m_) = (u8)(0x1u); }
  /* 1000327d call 0x10003040 */ esp -= 4; M32(esp) = 0x10003282u; SAVEALL; F_10003040(c); ABI_CHECK(0x10003040u, 0x1000327du); RETCHK(0x10003282u, 0x1000327du); LOADALL;
  /* 10003282 lea ecx, [esp + 0x10] */ ecx = (u32)((u32)(esp + 0x10u));
  /* 10003286 mov edi, eax */ { edi = (u32)(eax); }
  /* 10003288 mov byte ptr [esp + 0x88], bl */ { const u32 m_ = (u32)(esp + 0x88u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 1000328f call dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10003295u; SAVEALL; call_ind(c, t_); RETCHK(0x10003295u, 0x1000328fu); LOADALL; }
  /* 10003295 lea ecx, [esp + 0x2c] */ ecx = (u32)((u32)(esp + 0x2cu));
  /* 10003299 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1000329a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000329b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1000329d call 0x10002550 */ esp -= 4; M32(esp) = 0x100032a2u; SAVEALL; F_10002550(c); ABI_CHECK(0x10002550u, 0x1000329du); RETCHK(0x100032a2u, 0x1000329du); LOADALL;
  /* 100032a2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100032a4 lea ecx, [esp + 0x2c] */ ecx = (u32)((u32)(esp + 0x2cu));
  /* 100032a8 mov dword ptr [esp + 0x88], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x88u); M32(m_) = (u32)(0xffffffffu); }
  /* 100032b3 jne 0x100032bc */ if (!ZF_) goto L_100032bc;
  /* 100032b5 call 0x10001670 */ esp -= 4; M32(esp) = 0x100032bau; SAVEALL; F_10001670(c); ABI_CHECK(0x10001670u, 0x100032b5u); RETCHK(0x100032bau, 0x100032b5u); LOADALL;
  /* 100032ba jmp 0x10003306 */ goto L_10003306;
L_100032bc:;
  /* 100032bc call 0x10001670 */ esp -= 4; M32(esp) = 0x100032c1u; SAVEALL; F_10001670(c); ABI_CHECK(0x10001670u, 0x100032bcu); RETCHK(0x100032c1u, 0x100032bcu); LOADALL;
  /* 100032c1 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 100032c6 jmp 0x10003308 */ goto L_10003308;
L_100032c8:;
  /* 100032c8 call 0x100010b0 */ esp -= 4; M32(esp) = 0x100032cdu; SAVEALL; F_100010b0(c); ABI_CHECK(0x100010b0u, 0x100032c8u); RETCHK(0x100032cdu, 0x100032c8u); LOADALL;
L_100032cd:;
  /* 100032cd mov eax, dword ptr [esp + 0x68] */ { const u32 m_ = (u32)(esp + 0x68u); eax = (u32)(M32(m_)); }
  /* 100032d1 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100032d3 mov dword ptr [esp + 0x88], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x88u); M32(m_) = (u32)(0xffffffffu); }
  /* 100032de mov dword ptr [esp + 0x2c], 0x1000812c */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(0x1000812cu); }
  /* 100032e6 je 0x100032f1 */ if (ZF_) goto L_100032f1;
  /* 100032e8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100032e9 call 0x10006dda */ esp -= 4; M32(esp) = 0x100032eeu; SAVEALL; F_10006dda(c); ABI_CHECK(0x10006ddau, 0x100032e9u); RETCHK(0x100032eeu, 0x100032e9u); LOADALL;
  /* 100032ee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_100032f1:;
  /* 100032f1 lea ecx, [esp + 0x2c] */ ecx = (u32)((u32)(esp + 0x2cu));
  /* 100032f5 mov dword ptr [esp + 0x70], ebx */ { const u32 m_ = (u32)(esp + 0x70u); M32(m_) = (u32)(ebx); }
  /* 100032f9 mov dword ptr [esp + 0x6c], ebx */ { const u32 m_ = (u32)(esp + 0x6cu); M32(m_) = (u32)(ebx); }
  /* 100032fd mov dword ptr [esp + 0x68], ebx */ { const u32 m_ = (u32)(esp + 0x68u); M32(m_) = (u32)(ebx); }
  /* 10003301 call 0x10003af0 */ esp -= 4; M32(esp) = 0x10003306u; SAVEALL; F_10003af0(c); ABI_CHECK(0x10003af0u, 0x10003301u); RETCHK(0x10003306u, 0x10003301u); LOADALL;
L_10003306:;
  /* 10003306 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10003308:;
  /* 10003308 mov ecx, dword ptr [esp + 0x80] */ { const u32 m_ = (u32)(esp + 0x80u); ecx = (u32)(M32(m_)); }
  /* 1000330f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10003310 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10003311 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10003312 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10003319 add esp, 0x80 */ { u32 a_ = esp, b_ = 0x80u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000331f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10003330(CPU *c) {
  NATIVE_HOOK(0x10003330u) REGS; LOADALL;
L_10003330:;
  /* 10003330 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10003334 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003335 mov ecx, 0x1000a130 */ { ecx = (u32)(0x1000a130u); }
  /* 1000333a call 0x100031f0 */ esp -= 4; M32(esp) = 0x1000333fu; SAVEALL; F_100031f0(c); ABI_CHECK(0x100031f0u, 0x1000333au); RETCHK(0x1000333fu, 0x1000333au); LOADALL;
  /* 1000333f neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10003341 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10003343 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10003345 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10003380(CPU *c) {
  NATIVE_HOOK(0x10003380u) REGS; LOADALL;
L_10003380:;
  /* 10003380 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003381 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003382 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10003384 lea esi, [edi + 4] */ esi = (u32)((u32)(edi + 0x4u));
  /* 10003387 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10003389 mov dword ptr [edi], 0x1000819c */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x1000819cu); }
  /* 1000338f call 0x100017f0 */ esp -= 4; M32(esp) = 0x10003394u; SAVEALL; F_100017f0(c); ABI_CHECK(0x100017f0u, 0x1000338fu); RETCHK(0x10003394u, 0x1000338fu); LOADALL;
  /* 10003394 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 10003397 mov byte ptr [eax + 0x35], 1 */ { const u32 m_ = (u32)(eax + 0x35u); M8(m_) = (u8)(0x1u); }
  /* 1000339b mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 1000339e mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 100033a1 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 100033a4 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 100033a6 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 100033a9 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 100033ac mov eax, edi */ { eax = (u32)(edi); }
  /* 100033ae pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100033af mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 100033b6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100033b7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100033d0(CPU *c) {
  NATIVE_HOOK(0x100033d0u) REGS; LOADALL;
L_100033d0:;
  /* 100033d0 test byte ptr [esp + 4], 1 */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100033d5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100033d6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 100033d8 mov dword ptr [esi], 0x100081a0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x100081a0u); }
  /* 100033de je 0x100033e9 */ if (ZF_) goto L_100033e9;
  /* 100033e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100033e1 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100033e6u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100033e1u); RETCHK(0x100033e6u, 0x100033e1u); LOADALL;
  /* 100033e6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_100033e9:;
  /* 100033e9 mov eax, esi */ { eax = (u32)(esi); }
  /* 100033eb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100033ec ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_100033f0(CPU *c) {
  NATIVE_HOOK(0x100033f0u) REGS; LOADALL;
L_100033f0:;
  /* 100033f0 mov eax, dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); eax = (u32)(M32(m_)); }
  /* 100033f3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100033f5 je 0x100033fb */ if (ZF_) goto L_100033fb;
  /* 100033f7 mov eax, dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); eax = (u32)(M32(m_)); }
  /* 100033fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_100033fb:;
  /* 100033fb mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
  /* 10003400 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10003410(CPU *c) {
  NATIVE_HOOK(0x10003410u) REGS; LOADALL;
L_10003410:;
  /* 10003410 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10003414 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 10003417 mov edx, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); edx = (u32)(M32(m_)); }
  /* 1000341a mov dword ptr [eax + 0x2c], edx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(edx); }
  /* 1000341d mov dword ptr [eax + 0x30], 0 */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(0x0u); }
  /* 10003424 mov edx, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); edx = (u32)(M32(m_)); }
  /* 10003427 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003429 je 0x10003434 */ if (ZF_) goto L_10003434;
  /* 1000342b mov dword ptr [edx + 0x30], eax */ { const u32 m_ = (u32)(edx + 0x30u); M32(m_) = (u32)(eax); }
  /* 1000342e mov dword ptr [ecx + 0x1c], eax */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10003431 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10003434:;
  /* 10003434 mov dword ptr [ecx + 0x18], eax */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(eax); }
  /* 10003437 mov dword ptr [ecx + 0x1c], eax */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 1000343a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10003440(CPU *c) {
  NATIVE_HOOK(0x10003440u) REGS; LOADALL;
L_10003440:;
  /* 10003440 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003442 je 0x10003452 */ if (ZF_) goto L_10003452;
L_10003444:;
  /* 10003444 mov eax, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); eax = (u32)(M32(m_)); }
  /* 10003447 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003449 je 0x10003455 */ if (ZF_) goto L_10003455;
  /* 1000344b mov ecx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1000344e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003450 jne 0x10003444 */ if (!ZF_) goto L_10003444;
L_10003452:;
  /* 10003452 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10003454 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10003455:;
  /* 10003455 mov edx, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); edx = (u32)(M32(m_)); }
  /* 10003458 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1000345a test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000345c setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 1000345f dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10003460 and eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10003462 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10003470(CPU *c) {
  NATIVE_HOOK(0x10003470u) REGS; LOADALL;
L_10003470:;
  /* 10003470 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003471 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003472 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10003474 mov eax, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); eax = (u32)(M32(m_)); }
  /* 10003477 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003479 je 0x10003480 */ if (ZF_) goto L_10003480;
  /* 1000347b mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 1000347e jmp 0x10003485 */ goto L_10003485;
L_10003480:;
  /* 10003480 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_10003485:;
  /* 10003485 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10003489 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000348a lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 1000348d call 0x100069c0 */ esp -= 4; M32(esp) = 0x10003492u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x1000348du); RETCHK(0x10003492u, 0x1000348du); LOADALL;
  /* 10003492 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10003495 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10003498 mov cl, byte ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000349b mov byte ptr [esi + 0x34], cl */ { const u32 m_ = (u32)(esi + 0x34u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 1000349e mov eax, dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); eax = (u32)(M32(m_)); }
  /* 100034a1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100034a3 je 0x100034aa */ if (ZF_) goto L_100034aa;
  /* 100034a5 mov eax, dword ptr [edi + 0x3c] */ { const u32 m_ = (u32)(edi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 100034a8 jmp 0x100034af */ goto L_100034af;
L_100034aa:;
  /* 100034aa mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_100034af:;
  /* 100034af push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100034b0 lea ecx, [esi + 0x3c] */ ecx = (u32)((u32)(esi + 0x3cu));
  /* 100034b3 call 0x100069c0 */ esp -= 4; M32(esp) = 0x100034b8u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x100034b3u); RETCHK(0x100034b8u, 0x100034b3u); LOADALL;
  /* 100034b8 mov edi, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); edi = (u32)(M32(m_)); }
  /* 100034bb test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100034bd je 0x100034f0 */ if (ZF_) goto L_100034f0;
  /* 100034bf nop */ ;
L_100034c0:;
  /* 100034c0 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 100034c2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 100034c4 call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100034c7u; SAVEALL; call_ind(c, t_); RETCHK(0x100034c7u, 0x100034c4u); LOADALL; }
  /* 100034c7 mov dword ptr [eax + 0x10], esi */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(esi); }
  /* 100034ca mov ecx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 100034cd mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 100034d0 mov dword ptr [eax + 0x30], 0 */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(0x0u); }
  /* 100034d7 mov ecx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 100034da test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100034dc je 0x100034e3 */ if (ZF_) goto L_100034e3;
  /* 100034de mov dword ptr [ecx + 0x30], eax */ { const u32 m_ = (u32)(ecx + 0x30u); M32(m_) = (u32)(eax); }
  /* 100034e1 jmp 0x100034e6 */ goto L_100034e6;
L_100034e3:;
  /* 100034e3 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
L_100034e6:;
  /* 100034e6 mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 100034e9 mov edi, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); edi = (u32)(M32(m_)); }
  /* 100034ec test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100034ee jne 0x100034c0 */ if (!ZF_) goto L_100034c0;
L_100034f0:;
  /* 100034f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100034f1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100034f2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10003500(CPU *c) {
  NATIVE_HOOK(0x10003500u) REGS; LOADALL;
L_10003500:;
  /* 10003500 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003501 mov esi, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); esi = (u32)(M32(m_)); }
  /* 10003504 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003506 je 0x10003532 */ if (ZF_) goto L_10003532;
  /* 10003508 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10003509 mov ebx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 1000350d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000350e mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
L_10003512:;
  /* 10003512 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10003514 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10003515 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003516 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10003518 call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1000351bu; SAVEALL; call_ind(c, t_); RETCHK(0x1000351bu, 0x10003518u); LOADALL; }
  /* 1000351b push 0x100081b0 */ { u32 v_ = 0x100081b0u; esp -= 4; M32(esp) = v_; }
  /* 10003520 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003521 call 0x10007032 */ esp -= 4; M32(esp) = 0x10003526u; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x10003521u); RETCHK(0x10003526u, 0x10003521u); LOADALL;
  /* 10003526 mov esi, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); esi = (u32)(M32(m_)); }
  /* 10003529 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000352c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000352e jne 0x10003512 */ if (!ZF_) goto L_10003512;
  /* 10003530 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10003531 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_10003532:;
  /* 10003532 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10003533 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10003540(CPU *c) {
  NATIVE_HOOK(0x10003540u) REGS; LOADALL;
L_10003540:;
  /* 10003540 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003541 mov esi, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); esi = (u32)(M32(m_)); }
  /* 10003544 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003546 je 0x10003566 */ if (ZF_) goto L_10003566;
  /* 10003548 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003549 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 1000354d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_10003550:;
  /* 10003550 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10003552 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003553 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10003555 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10003558u; SAVEALL; call_ind(c, t_); RETCHK(0x10003558u, 0x10003555u); LOADALL; }
  /* 10003558 cmp dword ptr [esi + 0x14], 1 */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000355c je 0x10003565 */ if (ZF_) goto L_10003565;
  /* 1000355e mov esi, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); esi = (u32)(M32(m_)); }
  /* 10003561 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003563 jne 0x10003550 */ if (!ZF_) goto L_10003550;
L_10003565:;
  /* 10003565 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_10003566:;
  /* 10003566 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10003567 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10003570(CPU *c) {
  NATIVE_HOOK(0x10003570u) REGS; LOADALL;
L_10003570:;
  /* 10003570 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10003571 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003572 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10003576 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003578 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003579 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 1000357d mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 1000357f jle 0x10003592 */ if ((ZF_|LT_)) goto L_10003592;
L_10003581:;
  /* 10003581 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003582 push 0x100081c0 */ { u32 v_ = 0x100081c0u; esp -= 4; M32(esp) = v_; }
  /* 10003587 call 0x1000703e */ esp -= 4; M32(esp) = 0x1000358cu; SAVEALL; F_1000703e(c); ABI_CHECK(0x1000703eu, 0x10003587u); RETCHK(0x1000358cu, 0x10003587u); LOADALL;
  /* 1000358c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000358f dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10003590 jne 0x10003581 */ if (!ZF_) goto L_10003581;
L_10003592:;
  /* 10003592 mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 10003595 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003597 je 0x1000359e */ if (ZF_) goto L_1000359e;
  /* 10003599 mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 1000359c jmp 0x100035a3 */ goto L_100035a3;
L_1000359e:;
  /* 1000359e mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_100035a3:;
  /* 100035a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100035a4 push 0x100081b4 */ { u32 v_ = 0x100081b4u; esp -= 4; M32(esp) = v_; }
  /* 100035a9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100035aa call 0x10007032 */ esp -= 4; M32(esp) = 0x100035afu; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x100035aau); RETCHK(0x100035afu, 0x100035aau); LOADALL;
  /* 100035af add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100035b2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100035b3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100035b4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100035b5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_100035c0(CPU *c) {
  NATIVE_HOOK(0x100035c0u) REGS; LOADALL;
L_100035c0:;
  /* 100035c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100035c1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100035c2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 100035c6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 100035c8 push 0x100081cc */ { u32 v_ = 0x100081ccu; esp -= 4; M32(esp) = v_; }
  /* 100035cd mov ecx, edi */ { ecx = (u32)(edi); }
  /* 100035cf call 0x10006be0 */ esp -= 4; M32(esp) = 0x100035d4u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x100035cfu); RETCHK(0x100035d4u, 0x100035cfu); LOADALL;
  /* 100035d4 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 100035d7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100035d9 je 0x100035e0 */ if (ZF_) goto L_100035e0;
  /* 100035db mov esi, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); esi = (u32)(M32(m_)); }
  /* 100035de jmp 0x100035e5 */ goto L_100035e5;
L_100035e0:;
  /* 100035e0 mov esi, 0x10008158 */ { esi = (u32)(0x10008158u); }
L_100035e5:;
  /* 100035e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100035e6 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 100035e8 call 0x10006be0 */ esp -= 4; M32(esp) = 0x100035edu; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x100035e8u); RETCHK(0x100035edu, 0x100035e8u); LOADALL;
  /* 100035ed push 0x100081c8 */ { u32 v_ = 0x100081c8u; esp -= 4; M32(esp) = v_; }
  /* 100035f2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 100035f4 call 0x10006be0 */ esp -= 4; M32(esp) = 0x100035f9u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x100035f4u); RETCHK(0x100035f9u, 0x100035f4u); LOADALL;
  /* 100035f9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100035fa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100035fb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10003600(CPU *c) {
  NATIVE_HOOK(0x10003600u) REGS; LOADALL;
L_10003600:;
  /* 10003600 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003601 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003602 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10003606 push 0x1000820c */ { u32 v_ = 0x1000820cu; esp -= 4; M32(esp) = v_; }
  /* 1000360b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000360c mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1000360e call 0x10007032 */ esp -= 4; M32(esp) = 0x10003613u; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x1000360eu); RETCHK(0x10003613u, 0x1000360eu); LOADALL;
  /* 10003613 mov eax, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); eax = (u32)(M32(m_)); }
  /* 10003616 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003619 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000361b je 0x10003644 */ if (ZF_) goto L_10003644;
  /* 1000361d mov eax, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 10003620 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003622 je 0x10003644 */ if (ZF_) goto L_10003644;
  /* 10003624 mov eax, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); eax = (u32)(M32(m_)); }
  /* 10003627 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003629 je 0x10003630 */ if (ZF_) goto L_10003630;
  /* 1000362b mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 1000362e jmp 0x10003635 */ goto L_10003635;
L_10003630:;
  /* 10003630 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_10003635:;
  /* 10003635 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003636 push 0x100081fc */ { u32 v_ = 0x100081fcu; esp -= 4; M32(esp) = v_; }
  /* 1000363b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000363c call 0x10007032 */ esp -= 4; M32(esp) = 0x10003641u; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x1000363cu); RETCHK(0x10003641u, 0x1000363cu); LOADALL;
  /* 10003641 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10003644:;
  /* 10003644 mov eax, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); eax = (u32)(M32(m_)); }
  /* 10003647 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003649 je 0x10003672 */ if (ZF_) goto L_10003672;
  /* 1000364b mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 1000364e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003650 je 0x10003672 */ if (ZF_) goto L_10003672;
  /* 10003652 mov eax, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); eax = (u32)(M32(m_)); }
  /* 10003655 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003657 je 0x1000365e */ if (ZF_) goto L_1000365e;
  /* 10003659 mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 1000365c jmp 0x10003663 */ goto L_10003663;
L_1000365e:;
  /* 1000365e mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_10003663:;
  /* 10003663 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003664 push 0x100081ec */ { u32 v_ = 0x100081ecu; esp -= 4; M32(esp) = v_; }
  /* 10003669 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000366a call 0x10007032 */ esp -= 4; M32(esp) = 0x1000366fu; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x1000366au); RETCHK(0x1000366fu, 0x1000366au); LOADALL;
  /* 1000366f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10003672:;
  /* 10003672 mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 10003675 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003677 je 0x100036a0 */ if (ZF_) goto L_100036a0;
  /* 10003679 mov eax, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); eax = (u32)(M32(m_)); }
  /* 1000367c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000367e je 0x100036a0 */ if (ZF_) goto L_100036a0;
  /* 10003680 mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 10003683 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003685 je 0x1000368c */ if (ZF_) goto L_1000368c;
  /* 10003687 mov esi, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); esi = (u32)(M32(m_)); }
  /* 1000368a jmp 0x10003691 */ goto L_10003691;
L_1000368c:;
  /* 1000368c mov esi, 0x10008158 */ { esi = (u32)(0x10008158u); }
L_10003691:;
  /* 10003691 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003692 push 0x100081d8 */ { u32 v_ = 0x100081d8u; esp -= 4; M32(esp) = v_; }
  /* 10003697 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003698 call 0x10007032 */ esp -= 4; M32(esp) = 0x1000369du; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x10003698u); RETCHK(0x1000369du, 0x10003698u); LOADALL;
  /* 1000369d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_100036a0:;
  /* 100036a0 push 0x100081d4 */ { u32 v_ = 0x100081d4u; esp -= 4; M32(esp) = v_; }
  /* 100036a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100036a6 call 0x10007032 */ esp -= 4; M32(esp) = 0x100036abu; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x100036a6u); RETCHK(0x100036abu, 0x100036a6u); LOADALL;
  /* 100036ab add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100036ae pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100036af pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100036b0 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_100036c0(CPU *c) {
  NATIVE_HOOK(0x100036c0u) REGS; LOADALL;
L_100036c0:;
  /* 100036c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100036c1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 100036c3 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 100036c6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100036c8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100036c9 je 0x100036d0 */ if (ZF_) goto L_100036d0;
  /* 100036cb mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 100036ce jmp 0x100036d5 */ goto L_100036d5;
L_100036d0:;
  /* 100036d0 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_100036d5:;
  /* 100036d5 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 100036d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100036da lea ecx, [edi + 0x20] */ ecx = (u32)((u32)(edi + 0x20u));
  /* 100036dd call 0x100069c0 */ esp -= 4; M32(esp) = 0x100036e2u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x100036ddu); RETCHK(0x100036e2u, 0x100036ddu); LOADALL;
  /* 100036e2 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 100036e5 lea ecx, [esi + 0x34] */ ecx = (u32)((u32)(esi + 0x34u));
  /* 100036e8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100036e9 lea ecx, [edi + 0x34] */ ecx = (u32)((u32)(edi + 0x34u));
  /* 100036ec mov dword ptr [edi + 0xc], eax */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(eax); }
  /* 100036ef call 0x10006a40 */ esp -= 4; M32(esp) = 0x100036f4u; SAVEALL; F_10006a40(c); ABI_CHECK(0x10006a40u, 0x100036efu); RETCHK(0x100036f4u, 0x100036efu); LOADALL;
  /* 100036f4 lea edx, [esi + 0x40] */ edx = (u32)((u32)(esi + 0x40u));
  /* 100036f7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 100036f8 lea ecx, [edi + 0x40] */ ecx = (u32)((u32)(edi + 0x40u));
  /* 100036fb call 0x10006a40 */ esp -= 4; M32(esp) = 0x10003700u; SAVEALL; F_10006a40(c); ABI_CHECK(0x10006a40u, 0x100036fbu); RETCHK(0x10003700u, 0x100036fbu); LOADALL;
  /* 10003700 add esi, 0x4c */ { u32 a_ = esi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10003703 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003704 lea ecx, [edi + 0x4c] */ ecx = (u32)((u32)(edi + 0x4cu));
  /* 10003707 call 0x10006a40 */ esp -= 4; M32(esp) = 0x1000370cu; SAVEALL; F_10006a40(c); ABI_CHECK(0x10006a40u, 0x10003707u); RETCHK(0x1000370cu, 0x10003707u); LOADALL;
  /* 1000370c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000370d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000370e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10003720(CPU *c) {
  NATIVE_HOOK(0x10003720u) REGS; LOADALL;
L_10003720:;
  /* 10003720 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10003721 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003722 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10003726 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003728 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003729 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 1000372d mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 1000372f jle 0x10003742 */ if ((ZF_|LT_)) goto L_10003742;
L_10003731:;
  /* 10003731 push 0x100081c0 */ { u32 v_ = 0x100081c0u; esp -= 4; M32(esp) = v_; }
  /* 10003736 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003737 call 0x10007032 */ esp -= 4; M32(esp) = 0x1000373cu; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x10003737u); RETCHK(0x1000373cu, 0x10003737u); LOADALL;
  /* 1000373c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000373f dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10003740 jne 0x10003731 */ if (!ZF_) goto L_10003731;
L_10003742:;
  /* 10003742 mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 10003745 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003747 je 0x1000374e */ if (ZF_) goto L_1000374e;
  /* 10003749 mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 1000374c jmp 0x10003753 */ goto L_10003753;
L_1000374e:;
  /* 1000374e mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_10003753:;
  /* 10003753 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003754 push 0x10008214 */ { u32 v_ = 0x10008214u; esp -= 4; M32(esp) = v_; }
  /* 10003759 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000375a call 0x10007032 */ esp -= 4; M32(esp) = 0x1000375fu; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x1000375au); RETCHK(0x1000375fu, 0x1000375au); LOADALL;
  /* 1000375f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003762 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10003763 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10003764 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10003765 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10003770(CPU *c) {
  NATIVE_HOOK(0x10003770u) REGS; LOADALL;
L_10003770:;
  /* 10003770 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003771 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003772 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10003776 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10003778 push 0x10008220 */ { u32 v_ = 0x10008220u; esp -= 4; M32(esp) = v_; }
  /* 1000377d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 1000377f call 0x10006be0 */ esp -= 4; M32(esp) = 0x10003784u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x1000377fu); RETCHK(0x10003784u, 0x1000377fu); LOADALL;
  /* 10003784 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 10003787 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003789 je 0x10003790 */ if (ZF_) goto L_10003790;
  /* 1000378b mov esi, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); esi = (u32)(M32(m_)); }
  /* 1000378e jmp 0x10003795 */ goto L_10003795;
L_10003790:;
  /* 10003790 mov esi, 0x10008158 */ { esi = (u32)(0x10008158u); }
L_10003795:;
  /* 10003795 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003796 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10003798 call 0x10006be0 */ esp -= 4; M32(esp) = 0x1000379du; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10003798u); RETCHK(0x1000379du, 0x10003798u); LOADALL;
  /* 1000379d push 0x1000821c */ { u32 v_ = 0x1000821cu; esp -= 4; M32(esp) = v_; }
  /* 100037a2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 100037a4 call 0x10006be0 */ esp -= 4; M32(esp) = 0x100037a9u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x100037a4u); RETCHK(0x100037a9u, 0x100037a4u); LOADALL;
  /* 100037a9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100037aa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100037ab ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_100037b0(CPU *c) {
  NATIVE_HOOK(0x100037b0u) REGS; LOADALL;
L_100037b0:;
  /* 100037b0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 100037b4 mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 100037b7 mov edx, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); edx = (u32)(M32(m_)); }
  /* 100037ba mov dword ptr [eax + 0x2c], edx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(edx); }
  /* 100037bd mov edx, dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); edx = (u32)(M32(m_)); }
  /* 100037c0 mov dword ptr [edx + 0x30], eax */ { const u32 m_ = (u32)(edx + 0x30u); M32(m_) = (u32)(eax); }
  /* 100037c3 mov dword ptr [ecx + 0x2c], eax */ { const u32 m_ = (u32)(ecx + 0x2cu); M32(m_) = (u32)(eax); }
  /* 100037c6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_100037d0(CPU *c) {
  NATIVE_HOOK(0x100037d0u) REGS; LOADALL;
L_100037d0:;
  /* 100037d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100037d1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 100037d3 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 100037d5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100037d7 je 0x100037fe */ if (ZF_) goto L_100037fe;
  /* 100037d9 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 100037dc mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 100037df dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 100037e0 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100037e2 jae 0x100037fe */ if (!CF_) goto L_100037fe;
  /* 100037e4 mov dl, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100037e8 mov byte ptr [ecx + eax], dl */ { const u32 m_ = (u32)(ecx + eax); M8(m_) = (u8)((edx & 0xffu)); }
  /* 100037eb mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 100037ee mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 100037f0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100037f1 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 100037f4 mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
  /* 100037f8 mov eax, esi */ { eax = (u32)(esi); }
  /* 100037fa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100037fb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_100037fe:;
  /* 100037fe mov dl, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10003802 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 10003806 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003807 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10003809 mov byte ptr [esp + 0xc], dl */ { const u32 m_ = (u32)(esp + 0xcu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 1000380d mov byte ptr [esp + 0xd], 0 */ { const u32 m_ = (u32)(esp + 0xdu); M8(m_) = (u8)(0x0u); }
  /* 10003812 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10003817u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10003812u); RETCHK(0x10003817u, 0x10003812u); LOADALL;
  /* 10003817 mov eax, esi */ { eax = (u32)(esi); }
  /* 10003819 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000381a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10003820(CPU *c) {
  NATIVE_HOOK(0x10003820u) REGS; LOADALL;
L_10003820:;
  /* 10003820 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10003822 push 0x1000743e */ { u32 v_ = 0x1000743eu; esp -= 4; M32(esp) = v_; }
  /* 10003827 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1000382d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000382e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10003835 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10003836 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10003837 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003838 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1000383a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1000383d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1000383f mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 10003842 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 10003845 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003846 mov dword ptr [esp + 0xc], esi */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(esi); }
  /* 1000384a mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 1000384d lea ecx, [esi + 0x14] */ ecx = (u32)((u32)(esi + 0x14u));
  /* 10003850 mov dword ptr [esi], 0x10008224 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x10008224u); }
  /* 10003856 mov dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ebx); }
  /* 1000385a mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 1000385d mov dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ebx); }
  /* 1000385f mov dword ptr [ecx + 8], ebx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10003862 lea edi, [esi + 0x20] */ edi = (u32)((u32)(esi + 0x20u));
  /* 10003865 mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 10003868 mov dword ptr [edi], ebx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebx); }
  /* 1000386a mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 1000386d mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 10003871 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003872 mov byte ptr [esp + 0x1c], 2 */ { const u32 m_ = (u32)(esp + 0x1cu); M8(m_) = (u8)(0x2u); }
  /* 10003877 call 0x100069c0 */ esp -= 4; M32(esp) = 0x1000387cu; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10003877u); RETCHK(0x1000387cu, 0x10003877u); LOADALL;
  /* 1000387c mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10003880 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10003881 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10003883 call 0x100069c0 */ esp -= 4; M32(esp) = 0x10003888u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10003883u); RETCHK(0x10003888u, 0x10003883u); LOADALL;
  /* 10003888 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1000388c mov dword ptr [esi + 0x10], ebx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ebx); }
  /* 1000388f mov dword ptr [esi + 0x30], ebx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(ebx); }
  /* 10003892 mov dword ptr [esi + 0x2c], ebx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 10003895 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10003896 mov eax, esi */ { eax = (u32)(esi); }
  /* 10003898 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10003899 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1000389a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 100038a1 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100038a4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_100038b0(CPU *c) {
  NATIVE_HOOK(0x100038b0u) REGS; LOADALL;
L_100038b0:;
  /* 100038b0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 100038b2 push 0x10007463 */ { u32 v_ = 0x10007463u; esp -= 4; M32(esp) = v_; }
  /* 100038b7 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 100038bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100038be mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 100038c5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100038c6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100038c7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100038c8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 100038ca mov dword ptr [esp + 8], esi */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(esi); }
  /* 100038ce mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 100038d1 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 100038d3 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100038d5 mov dword ptr [esp + 0x14], 1 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x1u); }
  /* 100038dd je 0x100038e8 */ if (ZF_) goto L_100038e8;
  /* 100038df push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100038e0 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100038e5u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100038e0u); RETCHK(0x100038e5u, 0x100038e0u); LOADALL;
  /* 100038e5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_100038e8:;
  /* 100038e8 mov dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 100038eb mov dword ptr [esi + 0x24], ebx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ebx); }
  /* 100038ee mov dword ptr [esi + 0x28], ebx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(ebx); }
  /* 100038f1 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 100038f4 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100038f6 mov byte ptr [esp + 0x14], bl */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 100038fa je 0x10003905 */ if (ZF_) goto L_10003905;
  /* 100038fc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100038fd call 0x10006e46 */ esp -= 4; M32(esp) = 0x10003902u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100038fdu); RETCHK(0x10003902u, 0x100038fdu); LOADALL;
  /* 10003902 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10003905:;
  /* 10003905 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10003909 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 1000390c mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 1000390f mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 10003912 mov dword ptr [esi], 0x100081a0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x100081a0u); }
  /* 10003918 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10003919 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1000391a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10003921 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003924 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10003930(CPU *c) {
  NATIVE_HOOK(0x10003930u) REGS; LOADALL;
L_10003930:;
  /* 10003930 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003933 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10003934 mov ebp, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebp = (u32)(M32(m_)); }
  /* 10003938 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003939 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000393a mov edi, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edi = (u32)(M32(m_)); }
  /* 1000393e xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_10003940:;
  /* 10003940 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10003943 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003945 je 0x1000394c */ if (ZF_) goto L_1000394c;
  /* 10003947 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 1000394a jmp 0x1000394e */ goto L_1000394e;
L_1000394c:;
  /* 1000394c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_1000394e:;
  /* 1000394e cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003950 jge 0x10003aa1 */ if (!LT_) goto L_10003aa1;
  /* 10003956 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10003958 mov cl, byte ptr [eax + esi] */ { const u32 m_ = (u32)(eax + esi); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000395b cmp cl, 0x26 */ { u32 a_ = (ecx & 0xffu), b_ = 0x26u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000395e mov byte ptr [esp + 0x30], cl */ { const u32 m_ = (u32)(esp + 0x30u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10003962 jne 0x100039d4 */ if (!ZF_) goto L_100039d4;
  /* 10003964 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003966 je 0x1000396d */ if (ZF_) goto L_1000396d;
  /* 10003968 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1000396b jmp 0x1000396f */ goto L_1000396f;
L_1000396d:;
  /* 1000396d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_1000396f:;
  /* 1000396f add ecx, -2 */ { u32 a_ = ecx, b_ = 0xfffffffeu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10003972 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003974 jge 0x100039ba */ if (!LT_) goto L_100039ba;
  /* 10003976 cmp byte ptr [eax + esi + 1], 0x23 */ { const u32 m_ = (u32)(eax + esi + 0x1u); u32 a_ = M8(m_), b_ = 0x23u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000397b jne 0x100039ba */ if (!ZF_) goto L_100039ba;
  /* 1000397d cmp byte ptr [eax + esi + 2], 0x78 */ { const u32 m_ = (u32)(eax + esi + 0x2u); u32 a_ = M8(m_), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10003982 jne 0x100039ba */ if (!ZF_) goto L_100039ba;
L_10003984:;
  /* 10003984 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10003987 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003989 je 0x10003990 */ if (ZF_) goto L_10003990;
  /* 1000398b mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1000398e jmp 0x10003992 */ goto L_10003992;
L_10003990:;
  /* 10003990 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_10003992:;
  /* 10003992 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10003993 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003995 jge 0x10003940 */ if (!LT_) goto L_10003940;
  /* 10003997 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003999 jne 0x100039a0 */ if (!ZF_) goto L_100039a0;
  /* 1000399b mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_100039a0:;
  /* 100039a0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 100039a2 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 100039a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100039a5 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 100039a7 call 0x10006ad0 */ esp -= 4; M32(esp) = 0x100039acu; SAVEALL; F_10006ad0(c); ABI_CHECK(0x10006ad0u, 0x100039a7u); RETCHK(0x100039acu, 0x100039a7u); LOADALL;
  /* 100039ac mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 100039ae mov cl, byte ptr [eax + esi + 1] */ { const u32 m_ = (u32)(eax + esi + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100039b2 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100039b3 cmp cl, 0x3b */ { u32 a_ = (ecx & 0xffu), b_ = 0x3bu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100039b6 jne 0x10003984 */ if (!ZF_) goto L_10003984;
  /* 100039b8 jmp 0x10003940 */ goto L_10003940;
L_100039ba:;
  /* 100039ba mov eax, dword ptr [0x1000a09c] */ { const u32 m_ = (u32)(0x1000a09cu); eax = (u32)(M32(m_)); }
  /* 100039bf mov ecx, dword ptr [0x1000a098] */ { const u32 m_ = (u32)(0x1000a098u); ecx = (u32)(M32(m_)); }
  /* 100039c5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100039c6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100039c7 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 100039c9 call 0x10006ad0 */ esp -= 4; M32(esp) = 0x100039ceu; SAVEALL; F_10006ad0(c); ABI_CHECK(0x10006ad0u, 0x100039c9u); RETCHK(0x100039ceu, 0x100039c9u); LOADALL;
  /* 100039ce inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100039cf jmp 0x10003940 */ goto L_10003940;
L_100039d4:;
  /* 100039d4 cmp cl, 0x3c */ { u32 a_ = (ecx & 0xffu), b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100039d7 jne 0x100039f3 */ if (!ZF_) goto L_100039f3;
  /* 100039d9 mov edx, dword ptr [0x1000a0a8] */ { const u32 m_ = (u32)(0x1000a0a8u); edx = (u32)(M32(m_)); }
  /* 100039df mov eax, dword ptr [0x1000a0a4] */ { const u32 m_ = (u32)(0x1000a0a4u); eax = (u32)(M32(m_)); }
  /* 100039e4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 100039e5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100039e6 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 100039e8 call 0x10006ad0 */ esp -= 4; M32(esp) = 0x100039edu; SAVEALL; F_10006ad0(c); ABI_CHECK(0x10006ad0u, 0x100039e8u); RETCHK(0x100039edu, 0x100039e8u); LOADALL;
  /* 100039ed inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100039ee jmp 0x10003940 */ goto L_10003940;
L_100039f3:;
  /* 100039f3 cmp cl, 0x3e */ { u32 a_ = (ecx & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100039f6 jne 0x10003a13 */ if (!ZF_) goto L_10003a13;
  /* 100039f8 mov ecx, dword ptr [0x1000a0b4] */ { const u32 m_ = (u32)(0x1000a0b4u); ecx = (u32)(M32(m_)); }
  /* 100039fe mov edx, dword ptr [0x1000a0b0] */ { const u32 m_ = (u32)(0x1000a0b0u); edx = (u32)(M32(m_)); }
  /* 10003a04 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10003a05 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10003a06 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10003a08 call 0x10006ad0 */ esp -= 4; M32(esp) = 0x10003a0du; SAVEALL; F_10006ad0(c); ABI_CHECK(0x10006ad0u, 0x10003a08u); RETCHK(0x10003a0du, 0x10003a08u); LOADALL;
  /* 10003a0d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10003a0e jmp 0x10003940 */ goto L_10003940;
L_10003a13:;
  /* 10003a13 cmp cl, 0x22 */ { u32 a_ = (ecx & 0xffu), b_ = 0x22u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10003a16 jne 0x10003a32 */ if (!ZF_) goto L_10003a32;
  /* 10003a18 mov eax, dword ptr [0x1000a0c0] */ { const u32 m_ = (u32)(0x1000a0c0u); eax = (u32)(M32(m_)); }
  /* 10003a1d mov ecx, dword ptr [0x1000a0bc] */ { const u32 m_ = (u32)(0x1000a0bcu); ecx = (u32)(M32(m_)); }
  /* 10003a23 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003a24 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10003a25 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10003a27 call 0x10006ad0 */ esp -= 4; M32(esp) = 0x10003a2cu; SAVEALL; F_10006ad0(c); ABI_CHECK(0x10006ad0u, 0x10003a27u); RETCHK(0x10003a2cu, 0x10003a27u); LOADALL;
  /* 10003a2c inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10003a2d jmp 0x10003940 */ goto L_10003940;
L_10003a32:;
  /* 10003a32 cmp cl, 0x27 */ { u32 a_ = (ecx & 0xffu), b_ = 0x27u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10003a35 jne 0x10003a51 */ if (!ZF_) goto L_10003a51;
  /* 10003a37 mov edx, dword ptr [0x1000a0cc] */ { const u32 m_ = (u32)(0x1000a0ccu); edx = (u32)(M32(m_)); }
  /* 10003a3d mov eax, dword ptr [0x1000a0c8] */ { const u32 m_ = (u32)(0x1000a0c8u); eax = (u32)(M32(m_)); }
  /* 10003a42 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10003a43 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003a44 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10003a46 call 0x10006ad0 */ esp -= 4; M32(esp) = 0x10003a4bu; SAVEALL; F_10006ad0(c); ABI_CHECK(0x10006ad0u, 0x10003a46u); RETCHK(0x10003a4bu, 0x10003a46u); LOADALL;
  /* 10003a4b inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10003a4c jmp 0x10003940 */ goto L_10003940;
L_10003a51:;
  /* 10003a51 cmp cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10003a54 jae 0x10003a8f */ if (!CF_) goto L_10003a8f;
  /* 10003a56 movzx ecx, cl */ { ecx = (u32)((ecx & 0xffu)); }
  /* 10003a59 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10003a5a lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 10003a5e push 0x10008234 */ { u32 v_ = 0x10008234u; esp -= 4; M32(esp) = v_; }
  /* 10003a63 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10003a64 call 0x10007038 */ esp -= 4; M32(esp) = 0x10003a69u; SAVEALL; F_10007038(c); ABI_CHECK(0x10007038u, 0x10003a64u); RETCHK(0x10003a69u, 0x10003a64u); LOADALL;
  /* 10003a69 lea eax, [esp + 0x18] */ eax = (u32)((u32)(esp + 0x18u));
  /* 10003a6d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003a70 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_10003a73:;
  /* 10003a73 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10003a75 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10003a76 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10003a78 jne 0x10003a73 */ if (!ZF_) goto L_10003a73;
  /* 10003a7a sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10003a7c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003a7d lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 10003a81 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003a82 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10003a84 call 0x10006ad0 */ esp -= 4; M32(esp) = 0x10003a89u; SAVEALL; F_10006ad0(c); ABI_CHECK(0x10006ad0u, 0x10003a84u); RETCHK(0x10003a89u, 0x10003a84u); LOADALL;
  /* 10003a89 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10003a8a jmp 0x10003940 */ goto L_10003940;
L_10003a8f:;
  /* 10003a8f mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 10003a93 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10003a94 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10003a96 call 0x100037d0 */ esp -= 4; M32(esp) = 0x10003a9bu; SAVEALL; F_100037d0(c); ABI_CHECK(0x100037d0u, 0x10003a96u); RETCHK(0x10003a9bu, 0x10003a96u); LOADALL;
  /* 10003a9b inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10003a9c jmp 0x10003940 */ goto L_10003940;
L_10003aa1:;
  /* 10003aa1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10003aa2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10003aa3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10003aa4 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003aa7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10003ab0(CPU *c) {
  NATIVE_HOOK(0x10003ab0u) REGS; LOADALL;
L_10003ab0:;
  /* 10003ab0 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10003ab4 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10003ab6 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10003ab9 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10003abc mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10003abf xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10003ac1 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 10003ac4 mov dword ptr [eax], 0x10008240 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x10008240u); }
  /* 10003aca mov dword ptr [eax + 0x24], ecx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(ecx); }
  /* 10003acd mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 10003ad0 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 10003ad3 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 10003ad6 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 10003ad9 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 10003adc mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 10003adf mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 10003ae2 mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 10003ae5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10003af0(CPU *c) {
  NATIVE_HOOK(0x10003af0u) REGS; LOADALL;
L_10003af0:;
  /* 10003af0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10003af2 push 0x10007483 */ { u32 v_ = 0x10007483u; esp -= 4; M32(esp) = v_; }
  /* 10003af7 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10003afd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003afe mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10003b05 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10003b06 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10003b07 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003b08 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003b09 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10003b0b mov dword ptr [esp + 0xc], edi */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(edi); }
  /* 10003b0f mov dword ptr [edi], 0x10008240 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x10008240u); }
  /* 10003b15 mov esi, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); esi = (u32)(M32(m_)); }
  /* 10003b18 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10003b1a cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003b1c mov dword ptr [esp + 0x18], 1 */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(0x1u); }
  /* 10003b24 je 0x10003b35 */ if (ZF_) goto L_10003b35;
L_10003b26:;
  /* 10003b26 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10003b28 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10003b2a mov esi, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); esi = (u32)(M32(m_)); }
  /* 10003b2d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10003b2f call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10003b31u; SAVEALL; call_ind(c, t_); RETCHK(0x10003b31u, 0x10003b2fu); LOADALL; }
  /* 10003b31 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003b33 jne 0x10003b26 */ if (!ZF_) goto L_10003b26;
L_10003b35:;
  /* 10003b35 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 10003b38 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003b3a mov byte ptr [esp + 0x18], bl */ { const u32 m_ = (u32)(esp + 0x18u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10003b3e je 0x10003b49 */ if (ZF_) goto L_10003b49;
  /* 10003b40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003b41 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10003b46u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10003b41u); RETCHK(0x10003b46u, 0x10003b41u); LOADALL;
  /* 10003b46 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10003b49:;
  /* 10003b49 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10003b4d mov dword ptr [edi + 0x20], ebx */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 10003b50 mov dword ptr [edi + 0x24], ebx */ { const u32 m_ = (u32)(edi + 0x24u); M32(m_) = (u32)(ebx); }
  /* 10003b53 mov dword ptr [edi + 0x28], ebx */ { const u32 m_ = (u32)(edi + 0x28u); M32(m_) = (u32)(ebx); }
  /* 10003b56 mov dword ptr [edi], 0x100081a0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x100081a0u); }
  /* 10003b5c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10003b5d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10003b5e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10003b5f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10003b66 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003b69 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10003b70(CPU *c) {
  NATIVE_HOOK(0x10003b70u) REGS; LOADALL;
L_10003b70:;
  /* 10003b70 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10003b76 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10003b78 push 0x10007498 */ { u32 v_ = 0x10007498u; esp -= 4; M32(esp) = v_; }
  /* 10003b7d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003b7e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10003b85 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003b88 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10003b89 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10003b8a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003b8b mov esi, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); esi = (u32)(M32(m_)); }
  /* 10003b8e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003b8f xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10003b91 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003b93 je 0x10003be9 */ if (ZF_) goto L_10003be9;
  /* 10003b95 mov ebp, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebp = (u32)(M32(m_)); }
  /* 10003b99 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_10003ba0:;
  /* 10003ba0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10003ba1 lea ecx, [esp + 0x14] */ ecx = (u32)((u32)(esp + 0x14u));
  /* 10003ba5 call 0x10006960 */ esp -= 4; M32(esp) = 0x10003baau; SAVEALL; F_10006960(c); ABI_CHECK(0x10006960u, 0x10003ba5u); RETCHK(0x10003baau, 0x10003ba5u); LOADALL;
  /* 10003baa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003bab lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 10003bae mov dword ptr [esp + 0x28], edi */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(edi); }
  /* 10003bb2 call 0x10006d30 */ esp -= 4; M32(esp) = 0x10003bb7u; SAVEALL; F_10006d30(c); ABI_CHECK(0x10006d30u, 0x10003bb2u); RETCHK(0x10003bb7u, 0x10003bb2u); LOADALL;
  /* 10003bb7 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 10003bb9 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10003bbd cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003bbf mov dword ptr [esp + 0x24], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0xffffffffu); }
  /* 10003bc7 je 0x10003bd2 */ if (ZF_) goto L_10003bd2;
  /* 10003bc9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003bca call 0x10006e46 */ esp -= 4; M32(esp) = 0x10003bcfu; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10003bcau); RETCHK(0x10003bcfu, 0x10003bcau); LOADALL;
  /* 10003bcf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10003bd2:;
  /* 10003bd2 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10003bd4 mov dword ptr [esp + 0x10], edi */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edi); }
  /* 10003bd8 mov dword ptr [esp + 0x14], edi */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edi); }
  /* 10003bdc mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
  /* 10003be0 jne 0x10003c00 */ if (!ZF_) goto L_10003c00;
  /* 10003be2 mov esi, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); esi = (u32)(M32(m_)); }
  /* 10003be5 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003be7 jne 0x10003ba0 */ if (!ZF_) goto L_10003ba0;
L_10003be9:;
  /* 10003be9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10003bea pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10003beb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10003bec xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10003bee pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10003bef mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10003bf3 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10003bfa add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003bfd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10003c00:;
  /* 10003c00 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10003c04 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10003c05 mov eax, esi */ { eax = (u32)(esi); }
  /* 10003c07 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10003c08 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10003c09 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10003c0a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10003c11 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003c14 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10003c20(CPU *c) {
  NATIVE_HOOK(0x10003c20u) REGS; LOADALL;
L_10003c20:;
  /* 10003c20 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10003c21 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003c22 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003c23 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10003c25 mov esi, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); esi = (u32)(M32(m_)); }
  /* 10003c28 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10003c2a cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003c2c je 0x10003c3f */ if (ZF_) goto L_10003c3f;
  /* 10003c2e mov edi, edi */ { edi = (u32)(edi); }
L_10003c30:;
  /* 10003c30 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10003c32 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10003c34 mov esi, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); esi = (u32)(M32(m_)); }
  /* 10003c37 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10003c39 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10003c3bu; SAVEALL; call_ind(c, t_); RETCHK(0x10003c3bu, 0x10003c39u); LOADALL; }
  /* 10003c3b cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003c3d jne 0x10003c30 */ if (!ZF_) goto L_10003c30;
L_10003c3f:;
  /* 10003c3f mov dword ptr [edi + 0x18], ebx */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 10003c42 mov dword ptr [edi + 0x1c], ebx */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 10003c45 lea esi, [edi + 0x34] */ esi = (u32)((u32)(edi + 0x34u));
L_10003c48:;
  /* 10003c48 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 10003c4b cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003c4d je 0x10003c92 */ if (ZF_) goto L_10003c92;
  /* 10003c4f cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003c51 je 0x10003c92 */ if (ZF_) goto L_10003c92;
  /* 10003c53 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10003c55 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003c57 sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 10003c5a dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10003c5b and ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10003c5d cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003c5f je 0x10003c86 */ if (ZF_) goto L_10003c86;
L_10003c61:;
  /* 10003c61 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003c63 je 0x10003c6e */ if (ZF_) goto L_10003c6e;
  /* 10003c65 mov eax, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); eax = (u32)(M32(m_)); }
  /* 10003c68 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003c6a jne 0x10003c61 */ if (!ZF_) goto L_10003c61;
  /* 10003c6c jmp 0x10003c86 */ goto L_10003c86;
L_10003c6e:;
  /* 10003c6e mov edx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); edx = (u32)(M32(m_)); }
  /* 10003c71 mov edi, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); edi = (u32)(M32(m_)); }
  /* 10003c74 mov dword ptr [edx + 0x30], edi */ { const u32 m_ = (u32)(edx + 0x30u); M32(m_) = (u32)(edi); }
  /* 10003c77 mov edx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); edx = (u32)(M32(m_)); }
  /* 10003c7a mov edi, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); edi = (u32)(M32(m_)); }
  /* 10003c7d mov dword ptr [edx + 0x2c], edi */ { const u32 m_ = (u32)(edx + 0x2cu); M32(m_) = (u32)(edi); }
  /* 10003c80 mov dword ptr [eax + 0x30], ebx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ebx); }
  /* 10003c83 mov dword ptr [eax + 0x2c], ebx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ebx); }
L_10003c86:;
  /* 10003c86 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003c88 je 0x10003c48 */ if (ZF_) goto L_10003c48;
  /* 10003c8a mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10003c8c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10003c8e call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10003c90u; SAVEALL; call_ind(c, t_); RETCHK(0x10003c90u, 0x10003c8eu); LOADALL; }
  /* 10003c90 jmp 0x10003c48 */ goto L_10003c48;
L_10003c92:;
  /* 10003c92 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10003c93 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10003c94 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10003c95 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10003ca0(CPU *c) {
  NATIVE_HOOK(0x10003ca0u) REGS; LOADALL;
L_10003ca0:;
  /* 10003ca0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10003ca1 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10003ca5 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003ca7 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10003ca8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003ca9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003caa mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 10003cae mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 10003cb0 jle 0x10003cc5 */ if ((ZF_|LT_)) goto L_10003cc5;
  /* 10003cb2 mov esi, ebx */ { esi = (u32)(ebx); }
L_10003cb4:;
  /* 10003cb4 push 0x100081c0 */ { u32 v_ = 0x100081c0u; esp -= 4; M32(esp) = v_; }
  /* 10003cb9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003cba call 0x10007032 */ esp -= 4; M32(esp) = 0x10003cbfu; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x10003cbau); RETCHK(0x10003cbfu, 0x10003cbau); LOADALL;
  /* 10003cbf add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003cc2 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10003cc3 jne 0x10003cb4 */ if (!ZF_) goto L_10003cb4;
L_10003cc5:;
  /* 10003cc5 mov eax, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); eax = (u32)(M32(m_)); }
  /* 10003cc8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003cca je 0x10003cd1 */ if (ZF_) goto L_10003cd1;
  /* 10003ccc mov eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); eax = (u32)(M32(m_)); }
  /* 10003ccf jmp 0x10003cd6 */ goto L_10003cd6;
L_10003cd1:;
  /* 10003cd1 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_10003cd6:;
  /* 10003cd6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003cd7 push 0x10008268 */ { u32 v_ = 0x10008268u; esp -= 4; M32(esp) = v_; }
  /* 10003cdc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003cdd call 0x10007032 */ esp -= 4; M32(esp) = 0x10003ce2u; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x10003cddu); RETCHK(0x10003ce2u, 0x10003cddu); LOADALL;
  /* 10003ce2 mov esi, dword ptr [ebp + 0x64] */ { const u32 m_ = (u32)(ebp + 0x64u); esi = (u32)(M32(m_)); }
  /* 10003ce5 lea eax, [ebp + 0x34] */ eax = (u32)((u32)(ebp + 0x34u));
  /* 10003ce8 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003ceb cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003ced je 0x10003d2d */ if (ZF_) goto L_10003d2d;
  /* 10003cef test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003cf1 je 0x10003d2d */ if (ZF_) goto L_10003d2d;
L_10003cf3:;
  /* 10003cf3 push 0x10008264 */ { u32 v_ = 0x10008264u; esp -= 4; M32(esp) = v_; }
  /* 10003cf8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003cf9 call 0x10007032 */ esp -= 4; M32(esp) = 0x10003cfeu; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x10003cf9u); RETCHK(0x10003cfeu, 0x10003cf9u); LOADALL;
  /* 10003cfe mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10003d00 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003d03 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10003d04 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003d05 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10003d07 call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10003d0au; SAVEALL; call_ind(c, t_); RETCHK(0x10003d0au, 0x10003d07u); LOADALL; }
  /* 10003d0a mov esi, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); esi = (u32)(M32(m_)); }
  /* 10003d0d mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 10003d10 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003d12 je 0x10003d1b */ if (ZF_) goto L_10003d1b;
  /* 10003d14 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 10003d17 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003d19 jne 0x10003d29 */ if (!ZF_) goto L_10003d29;
L_10003d1b:;
  /* 10003d1b mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 10003d1e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003d20 je 0x10003d2d */ if (ZF_) goto L_10003d2d;
  /* 10003d22 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10003d25 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003d27 je 0x10003d2d */ if (ZF_) goto L_10003d2d;
L_10003d29:;
  /* 10003d29 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003d2b jne 0x10003cf3 */ if (!ZF_) goto L_10003cf3;
L_10003d2d:;
  /* 10003d2d mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10003d30 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003d32 jne 0x10003d49 */ if (!ZF_) goto L_10003d49;
  /* 10003d34 push 0x10008260 */ { u32 v_ = 0x10008260u; esp -= 4; M32(esp) = v_; }
  /* 10003d39 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003d3a call 0x10007032 */ esp -= 4; M32(esp) = 0x10003d3fu; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x10003d3au); RETCHK(0x10003d3fu, 0x10003d3au); LOADALL;
  /* 10003d3f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003d42 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10003d43 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10003d44 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10003d45 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10003d46 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10003d49:;
  /* 10003d49 cmp eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003d4c jne 0x10003d79 */ if (!ZF_) goto L_10003d79;
  /* 10003d4e cmp dword ptr [eax + 0x14], 4 */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003d52 jne 0x10003d79 */ if (!ZF_) goto L_10003d79;
  /* 10003d54 push 0x1000821c */ { u32 v_ = 0x1000821cu; esp -= 4; M32(esp) = v_; }
  /* 10003d59 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003d5a call 0x10007032 */ esp -= 4; M32(esp) = 0x10003d5fu; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x10003d5au); RETCHK(0x10003d5fu, 0x10003d5au); LOADALL;
  /* 10003d5f mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 10003d62 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10003d64 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003d67 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10003d68 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10003d69 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003d6a call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10003d6du; SAVEALL; call_ind(c, t_); RETCHK(0x10003d6du, 0x10003d6au); LOADALL; }
  /* 10003d6d mov eax, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); eax = (u32)(M32(m_)); }
  /* 10003d70 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003d72 je 0x10003ded */ if (ZF_) goto L_10003ded;
  /* 10003d74 mov eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); eax = (u32)(M32(m_)); }
  /* 10003d77 jmp 0x10003df2 */ goto L_10003df2;
L_10003d79:;
  /* 10003d79 push 0x1000821c */ { u32 v_ = 0x1000821cu; esp -= 4; M32(esp) = v_; }
  /* 10003d7e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003d7f call 0x10007032 */ esp -= 4; M32(esp) = 0x10003d84u; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x10003d7fu); RETCHK(0x10003d84u, 0x10003d7fu); LOADALL;
  /* 10003d84 mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
  /* 10003d87 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003d8a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003d8c je 0x10003dbb */ if (ZF_) goto L_10003dbb;
  /* 10003d8e inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10003d8f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003d91 je 0x10003d99 */ if (ZF_) goto L_10003d99;
L_10003d93:;
  /* 10003d93 cmp dword ptr [esi + 0x14], 4 */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003d97 je 0x10003da7 */ if (ZF_) goto L_10003da7;
L_10003d99:;
  /* 10003d99 push 0x100081b0 */ { u32 v_ = 0x100081b0u; esp -= 4; M32(esp) = v_; }
  /* 10003d9e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003d9f call 0x10007032 */ esp -= 4; M32(esp) = 0x10003da4u; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x10003d9fu); RETCHK(0x10003da4u, 0x10003d9fu); LOADALL;
  /* 10003da4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10003da7:;
  /* 10003da7 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10003da9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10003daa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003dab mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10003dad call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10003db0u; SAVEALL; call_ind(c, t_); RETCHK(0x10003db0u, 0x10003dadu); LOADALL; }
  /* 10003db0 mov esi, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); esi = (u32)(M32(m_)); }
  /* 10003db3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003db5 jne 0x10003d93 */ if (!ZF_) goto L_10003d93;
  /* 10003db7 mov ebx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebx = (u32)(M32(m_)); }
L_10003dbb:;
  /* 10003dbb push 0x100081b0 */ { u32 v_ = 0x100081b0u; esp -= 4; M32(esp) = v_; }
  /* 10003dc0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003dc1 call 0x10007032 */ esp -= 4; M32(esp) = 0x10003dc6u; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x10003dc1u); RETCHK(0x10003dc6u, 0x10003dc1u); LOADALL;
  /* 10003dc6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003dc9 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003dcb jle 0x10003de1 */ if ((ZF_|LT_)) goto L_10003de1;
  /* 10003dcd mov esi, ebx */ { esi = (u32)(ebx); }
  /* 10003dcf nop */ ;
L_10003dd0:;
  /* 10003dd0 push 0x100081c0 */ { u32 v_ = 0x100081c0u; esp -= 4; M32(esp) = v_; }
  /* 10003dd5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003dd6 call 0x10007032 */ esp -= 4; M32(esp) = 0x10003ddbu; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x10003dd6u); RETCHK(0x10003ddbu, 0x10003dd6u); LOADALL;
  /* 10003ddb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003dde dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10003ddf jne 0x10003dd0 */ if (!ZF_) goto L_10003dd0;
L_10003de1:;
  /* 10003de1 mov eax, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); eax = (u32)(M32(m_)); }
  /* 10003de4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003de6 je 0x10003ded */ if (ZF_) goto L_10003ded;
  /* 10003de8 mov eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); eax = (u32)(M32(m_)); }
  /* 10003deb jmp 0x10003df2 */ goto L_10003df2;
L_10003ded:;
  /* 10003ded mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_10003df2:;
  /* 10003df2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003df3 push 0x10008258 */ { u32 v_ = 0x10008258u; esp -= 4; M32(esp) = v_; }
  /* 10003df8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003df9 call 0x10007032 */ esp -= 4; M32(esp) = 0x10003dfeu; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x10003df9u); RETCHK(0x10003dfeu, 0x10003df9u); LOADALL;
  /* 10003dfe add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003e01 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10003e02 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10003e03 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10003e04 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10003e05 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10003e10(CPU *c) {
  NATIVE_HOOK(0x10003e10u) REGS; LOADALL;
L_10003e10:;
  /* 10003e10 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10003e11 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003e12 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003e13 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10003e17 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10003e19 push 0x10008220 */ { u32 v_ = 0x10008220u; esp -= 4; M32(esp) = v_; }
  /* 10003e1e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10003e20 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10003e25u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10003e20u); RETCHK(0x10003e25u, 0x10003e20u); LOADALL;
  /* 10003e25 mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 10003e28 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003e2a je 0x10003e31 */ if (ZF_) goto L_10003e31;
  /* 10003e2c mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 10003e2f jmp 0x10003e36 */ goto L_10003e36;
L_10003e31:;
  /* 10003e31 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_10003e36:;
  /* 10003e36 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003e37 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10003e39 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10003e3eu; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10003e39u); RETCHK(0x10003e3eu, 0x10003e39u); LOADALL;
  /* 10003e3e mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 10003e41 lea eax, [ebx + 0x34] */ eax = (u32)((u32)(ebx + 0x34u));
  /* 10003e44 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10003e46 je 0x10003e87 */ if (ZF_) goto L_10003e87;
  /* 10003e48 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003e4a je 0x10003e87 */ if (ZF_) goto L_10003e87;
  /* 10003e4c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_10003e50:;
  /* 10003e50 push 0x10008264 */ { u32 v_ = 0x10008264u; esp -= 4; M32(esp) = v_; }
  /* 10003e55 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10003e57 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10003e5cu; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10003e57u); RETCHK(0x10003e5cu, 0x10003e57u); LOADALL;
  /* 10003e5c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10003e5e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003e5f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10003e61 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10003e64u; SAVEALL; call_ind(c, t_); RETCHK(0x10003e64u, 0x10003e61u); LOADALL; }
  /* 10003e64 mov esi, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); esi = (u32)(M32(m_)); }
  /* 10003e67 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 10003e6a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003e6c je 0x10003e75 */ if (ZF_) goto L_10003e75;
  /* 10003e6e mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 10003e71 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003e73 jne 0x10003e83 */ if (!ZF_) goto L_10003e83;
L_10003e75:;
  /* 10003e75 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 10003e78 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003e7a je 0x10003e87 */ if (ZF_) goto L_10003e87;
  /* 10003e7c mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10003e7f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003e81 je 0x10003e87 */ if (ZF_) goto L_10003e87;
L_10003e83:;
  /* 10003e83 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003e85 jne 0x10003e50 */ if (!ZF_) goto L_10003e50;
L_10003e87:;
  /* 10003e87 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 10003e8a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003e8c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10003e8e je 0x10003eff */ if (ZF_) goto L_10003eff;
  /* 10003e90 push 0x1000821c */ { u32 v_ = 0x1000821cu; esp -= 4; M32(esp) = v_; }
  /* 10003e95 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10003e9au; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10003e95u); RETCHK(0x10003e9au, 0x10003e95u); LOADALL;
  /* 10003e9a mov esi, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); esi = (u32)(M32(m_)); }
  /* 10003e9d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003e9f je 0x10003eb0 */ if (ZF_) goto L_10003eb0;
L_10003ea1:;
  /* 10003ea1 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 10003ea3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003ea4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10003ea6 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10003ea9u; SAVEALL; call_ind(c, t_); RETCHK(0x10003ea9u, 0x10003ea6u); LOADALL; }
  /* 10003ea9 mov esi, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); esi = (u32)(M32(m_)); }
  /* 10003eac test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003eae jne 0x10003ea1 */ if (!ZF_) goto L_10003ea1;
L_10003eb0:;
  /* 10003eb0 push 0x1000826c */ { u32 v_ = 0x1000826cu; esp -= 4; M32(esp) = v_; }
  /* 10003eb5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10003eb7 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10003ebcu; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10003eb7u); RETCHK(0x10003ebcu, 0x10003eb7u); LOADALL;
  /* 10003ebc mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 10003ebf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003ec1 je 0x10003ee0 */ if (ZF_) goto L_10003ee0;
  /* 10003ec3 mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 10003ec6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003ec7 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10003ec9 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10003eceu; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10003ec9u); RETCHK(0x10003eceu, 0x10003ec9u); LOADALL;
  /* 10003ece push 0x1000821c */ { u32 v_ = 0x1000821cu; esp -= 4; M32(esp) = v_; }
  /* 10003ed3 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10003ed5 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10003edau; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10003ed5u); RETCHK(0x10003edau, 0x10003ed5u); LOADALL;
  /* 10003eda pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10003edb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10003edc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10003edd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10003ee0:;
  /* 10003ee0 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
  /* 10003ee5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003ee6 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10003ee8 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10003eedu; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10003ee8u); RETCHK(0x10003eedu, 0x10003ee8u); LOADALL;
  /* 10003eed push 0x1000821c */ { u32 v_ = 0x1000821cu; esp -= 4; M32(esp) = v_; }
  /* 10003ef2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10003ef4 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10003ef9u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10003ef4u); RETCHK(0x10003ef9u, 0x10003ef4u); LOADALL;
  /* 10003ef9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10003efa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10003efb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10003efc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10003eff:;
  /* 10003eff push 0x10008260 */ { u32 v_ = 0x10008260u; esp -= 4; M32(esp) = v_; }
  /* 10003f04 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10003f09u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10003f04u); RETCHK(0x10003f09u, 0x10003f04u); LOADALL;
  /* 10003f09 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10003f0a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10003f0b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10003f0c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10003f10(CPU *c) {
  NATIVE_HOOK(0x10003f10u) REGS; LOADALL;
L_10003f10:;
  /* 10003f10 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10003f12 push 0x100074c3 */ { u32 v_ = 0x100074c3u; esp -= 4; M32(esp) = v_; }
  /* 10003f17 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10003f1d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003f1e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10003f25 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10003f26 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10003f27 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10003f29 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003f2a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10003f2c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10003f2f mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 10003f32 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 10003f35 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 10003f38 mov dword ptr [esi + 0x24], ebx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ebx); }
  /* 10003f3b mov dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 10003f3e mov dword ptr [esi + 0x28], ebx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(ebx); }
  /* 10003f41 mov dword ptr [esp + 8], esi */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(esi); }
  /* 10003f45 mov dword ptr [esi + 0x10], ebx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ebx); }
  /* 10003f48 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 10003f4b mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 10003f4e mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 10003f51 mov dword ptr [esi + 0x2c], ebx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 10003f54 mov dword ptr [esi + 0x30], ebx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(ebx); }
  /* 10003f57 lea ecx, [esi + 0x3c] */ ecx = (u32)((u32)(esi + 0x3cu));
  /* 10003f5a mov dword ptr [esi], 0x1000812c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1000812cu); }
  /* 10003f60 mov dword ptr [esp + 0x14], ebx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ebx); }
  /* 10003f64 mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 10003f67 mov dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ebx); }
  /* 10003f69 mov dword ptr [ecx + 8], ebx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10003f6c mov dword ptr [esi + 0x50], eax */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(eax); }
  /* 10003f6f mov dword ptr [esi + 0x4c], eax */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(eax); }
  /* 10003f72 push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 10003f77 mov byte ptr [esp + 0x18], 1 */ { const u32 m_ = (u32)(esp + 0x18u); M8(m_) = (u8)(0x1u); }
  /* 10003f7c mov dword ptr [esi + 0x48], 4 */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(0x4u); }
  /* 10003f83 mov byte ptr [esi + 0x34], bl */ { const u32 m_ = (u32)(esi + 0x34u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10003f86 mov dword ptr [esi + 0x38], ebx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ebx); }
  /* 10003f89 call 0x100069c0 */ esp -= 4; M32(esp) = 0x10003f8eu; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10003f89u); RETCHK(0x10003f8eu, 0x10003f89u); LOADALL;
  /* 10003f8e mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10003f92 mov dword ptr [esi + 0x50], ebx */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(ebx); }
  /* 10003f95 mov dword ptr [esi + 0x4c], ebx */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(ebx); }
  /* 10003f98 mov eax, esi */ { eax = (u32)(esi); }
  /* 10003f9a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10003f9b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10003f9c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10003fa3 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003fa6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10003fb0(CPU *c) {
  NATIVE_HOOK(0x10003fb0u) REGS; LOADALL;
L_10003fb0:;
  /* 10003fb0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10003fb2 push 0x1000758b */ { u32 v_ = 0x1000758bu; esp -= 4; M32(esp) = v_; }
  /* 10003fb7 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10003fbd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10003fbe mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10003fc5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10003fc6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10003fc7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10003fc8 push 0x54 */ { u32 v_ = 0x54u; esp -= 4; M32(esp) = v_; }
  /* 10003fca mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10003fcc call 0x10006e4c */ esp -= 4; M32(esp) = 0x10003fd1u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x10003fccu); RETCHK(0x10003fd1u, 0x10003fccu); LOADALL;
  /* 10003fd1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10003fd4 mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 10003fd8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003fda mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 10003fe2 je 0x10003fef */ if (ZF_) goto L_10003fef;
  /* 10003fe4 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10003fe6 call 0x10003f10 */ esp -= 4; M32(esp) = 0x10003febu; SAVEALL; F_10003f10(c); ABI_CHECK(0x10003f10u, 0x10003fe6u); RETCHK(0x10003febu, 0x10003fe6u); LOADALL;
  /* 10003feb mov esi, eax */ { esi = (u32)(eax); }
  /* 10003fed jmp 0x10003ff1 */ goto L_10003ff1;
L_10003fef:;
  /* 10003fef xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_10003ff1:;
  /* 10003ff1 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10003ff3 mov dword ptr [esp + 0x14], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0xffffffffu); }
  /* 10003ffb jne 0x10004010 */ if (!ZF_) goto L_10004010;
  /* 10003ffd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10003ffe xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004000 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004001 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10004005 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 1000400c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000400f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10004010:;
  /* 10004010 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004011 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10004013 call 0x10003470 */ esp -= 4; M32(esp) = 0x10004018u; SAVEALL; F_10003470(c); ABI_CHECK(0x10003470u, 0x10004013u); RETCHK(0x10004018u, 0x10004013u); LOADALL;
  /* 10004018 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1000401c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000401d mov eax, esi */ { eax = (u32)(esi); }
  /* 1000401f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004020 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10004027 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000402a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004030(CPU *c) {
  NATIVE_HOOK(0x10004030u) REGS; LOADALL;
L_10004030:;
  /* 10004030 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10004032 push 0x100074e0 */ { u32 v_ = 0x100074e0u; esp -= 4; M32(esp) = v_; }
  /* 10004037 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1000403d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000403e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10004045 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004048 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10004049 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1000404b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000404c mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1000404e mov dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ebx); }
  /* 10004052 mov dword ptr [esp + 0x14], ebx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ebx); }
  /* 10004056 mov dword ptr [esp + 0x1c], ebx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 1000405a mov dword ptr [esp + 0x28], ebx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ebx); }
  /* 1000405e mov dword ptr [esp + 0xc], ebx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 10004062 mov dword ptr [esp + 8], ebx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10004066 mov dword ptr [esp + 0x10], ebx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 1000406a lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 1000406e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000406f lea ecx, [esi + 0x14] */ ecx = (u32)((u32)(esi + 0x14u));
  /* 10004072 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10004073 mov byte ptr [esp + 0x30], 1 */ { const u32 m_ = (u32)(esp + 0x30u); M8(m_) = (u8)(0x1u); }
  /* 10004078 call 0x10003930 */ esp -= 4; M32(esp) = 0x1000407du; SAVEALL; F_10003930(c); ABI_CHECK(0x10003930u, 0x10004078u); RETCHK(0x1000407du, 0x10004078u); LOADALL;
  /* 1000407d lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 10004081 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10004082 add esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004085 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004086 call 0x10003930 */ esp -= 4; M32(esp) = 0x1000408bu; SAVEALL; F_10003930(c); ABI_CHECK(0x10003930u, 0x10004086u); RETCHK(0x1000408bu, 0x10004086u); LOADALL;
  /* 1000408b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000408e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1000408f push 0x22 */ { u32 v_ = 0x22u; esp -= 4; M32(esp) = v_; }
  /* 10004091 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10004093 call 0x10006cf0 */ esp -= 4; M32(esp) = 0x10004098u; SAVEALL; F_10006cf0(c); ABI_CHECK(0x10006cf0u, 0x10004093u); RETCHK(0x10004098u, 0x10004093u); LOADALL;
  /* 10004098 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1000409c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000409f mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 100040a3 jne 0x100040cb */ if (!ZF_) goto L_100040cb;
  /* 100040a5 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100040a7 jne 0x100040ae */ if (!ZF_) goto L_100040ae;
  /* 100040a9 mov ecx, 0x10008158 */ { ecx = (u32)(0x10008158u); }
L_100040ae:;
  /* 100040ae cmp dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100040b2 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 100040b6 jne 0x100040bd */ if (!ZF_) goto L_100040bd;
  /* 100040b8 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_100040bd:;
  /* 100040bd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100040be push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100040bf mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 100040c3 push 0x10008278 */ { u32 v_ = 0x10008278u; esp -= 4; M32(esp) = v_; }
  /* 100040c8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100040c9 jmp 0x100040ef */ goto L_100040ef;
L_100040cb:;
  /* 100040cb cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100040cd jne 0x100040d4 */ if (!ZF_) goto L_100040d4;
  /* 100040cf mov ecx, 0x10008158 */ { ecx = (u32)(0x10008158u); }
L_100040d4:;
  /* 100040d4 cmp dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100040d8 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 100040dc jne 0x100040e3 */ if (!ZF_) goto L_100040e3;
  /* 100040de mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_100040e3:;
  /* 100040e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100040e4 mov ecx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 100040e8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100040e9 push 0x10008270 */ { u32 v_ = 0x10008270u; esp -= 4; M32(esp) = v_; }
  /* 100040ee push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
L_100040ef:;
  /* 100040ef call 0x10007032 */ esp -= 4; M32(esp) = 0x100040f4u; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x100040efu); RETCHK(0x100040f4u, 0x100040efu); LOADALL;
  /* 100040f4 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 100040f8 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100040fb cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100040fd mov byte ptr [esp + 0x28], bl */ { const u32 m_ = (u32)(esp + 0x28u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10004101 je 0x1000410c */ if (ZF_) goto L_1000410c;
  /* 10004103 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10004104 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10004109u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10004104u); RETCHK(0x10004109u, 0x10004104u); LOADALL;
  /* 10004109 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1000410c:;
  /* 1000410c mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10004110 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004111 mov dword ptr [esp + 4], ebx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(ebx); }
  /* 10004115 mov dword ptr [esp + 8], ebx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10004119 mov dword ptr [esp + 0xc], ebx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 1000411d cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000411f mov dword ptr [esp + 0x24], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0xffffffffu); }
  /* 10004127 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10004128 je 0x10004133 */ if (ZF_) goto L_10004133;
  /* 1000412a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000412b call 0x10006e46 */ esp -= 4; M32(esp) = 0x10004130u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x1000412bu); RETCHK(0x10004130u, 0x1000412bu); LOADALL;
  /* 10004130 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10004133:;
  /* 10004133 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 10004137 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 1000413e add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004141 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10004150(CPU *c) {
  NATIVE_HOOK(0x10004150u) REGS; LOADALL;
L_10004150:;
  /* 10004150 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10004152 push 0x10007498 */ { u32 v_ = 0x10007498u; esp -= 4; M32(esp) = v_; }
  /* 10004157 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1000415d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000415e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10004165 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004168 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004169 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1000416b mov dword ptr [esp + 8], esi */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(esi); }
  /* 1000416f mov dword ptr [esp + 4], esi */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(esi); }
  /* 10004173 mov dword ptr [esp + 0xc], esi */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(esi); }
  /* 10004177 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 1000417b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000417c add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1000417f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10004180 mov dword ptr [esp + 0x20], esi */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(esi); }
  /* 10004184 call 0x10003930 */ esp -= 4; M32(esp) = 0x10004189u; SAVEALL; F_10003930(c); ABI_CHECK(0x10003930u, 0x10004184u); RETCHK(0x10004189u, 0x10004184u); LOADALL;
  /* 10004189 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 1000418d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004190 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004192 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10004196 jne 0x1000419d */ if (!ZF_) goto L_1000419d;
  /* 10004198 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_1000419d:;
  /* 1000419d mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 100041a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100041a2 push 0x10008298 */ { u32 v_ = 0x10008298u; esp -= 4; M32(esp) = v_; }
  /* 100041a7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100041a8 call 0x10007032 */ esp -= 4; M32(esp) = 0x100041adu; SAVEALL; F_10007032(c); ABI_CHECK(0x10007032u, 0x100041a8u); RETCHK(0x100041adu, 0x100041a8u); LOADALL;
  /* 100041ad mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 100041b1 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100041b4 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100041b6 mov dword ptr [esp + 0x18], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(0xffffffffu); }
  /* 100041be pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100041bf je 0x100041ca */ if (ZF_) goto L_100041ca;
  /* 100041c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100041c2 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100041c7u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100041c2u); RETCHK(0x100041c7u, 0x100041c2u); LOADALL;
  /* 100041c7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_100041ca:;
  /* 100041ca mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 100041ce mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 100041d5 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100041d8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_100041f0(CPU *c) {
  NATIVE_HOOK(0x100041f0u) REGS; LOADALL;
L_100041f0:;
  /* 100041f0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 100041f2 push 0x10007498 */ { u32 v_ = 0x10007498u; esp -= 4; M32(esp) = v_; }
  /* 100041f7 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 100041fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100041fe mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10004205 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004208 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10004209 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000420a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000420b mov esi, dword ptr [ecx + 0x30] */ { const u32 m_ = (u32)(ecx + 0x30u); esi = (u32)(M32(m_)); }
  /* 1000420e cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004210 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10004211 mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 10004215 je 0x10004271 */ if (ZF_) goto L_10004271;
  /* 10004217 mov ebp, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebp = (u32)(M32(m_)); }
  /* 1000421b jmp 0x10004220 */ goto L_10004220;
L_10004220:;
  /* 10004220 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10004221 lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 10004225 call 0x10006960 */ esp -= 4; M32(esp) = 0x1000422au; SAVEALL; F_10006960(c); ABI_CHECK(0x10006960u, 0x10004225u); RETCHK(0x1000422au, 0x10004225u); LOADALL;
  /* 1000422a lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 1000422e xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10004230 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10004231 lea ecx, [esi + 0x14] */ ecx = (u32)((u32)(esi + 0x14u));
  /* 10004234 mov dword ptr [esp + 0x2c], edi */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(edi); }
  /* 10004238 call 0x10006d30 */ esp -= 4; M32(esp) = 0x1000423du; SAVEALL; F_10006d30(c); ABI_CHECK(0x10006d30u, 0x10004238u); RETCHK(0x1000423du, 0x10004238u); LOADALL;
  /* 1000423d mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 1000423f mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10004243 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004245 mov dword ptr [esp + 0x28], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0xffffffffu); }
  /* 1000424d je 0x10004258 */ if (ZF_) goto L_10004258;
  /* 1000424f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10004250 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10004255u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10004250u); RETCHK(0x10004255u, 0x10004250u); LOADALL;
  /* 10004255 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10004258:;
  /* 10004258 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000425a mov dword ptr [esp + 0x14], edi */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edi); }
  /* 1000425e mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
  /* 10004262 mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 10004266 jne 0x10004288 */ if (!ZF_) goto L_10004288;
  /* 10004268 mov esi, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); esi = (u32)(M32(m_)); }
  /* 1000426b cmp esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000426f jne 0x10004220 */ if (!ZF_) goto L_10004220;
L_10004271:;
  /* 10004271 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004272 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004273 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10004274 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004276 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10004277 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1000427b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10004282 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004285 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10004288:;
  /* 10004288 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 1000428c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000428d mov eax, esi */ { eax = (u32)(esi); }
  /* 1000428f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004290 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10004291 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10004292 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10004299 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000429c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_100042a0(CPU *c) {
  NATIVE_HOOK(0x100042a0u) REGS; LOADALL;
L_100042a0:;
  /* 100042a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100042a1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 100042a3 call 0x100038b0 */ esp -= 4; M32(esp) = 0x100042a8u; SAVEALL; F_100038b0(c); ABI_CHECK(0x100038b0u, 0x100042a3u); RETCHK(0x100042a8u, 0x100042a3u); LOADALL;
  /* 100042a8 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100042ad je 0x100042b8 */ if (ZF_) goto L_100042b8;
  /* 100042af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100042b0 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100042b5u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100042b0u); RETCHK(0x100042b5u, 0x100042b0u); LOADALL;
  /* 100042b5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_100042b8:;
  /* 100042b8 mov eax, esi */ { eax = (u32)(esi); }
  /* 100042ba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100042bb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_100042c0(CPU *c) {
  NATIVE_HOOK(0x100042c0u) REGS; LOADALL;
L_100042c0:;
  /* 100042c0 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 100042c2 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 100042c5 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 100042c8 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 100042cb xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 100042cd mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 100042d0 mov dword ptr [eax + 0x24], ecx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(ecx); }
  /* 100042d3 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 100042d6 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 100042d9 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 100042dc mov dword ptr [eax + 0x14], 2 */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(0x2u); }
  /* 100042e3 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 100042e6 mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 100042e9 mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 100042ec mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 100042ef mov dword ptr [eax], 0x10008280 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x10008280u); }
  /* 100042f5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004300(CPU *c) {
  NATIVE_HOOK(0x10004300u) REGS; LOADALL;
L_10004300:;
  /* 10004300 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004301 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10004303 call 0x10004320 */ esp -= 4; M32(esp) = 0x10004308u; SAVEALL; F_10004320(c); ABI_CHECK(0x10004320u, 0x10004303u); RETCHK(0x10004308u, 0x10004303u); LOADALL;
  /* 10004308 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000430d je 0x10004318 */ if (ZF_) goto L_10004318;
  /* 1000430f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004310 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10004315u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10004310u); RETCHK(0x10004315u, 0x10004310u); LOADALL;
  /* 10004315 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10004318:;
  /* 10004318 mov eax, esi */ { eax = (u32)(esi); }
  /* 1000431a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000431b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10004320(CPU *c) {
  NATIVE_HOOK(0x10004320u) REGS; LOADALL;
L_10004320:;
  /* 10004320 mov dword ptr [ecx], 0x10008280 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x10008280u); }
  /* 10004326 jmp 0x10003af0 */ SAVEALL; F_10003af0(c); return;
}

void F_10004330(CPU *c) {
  NATIVE_HOOK(0x10004330u) REGS; LOADALL;
L_10004330:;
  /* 10004330 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10004332 push 0x100074f8 */ { u32 v_ = 0x100074f8u; esp -= 4; M32(esp) = v_; }
  /* 10004337 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1000433d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000433e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10004345 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10004346 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004349 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000434a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1000434c mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 1000434f mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 10004352 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004354 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 10004357 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 1000435a mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 1000435d mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 1000435f mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 10004362 mov dword ptr [esp + 4], esi */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(esi); }
  /* 10004366 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 10004369 mov dword ptr [esi + 0x14], 4 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x4u); }
  /* 10004370 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 10004373 mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10004376 mov dword ptr [esi + 0x2c], eax */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 10004379 mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 1000437c mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10004380 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10004384 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10004385 mov dword ptr [esi], 0x100082b4 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x100082b4u); }
  /* 1000438b call 0x100069c0 */ esp -= 4; M32(esp) = 0x10004390u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x1000438bu); RETCHK(0x10004390u, 0x1000438bu); LOADALL;
  /* 10004390 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10004394 mov eax, esi */ { eax = (u32)(esi); }
  /* 10004396 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004397 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 1000439e add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100043a1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_100043b0(CPU *c) {
  NATIVE_HOOK(0x100043b0u) REGS; LOADALL;
L_100043b0:;
  /* 100043b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100043b1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 100043b3 call 0x100043d0 */ esp -= 4; M32(esp) = 0x100043b8u; SAVEALL; F_100043d0(c); ABI_CHECK(0x100043d0u, 0x100043b3u); RETCHK(0x100043b8u, 0x100043b3u); LOADALL;
  /* 100043b8 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100043bd je 0x100043c8 */ if (ZF_) goto L_100043c8;
  /* 100043bf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100043c0 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100043c5u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100043c0u); RETCHK(0x100043c5u, 0x100043c0u); LOADALL;
  /* 100043c5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_100043c8:;
  /* 100043c8 mov eax, esi */ { eax = (u32)(esi); }
  /* 100043ca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100043cb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_100043d0(CPU *c) {
  NATIVE_HOOK(0x100043d0u) REGS; LOADALL;
L_100043d0:;
  /* 100043d0 mov dword ptr [ecx], 0x100082b4 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x100082b4u); }
  /* 100043d6 jmp 0x10003af0 */ SAVEALL; F_10003af0(c); return;
}

void F_100043e0(CPU *c) {
  NATIVE_HOOK(0x100043e0u) REGS; LOADALL;
L_100043e0:;
  /* 100043e0 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 100043e2 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 100043e5 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 100043e8 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 100043eb xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 100043ed mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 100043f0 mov dword ptr [eax + 0x24], ecx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(ecx); }
  /* 100043f3 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 100043f6 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 100043f9 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 100043fc mov dword ptr [eax + 0x14], 5 */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(0x5u); }
  /* 10004403 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 10004406 mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 10004409 mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 1000440c mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 1000440f mov dword ptr [eax], 0x1000829c */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x1000829cu); }
  /* 10004415 mov dword ptr [eax + 0x38], ecx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(ecx); }
  /* 10004418 mov dword ptr [eax + 0x34], ecx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(ecx); }
  /* 1000441b mov dword ptr [eax + 0x3c], ecx */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 1000441e mov dword ptr [eax + 0x44], ecx */ { const u32 m_ = (u32)(eax + 0x44u); M32(m_) = (u32)(ecx); }
  /* 10004421 mov dword ptr [eax + 0x40], ecx */ { const u32 m_ = (u32)(eax + 0x40u); M32(m_) = (u32)(ecx); }
  /* 10004424 mov dword ptr [eax + 0x48], ecx */ { const u32 m_ = (u32)(eax + 0x48u); M32(m_) = (u32)(ecx); }
  /* 10004427 mov dword ptr [eax + 0x50], ecx */ { const u32 m_ = (u32)(eax + 0x50u); M32(m_) = (u32)(ecx); }
  /* 1000442a mov dword ptr [eax + 0x4c], ecx */ { const u32 m_ = (u32)(eax + 0x4cu); M32(m_) = (u32)(ecx); }
  /* 1000442d mov dword ptr [eax + 0x54], ecx */ { const u32 m_ = (u32)(eax + 0x54u); M32(m_) = (u32)(ecx); }
  /* 10004430 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004440(CPU *c) {
  NATIVE_HOOK(0x10004440u) REGS; LOADALL;
L_10004440:;
  /* 10004440 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004441 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10004443 call 0x10004460 */ esp -= 4; M32(esp) = 0x10004448u; SAVEALL; F_10004460(c); ABI_CHECK(0x10004460u, 0x10004443u); RETCHK(0x10004448u, 0x10004443u); LOADALL;
  /* 10004448 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000444d je 0x10004458 */ if (ZF_) goto L_10004458;
  /* 1000444f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004450 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10004455u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10004450u); RETCHK(0x10004455u, 0x10004450u); LOADALL;
  /* 10004455 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10004458:;
  /* 10004458 mov eax, esi */ { eax = (u32)(esi); }
  /* 1000445a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000445b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10004460(CPU *c) {
  NATIVE_HOOK(0x10004460u) REGS; LOADALL;
L_10004460:;
  /* 10004460 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10004462 push 0x1000752e */ { u32 v_ = 0x1000752eu; esp -= 4; M32(esp) = v_; }
  /* 10004467 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1000446d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000446e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10004475 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10004476 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10004477 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004478 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1000447a mov dword ptr [esp + 8], esi */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(esi); }
  /* 1000447e mov dword ptr [esi], 0x1000829c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1000829cu); }
  /* 10004484 mov eax, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); eax = (u32)(M32(m_)); }
  /* 10004487 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10004489 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000448b mov dword ptr [esp + 0x14], 2 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x2u); }
  /* 10004493 je 0x1000449e */ if (ZF_) goto L_1000449e;
  /* 10004495 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10004496 call 0x10006e46 */ esp -= 4; M32(esp) = 0x1000449bu; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10004496u); RETCHK(0x1000449bu, 0x10004496u); LOADALL;
  /* 1000449b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1000449e:;
  /* 1000449e mov dword ptr [esi + 0x4c], ebx */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(ebx); }
  /* 100044a1 mov dword ptr [esi + 0x50], ebx */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(ebx); }
  /* 100044a4 mov dword ptr [esi + 0x54], ebx */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(ebx); }
  /* 100044a7 mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 100044aa cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100044ac mov byte ptr [esp + 0x14], 1 */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)(0x1u); }
  /* 100044b1 je 0x100044bc */ if (ZF_) goto L_100044bc;
  /* 100044b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100044b4 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100044b9u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100044b4u); RETCHK(0x100044b9u, 0x100044b4u); LOADALL;
  /* 100044b9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_100044bc:;
  /* 100044bc mov dword ptr [esi + 0x40], ebx */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(ebx); }
  /* 100044bf mov dword ptr [esi + 0x44], ebx */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(ebx); }
  /* 100044c2 mov dword ptr [esi + 0x48], ebx */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(ebx); }
  /* 100044c5 mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 100044c8 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100044ca mov byte ptr [esp + 0x14], bl */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 100044ce je 0x100044d9 */ if (ZF_) goto L_100044d9;
  /* 100044d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100044d1 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100044d6u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100044d1u); RETCHK(0x100044d6u, 0x100044d1u); LOADALL;
  /* 100044d6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_100044d9:;
  /* 100044d9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 100044db mov dword ptr [esi + 0x34], ebx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ebx); }
  /* 100044de mov dword ptr [esi + 0x38], ebx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ebx); }
  /* 100044e1 mov dword ptr [esi + 0x3c], ebx */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(ebx); }
  /* 100044e4 mov dword ptr [esp + 0x14], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0xffffffffu); }
  /* 100044ec call 0x10003af0 */ esp -= 4; M32(esp) = 0x100044f1u; SAVEALL; F_10003af0(c); ABI_CHECK(0x10003af0u, 0x100044ecu); RETCHK(0x100044f1u, 0x100044ecu); LOADALL;
  /* 100044f1 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 100044f5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100044f6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100044f7 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 100044fe add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004501 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004510(CPU *c) {
  NATIVE_HOOK(0x10004510u) REGS; LOADALL;
L_10004510:;
  /* 10004510 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10004512 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10004515 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10004518 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 1000451b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 1000451d mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 10004520 mov dword ptr [eax + 0x24], ecx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(ecx); }
  /* 10004523 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 10004526 mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 10004529 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 1000452c mov dword ptr [eax + 0x14], 3 */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(0x3u); }
  /* 10004533 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 10004536 mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 10004539 mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 1000453c mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 1000453f mov dword ptr [eax], 0x100082cc */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x100082ccu); }
  /* 10004545 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004550(CPU *c) {
  NATIVE_HOOK(0x10004550u) REGS; LOADALL;
L_10004550:;
  /* 10004550 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004551 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10004553 call 0x10004570 */ esp -= 4; M32(esp) = 0x10004558u; SAVEALL; F_10004570(c); ABI_CHECK(0x10004570u, 0x10004553u); RETCHK(0x10004558u, 0x10004553u); LOADALL;
  /* 10004558 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000455d je 0x10004568 */ if (ZF_) goto L_10004568;
  /* 1000455f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004560 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10004565u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10004560u); RETCHK(0x10004565u, 0x10004560u); LOADALL;
  /* 10004565 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10004568:;
  /* 10004568 mov eax, esi */ { eax = (u32)(esi); }
  /* 1000456a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000456b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10004570(CPU *c) {
  NATIVE_HOOK(0x10004570u) REGS; LOADALL;
L_10004570:;
  /* 10004570 mov dword ptr [ecx], 0x100082cc */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x100082ccu); }
  /* 10004576 jmp 0x10003af0 */ SAVEALL; F_10003af0(c); return;
}

void F_10004580(CPU *c) {
  NATIVE_HOOK(0x10004580u) REGS; LOADALL;
L_10004580:;
  /* 10004580 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10004582 push 0x10007498 */ { u32 v_ = 0x10007498u; esp -= 4; M32(esp) = v_; }
  /* 10004587 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1000458d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000458e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10004595 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004598 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004599 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1000459b mov dword ptr [esp + 8], esi */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(esi); }
  /* 1000459f mov dword ptr [esp + 4], esi */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(esi); }
  /* 100045a3 mov dword ptr [esp + 0xc], esi */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(esi); }
  /* 100045a7 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 100045ab lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 100045af push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100045b0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100045b1 mov dword ptr [esp + 0x20], esi */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(esi); }
  /* 100045b5 call 0x10003930 */ esp -= 4; M32(esp) = 0x100045bau; SAVEALL; F_10003930(c); ABI_CHECK(0x10003930u, 0x100045b5u); RETCHK(0x100045bau, 0x100045b5u); LOADALL;
  /* 100045ba mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 100045be add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100045c1 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100045c3 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 100045c7 jne 0x100045ce */ if (!ZF_) goto L_100045ce;
  /* 100045c9 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_100045ce:;
  /* 100045ce mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 100045d2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100045d3 call 0x10006be0 */ esp -= 4; M32(esp) = 0x100045d8u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x100045d3u); RETCHK(0x100045d8u, 0x100045d3u); LOADALL;
  /* 100045d8 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 100045dc cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100045de mov dword ptr [esp + 0x18], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(0xffffffffu); }
  /* 100045e6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100045e7 je 0x100045f2 */ if (ZF_) goto L_100045f2;
  /* 100045e9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100045ea call 0x10006e46 */ esp -= 4; M32(esp) = 0x100045efu; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100045eau); RETCHK(0x100045efu, 0x100045eau); LOADALL;
  /* 100045ef add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_100045f2:;
  /* 100045f2 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 100045f6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 100045fd add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004600 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004610(CPU *c) {
  NATIVE_HOOK(0x10004610u) REGS; LOADALL;
L_10004610:;
  /* 10004610 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004611 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10004613 call 0x10003af0 */ esp -= 4; M32(esp) = 0x10004618u; SAVEALL; F_10003af0(c); ABI_CHECK(0x10003af0u, 0x10004613u); RETCHK(0x10004618u, 0x10004613u); LOADALL;
  /* 10004618 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000461d je 0x10004628 */ if (ZF_) goto L_10004628;
  /* 1000461f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004620 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10004625u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10004620u); RETCHK(0x10004625u, 0x10004620u); LOADALL;
  /* 10004625 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10004628:;
  /* 10004628 mov eax, esi */ { eax = (u32)(esi); }
  /* 1000462a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000462b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10004630(CPU *c) {
  NATIVE_HOOK(0x10004630u) REGS; LOADALL;
L_10004630:;
  /* 10004630 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10004632 push 0x10007553 */ { u32 v_ = 0x10007553u; esp -= 4; M32(esp) = v_; }
  /* 10004637 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1000463d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000463e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10004645 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10004646 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10004648 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004649 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1000464b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000464c or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1000464f mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 10004652 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 10004655 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 10004658 mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
  /* 1000465b mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 1000465e mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 10004660 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 10004663 mov dword ptr [esp + 8], esi */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(esi); }
  /* 10004667 mov dword ptr [esi + 0x10], edx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edx); }
  /* 1000466a mov dword ptr [esi + 0x14], 1 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x1u); }
  /* 10004671 mov dword ptr [esi + 0x2c], edx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(edx); }
  /* 10004674 mov dword ptr [esi + 0x30], edx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(edx); }
  /* 10004677 lea eax, [esi + 0x34] */ eax = (u32)((u32)(esi + 0x34u));
  /* 1000467a mov dword ptr [esi], 0x100082e4 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x100082e4u); }
  /* 10004680 mov dword ptr [eax + 8], edi */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edi); }
  /* 10004683 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 10004686 mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
  /* 10004689 mov dword ptr [eax], 0x10008224 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x10008224u); }
  /* 1000468f mov dword ptr [eax + 0x18], edx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(edx); }
  /* 10004692 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 10004695 mov dword ptr [eax + 0x1c], edx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(edx); }
  /* 10004698 mov dword ptr [eax + 0x24], edx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(edx); }
  /* 1000469b mov dword ptr [eax + 0x20], edx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(edx); }
  /* 1000469e mov dword ptr [eax + 0x28], edx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(edx); }
  /* 100046a1 mov dword ptr [esp + 0x14], edx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edx); }
  /* 100046a5 mov dword ptr [eax + 0x10], edx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(edx); }
  /* 100046a8 mov dword ptr [eax + 0x30], eax */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(eax); }
  /* 100046ab mov dword ptr [eax + 0x2c], eax */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(eax); }
  /* 100046ae mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 100046b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100046b3 mov byte ptr [esp + 0x18], 1 */ { const u32 m_ = (u32)(esp + 0x18u); M8(m_) = (u8)(0x1u); }
  /* 100046b8 mov dword ptr [esi + 0x1c], edx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(edx); }
  /* 100046bb mov dword ptr [esi + 0x18], edx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edx); }
  /* 100046be call 0x100069c0 */ esp -= 4; M32(esp) = 0x100046c3u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x100046beu); RETCHK(0x100046c3u, 0x100046beu); LOADALL;
  /* 100046c3 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 100046c7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100046c8 mov eax, esi */ { eax = (u32)(esi); }
  /* 100046ca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100046cb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 100046d2 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100046d5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_100046e0(CPU *c) {
  NATIVE_HOOK(0x100046e0u) REGS; LOADALL;
L_100046e0:;
  /* 100046e0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 100046e2 push 0x10007553 */ { u32 v_ = 0x10007553u; esp -= 4; M32(esp) = v_; }
  /* 100046e7 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 100046ed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100046ee mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 100046f5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100046f6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100046f7 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 100046f9 mov dword ptr [esp + 4], esi */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(esi); }
  /* 100046fd mov dword ptr [esi], 0x100082e4 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x100082e4u); }
  /* 10004703 mov dword ptr [esp + 0x10], 1 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0x1u); }
  /* 1000470b call 0x10003c20 */ esp -= 4; M32(esp) = 0x10004710u; SAVEALL; F_10003c20(c); ABI_CHECK(0x10003c20u, 0x1000470bu); RETCHK(0x10004710u, 0x1000470bu); LOADALL;
  /* 10004710 lea ecx, [esi + 0x34] */ ecx = (u32)((u32)(esi + 0x34u));
  /* 10004713 mov byte ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)(0x0u); }
  /* 10004718 call 0x100038b0 */ esp -= 4; M32(esp) = 0x1000471du; SAVEALL; F_100038b0(c); ABI_CHECK(0x100038b0u, 0x10004718u); RETCHK(0x1000471du, 0x10004718u); LOADALL;
  /* 1000471d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1000471f mov dword ptr [esp + 0x10], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0xffffffffu); }
  /* 10004727 call 0x10003af0 */ esp -= 4; M32(esp) = 0x1000472cu; SAVEALL; F_10003af0(c); ABI_CHECK(0x10003af0u, 0x10004727u); RETCHK(0x1000472cu, 0x10004727u); LOADALL;
  /* 1000472c mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10004730 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004731 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10004738 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000473b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004740(CPU *c) {
  NATIVE_HOOK(0x10004740u) REGS; LOADALL;
L_10004740:;
  /* 10004740 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10004744 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10004745 add ecx, 0x34 */ { u32 a_ = ecx, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10004748 call 0x100041f0 */ esp -= 4; M32(esp) = 0x1000474du; SAVEALL; F_100041f0(c); ABI_CHECK(0x100041f0u, 0x10004748u); RETCHK(0x1000474du, 0x10004748u); LOADALL;
  /* 1000474d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000474f je 0x10004766 */ if (ZF_) goto L_10004766;
  /* 10004751 mov ecx, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10004754 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004756 je 0x1000475e */ if (ZF_) goto L_1000475e;
  /* 10004758 mov eax, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); eax = (u32)(M32(m_)); }
  /* 1000475b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1000475e:;
  /* 1000475e mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
  /* 10004763 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10004766:;
  /* 10004766 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004768 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10004770(CPU *c) {
  NATIVE_HOOK(0x10004770u) REGS; LOADALL;
L_10004770:;
  /* 10004770 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10004776 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10004778 push 0x1000756b */ { u32 v_ = 0x1000756bu; esp -= 4; M32(esp) = v_; }
  /* 1000477d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000477e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10004785 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10004786 mov ebx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebx = (u32)(M32(m_)); }
  /* 1000478a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000478b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000478c mov edi, ecx */ { edi = (u32)(ecx); }
  /* 1000478e lea esi, [edi + 0x34] */ esi = (u32)((u32)(edi + 0x34u));
  /* 10004791 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10004792 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10004794 call 0x100041f0 */ esp -= 4; M32(esp) = 0x10004799u; SAVEALL; F_100041f0(c); ABI_CHECK(0x100041f0u, 0x10004794u); RETCHK(0x10004799u, 0x10004794u); LOADALL;
  /* 10004799 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000479b je 0x100047be */ if (ZF_) goto L_100047be;
  /* 1000479d mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 100047a1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100047a2 lea ecx, [eax + 0x20] */ ecx = (u32)((u32)(eax + 0x20u));
  /* 100047a5 call 0x100069c0 */ esp -= 4; M32(esp) = 0x100047aau; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x100047a5u); RETCHK(0x100047aau, 0x100047a5u); LOADALL;
  /* 100047aa mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 100047ae mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 100047b5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100047b6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100047b7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100047b8 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100047bb ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_100047be:;
  /* 100047be push 0x34 */ { u32 v_ = 0x34u; esp -= 4; M32(esp) = v_; }
  /* 100047c0 call 0x10006e4c */ esp -= 4; M32(esp) = 0x100047c5u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x100047c0u); RETCHK(0x100047c5u, 0x100047c0u); LOADALL;
  /* 100047c5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100047c8 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 100047cc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100047ce mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 100047d6 je 0x100047e7 */ if (ZF_) goto L_100047e7;
  /* 100047d8 mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 100047dc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 100047dd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100047de mov ecx, eax */ { ecx = (u32)(eax); }
  /* 100047e0 call 0x10003820 */ esp -= 4; M32(esp) = 0x100047e5u; SAVEALL; F_10003820(c); ABI_CHECK(0x10003820u, 0x100047e0u); RETCHK(0x100047e5u, 0x100047e0u); LOADALL;
  /* 100047e5 jmp 0x100047e9 */ goto L_100047e9;
L_100047e7:;
  /* 100047e7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_100047e9:;
  /* 100047e9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100047eb mov dword ptr [esp + 0x14], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0xffffffffu); }
  /* 100047f3 je 0x1000481b */ if (ZF_) goto L_1000481b;
  /* 100047f5 mov dword ptr [eax + 0x30], esi */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(esi); }
  /* 100047f8 mov ecx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 100047fb mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 100047fe mov edx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); edx = (u32)(M32(m_)); }
  /* 10004801 mov dword ptr [edx + 0x30], eax */ { const u32 m_ = (u32)(edx + 0x30u); M32(m_) = (u32)(eax); }
  /* 10004804 mov dword ptr [esi + 0x2c], eax */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 10004807 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1000480b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10004812 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004813 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004814 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10004815 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004818 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1000481b:;
  /* 1000481b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000481d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 1000481f je 0x10004850 */ if (ZF_) goto L_10004850;
L_10004821:;
  /* 10004821 mov eax, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); eax = (u32)(M32(m_)); }
  /* 10004824 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004826 je 0x10004843 */ if (ZF_) goto L_10004843;
  /* 10004828 mov ecx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1000482b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000482d jne 0x10004821 */ if (!ZF_) goto L_10004821;
  /* 1000482f mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10004833 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 1000483a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000483b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000483c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1000483d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004840 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10004843:;
  /* 10004843 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10004845 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10004847 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10004849 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 1000484b call 0x10005150 */ esp -= 4; M32(esp) = 0x10004850u; SAVEALL; F_10005150(c); ABI_CHECK(0x10005150u, 0x1000484bu); RETCHK(0x10004850u, 0x1000484bu); LOADALL;
L_10004850:;
  /* 10004850 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10004854 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004855 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004856 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 1000485d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1000485e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004861 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10004870(CPU *c) {
  NATIVE_HOOK(0x10004870u) REGS; LOADALL;
L_10004870:;
  /* 10004870 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10004871 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10004873 mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 10004876 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004878 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004879 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000487a je 0x10004881 */ if (ZF_) goto L_10004881;
  /* 1000487c mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 1000487f jmp 0x10004886 */ goto L_10004886;
L_10004881:;
  /* 10004881 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_10004886:;
  /* 10004886 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 1000488a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000488b lea ecx, [edi + 0x20] */ ecx = (u32)((u32)(edi + 0x20u));
  /* 1000488e call 0x100069c0 */ esp -= 4; M32(esp) = 0x10004893u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x1000488eu); RETCHK(0x10004893u, 0x1000488eu); LOADALL;
  /* 10004893 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10004896 mov dword ptr [edi + 0xc], eax */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10004899 mov esi, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); esi = (u32)(M32(m_)); }
  /* 1000489c lea eax, [ebx + 0x34] */ eax = (u32)((u32)(ebx + 0x34u));
  /* 1000489f cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100048a1 je 0x100048f7 */ if (ZF_) goto L_100048f7;
  /* 100048a3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100048a5 je 0x100048f7 */ if (ZF_) goto L_100048f7;
L_100048a7:;
  /* 100048a7 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 100048aa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100048ac je 0x100048b3 */ if (ZF_) goto L_100048b3;
  /* 100048ae mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 100048b1 jmp 0x100048b8 */ goto L_100048b8;
L_100048b3:;
  /* 100048b3 mov ecx, 0x10008158 */ { ecx = (u32)(0x10008158u); }
L_100048b8:;
  /* 100048b8 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 100048bb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100048bd je 0x100048c4 */ if (ZF_) goto L_100048c4;
  /* 100048bf mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 100048c2 jmp 0x100048c9 */ goto L_100048c9;
L_100048c4:;
  /* 100048c4 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_100048c9:;
  /* 100048c9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100048ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100048cb mov ecx, edi */ { ecx = (u32)(edi); }
  /* 100048cd call 0x10004770 */ esp -= 4; M32(esp) = 0x100048d2u; SAVEALL; F_10004770(c); ABI_CHECK(0x10004770u, 0x100048cdu); RETCHK(0x100048d2u, 0x100048cdu); LOADALL;
  /* 100048d2 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 100048d5 mov ecx, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); ecx = (u32)(M32(m_)); }
  /* 100048d8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100048da je 0x100048e3 */ if (ZF_) goto L_100048e3;
  /* 100048dc mov ecx, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); ecx = (u32)(M32(m_)); }
  /* 100048df test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100048e1 jne 0x100048f1 */ if (!ZF_) goto L_100048f1;
L_100048e3:;
  /* 100048e3 mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 100048e6 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100048e8 je 0x100048f7 */ if (ZF_) goto L_100048f7;
  /* 100048ea mov ecx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 100048ed test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100048ef je 0x100048f7 */ if (ZF_) goto L_100048f7;
L_100048f1:;
  /* 100048f1 mov esi, eax */ { esi = (u32)(eax); }
  /* 100048f3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100048f5 jne 0x100048a7 */ if (!ZF_) goto L_100048a7;
L_100048f7:;
  /* 100048f7 mov esi, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); esi = (u32)(M32(m_)); }
  /* 100048fa test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100048fc je 0x10004930 */ if (ZF_) goto L_10004930;
  /* 100048fe mov edi, edi */ { edi = (u32)(edi); }
L_10004900:;
  /* 10004900 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 10004902 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10004904 call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10004907u; SAVEALL; call_ind(c, t_); RETCHK(0x10004907u, 0x10004904u); LOADALL; }
  /* 10004907 mov dword ptr [eax + 0x10], edi */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(edi); }
  /* 1000490a mov ecx, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 1000490d mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 10004910 mov dword ptr [eax + 0x30], 0 */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(0x0u); }
  /* 10004917 mov ecx, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 1000491a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000491c je 0x10004923 */ if (ZF_) goto L_10004923;
  /* 1000491e mov dword ptr [ecx + 0x30], eax */ { const u32 m_ = (u32)(ecx + 0x30u); M32(m_) = (u32)(eax); }
  /* 10004921 jmp 0x10004926 */ goto L_10004926;
L_10004923:;
  /* 10004923 mov dword ptr [edi + 0x18], eax */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(eax); }
L_10004926:;
  /* 10004926 mov dword ptr [edi + 0x1c], eax */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10004929 mov esi, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); esi = (u32)(M32(m_)); }
  /* 1000492c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000492e jne 0x10004900 */ if (!ZF_) goto L_10004900;
L_10004930:;
  /* 10004930 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004931 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004932 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10004933 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10004940(CPU *c) {
  NATIVE_HOOK(0x10004940u) REGS; LOADALL;
L_10004940:;
  /* 10004940 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10004942 push 0x1000758b */ { u32 v_ = 0x1000758bu; esp -= 4; M32(esp) = v_; }
  /* 10004947 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1000494d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000494e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10004955 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10004956 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004957 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10004958 push 0x68 */ { u32 v_ = 0x68u; esp -= 4; M32(esp) = v_; }
  /* 1000495a mov edi, ecx */ { edi = (u32)(ecx); }
  /* 1000495c call 0x10006e4c */ esp -= 4; M32(esp) = 0x10004961u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x1000495cu); RETCHK(0x10004961u, 0x1000495cu); LOADALL;
  /* 10004961 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004964 mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 10004968 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000496a mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 10004972 je 0x1000499b */ if (ZF_) goto L_1000499b;
  /* 10004974 mov ecx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10004977 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004979 je 0x1000498a */ if (ZF_) goto L_1000498a;
  /* 1000497b mov ecx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 1000497e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1000497f mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10004981 call 0x10004630 */ esp -= 4; M32(esp) = 0x10004986u; SAVEALL; F_10004630(c); ABI_CHECK(0x10004630u, 0x10004981u); RETCHK(0x10004986u, 0x10004981u); LOADALL;
  /* 10004986 mov esi, eax */ { esi = (u32)(eax); }
  /* 10004988 jmp 0x1000499d */ goto L_1000499d;
L_1000498a:;
  /* 1000498a mov ecx, 0x10008158 */ { ecx = (u32)(0x10008158u); }
  /* 1000498f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10004990 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10004992 call 0x10004630 */ esp -= 4; M32(esp) = 0x10004997u; SAVEALL; F_10004630(c); ABI_CHECK(0x10004630u, 0x10004992u); RETCHK(0x10004997u, 0x10004992u); LOADALL;
  /* 10004997 mov esi, eax */ { esi = (u32)(eax); }
  /* 10004999 jmp 0x1000499d */ goto L_1000499d;
L_1000499b:;
  /* 1000499b xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_1000499d:;
  /* 1000499d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000499f mov dword ptr [esp + 0x14], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0xffffffffu); }
  /* 100049a7 jne 0x100049bc */ if (!ZF_) goto L_100049bc;
  /* 100049a9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100049aa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 100049ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100049ad mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 100049b1 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 100049b8 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100049bb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_100049bc:;
  /* 100049bc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100049bd mov ecx, edi */ { ecx = (u32)(edi); }
  /* 100049bf call 0x10004870 */ esp -= 4; M32(esp) = 0x100049c4u; SAVEALL; F_10004870(c); ABI_CHECK(0x10004870u, 0x100049bfu); RETCHK(0x100049c4u, 0x100049bfu); LOADALL;
  /* 100049c4 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 100049c8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100049c9 mov eax, esi */ { eax = (u32)(esi); }
  /* 100049cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100049cc mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 100049d3 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100049d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100049e0(CPU *c) {
  NATIVE_HOOK(0x100049e0u) REGS; LOADALL;
L_100049e0:;
  /* 100049e0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100049e1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100049e2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100049e3 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 100049e5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100049e7 lea ebx, [edi + 0x20] */ ebx = (u32)((u32)(edi + 0x20u));
  /* 100049ea push 0x22 */ { u32 v_ = 0x22u; esp -= 4; M32(esp) = v_; }
  /* 100049ec mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 100049ee call 0x10006cf0 */ esp -= 4; M32(esp) = 0x100049f3u; SAVEALL; F_10006cf0(c); ABI_CHECK(0x10006cf0u, 0x100049eeu); RETCHK(0x100049f3u, 0x100049eeu); LOADALL;
  /* 100049f3 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 100049f7 add edi, 0x14 */ { u32 a_ = edi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 100049fa cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100049fd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100049fe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100049ff je 0x10004a3d */ if (ZF_) goto L_10004a3d;
  /* 10004a01 call 0x10004580 */ esp -= 4; M32(esp) = 0x10004a06u; SAVEALL; F_10004580(c); ABI_CHECK(0x10004580u, 0x10004a01u); RETCHK(0x10004a06u, 0x10004a01u); LOADALL;
  /* 10004a06 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004a09 push 0x10008304 */ { u32 v_ = 0x10008304u; esp -= 4; M32(esp) = v_; }
  /* 10004a0e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10004a10 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10004a15u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10004a10u); RETCHK(0x10004a15u, 0x10004a10u); LOADALL;
  /* 10004a15 push 0x10008300 */ { u32 v_ = 0x10008300u; esp -= 4; M32(esp) = v_; }
  /* 10004a1a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10004a1c call 0x10006be0 */ esp -= 4; M32(esp) = 0x10004a21u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10004a1cu); RETCHK(0x10004a21u, 0x10004a1cu); LOADALL;
  /* 10004a21 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004a22 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10004a23 call 0x10004580 */ esp -= 4; M32(esp) = 0x10004a28u; SAVEALL; F_10004580(c); ABI_CHECK(0x10004580u, 0x10004a23u); RETCHK(0x10004a28u, 0x10004a23u); LOADALL;
  /* 10004a28 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004a2b push 0x10008300 */ { u32 v_ = 0x10008300u; esp -= 4; M32(esp) = v_; }
  /* 10004a30 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10004a32 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10004a37u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10004a32u); RETCHK(0x10004a37u, 0x10004a32u); LOADALL;
  /* 10004a37 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004a38 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004a39 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10004a3a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10004a3d:;
  /* 10004a3d call 0x10004580 */ esp -= 4; M32(esp) = 0x10004a42u; SAVEALL; F_10004580(c); ABI_CHECK(0x10004580u, 0x10004a3du); RETCHK(0x10004a42u, 0x10004a3du); LOADALL;
  /* 10004a42 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004a45 push 0x10008304 */ { u32 v_ = 0x10008304u; esp -= 4; M32(esp) = v_; }
  /* 10004a4a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10004a4c call 0x10006be0 */ esp -= 4; M32(esp) = 0x10004a51u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10004a4cu); RETCHK(0x10004a51u, 0x10004a4cu); LOADALL;
  /* 10004a51 push 0x100082fc */ { u32 v_ = 0x100082fcu; esp -= 4; M32(esp) = v_; }
  /* 10004a56 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10004a58 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10004a5du; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10004a58u); RETCHK(0x10004a5du, 0x10004a58u); LOADALL;
  /* 10004a5d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004a5e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10004a5f call 0x10004580 */ esp -= 4; M32(esp) = 0x10004a64u; SAVEALL; F_10004580(c); ABI_CHECK(0x10004580u, 0x10004a5fu); RETCHK(0x10004a64u, 0x10004a5fu); LOADALL;
  /* 10004a64 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004a67 push 0x100082fc */ { u32 v_ = 0x100082fcu; esp -= 4; M32(esp) = v_; }
  /* 10004a6c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10004a6e call 0x10006be0 */ esp -= 4; M32(esp) = 0x10004a73u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10004a6eu); RETCHK(0x10004a73u, 0x10004a6eu); LOADALL;
  /* 10004a73 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004a74 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004a75 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10004a76 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10004a80(CPU *c) {
  NATIVE_HOOK(0x10004a80u) REGS; LOADALL;
L_10004a80:;
  /* 10004a80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004a81 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10004a82 push 0x34 */ { u32 v_ = 0x34u; esp -= 4; M32(esp) = v_; }
  /* 10004a84 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10004a86 call 0x10006e4c */ esp -= 4; M32(esp) = 0x10004a8bu; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x10004a86u); RETCHK(0x10004a8bu, 0x10004a86u); LOADALL;
  /* 10004a8b mov esi, eax */ { esi = (u32)(eax); }
  /* 10004a8d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004a8f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004a92 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004a94 je 0x10004ae3 */ if (ZF_) goto L_10004ae3;
  /* 10004a96 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10004a99 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10004a9c mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10004a9f mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10004aa2 mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 10004aa5 mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 10004aa8 mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
  /* 10004aab lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 10004aae mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 10004ab1 mov dword ptr [esi + 0x14], 2 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x2u); }
  /* 10004ab8 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 10004abb mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10004abe mov dword ptr [esi + 0x2c], eax */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 10004ac1 mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 10004ac4 mov dword ptr [esi], 0x10008280 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x10008280u); }
  /* 10004aca cmp dword ptr [edi + 0x24], eax */ { const u32 m_ = (u32)(edi + 0x24u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004acd je 0x10004ae8 */ if (ZF_) goto L_10004ae8;
  /* 10004acf mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 10004ad2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10004ad3 call 0x100069c0 */ esp -= 4; M32(esp) = 0x10004ad8u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10004ad3u); RETCHK(0x10004ad8u, 0x10004ad3u); LOADALL;
  /* 10004ad8 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10004adb mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10004ade pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004adf mov eax, esi */ { eax = (u32)(esi); }
  /* 10004ae1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004ae2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10004ae3:;
  /* 10004ae3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004ae4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004ae6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004ae7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10004ae8:;
  /* 10004ae8 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
  /* 10004aed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10004aee call 0x100069c0 */ esp -= 4; M32(esp) = 0x10004af3u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10004aeeu); RETCHK(0x10004af3u, 0x10004aeeu); LOADALL;
  /* 10004af3 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10004af6 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10004af9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004afa mov eax, esi */ { eax = (u32)(esi); }
  /* 10004afc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004afd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004b00(CPU *c) {
  NATIVE_HOOK(0x10004b00u) REGS; LOADALL;
L_10004b00:;
  /* 10004b00 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10004b04 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10004b05 add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10004b08 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10004b09 call 0x10004580 */ esp -= 4; M32(esp) = 0x10004b0eu; SAVEALL; F_10004580(c); ABI_CHECK(0x10004580u, 0x10004b09u); RETCHK(0x10004b0eu, 0x10004b09u); LOADALL;
  /* 10004b0e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004b11 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10004b20(CPU *c) {
  NATIVE_HOOK(0x10004b20u) REGS; LOADALL;
L_10004b20:;
  /* 10004b20 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10004b22 push 0x1000758b */ { u32 v_ = 0x1000758bu; esp -= 4; M32(esp) = v_; }
  /* 10004b27 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10004b2d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10004b2e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10004b35 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10004b36 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004b37 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10004b38 push 0x34 */ { u32 v_ = 0x34u; esp -= 4; M32(esp) = v_; }
  /* 10004b3a mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10004b3c call 0x10006e4c */ esp -= 4; M32(esp) = 0x10004b41u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x10004b3cu); RETCHK(0x10004b41u, 0x10004b3cu); LOADALL;
  /* 10004b41 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004b44 mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 10004b48 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004b4a mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 10004b52 je 0x10004b64 */ if (ZF_) goto L_10004b64;
  /* 10004b54 push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 10004b59 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10004b5b call 0x10004330 */ esp -= 4; M32(esp) = 0x10004b60u; SAVEALL; F_10004330(c); ABI_CHECK(0x10004330u, 0x10004b5bu); RETCHK(0x10004b60u, 0x10004b5bu); LOADALL;
  /* 10004b60 mov esi, eax */ { esi = (u32)(eax); }
  /* 10004b62 jmp 0x10004b66 */ goto L_10004b66;
L_10004b64:;
  /* 10004b64 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_10004b66:;
  /* 10004b66 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004b68 mov dword ptr [esp + 0x14], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0xffffffffu); }
  /* 10004b70 jne 0x10004b85 */ if (!ZF_) goto L_10004b85;
  /* 10004b72 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004b73 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004b75 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004b76 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10004b7a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10004b81 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004b84 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10004b85:;
  /* 10004b85 mov eax, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); eax = (u32)(M32(m_)); }
  /* 10004b88 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004b8a je 0x10004b91 */ if (ZF_) goto L_10004b91;
  /* 10004b8c mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 10004b8f jmp 0x10004b96 */ goto L_10004b96;
L_10004b91:;
  /* 10004b91 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_10004b96:;
  /* 10004b96 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10004b97 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 10004b9a call 0x100069c0 */ esp -= 4; M32(esp) = 0x10004b9fu; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10004b9au); RETCHK(0x10004b9fu, 0x10004b9au); LOADALL;
  /* 10004b9f mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10004ba2 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10004ba6 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10004ba9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004baa mov eax, esi */ { eax = (u32)(esi); }
  /* 10004bac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004bad mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10004bb4 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004bb7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004bc0(CPU *c) {
  NATIVE_HOOK(0x10004bc0u) REGS; LOADALL;
L_10004bc0:;
  /* 10004bc0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10004bc1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004bc2 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10004bc6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10004bc7 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10004bc9 push 0x1000820c */ { u32 v_ = 0x1000820cu; esp -= 4; M32(esp) = v_; }
  /* 10004bce mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10004bd0 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10004bd5u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10004bd0u); RETCHK(0x10004bd5u, 0x10004bd0u); LOADALL;
  /* 10004bd5 mov eax, dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); eax = (u32)(M32(m_)); }
  /* 10004bd8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004bda lea edi, [ebx + 0x34] */ edi = (u32)((u32)(ebx + 0x34u));
  /* 10004bdd je 0x10004c08 */ if (ZF_) goto L_10004c08;
  /* 10004bdf mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10004be2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004be4 je 0x10004c08 */ if (ZF_) goto L_10004c08;
  /* 10004be6 push 0x10008328 */ { u32 v_ = 0x10008328u; esp -= 4; M32(esp) = v_; }
  /* 10004beb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10004bed call 0x10006be0 */ esp -= 4; M32(esp) = 0x10004bf2u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10004bedu); RETCHK(0x10004bf2u, 0x10004bedu); LOADALL;
  /* 10004bf2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004bf3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10004bf4 call 0x10004580 */ esp -= 4; M32(esp) = 0x10004bf9u; SAVEALL; F_10004580(c); ABI_CHECK(0x10004580u, 0x10004bf4u); RETCHK(0x10004bf9u, 0x10004bf4u); LOADALL;
  /* 10004bf9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004bfc push 0x10008324 */ { u32 v_ = 0x10008324u; esp -= 4; M32(esp) = v_; }
  /* 10004c01 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10004c03 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10004c08u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10004c03u); RETCHK(0x10004c08u, 0x10004c03u); LOADALL;
L_10004c08:;
  /* 10004c08 mov eax, dword ptr [ebx + 0x44] */ { const u32 m_ = (u32)(ebx + 0x44u); eax = (u32)(M32(m_)); }
  /* 10004c0b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004c0d lea edi, [ebx + 0x40] */ edi = (u32)((u32)(ebx + 0x40u));
  /* 10004c10 je 0x10004c3b */ if (ZF_) goto L_10004c3b;
  /* 10004c12 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10004c15 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004c17 je 0x10004c3b */ if (ZF_) goto L_10004c3b;
  /* 10004c19 push 0x10008318 */ { u32 v_ = 0x10008318u; esp -= 4; M32(esp) = v_; }
  /* 10004c1e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10004c20 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10004c25u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10004c20u); RETCHK(0x10004c25u, 0x10004c20u); LOADALL;
  /* 10004c25 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004c26 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10004c27 call 0x10004580 */ esp -= 4; M32(esp) = 0x10004c2cu; SAVEALL; F_10004580(c); ABI_CHECK(0x10004580u, 0x10004c27u); RETCHK(0x10004c2cu, 0x10004c27u); LOADALL;
  /* 10004c2c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004c2f push 0x10008324 */ { u32 v_ = 0x10008324u; esp -= 4; M32(esp) = v_; }
  /* 10004c34 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10004c36 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10004c3bu; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10004c36u); RETCHK(0x10004c3bu, 0x10004c36u); LOADALL;
L_10004c3b:;
  /* 10004c3b mov eax, dword ptr [ebx + 0x50] */ { const u32 m_ = (u32)(ebx + 0x50u); eax = (u32)(M32(m_)); }
  /* 10004c3e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004c40 lea edi, [ebx + 0x4c] */ edi = (u32)((u32)(ebx + 0x4cu));
  /* 10004c43 je 0x10004c6e */ if (ZF_) goto L_10004c6e;
  /* 10004c45 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10004c48 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004c4a je 0x10004c6e */ if (ZF_) goto L_10004c6e;
  /* 10004c4c push 0x10008308 */ { u32 v_ = 0x10008308u; esp -= 4; M32(esp) = v_; }
  /* 10004c51 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10004c53 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10004c58u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10004c53u); RETCHK(0x10004c58u, 0x10004c53u); LOADALL;
  /* 10004c58 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004c59 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10004c5a call 0x10004580 */ esp -= 4; M32(esp) = 0x10004c5fu; SAVEALL; F_10004580(c); ABI_CHECK(0x10004580u, 0x10004c5au); RETCHK(0x10004c5fu, 0x10004c5au); LOADALL;
  /* 10004c5f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004c62 push 0x10008324 */ { u32 v_ = 0x10008324u; esp -= 4; M32(esp) = v_; }
  /* 10004c67 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10004c69 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10004c6eu; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10004c69u); RETCHK(0x10004c6eu, 0x10004c69u); LOADALL;
L_10004c6e:;
  /* 10004c6e push 0x100081d4 */ { u32 v_ = 0x100081d4u; esp -= 4; M32(esp) = v_; }
  /* 10004c73 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10004c75 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10004c7au; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10004c75u); RETCHK(0x10004c7au, 0x10004c75u); LOADALL;
  /* 10004c7a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004c7b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004c7c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10004c7d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10004c80(CPU *c) {
  NATIVE_HOOK(0x10004c80u) REGS; LOADALL;
L_10004c80:;
  /* 10004c80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004c81 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10004c82 push 0x58 */ { u32 v_ = 0x58u; esp -= 4; M32(esp) = v_; }
  /* 10004c84 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10004c86 call 0x10006e4c */ esp -= 4; M32(esp) = 0x10004c8bu; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x10004c86u); RETCHK(0x10004c8bu, 0x10004c86u); LOADALL;
  /* 10004c8b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004c8e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004c90 je 0x10004c9f */ if (ZF_) goto L_10004c9f;
  /* 10004c92 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10004c94 call 0x100043e0 */ esp -= 4; M32(esp) = 0x10004c99u; SAVEALL; F_100043e0(c); ABI_CHECK(0x100043e0u, 0x10004c94u); RETCHK(0x10004c99u, 0x10004c94u); LOADALL;
  /* 10004c99 mov esi, eax */ { esi = (u32)(eax); }
  /* 10004c9b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004c9d jne 0x10004ca4 */ if (!ZF_) goto L_10004ca4;
L_10004c9f:;
  /* 10004c9f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004ca0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004ca2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004ca3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10004ca4:;
  /* 10004ca4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004ca5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10004ca7 call 0x100036c0 */ esp -= 4; M32(esp) = 0x10004cacu; SAVEALL; F_100036c0(c); ABI_CHECK(0x100036c0u, 0x10004ca7u); RETCHK(0x10004cacu, 0x10004ca7u); LOADALL;
  /* 10004cac pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004cad mov eax, esi */ { eax = (u32)(esi); }
  /* 10004caf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004cb0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004cc0(CPU *c) {
  NATIVE_HOOK(0x10004cc0u) REGS; LOADALL;
L_10004cc0:;
  /* 10004cc0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004cc1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10004cc2 push 0x34 */ { u32 v_ = 0x34u; esp -= 4; M32(esp) = v_; }
  /* 10004cc4 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10004cc6 call 0x10006e4c */ esp -= 4; M32(esp) = 0x10004ccbu; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x10004cc6u); RETCHK(0x10004ccbu, 0x10004cc6u); LOADALL;
  /* 10004ccb mov esi, eax */ { esi = (u32)(eax); }
  /* 10004ccd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004ccf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004cd2 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004cd4 je 0x10004d23 */ if (ZF_) goto L_10004d23;
  /* 10004cd6 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10004cd9 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10004cdc mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10004cdf mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10004ce2 mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 10004ce5 mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 10004ce8 mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
  /* 10004ceb lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 10004cee mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 10004cf1 mov dword ptr [esi + 0x14], 3 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x3u); }
  /* 10004cf8 mov dword ptr [esi + 0x18], eax */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(eax); }
  /* 10004cfb mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10004cfe mov dword ptr [esi + 0x2c], eax */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 10004d01 mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 10004d04 mov dword ptr [esi], 0x100082cc */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x100082ccu); }
  /* 10004d0a cmp dword ptr [edi + 0x24], eax */ { const u32 m_ = (u32)(edi + 0x24u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004d0d je 0x10004d28 */ if (ZF_) goto L_10004d28;
  /* 10004d0f mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 10004d12 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10004d13 call 0x100069c0 */ esp -= 4; M32(esp) = 0x10004d18u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10004d13u); RETCHK(0x10004d18u, 0x10004d13u); LOADALL;
  /* 10004d18 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10004d1b mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10004d1e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004d1f mov eax, esi */ { eax = (u32)(esi); }
  /* 10004d21 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004d22 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10004d23:;
  /* 10004d23 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004d24 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004d26 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004d27 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10004d28:;
  /* 10004d28 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
  /* 10004d2d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10004d2e call 0x100069c0 */ esp -= 4; M32(esp) = 0x10004d33u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10004d2eu); RETCHK(0x10004d33u, 0x10004d2eu); LOADALL;
  /* 10004d33 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10004d36 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10004d39 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004d3a mov eax, esi */ { eax = (u32)(esi); }
  /* 10004d3c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004d3d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004d40(CPU *c) {
  NATIVE_HOOK(0x10004d40u) REGS; LOADALL;
L_10004d40:;
  /* 10004d40 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004d41 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10004d43 call 0x100046e0 */ esp -= 4; M32(esp) = 0x10004d48u; SAVEALL; F_100046e0(c); ABI_CHECK(0x100046e0u, 0x10004d43u); RETCHK(0x10004d48u, 0x10004d43u); LOADALL;
  /* 10004d48 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10004d4d je 0x10004d58 */ if (ZF_) goto L_10004d58;
  /* 10004d4f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004d50 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10004d55u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10004d50u); RETCHK(0x10004d55u, 0x10004d50u); LOADALL;
  /* 10004d55 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10004d58:;
  /* 10004d58 mov eax, esi */ { eax = (u32)(esi); }
  /* 10004d5a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004d5b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10004d60(CPU *c) {
  NATIVE_HOOK(0x10004d60u) REGS; LOADALL;
L_10004d60:;
  /* 10004d60 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10004d61 mov bl, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004d65 movzx eax, bl */ { eax = (u32)((ebx & 0xffu)); }
  /* 10004d68 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10004d69 call 0x10007044 */ esp -= 4; M32(esp) = 0x10004d6eu; SAVEALL; F_10007044(c); ABI_CHECK(0x10007044u, 0x10004d69u); RETCHK(0x10004d6eu, 0x10004d69u); LOADALL;
  /* 10004d6e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004d71 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004d73 jne 0x10004d81 */ if (!ZF_) goto L_10004d81;
  /* 10004d75 cmp bl, 0xa */ { u32 a_ = (ebx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004d78 je 0x10004d81 */ if (ZF_) goto L_10004d81;
  /* 10004d7a cmp bl, 0xd */ { u32 a_ = (ebx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004d7d je 0x10004d81 */ if (ZF_) goto L_10004d81;
  /* 10004d7f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10004d80 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10004d81:;
  /* 10004d81 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 10004d86 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10004d87 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004d90(CPU *c) {
  NATIVE_HOOK(0x10004d90u) REGS; LOADALL;
L_10004d90:;
  /* 10004d90 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004d93 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 10004d97 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004d99 cmp ecx, 0x80 */ { u32 a_ = ecx, b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004d9f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004da0 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10004da4 mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 10004da8 mov dword ptr [esp + 0xc], 0xc0 */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(0xc0u); }
  /* 10004db0 mov dword ptr [esp + 0x10], 0xe0 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0xe0u); }
  /* 10004db8 mov dword ptr [esp + 0x14], 0xf0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0xf0u); }
  /* 10004dc0 mov dword ptr [esp + 0x18], 0xf8 */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(0xf8u); }
  /* 10004dc8 mov dword ptr [esp + 0x1c], 0xfc */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0xfcu); }
  /* 10004dd0 jae 0x10004dde */ if (!CF_) goto L_10004dde;
  /* 10004dd2 mov esi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 10004dd6 mov dword ptr [esi], 1 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1u); }
  /* 10004ddc jmp 0x10004e18 */ goto L_10004e18;
L_10004dde:;
  /* 10004dde cmp ecx, 0x800 */ { u32 a_ = ecx, b_ = 0x800u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004de4 jae 0x10004df2 */ if (!CF_) goto L_10004df2;
  /* 10004de6 mov esi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 10004dea mov dword ptr [esi], 2 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x2u); }
  /* 10004df0 jmp 0x10004e18 */ goto L_10004e18;
L_10004df2:;
  /* 10004df2 cmp ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004df8 jae 0x10004e06 */ if (!CF_) goto L_10004e06;
  /* 10004dfa mov esi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 10004dfe mov dword ptr [esi], 3 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x3u); }
  /* 10004e04 jmp 0x10004e18 */ goto L_10004e18;
L_10004e06:;
  /* 10004e06 cmp ecx, 0x200000 */ { u32 a_ = ecx, b_ = 0x200000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004e0c jae 0x10004e67 */ if (!CF_) goto L_10004e67;
  /* 10004e0e mov esi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); esi = (u32)(M32(m_)); }
  /* 10004e12 mov dword ptr [esi], 4 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x4u); }
L_10004e18:;
  /* 10004e18 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 10004e1a mov eax, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); eax = (u32)(M32(m_)); }
  /* 10004e1e add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10004e20 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10004e21 cmp edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004e24 ja 0x10004e6d */ if (!(CF_|ZF_)) goto L_10004e6d;
  /* 10004e26 jmp dword ptr [edx*4 + 0x10004e74] */ { const u32 m_ = (u32)(edx * 4u + 0x10004e74u); u32 t_ = M32(m_); switch (t_) { case 0x10004e2du: goto L_10004e2d; case 0x10004e3bu: goto L_10004e3b; case 0x10004e49u: goto L_10004e49; case 0x10004e57u: goto L_10004e57; default: SAVEALL; call_ind(c, t_); return; } }
L_10004e2d:;
  /* 10004e2d mov dl, cl */ { edx = (edx & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 10004e2f and dl, 0x3f */ { u32 a_ = (edx & 0xffu), b_ = 0x3fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e32 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10004e33 or dl, 0x80 */ { u32 a_ = (edx & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e36 mov byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10004e38 shr ecx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
L_10004e3b:;
  /* 10004e3b mov dl, cl */ { edx = (edx & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 10004e3d and dl, 0x3f */ { u32 a_ = (edx & 0xffu), b_ = 0x3fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e40 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10004e41 or dl, 0x80 */ { u32 a_ = (edx & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e44 mov byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10004e46 shr ecx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
L_10004e49:;
  /* 10004e49 mov dl, cl */ { edx = (edx & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 10004e4b and dl, 0x3f */ { u32 a_ = (edx & 0xffu), b_ = 0x3fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e4e dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10004e4f or dl, 0x80 */ { u32 a_ = (edx & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e52 mov byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10004e54 shr ecx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
L_10004e57:;
  /* 10004e57 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 10004e59 mov dl, byte ptr [esp + edx*4 + 4] */ { const u32 m_ = (u32)(esp + edx * 4u + 0x4u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004e5d or dl, cl */ { u32 a_ = (edx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e5f mov byte ptr [eax - 1], dl */ { const u32 m_ = (u32)(eax + 0xffffffffu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10004e62 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004e63 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004e66 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10004e67:;
  /* 10004e67 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 10004e6b mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
L_10004e6d:;
  /* 10004e6d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004e6e add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004e71 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004e2d(CPU *c) {
  NATIVE_HOOK(0x10004e2du) REGS; LOADALL;
L_10004e2d:;
  /* 10004e2d mov dl, cl */ { edx = (edx & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 10004e2f and dl, 0x3f */ { u32 a_ = (edx & 0xffu), b_ = 0x3fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e32 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10004e33 or dl, 0x80 */ { u32 a_ = (edx & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e36 mov byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10004e38 shr ecx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10004e3b mov dl, cl */ { edx = (edx & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 10004e3d and dl, 0x3f */ { u32 a_ = (edx & 0xffu), b_ = 0x3fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e40 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10004e41 or dl, 0x80 */ { u32 a_ = (edx & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e44 mov byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10004e46 shr ecx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10004e49 mov dl, cl */ { edx = (edx & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 10004e4b and dl, 0x3f */ { u32 a_ = (edx & 0xffu), b_ = 0x3fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e4e dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10004e4f or dl, 0x80 */ { u32 a_ = (edx & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e52 mov byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10004e54 shr ecx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10004e57 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 10004e59 mov dl, byte ptr [esp + edx*4 + 4] */ { const u32 m_ = (u32)(esp + edx * 4u + 0x4u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004e5d or dl, cl */ { u32 a_ = (edx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e5f mov byte ptr [eax - 1], dl */ { const u32 m_ = (u32)(eax + 0xffffffffu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10004e62 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004e63 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004e66 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004e3b(CPU *c) {
  NATIVE_HOOK(0x10004e3bu) REGS; LOADALL;
L_10004e3b:;
  /* 10004e3b mov dl, cl */ { edx = (edx & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 10004e3d and dl, 0x3f */ { u32 a_ = (edx & 0xffu), b_ = 0x3fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e40 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10004e41 or dl, 0x80 */ { u32 a_ = (edx & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e44 mov byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10004e46 shr ecx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10004e49 mov dl, cl */ { edx = (edx & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 10004e4b and dl, 0x3f */ { u32 a_ = (edx & 0xffu), b_ = 0x3fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e4e dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10004e4f or dl, 0x80 */ { u32 a_ = (edx & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e52 mov byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10004e54 shr ecx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10004e57 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 10004e59 mov dl, byte ptr [esp + edx*4 + 4] */ { const u32 m_ = (u32)(esp + edx * 4u + 0x4u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004e5d or dl, cl */ { u32 a_ = (edx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e5f mov byte ptr [eax - 1], dl */ { const u32 m_ = (u32)(eax + 0xffffffffu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10004e62 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004e63 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004e66 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004e49(CPU *c) {
  NATIVE_HOOK(0x10004e49u) REGS; LOADALL;
L_10004e49:;
  /* 10004e49 mov dl, cl */ { edx = (edx & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 10004e4b and dl, 0x3f */ { u32 a_ = (edx & 0xffu), b_ = 0x3fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e4e dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10004e4f or dl, 0x80 */ { u32 a_ = (edx & 0xffu), b_ = 0x80u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e52 mov byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10004e54 shr ecx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10004e57 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 10004e59 mov dl, byte ptr [esp + edx*4 + 4] */ { const u32 m_ = (u32)(esp + edx * 4u + 0x4u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004e5d or dl, cl */ { u32 a_ = (edx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e5f mov byte ptr [eax - 1], dl */ { const u32 m_ = (u32)(eax + 0xffffffffu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10004e62 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004e63 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004e66 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004e57(CPU *c) {
  NATIVE_HOOK(0x10004e57u) REGS; LOADALL;
L_10004e57:;
  /* 10004e57 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 10004e59 mov dl, byte ptr [esp + edx*4 + 4] */ { const u32 m_ = (u32)(esp + edx * 4u + 0x4u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004e5d or dl, cl */ { u32 a_ = (edx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004e5f mov byte ptr [eax - 1], dl */ { const u32 m_ = (u32)(eax + 0xffffffffu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 10004e62 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004e63 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004e66 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004e74(CPU *c) {
  NATIVE_HOOK(0x10004e74u) REGS; LOADALL;
L_10004e74:;
  /* 10004e74 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10004e75 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10004e76 add byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 10004e78 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10004e79 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10004e7a add byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 10004e7c cmp ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004e7f adc byte ptr [0xcc10004e], ch */ { const u32 m_ = (u32)(0xcc10004eu); u32 a_ = M8(m_), b_ = ((ecx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10004e85 int3 */ TRAP(0x10004e85u, "int3");
}

void F_10004e90(CPU *c) {
  NATIVE_HOOK(0x10004e90u) REGS; LOADALL;
L_10004e90:;
  /* 10004e90 mov al, byte ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004e94 cmp al, 0x7f */ { u32 a_ = (eax & 0xffu), b_ = 0x7fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004e96 jae 0x10004ea5 */ if (!CF_) goto L_10004ea5;
  /* 10004e98 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 10004e9b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10004e9c call 0x10007050 */ esp -= 4; M32(esp) = 0x10004ea1u; SAVEALL; F_10007050(c); ABI_CHECK(0x10007050u, 0x10004e9cu); RETCHK(0x10004ea1u, 0x10004e9cu); LOADALL;
  /* 10004ea1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10004ea4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10004ea5:;
  /* 10004ea5 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 10004eaa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004eb0(CPU *c) {
  NATIVE_HOOK(0x10004eb0u) REGS; LOADALL;
L_10004eb0:;
  /* 10004eb0 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10004eb3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10004eb4 mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 10004eb9 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004ebb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10004ebc jl 0x10004fa3 */ if (LT_) goto L_10004fa3;
  /* 10004ec2 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10004ec6 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10004ec9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10004eca mov ebp, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebp = (u32)(M32(m_)); }
  /* 10004ecc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004ecd mov esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); esi = (u32)(M32(m_)); }
  /* 10004ed0 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004ed2 jae 0x10004f99 */ if (!CF_) goto L_10004f99;
  /* 10004ed8 jmp 0x10004ee0 */ goto L_10004ee0;
L_10004eda:;
  /* 10004eda mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 10004edf nop */ ;
L_10004ee0:;
  /* 10004ee0 mov dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004ee2 movsx edi, dl */ { edi = (u32)((u32)sxt((edx & 0xffu), 1) & 0xffffffffu); }
  /* 10004ee5 add edi, 0x11 */ { u32 a_ = edi, b_ = 0x11u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10004ee8 cmp edi, 0x1e */ { u32 a_ = edi, b_ = 0x1eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004eeb ja 0x10004f73 */ if (!(CF_|ZF_)) goto L_10004f73;
  /* 10004ef1 movzx edi, byte ptr [edi + 0x10004fc0] */ { const u32 m_ = (u32)(edi + 0x10004fc0u); edi = (u32)(M8(m_)); }
  /* 10004ef8 jmp dword ptr [edi*4 + 0x10004fa8] */ { const u32 m_ = (u32)(edi * 4u + 0x10004fa8u); u32 t_ = M32(m_); switch (t_) { case 0x10004effu: goto L_10004eff; case 0x10004f12u: goto L_10004f12; case 0x10004f21u: goto L_10004f21; case 0x10004f2eu: goto L_10004f2e; case 0x10004f73u: goto L_10004f73; case 0x10004fa1u: goto L_10004fa1; default: SAVEALL; call_ind(c, t_); return; } }
L_10004eff:;
  /* 10004eff mov dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f02 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f03 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004f05 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f06 cmp dl, 0xa */ { u32 a_ = (edx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f09 jne 0x10004f8f */ if (!ZF_) goto L_10004f8f;
  /* 10004f0f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f10 jmp 0x10004f8f */ goto L_10004f8f;
L_10004f12:;
  /* 10004f12 mov dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f15 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f16 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004f18 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f19 cmp dl, 0xd */ { u32 a_ = (edx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f1c jne 0x10004f8f */ if (!ZF_) goto L_10004f8f;
  /* 10004f1e inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f1f jmp 0x10004f8f */ goto L_10004f8f;
L_10004f21:;
  /* 10004f21 mov edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edi = (u32)(M32(m_)); }
  /* 10004f24 cdq */ edx = (u32)((s32)eax >> 31);
  /* 10004f25 idiv edi */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, edi, &q_, &r_, 0x10004f25u); eax = q_; edx = r_; }
  /* 10004f27 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f28 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f29 imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10004f2c jmp 0x10004f8f */ goto L_10004f8f;
L_10004f2e:;
  /* 10004f2e cmp dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004f32 jne 0x10004f8d */ if (!ZF_) goto L_10004f8d;
  /* 10004f34 mov bl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f37 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10004f39 je 0x10004f8f */ if (ZF_) goto L_10004f8f;
  /* 10004f3b mov dl, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f3e test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10004f40 je 0x10004f8f */ if (ZF_) goto L_10004f8f;
  /* 10004f42 cmp bl, 0xbb */ { u32 a_ = (ebx & 0xffu), b_ = 0xbbu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f45 jne 0x10004f51 */ if (!ZF_) goto L_10004f51;
  /* 10004f47 cmp dl, 0xbf */ { u32 a_ = (edx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f4a jne 0x10004f51 */ if (!ZF_) goto L_10004f51;
  /* 10004f4c add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f4f jmp 0x10004f8f */ goto L_10004f8f;
L_10004f51:;
  /* 10004f51 cmp bl, 0xbf */ { u32 a_ = (ebx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f54 jne 0x10004f6e */ if (!ZF_) goto L_10004f6e;
  /* 10004f56 cmp dl, 0xbe */ { u32 a_ = (edx & 0xffu), b_ = 0xbeu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f59 jne 0x10004f60 */ if (!ZF_) goto L_10004f60;
  /* 10004f5b add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f5e jmp 0x10004f8f */ goto L_10004f8f;
L_10004f60:;
  /* 10004f60 cmp bl, 0xbf */ { u32 a_ = (ebx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f63 jne 0x10004f6e */ if (!ZF_) goto L_10004f6e;
  /* 10004f65 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f67 jne 0x10004f6e */ if (!ZF_) goto L_10004f6e;
  /* 10004f69 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f6c jmp 0x10004f8f */ goto L_10004f8f;
L_10004f6e:;
  /* 10004f6e add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f71 jmp 0x10004f8e */ goto L_10004f8e;
L_10004f73:;
  /* 10004f73 cmp dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004f77 jne 0x10004f8d */ if (!ZF_) goto L_10004f8d;
  /* 10004f79 movzx edx, dl */ { edx = (u32)((edx & 0xffu)); }
  /* 10004f7c mov edx, dword ptr [edx*4 + 0x10008338] */ { const u32 m_ = (u32)(edx * 4u + 0x10008338u); edx = (u32)(M32(m_)); }
  /* 10004f83 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004f85 jne 0x10004f89 */ if (!ZF_) goto L_10004f89;
  /* 10004f87 mov edx, ebx */ { edx = (u32)(ebx); }
L_10004f89:;
  /* 10004f89 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f8b jmp 0x10004f8e */ goto L_10004f8e;
L_10004f8d:;
  /* 10004f8d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10004f8e:;
  /* 10004f8e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10004f8f:;
  /* 10004f8f cmp esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004f93 jb 0x10004eda */ if (CF_) goto L_10004eda;
L_10004f99:;
  /* 10004f99 mov dword ptr [ecx], ebp */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ebp); }
  /* 10004f9b mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10004f9e mov dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(esi); }
L_10004fa1:;
  /* 10004fa1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004fa2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
L_10004fa3:;
  /* 10004fa3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004fa4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10004fa5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10004eff(CPU *c) {
  NATIVE_HOOK(0x10004effu) REGS; LOADALL;
  goto L_10004eff;
L_10004eda:;
  /* 10004eda mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 10004edf nop */ ;
  /* 10004ee0 mov dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004ee2 movsx edi, dl */ { edi = (u32)((u32)sxt((edx & 0xffu), 1) & 0xffffffffu); }
  /* 10004ee5 add edi, 0x11 */ { u32 a_ = edi, b_ = 0x11u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10004ee8 cmp edi, 0x1e */ { u32 a_ = edi, b_ = 0x1eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004eeb ja 0x10004f73 */ if (!(CF_|ZF_)) goto L_10004f73;
  /* 10004ef1 movzx edi, byte ptr [edi + 0x10004fc0] */ { const u32 m_ = (u32)(edi + 0x10004fc0u); edi = (u32)(M8(m_)); }
  /* 10004ef8 jmp dword ptr [edi*4 + 0x10004fa8] */ { const u32 m_ = (u32)(edi * 4u + 0x10004fa8u); u32 t_ = M32(m_); switch (t_) { case 0x10004effu: goto L_10004eff; case 0x10004f12u: goto L_10004f12; case 0x10004f21u: goto L_10004f21; case 0x10004f2eu: goto L_10004f2e; case 0x10004f73u: goto L_10004f73; case 0x10004fa1u: goto L_10004fa1; default: SAVEALL; call_ind(c, t_); return; } }
L_10004eff:;
  /* 10004eff mov dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f02 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f03 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004f05 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f06 cmp dl, 0xa */ { u32 a_ = (edx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f09 jne 0x10004f8f */ if (!ZF_) goto L_10004f8f;
  /* 10004f0f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f10 jmp 0x10004f8f */ goto L_10004f8f;
L_10004f12:;
  /* 10004f12 mov dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f15 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f16 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004f18 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f19 cmp dl, 0xd */ { u32 a_ = (edx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f1c jne 0x10004f8f */ if (!ZF_) goto L_10004f8f;
  /* 10004f1e inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f1f jmp 0x10004f8f */ goto L_10004f8f;
L_10004f21:;
  /* 10004f21 mov edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edi = (u32)(M32(m_)); }
  /* 10004f24 cdq */ edx = (u32)((s32)eax >> 31);
  /* 10004f25 idiv edi */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, edi, &q_, &r_, 0x10004f25u); eax = q_; edx = r_; }
  /* 10004f27 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f28 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f29 imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10004f2c jmp 0x10004f8f */ goto L_10004f8f;
L_10004f2e:;
  /* 10004f2e cmp dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004f32 jne 0x10004f8d */ if (!ZF_) goto L_10004f8d;
  /* 10004f34 mov bl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f37 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10004f39 je 0x10004f8f */ if (ZF_) goto L_10004f8f;
  /* 10004f3b mov dl, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f3e test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10004f40 je 0x10004f8f */ if (ZF_) goto L_10004f8f;
  /* 10004f42 cmp bl, 0xbb */ { u32 a_ = (ebx & 0xffu), b_ = 0xbbu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f45 jne 0x10004f51 */ if (!ZF_) goto L_10004f51;
  /* 10004f47 cmp dl, 0xbf */ { u32 a_ = (edx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f4a jne 0x10004f51 */ if (!ZF_) goto L_10004f51;
  /* 10004f4c add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f4f jmp 0x10004f8f */ goto L_10004f8f;
L_10004f51:;
  /* 10004f51 cmp bl, 0xbf */ { u32 a_ = (ebx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f54 jne 0x10004f6e */ if (!ZF_) goto L_10004f6e;
  /* 10004f56 cmp dl, 0xbe */ { u32 a_ = (edx & 0xffu), b_ = 0xbeu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f59 jne 0x10004f60 */ if (!ZF_) goto L_10004f60;
  /* 10004f5b add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f5e jmp 0x10004f8f */ goto L_10004f8f;
L_10004f60:;
  /* 10004f60 cmp bl, 0xbf */ { u32 a_ = (ebx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f63 jne 0x10004f6e */ if (!ZF_) goto L_10004f6e;
  /* 10004f65 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f67 jne 0x10004f6e */ if (!ZF_) goto L_10004f6e;
  /* 10004f69 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f6c jmp 0x10004f8f */ goto L_10004f8f;
L_10004f6e:;
  /* 10004f6e add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f71 jmp 0x10004f8e */ goto L_10004f8e;
L_10004f73:;
  /* 10004f73 cmp dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004f77 jne 0x10004f8d */ if (!ZF_) goto L_10004f8d;
  /* 10004f79 movzx edx, dl */ { edx = (u32)((edx & 0xffu)); }
  /* 10004f7c mov edx, dword ptr [edx*4 + 0x10008338] */ { const u32 m_ = (u32)(edx * 4u + 0x10008338u); edx = (u32)(M32(m_)); }
  /* 10004f83 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004f85 jne 0x10004f89 */ if (!ZF_) goto L_10004f89;
  /* 10004f87 mov edx, ebx */ { edx = (u32)(ebx); }
L_10004f89:;
  /* 10004f89 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f8b jmp 0x10004f8e */ goto L_10004f8e;
L_10004f8d:;
  /* 10004f8d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10004f8e:;
  /* 10004f8e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10004f8f:;
  /* 10004f8f cmp esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004f93 jb 0x10004eda */ if (CF_) goto L_10004eda;
  /* 10004f99 mov dword ptr [ecx], ebp */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ebp); }
  /* 10004f9b mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10004f9e mov dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(esi); }
L_10004fa1:;
  /* 10004fa1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004fa2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10004fa3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004fa4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10004fa5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10004f12(CPU *c) {
  NATIVE_HOOK(0x10004f12u) REGS; LOADALL;
  goto L_10004f12;
L_10004eda:;
  /* 10004eda mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 10004edf nop */ ;
  /* 10004ee0 mov dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004ee2 movsx edi, dl */ { edi = (u32)((u32)sxt((edx & 0xffu), 1) & 0xffffffffu); }
  /* 10004ee5 add edi, 0x11 */ { u32 a_ = edi, b_ = 0x11u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10004ee8 cmp edi, 0x1e */ { u32 a_ = edi, b_ = 0x1eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004eeb ja 0x10004f73 */ if (!(CF_|ZF_)) goto L_10004f73;
  /* 10004ef1 movzx edi, byte ptr [edi + 0x10004fc0] */ { const u32 m_ = (u32)(edi + 0x10004fc0u); edi = (u32)(M8(m_)); }
  /* 10004ef8 jmp dword ptr [edi*4 + 0x10004fa8] */ { const u32 m_ = (u32)(edi * 4u + 0x10004fa8u); u32 t_ = M32(m_); switch (t_) { case 0x10004effu: goto L_10004eff; case 0x10004f12u: goto L_10004f12; case 0x10004f21u: goto L_10004f21; case 0x10004f2eu: goto L_10004f2e; case 0x10004f73u: goto L_10004f73; case 0x10004fa1u: goto L_10004fa1; default: SAVEALL; call_ind(c, t_); return; } }
L_10004eff:;
  /* 10004eff mov dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f02 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f03 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004f05 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f06 cmp dl, 0xa */ { u32 a_ = (edx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f09 jne 0x10004f8f */ if (!ZF_) goto L_10004f8f;
  /* 10004f0f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f10 jmp 0x10004f8f */ goto L_10004f8f;
L_10004f12:;
  /* 10004f12 mov dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f15 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f16 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004f18 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f19 cmp dl, 0xd */ { u32 a_ = (edx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f1c jne 0x10004f8f */ if (!ZF_) goto L_10004f8f;
  /* 10004f1e inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f1f jmp 0x10004f8f */ goto L_10004f8f;
L_10004f21:;
  /* 10004f21 mov edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edi = (u32)(M32(m_)); }
  /* 10004f24 cdq */ edx = (u32)((s32)eax >> 31);
  /* 10004f25 idiv edi */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, edi, &q_, &r_, 0x10004f25u); eax = q_; edx = r_; }
  /* 10004f27 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f28 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f29 imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10004f2c jmp 0x10004f8f */ goto L_10004f8f;
L_10004f2e:;
  /* 10004f2e cmp dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004f32 jne 0x10004f8d */ if (!ZF_) goto L_10004f8d;
  /* 10004f34 mov bl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f37 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10004f39 je 0x10004f8f */ if (ZF_) goto L_10004f8f;
  /* 10004f3b mov dl, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f3e test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10004f40 je 0x10004f8f */ if (ZF_) goto L_10004f8f;
  /* 10004f42 cmp bl, 0xbb */ { u32 a_ = (ebx & 0xffu), b_ = 0xbbu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f45 jne 0x10004f51 */ if (!ZF_) goto L_10004f51;
  /* 10004f47 cmp dl, 0xbf */ { u32 a_ = (edx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f4a jne 0x10004f51 */ if (!ZF_) goto L_10004f51;
  /* 10004f4c add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f4f jmp 0x10004f8f */ goto L_10004f8f;
L_10004f51:;
  /* 10004f51 cmp bl, 0xbf */ { u32 a_ = (ebx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f54 jne 0x10004f6e */ if (!ZF_) goto L_10004f6e;
  /* 10004f56 cmp dl, 0xbe */ { u32 a_ = (edx & 0xffu), b_ = 0xbeu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f59 jne 0x10004f60 */ if (!ZF_) goto L_10004f60;
  /* 10004f5b add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f5e jmp 0x10004f8f */ goto L_10004f8f;
L_10004f60:;
  /* 10004f60 cmp bl, 0xbf */ { u32 a_ = (ebx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f63 jne 0x10004f6e */ if (!ZF_) goto L_10004f6e;
  /* 10004f65 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f67 jne 0x10004f6e */ if (!ZF_) goto L_10004f6e;
  /* 10004f69 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f6c jmp 0x10004f8f */ goto L_10004f8f;
L_10004f6e:;
  /* 10004f6e add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f71 jmp 0x10004f8e */ goto L_10004f8e;
L_10004f73:;
  /* 10004f73 cmp dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004f77 jne 0x10004f8d */ if (!ZF_) goto L_10004f8d;
  /* 10004f79 movzx edx, dl */ { edx = (u32)((edx & 0xffu)); }
  /* 10004f7c mov edx, dword ptr [edx*4 + 0x10008338] */ { const u32 m_ = (u32)(edx * 4u + 0x10008338u); edx = (u32)(M32(m_)); }
  /* 10004f83 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004f85 jne 0x10004f89 */ if (!ZF_) goto L_10004f89;
  /* 10004f87 mov edx, ebx */ { edx = (u32)(ebx); }
L_10004f89:;
  /* 10004f89 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f8b jmp 0x10004f8e */ goto L_10004f8e;
L_10004f8d:;
  /* 10004f8d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10004f8e:;
  /* 10004f8e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10004f8f:;
  /* 10004f8f cmp esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004f93 jb 0x10004eda */ if (CF_) goto L_10004eda;
  /* 10004f99 mov dword ptr [ecx], ebp */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ebp); }
  /* 10004f9b mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10004f9e mov dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(esi); }
L_10004fa1:;
  /* 10004fa1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004fa2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10004fa3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004fa4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10004fa5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10004f21(CPU *c) {
  NATIVE_HOOK(0x10004f21u) REGS; LOADALL;
  goto L_10004f21;
L_10004eda:;
  /* 10004eda mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 10004edf nop */ ;
  /* 10004ee0 mov dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004ee2 movsx edi, dl */ { edi = (u32)((u32)sxt((edx & 0xffu), 1) & 0xffffffffu); }
  /* 10004ee5 add edi, 0x11 */ { u32 a_ = edi, b_ = 0x11u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10004ee8 cmp edi, 0x1e */ { u32 a_ = edi, b_ = 0x1eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004eeb ja 0x10004f73 */ if (!(CF_|ZF_)) goto L_10004f73;
  /* 10004ef1 movzx edi, byte ptr [edi + 0x10004fc0] */ { const u32 m_ = (u32)(edi + 0x10004fc0u); edi = (u32)(M8(m_)); }
  /* 10004ef8 jmp dword ptr [edi*4 + 0x10004fa8] */ { const u32 m_ = (u32)(edi * 4u + 0x10004fa8u); u32 t_ = M32(m_); switch (t_) { case 0x10004effu: goto L_10004eff; case 0x10004f12u: goto L_10004f12; case 0x10004f21u: goto L_10004f21; case 0x10004f2eu: goto L_10004f2e; case 0x10004f73u: goto L_10004f73; case 0x10004fa1u: goto L_10004fa1; default: SAVEALL; call_ind(c, t_); return; } }
L_10004eff:;
  /* 10004eff mov dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f02 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f03 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004f05 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f06 cmp dl, 0xa */ { u32 a_ = (edx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f09 jne 0x10004f8f */ if (!ZF_) goto L_10004f8f;
  /* 10004f0f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f10 jmp 0x10004f8f */ goto L_10004f8f;
L_10004f12:;
  /* 10004f12 mov dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f15 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f16 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004f18 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f19 cmp dl, 0xd */ { u32 a_ = (edx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f1c jne 0x10004f8f */ if (!ZF_) goto L_10004f8f;
  /* 10004f1e inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f1f jmp 0x10004f8f */ goto L_10004f8f;
L_10004f21:;
  /* 10004f21 mov edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edi = (u32)(M32(m_)); }
  /* 10004f24 cdq */ edx = (u32)((s32)eax >> 31);
  /* 10004f25 idiv edi */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, edi, &q_, &r_, 0x10004f25u); eax = q_; edx = r_; }
  /* 10004f27 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f28 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f29 imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10004f2c jmp 0x10004f8f */ goto L_10004f8f;
L_10004f2e:;
  /* 10004f2e cmp dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004f32 jne 0x10004f8d */ if (!ZF_) goto L_10004f8d;
  /* 10004f34 mov bl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f37 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10004f39 je 0x10004f8f */ if (ZF_) goto L_10004f8f;
  /* 10004f3b mov dl, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f3e test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10004f40 je 0x10004f8f */ if (ZF_) goto L_10004f8f;
  /* 10004f42 cmp bl, 0xbb */ { u32 a_ = (ebx & 0xffu), b_ = 0xbbu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f45 jne 0x10004f51 */ if (!ZF_) goto L_10004f51;
  /* 10004f47 cmp dl, 0xbf */ { u32 a_ = (edx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f4a jne 0x10004f51 */ if (!ZF_) goto L_10004f51;
  /* 10004f4c add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f4f jmp 0x10004f8f */ goto L_10004f8f;
L_10004f51:;
  /* 10004f51 cmp bl, 0xbf */ { u32 a_ = (ebx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f54 jne 0x10004f6e */ if (!ZF_) goto L_10004f6e;
  /* 10004f56 cmp dl, 0xbe */ { u32 a_ = (edx & 0xffu), b_ = 0xbeu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f59 jne 0x10004f60 */ if (!ZF_) goto L_10004f60;
  /* 10004f5b add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f5e jmp 0x10004f8f */ goto L_10004f8f;
L_10004f60:;
  /* 10004f60 cmp bl, 0xbf */ { u32 a_ = (ebx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f63 jne 0x10004f6e */ if (!ZF_) goto L_10004f6e;
  /* 10004f65 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f67 jne 0x10004f6e */ if (!ZF_) goto L_10004f6e;
  /* 10004f69 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f6c jmp 0x10004f8f */ goto L_10004f8f;
L_10004f6e:;
  /* 10004f6e add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f71 jmp 0x10004f8e */ goto L_10004f8e;
L_10004f73:;
  /* 10004f73 cmp dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004f77 jne 0x10004f8d */ if (!ZF_) goto L_10004f8d;
  /* 10004f79 movzx edx, dl */ { edx = (u32)((edx & 0xffu)); }
  /* 10004f7c mov edx, dword ptr [edx*4 + 0x10008338] */ { const u32 m_ = (u32)(edx * 4u + 0x10008338u); edx = (u32)(M32(m_)); }
  /* 10004f83 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004f85 jne 0x10004f89 */ if (!ZF_) goto L_10004f89;
  /* 10004f87 mov edx, ebx */ { edx = (u32)(ebx); }
L_10004f89:;
  /* 10004f89 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f8b jmp 0x10004f8e */ goto L_10004f8e;
L_10004f8d:;
  /* 10004f8d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10004f8e:;
  /* 10004f8e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10004f8f:;
  /* 10004f8f cmp esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004f93 jb 0x10004eda */ if (CF_) goto L_10004eda;
  /* 10004f99 mov dword ptr [ecx], ebp */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ebp); }
  /* 10004f9b mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10004f9e mov dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(esi); }
L_10004fa1:;
  /* 10004fa1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004fa2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10004fa3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004fa4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10004fa5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10004f2e(CPU *c) {
  NATIVE_HOOK(0x10004f2eu) REGS; LOADALL;
  goto L_10004f2e;
L_10004eda:;
  /* 10004eda mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 10004edf nop */ ;
  /* 10004ee0 mov dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004ee2 movsx edi, dl */ { edi = (u32)((u32)sxt((edx & 0xffu), 1) & 0xffffffffu); }
  /* 10004ee5 add edi, 0x11 */ { u32 a_ = edi, b_ = 0x11u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10004ee8 cmp edi, 0x1e */ { u32 a_ = edi, b_ = 0x1eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004eeb ja 0x10004f73 */ if (!(CF_|ZF_)) goto L_10004f73;
  /* 10004ef1 movzx edi, byte ptr [edi + 0x10004fc0] */ { const u32 m_ = (u32)(edi + 0x10004fc0u); edi = (u32)(M8(m_)); }
  /* 10004ef8 jmp dword ptr [edi*4 + 0x10004fa8] */ { const u32 m_ = (u32)(edi * 4u + 0x10004fa8u); u32 t_ = M32(m_); switch (t_) { case 0x10004effu: goto L_10004eff; case 0x10004f12u: goto L_10004f12; case 0x10004f21u: goto L_10004f21; case 0x10004f2eu: goto L_10004f2e; case 0x10004f73u: goto L_10004f73; case 0x10004fa1u: goto L_10004fa1; default: SAVEALL; call_ind(c, t_); return; } }
L_10004eff:;
  /* 10004eff mov dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f02 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f03 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004f05 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f06 cmp dl, 0xa */ { u32 a_ = (edx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f09 jne 0x10004f8f */ if (!ZF_) goto L_10004f8f;
  /* 10004f0f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f10 jmp 0x10004f8f */ goto L_10004f8f;
L_10004f12:;
  /* 10004f12 mov dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f15 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f16 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004f18 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f19 cmp dl, 0xd */ { u32 a_ = (edx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f1c jne 0x10004f8f */ if (!ZF_) goto L_10004f8f;
  /* 10004f1e inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f1f jmp 0x10004f8f */ goto L_10004f8f;
L_10004f21:;
  /* 10004f21 mov edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edi = (u32)(M32(m_)); }
  /* 10004f24 cdq */ edx = (u32)((s32)eax >> 31);
  /* 10004f25 idiv edi */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, edi, &q_, &r_, 0x10004f25u); eax = q_; edx = r_; }
  /* 10004f27 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f28 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f29 imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10004f2c jmp 0x10004f8f */ goto L_10004f8f;
L_10004f2e:;
  /* 10004f2e cmp dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004f32 jne 0x10004f8d */ if (!ZF_) goto L_10004f8d;
  /* 10004f34 mov bl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f37 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10004f39 je 0x10004f8f */ if (ZF_) goto L_10004f8f;
  /* 10004f3b mov dl, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f3e test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10004f40 je 0x10004f8f */ if (ZF_) goto L_10004f8f;
  /* 10004f42 cmp bl, 0xbb */ { u32 a_ = (ebx & 0xffu), b_ = 0xbbu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f45 jne 0x10004f51 */ if (!ZF_) goto L_10004f51;
  /* 10004f47 cmp dl, 0xbf */ { u32 a_ = (edx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f4a jne 0x10004f51 */ if (!ZF_) goto L_10004f51;
  /* 10004f4c add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f4f jmp 0x10004f8f */ goto L_10004f8f;
L_10004f51:;
  /* 10004f51 cmp bl, 0xbf */ { u32 a_ = (ebx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f54 jne 0x10004f6e */ if (!ZF_) goto L_10004f6e;
  /* 10004f56 cmp dl, 0xbe */ { u32 a_ = (edx & 0xffu), b_ = 0xbeu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f59 jne 0x10004f60 */ if (!ZF_) goto L_10004f60;
  /* 10004f5b add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f5e jmp 0x10004f8f */ goto L_10004f8f;
L_10004f60:;
  /* 10004f60 cmp bl, 0xbf */ { u32 a_ = (ebx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f63 jne 0x10004f6e */ if (!ZF_) goto L_10004f6e;
  /* 10004f65 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f67 jne 0x10004f6e */ if (!ZF_) goto L_10004f6e;
  /* 10004f69 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f6c jmp 0x10004f8f */ goto L_10004f8f;
L_10004f6e:;
  /* 10004f6e add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f71 jmp 0x10004f8e */ goto L_10004f8e;
L_10004f73:;
  /* 10004f73 cmp dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004f77 jne 0x10004f8d */ if (!ZF_) goto L_10004f8d;
  /* 10004f79 movzx edx, dl */ { edx = (u32)((edx & 0xffu)); }
  /* 10004f7c mov edx, dword ptr [edx*4 + 0x10008338] */ { const u32 m_ = (u32)(edx * 4u + 0x10008338u); edx = (u32)(M32(m_)); }
  /* 10004f83 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004f85 jne 0x10004f89 */ if (!ZF_) goto L_10004f89;
  /* 10004f87 mov edx, ebx */ { edx = (u32)(ebx); }
L_10004f89:;
  /* 10004f89 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f8b jmp 0x10004f8e */ goto L_10004f8e;
L_10004f8d:;
  /* 10004f8d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10004f8e:;
  /* 10004f8e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10004f8f:;
  /* 10004f8f cmp esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004f93 jb 0x10004eda */ if (CF_) goto L_10004eda;
  /* 10004f99 mov dword ptr [ecx], ebp */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ebp); }
  /* 10004f9b mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10004f9e mov dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(esi); }
L_10004fa1:;
  /* 10004fa1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004fa2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10004fa3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004fa4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10004fa5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10004f73(CPU *c) {
  NATIVE_HOOK(0x10004f73u) REGS; LOADALL;
  goto L_10004f73;
L_10004eda:;
  /* 10004eda mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 10004edf nop */ ;
  /* 10004ee0 mov dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004ee2 movsx edi, dl */ { edi = (u32)((u32)sxt((edx & 0xffu), 1) & 0xffffffffu); }
  /* 10004ee5 add edi, 0x11 */ { u32 a_ = edi, b_ = 0x11u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10004ee8 cmp edi, 0x1e */ { u32 a_ = edi, b_ = 0x1eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004eeb ja 0x10004f73 */ if (!(CF_|ZF_)) goto L_10004f73;
  /* 10004ef1 movzx edi, byte ptr [edi + 0x10004fc0] */ { const u32 m_ = (u32)(edi + 0x10004fc0u); edi = (u32)(M8(m_)); }
  /* 10004ef8 jmp dword ptr [edi*4 + 0x10004fa8] */ { const u32 m_ = (u32)(edi * 4u + 0x10004fa8u); u32 t_ = M32(m_); switch (t_) { case 0x10004effu: goto L_10004eff; case 0x10004f12u: goto L_10004f12; case 0x10004f21u: goto L_10004f21; case 0x10004f2eu: goto L_10004f2e; case 0x10004f73u: goto L_10004f73; case 0x10004fa1u: goto L_10004fa1; default: SAVEALL; call_ind(c, t_); return; } }
L_10004eff:;
  /* 10004eff mov dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f02 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f03 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004f05 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f06 cmp dl, 0xa */ { u32 a_ = (edx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f09 jne 0x10004f8f */ if (!ZF_) goto L_10004f8f;
  /* 10004f0f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f10 jmp 0x10004f8f */ goto L_10004f8f;
L_10004f12:;
  /* 10004f12 mov dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f15 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f16 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10004f18 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f19 cmp dl, 0xd */ { u32 a_ = (edx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f1c jne 0x10004f8f */ if (!ZF_) goto L_10004f8f;
  /* 10004f1e inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f1f jmp 0x10004f8f */ goto L_10004f8f;
L_10004f21:;
  /* 10004f21 mov edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edi = (u32)(M32(m_)); }
  /* 10004f24 cdq */ edx = (u32)((s32)eax >> 31);
  /* 10004f25 idiv edi */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, edi, &q_, &r_, 0x10004f25u); eax = q_; edx = r_; }
  /* 10004f27 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f28 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10004f29 imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 10004f2c jmp 0x10004f8f */ goto L_10004f8f;
L_10004f2e:;
  /* 10004f2e cmp dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004f32 jne 0x10004f8d */ if (!ZF_) goto L_10004f8d;
  /* 10004f34 mov bl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f37 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10004f39 je 0x10004f8f */ if (ZF_) goto L_10004f8f;
  /* 10004f3b mov dl, byte ptr [esi + 2] */ { const u32 m_ = (u32)(esi + 0x2u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004f3e test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10004f40 je 0x10004f8f */ if (ZF_) goto L_10004f8f;
  /* 10004f42 cmp bl, 0xbb */ { u32 a_ = (ebx & 0xffu), b_ = 0xbbu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f45 jne 0x10004f51 */ if (!ZF_) goto L_10004f51;
  /* 10004f47 cmp dl, 0xbf */ { u32 a_ = (edx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f4a jne 0x10004f51 */ if (!ZF_) goto L_10004f51;
  /* 10004f4c add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f4f jmp 0x10004f8f */ goto L_10004f8f;
L_10004f51:;
  /* 10004f51 cmp bl, 0xbf */ { u32 a_ = (ebx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f54 jne 0x10004f6e */ if (!ZF_) goto L_10004f6e;
  /* 10004f56 cmp dl, 0xbe */ { u32 a_ = (edx & 0xffu), b_ = 0xbeu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f59 jne 0x10004f60 */ if (!ZF_) goto L_10004f60;
  /* 10004f5b add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f5e jmp 0x10004f8f */ goto L_10004f8f;
L_10004f60:;
  /* 10004f60 cmp bl, 0xbf */ { u32 a_ = (ebx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f63 jne 0x10004f6e */ if (!ZF_) goto L_10004f6e;
  /* 10004f65 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10004f67 jne 0x10004f6e */ if (!ZF_) goto L_10004f6e;
  /* 10004f69 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f6c jmp 0x10004f8f */ goto L_10004f8f;
L_10004f6e:;
  /* 10004f6e add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f71 jmp 0x10004f8e */ goto L_10004f8e;
L_10004f73:;
  /* 10004f73 cmp dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004f77 jne 0x10004f8d */ if (!ZF_) goto L_10004f8d;
  /* 10004f79 movzx edx, dl */ { edx = (u32)((edx & 0xffu)); }
  /* 10004f7c mov edx, dword ptr [edx*4 + 0x10008338] */ { const u32 m_ = (u32)(edx * 4u + 0x10008338u); edx = (u32)(M32(m_)); }
  /* 10004f83 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004f85 jne 0x10004f89 */ if (!ZF_) goto L_10004f89;
  /* 10004f87 mov edx, ebx */ { edx = (u32)(ebx); }
L_10004f89:;
  /* 10004f89 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10004f8b jmp 0x10004f8e */ goto L_10004f8e;
L_10004f8d:;
  /* 10004f8d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10004f8e:;
  /* 10004f8e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10004f8f:;
  /* 10004f8f cmp esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004f93 jb 0x10004eda */ if (CF_) goto L_10004eda;
  /* 10004f99 mov dword ptr [ecx], ebp */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ebp); }
  /* 10004f9b mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10004f9e mov dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(esi); }
L_10004fa1:;
  /* 10004fa1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004fa2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10004fa3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004fa4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10004fa5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10004fa1(CPU *c) {
  NATIVE_HOOK(0x10004fa1u) REGS; LOADALL;
L_10004fa1:;
  /* 10004fa1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10004fa2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10004fa3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10004fa4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10004fa5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10004fa8(CPU *c) {
  NATIVE_HOOK(0x10004fa8u) REGS; LOADALL;
L_10004fa8:;
  /* 10004fa8 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10004faa add byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 10004fac mov eax, dword ptr [0x2110004f] */ { const u32 m_ = (u32)(0x2110004fu); eax = (u32)(M32(m_)); }
  /* 10004fb1 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10004fb2 add byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 10004fb4 adc cl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = (ecx & 0xffu), b_ = M8(m_); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004fb7 adc bh, bh */ { u32 a_ = ((ebx >> 8) & 0xffu), b_ = ((ebx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); ebx = (ebx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10004fb9 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10004fba add byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 10004fbc jae 0x1000500d */ if (!CF_) goto L_1000500d;
  /* 10004fbe add byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 10004fc0 add byte ptr [0x5050505], al */ { const u32 m_ = (u32)(0x5050505u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 10004fc6 add eax, 0x5050505 */ { u32 a_ = eax, b_ = 0x5050505u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10004fcb add eax, 0x5050505 */ { u32 a_ = eax, b_ = 0x5050505u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10004fd0 add eax, 0x5050501 */ { u32 a_ = eax, b_ = 0x5050501u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10004fd5 add eax, 0x5050505 */ { u32 a_ = eax, b_ = 0x5050505u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10004fda add al, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004fdc add eax, 0x53cc0405 */ { u32 a_ = eax, b_ = 0x53cc0405u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10004fe1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004fe2 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10004fe6 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004fe8 je 0x10005092 */ if (ZF_) goto L_10005092;
  /* 10004fee mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004ff0 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10004ff2 je 0x10005092 */ if (ZF_) goto L_10005092;
  /* 10004ff8 cmp dword ptr [esp + 0x10], 1 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004ffd jne 0x10005065 */ if (!ZF_) goto L_10005065;
  /* 10004fff nop */ ;
L_10005000:;
  /* 10005000 cmp bl, 0xef */ { u32 a_ = (ebx & 0xffu), b_ = 0xefu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005003 jne 0x10005035 */ if (!ZF_) goto L_10005035;
  /* 10005005 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005008 cmp al, 0xbb */ { u32 a_ = (eax & 0xffu), b_ = 0xbbu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000500a jne 0x10005017 */ if (!ZF_) goto L_10005017;
  /* 1000500c cmp byte ptr [esi + 2], 0xbf */ { const u32 m_ = (u32)(esi + 0x2u); u32 a_ = M8(m_), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  goto L_10005010;
L_1000500d:;
  /* 1000500d jle 0x10005011 */ if ((ZF_|LT_)) goto L_10005011;
  /* 1000500f mov edi, 0xc6830575 */ { edi = (u32)(0xc6830575u); }
  goto L_10005014;
L_10005010:;
  /* 10005010 jne 0x10005017 */ if (!ZF_) goto L_10005017;
  goto L_10005012;
L_10005011:;
  /* 10005011 add eax, 0xeb03c683 */ { u32 a_ = eax, b_ = 0xeb03c683u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  goto L_10005016;
L_10005012:;
  /* 10005012 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  goto L_10005015;
L_10005014:;
  /* 10005014 add ebp, ebx */ { u32 a_ = ebp, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  goto L_10005016;
L_10005015:;
  /* 10005015 jmp 0x1000505a */ goto L_1000505a;
L_10005016:;
  /* 10005016 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10005017:;
  /* 10005017 cmp al, 0xbf */ { u32 a_ = (eax & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005019 jne 0x10005035 */ if (!ZF_) goto L_10005035;
  /* 1000501b cmp byte ptr [esi + 2], 0xbe */ { const u32 m_ = (u32)(esi + 0x2u); u32 a_ = M8(m_), b_ = 0xbeu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000501f jne 0x10005026 */ if (!ZF_) goto L_10005026;
  /* 10005021 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10005024 jmp 0x1000505a */ goto L_1000505a;
L_10005026:;
  /* 10005026 cmp al, 0xbf */ { u32 a_ = (eax & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005028 jne 0x10005035 */ if (!ZF_) goto L_10005035;
  /* 1000502a cmp byte ptr [esi + 2], 0xbf */ { const u32 m_ = (u32)(esi + 0x2u); u32 a_ = M8(m_), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000502e jne 0x10005035 */ if (!ZF_) goto L_10005035;
  /* 10005030 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10005033 jmp 0x1000505a */ goto L_1000505a;
L_10005035:;
  /* 10005035 movzx eax, bl */ { eax = (u32)((ebx & 0xffu)); }
  /* 10005038 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005039 call 0x10007044 */ esp -= 4; M32(esp) = 0x1000503eu; SAVEALL; F_10007044(c); ABI_CHECK(0x10007044u, 0x10005039u); RETCHK(0x1000503eu, 0x10005039u); LOADALL;
  /* 1000503e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005041 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005043 jne 0x10005059 */ if (!ZF_) goto L_10005059;
  /* 10005045 cmp bl, 0xa */ { u32 a_ = (ebx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005048 je 0x10005059 */ if (ZF_) goto L_10005059;
  /* 1000504a cmp bl, 0xd */ { u32 a_ = (ebx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000504d je 0x10005059 */ if (ZF_) goto L_10005059;
  /* 1000504f mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005051 cmp al, 0xa */ { u32 a_ = (eax & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005053 je 0x10005059 */ if (ZF_) goto L_10005059;
  /* 10005055 cmp al, 0xd */ { u32 a_ = (eax & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005057 jne 0x10005060 */ if (!ZF_) goto L_10005060;
L_10005059:;
  /* 10005059 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1000505a:;
  /* 1000505a mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000505c test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000505e jne 0x10005000 */ if (!ZF_) goto L_10005000;
L_10005060:;
  /* 10005060 mov eax, esi */ { eax = (u32)(esi); }
  /* 10005062 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005063 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10005064 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10005065:;
  /* 10005065 mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005067 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005069 je 0x10005085 */ if (ZF_) goto L_10005085;
  /* 1000506b movzx ecx, bl */ { ecx = (u32)((ebx & 0xffu)); }
  /* 1000506e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1000506f call 0x10007044 */ esp -= 4; M32(esp) = 0x10005074u; SAVEALL; F_10007044(c); ABI_CHECK(0x10007044u, 0x1000506fu); RETCHK(0x10005074u, 0x1000506fu); LOADALL;
  /* 10005074 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005077 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005079 jne 0x1000508f */ if (!ZF_) goto L_1000508f;
  /* 1000507b cmp bl, 0xa */ { u32 a_ = (ebx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000507e je 0x1000508f */ if (ZF_) goto L_1000508f;
  /* 10005080 cmp bl, 0xd */ { u32 a_ = (ebx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005083 je 0x1000508f */ if (ZF_) goto L_1000508f;
L_10005085:;
  /* 10005085 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005087 cmp al, 0xa */ { u32 a_ = (eax & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005089 je 0x1000508f */ if (ZF_) goto L_1000508f;
  /* 1000508b cmp al, 0xd */ { u32 a_ = (eax & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000508d jne 0x10005060 */ if (!ZF_) goto L_10005060;
L_1000508f:;
  /* 1000508f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10005090 jmp 0x10005065 */ goto L_10005065;
L_10005092:;
  /* 10005092 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005093 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10005095 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10005096 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004fc0(CPU *c) {
  NATIVE_HOOK(0x10004fc0u) REGS; LOADALL;
L_10004fc0:;
  /* 10004fc0 add byte ptr [0x5050505], al */ { const u32 m_ = (u32)(0x5050505u); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 10004fc6 add eax, 0x5050505 */ { u32 a_ = eax, b_ = 0x5050505u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10004fcb add eax, 0x5050505 */ { u32 a_ = eax, b_ = 0x5050505u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10004fd0 add eax, 0x5050501 */ { u32 a_ = eax, b_ = 0x5050501u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10004fd5 add eax, 0x5050505 */ { u32 a_ = eax, b_ = 0x5050505u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10004fda add al, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10004fdc add eax, 0x53cc0405 */ { u32 a_ = eax, b_ = 0x53cc0405u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10004fe1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004fe2 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10004fe6 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004fe8 je 0x10005092 */ if (ZF_) goto L_10005092;
  /* 10004fee mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004ff0 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10004ff2 je 0x10005092 */ if (ZF_) goto L_10005092;
  /* 10004ff8 cmp dword ptr [esp + 0x10], 1 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004ffd jne 0x10005065 */ if (!ZF_) goto L_10005065;
  /* 10004fff nop */ ;
L_10005000:;
  /* 10005000 cmp bl, 0xef */ { u32 a_ = (ebx & 0xffu), b_ = 0xefu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005003 jne 0x10005035 */ if (!ZF_) goto L_10005035;
  /* 10005005 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005008 cmp al, 0xbb */ { u32 a_ = (eax & 0xffu), b_ = 0xbbu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000500a jne 0x10005017 */ if (!ZF_) goto L_10005017;
  /* 1000500c cmp byte ptr [esi + 2], 0xbf */ { const u32 m_ = (u32)(esi + 0x2u); u32 a_ = M8(m_), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005010 jne 0x10005017 */ if (!ZF_) goto L_10005017;
  /* 10005012 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10005015 jmp 0x1000505a */ goto L_1000505a;
L_10005017:;
  /* 10005017 cmp al, 0xbf */ { u32 a_ = (eax & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005019 jne 0x10005035 */ if (!ZF_) goto L_10005035;
  /* 1000501b cmp byte ptr [esi + 2], 0xbe */ { const u32 m_ = (u32)(esi + 0x2u); u32 a_ = M8(m_), b_ = 0xbeu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000501f jne 0x10005026 */ if (!ZF_) goto L_10005026;
  /* 10005021 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10005024 jmp 0x1000505a */ goto L_1000505a;
L_10005026:;
  /* 10005026 cmp al, 0xbf */ { u32 a_ = (eax & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005028 jne 0x10005035 */ if (!ZF_) goto L_10005035;
  /* 1000502a cmp byte ptr [esi + 2], 0xbf */ { const u32 m_ = (u32)(esi + 0x2u); u32 a_ = M8(m_), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000502e jne 0x10005035 */ if (!ZF_) goto L_10005035;
  /* 10005030 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10005033 jmp 0x1000505a */ goto L_1000505a;
L_10005035:;
  /* 10005035 movzx eax, bl */ { eax = (u32)((ebx & 0xffu)); }
  /* 10005038 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005039 call 0x10007044 */ esp -= 4; M32(esp) = 0x1000503eu; SAVEALL; F_10007044(c); ABI_CHECK(0x10007044u, 0x10005039u); RETCHK(0x1000503eu, 0x10005039u); LOADALL;
  /* 1000503e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005041 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005043 jne 0x10005059 */ if (!ZF_) goto L_10005059;
  /* 10005045 cmp bl, 0xa */ { u32 a_ = (ebx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005048 je 0x10005059 */ if (ZF_) goto L_10005059;
  /* 1000504a cmp bl, 0xd */ { u32 a_ = (ebx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000504d je 0x10005059 */ if (ZF_) goto L_10005059;
  /* 1000504f mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005051 cmp al, 0xa */ { u32 a_ = (eax & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005053 je 0x10005059 */ if (ZF_) goto L_10005059;
  /* 10005055 cmp al, 0xd */ { u32 a_ = (eax & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005057 jne 0x10005060 */ if (!ZF_) goto L_10005060;
L_10005059:;
  /* 10005059 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1000505a:;
  /* 1000505a mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000505c test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000505e jne 0x10005000 */ if (!ZF_) goto L_10005000;
L_10005060:;
  /* 10005060 mov eax, esi */ { eax = (u32)(esi); }
  /* 10005062 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005063 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10005064 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10005065:;
  /* 10005065 mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005067 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005069 je 0x10005085 */ if (ZF_) goto L_10005085;
  /* 1000506b movzx ecx, bl */ { ecx = (u32)((ebx & 0xffu)); }
  /* 1000506e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1000506f call 0x10007044 */ esp -= 4; M32(esp) = 0x10005074u; SAVEALL; F_10007044(c); ABI_CHECK(0x10007044u, 0x1000506fu); RETCHK(0x10005074u, 0x1000506fu); LOADALL;
  /* 10005074 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005077 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005079 jne 0x1000508f */ if (!ZF_) goto L_1000508f;
  /* 1000507b cmp bl, 0xa */ { u32 a_ = (ebx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000507e je 0x1000508f */ if (ZF_) goto L_1000508f;
  /* 10005080 cmp bl, 0xd */ { u32 a_ = (ebx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005083 je 0x1000508f */ if (ZF_) goto L_1000508f;
L_10005085:;
  /* 10005085 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005087 cmp al, 0xa */ { u32 a_ = (eax & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005089 je 0x1000508f */ if (ZF_) goto L_1000508f;
  /* 1000508b cmp al, 0xd */ { u32 a_ = (eax & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000508d jne 0x10005060 */ if (!ZF_) goto L_10005060;
L_1000508f:;
  /* 1000508f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10005090 jmp 0x10005065 */ goto L_10005065;
L_10005092:;
  /* 10005092 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005093 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10005095 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10005096 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10004fe0(CPU *c) {
  NATIVE_HOOK(0x10004fe0u) REGS; LOADALL;
L_10004fe0:;
  /* 10004fe0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10004fe1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10004fe2 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10004fe6 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10004fe8 je 0x10005092 */ if (ZF_) goto L_10005092;
  /* 10004fee mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10004ff0 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10004ff2 je 0x10005092 */ if (ZF_) goto L_10005092;
  /* 10004ff8 cmp dword ptr [esp + 0x10], 1 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10004ffd jne 0x10005065 */ if (!ZF_) goto L_10005065;
  /* 10004fff nop */ ;
L_10005000:;
  /* 10005000 cmp bl, 0xef */ { u32 a_ = (ebx & 0xffu), b_ = 0xefu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005003 jne 0x10005035 */ if (!ZF_) goto L_10005035;
  /* 10005005 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005008 cmp al, 0xbb */ { u32 a_ = (eax & 0xffu), b_ = 0xbbu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000500a jne 0x10005017 */ if (!ZF_) goto L_10005017;
  /* 1000500c cmp byte ptr [esi + 2], 0xbf */ { const u32 m_ = (u32)(esi + 0x2u); u32 a_ = M8(m_), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005010 jne 0x10005017 */ if (!ZF_) goto L_10005017;
  /* 10005012 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10005015 jmp 0x1000505a */ goto L_1000505a;
L_10005017:;
  /* 10005017 cmp al, 0xbf */ { u32 a_ = (eax & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005019 jne 0x10005035 */ if (!ZF_) goto L_10005035;
  /* 1000501b cmp byte ptr [esi + 2], 0xbe */ { const u32 m_ = (u32)(esi + 0x2u); u32 a_ = M8(m_), b_ = 0xbeu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000501f jne 0x10005026 */ if (!ZF_) goto L_10005026;
  /* 10005021 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10005024 jmp 0x1000505a */ goto L_1000505a;
L_10005026:;
  /* 10005026 cmp al, 0xbf */ { u32 a_ = (eax & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005028 jne 0x10005035 */ if (!ZF_) goto L_10005035;
  /* 1000502a cmp byte ptr [esi + 2], 0xbf */ { const u32 m_ = (u32)(esi + 0x2u); u32 a_ = M8(m_), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000502e jne 0x10005035 */ if (!ZF_) goto L_10005035;
  /* 10005030 add esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10005033 jmp 0x1000505a */ goto L_1000505a;
L_10005035:;
  /* 10005035 movzx eax, bl */ { eax = (u32)((ebx & 0xffu)); }
  /* 10005038 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005039 call 0x10007044 */ esp -= 4; M32(esp) = 0x1000503eu; SAVEALL; F_10007044(c); ABI_CHECK(0x10007044u, 0x10005039u); RETCHK(0x1000503eu, 0x10005039u); LOADALL;
  /* 1000503e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005041 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005043 jne 0x10005059 */ if (!ZF_) goto L_10005059;
  /* 10005045 cmp bl, 0xa */ { u32 a_ = (ebx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005048 je 0x10005059 */ if (ZF_) goto L_10005059;
  /* 1000504a cmp bl, 0xd */ { u32 a_ = (ebx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000504d je 0x10005059 */ if (ZF_) goto L_10005059;
  /* 1000504f mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005051 cmp al, 0xa */ { u32 a_ = (eax & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005053 je 0x10005059 */ if (ZF_) goto L_10005059;
  /* 10005055 cmp al, 0xd */ { u32 a_ = (eax & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005057 jne 0x10005060 */ if (!ZF_) goto L_10005060;
L_10005059:;
  /* 10005059 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1000505a:;
  /* 1000505a mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000505c test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000505e jne 0x10005000 */ if (!ZF_) goto L_10005000;
L_10005060:;
  /* 10005060 mov eax, esi */ { eax = (u32)(esi); }
  /* 10005062 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005063 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10005064 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10005065:;
  /* 10005065 mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005067 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005069 je 0x10005085 */ if (ZF_) goto L_10005085;
  /* 1000506b movzx ecx, bl */ { ecx = (u32)((ebx & 0xffu)); }
  /* 1000506e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1000506f call 0x10007044 */ esp -= 4; M32(esp) = 0x10005074u; SAVEALL; F_10007044(c); ABI_CHECK(0x10007044u, 0x1000506fu); RETCHK(0x10005074u, 0x1000506fu); LOADALL;
  /* 10005074 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005077 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005079 jne 0x1000508f */ if (!ZF_) goto L_1000508f;
  /* 1000507b cmp bl, 0xa */ { u32 a_ = (ebx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000507e je 0x1000508f */ if (ZF_) goto L_1000508f;
  /* 10005080 cmp bl, 0xd */ { u32 a_ = (ebx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005083 je 0x1000508f */ if (ZF_) goto L_1000508f;
L_10005085:;
  /* 10005085 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005087 cmp al, 0xa */ { u32 a_ = (eax & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005089 je 0x1000508f */ if (ZF_) goto L_1000508f;
  /* 1000508b cmp al, 0xd */ { u32 a_ = (eax & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000508d jne 0x10005060 */ if (!ZF_) goto L_10005060;
L_1000508f:;
  /* 1000508f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10005090 jmp 0x10005065 */ goto L_10005065;
L_10005092:;
  /* 10005092 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005093 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10005095 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10005096 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100050a0(CPU *c) {
  NATIVE_HOOK(0x100050a0u) REGS; LOADALL;
L_100050a0:;
  /* 100050a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100050a1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 100050a5 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100050a7 je 0x10005143 */ if (ZF_) goto L_10005143;
  /* 100050ad cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100050b0 je 0x10005143 */ if (ZF_) goto L_10005143;
  /* 100050b6 mov al, byte ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100050ba test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100050bc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100050bd push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100050be push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100050bf je 0x10005121 */ if (ZF_) goto L_10005121;
  /* 100050c1 mov ebp, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebp = (u32)(M32(m_)); }
  /* 100050c5 mov ebx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebx = (u32)(M32(m_)); }
  /* 100050c9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_100050d0:;
  /* 100050d0 cmp byte ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100050d3 je 0x1000511a */ if (ZF_) goto L_1000511a;
  /* 100050d5 cmp ebp, 1 */ { u32 a_ = ebp, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100050d8 movsx eax, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 100050db jne 0x100050e4 */ if (!ZF_) goto L_100050e4;
  /* 100050dd cmp eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100050e2 jge 0x100050ed */ if (!LT_) goto L_100050ed;
L_100050e4:;
  /* 100050e4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100050e5 call 0x1000704a */ esp -= 4; M32(esp) = 0x100050eau; SAVEALL; F_1000704a(c); ABI_CHECK(0x1000704au, 0x100050e5u); RETCHK(0x100050eau, 0x100050e5u); LOADALL;
  /* 100050ea add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_100050ed:;
  /* 100050ed cmp ebp, 1 */ { u32 a_ = ebp, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100050f0 mov edi, eax */ { edi = (u32)(eax); }
  /* 100050f2 movsx eax, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 100050f5 jne 0x100050fe */ if (!ZF_) goto L_100050fe;
  /* 100050f7 cmp eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100050fc jge 0x10005107 */ if (!LT_) goto L_10005107;
L_100050fe:;
  /* 100050fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100050ff call 0x1000704a */ esp -= 4; M32(esp) = 0x10005104u; SAVEALL; F_1000704a(c); ABI_CHECK(0x1000704au, 0x100050ffu); RETCHK(0x10005104u, 0x100050ffu); LOADALL;
  /* 10005104 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10005107:;
  /* 10005107 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005109 jne 0x10005114 */ if (!ZF_) goto L_10005114;
  /* 1000510b mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000510e inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1000510f inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10005110 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005112 jne 0x100050d0 */ if (!ZF_) goto L_100050d0;
L_10005114:;
  /* 10005114 mov al, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
L_10005116:;
  /* 10005116 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005118 jne 0x1000513c */ if (!ZF_) goto L_1000513c;
L_1000511a:;
  /* 1000511a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000511b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000511c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1000511d mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 1000511f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005120 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10005121:;
  /* 10005121 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
L_10005125:;
  /* 10005125 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005127 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005129 je 0x1000511a */ if (ZF_) goto L_1000511a;
  /* 1000512b cmp byte ptr [esi], al */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000512d jne 0x10005138 */ if (!ZF_) goto L_10005138;
  /* 1000512f mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005132 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10005133 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10005134 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005136 jne 0x10005125 */ if (!ZF_) goto L_10005125;
L_10005138:;
  /* 10005138 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000513a jmp 0x10005116 */ goto L_10005116;
L_1000513c:;
  /* 1000513c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000513d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000513e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1000513f xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10005141 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005142 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10005143:;
  /* 10005143 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10005145 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005146 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10005150(CPU *c) {
  NATIVE_HOOK(0x10005150u) REGS; LOADALL;
L_10005150:;
  /* 10005150 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10005151 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10005153 mov al, byte ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005156 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005158 jne 0x100051a4 */ if (!ZF_) goto L_100051a4;
  /* 1000515a mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1000515e mov byte ptr [esi + 0x34], 1 */ { const u32 m_ = (u32)(esi + 0x34u); M8(m_) = (u8)(0x1u); }
  /* 10005162 mov dword ptr [esi + 0x38], eax */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(eax); }
  /* 10005165 mov eax, dword ptr [eax*4 + 0x1000a0d4] */ { const u32 m_ = (u32)(eax * 4u + 0x1000a0d4u); eax = (u32)(M32(m_)); }
  /* 1000516c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000516d lea ecx, [esi + 0x3c] */ ecx = (u32)((u32)(esi + 0x3cu));
  /* 10005170 call 0x100069c0 */ esp -= 4; M32(esp) = 0x10005175u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10005170u); RETCHK(0x10005175u, 0x10005170u); LOADALL;
  /* 10005175 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10005178 mov dword ptr [esi + 0x50], eax */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(eax); }
  /* 1000517b mov dword ptr [esi + 0x4c], eax */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(eax); }
  /* 1000517e mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10005182 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005184 je 0x100051a4 */ if (ZF_) goto L_100051a4;
  /* 10005186 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1000518a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000518c je 0x100051a4 */ if (ZF_) goto L_100051a4;
  /* 1000518e mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10005192 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10005193 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005194 call 0x10004eb0 */ esp -= 4; M32(esp) = 0x10005199u; SAVEALL; F_10004eb0(c); ABI_CHECK(0x10004eb0u, 0x10005194u); RETCHK(0x10005199u, 0x10005194u); LOADALL;
  /* 10005199 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 1000519b mov dword ptr [esi + 0x4c], eax */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(eax); }
  /* 1000519e mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 100051a1 mov dword ptr [esi + 0x50], ecx */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(ecx); }
L_100051a4:;
  /* 100051a4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100051a5 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_100051b0(CPU *c) {
  NATIVE_HOOK(0x100051b0u) REGS; LOADALL;
L_100051b0:;
  /* 100051b0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100051b1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100051b2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100051b3 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 100051b5 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_100051b7:;
  /* 100051b7 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 100051ba test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100051bc je 0x100051ec */ if (ZF_) goto L_100051ec;
  /* 100051be cmp edi, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100051c1 jae 0x100051ec */ if (!CF_) goto L_100051ec;
  /* 100051c3 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 100051c6 mov bl, byte ptr [edi + eax] */ { const u32 m_ = (u32)(edi + eax); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100051c9 movzx ecx, bl */ { ecx = (u32)((ebx & 0xffu)); }
  /* 100051cc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100051cd call 0x10007044 */ esp -= 4; M32(esp) = 0x100051d2u; SAVEALL; F_10007044(c); ABI_CHECK(0x10007044u, 0x100051cdu); RETCHK(0x100051d2u, 0x100051cdu); LOADALL;
  /* 100051d2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100051d5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100051d7 jne 0x100051e3 */ if (!ZF_) goto L_100051e3;
  /* 100051d9 cmp bl, 0xa */ { u32 a_ = (ebx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100051dc je 0x100051e3 */ if (ZF_) goto L_100051e3;
  /* 100051de cmp bl, 0xd */ { u32 a_ = (ebx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100051e1 jne 0x100051e6 */ if (!ZF_) goto L_100051e6;
L_100051e3:;
  /* 100051e3 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100051e4 jmp 0x100051b7 */ goto L_100051b7;
L_100051e6:;
  /* 100051e6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100051e7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100051e8 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 100051ea pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100051eb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_100051ec:;
  /* 100051ec pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100051ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100051ee mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 100051f0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100051f1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10005200(CPU *c) {
  NATIVE_HOOK(0x10005200u) REGS; LOADALL;
L_10005200:;
  /* 10005200 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10005204 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10005205 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10005207 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1000520a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000520c je 0x1000521e */ if (ZF_) goto L_1000521e;
  /* 1000520e mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10005210 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005211 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10005213 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10005218u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10005213u); RETCHK(0x10005218u, 0x10005213u); LOADALL;
  /* 10005218 mov eax, esi */ { eax = (u32)(esi); }
  /* 1000521a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000521b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1000521e:;
  /* 1000521e mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
  /* 10005223 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005224 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10005226 call 0x10006be0 */ esp -= 4; M32(esp) = 0x1000522bu; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10005226u); RETCHK(0x1000522bu, 0x10005226u); LOADALL;
  /* 1000522b mov eax, esi */ { eax = (u32)(esi); }
  /* 1000522d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000522e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10005240(CPU *c) {
  NATIVE_HOOK(0x10005240u) REGS; LOADALL;
L_10005240:;
  /* 10005240 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10005241 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10005245 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10005246 push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 1000524b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1000524d call 0x100069c0 */ esp -= 4; M32(esp) = 0x10005252u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x1000524du); RETCHK(0x10005252u, 0x1000524du); LOADALL;
  /* 10005252 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10005256 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005258 je 0x100052f1 */ if (ZF_) goto L_100052f1;
  /* 1000525e mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005260 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005262 je 0x100052f1 */ if (ZF_) goto L_100052f1;
  /* 10005268 cmp al, 0x7f */ { u32 a_ = (eax & 0xffu), b_ = 0x7fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000526a jae 0x10005281 */ if (!CF_) goto L_10005281;
  /* 1000526c movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 1000526f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005270 call 0x10007050 */ esp -= 4; M32(esp) = 0x10005275u; SAVEALL; F_10007050(c); ABI_CHECK(0x10007050u, 0x10005270u); RETCHK(0x10005275u, 0x10005270u); LOADALL;
  /* 10005275 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005278 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000527a jne 0x10005281 */ if (!ZF_) goto L_10005281;
  /* 1000527c cmp byte ptr [edi], 0x5f */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x5fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000527f jne 0x100052f1 */ if (!ZF_) goto L_100052f1;
L_10005281:;
  /* 10005281 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
L_10005282:;
  /* 10005282 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005284 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005286 je 0x100052eb */ if (ZF_) goto L_100052eb;
  /* 10005288 cmp al, 0x7f */ { u32 a_ = (eax & 0xffu), b_ = 0x7fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000528a jae 0x100052ae */ if (!CF_) goto L_100052ae;
  /* 1000528c movzx ecx, al */ { ecx = (u32)((eax & 0xffu)); }
  /* 1000528f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10005290 call 0x10007056 */ esp -= 4; M32(esp) = 0x10005295u; SAVEALL; F_10007056(c); ABI_CHECK(0x10007056u, 0x10005290u); RETCHK(0x10005295u, 0x10005290u); LOADALL;
  /* 10005295 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005298 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000529a jne 0x100052ae */ if (!ZF_) goto L_100052ae;
  /* 1000529c mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000529e cmp al, 0x5f */ { u32 a_ = (eax & 0xffu), b_ = 0x5fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100052a0 je 0x100052ae */ if (ZF_) goto L_100052ae;
  /* 100052a2 cmp al, 0x2d */ { u32 a_ = (eax & 0xffu), b_ = 0x2du; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100052a4 je 0x100052ae */ if (ZF_) goto L_100052ae;
  /* 100052a6 cmp al, 0x2e */ { u32 a_ = (eax & 0xffu), b_ = 0x2eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100052a8 je 0x100052ae */ if (ZF_) goto L_100052ae;
  /* 100052aa cmp al, 0x3a */ { u32 a_ = (eax & 0xffu), b_ = 0x3au; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100052ac jne 0x100052eb */ if (!ZF_) goto L_100052eb;
L_100052ae:;
  /* 100052ae mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 100052b0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100052b2 mov cl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100052b4 je 0x100052d3 */ if (ZF_) goto L_100052d3;
  /* 100052b6 mov ebp, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebp = (u32)(M32(m_)); }
  /* 100052b9 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 100052bc dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 100052bd cmp edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100052bf jae 0x100052d3 */ if (!CF_) goto L_100052d3;
  /* 100052c1 mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 100052c4 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 100052c7 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 100052c9 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100052ca mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 100052cd mov byte ptr [eax + edx], 0 */ { const u32 m_ = (u32)(eax + edx); M8(m_) = (u8)(0x0u); }
  /* 100052d1 jmp 0x100052e8 */ goto L_100052e8;
L_100052d3:;
  /* 100052d3 lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 100052d7 mov byte ptr [esp + 0x10], cl */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 100052db push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100052dc mov ecx, esi */ { ecx = (u32)(esi); }
  /* 100052de mov byte ptr [esp + 0x15], 0 */ { const u32 m_ = (u32)(esp + 0x15u); M8(m_) = (u8)(0x0u); }
  /* 100052e3 call 0x10006be0 */ esp -= 4; M32(esp) = 0x100052e8u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x100052e3u); RETCHK(0x100052e8u, 0x100052e3u); LOADALL;
L_100052e8:;
  /* 100052e8 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100052e9 jne 0x10005282 */ if (!ZF_) goto L_10005282;
L_100052eb:;
  /* 100052eb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100052ec mov eax, edi */ { eax = (u32)(edi); }
  /* 100052ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100052ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100052f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_100052f1:;
  /* 100052f1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100052f2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 100052f4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100052f5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10005300(CPU *c) {
  NATIVE_HOOK(0x10005300u) REGS; LOADALL;
L_10005300:;
  /* 10005300 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10005302 push 0x10007618 */ { u32 v_ = 0x10007618u; esp -= 4; M32(esp) = v_; }
  /* 10005307 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1000530d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000530e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10005315 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005318 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10005319 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000531a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1000531c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000531d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000531e mov dword ptr [esp + 0x14], ebx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ebx); }
  /* 10005322 mov dword ptr [esp + 0x10], ebx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 10005326 mov dword ptr [esp + 0x18], ebx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ebx); }
  /* 1000532a mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 1000532e mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 10005332 lea ebp, [edx + 1] */ ebp = (u32)((u32)(edx + 0x1u));
  /* 10005335 mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
  /* 10005337 mov al, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000533a cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000533c je 0x100054bb */ if (ZF_) goto L_100054bb;
  /* 10005342 cmp al, 0x23 */ { u32 a_ = (eax & 0xffu), b_ = 0x23u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005344 jne 0x100054bb */ if (!ZF_) goto L_100054bb;
  /* 1000534a mov al, byte ptr [edx + 2] */ { const u32 m_ = (u32)(edx + 0x2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000534d cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000534f lea ecx, [edx + 2] */ ecx = (u32)((u32)(edx + 0x2u));
  /* 10005352 je 0x100054bb */ if (ZF_) goto L_100054bb;
  /* 10005358 cmp al, 0x78 */ { u32 a_ = (eax & 0xffu), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000535a mov esi, 1 */ { esi = (u32)(0x1u); }
  /* 1000535f jne 0x10005412 */ if (!ZF_) goto L_10005412;
  /* 10005365 mov cl, byte ptr [edx + 3] */ { const u32 m_ = (u32)(edx + 0x3u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005368 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000536a lea eax, [edx + 3] */ eax = (u32)((u32)(edx + 0x3u));
  /* 1000536d je 0x1000545b */ if (ZF_) goto L_1000545b;
  /* 10005373 push 0x3b */ { u32 v_ = 0x3bu; esp -= 4; M32(esp) = v_; }
  /* 10005375 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005376 call 0x10007062 */ esp -= 4; M32(esp) = 0x1000537bu; SAVEALL; F_10007062(c); ABI_CHECK(0x10007062u, 0x10005376u); RETCHK(0x1000537bu, 0x10005376u); LOADALL;
  /* 1000537b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000537e cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005380 je 0x1000545b */ if (ZF_) goto L_1000545b;
  /* 10005386 cmp byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005388 je 0x1000545b */ if (ZF_) goto L_1000545b;
  /* 1000538e mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 10005392 mov edi, eax */ { edi = (u32)(eax); }
  /* 10005394 sub edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10005396 mov cl, byte ptr [eax - 1] */ { const u32 m_ = (u32)(eax + 0xffffffffu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005399 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1000539a cmp cl, 0x78 */ { u32 a_ = (ecx & 0xffu), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000539d je 0x100053f2 */ if (ZF_) goto L_100053f2;
  /* 1000539f nop */ ;
L_100053a0:;
  /* 100053a0 cmp cl, 0x30 */ { u32 a_ = (ecx & 0xffu), b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100053a3 jl 0x100053b2 */ if (LT_) goto L_100053b2;
  /* 100053a5 cmp cl, 0x39 */ { u32 a_ = (ecx & 0xffu), b_ = 0x39u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100053a8 jg 0x100053b2 */ if (!(ZF_|LT_)) goto L_100053b2;
  /* 100053aa movsx ecx, cl */ { ecx = (u32)((u32)sxt((ecx & 0xffu), 1) & 0xffffffffu); }
  /* 100053ad sub ecx, 0x30 */ { u32 a_ = ecx, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 100053b0 jmp 0x100053e1 */ goto L_100053e1;
L_100053b2:;
  /* 100053b2 cmp cl, 0x61 */ { u32 a_ = (ecx & 0xffu), b_ = 0x61u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100053b5 jl 0x100053c9 */ if (LT_) goto L_100053c9;
  /* 100053b7 cmp cl, 0x66 */ { u32 a_ = (ecx & 0xffu), b_ = 0x66u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100053ba jg 0x100053c9 */ if (!(ZF_|LT_)) goto L_100053c9;
  /* 100053bc movsx edx, cl */ { edx = (u32)((u32)sxt((ecx & 0xffu), 1) & 0xffffffffu); }
  /* 100053bf sub edx, 0x57 */ { u32 a_ = edx, b_ = 0x57u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 100053c2 imul edx, esi */ { s64 p_ = (s64)(s32)edx * (s64)(s32)esi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 100053c5 add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 100053c7 jmp 0x100053e6 */ goto L_100053e6;
L_100053c9:;
  /* 100053c9 cmp cl, 0x41 */ { u32 a_ = (ecx & 0xffu), b_ = 0x41u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100053cc jl 0x1000545b */ if (LT_) goto L_1000545b;
  /* 100053d2 cmp cl, 0x46 */ { u32 a_ = (ecx & 0xffu), b_ = 0x46u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100053d5 jg 0x1000545b */ if (!(ZF_|LT_)) goto L_1000545b;
  /* 100053db movsx ecx, cl */ { ecx = (u32)((u32)sxt((ecx & 0xffu), 1) & 0xffffffffu); }
  /* 100053de sub ecx, 0x37 */ { u32 a_ = ecx, b_ = 0x37u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
L_100053e1:;
  /* 100053e1 imul ecx, esi */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)esi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 100053e4 add ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
L_100053e6:;
  /* 100053e6 mov cl, byte ptr [eax - 1] */ { const u32 m_ = (u32)(eax + 0xffffffffu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100053e9 shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 100053ec dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 100053ed cmp cl, 0x78 */ { u32 a_ = (ecx & 0xffu), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100053f0 jne 0x100053a0 */ if (!ZF_) goto L_100053a0;
L_100053f2:;
  /* 100053f2 cmp dword ptr [esp + 0x38], 1 */ { const u32 m_ = (u32)(esp + 0x38u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100053f7 mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 100053fb jne 0x10005481 */ if (!ZF_) goto L_10005481;
  /* 10005401 mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 10005405 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005406 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10005407 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10005408 call 0x10004d90 */ esp -= 4; M32(esp) = 0x1000540du; SAVEALL; F_10004d90(c); ABI_CHECK(0x10004d90u, 0x10005408u); RETCHK(0x1000540du, 0x10005408u); LOADALL;
  /* 1000540d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005410 jmp 0x1000548d */ goto L_1000548d;
L_10005412:;
  /* 10005412 push 0x3b */ { u32 v_ = 0x3bu; esp -= 4; M32(esp) = v_; }
  /* 10005414 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10005415 call 0x10007062 */ esp -= 4; M32(esp) = 0x1000541au; SAVEALL; F_10007062(c); ABI_CHECK(0x10007062u, 0x10005415u); RETCHK(0x1000541au, 0x10005415u); LOADALL;
  /* 1000541a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000541d cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000541f je 0x1000545b */ if (ZF_) goto L_1000545b;
  /* 10005421 cmp byte ptr [eax], bl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005423 je 0x1000545b */ if (ZF_) goto L_1000545b;
  /* 10005425 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 10005429 mov edi, eax */ { edi = (u32)(eax); }
  /* 1000542b sub edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1000542d mov cl, byte ptr [eax - 1] */ { const u32 m_ = (u32)(eax + 0xffffffffu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005430 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10005431 cmp cl, 0x23 */ { u32 a_ = (ecx & 0xffu), b_ = 0x23u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005434 je 0x100053f2 */ if (ZF_) goto L_100053f2;
L_10005436:;
  /* 10005436 cmp cl, 0x30 */ { u32 a_ = (ecx & 0xffu), b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005439 jl 0x1000545b */ if (LT_) goto L_1000545b;
  /* 1000543b cmp cl, 0x39 */ { u32 a_ = (ecx & 0xffu), b_ = 0x39u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000543e jg 0x1000545b */ if (!(ZF_|LT_)) goto L_1000545b;
  /* 10005440 movsx edx, cl */ { edx = (u32)((u32)sxt((ecx & 0xffu), 1) & 0xffffffffu); }
  /* 10005443 mov cl, byte ptr [eax - 1] */ { const u32 m_ = (u32)(eax + 0xffffffffu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005446 sub edx, 0x30 */ { u32 a_ = edx, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10005449 imul edx, esi */ { s64 p_ = (s64)(s32)edx * (s64)(s32)esi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 1000544c lea esi, [esi + esi*4] */ esi = (u32)((u32)(esi + esi * 4u));
  /* 1000544f add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10005451 shl esi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 10005453 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10005454 cmp cl, 0x23 */ { u32 a_ = (ecx & 0xffu), b_ = 0x23u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005457 jne 0x10005436 */ if (!ZF_) goto L_10005436;
  /* 10005459 jmp 0x100053f2 */ goto L_100053f2;
L_1000545b:;
  /* 1000545b lea ecx, [esp + 0x10] */ ecx = (u32)((u32)(esp + 0x10u));
  /* 1000545f mov dword ptr [esp + 0x24], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0xffffffffu); }
  /* 10005467 call 0x10001640 */ esp -= 4; M32(esp) = 0x1000546cu; SAVEALL; F_10001640(c); ABI_CHECK(0x10001640u, 0x10005467u); RETCHK(0x1000546cu, 0x10005467u); LOADALL;
  /* 1000546c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000546d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000546e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000546f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10005471 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10005472 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10005476 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 1000547d add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005480 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10005481:;
  /* 10005481 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 10005485 mov byte ptr [edx], bl */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10005487 mov dword ptr [eax], 1 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x1u); }
L_1000548d:;
  /* 1000548d mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 10005491 lea esi, [edi + ecx + 1] */ esi = (u32)((u32)(edi + ecx + 0x1u));
  /* 10005495 lea ecx, [esp + 0x10] */ ecx = (u32)((u32)(esp + 0x10u));
  /* 10005499 mov dword ptr [esp + 0x24], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0xffffffffu); }
  /* 100054a1 call 0x10001640 */ esp -= 4; M32(esp) = 0x100054a6u; SAVEALL; F_10001640(c); ABI_CHECK(0x10001640u, 0x100054a1u); RETCHK(0x100054a6u, 0x100054a1u); LOADALL;
  /* 100054a6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100054a7 mov eax, esi */ { eax = (u32)(esi); }
  /* 100054a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100054aa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100054ab pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100054ac mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 100054b0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 100054b7 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100054ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_100054bb:;
  /* 100054bb xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 100054bd mov esi, 0x1000a098 */ { esi = (u32)(0x1000a098u); }
  /* 100054c2 jmp 0x100054c8 */ goto L_100054c8;
L_100054c4:;
  /* 100054c4 mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
L_100054c8:;
  /* 100054c8 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 100054cb mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 100054cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100054ce push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 100054cf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100054d0 call 0x1000705c */ esp -= 4; M32(esp) = 0x100054d5u; SAVEALL; F_1000705c(c); ABI_CHECK(0x1000705cu, 0x100054d0u); RETCHK(0x100054d5u, 0x100054d0u); LOADALL;
  /* 100054d5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100054d8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100054da je 0x10005509 */ if (ZF_) goto L_10005509;
  /* 100054dc add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 100054df inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100054e0 cmp esi, 0x1000a0d4 */ { u32 a_ = esi, b_ = 0x1000a0d4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100054e6 jl 0x100054c4 */ if (LT_) goto L_100054c4;
  /* 100054e8 mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 100054ec mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100054ee mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 100054f2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100054f3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100054f4 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 100054f6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100054f7 mov byte ptr [edx], cl */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 100054f9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100054fa mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 100054fe mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10005505 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005508 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10005509:;
  /* 10005509 mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 1000550d lea eax, [edi + edi*2] */ eax = (u32)((u32)(edi + edi * 2u));
  /* 10005510 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10005513 mov dl, byte ptr [eax + 0x1000a0a0] */ { const u32 m_ = (u32)(eax + 0x1000a0a0u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005519 mov byte ptr [ecx], dl */ { const u32 m_ = (u32)(ecx); M8(m_) = (u8)((edx & 0xffu)); }
  /* 1000551b mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 1000551f mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 10005523 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10005524 mov dword ptr [edx], 1 */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0x1u); }
  /* 1000552a mov eax, dword ptr [eax + 0x1000a09c] */ { const u32 m_ = (u32)(eax + 0x1000a09cu); eax = (u32)(M32(m_)); }
  /* 10005530 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005531 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10005533 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 10005537 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10005538 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10005539 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10005540 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005543 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10005550(CPU *c) {
  NATIVE_HOOK(0x10005550u) REGS; LOADALL;
L_10005550:;
  /* 10005550 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10005552 push 0x100075d7 */ { u32 v_ = 0x100075d7u; esp -= 4; M32(esp) = v_; }
  /* 10005557 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1000555d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000555e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10005565 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10005566 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 1000556a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1000556b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000556c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000556d mov edi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edi = (u32)(M32(m_)); }
  /* 10005571 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10005573 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10005574 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005575 mov dword ptr [esp + 0x14], ebx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ebx); }
  /* 10005579 call 0x10004fe0 */ esp -= 4; M32(esp) = 0x1000557eu; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x10005579u); RETCHK(0x1000557eu, 0x10005579u); LOADALL;
  /* 1000557e mov esi, eax */ { esi = (u32)(eax); }
  /* 10005580 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005583 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005585 je 0x10005772 */ if (ZF_) goto L_10005772;
  /* 1000558b mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000558d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000558f je 0x10005772 */ if (ZF_) goto L_10005772;
  /* 10005595 cmp al, 0x3c */ { u32 a_ = (eax & 0xffu), b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005597 jne 0x10005772 */ if (!ZF_) goto L_10005772;
  /* 1000559d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000559e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 100055a0 call 0x10003440 */ esp -= 4; M32(esp) = 0x100055a5u; SAVEALL; F_10003440(c); ABI_CHECK(0x10003440u, 0x100055a0u); RETCHK(0x100055a5u, 0x100055a0u); LOADALL;
  /* 100055a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100055a6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100055a7 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 100055a9 call 0x10004fe0 */ esp -= 4; M32(esp) = 0x100055aeu; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x100055a9u); RETCHK(0x100055aeu, 0x100055a9u); LOADALL;
  /* 100055ae mov esi, eax */ { esi = (u32)(eax); }
  /* 100055b0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100055b3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100055b5 je 0x1000575b */ if (ZF_) goto L_1000575b;
  /* 100055bb cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100055be je 0x1000575b */ if (ZF_) goto L_1000575b;
  /* 100055c4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100055c5 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 100055c7 push 0x1000810c */ { u32 v_ = 0x1000810cu; esp -= 4; M32(esp) = v_; }
  /* 100055cc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100055cd call 0x100050a0 */ esp -= 4; M32(esp) = 0x100055d2u; SAVEALL; F_100050a0(c); ABI_CHECK(0x100050a0u, 0x100055cdu); RETCHK(0x100055d2u, 0x100055cdu); LOADALL;
  /* 100055d2 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100055d5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100055d7 je 0x10005603 */ if (ZF_) goto L_10005603;
  /* 100055d9 push 0x58 */ { u32 v_ = 0x58u; esp -= 4; M32(esp) = v_; }
  /* 100055db call 0x10006e4c */ esp -= 4; M32(esp) = 0x100055e0u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x100055dbu); RETCHK(0x100055e0u, 0x100055dbu); LOADALL;
  /* 100055e0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100055e3 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 100055e7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100055e9 mov dword ptr [esp + 0x1c], 0 */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0x0u); }
  /* 100055f1 je 0x10005702 */ if (ZF_) goto L_10005702;
  /* 100055f7 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 100055f9 call 0x100043e0 */ esp -= 4; M32(esp) = 0x100055feu; SAVEALL; F_100043e0(c); ABI_CHECK(0x100043e0u, 0x100055f9u); RETCHK(0x100055feu, 0x100055f9u); LOADALL;
  /* 100055fe jmp 0x10005704 */ goto L_10005704;
L_10005603:;
  /* 10005603 mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005605 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005607 mov eax, 0x100081cc */ { eax = (u32)(0x100081ccu); }
  /* 1000560c je 0x10005655 */ if (ZF_) goto L_10005655;
  /* 1000560e mov edx, esi */ { edx = (u32)(esi); }
  /* 10005610 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
L_10005612:;
  /* 10005612 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005614 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005616 je 0x1000562b */ if (ZF_) goto L_1000562b;
  /* 10005618 cmp byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000561b jne 0x10005626 */ if (!ZF_) goto L_10005626;
  /* 1000561d mov cl, byte ptr [edx + eax + 1] */ { const u32 m_ = (u32)(edx + eax + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005621 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10005622 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005624 jne 0x10005612 */ if (!ZF_) goto L_10005612;
L_10005626:;
  /* 10005626 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005629 jne 0x10005655 */ if (!ZF_) goto L_10005655;
L_1000562b:;
  /* 1000562b push 0x34 */ { u32 v_ = 0x34u; esp -= 4; M32(esp) = v_; }
  /* 1000562d call 0x10006e4c */ esp -= 4; M32(esp) = 0x10005632u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x1000562du); RETCHK(0x10005632u, 0x1000562du); LOADALL;
  /* 10005632 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005635 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 10005639 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000563b mov dword ptr [esp + 0x1c], 1 */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0x1u); }
  /* 10005643 je 0x10005702 */ if (ZF_) goto L_10005702;
  /* 10005649 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 1000564b call 0x100042c0 */ esp -= 4; M32(esp) = 0x10005650u; SAVEALL; F_100042c0(c); ABI_CHECK(0x100042c0u, 0x1000564bu); RETCHK(0x10005650u, 0x1000564bu); LOADALL;
  /* 10005650 jmp 0x10005704 */ goto L_10005704;
L_10005655:;
  /* 10005655 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005657 mov eax, 0x10008760 */ { eax = (u32)(0x10008760u); }
  /* 1000565c je 0x1000569e */ if (ZF_) goto L_1000569e;
  /* 1000565e mov edx, esi */ { edx = (u32)(esi); }
  /* 10005660 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
L_10005662:;
  /* 10005662 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005664 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005666 je 0x1000567b */ if (ZF_) goto L_1000567b;
  /* 10005668 cmp byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000566b jne 0x10005676 */ if (!ZF_) goto L_10005676;
  /* 1000566d mov cl, byte ptr [edx + eax + 1] */ { const u32 m_ = (u32)(edx + eax + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005671 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10005672 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005674 jne 0x10005662 */ if (!ZF_) goto L_10005662;
L_10005676:;
  /* 10005676 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005679 jne 0x1000569e */ if (!ZF_) goto L_1000569e;
L_1000567b:;
  /* 1000567b push 0x34 */ { u32 v_ = 0x34u; esp -= 4; M32(esp) = v_; }
  /* 1000567d call 0x10006e4c */ esp -= 4; M32(esp) = 0x10005682u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x1000567du); RETCHK(0x10005682u, 0x1000567du); LOADALL;
  /* 10005682 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005685 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 10005689 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000568b mov dword ptr [esp + 0x1c], 2 */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0x2u); }
  /* 10005693 je 0x10005702 */ if (ZF_) goto L_10005702;
  /* 10005695 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10005697 call 0x10004510 */ esp -= 4; M32(esp) = 0x1000569cu; SAVEALL; F_10004510(c); ABI_CHECK(0x10004510u, 0x10005697u); RETCHK(0x1000569cu, 0x10005697u); LOADALL;
  /* 1000569c jmp 0x10005704 */ goto L_10005704;
L_1000569e:;
  /* 1000569e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 100056a0 mov cl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100056a3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100056a4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100056a5 call 0x10004e90 */ esp -= 4; M32(esp) = 0x100056aau; SAVEALL; F_10004e90(c); ABI_CHECK(0x10004e90u, 0x100056a5u); RETCHK(0x100056aau, 0x100056a5u); LOADALL;
  /* 100056aa add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100056ad test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100056af jne 0x100056da */ if (!ZF_) goto L_100056da;
  /* 100056b1 cmp byte ptr [esi + 1], 0x5f */ { const u32 m_ = (u32)(esi + 0x1u); u32 a_ = M8(m_), b_ = 0x5fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100056b5 je 0x100056da */ if (ZF_) goto L_100056da;
  /* 100056b7 push 0x34 */ { u32 v_ = 0x34u; esp -= 4; M32(esp) = v_; }
  /* 100056b9 call 0x10006e4c */ esp -= 4; M32(esp) = 0x100056beu; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x100056b9u); RETCHK(0x100056beu, 0x100056b9u); LOADALL;
  /* 100056be add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100056c1 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 100056c5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100056c7 mov dword ptr [esp + 0x1c], 4 */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0x4u); }
  /* 100056cf je 0x10005702 */ if (ZF_) goto L_10005702;
  /* 100056d1 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 100056d3 call 0x10004510 */ esp -= 4; M32(esp) = 0x100056d8u; SAVEALL; F_10004510(c); ABI_CHECK(0x10004510u, 0x100056d3u); RETCHK(0x100056d8u, 0x100056d3u); LOADALL;
  /* 100056d8 jmp 0x10005704 */ goto L_10005704;
L_100056da:;
  /* 100056da push 0x68 */ { u32 v_ = 0x68u; esp -= 4; M32(esp) = v_; }
  /* 100056dc call 0x10006e4c */ esp -= 4; M32(esp) = 0x100056e1u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x100056dcu); RETCHK(0x100056e1u, 0x100056dcu); LOADALL;
  /* 100056e1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100056e4 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 100056e8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100056ea mov dword ptr [esp + 0x1c], 3 */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0x3u); }
  /* 100056f2 je 0x10005702 */ if (ZF_) goto L_10005702;
  /* 100056f4 push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 100056f9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 100056fb call 0x10004630 */ esp -= 4; M32(esp) = 0x10005700u; SAVEALL; F_10004630(c); ABI_CHECK(0x10004630u, 0x100056fbu); RETCHK(0x10005700u, 0x100056fbu); LOADALL;
  /* 10005700 jmp 0x10005704 */ goto L_10005704;
L_10005702:;
  /* 10005702 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10005704:;
  /* 10005704 or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10005707 mov esi, eax */ { esi = (u32)(eax); }
  /* 10005709 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000570b mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 1000570f je 0x1000571a */ if (ZF_) goto L_1000571a;
  /* 10005711 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10005715 mov dword ptr [esi + 0x10], edx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edx); }
  /* 10005718 jmp 0x10005744 */ goto L_10005744;
L_1000571a:;
  /* 1000571a test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000571c je 0x10005744 */ if (ZF_) goto L_10005744;
  /* 1000571e mov al, byte ptr [ebp + 0x34] */ { const u32 m_ = (u32)(ebp + 0x34u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005721 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005723 jne 0x10005744 */ if (!ZF_) goto L_10005744;
  /* 10005725 mov byte ptr [ebp + 0x34], 1 */ { const u32 m_ = (u32)(ebp + 0x34u); M8(m_) = (u8)(0x1u); }
  /* 10005729 mov dword ptr [ebp + 0x38], 3 */ { const u32 m_ = (u32)(ebp + 0x38u); M32(m_) = (u32)(0x3u); }
  /* 10005730 mov eax, dword ptr [0x1000a0e0] */ { const u32 m_ = (u32)(0x1000a0e0u); eax = (u32)(M32(m_)); }
  /* 10005735 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005736 lea ecx, [ebp + 0x3c] */ ecx = (u32)((u32)(ebp + 0x3cu));
  /* 10005739 call 0x100069c0 */ esp -= 4; M32(esp) = 0x1000573eu; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10005739u); RETCHK(0x1000573eu, 0x10005739u); LOADALL;
  /* 1000573e mov dword ptr [ebp + 0x50], edi */ { const u32 m_ = (u32)(ebp + 0x50u); M32(m_) = (u32)(edi); }
  /* 10005741 mov dword ptr [ebp + 0x4c], edi */ { const u32 m_ = (u32)(ebp + 0x4cu); M32(m_) = (u32)(edi); }
L_10005744:;
  /* 10005744 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10005745 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10005746 mov eax, esi */ { eax = (u32)(esi); }
  /* 10005748 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005749 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1000574a mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1000574e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10005755 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005758 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1000575b:;
  /* 1000575b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000575c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000575d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000575e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10005760 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10005761 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10005765 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 1000576c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000576f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10005772:;
  /* 10005772 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10005776 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10005777 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005778 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1000577a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1000577b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10005782 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005785 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10005790(CPU *c) {
  NATIVE_HOOK(0x10005790u) REGS; LOADALL;
L_10005790:;
  /* 10005790 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10005792 push 0x10007603 */ { u32 v_ = 0x10007603u; esp -= 4; M32(esp) = v_; }
  /* 10005797 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1000579d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000579e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 100057a5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100057a6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100057a7 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100057a8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100057a9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100057aa mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 100057ac call 0x10003440 */ esp -= 4; M32(esp) = 0x100057b1u; SAVEALL; F_10003440(c); ABI_CHECK(0x10003440u, 0x100057acu); RETCHK(0x100057b1u, 0x100057acu); LOADALL;
  /* 100057b1 mov ebp, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebp = (u32)(M32(m_)); }
  /* 100057b5 mov esi, eax */ { esi = (u32)(eax); }
  /* 100057b7 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 100057bb push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100057bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100057bd mov dword ptr [esp + 0x18], esi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(esi); }
  /* 100057c1 mov dword ptr [esp + 0x2c], eax */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(eax); }
  /* 100057c5 call 0x10004fe0 */ esp -= 4; M32(esp) = 0x100057cau; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x100057c5u); RETCHK(0x100057cau, 0x100057c5u); LOADALL;
  /* 100057ca mov edi, eax */ { edi = (u32)(eax); }
  /* 100057cc add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100057cf test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100057d1 je 0x100058f0 */ if (ZF_) goto L_100058f0;
  /* 100057d7 jmp 0x100057e0 */ goto L_100057e0;
L_100057e0:;
  /* 100057e0 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100057e2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100057e4 je 0x1000591d */ if (ZF_) goto L_1000591d;
  /* 100057ea cmp al, 0x3c */ { u32 a_ = (eax & 0xffu), b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100057ec je 0x10005884 */ if (ZF_) goto L_10005884;
  /* 100057f2 push 0x34 */ { u32 v_ = 0x34u; esp -= 4; M32(esp) = v_; }
  /* 100057f4 call 0x10006e4c */ esp -= 4; M32(esp) = 0x100057f9u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x100057f4u); RETCHK(0x100057f9u, 0x100057f4u); LOADALL;
  /* 100057f9 mov esi, eax */ { esi = (u32)(eax); }
  /* 100057fb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100057fe mov dword ptr [esp + 0x2c], esi */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(esi); }
  /* 10005802 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005804 mov dword ptr [esp + 0x1c], 0 */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0x0u); }
  /* 1000580c je 0x10005831 */ if (ZF_) goto L_10005831;
  /* 1000580e push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10005810 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10005812 call 0x10003ab0 */ esp -= 4; M32(esp) = 0x10005817u; SAVEALL; F_10003ab0(c); ABI_CHECK(0x10003ab0u, 0x10005812u); RETCHK(0x10005817u, 0x10005812u); LOADALL;
  /* 10005817 push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 1000581c lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 1000581f mov byte ptr [esp + 0x20], 1 */ { const u32 m_ = (u32)(esp + 0x20u); M8(m_) = (u8)(0x1u); }
  /* 10005824 mov dword ptr [esi], 0x100082b4 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x100082b4u); }
  /* 1000582a call 0x100069c0 */ esp -= 4; M32(esp) = 0x1000582fu; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x1000582au); RETCHK(0x1000582fu, 0x1000582au); LOADALL;
  /* 1000582f jmp 0x10005833 */ goto L_10005833;
L_10005831:;
  /* 10005831 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_10005833:;
  /* 10005833 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005835 mov dword ptr [esp + 0x1c], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(0xffffffffu); }
  /* 1000583d je 0x10005934 */ if (ZF_) goto L_10005934;
  /* 10005843 mov al, byte ptr [0x1000a097] */ { const u32 m_ = (u32)(0x1000a097u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005848 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000584a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000584b je 0x1000585c */ if (ZF_) goto L_1000585c;
  /* 1000584d mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 10005851 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10005853 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10005854 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10005855 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10005857 call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1000585au; SAVEALL; call_ind(c, t_); RETCHK(0x1000585au, 0x10005857u); LOADALL; }
  /* 1000585a jmp 0x1000586d */ goto L_1000586d;
L_1000585c:;
  /* 1000585c mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 10005860 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 10005864 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 10005866 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005867 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10005868 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1000586a call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1000586du; SAVEALL; call_ind(c, t_); RETCHK(0x1000586du, 0x1000586au); LOADALL; }
L_1000586d:;
  /* 1000586d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1000586f mov edi, eax */ { edi = (u32)(eax); }
  /* 10005871 call 0x100051b0 */ esp -= 4; M32(esp) = 0x10005876u; SAVEALL; F_100051b0(c); ABI_CHECK(0x100051b0u, 0x10005871u); RETCHK(0x10005876u, 0x10005871u); LOADALL;
  /* 10005876 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005878 je 0x100058d0 */ if (ZF_) goto L_100058d0;
  /* 1000587a mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 1000587c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1000587e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10005880 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10005882u; SAVEALL; call_ind(c, t_); RETCHK(0x10005882u, 0x10005880u); LOADALL; }
  /* 10005882 jmp 0x100058d8 */ goto L_100058d8;
L_10005884:;
  /* 10005884 mov eax, 0x1000826c */ { eax = (u32)(0x1000826cu); }
  /* 10005889 mov edx, edi */ { edx = (u32)(edi); }
  /* 1000588b sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 1000588d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_10005890:;
  /* 10005890 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005892 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005894 je 0x1000591d */ if (ZF_) goto L_1000591d;
  /* 1000589a cmp byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000589d jne 0x100058a8 */ if (!ZF_) goto L_100058a8;
  /* 1000589f mov cl, byte ptr [edx + eax + 1] */ { const u32 m_ = (u32)(edx + eax + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100058a3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100058a4 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100058a6 jne 0x10005890 */ if (!ZF_) goto L_10005890;
L_100058a8:;
  /* 100058a8 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100058ab je 0x1000591d */ if (ZF_) goto L_1000591d;
  /* 100058ad push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100058ae push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100058af mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 100058b1 call 0x10005550 */ esp -= 4; M32(esp) = 0x100058b6u; SAVEALL; F_10005550(c); ABI_CHECK(0x10005550u, 0x100058b1u); RETCHK(0x100058b6u, 0x100058b1u); LOADALL;
  /* 100058b6 mov esi, eax */ { esi = (u32)(eax); }
  /* 100058b8 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100058ba je 0x10005966 */ if (ZF_) goto L_10005966;
  /* 100058c0 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 100058c4 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 100058c6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100058c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100058c8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100058c9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 100058cb call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100058ceu; SAVEALL; call_ind(c, t_); RETCHK(0x100058ceu, 0x100058cbu); LOADALL; }
  /* 100058ce mov edi, eax */ { edi = (u32)(eax); }
L_100058d0:;
  /* 100058d0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 100058d2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100058d3 call 0x10003410 */ esp -= 4; M32(esp) = 0x100058d8u; SAVEALL; F_10003410(c); ABI_CHECK(0x10003410u, 0x100058d3u); RETCHK(0x100058d8u, 0x100058d3u); LOADALL;
L_100058d8:;
  /* 100058d8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100058d9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100058da call 0x10004fe0 */ esp -= 4; M32(esp) = 0x100058dfu; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x100058dau); RETCHK(0x100058dfu, 0x100058dau); LOADALL;
  /* 100058df mov edi, eax */ { edi = (u32)(eax); }
  /* 100058e1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100058e4 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100058e6 jne 0x100057e0 */ if (!ZF_) goto L_100057e0;
  /* 100058ec mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
L_100058f0:;
  /* 100058f0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100058f2 je 0x1000591d */ if (ZF_) goto L_1000591d;
  /* 100058f4 mov al, byte ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100058f7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100058f9 jne 0x1000591d */ if (!ZF_) goto L_1000591d;
  /* 100058fb mov byte ptr [esi + 0x34], 1 */ { const u32 m_ = (u32)(esi + 0x34u); M8(m_) = (u8)(0x1u); }
  /* 100058ff mov dword ptr [esi + 0x38], 6 */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(0x6u); }
  /* 10005906 mov eax, dword ptr [0x1000a0ec] */ { const u32 m_ = (u32)(0x1000a0ecu); eax = (u32)(M32(m_)); }
  /* 1000590b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000590c lea ecx, [esi + 0x3c] */ ecx = (u32)((u32)(esi + 0x3cu));
  /* 1000590f call 0x100069c0 */ esp -= 4; M32(esp) = 0x10005914u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x1000590fu); RETCHK(0x10005914u, 0x1000590fu); LOADALL;
  /* 10005914 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10005917 mov dword ptr [esi + 0x50], eax */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(eax); }
  /* 1000591a mov dword ptr [esi + 0x4c], eax */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(eax); }
L_1000591d:;
  /* 1000591d mov eax, edi */ { eax = (u32)(edi); }
  /* 1000591f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10005920 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005921 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10005922 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10005923 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10005927 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 1000592e add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005931 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10005934:;
  /* 10005934 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10005938 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000593a je 0x10005966 */ if (ZF_) goto L_10005966;
  /* 1000593c mov al, byte ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000593f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005941 jne 0x10005966 */ if (!ZF_) goto L_10005966;
  /* 10005943 mov byte ptr [esi + 0x34], 1 */ { const u32 m_ = (u32)(esi + 0x34u); M8(m_) = (u8)(0x1u); }
  /* 10005947 mov dword ptr [esi + 0x38], 3 */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(0x3u); }
  /* 1000594e mov edx, dword ptr [0x1000a0e0] */ { const u32 m_ = (u32)(0x1000a0e0u); edx = (u32)(M32(m_)); }
  /* 10005954 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10005955 lea ecx, [esi + 0x3c] */ ecx = (u32)((u32)(esi + 0x3cu));
  /* 10005958 call 0x100069c0 */ esp -= 4; M32(esp) = 0x1000595du; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10005958u); RETCHK(0x1000595du, 0x10005958u); LOADALL;
  /* 1000595d or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10005960 mov dword ptr [esi + 0x50], eax */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(eax); }
  /* 10005963 mov dword ptr [esi + 0x4c], eax */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(eax); }
L_10005966:;
  /* 10005966 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 1000596a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000596b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000596c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000596d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1000596f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10005970 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10005977 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000597a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10005980(CPU *c) {
  NATIVE_HOOK(0x10005980u) REGS; LOADALL;
L_10005980:;
  /* 10005980 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10005981 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10005982 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10005983 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10005984 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10005986 call 0x10003440 */ esp -= 4; M32(esp) = 0x1000598bu; SAVEALL; F_10003440(c); ABI_CHECK(0x10003440u, 0x10005986u); RETCHK(0x1000598bu, 0x10005986u); LOADALL;
  /* 1000598b mov ebp, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebp = (u32)(M32(m_)); }
  /* 1000598f mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10005991 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10005995 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10005996 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005997 call 0x10004fe0 */ esp -= 4; M32(esp) = 0x1000599cu; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x10005997u); RETCHK(0x1000599cu, 0x10005997u); LOADALL;
  /* 1000599c mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 100059a0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100059a3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100059a5 mov edi, eax */ { edi = (u32)(eax); }
  /* 100059a7 je 0x100059bb */ if (ZF_) goto L_100059bb;
  /* 100059a9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100059aa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100059ab call 0x10004eb0 */ esp -= 4; M32(esp) = 0x100059b0u; SAVEALL; F_10004eb0(c); ABI_CHECK(0x10004eb0u, 0x100059abu); RETCHK(0x100059b0u, 0x100059abu); LOADALL;
  /* 100059b0 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 100059b2 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 100059b5 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 100059b8 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_100059bb:;
  /* 100059bb test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100059bd je 0x10005a7a */ if (ZF_) goto L_10005a7a;
  /* 100059c3 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100059c5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100059c7 je 0x10005a7a */ if (ZF_) goto L_10005a7a;
  /* 100059cd cmp al, 0x3c */ { u32 a_ = (eax & 0xffu), b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100059cf jne 0x10005a7a */ if (!ZF_) goto L_10005a7a;
  /* 100059d5 add esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 100059d8 push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 100059dd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 100059df inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100059e0 call 0x100069c0 */ esp -= 4; M32(esp) = 0x100059e5u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x100059e0u); RETCHK(0x100059e5u, 0x100059e0u); LOADALL;
  /* 100059e5 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100059e7 je 0x10005a35 */ if (ZF_) goto L_10005a35;
  /* 100059e9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_100059f0:;
  /* 100059f0 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100059f2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100059f4 je 0x10005a62 */ if (ZF_) goto L_10005a62;
  /* 100059f6 cmp al, 0x3e */ { u32 a_ = (eax & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100059f8 je 0x10005a67 */ if (ZF_) goto L_10005a67;
  /* 100059fa mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 100059fc test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100059fe je 0x10005a1d */ if (ZF_) goto L_10005a1d;
  /* 10005a00 mov ebp, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebp = (u32)(M32(m_)); }
  /* 10005a03 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 10005a06 dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10005a07 cmp edx, ebp */ { u32 a_ = edx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005a09 jae 0x10005a1d */ if (!CF_) goto L_10005a1d;
  /* 10005a0b mov byte ptr [edx + ecx], al */ { const u32 m_ = (u32)(edx + ecx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10005a0e mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10005a11 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 10005a13 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10005a14 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 10005a17 mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
  /* 10005a1b jmp 0x10005a32 */ goto L_10005a32;
L_10005a1d:;
  /* 10005a1d lea edx, [esp + 0x1c] */ edx = (u32)((u32)(esp + 0x1cu));
  /* 10005a21 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10005a22 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10005a24 mov byte ptr [esp + 0x20], al */ { const u32 m_ = (u32)(esp + 0x20u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10005a28 mov byte ptr [esp + 0x21], 0 */ { const u32 m_ = (u32)(esp + 0x21u); M8(m_) = (u8)(0x0u); }
  /* 10005a2d call 0x10006be0 */ esp -= 4; M32(esp) = 0x10005a32u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10005a2du); RETCHK(0x10005a32u, 0x10005a2du); LOADALL;
L_10005a32:;
  /* 10005a32 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10005a33 jne 0x100059f0 */ if (!ZF_) goto L_100059f0;
L_10005a35:;
  /* 10005a35 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005a37 je 0x10005a62 */ if (ZF_) goto L_10005a62;
  /* 10005a39 mov al, byte ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005a3c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005a3e jne 0x10005a62 */ if (!ZF_) goto L_10005a62;
  /* 10005a40 mov byte ptr [ebx + 0x34], 1 */ { const u32 m_ = (u32)(ebx + 0x34u); M8(m_) = (u8)(0x1u); }
  /* 10005a44 mov dword ptr [ebx + 0x38], 0xa */ { const u32 m_ = (u32)(ebx + 0x38u); M32(m_) = (u32)(0xau); }
  /* 10005a4b mov eax, dword ptr [0x1000a0fc] */ { const u32 m_ = (u32)(0x1000a0fcu); eax = (u32)(M32(m_)); }
  /* 10005a50 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005a51 lea ecx, [ebx + 0x3c] */ ecx = (u32)((u32)(ebx + 0x3cu));
  /* 10005a54 call 0x100069c0 */ esp -= 4; M32(esp) = 0x10005a59u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10005a54u); RETCHK(0x10005a59u, 0x10005a54u); LOADALL;
  /* 10005a59 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10005a5c mov dword ptr [ebx + 0x50], eax */ { const u32 m_ = (u32)(ebx + 0x50u); M32(m_) = (u32)(eax); }
  /* 10005a5f mov dword ptr [ebx + 0x4c], eax */ { const u32 m_ = (u32)(ebx + 0x4cu); M32(m_) = (u32)(eax); }
L_10005a62:;
  /* 10005a62 cmp byte ptr [edi], 0x3e */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005a65 jne 0x10005a71 */ if (!ZF_) goto L_10005a71;
L_10005a67:;
  /* 10005a67 lea eax, [edi + 1] */ eax = (u32)((u32)(edi + 0x1u));
  /* 10005a6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10005a6b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005a6c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10005a6d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10005a6e ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10005a71:;
  /* 10005a71 mov eax, edi */ { eax = (u32)(edi); }
  /* 10005a73 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10005a74 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005a75 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10005a76 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10005a77 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10005a7a:;
  /* 10005a7a test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005a7c je 0x10005a8a */ if (ZF_) goto L_10005a8a;
  /* 10005a7e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10005a7f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10005a80 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10005a81 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 10005a83 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10005a85 call 0x10005150 */ esp -= 4; M32(esp) = 0x10005a8au; SAVEALL; F_10005150(c); ABI_CHECK(0x10005150u, 0x10005a85u); RETCHK(0x10005a8au, 0x10005a85u); LOADALL;
L_10005a8a:;
  /* 10005a8a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10005a8b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005a8c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10005a8d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10005a8f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10005a90 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10005aa0(CPU *c) {
  NATIVE_HOOK(0x10005aa0u) REGS; LOADALL;
L_10005aa0:;
  /* 10005aa0 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10005aa4 cmp ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005aa7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10005aa8 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10005aac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10005aad mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 10005ab1 jne 0x10005add */ if (!ZF_) goto L_10005add;
  /* 10005ab3 movzx eax, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M8(m_)); }
  /* 10005ab6 mov eax, dword ptr [eax*4 + 0x10008338] */ { const u32 m_ = (u32)(eax * 4u + 0x10008338u); eax = (u32)(M32(m_)); }
  /* 10005abd cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005ac0 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 10005ac2 jne 0x10005af1 */ if (!ZF_) goto L_10005af1;
L_10005ac4:;
  /* 10005ac4 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005ac6 cmp al, 0x26 */ { u32 a_ = (eax & 0xffu), b_ = 0x26u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005ac8 jne 0x10005ae5 */ if (!ZF_) goto L_10005ae5;
  /* 10005aca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10005acb mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 10005acf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10005ad0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10005ad1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10005ad2 call 0x10005300 */ esp -= 4; M32(esp) = 0x10005ad7u; SAVEALL; F_10005300(c); ABI_CHECK(0x10005300u, 0x10005ad2u); RETCHK(0x10005ad7u, 0x10005ad2u); LOADALL;
  /* 10005ad7 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005ada pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10005adb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005adc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10005add:;
  /* 10005add mov dword ptr [edi], 1 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x1u); }
  /* 10005ae3 jmp 0x10005ac4 */ goto L_10005ac4;
L_10005ae5:;
  /* 10005ae5 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10005ae9 mov byte ptr [edx], al */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10005aeb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10005aec lea eax, [esi + 1] */ eax = (u32)((u32)(esi + 0x1u));
  /* 10005aef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005af0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10005af1:;
  /* 10005af1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005af3 je 0x10005b0b */ if (ZF_) goto L_10005b0b;
  /* 10005af5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005af6 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10005afa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10005afb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005afc call 0x10007068 */ esp -= 4; M32(esp) = 0x10005b01u; SAVEALL; F_10007068(c); ABI_CHECK(0x10007068u, 0x10005afcu); RETCHK(0x10005b01u, 0x10005afcu); LOADALL;
  /* 10005b01 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10005b03 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005b06 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10005b07 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10005b09 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005b0a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10005b0b:;
  /* 10005b0b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10005b0c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10005b0e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005b0f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10005b10(CPU *c) {
  NATIVE_HOOK(0x10005b10u) REGS; LOADALL;
L_10005b10:;
  /* 10005b10 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10005b11 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10005b15 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10005b16 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10005b17 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10005b18 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10005b19 push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 10005b1e call 0x100069c0 */ esp -= 4; M32(esp) = 0x10005b23u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10005b1eu); RETCHK(0x10005b23u, 0x10005b1eu); LOADALL;
  /* 10005b23 mov al, byte ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005b27 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005b29 je 0x10005c2b */ if (ZF_) goto L_10005c2b;
  /* 10005b2f mov al, byte ptr [0x1000a097] */ { const u32 m_ = (u32)(0x1000a097u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005b34 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005b36 je 0x10005c2b */ if (ZF_) goto L_10005c2b;
  /* 10005b3c mov edi, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edi = (u32)(M32(m_)); }
  /* 10005b40 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10005b44 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10005b45 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005b46 mov byte ptr [esp + 0x28], 0 */ { const u32 m_ = (u32)(esp + 0x28u); M8(m_) = (u8)(0x0u); }
  /* 10005b4b call 0x10004fe0 */ esp -= 4; M32(esp) = 0x10005b50u; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x10005b4bu); RETCHK(0x10005b50u, 0x10005b4bu); LOADALL;
  /* 10005b50 mov esi, eax */ { esi = (u32)(eax); }
  /* 10005b52 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005b55 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005b57 je 0x10005cec */ if (ZF_) goto L_10005cec;
  /* 10005b5d mov ebp, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebp = (u32)(M32(m_)); }
L_10005b61:;
  /* 10005b61 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005b64 je 0x10005cec */ if (ZF_) goto L_10005cec;
  /* 10005b6a mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10005b6e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10005b6f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10005b70 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10005b71 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10005b72 call 0x100050a0 */ esp -= 4; M32(esp) = 0x10005b77u; SAVEALL; F_100050a0(c); ABI_CHECK(0x100050a0u, 0x10005b72u); RETCHK(0x10005b77u, 0x10005b72u); LOADALL;
  /* 10005b77 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005b7a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005b7c jne 0x10005cec */ if (!ZF_) goto L_10005cec;
  /* 10005b82 mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005b84 cmp bl, 0xd */ { u32 a_ = (ebx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005b87 je 0x10005c18 */ if (ZF_) goto L_10005c18;
  /* 10005b8d cmp bl, 0xa */ { u32 a_ = (ebx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005b90 je 0x10005c18 */ if (ZF_) goto L_10005c18;
  /* 10005b96 movzx edx, bl */ { edx = (u32)((ebx & 0xffu)); }
  /* 10005b99 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10005b9a call 0x10007044 */ esp -= 4; M32(esp) = 0x10005b9fu; SAVEALL; F_10007044(c); ABI_CHECK(0x10007044u, 0x10005b9au); RETCHK(0x10005b9fu, 0x10005b9au); LOADALL;
  /* 10005b9f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005ba2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005ba4 jne 0x10005c18 */ if (!ZF_) goto L_10005c18;
  /* 10005ba6 cmp bl, 0xa */ { u32 a_ = (ebx & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005ba9 je 0x10005c18 */ if (ZF_) goto L_10005c18;
  /* 10005bab cmp bl, 0xd */ { u32 a_ = (ebx & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005bae je 0x10005c18 */ if (ZF_) goto L_10005c18;
  /* 10005bb0 mov al, byte ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005bb4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005bb6 mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 10005bba je 0x10005bca */ if (ZF_) goto L_10005bca;
  /* 10005bbc push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10005bbe mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10005bc0 call 0x100037d0 */ esp -= 4; M32(esp) = 0x10005bc5u; SAVEALL; F_100037d0(c); ABI_CHECK(0x100037d0u, 0x10005bc0u); RETCHK(0x10005bc5u, 0x10005bc0u); LOADALL;
  /* 10005bc5 mov byte ptr [esp + 0x20], 0 */ { const u32 m_ = (u32)(esp + 0x20u); M8(m_) = (u8)(0x0u); }
L_10005bca:;
  /* 10005bca push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10005bcb lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 10005bcf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005bd0 lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 10005bd4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10005bd5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10005bd6 mov byte ptr [esp + 0x28], 0 */ { const u32 m_ = (u32)(esp + 0x28u); M8(m_) = (u8)(0x0u); }
  /* 10005bdb mov byte ptr [esp + 0x29], 0 */ { const u32 m_ = (u32)(esp + 0x29u); M8(m_) = (u8)(0x0u); }
  /* 10005be0 mov byte ptr [esp + 0x2a], 0 */ { const u32 m_ = (u32)(esp + 0x2au); M8(m_) = (u8)(0x0u); }
  /* 10005be5 mov byte ptr [esp + 0x2b], 0 */ { const u32 m_ = (u32)(esp + 0x2bu); M8(m_) = (u8)(0x0u); }
  /* 10005bea call 0x10005aa0 */ esp -= 4; M32(esp) = 0x10005befu; SAVEALL; F_10005aa0(c); ABI_CHECK(0x10005aa0u, 0x10005beau); RETCHK(0x10005befu, 0x10005beau); LOADALL;
  /* 10005bef mov esi, eax */ { esi = (u32)(eax); }
  /* 10005bf1 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 10005bf5 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005bf8 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005bfb mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10005bfd jne 0x10005c0b */ if (!ZF_) goto L_10005c0b;
  /* 10005bff mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 10005c03 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10005c04 call 0x100037d0 */ esp -= 4; M32(esp) = 0x10005c09u; SAVEALL; F_100037d0(c); ABI_CHECK(0x100037d0u, 0x10005c04u); RETCHK(0x10005c09u, 0x10005c04u); LOADALL;
  /* 10005c09 jmp 0x10005c1e */ goto L_10005c1e;
L_10005c0b:;
  /* 10005c0b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005c0c lea eax, [esp + 0x1c] */ eax = (u32)((u32)(esp + 0x1cu));
  /* 10005c10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005c11 call 0x10006ad0 */ esp -= 4; M32(esp) = 0x10005c16u; SAVEALL; F_10006ad0(c); ABI_CHECK(0x10006ad0u, 0x10005c11u); RETCHK(0x10005c16u, 0x10005c11u); LOADALL;
  /* 10005c16 jmp 0x10005c1e */ goto L_10005c1e;
L_10005c18:;
  /* 10005c18 mov byte ptr [esp + 0x20], 1 */ { const u32 m_ = (u32)(esp + 0x20u); M8(m_) = (u8)(0x1u); }
  /* 10005c1d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10005c1e:;
  /* 10005c1e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005c20 jne 0x10005b61 */ if (!ZF_) goto L_10005b61;
  /* 10005c26 jmp 0x10005cec */ goto L_10005cec;
L_10005c2b:;
  /* 10005c2b mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
  /* 10005c2f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005c31 je 0x10005cec */ if (ZF_) goto L_10005cec;
  /* 10005c37 mov ebx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 10005c3b mov ebp, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebp = (u32)(M32(m_)); }
  /* 10005c3f nop */ ;
L_10005c40:;
  /* 10005c40 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005c43 je 0x10005cec */ if (ZF_) goto L_10005cec;
  /* 10005c49 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10005c4d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10005c4e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10005c4f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10005c50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10005c51 call 0x100050a0 */ esp -= 4; M32(esp) = 0x10005c56u; SAVEALL; F_100050a0(c); ABI_CHECK(0x100050a0u, 0x10005c51u); RETCHK(0x10005c56u, 0x10005c51u); LOADALL;
  /* 10005c56 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005c59 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005c5b jne 0x10005cec */ if (!ZF_) goto L_10005cec;
  /* 10005c61 cmp ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005c64 mov byte ptr [esp + 0x20], al */ { const u32 m_ = (u32)(esp + 0x20u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10005c68 mov byte ptr [esp + 0x21], al */ { const u32 m_ = (u32)(esp + 0x21u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10005c6c mov byte ptr [esp + 0x22], al */ { const u32 m_ = (u32)(esp + 0x22u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10005c70 mov byte ptr [esp + 0x23], al */ { const u32 m_ = (u32)(esp + 0x23u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10005c74 jne 0x10005caa */ if (!ZF_) goto L_10005caa;
  /* 10005c76 movzx edx, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M8(m_)); }
  /* 10005c79 mov edi, dword ptr [edx*4 + 0x10008338] */ { const u32 m_ = (u32)(edx * 4u + 0x10008338u); edi = (u32)(M32(m_)); }
  /* 10005c80 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005c82 mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
  /* 10005c86 jne 0x10005cbc */ if (!ZF_) goto L_10005cbc;
L_10005c88:;
  /* 10005c88 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005c8a cmp al, 0x26 */ { u32 a_ = (eax & 0xffu), b_ = 0x26u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005c8c jne 0x10005cb5 */ if (!ZF_) goto L_10005cb5;
  /* 10005c8e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10005c8f lea eax, [esp + 0x1c] */ eax = (u32)((u32)(esp + 0x1cu));
  /* 10005c93 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005c94 lea ecx, [esp + 0x28] */ ecx = (u32)((u32)(esp + 0x28u));
  /* 10005c98 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10005c99 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10005c9a call 0x10005300 */ esp -= 4; M32(esp) = 0x10005c9fu; SAVEALL; F_10005300(c); ABI_CHECK(0x10005300u, 0x10005c9au); RETCHK(0x10005c9fu, 0x10005c9au); LOADALL;
  /* 10005c9f mov edi, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); edi = (u32)(M32(m_)); }
  /* 10005ca3 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005ca6 mov esi, eax */ { esi = (u32)(eax); }
  /* 10005ca8 jmp 0x10005cd5 */ goto L_10005cd5;
L_10005caa:;
  /* 10005caa mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 10005caf mov dword ptr [esp + 0x18], edi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(edi); }
  /* 10005cb3 jmp 0x10005c88 */ goto L_10005c88;
L_10005cb5:;
  /* 10005cb5 mov byte ptr [esp + 0x20], al */ { const u32 m_ = (u32)(esp + 0x20u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10005cb9 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10005cba jmp 0x10005cd5 */ goto L_10005cd5;
L_10005cbc:;
  /* 10005cbc test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005cbe je 0x10005cd3 */ if (ZF_) goto L_10005cd3;
  /* 10005cc0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10005cc1 lea edx, [esp + 0x24] */ edx = (u32)((u32)(esp + 0x24u));
  /* 10005cc5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10005cc6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10005cc7 call 0x10007068 */ esp -= 4; M32(esp) = 0x10005cccu; SAVEALL; F_10007068(c); ABI_CHECK(0x10007068u, 0x10005cc7u); RETCHK(0x10005cccu, 0x10005cc7u); LOADALL;
  /* 10005ccc add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005ccf add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10005cd1 jmp 0x10005cd5 */ goto L_10005cd5;
L_10005cd3:;
  /* 10005cd3 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_10005cd5:;
  /* 10005cd5 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10005cd9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10005cda lea eax, [esp + 0x24] */ eax = (u32)((u32)(esp + 0x24u));
  /* 10005cde push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005cdf call 0x10006ad0 */ esp -= 4; M32(esp) = 0x10005ce4u; SAVEALL; F_10006ad0(c); ABI_CHECK(0x10006ad0u, 0x10005cdfu); RETCHK(0x10005ce4u, 0x10005cdfu); LOADALL;
  /* 10005ce4 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005ce6 jne 0x10005c40 */ if (!ZF_) goto L_10005c40;
L_10005cec:;
  /* 10005cec mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 10005cf0 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_10005cf3:;
  /* 10005cf3 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005cf5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10005cf6 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005cf8 jne 0x10005cf3 */ if (!ZF_) goto L_10005cf3;
  /* 10005cfa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10005cfb sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10005cfd add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10005cff pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005d00 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10005d01 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10005d02 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10005d03 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10005d10(CPU *c) {
  NATIVE_HOOK(0x10005d10u) REGS; LOADALL;
L_10005d10:;
  /* 10005d10 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005d13 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10005d14 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10005d15 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10005d16 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10005d18 lea ebx, [edi + 0x3c] */ ebx = (u32)((u32)(edi + 0x3cu));
  /* 10005d1b xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10005d1d push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 10005d22 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10005d24 mov byte ptr [edi + 0x34], 0 */ { const u32 m_ = (u32)(edi + 0x34u); M8(m_) = (u8)(0x0u); }
  /* 10005d28 mov dword ptr [edi + 0x38], esi */ { const u32 m_ = (u32)(edi + 0x38u); M32(m_) = (u32)(esi); }
  /* 10005d2b call 0x100069c0 */ esp -= 4; M32(esp) = 0x10005d30u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10005d2bu); RETCHK(0x10005d30u, 0x10005d2bu); LOADALL;
  /* 10005d30 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 10005d34 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005d36 mov dword ptr [edi + 0x50], esi */ { const u32 m_ = (u32)(edi + 0x50u); M32(m_) = (u32)(esi); }
  /* 10005d39 mov dword ptr [edi + 0x4c], esi */ { const u32 m_ = (u32)(edi + 0x4cu); M32(m_) = (u32)(esi); }
  /* 10005d3c je 0x10005f4e */ if (ZF_) goto L_10005f4e;
  /* 10005d42 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005d45 je 0x10005f4e */ if (ZF_) goto L_10005f4e;
  /* 10005d4b mov ecx, 0xffffffff */ { ecx = (u32)(0xffffffffu); }
  /* 10005d50 mov dword ptr [edi + 8], ecx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10005d53 mov dword ptr [edi + 4], ecx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10005d56 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10005d5a cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005d5c je 0x10005d6b */ if (ZF_) goto L_10005d6b;
  /* 10005d5e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10005d60 mov dword ptr [edi + 4], edx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(edx); }
  /* 10005d63 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10005d66 mov dword ptr [edi + 8], ecx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10005d69 jmp 0x10005d71 */ goto L_10005d71;
L_10005d6b:;
  /* 10005d6b mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
  /* 10005d6e mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
L_10005d71:;
  /* 10005d71 mov edx, dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); edx = (u32)(M32(m_)); }
  /* 10005d74 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10005d77 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10005d78 mov ebp, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ebp = (u32)(M32(m_)); }
  /* 10005d7c cmp ebp, esi */ { u32 a_ = ebp, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005d7e mov dword ptr [esp + 0x1c], edx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edx); }
  /* 10005d82 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 10005d85 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 10005d89 mov dword ptr [esp + 0x10], ecx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 10005d8d mov dword ptr [esp + 0x14], edx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(edx); }
  /* 10005d91 mov dword ptr [edi + 4], ecx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10005d94 mov dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edx); }
  /* 10005d97 jne 0x10005dc1 */ if (!ZF_) goto L_10005dc1;
  /* 10005d99 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005d9b test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005d9d je 0x10005dc1 */ if (ZF_) goto L_10005dc1;
  /* 10005d9f cmp cl, 0xef */ { u32 a_ = (ecx & 0xffu), b_ = 0xefu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005da2 jne 0x10005dc1 */ if (!ZF_) goto L_10005dc1;
  /* 10005da4 mov cl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005da7 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005da9 je 0x10005dc1 */ if (ZF_) goto L_10005dc1;
  /* 10005dab cmp cl, 0xbb */ { u32 a_ = (ecx & 0xffu), b_ = 0xbbu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005dae jne 0x10005dc1 */ if (!ZF_) goto L_10005dc1;
  /* 10005db0 mov cl, byte ptr [eax + 2] */ { const u32 m_ = (u32)(eax + 0x2u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005db3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005db5 je 0x10005dc1 */ if (ZF_) goto L_10005dc1;
  /* 10005db7 cmp cl, 0xbf */ { u32 a_ = (ecx & 0xffu), b_ = 0xbfu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005dba jne 0x10005dc1 */ if (!ZF_) goto L_10005dc1;
  /* 10005dbc mov ebp, 1 */ { ebp = (u32)(0x1u); }
L_10005dc1:;
  /* 10005dc1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10005dc2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005dc3 call 0x10004fe0 */ esp -= 4; M32(esp) = 0x10005dc8u; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x10005dc3u); RETCHK(0x10005dc8u, 0x10005dc3u); LOADALL;
  /* 10005dc8 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10005dca add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005dcd cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005dcf jne 0x10005e10 */ if (!ZF_) goto L_10005e10;
  /* 10005dd1 mov al, byte ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005dd4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005dd6 jne 0x10005dfa */ if (!ZF_) goto L_10005dfa;
  /* 10005dd8 mov byte ptr [edi + 0x34], 1 */ { const u32 m_ = (u32)(edi + 0x34u); M8(m_) = (u8)(0x1u); }
  /* 10005ddc mov dword ptr [edi + 0x38], 0xd */ { const u32 m_ = (u32)(edi + 0x38u); M32(m_) = (u32)(0xdu); }
  /* 10005de3 mov eax, dword ptr [0x1000a108] */ { const u32 m_ = (u32)(0x1000a108u); eax = (u32)(M32(m_)); }
  /* 10005de8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
L_10005de9:;
  /* 10005de9 lea ecx, [edi + 0x3c] */ ecx = (u32)((u32)(edi + 0x3cu));
  /* 10005dec call 0x100069c0 */ esp -= 4; M32(esp) = 0x10005df1u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10005decu); RETCHK(0x10005df1u, 0x10005decu); LOADALL;
  /* 10005df1 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10005df4 mov dword ptr [edi + 0x50], eax */ { const u32 m_ = (u32)(edi + 0x50u); M32(m_) = (u32)(eax); }
  /* 10005df7 mov dword ptr [edi + 0x4c], eax */ { const u32 m_ = (u32)(edi + 0x4cu); M32(m_) = (u32)(eax); }
L_10005dfa:;
  /* 10005dfa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10005dfb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10005dfc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005dfd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10005dff pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10005e00 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005e03 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10005e06:;
  /* 10005e06 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10005e08 jmp 0x10005e10 */ goto L_10005e10;
L_10005e10:;
  /* 10005e10 cmp byte ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005e13 je 0x10005f1b */ if (ZF_) goto L_10005f1b;
  /* 10005e19 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10005e1a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10005e1b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10005e1d call 0x10005550 */ esp -= 4; M32(esp) = 0x10005e22u; SAVEALL; F_10005550(c); ABI_CHECK(0x10005550u, 0x10005e1du); RETCHK(0x10005e22u, 0x10005e1du); LOADALL;
  /* 10005e22 mov esi, eax */ { esi = (u32)(eax); }
  /* 10005e24 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005e26 je 0x10005f19 */ if (ZF_) goto L_10005f19;
  /* 10005e2c mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 10005e2e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10005e2f lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 10005e33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005e34 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10005e35 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10005e37 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10005e3au; SAVEALL; call_ind(c, t_); RETCHK(0x10005e3au, 0x10005e37u); LOADALL; }
  /* 10005e3a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10005e3b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10005e3d mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 10005e41 call 0x10003410 */ esp -= 4; M32(esp) = 0x10005e46u; SAVEALL; F_10003410(c); ABI_CHECK(0x10003410u, 0x10005e41u); RETCHK(0x10005e46u, 0x10005e41u); LOADALL;
  /* 10005e46 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005e48 jne 0x10005f01 */ if (!ZF_) goto L_10005f01;
  /* 10005e4e cmp dword ptr [esi + 0x14], 5 */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005e52 jne 0x10005f01 */ if (!ZF_) goto L_10005f01;
  /* 10005e58 mov eax, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); eax = (u32)(M32(m_)); }
  /* 10005e5b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005e5d je 0x10005e6c */ if (ZF_) goto L_10005e6c;
  /* 10005e5f mov ebp, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); ebp = (u32)(M32(m_)); }
  /* 10005e62 cmp byte ptr [ebp], 0 */ { const u32 m_ = (u32)(ebp); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005e66 mov dword ptr [esp + 0x28], ebp */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ebp); }
  /* 10005e6a jne 0x10005e76 */ if (!ZF_) goto L_10005e76;
L_10005e6c:;
  /* 10005e6c mov ebp, 1 */ { ebp = (u32)(0x1u); }
  /* 10005e71 jmp 0x10005f01 */ goto L_10005f01;
L_10005e76:;
  /* 10005e76 mov esi, 0x1000876c */ { esi = (u32)(0x1000876cu); }
  /* 10005e7b sub ebp, esi */ { u32 a_ = ebp, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 10005e7d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_10005e80:;
  /* 10005e80 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005e83 je 0x10005eaf */ if (ZF_) goto L_10005eaf;
  /* 10005e85 movsx eax, byte ptr [esi + ebp] */ { const u32 m_ = (u32)(esi + ebp); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 10005e89 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005e8a call 0x1000704a */ esp -= 4; M32(esp) = 0x10005e8fu; SAVEALL; F_1000704a(c); ABI_CHECK(0x1000704au, 0x10005e8au); RETCHK(0x10005e8fu, 0x10005e8au); LOADALL;
  /* 10005e8f mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10005e91 movsx eax, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 10005e94 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005e95 call 0x1000704a */ esp -= 4; M32(esp) = 0x10005e9au; SAVEALL; F_1000704a(c); ABI_CHECK(0x1000704au, 0x10005e95u); RETCHK(0x10005e9au, 0x10005e95u); LOADALL;
  /* 10005e9a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005e9d cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005e9f jne 0x10005eaa */ if (!ZF_) goto L_10005eaa;
  /* 10005ea1 mov al, byte ptr [esi + ebp + 1] */ { const u32 m_ = (u32)(esi + ebp + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005ea5 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10005ea6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005ea8 jne 0x10005e80 */ if (!ZF_) goto L_10005e80;
L_10005eaa:;
  /* 10005eaa cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005ead jne 0x10005eb6 */ if (!ZF_) goto L_10005eb6;
L_10005eaf:;
  /* 10005eaf mov ebp, 1 */ { ebp = (u32)(0x1u); }
  /* 10005eb4 jmp 0x10005f01 */ goto L_10005f01;
L_10005eb6:;
  /* 10005eb6 mov ebx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ebx = (u32)(M32(m_)); }
  /* 10005eba cmp byte ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005ebd mov esi, 0x10008764 */ { esi = (u32)(0x10008764u); }
  /* 10005ec2 je 0x10005efc */ if (ZF_) goto L_10005efc;
  /* 10005ec4 sub ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
L_10005ec6:;
  /* 10005ec6 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005ec9 je 0x10005ef5 */ if (ZF_) goto L_10005ef5;
  /* 10005ecb movsx eax, byte ptr [ebx + esi] */ { const u32 m_ = (u32)(ebx + esi); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 10005ecf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005ed0 call 0x1000704a */ esp -= 4; M32(esp) = 0x10005ed5u; SAVEALL; F_1000704a(c); ABI_CHECK(0x1000704au, 0x10005ed0u); RETCHK(0x10005ed5u, 0x10005ed0u); LOADALL;
  /* 10005ed5 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 10005ed7 movsx eax, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 10005eda push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005edb call 0x1000704a */ esp -= 4; M32(esp) = 0x10005ee0u; SAVEALL; F_1000704a(c); ABI_CHECK(0x1000704au, 0x10005edbu); RETCHK(0x10005ee0u, 0x10005edbu); LOADALL;
  /* 10005ee0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005ee3 cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005ee5 jne 0x10005ef0 */ if (!ZF_) goto L_10005ef0;
  /* 10005ee7 mov al, byte ptr [ebx + esi + 1] */ { const u32 m_ = (u32)(ebx + esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005eeb inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10005eec test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005eee jne 0x10005ec6 */ if (!ZF_) goto L_10005ec6;
L_10005ef0:;
  /* 10005ef0 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005ef3 jne 0x10005efc */ if (!ZF_) goto L_10005efc;
L_10005ef5:;
  /* 10005ef5 mov ebp, 1 */ { ebp = (u32)(0x1u); }
  /* 10005efa jmp 0x10005f01 */ goto L_10005f01;
L_10005efc:;
  /* 10005efc mov ebp, 2 */ { ebp = (u32)(0x2u); }
L_10005f01:;
  /* 10005f01 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10005f05 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10005f06 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10005f07 call 0x10004fe0 */ esp -= 4; M32(esp) = 0x10005f0cu; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x10005f07u); RETCHK(0x10005f0cu, 0x10005f07u); LOADALL;
  /* 10005f0c mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10005f0e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005f11 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10005f13 jne 0x10005e06 */ if (!ZF_) goto L_10005e06;
L_10005f19:;
  /* 10005f19 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_10005f1b:;
  /* 10005f1b cmp dword ptr [edi + 0x18], esi */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005f1e jne 0x10005f42 */ if (!ZF_) goto L_10005f42;
  /* 10005f20 mov al, byte ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005f23 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005f25 jne 0x10005dfa */ if (!ZF_) goto L_10005dfa;
  /* 10005f2b mov byte ptr [edi + 0x34], 1 */ { const u32 m_ = (u32)(edi + 0x34u); M8(m_) = (u8)(0x1u); }
  /* 10005f2f mov dword ptr [edi + 0x38], 0xd */ { const u32 m_ = (u32)(edi + 0x38u); M32(m_) = (u32)(0xdu); }
  /* 10005f36 mov edx, dword ptr [0x1000a108] */ { const u32 m_ = (u32)(0x1000a108u); edx = (u32)(M32(m_)); }
  /* 10005f3c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10005f3d jmp 0x10005de9 */ goto L_10005de9;
L_10005f42:;
  /* 10005f42 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10005f43 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10005f44 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005f45 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 10005f47 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10005f48 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005f4b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10005f4e:;
  /* 10005f4e mov al, byte ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10005f51 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10005f53 jne 0x10005f76 */ if (!ZF_) goto L_10005f76;
  /* 10005f55 mov byte ptr [edi + 0x34], 1 */ { const u32 m_ = (u32)(edi + 0x34u); M8(m_) = (u8)(0x1u); }
  /* 10005f59 mov dword ptr [edi + 0x38], 0xd */ { const u32 m_ = (u32)(edi + 0x38u); M32(m_) = (u32)(0xdu); }
  /* 10005f60 mov eax, dword ptr [0x1000a108] */ { const u32 m_ = (u32)(0x1000a108u); eax = (u32)(M32(m_)); }
  /* 10005f65 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005f66 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10005f68 call 0x100069c0 */ esp -= 4; M32(esp) = 0x10005f6du; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10005f68u); RETCHK(0x10005f6du, 0x10005f68u); LOADALL;
  /* 10005f6d or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10005f70 mov dword ptr [edi + 0x50], eax */ { const u32 m_ = (u32)(edi + 0x50u); M32(m_) = (u32)(eax); }
  /* 10005f73 mov dword ptr [edi + 0x4c], eax */ { const u32 m_ = (u32)(edi + 0x4cu); M32(m_) = (u32)(eax); }
L_10005f76:;
  /* 10005f76 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10005f77 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10005f78 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10005f7a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10005f7b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005f7e ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10005f90(CPU *c) {
  NATIVE_HOOK(0x10005f90u) REGS; LOADALL;
L_10005f90:;
  /* 10005f90 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10005f92 push 0x10007618 */ { u32 v_ = 0x10007618u; esp -= 4; M32(esp) = v_; }
  /* 10005f97 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10005f9d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005f9e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10005fa5 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005fa8 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 10005fac push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10005fad push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10005fae mov ebp, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ebp = (u32)(M32(m_)); }
  /* 10005fb2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10005fb3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10005fb4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10005fb6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10005fb7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10005fb8 mov dword ptr [esp + 0x18], esi */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(esi); }
  /* 10005fbc call 0x10004fe0 */ esp -= 4; M32(esp) = 0x10005fc1u; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x10005fbcu); RETCHK(0x10005fc1u, 0x10005fbcu); LOADALL;
  /* 10005fc1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10005fc4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10005fc6 mov edi, eax */ { edi = (u32)(eax); }
  /* 10005fc8 call 0x10003440 */ esp -= 4; M32(esp) = 0x10005fcdu; SAVEALL; F_10003440(c); ABI_CHECK(0x10003440u, 0x10005fc8u); RETCHK(0x10005fcdu, 0x10005fc8u); LOADALL;
  /* 10005fcd xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10005fcf cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005fd1 mov dword ptr [esp + 0x38], eax */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(eax); }
  /* 10005fd5 je 0x100062d7 */ if (ZF_) goto L_100062d7;
  /* 10005fdb cmp byte ptr [edi], bl */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10005fdd je 0x100062d7 */ if (ZF_) goto L_100062d7;
  /* 10005fe3 mov ecx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 10005fe7 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10005fe9 je 0x10006001 */ if (ZF_) goto L_10006001;
  /* 10005feb push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10005fec push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10005fed call 0x10004eb0 */ esp -= 4; M32(esp) = 0x10005ff2u; SAVEALL; F_10004eb0(c); ABI_CHECK(0x10004eb0u, 0x10005fedu); RETCHK(0x10005ff2u, 0x10005fedu); LOADALL;
  /* 10005ff2 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10005ff4 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 10005ff7 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10005ffa mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 10005ffd mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
L_10006001:;
  /* 10006001 cmp byte ptr [edi], 0x3c */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006004 je 0x1000601f */ if (ZF_) goto L_1000601f;
  /* 10006006 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006008 je 0x10006307 */ if (ZF_) goto L_10006307;
  /* 1000600e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000600f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10006010 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006011 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10006013 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10006015 call 0x10005150 */ esp -= 4; M32(esp) = 0x1000601au; SAVEALL; F_10005150(c); ABI_CHECK(0x10005150u, 0x10006015u); RETCHK(0x1000601au, 0x10006015u); LOADALL;
  /* 1000601a jmp 0x10006307 */ goto L_10006307;
L_1000601f:;
  /* 1000601f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006020 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006021 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006022 call 0x10004fe0 */ esp -= 4; M32(esp) = 0x10006027u; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x10006022u); RETCHK(0x10006027u, 0x10006022u); LOADALL;
  /* 10006027 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006028 add esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1000602b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000602c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000602d mov dword ptr [esp + 0x44], eax */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(eax); }
  /* 10006031 call 0x10005240 */ esp -= 4; M32(esp) = 0x10006036u; SAVEALL; F_10005240(c); ABI_CHECK(0x10005240u, 0x10006031u); RETCHK(0x10006036u, 0x10006031u); LOADALL;
  /* 10006036 mov edi, eax */ { edi = (u32)(eax); }
  /* 10006038 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000603b cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000603d je 0x100062bb */ if (ZF_) goto L_100062bb;
  /* 10006043 cmp byte ptr [edi], bl */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006045 je 0x100062bb */ if (ZF_) goto L_100062bb;
  /* 1000604b push 0x1000826c */ { u32 v_ = 0x1000826cu; esp -= 4; M32(esp) = v_; }
  /* 10006050 lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 10006054 call 0x10006960 */ esp -= 4; M32(esp) = 0x10006059u; SAVEALL; F_10006960(c); ABI_CHECK(0x10006960u, 0x10006054u); RETCHK(0x10006059u, 0x10006054u); LOADALL;
  /* 10006059 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000605a lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 1000605e mov dword ptr [esp + 0x2c], ebx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 10006062 call 0x10005200 */ esp -= 4; M32(esp) = 0x10006067u; SAVEALL; F_10005200(c); ABI_CHECK(0x10005200u, 0x10006062u); RETCHK(0x10006067u, 0x10006062u); LOADALL;
  /* 10006067 push 0x1000821c */ { u32 v_ = 0x1000821cu; esp -= 4; M32(esp) = v_; }
  /* 1000606c lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 10006070 call 0x10006be0 */ esp -= 4; M32(esp) = 0x10006075u; SAVEALL; F_10006be0(c); ABI_CHECK(0x10006be0u, 0x10006070u); RETCHK(0x10006075u, 0x10006070u); LOADALL;
L_10006075:;
  /* 10006075 cmp byte ptr [edi], bl */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006077 je 0x10006293 */ if (ZF_) goto L_10006293;
  /* 1000607d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000607e mov esi, edi */ { esi = (u32)(edi); }
  /* 10006080 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006081 mov dword ptr [esp + 0x38], esi */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(esi); }
  /* 10006085 call 0x10004fe0 */ esp -= 4; M32(esp) = 0x1000608au; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x10006085u); RETCHK(0x1000608au, 0x10006085u); LOADALL;
  /* 1000608a mov edi, eax */ { edi = (u32)(eax); }
  /* 1000608c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000608f cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006091 je 0x1000626a */ if (ZF_) goto L_1000626a;
  /* 10006097 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006099 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000609b je 0x1000626a */ if (ZF_) goto L_1000626a;
  /* 100060a1 cmp al, 0x2f */ { u32 a_ = (eax & 0xffu), b_ = 0x2fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100060a3 je 0x10006157 */ if (ZF_) goto L_10006157;
  /* 100060a9 cmp al, 0x3e */ { u32 a_ = (eax & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100060ab je 0x1000617e */ if (ZF_) goto L_1000617e;
  /* 100060b1 push 0x34 */ { u32 v_ = 0x34u; esp -= 4; M32(esp) = v_; }
  /* 100060b3 call 0x10006e4c */ esp -= 4; M32(esp) = 0x100060b8u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x100060b3u); RETCHK(0x100060b8u, 0x100060b3u); LOADALL;
  /* 100060b8 mov ecx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 100060bc mov esi, eax */ { esi = (u32)(eax); }
  /* 100060be add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100060c1 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100060c3 je 0x10006215 */ if (ZF_) goto L_10006215;
  /* 100060c9 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 100060cc mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 100060cf mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 100060d2 mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 100060d6 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 100060d9 mov dword ptr [esi], 0x10008224 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x10008224u); }
  /* 100060df mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 100060e2 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 100060e5 mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 100060e8 mov dword ptr [esi + 0x24], ebx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ebx); }
  /* 100060eb mov dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 100060ee mov dword ptr [esi + 0x28], ebx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(ebx); }
  /* 100060f1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100060f2 mov dword ptr [esi + 0x10], ebx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ebx); }
  /* 100060f5 mov dword ptr [esi + 0x30], ebx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(ebx); }
  /* 100060f8 mov dword ptr [esi + 0x2c], ebx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 100060fb mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 100060fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100060fe mov dword ptr [esi + 0x10], ecx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 10006101 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006102 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10006104 mov dword ptr [esp + 0x3c], edi */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(edi); }
  /* 10006108 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1000610bu; SAVEALL; call_ind(c, t_); RETCHK(0x1000610bu, 0x10006108u); LOADALL; }
  /* 1000610b mov edi, eax */ { edi = (u32)(eax); }
  /* 1000610d cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000610f je 0x10006246 */ if (ZF_) goto L_10006246;
  /* 10006115 cmp byte ptr [edi], bl */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006117 je 0x10006246 */ if (ZF_) goto L_10006246;
  /* 1000611d cmp dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006120 je 0x10006127 */ if (ZF_) goto L_10006127;
  /* 10006122 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 10006125 jmp 0x1000612c */ goto L_1000612c;
L_10006127:;
  /* 10006127 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_1000612c:;
  /* 1000612c mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10006130 add ecx, 0x34 */ { u32 a_ = ecx, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10006133 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006134 call 0x100041f0 */ esp -= 4; M32(esp) = 0x10006139u; SAVEALL; F_100041f0(c); ABI_CHECK(0x100041f0u, 0x10006134u); RETCHK(0x10006139u, 0x10006134u); LOADALL;
  /* 10006139 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000613b mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 1000613f jne 0x10006228 */ if (!ZF_) goto L_10006228;
  /* 10006145 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10006149 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000614a add ecx, 0x34 */ { u32 a_ = ecx, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1000614d call 0x100037b0 */ esp -= 4; M32(esp) = 0x10006152u; SAVEALL; F_100037b0(c); ABI_CHECK(0x100037b0u, 0x1000614du); RETCHK(0x10006152u, 0x1000614du); LOADALL;
  /* 10006152 jmp 0x10006075 */ goto L_10006075;
L_10006157:;
  /* 10006157 mov al, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000615a inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1000615b cmp al, 0x3e */ { u32 a_ = (eax & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000615d je 0x10006179 */ if (ZF_) goto L_10006179;
  /* 1000615f mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 10006163 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006165 je 0x10006280 */ if (ZF_) goto L_10006280;
  /* 1000616b mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 1000616f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006170 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10006171 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006172 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10006174 jmp 0x1000627b */ goto L_1000627b;
L_10006179:;
  /* 10006179 lea esi, [edi + 1] */ esi = (u32)((u32)(edi + 0x1u));
  /* 1000617c jmp 0x100061da */ goto L_100061da;
L_1000617e:;
  /* 1000617e mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 10006182 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10006186 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006187 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006188 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006189 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000618a call 0x10005790 */ esp -= 4; M32(esp) = 0x1000618fu; SAVEALL; F_10005790(c); ABI_CHECK(0x10005790u, 0x1000618au); RETCHK(0x1000618fu, 0x1000618au); LOADALL;
  /* 1000618f mov esi, eax */ { esi = (u32)(eax); }
  /* 10006191 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006193 je 0x10006280 */ if (ZF_) goto L_10006280;
  /* 10006199 cmp byte ptr [esi], bl */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000619b je 0x10006280 */ if (ZF_) goto L_10006280;
  /* 100061a1 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 100061a5 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100061a7 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 100061ab jne 0x100061b2 */ if (!ZF_) goto L_100061b2;
  /* 100061ad mov ecx, 0x10008158 */ { ecx = (u32)(0x10008158u); }
L_100061b2:;
  /* 100061b2 mov eax, esi */ { eax = (u32)(esi); }
  /* 100061b4 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_100061b6:;
  /* 100061b6 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100061b8 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100061ba je 0x100061ce */ if (ZF_) goto L_100061ce;
  /* 100061bc cmp byte ptr [eax + ecx], dl */ { const u32 m_ = (u32)(eax + ecx); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100061bf jne 0x100061ca */ if (!ZF_) goto L_100061ca;
  /* 100061c1 mov dl, byte ptr [eax + ecx + 1] */ { const u32 m_ = (u32)(eax + ecx + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100061c5 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100061c6 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100061c8 jne 0x100061b6 */ if (!ZF_) goto L_100061b6;
L_100061ca:;
  /* 100061ca cmp byte ptr [ecx], bl */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100061cc jne 0x10006202 */ if (!ZF_) goto L_10006202;
L_100061ce:;
  /* 100061ce mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 100061d2 neg edi */ { u32 a_ = edi; u32 r_ = (0u - a_) & 0xffffffffu; edi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 100061d4 sbb edi, edi */ { u32 a_ = edi, b_ = edi; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); edi = (u32)(r_); }
  /* 100061d6 and edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 100061d8 add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_100061da:;
  /* 100061da lea ecx, [esp + 0x14] */ ecx = (u32)((u32)(esp + 0x14u));
  /* 100061de mov dword ptr [esp + 0x28], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0xffffffffu); }
  /* 100061e6 call 0x10001640 */ esp -= 4; M32(esp) = 0x100061ebu; SAVEALL; F_10001640(c); ABI_CHECK(0x10001640u, 0x100061e6u); RETCHK(0x100061ebu, 0x100061e6u); LOADALL;
  /* 100061eb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100061ec mov eax, esi */ { eax = (u32)(esi); }
  /* 100061ee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100061ef pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100061f0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100061f1 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 100061f5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 100061fc add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100061ff ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10006202:;
  /* 10006202 mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 10006206 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006208 je 0x10006280 */ if (ZF_) goto L_10006280;
  /* 1000620a mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 1000620e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000620f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10006210 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006211 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 10006213 jmp 0x1000627b */ goto L_1000627b;
L_10006215:;
  /* 10006215 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006217 je 0x10006280 */ if (ZF_) goto L_10006280;
  /* 10006219 mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 1000621d mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 10006221 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006222 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006223 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10006224 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10006226 jmp 0x1000627b */ goto L_1000627b;
L_10006228:;
  /* 10006228 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1000622a call 0x100033f0 */ esp -= 4; M32(esp) = 0x1000622fu; SAVEALL; F_100033f0(c); ABI_CHECK(0x100033f0u, 0x1000622au); RETCHK(0x1000622fu, 0x1000622au); LOADALL;
  /* 1000622f mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 10006233 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006234 add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10006237 call 0x100069c0 */ esp -= 4; M32(esp) = 0x1000623cu; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10006237u); RETCHK(0x1000623cu, 0x10006237u); LOADALL;
  /* 1000623c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 1000623e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10006240 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10006242 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10006244u; SAVEALL; call_ind(c, t_); RETCHK(0x10006244u, 0x10006242u); LOADALL; }
  /* 10006244 jmp 0x10006280 */ goto L_10006280;
L_10006246:;
  /* 10006246 mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 1000624a cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000624c je 0x10006260 */ if (ZF_) goto L_10006260;
  /* 1000624e mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 10006252 mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 10006256 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006257 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10006258 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006259 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 1000625b call 0x10005150 */ esp -= 4; M32(esp) = 0x10006260u; SAVEALL; F_10005150(c); ABI_CHECK(0x10005150u, 0x1000625bu); RETCHK(0x10006260u, 0x1000625bu); LOADALL;
L_10006260:;
  /* 10006260 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 10006262 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10006264 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10006266 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10006268u; SAVEALL; call_ind(c, t_); RETCHK(0x10006268u, 0x10006266u); LOADALL; }
  /* 10006268 jmp 0x10006280 */ goto L_10006280;
L_1000626a:;
  /* 1000626a mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 1000626e cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006270 je 0x10006280 */ if (ZF_) goto L_10006280;
  /* 10006272 mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 10006276 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006277 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006278 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006279 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
L_1000627b:;
  /* 1000627b call 0x10005150 */ esp -= 4; M32(esp) = 0x10006280u; SAVEALL; F_10005150(c); ABI_CHECK(0x10005150u, 0x1000627bu); RETCHK(0x10006280u, 0x1000627bu); LOADALL;
L_10006280:;
  /* 10006280 lea ecx, [esp + 0x14] */ ecx = (u32)((u32)(esp + 0x14u));
  /* 10006284 mov dword ptr [esp + 0x28], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0xffffffffu); }
  /* 1000628c call 0x10001640 */ esp -= 4; M32(esp) = 0x10006291u; SAVEALL; F_10001640(c); ABI_CHECK(0x10001640u, 0x1000628cu); RETCHK(0x10006291u, 0x1000628cu); LOADALL;
  /* 10006291 jmp 0x10006307 */ goto L_10006307;
L_10006293:;
  /* 10006293 lea ecx, [esp + 0x14] */ ecx = (u32)((u32)(esp + 0x14u));
  /* 10006297 mov dword ptr [esp + 0x28], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0xffffffffu); }
  /* 1000629f call 0x10001640 */ esp -= 4; M32(esp) = 0x100062a4u; SAVEALL; F_10001640(c); ABI_CHECK(0x10001640u, 0x1000629fu); RETCHK(0x100062a4u, 0x1000629fu); LOADALL;
  /* 100062a4 mov eax, edi */ { eax = (u32)(edi); }
  /* 100062a6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100062a7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100062a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100062a9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100062aa mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 100062ae mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 100062b5 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100062b8 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_100062bb:;
  /* 100062bb mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 100062bf cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100062c1 je 0x10006307 */ if (ZF_) goto L_10006307;
  /* 100062c3 mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 100062c7 mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 100062cb push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100062cc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 100062cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100062ce push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 100062d0 call 0x10005150 */ esp -= 4; M32(esp) = 0x100062d5u; SAVEALL; F_10005150(c); ABI_CHECK(0x10005150u, 0x100062d0u); RETCHK(0x100062d5u, 0x100062d0u); LOADALL;
  /* 100062d5 jmp 0x10006307 */ goto L_10006307;
L_100062d7:;
  /* 100062d7 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100062d9 je 0x10006307 */ if (ZF_) goto L_10006307;
  /* 100062db cmp byte ptr [eax + 0x34], bl */ { const u32 m_ = (u32)(eax + 0x34u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100062de jne 0x10006307 */ if (!ZF_) goto L_10006307;
  /* 100062e0 mov byte ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)(0x1u); }
  /* 100062e4 mov dword ptr [eax + 0x38], 4 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x4u); }
  /* 100062eb mov ecx, dword ptr [0x1000a0e4] */ { const u32 m_ = (u32)(0x1000a0e4u); ecx = (u32)(M32(m_)); }
  /* 100062f1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100062f2 lea ecx, [eax + 0x3c] */ ecx = (u32)((u32)(eax + 0x3cu));
  /* 100062f5 call 0x100069c0 */ esp -= 4; M32(esp) = 0x100062fau; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x100062f5u); RETCHK(0x100062fau, 0x100062f5u); LOADALL;
  /* 100062fa mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 100062fe or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006301 mov dword ptr [eax + 0x50], ecx */ { const u32 m_ = (u32)(eax + 0x50u); M32(m_) = (u32)(ecx); }
  /* 10006304 mov dword ptr [eax + 0x4c], ecx */ { const u32 m_ = (u32)(eax + 0x4cu); M32(m_) = (u32)(ecx); }
L_10006307:;
  /* 10006307 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 1000630b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000630c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000630d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000630e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10006310 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006311 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10006318 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000631b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10006320(CPU *c) {
  NATIVE_HOOK(0x10006320u) REGS; LOADALL;
L_10006320:;
  /* 10006320 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10006321 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006322 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006323 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006324 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006325 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10006327 call 0x10003440 */ esp -= 4; M32(esp) = 0x1000632cu; SAVEALL; F_10003440(c); ABI_CHECK(0x10003440u, 0x10006327u); RETCHK(0x1000632cu, 0x10006327u); LOADALL;
  /* 1000632c lea ebp, [esi + 0x20] */ ebp = (u32)((u32)(esi + 0x20u));
  /* 1000632f push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 10006334 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10006336 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 1000633a call 0x100069c0 */ esp -= 4; M32(esp) = 0x1000633fu; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x1000633au); RETCHK(0x1000633fu, 0x1000633au); LOADALL;
  /* 1000633f mov ebx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ebx = (u32)(M32(m_)); }
  /* 10006343 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10006347 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006348 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006349 call 0x10004fe0 */ esp -= 4; M32(esp) = 0x1000634eu; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x10006349u); RETCHK(0x1000634eu, 0x10006349u); LOADALL;
  /* 1000634e mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10006352 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006355 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006357 mov edi, eax */ { edi = (u32)(eax); }
  /* 10006359 je 0x1000636d */ if (ZF_) goto L_1000636d;
  /* 1000635b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1000635c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000635d call 0x10004eb0 */ esp -= 4; M32(esp) = 0x10006362u; SAVEALL; F_10004eb0(c); ABI_CHECK(0x10004eb0u, 0x1000635du); RETCHK(0x10006362u, 0x1000635du); LOADALL;
  /* 10006362 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10006364 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 10006367 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 1000636a mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_1000636d:;
  /* 1000636d test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000636f mov eax, 0x100081cc */ { eax = (u32)(0x100081ccu); }
  /* 10006374 je 0x10006399 */ if (ZF_) goto L_10006399;
  /* 10006376 cmp byte ptr [edi], 0 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006379 je 0x10006399 */ if (ZF_) goto L_10006399;
  /* 1000637b mov esi, edi */ { esi = (u32)(edi); }
  /* 1000637d sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1000637f nop */ ;
L_10006380:;
  /* 10006380 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006382 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006384 je 0x100063b1 */ if (ZF_) goto L_100063b1;
  /* 10006386 cmp byte ptr [esi + eax], dl */ { const u32 m_ = (u32)(esi + eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006389 jne 0x10006394 */ if (!ZF_) goto L_10006394;
  /* 1000638b mov dl, byte ptr [esi + eax + 1] */ { const u32 m_ = (u32)(esi + eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000638f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006390 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006392 jne 0x10006380 */ if (!ZF_) goto L_10006380;
L_10006394:;
  /* 10006394 cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006397 je 0x100063b1 */ if (ZF_) goto L_100063b1;
L_10006399:;
  /* 10006399 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1000639a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1000639b mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 1000639f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100063a0 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 100063a2 call 0x10005150 */ esp -= 4; M32(esp) = 0x100063a7u; SAVEALL; F_10005150(c); ABI_CHECK(0x10005150u, 0x100063a2u); RETCHK(0x100063a7u, 0x100063a2u); LOADALL;
  /* 100063a7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100063a8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100063a9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100063aa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 100063ac pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100063ad pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 100063ae ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_100063b1:;
  /* 100063b1 mov eax, 0x100081cc */ { eax = (u32)(0x100081ccu); }
  /* 100063b6 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 100063b9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_100063c0:;
  /* 100063c0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100063c2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100063c3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100063c5 jne 0x100063c0 */ if (!ZF_) goto L_100063c0;
  /* 100063c7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100063c8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100063ca push 0x100081c8 */ { u32 v_ = 0x100081c8u; esp -= 4; M32(esp) = v_; }
  /* 100063cf sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 100063d1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100063d3 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 100063d5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100063d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100063d7 call 0x10005b10 */ esp -= 4; M32(esp) = 0x100063dcu; SAVEALL; F_10005b10(c); ABI_CHECK(0x10005b10u, 0x100063d7u); RETCHK(0x100063dcu, 0x100063d7u); LOADALL;
  /* 100063dc add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100063df pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100063e0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100063e1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100063e2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100063e3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 100063e4 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_100063f0(CPU *c) {
  NATIVE_HOOK(0x100063f0u) REGS; LOADALL;
L_100063f0:;
  /* 100063f0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 100063f4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100063f5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100063f6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100063f7 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 100063fb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100063fc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100063fd mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 100063ff call 0x10004fe0 */ esp -= 4; M32(esp) = 0x10006404u; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x100063ffu); RETCHK(0x10006404u, 0x100063ffu); LOADALL;
  /* 10006404 mov esi, eax */ { esi = (u32)(eax); }
  /* 10006406 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006409 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000640b je 0x10006553 */ if (ZF_) goto L_10006553;
  /* 10006411 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006414 je 0x10006553 */ if (ZF_) goto L_10006553;
  /* 1000641a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000641b mov ebp, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebp = (u32)(M32(m_)); }
  /* 1000641f test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006421 je 0x10006438 */ if (ZF_) goto L_10006438;
  /* 10006423 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006424 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006425 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10006427 call 0x10004eb0 */ esp -= 4; M32(esp) = 0x1000642cu; SAVEALL; F_10004eb0(c); ABI_CHECK(0x10004eb0u, 0x10006427u); RETCHK(0x1000642cu, 0x10006427u); LOADALL;
  /* 1000642c mov ecx, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M32(m_)); }
  /* 1000642f mov dword ptr [ebx + 4], ecx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10006432 mov edx, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10006435 mov dword ptr [ebx + 8], edx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(edx); }
L_10006438:;
  /* 10006438 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006439 lea eax, [ebx + 0x14] */ eax = (u32)((u32)(ebx + 0x14u));
  /* 1000643c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000643d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000643e call 0x10005240 */ esp -= 4; M32(esp) = 0x10006443u; SAVEALL; F_10005240(c); ABI_CHECK(0x10005240u, 0x1000643eu); RETCHK(0x10006443u, 0x1000643eu); LOADALL;
  /* 10006443 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006446 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006448 je 0x1000651b */ if (ZF_) goto L_1000651b;
  /* 1000644e cmp byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006451 je 0x1000651b */ if (ZF_) goto L_1000651b;
  /* 10006457 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006458 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006459 call 0x10004fe0 */ esp -= 4; M32(esp) = 0x1000645eu; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x10006459u); RETCHK(0x1000645eu, 0x10006459u); LOADALL;
  /* 1000645e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006461 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006463 je 0x10006537 */ if (ZF_) goto L_10006537;
  /* 10006469 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000646b test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000646d je 0x10006537 */ if (ZF_) goto L_10006537;
  /* 10006473 cmp cl, 0x3d */ { u32 a_ = (ecx & 0xffu), b_ = 0x3du; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006476 jne 0x10006537 */ if (!ZF_) goto L_10006537;
  /* 1000647c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1000647d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000647e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000647f call 0x10004fe0 */ esp -= 4; M32(esp) = 0x10006484u; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x1000647fu); RETCHK(0x10006484u, 0x1000647fu); LOADALL;
  /* 10006484 mov esi, eax */ { esi = (u32)(eax); }
  /* 10006486 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006489 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000648b je 0x1000651b */ if (ZF_) goto L_1000651b;
  /* 10006491 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006493 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006495 je 0x1000651b */ if (ZF_) goto L_1000651b;
  /* 1000649b cmp al, 0x27 */ { u32 a_ = (eax & 0xffu), b_ = 0x27u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000649d jne 0x100064c0 */ if (!ZF_) goto L_100064c0;
  /* 1000649f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100064a0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100064a2 push 0x10008300 */ { u32 v_ = 0x10008300u; esp -= 4; M32(esp) = v_; }
L_100064a7:;
  /* 100064a7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100064a9 add ebx, 0x20 */ { u32 a_ = ebx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 100064ac push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100064ad inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100064ae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100064af call 0x10005b10 */ esp -= 4; M32(esp) = 0x100064b4u; SAVEALL; F_10005b10(c); ABI_CHECK(0x10005b10u, 0x100064afu); RETCHK(0x100064b4u, 0x100064afu); LOADALL;
  /* 100064b4 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100064b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100064b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100064b9 mov esi, eax */ { esi = (u32)(eax); }
  /* 100064bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100064bc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100064bd ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_100064c0:;
  /* 100064c0 cmp al, 0x22 */ { u32 a_ = (eax & 0xffu), b_ = 0x22u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100064c2 jne 0x100064ce */ if (!ZF_) goto L_100064ce;
  /* 100064c4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100064c5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100064c7 push 0x100082fc */ { u32 v_ = 0x100082fcu; esp -= 4; M32(esp) = v_; }
  /* 100064cc jmp 0x100064a7 */ goto L_100064a7;
L_100064ce:;
  /* 100064ce lea edi, [ebx + 0x20] */ edi = (u32)((u32)(ebx + 0x20u));
  /* 100064d1 push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 100064d6 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 100064d8 call 0x100069c0 */ esp -= 4; M32(esp) = 0x100064ddu; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x100064d8u); RETCHK(0x100064ddu, 0x100064d8u); LOADALL;
  /* 100064dd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_100064e0:;
  /* 100064e0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 100064e2 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100064e4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100064e6 je 0x10006512 */ if (ZF_) goto L_10006512;
  /* 100064e8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100064e9 call 0x10004d60 */ esp -= 4; M32(esp) = 0x100064eeu; SAVEALL; F_10004d60(c); ABI_CHECK(0x10004d60u, 0x100064e9u); RETCHK(0x100064eeu, 0x100064e9u); LOADALL;
  /* 100064ee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100064f1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100064f3 jne 0x10006512 */ if (!ZF_) goto L_10006512;
  /* 100064f5 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100064f7 cmp al, 0xa */ { u32 a_ = (eax & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100064f9 je 0x10006512 */ if (ZF_) goto L_10006512;
  /* 100064fb cmp al, 0xd */ { u32 a_ = (eax & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100064fd je 0x10006512 */ if (ZF_) goto L_10006512;
  /* 100064ff cmp al, 0x2f */ { u32 a_ = (eax & 0xffu), b_ = 0x2fu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006501 je 0x10006512 */ if (ZF_) goto L_10006512;
  /* 10006503 cmp al, 0x3e */ { u32 a_ = (eax & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006505 je 0x10006512 */ if (ZF_) goto L_10006512;
  /* 10006507 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006508 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 1000650a call 0x100037d0 */ esp -= 4; M32(esp) = 0x1000650fu; SAVEALL; F_100037d0(c); ABI_CHECK(0x100037d0u, 0x1000650au); RETCHK(0x1000650fu, 0x1000650au); LOADALL;
  /* 1000650f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006510 jne 0x100064e0 */ if (!ZF_) goto L_100064e0;
L_10006512:;
  /* 10006512 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10006513 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006514 mov eax, esi */ { eax = (u32)(esi); }
  /* 10006516 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006517 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006518 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_1000651b:;
  /* 1000651b mov ebx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); ebx = (u32)(M32(m_)); }
  /* 1000651e test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006520 je 0x1000652e */ if (ZF_) goto L_1000652e;
  /* 10006522 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006523 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006524 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006525 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 10006527 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10006529 call 0x10005150 */ esp -= 4; M32(esp) = 0x1000652eu; SAVEALL; F_10005150(c); ABI_CHECK(0x10005150u, 0x10006529u); RETCHK(0x1000652eu, 0x10006529u); LOADALL;
L_1000652e:;
  /* 1000652e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000652f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006530 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006531 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10006533 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006534 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10006537:;
  /* 10006537 mov ebx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); ebx = (u32)(M32(m_)); }
  /* 1000653a test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000653c je 0x1000652e */ if (ZF_) goto L_1000652e;
  /* 1000653e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000653f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006540 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006541 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 10006543 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10006545 call 0x10005150 */ esp -= 4; M32(esp) = 0x1000654au; SAVEALL; F_10005150(c); ABI_CHECK(0x10005150u, 0x10006545u); RETCHK(0x1000654au, 0x10006545u); LOADALL;
  /* 1000654a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000654b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000654c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000654d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1000654f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006550 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_10006553:;
  /* 10006553 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006554 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006555 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10006557 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006558 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10006560(CPU *c) {
  NATIVE_HOOK(0x10006560u) REGS; LOADALL;
L_10006560:;
  /* 10006560 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006561 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006562 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006563 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10006565 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006566 lea edi, [esi + 0x20] */ edi = (u32)((u32)(esi + 0x20u));
  /* 10006569 push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 1000656e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10006570 call 0x100069c0 */ esp -= 4; M32(esp) = 0x10006575u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10006570u); RETCHK(0x10006575u, 0x10006570u); LOADALL;
  /* 10006575 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 10006579 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000657b mov ebx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ebx = (u32)(M32(m_)); }
  /* 1000657f mov ebp, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebp = (u32)(M32(m_)); }
  /* 10006583 je 0x10006597 */ if (ZF_) goto L_10006597;
  /* 10006585 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006586 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006587 call 0x10004eb0 */ esp -= 4; M32(esp) = 0x1000658cu; SAVEALL; F_10004eb0(c); ABI_CHECK(0x10004eb0u, 0x10006587u); RETCHK(0x1000658cu, 0x10006587u); LOADALL;
  /* 1000658c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 1000658e mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 10006591 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10006594 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
L_10006597:;
  /* 10006597 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006598 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1000659a push 0x10008220 */ { u32 v_ = 0x10008220u; esp -= 4; M32(esp) = v_; }
  /* 1000659f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 100065a1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100065a2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100065a3 call 0x10005b10 */ esp -= 4; M32(esp) = 0x100065a8u; SAVEALL; F_10005b10(c); ABI_CHECK(0x10005b10u, 0x100065a3u); RETCHK(0x100065a8u, 0x100065a3u); LOADALL;
  /* 100065a8 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100065ab test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100065ad pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100065ae pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100065af pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100065b0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100065b1 je 0x100065b7 */ if (ZF_) goto L_100065b7;
  /* 100065b3 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 100065b4 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_100065b7:;
  /* 100065b7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 100065b9 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_100065c0(CPU *c) {
  NATIVE_HOOK(0x100065c0u) REGS; LOADALL;
L_100065c0:;
  /* 100065c0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 100065c2 push 0x1000764b */ { u32 v_ = 0x1000764bu; esp -= 4; M32(esp) = v_; }
  /* 100065c7 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 100065cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100065ce mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 100065d5 sub esp, 0xac */ { u32 a_ = esp, b_ = 0xacu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100065db mov eax, dword ptr [esp + 0xbc] */ { const u32 m_ = (u32)(esp + 0xbcu); eax = (u32)(M32(m_)); }
  /* 100065e2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100065e3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100065e4 mov ebp, dword ptr [esp + 0xcc] */ { const u32 m_ = (u32)(esp + 0xccu); ebp = (u32)(M32(m_)); }
  /* 100065eb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100065ec push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100065ed push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100065ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100065ef mov edi, ecx */ { edi = (u32)(ecx); }
  /* 100065f1 call 0x10004fe0 */ esp -= 4; M32(esp) = 0x100065f6u; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x100065f1u); RETCHK(0x100065f6u, 0x100065f1u); LOADALL;
  /* 100065f6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100065f9 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 100065fb mov esi, eax */ { esi = (u32)(eax); }
  /* 100065fd call 0x10003440 */ esp -= 4; M32(esp) = 0x10006602u; SAVEALL; F_10003440(c); ABI_CHECK(0x10003440u, 0x100065fdu); RETCHK(0x10006602u, 0x100065fdu); LOADALL;
  /* 10006602 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10006604 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006606 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 1000660a je 0x1000690c */ if (ZF_) goto L_1000690c;
  /* 10006610 cmp byte ptr [esi], bl */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006612 je 0x1000690c */ if (ZF_) goto L_1000690c;
  /* 10006618 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006619 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1000661b push 0x1000810c */ { u32 v_ = 0x1000810cu; esp -= 4; M32(esp) = v_; }
  /* 10006620 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006621 call 0x100050a0 */ esp -= 4; M32(esp) = 0x10006626u; SAVEALL; F_100050a0(c); ABI_CHECK(0x100050a0u, 0x10006621u); RETCHK(0x10006626u, 0x10006621u); LOADALL;
  /* 10006626 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006629 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000662b je 0x10006908 */ if (ZF_) goto L_10006908;
  /* 10006631 mov ecx, dword ptr [esp + 0xd0] */ { const u32 m_ = (u32)(esp + 0xd0u); ecx = (u32)(M32(m_)); }
  /* 10006638 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000663a je 0x10006650 */ if (ZF_) goto L_10006650;
  /* 1000663c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000663d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000663e call 0x10004eb0 */ esp -= 4; M32(esp) = 0x10006643u; SAVEALL; F_10004eb0(c); ABI_CHECK(0x10004eb0u, 0x1000663eu); RETCHK(0x10006643u, 0x1000663eu); LOADALL;
  /* 10006643 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10006645 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10006647 mov dword ptr [edi + 4], ecx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 1000664a mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 1000664d mov dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edx); }
L_10006650:;
  /* 10006650 lea ecx, [edi + 0x34] */ ecx = (u32)((u32)(edi + 0x34u));
  /* 10006653 push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 10006658 add esi, 5 */ { u32 a_ = esi, b_ = 0x5u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1000665b mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 1000665f call 0x100069c0 */ esp -= 4; M32(esp) = 0x10006664u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x1000665fu); RETCHK(0x10006664u, 0x1000665fu); LOADALL;
  /* 10006664 lea ecx, [edi + 0x40] */ ecx = (u32)((u32)(edi + 0x40u));
  /* 10006667 push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 1000666c mov dword ptr [esp + 0x20], ecx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ecx); }
  /* 10006670 call 0x100069c0 */ esp -= 4; M32(esp) = 0x10006675u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10006670u); RETCHK(0x10006675u, 0x10006670u); LOADALL;
  /* 10006675 lea ecx, [edi + 0x4c] */ ecx = (u32)((u32)(edi + 0x4cu));
  /* 10006678 push 0x10008158 */ { u32 v_ = 0x10008158u; esp -= 4; M32(esp) = v_; }
  /* 1000667d mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 10006681 call 0x100069c0 */ esp -= 4; M32(esp) = 0x10006686u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x10006681u); RETCHK(0x10006686u, 0x10006681u); LOADALL;
  /* 10006686 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006688 je 0x1000693c */ if (ZF_) goto L_1000693c;
  /* 1000668e or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_10006691:;
  /* 10006691 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006693 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006695 je 0x1000693c */ if (ZF_) goto L_1000693c;
  /* 1000669b cmp al, 0x3e */ { u32 a_ = (eax & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000669d je 0x10006903 */ if (ZF_) goto L_10006903;
  /* 100066a3 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100066a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100066a5 call 0x10004fe0 */ esp -= 4; M32(esp) = 0x100066aau; SAVEALL; F_10004fe0(c); ABI_CHECK(0x10004fe0u, 0x100066a5u); RETCHK(0x100066aau, 0x100066a5u); LOADALL;
  /* 100066aa push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100066ab push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 100066ad mov esi, eax */ { esi = (u32)(eax); }
  /* 100066af push 0x1000878c */ { u32 v_ = 0x1000878cu; esp -= 4; M32(esp) = v_; }
  /* 100066b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100066b5 call 0x100050a0 */ esp -= 4; M32(esp) = 0x100066bau; SAVEALL; F_100050a0(c); ABI_CHECK(0x100050a0u, 0x100066b5u); RETCHK(0x100066bau, 0x100066b5u); LOADALL;
  /* 100066ba add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100066bd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100066bf je 0x1000674f */ if (ZF_) goto L_1000674f;
  /* 100066c5 mov dword ptr [esp + 0x28], edi */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(edi); }
  /* 100066c9 mov dword ptr [esp + 0x24], edi */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(edi); }
  /* 100066cd mov dword ptr [esp + 0x2c], ebx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 100066d1 mov dword ptr [esp + 0x20], 0x10008224 */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(0x10008224u); }
  /* 100066d9 mov dword ptr [esp + 0x38], ebx */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(ebx); }
  /* 100066dd mov dword ptr [esp + 0x34], ebx */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(ebx); }
  /* 100066e1 mov dword ptr [esp + 0x3c], ebx */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(ebx); }
  /* 100066e5 mov dword ptr [esp + 0x44], ebx */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(ebx); }
  /* 100066e9 mov dword ptr [esp + 0x40], ebx */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(ebx); }
  /* 100066ed mov dword ptr [esp + 0x48], ebx */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(ebx); }
  /* 100066f1 mov dword ptr [esp + 0x30], ebx */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(ebx); }
  /* 100066f5 mov dword ptr [esp + 0x50], ebx */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(ebx); }
  /* 100066f9 mov dword ptr [esp + 0x4c], ebx */ { const u32 m_ = (u32)(esp + 0x4cu); M32(m_) = (u32)(ebx); }
  /* 100066fd mov eax, dword ptr [esp + 0xd0] */ { const u32 m_ = (u32)(esp + 0xd0u); eax = (u32)(M32(m_)); }
  /* 10006704 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006705 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006706 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006707 lea ecx, [esp + 0x2c] */ ecx = (u32)((u32)(esp + 0x2cu));
  /* 1000670b mov dword ptr [esp + 0xd0], ebx */ { const u32 m_ = (u32)(esp + 0xd0u); M32(m_) = (u32)(ebx); }
  /* 10006712 call 0x100063f0 */ esp -= 4; M32(esp) = 0x10006717u; SAVEALL; F_100063f0(c); ABI_CHECK(0x100063f0u, 0x10006712u); RETCHK(0x10006717u, 0x10006712u); LOADALL;
  /* 10006717 mov esi, eax */ { esi = (u32)(eax); }
  /* 10006719 cmp dword ptr [esp + 0x44], ebx */ { const u32 m_ = (u32)(esp + 0x44u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000671d mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 10006721 jne 0x10006728 */ if (!ZF_) goto L_10006728;
  /* 10006723 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_10006728:;
  /* 10006728 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 1000672c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000672d call 0x100069c0 */ esp -= 4; M32(esp) = 0x10006732u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x1000672du); RETCHK(0x10006732u, 0x1000672du); LOADALL;
  /* 10006732 mov dword ptr [esp + 0xc4], edi */ { const u32 m_ = (u32)(esp + 0xc4u); M32(m_) = (u32)(edi); }
  /* 10006739 lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
L_1000673d:;
  /* 1000673d call 0x100038b0 */ esp -= 4; M32(esp) = 0x10006742u; SAVEALL; F_100038b0(c); ABI_CHECK(0x100038b0u, 0x1000673du); RETCHK(0x10006742u, 0x1000673du); LOADALL;
L_10006742:;
  /* 10006742 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006744 jne 0x10006691 */ if (!ZF_) goto L_10006691;
  /* 1000674a jmp 0x1000693c */ goto L_1000693c;
L_1000674f:;
  /* 1000674f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006750 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10006752 push 0x10008780 */ { u32 v_ = 0x10008780u; esp -= 4; M32(esp) = v_; }
  /* 10006757 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006758 call 0x100050a0 */ esp -= 4; M32(esp) = 0x1000675du; SAVEALL; F_100050a0(c); ABI_CHECK(0x100050a0u, 0x10006758u); RETCHK(0x1000675du, 0x10006758u); LOADALL;
  /* 1000675d add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006760 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006762 je 0x100067ef */ if (ZF_) goto L_100067ef;
  /* 10006768 mov dword ptr [esp + 0x5c], edi */ { const u32 m_ = (u32)(esp + 0x5cu); M32(m_) = (u32)(edi); }
  /* 1000676c mov dword ptr [esp + 0x58], edi */ { const u32 m_ = (u32)(esp + 0x58u); M32(m_) = (u32)(edi); }
  /* 10006770 mov dword ptr [esp + 0x60], ebx */ { const u32 m_ = (u32)(esp + 0x60u); M32(m_) = (u32)(ebx); }
  /* 10006774 mov dword ptr [esp + 0x54], 0x10008224 */ { const u32 m_ = (u32)(esp + 0x54u); M32(m_) = (u32)(0x10008224u); }
  /* 1000677c mov dword ptr [esp + 0x6c], ebx */ { const u32 m_ = (u32)(esp + 0x6cu); M32(m_) = (u32)(ebx); }
  /* 10006780 mov dword ptr [esp + 0x68], ebx */ { const u32 m_ = (u32)(esp + 0x68u); M32(m_) = (u32)(ebx); }
  /* 10006784 mov dword ptr [esp + 0x70], ebx */ { const u32 m_ = (u32)(esp + 0x70u); M32(m_) = (u32)(ebx); }
  /* 10006788 mov dword ptr [esp + 0x78], ebx */ { const u32 m_ = (u32)(esp + 0x78u); M32(m_) = (u32)(ebx); }
  /* 1000678c mov dword ptr [esp + 0x74], ebx */ { const u32 m_ = (u32)(esp + 0x74u); M32(m_) = (u32)(ebx); }
  /* 10006790 mov dword ptr [esp + 0x7c], ebx */ { const u32 m_ = (u32)(esp + 0x7cu); M32(m_) = (u32)(ebx); }
  /* 10006794 mov dword ptr [esp + 0x64], ebx */ { const u32 m_ = (u32)(esp + 0x64u); M32(m_) = (u32)(ebx); }
  /* 10006798 mov dword ptr [esp + 0x84], ebx */ { const u32 m_ = (u32)(esp + 0x84u); M32(m_) = (u32)(ebx); }
  /* 1000679f mov dword ptr [esp + 0x80], ebx */ { const u32 m_ = (u32)(esp + 0x80u); M32(m_) = (u32)(ebx); }
  /* 100067a6 mov ecx, dword ptr [esp + 0xd0] */ { const u32 m_ = (u32)(esp + 0xd0u); ecx = (u32)(M32(m_)); }
  /* 100067ad push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100067ae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100067af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100067b0 lea ecx, [esp + 0x60] */ ecx = (u32)((u32)(esp + 0x60u));
  /* 100067b4 mov dword ptr [esp + 0xd0], 1 */ { const u32 m_ = (u32)(esp + 0xd0u); M32(m_) = (u32)(0x1u); }
  /* 100067bf call 0x100063f0 */ esp -= 4; M32(esp) = 0x100067c4u; SAVEALL; F_100063f0(c); ABI_CHECK(0x100063f0u, 0x100067bfu); RETCHK(0x100067c4u, 0x100067bfu); LOADALL;
  /* 100067c4 mov esi, eax */ { esi = (u32)(eax); }
  /* 100067c6 cmp dword ptr [esp + 0x78], ebx */ { const u32 m_ = (u32)(esp + 0x78u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100067ca mov eax, dword ptr [esp + 0x74] */ { const u32 m_ = (u32)(esp + 0x74u); eax = (u32)(M32(m_)); }
  /* 100067ce jne 0x100067d5 */ if (!ZF_) goto L_100067d5;
  /* 100067d0 mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_100067d5:;
  /* 100067d5 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 100067d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100067da call 0x100069c0 */ esp -= 4; M32(esp) = 0x100067dfu; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x100067dau); RETCHK(0x100067dfu, 0x100067dau); LOADALL;
  /* 100067df mov dword ptr [esp + 0xc4], edi */ { const u32 m_ = (u32)(esp + 0xc4u); M32(m_) = (u32)(edi); }
  /* 100067e6 lea ecx, [esp + 0x54] */ ecx = (u32)((u32)(esp + 0x54u));
  /* 100067ea jmp 0x1000673d */ goto L_1000673d;
L_100067ef:;
  /* 100067ef push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100067f0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 100067f2 push 0x10008774 */ { u32 v_ = 0x10008774u; esp -= 4; M32(esp) = v_; }
  /* 100067f7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100067f8 call 0x100050a0 */ esp -= 4; M32(esp) = 0x100067fdu; SAVEALL; F_100050a0(c); ABI_CHECK(0x100050a0u, 0x100067f8u); RETCHK(0x100067fdu, 0x100067f8u); LOADALL;
  /* 100067fd add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006800 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006802 je 0x100068bc */ if (ZF_) goto L_100068bc;
  /* 10006808 mov dword ptr [esp + 0x90], edi */ { const u32 m_ = (u32)(esp + 0x90u); M32(m_) = (u32)(edi); }
  /* 1000680f mov dword ptr [esp + 0x8c], edi */ { const u32 m_ = (u32)(esp + 0x8cu); M32(m_) = (u32)(edi); }
  /* 10006816 mov dword ptr [esp + 0x94], ebx */ { const u32 m_ = (u32)(esp + 0x94u); M32(m_) = (u32)(ebx); }
  /* 1000681d mov dword ptr [esp + 0x88], 0x10008224 */ { const u32 m_ = (u32)(esp + 0x88u); M32(m_) = (u32)(0x10008224u); }
  /* 10006828 mov dword ptr [esp + 0xa0], ebx */ { const u32 m_ = (u32)(esp + 0xa0u); M32(m_) = (u32)(ebx); }
  /* 1000682f mov dword ptr [esp + 0x9c], ebx */ { const u32 m_ = (u32)(esp + 0x9cu); M32(m_) = (u32)(ebx); }
  /* 10006836 mov dword ptr [esp + 0xa4], ebx */ { const u32 m_ = (u32)(esp + 0xa4u); M32(m_) = (u32)(ebx); }
  /* 1000683d mov dword ptr [esp + 0xac], ebx */ { const u32 m_ = (u32)(esp + 0xacu); M32(m_) = (u32)(ebx); }
  /* 10006844 mov dword ptr [esp + 0xa8], ebx */ { const u32 m_ = (u32)(esp + 0xa8u); M32(m_) = (u32)(ebx); }
  /* 1000684b mov dword ptr [esp + 0xb0], ebx */ { const u32 m_ = (u32)(esp + 0xb0u); M32(m_) = (u32)(ebx); }
  /* 10006852 mov dword ptr [esp + 0x98], ebx */ { const u32 m_ = (u32)(esp + 0x98u); M32(m_) = (u32)(ebx); }
  /* 10006859 mov dword ptr [esp + 0xb8], ebx */ { const u32 m_ = (u32)(esp + 0xb8u); M32(m_) = (u32)(ebx); }
  /* 10006860 mov dword ptr [esp + 0xb4], ebx */ { const u32 m_ = (u32)(esp + 0xb4u); M32(m_) = (u32)(ebx); }
  /* 10006867 mov edx, dword ptr [esp + 0xd0] */ { const u32 m_ = (u32)(esp + 0xd0u); edx = (u32)(M32(m_)); }
  /* 1000686e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1000686f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10006870 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006871 lea ecx, [esp + 0x94] */ ecx = (u32)((u32)(esp + 0x94u));
  /* 10006878 mov dword ptr [esp + 0xd0], 2 */ { const u32 m_ = (u32)(esp + 0xd0u); M32(m_) = (u32)(0x2u); }
  /* 10006883 call 0x100063f0 */ esp -= 4; M32(esp) = 0x10006888u; SAVEALL; F_100063f0(c); ABI_CHECK(0x100063f0u, 0x10006883u); RETCHK(0x10006888u, 0x10006883u); LOADALL;
  /* 10006888 mov esi, eax */ { esi = (u32)(eax); }
  /* 1000688a cmp dword ptr [esp + 0xac], ebx */ { const u32 m_ = (u32)(esp + 0xacu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006891 mov eax, dword ptr [esp + 0xa8] */ { const u32 m_ = (u32)(esp + 0xa8u); eax = (u32)(M32(m_)); }
  /* 10006898 jne 0x1000689f */ if (!ZF_) goto L_1000689f;
  /* 1000689a mov eax, 0x10008158 */ { eax = (u32)(0x10008158u); }
L_1000689f:;
  /* 1000689f mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 100068a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100068a4 call 0x100069c0 */ esp -= 4; M32(esp) = 0x100068a9u; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x100068a4u); RETCHK(0x100068a9u, 0x100068a4u); LOADALL;
  /* 100068a9 mov dword ptr [esp + 0xc4], edi */ { const u32 m_ = (u32)(esp + 0xc4u); M32(m_) = (u32)(edi); }
  /* 100068b0 lea ecx, [esp + 0x88] */ ecx = (u32)((u32)(esp + 0x88u));
  /* 100068b7 jmp 0x1000673d */ goto L_1000673d;
L_100068bc:;
  /* 100068bc cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100068be je 0x1000693c */ if (ZF_) goto L_1000693c;
L_100068c0:;
  /* 100068c0 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100068c2 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100068c4 mov byte ptr [esp + 0x13], al */ { const u32 m_ = (u32)(esp + 0x13u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 100068c8 je 0x10006742 */ if (ZF_) goto L_10006742;
  /* 100068ce cmp al, 0x3e */ { u32 a_ = (eax & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100068d0 je 0x10006742 */ if (ZF_) goto L_10006742;
  /* 100068d6 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 100068d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100068da call 0x10007044 */ esp -= 4; M32(esp) = 0x100068dfu; SAVEALL; F_10007044(c); ABI_CHECK(0x10007044u, 0x100068dau); RETCHK(0x100068dfu, 0x100068dau); LOADALL;
  /* 100068df add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100068e2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100068e4 jne 0x10006742 */ if (!ZF_) goto L_10006742;
  /* 100068ea mov al, byte ptr [esp + 0x13] */ { const u32 m_ = (u32)(esp + 0x13u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100068ee cmp al, 0xa */ { u32 a_ = (eax & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100068f0 je 0x10006742 */ if (ZF_) goto L_10006742;
  /* 100068f6 cmp al, 0xd */ { u32 a_ = (eax & 0xffu), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 100068f8 je 0x10006742 */ if (ZF_) goto L_10006742;
  /* 100068fe inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100068ff jne 0x100068c0 */ if (!ZF_) goto L_100068c0;
  /* 10006901 jmp 0x1000693c */ goto L_1000693c;
L_10006903:;
  /* 10006903 lea eax, [esi + 1] */ eax = (u32)((u32)(esi + 0x1u));
  /* 10006906 jmp 0x1000693e */ goto L_1000693e;
L_10006908:;
  /* 10006908 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
L_1000690c:;
  /* 1000690c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000690e je 0x1000693c */ if (ZF_) goto L_1000693c;
  /* 10006910 cmp byte ptr [eax + 0x34], bl */ { const u32 m_ = (u32)(eax + 0x34u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006913 jne 0x1000693c */ if (!ZF_) goto L_1000693c;
  /* 10006915 mov byte ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)(0x1u); }
  /* 10006919 mov dword ptr [eax + 0x38], 0xc */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0xcu); }
  /* 10006920 mov ecx, dword ptr [0x1000a104] */ { const u32 m_ = (u32)(0x1000a104u); ecx = (u32)(M32(m_)); }
  /* 10006926 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10006927 lea ecx, [eax + 0x3c] */ ecx = (u32)((u32)(eax + 0x3cu));
  /* 1000692a call 0x100069c0 */ esp -= 4; M32(esp) = 0x1000692fu; SAVEALL; F_100069c0(c); ABI_CHECK(0x100069c0u, 0x1000692au); RETCHK(0x1000692fu, 0x1000692au); LOADALL;
  /* 1000692f mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10006933 or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10006936 mov dword ptr [eax + 0x50], edi */ { const u32 m_ = (u32)(eax + 0x50u); M32(m_) = (u32)(edi); }
  /* 10006939 mov dword ptr [eax + 0x4c], edi */ { const u32 m_ = (u32)(eax + 0x4cu); M32(m_) = (u32)(edi); }
L_1000693c:;
  /* 1000693c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_1000693e:;
  /* 1000693e mov ecx, dword ptr [esp + 0xbc] */ { const u32 m_ = (u32)(esp + 0xbcu); ecx = (u32)(M32(m_)); }
  /* 10006945 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006946 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006947 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10006948 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006949 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10006950 add esp, 0xb8 */ { u32 a_ = esp, b_ = 0xb8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006956 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10006960(CPU *c) {
  NATIVE_HOOK(0x10006960u) REGS; LOADALL;
L_10006960:;
  /* 10006960 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006961 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006962 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006963 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10006967 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10006969 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000696b mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 1000696d jne 0x10006980 */ if (!ZF_) goto L_10006980;
  /* 1000696f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006970 mov dword ptr [ebp + 4], ebx */ { const u32 m_ = (u32)(ebp + 0x4u); M32(m_) = (u32)(ebx); }
  /* 10006973 mov dword ptr [ebp], ebx */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(ebx); }
  /* 10006976 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 10006979 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 1000697b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000697c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1000697d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10006980:;
  /* 10006980 mov eax, esi */ { eax = (u32)(esi); }
  /* 10006982 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_10006985:;
  /* 10006985 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006987 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006988 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 1000698a jne 0x10006985 */ if (!ZF_) goto L_10006985;
  /* 1000698c sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1000698e lea ebx, [eax + 1] */ ebx = (u32)((u32)(eax + 0x1u));
  /* 10006991 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006992 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006993 call 0x10006e4c */ esp -= 4; M32(esp) = 0x10006998u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x10006993u); RETCHK(0x10006998u, 0x10006993u); LOADALL;
  /* 10006998 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 1000699a mov edx, ecx */ { edx = (u32)(ecx); }
  /* 1000699c shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 1000699f mov edi, eax */ { edi = (u32)(eax); }
  /* 100069a1 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 100069a3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100069a6 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 100069a8 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 100069ab rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 100069ad mov dword ptr [ebp + 4], ebx */ { const u32 m_ = (u32)(ebp + 0x4u); M32(m_) = (u32)(ebx); }
  /* 100069b0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100069b1 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 100069b2 mov dword ptr [ebp], eax */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(eax); }
  /* 100069b5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100069b6 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 100069b9 mov eax, ebp */ { eax = (u32)(ebp); }
  /* 100069bb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100069bc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100069bd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_100069c0(CPU *c) {
  NATIVE_HOOK(0x100069c0u) REGS; LOADALL;
L_100069c0:;
  /* 100069c0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100069c1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100069c2 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 100069c6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100069c7 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 100069c9 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100069cb mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 100069cd jne 0x100069ec */ if (!ZF_) goto L_100069ec;
  /* 100069cf mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 100069d1 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100069d3 je 0x100069de */ if (ZF_) goto L_100069de;
  /* 100069d5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100069d6 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100069dbu; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100069d6u); RETCHK(0x100069dbu, 0x100069d6u); LOADALL;
  /* 100069db add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_100069de:;
  /* 100069de mov dword ptr [ebx], edi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edi); }
  /* 100069e0 mov dword ptr [ebx + 4], edi */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(edi); }
  /* 100069e3 mov dword ptr [ebx + 8], edi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(edi); }
  /* 100069e6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100069e7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100069e8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100069e9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_100069ec:;
  /* 100069ec mov eax, esi */ { eax = (u32)(esi); }
  /* 100069ee lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_100069f1:;
  /* 100069f1 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100069f3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 100069f4 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100069f6 jne 0x100069f1 */ if (!ZF_) goto L_100069f1;
  /* 100069f8 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 100069fa push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100069fb lea ebp, [eax + 1] */ ebp = (u32)((u32)(eax + 0x1u));
  /* 100069fe push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100069ff call 0x10006e4c */ esp -= 4; M32(esp) = 0x10006a04u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x100069ffu); RETCHK(0x10006a04u, 0x100069ffu); LOADALL;
  /* 10006a04 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10006a06 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10006a08 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10006a0b mov edi, eax */ { edi = (u32)(eax); }
  /* 10006a0d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006a0f mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10006a11 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006a14 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006a16 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 10006a18 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006a1b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006a1d mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 10006a21 je 0x10006a30 */ if (ZF_) goto L_10006a30;
  /* 10006a23 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10006a24 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10006a29u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10006a24u); RETCHK(0x10006a29u, 0x10006a24u); LOADALL;
  /* 10006a29 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10006a2d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10006a30:;
  /* 10006a30 mov dword ptr [ebx + 4], ebp */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ebp); }
  /* 10006a33 dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10006a34 mov dword ptr [ebx + 8], ebp */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ebp); }
  /* 10006a37 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10006a38 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006a39 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006a3a mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 10006a3c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006a3d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10006a40(CPU *c) {
  NATIVE_HOOK(0x10006a40u) REGS; LOADALL;
L_10006a40:;
  /* 10006a40 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006a41 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006a42 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006a43 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10006a47 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10006a4a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006a4b xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10006a4d cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006a4f mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10006a51 je 0x10006a5a */ if (ZF_) goto L_10006a5a;
  /* 10006a53 mov ebp, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebp = (u32)(M32(m_)); }
  /* 10006a56 cmp ebp, edi */ { u32 a_ = ebp, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006a58 jne 0x10006a78 */ if (!ZF_) goto L_10006a78;
L_10006a5a:;
  /* 10006a5a mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10006a5c cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006a5e je 0x10006a69 */ if (ZF_) goto L_10006a69;
  /* 10006a60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006a61 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10006a66u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10006a61u); RETCHK(0x10006a66u, 0x10006a61u); LOADALL;
  /* 10006a66 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10006a69:;
  /* 10006a69 mov dword ptr [ebx], edi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edi); }
  /* 10006a6b mov dword ptr [ebx + 4], edi */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(edi); }
  /* 10006a6e mov dword ptr [ebx + 8], edi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(edi); }
  /* 10006a71 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006a72 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006a73 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10006a74 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006a75 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10006a78:;
  /* 10006a78 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006a79 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006a7a call 0x10006e4c */ esp -= 4; M32(esp) = 0x10006a7fu; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x10006a7au); RETCHK(0x10006a7fu, 0x10006a7au); LOADALL;
  /* 10006a7f mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10006a82 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006a85 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006a87 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 10006a8b je 0x10006a91 */ if (ZF_) goto L_10006a91;
  /* 10006a8d mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10006a8f jmp 0x10006a96 */ goto L_10006a96;
L_10006a91:;
  /* 10006a91 mov esi, 0x10008158 */ { esi = (u32)(0x10008158u); }
L_10006a96:;
  /* 10006a96 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10006a98 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10006a9a shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10006a9d mov edi, eax */ { edi = (u32)(eax); }
  /* 10006a9f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006aa1 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10006aa3 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006aa6 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006aa8 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 10006aaa test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006aac je 0x10006abb */ if (ZF_) goto L_10006abb;
  /* 10006aae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10006aaf call 0x10006e46 */ esp -= 4; M32(esp) = 0x10006ab4u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10006aafu); RETCHK(0x10006ab4u, 0x10006aafu); LOADALL;
  /* 10006ab4 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10006ab8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10006abb:;
  /* 10006abb mov dword ptr [ebx + 4], ebp */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ebp); }
  /* 10006abe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006abf dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10006ac0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006ac1 mov dword ptr [ebx + 8], ebp */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ebp); }
  /* 10006ac4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10006ac5 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 10006ac7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006ac8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10006ad0(CPU *c) {
  NATIVE_HOOK(0x10006ad0u) REGS; LOADALL;
L_10006ad0:;
  /* 10006ad0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10006ad1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006ad2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006ad3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006ad4 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 10006ad8 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006ada xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 10006adc test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006ade mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10006ae0 je 0x10006bd2 */ if (ZF_) goto L_10006bd2;
  /* 10006ae6 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10006aea lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_10006af0:;
  /* 10006af0 cmp ebp, eax */ { u32 a_ = ebp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006af2 jae 0x10006afd */ if (!CF_) goto L_10006afd;
  /* 10006af4 mov cl, byte ptr [esi + ebp + 1] */ { const u32 m_ = (u32)(esi + ebp + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006af8 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006af9 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006afb jne 0x10006af0 */ if (!ZF_) goto L_10006af0;
L_10006afd:;
  /* 10006afd test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006aff je 0x10006bd2 */ if (ZF_) goto L_10006bd2;
  /* 10006b05 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10006b08 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006b0a je 0x10006b11 */ if (ZF_) goto L_10006b11;
  /* 10006b0c mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10006b0f jmp 0x10006b13 */ goto L_10006b13;
L_10006b11:;
  /* 10006b11 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10006b13:;
  /* 10006b13 lea eax, [eax + ebp + 1] */ eax = (u32)((u32)(eax + ebp + 0x1u));
  /* 10006b17 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006b19 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006b1a mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10006b1e jbe 0x10006ba4 */ if ((CF_|ZF_)) goto L_10006ba4;
  /* 10006b24 add eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10006b26 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006b27 call 0x10006e4c */ esp -= 4; M32(esp) = 0x10006b2cu; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x10006b27u); RETCHK(0x10006b2cu, 0x10006b27u); LOADALL;
  /* 10006b2c mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 10006b2f mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10006b32 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006b35 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006b37 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10006b3b je 0x10006b68 */ if (ZF_) goto L_10006b68;
  /* 10006b3d mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 10006b3f test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006b41 je 0x10006b5c */ if (ZF_) goto L_10006b5c;
  /* 10006b43 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10006b46 mov esi, edx */ { esi = (u32)(edx); }
  /* 10006b48 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10006b4a shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10006b4d mov edi, eax */ { edi = (u32)(eax); }
  /* 10006b4f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006b51 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10006b53 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006b56 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006b58 mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
L_10006b5c:;
  /* 10006b5c mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10006b5f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006b61 je 0x10006b68 */ if (ZF_) goto L_10006b68;
  /* 10006b63 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10006b66 jmp 0x10006b6a */ goto L_10006b6a;
L_10006b68:;
  /* 10006b68 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_10006b6a:;
  /* 10006b6a mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10006b6c lea edi, [edx + eax] */ edi = (u32)((u32)(edx + eax));
  /* 10006b6f mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10006b71 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10006b74 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006b76 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10006b78 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006b7b rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006b7d mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10006b80 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006b82 je 0x10006b97 */ if (ZF_) goto L_10006b97;
  /* 10006b84 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 10006b86 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006b88 je 0x10006b97 */ if (ZF_) goto L_10006b97;
  /* 10006b8a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10006b8b call 0x10006e46 */ esp -= 4; M32(esp) = 0x10006b90u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10006b8bu); RETCHK(0x10006b90u, 0x10006b8bu); LOADALL;
  /* 10006b90 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10006b94 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10006b97:;
  /* 10006b97 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 10006b99 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10006b9d add eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10006b9f mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10006ba2 jmp 0x10006bc3 */ goto L_10006bc3;
L_10006ba4:;
  /* 10006ba4 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006ba6 je 0x10006bad */ if (ZF_) goto L_10006bad;
  /* 10006ba8 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10006bab jmp 0x10006baf */ goto L_10006baf;
L_10006bad:;
  /* 10006bad xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10006baf:;
  /* 10006baf mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 10006bb1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10006bb3 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10006bb5 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10006bb7 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10006bba rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006bbc mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10006bbe and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006bc1 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
L_10006bc3:;
  /* 10006bc3 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10006bc7 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 10006bc9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10006bca mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 10006bcd mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
  /* 10006bd1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_10006bd2:;
  /* 10006bd2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006bd3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10006bd4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006bd5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10006bd6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10006be0(CPU *c) {
  NATIVE_HOOK(0x10006be0u) REGS; LOADALL;
L_10006be0:;
  /* 10006be0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10006be1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006be2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006be3 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10006be7 mov eax, esi */ { eax = (u32)(esi); }
  /* 10006be9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006bea mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10006bec lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 10006bef nop */ ;
L_10006bf0:;
  /* 10006bf0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006bf2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006bf3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006bf5 jne 0x10006bf0 */ if (!ZF_) goto L_10006bf0;
  /* 10006bf7 mov edi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edi = (u32)(M32(m_)); }
  /* 10006bfa sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10006bfc test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006bfe je 0x10006c05 */ if (ZF_) goto L_10006c05;
  /* 10006c00 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10006c03 jmp 0x10006c07 */ goto L_10006c07;
L_10006c05:;
  /* 10006c05 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_10006c07:;
  /* 10006c07 lea eax, [ecx + eax + 1] */ eax = (u32)((u32)(ecx + eax + 0x1u));
  /* 10006c0b cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006c0d mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 10006c11 jbe 0x10006cb1 */ if ((CF_|ZF_)) goto L_10006cb1;
  /* 10006c17 add eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10006c19 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10006c1a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006c1b call 0x10006e4c */ esp -= 4; M32(esp) = 0x10006c20u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x10006c1bu); RETCHK(0x10006c20u, 0x10006c1bu); LOADALL;
  /* 10006c20 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 10006c22 mov byte ptr [ebp], 0 */ { const u32 m_ = (u32)(ebp); M8(m_) = (u8)(0x0u); }
  /* 10006c26 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10006c29 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006c2c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006c2e je 0x10006c50 */ if (ZF_) goto L_10006c50;
  /* 10006c30 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10006c32 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006c34 je 0x10006c50 */ if (ZF_) goto L_10006c50;
  /* 10006c36 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10006c39 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006c3a mov esi, eax */ { esi = (u32)(eax); }
  /* 10006c3c mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10006c3e shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10006c41 mov edi, ebp */ { edi = (u32)(ebp); }
  /* 10006c43 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006c45 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10006c47 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006c4a rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006c4c mov esi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); esi = (u32)(M32(m_)); }
L_10006c50:;
  /* 10006c50 mov eax, esi */ { eax = (u32)(esi); }
  /* 10006c52 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_10006c55:;
  /* 10006c55 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006c57 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006c58 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006c5a jne 0x10006c55 */ if (!ZF_) goto L_10006c55;
  /* 10006c5c mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10006c5f sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10006c61 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006c63 je 0x10006c6a */ if (ZF_) goto L_10006c6a;
  /* 10006c65 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10006c68 jmp 0x10006c6c */ goto L_10006c6c;
L_10006c6a:;
  /* 10006c6a xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_10006c6c:;
  /* 10006c6c lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 10006c6f lea edi, [edx + ebp] */ edi = (u32)((u32)(edx + ebp));
  /* 10006c72 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10006c74 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10006c77 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006c79 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10006c7b and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006c7e rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006c80 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10006c83 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006c85 je 0x10006c96 */ if (ZF_) goto L_10006c96;
  /* 10006c87 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10006c89 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006c8b je 0x10006c96 */ if (ZF_) goto L_10006c96;
  /* 10006c8d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006c8e call 0x10006e46 */ esp -= 4; M32(esp) = 0x10006c93u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10006c8eu); RETCHK(0x10006c93u, 0x10006c8eu); LOADALL;
  /* 10006c93 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10006c96:;
  /* 10006c96 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10006c9a add eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10006c9c mov dword ptr [ebx], ebp */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(ebp); }
  /* 10006c9e mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10006ca1 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10006ca5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10006ca6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006ca7 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10006ca8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006ca9 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 10006cac pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006cad pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10006cae ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10006cb1:;
  /* 10006cb1 mov eax, esi */ { eax = (u32)(esi); }
  /* 10006cb3 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_10006cb6:;
  /* 10006cb6 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006cb8 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006cb9 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006cbb jne 0x10006cb6 */ if (!ZF_) goto L_10006cb6;
  /* 10006cbd sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10006cbf test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006cc1 je 0x10006cc8 */ if (ZF_) goto L_10006cc8;
  /* 10006cc3 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10006cc6 jmp 0x10006cca */ goto L_10006cca;
L_10006cc8:;
  /* 10006cc8 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_10006cca:;
  /* 10006cca mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
  /* 10006ccc add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10006cce lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 10006cd1 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10006cd5 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 10006cd7 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10006cda rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006cdc mov ecx, edx */ { ecx = (u32)(edx); }
  /* 10006cde and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006ce1 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10006ce3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006ce4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10006ce5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006ce6 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 10006ce9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006cea pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10006ceb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10006cf0(CPU *c) {
  NATIVE_HOOK(0x10006cf0u) REGS; LOADALL;
L_10006cf0:;
  /* 10006cf0 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10006cf3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006cf5 je 0x10006d02 */ if (ZF_) goto L_10006d02;
  /* 10006cf7 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10006cfa mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10006cfe cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006d00 jb 0x10006d08 */ if (CF_) goto L_10006d08;
L_10006d02:;
  /* 10006d02 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10006d05 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10006d08:;
  /* 10006d08 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006d09 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 10006d0b mov cl, byte ptr [esi + eax] */ { const u32 m_ = (u32)(esi + eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006d0e test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006d10 je 0x10006d23 */ if (ZF_) goto L_10006d23;
  /* 10006d12 mov dl, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
L_10006d16:;
  /* 10006d16 cmp cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006d18 je 0x10006d26 */ if (ZF_) goto L_10006d26;
  /* 10006d1a mov cl, byte ptr [esi + eax + 1] */ { const u32 m_ = (u32)(esi + eax + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006d1e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006d1f test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006d21 jne 0x10006d16 */ if (!ZF_) goto L_10006d16;
L_10006d23:;
  /* 10006d23 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10006d26:;
  /* 10006d26 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006d27 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10006d30(CPU *c) {
  NATIVE_HOOK(0x10006d30u) REGS; LOADALL;
L_10006d30:;
  /* 10006d30 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 10006d33 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006d35 je 0x10006d8f */ if (ZF_) goto L_10006d8f;
  /* 10006d37 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10006d3b mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 10006d3e test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006d40 je 0x10006d8f */ if (ZF_) goto L_10006d8f;
  /* 10006d42 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006d43 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006d44 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 10006d46 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
L_10006d48:;
  /* 10006d48 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006d4a mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006d4c mov cl, dl */ { ecx = (ecx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 10006d4e cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006d50 jne 0x10006d7c */ if (!ZF_) goto L_10006d7c;
  /* 10006d52 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006d54 je 0x10006d6c */ if (ZF_) goto L_10006d6c;
  /* 10006d56 mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006d59 mov bl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006d5c mov cl, dl */ { ecx = (ecx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 10006d5e cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10006d60 jne 0x10006d7c */ if (!ZF_) goto L_10006d7c;
  /* 10006d62 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10006d65 add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10006d68 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006d6a jne 0x10006d48 */ if (!ZF_) goto L_10006d48;
L_10006d6c:;
  /* 10006d6c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10006d6e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006d70 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006d72 sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 10006d75 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006d76 mov al, cl */ { eax = (eax & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 10006d78 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006d79 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10006d7c:;
  /* 10006d7c sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10006d7e sbb eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10006d81 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10006d83 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006d85 sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 10006d88 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006d89 mov al, cl */ { eax = (eax & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 10006d8b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006d8c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10006d8f:;
  /* 10006d8f xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10006d91 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10006db1(CPU *c) {
  NATIVE_HOOK(0x10006db1u) REGS; LOADALL;
L_10006db1:;
  /* 10006db1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10006db3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006db4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10006db5(CPU *c) {
  NATIVE_HOOK(0x10006db5u) REGS; LOADALL;
L_10006db5:;
  /* 10006db5 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10006db8 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10006dbc push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10006dbe call dword ptr [0x10008030] */ { const u32 m_ = (u32)(0x10008030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10006dc4u; SAVEALL; call_ind(c, t_); RETCHK(0x10006dc4u, 0x10006dbeu); LOADALL; }
}

void F_10006dc5(CPU *c) {
  NATIVE_HOOK(0x10006dc5u) REGS; LOADALL;
  goto L_10006dc5;
L_10006d94:;
  /* 10006d94 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10006d96 push 0x10008910 */ { u32 v_ = 0x10008910u; esp -= 4; M32(esp) = v_; }
  /* 10006d9b call 0x100070dc */ esp -= 4; M32(esp) = 0x10006da0u; SAVEALL; F_100070dc(c); ABI_CHECK(0x100070dcu, 0x10006d9bu); RETCHK(0x10006da0u, 0x10006d9bu); LOADALL;
  /* 10006da0 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10006da4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10006da6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10006da8 call 0x100070d4 */ esp -= 4; M32(esp) = 0x10006dadu; SAVEALL; F_100070d4(c); ABI_CHECK(0x100070d4u, 0x10006da8u); RETCHK(0x10006dadu, 0x10006da8u); LOADALL;
  /* 10006dad pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10006dae pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10006daf jmp 0x10006db8 */ goto L_10006db8;
L_10006db8:;
  /* 10006db8 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10006dbc push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10006dbe call dword ptr [0x10008030] */ { const u32 m_ = (u32)(0x10008030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10006dc4u; SAVEALL; call_ind(c, t_); RETCHK(0x10006dc4u, 0x10006dbeu); LOADALL; }
L_10006dc5:;
  /* 10006dc5 cmp ecx, dword ptr [0x1000a110] */ { const u32 m_ = (u32)(0x1000a110u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006dcb jne 0x10006dce */ if (!ZF_) goto L_10006dce;
  /* 10006dcd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10006dce:;
  /* 10006dce jmp 0x10006d94 */ goto L_10006d94;
}

void F_10006dd4(CPU *c) {
  NATIVE_HOOK(0x10006dd4u) REGS; LOADALL;
L_10006dd4:;
  /* 10006dd4 jmp dword ptr [0x100080d0] */ { const u32 m_ = (u32)(0x100080d0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10006dda(CPU *c) {
  NATIVE_HOOK(0x10006ddau) REGS; LOADALL;
L_10006dda:;
  /* 10006dda jmp dword ptr [0x100080cc] */ { const u32 m_ = (u32)(0x100080ccu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10006de0(CPU *c) {
  NATIVE_HOOK(0x10006de0u) REGS; LOADALL;
L_10006de0:;
  /* 10006de0 jmp dword ptr [0x100080c8] */ { const u32 m_ = (u32)(0x100080c8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10006de6(CPU *c) {
  NATIVE_HOOK(0x10006de6u) REGS; LOADALL;
L_10006de6:;
  /* 10006de6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006de7 mov bl, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10006deb test bl, 2 */ { u32 a_ = (ebx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006dee push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006def mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10006df1 je 0x10006e17 */ if (ZF_) goto L_10006e17;
  /* 10006df3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006df4 push 0x100071ec */ { u32 v_ = 0x100071ecu; esp -= 4; M32(esp) = v_; }
  /* 10006df9 lea edi, [esi - 4] */ edi = (u32)((u32)(esi + 0xfffffffcu));
  /* 10006dfc push dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006dfe push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10006e00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006e01 call 0x1000718c */ esp -= 4; M32(esp) = 0x10006e06u; SAVEALL; F_1000718c(c); ABI_CHECK(0x1000718cu, 0x10006e01u); RETCHK(0x10006e06u, 0x10006e01u); LOADALL;
  /* 10006e06 test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006e09 je 0x10006e12 */ if (ZF_) goto L_10006e12;
  /* 10006e0b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006e0c call 0x10006e46 */ esp -= 4; M32(esp) = 0x10006e11u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10006e0cu); RETCHK(0x10006e11u, 0x10006e0cu); LOADALL;
  /* 10006e11 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10006e12:;
  /* 10006e12 mov eax, edi */ { eax = (u32)(edi); }
  /* 10006e14 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10006e15 jmp 0x10006e2c */ goto L_10006e2c;
L_10006e17:;
  /* 10006e17 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10006e19 call 0x100071ec */ esp -= 4; M32(esp) = 0x10006e1eu; SAVEALL; F_100071ec(c); ABI_CHECK(0x100071ecu, 0x10006e19u); RETCHK(0x10006e1eu, 0x10006e19u); LOADALL;
  /* 10006e1e test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10006e21 je 0x10006e2a */ if (ZF_) goto L_10006e2a;
  /* 10006e23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006e24 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10006e29u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10006e24u); RETCHK(0x10006e29u, 0x10006e24u); LOADALL;
  /* 10006e29 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10006e2a:;
  /* 10006e2a mov eax, esi */ { eax = (u32)(esi); }
L_10006e2c:;
  /* 10006e2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10006e2d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10006e2e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10006e40(CPU *c) {
  NATIVE_HOOK(0x10006e40u) REGS; LOADALL;
L_10006e40:;
  /* 10006e40 jmp dword ptr [0x100080c4] */ { SAVEALL; rt_throw(c, 0x100080c4u); }
}

void F_10006e46(CPU *c) {
  NATIVE_HOOK(0x10006e46u) REGS; LOADALL;
L_10006e46:;
  /* 10006e46 jmp dword ptr [0x100080b8] */ { const u32 m_ = (u32)(0x100080b8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10006e4c(CPU *c) {
  NATIVE_HOOK(0x10006e4cu) REGS; LOADALL;
L_10006e4c:;
  /* 10006e4c jmp dword ptr [0x100080b4] */ { const u32 m_ = (u32)(0x100080b4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10006e52(CPU *c) {
  NATIVE_HOOK(0x10006e52u) REGS; LOADALL;
L_10006e52:;
  /* 10006e52 cmp dword ptr [0x1000a150], -1 */ { const u32 m_ = (u32)(0x1000a150u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006e59 jne 0x10006e61 */ if (!ZF_) goto L_10006e61;
  /* 10006e5b jmp dword ptr [0x10008070] */ { const u32 m_ = (u32)(0x10008070u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_10006e61:;
  /* 10006e61 push 0x1000a14c */ { u32 v_ = 0x1000a14cu; esp -= 4; M32(esp) = v_; }
  /* 10006e66 push 0x1000a150 */ { u32 v_ = 0x1000a150u; esp -= 4; M32(esp) = v_; }
  /* 10006e6b push dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006e6f call 0x100071f2 */ esp -= 4; M32(esp) = 0x10006e74u; SAVEALL; F_100071f2(c); ABI_CHECK(0x100071f2u, 0x10006e6fu); RETCHK(0x10006e74u, 0x10006e6fu); LOADALL;
  /* 10006e74 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10006e77 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10006e78(CPU *c) {
  NATIVE_HOOK(0x10006e78u) REGS; LOADALL;
L_10006e78:;
  /* 10006e78 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006e7c call 0x10006e52 */ esp -= 4; M32(esp) = 0x10006e81u; SAVEALL; F_10006e52(c); ABI_CHECK(0x10006e52u, 0x10006e7cu); RETCHK(0x10006e81u, 0x10006e7cu); LOADALL;
  /* 10006e81 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10006e83 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10006e85 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10006e87 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10006e88 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10006e89 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10006e8a(CPU *c) {
  NATIVE_HOOK(0x10006e8au) REGS; LOADALL;
L_10006e8a:;
  /* 10006e8a mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10006e8e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006e90 jne 0x10006ea0 */ if (!ZF_) goto L_10006ea0;
  /* 10006e92 cmp dword ptr [0x1000a140], eax */ { const u32 m_ = (u32)(0x1000a140u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006e98 jle 0x10006ec8 */ if ((ZF_|LT_)) goto L_10006ec8;
  /* 10006e9a dec dword ptr [0x1000a140] */ { const u32 m_ = (u32)(0x1000a140u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10006ea0:;
  /* 10006ea0 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006ea3 mov ecx, dword ptr [0x10008060] */ { const u32 m_ = (u32)(0x10008060u); ecx = (u32)(M32(m_)); }
  /* 10006ea9 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 10006eab mov dword ptr [0x1000a144], ecx */ { const u32 m_ = (u32)(0x1000a144u); M32(m_) = (u32)(ecx); }
  /* 10006eb1 jne 0x10006f02 */ if (!ZF_) goto L_10006f02;
  /* 10006eb3 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10006eb8 call dword ptr [0x10008064] */ { const u32 m_ = (u32)(0x10008064u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10006ebeu; SAVEALL; call_ind(c, t_); RETCHK(0x10006ebeu, 0x10006eb8u); LOADALL; }
  /* 10006ebe test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006ec0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10006ec1 mov dword ptr [0x1000a150], eax */ { const u32 m_ = (u32)(0x1000a150u); M32(m_) = (u32)(eax); }
  /* 10006ec6 jne 0x10006ecc */ if (!ZF_) goto L_10006ecc;
L_10006ec8:;
  /* 10006ec8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10006eca jmp 0x10006f45 */ goto L_10006f45;
L_10006ecc:;
  /* 10006ecc and dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10006ecf mov eax, dword ptr [0x1000a150] */ { const u32 m_ = (u32)(0x1000a150u); eax = (u32)(M32(m_)); }
  /* 10006ed4 mov dword ptr [0x1000a14c], eax */ { const u32 m_ = (u32)(0x1000a14cu); M32(m_) = (u32)(eax); }
  /* 10006ed9 call 0x100071fe */ esp -= 4; M32(esp) = 0x10006edeu; SAVEALL; F_100071fe(c); ABI_CHECK(0x100071feu, 0x10006ed9u); RETCHK(0x10006edeu, 0x10006ed9u); LOADALL;
  /* 10006ede push 0x10007242 */ { u32 v_ = 0x10007242u; esp -= 4; M32(esp) = v_; }
  /* 10006ee3 call 0x10006e78 */ esp -= 4; M32(esp) = 0x10006ee8u; SAVEALL; F_10006e78(c); ABI_CHECK(0x10006e78u, 0x10006ee3u); RETCHK(0x10006ee8u, 0x10006ee3u); LOADALL;
  /* 10006ee8 mov dword ptr [esp], 0x1000a00c */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(0x1000a00cu); }
  /* 10006eef push 0x1000a000 */ { u32 v_ = 0x1000a000u; esp -= 4; M32(esp) = v_; }
  /* 10006ef4 call 0x100071f8 */ esp -= 4; M32(esp) = 0x10006ef9u; SAVEALL; F_100071f8(c); ABI_CHECK(0x100071f8u, 0x10006ef4u); RETCHK(0x10006ef9u, 0x10006ef4u); LOADALL;
  /* 10006ef9 inc dword ptr [0x1000a140] */ { const u32 m_ = (u32)(0x1000a140u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006eff pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10006f00 jmp 0x10006f41 */ goto L_10006f41;
L_10006f02:;
  /* 10006f02 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006f04 jne 0x10006f42 */ if (!ZF_) goto L_10006f42;
  /* 10006f06 mov eax, dword ptr [0x1000a150] */ { const u32 m_ = (u32)(0x1000a150u); eax = (u32)(M32(m_)); }
  /* 10006f0b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006f0d je 0x10006f42 */ if (ZF_) goto L_10006f42;
  /* 10006f0f jmp 0x10006f24 */ goto L_10006f24;
L_10006f11:;
  /* 10006f11 mov ecx, dword ptr [0x1000a14c] */ { const u32 m_ = (u32)(0x1000a14cu); ecx = (u32)(M32(m_)); }
  /* 10006f17 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 10006f19 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006f1b je 0x10006f24 */ if (ZF_) goto L_10006f24;
  /* 10006f1d call ecx */ { u32 t_ = ecx; esp -= 4; M32(esp) = 0x10006f1fu; SAVEALL; call_ind(c, t_); RETCHK(0x10006f1fu, 0x10006f1du); LOADALL; }
  /* 10006f1f mov eax, dword ptr [0x1000a150] */ { const u32 m_ = (u32)(0x1000a150u); eax = (u32)(M32(m_)); }
L_10006f24:;
  /* 10006f24 sub dword ptr [0x1000a14c], 4 */ { const u32 m_ = (u32)(0x1000a14cu); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10006f2b cmp dword ptr [0x1000a14c], eax */ { const u32 m_ = (u32)(0x1000a14cu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006f31 jae 0x10006f11 */ if (!CF_) goto L_10006f11;
  /* 10006f33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10006f34 call dword ptr [0x1000806c] */ { const u32 m_ = (u32)(0x1000806cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10006f3au; SAVEALL; call_ind(c, t_); RETCHK(0x10006f3au, 0x10006f34u); LOADALL; }
  /* 10006f3a and dword ptr [0x1000a150], 0 */ { const u32 m_ = (u32)(0x1000a150u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10006f41:;
  /* 10006f41 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10006f42:;
  /* 10006f42 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10006f44 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10006f45:;
  /* 10006f45 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10006f48(CPU *c) {
  NATIVE_HOOK(0x10006f48u) REGS; LOADALL;
L_10006f48:;
  /* 10006f48 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10006f4a push 0x10008928 */ { u32 v_ = 0x10008928u; esp -= 4; M32(esp) = v_; }
  /* 10006f4f call 0x100070dc */ esp -= 4; M32(esp) = 0x10006f54u; SAVEALL; F_100070dc(c); ABI_CHECK(0x100070dcu, 0x10006f4fu); RETCHK(0x10006f54u, 0x10006f4fu); LOADALL;
  /* 10006f54 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10006f56 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10006f57 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10006f5a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10006f5c mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 10006f5f mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10006f62 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006f64 jne 0x10006f72 */ if (!ZF_) goto L_10006f72;
  /* 10006f66 cmp dword ptr [0x1000a140], edi */ { const u32 m_ = (u32)(0x1000a140u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006f6c je 0x1000701e */ if (ZF_) goto L_1000701e;
L_10006f72:;
  /* 10006f72 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006f74 je 0x10006f7b */ if (ZF_) goto L_10006f7b;
  /* 10006f76 cmp esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006f79 jne 0x10006fac */ if (!ZF_) goto L_10006fac;
L_10006f7b:;
  /* 10006f7b mov eax, dword ptr [0x1000a148] */ { const u32 m_ = (u32)(0x1000a148u); eax = (u32)(M32(m_)); }
  /* 10006f80 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006f82 je 0x10006f90 */ if (ZF_) goto L_10006f90;
  /* 10006f84 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006f87 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006f88 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006f8b call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10006f8du; SAVEALL; call_ind(c, t_); RETCHK(0x10006f8du, 0x10006f8bu); LOADALL; }
  /* 10006f8d mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10006f90:;
  /* 10006f90 cmp dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006f93 je 0x1000701e */ if (ZF_) goto L_1000701e;
  /* 10006f99 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006f9c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006f9d push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006fa0 call 0x10006e8a */ esp -= 4; M32(esp) = 0x10006fa5u; SAVEALL; F_10006e8a(c); ABI_CHECK(0x10006e8au, 0x10006fa0u); RETCHK(0x10006fa5u, 0x10006fa0u); LOADALL;
  /* 10006fa5 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10006fa8 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006faa je 0x1000701e */ if (ZF_) goto L_1000701e;
L_10006fac:;
  /* 10006fac mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 10006faf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006fb0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006fb1 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006fb4 call 0x1000728c */ esp -= 4; M32(esp) = 0x10006fb9u; SAVEALL; F_1000728c(c); ABI_CHECK(0x1000728cu, 0x10006fb4u); RETCHK(0x10006fb9u, 0x10006fb4u); LOADALL;
  /* 10006fb9 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10006fbc cmp esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006fbf jne 0x10006fcf */ if (!ZF_) goto L_10006fcf;
  /* 10006fc1 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006fc3 jne 0x10006fcf */ if (!ZF_) goto L_10006fcf;
  /* 10006fc5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006fc6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10006fc7 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006fca call 0x10006e8a */ esp -= 4; M32(esp) = 0x10006fcfu; SAVEALL; F_10006e8a(c); ABI_CHECK(0x10006e8au, 0x10006fcau); RETCHK(0x10006fcfu, 0x10006fcau); LOADALL;
L_10006fcf:;
  /* 10006fcf cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006fd1 je 0x10006fd8 */ if (ZF_) goto L_10006fd8;
  /* 10006fd3 cmp esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006fd6 jne 0x10007001 */ if (!ZF_) goto L_10007001;
L_10006fd8:;
  /* 10006fd8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006fd9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006fda push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006fdd call 0x10006e8a */ esp -= 4; M32(esp) = 0x10006fe2u; SAVEALL; F_10006e8a(c); ABI_CHECK(0x10006e8au, 0x10006fddu); RETCHK(0x10006fe2u, 0x10006fddu); LOADALL;
  /* 10006fe2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10006fe4 jne 0x10006fe9 */ if (!ZF_) goto L_10006fe9;
  /* 10006fe6 mov dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edi); }
L_10006fe9:;
  /* 10006fe9 cmp dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006fec je 0x10007001 */ if (ZF_) goto L_10007001;
  /* 10006fee mov eax, dword ptr [0x1000a148] */ { const u32 m_ = (u32)(0x1000a148u); eax = (u32)(M32(m_)); }
  /* 10006ff3 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10006ff5 je 0x10007001 */ if (ZF_) goto L_10007001;
  /* 10006ff7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10006ff8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10006ff9 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10006ffc call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10006ffeu; SAVEALL; call_ind(c, t_); RETCHK(0x10006ffeu, 0x10006ffcu); LOADALL; }
  /* 10006ffe mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10007001:;
  /* 10007001 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10007005 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10007008 jmp 0x10007024 */ goto L_10007024;
L_1000701e:;
  /* 1000701e or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10007022 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10007024:;
  /* 10007024 call 0x10007117 */ esp -= 4; M32(esp) = 0x10007029u; SAVEALL; F_10007117(c); ABI_CHECK(0x10007117u, 0x10007024u); RETCHK(0x10007029u, 0x10007024u); LOADALL;
  /* 10007029 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_1000700a(CPU *c) {
  NATIVE_HOOK(0x1000700au) REGS; LOADALL;
L_1000700a:;
  /* 1000700a mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 1000700d mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1000700f mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 10007011 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10007012 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10007013 call 0x10007286 */ esp -= 4; M32(esp) = 0x10007018u; SAVEALL; F_10007286(c); ABI_CHECK(0x10007286u, 0x10007013u); RETCHK(0x10007018u, 0x10007013u); LOADALL;
  /* 10007018 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10007019 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1000701a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
