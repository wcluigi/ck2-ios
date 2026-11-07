#include "funcs.h"

void F_104026d0(CPU *c) {
  NATIVE_HOOK(0x104026d0u) REGS; LOADALL;
L_104026d0:;
  /* 104026d0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104026d1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104026d2 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 104026d6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104026d8 mov al, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104026da push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104026db mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 104026dd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104026de lea esi, [ebp + 0x10000] */ esi = (u32)((u32)(ebp + 0x10000u));
  /* 104026e4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104026e6 mov dword ptr [esp + 0xc], esi */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(esi); }
  /* 104026ea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104026eb call 0x10404a10 */ esp -= 4; M32(esp) = 0x104026f0u; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x104026ebu); RETCHK(0x104026f0u, 0x104026ebu); LOADALL;
  /* 104026f0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104026f3 je 0x10402708 */ if (ZF_) goto L_10402708;
  /* 104026f5 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 104026f7 mov cx, word ptr [ebx + 2] */ { const u32 m_ = (u32)(ebx + 0x2u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 104026fb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104026fc mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104026fe call 0x10404a70 */ esp -= 4; M32(esp) = 0x10402703u; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x104026feu); RETCHK(0x10402703u, 0x104026feu); LOADALL;
  /* 10402703 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402706 jne 0x10402712 */ if (!ZF_) goto L_10402712;
L_10402708:;
  /* 10402708 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402709 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040270a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040270d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040270e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040270f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402712:;
  /* 10402712 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402713 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10402715 lea edi, [ebx + 4] */ edi = (u32)((u32)(ebx + 0x4u));
L_10402718:;
  /* 10402718 movzx edx, word ptr [ebx + 2] */ { const u32 m_ = (u32)(ebx + 0x2u); edx = (u32)(M16(m_)); }
  /* 1040271c cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040271e jge 0x10402736 */ if (!LT_) goto L_10402736;
  /* 10402720 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402721 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10402723 call 0x10402600 */ esp -= 4; M32(esp) = 0x10402728u; SAVEALL; F_10402600(c); ABI_CHECK(0x10402600u, 0x10402723u); RETCHK(0x10402728u, 0x10402723u); LOADALL;
  /* 10402728 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040272b je 0x10402747 */ if (ZF_) goto L_10402747;
  /* 1040272d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040272e add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10402731 cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402734 jl 0x10402718 */ if (LT_) goto L_10402718;
L_10402736:;
  /* 10402736 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1040273a call 0x10404a00 */ esp -= 4; M32(esp) = 0x1040273fu; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x1040273au); RETCHK(0x1040273fu, 0x1040273au); LOADALL;
  /* 1040273f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402740 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402741 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402742 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402743 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10402744 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402747:;
  /* 10402747 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402748 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402749 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040274a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040274d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040274e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040274f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402760(CPU *c) {
  NATIVE_HOOK(0x10402760u) REGS; LOADALL;
L_10402760:;
  /* 10402760 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402761 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402762 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10402764 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402765 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10402769 lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 1040276f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402770 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402772 call 0x10404a40 */ esp -= 4; M32(esp) = 0x10402777u; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402772u); RETCHK(0x10402777u, 0x10402772u); LOADALL;
  /* 10402777 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040277a jne 0x10402784 */ if (!ZF_) goto L_10402784;
  /* 1040277c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040277d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040277e or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402780 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402781 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402784:;
  /* 10402784 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10402785 lea ebp, [edi + 2] */ ebp = (u32)((u32)(edi + 0x2u));
  /* 10402788 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10402789 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040278b call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10402790u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x1040278bu); RETCHK(0x10402790u, 0x1040278bu); LOADALL;
  /* 10402790 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402793 jne 0x1040279f */ if (!ZF_) goto L_1040279f;
L_10402795:;
  /* 10402795 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402796 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402797 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402798 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040279b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040279c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1040279f:;
  /* 1040279f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 104027a1 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_104027a4:;
  /* 104027a4 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 104027a8 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104027aa jge 0x104027c2 */ if (!LT_) goto L_104027c2;
  /* 104027ac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104027ad mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 104027af call 0x10402670 */ esp -= 4; M32(esp) = 0x104027b4u; SAVEALL; F_10402670(c); ABI_CHECK(0x10402670u, 0x104027afu); RETCHK(0x104027b4u, 0x104027afu); LOADALL;
  /* 104027b4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104027b7 je 0x10402795 */ if (ZF_) goto L_10402795;
  /* 104027b9 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104027ba add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104027bd cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104027c0 jl 0x104027a4 */ if (LT_) goto L_104027a4;
L_104027c2:;
  /* 104027c2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104027c3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104027c4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104027c5 mov eax, 0x84 */ { eax = (u32)(0x84u); }
  /* 104027ca pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104027cb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104027d0(CPU *c) {
  NATIVE_HOOK(0x104027d0u) REGS; LOADALL;
L_104027d0:;
  /* 104027d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104027d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104027d2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 104027d6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104027d8 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104027da lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 104027e0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104027e2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104027e3 call 0x10404a10 */ esp -= 4; M32(esp) = 0x104027e8u; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x104027e3u); RETCHK(0x104027e8u, 0x104027e3u); LOADALL;
  /* 104027e8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104027eb je 0x10402811 */ if (ZF_) goto L_10402811;
  /* 104027ed xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 104027ef mov cl, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104027f2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104027f3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104027f5 call 0x10404a10 */ esp -= 4; M32(esp) = 0x104027fau; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x104027f5u); RETCHK(0x104027fau, 0x104027f5u); LOADALL;
  /* 104027fa cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104027fd je 0x10402811 */ if (ZF_) goto L_10402811;
  /* 104027ff xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10402801 mov dl, byte ptr [edi + 2] */ { const u32 m_ = (u32)(edi + 0x2u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10402804 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402806 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402807 call 0x10404a10 */ esp -= 4; M32(esp) = 0x1040280cu; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402807u); RETCHK(0x1040280cu, 0x10402807u); LOADALL;
  /* 1040280c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040280f jne 0x10402819 */ if (!ZF_) goto L_10402819;
L_10402811:;
  /* 10402811 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402812 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402815 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402816 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402819:;
  /* 10402819 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040281b call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402820u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x1040281bu); RETCHK(0x10402820u, 0x1040281bu); LOADALL;
  /* 10402820 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402821 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402822 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402830(CPU *c) {
  NATIVE_HOOK(0x10402830u) REGS; LOADALL;
L_10402830:;
  /* 10402830 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402831 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402832 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10402836 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040283c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040283d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040283f call 0x10404a40 */ esp -= 4; M32(esp) = 0x10402844u; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x1040283fu); RETCHK(0x10402844u, 0x1040283fu); LOADALL;
  /* 10402844 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402847 jne 0x10402851 */ if (!ZF_) goto L_10402851;
L_10402849:;
  /* 10402849 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040284a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040284d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040284e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402851:;
  /* 10402851 lea eax, [edi + 1] */ eax = (u32)((u32)(edi + 0x1u));
  /* 10402854 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402855 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402857 call 0x10404a40 */ esp -= 4; M32(esp) = 0x1040285cu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402857u); RETCHK(0x1040285cu, 0x10402857u); LOADALL;
  /* 1040285c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040285f je 0x10402849 */ if (ZF_) goto L_10402849;
  /* 10402861 add edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10402864 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402865 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402867 call 0x10404a40 */ esp -= 4; M32(esp) = 0x1040286cu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402867u); RETCHK(0x1040286cu, 0x10402867u); LOADALL;
  /* 1040286c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040286d neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 1040286f sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10402871 and eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402874 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402875 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10402876 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402877 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402880(CPU *c) {
  NATIVE_HOOK(0x10402880u) REGS; LOADALL;
L_10402880:;
  /* 10402880 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402881 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10402882 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 10402886 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402888 mov ax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1040288c lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 10402892 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402894 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402895 call 0x10404a70 */ esp -= 4; M32(esp) = 0x1040289au; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x10402895u); RETCHK(0x1040289au, 0x10402895u); LOADALL;
  /* 1040289a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040289d jne 0x104028a6 */ if (!ZF_) goto L_104028a6;
  /* 1040289f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104028a0 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104028a2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104028a3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104028a6:;
  /* 104028a6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104028a7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104028a8 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 104028aa lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
  /* 104028ad lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_104028b0:;
  /* 104028b0 movzx ecx, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M16(m_)); }
  /* 104028b4 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104028b6 jge 0x104028d0 */ if (!LT_) goto L_104028d0;
  /* 104028b8 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 104028ba push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104028bb mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 104028bd call 0x10404af0 */ esp -= 4; M32(esp) = 0x104028c2u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104028bdu); RETCHK(0x104028c2u, 0x104028bdu); LOADALL;
  /* 104028c2 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104028c5 je 0x104028de */ if (ZF_) goto L_104028de;
  /* 104028c7 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104028c8 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104028cb cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104028ce jl 0x104028b0 */ if (LT_) goto L_104028b0;
L_104028d0:;
  /* 104028d0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 104028d2 call 0x10404a00 */ esp -= 4; M32(esp) = 0x104028d7u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x104028d2u); RETCHK(0x104028d7u, 0x104028d2u); LOADALL;
  /* 104028d7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104028d8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104028d9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104028da pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104028db ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104028de:;
  /* 104028de pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104028df pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104028e0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104028e1 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104028e4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104028e5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104028f0(CPU *c) {
  NATIVE_HOOK(0x104028f0u) REGS; LOADALL;
L_104028f0:;
  /* 104028f0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104028f1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104028f2 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 104028f6 lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 104028fc push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104028fd mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 104028ff call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10402904u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x104028ffu); RETCHK(0x10402904u, 0x104028ffu); LOADALL;
  /* 10402904 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402907 jne 0x10402910 */ if (!ZF_) goto L_10402910;
  /* 10402909 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040290a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040290c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040290d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402910:;
  /* 10402910 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402911 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402912 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10402914 lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
L_10402917:;
  /* 10402917 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 1040291b cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040291d jge 0x10402935 */ if (!LT_) goto L_10402935;
  /* 1040291f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402920 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402922 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10402927u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10402922u); RETCHK(0x10402927u, 0x10402922u); LOADALL;
  /* 10402927 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040292a je 0x10402941 */ if (ZF_) goto L_10402941;
  /* 1040292c inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040292d add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10402930 cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402933 jl 0x10402917 */ if (LT_) goto L_10402917;
L_10402935:;
  /* 10402935 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402936 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402937 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402938 mov eax, 0x44 */ { eax = (u32)(0x44u); }
  /* 1040293d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040293e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402941:;
  /* 10402941 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402942 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402943 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402944 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402947 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402948 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402950(CPU *c) {
  NATIVE_HOOK(0x10402950u) REGS; LOADALL;
L_10402950:;
  /* 10402950 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402951 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402952 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10402956 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10402958 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 1040295a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040295b lea edi, [ebx + 0x10000] */ edi = (u32)((u32)(ebx + 0x10000u));
  /* 10402961 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402962 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402964 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10402969u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10402964u); RETCHK(0x10402969u, 0x10402964u); LOADALL;
  /* 10402969 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040296c je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402972 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10402974 mov cx, word ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10402978 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402979 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 1040297b call 0x10404a70 */ esp -= 4; M32(esp) = 0x10402980u; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x1040297bu); RETCHK(0x10402980u, 0x1040297bu); LOADALL;
  /* 10402980 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402983 je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402989 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1040298b mov dl, byte ptr [esi + 6] */ { const u32 m_ = (u32)(esi + 0x6u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040298e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402990 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402991 call 0x10404a10 */ esp -= 4; M32(esp) = 0x10402996u; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402991u); RETCHK(0x10402996u, 0x10402991u); LOADALL;
  /* 10402996 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402999 je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 1040299f push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 104029a1 lea eax, [esi + 7] */ eax = (u32)((u32)(esi + 0x7u));
  /* 104029a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104029a5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 104029a7 call 0x10404c20 */ esp -= 4; M32(esp) = 0x104029acu; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x104029a7u); RETCHK(0x104029acu, 0x104029a7u); LOADALL;
  /* 104029ac cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104029af je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 104029b5 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 104029ba lea ecx, [esi + 0x27] */ ecx = (u32)((u32)(esi + 0x27u));
  /* 104029bd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104029be mov ecx, edi */ { ecx = (u32)(edi); }
  /* 104029c0 call 0x10404c20 */ esp -= 4; M32(esp) = 0x104029c5u; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x104029c0u); RETCHK(0x104029c5u, 0x104029c0u); LOADALL;
  /* 104029c5 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104029c8 je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 104029ce mov edx, dword ptr [esi + 0x128] */ { const u32 m_ = (u32)(esi + 0x128u); edx = (u32)(M32(m_)); }
  /* 104029d4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104029d5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 104029d7 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104029dcu; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104029d7u); RETCHK(0x104029dcu, 0x104029d7u); LOADALL;
  /* 104029dc cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104029df je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 104029e5 mov eax, dword ptr [esi + 0x12c] */ { const u32 m_ = (u32)(esi + 0x12cu); eax = (u32)(M32(m_)); }
  /* 104029eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104029ec mov ecx, edi */ { ecx = (u32)(edi); }
  /* 104029ee call 0x10404af0 */ esp -= 4; M32(esp) = 0x104029f3u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104029eeu); RETCHK(0x104029f3u, 0x104029eeu); LOADALL;
  /* 104029f3 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104029f6 je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 104029fc lea ecx, [esi + 0x130] */ ecx = (u32)((u32)(esi + 0x130u));
  /* 10402a02 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402a03 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402a05 call 0x10402880 */ esp -= 4; M32(esp) = 0x10402a0au; SAVEALL; F_10402880(c); ABI_CHECK(0x10402880u, 0x10402a05u); RETCHK(0x10402a0au, 0x10402a05u); LOADALL;
  /* 10402a0a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402a0d je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402a13 lea edx, [esi + 0x174] */ edx = (u32)((u32)(esi + 0x174u));
  /* 10402a19 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402a1a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402a1c call 0x104021a0 */ esp -= 4; M32(esp) = 0x10402a21u; SAVEALL; F_104021a0(c); ABI_CHECK(0x104021a0u, 0x10402a1cu); RETCHK(0x10402a21u, 0x10402a1cu); LOADALL;
  /* 10402a21 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402a24 je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402a2a lea eax, [esi + 0x288] */ eax = (u32)((u32)(esi + 0x288u));
  /* 10402a30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402a31 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402a33 call 0x10402490 */ esp -= 4; M32(esp) = 0x10402a38u; SAVEALL; F_10402490(c); ABI_CHECK(0x10402490u, 0x10402a33u); RETCHK(0x10402a38u, 0x10402a33u); LOADALL;
  /* 10402a38 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402a3b je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402a3d lea ecx, [esi + 0xecc] */ ecx = (u32)((u32)(esi + 0xeccu));
  /* 10402a43 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402a44 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402a46 call 0x10402560 */ esp -= 4; M32(esp) = 0x10402a4bu; SAVEALL; F_10402560(c); ABI_CHECK(0x10402560u, 0x10402a46u); RETCHK(0x10402a4bu, 0x10402a46u); LOADALL;
  /* 10402a4b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402a4e je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402a50 lea edx, [esi + 0x1090] */ edx = (u32)((u32)(esi + 0x1090u));
  /* 10402a56 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402a57 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402a59 call 0x104026d0 */ esp -= 4; M32(esp) = 0x10402a5eu; SAVEALL; F_104026d0(c); ABI_CHECK(0x104026d0u, 0x10402a59u); RETCHK(0x10402a5eu, 0x10402a59u); LOADALL;
  /* 10402a5e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402a61 je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402a63 lea eax, [esi + 0x1114] */ eax = (u32)((u32)(esi + 0x1114u));
  /* 10402a69 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402a6a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402a6c call 0x104027d0 */ esp -= 4; M32(esp) = 0x10402a71u; SAVEALL; F_104027d0(c); ABI_CHECK(0x104027d0u, 0x10402a6cu); RETCHK(0x10402a71u, 0x10402a6cu); LOADALL;
  /* 10402a71 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402a74 je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402a76 mov ecx, dword ptr [esi + 0x1118] */ { const u32 m_ = (u32)(esi + 0x1118u); ecx = (u32)(M32(m_)); }
  /* 10402a7c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402a7d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402a7f call 0x10404af0 */ esp -= 4; M32(esp) = 0x10402a84u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10402a7fu); RETCHK(0x10402a84u, 0x10402a7fu); LOADALL;
  /* 10402a84 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402a87 je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402a89 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10402a8b mov dl, byte ptr [esi + 0x111c] */ { const u32 m_ = (u32)(esi + 0x111cu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10402a91 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402a93 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402a94 call 0x10404a10 */ esp -= 4; M32(esp) = 0x10402a99u; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402a94u); RETCHK(0x10402a99u, 0x10402a94u); LOADALL;
  /* 10402a99 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402a9c je 0x10402ab3 */ if (ZF_) goto L_10402ab3;
  /* 10402a9e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402aa0 mov al, byte ptr [esi + 0x111d] */ { const u32 m_ = (u32)(esi + 0x111du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10402aa6 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402aa8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402aa9 call 0x10404a10 */ esp -= 4; M32(esp) = 0x10402aaeu; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402aa9u); RETCHK(0x10402aaeu, 0x10402aa9u); LOADALL;
  /* 10402aae cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402ab1 jne 0x10402abc */ if (!ZF_) goto L_10402abc;
L_10402ab3:;
  /* 10402ab3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402ab4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402ab5 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402ab8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402ab9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402abc:;
  /* 10402abc mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402abe call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402ac3u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10402abeu); RETCHK(0x10402ac3u, 0x10402abeu); LOADALL;
  /* 10402ac3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402ac4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402ac5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402ac6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402ad0(CPU *c) {
  NATIVE_HOOK(0x10402ad0u) REGS; LOADALL;
L_10402ad0:;
  /* 10402ad0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402ad1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402ad2 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10402ad6 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10402ad8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402ad9 lea edi, [ebx + 0x10000] */ edi = (u32)((u32)(ebx + 0x10000u));
  /* 10402adf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402ae0 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402ae2 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10402ae7u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10402ae2u); RETCHK(0x10402ae7u, 0x10402ae2u); LOADALL;
  /* 10402ae7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402aea jne 0x10402af5 */ if (!ZF_) goto L_10402af5;
L_10402aec:;
  /* 10402aec pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402aed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402aee or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402af1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402af2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402af5:;
  /* 10402af5 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 10402af8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402af9 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402afb call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10402b00u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x10402afbu); RETCHK(0x10402b00u, 0x10402afbu); LOADALL;
  /* 10402b00 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402b03 je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402b05 lea ecx, [esi + 6] */ ecx = (u32)((u32)(esi + 0x6u));
  /* 10402b08 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402b09 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402b0b call 0x10404a40 */ esp -= 4; M32(esp) = 0x10402b10u; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402b0bu); RETCHK(0x10402b10u, 0x10402b0bu); LOADALL;
  /* 10402b10 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402b13 je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402b15 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402b17 lea edx, [esi + 7] */ edx = (u32)((u32)(esi + 0x7u));
  /* 10402b1a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402b1b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402b1d call 0x10404b70 */ esp -= 4; M32(esp) = 0x10402b22u; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x10402b1du); RETCHK(0x10402b22u, 0x10402b1du); LOADALL;
  /* 10402b22 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402b25 je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402b27 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10402b2c lea eax, [esi + 0x27] */ eax = (u32)((u32)(esi + 0x27u));
  /* 10402b2f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402b30 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402b32 call 0x10404b70 */ esp -= 4; M32(esp) = 0x10402b37u; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x10402b32u); RETCHK(0x10402b37u, 0x10402b32u); LOADALL;
  /* 10402b37 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402b3a je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402b3c lea ecx, [esi + 0x128] */ ecx = (u32)((u32)(esi + 0x128u));
  /* 10402b42 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402b43 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402b45 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10402b4au; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10402b45u); RETCHK(0x10402b4au, 0x10402b45u); LOADALL;
  /* 10402b4a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402b4d je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402b4f lea edx, [esi + 0x12c] */ edx = (u32)((u32)(esi + 0x12cu));
  /* 10402b55 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402b56 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402b58 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10402b5du; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10402b58u); RETCHK(0x10402b5du, 0x10402b58u); LOADALL;
  /* 10402b5d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402b60 je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402b62 lea eax, [esi + 0x130] */ eax = (u32)((u32)(esi + 0x130u));
  /* 10402b68 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402b69 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402b6b call 0x104028f0 */ esp -= 4; M32(esp) = 0x10402b70u; SAVEALL; F_104028f0(c); ABI_CHECK(0x104028f0u, 0x10402b6bu); RETCHK(0x10402b70u, 0x10402b6bu); LOADALL;
  /* 10402b70 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402b73 je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402b79 lea ecx, [esi + 0x174] */ ecx = (u32)((u32)(esi + 0x174u));
  /* 10402b7f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402b80 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402b82 call 0x10402240 */ esp -= 4; M32(esp) = 0x10402b87u; SAVEALL; F_10402240(c); ABI_CHECK(0x10402240u, 0x10402b82u); RETCHK(0x10402b87u, 0x10402b82u); LOADALL;
  /* 10402b87 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402b8a je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402b90 lea edx, [esi + 0x288] */ edx = (u32)((u32)(esi + 0x288u));
  /* 10402b96 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402b97 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402b99 call 0x10402500 */ esp -= 4; M32(esp) = 0x10402b9eu; SAVEALL; F_10402500(c); ABI_CHECK(0x10402500u, 0x10402b99u); RETCHK(0x10402b9eu, 0x10402b99u); LOADALL;
  /* 10402b9e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402ba1 je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402ba7 lea eax, [esi + 0xecc] */ eax = (u32)((u32)(esi + 0xeccu));
  /* 10402bad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402bae mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402bb0 call 0x104025b0 */ esp -= 4; M32(esp) = 0x10402bb5u; SAVEALL; F_104025b0(c); ABI_CHECK(0x104025b0u, 0x10402bb0u); RETCHK(0x10402bb5u, 0x10402bb0u); LOADALL;
  /* 10402bb5 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402bb8 je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402bbe lea ecx, [esi + 0x1090] */ ecx = (u32)((u32)(esi + 0x1090u));
  /* 10402bc4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402bc5 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402bc7 call 0x10402760 */ esp -= 4; M32(esp) = 0x10402bccu; SAVEALL; F_10402760(c); ABI_CHECK(0x10402760u, 0x10402bc7u); RETCHK(0x10402bccu, 0x10402bc7u); LOADALL;
  /* 10402bcc cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402bcf je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402bd5 lea edx, [esi + 0x1114] */ edx = (u32)((u32)(esi + 0x1114u));
  /* 10402bdb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402bdc mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10402bde call 0x10402830 */ esp -= 4; M32(esp) = 0x10402be3u; SAVEALL; F_10402830(c); ABI_CHECK(0x10402830u, 0x10402bdeu); RETCHK(0x10402be3u, 0x10402bdeu); LOADALL;
  /* 10402be3 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402be6 je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402bec lea eax, [esi + 0x1118] */ eax = (u32)((u32)(esi + 0x1118u));
  /* 10402bf2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402bf3 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402bf5 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10402bfau; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10402bf5u); RETCHK(0x10402bfau, 0x10402bf5u); LOADALL;
  /* 10402bfa cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402bfd je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402c03 lea ecx, [esi + 0x111c] */ ecx = (u32)((u32)(esi + 0x111cu));
  /* 10402c09 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402c0a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402c0c call 0x10404a40 */ esp -= 4; M32(esp) = 0x10402c11u; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402c0cu); RETCHK(0x10402c11u, 0x10402c0cu); LOADALL;
  /* 10402c11 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402c14 je 0x10402aec */ if (ZF_) goto L_10402aec;
  /* 10402c1a add esi, 0x111d */ { u32 a_ = esi, b_ = 0x111du; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10402c20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402c21 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402c23 call 0x10404a40 */ esp -= 4; M32(esp) = 0x10402c28u; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402c23u); RETCHK(0x10402c28u, 0x10402c23u); LOADALL;
  /* 10402c28 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10402c29 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10402c2b sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10402c2d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402c2e and eax, 0x1121 */ { u32 a_ = eax, b_ = 0x1121u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402c33 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402c34 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10402c35 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402c36 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402c40(CPU *c) {
  NATIVE_HOOK(0x10402c40u) REGS; LOADALL;
L_10402c40:;
  /* 10402c40 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402c41 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402c42 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10402c46 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10402c4c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402c4e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402c4f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402c51 call 0x10404c20 */ esp -= 4; M32(esp) = 0x10402c56u; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x10402c51u); RETCHK(0x10402c56u, 0x10402c51u); LOADALL;
  /* 10402c56 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402c59 je 0x10402c8b */ if (ZF_) goto L_10402c8b;
  /* 10402c5b push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402c5d lea eax, [edi + 0x20] */ eax = (u32)((u32)(edi + 0x20u));
  /* 10402c60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402c61 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402c63 call 0x10404c20 */ esp -= 4; M32(esp) = 0x10402c68u; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x10402c63u); RETCHK(0x10402c68u, 0x10402c63u); LOADALL;
  /* 10402c68 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402c6b je 0x10402c8b */ if (ZF_) goto L_10402c8b;
  /* 10402c6d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402c6f call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402c74u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10402c6fu); RETCHK(0x10402c74u, 0x10402c6fu); LOADALL;
  /* 10402c74 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402c77 je 0x10402c8b */ if (ZF_) goto L_10402c8b;
  /* 10402c79 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10402c7b mov cl, byte ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10402c7e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402c7f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402c81 call 0x10404a10 */ esp -= 4; M32(esp) = 0x10402c86u; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402c81u); RETCHK(0x10402c86u, 0x10402c81u); LOADALL;
  /* 10402c86 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402c89 jne 0x10402c93 */ if (!ZF_) goto L_10402c93;
L_10402c8b:;
  /* 10402c8b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402c8c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402c8f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402c90 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402c93:;
  /* 10402c93 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402c95 call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402c9au; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10402c95u); RETCHK(0x10402c9au, 0x10402c95u); LOADALL;
  /* 10402c9a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402c9b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402c9c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402ca0(CPU *c) {
  NATIVE_HOOK(0x10402ca0u) REGS; LOADALL;
L_10402ca0:;
  /* 10402ca0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402ca1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402ca2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10402ca6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10402cac push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402cae push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402caf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402cb1 call 0x10404b70 */ esp -= 4; M32(esp) = 0x10402cb6u; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x10402cb1u); RETCHK(0x10402cb6u, 0x10402cb1u); LOADALL;
  /* 10402cb6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402cb9 je 0x10402ccd */ if (ZF_) goto L_10402ccd;
  /* 10402cbb push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402cbd lea eax, [edi + 0x20] */ eax = (u32)((u32)(edi + 0x20u));
  /* 10402cc0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402cc1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402cc3 call 0x10404b70 */ esp -= 4; M32(esp) = 0x10402cc8u; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x10402cc3u); RETCHK(0x10402cc8u, 0x10402cc3u); LOADALL;
  /* 10402cc8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402ccb jne 0x10402cd5 */ if (!ZF_) goto L_10402cd5;
L_10402ccd:;
  /* 10402ccd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402cce or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402cd1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402cd2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402cd5:;
  /* 10402cd5 add edi, 0x40 */ { u32 a_ = edi, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10402cd8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402cd9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402cdb call 0x10404a40 */ esp -= 4; M32(esp) = 0x10402ce0u; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402cdbu); RETCHK(0x10402ce0u, 0x10402cdbu); LOADALL;
  /* 10402ce0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10402ce1 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10402ce3 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10402ce5 and eax, 0x42 */ { u32 a_ = eax, b_ = 0x42u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402ce8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402ce9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10402cea pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402ceb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402cf0(CPU *c) {
  NATIVE_HOOK(0x10402cf0u) REGS; LOADALL;
L_10402cf0:;
  /* 10402cf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10402cf1 mov ebp, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebp = (u32)(M32(m_)); }
  /* 10402cf5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402cf7 mov ax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10402cfb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402cfc lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10402d02 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402d04 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402d05 call 0x10404a70 */ esp -= 4; M32(esp) = 0x10402d0au; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x10402d05u); RETCHK(0x10402d0au, 0x10402d05u); LOADALL;
  /* 10402d0a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402d0d jne 0x10402d16 */ if (!ZF_) goto L_10402d16;
  /* 10402d0f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402d10 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402d12 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402d13 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402d16:;
  /* 10402d16 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402d17 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402d18 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10402d1a lea edi, [ebp + 2] */ edi = (u32)((u32)(ebp + 0x2u));
  /* 10402d1d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_10402d20:;
  /* 10402d20 movzx ecx, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M16(m_)); }
  /* 10402d24 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402d26 jge 0x10402d5e */ if (!LT_) goto L_10402d5e;
  /* 10402d28 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402d2a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402d2b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402d2d call 0x10404c20 */ esp -= 4; M32(esp) = 0x10402d32u; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x10402d2du); RETCHK(0x10402d32u, 0x10402d2du); LOADALL;
  /* 10402d32 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402d35 je 0x10402d6c */ if (ZF_) goto L_10402d6c;
  /* 10402d37 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402d39 lea edx, [edi + 0x20] */ edx = (u32)((u32)(edi + 0x20u));
  /* 10402d3c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402d3d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402d3f call 0x10404c20 */ esp -= 4; M32(esp) = 0x10402d44u; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x10402d3fu); RETCHK(0x10402d44u, 0x10402d3fu); LOADALL;
  /* 10402d44 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402d47 je 0x10402d6c */ if (ZF_) goto L_10402d6c;
  /* 10402d49 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402d4b call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402d50u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10402d4bu); RETCHK(0x10402d50u, 0x10402d4bu); LOADALL;
  /* 10402d50 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402d53 je 0x10402d6c */ if (ZF_) goto L_10402d6c;
  /* 10402d55 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10402d56 add edi, 0x40 */ { u32 a_ = edi, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10402d59 cmp ebx, 0x64 */ { u32 a_ = ebx, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402d5c jl 0x10402d20 */ if (LT_) goto L_10402d20;
L_10402d5e:;
  /* 10402d5e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402d60 call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402d65u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10402d60u); RETCHK(0x10402d65u, 0x10402d60u); LOADALL;
  /* 10402d65 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402d66 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402d67 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402d68 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402d69 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402d6c:;
  /* 10402d6c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402d6d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402d6e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402d6f or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402d72 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402d73 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402d80(CPU *c) {
  NATIVE_HOOK(0x10402d80u) REGS; LOADALL;
L_10402d80:;
  /* 10402d80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10402d81 mov ebp, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebp = (u32)(M32(m_)); }
  /* 10402d85 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402d86 lea edi, [ecx + 0x10000] */ edi = (u32)((u32)(ecx + 0x10000u));
  /* 10402d8c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10402d8d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402d8f call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10402d94u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x10402d8fu); RETCHK(0x10402d94u, 0x10402d8fu); LOADALL;
  /* 10402d94 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402d97 jne 0x10402da0 */ if (!ZF_) goto L_10402da0;
  /* 10402d99 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402d9a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402d9c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402d9d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402da0:;
  /* 10402da0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402da1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402da2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10402da4 lea esi, [ebp + 2] */ esi = (u32)((u32)(ebp + 0x2u));
L_10402da7:;
  /* 10402da7 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 10402dab cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402dad jge 0x10402dd9 */ if (!LT_) goto L_10402dd9;
  /* 10402daf push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402db1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402db2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402db4 call 0x10404b70 */ esp -= 4; M32(esp) = 0x10402db9u; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x10402db4u); RETCHK(0x10402db9u, 0x10402db4u); LOADALL;
  /* 10402db9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402dbc je 0x10402de5 */ if (ZF_) goto L_10402de5;
  /* 10402dbe push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402dc0 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 10402dc3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402dc4 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402dc6 call 0x10404b70 */ esp -= 4; M32(esp) = 0x10402dcbu; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x10402dc6u); RETCHK(0x10402dcbu, 0x10402dc6u); LOADALL;
  /* 10402dcb cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402dce je 0x10402de5 */ if (ZF_) goto L_10402de5;
  /* 10402dd0 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10402dd1 add esi, 0x40 */ { u32 a_ = esi, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10402dd4 cmp ebx, 0x64 */ { u32 a_ = ebx, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402dd7 jl 0x10402da7 */ if (LT_) goto L_10402da7;
L_10402dd9:;
  /* 10402dd9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402dda pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402ddb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402ddc mov eax, 0x1902 */ { eax = (u32)(0x1902u); }
  /* 10402de1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402de2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402de5:;
  /* 10402de5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402de6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402de7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402de8 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402deb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10402dec ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402df0(CPU *c) {
  NATIVE_HOOK(0x10402df0u) REGS; LOADALL;
L_10402df0:;
  /* 10402df0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10402df4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402df5 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10402dfb xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10402dfd mov cx, word ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10402e00 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402e01 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402e03 call 0x10404a70 */ esp -= 4; M32(esp) = 0x10402e08u; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x10402e03u); RETCHK(0x10402e08u, 0x10402e03u); LOADALL;
  /* 10402e08 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402e0b jne 0x10402e13 */ if (!ZF_) goto L_10402e13;
  /* 10402e0d or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402e0f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402e10 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402e13:;
  /* 10402e13 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402e15 call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402e1au; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10402e15u); RETCHK(0x10402e1au, 0x10402e15u); LOADALL;
  /* 10402e1a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402e1b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402e20(CPU *c) {
  NATIVE_HOOK(0x10402e20u) REGS; LOADALL;
L_10402e20:;
  /* 10402e20 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10402e24 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402e25 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10402e2b call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10402e30u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x10402e2bu); RETCHK(0x10402e30u, 0x10402e2bu); LOADALL;
  /* 10402e30 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10402e31 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10402e33 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10402e35 and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402e38 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10402e39 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402e40(CPU *c) {
  NATIVE_HOOK(0x10402e40u) REGS; LOADALL;
L_10402e40:;
  /* 10402e40 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402e41 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10402e45 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402e47 mov al, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10402e49 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402e4a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10402e4c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402e4d lea edi, [esi + 0x10000] */ edi = (u32)((u32)(esi + 0x10000u));
  /* 10402e53 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402e55 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402e56 call 0x10404a10 */ esp -= 4; M32(esp) = 0x10402e5bu; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402e56u); RETCHK(0x10402e5bu, 0x10402e56u); LOADALL;
  /* 10402e5b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402e5e je 0x10402e70 */ if (ZF_) goto L_10402e70;
  /* 10402e60 add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10402e63 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10402e64 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402e66 call 0x10402950 */ esp -= 4; M32(esp) = 0x10402e6bu; SAVEALL; F_10402950(c); ABI_CHECK(0x10402950u, 0x10402e66u); RETCHK(0x10402e6bu, 0x10402e66u); LOADALL;
  /* 10402e6b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402e6e jne 0x10402e79 */ if (!ZF_) goto L_10402e79;
L_10402e70:;
  /* 10402e70 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402e71 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402e72 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402e75 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402e76 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402e79:;
  /* 10402e79 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10402e7b call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402e80u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10402e7bu); RETCHK(0x10402e80u, 0x10402e7bu); LOADALL;
  /* 10402e80 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402e81 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402e82 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10402e83 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402e90(CPU *c) {
  NATIVE_HOOK(0x10402e90u) REGS; LOADALL;
L_10402e90:;
  /* 10402e90 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402e91 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402e92 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10402e96 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10402e98 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402e99 lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 10402e9f call 0x10404a40 */ esp -= 4; M32(esp) = 0x10402ea4u; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402e9fu); RETCHK(0x10402ea4u, 0x10402e9fu); LOADALL;
  /* 10402ea4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402ea7 jne 0x10402eb0 */ if (!ZF_) goto L_10402eb0;
  /* 10402ea9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402eaa or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402eac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402ead ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402eb0:;
  /* 10402eb0 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10402eb3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402eb4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402eb6 call 0x10402ad0 */ esp -= 4; M32(esp) = 0x10402ebbu; SAVEALL; F_10402ad0(c); ABI_CHECK(0x10402ad0u, 0x10402eb6u); RETCHK(0x10402ebbu, 0x10402eb6u); LOADALL;
  /* 10402ebb inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10402ebc neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10402ebe sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10402ec0 and eax, 0x1125 */ { u32 a_ = eax, b_ = 0x1125u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402ec5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402ec6 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10402ec7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402ec8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402ed0(CPU *c) {
  NATIVE_HOOK(0x10402ed0u) REGS; LOADALL;
L_10402ed0:;
  /* 10402ed0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402ed1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402ed2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10402ed6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10402edc push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402ede push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402edf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402ee1 call 0x10404c20 */ esp -= 4; M32(esp) = 0x10402ee6u; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x10402ee1u); RETCHK(0x10402ee6u, 0x10402ee1u); LOADALL;
  /* 10402ee6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402ee9 je 0x10402f0d */ if (ZF_) goto L_10402f0d;
  /* 10402eeb mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 10402eee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402eef mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402ef1 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10402ef6u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10402ef1u); RETCHK(0x10402ef6u, 0x10402ef1u); LOADALL;
  /* 10402ef6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402ef9 je 0x10402f0d */ if (ZF_) goto L_10402f0d;
  /* 10402efb xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10402efd mov cl, byte ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10402f00 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402f01 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402f03 call 0x10404a10 */ esp -= 4; M32(esp) = 0x10402f08u; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402f03u); RETCHK(0x10402f08u, 0x10402f03u); LOADALL;
  /* 10402f08 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402f0b jne 0x10402f15 */ if (!ZF_) goto L_10402f15;
L_10402f0d:;
  /* 10402f0d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402f0e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402f11 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402f12 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402f15:;
  /* 10402f15 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402f17 call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402f1cu; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10402f17u); RETCHK(0x10402f1cu, 0x10402f17u); LOADALL;
  /* 10402f1c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402f1d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402f1e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402f30(CPU *c) {
  NATIVE_HOOK(0x10402f30u) REGS; LOADALL;
L_10402f30:;
  /* 10402f30 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402f31 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402f32 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10402f36 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10402f3c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402f3e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402f3f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402f41 call 0x10404b70 */ esp -= 4; M32(esp) = 0x10402f46u; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x10402f41u); RETCHK(0x10402f46u, 0x10402f41u); LOADALL;
  /* 10402f46 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402f49 jne 0x10402f53 */ if (!ZF_) goto L_10402f53;
L_10402f4b:;
  /* 10402f4b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402f4c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402f4f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402f50 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402f53:;
  /* 10402f53 lea eax, [edi + 0x20] */ eax = (u32)((u32)(edi + 0x20u));
  /* 10402f56 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402f57 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402f59 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10402f5eu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10402f59u); RETCHK(0x10402f5eu, 0x10402f59u); LOADALL;
  /* 10402f5e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402f61 je 0x10402f4b */ if (ZF_) goto L_10402f4b;
  /* 10402f63 add edi, 0x24 */ { u32 a_ = edi, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10402f66 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402f67 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402f69 call 0x10404a40 */ esp -= 4; M32(esp) = 0x10402f6eu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10402f69u); RETCHK(0x10402f6eu, 0x10402f69u); LOADALL;
  /* 10402f6e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10402f6f neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10402f71 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10402f73 and eax, 0x29 */ { u32 a_ = eax, b_ = 0x29u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402f76 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402f77 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10402f78 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402f79 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402f80(CPU *c) {
  NATIVE_HOOK(0x10402f80u) REGS; LOADALL;
L_10402f80:;
  /* 10402f80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402f81 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402f82 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10402f86 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10402f88 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10402f8e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402f8f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402f91 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10402f96u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10402f91u); RETCHK(0x10402f96u, 0x10402f91u); LOADALL;
  /* 10402f96 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402f99 je 0x10402fcf */ if (ZF_) goto L_10402fcf;
  /* 10402f9b push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10402f9d lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 10402fa0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10402fa1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402fa3 call 0x10404c20 */ esp -= 4; M32(esp) = 0x10402fa8u; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x10402fa3u); RETCHK(0x10402fa8u, 0x10402fa3u); LOADALL;
  /* 10402fa8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402fab je 0x10402fcf */ if (ZF_) goto L_10402fcf;
  /* 10402fad mov edx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (u32)(M32(m_)); }
  /* 10402fb0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10402fb1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402fb3 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10402fb8u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10402fb3u); RETCHK(0x10402fb8u, 0x10402fb3u); LOADALL;
  /* 10402fb8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402fbb je 0x10402fcf */ if (ZF_) goto L_10402fcf;
  /* 10402fbd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402fbf mov al, byte ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10402fc2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402fc4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10402fc5 call 0x10404a10 */ esp -= 4; M32(esp) = 0x10402fcau; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10402fc5u); RETCHK(0x10402fcau, 0x10402fc5u); LOADALL;
  /* 10402fca cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10402fcd jne 0x10402fd7 */ if (!ZF_) goto L_10402fd7;
L_10402fcf:;
  /* 10402fcf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402fd0 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10402fd3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402fd4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10402fd7:;
  /* 10402fd7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402fd9 call 0x10404a00 */ esp -= 4; M32(esp) = 0x10402fdeu; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10402fd9u); RETCHK(0x10402fdeu, 0x10402fd9u); LOADALL;
  /* 10402fde pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10402fdf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10402fe0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10402ff0(CPU *c) {
  NATIVE_HOOK(0x10402ff0u) REGS; LOADALL;
L_10402ff0:;
  /* 10402ff0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10402ff1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402ff2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10402ff6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10402ffc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10402ffd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10402fff call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403004u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10402fffu); RETCHK(0x10403004u, 0x10402fffu); LOADALL;
  /* 10403004 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403007 jne 0x10403011 */ if (!ZF_) goto L_10403011;
L_10403009:;
  /* 10403009 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040300a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040300d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040300e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403011:;
  /* 10403011 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10403013 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10403016 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403017 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403019 call 0x10404b70 */ esp -= 4; M32(esp) = 0x1040301eu; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x10403019u); RETCHK(0x1040301eu, 0x10403019u); LOADALL;
  /* 1040301e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403021 je 0x10403009 */ if (ZF_) goto L_10403009;
  /* 10403023 lea ecx, [edi + 0x24] */ ecx = (u32)((u32)(edi + 0x24u));
  /* 10403026 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10403027 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403029 call 0x10404b30 */ esp -= 4; M32(esp) = 0x1040302eu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403029u); RETCHK(0x1040302eu, 0x10403029u); LOADALL;
  /* 1040302e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403031 je 0x10403009 */ if (ZF_) goto L_10403009;
  /* 10403033 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403036 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403037 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403039 call 0x10404a40 */ esp -= 4; M32(esp) = 0x1040303eu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10403039u); RETCHK(0x1040303eu, 0x10403039u); LOADALL;
  /* 1040303e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040303f neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10403041 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10403043 and eax, 0x2d */ { u32 a_ = eax, b_ = 0x2du; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403046 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403047 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10403048 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403049 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403050(CPU *c) {
  NATIVE_HOOK(0x10403050u) REGS; LOADALL;
L_10403050:;
  /* 10403050 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403051 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403052 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403056 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040305c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1040305e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040305f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403061 call 0x10404c20 */ esp -= 4; M32(esp) = 0x10403066u; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x10403061u); RETCHK(0x10403066u, 0x10403061u); LOADALL;
  /* 10403066 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403069 je 0x1040307e */ if (ZF_) goto L_1040307e;
  /* 1040306b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040306d mov ax, word ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10403071 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403073 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403074 call 0x10404a70 */ esp -= 4; M32(esp) = 0x10403079u; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x10403074u); RETCHK(0x10403079u, 0x10403074u); LOADALL;
  /* 10403079 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040307c jne 0x10403086 */ if (!ZF_) goto L_10403086;
L_1040307e:;
  /* 1040307e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040307f or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403082 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403083 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403086:;
  /* 10403086 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403088 call 0x10404a00 */ esp -= 4; M32(esp) = 0x1040308du; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10403088u); RETCHK(0x1040308du, 0x10403088u); LOADALL;
  /* 1040308d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040308e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040308f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104030a0(CPU *c) {
  NATIVE_HOOK(0x104030a0u) REGS; LOADALL;
L_104030a0:;
  /* 104030a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104030a1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104030a2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 104030a6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 104030ac push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 104030ae push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104030af mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104030b1 call 0x10404b70 */ esp -= 4; M32(esp) = 0x104030b6u; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x104030b1u); RETCHK(0x104030b6u, 0x104030b1u); LOADALL;
  /* 104030b6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104030b9 jne 0x104030c2 */ if (!ZF_) goto L_104030c2;
  /* 104030bb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104030bc or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104030be pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104030bf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104030c2:;
  /* 104030c2 add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104030c5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104030c6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104030c8 call 0x10404ab0 */ esp -= 4; M32(esp) = 0x104030cdu; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x104030c8u); RETCHK(0x104030cdu, 0x104030c8u); LOADALL;
  /* 104030cd inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104030ce neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 104030d0 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 104030d2 and eax, 0x23 */ { u32 a_ = eax, b_ = 0x23u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104030d5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104030d6 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 104030d7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104030d8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104030e0(CPU *c) {
  NATIVE_HOOK(0x104030e0u) REGS; LOADALL;
L_104030e0:;
  /* 104030e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104030e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104030e2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 104030e6 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 104030e8 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 104030ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104030ef mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104030f1 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104030f6u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104030f1u); RETCHK(0x104030f6u, 0x104030f1u); LOADALL;
  /* 104030f6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104030f9 je 0x1040310d */ if (ZF_) goto L_1040310d;
  /* 104030fb xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 104030fd mov cl, byte ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10403100 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10403101 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403103 call 0x10404a10 */ esp -= 4; M32(esp) = 0x10403108u; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10403103u); RETCHK(0x10403108u, 0x10403103u); LOADALL;
  /* 10403108 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040310b jne 0x10403115 */ if (!ZF_) goto L_10403115;
L_1040310d:;
  /* 1040310d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040310e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403111 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403112 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403115:;
  /* 10403115 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403117 call 0x10404a00 */ esp -= 4; M32(esp) = 0x1040311cu; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10403117u); RETCHK(0x1040311cu, 0x10403117u); LOADALL;
  /* 1040311c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040311d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040311e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403130(CPU *c) {
  NATIVE_HOOK(0x10403130u) REGS; LOADALL;
L_10403130:;
  /* 10403130 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403131 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403132 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403136 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040313c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040313d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040313f call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403144u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x1040313fu); RETCHK(0x10403144u, 0x1040313fu); LOADALL;
  /* 10403144 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403147 jne 0x10403150 */ if (!ZF_) goto L_10403150;
  /* 10403149 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040314a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040314c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040314d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403150:;
  /* 10403150 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403153 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403154 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403156 call 0x10404a40 */ esp -= 4; M32(esp) = 0x1040315bu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10403156u); RETCHK(0x1040315bu, 0x10403156u); LOADALL;
  /* 1040315b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040315c neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 1040315e sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10403160 and eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403163 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403164 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10403165 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403166 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403170(CPU *c) {
  NATIVE_HOOK(0x10403170u) REGS; LOADALL;
L_10403170:;
  /* 10403170 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403171 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403172 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403176 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040317c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040317d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040317f call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403184u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x1040317fu); RETCHK(0x10403184u, 0x1040317fu); LOADALL;
  /* 10403184 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403187 jne 0x10403190 */ if (!ZF_) goto L_10403190;
  /* 10403189 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040318a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040318c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040318d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403190:;
  /* 10403190 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403193 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403194 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403196 call 0x10404b30 */ esp -= 4; M32(esp) = 0x1040319bu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403196u); RETCHK(0x1040319bu, 0x10403196u); LOADALL;
  /* 1040319b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040319c neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 1040319e sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 104031a0 and eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104031a3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104031a4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 104031a5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104031a6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104031b0(CPU *c) {
  NATIVE_HOOK(0x104031b0u) REGS; LOADALL;
L_104031b0:;
  /* 104031b0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104031b1 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 104031b5 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 104031b7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104031b8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 104031ba push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104031bb lea edi, [esi + 0x10000] */ edi = (u32)((u32)(esi + 0x10000u));
  /* 104031c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104031c2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 104031c4 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104031c9u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104031c4u); RETCHK(0x104031c9u, 0x104031c4u); LOADALL;
  /* 104031c9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104031cc je 0x104031de */ if (ZF_) goto L_104031de;
  /* 104031ce add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 104031d1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104031d2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104031d4 call 0x104021a0 */ esp -= 4; M32(esp) = 0x104031d9u; SAVEALL; F_104021a0(c); ABI_CHECK(0x104021a0u, 0x104031d4u); RETCHK(0x104031d9u, 0x104031d4u); LOADALL;
  /* 104031d9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104031dc jne 0x104031e7 */ if (!ZF_) goto L_104031e7;
L_104031de:;
  /* 104031de pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104031df pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104031e0 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104031e3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104031e4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104031e7:;
  /* 104031e7 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 104031e9 call 0x10404a00 */ esp -= 4; M32(esp) = 0x104031eeu; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x104031e9u); RETCHK(0x104031eeu, 0x104031e9u); LOADALL;
  /* 104031ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104031ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104031f0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104031f1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403200(CPU *c) {
  NATIVE_HOOK(0x10403200u) REGS; LOADALL;
L_10403200:;
  /* 10403200 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403201 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403202 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403206 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10403208 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403209 lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 1040320f call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403214u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x1040320fu); RETCHK(0x10403214u, 0x1040320fu); LOADALL;
  /* 10403214 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403217 jne 0x10403220 */ if (!ZF_) goto L_10403220;
  /* 10403219 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040321a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040321c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040321d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403220:;
  /* 10403220 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403223 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403224 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403226 call 0x10402240 */ esp -= 4; M32(esp) = 0x1040322bu; SAVEALL; F_10402240(c); ABI_CHECK(0x10402240u, 0x10403226u); RETCHK(0x1040322bu, 0x10403226u); LOADALL;
  /* 1040322b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040322c neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 1040322e sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10403230 and eax, 0x119 */ { u32 a_ = eax, b_ = 0x119u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403235 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403236 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10403237 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403238 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403240(CPU *c) {
  NATIVE_HOOK(0x10403240u) REGS; LOADALL;
L_10403240:;
  /* 10403240 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403241 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403242 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403246 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10403248 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040324e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040324f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403251 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403256u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403251u); RETCHK(0x10403256u, 0x10403251u); LOADALL;
  /* 10403256 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403259 je 0x1040326b */ if (ZF_) goto L_1040326b;
  /* 1040325b mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1040325e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040325f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403261 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403266u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403261u); RETCHK(0x10403266u, 0x10403261u); LOADALL;
  /* 10403266 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403269 jne 0x10403273 */ if (!ZF_) goto L_10403273;
L_1040326b:;
  /* 1040326b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040326c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040326f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403270 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403273:;
  /* 10403273 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403275 call 0x10404a00 */ esp -= 4; M32(esp) = 0x1040327au; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10403275u); RETCHK(0x1040327au, 0x10403275u); LOADALL;
  /* 1040327a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040327b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040327c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403280(CPU *c) {
  NATIVE_HOOK(0x10403280u) REGS; LOADALL;
L_10403280:;
  /* 10403280 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403281 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403282 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403286 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10403288 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040328e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040328f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403291 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403296u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403291u); RETCHK(0x10403296u, 0x10403291u); LOADALL;
  /* 10403296 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403299 je 0x10403301 */ if (ZF_) goto L_10403301;
  /* 1040329b push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1040329d lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 104032a0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104032a1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104032a3 call 0x10404c20 */ esp -= 4; M32(esp) = 0x104032a8u; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x104032a3u); RETCHK(0x104032a8u, 0x104032a3u); LOADALL;
  /* 104032a8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104032ab je 0x10403301 */ if (ZF_) goto L_10403301;
  /* 104032ad mov edx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (u32)(M32(m_)); }
  /* 104032b0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104032b1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104032b3 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104032b8u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104032b3u); RETCHK(0x104032b8u, 0x104032b3u); LOADALL;
  /* 104032b8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104032bb je 0x10403301 */ if (ZF_) goto L_10403301;
  /* 104032bd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104032bf mov al, byte ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104032c2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104032c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104032c5 call 0x10404a10 */ esp -= 4; M32(esp) = 0x104032cau; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x104032c5u); RETCHK(0x104032cau, 0x104032c5u); LOADALL;
  /* 104032ca cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104032cd je 0x10403301 */ if (ZF_) goto L_10403301;
  /* 104032cf xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 104032d1 mov cl, byte ptr [edi + 0x29] */ { const u32 m_ = (u32)(edi + 0x29u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104032d4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104032d5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104032d7 call 0x10404a10 */ esp -= 4; M32(esp) = 0x104032dcu; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x104032d7u); RETCHK(0x104032dcu, 0x104032d7u); LOADALL;
  /* 104032dc cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104032df je 0x10403301 */ if (ZF_) goto L_10403301;
  /* 104032e1 mov edx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); edx = (u32)(M32(m_)); }
  /* 104032e4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104032e5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104032e7 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104032ecu; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104032e7u); RETCHK(0x104032ecu, 0x104032e7u); LOADALL;
  /* 104032ec cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104032ef je 0x10403301 */ if (ZF_) goto L_10403301;
  /* 104032f1 mov eax, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); eax = (u32)(M32(m_)); }
  /* 104032f4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104032f5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104032f7 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104032fcu; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104032f7u); RETCHK(0x104032fcu, 0x104032f7u); LOADALL;
  /* 104032fc cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104032ff jne 0x10403309 */ if (!ZF_) goto L_10403309;
L_10403301:;
  /* 10403301 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403302 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403305 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403306 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403309:;
  /* 10403309 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040330b call 0x10404a00 */ esp -= 4; M32(esp) = 0x10403310u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x1040330bu); RETCHK(0x10403310u, 0x1040330bu); LOADALL;
  /* 10403310 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403311 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403312 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403320(CPU *c) {
  NATIVE_HOOK(0x10403320u) REGS; LOADALL;
L_10403320:;
  /* 10403320 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403321 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403322 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403326 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040332c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040332d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040332f call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403334u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x1040332fu); RETCHK(0x10403334u, 0x1040332fu); LOADALL;
  /* 10403334 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403337 jne 0x10403341 */ if (!ZF_) goto L_10403341;
L_10403339:;
  /* 10403339 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040333a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040333d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040333e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403341:;
  /* 10403341 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10403343 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10403346 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403347 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403349 call 0x10404b70 */ esp -= 4; M32(esp) = 0x1040334eu; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x10403349u); RETCHK(0x1040334eu, 0x10403349u); LOADALL;
  /* 1040334e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403351 je 0x10403339 */ if (ZF_) goto L_10403339;
  /* 10403353 lea ecx, [edi + 0x24] */ ecx = (u32)((u32)(edi + 0x24u));
  /* 10403356 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10403357 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403359 call 0x10404b30 */ esp -= 4; M32(esp) = 0x1040335eu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403359u); RETCHK(0x1040335eu, 0x10403359u); LOADALL;
  /* 1040335e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403361 je 0x10403339 */ if (ZF_) goto L_10403339;
  /* 10403363 lea edx, [edi + 0x28] */ edx = (u32)((u32)(edi + 0x28u));
  /* 10403366 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10403367 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403369 call 0x10404a40 */ esp -= 4; M32(esp) = 0x1040336eu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10403369u); RETCHK(0x1040336eu, 0x10403369u); LOADALL;
  /* 1040336e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403371 je 0x10403339 */ if (ZF_) goto L_10403339;
  /* 10403373 lea eax, [edi + 0x29] */ eax = (u32)((u32)(edi + 0x29u));
  /* 10403376 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403377 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403379 call 0x10404a40 */ esp -= 4; M32(esp) = 0x1040337eu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10403379u); RETCHK(0x1040337eu, 0x10403379u); LOADALL;
  /* 1040337e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403381 je 0x10403339 */ if (ZF_) goto L_10403339;
  /* 10403383 lea ecx, [edi + 0x2c] */ ecx = (u32)((u32)(edi + 0x2cu));
  /* 10403386 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10403387 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403389 call 0x10404b30 */ esp -= 4; M32(esp) = 0x1040338eu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403389u); RETCHK(0x1040338eu, 0x10403389u); LOADALL;
  /* 1040338e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403391 je 0x10403339 */ if (ZF_) goto L_10403339;
  /* 10403393 add edi, 0x30 */ { u32 a_ = edi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403396 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403397 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403399 call 0x10404b30 */ esp -= 4; M32(esp) = 0x1040339eu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403399u); RETCHK(0x1040339eu, 0x10403399u); LOADALL;
  /* 1040339e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040339f neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 104033a1 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 104033a3 and eax, 0x35 */ { u32 a_ = eax, b_ = 0x35u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104033a6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104033a7 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 104033a8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104033a9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104033b0(CPU *c) {
  NATIVE_HOOK(0x104033b0u) REGS; LOADALL;
L_104033b0:;
  /* 104033b0 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104033b6 call 0x10404a00 */ esp -= 4; M32(esp) = 0x104033bbu; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x104033b6u); RETCHK(0x104033bbu, 0x104033b6u); LOADALL;
  /* 104033bb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104033c0(CPU *c) {
  NATIVE_HOOK(0x104033c0u) REGS; LOADALL;
L_104033c0:;
  /* 104033c0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104033c1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104033c2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104033c3 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 104033c7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104033c9 mov ax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 104033cd mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 104033cf lea ecx, [ebx + 0x10000] */ ecx = (u32)((u32)(ebx + 0x10000u));
  /* 104033d5 mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 104033d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104033da call 0x10404a70 */ esp -= 4; M32(esp) = 0x104033dfu; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x104033dau); RETCHK(0x104033dfu, 0x104033dau); LOADALL;
  /* 104033df cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104033e2 jne 0x104033ec */ if (!ZF_) goto L_104033ec;
  /* 104033e4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104033e5 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104033e7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104033e8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104033e9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104033ec:;
  /* 104033ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104033ed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104033ee xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 104033f0 lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
L_104033f3:;
  /* 104033f3 movzx ecx, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M16(m_)); }
  /* 104033f7 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104033f9 jge 0x10403411 */ if (!LT_) goto L_10403411;
  /* 104033fb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104033fc mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 104033fe call 0x10403280 */ esp -= 4; M32(esp) = 0x10403403u; SAVEALL; F_10403280(c); ABI_CHECK(0x10403280u, 0x104033feu); RETCHK(0x10403403u, 0x104033feu); LOADALL;
  /* 10403403 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403406 je 0x10403422 */ if (ZF_) goto L_10403422;
  /* 10403408 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10403409 add edi, 0x34 */ { u32 a_ = edi, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040340c cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040340f jl 0x104033f3 */ if (LT_) goto L_104033f3;
L_10403411:;
  /* 10403411 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10403415 call 0x10404a00 */ esp -= 4; M32(esp) = 0x1040341au; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10403415u); RETCHK(0x1040341au, 0x10403415u); LOADALL;
  /* 1040341a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040341b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040341c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040341d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040341e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040341f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403422:;
  /* 10403422 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403423 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403424 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403425 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403428 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403429 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040342a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403430(CPU *c) {
  NATIVE_HOOK(0x10403430u) REGS; LOADALL;
L_10403430:;
  /* 10403430 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10403431 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10403432 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 10403436 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10403438 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10403439 lea ecx, [ebx + 0x10000] */ ecx = (u32)((u32)(ebx + 0x10000u));
  /* 1040343f call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10403444u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x1040343fu); RETCHK(0x10403444u, 0x1040343fu); LOADALL;
  /* 10403444 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403447 jne 0x10403450 */ if (!ZF_) goto L_10403450;
  /* 10403449 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040344a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040344c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040344d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403450:;
  /* 10403450 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403451 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403452 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10403454 lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
L_10403457:;
  /* 10403457 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 1040345b cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040345d jge 0x10403475 */ if (!LT_) goto L_10403475;
  /* 1040345f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403460 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10403462 call 0x10403320 */ esp -= 4; M32(esp) = 0x10403467u; SAVEALL; F_10403320(c); ABI_CHECK(0x10403320u, 0x10403462u); RETCHK(0x10403467u, 0x10403462u); LOADALL;
  /* 10403467 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040346a je 0x10403481 */ if (ZF_) goto L_10403481;
  /* 1040346c inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040346d add edi, 0x34 */ { u32 a_ = edi, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403470 cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403473 jl 0x10403457 */ if (LT_) goto L_10403457;
L_10403475:;
  /* 10403475 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403476 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403477 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403478 mov eax, 0x344 */ { eax = (u32)(0x344u); }
  /* 1040347d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040347e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403481:;
  /* 10403481 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403482 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403483 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403484 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403487 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403488 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403490(CPU *c) {
  NATIVE_HOOK(0x10403490u) REGS; LOADALL;
L_10403490:;
  /* 10403490 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403491 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403492 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403496 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10403498 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040349e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040349f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104034a1 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104034a6u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104034a1u); RETCHK(0x104034a6u, 0x104034a1u); LOADALL;
  /* 104034a6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104034a9 je 0x10403502 */ if (ZF_) goto L_10403502;
  /* 104034ab push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 104034ad lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 104034b0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104034b1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104034b3 call 0x10404c20 */ esp -= 4; M32(esp) = 0x104034b8u; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x104034b3u); RETCHK(0x104034b8u, 0x104034b3u); LOADALL;
  /* 104034b8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104034bb je 0x10403502 */ if (ZF_) goto L_10403502;
  /* 104034bd xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 104034bf mov dx, word ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 104034c3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104034c5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104034c6 call 0x10404a70 */ esp -= 4; M32(esp) = 0x104034cbu; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x104034c6u); RETCHK(0x104034cbu, 0x104034c6u); LOADALL;
  /* 104034cb cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104034ce je 0x10403502 */ if (ZF_) goto L_10403502;
  /* 104034d0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104034d2 mov al, byte ptr [edi + 0x26] */ { const u32 m_ = (u32)(edi + 0x26u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104034d5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104034d7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104034d8 call 0x10404a10 */ esp -= 4; M32(esp) = 0x104034ddu; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x104034d8u); RETCHK(0x104034ddu, 0x104034d8u); LOADALL;
  /* 104034dd cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104034e0 je 0x10403502 */ if (ZF_) goto L_10403502;
  /* 104034e2 mov ecx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 104034e5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104034e6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104034e8 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104034edu; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104034e8u); RETCHK(0x104034edu, 0x104034e8u); LOADALL;
  /* 104034ed cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104034f0 je 0x10403502 */ if (ZF_) goto L_10403502;
  /* 104034f2 mov edx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); edx = (u32)(M32(m_)); }
  /* 104034f5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104034f6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104034f8 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104034fdu; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104034f8u); RETCHK(0x104034fdu, 0x104034f8u); LOADALL;
  /* 104034fd cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403500 jne 0x1040350a */ if (!ZF_) goto L_1040350a;
L_10403502:;
  /* 10403502 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403503 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403506 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403507 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1040350a:;
  /* 1040350a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040350c call 0x10404a00 */ esp -= 4; M32(esp) = 0x10403511u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x1040350cu); RETCHK(0x10403511u, 0x1040350cu); LOADALL;
  /* 10403511 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403512 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403513 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403520(CPU *c) {
  NATIVE_HOOK(0x10403520u) REGS; LOADALL;
L_10403520:;
  /* 10403520 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403521 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403522 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403526 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040352c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040352d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040352f call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403534u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x1040352fu); RETCHK(0x10403534u, 0x1040352fu); LOADALL;
  /* 10403534 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403537 jne 0x10403541 */ if (!ZF_) goto L_10403541;
L_10403539:;
  /* 10403539 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040353a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040353d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040353e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403541:;
  /* 10403541 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10403543 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10403546 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403547 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403549 call 0x10404b70 */ esp -= 4; M32(esp) = 0x1040354eu; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x10403549u); RETCHK(0x1040354eu, 0x10403549u); LOADALL;
  /* 1040354e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403551 je 0x10403539 */ if (ZF_) goto L_10403539;
  /* 10403553 lea ecx, [edi + 0x24] */ ecx = (u32)((u32)(edi + 0x24u));
  /* 10403556 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10403557 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403559 call 0x10404ab0 */ esp -= 4; M32(esp) = 0x1040355eu; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x10403559u); RETCHK(0x1040355eu, 0x10403559u); LOADALL;
  /* 1040355e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403561 je 0x10403539 */ if (ZF_) goto L_10403539;
  /* 10403563 lea edx, [edi + 0x26] */ edx = (u32)((u32)(edi + 0x26u));
  /* 10403566 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10403567 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403569 call 0x10404a40 */ esp -= 4; M32(esp) = 0x1040356eu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10403569u); RETCHK(0x1040356eu, 0x10403569u); LOADALL;
  /* 1040356e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403571 je 0x10403539 */ if (ZF_) goto L_10403539;
  /* 10403573 lea eax, [edi + 0x28] */ eax = (u32)((u32)(edi + 0x28u));
  /* 10403576 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403577 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403579 call 0x10404b30 */ esp -= 4; M32(esp) = 0x1040357eu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403579u); RETCHK(0x1040357eu, 0x10403579u); LOADALL;
  /* 1040357e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403581 je 0x10403539 */ if (ZF_) goto L_10403539;
  /* 10403583 add edi, 0x2c */ { u32 a_ = edi, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403586 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403587 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403589 call 0x10404b30 */ esp -= 4; M32(esp) = 0x1040358eu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403589u); RETCHK(0x1040358eu, 0x10403589u); LOADALL;
  /* 1040358e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040358f neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10403591 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10403593 and eax, 0x31 */ { u32 a_ = eax, b_ = 0x31u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403596 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403597 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10403598 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403599 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104035a0(CPU *c) {
  NATIVE_HOOK(0x104035a0u) REGS; LOADALL;
L_104035a0:;
  /* 104035a0 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 104035a5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104035b0(CPU *c) {
  NATIVE_HOOK(0x104035b0u) REGS; LOADALL;
L_104035b0:;
  /* 104035b0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104035b1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104035b2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104035b3 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 104035b7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104035b9 mov ax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 104035bd mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 104035bf lea ecx, [ebx + 0x10000] */ ecx = (u32)((u32)(ebx + 0x10000u));
  /* 104035c5 mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 104035c9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104035ca call 0x10404a70 */ esp -= 4; M32(esp) = 0x104035cfu; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x104035cau); RETCHK(0x104035cfu, 0x104035cau); LOADALL;
  /* 104035cf cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104035d2 jne 0x104035dc */ if (!ZF_) goto L_104035dc;
  /* 104035d4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104035d5 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104035d7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104035d8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104035d9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104035dc:;
  /* 104035dc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104035dd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104035de xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 104035e0 lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
L_104035e3:;
  /* 104035e3 movzx ecx, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M16(m_)); }
  /* 104035e7 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104035e9 jge 0x10403601 */ if (!LT_) goto L_10403601;
  /* 104035eb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104035ec mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 104035ee call 0x10403490 */ esp -= 4; M32(esp) = 0x104035f3u; SAVEALL; F_10403490(c); ABI_CHECK(0x10403490u, 0x104035eeu); RETCHK(0x104035f3u, 0x104035eeu); LOADALL;
  /* 104035f3 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104035f6 je 0x10403612 */ if (ZF_) goto L_10403612;
  /* 104035f8 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104035f9 add edi, 0x30 */ { u32 a_ = edi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104035fc cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104035ff jl 0x104035e3 */ if (LT_) goto L_104035e3;
L_10403601:;
  /* 10403601 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10403605 call 0x10404a00 */ esp -= 4; M32(esp) = 0x1040360au; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10403605u); RETCHK(0x1040360au, 0x10403605u); LOADALL;
  /* 1040360a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040360b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040360c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040360d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040360e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040360f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403612:;
  /* 10403612 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403613 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403614 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403615 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403618 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403619 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040361a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403620(CPU *c) {
  NATIVE_HOOK(0x10403620u) REGS; LOADALL;
L_10403620:;
  /* 10403620 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10403621 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10403622 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 10403626 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10403628 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10403629 lea ecx, [ebx + 0x10000] */ ecx = (u32)((u32)(ebx + 0x10000u));
  /* 1040362f call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10403634u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x1040362fu); RETCHK(0x10403634u, 0x1040362fu); LOADALL;
  /* 10403634 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403637 jne 0x10403640 */ if (!ZF_) goto L_10403640;
  /* 10403639 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040363a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040363c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040363d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403640:;
  /* 10403640 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403641 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403642 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10403644 lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
L_10403647:;
  /* 10403647 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 1040364b cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040364d jge 0x10403665 */ if (!LT_) goto L_10403665;
  /* 1040364f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403650 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10403652 call 0x10403520 */ esp -= 4; M32(esp) = 0x10403657u; SAVEALL; F_10403520(c); ABI_CHECK(0x10403520u, 0x10403652u); RETCHK(0x10403657u, 0x10403652u); LOADALL;
  /* 10403657 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040365a je 0x10403671 */ if (ZF_) goto L_10403671;
  /* 1040365c inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040365d add edi, 0x30 */ { u32 a_ = edi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403660 cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403663 jl 0x10403647 */ if (LT_) goto L_10403647;
L_10403665:;
  /* 10403665 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403666 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403667 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403668 mov eax, 0x304 */ { eax = (u32)(0x304u); }
  /* 1040366d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040366e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403671:;
  /* 10403671 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403672 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403673 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403674 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403677 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403678 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403680(CPU *c) {
  NATIVE_HOOK(0x10403680u) REGS; LOADALL;
L_10403680:;
  /* 10403680 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403681 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403682 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403686 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10403688 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040368e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040368f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403691 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403696u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403691u); RETCHK(0x10403696u, 0x10403691u); LOADALL;
  /* 10403696 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403699 je 0x104036b0 */ if (ZF_) goto L_104036b0;
  /* 1040369b push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 104036a0 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104036a3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104036a4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104036a6 call 0x10404c20 */ esp -= 4; M32(esp) = 0x104036abu; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x104036a6u); RETCHK(0x104036abu, 0x104036a6u); LOADALL;
  /* 104036ab cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104036ae jne 0x104036b8 */ if (!ZF_) goto L_104036b8;
L_104036b0:;
  /* 104036b0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104036b1 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104036b4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104036b5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104036b8:;
  /* 104036b8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104036ba call 0x10404a00 */ esp -= 4; M32(esp) = 0x104036bfu; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x104036bau); RETCHK(0x104036bfu, 0x104036bau); LOADALL;
  /* 104036bf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104036c0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104036c1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104036d0(CPU *c) {
  NATIVE_HOOK(0x104036d0u) REGS; LOADALL;
L_104036d0:;
  /* 104036d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104036d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104036d2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 104036d6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 104036dc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104036dd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104036df call 0x10404b30 */ esp -= 4; M32(esp) = 0x104036e4u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x104036dfu); RETCHK(0x104036e4u, 0x104036dfu); LOADALL;
  /* 104036e4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104036e7 jne 0x104036f0 */ if (!ZF_) goto L_104036f0;
  /* 104036e9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104036ea or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104036ec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104036ed ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104036f0:;
  /* 104036f0 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 104036f5 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104036f8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104036f9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104036fb call 0x10404b70 */ esp -= 4; M32(esp) = 0x10403700u; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x104036fbu); RETCHK(0x10403700u, 0x104036fbu); LOADALL;
  /* 10403700 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10403701 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10403703 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10403705 and eax, 0x105 */ { u32 a_ = eax, b_ = 0x105u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040370a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040370b dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1040370c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040370d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403710(CPU *c) {
  NATIVE_HOOK(0x10403710u) REGS; LOADALL;
L_10403710:;
  /* 10403710 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10403711 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403712 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403713 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10403717 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10403719 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1040371b lea ebx, [esi + 0x10000] */ ebx = (u32)((u32)(esi + 0x10000u));
  /* 10403721 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403722 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10403724 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403729u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403724u); RETCHK(0x10403729u, 0x10403724u); LOADALL;
  /* 10403729 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040372c je 0x10403752 */ if (ZF_) goto L_10403752;
  /* 1040372e lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10403731 mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 10403733 sub edi, 0 */ { u32 a_ = edi, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403736 je 0x10403745 */ if (ZF_) goto L_10403745;
  /* 10403738 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10403739 jne 0x10403752 */ if (!ZF_) goto L_10403752;
  /* 1040373b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040373c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040373e call 0x10403680 */ esp -= 4; M32(esp) = 0x10403743u; SAVEALL; F_10403680(c); ABI_CHECK(0x10403680u, 0x1040373eu); RETCHK(0x10403743u, 0x1040373eu); LOADALL;
  /* 10403743 jmp 0x1040374d */ goto L_1040374d;
L_10403745:;
  /* 10403745 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403746 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403748 call 0x10402950 */ esp -= 4; M32(esp) = 0x1040374du; SAVEALL; F_10402950(c); ABI_CHECK(0x10402950u, 0x10403748u); RETCHK(0x1040374du, 0x10403748u); LOADALL;
L_1040374d:;
  /* 1040374d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403750 jne 0x1040375b */ if (!ZF_) goto L_1040375b;
L_10403752:;
  /* 10403752 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403753 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403754 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403757 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403758 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1040375b:;
  /* 1040375b mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 1040375d call 0x10404a00 */ esp -= 4; M32(esp) = 0x10403762u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x1040375du); RETCHK(0x10403762u, 0x1040375du); LOADALL;
  /* 10403762 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403763 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403764 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403765 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403770(CPU *c) {
  NATIVE_HOOK(0x10403770u) REGS; LOADALL;
L_10403770:;
  /* 10403770 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403771 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403772 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403776 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10403778 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403779 lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 1040377f call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403784u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x1040377fu); RETCHK(0x10403784u, 0x1040377fu); LOADALL;
  /* 10403784 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403787 je 0x104037ad */ if (ZF_) goto L_104037ad;
  /* 10403789 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 1040378c mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 1040378e sub edi, 0 */ { u32 a_ = edi, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403791 je 0x104037a0 */ if (ZF_) goto L_104037a0;
  /* 10403793 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10403794 jne 0x104037ad */ if (!ZF_) goto L_104037ad;
  /* 10403796 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403797 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403799 call 0x104036d0 */ esp -= 4; M32(esp) = 0x1040379eu; SAVEALL; F_104036d0(c); ABI_CHECK(0x104036d0u, 0x10403799u); RETCHK(0x1040379eu, 0x10403799u); LOADALL;
  /* 1040379e jmp 0x104037a8 */ goto L_104037a8;
L_104037a0:;
  /* 104037a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104037a1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104037a3 call 0x10402ad0 */ esp -= 4; M32(esp) = 0x104037a8u; SAVEALL; F_10402ad0(c); ABI_CHECK(0x10402ad0u, 0x104037a3u); RETCHK(0x104037a8u, 0x104037a3u); LOADALL;
L_104037a8:;
  /* 104037a8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104037ab jne 0x104037b5 */ if (!ZF_) goto L_104037b5;
L_104037ad:;
  /* 104037ad pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104037ae or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104037b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104037b2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104037b5:;
  /* 104037b5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104037b6 mov eax, 0x1124 */ { eax = (u32)(0x1124u); }
  /* 104037bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104037bc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104037c0(CPU *c) {
  NATIVE_HOOK(0x104037c0u) REGS; LOADALL;
L_104037c0:;
  /* 104037c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104037c1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104037c2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 104037c6 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 104037c8 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 104037ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104037cf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104037d1 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104037d6u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104037d1u); RETCHK(0x104037d6u, 0x104037d1u); LOADALL;
  /* 104037d6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104037d9 je 0x104037fe */ if (ZF_) goto L_104037fe;
  /* 104037db mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104037de push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104037df mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104037e1 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104037e6u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104037e1u); RETCHK(0x104037e6u, 0x104037e1u); LOADALL;
  /* 104037e6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104037e9 je 0x104037fe */ if (ZF_) goto L_104037fe;
  /* 104037eb xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 104037ed mov dx, word ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 104037f1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104037f3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104037f4 call 0x10404a70 */ esp -= 4; M32(esp) = 0x104037f9u; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x104037f4u); RETCHK(0x104037f9u, 0x104037f4u); LOADALL;
  /* 104037f9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104037fc jne 0x10403806 */ if (!ZF_) goto L_10403806;
L_104037fe:;
  /* 104037fe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104037ff or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403802 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403803 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403806:;
  /* 10403806 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403808 call 0x10404a00 */ esp -= 4; M32(esp) = 0x1040380du; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10403808u); RETCHK(0x1040380du, 0x10403808u); LOADALL;
  /* 1040380d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040380e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040380f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403820(CPU *c) {
  NATIVE_HOOK(0x10403820u) REGS; LOADALL;
L_10403820:;
  /* 10403820 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403821 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403822 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403826 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040382c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040382d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040382f call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403834u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x1040382fu); RETCHK(0x10403834u, 0x1040382fu); LOADALL;
  /* 10403834 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403837 jne 0x10403841 */ if (!ZF_) goto L_10403841;
L_10403839:;
  /* 10403839 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040383a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040383d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040383e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403841:;
  /* 10403841 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10403844 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403845 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403847 call 0x10404b30 */ esp -= 4; M32(esp) = 0x1040384cu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403847u); RETCHK(0x1040384cu, 0x10403847u); LOADALL;
  /* 1040384c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040384f je 0x10403839 */ if (ZF_) goto L_10403839;
  /* 10403851 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403854 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403855 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403857 call 0x10404ab0 */ esp -= 4; M32(esp) = 0x1040385cu; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x10403857u); RETCHK(0x1040385cu, 0x10403857u); LOADALL;
  /* 1040385c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040385d neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 1040385f sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10403861 and eax, 0xd */ { u32 a_ = eax, b_ = 0xdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403864 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403865 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10403866 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403867 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403870(CPU *c) {
  NATIVE_HOOK(0x10403870u) REGS; LOADALL;
L_10403870:;
  /* 10403870 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403871 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403872 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403876 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10403878 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040387e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040387f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403881 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403886u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403881u); RETCHK(0x10403886u, 0x10403881u); LOADALL;
  /* 10403886 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403889 je 0x104038ad */ if (ZF_) goto L_104038ad;
  /* 1040388b mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1040388e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040388f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403891 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403896u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403891u); RETCHK(0x10403896u, 0x10403891u); LOADALL;
  /* 10403896 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403899 je 0x104038ad */ if (ZF_) goto L_104038ad;
  /* 1040389b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1040389d mov dl, byte ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 104038a0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104038a2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104038a3 call 0x10404a10 */ esp -= 4; M32(esp) = 0x104038a8u; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x104038a3u); RETCHK(0x104038a8u, 0x104038a3u); LOADALL;
  /* 104038a8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104038ab jne 0x104038b5 */ if (!ZF_) goto L_104038b5;
L_104038ad:;
  /* 104038ad pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104038ae or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104038b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104038b2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104038b5:;
  /* 104038b5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104038b7 call 0x10404a00 */ esp -= 4; M32(esp) = 0x104038bcu; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x104038b7u); RETCHK(0x104038bcu, 0x104038b7u); LOADALL;
  /* 104038bc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104038bd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104038be ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104038d0(CPU *c) {
  NATIVE_HOOK(0x104038d0u) REGS; LOADALL;
L_104038d0:;
  /* 104038d0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 104038d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104038d5 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 104038db mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 104038dd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104038de mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104038e0 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104038e5u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104038e0u); RETCHK(0x104038e5u, 0x104038e0u); LOADALL;
  /* 104038e5 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104038e8 jne 0x104038f0 */ if (!ZF_) goto L_104038f0;
  /* 104038ea or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104038ec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104038ed ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104038f0:;
  /* 104038f0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104038f2 call 0x10404a00 */ esp -= 4; M32(esp) = 0x104038f7u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x104038f2u); RETCHK(0x104038f7u, 0x104038f2u); LOADALL;
  /* 104038f7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104038f8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403900(CPU *c) {
  NATIVE_HOOK(0x10403900u) REGS; LOADALL;
L_10403900:;
  /* 10403900 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403901 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403902 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403906 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040390c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040390d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040390f call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403914u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x1040390fu); RETCHK(0x10403914u, 0x1040390fu); LOADALL;
  /* 10403914 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403917 jne 0x10403921 */ if (!ZF_) goto L_10403921;
L_10403919:;
  /* 10403919 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040391a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040391d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040391e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403921:;
  /* 10403921 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10403924 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403925 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403927 call 0x10404b30 */ esp -= 4; M32(esp) = 0x1040392cu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403927u); RETCHK(0x1040392cu, 0x10403927u); LOADALL;
  /* 1040392c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040392f je 0x10403919 */ if (ZF_) goto L_10403919;
  /* 10403931 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403934 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403935 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403937 call 0x10404a40 */ esp -= 4; M32(esp) = 0x1040393cu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10403937u); RETCHK(0x1040393cu, 0x10403937u); LOADALL;
  /* 1040393c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040393d neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 1040393f sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10403941 and eax, 0xd */ { u32 a_ = eax, b_ = 0xdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403944 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403945 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10403946 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403947 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403950(CPU *c) {
  NATIVE_HOOK(0x10403950u) REGS; LOADALL;
L_10403950:;
  /* 10403950 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10403951 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403952 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403953 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10403957 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10403959 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 1040395b lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 10403961 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403962 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403964 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403969u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403964u); RETCHK(0x10403969u, 0x10403964u); LOADALL;
  /* 10403969 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040396c je 0x104039b2 */ if (ZF_) goto L_104039b2;
  /* 1040396e mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10403971 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10403972 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403974 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403979u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403974u); RETCHK(0x10403979u, 0x10403974u); LOADALL;
  /* 10403979 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040397c je 0x104039b2 */ if (ZF_) goto L_104039b2;
  /* 1040397e xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10403980 mov dl, byte ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10403983 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403985 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10403986 call 0x10404a10 */ esp -= 4; M32(esp) = 0x1040398bu; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10403986u); RETCHK(0x1040398bu, 0x10403986u); LOADALL;
  /* 1040398b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040398e je 0x104039b2 */ if (ZF_) goto L_104039b2;
  /* 10403990 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403992 mov al, byte ptr [edi + 9] */ { const u32 m_ = (u32)(edi + 0x9u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10403995 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403997 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403998 call 0x10404a10 */ esp -= 4; M32(esp) = 0x1040399du; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10403998u); RETCHK(0x1040399du, 0x10403998u); LOADALL;
  /* 1040399d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104039a0 je 0x104039b2 */ if (ZF_) goto L_104039b2;
  /* 104039a2 add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104039a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104039a6 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 104039a8 call 0x104023c0 */ esp -= 4; M32(esp) = 0x104039adu; SAVEALL; F_104023c0(c); ABI_CHECK(0x104023c0u, 0x104039a8u); RETCHK(0x104039adu, 0x104039a8u); LOADALL;
  /* 104039ad cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104039b0 jne 0x104039bb */ if (!ZF_) goto L_104039bb;
L_104039b2:;
  /* 104039b2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104039b3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104039b4 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104039b7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104039b8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104039bb:;
  /* 104039bb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104039bd call 0x10404a00 */ esp -= 4; M32(esp) = 0x104039c2u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x104039bdu); RETCHK(0x104039c2u, 0x104039bdu); LOADALL;
  /* 104039c2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104039c3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104039c4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104039c5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104039d0(CPU *c) {
  NATIVE_HOOK(0x104039d0u) REGS; LOADALL;
L_104039d0:;
  /* 104039d0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104039d1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104039d2 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 104039d4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104039d5 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 104039d9 lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 104039df push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104039e0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104039e2 call 0x10404b30 */ esp -= 4; M32(esp) = 0x104039e7u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x104039e2u); RETCHK(0x104039e7u, 0x104039e2u); LOADALL;
  /* 104039e7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104039ea jne 0x104039f5 */ if (!ZF_) goto L_104039f5;
L_104039ec:;
  /* 104039ec pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104039ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104039ee or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104039f1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104039f2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104039f5:;
  /* 104039f5 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 104039f8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104039f9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104039fb call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403a00u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x104039fbu); RETCHK(0x10403a00u, 0x104039fbu); LOADALL;
  /* 10403a00 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403a03 je 0x104039ec */ if (ZF_) goto L_104039ec;
  /* 10403a05 lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10403a08 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10403a09 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403a0b call 0x10404a40 */ esp -= 4; M32(esp) = 0x10403a10u; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10403a0bu); RETCHK(0x10403a10u, 0x10403a0bu); LOADALL;
  /* 10403a10 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403a13 je 0x104039ec */ if (ZF_) goto L_104039ec;
  /* 10403a15 lea edx, [edi + 9] */ edx = (u32)((u32)(edi + 0x9u));
  /* 10403a18 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10403a19 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403a1b call 0x10404a40 */ esp -= 4; M32(esp) = 0x10403a20u; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10403a1bu); RETCHK(0x10403a20u, 0x10403a1bu); LOADALL;
  /* 10403a20 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403a23 je 0x104039ec */ if (ZF_) goto L_104039ec;
  /* 10403a25 add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403a28 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403a29 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10403a2b call 0x10402430 */ esp -= 4; M32(esp) = 0x10403a30u; SAVEALL; F_10402430(c); ABI_CHECK(0x10402430u, 0x10403a2bu); RETCHK(0x10403a30u, 0x10403a2bu); LOADALL;
  /* 10403a30 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10403a31 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10403a33 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10403a35 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403a36 and eax, 0xd1 */ { u32 a_ = eax, b_ = 0xd1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403a3b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403a3c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10403a3d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403a3e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403a50(CPU *c) {
  NATIVE_HOOK(0x10403a50u) REGS; LOADALL;
L_10403a50:;
  /* 10403a50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403a51 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403a52 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403a56 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10403a58 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10403a5e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403a5f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403a61 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403a66u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403a61u); RETCHK(0x10403a66u, 0x10403a61u); LOADALL;
  /* 10403a66 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403a69 je 0x10403a9b */ if (ZF_) goto L_10403a9b;
  /* 10403a6b mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10403a6e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10403a6f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403a71 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403a76u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403a71u); RETCHK(0x10403a76u, 0x10403a71u); LOADALL;
  /* 10403a76 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403a79 je 0x10403a9b */ if (ZF_) goto L_10403a9b;
  /* 10403a7b mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 10403a7e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10403a7f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403a81 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403a86u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403a81u); RETCHK(0x10403a86u, 0x10403a81u); LOADALL;
  /* 10403a86 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403a89 je 0x10403a9b */ if (ZF_) goto L_10403a9b;
  /* 10403a8b mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10403a8e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403a8f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403a91 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403a96u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403a91u); RETCHK(0x10403a96u, 0x10403a91u); LOADALL;
  /* 10403a96 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403a99 jne 0x10403aa3 */ if (!ZF_) goto L_10403aa3;
L_10403a9b:;
  /* 10403a9b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403a9c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403a9f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403aa0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403aa3:;
  /* 10403aa3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403aa5 call 0x10404a00 */ esp -= 4; M32(esp) = 0x10403aaau; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10403aa5u); RETCHK(0x10403aaau, 0x10403aa5u); LOADALL;
  /* 10403aaa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403aab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403aac ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403ab0(CPU *c) {
  NATIVE_HOOK(0x10403ab0u) REGS; LOADALL;
L_10403ab0:;
  /* 10403ab0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403ab1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403ab2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403ab6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10403abc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403abd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403abf call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403ac4u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403abfu); RETCHK(0x10403ac4u, 0x10403abfu); LOADALL;
  /* 10403ac4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403ac7 jne 0x10403ad1 */ if (!ZF_) goto L_10403ad1;
L_10403ac9:;
  /* 10403ac9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403aca or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403acd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403ace ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403ad1:;
  /* 10403ad1 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10403ad4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403ad5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403ad7 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403adcu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403ad7u); RETCHK(0x10403adcu, 0x10403ad7u); LOADALL;
  /* 10403adc cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403adf je 0x10403ac9 */ if (ZF_) goto L_10403ac9;
  /* 10403ae1 lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10403ae4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10403ae5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403ae7 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403aecu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403ae7u); RETCHK(0x10403aecu, 0x10403ae7u); LOADALL;
  /* 10403aec cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403aef je 0x10403ac9 */ if (ZF_) goto L_10403ac9;
  /* 10403af1 add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403af4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403af5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403af7 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403afcu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403af7u); RETCHK(0x10403afcu, 0x10403af7u); LOADALL;
  /* 10403afc inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10403afd neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10403aff sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10403b01 and eax, 0x11 */ { u32 a_ = eax, b_ = 0x11u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403b04 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403b05 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10403b06 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403b07 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403b10(CPU *c) {
  NATIVE_HOOK(0x10403b10u) REGS; LOADALL;
L_10403b10:;
  /* 10403b10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10403b11 mov ebp, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebp = (u32)(M32(m_)); }
  /* 10403b15 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403b17 mov ax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10403b1b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403b1c lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10403b22 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403b24 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403b25 call 0x10404a70 */ esp -= 4; M32(esp) = 0x10403b2au; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x10403b25u); RETCHK(0x10403b2au, 0x10403b25u); LOADALL;
  /* 10403b2a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403b2d jne 0x10403b36 */ if (!ZF_) goto L_10403b36;
  /* 10403b2f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403b30 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403b32 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403b33 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403b36:;
  /* 10403b36 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10403b37 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403b38 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10403b3a lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
  /* 10403b3d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_10403b40:;
  /* 10403b40 movzx ecx, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M16(m_)); }
  /* 10403b44 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403b46 jge 0x10403b7f */ if (!LT_) goto L_10403b7f;
  /* 10403b48 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 10403b4a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10403b4b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403b4d call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403b52u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403b4du); RETCHK(0x10403b52u, 0x10403b4du); LOADALL;
  /* 10403b52 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403b55 je 0x10403b8d */ if (ZF_) goto L_10403b8d;
  /* 10403b57 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403b59 mov ax, word ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10403b5d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403b5f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403b60 call 0x10404a70 */ esp -= 4; M32(esp) = 0x10403b65u; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x10403b60u); RETCHK(0x10403b65u, 0x10403b60u); LOADALL;
  /* 10403b65 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403b68 je 0x10403b8d */ if (ZF_) goto L_10403b8d;
  /* 10403b6a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403b6c call 0x10404a00 */ esp -= 4; M32(esp) = 0x10403b71u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10403b6cu); RETCHK(0x10403b71u, 0x10403b6cu); LOADALL;
  /* 10403b71 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403b74 je 0x10403b8d */ if (ZF_) goto L_10403b8d;
  /* 10403b76 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10403b77 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403b7a cmp ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403b7d jl 0x10403b40 */ if (LT_) goto L_10403b40;
L_10403b7f:;
  /* 10403b7f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403b81 call 0x10404a00 */ esp -= 4; M32(esp) = 0x10403b86u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10403b81u); RETCHK(0x10403b86u, 0x10403b81u); LOADALL;
  /* 10403b86 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403b87 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403b88 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403b89 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403b8a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403b8d:;
  /* 10403b8d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403b8e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403b8f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403b90 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403b93 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403b94 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403ba0(CPU *c) {
  NATIVE_HOOK(0x10403ba0u) REGS; LOADALL;
L_10403ba0:;
  /* 10403ba0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10403ba1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10403ba2 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 10403ba6 lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 10403bac push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10403bad mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10403baf call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10403bb4u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x10403bafu); RETCHK(0x10403bb4u, 0x10403bafu); LOADALL;
  /* 10403bb4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403bb7 jne 0x10403bc0 */ if (!ZF_) goto L_10403bc0;
  /* 10403bb9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403bba or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403bbc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403bbd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403bc0:;
  /* 10403bc0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403bc1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403bc2 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10403bc4 lea esi, [ebp + 4] */ esi = (u32)((u32)(ebp + 0x4u));
L_10403bc7:;
  /* 10403bc7 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 10403bcb cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403bcd jge 0x10403bf5 */ if (!LT_) goto L_10403bf5;
  /* 10403bcf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403bd0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10403bd2 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403bd7u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403bd2u); RETCHK(0x10403bd7u, 0x10403bd2u); LOADALL;
  /* 10403bd7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403bda je 0x10403c01 */ if (ZF_) goto L_10403c01;
  /* 10403bdc lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 10403bdf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10403be0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10403be2 call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10403be7u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x10403be2u); RETCHK(0x10403be7u, 0x10403be2u); LOADALL;
  /* 10403be7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403bea je 0x10403c01 */ if (ZF_) goto L_10403c01;
  /* 10403bec inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10403bed add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10403bf0 cmp edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403bf3 jl 0x10403bc7 */ if (LT_) goto L_10403bc7;
L_10403bf5:;
  /* 10403bf5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403bf6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403bf7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403bf8 mov eax, 0x84 */ { eax = (u32)(0x84u); }
  /* 10403bfd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403bfe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403c01:;
  /* 10403c01 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403c02 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403c03 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403c04 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403c07 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403c08 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403c10(CPU *c) {
  NATIVE_HOOK(0x10403c10u) REGS; LOADALL;
L_10403c10:;
  /* 10403c10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403c11 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403c12 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403c16 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403c18 mov ax, word ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10403c1b lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10403c21 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403c23 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403c24 call 0x10404a70 */ esp -= 4; M32(esp) = 0x10403c29u; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x10403c24u); RETCHK(0x10403c29u, 0x10403c24u); LOADALL;
  /* 10403c29 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403c2c je 0x10403c50 */ if (ZF_) goto L_10403c50;
  /* 10403c2e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10403c30 mov cl, byte ptr [edi + 2] */ { const u32 m_ = (u32)(edi + 0x2u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10403c33 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10403c34 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403c36 call 0x10404a10 */ esp -= 4; M32(esp) = 0x10403c3bu; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10403c36u); RETCHK(0x10403c3bu, 0x10403c36u); LOADALL;
  /* 10403c3b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403c3e je 0x10403c50 */ if (ZF_) goto L_10403c50;
  /* 10403c40 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10403c43 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10403c44 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403c46 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403c4bu; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403c46u); RETCHK(0x10403c4bu, 0x10403c46u); LOADALL;
  /* 10403c4b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403c4e jne 0x10403c58 */ if (!ZF_) goto L_10403c58;
L_10403c50:;
  /* 10403c50 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403c51 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403c54 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403c55 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403c58:;
  /* 10403c58 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403c5a call 0x10404a00 */ esp -= 4; M32(esp) = 0x10403c5fu; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10403c5au); RETCHK(0x10403c5fu, 0x10403c5au); LOADALL;
  /* 10403c5f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403c60 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403c61 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403c70(CPU *c) {
  NATIVE_HOOK(0x10403c70u) REGS; LOADALL;
L_10403c70:;
  /* 10403c70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403c71 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403c72 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403c76 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10403c7c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403c7d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403c7f call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10403c84u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x10403c7fu); RETCHK(0x10403c84u, 0x10403c7fu); LOADALL;
  /* 10403c84 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403c87 jne 0x10403c91 */ if (!ZF_) goto L_10403c91;
L_10403c89:;
  /* 10403c89 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403c8a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403c8d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403c8e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403c91:;
  /* 10403c91 lea eax, [edi + 2] */ eax = (u32)((u32)(edi + 0x2u));
  /* 10403c94 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403c95 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403c97 call 0x10404a40 */ esp -= 4; M32(esp) = 0x10403c9cu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10403c97u); RETCHK(0x10403c9cu, 0x10403c97u); LOADALL;
  /* 10403c9c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403c9f je 0x10403c89 */ if (ZF_) goto L_10403c89;
  /* 10403ca1 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403ca4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403ca5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403ca7 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403cacu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403ca7u); RETCHK(0x10403cacu, 0x10403ca7u); LOADALL;
  /* 10403cac inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10403cad neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10403caf sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10403cb1 and eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403cb4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403cb5 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10403cb6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403cb7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403cc0(CPU *c) {
  NATIVE_HOOK(0x10403cc0u) REGS; LOADALL;
L_10403cc0:;
  /* 10403cc0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10403cc1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10403cc2 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10403cc6 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10403cc8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10403cc9 mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 10403ccb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403ccc lea esi, [ebp + 0x10000] */ esi = (u32)((u32)(ebp + 0x10000u));
  /* 10403cd2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403cd3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403cd5 mov dword ptr [esp + 0x10], esi */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(esi); }
  /* 10403cd9 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403cdeu; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403cd9u); RETCHK(0x10403cdeu, 0x10403cd9u); LOADALL;
  /* 10403cde cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403ce1 je 0x10403cf6 */ if (ZF_) goto L_10403cf6;
  /* 10403ce3 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10403ce5 mov cx, word ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10403ce9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10403cea mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403cec call 0x10404a70 */ esp -= 4; M32(esp) = 0x10403cf1u; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x10403cecu); RETCHK(0x10403cf1u, 0x10403cecu); LOADALL;
  /* 10403cf1 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403cf4 jne 0x10403d00 */ if (!ZF_) goto L_10403d00;
L_10403cf6:;
  /* 10403cf6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403cf7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403cf8 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403cfb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403cfc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10403cfd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403d00:;
  /* 10403d00 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403d01 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10403d03 lea edi, [ebx + 8] */ edi = (u32)((u32)(ebx + 0x8u));
L_10403d06:;
  /* 10403d06 movzx edx, word ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M16(m_)); }
  /* 10403d0a cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403d0c jge 0x10403d27 */ if (!LT_) goto L_10403d27;
  /* 10403d0e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403d0f mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10403d11 call 0x10403c10 */ esp -= 4; M32(esp) = 0x10403d16u; SAVEALL; F_10403c10(c); ABI_CHECK(0x10403c10u, 0x10403d11u); RETCHK(0x10403d16u, 0x10403d11u); LOADALL;
  /* 10403d16 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403d19 je 0x10403d38 */ if (ZF_) goto L_10403d38;
  /* 10403d1b inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10403d1c add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403d1f cmp esi, 0x100 */ { u32 a_ = esi, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403d25 jl 0x10403d06 */ if (LT_) goto L_10403d06;
L_10403d27:;
  /* 10403d27 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10403d2b call 0x10404a00 */ esp -= 4; M32(esp) = 0x10403d30u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10403d2bu); RETCHK(0x10403d30u, 0x10403d2bu); LOADALL;
  /* 10403d30 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403d31 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403d32 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403d33 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403d34 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10403d35 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403d38:;
  /* 10403d38 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403d39 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403d3a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403d3b or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403d3e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403d3f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10403d40 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403d50(CPU *c) {
  NATIVE_HOOK(0x10403d50u) REGS; LOADALL;
L_10403d50:;
  /* 10403d50 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10403d51 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403d52 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10403d54 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403d55 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10403d59 lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 10403d5f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403d60 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403d62 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403d67u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403d62u); RETCHK(0x10403d67u, 0x10403d62u); LOADALL;
  /* 10403d67 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403d6a jne 0x10403d74 */ if (!ZF_) goto L_10403d74;
  /* 10403d6c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403d6d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403d6e or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403d70 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403d71 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403d74:;
  /* 10403d74 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10403d75 lea ebp, [edi + 4] */ ebp = (u32)((u32)(edi + 0x4u));
  /* 10403d78 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10403d79 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403d7b call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10403d80u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x10403d7bu); RETCHK(0x10403d80u, 0x10403d7bu); LOADALL;
  /* 10403d80 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403d83 jne 0x10403d8f */ if (!ZF_) goto L_10403d8f;
L_10403d85:;
  /* 10403d85 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403d86 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403d87 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403d88 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403d8b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403d8c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403d8f:;
  /* 10403d8f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10403d91 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10403d94:;
  /* 10403d94 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 10403d98 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403d9a jge 0x10403db5 */ if (!LT_) goto L_10403db5;
  /* 10403d9c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403d9d mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10403d9f call 0x10403c70 */ esp -= 4; M32(esp) = 0x10403da4u; SAVEALL; F_10403c70(c); ABI_CHECK(0x10403c70u, 0x10403d9fu); RETCHK(0x10403da4u, 0x10403d9fu); LOADALL;
  /* 10403da4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403da7 je 0x10403d85 */ if (ZF_) goto L_10403d85;
  /* 10403da9 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10403daa add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403dad cmp esi, 0x100 */ { u32 a_ = esi, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403db3 jl 0x10403d94 */ if (LT_) goto L_10403d94;
L_10403db5:;
  /* 10403db5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403db6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403db7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403db8 mov eax, 0x808 */ { eax = (u32)(0x808u); }
  /* 10403dbd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403dbe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403dd0(CPU *c) {
  NATIVE_HOOK(0x10403dd0u) REGS; LOADALL;
L_10403dd0:;
  /* 10403dd0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10403dd4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403dd5 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10403ddb call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403de0u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403ddbu); RETCHK(0x10403de0u, 0x10403ddbu); LOADALL;
  /* 10403de0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10403de1 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10403de3 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10403de5 and eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403de8 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10403de9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403df0(CPU *c) {
  NATIVE_HOOK(0x10403df0u) REGS; LOADALL;
L_10403df0:;
  /* 10403df0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403df1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403df2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403df6 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10403df8 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10403dfe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403dff mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403e01 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403e06u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403e01u); RETCHK(0x10403e06u, 0x10403e01u); LOADALL;
  /* 10403e06 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403e09 je 0x10403e40 */ if (ZF_) goto L_10403e40;
  /* 10403e0b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10403e0d mov cx, word ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10403e11 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10403e12 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403e14 call 0x10404a70 */ esp -= 4; M32(esp) = 0x10403e19u; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x10403e14u); RETCHK(0x10403e19u, 0x10403e14u); LOADALL;
  /* 10403e19 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403e1c je 0x10403e40 */ if (ZF_) goto L_10403e40;
  /* 10403e1e xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10403e20 mov dl, byte ptr [edi + 6] */ { const u32 m_ = (u32)(edi + 0x6u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10403e23 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403e25 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10403e26 call 0x10404a10 */ esp -= 4; M32(esp) = 0x10403e2bu; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10403e26u); RETCHK(0x10403e2bu, 0x10403e26u); LOADALL;
  /* 10403e2b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403e2e je 0x10403e40 */ if (ZF_) goto L_10403e40;
  /* 10403e30 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10403e33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403e34 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403e36 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403e3bu; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403e36u); RETCHK(0x10403e3bu, 0x10403e36u); LOADALL;
  /* 10403e3b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403e3e jne 0x10403e48 */ if (!ZF_) goto L_10403e48;
L_10403e40:;
  /* 10403e40 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403e41 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403e44 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403e45 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403e48:;
  /* 10403e48 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403e4a call 0x10404a00 */ esp -= 4; M32(esp) = 0x10403e4fu; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10403e4au); RETCHK(0x10403e4fu, 0x10403e4au); LOADALL;
  /* 10403e4f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403e50 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403e51 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403e60(CPU *c) {
  NATIVE_HOOK(0x10403e60u) REGS; LOADALL;
L_10403e60:;
  /* 10403e60 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403e61 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403e62 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10403e66 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10403e6c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403e6d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403e6f call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403e74u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403e6fu); RETCHK(0x10403e74u, 0x10403e6fu); LOADALL;
  /* 10403e74 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403e77 jne 0x10403e81 */ if (!ZF_) goto L_10403e81;
L_10403e79:;
  /* 10403e79 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403e7a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403e7d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403e7e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403e81:;
  /* 10403e81 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10403e84 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403e85 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403e87 call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10403e8cu; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x10403e87u); RETCHK(0x10403e8cu, 0x10403e87u); LOADALL;
  /* 10403e8c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403e8f je 0x10403e79 */ if (ZF_) goto L_10403e79;
  /* 10403e91 lea ecx, [edi + 6] */ ecx = (u32)((u32)(edi + 0x6u));
  /* 10403e94 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10403e95 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403e97 call 0x10404a40 */ esp -= 4; M32(esp) = 0x10403e9cu; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x10403e97u); RETCHK(0x10403e9cu, 0x10403e97u); LOADALL;
  /* 10403e9c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403e9f je 0x10403e79 */ if (ZF_) goto L_10403e79;
  /* 10403ea1 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403ea4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403ea5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403ea7 call 0x10404b30 */ esp -= 4; M32(esp) = 0x10403eacu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10403ea7u); RETCHK(0x10403eacu, 0x10403ea7u); LOADALL;
  /* 10403eac inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10403ead neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10403eaf sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10403eb1 and eax, 0xd */ { u32 a_ = eax, b_ = 0xdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403eb4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403eb5 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10403eb6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403eb7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403ec0(CPU *c) {
  NATIVE_HOOK(0x10403ec0u) REGS; LOADALL;
L_10403ec0:;
  /* 10403ec0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10403ec1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10403ec2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10403ec3 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 10403ec7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403ec9 mov ax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10403ecd mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10403ecf lea ecx, [ebx + 0x10000] */ ecx = (u32)((u32)(ebx + 0x10000u));
  /* 10403ed5 mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10403ed9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403eda call 0x10404a70 */ esp -= 4; M32(esp) = 0x10403edfu; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x10403edau); RETCHK(0x10403edfu, 0x10403edau); LOADALL;
  /* 10403edf cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403ee2 jne 0x10403eec */ if (!ZF_) goto L_10403eec;
  /* 10403ee4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403ee5 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403ee7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403ee8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10403ee9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403eec:;
  /* 10403eec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403eed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403eee xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10403ef0 lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
L_10403ef3:;
  /* 10403ef3 movzx ecx, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M16(m_)); }
  /* 10403ef7 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403ef9 jge 0x10403f14 */ if (!LT_) goto L_10403f14;
  /* 10403efb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403efc mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10403efe call 0x10403df0 */ esp -= 4; M32(esp) = 0x10403f03u; SAVEALL; F_10403df0(c); ABI_CHECK(0x10403df0u, 0x10403efeu); RETCHK(0x10403f03u, 0x10403efeu); LOADALL;
  /* 10403f03 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403f06 je 0x10403f25 */ if (ZF_) goto L_10403f25;
  /* 10403f08 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10403f09 add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403f0c cmp esi, 0x100 */ { u32 a_ = esi, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403f12 jl 0x10403ef3 */ if (LT_) goto L_10403ef3;
L_10403f14:;
  /* 10403f14 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10403f18 call 0x10404a00 */ esp -= 4; M32(esp) = 0x10403f1du; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10403f18u); RETCHK(0x10403f1du, 0x10403f18u); LOADALL;
  /* 10403f1d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403f1e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403f1f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403f20 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403f21 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10403f22 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403f25:;
  /* 10403f25 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403f26 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403f27 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403f28 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403f2b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403f2c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10403f2d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403f30(CPU *c) {
  NATIVE_HOOK(0x10403f30u) REGS; LOADALL;
L_10403f30:;
  /* 10403f30 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10403f31 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10403f32 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 10403f36 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10403f38 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10403f39 lea ecx, [ebx + 0x10000] */ ecx = (u32)((u32)(ebx + 0x10000u));
  /* 10403f3f call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10403f44u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x10403f3fu); RETCHK(0x10403f44u, 0x10403f3fu); LOADALL;
  /* 10403f44 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403f47 jne 0x10403f50 */ if (!ZF_) goto L_10403f50;
  /* 10403f49 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403f4a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403f4c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403f4d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403f50:;
  /* 10403f50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403f51 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403f52 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10403f54 lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
L_10403f57:;
  /* 10403f57 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 10403f5b cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403f5d jge 0x10403f78 */ if (!LT_) goto L_10403f78;
  /* 10403f5f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403f60 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10403f62 call 0x10403e60 */ esp -= 4; M32(esp) = 0x10403f67u; SAVEALL; F_10403e60(c); ABI_CHECK(0x10403e60u, 0x10403f62u); RETCHK(0x10403f67u, 0x10403f62u); LOADALL;
  /* 10403f67 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403f6a je 0x10403f84 */ if (ZF_) goto L_10403f84;
  /* 10403f6c inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10403f6d add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10403f70 cmp esi, 0x100 */ { u32 a_ = esi, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403f76 jl 0x10403f57 */ if (LT_) goto L_10403f57;
L_10403f78:;
  /* 10403f78 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403f79 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403f7a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403f7b mov eax, 0xc04 */ { eax = (u32)(0xc04u); }
  /* 10403f80 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403f81 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403f84:;
  /* 10403f84 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10403f85 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403f86 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403f87 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403f8a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10403f8b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10403f90(CPU *c) {
  NATIVE_HOOK(0x10403f90u) REGS; LOADALL;
L_10403f90:;
  /* 10403f90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10403f91 mov ebp, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebp = (u32)(M32(m_)); }
  /* 10403f95 mov eax, dword ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M32(m_)); }
  /* 10403f98 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10403f99 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10403f9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403fa0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403fa2 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403fa7u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403fa2u); RETCHK(0x10403fa7u, 0x10403fa2u); LOADALL;
  /* 10403fa7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403faa je 0x10403fbf */ if (ZF_) goto L_10403fbf;
  /* 10403fac xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10403fae mov cx, word ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10403fb2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10403fb3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403fb5 call 0x10404a70 */ esp -= 4; M32(esp) = 0x10403fbau; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x10403fb5u); RETCHK(0x10403fbau, 0x10403fb5u); LOADALL;
  /* 10403fba cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403fbd jne 0x10403fc7 */ if (!ZF_) goto L_10403fc7;
L_10403fbf:;
  /* 10403fbf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10403fc0 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10403fc3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10403fc4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10403fc7:;
  /* 10403fc7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10403fc8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403fc9 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10403fcb lea edi, [ebp + 8] */ edi = (u32)((u32)(ebp + 0x8u));
  /* 10403fce mov edi, edi */ { edi = (u32)(edi); }
L_10403fd0:;
  /* 10403fd0 movzx edx, word ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); edx = (u32)(M16(m_)); }
  /* 10403fd4 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403fd6 jge 0x1040400f */ if (!LT_) goto L_1040400f;
  /* 10403fd8 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10403fda push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10403fdb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403fdd call 0x10404c20 */ esp -= 4; M32(esp) = 0x10403fe2u; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x10403fddu); RETCHK(0x10403fe2u, 0x10403fddu); LOADALL;
  /* 10403fe2 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403fe5 je 0x1040401d */ if (ZF_) goto L_1040401d;
  /* 10403fe7 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 10403fea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10403feb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403fed call 0x10404af0 */ esp -= 4; M32(esp) = 0x10403ff2u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10403fedu); RETCHK(0x10403ff2u, 0x10403fedu); LOADALL;
  /* 10403ff2 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10403ff5 je 0x1040401d */ if (ZF_) goto L_1040401d;
  /* 10403ff7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10403ff9 call 0x10404a00 */ esp -= 4; M32(esp) = 0x10403ffeu; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10403ff9u); RETCHK(0x10403ffeu, 0x10403ff9u); LOADALL;
  /* 10403ffe cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404001 je 0x1040401d */ if (ZF_) goto L_1040401d;
  /* 10404003 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10404004 add edi, 0x24 */ { u32 a_ = edi, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10404007 cmp ebx, 0x80 */ { u32 a_ = ebx, b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040400d jl 0x10403fd0 */ if (LT_) goto L_10403fd0;
L_1040400f:;
  /* 1040400f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10404011 call 0x10404a00 */ esp -= 4; M32(esp) = 0x10404016u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10404011u); RETCHK(0x10404016u, 0x10404011u); LOADALL;
  /* 10404016 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10404017 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404018 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404019 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040401a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1040401d:;
  /* 1040401d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040401e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040401f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404020 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404023 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10404024 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10404030(CPU *c) {
  NATIVE_HOOK(0x10404030u) REGS; LOADALL;
L_10404030:;
  /* 10404030 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404031 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10404035 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10404036 lea edi, [ecx + 0x10000] */ edi = (u32)((u32)(ecx + 0x10000u));
  /* 1040403c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040403d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 1040403f call 0x10404b30 */ esp -= 4; M32(esp) = 0x10404044u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x1040403fu); RETCHK(0x10404044u, 0x1040403fu); LOADALL;
  /* 10404044 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404047 jne 0x10404050 */ if (!ZF_) goto L_10404050;
  /* 10404049 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040404a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040404c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040404d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10404050:;
  /* 10404050 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10404051 lea ebp, [esi + 4] */ ebp = (u32)((u32)(esi + 0x4u));
  /* 10404054 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10404055 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10404057 call 0x10404ab0 */ esp -= 4; M32(esp) = 0x1040405cu; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x10404057u); RETCHK(0x1040405cu, 0x10404057u); LOADALL;
  /* 1040405c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040405f jne 0x10404069 */ if (!ZF_) goto L_10404069;
  /* 10404061 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10404062 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10404063 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404065 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404066 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10404069:;
  /* 10404069 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040406a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1040406c add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040406f nop */ ;
L_10404070:;
  /* 10404070 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 10404074 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404076 jge 0x104040a3 */ if (!LT_) goto L_104040a3;
  /* 10404078 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1040407a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040407b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 1040407d call 0x10404b70 */ esp -= 4; M32(esp) = 0x10404082u; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x1040407du); RETCHK(0x10404082u, 0x1040407du); LOADALL;
  /* 10404082 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404085 je 0x104040af */ if (ZF_) goto L_104040af;
  /* 10404087 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 1040408a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040408b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 1040408d call 0x10404b30 */ esp -= 4; M32(esp) = 0x10404092u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x1040408du); RETCHK(0x10404092u, 0x1040408du); LOADALL;
  /* 10404092 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404095 je 0x104040af */ if (ZF_) goto L_104040af;
  /* 10404097 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10404098 add esi, 0x24 */ { u32 a_ = esi, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040409b cmp ebx, 0x80 */ { u32 a_ = ebx, b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104040a1 jl 0x10404070 */ if (LT_) goto L_10404070;
L_104040a3:;
  /* 104040a3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104040a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104040a5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104040a6 mov eax, 0x1208 */ { eax = (u32)(0x1208u); }
  /* 104040ab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104040ac ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104040af:;
  /* 104040af pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104040b0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104040b1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104040b2 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104040b5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104040b6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104040c0(CPU *c) {
  NATIVE_HOOK(0x104040c0u) REGS; LOADALL;
L_104040c0:;
  /* 104040c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104040c1 mov ebp, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebp = (u32)(M32(m_)); }
  /* 104040c5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104040c7 mov ax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 104040cb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104040cc lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 104040d2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104040d4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104040d5 call 0x10404a70 */ esp -= 4; M32(esp) = 0x104040dau; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x104040d5u); RETCHK(0x104040dau, 0x104040d5u); LOADALL;
  /* 104040da cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104040dd jne 0x104040e6 */ if (!ZF_) goto L_104040e6;
  /* 104040df pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104040e0 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104040e2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104040e3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104040e6:;
  /* 104040e6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104040e7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104040e8 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 104040ea lea edi, [ebp + 0x28] */ edi = (u32)((u32)(ebp + 0x28u));
  /* 104040ed lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_104040f0:;
  /* 104040f0 movzx ecx, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M16(m_)); }
  /* 104040f4 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104040f6 jge 0x1040413e */ if (!LT_) goto L_1040413e;
  /* 104040f8 mov edx, dword ptr [edi - 0x24] */ { const u32 m_ = (u32)(edi + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 104040fb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104040fc mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104040fe call 0x10404af0 */ esp -= 4; M32(esp) = 0x10404103u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104040feu); RETCHK(0x10404103u, 0x104040feu); LOADALL;
  /* 10404103 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404106 je 0x1040414c */ if (ZF_) goto L_1040414c;
  /* 10404108 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1040410a lea eax, [edi - 0x20] */ eax = (u32)((u32)(edi + 0xffffffe0u));
  /* 1040410d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040410e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10404110 call 0x10404c20 */ esp -= 4; M32(esp) = 0x10404115u; SAVEALL; F_10404c20(c); ABI_CHECK(0x10404c20u, 0x10404110u); RETCHK(0x10404115u, 0x10404110u); LOADALL;
  /* 10404115 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404118 je 0x1040414c */ if (ZF_) goto L_1040414c;
  /* 1040411a mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 1040411c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040411d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040411f call 0x10404af0 */ esp -= 4; M32(esp) = 0x10404124u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x1040411fu); RETCHK(0x10404124u, 0x1040411fu); LOADALL;
  /* 10404124 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404127 je 0x1040414c */ if (ZF_) goto L_1040414c;
  /* 10404129 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040412b call 0x10404a00 */ esp -= 4; M32(esp) = 0x10404130u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x1040412bu); RETCHK(0x10404130u, 0x1040412bu); LOADALL;
  /* 10404130 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404133 je 0x1040414c */ if (ZF_) goto L_1040414c;
  /* 10404135 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10404136 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10404139 cmp ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040413c jl 0x104040f0 */ if (LT_) goto L_104040f0;
L_1040413e:;
  /* 1040413e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10404140 call 0x10404a00 */ esp -= 4; M32(esp) = 0x10404145u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10404140u); RETCHK(0x10404145u, 0x10404140u); LOADALL;
  /* 10404145 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10404146 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404147 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404148 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10404149 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1040414c:;
  /* 1040414c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040414d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040414e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040414f or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404152 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10404153 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10404160(CPU *c) {
  NATIVE_HOOK(0x10404160u) REGS; LOADALL;
L_10404160:;
  /* 10404160 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10404161 mov ebp, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebp = (u32)(M32(m_)); }
  /* 10404165 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10404166 lea edi, [ecx + 0x10000] */ edi = (u32)((u32)(ecx + 0x10000u));
  /* 1040416c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1040416d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 1040416f call 0x10404ab0 */ esp -= 4; M32(esp) = 0x10404174u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x1040416fu); RETCHK(0x10404174u, 0x1040416fu); LOADALL;
  /* 10404174 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404177 jne 0x10404180 */ if (!ZF_) goto L_10404180;
  /* 10404179 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040417a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040417c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040417d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10404180:;
  /* 10404180 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10404181 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404182 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10404184 lea esi, [ebp + 0x28] */ esi = (u32)((u32)(ebp + 0x28u));
L_10404187:;
  /* 10404187 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 1040418b cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040418d jge 0x104041c7 */ if (!LT_) goto L_104041c7;
  /* 1040418f lea ecx, [esi - 0x24] */ ecx = (u32)((u32)(esi + 0xffffffdcu));
  /* 10404192 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10404193 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10404195 call 0x10404b30 */ esp -= 4; M32(esp) = 0x1040419au; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10404195u); RETCHK(0x1040419au, 0x10404195u); LOADALL;
  /* 1040419a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040419d je 0x104041d3 */ if (ZF_) goto L_104041d3;
  /* 1040419f push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 104041a1 lea edx, [esi - 0x20] */ edx = (u32)((u32)(esi + 0xffffffe0u));
  /* 104041a4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104041a5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 104041a7 call 0x10404b70 */ esp -= 4; M32(esp) = 0x104041acu; SAVEALL; F_10404b70(c); ABI_CHECK(0x10404b70u, 0x104041a7u); RETCHK(0x104041acu, 0x104041a7u); LOADALL;
  /* 104041ac cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104041af je 0x104041d3 */ if (ZF_) goto L_104041d3;
  /* 104041b1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104041b2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 104041b4 call 0x10404b30 */ esp -= 4; M32(esp) = 0x104041b9u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x104041b4u); RETCHK(0x104041b9u, 0x104041b4u); LOADALL;
  /* 104041b9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104041bc je 0x104041d3 */ if (ZF_) goto L_104041d3;
  /* 104041be inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104041bf add esi, 0x28 */ { u32 a_ = esi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 104041c2 cmp ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104041c5 jl 0x10404187 */ if (LT_) goto L_10404187;
L_104041c7:;
  /* 104041c7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104041c8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104041c9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104041ca mov eax, 0x284 */ { eax = (u32)(0x284u); }
  /* 104041cf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104041d0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104041d3:;
  /* 104041d3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104041d4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104041d5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104041d6 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104041d9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104041da ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104041e0(CPU *c) {
  NATIVE_HOOK(0x104041e0u) REGS; LOADALL;
L_104041e0:;
  /* 104041e0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104041e1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104041e2 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 104041e6 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 104041e8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104041e9 lea ebp, [ecx + 0x10000] */ ebp = (u32)((u32)(ecx + 0x10000u));
  /* 104041ef mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 104041f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104041f4 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 104041f6 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104041fbu; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104041f6u); RETCHK(0x104041fbu, 0x104041f6u); LOADALL;
  /* 104041fb cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104041fe je 0x10404236 */ if (ZF_) goto L_10404236;
  /* 10404200 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10404202 mov cx, word ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10404206 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10404207 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10404209 call 0x10404a70 */ esp -= 4; M32(esp) = 0x1040420eu; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x10404209u); RETCHK(0x1040420eu, 0x10404209u); LOADALL;
  /* 1040420e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404211 je 0x10404236 */ if (ZF_) goto L_10404236;
  /* 10404213 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10404216 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10404217 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10404219 call 0x10404af0 */ esp -= 4; M32(esp) = 0x1040421eu; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10404219u); RETCHK(0x1040421eu, 0x10404219u); LOADALL;
  /* 1040421e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404221 je 0x10404236 */ if (ZF_) goto L_10404236;
  /* 10404223 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404225 mov ax, word ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10404229 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 1040422b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040422c call 0x10404a70 */ esp -= 4; M32(esp) = 0x10404231u; SAVEALL; F_10404a70(c); ABI_CHECK(0x10404a70u, 0x1040422cu); RETCHK(0x10404231u, 0x1040422cu); LOADALL;
  /* 10404231 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404234 jne 0x1040423f */ if (!ZF_) goto L_1040423f;
L_10404236:;
  /* 10404236 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10404237 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040423a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040423b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040423c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1040423f:;
  /* 1040423f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404240 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10404241 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10404243 lea edi, [ebx + 0x10] */ edi = (u32)((u32)(ebx + 0x10u));
L_10404246:;
  /* 10404246 movzx ecx, word ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M16(m_)); }
  /* 1040424a cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040424c jge 0x10404269 */ if (!LT_) goto L_10404269;
  /* 1040424e mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10404252 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10404253 call 0x10403c10 */ esp -= 4; M32(esp) = 0x10404258u; SAVEALL; F_10403c10(c); ABI_CHECK(0x10403c10u, 0x10404253u); RETCHK(0x10404258u, 0x10404253u); LOADALL;
  /* 10404258 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040425b je 0x10404278 */ if (ZF_) goto L_10404278;
  /* 1040425d inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040425e add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10404261 cmp esi, 0x100 */ { u32 a_ = esi, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404267 jl 0x10404246 */ if (LT_) goto L_10404246;
L_10404269:;
  /* 10404269 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 1040426b call 0x10404a00 */ esp -= 4; M32(esp) = 0x10404270u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x1040426bu); RETCHK(0x10404270u, 0x1040426bu); LOADALL;
  /* 10404270 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10404271 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404272 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10404273 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404274 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10404275 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10404278:;
  /* 10404278 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10404279 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040427a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040427b or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040427e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1040427f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10404280 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10404290(CPU *c) {
  NATIVE_HOOK(0x10404290u) REGS; LOADALL;
L_10404290:;
  /* 10404290 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10404291 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404292 mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 10404294 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10404295 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10404299 lea esi, [ebp + 0x10000] */ esi = (u32)((u32)(ebp + 0x10000u));
  /* 1040429f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104042a0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104042a2 call 0x10404b30 */ esp -= 4; M32(esp) = 0x104042a7u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x104042a2u); RETCHK(0x104042a7u, 0x104042a2u); LOADALL;
  /* 104042a7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104042aa je 0x104042cc */ if (ZF_) goto L_104042cc;
  /* 104042ac lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 104042af push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104042b0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104042b2 call 0x10404ab0 */ esp -= 4; M32(esp) = 0x104042b7u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x104042b2u); RETCHK(0x104042b7u, 0x104042b2u); LOADALL;
  /* 104042b7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104042ba je 0x104042cc */ if (ZF_) goto L_104042cc;
  /* 104042bc lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 104042bf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104042c0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104042c2 call 0x10404b30 */ esp -= 4; M32(esp) = 0x104042c7u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x104042c2u); RETCHK(0x104042c7u, 0x104042c2u); LOADALL;
  /* 104042c7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104042ca jne 0x104042d5 */ if (!ZF_) goto L_104042d5;
L_104042cc:;
  /* 104042cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104042cd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104042ce or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104042d1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104042d2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104042d5:;
  /* 104042d5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104042d6 lea ebx, [edi + 0xc] */ ebx = (u32)((u32)(edi + 0xcu));
  /* 104042d9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104042da mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104042dc call 0x10404ab0 */ esp -= 4; M32(esp) = 0x104042e1u; SAVEALL; F_10404ab0(c); ABI_CHECK(0x10404ab0u, 0x104042dcu); RETCHK(0x104042e1u, 0x104042dcu); LOADALL;
  /* 104042e1 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104042e4 jne 0x104042f0 */ if (!ZF_) goto L_104042f0;
L_104042e6:;
  /* 104042e6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104042e7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104042e8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104042e9 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104042ec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104042ed ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104042f0:;
  /* 104042f0 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 104042f2 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_104042f5:;
  /* 104042f5 movzx edx, word ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M16(m_)); }
  /* 104042f8 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104042fa jge 0x10404315 */ if (!LT_) goto L_10404315;
  /* 104042fc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104042fd mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 104042ff call 0x10403c70 */ esp -= 4; M32(esp) = 0x10404304u; SAVEALL; F_10403c70(c); ABI_CHECK(0x10403c70u, 0x104042ffu); RETCHK(0x10404304u, 0x104042ffu); LOADALL;
  /* 10404304 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404307 je 0x104042e6 */ if (ZF_) goto L_104042e6;
  /* 10404309 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040430a add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1040430d cmp esi, 0x100 */ { u32 a_ = esi, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404313 jl 0x104042f5 */ if (LT_) goto L_104042f5;
L_10404315:;
  /* 10404315 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404316 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10404317 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404318 mov eax, 0x810 */ { eax = (u32)(0x810u); }
  /* 1040431d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1040431e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10404330(CPU *c) {
  NATIVE_HOOK(0x10404330u) REGS; LOADALL;
L_10404330:;
  /* 10404330 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10404331 mov ebx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10404335 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10404337 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404338 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1040433a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040433b lea edi, [esi + 0x10000] */ edi = (u32)((u32)(esi + 0x10000u));
  /* 10404341 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10404342 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10404344 call 0x10404af0 */ esp -= 4; M32(esp) = 0x10404349u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x10404344u); RETCHK(0x10404349u, 0x10404344u); LOADALL;
  /* 10404349 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040434c je 0x1040435e */ if (ZF_) goto L_1040435e;
  /* 1040434e add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10404351 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10404352 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10404354 call 0x104041e0 */ esp -= 4; M32(esp) = 0x10404359u; SAVEALL; F_104041e0(c); ABI_CHECK(0x104041e0u, 0x10404354u); RETCHK(0x10404359u, 0x10404354u); LOADALL;
  /* 10404359 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040435c jne 0x10404367 */ if (!ZF_) goto L_10404367;
L_1040435e:;
  /* 1040435e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040435f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404360 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404363 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404364 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10404367:;
  /* 10404367 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 10404369 call 0x10404a00 */ esp -= 4; M32(esp) = 0x1040436eu; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10404369u); RETCHK(0x1040436eu, 0x10404369u); LOADALL;
  /* 1040436e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040436f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404370 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404371 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10404380(CPU *c) {
  NATIVE_HOOK(0x10404380u) REGS; LOADALL;
L_10404380:;
  /* 10404380 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404381 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10404382 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10404386 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10404388 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10404389 lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 1040438f call 0x10404b30 */ esp -= 4; M32(esp) = 0x10404394u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x1040438fu); RETCHK(0x10404394u, 0x1040438fu); LOADALL;
  /* 10404394 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404397 jne 0x104043a0 */ if (!ZF_) goto L_104043a0;
  /* 10404399 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040439a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040439c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040439d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_104043a0:;
  /* 104043a0 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 104043a3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104043a4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104043a6 call 0x10404290 */ esp -= 4; M32(esp) = 0x104043abu; SAVEALL; F_10404290(c); ABI_CHECK(0x10404290u, 0x104043a6u); RETCHK(0x104043abu, 0x104043a6u); LOADALL;
  /* 104043ab inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104043ac neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 104043ae sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 104043b0 and eax, 0x815 */ { u32 a_ = eax, b_ = 0x815u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104043b5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104043b6 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 104043b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104043b8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104043c0(CPU *c) {
  NATIVE_HOOK(0x104043c0u) REGS; LOADALL;
L_104043c0:;
  /* 104043c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104043c1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104043c2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 104043c6 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 104043c8 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 104043ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104043cf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104043d1 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104043d6u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104043d1u); RETCHK(0x104043d6u, 0x104043d1u); LOADALL;
  /* 104043d6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104043d9 je 0x104043fb */ if (ZF_) goto L_104043fb;
  /* 104043db mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104043de push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104043df mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104043e1 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104043e6u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104043e1u); RETCHK(0x104043e6u, 0x104043e1u); LOADALL;
  /* 104043e6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104043e9 je 0x104043fb */ if (ZF_) goto L_104043fb;
  /* 104043eb mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 104043ee push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104043ef mov ecx, esi */ { ecx = (u32)(esi); }
  /* 104043f1 call 0x10404af0 */ esp -= 4; M32(esp) = 0x104043f6u; SAVEALL; F_10404af0(c); ABI_CHECK(0x10404af0u, 0x104043f1u); RETCHK(0x104043f6u, 0x104043f1u); LOADALL;
  /* 104043f6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104043f9 jne 0x10404403 */ if (!ZF_) goto L_10404403;
L_104043fb:;
  /* 104043fb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104043fc or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104043ff pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404400 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10404403:;
  /* 10404403 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10404405 call 0x10404a00 */ esp -= 4; M32(esp) = 0x1040440au; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10404405u); RETCHK(0x1040440au, 0x10404405u); LOADALL;
  /* 1040440a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040440b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040440c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10404410(CPU *c) {
  NATIVE_HOOK(0x10404410u) REGS; LOADALL;
L_10404410:;
  /* 10404410 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404411 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10404412 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10404416 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040441c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040441d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040441f call 0x10404b30 */ esp -= 4; M32(esp) = 0x10404424u; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x1040441fu); RETCHK(0x10404424u, 0x1040441fu); LOADALL;
  /* 10404424 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404427 jne 0x10404431 */ if (!ZF_) goto L_10404431;
L_10404429:;
  /* 10404429 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040442a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040442d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040442e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10404431:;
  /* 10404431 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10404434 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10404435 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10404437 call 0x10404b30 */ esp -= 4; M32(esp) = 0x1040443cu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10404437u); RETCHK(0x1040443cu, 0x10404437u); LOADALL;
  /* 1040443c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040443f je 0x10404429 */ if (ZF_) goto L_10404429;
  /* 10404441 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10404444 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10404445 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10404447 call 0x10404b30 */ esp -= 4; M32(esp) = 0x1040444cu; SAVEALL; F_10404b30(c); ABI_CHECK(0x10404b30u, 0x10404447u); RETCHK(0x1040444cu, 0x10404447u); LOADALL;
  /* 1040444c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040444d neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 1040444f sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10404451 and eax, 0xd */ { u32 a_ = eax, b_ = 0xdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404454 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10404455 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10404456 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404457 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10404460(CPU *c) {
  NATIVE_HOOK(0x10404460u) REGS; LOADALL;
L_10404460:;
  /* 10404460 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10404464 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404465 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1040446b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 1040446d mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1040446f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10404470 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10404472 call 0x10404a10 */ esp -= 4; M32(esp) = 0x10404477u; SAVEALL; F_10404a10(c); ABI_CHECK(0x10404a10u, 0x10404472u); RETCHK(0x10404477u, 0x10404472u); LOADALL;
  /* 10404477 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040447a jne 0x10404482 */ if (!ZF_) goto L_10404482;
  /* 1040447c or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040447e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040447f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10404482:;
  /* 10404482 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10404484 call 0x10404a00 */ esp -= 4; M32(esp) = 0x10404489u; SAVEALL; F_10404a00(c); ABI_CHECK(0x10404a00u, 0x10404484u); RETCHK(0x10404489u, 0x10404484u); LOADALL;
  /* 10404489 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040448a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10404490(CPU *c) {
  NATIVE_HOOK(0x10404490u) REGS; LOADALL;
L_10404490:;
  /* 10404490 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10404494 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10404495 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1040449b call 0x10404a40 */ esp -= 4; M32(esp) = 0x104044a0u; SAVEALL; F_10404a40(c); ABI_CHECK(0x10404a40u, 0x1040449bu); RETCHK(0x104044a0u, 0x1040449bu); LOADALL;
  /* 104044a0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104044a1 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 104044a3 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 104044a5 and eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104044a8 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 104044a9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104044b0(CPU *c) {
  NATIVE_HOOK(0x104044b0u) REGS; LOADALL;
L_104044b0:;
  /* 104044b0 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 104044b2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104044b3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104044b5 mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 104044ba mov edi, edx */ { edi = (u32)(edx); }
  /* 104044bc rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 104044be mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 104044c3 lea edi, [edx + 0x8000] */ edi = (u32)((u32)(edx + 0x8000u));
  /* 104044c9 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 104044cb mov dword ptr [edx + 0xfa4], 0x10402c40 */ { const u32 m_ = (u32)(edx + 0xfa4u); M32(m_) = (u32)(0x10402c40u); }
  /* 104044d5 mov dword ptr [edx + 0x8fa4], 0x10402ca0 */ { const u32 m_ = (u32)(edx + 0x8fa4u); M32(m_) = (u32)(0x10402ca0u); }
  /* 104044df mov dword ptr [edx + 0xfa8], 0x10402cf0 */ { const u32 m_ = (u32)(edx + 0xfa8u); M32(m_) = (u32)(0x10402cf0u); }
  /* 104044e9 mov dword ptr [edx + 0x8fa8], 0x10402d80 */ { const u32 m_ = (u32)(edx + 0x8fa8u); M32(m_) = (u32)(0x10402d80u); }
  /* 104044f3 mov dword ptr [edx + 0xfac], 0x10402df0 */ { const u32 m_ = (u32)(edx + 0xfacu); M32(m_) = (u32)(0x10402df0u); }
  /* 104044fd mov dword ptr [edx + 0x8fac], 0x10402e20 */ { const u32 m_ = (u32)(edx + 0x8facu); M32(m_) = (u32)(0x10402e20u); }
  /* 10404507 mov dword ptr [edx + 0xfb0], 0x104030e0 */ { const u32 m_ = (u32)(edx + 0xfb0u); M32(m_) = (u32)(0x104030e0u); }
  /* 10404511 mov dword ptr [edx + 0x8fb0], 0x10403130 */ { const u32 m_ = (u32)(edx + 0x8fb0u); M32(m_) = (u32)(0x10403130u); }
  /* 1040451b mov dword ptr [edx + 0xfb4], 0x10402e40 */ { const u32 m_ = (u32)(edx + 0xfb4u); M32(m_) = (u32)(0x10402e40u); }
  /* 10404525 mov dword ptr [edx + 0x8fb4], 0x10402e90 */ { const u32 m_ = (u32)(edx + 0x8fb4u); M32(m_) = (u32)(0x10402e90u); }
  /* 1040452f mov dword ptr [edx + 0xfb8], 0x104033b0 */ { const u32 m_ = (u32)(edx + 0xfb8u); M32(m_) = (u32)(0x104033b0u); }
  /* 10404539 mov dword ptr [edx + 0x8fb8], 0x104035a0 */ { const u32 m_ = (u32)(edx + 0x8fb8u); M32(m_) = (u32)(0x104035a0u); }
  /* 10404543 mov dword ptr [edx + 0xfbc], 0x10402ed0 */ { const u32 m_ = (u32)(edx + 0xfbcu); M32(m_) = (u32)(0x10402ed0u); }
  /* 1040454d mov dword ptr [edx + 0x8fbc], 0x10402f30 */ { const u32 m_ = (u32)(edx + 0x8fbcu); M32(m_) = (u32)(0x10402f30u); }
  /* 10404557 mov dword ptr [edx + 0xfc0], 0x10402f80 */ { const u32 m_ = (u32)(edx + 0xfc0u); M32(m_) = (u32)(0x10402f80u); }
  /* 10404561 mov dword ptr [edx + 0x8fc0], 0x10402ff0 */ { const u32 m_ = (u32)(edx + 0x8fc0u); M32(m_) = (u32)(0x10402ff0u); }
  /* 1040456b mov dword ptr [edx + 0xfc4], 0x10403050 */ { const u32 m_ = (u32)(edx + 0xfc4u); M32(m_) = (u32)(0x10403050u); }
  /* 10404575 mov dword ptr [edx + 0x8fc4], 0x104030a0 */ { const u32 m_ = (u32)(edx + 0x8fc4u); M32(m_) = (u32)(0x104030a0u); }
  /* 1040457f mov dword ptr [edx + 0xfc8], 0x104030e0 */ { const u32 m_ = (u32)(edx + 0xfc8u); M32(m_) = (u32)(0x104030e0u); }
  /* 10404589 mov dword ptr [edx + 0x8fc8], 0x10403130 */ { const u32 m_ = (u32)(edx + 0x8fc8u); M32(m_) = (u32)(0x10403130u); }
  /* 10404593 mov dword ptr [edx + 0xfcc], 0x104030e0 */ { const u32 m_ = (u32)(edx + 0xfccu); M32(m_) = (u32)(0x104030e0u); }
  /* 1040459d mov dword ptr [edx + 0x8fcc], 0x10403130 */ { const u32 m_ = (u32)(edx + 0x8fccu); M32(m_) = (u32)(0x10403130u); }
  /* 104045a7 mov dword ptr [edx + 0xfd0], 0x10403240 */ { const u32 m_ = (u32)(edx + 0xfd0u); M32(m_) = (u32)(0x10403240u); }
  /* 104045b1 mov dword ptr [edx + 0x8fd0], 0x10403170 */ { const u32 m_ = (u32)(edx + 0x8fd0u); M32(m_) = (u32)(0x10403170u); }
  /* 104045bb mov dword ptr [edx + 0xfd4], 0x104030e0 */ { const u32 m_ = (u32)(edx + 0xfd4u); M32(m_) = (u32)(0x104030e0u); }
  /* 104045c5 mov dword ptr [edx + 0x8fd4], 0x10403130 */ { const u32 m_ = (u32)(edx + 0x8fd4u); M32(m_) = (u32)(0x10403130u); }
  /* 104045cf mov dword ptr [edx + 0x1130], 0x104038d0 */ { const u32 m_ = (u32)(edx + 0x1130u); M32(m_) = (u32)(0x104038d0u); }
  /* 104045d9 mov dword ptr [edx + 0x9130], 0x10403dd0 */ { const u32 m_ = (u32)(edx + 0x9130u); M32(m_) = (u32)(0x10403dd0u); }
  /* 104045e3 mov dword ptr [edx + 0x1134], 0x10403240 */ { const u32 m_ = (u32)(edx + 0x1134u); M32(m_) = (u32)(0x10403240u); }
  /* 104045ed mov dword ptr [edx + 0x9134], 0x10403170 */ { const u32 m_ = (u32)(edx + 0x9134u); M32(m_) = (u32)(0x10403170u); }
  /* 104045f7 mov dword ptr [edx + 0x1138], 0x104033b0 */ { const u32 m_ = (u32)(edx + 0x1138u); M32(m_) = (u32)(0x104033b0u); }
  /* 10404601 mov dword ptr [edx + 0x9138], 0x104035a0 */ { const u32 m_ = (u32)(edx + 0x9138u); M32(m_) = (u32)(0x104035a0u); }
  /* 1040460b mov dword ptr [edx + 0x113c], 0x104033c0 */ { const u32 m_ = (u32)(edx + 0x113cu); M32(m_) = (u32)(0x104033c0u); }
  /* 10404615 mov dword ptr [edx + 0x913c], 0x10403430 */ { const u32 m_ = (u32)(edx + 0x913cu); M32(m_) = (u32)(0x10403430u); }
  /* 1040461f mov dword ptr [edx + 0x1140], 0x104033b0 */ { const u32 m_ = (u32)(edx + 0x1140u); M32(m_) = (u32)(0x104033b0u); }
  /* 10404629 mov dword ptr [edx + 0x9140], 0x104035a0 */ { const u32 m_ = (u32)(edx + 0x9140u); M32(m_) = (u32)(0x104035a0u); }
  /* 10404633 mov dword ptr [edx + 0x1144], 0x104035b0 */ { const u32 m_ = (u32)(edx + 0x1144u); M32(m_) = (u32)(0x104035b0u); }
  /* 1040463d mov dword ptr [edx + 0x9144], 0x10403620 */ { const u32 m_ = (u32)(edx + 0x9144u); M32(m_) = (u32)(0x10403620u); }
  /* 10404647 mov dword ptr [edx + 0x1148], 0x104038d0 */ { const u32 m_ = (u32)(edx + 0x1148u); M32(m_) = (u32)(0x104038d0u); }
  /* 10404651 mov dword ptr [edx + 0x9148], 0x10403dd0 */ { const u32 m_ = (u32)(edx + 0x9148u); M32(m_) = (u32)(0x10403dd0u); }
  /* 1040465b mov dword ptr [edx + 0x114c], 0x10403710 */ { const u32 m_ = (u32)(edx + 0x114cu); M32(m_) = (u32)(0x10403710u); }
  /* 10404665 mov dword ptr [edx + 0x914c], 0x10403770 */ { const u32 m_ = (u32)(edx + 0x914cu); M32(m_) = (u32)(0x10403770u); }
  /* 1040466f mov dword ptr [edx + 0x1150], 0x104038d0 */ { const u32 m_ = (u32)(edx + 0x1150u); M32(m_) = (u32)(0x104038d0u); }
  /* 10404679 mov dword ptr [edx + 0x9150], 0x10403dd0 */ { const u32 m_ = (u32)(edx + 0x9150u); M32(m_) = (u32)(0x10403dd0u); }
  /* 10404683 mov dword ptr [edx + 0x1154], 0x104037c0 */ { const u32 m_ = (u32)(edx + 0x1154u); M32(m_) = (u32)(0x104037c0u); }
  /* 1040468d mov dword ptr [edx + 0x9154], 0x10403820 */ { const u32 m_ = (u32)(edx + 0x9154u); M32(m_) = (u32)(0x10403820u); }
  /* 10404697 mov dword ptr [edx + 0x1158], 0x104038d0 */ { const u32 m_ = (u32)(edx + 0x1158u); M32(m_) = (u32)(0x104038d0u); }
  /* 104046a1 mov dword ptr [edx + 0x9158], 0x10403dd0 */ { const u32 m_ = (u32)(edx + 0x9158u); M32(m_) = (u32)(0x10403dd0u); }
  /* 104046ab mov dword ptr [edx + 0x115c], 0x10403870 */ { const u32 m_ = (u32)(edx + 0x115cu); M32(m_) = (u32)(0x10403870u); }
  /* 104046b5 mov dword ptr [edx + 0x915c], 0x10403900 */ { const u32 m_ = (u32)(edx + 0x915cu); M32(m_) = (u32)(0x10403900u); }
  /* 104046bf mov dword ptr [edx + 0x1160], 0x104038d0 */ { const u32 m_ = (u32)(edx + 0x1160u); M32(m_) = (u32)(0x104038d0u); }
  /* 104046c9 mov dword ptr [edx + 0x9160], 0x10403dd0 */ { const u32 m_ = (u32)(edx + 0x9160u); M32(m_) = (u32)(0x10403dd0u); }
  /* 104046d3 mov dword ptr [edx + 0x1164], 0x10403870 */ { const u32 m_ = (u32)(edx + 0x1164u); M32(m_) = (u32)(0x10403870u); }
  /* 104046dd mov dword ptr [edx + 0x9164], 0x10403900 */ { const u32 m_ = (u32)(edx + 0x9164u); M32(m_) = (u32)(0x10403900u); }
  /* 104046e7 mov dword ptr [edx + 0x1168], 0x104038d0 */ { const u32 m_ = (u32)(edx + 0x1168u); M32(m_) = (u32)(0x104038d0u); }
  /* 104046f1 mov dword ptr [edx + 0x9168], 0x10403dd0 */ { const u32 m_ = (u32)(edx + 0x9168u); M32(m_) = (u32)(0x10403dd0u); }
  /* 104046fb mov dword ptr [edx + 0x116c], 0x104031b0 */ { const u32 m_ = (u32)(edx + 0x116cu); M32(m_) = (u32)(0x104031b0u); }
  /* 10404705 mov dword ptr [edx + 0x916c], 0x10403200 */ { const u32 m_ = (u32)(edx + 0x916cu); M32(m_) = (u32)(0x10403200u); }
  /* 1040470f mov dword ptr [edx + 0x1170], 0x104038d0 */ { const u32 m_ = (u32)(edx + 0x1170u); M32(m_) = (u32)(0x104038d0u); }
  /* 10404719 mov dword ptr [edx + 0x9170], 0x10403dd0 */ { const u32 m_ = (u32)(edx + 0x9170u); M32(m_) = (u32)(0x10403dd0u); }
  /* 10404723 mov dword ptr [edx + 0x1174], 0x10403950 */ { const u32 m_ = (u32)(edx + 0x1174u); M32(m_) = (u32)(0x10403950u); }
  /* 1040472d mov dword ptr [edx + 0x9174], 0x104039d0 */ { const u32 m_ = (u32)(edx + 0x9174u); M32(m_) = (u32)(0x104039d0u); }
  /* 10404737 mov dword ptr [edx + 0x1f40], 0x104033b0 */ { const u32 m_ = (u32)(edx + 0x1f40u); M32(m_) = (u32)(0x104033b0u); }
  /* 10404741 mov dword ptr [edx + 0x9f40], 0x104035a0 */ { const u32 m_ = (u32)(edx + 0x9f40u); M32(m_) = (u32)(0x104035a0u); }
  /* 1040474b mov dword ptr [edx + 0x1f44], 0x10403a50 */ { const u32 m_ = (u32)(edx + 0x1f44u); M32(m_) = (u32)(0x10403a50u); }
  /* 10404755 mov dword ptr [edx + 0x9f44], 0x10403ab0 */ { const u32 m_ = (u32)(edx + 0x9f44u); M32(m_) = (u32)(0x10403ab0u); }
  /* 1040475f mov dword ptr [edx + 0x1f48], 0x10402df0 */ { const u32 m_ = (u32)(edx + 0x1f48u); M32(m_) = (u32)(0x10402df0u); }
  /* 10404769 mov dword ptr [edx + 0x9f48], 0x10402e20 */ { const u32 m_ = (u32)(edx + 0x9f48u); M32(m_) = (u32)(0x10402e20u); }
  /* 10404773 mov dword ptr [edx + 0x1f4c], 0x10403b10 */ { const u32 m_ = (u32)(edx + 0x1f4cu); M32(m_) = (u32)(0x10403b10u); }
  /* 1040477d mov dword ptr [edx + 0x9f4c], 0x10403ba0 */ { const u32 m_ = (u32)(edx + 0x9f4cu); M32(m_) = (u32)(0x10403ba0u); }
  /* 10404787 mov dword ptr [edx + 0x1f50], 0x10403cc0 */ { const u32 m_ = (u32)(edx + 0x1f50u); M32(m_) = (u32)(0x10403cc0u); }
  /* 10404791 mov dword ptr [edx + 0x9f50], 0x10403d50 */ { const u32 m_ = (u32)(edx + 0x9f50u); M32(m_) = (u32)(0x10403d50u); }
  /* 1040479b mov dword ptr [edx + 0x1f54], 0x10403240 */ { const u32 m_ = (u32)(edx + 0x1f54u); M32(m_) = (u32)(0x10403240u); }
  /* 104047a5 mov dword ptr [edx + 0x9f54], 0x10403170 */ { const u32 m_ = (u32)(edx + 0x9f54u); M32(m_) = (u32)(0x10403170u); }
  /* 104047af mov dword ptr [edx + 0x1f58], 0x104038d0 */ { const u32 m_ = (u32)(edx + 0x1f58u); M32(m_) = (u32)(0x104038d0u); }
  /* 104047b9 mov dword ptr [edx + 0x9f58], 0x10403dd0 */ { const u32 m_ = (u32)(edx + 0x9f58u); M32(m_) = (u32)(0x10403dd0u); }
  /* 104047c3 mov dword ptr [edx + 0x1f5c], 0x10403cc0 */ { const u32 m_ = (u32)(edx + 0x1f5cu); M32(m_) = (u32)(0x10403cc0u); }
  /* 104047cd mov dword ptr [edx + 0x9f5c], 0x10403d50 */ { const u32 m_ = (u32)(edx + 0x9f5cu); M32(m_) = (u32)(0x10403d50u); }
  /* 104047d7 mov dword ptr [edx + 0x1f60], 0x104033b0 */ { const u32 m_ = (u32)(edx + 0x1f60u); M32(m_) = (u32)(0x104033b0u); }
  /* 104047e1 mov dword ptr [edx + 0x9f60], 0x104035a0 */ { const u32 m_ = (u32)(edx + 0x9f60u); M32(m_) = (u32)(0x104035a0u); }
  /* 104047eb mov dword ptr [edx + 0x1f64], 0x10403ec0 */ { const u32 m_ = (u32)(edx + 0x1f64u); M32(m_) = (u32)(0x10403ec0u); }
  /* 104047f5 mov dword ptr [edx + 0x9f64], 0x10403f30 */ { const u32 m_ = (u32)(edx + 0x9f64u); M32(m_) = (u32)(0x10403f30u); }
  /* 104047ff mov dword ptr [edx + 0x1f68], 0x104038d0 */ { const u32 m_ = (u32)(edx + 0x1f68u); M32(m_) = (u32)(0x104038d0u); }
  /* 10404809 mov dword ptr [edx + 0x9f68], 0x10403dd0 */ { const u32 m_ = (u32)(edx + 0x9f68u); M32(m_) = (u32)(0x10403dd0u); }
  /* 10404813 mov dword ptr [edx + 0x1f6c], 0x10403f90 */ { const u32 m_ = (u32)(edx + 0x1f6cu); M32(m_) = (u32)(0x10403f90u); }
  /* 1040481d mov dword ptr [edx + 0x9f6c], 0x10404030 */ { const u32 m_ = (u32)(edx + 0x9f6cu); M32(m_) = (u32)(0x10404030u); }
  /* 10404827 mov dword ptr [edx + 0x1f70], 0x104038d0 */ { const u32 m_ = (u32)(edx + 0x1f70u); M32(m_) = (u32)(0x104038d0u); }
  /* 10404831 mov dword ptr [edx + 0x9f70], 0x10403dd0 */ { const u32 m_ = (u32)(edx + 0x9f70u); M32(m_) = (u32)(0x10403dd0u); }
  /* 1040483b mov dword ptr [edx + 0x1f74], 0x104040c0 */ { const u32 m_ = (u32)(edx + 0x1f74u); M32(m_) = (u32)(0x104040c0u); }
  /* 10404845 mov dword ptr [edx + 0x9f74], 0x10404160 */ { const u32 m_ = (u32)(edx + 0x9f74u); M32(m_) = (u32)(0x10404160u); }
  /* 1040484f mov dword ptr [edx + 0x1f78], 0x104033b0 */ { const u32 m_ = (u32)(edx + 0x1f78u); M32(m_) = (u32)(0x104033b0u); }
  /* 10404859 mov dword ptr [edx + 0x9f78], 0x104035a0 */ { const u32 m_ = (u32)(edx + 0x9f78u); M32(m_) = (u32)(0x104035a0u); }
  /* 10404863 mov dword ptr [edx + 0x1f7c], 0x10404330 */ { const u32 m_ = (u32)(edx + 0x1f7cu); M32(m_) = (u32)(0x10404330u); }
  /* 1040486d mov dword ptr [edx + 0x9f7c], 0x10404380 */ { const u32 m_ = (u32)(edx + 0x9f7cu); M32(m_) = (u32)(0x10404380u); }
  /* 10404877 mov dword ptr [edx + 0x1f80], 0x104038d0 */ { const u32 m_ = (u32)(edx + 0x1f80u); M32(m_) = (u32)(0x104038d0u); }
  /* 10404881 mov dword ptr [edx + 0x9f80], 0x10403dd0 */ { const u32 m_ = (u32)(edx + 0x9f80u); M32(m_) = (u32)(0x10403dd0u); }
  /* 1040488b mov dword ptr [edx + 0x1f84], 0x104043c0 */ { const u32 m_ = (u32)(edx + 0x1f84u); M32(m_) = (u32)(0x104043c0u); }
  /* 10404895 mov dword ptr [edx + 0x9f84], 0x10404410 */ { const u32 m_ = (u32)(edx + 0x9f84u); M32(m_) = (u32)(0x10404410u); }
  /* 1040489f mov dword ptr [edx + 0x2008], 0x10403240 */ { const u32 m_ = (u32)(edx + 0x2008u); M32(m_) = (u32)(0x10403240u); }
  /* 104048a9 mov dword ptr [edx + 0xa008], 0x10403170 */ { const u32 m_ = (u32)(edx + 0xa008u); M32(m_) = (u32)(0x10403170u); }
  /* 104048b3 mov dword ptr [edx + 0x200c], 0x10404460 */ { const u32 m_ = (u32)(edx + 0x200cu); M32(m_) = (u32)(0x10404460u); }
  /* 104048bd mov dword ptr [edx + 0xa00c], 0x10404490 */ { const u32 m_ = (u32)(edx + 0xa00cu); M32(m_) = (u32)(0x10404490u); }
  /* 104048c7 mov dword ptr [edx + 0x2010], 0x104038d0 */ { const u32 m_ = (u32)(edx + 0x2010u); M32(m_) = (u32)(0x104038d0u); }
  /* 104048d1 mov dword ptr [edx + 0xa010], 0x10403dd0 */ { const u32 m_ = (u32)(edx + 0xa010u); M32(m_) = (u32)(0x10403dd0u); }
  /* 104048db mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 104048dd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104048de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104048e0(CPU *c) {
  NATIVE_HOOK(0x104048e0u) REGS; LOADALL;
L_104048e0:;
  /* 104048e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104048e1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 104048e3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104048e4 lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 104048ea call 0x104049b0 */ esp -= 4; M32(esp) = 0x104048efu; SAVEALL; F_104049b0(c); ABI_CHECK(0x104049b0u, 0x104048eau); RETCHK(0x104048efu, 0x104048eau); LOADALL;
  /* 104048ef xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104048f1 mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 104048f6 mov edi, esi */ { edi = (u32)(esi); }
  /* 104048f8 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 104048fa mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 104048ff lea edi, [esi + 0x8000] */ edi = (u32)((u32)(esi + 0x8000u));
  /* 10404905 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10404907 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10404909 call 0x104044b0 */ esp -= 4; M32(esp) = 0x1040490eu; SAVEALL; F_104044b0(c); ABI_CHECK(0x104044b0u, 0x10404909u); RETCHK(0x1040490eu, 0x10404909u); LOADALL;
  /* 1040490e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040490f mov eax, esi */ { eax = (u32)(esi); }
  /* 10404911 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404912 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10404920(CPU *c) {
  NATIVE_HOOK(0x10404920u) REGS; LOADALL;
L_10404920:;
  /* 10404920 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10404924 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404925 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10404927 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1040492b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040492c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040492d lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 10404933 call 0x104049e0 */ esp -= 4; M32(esp) = 0x10404938u; SAVEALL; F_104049e0(c); ABI_CHECK(0x104049e0u, 0x10404933u); RETCHK(0x10404938u, 0x10404933u); LOADALL;
  /* 10404938 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040493c cmp eax, 0x2000 */ { u32 a_ = eax, b_ = 0x2000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404941 jge 0x1040494a */ if (!LT_) goto L_1040494a;
  /* 10404943 mov eax, dword ptr [esi + eax*4] */ { const u32 m_ = (u32)(esi + eax * 4u); eax = (u32)(M32(m_)); }
  /* 10404946 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10404948 jne 0x10404951 */ if (!ZF_) goto L_10404951;
L_1040494a:;
  /* 1040494a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040494d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040494e ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_10404951:;
  /* 10404951 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10404955 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10404956 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10404958 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1040495au; SAVEALL; call_ind(c, t_); RETCHK(0x1040495au, 0x10404958u); LOADALL; }
  /* 1040495a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040495b ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_10404960(CPU *c) {
  NATIVE_HOOK(0x10404960u) REGS; LOADALL;
L_10404960:;
  /* 10404960 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404964 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404965 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10404967 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1040496b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040496c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040496d lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 10404973 call 0x104049e0 */ esp -= 4; M32(esp) = 0x10404978u; SAVEALL; F_104049e0(c); ABI_CHECK(0x104049e0u, 0x10404973u); RETCHK(0x10404978u, 0x10404973u); LOADALL;
  /* 10404978 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040497c cmp eax, 0x2000 */ { u32 a_ = eax, b_ = 0x2000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404981 jge 0x1040498e */ if (!LT_) goto L_1040498e;
  /* 10404983 mov eax, dword ptr [esi + eax*4 + 0x8000] */ { const u32 m_ = (u32)(esi + eax * 4u + 0x8000u); eax = (u32)(M32(m_)); }
  /* 1040498a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040498c jne 0x10404995 */ if (!ZF_) goto L_10404995;
L_1040498e:;
  /* 1040498e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404991 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404992 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_10404995:;
  /* 10404995 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10404999 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1040499a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1040499c call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1040499eu; SAVEALL; call_ind(c, t_); RETCHK(0x1040499eu, 0x1040499cu); LOADALL; }
  /* 1040499e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040499f ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_104049b0(CPU *c) {
  NATIVE_HOOK(0x104049b0u) REGS; LOADALL;
L_104049b0:;
  /* 104049b0 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 104049b2 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 104049b4 mov dword ptr [eax], 0x1040b184 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x1040b184u); }
  /* 104049ba mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 104049bd mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 104049c0 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 104049c3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104049e0(CPU *c) {
  NATIVE_HOOK(0x104049e0u) REGS; LOADALL;
L_104049e0:;
  /* 104049e0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 104049e4 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 104049e8 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 104049eb mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 104049ee mov dword ptr [ecx + 0xc], 0 */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 104049f5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10404a00(CPU *c) {
  NATIVE_HOOK(0x10404a00u) REGS; LOADALL;
L_10404a00:;
  /* 10404a00 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404a03 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10404a10(CPU *c) {
  NATIVE_HOOK(0x10404a10u) REGS; LOADALL;
L_10404a10:;
  /* 10404a10 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404a13 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10404a14 mov ebx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10404a17 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 10404a1a cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404a1c jle 0x10404a25 */ if ((ZF_|LT_)) goto L_10404a25;
  /* 10404a1e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404a21 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404a22 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10404a25:;
  /* 10404a25 mov bl, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10404a29 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10404a2c mov byte ptr [eax + edx], bl */ { const u32 m_ = (u32)(eax + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 10404a2f mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404a32 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10404a33 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 10404a36 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404a37 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10404a40(CPU *c) {
  NATIVE_HOOK(0x10404a40u) REGS; LOADALL;
L_10404a40:;
  /* 10404a40 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404a43 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404a44 mov esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); esi = (u32)(M32(m_)); }
  /* 10404a47 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 10404a4a cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404a4c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404a4d jle 0x10404a55 */ if ((ZF_|LT_)) goto L_10404a55;
  /* 10404a4f or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404a52 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10404a55:;
  /* 10404a55 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10404a58 mov al, byte ptr [eax + edx] */ { const u32 m_ = (u32)(eax + edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10404a5b mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10404a5f mov byte ptr [edx], al */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10404a61 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404a64 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10404a65 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 10404a68 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10404a70(CPU *c) {
  NATIVE_HOOK(0x10404a70u) REGS; LOADALL;
L_10404a70:;
  /* 10404a70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404a71 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10404a73 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404a76 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10404a79 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10404a7c cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404a7e jle 0x10404a87 */ if ((ZF_|LT_)) goto L_10404a87;
  /* 10404a80 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404a83 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404a84 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10404a87:;
  /* 10404a87 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10404a8b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10404a8c call dword ptr [0x1040b104] */ { const u32 m_ = (u32)(0x1040b104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10404a92u; SAVEALL; call_ind(c, t_); RETCHK(0x10404a92u, 0x10404a8cu); LOADALL; }
  /* 10404a92 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10404a95 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10404a98 mov word ptr [edx + ecx], ax */ { const u32 m_ = (u32)(edx + ecx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10404a9c mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404a9f add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10404aa2 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10404aa5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404aa6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10404ab0(CPU *c) {
  NATIVE_HOOK(0x10404ab0u) REGS; LOADALL;
L_10404ab0:;
  /* 10404ab0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404ab1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10404ab3 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404ab6 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 10404ab9 lea ecx, [eax + 2] */ ecx = (u32)((u32)(eax + 0x2u));
  /* 10404abc cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404abe jle 0x10404ac7 */ if ((ZF_|LT_)) goto L_10404ac7;
  /* 10404ac0 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404ac3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404ac4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10404ac7:;
  /* 10404ac7 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10404aca movzx eax, word ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); eax = (u32)(M16(m_)); }
  /* 10404ace push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10404acf call dword ptr [0x1040b100] */ { const u32 m_ = (u32)(0x1040b100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10404ad5u; SAVEALL; call_ind(c, t_); RETCHK(0x10404ad5u, 0x10404acfu); LOADALL; }
  /* 10404ad5 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10404ad9 mov word ptr [ecx], ax */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10404adc mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404adf add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10404ae2 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10404ae5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404ae6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10404af0(CPU *c) {
  NATIVE_HOOK(0x10404af0u) REGS; LOADALL;
L_10404af0:;
  /* 10404af0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404af1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10404af3 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404af6 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10404af9 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10404afc cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404afe jle 0x10404b07 */ if ((ZF_|LT_)) goto L_10404b07;
  /* 10404b00 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404b03 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404b04 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10404b07:;
  /* 10404b07 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10404b0b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10404b0c call dword ptr [0x1040b0fc] */ { const u32 m_ = (u32)(0x1040b0fcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10404b12u; SAVEALL; call_ind(c, t_); RETCHK(0x10404b12u, 0x10404b0cu); LOADALL; }
  /* 10404b12 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10404b15 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10404b18 mov dword ptr [edx + ecx], eax */ { const u32 m_ = (u32)(edx + ecx); M32(m_) = (u32)(eax); }
  /* 10404b1b mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404b1e add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10404b21 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10404b24 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404b25 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10404b30(CPU *c) {
  NATIVE_HOOK(0x10404b30u) REGS; LOADALL;
L_10404b30:;
  /* 10404b30 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404b31 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10404b33 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404b36 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 10404b39 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 10404b3c cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404b3e jle 0x10404b47 */ if ((ZF_|LT_)) goto L_10404b47;
  /* 10404b40 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404b43 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404b44 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10404b47:;
  /* 10404b47 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10404b4a mov eax, dword ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); eax = (u32)(M32(m_)); }
  /* 10404b4d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10404b4e call dword ptr [0x1040b0f8] */ { const u32 m_ = (u32)(0x1040b0f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10404b54u; SAVEALL; call_ind(c, t_); RETCHK(0x10404b54u, 0x10404b4eu); LOADALL; }
  /* 10404b54 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10404b58 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 10404b5a mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404b5d add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10404b60 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10404b63 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404b64 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10404b70(CPU *c) {
  NATIVE_HOOK(0x10404b70u) REGS; LOADALL;
L_10404b70:;
  /* 10404b70 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10404b71 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10404b73 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404b76 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10404b79 lea ecx, [eax + 2] */ ecx = (u32)((u32)(eax + 0x2u));
  /* 10404b7c cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404b7e jg 0x10404b9c */ if (!(ZF_|LT_)) goto L_10404b9c;
  /* 10404b80 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10404b83 movzx eax, word ptr [eax + edx] */ { const u32 m_ = (u32)(eax + edx); eax = (u32)(M16(m_)); }
  /* 10404b87 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10404b88 call dword ptr [0x1040b100] */ { const u32 m_ = (u32)(0x1040b100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10404b8eu; SAVEALL; call_ind(c, t_); RETCHK(0x10404b8eu, 0x10404b88u); LOADALL; }
  /* 10404b8e mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 10404b91 add edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10404b94 cmp edx, -1 */ { u32 a_ = edx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404b97 mov dword ptr [ebx + 0xc], edx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(edx); }
  /* 10404b9a jne 0x10404ba3 */ if (!ZF_) goto L_10404ba3;
L_10404b9c:;
  /* 10404b9c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404b9f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404ba0 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10404ba3:;
  /* 10404ba3 movzx eax, ax */ { eax = (u32)((eax & 0xffffu)); }
  /* 10404ba6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404ba7 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 10404baa lea ecx, [eax + edx] */ ecx = (u32)((u32)(eax + edx));
  /* 10404bad cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404baf jle 0x10404bb9 */ if ((ZF_|LT_)) goto L_10404bb9;
L_10404bb1:;
  /* 10404bb1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404bb2 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404bb5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404bb6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10404bb9:;
  /* 10404bb9 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10404bbd lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 10404bc0 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404bc2 jg 0x10404bb1 */ if (!(ZF_|LT_)) goto L_10404bb1;
  /* 10404bc4 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 10404bc7 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10404bc8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10404bc9 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10404bcb mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10404bcf mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10404bd1 mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 10404bd3 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10404bd6 mov edi, edx */ { edi = (u32)(edx); }
  /* 10404bd8 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10404bda mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10404bdc and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10404bdf rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10404be1 mov byte ptr [eax + edx], 0 */ { const u32 m_ = (u32)(eax + edx); M8(m_) = (u8)(0x0u); }
  /* 10404be5 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10404be8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10404be9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10404bea add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10404bec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404bed mov dword ptr [ebx + 0xc], ecx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 10404bf0 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10404bf2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404bf3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10404c00(CPU *c) {
  NATIVE_HOOK(0x10404c00u) REGS; LOADALL;
L_10404c00:;
  /* 10404c00 test byte ptr [esp + 4], 1 */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10404c05 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404c06 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10404c08 mov dword ptr [esi], 0x1040b184 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1040b184u); }
  /* 10404c0e je 0x10404c19 */ if (ZF_) goto L_10404c19;
  /* 10404c10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404c11 call 0x10404ca7 */ esp -= 4; M32(esp) = 0x10404c16u; SAVEALL; F_10404ca7(c); ABI_CHECK(0x10404ca7u, 0x10404c11u); RETCHK(0x10404c16u, 0x10404c11u); LOADALL;
  /* 10404c16 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10404c19:;
  /* 10404c19 mov eax, esi */ { eax = (u32)(esi); }
  /* 10404c1b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404c1c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10404c20(CPU *c) {
  NATIVE_HOOK(0x10404c20u) REGS; LOADALL;
L_10404c20:;
  /* 10404c20 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10404c21 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10404c22 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 10404c26 dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10404c27 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404c29 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10404c2b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404c2c mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 10404c30 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10404c32 jle 0x10404c43 */ if ((ZF_|LT_)) goto L_10404c43;
L_10404c34:;
  /* 10404c34 cmp byte ptr [eax + esi], 0 */ { const u32 m_ = (u32)(eax + esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10404c38 je 0x10404c41 */ if (ZF_) goto L_10404c41;
  /* 10404c3a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10404c3b cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404c3d jl 0x10404c34 */ if (LT_) goto L_10404c34;
  /* 10404c3f jmp 0x10404c43 */ goto L_10404c43;
L_10404c41:;
  /* 10404c41 mov ebp, eax */ { ebp = (u32)(eax); }
L_10404c43:;
  /* 10404c43 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404c46 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10404c49 lea edx, [eax + ebp + 2] */ edx = (u32)((u32)(eax + ebp + 0x2u));
  /* 10404c4d cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404c4f jg 0x10404c79 */ if (!(ZF_|LT_)) goto L_10404c79;
  /* 10404c51 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10404c54 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404c56 jg 0x10404c79 */ if (!(ZF_|LT_)) goto L_10404c79;
  /* 10404c58 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10404c59 call dword ptr [0x1040b104] */ { const u32 m_ = (u32)(0x1040b104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10404c5fu; SAVEALL; call_ind(c, t_); RETCHK(0x10404c5fu, 0x10404c59u); LOADALL; }
  /* 10404c5f mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 10404c62 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10404c65 mov word ptr [ecx + edx], ax */ { const u32 m_ = (u32)(ecx + edx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10404c69 mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 10404c6c add edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10404c6f mov eax, edx */ { eax = (u32)(edx); }
  /* 10404c71 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404c74 mov dword ptr [ebx + 0xc], edx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(edx); }
  /* 10404c77 jne 0x10404c82 */ if (!ZF_) goto L_10404c82;
L_10404c79:;
  /* 10404c79 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404c7a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10404c7b or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404c7e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404c7f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10404c82:;
  /* 10404c82 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10404c83 mov edi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edi = (u32)(M32(m_)); }
  /* 10404c86 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10404c88 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10404c8a mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10404c8c shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10404c8f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10404c91 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10404c93 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10404c96 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10404c98 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404c9b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10404c9c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404c9d add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10404c9f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10404ca0 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 10404ca3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404ca4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10404ca7(CPU *c) {
  NATIVE_HOOK(0x10404ca7u) REGS; LOADALL;
L_10404ca7:;
  /* 10404ca7 jmp 0x1040549e */ SAVEALL; F_1040549e(c); return;
}

void F_10404cc9(CPU *c) {
  NATIVE_HOOK(0x10404cc9u) REGS; LOADALL;
L_10404cc9:;
  /* 10404cc9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404ccb inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10404ccc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10404ccd(CPU *c) {
  NATIVE_HOOK(0x10404ccdu) REGS; LOADALL;
L_10404ccd:;
  /* 10404ccd mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10404cd0 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10404cd4 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10404cd6 call dword ptr [0x1040b004] */ { const u32 m_ = (u32)(0x1040b004u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10404cdcu; SAVEALL; call_ind(c, t_); RETCHK(0x10404cdcu, 0x10404cd6u); LOADALL; }
}

void F_10404cdd(CPU *c) {
  NATIVE_HOOK(0x10404cddu) REGS; LOADALL;
  goto L_10404cdd;
L_10404cac:;
  /* 10404cac push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10404cae push 0x1040b188 */ { u32 v_ = 0x1040b188u; esp -= 4; M32(esp) = v_; }
  /* 10404cb3 call 0x104056c0 */ esp -= 4; M32(esp) = 0x10404cb8u; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x10404cb3u); RETCHK(0x10404cb8u, 0x10404cb3u); LOADALL;
  /* 10404cb8 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10404cbc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10404cbe push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10404cc0 call 0x10405575 */ esp -= 4; M32(esp) = 0x10404cc5u; SAVEALL; F_10405575(c); ABI_CHECK(0x10405575u, 0x10404cc0u); RETCHK(0x10404cc5u, 0x10404cc0u); LOADALL;
  /* 10404cc5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10404cc6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10404cc7 jmp 0x10404cd0 */ goto L_10404cd0;
L_10404cd0:;
  /* 10404cd0 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10404cd4 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10404cd6 call dword ptr [0x1040b004] */ { const u32 m_ = (u32)(0x1040b004u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10404cdcu; SAVEALL; call_ind(c, t_); RETCHK(0x10404cdcu, 0x10404cd6u); LOADALL; }
L_10404cdd:;
  /* 10404cdd cmp ecx, dword ptr [0x1040d040] */ { const u32 m_ = (u32)(0x1040d040u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404ce3 jne 0x10404ce6 */ if (!ZF_) goto L_10404ce6;
  /* 10404ce5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10404ce6:;
  /* 10404ce6 jmp 0x10404cac */ goto L_10404cac;
}

void F_10404cf0(CPU *c) {
  NATIVE_HOOK(0x10404cf0u) REGS; LOADALL;
L_10404cf0:;
  /* 10404cf0 cmp eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404cf5 jae 0x10404d05 */ if (!CF_) goto L_10404d05;
  /* 10404cf7 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10404cf9 add eax, esp */ { u32 a_ = eax, b_ = esp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10404cfb add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10404cfe test dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10404d00 xchg esp, eax */ { u32 t_ = esp; esp = (u32)(eax); eax = (u32)(t_); }
  /* 10404d01 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10404d03 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10404d04 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10404d05:;
  /* 10404d05 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10404d06 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
L_10404d0a:;
  /* 10404d0a sub ecx, 0x1000 */ { u32 a_ = ecx, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10404d10 sub eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10404d15 test dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10404d17 cmp eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404d1c jae 0x10404d0a */ if (!CF_) goto L_10404d0a;
  /* 10404d1e sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10404d20 mov eax, esp */ { eax = (u32)(esp); }
  /* 10404d22 test dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10404d24 mov esp, ecx */ { esp = (u32)(ecx); }
  /* 10404d26 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10404d28 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 10404d2b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10404d2c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10404d2d(CPU *c) {
  NATIVE_HOOK(0x10404d2du) REGS; LOADALL;
L_10404d2d:;
  /* 10404d2d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10404d2f push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404d33 call 0x10405890 */ esp -= 4; M32(esp) = 0x10404d38u; SAVEALL; F_10405890(c); ABI_CHECK(0x10405890u, 0x10404d33u); RETCHK(0x10404d38u, 0x10404d33u); LOADALL;
  /* 10404d38 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10404d39 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10404d3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10404d3b(CPU *c) {
  NATIVE_HOOK(0x10404d3bu) REGS; LOADALL;
L_10404d3b:;
  /* 10404d3b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10404d3c mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10404d3e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10404d3f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10404d40 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404d43 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10404d46 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10404d49 mov ebx, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); ebx = (u32)(M32(m_)); }
  /* 10404d50 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10404d52 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 10404d58 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10404d5b mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10404d5e mov esp, dword ptr [ebx - 4] */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); esp = (u32)(M32(m_)); }
  /* 10404d61 mov ebp, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebp = (u32)(M32(m_)); }
  /* 10404d64 jmp eax */ { u32 t_ = eax; SAVEALL; call_ind(c, t_); return; }
}

void F_10404d6b(CPU *c) {
  NATIVE_HOOK(0x10404d6bu) REGS; LOADALL;
L_10404d6b:;
  /* 10404d6b pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 10404d6c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10404d6d xchg dword ptr [esp], eax */ { const u32 m_ = (u32)(esp); u32 o_ = (u32)__atomic_exchange_n((u32 *)HP(m_), (u32)eax, __ATOMIC_SEQ_CST); eax = (u32)(o_); }
  /* 10404d70 jmp eax */ { u32 t_ = eax; SAVEALL; call_ind(c, t_); return; }
}

void F_10404d72(CPU *c) {
  NATIVE_HOOK(0x10404d72u) REGS; LOADALL;
L_10404d72:;
  /* 10404d72 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10404d73 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10404d75 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10404d76 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10404d77 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10404d78 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404d79 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10404d7a mov esi, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); esi = (u32)(M32(m_)); }
  /* 10404d81 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 10404d84 mov dword ptr [ebp - 8], 0x10404d9b */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x10404d9bu); }
  /* 10404d8b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10404d8d push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404d90 push dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404d93 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404d96 call 0x1040a9be */ esp -= 4; M32(esp) = 0x10404d9bu; SAVEALL; F_1040a9be(c); ABI_CHECK(0x1040a9beu, 0x10404d96u); RETCHK(0x10404d9bu, 0x10404d96u); LOADALL;
  /* 10404d9b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404d9e mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 10404da1 and eax, 0xfffffffd */ { u32 a_ = eax, b_ = 0xfffffffdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404da4 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10404da7 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10404daa mov edi, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); edi = (u32)(M32(m_)); }
  /* 10404db1 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 10404db4 mov dword ptr [ebx], edi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edi); }
  /* 10404db6 mov dword ptr fs:[0], ebx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ebx); }
  /* 10404dbd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10404dbe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404dbf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404dc0 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10404dc1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10404d9b(CPU *c) {
  NATIVE_HOOK(0x10404d9bu) REGS; LOADALL;
L_10404d9b:;
  /* 10404d9b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404d9e mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 10404da1 and eax, 0xfffffffd */ { u32 a_ = eax, b_ = 0xfffffffdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404da4 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10404da7 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10404daa mov edi, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); edi = (u32)(M32(m_)); }
  /* 10404db1 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 10404db4 mov dword ptr [ebx], edi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edi); }
  /* 10404db6 mov dword ptr fs:[0], ebx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ebx); }
  /* 10404dbd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10404dbe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10404dbf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404dc0 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10404dc1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10404dfa(CPU *c) {
  NATIVE_HOOK(0x10404dfau) REGS; LOADALL;
L_10404dfa:;
  /* 10404dfa cld */ c->df = 0;
  /* 10404dfb mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10404dff mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10404e02 cmp ecx, dword ptr [0x1040d040] */ { const u32 m_ = (u32)(0x1040d040u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404e08 je 0x10404e16 */ if (ZF_) goto L_10404e16;
  /* 10404e0a mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10404e0e or dword ptr [eax + 4], 8 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10404e12 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404e14 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10404e15 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10404e16:;
  /* 10404e16 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10404e18 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10404e19 push dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404e1c push dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404e1f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10404e21 push dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404e25 push dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404e28 push dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404e2c call 0x104060d6 */ esp -= 4; M32(esp) = 0x10404e31u; SAVEALL; F_104060d6(c); ABI_CHECK(0x104060d6u, 0x10404e2cu); RETCHK(0x10404e31u, 0x10404e2cu); LOADALL;
  /* 10404e31 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10404e34 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10404e35(CPU *c) {
  NATIVE_HOOK(0x10404e35u) REGS; LOADALL;
L_10404e35:;
  /* 10404e35 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10404e36 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10404e38 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10404e3b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10404e3c cmp dword ptr [ebp + 8], 0x123 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x123u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404e43 jne 0x10404e57 */ if (!ZF_) goto L_10404e57;
  /* 10404e45 mov eax, 0x10404ed0 */ { eax = (u32)(0x10404ed0u); }
  /* 10404e4a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10404e4d mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 10404e4f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404e51 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10404e52 jmp 0x10404ef9 */ goto L_10404ef9;
L_10404e57:;
  /* 10404e57 and dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10404e5b mov dword ptr [ebp - 0x24], 0x10404efc */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x10404efcu); }
  /* 10404e62 mov eax, dword ptr [0x1040d040] */ { const u32 m_ = (u32)(0x1040d040u); eax = (u32)(M32(m_)); }
  /* 10404e67 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10404e6a mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10404e6d mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10404e70 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404e73 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 10404e76 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10404e79 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10404e7c mov eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); eax = (u32)(M32(m_)); }
  /* 10404e7f mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10404e82 and dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10404e86 and dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10404e8a and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10404e8e mov dword ptr [ebp - 0xc], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(esp); }
  /* 10404e91 mov dword ptr [ebp - 8], ebp */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebp); }
  /* 10404e94 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10404e9a mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 10404e9d lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 10404ea0 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 10404ea6 mov dword ptr [ebp - 0x34], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x1u); }
  /* 10404ead mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10404eb0 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 10404eb3 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10404eb6 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 10404eb9 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 10404ebc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10404ebd mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10404ec0 push dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404ec2 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10404ec7u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10404ec2u); RETCHK(0x10404ec7u, 0x10404ec2u); LOADALL;
  /* 10404ec7 call dword ptr [eax + 0x74] */ { const u32 m_ = (u32)(eax + 0x74u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10404ecau; SAVEALL; call_ind(c, t_); RETCHK(0x10404ecau, 0x10404ec7u); LOADALL; }
  /* 10404eca pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10404ecb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10404ecc and dword ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10404ed0 cmp dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404ed4 je 0x10404eed */ if (ZF_) goto L_10404eed;
  /* 10404ed6 mov ebx, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); ebx = (u32)(M32(m_)); }
  /* 10404edd mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10404edf mov ebx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ebx = (u32)(M32(m_)); }
  /* 10404ee2 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 10404ee4 mov dword ptr fs:[0], ebx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ebx); }
  /* 10404eeb jmp 0x10404ef6 */ goto L_10404ef6;
L_10404eed:;
  /* 10404eed mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 10404ef0 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
L_10404ef6:;
  /* 10404ef6 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
L_10404ef9:;
  /* 10404ef9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404efa leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10404efb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10404ed0(CPU *c) {
  NATIVE_HOOK(0x10404ed0u) REGS; LOADALL;
L_10404ed0:;
  /* 10404ed0 cmp dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404ed4 je 0x10404eed */ if (ZF_) goto L_10404eed;
  /* 10404ed6 mov ebx, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); ebx = (u32)(M32(m_)); }
  /* 10404edd mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10404edf mov ebx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ebx = (u32)(M32(m_)); }
  /* 10404ee2 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 10404ee4 mov dword ptr fs:[0], ebx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ebx); }
  /* 10404eeb jmp 0x10404ef6 */ goto L_10404ef6;
L_10404eed:;
  /* 10404eed mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 10404ef0 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
L_10404ef6:;
  /* 10404ef6 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 10404ef9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404efa leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10404efb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10404efc(CPU *c) {
  NATIVE_HOOK(0x10404efcu) REGS; LOADALL;
L_10404efc:;
  /* 10404efc push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10404efd mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10404eff push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10404f00 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10404f01 cld */ c->df = 0;
  /* 10404f02 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404f05 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 10404f08 cmp eax, dword ptr [0x1040d040] */ { const u32 m_ = (u32)(0x1040d040u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404f0e je 0x10404f27 */ if (ZF_) goto L_10404f27;
  /* 10404f10 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10404f13 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 10404f16 or eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404f19 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10404f1c mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10404f1f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404f21 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10404f22 jmp 0x10404fab */ goto L_10404fab;
L_10404f27:;
  /* 10404f27 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10404f2a mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 10404f2d and eax, 0x66 */ { u32 a_ = eax, b_ = 0x66u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404f30 je 0x10404f41 */ if (ZF_) goto L_10404f41;
  /* 10404f32 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404f35 mov dword ptr [eax + 0x24], 1 */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(0x1u); }
  /* 10404f3c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10404f3e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10404f3f jmp 0x10404fab */ goto L_10404fab;
L_10404f41:;
  /* 10404f41 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10404f43 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404f46 push dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404f49 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404f4c push dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404f4f mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404f52 push dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404f55 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10404f57 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404f5a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404f5d push dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404f60 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404f63 call 0x104060d6 */ esp -= 4; M32(esp) = 0x10404f68u; SAVEALL; F_104060d6(c); ABI_CHECK(0x104060d6u, 0x10404f63u); RETCHK(0x10404f68u, 0x10404f63u); LOADALL;
  /* 10404f68 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10404f6b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10404f6e cmp dword ptr [eax + 0x24], 0 */ { const u32 m_ = (u32)(eax + 0x24u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404f72 jne 0x10404f7f */ if (!ZF_) goto L_10404f7f;
  /* 10404f74 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404f77 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10404f7a call 0x10404d72 */ esp -= 4; M32(esp) = 0x10404f7fu; SAVEALL; F_10404d72(c); ABI_CHECK(0x10404d72u, 0x10404f7au); RETCHK(0x10404f7fu, 0x10404f7au); LOADALL;
L_10404f7f:;
  /* 10404f7f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10404f81 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10404f83 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10404f85 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10404f87 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10404f89 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10404f8c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10404f8d push 0x123 */ { u32 v_ = 0x123u; esp -= 4; M32(esp) = v_; }
  /* 10404f92 call 0x10404e35 */ esp -= 4; M32(esp) = 0x10404f97u; SAVEALL; F_10404e35(c); ABI_CHECK(0x10404e35u, 0x10404f92u); RETCHK(0x10404f97u, 0x10404f92u); LOADALL;
  /* 10404f97 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10404f9a mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10404f9d mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10404fa0 mov esp, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); esp = (u32)(M32(m_)); }
  /* 10404fa3 mov ebp, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); ebp = (u32)(M32(m_)); }
  /* 10404fa6 jmp eax */ { u32 t_ = eax; SAVEALL; call_ind(c, t_); return; }
L_10404fab:;
  /* 10404fab pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10404fac leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10404fad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10404fae(CPU *c) {
  NATIVE_HOOK(0x10404faeu) REGS; LOADALL;
L_10404fae:;
  /* 10404fae push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10404faf mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10404fb1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10404fb2 cmp dword ptr [ebp + 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404fb6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10404fb7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10404fb8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10404fb9 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10404fbc mov esi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); esi = (u32)(M32(m_)); }
  /* 10404fbf mov ebx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ebx = (u32)(M32(m_)); }
  /* 10404fc2 mov eax, esi */ { eax = (u32)(esi); }
  /* 10404fc4 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10404fc7 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 10404fca jl 0x10405004 */ if (LT_) goto L_10405004;
L_10404fcc:;
  /* 10404fcc cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404fcf jne 0x10404fd6 */ if (!ZF_) goto L_10404fd6;
  /* 10404fd1 call 0x104064bc */ esp -= 4; M32(esp) = 0x10404fd6u; SAVEALL; F_104064bc(c); ABI_CHECK(0x104064bcu, 0x10404fd1u); RETCHK(0x10404fd6u, 0x10404fd1u); LOADALL;
L_10404fd6:;
  /* 10404fd6 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10404fd9 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10404fda lea eax, [esi + esi*4] */ eax = (u32)((u32)(esi + esi * 4u));
  /* 10404fdd lea eax, [ebx + eax*4] */ eax = (u32)((u32)(ebx + eax * 4u));
  /* 10404fe0 cmp dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404fe3 jge 0x10404fea */ if (!LT_) goto L_10404fea;
  /* 10404fe5 cmp ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404fe8 jle 0x10404fef */ if ((ZF_|LT_)) goto L_10404fef;
L_10404fea:;
  /* 10404fea cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404fed jne 0x10404ffb */ if (!ZF_) goto L_10404ffb;
L_10404fef:;
  /* 10404fef mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10404ff2 dec dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10404ff5 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10404ff8 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
L_10404ffb:;
  /* 10404ffb cmp dword ptr [ebp + 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10404fff jge 0x10404fcc */ if (!LT_) goto L_10404fcc;
  /* 10405001 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
L_10405004:;
  /* 10405004 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 10405007 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10405008 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 1040500a mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 1040500d mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 1040500f cmp eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405012 ja 0x10405018 */ if (!(CF_|ZF_)) goto L_10405018;
  /* 10405014 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405016 jbe 0x1040501d */ if ((CF_|ZF_)) goto L_1040501d;
L_10405018:;
  /* 10405018 call 0x104064bc */ esp -= 4; M32(esp) = 0x1040501du; SAVEALL; F_104064bc(c); ABI_CHECK(0x104064bcu, 0x10405018u); RETCHK(0x1040501du, 0x10405018u); LOADALL;
L_1040501d:;
  /* 1040501d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1040501e lea eax, [esi + esi*4] */ eax = (u32)((u32)(esi + esi * 4u));
  /* 10405021 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10405022 lea eax, [ebx + eax*4] */ eax = (u32)((u32)(ebx + eax * 4u));
  /* 10405025 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10405026 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10405027 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405028(CPU *c) {
  NATIVE_HOOK(0x10405028u) REGS; LOADALL;
L_10405028:;
  /* 10405028 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040502c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040502d mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10405031 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10405033 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405038u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405033u); RETCHK(0x10405038u, 0x10405033u); LOADALL;
  /* 10405038 mov eax, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); eax = (u32)(M32(m_)); }
  /* 1040503e mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 10405041 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405046u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405041u); RETCHK(0x10405046u, 0x10405041u); LOADALL;
  /* 10405046 mov dword ptr [eax + 0x88], esi */ { const u32 m_ = (u32)(eax + 0x88u); M32(m_) = (u32)(esi); }
  /* 1040504c mov eax, esi */ { eax = (u32)(esi); }
  /* 1040504e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1040504f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405050(CPU *c) {
  NATIVE_HOOK(0x10405050u) REGS; LOADALL;
L_10405050:;
  /* 10405050 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405055u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405050u); RETCHK(0x10405055u, 0x10405050u); LOADALL;
  /* 10405055 mov eax, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); eax = (u32)(M32(m_)); }
  /* 1040505b jmp 0x10405068 */ goto L_10405068;
L_1040505d:;
  /* 1040505d mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1040505f cmp ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405063 je 0x1040506e */ if (ZF_) goto L_1040506e;
  /* 10405065 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
L_10405068:;
  /* 10405068 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040506a jne 0x1040505d */ if (!ZF_) goto L_1040505d;
  /* 1040506c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040506d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1040506e:;
  /* 1040506e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10405070 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405071(CPU *c) {
  NATIVE_HOOK(0x10405071u) REGS; LOADALL;
L_10405071:;
  /* 10405071 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405072 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405077u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405072u); RETCHK(0x10405077u, 0x10405072u); LOADALL;
  /* 10405077 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 1040507b cmp esi, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405081 jne 0x10405093 */ if (!ZF_) goto L_10405093;
  /* 10405083 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405088u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405083u); RETCHK(0x10405088u, 0x10405083u); LOADALL;
  /* 10405088 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1040508b mov dword ptr [eax + 0x88], ecx */ { const u32 m_ = (u32)(eax + 0x88u); M32(m_) = (u32)(ecx); }
  /* 10405091 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10405092 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10405093:;
  /* 10405093 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405098u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405093u); RETCHK(0x10405098u, 0x10405093u); LOADALL;
  /* 10405098 mov eax, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); eax = (u32)(M32(m_)); }
  /* 1040509e jmp 0x104050a9 */ goto L_104050a9;
L_104050a0:;
  /* 104050a0 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104050a3 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104050a5 je 0x104050b5 */ if (ZF_) goto L_104050b5;
  /* 104050a7 mov eax, ecx */ { eax = (u32)(ecx); }
L_104050a9:;
  /* 104050a9 cmp dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104050ad jne 0x104050a0 */ if (!ZF_) goto L_104050a0;
  /* 104050af pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104050b0 jmp 0x104064bc */ SAVEALL; F_104064bc(c); return;
L_104050b5:;
  /* 104050b5 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104050b8 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 104050bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104050bc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104050bd(CPU *c) {
  NATIVE_HOOK(0x104050bdu) REGS; LOADALL;
L_104050bd:;
  /* 104050bd push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104050be mov ebp, esp */ { ebp = (u32)(esp); }
  /* 104050c0 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104050c3 mov eax, dword ptr [0x1040d040] */ { const u32 m_ = (u32)(0x1040d040u); eax = (u32)(M32(m_)); }
  /* 104050c8 and dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104050cc mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 104050cf mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 104050d2 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 104050d5 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 104050d8 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 104050db inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104050dc mov dword ptr [ebp - 0x14], 0x10404dfa */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x10404dfau); }
  /* 104050e3 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 104050e6 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 104050e9 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 104050ef mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 104050f2 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 104050f5 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 104050fb push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104050fe push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104050ff push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405102 call 0x104064f0 */ esp -= 4; M32(esp) = 0x10405107u; SAVEALL; F_104064f0(c); ABI_CHECK(0x104064f0u, 0x10405102u); RETCHK(0x10405107u, 0x10405102u); LOADALL;
  /* 10405107 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10405109 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 1040510c mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 10405112 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10405114 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10405115 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405118(CPU *c) {
  NATIVE_HOOK(0x10405118u) REGS; LOADALL;
L_10405118:;
  /* 10405118 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10405119 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1040511b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040511c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040511d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040511e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1040511f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10405121 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10405123 push 0x10405130 */ { u32 v_ = 0x10405130u; esp -= 4; M32(esp) = v_; }
  /* 10405128 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040512b call 0x1040a9be */ esp -= 4; M32(esp) = 0x10405130u; SAVEALL; F_1040a9be(c); ABI_CHECK(0x1040a9beu, 0x1040512bu); RETCHK(0x10405130u, 0x1040512bu); LOADALL;
  /* 10405130 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10405131 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10405132 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10405133 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10405134 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10405136 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10405137 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405130(CPU *c) {
  NATIVE_HOOK(0x10405130u) REGS; LOADALL;
L_10405130:;
  /* 10405130 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10405131 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10405132 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10405133 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10405134 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10405136 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10405137 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405138(CPU *c) {
  NATIVE_HOOK(0x10405138u) REGS; LOADALL;
L_10405138:;
  /* 10405138 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1040513c test dword ptr [ecx + 4], 6 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405143 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 10405148 je 0x10405159 */ if (ZF_) goto L_10405159;
  /* 1040514a mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1040514e mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10405152 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 10405154 mov eax, 3 */ { eax = (u32)(0x3u); }
L_10405159:;
  /* 10405159 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040515a(CPU *c) {
  NATIVE_HOOK(0x1040515au) REGS; LOADALL;
L_1040515a:;
  /* 1040515a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040515b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040515c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040515d mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10405161 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10405162 push -2 */ { u32 v_ = 0xfffffffeu; esp -= 4; M32(esp) = v_; }
  /* 10405164 push 0x10405138 */ { u32 v_ = 0x10405138u; esp -= 4; M32(esp) = v_; }
  /* 10405169 push dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405170 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
L_10405177:;
  /* 10405177 mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 1040517b mov ebx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ebx = (u32)(M32(m_)); }
  /* 1040517e mov esi, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); esi = (u32)(M32(m_)); }
  /* 10405181 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405184 je 0x104051b4 */ if (ZF_) goto L_104051b4;
  /* 10405186 cmp esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040518a je 0x104051b4 */ if (ZF_) goto L_104051b4;
  /* 1040518c lea esi, [esi + esi*2] */ esi = (u32)((u32)(esi + esi * 2u));
  /* 1040518f mov ecx, dword ptr [ebx + esi*4] */ { const u32 m_ = (u32)(ebx + esi * 4u); ecx = (u32)(M32(m_)); }
  /* 10405192 mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10405196 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 10405199 cmp dword ptr [ebx + esi*4 + 4], 0 */ { const u32 m_ = (u32)(ebx + esi * 4u + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040519e jne 0x104051b2 */ if (!ZF_) goto L_104051b2;
  /* 104051a0 push 0x101 */ { u32 v_ = 0x101u; esp -= 4; M32(esp) = v_; }
  /* 104051a5 mov eax, dword ptr [ebx + esi*4 + 8] */ { const u32 m_ = (u32)(ebx + esi * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 104051a9 call 0x104051ee */ esp -= 4; M32(esp) = 0x104051aeu; SAVEALL; F_104051ee(c); ABI_CHECK(0x104051eeu, 0x104051a9u); RETCHK(0x104051aeu, 0x104051a9u); LOADALL;
  /* 104051ae call dword ptr [ebx + esi*4 + 8] */ { const u32 m_ = (u32)(ebx + esi * 4u + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104051b2u; SAVEALL; call_ind(c, t_); RETCHK(0x104051b2u, 0x104051aeu); LOADALL; }
L_104051b2:;
  /* 104051b2 jmp 0x10405177 */ goto L_10405177;
L_104051b4:;
  /* 104051b4 pop dword ptr fs:[0] */ { u32 v_ = M32(esp); esp += 4; const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = v_; }
  /* 104051bb add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104051be pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104051bf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104051c0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104051c1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104051c2(CPU *c) {
  NATIVE_HOOK(0x104051c2u) REGS; LOADALL;
L_104051c2:;
  /* 104051c2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104051c4 mov ecx, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); ecx = (u32)(M32(m_)); }
  /* 104051cb cmp dword ptr [ecx + 4], 0x10405138 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x10405138u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104051d2 jne 0x104051e4 */ if (!ZF_) goto L_104051e4;
  /* 104051d4 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 104051d7 mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 104051da cmp dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104051dd jne 0x104051e4 */ if (!ZF_) goto L_104051e4;
  /* 104051df mov eax, 1 */ { eax = (u32)(0x1u); }
L_104051e4:;
  /* 104051e4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104051e5(CPU *c) {
  NATIVE_HOOK(0x104051e5u) REGS; LOADALL;
L_104051e5:;
  /* 104051e5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104051e6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104051e7 mov ebx, 0x1040d050 */ { ebx = (u32)(0x1040d050u); }
  /* 104051ec jmp 0x104051f8 */ goto L_104051f8;
L_104051f8:;
  /* 104051f8 mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 104051fb mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 104051fe mov dword ptr [ebx + 0xc], ebp */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ebp); }
  /* 10405201 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405202 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10405203 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_104051ee(CPU *c) {
  NATIVE_HOOK(0x104051eeu) REGS; LOADALL;
L_104051ee:;
  /* 104051ee push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104051ef push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104051f0 mov ebx, 0x1040d050 */ { ebx = (u32)(0x1040d050u); }
  /* 104051f5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 104051f8 mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 104051fb mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 104051fe mov dword ptr [ebx + 0xc], ebp */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ebp); }
  /* 10405201 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405202 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10405203 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10405206(CPU *c) {
  NATIVE_HOOK(0x10405206u) REGS; LOADALL;
L_10405206:;
  /* 10405206 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10405207 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10405209 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1040520c cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040520f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405210 jne 0x104052f6 */ if (!ZF_) goto L_104052f6;
  /* 10405216 mov eax, 0x94 */ { eax = (u32)(0x94u); }
  /* 1040521b call 0x10404cf0 */ esp -= 4; M32(esp) = 0x10405220u; SAVEALL; F_10404cf0(c); ABI_CHECK(0x10404cf0u, 0x1040521bu); RETCHK(0x10405220u, 0x1040521bu); LOADALL;
  /* 10405220 mov esi, esp */ { esi = (u32)(esp); }
  /* 10405222 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405223 mov dword ptr [esi], 0x94 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x94u); }
  /* 10405229 call dword ptr [0x1040b014] */ { const u32 m_ = (u32)(0x1040b014u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040522fu; SAVEALL; call_ind(c, t_); RETCHK(0x1040522fu, 0x10405229u); LOADALL; }
  /* 1040522f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405231 je 0x1040536b */ if (ZF_) goto L_1040536b;
  /* 10405237 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1040523a mov dword ptr [0x1040d950], ecx */ { const u32 m_ = (u32)(0x1040d950u); M32(m_) = (u32)(ecx); }
  /* 10405240 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10405243 mov dword ptr [0x1040d95c], eax */ { const u32 m_ = (u32)(0x1040d95cu); M32(m_) = (u32)(eax); }
  /* 10405248 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 1040524b mov dword ptr [0x1040d960], edx */ { const u32 m_ = (u32)(0x1040d960u); M32(m_) = (u32)(edx); }
  /* 10405251 mov esi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); esi = (u32)(M32(m_)); }
  /* 10405254 and esi, 0x7fff */ { u32 a_ = esi, b_ = 0x7fffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1040525a cmp ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040525d mov dword ptr [0x1040d954], esi */ { const u32 m_ = (u32)(0x1040d954u); M32(m_) = (u32)(esi); }
  /* 10405263 je 0x10405271 */ if (ZF_) goto L_10405271;
  /* 10405265 or esi, 0x8000 */ { u32 a_ = esi, b_ = 0x8000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1040526b mov dword ptr [0x1040d954], esi */ { const u32 m_ = (u32)(0x1040d954u); M32(m_) = (u32)(esi); }
L_10405271:;
  /* 10405271 shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10405274 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10405276 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10405278 mov dword ptr [0x1040d958], eax */ { const u32 m_ = (u32)(0x1040d958u); M32(m_) = (u32)(eax); }
  /* 1040527d call 0x10406e81 */ esp -= 4; M32(esp) = 0x10405282u; SAVEALL; F_10406e81(c); ABI_CHECK(0x10406e81u, 0x1040527du); RETCHK(0x10405282u, 0x1040527du); LOADALL;
  /* 10405282 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405284 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405285 je 0x1040536b */ if (ZF_) goto L_1040536b;
  /* 1040528b call 0x10406398 */ esp -= 4; M32(esp) = 0x10405290u; SAVEALL; F_10406398(c); ABI_CHECK(0x10406398u, 0x1040528bu); RETCHK(0x10405290u, 0x1040528bu); LOADALL;
  /* 10405290 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405292 jne 0x1040529e */ if (!ZF_) goto L_1040529e;
L_10405294:;
  /* 10405294 call 0x10406ed2 */ esp -= 4; M32(esp) = 0x10405299u; SAVEALL; F_10406ed2(c); ABI_CHECK(0x10406ed2u, 0x10405294u); RETCHK(0x10405299u, 0x10405294u); LOADALL;
  /* 10405299 jmp 0x1040536b */ goto L_1040536b;
L_1040529e:;
  /* 1040529e call 0x10406ddf */ esp -= 4; M32(esp) = 0x104052a3u; SAVEALL; F_10406ddf(c); ABI_CHECK(0x10406ddfu, 0x1040529eu); RETCHK(0x104052a3u, 0x1040529eu); LOADALL;
  /* 104052a3 call dword ptr [0x1040b010] */ { const u32 m_ = (u32)(0x1040b010u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104052a9u; SAVEALL; call_ind(c, t_); RETCHK(0x104052a9u, 0x104052a3u); LOADALL; }
  /* 104052a9 mov dword ptr [0x1040e174], eax */ { const u32 m_ = (u32)(0x1040e174u); M32(m_) = (u32)(eax); }
  /* 104052ae call 0x10406cbd */ esp -= 4; M32(esp) = 0x104052b3u; SAVEALL; F_10406cbd(c); ABI_CHECK(0x10406cbdu, 0x104052aeu); RETCHK(0x104052b3u, 0x104052aeu); LOADALL;
  /* 104052b3 mov dword ptr [0x1040d928], eax */ { const u32 m_ = (u32)(0x1040d928u); M32(m_) = (u32)(eax); }
  /* 104052b8 call 0x1040679e */ esp -= 4; M32(esp) = 0x104052bdu; SAVEALL; F_1040679e(c); ABI_CHECK(0x1040679eu, 0x104052b8u); RETCHK(0x104052bdu, 0x104052b8u); LOADALL;
  /* 104052bd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104052bf jl 0x104052ef */ if (LT_) goto L_104052ef;
  /* 104052c1 call 0x10406c1b */ esp -= 4; M32(esp) = 0x104052c6u; SAVEALL; F_10406c1b(c); ABI_CHECK(0x10406c1bu, 0x104052c1u); RETCHK(0x104052c6u, 0x104052c1u); LOADALL;
  /* 104052c6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104052c8 jl 0x104052ea */ if (LT_) goto L_104052ea;
  /* 104052ca call 0x104069e8 */ esp -= 4; M32(esp) = 0x104052cfu; SAVEALL; F_104069e8(c); ABI_CHECK(0x104069e8u, 0x104052cau); RETCHK(0x104052cfu, 0x104052cau); LOADALL;
  /* 104052cf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104052d1 jl 0x104052ea */ if (LT_) goto L_104052ea;
  /* 104052d3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 104052d5 call 0x10406596 */ esp -= 4; M32(esp) = 0x104052dau; SAVEALL; F_10406596(c); ABI_CHECK(0x10406596u, 0x104052d5u); RETCHK(0x104052dau, 0x104052d5u); LOADALL;
  /* 104052da test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104052dc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104052dd jne 0x104052ea */ if (!ZF_) goto L_104052ea;
  /* 104052df inc dword ptr [0x1040d924] */ { const u32 m_ = (u32)(0x1040d924u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104052e5 jmp 0x1040537c */ goto L_1040537c;
L_104052ea:;
  /* 104052ea call 0x1040699c */ esp -= 4; M32(esp) = 0x104052efu; SAVEALL; F_1040699c(c); ABI_CHECK(0x1040699cu, 0x104052eau); RETCHK(0x104052efu, 0x104052eau); LOADALL;
L_104052ef:;
  /* 104052ef call 0x10406181 */ esp -= 4; M32(esp) = 0x104052f4u; SAVEALL; F_10406181(c); ABI_CHECK(0x10406181u, 0x104052efu); RETCHK(0x104052f4u, 0x104052efu); LOADALL;
  /* 104052f4 jmp 0x10405294 */ goto L_10405294;
L_104052f6:;
  /* 104052f6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104052f8 jne 0x10405326 */ if (!ZF_) goto L_10405326;
  /* 104052fa cmp dword ptr [0x1040d924], eax */ { const u32 m_ = (u32)(0x1040d924u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405300 jle 0x1040536b */ if ((ZF_|LT_)) goto L_1040536b;
  /* 10405302 dec dword ptr [0x1040d924] */ { const u32 m_ = (u32)(0x1040d924u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10405308 cmp dword ptr [0x1040d98c], eax */ { const u32 m_ = (u32)(0x1040d98cu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040530e jne 0x10405315 */ if (!ZF_) goto L_10405315;
  /* 10405310 call 0x104066d4 */ esp -= 4; M32(esp) = 0x10405315u; SAVEALL; F_104066d4(c); ABI_CHECK(0x104066d4u, 0x10405310u); RETCHK(0x10405315u, 0x10405310u); LOADALL;
L_10405315:;
  /* 10405315 call 0x1040699c */ esp -= 4; M32(esp) = 0x1040531au; SAVEALL; F_1040699c(c); ABI_CHECK(0x1040699cu, 0x10405315u); RETCHK(0x1040531au, 0x10405315u); LOADALL;
  /* 1040531a call 0x10406181 */ esp -= 4; M32(esp) = 0x1040531fu; SAVEALL; F_10406181(c); ABI_CHECK(0x10406181u, 0x1040531au); RETCHK(0x1040531fu, 0x1040531au); LOADALL;
  /* 1040531f call 0x10406ed2 */ esp -= 4; M32(esp) = 0x10405324u; SAVEALL; F_10406ed2(c); ABI_CHECK(0x10406ed2u, 0x1040531fu); RETCHK(0x10405324u, 0x1040531fu); LOADALL;
  /* 10405324 jmp 0x1040537c */ goto L_1040537c;
L_10405326:;
  /* 10405326 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405329 jne 0x1040536f */ if (!ZF_) goto L_1040536f;
  /* 1040532b push 0x8c */ { u32 v_ = 0x8cu; esp -= 4; M32(esp) = v_; }
  /* 10405330 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10405332 call 0x104066e3 */ esp -= 4; M32(esp) = 0x10405337u; SAVEALL; F_104066e3(c); ABI_CHECK(0x104066e3u, 0x10405332u); RETCHK(0x10405337u, 0x10405332u); LOADALL;
  /* 10405337 mov esi, eax */ { esi = (u32)(eax); }
  /* 10405339 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040533b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040533c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040533d je 0x1040536b */ if (ZF_) goto L_1040536b;
  /* 1040533f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405340 push dword ptr [0x1040d068] */ { const u32 m_ = (u32)(0x1040d068u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405346 call dword ptr [0x1040d944] */ { const u32 m_ = (u32)(0x1040d944u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040534cu; SAVEALL; call_ind(c, t_); RETCHK(0x1040534cu, 0x10405346u); LOADALL; }
  /* 1040534c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040534e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040534f je 0x10405365 */ if (ZF_) goto L_10405365;
  /* 10405351 call 0x1040619e */ esp -= 4; M32(esp) = 0x10405356u; SAVEALL; F_1040619e(c); ABI_CHECK(0x1040619eu, 0x10405351u); RETCHK(0x10405356u, 0x10405351u); LOADALL;
  /* 10405356 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405357 call dword ptr [0x1040b00c] */ { const u32 m_ = (u32)(0x1040b00cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040535du; SAVEALL; call_ind(c, t_); RETCHK(0x1040535du, 0x10405357u); LOADALL; }
  /* 1040535d or dword ptr [esi + 4], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405361 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10405363 jmp 0x1040537c */ goto L_1040537c;
L_10405365:;
  /* 10405365 call 0x1040549e */ esp -= 4; M32(esp) = 0x1040536au; SAVEALL; F_1040549e(c); ABI_CHECK(0x1040549eu, 0x10405365u); RETCHK(0x1040536au, 0x10405365u); LOADALL;
  /* 1040536a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1040536b:;
  /* 1040536b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040536d jmp 0x1040537f */ goto L_1040537f;
L_1040536f:;
  /* 1040536f cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405372 jne 0x1040537c */ if (!ZF_) goto L_1040537c;
  /* 10405374 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10405376 call 0x10406369 */ esp -= 4; M32(esp) = 0x1040537bu; SAVEALL; F_10406369(c); ABI_CHECK(0x10406369u, 0x10405376u); RETCHK(0x1040537bu, 0x10405376u); LOADALL;
  /* 1040537b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1040537c:;
  /* 1040537c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040537e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1040537f:;
  /* 1040537f lea esp, [ebp - 4] */ esp = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10405382 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10405383 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10405384 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10405387(CPU *c) {
  NATIVE_HOOK(0x10405387u) REGS; LOADALL;
L_10405387:;
  /* 10405387 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10405389 push 0x1040b198 */ { u32 v_ = 0x1040b198u; esp -= 4; M32(esp) = v_; }
  /* 1040538e call 0x104056c0 */ esp -= 4; M32(esp) = 0x10405393u; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x1040538eu); RETCHK(0x10405393u, 0x1040538eu); LOADALL;
  /* 10405393 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10405395 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10405396 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10405399 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 1040539c xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1040539e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104053a0 jne 0x104053ae */ if (!ZF_) goto L_104053ae;
  /* 104053a2 cmp dword ptr [0x1040d924], edi */ { const u32 m_ = (u32)(0x1040d924u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104053a8 je 0x10405461 */ if (ZF_) goto L_10405461;
L_104053ae:;
  /* 104053ae mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 104053b1 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104053b3 je 0x104053ba */ if (ZF_) goto L_104053ba;
  /* 104053b5 cmp esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104053b8 jne 0x104053eb */ if (!ZF_) goto L_104053eb;
L_104053ba:;
  /* 104053ba mov eax, dword ptr [0x1040e178] */ { const u32 m_ = (u32)(0x1040e178u); eax = (u32)(M32(m_)); }
  /* 104053bf cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104053c1 je 0x104053cf */ if (ZF_) goto L_104053cf;
  /* 104053c3 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104053c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104053c7 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104053ca call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x104053ccu; SAVEALL; call_ind(c, t_); RETCHK(0x104053ccu, 0x104053cau); LOADALL; }
  /* 104053cc mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_104053cf:;
  /* 104053cf cmp dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104053d2 je 0x1040545d */ if (ZF_) goto L_1040545d;
  /* 104053d8 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104053db push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104053dc push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104053df call 0x10405206 */ esp -= 4; M32(esp) = 0x104053e4u; SAVEALL; F_10405206(c); ABI_CHECK(0x10405206u, 0x104053dfu); RETCHK(0x104053e4u, 0x104053dfu); LOADALL;
  /* 104053e4 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 104053e7 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104053e9 je 0x1040545d */ if (ZF_) goto L_1040545d;
L_104053eb:;
  /* 104053eb mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 104053ee push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104053ef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104053f0 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104053f3 call 0x10401000 */ esp -= 4; M32(esp) = 0x104053f8u; SAVEALL; F_10401000(c); ABI_CHECK(0x10401000u, 0x104053f3u); RETCHK(0x104053f8u, 0x104053f3u); LOADALL;
  /* 104053f8 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 104053fb cmp esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104053fe jne 0x1040540e */ if (!ZF_) goto L_1040540e;
  /* 10405400 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405402 jne 0x1040540e */ if (!ZF_) goto L_1040540e;
  /* 10405404 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10405405 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10405406 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405409 call 0x10405206 */ esp -= 4; M32(esp) = 0x1040540eu; SAVEALL; F_10405206(c); ABI_CHECK(0x10405206u, 0x10405409u); RETCHK(0x1040540eu, 0x10405409u); LOADALL;
L_1040540e:;
  /* 1040540e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405410 je 0x10405417 */ if (ZF_) goto L_10405417;
  /* 10405412 cmp esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405415 jne 0x10405440 */ if (!ZF_) goto L_10405440;
L_10405417:;
  /* 10405417 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10405418 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405419 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040541c call 0x10405206 */ esp -= 4; M32(esp) = 0x10405421u; SAVEALL; F_10405206(c); ABI_CHECK(0x10405206u, 0x1040541cu); RETCHK(0x10405421u, 0x1040541cu); LOADALL;
  /* 10405421 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405423 jne 0x10405428 */ if (!ZF_) goto L_10405428;
  /* 10405425 mov dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edi); }
L_10405428:;
  /* 10405428 cmp dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040542b je 0x10405440 */ if (ZF_) goto L_10405440;
  /* 1040542d mov eax, dword ptr [0x1040e178] */ { const u32 m_ = (u32)(0x1040e178u); eax = (u32)(M32(m_)); }
  /* 10405432 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405434 je 0x10405440 */ if (ZF_) goto L_10405440;
  /* 10405436 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10405437 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405438 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040543b call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1040543du; SAVEALL; call_ind(c, t_); RETCHK(0x1040543du, 0x1040543bu); LOADALL; }
  /* 1040543d mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10405440:;
  /* 10405440 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405444 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10405447 jmp 0x10405463 */ goto L_10405463;
L_1040545d:;
  /* 1040545d or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10405461:;
  /* 10405461 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10405463:;
  /* 10405463 call 0x104056fb */ esp -= 4; M32(esp) = 0x10405468u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10405463u); RETCHK(0x10405468u, 0x10405463u); LOADALL;
  /* 10405468 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10405449(CPU *c) {
  NATIVE_HOOK(0x10405449u) REGS; LOADALL;
L_10405449:;
  /* 10405449 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 1040544c mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1040544e mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 10405450 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10405451 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10405452 call 0x104070b5 */ esp -= 4; M32(esp) = 0x10405457u; SAVEALL; F_104070b5(c); ABI_CHECK(0x104070b5u, 0x10405452u); RETCHK(0x10405457u, 0x10405452u); LOADALL;
  /* 10405457 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405458 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405459 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040545a(CPU *c) {
  NATIVE_HOOK(0x1040545au) REGS; LOADALL;
L_1040545a:;
  /* 1040545a mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 1040545d or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405461 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10405463 call 0x104056fb */ esp -= 4; M32(esp) = 0x10405468u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10405463u); RETCHK(0x10405468u, 0x10405463u); LOADALL;
  /* 10405468 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_1040546b(CPU *c) {
  NATIVE_HOOK(0x1040546bu) REGS; LOADALL;
L_1040546b:;
  /* 1040546b mov eax, dword ptr [0x1040d930] */ { const u32 m_ = (u32)(0x1040d930u); eax = (u32)(M32(m_)); }
  /* 10405470 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405473 je 0x10405482 */ if (ZF_) goto L_10405482;
  /* 10405475 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405477 jne 0x10405487 */ if (!ZF_) goto L_10405487;
  /* 10405479 cmp dword ptr [0x1040d934], 1 */ { const u32 m_ = (u32)(0x1040d934u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405480 jne 0x10405487 */ if (!ZF_) goto L_10405487;
L_10405482:;
  /* 10405482 call 0x10407247 */ esp -= 4; M32(esp) = 0x10405487u; SAVEALL; F_10407247(c); ABI_CHECK(0x10407247u, 0x10405482u); RETCHK(0x10405487u, 0x10405482u); LOADALL;
L_10405487:;
  /* 10405487 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040548b call 0x104070d0 */ esp -= 4; M32(esp) = 0x10405490u; SAVEALL; F_104070d0(c); ABI_CHECK(0x104070d0u, 0x1040548bu); RETCHK(0x10405490u, 0x1040548bu); LOADALL;
  /* 10405490 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 10405495 call dword ptr [0x1040d060] */ { const u32 m_ = (u32)(0x1040d060u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040549bu; SAVEALL; call_ind(c, t_); RETCHK(0x1040549bu, 0x10405495u); LOADALL; }
  /* 1040549b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040549c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040549d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040549e(CPU *c) {
  NATIVE_HOOK(0x1040549eu) REGS; LOADALL;
L_1040549e:;
  /* 1040549e push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 104054a0 push 0x1040b1a8 */ { u32 v_ = 0x1040b1a8u; esp -= 4; M32(esp) = v_; }
  /* 104054a5 call 0x104056c0 */ esp -= 4; M32(esp) = 0x104054aau; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x104054a5u); RETCHK(0x104054aau, 0x104054a5u); LOADALL;
  /* 104054aa mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 104054ad test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104054af je 0x10405509 */ if (ZF_) goto L_10405509;
  /* 104054b1 cmp dword ptr [0x1040e040], 3 */ { const u32 m_ = (u32)(0x1040e040u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104054b8 jne 0x104054fa */ if (!ZF_) goto L_104054fa;
  /* 104054ba push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 104054bc call 0x104073d3 */ esp -= 4; M32(esp) = 0x104054c1u; SAVEALL; F_104073d3(c); ABI_CHECK(0x104073d3u, 0x104054bcu); RETCHK(0x104054c1u, 0x104054bcu); LOADALL;
  /* 104054c1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104054c2 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104054c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104054c7 call 0x1040744c */ esp -= 4; M32(esp) = 0x104054ccu; SAVEALL; F_1040744c(c); ABI_CHECK(0x1040744cu, 0x104054c7u); RETCHK(0x104054ccu, 0x104054c7u); LOADALL;
  /* 104054cc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104054cd mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 104054d0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104054d2 je 0x104054dd */ if (ZF_) goto L_104054dd;
  /* 104054d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104054d5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104054d6 call 0x10407477 */ esp -= 4; M32(esp) = 0x104054dbu; SAVEALL; F_10407477(c); ABI_CHECK(0x10407477u, 0x104054d6u); RETCHK(0x104054dbu, 0x104054d6u); LOADALL;
  /* 104054db pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104054dc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_104054dd:;
  /* 104054dd or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104054e1 call 0x104054f1 */ esp -= 4; M32(esp) = 0x104054e6u; SAVEALL; F_104054f1(c); ABI_CHECK(0x104054f1u, 0x104054e1u); RETCHK(0x104054e6u, 0x104054e1u); LOADALL;
  /* 104054e6 cmp dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104054ea jne 0x10405509 */ if (!ZF_) goto L_10405509;
  /* 104054ec push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104054ef jmp 0x104054fb */ goto L_104054fb;
L_104054fa:;
  /* 104054fa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_104054fb:;
  /* 104054fb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 104054fd push dword ptr [0x1040e03c] */ { const u32 m_ = (u32)(0x1040e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405503 call dword ptr [0x1040b018] */ { const u32 m_ = (u32)(0x1040b018u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10405509u; SAVEALL; call_ind(c, t_); RETCHK(0x10405509u, 0x10405503u); LOADALL; }
L_10405509:;
  /* 10405509 call 0x104056fb */ esp -= 4; M32(esp) = 0x1040550eu; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10405509u); RETCHK(0x1040550eu, 0x10405509u); LOADALL;
  /* 1040550e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104054f1(CPU *c) {
  NATIVE_HOOK(0x104054f1u) REGS; LOADALL;
L_104054f1:;
  /* 104054f1 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 104054f3 call 0x1040731e */ esp -= 4; M32(esp) = 0x104054f8u; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x104054f3u); RETCHK(0x104054f8u, 0x104054f3u); LOADALL;
  /* 104054f8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104054f9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040550f(CPU *c) {
  NATIVE_HOOK(0x1040550fu) REGS; LOADALL;
L_1040550f:;
  /* 1040550f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10405510 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10405512 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10405515 mov eax, dword ptr [0x1040d040] */ { const u32 m_ = (u32)(0x1040d040u); eax = (u32)(M32(m_)); }
  /* 1040551a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040551c je 0x10405525 */ if (ZF_) goto L_10405525;
  /* 1040551e cmp eax, 0xbb40e64e */ { u32 a_ = eax, b_ = 0xbb40e64eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405523 jne 0x10405573 */ if (!ZF_) goto L_10405573;
L_10405525:;
  /* 10405525 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405526 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 10405529 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040552a call dword ptr [0x1040b028] */ { const u32 m_ = (u32)(0x1040b028u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10405530u; SAVEALL; call_ind(c, t_); RETCHK(0x10405530u, 0x1040552au); LOADALL; }
  /* 10405530 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 10405533 xor esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10405536 call dword ptr [0x1040b024] */ { const u32 m_ = (u32)(0x1040b024u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040553cu; SAVEALL; call_ind(c, t_); RETCHK(0x1040553cu, 0x10405536u); LOADALL; }
  /* 1040553c xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1040553e call dword ptr [0x1040b00c] */ { const u32 m_ = (u32)(0x1040b00cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10405544u; SAVEALL; call_ind(c, t_); RETCHK(0x10405544u, 0x1040553eu); LOADALL; }
  /* 10405544 xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10405546 call dword ptr [0x1040b020] */ { const u32 m_ = (u32)(0x1040b020u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040554cu; SAVEALL; call_ind(c, t_); RETCHK(0x1040554cu, 0x10405546u); LOADALL; }
  /* 1040554c xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1040554e lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 10405551 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10405552 call dword ptr [0x1040b01c] */ { const u32 m_ = (u32)(0x1040b01cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10405558u; SAVEALL; call_ind(c, t_); RETCHK(0x10405558u, 0x10405552u); LOADALL; }
  /* 10405558 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 1040555b xor eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040555e xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10405560 mov dword ptr [0x1040d040], esi */ { const u32 m_ = (u32)(0x1040d040u); M32(m_) = (u32)(esi); }
  /* 10405566 jne 0x10405572 */ if (!ZF_) goto L_10405572;
  /* 10405568 mov dword ptr [0x1040d040], 0xbb40e64e */ { const u32 m_ = (u32)(0x1040d040u); M32(m_) = (u32)(0xbb40e64eu); }
L_10405572:;
  /* 10405572 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10405573:;
  /* 10405573 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10405574 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405575(CPU *c) {
  NATIVE_HOOK(0x10405575u) REGS; LOADALL;
L_10405575:;
  /* 10405575 push 0x118 */ { u32 v_ = 0x118u; esp -= 4; M32(esp) = v_; }
  /* 1040557a push 0x1040b3a0 */ { u32 v_ = 0x1040b3a0u; esp -= 4; M32(esp) = v_; }
  /* 1040557f call 0x104056c0 */ esp -= 4; M32(esp) = 0x10405584u; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x1040557fu); RETCHK(0x10405584u, 0x1040557fu); LOADALL;
  /* 10405584 mov eax, dword ptr [0x1040d040] */ { const u32 m_ = (u32)(0x1040d040u); eax = (u32)(M32(m_)); }
  /* 10405589 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 1040558c mov eax, dword ptr [0x1040d938] */ { const u32 m_ = (u32)(0x1040d938u); eax = (u32)(M32(m_)); }
  /* 10405591 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10405593 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405595 je 0x104055b6 */ if (ZF_) goto L_104055b6;
  /* 10405597 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 1040559a push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040559d push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104055a0 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x104055a2u; SAVEALL; call_ind(c, t_); RETCHK(0x104055a2u, 0x104055a0u); LOADALL; }
  /* 104055a2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104055a3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104055a4 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104055a8 jmp 0x104056b5 */ goto L_104056b5;
L_104055b6:;
  /* 104055b6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104055b9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 104055ba je 0x104055d2 */ if (ZF_) goto L_104055d2;
  /* 104055bc mov edi, 0x1040b37c */ { edi = (u32)(0x1040b37cu); }
  /* 104055c1 mov dword ptr [ebp - 0x128], 0x1040b2c8 */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M32(m_) = (u32)(0x1040b2c8u); }
  /* 104055cb mov esi, 0xd4 */ { esi = (u32)(0xd4u); }
  /* 104055d0 jmp 0x104055e6 */ goto L_104055e6;
L_104055d2:;
  /* 104055d2 mov edi, 0x1040b2a8 */ { edi = (u32)(0x1040b2a8u); }
  /* 104055d7 mov dword ptr [ebp - 0x128], 0x1040b208 */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M32(m_) = (u32)(0x1040b208u); }
  /* 104055e1 mov esi, 0xb9 */ { esi = (u32)(0xb9u); }
L_104055e6:;
  /* 104055e6 mov byte ptr [ebp - 0x20], cl */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 104055e9 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 104055ee lea eax, [ebp - 0x124] */ eax = (u32)((u32)(ebp + 0xfffffedcu));
  /* 104055f4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104055f5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104055f6 call dword ptr [0x1040b02c] */ { const u32 m_ = (u32)(0x1040b02cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x104055fcu; SAVEALL; call_ind(c, t_); RETCHK(0x104055fcu, 0x104055f6u); LOADALL; }
  /* 104055fc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104055fe jne 0x10405613 */ if (!ZF_) goto L_10405613;
  /* 10405600 push 0x1040b1f0 */ { u32 v_ = 0x1040b1f0u; esp -= 4; M32(esp) = v_; }
  /* 10405605 lea eax, [ebp - 0x124] */ eax = (u32)((u32)(ebp + 0xfffffedcu));
  /* 1040560b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040560c call 0x10408020 */ esp -= 4; M32(esp) = 0x10405611u; SAVEALL; F_10408020(c); ABI_CHECK(0x10408020u, 0x1040560cu); RETCHK(0x10405611u, 0x1040560cu); LOADALL;
  /* 10405611 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405612 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10405613:;
  /* 10405613 lea ebx, [ebp - 0x124] */ ebx = (u32)((u32)(ebp + 0xfffffedcu));
  /* 10405619 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 1040561b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040561c call 0x10408250 */ esp -= 4; M32(esp) = 0x10405621u; SAVEALL; F_10408250(c); ABI_CHECK(0x10408250u, 0x1040561cu); RETCHK(0x10405621u, 0x1040561cu); LOADALL;
  /* 10405621 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405622 add eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10405625 cmp eax, 0x3c */ { u32 a_ = eax, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405628 jbe 0x1040564f */ if ((CF_|ZF_)) goto L_1040564f;
  /* 1040562a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 1040562c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1040562d call 0x10408250 */ esp -= 4; M32(esp) = 0x10405632u; SAVEALL; F_10408250(c); ABI_CHECK(0x10408250u, 0x1040562du); RETCHK(0x10405632u, 0x1040562du); LOADALL;
  /* 10405632 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 10405634 lea eax, [ebp - 0x124] */ eax = (u32)((u32)(ebp + 0xfffffedcu));
  /* 1040563a sub eax, 0x31 */ { u32 a_ = eax, b_ = 0x31u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1040563d add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 1040563f push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10405641 push 0x1040b1ec */ { u32 v_ = 0x1040b1ecu; esp -= 4; M32(esp) = v_; }
  /* 10405646 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10405647 call 0x10408120 */ esp -= 4; M32(esp) = 0x1040564cu; SAVEALL; F_10408120(c); ABI_CHECK(0x10408120u, 0x10405647u); RETCHK(0x1040564cu, 0x10405647u); LOADALL;
  /* 1040564c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1040564f:;
  /* 1040564f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10405650 call 0x10408250 */ esp -= 4; M32(esp) = 0x10405655u; SAVEALL; F_10408250(c); ABI_CHECK(0x10408250u, 0x10405650u); RETCHK(0x10405655u, 0x10405650u); LOADALL;
  /* 10405655 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405656 lea eax, [eax + esi + 0xc] */ eax = (u32)((u32)(eax + esi + 0xcu));
  /* 1040565a add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1040565d and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10405660 call 0x10404cf0 */ esp -= 4; M32(esp) = 0x10405665u; SAVEALL; F_10404cf0(c); ABI_CHECK(0x10404cf0u, 0x10405660u); RETCHK(0x10405665u, 0x10405660u); LOADALL;
  /* 10405665 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 10405668 mov esi, esp */ { esi = (u32)(esp); }
  /* 1040566a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040566b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040566c call 0x10408020 */ esp -= 4; M32(esp) = 0x10405671u; SAVEALL; F_10408020(c); ABI_CHECK(0x10408020u, 0x1040566cu); RETCHK(0x10405671u, 0x1040566cu); LOADALL;
  /* 10405671 mov edi, 0x1040b1e8 */ { edi = (u32)(0x1040b1e8u); }
  /* 10405676 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10405677 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405678 call 0x10408030 */ esp -= 4; M32(esp) = 0x1040567du; SAVEALL; F_10408030(c); ABI_CHECK(0x10408030u, 0x10405678u); RETCHK(0x1040567du, 0x10405678u); LOADALL;
  /* 1040567d push 0x1040b1dc */ { u32 v_ = 0x1040b1dcu; esp -= 4; M32(esp) = v_; }
  /* 10405682 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405683 call 0x10408030 */ esp -= 4; M32(esp) = 0x10405688u; SAVEALL; F_10408030(c); ABI_CHECK(0x10408030u, 0x10405683u); RETCHK(0x10405688u, 0x10405683u); LOADALL;
  /* 10405688 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10405689 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040568a call 0x10408030 */ esp -= 4; M32(esp) = 0x1040568fu; SAVEALL; F_10408030(c); ABI_CHECK(0x10408030u, 0x1040568au); RETCHK(0x1040568fu, 0x1040568au); LOADALL;
  /* 1040568f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10405690 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405691 call 0x10408030 */ esp -= 4; M32(esp) = 0x10405696u; SAVEALL; F_10408030(c); ABI_CHECK(0x10408030u, 0x10405691u); RETCHK(0x10405696u, 0x10405691u); LOADALL;
  /* 10405696 push dword ptr [ebp - 0x128] */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040569c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040569d call 0x10408030 */ esp -= 4; M32(esp) = 0x104056a2u; SAVEALL; F_10408030(c); ABI_CHECK(0x10408030u, 0x1040569du); RETCHK(0x104056a2u, 0x1040569du); LOADALL;
  /* 104056a2 push 0x12010 */ { u32 v_ = 0x12010u; esp -= 4; M32(esp) = v_; }
  /* 104056a7 push 0x1040b1b4 */ { u32 v_ = 0x1040b1b4u; esp -= 4; M32(esp) = v_; }
  /* 104056ac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104056ad call 0x10407f27 */ esp -= 4; M32(esp) = 0x104056b2u; SAVEALL; F_10407f27(c); ABI_CHECK(0x10407f27u, 0x104056adu); RETCHK(0x104056b2u, 0x104056adu); LOADALL;
  /* 104056b2 add esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_104056b5:;
  /* 104056b5 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 104056b7 call 0x104066c3 */ esp -= 4; M32(esp) = 0x104056bcu; SAVEALL; F_104066c3(c); ABI_CHECK(0x104066c3u, 0x104056b7u); RETCHK(0x104056bcu, 0x104056b7u); LOADALL;
  /* 104056bc int3 */ TRAP(0x104056bcu, "int3");
}

void F_104055ad(CPU *c) {
  NATIVE_HOOK(0x104055adu) REGS; LOADALL;
L_104055ad:;
  /* 104055ad xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 104055af inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 104055b0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104055b1(CPU *c) {
  NATIVE_HOOK(0x104055b1u) REGS; LOADALL;
  goto L_104055b1;
L_104055a4:;
  /* 104055a4 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104055a8 jmp 0x104056b5 */ goto L_104056b5;
L_104055b1:;
  /* 104055b1 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 104055b4 jmp 0x104055a4 */ goto L_104055a4;
L_104056b5:;
  /* 104056b5 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 104056b7 call 0x104066c3 */ esp -= 4; M32(esp) = 0x104056bcu; SAVEALL; F_104066c3(c); ABI_CHECK(0x104066c3u, 0x104056b7u); RETCHK(0x104056bcu, 0x104056b7u); LOADALL;
  /* 104056bc int3 */ TRAP(0x104056bcu, "int3");
}

void F_104056c0(CPU *c) {
  NATIVE_HOOK(0x104056c0u) REGS; LOADALL;
L_104056c0:;
  /* 104056c0 push 0x10405714 */ { u32 v_ = 0x10405714u; esp -= 4; M32(esp) = v_; }
  /* 104056c5 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 104056cb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104056cc mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 104056d0 mov dword ptr [esp + 0x10], ebp */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebp); }
  /* 104056d4 lea ebp, [esp + 0x10] */ ebp = (u32)((u32)(esp + 0x10u));
  /* 104056d8 sub esp, eax */ { u32 a_ = esp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104056da push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104056db push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 104056dc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 104056dd mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 104056e0 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 104056e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 104056e4 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 104056e7 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 104056ee mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 104056f1 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 104056f4 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 104056fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104056fb(CPU *c) {
  NATIVE_HOOK(0x104056fbu) REGS; LOADALL;
L_104056fb:;
  /* 104056fb mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 104056fe mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10405705 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405706 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10405707 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10405708 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10405709 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1040570a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1040570b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405714(CPU *c) {
  NATIVE_HOOK(0x10405714u) REGS; LOADALL;
L_10405714:;
  /* 10405714 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10405715 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10405717 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040571a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040571b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1040571c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1040571d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1040571e cld */ c->df = 0;
  /* 1040571f mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10405722 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10405725 test dword ptr [eax + 4], 6 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040572c jne 0x104057dd */ if (!ZF_) goto L_104057dd;
  /* 10405732 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10405735 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10405738 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 1040573b lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 1040573e mov dword ptr [ebx - 4], eax */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10405741 mov esi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); esi = (u32)(M32(m_)); }
  /* 10405744 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 10405747 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10405748 call 0x104082db */ esp -= 4; M32(esp) = 0x1040574du; SAVEALL; F_104082db(c); ABI_CHECK(0x104082dbu, 0x10405748u); RETCHK(0x1040574du, 0x10405748u); LOADALL;
  /* 1040574d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10405750 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10405752 je 0x104057cf */ if (ZF_) goto L_104057cf;
L_10405754:;
  /* 10405754 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405757 je 0x104057d6 */ if (ZF_) goto L_104057d6;
  /* 10405759 lea ecx, [esi + esi*2] */ ecx = (u32)((u32)(esi + esi * 2u));
  /* 1040575c mov eax, dword ptr [edi + ecx*4 + 4] */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 10405760 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10405762 je 0x104057bd */ if (ZF_) goto L_104057bd;
  /* 10405764 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405765 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10405766 lea ebp, [ebx + 0x10] */ ebp = (u32)((u32)(ebx + 0x10u));
  /* 10405769 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1040576b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 1040576d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1040576f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10405771 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10405773 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10405775u; SAVEALL; call_ind(c, t_); RETCHK(0x10405775u, 0x10405773u); LOADALL; }
  /* 10405775 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10405776 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10405777 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 1040577a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040577c je 0x104057bd */ if (ZF_) goto L_104057bd;
  /* 1040577e js 0x104057c8 */ if (SF_) goto L_104057c8;
  /* 10405780 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 10405783 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10405784 call 0x10405118 */ esp -= 4; M32(esp) = 0x10405789u; SAVEALL; F_10405118(c); ABI_CHECK(0x10405118u, 0x10405784u); RETCHK(0x10405789u, 0x10405784u); LOADALL;
  /* 10405789 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1040578c lea ebp, [ebx + 0x10] */ ebp = (u32)((u32)(ebx + 0x10u));
  /* 1040578f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405790 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10405791 call 0x1040515a */ esp -= 4; M32(esp) = 0x10405796u; SAVEALL; F_1040515a(c); ABI_CHECK(0x1040515au, 0x10405791u); RETCHK(0x10405796u, 0x10405791u); LOADALL;
  /* 10405796 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10405799 lea ecx, [esi + esi*2] */ ecx = (u32)((u32)(esi + esi * 2u));
  /* 1040579c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1040579e mov eax, dword ptr [edi + ecx*4 + 8] */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 104057a2 call 0x104051ee */ esp -= 4; M32(esp) = 0x104057a7u; SAVEALL; F_104051ee(c); ABI_CHECK(0x104051eeu, 0x104057a2u); RETCHK(0x104057a7u, 0x104057a2u); LOADALL;
  /* 104057a7 mov eax, dword ptr [edi + ecx*4] */ { const u32 m_ = (u32)(edi + ecx * 4u); eax = (u32)(M32(m_)); }
  /* 104057aa mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 104057ad mov eax, dword ptr [edi + ecx*4 + 8] */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 104057b1 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 104057b3 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 104057b5 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 104057b7 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 104057b9 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 104057bb call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x104057bdu; SAVEALL; call_ind(c, t_); RETCHK(0x104057bdu, 0x104057bbu); LOADALL; }
L_104057bd:;
  /* 104057bd mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 104057c0 lea ecx, [esi + esi*2] */ ecx = (u32)((u32)(esi + esi * 2u));
  /* 104057c3 mov esi, dword ptr [edi + ecx*4] */ { const u32 m_ = (u32)(edi + ecx * 4u); esi = (u32)(M32(m_)); }
  /* 104057c6 jmp 0x10405754 */ goto L_10405754;
L_104057c8:;
  /* 104057c8 mov eax, 0 */ { eax = (u32)(0x0u); }
  /* 104057cd jmp 0x104057f2 */ goto L_104057f2;
L_104057cf:;
  /* 104057cf mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 104057d2 or dword ptr [eax + 4], 8 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_104057d6:;
  /* 104057d6 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 104057db jmp 0x104057f2 */ goto L_104057f2;
L_104057dd:;
  /* 104057dd push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 104057de lea ebp, [ebx + 0x10] */ ebp = (u32)((u32)(ebx + 0x10u));
  /* 104057e1 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 104057e3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 104057e4 call 0x1040515a */ esp -= 4; M32(esp) = 0x104057e9u; SAVEALL; F_1040515a(c); ABI_CHECK(0x1040515au, 0x104057e4u); RETCHK(0x104057e9u, 0x104057e4u); LOADALL;
  /* 104057e9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 104057ec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104057ed mov eax, 1 */ { eax = (u32)(0x1u); }
L_104057f2:;
  /* 104057f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104057f3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 104057f4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 104057f5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 104057f6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 104057f8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 104057f9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405815(CPU *c) {
  NATIVE_HOOK(0x10405815u) REGS; LOADALL;
L_10405815:;
  /* 10405815 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10405817 push 0x1040b3b0 */ { u32 v_ = 0x1040b3b0u; esp -= 4; M32(esp) = v_; }
  /* 1040581c call 0x104056c0 */ esp -= 4; M32(esp) = 0x10405821u; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x1040581cu); RETCHK(0x10405821u, 0x1040581cu); LOADALL;
  /* 10405821 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10405824 cmp dword ptr [0x1040e040], 3 */ { const u32 m_ = (u32)(0x1040e040u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040582b jne 0x1040585b */ if (!ZF_) goto L_1040585b;
  /* 1040582d cmp esi, dword ptr [0x1040e02c] */ { const u32 m_ = (u32)(0x1040e02cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405833 ja 0x1040585b */ if (!(CF_|ZF_)) goto L_1040585b;
  /* 10405835 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10405837 call 0x104073d3 */ esp -= 4; M32(esp) = 0x1040583cu; SAVEALL; F_104073d3(c); ABI_CHECK(0x104073d3u, 0x10405837u); RETCHK(0x1040583cu, 0x10405837u); LOADALL;
  /* 1040583c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040583d and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405841 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405842 call 0x10407c2b */ esp -= 4; M32(esp) = 0x10405847u; SAVEALL; F_10407c2b(c); ABI_CHECK(0x10407c2bu, 0x10405842u); RETCHK(0x10405847u, 0x10405842u); LOADALL;
  /* 10405847 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405848 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 1040584b or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1040584f call 0x10405887 */ esp -= 4; M32(esp) = 0x10405854u; SAVEALL; F_10405887(c); ABI_CHECK(0x10405887u, 0x1040584fu); RETCHK(0x10405854u, 0x1040584fu); LOADALL;
  /* 10405854 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10405857 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405859 jne 0x1040587e */ if (!ZF_) goto L_1040587e;
L_1040585b:;
  /* 1040585b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1040585d jne 0x10405860 */ if (!ZF_) goto L_10405860;
  /* 1040585f inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10405860:;
  /* 10405860 cmp dword ptr [0x1040e040], 1 */ { const u32 m_ = (u32)(0x1040e040u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405867 je 0x1040586f */ if (ZF_) goto L_1040586f;
  /* 10405869 add esi, 0xf */ { u32 a_ = esi, b_ = 0xfu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1040586c and esi, 0xfffffff0 */ { u32 a_ = esi, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_1040586f:;
  /* 1040586f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405870 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10405872 push dword ptr [0x1040e03c] */ { const u32 m_ = (u32)(0x1040e03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405878 call dword ptr [0x1040b030] */ { const u32 m_ = (u32)(0x1040b030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1040587eu; SAVEALL; call_ind(c, t_); RETCHK(0x1040587eu, 0x10405878u); LOADALL; }
L_1040587e:;
  /* 1040587e call 0x104056fb */ esp -= 4; M32(esp) = 0x10405883u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x1040587eu); RETCHK(0x10405883u, 0x1040587eu); LOADALL;
  /* 10405883 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405884(CPU *c) {
  NATIVE_HOOK(0x10405884u) REGS; LOADALL;
L_10405884:;
  /* 10405884 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10405887 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10405889 call 0x1040731e */ esp -= 4; M32(esp) = 0x1040588eu; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x10405889u); RETCHK(0x1040588eu, 0x10405889u); LOADALL;
  /* 1040588e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040588f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405887(CPU *c) {
  NATIVE_HOOK(0x10405887u) REGS; LOADALL;
L_10405887:;
  /* 10405887 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10405889 call 0x1040731e */ esp -= 4; M32(esp) = 0x1040588eu; SAVEALL; F_1040731e(c); ABI_CHECK(0x1040731eu, 0x10405889u); RETCHK(0x1040588eu, 0x10405889u); LOADALL;
  /* 1040588e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1040588f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405890(CPU *c) {
  NATIVE_HOOK(0x10405890u) REGS; LOADALL;
L_10405890:;
  /* 10405890 cmp dword ptr [esp + 4], -0x20 */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffe0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405895 ja 0x104058b9 */ if (!(CF_|ZF_)) goto L_104058b9;
L_10405897:;
  /* 10405897 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1040589b call 0x10405815 */ esp -= 4; M32(esp) = 0x104058a0u; SAVEALL; F_10405815(c); ABI_CHECK(0x10405815u, 0x1040589bu); RETCHK(0x104058a0u, 0x1040589bu); LOADALL;
  /* 104058a0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104058a2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104058a3 jne 0x104058bb */ if (!ZF_) goto L_104058bb;
  /* 104058a5 cmp dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104058a9 je 0x104058bb */ if (ZF_) goto L_104058bb;
  /* 104058ab push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104058af call 0x10408504 */ esp -= 4; M32(esp) = 0x104058b4u; SAVEALL; F_10408504(c); ABI_CHECK(0x10408504u, 0x104058afu); RETCHK(0x104058b4u, 0x104058afu); LOADALL;
  /* 104058b4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104058b6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104058b7 jne 0x10405897 */ if (!ZF_) goto L_10405897;
L_104058b9:;
  /* 104058b9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_104058bb:;
  /* 104058bb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104058bc(CPU *c) {
  NATIVE_HOOK(0x104058bcu) REGS; LOADALL;
L_104058bc:;
  /* 104058bc push dword ptr [0x1040dc60] */ { const u32 m_ = (u32)(0x1040dc60u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104058c2 push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104058c6 call 0x10405890 */ esp -= 4; M32(esp) = 0x104058cbu; SAVEALL; F_10405890(c); ABI_CHECK(0x10405890u, 0x104058c6u); RETCHK(0x104058cbu, 0x104058c6u); LOADALL;
  /* 104058cb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104058cc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104058cd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104058ce(CPU *c) {
  NATIVE_HOOK(0x104058ceu) REGS; LOADALL;
L_104058ce:;
  /* 104058ce mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 104058d1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104058d3 je 0x10405919 */ if (ZF_) goto L_10405919;
  /* 104058d5 lea edx, [eax + 8] */ edx = (u32)((u32)(eax + 0x8u));
  /* 104058d8 cmp byte ptr [edx], 0 */ { const u32 m_ = (u32)(edx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 104058db je 0x10405919 */ if (ZF_) goto L_10405919;
  /* 104058dd mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 104058e0 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104058e2 je 0x104058f4 */ if (ZF_) goto L_104058f4;
  /* 104058e4 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 104058e7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 104058e8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 104058e9 call 0x10408590 */ esp -= 4; M32(esp) = 0x104058eeu; SAVEALL; F_10408590(c); ABI_CHECK(0x10408590u, 0x104058e9u); RETCHK(0x104058eeu, 0x104058e9u); LOADALL;
  /* 104058ee test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 104058f0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104058f1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 104058f2 jne 0x10405916 */ if (!ZF_) goto L_10405916;
L_104058f4:;
  /* 104058f4 test byte ptr [edi], 2 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104058f7 je 0x104058fe */ if (ZF_) goto L_104058fe;
  /* 104058f9 test byte ptr [esi], 8 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 104058fc je 0x10405916 */ if (ZF_) goto L_10405916;
L_104058fe:;
  /* 104058fe mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10405902 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10405904 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10405906 je 0x1040590d */ if (ZF_) goto L_1040590d;
  /* 10405908 test byte ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1040590b je 0x10405916 */ if (ZF_) goto L_10405916;
L_1040590d:;
  /* 1040590d test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1040590f je 0x10405919 */ if (ZF_) goto L_10405919;
  /* 10405911 test byte ptr [esi], 2 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10405914 jne 0x10405919 */ if (!ZF_) goto L_10405919;
L_10405916:;
  /* 10405916 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10405918 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10405919:;
  /* 10405919 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1040591b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040591c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1040591d(CPU *c) {
  NATIVE_HOOK(0x1040591du) REGS; LOADALL;
L_1040591d:;
  /* 1040591d mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 1040591f cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405925 je 0x1040592a */ if (ZF_) goto L_1040592a;
  /* 10405927 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10405929 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1040592a:;
  /* 1040592a call 0x104061b1 */ esp -= 4; M32(esp) = 0x1040592fu; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x1040592au); RETCHK(0x1040592fu, 0x1040592au); LOADALL;
  /* 1040592f and dword ptr [eax + 0x84], 0 */ { const u32 m_ = (u32)(eax + 0x84u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405936 jmp 0x10406487 */ SAVEALL; F_10406487(c); return;
}

void F_1040593b(CPU *c) {
  NATIVE_HOOK(0x1040593bu) REGS; LOADALL;
L_1040593b:;
  /* 1040593b push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 1040593d push 0x1040b3c0 */ { u32 v_ = 0x1040b3c0u; esp -= 4; M32(esp) = v_; }
  /* 10405942 call 0x104056c0 */ esp -= 4; M32(esp) = 0x10405947u; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x10405942u); RETCHK(0x10405947u, 0x10405942u); LOADALL;
  /* 10405947 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 1040594a mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 1040594d mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 10405950 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405955u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405950u); RETCHK(0x10405955u, 0x10405950u); LOADALL;
  /* 10405955 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1040595a inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1040595c and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405960 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
L_10405963:;
  /* 10405963 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405966 je 0x104059cc */ if (ZF_) goto L_104059cc;
  /* 10405968 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040596b jle 0x10405972 */ if ((ZF_|LT_)) goto L_10405972;
  /* 1040596d cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405970 jl 0x10405977 */ if (LT_) goto L_10405977;
L_10405972:;
  /* 10405972 call 0x104064bc */ esp -= 4; M32(esp) = 0x10405977u; SAVEALL; F_104064bc(c); ABI_CHECK(0x104064bcu, 0x10405972u); RETCHK(0x10405977u, 0x10405972u); LOADALL;
L_10405977:;
  /* 10405977 mov eax, esi */ { eax = (u32)(esi); }
  /* 10405979 shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 1040597c mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1040597f add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10405981 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 10405983 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 10405986 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 1040598d cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405991 je 0x104059a8 */ if (ZF_) goto L_104059a8;
  /* 10405993 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 10405996 push 0x103 */ { u32 v_ = 0x103u; esp -= 4; M32(esp) = v_; }
  /* 1040599b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040599c mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1040599f push dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104059a3 call 0x104064f0 */ esp -= 4; M32(esp) = 0x104059a8u; SAVEALL; F_104064f0(c); ABI_CHECK(0x104064f0u, 0x104059a3u); RETCHK(0x104059a8u, 0x104059a3u); LOADALL;
L_104059a8:;
  /* 104059a8 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104059ac jmp 0x104059c7 */ goto L_104059c7;
L_104059c7:;
  /* 104059c7 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 104059ca jmp 0x10405963 */ goto L_10405963;
L_104059cc:;
  /* 104059cc or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104059d0 call 0x104059ee */ esp -= 4; M32(esp) = 0x104059d5u; SAVEALL; F_104059ee(c); ABI_CHECK(0x104059eeu, 0x104059d0u); RETCHK(0x104059d5u, 0x104059d0u); LOADALL;
  /* 104059d5 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104059d8 je 0x104059df */ if (ZF_) goto L_104059df;
  /* 104059da call 0x104064bc */ esp -= 4; M32(esp) = 0x104059dfu; SAVEALL; F_104064bc(c); ABI_CHECK(0x104064bcu, 0x104059dau); RETCHK(0x104059dfu, 0x104059dau); LOADALL;
L_104059df:;
  /* 104059df mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 104059e2 call 0x104056fb */ esp -= 4; M32(esp) = 0x104059e7u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x104059e2u); RETCHK(0x104059e7u, 0x104059e2u); LOADALL;
  /* 104059e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104059ae(CPU *c) {
  NATIVE_HOOK(0x104059aeu) REGS; LOADALL;
L_104059ae:;
  /* 104059ae mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 104059b1 call 0x1040591d */ esp -= 4; M32(esp) = 0x104059b6u; SAVEALL; F_1040591d(c); ABI_CHECK(0x1040591du, 0x104059b1u); RETCHK(0x104059b6u, 0x104059b1u); LOADALL;
  /* 104059b6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104059b7(CPU *c) {
  NATIVE_HOOK(0x104059b7u) REGS; LOADALL;
  goto L_104059b7;
L_10405963:;
  /* 10405963 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405966 je 0x104059cc */ if (ZF_) goto L_104059cc;
  /* 10405968 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1040596b jle 0x10405972 */ if ((ZF_|LT_)) goto L_10405972;
  /* 1040596d cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405970 jl 0x10405977 */ if (LT_) goto L_10405977;
L_10405972:;
  /* 10405972 call 0x104064bc */ esp -= 4; M32(esp) = 0x10405977u; SAVEALL; F_104064bc(c); ABI_CHECK(0x104064bcu, 0x10405972u); RETCHK(0x10405977u, 0x10405972u); LOADALL;
L_10405977:;
  /* 10405977 mov eax, esi */ { eax = (u32)(esi); }
  /* 10405979 shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 1040597c mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1040597f add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10405981 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 10405983 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 10405986 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 1040598d cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405991 je 0x104059a8 */ if (ZF_) goto L_104059a8;
  /* 10405993 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 10405996 push 0x103 */ { u32 v_ = 0x103u; esp -= 4; M32(esp) = v_; }
  /* 1040599b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1040599c mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1040599f push dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 104059a3 call 0x104064f0 */ esp -= 4; M32(esp) = 0x104059a8u; SAVEALL; F_104064f0(c); ABI_CHECK(0x104064f0u, 0x104059a3u); RETCHK(0x104059a8u, 0x104059a3u); LOADALL;
L_104059a8:;
  /* 104059a8 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104059ac jmp 0x104059c7 */ goto L_104059c7;
L_104059b7:;
  /* 104059b7 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 104059ba and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104059be mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 104059c1 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 104059c4 mov esi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); esi = (u32)(M32(m_)); }
L_104059c7:;
  /* 104059c7 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 104059ca jmp 0x10405963 */ goto L_10405963;
L_104059cc:;
  /* 104059cc or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 104059d0 call 0x104059ee */ esp -= 4; M32(esp) = 0x104059d5u; SAVEALL; F_104059ee(c); ABI_CHECK(0x104059eeu, 0x104059d0u); RETCHK(0x104059d5u, 0x104059d0u); LOADALL;
  /* 104059d5 cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104059d8 je 0x104059df */ if (ZF_) goto L_104059df;
  /* 104059da call 0x104064bc */ esp -= 4; M32(esp) = 0x104059dfu; SAVEALL; F_104064bc(c); ABI_CHECK(0x104064bcu, 0x104059dau); RETCHK(0x104059dfu, 0x104059dau); LOADALL;
L_104059df:;
  /* 104059df mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 104059e2 call 0x104056fb */ esp -= 4; M32(esp) = 0x104059e7u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x104059e2u); RETCHK(0x104059e7u, 0x104059e2u); LOADALL;
  /* 104059e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104059e8(CPU *c) {
  NATIVE_HOOK(0x104059e8u) REGS; LOADALL;
L_104059e8:;
  /* 104059e8 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 104059eb mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 104059ee call 0x104061b1 */ esp -= 4; M32(esp) = 0x104059f3u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x104059eeu); RETCHK(0x104059f3u, 0x104059eeu); LOADALL;
  /* 104059f3 cmp dword ptr [eax + 0x84], 0 */ { const u32 m_ = (u32)(eax + 0x84u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104059fa jle 0x10405a08 */ if ((ZF_|LT_)) goto L_10405a08;
  /* 104059fc call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405a01u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x104059fcu); RETCHK(0x10405a01u, 0x104059fcu); LOADALL;
  /* 10405a01 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10405a06 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10405a08:;
  /* 10405a08 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_104059ee(CPU *c) {
  NATIVE_HOOK(0x104059eeu) REGS; LOADALL;
L_104059ee:;
  /* 104059ee call 0x104061b1 */ esp -= 4; M32(esp) = 0x104059f3u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x104059eeu); RETCHK(0x104059f3u, 0x104059eeu); LOADALL;
  /* 104059f3 cmp dword ptr [eax + 0x84], 0 */ { const u32 m_ = (u32)(eax + 0x84u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 104059fa jle 0x10405a08 */ if ((ZF_|LT_)) goto L_10405a08;
  /* 104059fc call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405a01u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x104059fcu); RETCHK(0x10405a01u, 0x104059fcu); LOADALL;
  /* 10405a01 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10405a06 dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10405a08:;
  /* 10405a08 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405a09(CPU *c) {
  NATIVE_HOOK(0x10405a09u) REGS; LOADALL;
L_10405a09:;
  /* 10405a09 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10405a0b push 0x1040b3d8 */ { u32 v_ = 0x1040b3d8u; esp -= 4; M32(esp) = v_; }
  /* 10405a10 call 0x104056c0 */ esp -= 4; M32(esp) = 0x10405a15u; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x10405a10u); RETCHK(0x10405a15u, 0x10405a10u); LOADALL;
  /* 10405a15 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10405a18 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405a1a je 0x10405a37 */ if (ZF_) goto L_10405a37;
  /* 10405a1c mov ecx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 10405a1f mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10405a22 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405a24 je 0x10405a37 */ if (ZF_) goto L_10405a37;
  /* 10405a26 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405a2a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10405a2b push dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405a2e call 0x10404d6b */ esp -= 4; M32(esp) = 0x10405a33u; SAVEALL; F_10404d6b(c); ABI_CHECK(0x10404d6bu, 0x10405a2eu); RETCHK(0x10405a33u, 0x10405a2eu); LOADALL;
  /* 10405a33 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_10405a37:;
  /* 10405a37 call 0x104056fb */ esp -= 4; M32(esp) = 0x10405a3cu; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10405a37u); RETCHK(0x10405a3cu, 0x10405a37u); LOADALL;
  /* 10405a3c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405a3d(CPU *c) {
  NATIVE_HOOK(0x10405a3du) REGS; LOADALL;
L_10405a3d:;
  /* 10405a3d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10405a3f cmp byte ptr [ebp + 0xc], al */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10405a42 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 10405a45 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405a46(CPU *c) {
  NATIVE_HOOK(0x10405a46u) REGS; LOADALL;
L_10405a46:;
  /* 10405a46 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10405a49 jmp 0x10406487 */ SAVEALL; F_10406487(c); return;
}

void F_10405a4e(CPU *c) {
  NATIVE_HOOK(0x10405a4eu) REGS; LOADALL;
L_10405a4e:;
  /* 10405a4e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405a4f mov esi, eax */ { esi = (u32)(eax); }
  /* 10405a51 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10405a53 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10405a55 cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405a59 jl 0x10405a6b */ if (LT_) goto L_10405a6b;
  /* 10405a5b mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10405a5e mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10405a61 mov esi, dword ptr [edx + esi] */ { const u32 m_ = (u32)(edx + esi); esi = (u32)(M32(m_)); }
  /* 10405a64 mov ecx, dword ptr [esi + ecx] */ { const u32 m_ = (u32)(esi + ecx); ecx = (u32)(M32(m_)); }
  /* 10405a67 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10405a69 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_10405a6b:;
  /* 10405a6b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10405a6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405a6d(CPU *c) {
  NATIVE_HOOK(0x10405a6du) REGS; LOADALL;
L_10405a6d:;
  /* 10405a6d push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 10405a6f push 0x1040b3e8 */ { u32 v_ = 0x1040b3e8u; esp -= 4; M32(esp) = v_; }
  /* 10405a74 call 0x104056c0 */ esp -= 4; M32(esp) = 0x10405a79u; SAVEALL; F_104056c0(c); ABI_CHECK(0x104056c0u, 0x10405a74u); RETCHK(0x10405a79u, 0x10405a74u); LOADALL;
  /* 10405a79 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10405a7b mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10405a7e mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10405a81 mov dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 10405a84 and dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405a88 mov eax, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10405a8b mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 10405a8e push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405a91 lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 10405a94 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10405a95 call 0x10405028 */ esp -= 4; M32(esp) = 0x10405a9au; SAVEALL; F_10405028(c); ABI_CHECK(0x10405028u, 0x10405a95u); RETCHK(0x10405a9au, 0x10405a95u); LOADALL;
  /* 10405a9a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405a9b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405a9c mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 10405a9f call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405aa4u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405a9fu); RETCHK(0x10405aa4u, 0x10405a9fu); LOADALL;
  /* 10405aa4 mov eax, dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); eax = (u32)(M32(m_)); }
  /* 10405aa7 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 10405aaa call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405aafu; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405aaau); RETCHK(0x10405aafu, 0x10405aaau); LOADALL;
  /* 10405aaf mov eax, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); eax = (u32)(M32(m_)); }
  /* 10405ab5 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 10405ab8 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405abdu; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405ab8u); RETCHK(0x10405abdu, 0x10405ab8u); LOADALL;
  /* 10405abd mov dword ptr [eax + 0x7c], esi */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(esi); }
  /* 10405ac0 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405ac5u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405ac0u); RETCHK(0x10405ac5u, 0x10405ac0u); LOADALL;
  /* 10405ac5 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10405ac8 mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 10405ace and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405ad2 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 10405ad9 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405adc push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405adf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10405ae0 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405ae3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10405ae4 call 0x104050bd */ esp -= 4; M32(esp) = 0x10405ae9u; SAVEALL; F_104050bd(c); ABI_CHECK(0x104050bdu, 0x10405ae4u); RETCHK(0x10405ae9u, 0x10405ae4u); LOADALL;
  /* 10405ae9 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10405aec mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10405aef and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405af3 jmp 0x10405ba7 */ goto L_10405ba7;
L_10405ba7:;
  /* 10405ba7 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405bab call 0x10405bc2 */ esp -= 4; M32(esp) = 0x10405bb0u; SAVEALL; F_10405bc2(c); ABI_CHECK(0x10405bc2u, 0x10405babu); RETCHK(0x10405bb0u, 0x10405babu); LOADALL;
  /* 10405bb0 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 10405bb3 call 0x104056fb */ esp -= 4; M32(esp) = 0x10405bb8u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10405bb3u); RETCHK(0x10405bb8u, 0x10405bb3u); LOADALL;
  /* 10405bb8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405af8(CPU *c) {
  NATIVE_HOOK(0x10405af8u) REGS; LOADALL;
L_10405af8:;
  /* 10405af8 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10405afb mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10405afd mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10405b00 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10405b03 cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405b09 jne 0x10405b3c */ if (!ZF_) goto L_10405b3c;
  /* 10405b0b mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10405b0e cmp dword ptr [eax + 0x10], 3 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405b12 jne 0x10405b3c */ if (!ZF_) goto L_10405b3c;
  /* 10405b14 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10405b17 cmp dword ptr [eax + 0x14], 0x19930520 */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405b1e je 0x10405b2c */ if (ZF_) goto L_10405b2c;
  /* 10405b20 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10405b23 cmp dword ptr [eax + 0x14], 0x19930521 */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405b2a jne 0x10405b3c */ if (!ZF_) goto L_10405b3c;
L_10405b2c:;
  /* 10405b2c mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10405b2f cmp dword ptr [eax + 0x1c], 0 */ { const u32 m_ = (u32)(eax + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405b33 mov dword ptr [ebp - 0x24], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x1u); }
  /* 10405b3a je 0x10405b43 */ if (ZF_) goto L_10405b43;
L_10405b3c:;
  /* 10405b3c mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
L_10405b43:;
  /* 10405b43 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 10405b46 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10405b47(CPU *c) {
  NATIVE_HOOK(0x10405b47u) REGS; LOADALL;
L_10405b47:;
  /* 10405b47 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10405b4a mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 10405b4d mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10405b50 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 10405b53 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10405b56 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 10405b59 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 10405b5c mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 10405b5f mov dword ptr [ebp - 0x2c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edx); }
  /* 10405b62 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_10405b64:;
  /* 10405b64 mov dword ptr [ebp - 0x34], edx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edx); }
  /* 10405b67 cmp edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405b6a jae 0x10405b90 */ if (!CF_) goto L_10405b90;
  /* 10405b6c lea esi, [edx + edx*4] */ esi = (u32)((u32)(edx + edx * 4u));
  /* 10405b6f mov ebx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ebx = (u32)(M32(m_)); }
  /* 10405b72 lea esi, [ebx + esi*4] */ esi = (u32)((u32)(ebx + esi * 4u));
  /* 10405b75 mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10405b78 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405b7a jle 0x10405bb9 */ if ((ZF_|LT_)) goto L_10405bb9;
  /* 10405b7c cmp eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405b7f jg 0x10405bb9 */ if (!(ZF_|LT_)) goto L_10405bb9;
  /* 10405b81 lea eax, [ebx + 1] */ eax = (u32)((u32)(ebx + 0x1u));
  /* 10405b84 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 10405b87 mov edx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); edx = (u32)(M32(m_)); }
  /* 10405b8a mov eax, dword ptr [edx + eax*8] */ { const u32 m_ = (u32)(edx + eax * 8u); eax = (u32)(M32(m_)); }
  /* 10405b8d mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
L_10405b90:;
  /* 10405b90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10405b91 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10405b92 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10405b94 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405b95 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10405b96 call 0x1040593b */ esp -= 4; M32(esp) = 0x10405b9bu; SAVEALL; F_1040593b(c); ABI_CHECK(0x1040593bu, 0x10405b96u); RETCHK(0x10405b9bu, 0x10405b96u); LOADALL;
  /* 10405b9b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10405b9e mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 10405ba1 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 10405ba4 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10405ba7 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10405bab call 0x10405bc2 */ esp -= 4; M32(esp) = 0x10405bb0u; SAVEALL; F_10405bc2(c); ABI_CHECK(0x10405bc2u, 0x10405babu); RETCHK(0x10405bb0u, 0x10405babu); LOADALL;
  /* 10405bb0 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 10405bb3 call 0x104056fb */ esp -= 4; M32(esp) = 0x10405bb8u; SAVEALL; F_104056fb(c); ABI_CHECK(0x104056fbu, 0x10405bb3u); RETCHK(0x10405bb8u, 0x10405bb3u); LOADALL;
  /* 10405bb8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10405bb9:;
  /* 10405bb9 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10405bba jmp 0x10405b64 */ goto L_10405b64;
}

void F_10405bbc(CPU *c) {
  NATIVE_HOOK(0x10405bbcu) REGS; LOADALL;
L_10405bbc:;
  /* 10405bbc mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10405bbf mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10405bc2 mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 10405bc5 mov dword ptr [edi - 4], eax */ { const u32 m_ = (u32)(edi + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10405bc8 push dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405bcb call 0x10405071 */ esp -= 4; M32(esp) = 0x10405bd0u; SAVEALL; F_10405071(c); ABI_CHECK(0x10405071u, 0x10405bcbu); RETCHK(0x10405bd0u, 0x10405bcbu); LOADALL;
  /* 10405bd0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405bd1 call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405bd6u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405bd1u); RETCHK(0x10405bd6u, 0x10405bd1u); LOADALL;
  /* 10405bd6 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 10405bd9 mov dword ptr [eax + 0x7c], ecx */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(ecx); }
  /* 10405bdc call 0x104061b1 */ esp -= 4; M32(esp) = 0x10405be1u; SAVEALL; F_104061b1(c); ABI_CHECK(0x104061b1u, 0x10405bdcu); RETCHK(0x10405be1u, 0x10405bdcu); LOADALL;
  /* 10405be1 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 10405be4 mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 10405bea cmp dword ptr [esi], 0xe06d7363 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405bf0 jne 0x10405c30 */ if (!ZF_) goto L_10405c30;
  /* 10405bf2 cmp dword ptr [esi + 0x10], 3 */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405bf6 jne 0x10405c30 */ if (!ZF_) goto L_10405c30;
  /* 10405bf8 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 10405bfb cmp eax, 0x19930520 */ { u32 a_ = eax, b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405c00 je 0x10405c09 */ if (ZF_) goto L_10405c09;
  /* 10405c02 cmp eax, 0x19930521 */ { u32 a_ = eax, b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405c07 jne 0x10405c30 */ if (!ZF_) goto L_10405c30;
L_10405c09:;
  /* 10405c09 cmp dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405c0d jne 0x10405c30 */ if (!ZF_) goto L_10405c30;
  /* 10405c0f cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10405c13 je 0x10405c30 */ if (ZF_) goto L_10405c30;
  /* 10405c15 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10405c18 call 0x10405050 */ esp -= 4; M32(esp) = 0x10405c1du; SAVEALL; F_10405050(c); ABI_CHECK(0x10405050u, 0x10405c18u); RETCHK(0x10405c1du, 0x10405c18u); LOADALL;
  /* 10405c1d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405c1e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10405c20 je 0x10405c30 */ if (ZF_) goto L_10405c30;
  /* 10405c22 call 0x104051c2 */ esp -= 4; M32(esp) = 0x10405c27u; SAVEALL; F_104051c2(c); ABI_CHECK(0x104051c2u, 0x10405c22u); RETCHK(0x10405c27u, 0x10405c22u); LOADALL;
  /* 10405c27 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10405c28 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10405c29 call 0x10405a09 */ esp -= 4; M32(esp) = 0x10405c2eu; SAVEALL; F_10405a09(c); ABI_CHECK(0x10405a09u, 0x10405c29u); RETCHK(0x10405c2eu, 0x10405c29u); LOADALL;
  /* 10405c2e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10405c2f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10405c30:;
  /* 10405c30 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
