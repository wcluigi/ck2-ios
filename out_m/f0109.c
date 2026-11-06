#include "funcs.h"

void F_1020a6bc(CPU *c) {
  NATIVE_HOOK(0x1020a6bcu) REGS; LOADALL;
L_1020a6bc:;
  /* 1020a6bc push 0x38 */ { u32 v_ = 0x38u; esp -= 4; M32(esp) = v_; }
  /* 1020a6be push 0x1020c200 */ { u32 v_ = 0x1020c200u; esp -= 4; M32(esp) = v_; }
  /* 1020a6c3 call 0x10205950 */ esp -= 4; M32(esp) = 0x1020a6c8u; SAVEALL; F_10205950(c); ABI_CHECK(0x10205950u, 0x1020a6c3u); RETCHK(0x1020a6c8u, 0x1020a6c3u); LOADALL;
  /* 1020a6c8 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 1020a6cd mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 1020a6d0 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1020a6d2 mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 1020a6d5 mov dword ptr [ebp - 0x44], edi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(edi); }
  /* 1020a6d8 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 1020a6db mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 1020a6dd mov dword ptr [ebp - 0x40], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ebx); }
  /* 1020a6e0 mov dword ptr [ebp - 0x3c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(edi); }
  /* 1020a6e3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1020a6e6 cmp eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a6e9 je 0x1020a862 */ if (ZF_) goto L_1020a862;
  /* 1020a6ef lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 1020a6f2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020a6f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020a6f4 mov esi, dword ptr [0x1020b0c8] */ { const u32 m_ = (u32)(0x1020b0c8u); esi = (u32)(M32(m_)); }
  /* 1020a6fa call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x1020a6fcu; SAVEALL; call_ind(c, t_); RETCHK(0x1020a6fcu, 0x1020a6fau); LOADALL; }
  /* 1020a6fc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020a6fe je 0x1020a720 */ if (ZF_) goto L_1020a720;
  /* 1020a700 cmp dword ptr [ebp - 0x30], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a704 jne 0x1020a720 */ if (!ZF_) goto L_1020a720;
  /* 1020a706 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 1020a709 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020a70a push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a70d call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x1020a70fu; SAVEALL; call_ind(c, t_); RETCHK(0x1020a70fu, 0x1020a70du); LOADALL; }
  /* 1020a70f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020a711 je 0x1020a720 */ if (ZF_) goto L_1020a720;
  /* 1020a713 cmp dword ptr [ebp - 0x30], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a717 jne 0x1020a720 */ if (!ZF_) goto L_1020a720;
  /* 1020a719 mov dword ptr [ebp - 0x3c], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0x1u); }
L_1020a720:;
  /* 1020a720 cmp dword ptr [ebp - 0x3c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a723 je 0x1020a73f */ if (ZF_) goto L_1020a73f;
  /* 1020a725 cmp ebx, -1 */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a728 je 0x1020a72e */ if (ZF_) goto L_1020a72e;
  /* 1020a72a mov esi, ebx */ { esi = (u32)(ebx); }
  /* 1020a72c jmp 0x1020a73a */ goto L_1020a73a;
L_1020a72e:;
  /* 1020a72e push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a731 call 0x102083b0 */ esp -= 4; M32(esp) = 0x1020a736u; SAVEALL; F_102083b0(c); ABI_CHECK(0x102083b0u, 0x1020a731u); RETCHK(0x1020a736u, 0x1020a731u); LOADALL;
  /* 1020a736 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020a737 mov esi, eax */ { esi = (u32)(eax); }
  /* 1020a739 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1020a73a:;
  /* 1020a73a mov dword ptr [ebp - 0x38], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(esi); }
  /* 1020a73d jmp 0x1020a742 */ goto L_1020a742;
L_1020a73f:;
  /* 1020a73f mov esi, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); esi = (u32)(M32(m_)); }
L_1020a742:;
  /* 1020a742 cmp dword ptr [ebp - 0x3c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a745 jne 0x1020a761 */ if (!ZF_) goto L_1020a761;
  /* 1020a747 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a748 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a749 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020a74a push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a74d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1020a74f push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a752 call dword ptr [0x1020b0d8] */ { const u32 m_ = (u32)(0x1020b0d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020a758u; SAVEALL; call_ind(c, t_); RETCHK(0x1020a758u, 0x1020a752u); LOADALL; }
  /* 1020a758 mov esi, eax */ { esi = (u32)(eax); }
  /* 1020a75a mov dword ptr [ebp - 0x38], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(esi); }
  /* 1020a75d cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a75f je 0x1020a7b9 */ if (ZF_) goto L_1020a7b9;
L_1020a761:;
  /* 1020a761 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 1020a764 lea eax, [esi + esi] */ eax = (u32)((u32)(esi + esi));
  /* 1020a767 add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1020a76a and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020a76d call 0x10204f80 */ esp -= 4; M32(esp) = 0x1020a772u; SAVEALL; F_10204f80(c); ABI_CHECK(0x10204f80u, 0x1020a76du); RETCHK(0x1020a772u, 0x1020a76du); LOADALL;
  /* 1020a772 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 1020a775 mov ebx, esp */ { ebx = (u32)(esp); }
  /* 1020a777 mov dword ptr [ebp - 0x48], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(ebx); }
  /* 1020a77a lea eax, [esi + esi] */ eax = (u32)((u32)(esi + esi));
  /* 1020a77d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020a77e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a77f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020a780 call 0x102092d0 */ esp -= 4; M32(esp) = 0x1020a785u; SAVEALL; F_102092d0(c); ABI_CHECK(0x102092d0u, 0x1020a780u); RETCHK(0x1020a785u, 0x1020a780u); LOADALL;
  /* 1020a785 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020a788 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1020a78c jmp 0x1020a7a5 */ goto L_1020a7a5;
L_1020a7a5:;
  /* 1020a7a5 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a7a7 jne 0x1020a7c7 */ if (!ZF_) goto L_1020a7c7;
  /* 1020a7a9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020a7aa push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 1020a7ac call 0x10206973 */ esp -= 4; M32(esp) = 0x1020a7b1u; SAVEALL; F_10206973(c); ABI_CHECK(0x10206973u, 0x1020a7acu); RETCHK(0x1020a7b1u, 0x1020a7acu); LOADALL;
  /* 1020a7b1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020a7b2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020a7b3 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 1020a7b5 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a7b7 jne 0x1020a7c0 */ if (!ZF_) goto L_1020a7c0;
L_1020a7b9:;
  /* 1020a7b9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020a7bb jmp 0x1020a874 */ goto L_1020a874;
L_1020a7c0:;
  /* 1020a7c0 mov dword ptr [ebp - 0x44], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x1u); }
L_1020a7c7:;
  /* 1020a7c7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020a7c8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020a7c9 push dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a7cc push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a7cf push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1020a7d1 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a7d4 call dword ptr [0x1020b0d8] */ { const u32 m_ = (u32)(0x1020b0d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020a7dau; SAVEALL; call_ind(c, t_); RETCHK(0x1020a7dau, 0x1020a7d4u); LOADALL; }
  /* 1020a7da test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020a7dc je 0x1020a865 */ if (ZF_) goto L_1020a865;
  /* 1020a7e2 cmp dword ptr [ebp + 0x18], edi */ { const u32 m_ = (u32)(ebp + 0x18u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a7e5 je 0x1020a807 */ if (ZF_) goto L_1020a807;
  /* 1020a7e7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a7e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a7e9 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a7ec push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a7ef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020a7f0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020a7f1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a7f2 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a7f5 call dword ptr [0x1020b07c] */ { const u32 m_ = (u32)(0x1020b07cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020a7fbu; SAVEALL; call_ind(c, t_); RETCHK(0x1020a7fbu, 0x1020a7f5u); LOADALL; }
  /* 1020a7fb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020a7fd je 0x1020a865 */ if (ZF_) goto L_1020a865;
  /* 1020a7ff mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 1020a802 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 1020a805 jmp 0x1020a865 */ goto L_1020a865;
L_1020a807:;
  /* 1020a807 cmp dword ptr [ebp - 0x3c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a80a jne 0x1020a822 */ if (!ZF_) goto L_1020a822;
  /* 1020a80c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a80d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a80e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a80f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a810 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020a811 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020a812 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a813 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a816 call dword ptr [0x1020b07c] */ { const u32 m_ = (u32)(0x1020b07cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020a81cu; SAVEALL; call_ind(c, t_); RETCHK(0x1020a81cu, 0x1020a816u); LOADALL; }
  /* 1020a81c mov esi, eax */ { esi = (u32)(eax); }
  /* 1020a81e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a820 je 0x1020a865 */ if (ZF_) goto L_1020a865;
L_1020a822:;
  /* 1020a822 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020a823 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1020a825 call 0x10206973 */ esp -= 4; M32(esp) = 0x1020a82au; SAVEALL; F_10206973(c); ABI_CHECK(0x10206973u, 0x1020a825u); RETCHK(0x1020a82au, 0x1020a825u); LOADALL;
  /* 1020a82a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020a82b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020a82c mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 1020a82f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a831 je 0x1020a865 */ if (ZF_) goto L_1020a865;
  /* 1020a833 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a834 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a835 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020a836 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020a837 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020a838 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020a839 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a83a push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a83d call dword ptr [0x1020b07c] */ { const u32 m_ = (u32)(0x1020b07cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020a843u; SAVEALL; call_ind(c, t_); RETCHK(0x1020a843u, 0x1020a83du); LOADALL; }
  /* 1020a843 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a845 jne 0x1020a855 */ if (!ZF_) goto L_1020a855;
  /* 1020a847 push dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a84a call 0x1020572e */ esp -= 4; M32(esp) = 0x1020a84fu; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x1020a84au); RETCHK(0x1020a84fu, 0x1020a84au); LOADALL;
  /* 1020a84f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020a850 mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 1020a853 jmp 0x1020a865 */ goto L_1020a865;
L_1020a855:;
  /* 1020a855 cmp dword ptr [ebp - 0x40], -1 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a859 je 0x1020a865 */ if (ZF_) goto L_1020a865;
  /* 1020a85b mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 1020a85e mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 1020a860 jmp 0x1020a865 */ goto L_1020a865;
L_1020a862:;
  /* 1020a862 mov ebx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ebx = (u32)(M32(m_)); }
L_1020a865:;
  /* 1020a865 cmp dword ptr [ebp - 0x44], edi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a868 je 0x1020a871 */ if (ZF_) goto L_1020a871;
  /* 1020a86a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020a86b call 0x1020572e */ esp -= 4; M32(esp) = 0x1020a870u; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x1020a86bu); RETCHK(0x1020a870u, 0x1020a86bu); LOADALL;
  /* 1020a870 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1020a871:;
  /* 1020a871 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
L_1020a874:;
  /* 1020a874 lea esp, [ebp - 0x54] */ esp = (u32)((u32)(ebp + 0xffffffacu));
  /* 1020a877 mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 1020a87a call 0x10204f65 */ esp -= 4; M32(esp) = 0x1020a87fu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x1020a87au); RETCHK(0x1020a87fu, 0x1020a87au); LOADALL;
  /* 1020a87f call 0x1020598b */ esp -= 4; M32(esp) = 0x1020a884u; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x1020a87fu); RETCHK(0x1020a884u, 0x1020a87fu); LOADALL;
  /* 1020a884 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020a78e(CPU *c) {
  NATIVE_HOOK(0x1020a78eu) REGS; LOADALL;
L_1020a78e:;
  /* 1020a78e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020a790 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020a791 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020a792(CPU *c) {
  NATIVE_HOOK(0x1020a792u) REGS; LOADALL;
L_1020a792:;
  /* 1020a792 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 1020a795 call 0x1020a50e */ esp -= 4; M32(esp) = 0x1020a79au; SAVEALL; F_1020a50e(c); ABI_CHECK(0x1020a50eu, 0x1020a795u); RETCHK(0x1020a79au, 0x1020a795u); LOADALL;
  /* 1020a79a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 1020a79c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1020a79e or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1020a7a2 mov esi, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); esi = (u32)(M32(m_)); }
  /* 1020a7a5 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a7a7 jne 0x1020a7c7 */ if (!ZF_) goto L_1020a7c7;
  /* 1020a7a9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020a7aa push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 1020a7ac call 0x10206973 */ esp -= 4; M32(esp) = 0x1020a7b1u; SAVEALL; F_10206973(c); ABI_CHECK(0x10206973u, 0x1020a7acu); RETCHK(0x1020a7b1u, 0x1020a7acu); LOADALL;
  /* 1020a7b1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020a7b2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020a7b3 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 1020a7b5 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a7b7 jne 0x1020a7c0 */ if (!ZF_) goto L_1020a7c0;
  /* 1020a7b9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020a7bb jmp 0x1020a874 */ goto L_1020a874;
L_1020a7c0:;
  /* 1020a7c0 mov dword ptr [ebp - 0x44], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x1u); }
L_1020a7c7:;
  /* 1020a7c7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020a7c8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020a7c9 push dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a7cc push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a7cf push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1020a7d1 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a7d4 call dword ptr [0x1020b0d8] */ { const u32 m_ = (u32)(0x1020b0d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020a7dau; SAVEALL; call_ind(c, t_); RETCHK(0x1020a7dau, 0x1020a7d4u); LOADALL; }
  /* 1020a7da test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020a7dc je 0x1020a865 */ if (ZF_) goto L_1020a865;
  /* 1020a7e2 cmp dword ptr [ebp + 0x18], edi */ { const u32 m_ = (u32)(ebp + 0x18u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a7e5 je 0x1020a807 */ if (ZF_) goto L_1020a807;
  /* 1020a7e7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a7e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a7e9 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a7ec push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a7ef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020a7f0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020a7f1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a7f2 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a7f5 call dword ptr [0x1020b07c] */ { const u32 m_ = (u32)(0x1020b07cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020a7fbu; SAVEALL; call_ind(c, t_); RETCHK(0x1020a7fbu, 0x1020a7f5u); LOADALL; }
  /* 1020a7fb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020a7fd je 0x1020a865 */ if (ZF_) goto L_1020a865;
  /* 1020a7ff mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 1020a802 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 1020a805 jmp 0x1020a865 */ goto L_1020a865;
L_1020a807:;
  /* 1020a807 cmp dword ptr [ebp - 0x3c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a80a jne 0x1020a822 */ if (!ZF_) goto L_1020a822;
  /* 1020a80c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a80d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a80e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a80f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a810 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020a811 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020a812 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a813 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a816 call dword ptr [0x1020b07c] */ { const u32 m_ = (u32)(0x1020b07cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020a81cu; SAVEALL; call_ind(c, t_); RETCHK(0x1020a81cu, 0x1020a816u); LOADALL; }
  /* 1020a81c mov esi, eax */ { esi = (u32)(eax); }
  /* 1020a81e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a820 je 0x1020a865 */ if (ZF_) goto L_1020a865;
L_1020a822:;
  /* 1020a822 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020a823 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1020a825 call 0x10206973 */ esp -= 4; M32(esp) = 0x1020a82au; SAVEALL; F_10206973(c); ABI_CHECK(0x10206973u, 0x1020a825u); RETCHK(0x1020a82au, 0x1020a825u); LOADALL;
  /* 1020a82a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020a82b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020a82c mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 1020a82f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a831 je 0x1020a865 */ if (ZF_) goto L_1020a865;
  /* 1020a833 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a834 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a835 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020a836 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020a837 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020a838 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020a839 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a83a push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a83d call dword ptr [0x1020b07c] */ { const u32 m_ = (u32)(0x1020b07cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020a843u; SAVEALL; call_ind(c, t_); RETCHK(0x1020a843u, 0x1020a83du); LOADALL; }
  /* 1020a843 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a845 jne 0x1020a855 */ if (!ZF_) goto L_1020a855;
  /* 1020a847 push dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a84a call 0x1020572e */ esp -= 4; M32(esp) = 0x1020a84fu; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x1020a84au); RETCHK(0x1020a84fu, 0x1020a84au); LOADALL;
  /* 1020a84f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020a850 mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 1020a853 jmp 0x1020a865 */ goto L_1020a865;
L_1020a855:;
  /* 1020a855 cmp dword ptr [ebp - 0x40], -1 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a859 je 0x1020a865 */ if (ZF_) goto L_1020a865;
  /* 1020a85b mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 1020a85e mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 1020a860 jmp 0x1020a865 */ goto L_1020a865;
L_1020a865:;
  /* 1020a865 cmp dword ptr [ebp - 0x44], edi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a868 je 0x1020a871 */ if (ZF_) goto L_1020a871;
  /* 1020a86a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020a86b call 0x1020572e */ esp -= 4; M32(esp) = 0x1020a870u; SAVEALL; F_1020572e(c); ABI_CHECK(0x1020572eu, 0x1020a86bu); RETCHK(0x1020a870u, 0x1020a86bu); LOADALL;
  /* 1020a870 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1020a871:;
  /* 1020a871 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
L_1020a874:;
  /* 1020a874 lea esp, [ebp - 0x54] */ esp = (u32)((u32)(ebp + 0xffffffacu));
  /* 1020a877 mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 1020a87a call 0x10204f65 */ esp -= 4; M32(esp) = 0x1020a87fu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x1020a87au); RETCHK(0x1020a87fu, 0x1020a87au); LOADALL;
  /* 1020a87f call 0x1020598b */ esp -= 4; M32(esp) = 0x1020a884u; SAVEALL; F_1020598b(c); ABI_CHECK(0x1020598bu, 0x1020a87fu); RETCHK(0x1020a884u, 0x1020a87fu); LOADALL;
  /* 1020a884 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020a885(CPU *c) {
  NATIVE_HOOK(0x1020a885u) REGS; LOADALL;
L_1020a885:;
  /* 1020a885 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1020a886 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1020a888 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020a889 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1020a88c lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 1020a88f cmp ecx, 0x100 */ { u32 a_ = ecx, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020a895 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1020a898 ja 0x1020a8a3 */ if (!(CF_|ZF_)) goto L_1020a8a3;
  /* 1020a89a mov ecx, dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); ecx = (u32)(M32(m_)); }
  /* 1020a89d movzx eax, word ptr [ecx + eax*2] */ { const u32 m_ = (u32)(ecx + eax * 2u); eax = (u32)(M16(m_)); }
  /* 1020a8a1 jmp 0x1020a8f7 */ goto L_1020a8f7;
L_1020a8a3:;
  /* 1020a8a3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020a8a4 mov edx, eax */ { edx = (u32)(eax); }
  /* 1020a8a6 sar edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 1020a8a9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020a8aa mov edi, dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); edi = (u32)(M32(m_)); }
  /* 1020a8ad movzx esi, dl */ { esi = (u32)((edx & 0xffu)); }
  /* 1020a8b0 test byte ptr [edi + esi*2 + 1], 0x80 */ { const u32 m_ = (u32)(edi + esi * 2u + 0x1u); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1020a8b5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020a8b6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020a8b7 je 0x1020a8c8 */ if (ZF_) goto L_1020a8c8;
  /* 1020a8b9 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 1020a8bb mov byte ptr [ebp - 3], al */ { const u32 m_ = (u32)(ebp + 0xfffffffdu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020a8be mov byte ptr [ebp - 4], dl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 1020a8c1 mov byte ptr [ebp - 2], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffeu); M8(m_) = (u8)(0x0u); }
  /* 1020a8c5 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 1020a8c6 jmp 0x1020a8d2 */ goto L_1020a8d2;
L_1020a8c8:;
  /* 1020a8c8 mov byte ptr [ebp - 4], al */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020a8cb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020a8cd mov byte ptr [ebp - 3], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffdu); M8(m_) = (u8)(0x0u); }
  /* 1020a8d1 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_1020a8d2:;
  /* 1020a8d2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1020a8d4 push dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a8d7 push dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020a8da lea ecx, [ebp + 0xe] */ ecx = (u32)((u32)(ebp + 0xeu));
  /* 1020a8dd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020a8de push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020a8df lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 1020a8e2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020a8e3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1020a8e5 call 0x10209ae8 */ esp -= 4; M32(esp) = 0x1020a8eau; SAVEALL; F_10209ae8(c); ABI_CHECK(0x10209ae8u, 0x1020a8e5u); RETCHK(0x1020a8eau, 0x1020a8e5u); LOADALL;
  /* 1020a8ea add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020a8ed test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020a8ef jne 0x1020a8f3 */ if (!ZF_) goto L_1020a8f3;
  /* 1020a8f1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020a8f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1020a8f3:;
  /* 1020a8f3 movzx eax, word ptr [ebp + 0xe] */ { const u32 m_ = (u32)(ebp + 0xeu); eax = (u32)(M16(m_)); }
L_1020a8f7:;
  /* 1020a8f7 and eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = eax, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020a8fa leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 1020a8fb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020ab1e(CPU *c) {
  NATIVE_HOOK(0x1020ab1eu) REGS; LOADALL;
L_1020ab1e:;
  /* 1020ab1e jmp dword ptr [0x1020b008] */ { const u32 m_ = (u32)(0x1020b008u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_1020ab30(CPU *c) {
  NATIVE_HOOK(0x1020ab30u) REGS; LOADALL;
L_1020ab30:;
  /* 1020ab30 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 1020ab33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020ab34 call 0x10204e07 */ esp -= 4; M32(esp) = 0x1020ab39u; SAVEALL; F_10204e07(c); ABI_CHECK(0x10204e07u, 0x1020ab34u); RETCHK(0x1020ab39u, 0x1020ab34u); LOADALL;
  /* 1020ab39 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020ab3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1020ab3b(CPU *c) {
  NATIVE_HOOK(0x1020ab3bu) REGS; LOADALL;
  goto L_1020ab3b;
L_10205054:;
  /* 10205054 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10205055 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10205057 sub esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020505a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020505b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020505c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020505d cld */ c->df = 0;
  /* 1020505e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10205061 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10205063 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10205064 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10205065 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10205066 push dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205069 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020506c push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1020506f push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205072 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10205075 call 0x10206366 */ esp -= 4; M32(esp) = 0x1020507au; SAVEALL; F_10206366(c); ABI_CHECK(0x10206366u, 0x10205075u); RETCHK(0x1020507au, 0x10205075u); LOADALL;
  /* 1020507a add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020507d mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10205080 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10205081 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10205082 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10205083 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10205086 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10205088 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10205089 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1020ab3b:;
  /* 1020ab3b mov eax, 0x1020c2ec */ { eax = (u32)(0x1020c2ecu); }
  /* 1020ab40 jmp 0x10205054 */ goto L_10205054;
}

void F_10301000(CPU *c) {
  NATIVE_HOOK(0x10301000u) REGS; LOADALL;
L_10301000:;
  /* 10301000 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 10301005 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10301010(CPU *c) {
  NATIVE_HOOK(0x10301010u) REGS; LOADALL;
L_10301010:;
  /* 10301010 mov dword ptr [ecx], 0x1030912c */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x1030912cu); }
  /* 10301016 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10301019 jmp 0x10301b70 */ goto L_10301b70;
L_10301b70:;
  /* 10301b70 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10301b76 jmp 0x10302770 */ goto L_10302770;
L_10302770:;
  /* 10302770 mov dword ptr [ecx], 0x10309154 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x10309154u); }
  /* 10302776 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10301020(CPU *c) {
  NATIVE_HOOK(0x10301020u) REGS; LOADALL;
L_10301020:;
  /* 10301020 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10301024 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10301027 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1030102a call 0x103024f0 */ esp -= 4; M32(esp) = 0x1030102fu; SAVEALL; F_103024f0(c); ABI_CHECK(0x103024f0u, 0x1030102au); RETCHK(0x1030102fu, 0x1030102au); LOADALL;
  /* 1030102f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10301040(CPU *c) {
  NATIVE_HOOK(0x10301040u) REGS; LOADALL;
L_10301040:;
  /* 10301040 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10301041 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10301043 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10301046 sub esp, 0xc0 */ { u32 a_ = esp, b_ = 0xc0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1030104c mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 10301051 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10301054 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301055 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301056 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10301058 mov dword ptr [esp + 0xc4], eax */ { const u32 m_ = (u32)(esp + 0xc4u); M32(m_) = (u32)(eax); }
  /* 1030105f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301061 mov dword ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 10301069 mov ecx, 0x2d */ { ecx = (u32)(0x2du); }
  /* 1030106e lea edi, [esp + 0xc] */ edi = (u32)((u32)(esp + 0xcu));
  /* 10301072 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10301074 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10301077 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 1030107b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030107c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1030107d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1030107e push 0x3e9 */ { u32 v_ = 0x3e9u; esp -= 4; M32(esp) = v_; }
  /* 10301083 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10301086 call 0x10302700 */ esp -= 4; M32(esp) = 0x1030108bu; SAVEALL; F_10302700(c); ABI_CHECK(0x10302700u, 0x10301086u); RETCHK(0x1030108bu, 0x10301086u); LOADALL;
  /* 1030108b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030108d jl 0x103010aa */ if (LT_) goto L_103010aa;
  /* 1030108f mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10301092 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10301095 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10301097 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301098 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 1030109c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1030109d mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 103010a1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 103010a2 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 103010a6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 103010a7 call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103010aau; SAVEALL; call_ind(c, t_); RETCHK(0x103010aau, 0x103010a7u); LOADALL; }
L_103010aa:;
  /* 103010aa mov ecx, dword ptr [esp + 0xc4] */ { const u32 m_ = (u32)(esp + 0xc4u); ecx = (u32)(M32(m_)); }
  /* 103010b1 call 0x10302a7d */ esp -= 4; M32(esp) = 0x103010b6u; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x103010b1u); RETCHK(0x103010b6u, 0x103010b1u); LOADALL;
  /* 103010b6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103010b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103010b8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 103010ba pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 103010bb ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_103010c0(CPU *c) {
  NATIVE_HOOK(0x103010c0u) REGS; LOADALL;
L_103010c0:;
  /* 103010c0 sub esp, 0x58 */ { u32 a_ = esp, b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 103010c3 mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 103010c8 mov edx, dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); edx = (u32)(M32(m_)); }
  /* 103010cc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103010cd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103010ce mov esi, ecx */ { esi = (u32)(ecx); }
  /* 103010d0 mov dword ptr [esp + 0x5c], eax */ { const u32 m_ = (u32)(esp + 0x5cu); M32(m_) = (u32)(eax); }
  /* 103010d4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103010d6 mov dword ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 103010de mov ecx, 0x14 */ { ecx = (u32)(0x14u); }
  /* 103010e3 lea edi, [esp + 0xc] */ edi = (u32)((u32)(esp + 0xcu));
  /* 103010e7 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 103010e9 mov ecx, dword ptr [esp + 0x68] */ { const u32 m_ = (u32)(esp + 0x68u); ecx = (u32)(M32(m_)); }
  /* 103010ed lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 103010f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103010f2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103010f3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 103010f4 push 0x3eb */ { u32 v_ = 0x3ebu; esp -= 4; M32(esp) = v_; }
  /* 103010f9 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 103010fc call 0x10302700 */ esp -= 4; M32(esp) = 0x10301101u; SAVEALL; F_10302700(c); ABI_CHECK(0x10302700u, 0x103010fcu); RETCHK(0x10301101u, 0x103010fcu); LOADALL;
  /* 10301101 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10301103 jl 0x10301126 */ if (LT_) goto L_10301126;
  /* 10301105 mov edx, dword ptr [esp + 0x6c] */ { const u32 m_ = (u32)(esp + 0x6cu); edx = (u32)(M32(m_)); }
  /* 10301109 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1030110c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 1030110e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1030110f lea edx, [esp + 0x34] */ edx = (u32)((u32)(esp + 0x34u));
  /* 10301113 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301114 mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 10301118 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301119 lea edx, [esp + 0x18] */ edx = (u32)((u32)(esp + 0x18u));
  /* 1030111d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1030111e mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 10301122 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301123 call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10301126u; SAVEALL; call_ind(c, t_); RETCHK(0x10301126u, 0x10301123u); LOADALL; }
L_10301126:;
  /* 10301126 mov ecx, dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 1030112a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030112b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030112c call 0x10302a7d */ esp -= 4; M32(esp) = 0x10301131u; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x1030112cu); RETCHK(0x10301131u, 0x1030112cu); LOADALL;
  /* 10301131 add esp, 0x58 */ { u32 a_ = esp, b_ = 0x58u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10301134 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10301140(CPU *c) {
  NATIVE_HOOK(0x10301140u) REGS; LOADALL;
L_10301140:;
  /* 10301140 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10301141 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10301143 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10301146 sub esp, 0xdd0 */ { u32 a_ = esp, b_ = 0xdd0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1030114c mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 10301151 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10301154 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301155 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301156 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10301158 mov dword ptr [esp + 0xdd4], eax */ { const u32 m_ = (u32)(esp + 0xdd4u); M32(m_) = (u32)(eax); }
  /* 1030115f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301161 mov word ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M16(m_) = (u16)(0x0u); }
  /* 10301168 mov ecx, 0x370 */ { ecx = (u32)(0x370u); }
  /* 1030116d lea edi, [esp + 0xa] */ edi = (u32)((u32)(esp + 0xau));
  /* 10301171 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10301173 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10301176 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 10301178 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 1030117c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030117d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1030117e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1030117f push 0x3ed */ { u32 v_ = 0x3edu; esp -= 4; M32(esp) = v_; }
  /* 10301184 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10301187 call 0x10302700 */ esp -= 4; M32(esp) = 0x1030118cu; SAVEALL; F_10302700(c); ABI_CHECK(0x10302700u, 0x10301187u); RETCHK(0x1030118cu, 0x10301187u); LOADALL;
  /* 1030118c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030118e jl 0x103011ab */ if (LT_) goto L_103011ab;
  /* 10301190 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10301193 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10301196 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10301198 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301199 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 1030119d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1030119e mov edx, dword ptr [esp + 0x12] */ { const u32 m_ = (u32)(esp + 0x12u); edx = (u32)(M32(m_)); }
  /* 103011a2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 103011a3 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 103011a7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 103011a8 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103011abu; SAVEALL; call_ind(c, t_); RETCHK(0x103011abu, 0x103011a8u); LOADALL; }
L_103011ab:;
  /* 103011ab mov ecx, dword ptr [esp + 0xdd4] */ { const u32 m_ = (u32)(esp + 0xdd4u); ecx = (u32)(M32(m_)); }
  /* 103011b2 call 0x10302a7d */ esp -= 4; M32(esp) = 0x103011b7u; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x103011b2u); RETCHK(0x103011b7u, 0x103011b2u); LOADALL;
  /* 103011b7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103011b8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103011b9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 103011bb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 103011bc ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_103011c0(CPU *c) {
  NATIVE_HOOK(0x103011c0u) REGS; LOADALL;
L_103011c0:;
  /* 103011c0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103011c1 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 103011c5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103011c6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 103011c8 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 103011cc lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 103011d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103011d1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103011d2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 103011d3 push 0x3f1 */ { u32 v_ = 0x3f1u; esp -= 4; M32(esp) = v_; }
  /* 103011d8 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 103011db mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 103011e3 call 0x10302700 */ esp -= 4; M32(esp) = 0x103011e8u; SAVEALL; F_10302700(c); ABI_CHECK(0x10302700u, 0x103011e3u); RETCHK(0x103011e8u, 0x103011e3u); LOADALL;
  /* 103011e8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103011ea jl 0x103011fe */ if (LT_) goto L_103011fe;
  /* 103011ec mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 103011f0 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 103011f3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 103011f5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 103011f6 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 103011fa push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 103011fb call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103011feu; SAVEALL; call_ind(c, t_); RETCHK(0x103011feu, 0x103011fbu); LOADALL; }
L_103011fe:;
  /* 103011fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103011ff pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10301200 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10301210(CPU *c) {
  NATIVE_HOOK(0x10301210u) REGS; LOADALL;
L_10301210:;
  /* 10301210 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10301211 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10301213 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10301216 sub esp, 0xd0 */ { u32 a_ = esp, b_ = 0xd0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1030121c mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 10301221 mov dword ptr [esp + 0xcc], eax */ { const u32 m_ = (u32)(esp + 0xccu); M32(m_) = (u32)(eax); }
  /* 10301228 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030122a mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 1030122e mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10301231 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 10301235 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 10301239 mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 1030123d mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 10301241 mov dword ptr [esp + 0x15], eax */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(eax); }
  /* 10301245 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 10301249 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030124a mov word ptr [esp + 0x21], ax */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 1030124f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301250 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10301252 mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10301256 mov byte ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 1030125b mov ecx, 0x2a */ { ecx = (u32)(0x2au); }
  /* 10301260 lea edi, [esp + 0x28] */ edi = (u32)((u32)(esp + 0x28u));
  /* 10301264 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10301266 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10301269 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 1030126d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1030126e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1030126f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301270 push 0x3f2 */ { u32 v_ = 0x3f2u; esp -= 4; M32(esp) = v_; }
  /* 10301275 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10301278 call 0x10302700 */ esp -= 4; M32(esp) = 0x1030127du; SAVEALL; F_10302700(c); ABI_CHECK(0x10302700u, 0x10301278u); RETCHK(0x1030127du, 0x10301278u); LOADALL;
  /* 1030127d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030127f jl 0x103012a8 */ if (LT_) goto L_103012a8;
  /* 10301281 mov eax, dword ptr [esp + 0xcc] */ { const u32 m_ = (u32)(esp + 0xccu); eax = (u32)(M32(m_)); }
  /* 10301288 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1030128b mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 1030128d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030128e mov eax, dword ptr [esp + 0xcc] */ { const u32 m_ = (u32)(esp + 0xccu); eax = (u32)(M32(m_)); }
  /* 10301295 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301296 lea eax, [esp + 0x50] */ eax = (u32)((u32)(esp + 0x50u));
  /* 1030129a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030129b lea eax, [esp + 0x34] */ eax = (u32)((u32)(esp + 0x34u));
  /* 1030129f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103012a0 lea eax, [esp + 0x18] */ eax = (u32)((u32)(esp + 0x18u));
  /* 103012a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103012a5 call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103012a8u; SAVEALL; call_ind(c, t_); RETCHK(0x103012a8u, 0x103012a5u); LOADALL; }
L_103012a8:;
  /* 103012a8 mov ecx, dword ptr [esp + 0xd4] */ { const u32 m_ = (u32)(esp + 0xd4u); ecx = (u32)(M32(m_)); }
  /* 103012af call 0x10302a7d */ esp -= 4; M32(esp) = 0x103012b4u; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x103012afu); RETCHK(0x103012b4u, 0x103012afu); LOADALL;
  /* 103012b4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103012b5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103012b6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 103012b8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 103012b9 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_103012c0(CPU *c) {
  NATIVE_HOOK(0x103012c0u) REGS; LOADALL;
L_103012c0:;
  /* 103012c0 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 103012c3 mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 103012c8 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 103012cc mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 103012d0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103012d2 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 103012d6 mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 103012da mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 103012de mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 103012e2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103012e3 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 103012e7 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 103012e9 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 103012ed mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 103012f1 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 103012f5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103012f6 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 103012fa mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 103012fe push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 103012ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301300 push 0x3f4 */ { u32 v_ = 0x3f4u; esp -= 4; M32(esp) = v_; }
  /* 10301305 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10301308 mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 10301310 call 0x10302700 */ esp -= 4; M32(esp) = 0x10301315u; SAVEALL; F_10302700(c); ABI_CHECK(0x10302700u, 0x10301310u); RETCHK(0x10301315u, 0x10301310u); LOADALL;
  /* 10301315 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10301317 jl 0x10301330 */ if (LT_) goto L_10301330;
  /* 10301319 mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 1030131d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10301320 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10301322 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301323 lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 10301327 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301328 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1030132c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030132d call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10301330u; SAVEALL; call_ind(c, t_); RETCHK(0x10301330u, 0x1030132du); LOADALL; }
L_10301330:;
  /* 10301330 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 10301334 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301335 call 0x10302a7d */ esp -= 4; M32(esp) = 0x1030133au; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x10301335u); RETCHK(0x1030133au, 0x10301335u); LOADALL;
  /* 1030133a add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1030133d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10301340(CPU *c) {
  NATIVE_HOOK(0x10301340u) REGS; LOADALL;
L_10301340:;
  /* 10301340 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10301343 mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 10301348 mov dword ptr [esp + 0x40], eax */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(eax); }
  /* 1030134c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030134e mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10301352 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301353 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10301355 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10301357 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 1030135b mov dword ptr [esp + 0x24], ecx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ecx); }
  /* 1030135f mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 10301363 mov dword ptr [esp + 0x28], ecx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ecx); }
  /* 10301367 mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 1030136b mov dword ptr [esp + 0x2c], ecx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 1030136f mov dword ptr [esp + 0x15], eax */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(eax); }
  /* 10301373 mov dword ptr [esp + 0x30], ecx */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(ecx); }
  /* 10301377 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 1030137b mov dword ptr [esp + 0x34], ecx */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(ecx); }
  /* 1030137f mov dword ptr [esp + 0x1d], eax */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(eax); }
  /* 10301383 mov dword ptr [esp + 0x38], ecx */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(ecx); }
  /* 10301387 mov word ptr [esp + 0x21], ax */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 1030138c mov dword ptr [esp + 0x3c], ecx */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(ecx); }
  /* 10301390 lea edx, [esp + 4] */ edx = (u32)((u32)(esp + 0x4u));
  /* 10301394 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301395 mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10301399 mov eax, dword ptr [esp + 0x54] */ { const u32 m_ = (u32)(esp + 0x54u); eax = (u32)(M32(m_)); }
  /* 1030139d mov dword ptr [esp + 0x44], ecx */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(ecx); }
  /* 103013a1 mov ecx, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); ecx = (u32)(M32(m_)); }
  /* 103013a5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103013a6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103013a7 push 0x3f5 */ { u32 v_ = 0x3f5u; esp -= 4; M32(esp) = v_; }
  /* 103013ac lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 103013af mov byte ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 103013b4 call 0x10302700 */ esp -= 4; M32(esp) = 0x103013b9u; SAVEALL; F_10302700(c); ABI_CHECK(0x10302700u, 0x103013b4u); RETCHK(0x103013b9u, 0x103013b4u); LOADALL;
  /* 103013b9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103013bb jl 0x103013cf */ if (LT_) goto L_103013cf;
  /* 103013bd mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 103013c0 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 103013c2 lea eax, [esp + 0x24] */ eax = (u32)((u32)(esp + 0x24u));
  /* 103013c6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103013c7 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 103013cb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103013cc call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103013cfu; SAVEALL; call_ind(c, t_); RETCHK(0x103013cfu, 0x103013ccu); LOADALL; }
L_103013cf:;
  /* 103013cf mov ecx, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); ecx = (u32)(M32(m_)); }
  /* 103013d3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103013d4 call 0x10302a7d */ esp -= 4; M32(esp) = 0x103013d9u; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x103013d4u); RETCHK(0x103013d9u, 0x103013d4u); LOADALL;
  /* 103013d9 add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 103013dc ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_103013e0(CPU *c) {
  NATIVE_HOOK(0x103013e0u) REGS; LOADALL;
L_103013e0:;
  /* 103013e0 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 103013e3 mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 103013e8 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 103013ec mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 103013f0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103013f2 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 103013f6 mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 103013fa mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 103013fe mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10301402 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301403 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 10301407 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10301409 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 1030140d mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 10301411 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 10301415 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10301416 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 1030141a mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 1030141e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1030141f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301420 push 0x3f7 */ { u32 v_ = 0x3f7u; esp -= 4; M32(esp) = v_; }
  /* 10301425 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10301428 mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 10301430 call 0x10302700 */ esp -= 4; M32(esp) = 0x10301435u; SAVEALL; F_10302700(c); ABI_CHECK(0x10302700u, 0x10301430u); RETCHK(0x10301435u, 0x10301430u); LOADALL;
  /* 10301435 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10301437 jl 0x10301450 */ if (LT_) goto L_10301450;
  /* 10301439 mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 1030143d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10301440 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10301442 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301443 lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 10301447 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301448 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1030144c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030144d call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10301450u; SAVEALL; call_ind(c, t_); RETCHK(0x10301450u, 0x1030144du); LOADALL; }
L_10301450:;
  /* 10301450 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 10301454 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301455 call 0x10302a7d */ esp -= 4; M32(esp) = 0x1030145au; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x10301455u); RETCHK(0x1030145au, 0x10301455u); LOADALL;
  /* 1030145a add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1030145d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10301460(CPU *c) {
  NATIVE_HOOK(0x10301460u) REGS; LOADALL;
L_10301460:;
  /* 10301460 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10301463 mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 10301468 mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 1030146c mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 10301470 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301472 mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10301476 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 1030147a mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 1030147e mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 10301482 mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 10301486 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301487 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 1030148b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1030148d mov dword ptr [esp + 0x1d], eax */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(eax); }
  /* 10301491 mov word ptr [esp + 0x21], ax */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10301496 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 1030149a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1030149b mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030149f mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 103014a3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 103014a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103014a5 push 0x3f8 */ { u32 v_ = 0x3f8u; esp -= 4; M32(esp) = v_; }
  /* 103014aa lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 103014ad mov byte ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 103014b2 call 0x10302700 */ esp -= 4; M32(esp) = 0x103014b7u; SAVEALL; F_10302700(c); ABI_CHECK(0x10302700u, 0x103014b2u); RETCHK(0x103014b7u, 0x103014b2u); LOADALL;
  /* 103014b7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103014b9 jl 0x103014c8 */ if (LT_) goto L_103014c8;
  /* 103014bb mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 103014be mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 103014c0 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 103014c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103014c5 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103014c8u; SAVEALL; call_ind(c, t_); RETCHK(0x103014c8u, 0x103014c5u); LOADALL; }
L_103014c8:;
  /* 103014c8 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 103014cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103014cd call 0x10302a7d */ esp -= 4; M32(esp) = 0x103014d2u; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x103014cdu); RETCHK(0x103014d2u, 0x103014cdu); LOADALL;
  /* 103014d2 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 103014d5 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_103014e0(CPU *c) {
  NATIVE_HOOK(0x103014e0u) REGS; LOADALL;
L_103014e0:;
  /* 103014e0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103014e1 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 103014e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103014e6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 103014e8 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 103014ec lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 103014f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103014f1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103014f2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 103014f3 push 0x3fc */ { u32 v_ = 0x3fcu; esp -= 4; M32(esp) = v_; }
  /* 103014f8 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 103014fb mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 10301503 call 0x10302700 */ esp -= 4; M32(esp) = 0x10301508u; SAVEALL; F_10302700(c); ABI_CHECK(0x10302700u, 0x10301503u); RETCHK(0x10301508u, 0x10301503u); LOADALL;
  /* 10301508 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030150a jl 0x1030151e */ if (LT_) goto L_1030151e;
  /* 1030150c mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10301510 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10301513 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10301515 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301516 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 1030151a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1030151b call dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030151eu; SAVEALL; call_ind(c, t_); RETCHK(0x1030151eu, 0x1030151bu); LOADALL; }
L_1030151e:;
  /* 1030151e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030151f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10301520 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10301530(CPU *c) {
  NATIVE_HOOK(0x10301530u) REGS; LOADALL;
L_10301530:;
  /* 10301530 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10301533 mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 10301538 mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 1030153c mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 10301540 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301542 mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10301546 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 1030154a mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 1030154e mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 10301552 mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 10301556 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301557 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 1030155b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1030155d mov dword ptr [esp + 0x1d], eax */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(eax); }
  /* 10301561 mov word ptr [esp + 0x21], ax */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10301566 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 1030156a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1030156b mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1030156f mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 10301573 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301574 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301575 push 0x3fd */ { u32 v_ = 0x3fdu; esp -= 4; M32(esp) = v_; }
  /* 1030157a lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 1030157d mov byte ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 10301582 call 0x10302700 */ esp -= 4; M32(esp) = 0x10301587u; SAVEALL; F_10302700(c); ABI_CHECK(0x10302700u, 0x10301582u); RETCHK(0x10301587u, 0x10301582u); LOADALL;
  /* 10301587 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10301589 jl 0x10301598 */ if (LT_) goto L_10301598;
  /* 1030158b mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1030158e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10301590 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10301594 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301595 call dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10301598u; SAVEALL; call_ind(c, t_); RETCHK(0x10301598u, 0x10301595u); LOADALL; }
L_10301598:;
  /* 10301598 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 1030159c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030159d call 0x10302a7d */ esp -= 4; M32(esp) = 0x103015a2u; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x1030159du); RETCHK(0x103015a2u, 0x1030159du); LOADALL;
  /* 103015a2 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 103015a5 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_103015b0(CPU *c) {
  NATIVE_HOOK(0x103015b0u) REGS; LOADALL;
L_103015b0:;
  /* 103015b0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 103015b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103015b5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103015b6 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 103015b8 lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 103015be push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 103015c3 lea ecx, [esi + 6] */ ecx = (u32)((u32)(esi + 0x6u));
  /* 103015c6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103015c7 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 103015cb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 103015cc push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 103015d1 lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 103015d4 mov word ptr [esi + 4], 0x3e8 */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x3e8u); }
  /* 103015da mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 103015dc call 0x103026c0 */ esp -= 4; M32(esp) = 0x103015e1u; SAVEALL; F_103026c0(c); ABI_CHECK(0x103026c0u, 0x103015dcu); RETCHK(0x103015e1u, 0x103015dcu); LOADALL;
  /* 103015e1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103015e3 jge 0x103015ec */ if (!LT_) goto L_103015ec;
  /* 103015e5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103015e6 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 103015e8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103015e9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_103015ec:;
  /* 103015ec mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 103015ef mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 103015f1 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103015f4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103015f5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103015f6 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103015f8u; SAVEALL; call_ind(c, t_); RETCHK(0x103015f8u, 0x103015f6u); LOADALL; }
  /* 103015f8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103015f9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103015fa ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10301600(CPU *c) {
  NATIVE_HOOK(0x10301600u) REGS; LOADALL;
L_10301600:;
  /* 10301600 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10301603 mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 10301608 mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 1030160c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030160e mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10301612 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 10301616 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 1030161a mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 1030161e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030161f mov dword ptr [esp + 0x15], eax */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(eax); }
  /* 10301623 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301624 mov dword ptr [esp + 0x1d], eax */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(eax); }
  /* 10301628 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 1030162a mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 1030162e push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 10301630 mov dword ptr [esp + 0x25], eax */ { const u32 m_ = (u32)(esp + 0x25u); M32(m_) = (u32)(eax); }
  /* 10301634 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10301635 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 10301639 mov word ptr [esp + 0x2d], ax */ { const u32 m_ = (u32)(esp + 0x2du); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 1030163e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1030163f mov byte ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 10301644 mov byte ptr [esp + 0x33], al */ { const u32 m_ = (u32)(esp + 0x33u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10301648 call 0x10302a90 */ esp -= 4; M32(esp) = 0x1030164du; SAVEALL; F_10302a90(c); ABI_CHECK(0x10302a90u, 0x10301648u); RETCHK(0x1030164du, 0x10301648u); LOADALL;
  /* 1030164d mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 10301651 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10301654 lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 1030165a push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 1030165f lea ecx, [esi + 6] */ ecx = (u32)((u32)(esi + 0x6u));
  /* 10301662 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10301663 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 10301667 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301668 push 0x3ea */ { u32 v_ = 0x3eau; esp -= 4; M32(esp) = v_; }
  /* 1030166d lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10301670 mov word ptr [esi + 4], 0x3ea */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x3eau); }
  /* 10301676 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10301678 call 0x103026c0 */ esp -= 4; M32(esp) = 0x1030167du; SAVEALL; F_103026c0(c); ABI_CHECK(0x103026c0u, 0x10301678u); RETCHK(0x1030167du, 0x10301678u); LOADALL;
  /* 1030167d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030167f jge 0x10301694 */ if (!LT_) goto L_10301694;
  /* 10301681 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301682 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10301684 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301685 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 10301689 call 0x10302a7d */ esp -= 4; M32(esp) = 0x1030168eu; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x10301689u); RETCHK(0x1030168eu, 0x10301689u); LOADALL;
  /* 1030168e add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10301691 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10301694:;
  /* 10301694 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10301697 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10301699 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1030169c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030169d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030169e call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103016a0u; SAVEALL; call_ind(c, t_); RETCHK(0x103016a0u, 0x1030169eu); LOADALL; }
  /* 103016a0 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 103016a4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103016a5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103016a6 call 0x10302a7d */ esp -= 4; M32(esp) = 0x103016abu; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x103016a6u); RETCHK(0x103016abu, 0x103016a6u); LOADALL;
  /* 103016ab add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 103016ae ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_103016c0(CPU *c) {
  NATIVE_HOOK(0x103016c0u) REGS; LOADALL;
L_103016c0:;
  /* 103016c0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 103016c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103016c5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103016c6 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 103016c8 lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 103016ce push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 103016d3 lea ecx, [esi + 6] */ ecx = (u32)((u32)(esi + 0x6u));
  /* 103016d6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103016d7 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 103016db push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 103016dc push 0x3ec */ { u32 v_ = 0x3ecu; esp -= 4; M32(esp) = v_; }
  /* 103016e1 lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 103016e4 mov word ptr [esi + 4], 0x3ec */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x3ecu); }
  /* 103016ea mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 103016ec call 0x103026c0 */ esp -= 4; M32(esp) = 0x103016f1u; SAVEALL; F_103026c0(c); ABI_CHECK(0x103026c0u, 0x103016ecu); RETCHK(0x103016f1u, 0x103016ecu); LOADALL;
  /* 103016f1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103016f3 jge 0x103016fc */ if (!LT_) goto L_103016fc;
  /* 103016f5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103016f6 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 103016f8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103016f9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_103016fc:;
  /* 103016fc mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 103016ff mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10301701 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10301704 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301705 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301706 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10301708u; SAVEALL; call_ind(c, t_); RETCHK(0x10301708u, 0x10301706u); LOADALL; }
  /* 10301708 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301709 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030170a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10301710(CPU *c) {
  NATIVE_HOOK(0x10301710u) REGS; LOADALL;
L_10301710:;
  /* 10301710 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10301711 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10301713 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10301716 sub esp, 0xb4 */ { u32 a_ = esp, b_ = 0xb4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1030171c mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 10301721 mov dword ptr [esp + 0xb0], eax */ { const u32 m_ = (u32)(esp + 0xb0u); M32(m_) = (u32)(eax); }
  /* 10301728 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030172a mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 1030172e mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 10301732 mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 10301736 mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 1030173a mov dword ptr [esp + 0x15], eax */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(eax); }
  /* 1030173e mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 10301742 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10301743 mov dword ptr [esp + 0x21], eax */ { const u32 m_ = (u32)(esp + 0x21u); M32(m_) = (u32)(eax); }
  /* 10301747 mov word ptr [esp + 0x25], ax */ { const u32 m_ = (u32)(esp + 0x25u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 1030174c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030174d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030174e mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10301750 mov byte ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)(0x0u); }
  /* 10301755 mov byte ptr [esp + 0x2f], al */ { const u32 m_ = (u32)(esp + 0x2fu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10301759 mov ecx, 0x22 */ { ecx = (u32)(0x22u); }
  /* 1030175e lea edi, [esp + 0x30] */ edi = (u32)((u32)(esp + 0x30u));
  /* 10301762 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10301764 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10301767 push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 10301769 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1030176a lea edx, [esp + 0x18] */ edx = (u32)((u32)(esp + 0x18u));
  /* 1030176e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1030176f call 0x10302a90 */ esp -= 4; M32(esp) = 0x10301774u; SAVEALL; F_10302a90(c); ABI_CHECK(0x10302a90u, 0x1030176fu); RETCHK(0x10301774u, 0x1030176fu); LOADALL;
  /* 10301774 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10301777 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 1030177a mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1030177d push 0x7f */ { u32 v_ = 0x7fu; esp -= 4; M32(esp) = v_; }
  /* 1030177f mov dword ptr [esp + 0x40], eax */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(eax); }
  /* 10301783 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301784 lea eax, [esp + 0x4c] */ eax = (u32)((u32)(esp + 0x4cu));
  /* 10301788 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301789 mov dword ptr [esp + 0x4c], ecx */ { const u32 m_ = (u32)(esp + 0x4cu); M32(m_) = (u32)(ecx); }
  /* 1030178d call 0x10302a90 */ esp -= 4; M32(esp) = 0x10301792u; SAVEALL; F_10302a90(c); ABI_CHECK(0x10302a90u, 0x1030178du); RETCHK(0x10301792u, 0x1030178du); LOADALL;
  /* 10301792 mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 10301795 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10301798 lea esi, [ebx + 0x10018] */ esi = (u32)((u32)(ebx + 0x10018u));
  /* 1030179e push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 103017a3 lea edx, [esi + 6] */ edx = (u32)((u32)(esi + 0x6u));
  /* 103017a6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 103017a7 lea eax, [esp + 0x18] */ eax = (u32)((u32)(esp + 0x18u));
  /* 103017ab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103017ac mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 103017ae push 0x3f0 */ { u32 v_ = 0x3f0u; esp -= 4; M32(esp) = v_; }
  /* 103017b3 lea ecx, [ebx + 8] */ ecx = (u32)((u32)(ebx + 0x8u));
  /* 103017b6 mov word ptr [esi + 4], 0x3f0 */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x3f0u); }
  /* 103017bc call 0x103026c0 */ esp -= 4; M32(esp) = 0x103017c1u; SAVEALL; F_103026c0(c); ABI_CHECK(0x103026c0u, 0x103017bcu); RETCHK(0x103017c1u, 0x103017bcu); LOADALL;
  /* 103017c1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103017c3 jge 0x103017dc */ if (!LT_) goto L_103017dc;
  /* 103017c5 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 103017c7 mov ecx, dword ptr [esp + 0xbc] */ { const u32 m_ = (u32)(esp + 0xbcu); ecx = (u32)(M32(m_)); }
  /* 103017ce call 0x10302a7d */ esp -= 4; M32(esp) = 0x103017d3u; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x103017ceu); RETCHK(0x103017d3u, 0x103017ceu); LOADALL;
  /* 103017d3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103017d4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103017d5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 103017d6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 103017d8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 103017d9 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
L_103017dc:;
  /* 103017dc mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 103017df mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 103017e1 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103017e4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103017e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103017e6 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103017e8u; SAVEALL; call_ind(c, t_); RETCHK(0x103017e8u, 0x103017e6u); LOADALL; }
  /* 103017e8 mov ecx, dword ptr [esp + 0xbc] */ { const u32 m_ = (u32)(esp + 0xbcu); ecx = (u32)(M32(m_)); }
  /* 103017ef call 0x10302a7d */ esp -= 4; M32(esp) = 0x103017f4u; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x103017efu); RETCHK(0x103017f4u, 0x103017efu); LOADALL;
  /* 103017f4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103017f5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103017f6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 103017f7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 103017f9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 103017fa ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_10301800(CPU *c) {
  NATIVE_HOOK(0x10301800u) REGS; LOADALL;
L_10301800:;
  /* 10301800 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10301803 mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 10301808 mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 1030180c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030180e mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10301812 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 10301816 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 1030181a mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 1030181e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030181f mov dword ptr [esp + 0x15], eax */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(eax); }
  /* 10301823 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301824 mov dword ptr [esp + 0x1d], eax */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(eax); }
  /* 10301828 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 1030182a mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 1030182e push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 10301830 mov dword ptr [esp + 0x25], eax */ { const u32 m_ = (u32)(esp + 0x25u); M32(m_) = (u32)(eax); }
  /* 10301834 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10301835 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 10301839 mov word ptr [esp + 0x2d], ax */ { const u32 m_ = (u32)(esp + 0x2du); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 1030183e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1030183f mov byte ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 10301844 mov byte ptr [esp + 0x33], al */ { const u32 m_ = (u32)(esp + 0x33u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10301848 call 0x10302a90 */ esp -= 4; M32(esp) = 0x1030184du; SAVEALL; F_10302a90(c); ABI_CHECK(0x10302a90u, 0x10301848u); RETCHK(0x1030184du, 0x10301848u); LOADALL;
  /* 1030184d mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 10301851 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10301854 lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 1030185a push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 1030185f lea ecx, [esi + 6] */ ecx = (u32)((u32)(esi + 0x6u));
  /* 10301862 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10301863 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 10301867 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301868 push 0x3f3 */ { u32 v_ = 0x3f3u; esp -= 4; M32(esp) = v_; }
  /* 1030186d lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10301870 mov word ptr [esi + 4], 0x3f3 */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x3f3u); }
  /* 10301876 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10301878 call 0x103026c0 */ esp -= 4; M32(esp) = 0x1030187du; SAVEALL; F_103026c0(c); ABI_CHECK(0x103026c0u, 0x10301878u); RETCHK(0x1030187du, 0x10301878u); LOADALL;
  /* 1030187d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030187f jge 0x10301894 */ if (!LT_) goto L_10301894;
  /* 10301881 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301882 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10301884 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301885 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 10301889 call 0x10302a7d */ esp -= 4; M32(esp) = 0x1030188eu; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x10301889u); RETCHK(0x1030188eu, 0x10301889u); LOADALL;
  /* 1030188e add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10301891 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10301894:;
  /* 10301894 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10301897 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10301899 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1030189c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030189d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030189e call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103018a0u; SAVEALL; call_ind(c, t_); RETCHK(0x103018a0u, 0x1030189eu); LOADALL; }
  /* 103018a0 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 103018a4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103018a5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103018a6 call 0x10302a7d */ esp -= 4; M32(esp) = 0x103018abu; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x103018a6u); RETCHK(0x103018abu, 0x103018a6u); LOADALL;
  /* 103018ab add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 103018ae ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_103018c0(CPU *c) {
  NATIVE_HOOK(0x103018c0u) REGS; LOADALL;
L_103018c0:;
  /* 103018c0 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 103018c3 mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 103018c8 mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 103018cc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103018ce mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 103018d2 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 103018d6 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 103018da mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 103018de push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103018df mov dword ptr [esp + 0x15], eax */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(eax); }
  /* 103018e3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103018e4 mov dword ptr [esp + 0x1d], eax */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(eax); }
  /* 103018e8 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 103018ea mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 103018ee push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 103018f0 mov dword ptr [esp + 0x25], eax */ { const u32 m_ = (u32)(esp + 0x25u); M32(m_) = (u32)(eax); }
  /* 103018f4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103018f5 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 103018f9 mov word ptr [esp + 0x2d], ax */ { const u32 m_ = (u32)(esp + 0x2du); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 103018fe push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 103018ff mov byte ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 10301904 mov byte ptr [esp + 0x33], al */ { const u32 m_ = (u32)(esp + 0x33u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10301908 call 0x10302a90 */ esp -= 4; M32(esp) = 0x1030190du; SAVEALL; F_10302a90(c); ABI_CHECK(0x10302a90u, 0x10301908u); RETCHK(0x1030190du, 0x10301908u); LOADALL;
  /* 1030190d mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 10301911 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10301914 lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 1030191a push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 1030191f lea ecx, [esi + 6] */ ecx = (u32)((u32)(esi + 0x6u));
  /* 10301922 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10301923 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 10301927 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301928 push 0x3f6 */ { u32 v_ = 0x3f6u; esp -= 4; M32(esp) = v_; }
  /* 1030192d lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10301930 mov word ptr [esi + 4], 0x3f6 */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x3f6u); }
  /* 10301936 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10301938 call 0x103026c0 */ esp -= 4; M32(esp) = 0x1030193du; SAVEALL; F_103026c0(c); ABI_CHECK(0x103026c0u, 0x10301938u); RETCHK(0x1030193du, 0x10301938u); LOADALL;
  /* 1030193d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030193f jge 0x10301954 */ if (!LT_) goto L_10301954;
  /* 10301941 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301942 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10301944 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301945 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 10301949 call 0x10302a7d */ esp -= 4; M32(esp) = 0x1030194eu; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x10301949u); RETCHK(0x1030194eu, 0x10301949u); LOADALL;
  /* 1030194e add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10301951 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10301954:;
  /* 10301954 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10301957 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10301959 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1030195c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030195d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030195e call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10301960u; SAVEALL; call_ind(c, t_); RETCHK(0x10301960u, 0x1030195eu); LOADALL; }
  /* 10301960 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 10301964 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301965 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301966 call 0x10302a7d */ esp -= 4; M32(esp) = 0x1030196bu; SAVEALL; F_10302a7d(c); ABI_CHECK(0x10302a7du, 0x10301966u); RETCHK(0x1030196bu, 0x10301966u); LOADALL;
  /* 1030196b add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1030196e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10301980(CPU *c) {
  NATIVE_HOOK(0x10301980u) REGS; LOADALL;
L_10301980:;
  /* 10301980 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10301984 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301985 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301986 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 10301988 lea esi, [edi + 0x10018] */ esi = (u32)((u32)(edi + 0x10018u));
  /* 1030198e push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 10301993 lea ecx, [esi + 6] */ ecx = (u32)((u32)(esi + 0x6u));
  /* 10301996 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10301997 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 1030199b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1030199c push 0x3fb */ { u32 v_ = 0x3fbu; esp -= 4; M32(esp) = v_; }
  /* 103019a1 lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 103019a4 mov word ptr [esi + 4], 0x3fb */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)(0x3fbu); }
  /* 103019aa mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 103019ac call 0x103026c0 */ esp -= 4; M32(esp) = 0x103019b1u; SAVEALL; F_103026c0(c); ABI_CHECK(0x103026c0u, 0x103019acu); RETCHK(0x103019b1u, 0x103019acu); LOADALL;
  /* 103019b1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103019b3 jge 0x103019bc */ if (!LT_) goto L_103019bc;
  /* 103019b5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103019b6 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 103019b8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103019b9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_103019bc:;
  /* 103019bc mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 103019bf mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 103019c1 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103019c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103019c5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103019c6 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103019c8u; SAVEALL; call_ind(c, t_); RETCHK(0x103019c8u, 0x103019c6u); LOADALL; }
  /* 103019c8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103019c9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103019ca ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_103019d0(CPU *c) {
  NATIVE_HOOK(0x103019d0u) REGS; LOADALL;
L_103019d0:;
  /* 103019d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103019d1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 103019d3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103019d5 je 0x103019e5 */ if (ZF_) goto L_103019e5;
  /* 103019d7 call 0x10301010 */ esp -= 4; M32(esp) = 0x103019dcu; SAVEALL; F_10301010(c); ABI_CHECK(0x10301010u, 0x103019d7u); RETCHK(0x103019dcu, 0x103019d7u); LOADALL;
  /* 103019dc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103019dd call 0x10302a47 */ esp -= 4; M32(esp) = 0x103019e2u; SAVEALL; F_10302a47(c); ABI_CHECK(0x10302a47u, 0x103019ddu); RETCHK(0x103019e2u, 0x103019ddu); LOADALL;
  /* 103019e2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_103019e5:;
  /* 103019e5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103019e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103019f0(CPU *c) {
  NATIVE_HOOK(0x103019f0u) REGS; LOADALL;
L_103019f0:;
  /* 103019f0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 103019f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103019f5 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 103019f9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103019fa movzx edi, word ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edi = (u32)(M16(m_)); }
  /* 103019fe add edi, 0xfffffc17 */ { u32 a_ = edi, b_ = 0xfffffc17u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10301a04 add esi, -6 */ { u32 a_ = esi, b_ = 0xfffffffau; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10301a07 cmp edi, 0x14 */ { u32 a_ = edi, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301a0a lea edx, [eax + 6] */ edx = (u32)((u32)(eax + 0x6u));
  /* 10301a0d ja 0x10301ac1 */ if (!(CF_|ZF_)) goto L_10301ac1;
  /* 10301a13 movzx edi, byte ptr [edi + 0x10301af8] */ { const u32 m_ = (u32)(edi + 0x10301af8u); edi = (u32)(M8(m_)); }
  /* 10301a1a jmp dword ptr [edi*4 + 0x10301ac8] */ { const u32 m_ = (u32)(edi * 4u + 0x10301ac8u); u32 t_ = M32(m_); switch (t_) { case 0x10301a21u: goto L_10301a21; case 0x10301a30u: goto L_10301a30; case 0x10301a3fu: goto L_10301a3f; case 0x10301a4eu: goto L_10301a4e; case 0x10301a5du: goto L_10301a5d; case 0x10301a6cu: goto L_10301a6c; case 0x10301a7bu: goto L_10301a7b; case 0x10301a8au: goto L_10301a8a; case 0x10301a99u: goto L_10301a99; case 0x10301aa8u: goto L_10301aa8; case 0x10301ab7u: goto L_10301ab7; case 0x10301ac1u: goto L_10301ac1; default: SAVEALL; call_ind(c, t_); return; } }
L_10301a21:;
  /* 10301a21 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301a23 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301a24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301a25 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301a26 call 0x10301040 */ esp -= 4; M32(esp) = 0x10301a2bu; SAVEALL; F_10301040(c); ABI_CHECK(0x10301040u, 0x10301a26u); RETCHK(0x10301a2bu, 0x10301a26u); LOADALL;
  /* 10301a2b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301a2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301a2d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10301a30:;
  /* 10301a30 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301a32 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301a33 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301a34 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301a35 call 0x103010c0 */ esp -= 4; M32(esp) = 0x10301a3au; SAVEALL; F_103010c0(c); ABI_CHECK(0x103010c0u, 0x10301a35u); RETCHK(0x10301a3au, 0x10301a35u); LOADALL;
  /* 10301a3a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301a3b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301a3c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10301a3f:;
  /* 10301a3f mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301a41 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301a42 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301a43 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301a44 call 0x10301140 */ esp -= 4; M32(esp) = 0x10301a49u; SAVEALL; F_10301140(c); ABI_CHECK(0x10301140u, 0x10301a44u); RETCHK(0x10301a49u, 0x10301a44u); LOADALL;
  /* 10301a49 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301a4a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301a4b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10301a4e:;
  /* 10301a4e mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301a50 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301a51 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301a52 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301a53 call 0x103011c0 */ esp -= 4; M32(esp) = 0x10301a58u; SAVEALL; F_103011c0(c); ABI_CHECK(0x103011c0u, 0x10301a53u); RETCHK(0x10301a58u, 0x10301a53u); LOADALL;
  /* 10301a58 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301a59 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301a5a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10301a5d:;
  /* 10301a5d mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301a5f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301a60 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301a61 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301a62 call 0x10301210 */ esp -= 4; M32(esp) = 0x10301a67u; SAVEALL; F_10301210(c); ABI_CHECK(0x10301210u, 0x10301a62u); RETCHK(0x10301a67u, 0x10301a62u); LOADALL;
  /* 10301a67 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301a68 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301a69 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10301a6c:;
  /* 10301a6c mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301a6e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301a6f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301a70 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301a71 call 0x103012c0 */ esp -= 4; M32(esp) = 0x10301a76u; SAVEALL; F_103012c0(c); ABI_CHECK(0x103012c0u, 0x10301a71u); RETCHK(0x10301a76u, 0x10301a71u); LOADALL;
  /* 10301a76 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301a77 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301a78 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10301a7b:;
  /* 10301a7b mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301a7d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301a7e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301a7f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301a80 call 0x10301340 */ esp -= 4; M32(esp) = 0x10301a85u; SAVEALL; F_10301340(c); ABI_CHECK(0x10301340u, 0x10301a80u); RETCHK(0x10301a85u, 0x10301a80u); LOADALL;
  /* 10301a85 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301a86 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301a87 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10301a8a:;
  /* 10301a8a mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301a8c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301a8d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301a8e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301a8f call 0x103013e0 */ esp -= 4; M32(esp) = 0x10301a94u; SAVEALL; F_103013e0(c); ABI_CHECK(0x103013e0u, 0x10301a8fu); RETCHK(0x10301a94u, 0x10301a8fu); LOADALL;
  /* 10301a94 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301a95 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301a96 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10301a99:;
  /* 10301a99 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301a9b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301a9c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301a9d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301a9e call 0x10301460 */ esp -= 4; M32(esp) = 0x10301aa3u; SAVEALL; F_10301460(c); ABI_CHECK(0x10301460u, 0x10301a9eu); RETCHK(0x10301aa3u, 0x10301a9eu); LOADALL;
  /* 10301aa3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301aa4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301aa5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10301aa8:;
  /* 10301aa8 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301aaa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301aab push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301aac push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301aad call 0x103014e0 */ esp -= 4; M32(esp) = 0x10301ab2u; SAVEALL; F_103014e0(c); ABI_CHECK(0x103014e0u, 0x10301aadu); RETCHK(0x10301ab2u, 0x10301aadu); LOADALL;
  /* 10301ab2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301ab3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301ab4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10301ab7:;
  /* 10301ab7 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301ab9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301aba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301abb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301abc call 0x10301530 */ esp -= 4; M32(esp) = 0x10301ac1u; SAVEALL; F_10301530(c); ABI_CHECK(0x10301530u, 0x10301abcu); RETCHK(0x10301ac1u, 0x10301abcu); LOADALL;
L_10301ac1:;
  /* 10301ac1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301ac2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301ac3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10301a21(CPU *c) {
  NATIVE_HOOK(0x10301a21u) REGS; LOADALL;
L_10301a21:;
  /* 10301a21 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301a23 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301a24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301a25 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301a26 call 0x10301040 */ esp -= 4; M32(esp) = 0x10301a2bu; SAVEALL; F_10301040(c); ABI_CHECK(0x10301040u, 0x10301a26u); RETCHK(0x10301a2bu, 0x10301a26u); LOADALL;
  /* 10301a2b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301a2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301a2d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10301a30(CPU *c) {
  NATIVE_HOOK(0x10301a30u) REGS; LOADALL;
L_10301a30:;
  /* 10301a30 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301a32 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301a33 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301a34 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301a35 call 0x103010c0 */ esp -= 4; M32(esp) = 0x10301a3au; SAVEALL; F_103010c0(c); ABI_CHECK(0x103010c0u, 0x10301a35u); RETCHK(0x10301a3au, 0x10301a35u); LOADALL;
  /* 10301a3a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301a3b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301a3c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10301a3f(CPU *c) {
  NATIVE_HOOK(0x10301a3fu) REGS; LOADALL;
L_10301a3f:;
  /* 10301a3f mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301a41 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301a42 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301a43 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301a44 call 0x10301140 */ esp -= 4; M32(esp) = 0x10301a49u; SAVEALL; F_10301140(c); ABI_CHECK(0x10301140u, 0x10301a44u); RETCHK(0x10301a49u, 0x10301a44u); LOADALL;
  /* 10301a49 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301a4a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301a4b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10301a4e(CPU *c) {
  NATIVE_HOOK(0x10301a4eu) REGS; LOADALL;
L_10301a4e:;
  /* 10301a4e mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301a50 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301a51 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301a52 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301a53 call 0x103011c0 */ esp -= 4; M32(esp) = 0x10301a58u; SAVEALL; F_103011c0(c); ABI_CHECK(0x103011c0u, 0x10301a53u); RETCHK(0x10301a58u, 0x10301a53u); LOADALL;
  /* 10301a58 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301a59 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301a5a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10301a5d(CPU *c) {
  NATIVE_HOOK(0x10301a5du) REGS; LOADALL;
L_10301a5d:;
  /* 10301a5d mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301a5f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301a60 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301a61 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301a62 call 0x10301210 */ esp -= 4; M32(esp) = 0x10301a67u; SAVEALL; F_10301210(c); ABI_CHECK(0x10301210u, 0x10301a62u); RETCHK(0x10301a67u, 0x10301a62u); LOADALL;
  /* 10301a67 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301a68 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301a69 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10301a6c(CPU *c) {
  NATIVE_HOOK(0x10301a6cu) REGS; LOADALL;
L_10301a6c:;
  /* 10301a6c mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301a6e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301a6f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301a70 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301a71 call 0x103012c0 */ esp -= 4; M32(esp) = 0x10301a76u; SAVEALL; F_103012c0(c); ABI_CHECK(0x103012c0u, 0x10301a71u); RETCHK(0x10301a76u, 0x10301a71u); LOADALL;
  /* 10301a76 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301a77 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301a78 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10301a7b(CPU *c) {
  NATIVE_HOOK(0x10301a7bu) REGS; LOADALL;
L_10301a7b:;
  /* 10301a7b mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301a7d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301a7e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301a7f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301a80 call 0x10301340 */ esp -= 4; M32(esp) = 0x10301a85u; SAVEALL; F_10301340(c); ABI_CHECK(0x10301340u, 0x10301a80u); RETCHK(0x10301a85u, 0x10301a80u); LOADALL;
  /* 10301a85 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301a86 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301a87 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10301a8a(CPU *c) {
  NATIVE_HOOK(0x10301a8au) REGS; LOADALL;
L_10301a8a:;
  /* 10301a8a mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301a8c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301a8d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301a8e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301a8f call 0x103013e0 */ esp -= 4; M32(esp) = 0x10301a94u; SAVEALL; F_103013e0(c); ABI_CHECK(0x103013e0u, 0x10301a8fu); RETCHK(0x10301a94u, 0x10301a8fu); LOADALL;
  /* 10301a94 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301a95 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301a96 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10301a99(CPU *c) {
  NATIVE_HOOK(0x10301a99u) REGS; LOADALL;
L_10301a99:;
  /* 10301a99 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301a9b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301a9c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301a9d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301a9e call 0x10301460 */ esp -= 4; M32(esp) = 0x10301aa3u; SAVEALL; F_10301460(c); ABI_CHECK(0x10301460u, 0x10301a9eu); RETCHK(0x10301aa3u, 0x10301a9eu); LOADALL;
  /* 10301aa3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301aa4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301aa5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10301aa8(CPU *c) {
  NATIVE_HOOK(0x10301aa8u) REGS; LOADALL;
L_10301aa8:;
  /* 10301aa8 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301aaa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301aab push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301aac push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301aad call 0x103014e0 */ esp -= 4; M32(esp) = 0x10301ab2u; SAVEALL; F_103014e0(c); ABI_CHECK(0x103014e0u, 0x10301aadu); RETCHK(0x10301ab2u, 0x10301aadu); LOADALL;
  /* 10301ab2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301ab3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301ab4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10301ab7(CPU *c) {
  NATIVE_HOOK(0x10301ab7u) REGS; LOADALL;
L_10301ab7:;
  /* 10301ab7 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10301ab9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301aba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301abb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301abc call 0x10301530 */ esp -= 4; M32(esp) = 0x10301ac1u; SAVEALL; F_10301530(c); ABI_CHECK(0x10301530u, 0x10301abcu); RETCHK(0x10301ac1u, 0x10301abcu); LOADALL;
  /* 10301ac1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301ac2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301ac3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10301ac1(CPU *c) {
  NATIVE_HOOK(0x10301ac1u) REGS; LOADALL;
L_10301ac1:;
  /* 10301ac1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301ac2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301ac3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10301ac8(CPU *c) {
  NATIVE_HOOK(0x10301ac8u) REGS; LOADALL;
L_10301ac8:;
  /* 10301ac8 and dword ptr [edx], ebx */ { const u32 m_ = (u32)(edx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10301aca xor byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10301acc xor byte ptr [edx], bl */ { const u32 m_ = (u32)(edx); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10301ace xor byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10301ad0 aas */ TRAP(0x10301ad0u, "aas");
}

void F_10301af8(CPU *c) {
  NATIVE_HOOK(0x10301af8u) REGS; LOADALL;
L_10301af8:;
  /* 10301af8 add byte ptr [ebx], cl */ { const u32 m_ = (u32)(ebx); u32 a_ = M8(m_), b_ = (ecx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 10301afa add dword ptr [ebx], ecx */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10301afc add cl, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = (ecx & 0xffu), b_ = M8(m_); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10301afe or ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10301b00 add eax, dword ptr [ebx + ecx] */ { const u32 m_ = (u32)(ebx + ecx); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10301b03 add eax, 0x8070b06 */ { u32 a_ = eax, b_ = 0x8070b06u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10301b08 or ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10301b0a or ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10301b0c or cl, ah */ { u32 a_ = (ecx & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10301b0e int3 */ TRAP(0x10301b0eu, "int3");
}

void F_10301b10(CPU *c) {
  NATIVE_HOOK(0x10301b10u) REGS; LOADALL;
L_10301b10:;
  /* 10301b10 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10301b12 push 0x1030878b */ { u32 v_ = 0x1030878bu; esp -= 4; M32(esp) = v_; }
  /* 10301b17 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10301b1d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301b1e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10301b25 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10301b26 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301b27 push 0x12018 */ { u32 v_ = 0x12018u; esp -= 4; M32(esp) = v_; }
  /* 10301b2c call 0x10302bb4 */ esp -= 4; M32(esp) = 0x10301b31u; SAVEALL; F_10302bb4(c); ABI_CHECK(0x10302bb4u, 0x10301b2cu); RETCHK(0x10301b31u, 0x10301b2cu); LOADALL;
  /* 10301b31 mov esi, eax */ { esi = (u32)(eax); }
  /* 10301b33 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10301b36 mov dword ptr [esp + 4], esi */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(esi); }
  /* 10301b3a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301b3c cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301b3e mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10301b42 je 0x10301b54 */ if (ZF_) goto L_10301b54;
  /* 10301b44 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10301b47 mov dword ptr [esi], 0x1030912c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1030912cu); }
  /* 10301b4d call 0x10302680 */ esp -= 4; M32(esp) = 0x10301b52u; SAVEALL; F_10302680(c); ABI_CHECK(0x10302680u, 0x10301b4du); RETCHK(0x10301b52u, 0x10301b4du); LOADALL;
  /* 10301b52 mov eax, esi */ { eax = (u32)(esi); }
L_10301b54:;
  /* 10301b54 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10301b58 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301b59 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10301b60 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10301b63 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10301b80(CPU *c) {
  NATIVE_HOOK(0x10301b80u) REGS; LOADALL;
L_10301b80:;
  /* 10301b80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301b81 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301b82 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10301b86 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10301b88 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10301b8e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301b8f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301b91 call 0x103028d0 */ esp -= 4; M32(esp) = 0x10301b96u; SAVEALL; F_103028d0(c); ABI_CHECK(0x103028d0u, 0x10301b91u); RETCHK(0x10301b96u, 0x10301b91u); LOADALL;
  /* 10301b96 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301b99 je 0x10301bf2 */ if (ZF_) goto L_10301bf2;
  /* 10301b9b mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10301b9e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10301b9f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301ba1 call 0x103028d0 */ esp -= 4; M32(esp) = 0x10301ba6u; SAVEALL; F_103028d0(c); ABI_CHECK(0x103028d0u, 0x10301ba1u); RETCHK(0x10301ba6u, 0x10301ba1u); LOADALL;
  /* 10301ba6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301ba9 je 0x10301bf2 */ if (ZF_) goto L_10301bf2;
  /* 10301bab mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 10301bae push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301baf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301bb1 call 0x103028d0 */ esp -= 4; M32(esp) = 0x10301bb6u; SAVEALL; F_103028d0(c); ABI_CHECK(0x103028d0u, 0x10301bb1u); RETCHK(0x10301bb6u, 0x10301bb1u); LOADALL;
  /* 10301bb6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301bb9 je 0x10301bf2 */ if (ZF_) goto L_10301bf2;
  /* 10301bbb push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10301bbd lea eax, [edi + 0xc] */ eax = (u32)((u32)(edi + 0xcu));
  /* 10301bc0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301bc1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301bc3 call 0x103029c0 */ esp -= 4; M32(esp) = 0x10301bc8u; SAVEALL; F_103029c0(c); ABI_CHECK(0x103029c0u, 0x10301bc3u); RETCHK(0x10301bc8u, 0x10301bc3u); LOADALL;
  /* 10301bc8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301bcb je 0x10301bf2 */ if (ZF_) goto L_10301bf2;
  /* 10301bcd mov ecx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 10301bd0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10301bd1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301bd3 call 0x103028d0 */ esp -= 4; M32(esp) = 0x10301bd8u; SAVEALL; F_103028d0(c); ABI_CHECK(0x103028d0u, 0x10301bd3u); RETCHK(0x10301bd8u, 0x10301bd3u); LOADALL;
  /* 10301bd8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301bdb je 0x10301bf2 */ if (ZF_) goto L_10301bf2;
  /* 10301bdd push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10301be2 add edi, 0x30 */ { u32 a_ = edi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10301be5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301be6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301be8 call 0x103029c0 */ esp -= 4; M32(esp) = 0x10301bedu; SAVEALL; F_103029c0(c); ABI_CHECK(0x103029c0u, 0x10301be8u); RETCHK(0x10301bedu, 0x10301be8u); LOADALL;
  /* 10301bed cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301bf0 jne 0x10301bfa */ if (!ZF_) goto L_10301bfa;
L_10301bf2:;
  /* 10301bf2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301bf3 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301bf6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301bf7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10301bfa:;
  /* 10301bfa mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301bfc call 0x103027a0 */ esp -= 4; M32(esp) = 0x10301c01u; SAVEALL; F_103027a0(c); ABI_CHECK(0x103027a0u, 0x10301bfcu); RETCHK(0x10301c01u, 0x10301bfcu); LOADALL;
  /* 10301c01 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301c02 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301c03 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10301c10(CPU *c) {
  NATIVE_HOOK(0x10301c10u) REGS; LOADALL;
L_10301c10:;
  /* 10301c10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301c11 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301c12 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10301c16 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10301c1c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301c1d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301c1f call 0x10302890 */ esp -= 4; M32(esp) = 0x10301c24u; SAVEALL; F_10302890(c); ABI_CHECK(0x10302890u, 0x10301c1fu); RETCHK(0x10301c24u, 0x10301c1fu); LOADALL;
  /* 10301c24 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301c27 jne 0x10301c31 */ if (!ZF_) goto L_10301c31;
L_10301c29:;
  /* 10301c29 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301c2a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301c2d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301c2e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10301c31:;
  /* 10301c31 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10301c34 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301c35 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301c37 call 0x10302890 */ esp -= 4; M32(esp) = 0x10301c3cu; SAVEALL; F_10302890(c); ABI_CHECK(0x10302890u, 0x10301c37u); RETCHK(0x10301c3cu, 0x10301c37u); LOADALL;
  /* 10301c3c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301c3f je 0x10301c29 */ if (ZF_) goto L_10301c29;
  /* 10301c41 lea ecx, [edi + 8] */ ecx = (u32)((u32)(edi + 0x8u));
  /* 10301c44 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10301c45 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301c47 call 0x10302890 */ esp -= 4; M32(esp) = 0x10301c4cu; SAVEALL; F_10302890(c); ABI_CHECK(0x10302890u, 0x10301c47u); RETCHK(0x10301c4cu, 0x10301c47u); LOADALL;
  /* 10301c4c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301c4f je 0x10301c29 */ if (ZF_) goto L_10301c29;
  /* 10301c51 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10301c53 lea edx, [edi + 0xc] */ edx = (u32)((u32)(edi + 0xcu));
  /* 10301c56 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301c57 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301c59 call 0x10302910 */ esp -= 4; M32(esp) = 0x10301c5eu; SAVEALL; F_10302910(c); ABI_CHECK(0x10302910u, 0x10301c59u); RETCHK(0x10301c5eu, 0x10301c59u); LOADALL;
  /* 10301c5e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301c61 je 0x10301c29 */ if (ZF_) goto L_10301c29;
  /* 10301c63 lea eax, [edi + 0x2c] */ eax = (u32)((u32)(edi + 0x2cu));
  /* 10301c66 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301c67 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301c69 call 0x10302890 */ esp -= 4; M32(esp) = 0x10301c6eu; SAVEALL; F_10302890(c); ABI_CHECK(0x10302890u, 0x10301c69u); RETCHK(0x10301c6eu, 0x10301c69u); LOADALL;
  /* 10301c6e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301c71 je 0x10301c29 */ if (ZF_) goto L_10301c29;
  /* 10301c73 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10301c78 add edi, 0x30 */ { u32 a_ = edi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10301c7b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301c7c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301c7e call 0x10302910 */ esp -= 4; M32(esp) = 0x10301c83u; SAVEALL; F_10302910(c); ABI_CHECK(0x10302910u, 0x10301c7eu); RETCHK(0x10301c83u, 0x10301c7eu); LOADALL;
  /* 10301c83 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10301c84 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10301c86 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10301c88 and eax, 0xb1 */ { u32 a_ = eax, b_ = 0xb1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301c8d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301c8e dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10301c8f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301c90 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10301ca0(CPU *c) {
  NATIVE_HOOK(0x10301ca0u) REGS; LOADALL;
L_10301ca0:;
  /* 10301ca0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301ca1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301ca2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10301ca6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10301cac push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10301cae push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301caf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301cb1 call 0x103029c0 */ esp -= 4; M32(esp) = 0x10301cb6u; SAVEALL; F_103029c0(c); ABI_CHECK(0x103029c0u, 0x10301cb1u); RETCHK(0x10301cb6u, 0x10301cb1u); LOADALL;
  /* 10301cb6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301cb9 je 0x10301ceb */ if (ZF_) goto L_10301ceb;
  /* 10301cbb mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 10301cbe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301cbf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301cc1 call 0x103028d0 */ esp -= 4; M32(esp) = 0x10301cc6u; SAVEALL; F_103028d0(c); ABI_CHECK(0x103028d0u, 0x10301cc1u); RETCHK(0x10301cc6u, 0x10301cc1u); LOADALL;
  /* 10301cc6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301cc9 je 0x10301ceb */ if (ZF_) goto L_10301ceb;
  /* 10301ccb mov ecx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10301cce push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10301ccf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301cd1 call 0x103028d0 */ esp -= 4; M32(esp) = 0x10301cd6u; SAVEALL; F_103028d0(c); ABI_CHECK(0x103028d0u, 0x10301cd1u); RETCHK(0x10301cd6u, 0x10301cd1u); LOADALL;
  /* 10301cd6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301cd9 je 0x10301ceb */ if (ZF_) goto L_10301ceb;
  /* 10301cdb mov edx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edx = (u32)(M32(m_)); }
  /* 10301cde push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301cdf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301ce1 call 0x103028d0 */ esp -= 4; M32(esp) = 0x10301ce6u; SAVEALL; F_103028d0(c); ABI_CHECK(0x103028d0u, 0x10301ce1u); RETCHK(0x10301ce6u, 0x10301ce1u); LOADALL;
  /* 10301ce6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301ce9 jne 0x10301cf3 */ if (!ZF_) goto L_10301cf3;
L_10301ceb:;
  /* 10301ceb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301cec or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301cef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301cf0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10301cf3:;
  /* 10301cf3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301cf5 call 0x103027a0 */ esp -= 4; M32(esp) = 0x10301cfau; SAVEALL; F_103027a0(c); ABI_CHECK(0x103027a0u, 0x10301cf5u); RETCHK(0x10301cfau, 0x10301cf5u); LOADALL;
  /* 10301cfa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301cfb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301cfc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10301d00(CPU *c) {
  NATIVE_HOOK(0x10301d00u) REGS; LOADALL;
L_10301d00:;
  /* 10301d00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301d01 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301d02 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10301d06 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10301d0c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10301d0e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301d0f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301d11 call 0x10302910 */ esp -= 4; M32(esp) = 0x10301d16u; SAVEALL; F_10302910(c); ABI_CHECK(0x10302910u, 0x10301d11u); RETCHK(0x10301d16u, 0x10301d11u); LOADALL;
  /* 10301d16 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301d19 jne 0x10301d23 */ if (!ZF_) goto L_10301d23;
L_10301d1b:;
  /* 10301d1b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301d1c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301d1f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301d20 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10301d23:;
  /* 10301d23 lea eax, [edi + 0x20] */ eax = (u32)((u32)(edi + 0x20u));
  /* 10301d26 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301d27 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301d29 call 0x10302890 */ esp -= 4; M32(esp) = 0x10301d2eu; SAVEALL; F_10302890(c); ABI_CHECK(0x10302890u, 0x10301d29u); RETCHK(0x10301d2eu, 0x10301d29u); LOADALL;
  /* 10301d2e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301d31 je 0x10301d1b */ if (ZF_) goto L_10301d1b;
  /* 10301d33 lea ecx, [edi + 0x24] */ ecx = (u32)((u32)(edi + 0x24u));
  /* 10301d36 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10301d37 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301d39 call 0x10302890 */ esp -= 4; M32(esp) = 0x10301d3eu; SAVEALL; F_10302890(c); ABI_CHECK(0x10302890u, 0x10301d39u); RETCHK(0x10301d3eu, 0x10301d39u); LOADALL;
  /* 10301d3e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301d41 je 0x10301d1b */ if (ZF_) goto L_10301d1b;
  /* 10301d43 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10301d46 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301d47 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301d49 call 0x10302890 */ esp -= 4; M32(esp) = 0x10301d4eu; SAVEALL; F_10302890(c); ABI_CHECK(0x10302890u, 0x10301d49u); RETCHK(0x10301d4eu, 0x10301d49u); LOADALL;
  /* 10301d4e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10301d4f neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10301d51 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10301d53 and eax, 0x2d */ { u32 a_ = eax, b_ = 0x2du; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301d56 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301d57 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10301d58 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301d59 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10301d60(CPU *c) {
  NATIVE_HOOK(0x10301d60u) REGS; LOADALL;
L_10301d60:;
  /* 10301d60 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301d61 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301d62 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10301d66 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10301d6c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10301d6e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301d6f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301d71 call 0x103029c0 */ esp -= 4; M32(esp) = 0x10301d76u; SAVEALL; F_103029c0(c); ABI_CHECK(0x103029c0u, 0x10301d71u); RETCHK(0x10301d76u, 0x10301d71u); LOADALL;
  /* 10301d76 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301d79 je 0x10301dd3 */ if (ZF_) goto L_10301dd3;
  /* 10301d7b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301d7d mov ax, word ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10301d81 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301d83 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301d84 call 0x10302810 */ esp -= 4; M32(esp) = 0x10301d89u; SAVEALL; F_10302810(c); ABI_CHECK(0x10302810u, 0x10301d84u); RETCHK(0x10301d89u, 0x10301d84u); LOADALL;
  /* 10301d89 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301d8c je 0x10301dd3 */ if (ZF_) goto L_10301dd3;
  /* 10301d8e mov ecx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10301d91 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10301d92 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301d94 call 0x103028d0 */ esp -= 4; M32(esp) = 0x10301d99u; SAVEALL; F_103028d0(c); ABI_CHECK(0x103028d0u, 0x10301d94u); RETCHK(0x10301d99u, 0x10301d94u); LOADALL;
  /* 10301d99 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301d9c je 0x10301dd3 */ if (ZF_) goto L_10301dd3;
  /* 10301d9e mov edx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edx = (u32)(M32(m_)); }
  /* 10301da1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301da2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301da4 call 0x103028d0 */ esp -= 4; M32(esp) = 0x10301da9u; SAVEALL; F_103028d0(c); ABI_CHECK(0x103028d0u, 0x10301da4u); RETCHK(0x10301da9u, 0x10301da4u); LOADALL;
  /* 10301da9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301dac je 0x10301dd3 */ if (ZF_) goto L_10301dd3;
  /* 10301dae mov eax, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 10301db1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301db2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301db4 call 0x103028d0 */ esp -= 4; M32(esp) = 0x10301db9u; SAVEALL; F_103028d0(c); ABI_CHECK(0x103028d0u, 0x10301db4u); RETCHK(0x10301db9u, 0x10301db4u); LOADALL;
  /* 10301db9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301dbc je 0x10301dd3 */ if (ZF_) goto L_10301dd3;
  /* 10301dbe push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10301dc3 add edi, 0x30 */ { u32 a_ = edi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10301dc6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301dc7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301dc9 call 0x103029c0 */ esp -= 4; M32(esp) = 0x10301dceu; SAVEALL; F_103029c0(c); ABI_CHECK(0x103029c0u, 0x10301dc9u); RETCHK(0x10301dceu, 0x10301dc9u); LOADALL;
  /* 10301dce cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301dd1 jne 0x10301ddb */ if (!ZF_) goto L_10301ddb;
L_10301dd3:;
  /* 10301dd3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301dd4 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301dd7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301dd8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10301ddb:;
  /* 10301ddb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301ddd call 0x103027a0 */ esp -= 4; M32(esp) = 0x10301de2u; SAVEALL; F_103027a0(c); ABI_CHECK(0x103027a0u, 0x10301dddu); RETCHK(0x10301de2u, 0x10301dddu); LOADALL;
  /* 10301de2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301de3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301de4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10301df0(CPU *c) {
  NATIVE_HOOK(0x10301df0u) REGS; LOADALL;
L_10301df0:;
  /* 10301df0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301df1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301df2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10301df6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10301dfc push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10301dfe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301dff mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301e01 call 0x10302910 */ esp -= 4; M32(esp) = 0x10301e06u; SAVEALL; F_10302910(c); ABI_CHECK(0x10302910u, 0x10301e01u); RETCHK(0x10301e06u, 0x10301e01u); LOADALL;
  /* 10301e06 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301e09 jne 0x10301e13 */ if (!ZF_) goto L_10301e13;
L_10301e0b:;
  /* 10301e0b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301e0c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301e0f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301e10 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10301e13:;
  /* 10301e13 lea eax, [edi + 0x20] */ eax = (u32)((u32)(edi + 0x20u));
  /* 10301e16 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301e17 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301e19 call 0x10302850 */ esp -= 4; M32(esp) = 0x10301e1eu; SAVEALL; F_10302850(c); ABI_CHECK(0x10302850u, 0x10301e19u); RETCHK(0x10301e1eu, 0x10301e19u); LOADALL;
  /* 10301e1e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301e21 je 0x10301e0b */ if (ZF_) goto L_10301e0b;
  /* 10301e23 lea ecx, [edi + 0x24] */ ecx = (u32)((u32)(edi + 0x24u));
  /* 10301e26 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10301e27 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301e29 call 0x10302890 */ esp -= 4; M32(esp) = 0x10301e2eu; SAVEALL; F_10302890(c); ABI_CHECK(0x10302890u, 0x10301e29u); RETCHK(0x10301e2eu, 0x10301e29u); LOADALL;
  /* 10301e2e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301e31 je 0x10301e0b */ if (ZF_) goto L_10301e0b;
  /* 10301e33 lea edx, [edi + 0x28] */ edx = (u32)((u32)(edi + 0x28u));
  /* 10301e36 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301e37 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301e39 call 0x10302890 */ esp -= 4; M32(esp) = 0x10301e3eu; SAVEALL; F_10302890(c); ABI_CHECK(0x10302890u, 0x10301e39u); RETCHK(0x10301e3eu, 0x10301e39u); LOADALL;
  /* 10301e3e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301e41 je 0x10301e0b */ if (ZF_) goto L_10301e0b;
  /* 10301e43 lea eax, [edi + 0x2c] */ eax = (u32)((u32)(edi + 0x2cu));
  /* 10301e46 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301e47 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301e49 call 0x10302890 */ esp -= 4; M32(esp) = 0x10301e4eu; SAVEALL; F_10302890(c); ABI_CHECK(0x10302890u, 0x10301e49u); RETCHK(0x10301e4eu, 0x10301e49u); LOADALL;
  /* 10301e4e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301e51 je 0x10301e0b */ if (ZF_) goto L_10301e0b;
  /* 10301e53 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10301e58 add edi, 0x30 */ { u32 a_ = edi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10301e5b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301e5c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301e5e call 0x10302910 */ esp -= 4; M32(esp) = 0x10301e63u; SAVEALL; F_10302910(c); ABI_CHECK(0x10302910u, 0x10301e5eu); RETCHK(0x10301e63u, 0x10301e5eu); LOADALL;
  /* 10301e63 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10301e64 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10301e66 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10301e68 and eax, 0xb1 */ { u32 a_ = eax, b_ = 0xb1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301e6d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301e6e dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10301e6f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301e70 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10301e80(CPU *c) {
  NATIVE_HOOK(0x10301e80u) REGS; LOADALL;
L_10301e80:;
  /* 10301e80 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10301e86 call 0x103027a0 */ esp -= 4; M32(esp) = 0x10301e8bu; SAVEALL; F_103027a0(c); ABI_CHECK(0x103027a0u, 0x10301e86u); RETCHK(0x10301e8bu, 0x10301e86u); LOADALL;
  /* 10301e8b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10301e90(CPU *c) {
  NATIVE_HOOK(0x10301e90u) REGS; LOADALL;
L_10301e90:;
  /* 10301e90 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10301e91 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301e92 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301e93 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10301e97 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10301e99 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10301e9b lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 10301ea1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301ea2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301ea4 call 0x103028d0 */ esp -= 4; M32(esp) = 0x10301ea9u; SAVEALL; F_103028d0(c); ABI_CHECK(0x103028d0u, 0x10301ea4u); RETCHK(0x10301ea9u, 0x10301ea4u); LOADALL;
  /* 10301ea9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301eac je 0x10301ed0 */ if (ZF_) goto L_10301ed0;
  /* 10301eae xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10301eb0 mov cl, byte ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10301eb3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10301eb4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301eb6 call 0x103027b0 */ esp -= 4; M32(esp) = 0x10301ebbu; SAVEALL; F_103027b0(c); ABI_CHECK(0x103027b0u, 0x10301eb6u); RETCHK(0x10301ebbu, 0x10301eb6u); LOADALL;
  /* 10301ebb cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301ebe je 0x10301ed0 */ if (ZF_) goto L_10301ed0;
  /* 10301ec0 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10301ec3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301ec4 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10301ec6 call 0x10301b80 */ esp -= 4; M32(esp) = 0x10301ecbu; SAVEALL; F_10301b80(c); ABI_CHECK(0x10301b80u, 0x10301ec6u); RETCHK(0x10301ecbu, 0x10301ec6u); LOADALL;
  /* 10301ecb cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301ece jne 0x10301ed9 */ if (!ZF_) goto L_10301ed9;
L_10301ed0:;
  /* 10301ed0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301ed1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301ed2 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301ed5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10301ed6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10301ed9:;
  /* 10301ed9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301edb call 0x103027a0 */ esp -= 4; M32(esp) = 0x10301ee0u; SAVEALL; F_103027a0(c); ABI_CHECK(0x103027a0u, 0x10301edbu); RETCHK(0x10301ee0u, 0x10301edbu); LOADALL;
  /* 10301ee0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301ee1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301ee2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10301ee3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10301ef0(CPU *c) {
  NATIVE_HOOK(0x10301ef0u) REGS; LOADALL;
L_10301ef0:;
  /* 10301ef0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10301ef1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301ef2 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10301ef4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301ef5 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10301ef9 lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 10301eff push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301f00 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301f02 call 0x10302890 */ esp -= 4; M32(esp) = 0x10301f07u; SAVEALL; F_10302890(c); ABI_CHECK(0x10302890u, 0x10301f02u); RETCHK(0x10301f07u, 0x10301f02u); LOADALL;
  /* 10301f07 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301f0a jne 0x10301f15 */ if (!ZF_) goto L_10301f15;
L_10301f0c:;
  /* 10301f0c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301f0d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301f0e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301f11 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10301f12 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10301f15:;
  /* 10301f15 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10301f18 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301f19 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301f1b call 0x103027e0 */ esp -= 4; M32(esp) = 0x10301f20u; SAVEALL; F_103027e0(c); ABI_CHECK(0x103027e0u, 0x10301f1bu); RETCHK(0x10301f20u, 0x10301f1bu); LOADALL;
  /* 10301f20 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301f23 je 0x10301f0c */ if (ZF_) goto L_10301f0c;
  /* 10301f25 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10301f28 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301f29 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10301f2b call 0x10301c10 */ esp -= 4; M32(esp) = 0x10301f30u; SAVEALL; F_10301c10(c); ABI_CHECK(0x10301c10u, 0x10301f2bu); RETCHK(0x10301f30u, 0x10301f2bu); LOADALL;
  /* 10301f30 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10301f31 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10301f33 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10301f35 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301f36 and eax, 0xb9 */ { u32 a_ = eax, b_ = 0xb9u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301f3b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301f3c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10301f3d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10301f3e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10301f50(CPU *c) {
  NATIVE_HOOK(0x10301f50u) REGS; LOADALL;
L_10301f50:;
  /* 10301f50 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10301f51 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301f52 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301f53 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10301f57 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10301f59 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10301f5b lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 10301f61 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301f62 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301f64 call 0x103028d0 */ esp -= 4; M32(esp) = 0x10301f69u; SAVEALL; F_103028d0(c); ABI_CHECK(0x103028d0u, 0x10301f64u); RETCHK(0x10301f69u, 0x10301f64u); LOADALL;
  /* 10301f69 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301f6c je 0x10301fa2 */ if (ZF_) goto L_10301fa2;
  /* 10301f6e push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10301f70 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 10301f73 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10301f74 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301f76 call 0x103029c0 */ esp -= 4; M32(esp) = 0x10301f7bu; SAVEALL; F_103029c0(c); ABI_CHECK(0x103029c0u, 0x10301f76u); RETCHK(0x10301f7bu, 0x10301f76u); LOADALL;
  /* 10301f7b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301f7e je 0x10301fa2 */ if (ZF_) goto L_10301fa2;
  /* 10301f80 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10301f82 mov dl, byte ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10301f85 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301f87 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10301f88 call 0x103027b0 */ esp -= 4; M32(esp) = 0x10301f8du; SAVEALL; F_103027b0(c); ABI_CHECK(0x103027b0u, 0x10301f88u); RETCHK(0x10301f8du, 0x10301f88u); LOADALL;
  /* 10301f8d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301f90 je 0x10301fa2 */ if (ZF_) goto L_10301fa2;
  /* 10301f92 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10301f95 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301f96 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10301f98 call 0x10301ca0 */ esp -= 4; M32(esp) = 0x10301f9du; SAVEALL; F_10301ca0(c); ABI_CHECK(0x10301ca0u, 0x10301f98u); RETCHK(0x10301f9du, 0x10301f98u); LOADALL;
  /* 10301f9d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301fa0 jne 0x10301fab */ if (!ZF_) goto L_10301fab;
L_10301fa2:;
  /* 10301fa2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301fa3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301fa4 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301fa7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10301fa8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10301fab:;
  /* 10301fab mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301fad call 0x103027a0 */ esp -= 4; M32(esp) = 0x10301fb2u; SAVEALL; F_103027a0(c); ABI_CHECK(0x103027a0u, 0x10301fadu); RETCHK(0x10301fb2u, 0x10301fadu); LOADALL;
  /* 10301fb2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301fb3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301fb4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10301fb5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10301fc0(CPU *c) {
  NATIVE_HOOK(0x10301fc0u) REGS; LOADALL;
L_10301fc0:;
  /* 10301fc0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10301fc1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10301fc2 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10301fc4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301fc5 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10301fc9 lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 10301fcf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10301fd0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301fd2 call 0x10302890 */ esp -= 4; M32(esp) = 0x10301fd7u; SAVEALL; F_10302890(c); ABI_CHECK(0x10302890u, 0x10301fd2u); RETCHK(0x10301fd7u, 0x10301fd2u); LOADALL;
  /* 10301fd7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301fda jne 0x10301fe5 */ if (!ZF_) goto L_10301fe5;
L_10301fdc:;
  /* 10301fdc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10301fdd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10301fde or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10301fe1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10301fe2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10301fe5:;
  /* 10301fe5 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10301fe7 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10301fea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10301feb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301fed call 0x10302910 */ esp -= 4; M32(esp) = 0x10301ff2u; SAVEALL; F_10302910(c); ABI_CHECK(0x10302910u, 0x10301fedu); RETCHK(0x10301ff2u, 0x10301fedu); LOADALL;
  /* 10301ff2 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10301ff5 je 0x10301fdc */ if (ZF_) goto L_10301fdc;
  /* 10301ff7 lea ecx, [edi + 0x24] */ ecx = (u32)((u32)(edi + 0x24u));
  /* 10301ffa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10301ffb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10301ffd call 0x103027e0 */ esp -= 4; M32(esp) = 0x10302002u; SAVEALL; F_103027e0(c); ABI_CHECK(0x103027e0u, 0x10301ffdu); RETCHK(0x10302002u, 0x10301ffdu); LOADALL;
  /* 10302002 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302005 je 0x10301fdc */ if (ZF_) goto L_10301fdc;
  /* 10302007 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1030200a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030200b mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 1030200d call 0x10301d00 */ esp -= 4; M32(esp) = 0x10302012u; SAVEALL; F_10301d00(c); ABI_CHECK(0x10301d00u, 0x1030200du); RETCHK(0x10302012u, 0x1030200du); LOADALL;
  /* 10302012 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10302013 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10302015 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10302017 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10302018 and eax, 0x55 */ { u32 a_ = eax, b_ = 0x55u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030201b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030201c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1030201d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1030201e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10302030(CPU *c) {
  NATIVE_HOOK(0x10302030u) REGS; LOADALL;
L_10302030:;
  /* 10302030 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10302031 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10302032 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10302036 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302038 mov ax, word ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1030203b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1030203c mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 1030203e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030203f lea esi, [ebp + 0x10000] */ esi = (u32)((u32)(ebp + 0x10000u));
  /* 10302045 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302047 mov dword ptr [esp + 0xc], esi */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(esi); }
  /* 1030204b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030204c call 0x10302810 */ esp -= 4; M32(esp) = 0x10302051u; SAVEALL; F_10302810(c); ABI_CHECK(0x10302810u, 0x1030204cu); RETCHK(0x10302051u, 0x1030204cu); LOADALL;
  /* 10302051 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302054 je 0x10302069 */ if (ZF_) goto L_10302069;
  /* 10302056 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10302058 mov cx, word ptr [ebx + 2] */ { const u32 m_ = (u32)(ebx + 0x2u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1030205c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1030205d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1030205f call 0x10302810 */ esp -= 4; M32(esp) = 0x10302064u; SAVEALL; F_10302810(c); ABI_CHECK(0x10302810u, 0x1030205fu); RETCHK(0x10302064u, 0x1030205fu); LOADALL;
  /* 10302064 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302067 jne 0x10302073 */ if (!ZF_) goto L_10302073;
L_10302069:;
  /* 10302069 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030206a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1030206b or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030206e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1030206f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10302070 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10302073:;
  /* 10302073 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302074 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10302076 lea edi, [ebx + 4] */ edi = (u32)((u32)(ebx + 0x4u));
  /* 10302079 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_10302080:;
  /* 10302080 movzx edx, word ptr [ebx + 2] */ { const u32 m_ = (u32)(ebx + 0x2u); edx = (u32)(M16(m_)); }
  /* 10302084 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302086 jge 0x103020a1 */ if (!LT_) goto L_103020a1;
  /* 10302088 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302089 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 1030208b call 0x10301d60 */ esp -= 4; M32(esp) = 0x10302090u; SAVEALL; F_10301d60(c); ABI_CHECK(0x10301d60u, 0x1030208bu); RETCHK(0x10302090u, 0x1030208bu); LOADALL;
  /* 10302090 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302093 je 0x103020b2 */ if (ZF_) goto L_103020b2;
  /* 10302095 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10302096 add edi, 0xb0 */ { u32 a_ = edi, b_ = 0xb0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1030209c cmp esi, 0x14 */ { u32 a_ = esi, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030209f jl 0x10302080 */ if (LT_) goto L_10302080;
L_103020a1:;
  /* 103020a1 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 103020a5 call 0x103027a0 */ esp -= 4; M32(esp) = 0x103020aau; SAVEALL; F_103027a0(c); ABI_CHECK(0x103027a0u, 0x103020a5u); RETCHK(0x103020aau, 0x103020a5u); LOADALL;
  /* 103020aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103020ab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103020ac pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 103020ad pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 103020ae pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103020af ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_103020b2:;
  /* 103020b2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103020b3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103020b4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 103020b5 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103020b8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 103020b9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103020ba ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_103020c0(CPU *c) {
  NATIVE_HOOK(0x103020c0u) REGS; LOADALL;
L_103020c0:;
  /* 103020c0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103020c1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103020c2 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 103020c4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103020c5 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 103020c9 lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 103020cf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103020d0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 103020d2 call 0x10302850 */ esp -= 4; M32(esp) = 0x103020d7u; SAVEALL; F_10302850(c); ABI_CHECK(0x10302850u, 0x103020d2u); RETCHK(0x103020d7u, 0x103020d2u); LOADALL;
  /* 103020d7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103020da jne 0x103020e4 */ if (!ZF_) goto L_103020e4;
  /* 103020dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103020dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103020de or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103020e0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 103020e1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_103020e4:;
  /* 103020e4 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 103020e5 lea ebp, [edi + 2] */ ebp = (u32)((u32)(edi + 0x2u));
  /* 103020e8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 103020e9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 103020eb call 0x10302850 */ esp -= 4; M32(esp) = 0x103020f0u; SAVEALL; F_10302850(c); ABI_CHECK(0x10302850u, 0x103020ebu); RETCHK(0x103020f0u, 0x103020ebu); LOADALL;
  /* 103020f0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103020f3 jne 0x103020ff */ if (!ZF_) goto L_103020ff;
L_103020f5:;
  /* 103020f5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 103020f6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103020f7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103020f8 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103020fb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 103020fc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_103020ff:;
  /* 103020ff xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10302101 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10302104:;
  /* 10302104 movzx eax, word ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M16(m_)); }
  /* 10302108 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030210a jge 0x10302125 */ if (!LT_) goto L_10302125;
  /* 1030210c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030210d mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 1030210f call 0x10301df0 */ esp -= 4; M32(esp) = 0x10302114u; SAVEALL; F_10301df0(c); ABI_CHECK(0x10301df0u, 0x1030210fu); RETCHK(0x10302114u, 0x1030210fu); LOADALL;
  /* 10302114 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302117 je 0x103020f5 */ if (ZF_) goto L_103020f5;
  /* 10302119 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1030211a add edi, 0xb0 */ { u32 a_ = edi, b_ = 0xb0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10302120 cmp esi, 0x14 */ { u32 a_ = esi, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302123 jl 0x10302104 */ if (LT_) goto L_10302104;
L_10302125:;
  /* 10302125 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10302126 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10302127 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302128 mov eax, 0xdc4 */ { eax = (u32)(0xdc4u); }
  /* 1030212d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1030212e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10302140(CPU *c) {
  NATIVE_HOOK(0x10302140u) REGS; LOADALL;
L_10302140:;
  /* 10302140 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302141 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302142 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10302146 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1030214c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1030214e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030214f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302151 call 0x103029c0 */ esp -= 4; M32(esp) = 0x10302156u; SAVEALL; F_103029c0(c); ABI_CHECK(0x103029c0u, 0x10302151u); RETCHK(0x10302156u, 0x10302151u); LOADALL;
  /* 10302156 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302159 je 0x10302190 */ if (ZF_) goto L_10302190;
  /* 1030215b mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 1030215e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030215f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302161 call 0x103028d0 */ esp -= 4; M32(esp) = 0x10302166u; SAVEALL; F_103028d0(c); ABI_CHECK(0x103028d0u, 0x10302161u); RETCHK(0x10302166u, 0x10302161u); LOADALL;
  /* 10302166 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302169 je 0x10302190 */ if (ZF_) goto L_10302190;
  /* 1030216b mov ecx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 1030216e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1030216f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302171 call 0x103028d0 */ esp -= 4; M32(esp) = 0x10302176u; SAVEALL; F_103028d0(c); ABI_CHECK(0x103028d0u, 0x10302171u); RETCHK(0x10302176u, 0x10302171u); LOADALL;
  /* 10302176 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302179 je 0x10302190 */ if (ZF_) goto L_10302190;
  /* 1030217b push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 10302180 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10302183 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302184 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302186 call 0x103029c0 */ esp -= 4; M32(esp) = 0x1030218bu; SAVEALL; F_103029c0(c); ABI_CHECK(0x103029c0u, 0x10302186u); RETCHK(0x1030218bu, 0x10302186u); LOADALL;
  /* 1030218b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030218e jne 0x10302198 */ if (!ZF_) goto L_10302198;
L_10302190:;
  /* 10302190 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10302191 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302194 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302195 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10302198:;
  /* 10302198 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1030219a call 0x103027a0 */ esp -= 4; M32(esp) = 0x1030219fu; SAVEALL; F_103027a0(c); ABI_CHECK(0x103027a0u, 0x1030219au); RETCHK(0x1030219fu, 0x1030219au); LOADALL;
  /* 1030219f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103021a0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103021a1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_103021b0(CPU *c) {
  NATIVE_HOOK(0x103021b0u) REGS; LOADALL;
L_103021b0:;
  /* 103021b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103021b1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103021b2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 103021b6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 103021bc push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 103021be push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103021bf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 103021c1 call 0x10302910 */ esp -= 4; M32(esp) = 0x103021c6u; SAVEALL; F_10302910(c); ABI_CHECK(0x10302910u, 0x103021c1u); RETCHK(0x103021c6u, 0x103021c1u); LOADALL;
  /* 103021c6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103021c9 jne 0x103021d3 */ if (!ZF_) goto L_103021d3;
L_103021cb:;
  /* 103021cb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103021cc or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103021cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103021d0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_103021d3:;
  /* 103021d3 lea eax, [edi + 0x20] */ eax = (u32)((u32)(edi + 0x20u));
  /* 103021d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103021d7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 103021d9 call 0x10302890 */ esp -= 4; M32(esp) = 0x103021deu; SAVEALL; F_10302890(c); ABI_CHECK(0x10302890u, 0x103021d9u); RETCHK(0x103021deu, 0x103021d9u); LOADALL;
  /* 103021de cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103021e1 je 0x103021cb */ if (ZF_) goto L_103021cb;
  /* 103021e3 lea ecx, [edi + 0x24] */ ecx = (u32)((u32)(edi + 0x24u));
  /* 103021e6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103021e7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 103021e9 call 0x10302890 */ esp -= 4; M32(esp) = 0x103021eeu; SAVEALL; F_10302890(c); ABI_CHECK(0x10302890u, 0x103021e9u); RETCHK(0x103021eeu, 0x103021e9u); LOADALL;
  /* 103021ee cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103021f1 je 0x103021cb */ if (ZF_) goto L_103021cb;
  /* 103021f3 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 103021f8 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103021fb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103021fc mov ecx, esi */ { ecx = (u32)(esi); }
  /* 103021fe call 0x10302910 */ esp -= 4; M32(esp) = 0x10302203u; SAVEALL; F_10302910(c); ABI_CHECK(0x10302910u, 0x103021feu); RETCHK(0x10302203u, 0x103021feu); LOADALL;
  /* 10302203 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10302204 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10302206 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10302208 and eax, 0xa9 */ { u32 a_ = eax, b_ = 0xa9u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030220d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030220e dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1030220f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302210 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10302220(CPU *c) {
  NATIVE_HOOK(0x10302220u) REGS; LOADALL;
L_10302220:;
  /* 10302220 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10302224 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302225 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1030222b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1030222d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1030222e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302230 call 0x103028d0 */ esp -= 4; M32(esp) = 0x10302235u; SAVEALL; F_103028d0(c); ABI_CHECK(0x103028d0u, 0x10302230u); RETCHK(0x10302235u, 0x10302230u); LOADALL;
  /* 10302235 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302238 jne 0x10302240 */ if (!ZF_) goto L_10302240;
  /* 1030223a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030223c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030223d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10302240:;
  /* 10302240 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302242 call 0x103027a0 */ esp -= 4; M32(esp) = 0x10302247u; SAVEALL; F_103027a0(c); ABI_CHECK(0x103027a0u, 0x10302242u); RETCHK(0x10302247u, 0x10302242u); LOADALL;
  /* 10302247 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302248 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10302250(CPU *c) {
  NATIVE_HOOK(0x10302250u) REGS; LOADALL;
L_10302250:;
  /* 10302250 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10302254 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10302255 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1030225b call 0x10302890 */ esp -= 4; M32(esp) = 0x10302260u; SAVEALL; F_10302890(c); ABI_CHECK(0x10302890u, 0x1030225bu); RETCHK(0x10302260u, 0x1030225bu); LOADALL;
  /* 10302260 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10302261 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10302263 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10302265 and eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302268 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10302269 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10302270(CPU *c) {
  NATIVE_HOOK(0x10302270u) REGS; LOADALL;
L_10302270:;
  /* 10302270 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302271 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302272 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10302276 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1030227c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1030227e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030227f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302281 call 0x103029c0 */ esp -= 4; M32(esp) = 0x10302286u; SAVEALL; F_103029c0(c); ABI_CHECK(0x103029c0u, 0x10302281u); RETCHK(0x10302286u, 0x10302281u); LOADALL;
  /* 10302286 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302289 je 0x103022d8 */ if (ZF_) goto L_103022d8;
  /* 1030228b push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1030228d lea eax, [edi + 0x20] */ eax = (u32)((u32)(edi + 0x20u));
  /* 10302290 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10302291 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302293 call 0x103029c0 */ esp -= 4; M32(esp) = 0x10302298u; SAVEALL; F_103029c0(c); ABI_CHECK(0x103029c0u, 0x10302293u); RETCHK(0x10302298u, 0x10302293u); LOADALL;
  /* 10302298 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030229b je 0x103022d8 */ if (ZF_) goto L_103022d8;
  /* 1030229d push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 103022a2 lea ecx, [edi + 0x40] */ ecx = (u32)((u32)(edi + 0x40u));
  /* 103022a5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103022a6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 103022a8 call 0x103029c0 */ esp -= 4; M32(esp) = 0x103022adu; SAVEALL; F_103029c0(c); ABI_CHECK(0x103029c0u, 0x103022a8u); RETCHK(0x103022adu, 0x103022a8u); LOADALL;
  /* 103022ad cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103022b0 je 0x103022d8 */ if (ZF_) goto L_103022d8;
  /* 103022b2 mov edx, dword ptr [edi + 0xc0] */ { const u32 m_ = (u32)(edi + 0xc0u); edx = (u32)(M32(m_)); }
  /* 103022b8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 103022b9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 103022bb call 0x103028d0 */ esp -= 4; M32(esp) = 0x103022c0u; SAVEALL; F_103028d0(c); ABI_CHECK(0x103028d0u, 0x103022bbu); RETCHK(0x103022c0u, 0x103022bbu); LOADALL;
  /* 103022c0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103022c3 je 0x103022d8 */ if (ZF_) goto L_103022d8;
  /* 103022c5 mov eax, dword ptr [edi + 0xc4] */ { const u32 m_ = (u32)(edi + 0xc4u); eax = (u32)(M32(m_)); }
  /* 103022cb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103022cc mov ecx, esi */ { ecx = (u32)(esi); }
  /* 103022ce call 0x103028d0 */ esp -= 4; M32(esp) = 0x103022d3u; SAVEALL; F_103028d0(c); ABI_CHECK(0x103028d0u, 0x103022ceu); RETCHK(0x103022d3u, 0x103022ceu); LOADALL;
  /* 103022d3 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103022d6 jne 0x103022e0 */ if (!ZF_) goto L_103022e0;
L_103022d8:;
  /* 103022d8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103022d9 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103022dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103022dd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_103022e0:;
  /* 103022e0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 103022e2 call 0x103027a0 */ esp -= 4; M32(esp) = 0x103022e7u; SAVEALL; F_103027a0(c); ABI_CHECK(0x103027a0u, 0x103022e2u); RETCHK(0x103022e7u, 0x103022e2u); LOADALL;
  /* 103022e7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103022e8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103022e9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_103022f0(CPU *c) {
  NATIVE_HOOK(0x103022f0u) REGS; LOADALL;
L_103022f0:;
  /* 103022f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103022f1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103022f2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 103022f6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 103022fc push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 103022fe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103022ff mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302301 call 0x10302910 */ esp -= 4; M32(esp) = 0x10302306u; SAVEALL; F_10302910(c); ABI_CHECK(0x10302910u, 0x10302301u); RETCHK(0x10302306u, 0x10302301u); LOADALL;
  /* 10302306 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302309 jne 0x10302313 */ if (!ZF_) goto L_10302313;
L_1030230b:;
  /* 1030230b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030230c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030230f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302310 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10302313:;
  /* 10302313 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10302315 lea eax, [edi + 0x20] */ eax = (u32)((u32)(edi + 0x20u));
  /* 10302318 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10302319 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1030231b call 0x10302910 */ esp -= 4; M32(esp) = 0x10302320u; SAVEALL; F_10302910(c); ABI_CHECK(0x10302910u, 0x1030231bu); RETCHK(0x10302320u, 0x1030231bu); LOADALL;
  /* 10302320 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302323 je 0x1030230b */ if (ZF_) goto L_1030230b;
  /* 10302325 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 1030232a lea ecx, [edi + 0x40] */ ecx = (u32)((u32)(edi + 0x40u));
  /* 1030232d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1030232e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302330 call 0x10302910 */ esp -= 4; M32(esp) = 0x10302335u; SAVEALL; F_10302910(c); ABI_CHECK(0x10302910u, 0x10302330u); RETCHK(0x10302335u, 0x10302330u); LOADALL;
  /* 10302335 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302338 je 0x1030230b */ if (ZF_) goto L_1030230b;
  /* 1030233a lea edx, [edi + 0xc0] */ edx = (u32)((u32)(edi + 0xc0u));
  /* 10302340 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10302341 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302343 call 0x10302890 */ esp -= 4; M32(esp) = 0x10302348u; SAVEALL; F_10302890(c); ABI_CHECK(0x10302890u, 0x10302343u); RETCHK(0x10302348u, 0x10302343u); LOADALL;
  /* 10302348 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030234b je 0x1030230b */ if (ZF_) goto L_1030230b;
  /* 1030234d add edi, 0xc4 */ { u32 a_ = edi, b_ = 0xc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10302353 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302354 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302356 call 0x10302890 */ esp -= 4; M32(esp) = 0x1030235bu; SAVEALL; F_10302890(c); ABI_CHECK(0x10302890u, 0x10302356u); RETCHK(0x1030235bu, 0x10302356u); LOADALL;
  /* 1030235b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1030235c neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 1030235e sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10302360 and eax, 0xc9 */ { u32 a_ = eax, b_ = 0xc9u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302365 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10302366 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10302367 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302368 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10302370(CPU *c) {
  NATIVE_HOOK(0x10302370u) REGS; LOADALL;
L_10302370:;
  /* 10302370 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302371 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302372 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10302376 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1030237c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1030237e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030237f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302381 call 0x103029c0 */ esp -= 4; M32(esp) = 0x10302386u; SAVEALL; F_103029c0(c); ABI_CHECK(0x103029c0u, 0x10302381u); RETCHK(0x10302386u, 0x10302381u); LOADALL;
  /* 10302386 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302389 je 0x1030239d */ if (ZF_) goto L_1030239d;
  /* 1030238b push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1030238d add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10302390 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302391 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302393 call 0x103029c0 */ esp -= 4; M32(esp) = 0x10302398u; SAVEALL; F_103029c0(c); ABI_CHECK(0x103029c0u, 0x10302393u); RETCHK(0x10302398u, 0x10302393u); LOADALL;
  /* 10302398 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030239b jne 0x103023a5 */ if (!ZF_) goto L_103023a5;
L_1030239d:;
  /* 1030239d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030239e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103023a1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103023a2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_103023a5:;
  /* 103023a5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 103023a7 call 0x103027a0 */ esp -= 4; M32(esp) = 0x103023acu; SAVEALL; F_103027a0(c); ABI_CHECK(0x103027a0u, 0x103023a7u); RETCHK(0x103023acu, 0x103023a7u); LOADALL;
  /* 103023ac pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103023ad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103023ae ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_103023c0(CPU *c) {
  NATIVE_HOOK(0x103023c0u) REGS; LOADALL;
L_103023c0:;
  /* 103023c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103023c1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103023c2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 103023c6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 103023cc push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 103023ce push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103023cf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 103023d1 call 0x10302910 */ esp -= 4; M32(esp) = 0x103023d6u; SAVEALL; F_10302910(c); ABI_CHECK(0x10302910u, 0x103023d1u); RETCHK(0x103023d6u, 0x103023d1u); LOADALL;
  /* 103023d6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103023d9 jne 0x103023e2 */ if (!ZF_) goto L_103023e2;
  /* 103023db pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103023dc or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103023de pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103023df ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_103023e2:;
  /* 103023e2 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 103023e4 add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 103023e7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103023e8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 103023ea call 0x10302910 */ esp -= 4; M32(esp) = 0x103023efu; SAVEALL; F_10302910(c); ABI_CHECK(0x10302910u, 0x103023eau); RETCHK(0x103023efu, 0x103023eau); LOADALL;
  /* 103023ef inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103023f0 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 103023f2 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 103023f4 and eax, 0x41 */ { u32 a_ = eax, b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103023f7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103023f8 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 103023f9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103023fa ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10302400(CPU *c) {
  NATIVE_HOOK(0x10302400u) REGS; LOADALL;
L_10302400:;
  /* 10302400 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302401 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302402 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10302406 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10302408 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1030240e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030240f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302411 call 0x103028d0 */ esp -= 4; M32(esp) = 0x10302416u; SAVEALL; F_103028d0(c); ABI_CHECK(0x103028d0u, 0x10302411u); RETCHK(0x10302416u, 0x10302411u); LOADALL;
  /* 10302416 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302419 je 0x1030242d */ if (ZF_) goto L_1030242d;
  /* 1030241b push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1030241d add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10302420 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302421 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302423 call 0x103029c0 */ esp -= 4; M32(esp) = 0x10302428u; SAVEALL; F_103029c0(c); ABI_CHECK(0x103029c0u, 0x10302423u); RETCHK(0x10302428u, 0x10302423u); LOADALL;
  /* 10302428 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030242b jne 0x10302435 */ if (!ZF_) goto L_10302435;
L_1030242d:;
  /* 1030242d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030242e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302431 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302432 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10302435:;
  /* 10302435 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302437 call 0x103027a0 */ esp -= 4; M32(esp) = 0x1030243cu; SAVEALL; F_103027a0(c); ABI_CHECK(0x103027a0u, 0x10302437u); RETCHK(0x1030243cu, 0x10302437u); LOADALL;
  /* 1030243c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030243d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030243e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10302450(CPU *c) {
  NATIVE_HOOK(0x10302450u) REGS; LOADALL;
L_10302450:;
  /* 10302450 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302451 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302452 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10302456 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1030245c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030245d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1030245f call 0x10302890 */ esp -= 4; M32(esp) = 0x10302464u; SAVEALL; F_10302890(c); ABI_CHECK(0x10302890u, 0x1030245fu); RETCHK(0x10302464u, 0x1030245fu); LOADALL;
  /* 10302464 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302467 jne 0x10302470 */ if (!ZF_) goto L_10302470;
  /* 10302469 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030246a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030246c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030246d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10302470:;
  /* 10302470 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10302472 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10302475 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302476 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10302478 call 0x10302910 */ esp -= 4; M32(esp) = 0x1030247du; SAVEALL; F_10302910(c); ABI_CHECK(0x10302910u, 0x10302478u); RETCHK(0x1030247du, 0x10302478u); LOADALL;
  /* 1030247d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1030247e neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10302480 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10302482 and eax, 0x25 */ { u32 a_ = eax, b_ = 0x25u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302485 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10302486 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10302487 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302488 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10302490(CPU *c) {
  NATIVE_HOOK(0x10302490u) REGS; LOADALL;
L_10302490:;
  /* 10302490 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 10302495 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_103024a0(CPU *c) {
  NATIVE_HOOK(0x103024a0u) REGS; LOADALL;
L_103024a0:;
  /* 103024a0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 103024a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103024a5 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 103024ab push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 103024ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103024ae mov ecx, esi */ { ecx = (u32)(esi); }
  /* 103024b0 call 0x103029c0 */ esp -= 4; M32(esp) = 0x103024b5u; SAVEALL; F_103029c0(c); ABI_CHECK(0x103029c0u, 0x103024b0u); RETCHK(0x103024b5u, 0x103024b0u); LOADALL;
  /* 103024b5 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103024b8 jne 0x103024c0 */ if (!ZF_) goto L_103024c0;
  /* 103024ba or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103024bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103024bd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_103024c0:;
  /* 103024c0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 103024c2 call 0x103027a0 */ esp -= 4; M32(esp) = 0x103024c7u; SAVEALL; F_103027a0(c); ABI_CHECK(0x103027a0u, 0x103024c2u); RETCHK(0x103024c7u, 0x103024c2u); LOADALL;
  /* 103024c7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103024c8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_103024d0(CPU *c) {
  NATIVE_HOOK(0x103024d0u) REGS; LOADALL;
L_103024d0:;
  /* 103024d0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 103024d4 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 103024d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103024d7 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 103024dd call 0x10302910 */ esp -= 4; M32(esp) = 0x103024e2u; SAVEALL; F_10302910(c); ABI_CHECK(0x10302910u, 0x103024ddu); RETCHK(0x103024e2u, 0x103024ddu); LOADALL;
  /* 103024e2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103024e3 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 103024e5 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 103024e7 and eax, 0x21 */ { u32 a_ = eax, b_ = 0x21u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103024ea dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 103024eb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_103024f0(CPU *c) {
  NATIVE_HOOK(0x103024f0u) REGS; LOADALL;
L_103024f0:;
  /* 103024f0 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 103024f2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103024f3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103024f5 mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 103024fa mov edi, edx */ { edi = (u32)(edx); }
  /* 103024fc rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 103024fe mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 10302503 lea edi, [edx + 0x8000] */ edi = (u32)((u32)(edx + 0x8000u));
  /* 10302509 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 1030250b mov dword ptr [edx + 0xfa0], 0x10301e80 */ { const u32 m_ = (u32)(edx + 0xfa0u); M32(m_) = (u32)(0x10301e80u); }
  /* 10302515 mov dword ptr [edx + 0x8fa0], 0x10302490 */ { const u32 m_ = (u32)(edx + 0x8fa0u); M32(m_) = (u32)(0x10302490u); }
  /* 1030251f mov dword ptr [edx + 0xfa4], 0x10301e90 */ { const u32 m_ = (u32)(edx + 0xfa4u); M32(m_) = (u32)(0x10301e90u); }
  /* 10302529 mov dword ptr [edx + 0x8fa4], 0x10301ef0 */ { const u32 m_ = (u32)(edx + 0x8fa4u); M32(m_) = (u32)(0x10301ef0u); }
  /* 10302533 mov dword ptr [edx + 0xfa8], 0x103024a0 */ { const u32 m_ = (u32)(edx + 0xfa8u); M32(m_) = (u32)(0x103024a0u); }
  /* 1030253d mov dword ptr [edx + 0x8fa8], 0x103024d0 */ { const u32 m_ = (u32)(edx + 0x8fa8u); M32(m_) = (u32)(0x103024d0u); }
  /* 10302547 mov dword ptr [edx + 0xfac], 0x10301f50 */ { const u32 m_ = (u32)(edx + 0xfacu); M32(m_) = (u32)(0x10301f50u); }
  /* 10302551 mov dword ptr [edx + 0x8fac], 0x10301fc0 */ { const u32 m_ = (u32)(edx + 0x8facu); M32(m_) = (u32)(0x10301fc0u); }
  /* 1030255b mov dword ptr [edx + 0xfb0], 0x10301e80 */ { const u32 m_ = (u32)(edx + 0xfb0u); M32(m_) = (u32)(0x10301e80u); }
  /* 10302565 mov dword ptr [edx + 0x8fb0], 0x10302490 */ { const u32 m_ = (u32)(edx + 0x8fb0u); M32(m_) = (u32)(0x10302490u); }
  /* 1030256f mov dword ptr [edx + 0xfb4], 0x10302030 */ { const u32 m_ = (u32)(edx + 0xfb4u); M32(m_) = (u32)(0x10302030u); }
  /* 10302579 mov dword ptr [edx + 0x8fb4], 0x103020c0 */ { const u32 m_ = (u32)(edx + 0x8fb4u); M32(m_) = (u32)(0x103020c0u); }
  /* 10302583 mov dword ptr [edx + 0xfc0], 0x10302140 */ { const u32 m_ = (u32)(edx + 0xfc0u); M32(m_) = (u32)(0x10302140u); }
  /* 1030258d mov dword ptr [edx + 0x8fc0], 0x103021b0 */ { const u32 m_ = (u32)(edx + 0x8fc0u); M32(m_) = (u32)(0x103021b0u); }
  /* 10302597 mov dword ptr [edx + 0xfc4], 0x10302220 */ { const u32 m_ = (u32)(edx + 0xfc4u); M32(m_) = (u32)(0x10302220u); }
  /* 103025a1 mov dword ptr [edx + 0x8fc4], 0x10302250 */ { const u32 m_ = (u32)(edx + 0x8fc4u); M32(m_) = (u32)(0x10302250u); }
  /* 103025ab mov dword ptr [edx + 0xfc8], 0x10302270 */ { const u32 m_ = (u32)(edx + 0xfc8u); M32(m_) = (u32)(0x10302270u); }
  /* 103025b5 mov dword ptr [edx + 0x8fc8], 0x103022f0 */ { const u32 m_ = (u32)(edx + 0x8fc8u); M32(m_) = (u32)(0x103022f0u); }
  /* 103025bf mov dword ptr [edx + 0xfcc], 0x103024a0 */ { const u32 m_ = (u32)(edx + 0xfccu); M32(m_) = (u32)(0x103024a0u); }
  /* 103025c9 mov dword ptr [edx + 0x8fcc], 0x103024d0 */ { const u32 m_ = (u32)(edx + 0x8fccu); M32(m_) = (u32)(0x103024d0u); }
  /* 103025d3 mov dword ptr [edx + 0xfd0], 0x10302400 */ { const u32 m_ = (u32)(edx + 0xfd0u); M32(m_) = (u32)(0x10302400u); }
  /* 103025dd mov dword ptr [edx + 0x8fd0], 0x10302450 */ { const u32 m_ = (u32)(edx + 0x8fd0u); M32(m_) = (u32)(0x10302450u); }
  /* 103025e7 mov dword ptr [edx + 0xfd4], 0x10302370 */ { const u32 m_ = (u32)(edx + 0xfd4u); M32(m_) = (u32)(0x10302370u); }
  /* 103025f1 mov dword ptr [edx + 0x8fd4], 0x103023c0 */ { const u32 m_ = (u32)(edx + 0x8fd4u); M32(m_) = (u32)(0x103023c0u); }
  /* 103025fb mov dword ptr [edx + 0xfd8], 0x103024a0 */ { const u32 m_ = (u32)(edx + 0xfd8u); M32(m_) = (u32)(0x103024a0u); }
  /* 10302605 mov dword ptr [edx + 0x8fd8], 0x103024d0 */ { const u32 m_ = (u32)(edx + 0x8fd8u); M32(m_) = (u32)(0x103024d0u); }
  /* 1030260f mov dword ptr [edx + 0xfdc], 0x10302400 */ { const u32 m_ = (u32)(edx + 0xfdcu); M32(m_) = (u32)(0x10302400u); }
  /* 10302619 mov dword ptr [edx + 0x8fdc], 0x10302450 */ { const u32 m_ = (u32)(edx + 0x8fdcu); M32(m_) = (u32)(0x10302450u); }
  /* 10302623 mov dword ptr [edx + 0xfe0], 0x103024a0 */ { const u32 m_ = (u32)(edx + 0xfe0u); M32(m_) = (u32)(0x103024a0u); }
  /* 1030262d mov dword ptr [edx + 0x8fe0], 0x103024d0 */ { const u32 m_ = (u32)(edx + 0x8fe0u); M32(m_) = (u32)(0x103024d0u); }
  /* 10302637 mov dword ptr [edx + 0xfec], 0x10301e80 */ { const u32 m_ = (u32)(edx + 0xfecu); M32(m_) = (u32)(0x10301e80u); }
  /* 10302641 mov dword ptr [edx + 0x8fec], 0x10302490 */ { const u32 m_ = (u32)(edx + 0x8fecu); M32(m_) = (u32)(0x10302490u); }
  /* 1030264b mov dword ptr [edx + 0xff0], 0x10302220 */ { const u32 m_ = (u32)(edx + 0xff0u); M32(m_) = (u32)(0x10302220u); }
  /* 10302655 mov dword ptr [edx + 0x8ff0], 0x10302250 */ { const u32 m_ = (u32)(edx + 0x8ff0u); M32(m_) = (u32)(0x10302250u); }
  /* 1030265f mov dword ptr [edx + 0xff4], 0x103024a0 */ { const u32 m_ = (u32)(edx + 0xff4u); M32(m_) = (u32)(0x103024a0u); }
  /* 10302669 mov dword ptr [edx + 0x8ff4], 0x103024d0 */ { const u32 m_ = (u32)(edx + 0x8ff4u); M32(m_) = (u32)(0x103024d0u); }
  /* 10302673 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 10302675 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10302676 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10302680(CPU *c) {
  NATIVE_HOOK(0x10302680u) REGS; LOADALL;
L_10302680:;
  /* 10302680 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302681 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10302683 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302684 lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 1030268a call 0x10302750 */ esp -= 4; M32(esp) = 0x1030268fu; SAVEALL; F_10302750(c); ABI_CHECK(0x10302750u, 0x1030268au); RETCHK(0x1030268fu, 0x1030268au); LOADALL;
  /* 1030268f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302691 mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 10302696 mov edi, esi */ { edi = (u32)(esi); }
  /* 10302698 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 1030269a mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 1030269f lea edi, [esi + 0x8000] */ edi = (u32)((u32)(esi + 0x8000u));
  /* 103026a5 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 103026a7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 103026a9 call 0x103024f0 */ esp -= 4; M32(esp) = 0x103026aeu; SAVEALL; F_103024f0(c); ABI_CHECK(0x103024f0u, 0x103026a9u); RETCHK(0x103026aeu, 0x103026a9u); LOADALL;
  /* 103026ae pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 103026af mov eax, esi */ { eax = (u32)(esi); }
  /* 103026b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103026b2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103026c0(CPU *c) {
  NATIVE_HOOK(0x103026c0u) REGS; LOADALL;
L_103026c0:;
  /* 103026c0 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 103026c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103026c5 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 103026c7 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 103026cb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103026cc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103026cd lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 103026d3 call 0x10302780 */ esp -= 4; M32(esp) = 0x103026d8u; SAVEALL; F_10302780(c); ABI_CHECK(0x10302780u, 0x103026d3u); RETCHK(0x103026d8u, 0x103026d3u); LOADALL;
  /* 103026d8 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103026dc cmp eax, 0x2000 */ { u32 a_ = eax, b_ = 0x2000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103026e1 jge 0x103026ea */ if (!LT_) goto L_103026ea;
  /* 103026e3 mov eax, dword ptr [esi + eax*4] */ { const u32 m_ = (u32)(esi + eax * 4u); eax = (u32)(M32(m_)); }
  /* 103026e6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103026e8 jne 0x103026f1 */ if (!ZF_) goto L_103026f1;
L_103026ea:;
  /* 103026ea or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103026ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103026ee ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_103026f1:;
  /* 103026f1 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 103026f5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 103026f6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 103026f8 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x103026fau; SAVEALL; call_ind(c, t_); RETCHK(0x103026fau, 0x103026f8u); LOADALL; }
  /* 103026fa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103026fb ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_10302700(CPU *c) {
  NATIVE_HOOK(0x10302700u) REGS; LOADALL;
L_10302700:;
  /* 10302700 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302704 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302705 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10302707 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1030270b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030270c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1030270d lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 10302713 call 0x10302780 */ esp -= 4; M32(esp) = 0x10302718u; SAVEALL; F_10302780(c); ABI_CHECK(0x10302780u, 0x10302713u); RETCHK(0x10302718u, 0x10302713u); LOADALL;
  /* 10302718 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030271c cmp eax, 0x2000 */ { u32 a_ = eax, b_ = 0x2000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302721 jge 0x1030272e */ if (!LT_) goto L_1030272e;
  /* 10302723 mov eax, dword ptr [esi + eax*4 + 0x8000] */ { const u32 m_ = (u32)(esi + eax * 4u + 0x8000u); eax = (u32)(M32(m_)); }
  /* 1030272a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030272c jne 0x10302735 */ if (!ZF_) goto L_10302735;
L_1030272e:;
  /* 1030272e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302731 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302732 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_10302735:;
  /* 10302735 mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10302739 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1030273a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1030273c call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1030273eu; SAVEALL; call_ind(c, t_); RETCHK(0x1030273eu, 0x1030273cu); LOADALL; }
  /* 1030273e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030273f ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_10302750(CPU *c) {
  NATIVE_HOOK(0x10302750u) REGS; LOADALL;
L_10302750:;
  /* 10302750 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10302752 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10302754 mov dword ptr [eax], 0x10309154 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x10309154u); }
  /* 1030275a mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 1030275d mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10302760 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 10302763 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10302780(CPU *c) {
  NATIVE_HOOK(0x10302780u) REGS; LOADALL;
L_10302780:;
  /* 10302780 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10302784 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10302788 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 1030278b mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 1030278e mov dword ptr [ecx + 0xc], 0 */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 10302795 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_103027a0(CPU *c) {
  NATIVE_HOOK(0x103027a0u) REGS; LOADALL;
L_103027a0:;
  /* 103027a0 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 103027a3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103027b0(CPU *c) {
  NATIVE_HOOK(0x103027b0u) REGS; LOADALL;
L_103027b0:;
  /* 103027b0 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 103027b3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103027b4 mov ebx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ebx = (u32)(M32(m_)); }
  /* 103027b7 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 103027ba cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103027bc jle 0x103027c5 */ if ((ZF_|LT_)) goto L_103027c5;
  /* 103027be or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103027c1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 103027c2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_103027c5:;
  /* 103027c5 mov bl, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103027c9 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 103027cc mov byte ptr [eax + edx], bl */ { const u32 m_ = (u32)(eax + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 103027cf mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 103027d2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103027d3 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 103027d6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 103027d7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_103027e0(CPU *c) {
  NATIVE_HOOK(0x103027e0u) REGS; LOADALL;
L_103027e0:;
  /* 103027e0 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 103027e3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103027e4 mov esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); esi = (u32)(M32(m_)); }
  /* 103027e7 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 103027ea cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103027ec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103027ed jle 0x103027f5 */ if ((ZF_|LT_)) goto L_103027f5;
  /* 103027ef or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103027f2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_103027f5:;
  /* 103027f5 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 103027f8 mov al, byte ptr [eax + edx] */ { const u32 m_ = (u32)(eax + edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 103027fb mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 103027ff mov byte ptr [edx], al */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10302801 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302804 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10302805 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 10302808 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10302810(CPU *c) {
  NATIVE_HOOK(0x10302810u) REGS; LOADALL;
L_10302810:;
  /* 10302810 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302811 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10302813 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302816 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10302819 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1030281c cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030281e jle 0x10302827 */ if ((ZF_|LT_)) goto L_10302827;
  /* 10302820 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302823 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302824 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10302827:;
  /* 10302827 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 1030282b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1030282c call dword ptr [0x10309104] */ { const u32 m_ = (u32)(0x10309104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10302832u; SAVEALL; call_ind(c, t_); RETCHK(0x10302832u, 0x1030282cu); LOADALL; }
  /* 10302832 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10302835 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 10302838 mov word ptr [edx + ecx], ax */ { const u32 m_ = (u32)(edx + ecx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 1030283c mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 1030283f add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10302842 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10302845 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302846 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10302850(CPU *c) {
  NATIVE_HOOK(0x10302850u) REGS; LOADALL;
L_10302850:;
  /* 10302850 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302851 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10302853 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302856 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 10302859 lea ecx, [eax + 2] */ ecx = (u32)((u32)(eax + 0x2u));
  /* 1030285c cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030285e jle 0x10302867 */ if ((ZF_|LT_)) goto L_10302867;
  /* 10302860 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302863 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302864 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10302867:;
  /* 10302867 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 1030286a movzx eax, word ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); eax = (u32)(M16(m_)); }
  /* 1030286e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030286f call dword ptr [0x10309100] */ { const u32 m_ = (u32)(0x10309100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10302875u; SAVEALL; call_ind(c, t_); RETCHK(0x10302875u, 0x1030286fu); LOADALL; }
  /* 10302875 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10302879 mov word ptr [ecx], ax */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 1030287c mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 1030287f add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10302882 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10302885 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302886 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10302890(CPU *c) {
  NATIVE_HOOK(0x10302890u) REGS; LOADALL;
L_10302890:;
  /* 10302890 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302891 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10302893 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302896 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 10302899 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 1030289c cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030289e jle 0x103028a7 */ if ((ZF_|LT_)) goto L_103028a7;
  /* 103028a0 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103028a3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103028a4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_103028a7:;
  /* 103028a7 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 103028aa mov eax, dword ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); eax = (u32)(M32(m_)); }
  /* 103028ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103028ae call dword ptr [0x103090f8] */ { const u32 m_ = (u32)(0x103090f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103028b4u; SAVEALL; call_ind(c, t_); RETCHK(0x103028b4u, 0x103028aeu); LOADALL; }
  /* 103028b4 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 103028b8 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 103028ba mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 103028bd add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103028c0 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 103028c3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103028c4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_103028d0(CPU *c) {
  NATIVE_HOOK(0x103028d0u) REGS; LOADALL;
L_103028d0:;
  /* 103028d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103028d1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 103028d3 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 103028d6 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 103028d9 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103028dc cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103028de jle 0x103028e7 */ if ((ZF_|LT_)) goto L_103028e7;
  /* 103028e0 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103028e3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103028e4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_103028e7:;
  /* 103028e7 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 103028eb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103028ec call dword ptr [0x103090fc] */ { const u32 m_ = (u32)(0x103090fcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103028f2u; SAVEALL; call_ind(c, t_); RETCHK(0x103028f2u, 0x103028ecu); LOADALL; }
  /* 103028f2 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 103028f5 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 103028f8 mov dword ptr [edx + ecx], eax */ { const u32 m_ = (u32)(edx + ecx); M32(m_) = (u32)(eax); }
  /* 103028fb mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 103028fe add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10302901 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 10302904 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302905 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10302910(CPU *c) {
  NATIVE_HOOK(0x10302910u) REGS; LOADALL;
L_10302910:;
  /* 10302910 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10302911 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10302913 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302916 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 10302919 lea ecx, [eax + 2] */ ecx = (u32)((u32)(eax + 0x2u));
  /* 1030291c cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030291e jg 0x1030293c */ if (!(ZF_|LT_)) goto L_1030293c;
  /* 10302920 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 10302923 movzx eax, word ptr [eax + edx] */ { const u32 m_ = (u32)(eax + edx); eax = (u32)(M16(m_)); }
  /* 10302927 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10302928 call dword ptr [0x10309100] */ { const u32 m_ = (u32)(0x10309100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030292eu; SAVEALL; call_ind(c, t_); RETCHK(0x1030292eu, 0x10302928u); LOADALL; }
  /* 1030292e mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 10302931 add edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10302934 cmp edx, -1 */ { u32 a_ = edx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302937 mov dword ptr [ebx + 0xc], edx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(edx); }
  /* 1030293a jne 0x10302943 */ if (!ZF_) goto L_10302943;
L_1030293c:;
  /* 1030293c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030293f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10302940 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10302943:;
  /* 10302943 movzx eax, ax */ { eax = (u32)((eax & 0xffffu)); }
  /* 10302946 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302947 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 1030294a lea ecx, [eax + edx] */ ecx = (u32)((u32)(eax + edx));
  /* 1030294d cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030294f jle 0x10302959 */ if ((ZF_|LT_)) goto L_10302959;
L_10302951:;
  /* 10302951 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302952 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302955 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10302956 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10302959:;
  /* 10302959 mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 1030295d lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 10302960 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302962 jg 0x10302951 */ if (!(ZF_|LT_)) goto L_10302951;
  /* 10302964 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 10302967 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10302968 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302969 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 1030296b mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 1030296f mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10302971 mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 10302973 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10302976 mov edi, edx */ { edi = (u32)(edx); }
  /* 10302978 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 1030297a mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 1030297c and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 1030297f rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10302981 mov byte ptr [eax + edx], 0 */ { const u32 m_ = (u32)(eax + edx); M8(m_) = (u8)(0x0u); }
  /* 10302985 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10302988 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10302989 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1030298a add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1030298c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030298d mov dword ptr [ebx + 0xc], ecx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 10302990 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10302992 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10302993 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_103029a0(CPU *c) {
  NATIVE_HOOK(0x103029a0u) REGS; LOADALL;
L_103029a0:;
  /* 103029a0 test byte ptr [esp + 4], 1 */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 103029a5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103029a6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 103029a8 mov dword ptr [esi], 0x10309154 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x10309154u); }
  /* 103029ae je 0x103029b9 */ if (ZF_) goto L_103029b9;
  /* 103029b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103029b1 call 0x10302a47 */ esp -= 4; M32(esp) = 0x103029b6u; SAVEALL; F_10302a47(c); ABI_CHECK(0x10302a47u, 0x103029b1u); RETCHK(0x103029b6u, 0x103029b1u); LOADALL;
  /* 103029b6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_103029b9:;
  /* 103029b9 mov eax, esi */ { eax = (u32)(esi); }
  /* 103029bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103029bc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_103029c0(CPU *c) {
  NATIVE_HOOK(0x103029c0u) REGS; LOADALL;
L_103029c0:;
  /* 103029c0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103029c1 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 103029c2 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 103029c6 dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 103029c7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103029c9 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103029cb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103029cc mov esi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); esi = (u32)(M32(m_)); }
  /* 103029d0 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 103029d2 jle 0x103029e3 */ if ((ZF_|LT_)) goto L_103029e3;
L_103029d4:;
  /* 103029d4 cmp byte ptr [eax + esi], 0 */ { const u32 m_ = (u32)(eax + esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 103029d8 je 0x103029e1 */ if (ZF_) goto L_103029e1;
  /* 103029da inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103029db cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103029dd jl 0x103029d4 */ if (LT_) goto L_103029d4;
  /* 103029df jmp 0x103029e3 */ goto L_103029e3;
L_103029e1:;
  /* 103029e1 mov ebp, eax */ { ebp = (u32)(eax); }
L_103029e3:;
  /* 103029e3 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 103029e6 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 103029e9 lea edx, [eax + ebp + 2] */ edx = (u32)((u32)(eax + ebp + 0x2u));
  /* 103029ed cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103029ef jg 0x10302a19 */ if (!(ZF_|LT_)) goto L_10302a19;
  /* 103029f1 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103029f4 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103029f6 jg 0x10302a19 */ if (!(ZF_|LT_)) goto L_10302a19;
  /* 103029f8 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 103029f9 call dword ptr [0x10309104] */ { const u32 m_ = (u32)(0x10309104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103029ffu; SAVEALL; call_ind(c, t_); RETCHK(0x103029ffu, 0x103029f9u); LOADALL; }
  /* 103029ff mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 10302a02 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10302a05 mov word ptr [ecx + edx], ax */ { const u32 m_ = (u32)(ecx + edx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10302a09 mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 10302a0c add edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10302a0f mov eax, edx */ { eax = (u32)(edx); }
  /* 10302a11 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302a14 mov dword ptr [ebx + 0xc], edx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(edx); }
  /* 10302a17 jne 0x10302a22 */ if (!ZF_) goto L_10302a22;
L_10302a19:;
  /* 10302a19 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302a1a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10302a1b or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302a1e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10302a1f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10302a22:;
  /* 10302a22 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302a23 mov edi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edi = (u32)(M32(m_)); }
  /* 10302a26 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10302a28 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10302a2a mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10302a2c shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10302a2f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 10302a31 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10302a33 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10302a36 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 10302a38 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302a3b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10302a3c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302a3d add eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10302a3f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10302a40 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 10302a43 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10302a44 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10302a47(CPU *c) {
  NATIVE_HOOK(0x10302a47u) REGS; LOADALL;
L_10302a47:;
  /* 10302a47 jmp 0x10303326 */ SAVEALL; F_10303326(c); return;
}

void F_10302a69(CPU *c) {
  NATIVE_HOOK(0x10302a69u) REGS; LOADALL;
L_10302a69:;
  /* 10302a69 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302a6b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10302a6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10302a6d(CPU *c) {
  NATIVE_HOOK(0x10302a6du) REGS; LOADALL;
L_10302a6d:;
  /* 10302a6d mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10302a70 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10302a74 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10302a76 call dword ptr [0x10309004] */ { const u32 m_ = (u32)(0x10309004u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10302a7cu; SAVEALL; call_ind(c, t_); RETCHK(0x10302a7cu, 0x10302a76u); LOADALL; }
}

void F_10302a7d(CPU *c) {
  NATIVE_HOOK(0x10302a7du) REGS; LOADALL;
  goto L_10302a7d;
L_10302a4c:;
  /* 10302a4c push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10302a4e push 0x10309158 */ { u32 v_ = 0x10309158u; esp -= 4; M32(esp) = v_; }
  /* 10302a53 call 0x10303548 */ esp -= 4; M32(esp) = 0x10302a58u; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x10302a53u); RETCHK(0x10302a58u, 0x10302a53u); LOADALL;
  /* 10302a58 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10302a5c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10302a5e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10302a60 call 0x103033fd */ esp -= 4; M32(esp) = 0x10302a65u; SAVEALL; F_103033fd(c); ABI_CHECK(0x103033fdu, 0x10302a60u); RETCHK(0x10302a65u, 0x10302a60u); LOADALL;
  /* 10302a65 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10302a66 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10302a67 jmp 0x10302a70 */ goto L_10302a70;
L_10302a70:;
  /* 10302a70 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10302a74 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10302a76 call dword ptr [0x10309004] */ { const u32 m_ = (u32)(0x10309004u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10302a7cu; SAVEALL; call_ind(c, t_); RETCHK(0x10302a7cu, 0x10302a76u); LOADALL; }
L_10302a7d:;
  /* 10302a7d cmp ecx, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302a83 jne 0x10302a86 */ if (!ZF_) goto L_10302a86;
  /* 10302a85 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10302a86:;
  /* 10302a86 jmp 0x10302a4c */ goto L_10302a4c;
}

void F_10302a90(CPU *c) {
  NATIVE_HOOK(0x10302a90u) REGS; LOADALL;
L_10302a90:;
  /* 10302a90 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10302a94 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302a95 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10302a97 je 0x10302b2f */ if (ZF_) goto L_10302b2f;
  /* 10302a9d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302a9e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10302a9f mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10302aa1 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 10302aa5 test esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10302aab mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10302aaf jne 0x10302abc */ if (!ZF_) goto L_10302abc;
  /* 10302ab1 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10302ab4 jne 0x10302b3f */ if (!ZF_) goto L_10302b3f;
  /* 10302aba jmp 0x10302ae3 */ goto L_10302ae3;
L_10302abc:;
  /* 10302abc mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10302abe add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10302ac1 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10302ac3 add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10302ac6 sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10302ac9 je 0x10302af6 */ if (ZF_) goto L_10302af6;
  /* 10302acb test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10302acd je 0x10302afe */ if (ZF_) goto L_10302afe;
  /* 10302acf test esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10302ad5 jne 0x10302abc */ if (!ZF_) goto L_10302abc;
  /* 10302ad7 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10302ad9 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10302adc jne 0x10302b3f */ if (!ZF_) goto L_10302b3f;
L_10302ade:;
  /* 10302ade and ebx, 3 */ { u32 a_ = ebx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10302ae1 je 0x10302af6 */ if (ZF_) goto L_10302af6;
L_10302ae3:;
  /* 10302ae3 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10302ae5 add esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10302ae8 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10302aea add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10302aed test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10302aef je 0x10302b28 */ if (ZF_) goto L_10302b28;
  /* 10302af1 sub ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10302af4 jne 0x10302ae3 */ if (!ZF_) goto L_10302ae3;
L_10302af6:;
  /* 10302af6 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10302afa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10302afb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302afc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10302afd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10302afe:;
  /* 10302afe test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10302b04 je 0x10302b1c */ if (ZF_) goto L_10302b1c;
L_10302b06:;
  /* 10302b06 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10302b08 add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10302b0b sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10302b0e je 0x10302bac */ if (ZF_) goto L_10302bac;
  /* 10302b14 test edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10302b1a jne 0x10302b06 */ if (!ZF_) goto L_10302b06;
L_10302b1c:;
  /* 10302b1c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10302b1e shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 10302b21 jne 0x10302b97 */ if (!ZF_) goto L_10302b97;
L_10302b23:;
  /* 10302b23 mov byte ptr [edi], al */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10302b25 add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10302b28:;
  /* 10302b28 sub ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 10302b2b jne 0x10302b23 */ if (!ZF_) goto L_10302b23;
  /* 10302b2d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10302b2e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_10302b2f:;
  /* 10302b2f mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10302b33 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10302b34 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10302b35:;
  /* 10302b35 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10302b37 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10302b3a sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10302b3d je 0x10302ade */ if (ZF_) goto L_10302ade;
L_10302b3f:;
  /* 10302b3f mov edx, 0x7efefeff */ { edx = (u32)(0x7efefeffu); }
  /* 10302b44 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10302b46 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10302b48 xor eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302b4b xor eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302b4d mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 10302b4f add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 10302b52 test eax, 0x81010100 */ { u32 a_ = eax, b_ = 0x81010100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10302b57 je 0x10302b35 */ if (ZF_) goto L_10302b35;
  /* 10302b59 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10302b5b je 0x10302b89 */ if (ZF_) goto L_10302b89;
  /* 10302b5d test dh, dh */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = ((edx >> 8) & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10302b5f je 0x10302b7f */ if (ZF_) goto L_10302b7f;
  /* 10302b61 test edx, 0xff0000 */ { u32 a_ = edx, b_ = 0xff0000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10302b67 je 0x10302b75 */ if (ZF_) goto L_10302b75;
  /* 10302b69 test edx, 0xff000000 */ { u32 a_ = edx, b_ = 0xff000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10302b6f jne 0x10302b35 */ if (!ZF_) goto L_10302b35;
  /* 10302b71 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10302b73 jmp 0x10302b8d */ goto L_10302b8d;
L_10302b75:;
  /* 10302b75 and edx, 0xffff */ { u32 a_ = edx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10302b7b mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10302b7d jmp 0x10302b8d */ goto L_10302b8d;
L_10302b7f:;
  /* 10302b7f and edx, 0xff */ { u32 a_ = edx, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10302b85 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 10302b87 jmp 0x10302b8d */ goto L_10302b8d;
L_10302b89:;
  /* 10302b89 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10302b8b mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
L_10302b8d:;
  /* 10302b8d add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10302b90 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302b92 sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10302b95 je 0x10302ba3 */ if (ZF_) goto L_10302ba3;
L_10302b97:;
  /* 10302b97 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10302b99:;
  /* 10302b99 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 10302b9b add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10302b9e sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10302ba1 jne 0x10302b99 */ if (!ZF_) goto L_10302b99;
L_10302ba3:;
  /* 10302ba3 and ebx, 3 */ { u32 a_ = ebx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10302ba6 jne 0x10302b23 */ if (!ZF_) goto L_10302b23;
L_10302bac:;
  /* 10302bac mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10302bb0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10302bb1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302bb2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10302bb3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10302bb4(CPU *c) {
  NATIVE_HOOK(0x10302bb4u) REGS; LOADALL;
L_10302bb4:;
  /* 10302bb4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10302bb6 push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302bba call 0x10303718 */ esp -= 4; M32(esp) = 0x10302bbfu; SAVEALL; F_10303718(c); ABI_CHECK(0x10303718u, 0x10302bbau); RETCHK(0x10302bbfu, 0x10302bbau); LOADALL;
  /* 10302bbf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10302bc0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10302bc1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10302bc2(CPU *c) {
  NATIVE_HOOK(0x10302bc2u) REGS; LOADALL;
L_10302bc2:;
  /* 10302bc2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10302bc3 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10302bc5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10302bc6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10302bc7 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302bca add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10302bcd mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10302bd0 mov ebx, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); ebx = (u32)(M32(m_)); }
  /* 10302bd7 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10302bd9 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 10302bdf mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10302be2 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10302be5 mov esp, dword ptr [ebx - 4] */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); esp = (u32)(M32(m_)); }
  /* 10302be8 mov ebp, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebp = (u32)(M32(m_)); }
  /* 10302beb jmp eax */ { u32 t_ = eax; SAVEALL; call_ind(c, t_); return; }
}

void F_10302bf2(CPU *c) {
  NATIVE_HOOK(0x10302bf2u) REGS; LOADALL;
L_10302bf2:;
  /* 10302bf2 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 10302bf3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10302bf4 xchg dword ptr [esp], eax */ { const u32 m_ = (u32)(esp); u32 o_ = (u32)__atomic_exchange_n((u32 *)HP(m_), (u32)eax, __ATOMIC_SEQ_CST); eax = (u32)(o_); }
  /* 10302bf7 jmp eax */ { u32 t_ = eax; SAVEALL; call_ind(c, t_); return; }
}

void F_10302bf9(CPU *c) {
  NATIVE_HOOK(0x10302bf9u) REGS; LOADALL;
L_10302bf9:;
  /* 10302bf9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10302bfa mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10302bfc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10302bfd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10302bfe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10302bff push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302c00 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302c01 mov esi, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); esi = (u32)(M32(m_)); }
  /* 10302c08 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 10302c0b mov dword ptr [ebp - 8], 0x10302c22 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x10302c22u); }
  /* 10302c12 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10302c14 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302c17 push dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302c1a push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302c1d call 0x1030876e */ esp -= 4; M32(esp) = 0x10302c22u; SAVEALL; F_1030876e(c); ABI_CHECK(0x1030876eu, 0x10302c1du); RETCHK(0x10302c22u, 0x10302c1du); LOADALL;
  /* 10302c22 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302c25 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 10302c28 and eax, 0xfffffffd */ { u32 a_ = eax, b_ = 0xfffffffdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302c2b mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10302c2e mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10302c31 mov edi, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); edi = (u32)(M32(m_)); }
  /* 10302c38 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 10302c3b mov dword ptr [ebx], edi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edi); }
  /* 10302c3d mov dword ptr fs:[0], ebx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ebx); }
  /* 10302c44 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10302c45 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302c46 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10302c47 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10302c48 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10302c22(CPU *c) {
  NATIVE_HOOK(0x10302c22u) REGS; LOADALL;
L_10302c22:;
  /* 10302c22 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302c25 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 10302c28 and eax, 0xfffffffd */ { u32 a_ = eax, b_ = 0xfffffffdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302c2b mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10302c2e mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10302c31 mov edi, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); edi = (u32)(M32(m_)); }
  /* 10302c38 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 10302c3b mov dword ptr [ebx], edi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edi); }
  /* 10302c3d mov dword ptr fs:[0], ebx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ebx); }
  /* 10302c44 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10302c45 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302c46 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10302c47 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10302c48 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10302c81(CPU *c) {
  NATIVE_HOOK(0x10302c81u) REGS; LOADALL;
L_10302c81:;
  /* 10302c81 cld */ c->df = 0;
  /* 10302c82 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10302c86 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10302c89 cmp ecx, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302c8f je 0x10302c9d */ if (ZF_) goto L_10302c9d;
  /* 10302c91 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10302c95 or dword ptr [eax + 4], 8 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10302c99 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302c9b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10302c9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10302c9d:;
  /* 10302c9d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10302c9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10302ca0 push dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302ca3 push dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302ca6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10302ca8 push dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302cac push dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302caf push dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302cb3 call 0x10303f5e */ esp -= 4; M32(esp) = 0x10302cb8u; SAVEALL; F_10303f5e(c); ABI_CHECK(0x10303f5eu, 0x10302cb3u); RETCHK(0x10302cb8u, 0x10302cb3u); LOADALL;
  /* 10302cb8 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10302cbb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10302cbc(CPU *c) {
  NATIVE_HOOK(0x10302cbcu) REGS; LOADALL;
L_10302cbc:;
  /* 10302cbc push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10302cbd mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10302cbf sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10302cc2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10302cc3 cmp dword ptr [ebp + 8], 0x123 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x123u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302cca jne 0x10302cde */ if (!ZF_) goto L_10302cde;
  /* 10302ccc mov eax, 0x10302d57 */ { eax = (u32)(0x10302d57u); }
  /* 10302cd1 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10302cd4 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 10302cd6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302cd8 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10302cd9 jmp 0x10302d80 */ goto L_10302d80;
L_10302cde:;
  /* 10302cde and dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10302ce2 mov dword ptr [ebp - 0x24], 0x10302d83 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x10302d83u); }
  /* 10302ce9 mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 10302cee mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10302cf1 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10302cf4 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10302cf7 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302cfa mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 10302cfd mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 10302d00 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 10302d03 mov eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); eax = (u32)(M32(m_)); }
  /* 10302d06 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10302d09 and dword ptr [ebp - 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10302d0d and dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10302d11 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10302d15 mov dword ptr [ebp - 0xc], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(esp); }
  /* 10302d18 mov dword ptr [ebp - 8], ebp */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebp); }
  /* 10302d1b mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10302d21 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 10302d24 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 10302d27 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 10302d2d mov dword ptr [ebp - 0x34], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x1u); }
  /* 10302d34 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10302d37 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 10302d3a mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10302d3d mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 10302d40 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 10302d43 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10302d44 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10302d47 push dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302d49 call 0x10304039 */ esp -= 4; M32(esp) = 0x10302d4eu; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10302d49u); RETCHK(0x10302d4eu, 0x10302d49u); LOADALL;
  /* 10302d4e call dword ptr [eax + 0x74] */ { const u32 m_ = (u32)(eax + 0x74u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10302d51u; SAVEALL; call_ind(c, t_); RETCHK(0x10302d51u, 0x10302d4eu); LOADALL; }
  /* 10302d51 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10302d52 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10302d53 and dword ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10302d57 cmp dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302d5b je 0x10302d74 */ if (ZF_) goto L_10302d74;
  /* 10302d5d mov ebx, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); ebx = (u32)(M32(m_)); }
  /* 10302d64 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10302d66 mov ebx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ebx = (u32)(M32(m_)); }
  /* 10302d69 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 10302d6b mov dword ptr fs:[0], ebx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ebx); }
  /* 10302d72 jmp 0x10302d7d */ goto L_10302d7d;
L_10302d74:;
  /* 10302d74 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 10302d77 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
L_10302d7d:;
  /* 10302d7d mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
L_10302d80:;
  /* 10302d80 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10302d81 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10302d82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10302d57(CPU *c) {
  NATIVE_HOOK(0x10302d57u) REGS; LOADALL;
L_10302d57:;
  /* 10302d57 cmp dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302d5b je 0x10302d74 */ if (ZF_) goto L_10302d74;
  /* 10302d5d mov ebx, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); ebx = (u32)(M32(m_)); }
  /* 10302d64 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10302d66 mov ebx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ebx = (u32)(M32(m_)); }
  /* 10302d69 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 10302d6b mov dword ptr fs:[0], ebx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ebx); }
  /* 10302d72 jmp 0x10302d7d */ goto L_10302d7d;
L_10302d74:;
  /* 10302d74 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 10302d77 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
L_10302d7d:;
  /* 10302d7d mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 10302d80 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10302d81 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10302d82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10302d83(CPU *c) {
  NATIVE_HOOK(0x10302d83u) REGS; LOADALL;
L_10302d83:;
  /* 10302d83 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10302d84 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10302d86 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10302d87 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10302d88 cld */ c->df = 0;
  /* 10302d89 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302d8c mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 10302d8f cmp eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302d95 je 0x10302dae */ if (ZF_) goto L_10302dae;
  /* 10302d97 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10302d9a mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 10302d9d or eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302da0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10302da3 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10302da6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302da8 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10302da9 jmp 0x10302e32 */ goto L_10302e32;
L_10302dae:;
  /* 10302dae mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10302db1 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 10302db4 and eax, 0x66 */ { u32 a_ = eax, b_ = 0x66u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302db7 je 0x10302dc8 */ if (ZF_) goto L_10302dc8;
  /* 10302db9 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302dbc mov dword ptr [eax + 0x24], 1 */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(0x1u); }
  /* 10302dc3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302dc5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10302dc6 jmp 0x10302e32 */ goto L_10302e32;
L_10302dc8:;
  /* 10302dc8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10302dca mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302dcd push dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302dd0 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302dd3 push dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302dd6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302dd9 push dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302ddc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10302dde push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302de1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302de4 push dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302de7 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302dea call 0x10303f5e */ esp -= 4; M32(esp) = 0x10302defu; SAVEALL; F_10303f5e(c); ABI_CHECK(0x10303f5eu, 0x10302deau); RETCHK(0x10302defu, 0x10302deau); LOADALL;
  /* 10302def add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10302df2 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302df5 cmp dword ptr [eax + 0x24], 0 */ { const u32 m_ = (u32)(eax + 0x24u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302df9 jne 0x10302e06 */ if (!ZF_) goto L_10302e06;
  /* 10302dfb push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302dfe push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302e01 call 0x10302bf9 */ esp -= 4; M32(esp) = 0x10302e06u; SAVEALL; F_10302bf9(c); ABI_CHECK(0x10302bf9u, 0x10302e01u); RETCHK(0x10302e06u, 0x10302e01u); LOADALL;
L_10302e06:;
  /* 10302e06 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10302e08 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10302e0a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10302e0c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10302e0e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10302e10 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 10302e13 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10302e14 push 0x123 */ { u32 v_ = 0x123u; esp -= 4; M32(esp) = v_; }
  /* 10302e19 call 0x10302cbc */ esp -= 4; M32(esp) = 0x10302e1eu; SAVEALL; F_10302cbc(c); ABI_CHECK(0x10302cbcu, 0x10302e19u); RETCHK(0x10302e1eu, 0x10302e19u); LOADALL;
  /* 10302e1e add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10302e21 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10302e24 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10302e27 mov esp, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); esp = (u32)(M32(m_)); }
  /* 10302e2a mov ebp, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); ebp = (u32)(M32(m_)); }
  /* 10302e2d jmp eax */ { u32 t_ = eax; SAVEALL; call_ind(c, t_); return; }
L_10302e32:;
  /* 10302e32 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10302e33 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10302e34 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10302e35(CPU *c) {
  NATIVE_HOOK(0x10302e35u) REGS; LOADALL;
L_10302e35:;
  /* 10302e35 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10302e36 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10302e38 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10302e39 cmp dword ptr [ebp + 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302e3d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10302e3e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302e3f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302e40 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 10302e43 mov esi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); esi = (u32)(M32(m_)); }
  /* 10302e46 mov ebx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ebx = (u32)(M32(m_)); }
  /* 10302e49 mov eax, esi */ { eax = (u32)(esi); }
  /* 10302e4b mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10302e4e mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 10302e51 jl 0x10302e8b */ if (LT_) goto L_10302e8b;
L_10302e53:;
  /* 10302e53 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302e56 jne 0x10302e5d */ if (!ZF_) goto L_10302e5d;
  /* 10302e58 call 0x10304344 */ esp -= 4; M32(esp) = 0x10302e5du; SAVEALL; F_10304344(c); ABI_CHECK(0x10304344u, 0x10302e58u); RETCHK(0x10302e5du, 0x10302e58u); LOADALL;
L_10302e5d:;
  /* 10302e5d mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10302e60 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10302e61 lea eax, [esi + esi*4] */ eax = (u32)((u32)(esi + esi * 4u));
  /* 10302e64 lea eax, [ebx + eax*4] */ eax = (u32)((u32)(ebx + eax * 4u));
  /* 10302e67 cmp dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302e6a jge 0x10302e71 */ if (!LT_) goto L_10302e71;
  /* 10302e6c cmp ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302e6f jle 0x10302e76 */ if ((ZF_|LT_)) goto L_10302e76;
L_10302e71:;
  /* 10302e71 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302e74 jne 0x10302e82 */ if (!ZF_) goto L_10302e82;
L_10302e76:;
  /* 10302e76 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10302e79 dec dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10302e7c mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10302e7f mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
L_10302e82:;
  /* 10302e82 cmp dword ptr [ebp + 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302e86 jge 0x10302e53 */ if (!LT_) goto L_10302e53;
  /* 10302e88 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
L_10302e8b:;
  /* 10302e8b mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 10302e8e inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10302e8f mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 10302e91 mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 10302e94 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 10302e96 cmp eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302e99 ja 0x10302e9f */ if (!(CF_|ZF_)) goto L_10302e9f;
  /* 10302e9b cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302e9d jbe 0x10302ea4 */ if ((CF_|ZF_)) goto L_10302ea4;
L_10302e9f:;
  /* 10302e9f call 0x10304344 */ esp -= 4; M32(esp) = 0x10302ea4u; SAVEALL; F_10304344(c); ABI_CHECK(0x10304344u, 0x10302e9fu); RETCHK(0x10302ea4u, 0x10302e9fu); LOADALL;
L_10302ea4:;
  /* 10302ea4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10302ea5 lea eax, [esi + esi*4] */ eax = (u32)((u32)(esi + esi * 4u));
  /* 10302ea8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302ea9 lea eax, [ebx + eax*4] */ eax = (u32)((u32)(ebx + eax * 4u));
  /* 10302eac pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10302ead leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10302eae ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10302eaf(CPU *c) {
  NATIVE_HOOK(0x10302eafu) REGS; LOADALL;
L_10302eaf:;
  /* 10302eaf mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10302eb3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302eb4 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10302eb8 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 10302eba call 0x10304039 */ esp -= 4; M32(esp) = 0x10302ebfu; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10302ebau); RETCHK(0x10302ebfu, 0x10302ebau); LOADALL;
  /* 10302ebf mov eax, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); eax = (u32)(M32(m_)); }
  /* 10302ec5 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 10302ec8 call 0x10304039 */ esp -= 4; M32(esp) = 0x10302ecdu; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10302ec8u); RETCHK(0x10302ecdu, 0x10302ec8u); LOADALL;
  /* 10302ecd mov dword ptr [eax + 0x88], esi */ { const u32 m_ = (u32)(eax + 0x88u); M32(m_) = (u32)(esi); }
  /* 10302ed3 mov eax, esi */ { eax = (u32)(esi); }
  /* 10302ed5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302ed6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10302ed7(CPU *c) {
  NATIVE_HOOK(0x10302ed7u) REGS; LOADALL;
L_10302ed7:;
  /* 10302ed7 call 0x10304039 */ esp -= 4; M32(esp) = 0x10302edcu; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10302ed7u); RETCHK(0x10302edcu, 0x10302ed7u); LOADALL;
  /* 10302edc mov eax, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); eax = (u32)(M32(m_)); }
  /* 10302ee2 jmp 0x10302eef */ goto L_10302eef;
L_10302ee4:;
  /* 10302ee4 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10302ee6 cmp ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302eea je 0x10302ef5 */ if (ZF_) goto L_10302ef5;
  /* 10302eec mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
L_10302eef:;
  /* 10302eef test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10302ef1 jne 0x10302ee4 */ if (!ZF_) goto L_10302ee4;
  /* 10302ef3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10302ef4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10302ef5:;
  /* 10302ef5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10302ef7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10302ef8(CPU *c) {
  NATIVE_HOOK(0x10302ef8u) REGS; LOADALL;
L_10302ef8:;
  /* 10302ef8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302ef9 call 0x10304039 */ esp -= 4; M32(esp) = 0x10302efeu; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10302ef9u); RETCHK(0x10302efeu, 0x10302ef9u); LOADALL;
  /* 10302efe mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10302f02 cmp esi, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302f08 jne 0x10302f1a */ if (!ZF_) goto L_10302f1a;
  /* 10302f0a call 0x10304039 */ esp -= 4; M32(esp) = 0x10302f0fu; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10302f0au); RETCHK(0x10302f0fu, 0x10302f0au); LOADALL;
  /* 10302f0f mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10302f12 mov dword ptr [eax + 0x88], ecx */ { const u32 m_ = (u32)(eax + 0x88u); M32(m_) = (u32)(ecx); }
  /* 10302f18 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302f19 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10302f1a:;
  /* 10302f1a call 0x10304039 */ esp -= 4; M32(esp) = 0x10302f1fu; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10302f1au); RETCHK(0x10302f1fu, 0x10302f1au); LOADALL;
  /* 10302f1f mov eax, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); eax = (u32)(M32(m_)); }
  /* 10302f25 jmp 0x10302f30 */ goto L_10302f30;
L_10302f27:;
  /* 10302f27 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10302f2a cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302f2c je 0x10302f3c */ if (ZF_) goto L_10302f3c;
  /* 10302f2e mov eax, ecx */ { eax = (u32)(ecx); }
L_10302f30:;
  /* 10302f30 cmp dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10302f34 jne 0x10302f27 */ if (!ZF_) goto L_10302f27;
  /* 10302f36 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302f37 jmp 0x10304344 */ SAVEALL; F_10304344(c); return;
L_10302f3c:;
  /* 10302f3c mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10302f3f mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10302f42 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302f43 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10302f44(CPU *c) {
  NATIVE_HOOK(0x10302f44u) REGS; LOADALL;
L_10302f44:;
  /* 10302f44 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10302f45 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10302f47 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10302f4a mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 10302f4f and dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10302f53 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10302f56 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 10302f59 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10302f5c mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 10302f5f mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10302f62 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10302f63 mov dword ptr [ebp - 0x14], 0x10302c81 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x10302c81u); }
  /* 10302f6a mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 10302f6d mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 10302f70 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10302f76 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 10302f79 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 10302f7c mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 10302f82 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302f85 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10302f86 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302f89 call 0x10304380 */ esp -= 4; M32(esp) = 0x10302f8eu; SAVEALL; F_10304380(c); ABI_CHECK(0x10304380u, 0x10302f89u); RETCHK(0x10302f8eu, 0x10302f89u); LOADALL;
  /* 10302f8e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10302f90 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 10302f93 mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 10302f99 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10302f9b leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10302f9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10302fa0(CPU *c) {
  NATIVE_HOOK(0x10302fa0u) REGS; LOADALL;
L_10302fa0:;
  /* 10302fa0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10302fa1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10302fa3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10302fa4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302fa5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302fa6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10302fa7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10302fa9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10302fab push 0x10302fb8 */ { u32 v_ = 0x10302fb8u; esp -= 4; M32(esp) = v_; }
  /* 10302fb0 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302fb3 call 0x1030876e */ esp -= 4; M32(esp) = 0x10302fb8u; SAVEALL; F_1030876e(c); ABI_CHECK(0x1030876eu, 0x10302fb3u); RETCHK(0x10302fb8u, 0x10302fb3u); LOADALL;
  /* 10302fb8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10302fb9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10302fba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302fbb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10302fbc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10302fbe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10302fbf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10302fb8(CPU *c) {
  NATIVE_HOOK(0x10302fb8u) REGS; LOADALL;
L_10302fb8:;
  /* 10302fb8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10302fb9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10302fba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10302fbb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10302fbc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10302fbe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10302fbf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10302fc0(CPU *c) {
  NATIVE_HOOK(0x10302fc0u) REGS; LOADALL;
L_10302fc0:;
  /* 10302fc0 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10302fc4 test dword ptr [ecx + 4], 6 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10302fcb mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 10302fd0 je 0x10302fe1 */ if (ZF_) goto L_10302fe1;
  /* 10302fd2 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10302fd6 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10302fda mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 10302fdc mov eax, 3 */ { eax = (u32)(0x3u); }
L_10302fe1:;
  /* 10302fe1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10302fe2(CPU *c) {
  NATIVE_HOOK(0x10302fe2u) REGS; LOADALL;
L_10302fe2:;
  /* 10302fe2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10302fe3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10302fe4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10302fe5 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10302fe9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10302fea push -2 */ { u32 v_ = 0xfffffffeu; esp -= 4; M32(esp) = v_; }
  /* 10302fec push 0x10302fc0 */ { u32 v_ = 0x10302fc0u; esp -= 4; M32(esp) = v_; }
  /* 10302ff1 push dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10302ff8 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
L_10302fff:;
  /* 10302fff mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 10303003 mov ebx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10303006 mov esi, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); esi = (u32)(M32(m_)); }
  /* 10303009 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030300c je 0x1030303c */ if (ZF_) goto L_1030303c;
  /* 1030300e cmp esi, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303012 je 0x1030303c */ if (ZF_) goto L_1030303c;
  /* 10303014 lea esi, [esi + esi*2] */ esi = (u32)((u32)(esi + esi * 2u));
  /* 10303017 mov ecx, dword ptr [ebx + esi*4] */ { const u32 m_ = (u32)(ebx + esi * 4u); ecx = (u32)(M32(m_)); }
  /* 1030301a mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 1030301e mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 10303021 cmp dword ptr [ebx + esi*4 + 4], 0 */ { const u32 m_ = (u32)(ebx + esi * 4u + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303026 jne 0x1030303a */ if (!ZF_) goto L_1030303a;
  /* 10303028 push 0x101 */ { u32 v_ = 0x101u; esp -= 4; M32(esp) = v_; }
  /* 1030302d mov eax, dword ptr [ebx + esi*4 + 8] */ { const u32 m_ = (u32)(ebx + esi * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10303031 call 0x10303076 */ esp -= 4; M32(esp) = 0x10303036u; SAVEALL; F_10303076(c); ABI_CHECK(0x10303076u, 0x10303031u); RETCHK(0x10303036u, 0x10303031u); LOADALL;
  /* 10303036 call dword ptr [ebx + esi*4 + 8] */ { const u32 m_ = (u32)(ebx + esi * 4u + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1030303au; SAVEALL; call_ind(c, t_); RETCHK(0x1030303au, 0x10303036u); LOADALL; }
L_1030303a:;
  /* 1030303a jmp 0x10302fff */ goto L_10302fff;
L_1030303c:;
  /* 1030303c pop dword ptr fs:[0] */ { u32 v_ = M32(esp); esp += 4; const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = v_; }
  /* 10303043 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10303046 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10303047 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10303048 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10303049 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030304a(CPU *c) {
  NATIVE_HOOK(0x1030304au) REGS; LOADALL;
L_1030304a:;
  /* 1030304a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030304c mov ecx, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); ecx = (u32)(M32(m_)); }
  /* 10303053 cmp dword ptr [ecx + 4], 0x10302fc0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x10302fc0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030305a jne 0x1030306c */ if (!ZF_) goto L_1030306c;
  /* 1030305c mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 1030305f mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 10303062 cmp dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303065 jne 0x1030306c */ if (!ZF_) goto L_1030306c;
  /* 10303067 mov eax, 1 */ { eax = (u32)(0x1u); }
L_1030306c:;
  /* 1030306c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030306d(CPU *c) {
  NATIVE_HOOK(0x1030306du) REGS; LOADALL;
L_1030306d:;
  /* 1030306d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1030306e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1030306f mov ebx, 0x1030b050 */ { ebx = (u32)(0x1030b050u); }
  /* 10303074 jmp 0x10303080 */ goto L_10303080;
L_10303080:;
  /* 10303080 mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10303083 mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10303086 mov dword ptr [ebx + 0xc], ebp */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ebp); }
  /* 10303089 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030308a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1030308b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10303076(CPU *c) {
  NATIVE_HOOK(0x10303076u) REGS; LOADALL;
L_10303076:;
  /* 10303076 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10303077 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10303078 mov ebx, 0x1030b050 */ { ebx = (u32)(0x1030b050u); }
  /* 1030307d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10303080 mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10303083 mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10303086 mov dword ptr [ebx + 0xc], ebp */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ebp); }
  /* 10303089 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030308a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1030308b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_1030308e(CPU *c) {
  NATIVE_HOOK(0x1030308eu) REGS; LOADALL;
L_1030308e:;
  /* 1030308e push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1030308f mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10303091 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10303094 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303097 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303098 jne 0x1030317e */ if (!ZF_) goto L_1030317e;
  /* 1030309e mov eax, 0x94 */ { eax = (u32)(0x94u); }
  /* 103030a3 call 0x10304df0 */ esp -= 4; M32(esp) = 0x103030a8u; SAVEALL; F_10304df0(c); ABI_CHECK(0x10304df0u, 0x103030a3u); RETCHK(0x103030a8u, 0x103030a3u); LOADALL;
  /* 103030a8 mov esi, esp */ { esi = (u32)(esp); }
  /* 103030aa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103030ab mov dword ptr [esi], 0x94 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x94u); }
  /* 103030b1 call dword ptr [0x10309014] */ { const u32 m_ = (u32)(0x10309014u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103030b7u; SAVEALL; call_ind(c, t_); RETCHK(0x103030b7u, 0x103030b1u); LOADALL; }
  /* 103030b7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103030b9 je 0x103031f3 */ if (ZF_) goto L_103031f3;
  /* 103030bf mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 103030c2 mov dword ptr [0x1030b950], ecx */ { const u32 m_ = (u32)(0x1030b950u); M32(m_) = (u32)(ecx); }
  /* 103030c8 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 103030cb mov dword ptr [0x1030b95c], eax */ { const u32 m_ = (u32)(0x1030b95cu); M32(m_) = (u32)(eax); }
  /* 103030d0 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 103030d3 mov dword ptr [0x1030b960], edx */ { const u32 m_ = (u32)(0x1030b960u); M32(m_) = (u32)(edx); }
  /* 103030d9 mov esi, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); esi = (u32)(M32(m_)); }
  /* 103030dc and esi, 0x7fff */ { u32 a_ = esi, b_ = 0x7fffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 103030e2 cmp ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103030e5 mov dword ptr [0x1030b954], esi */ { const u32 m_ = (u32)(0x1030b954u); M32(m_) = (u32)(esi); }
  /* 103030eb je 0x103030f9 */ if (ZF_) goto L_103030f9;
  /* 103030ed or esi, 0x8000 */ { u32 a_ = esi, b_ = 0x8000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 103030f3 mov dword ptr [0x1030b954], esi */ { const u32 m_ = (u32)(0x1030b954u); M32(m_) = (u32)(esi); }
L_103030f9:;
  /* 103030f9 shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 103030fc add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103030fe push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10303100 mov dword ptr [0x1030b958], eax */ { const u32 m_ = (u32)(0x1030b958u); M32(m_) = (u32)(eax); }
  /* 10303105 call 0x10304d11 */ esp -= 4; M32(esp) = 0x1030310au; SAVEALL; F_10304d11(c); ABI_CHECK(0x10304d11u, 0x10303105u); RETCHK(0x1030310au, 0x10303105u); LOADALL;
  /* 1030310a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030310c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030310d je 0x103031f3 */ if (ZF_) goto L_103031f3;
  /* 10303113 call 0x10304220 */ esp -= 4; M32(esp) = 0x10303118u; SAVEALL; F_10304220(c); ABI_CHECK(0x10304220u, 0x10303113u); RETCHK(0x10303118u, 0x10303113u); LOADALL;
  /* 10303118 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030311a jne 0x10303126 */ if (!ZF_) goto L_10303126;
L_1030311c:;
  /* 1030311c call 0x10304d62 */ esp -= 4; M32(esp) = 0x10303121u; SAVEALL; F_10304d62(c); ABI_CHECK(0x10304d62u, 0x1030311cu); RETCHK(0x10303121u, 0x1030311cu); LOADALL;
  /* 10303121 jmp 0x103031f3 */ goto L_103031f3;
L_10303126:;
  /* 10303126 call 0x10304c6f */ esp -= 4; M32(esp) = 0x1030312bu; SAVEALL; F_10304c6f(c); ABI_CHECK(0x10304c6fu, 0x10303126u); RETCHK(0x1030312bu, 0x10303126u); LOADALL;
  /* 1030312b call dword ptr [0x10309010] */ { const u32 m_ = (u32)(0x10309010u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10303131u; SAVEALL; call_ind(c, t_); RETCHK(0x10303131u, 0x1030312bu); LOADALL; }
  /* 10303131 mov dword ptr [0x1030c174], eax */ { const u32 m_ = (u32)(0x1030c174u); M32(m_) = (u32)(eax); }
  /* 10303136 call 0x10304b4d */ esp -= 4; M32(esp) = 0x1030313bu; SAVEALL; F_10304b4d(c); ABI_CHECK(0x10304b4du, 0x10303136u); RETCHK(0x1030313bu, 0x10303136u); LOADALL;
  /* 1030313b mov dword ptr [0x1030b928], eax */ { const u32 m_ = (u32)(0x1030b928u); M32(m_) = (u32)(eax); }
  /* 10303140 call 0x1030462e */ esp -= 4; M32(esp) = 0x10303145u; SAVEALL; F_1030462e(c); ABI_CHECK(0x1030462eu, 0x10303140u); RETCHK(0x10303145u, 0x10303140u); LOADALL;
  /* 10303145 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303147 jl 0x10303177 */ if (LT_) goto L_10303177;
  /* 10303149 call 0x10304aab */ esp -= 4; M32(esp) = 0x1030314eu; SAVEALL; F_10304aab(c); ABI_CHECK(0x10304aabu, 0x10303149u); RETCHK(0x1030314eu, 0x10303149u); LOADALL;
  /* 1030314e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303150 jl 0x10303172 */ if (LT_) goto L_10303172;
  /* 10303152 call 0x10304878 */ esp -= 4; M32(esp) = 0x10303157u; SAVEALL; F_10304878(c); ABI_CHECK(0x10304878u, 0x10303152u); RETCHK(0x10303157u, 0x10303152u); LOADALL;
  /* 10303157 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303159 jl 0x10303172 */ if (LT_) goto L_10303172;
  /* 1030315b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1030315d call 0x10304426 */ esp -= 4; M32(esp) = 0x10303162u; SAVEALL; F_10304426(c); ABI_CHECK(0x10304426u, 0x1030315du); RETCHK(0x10303162u, 0x1030315du); LOADALL;
  /* 10303162 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303164 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303165 jne 0x10303172 */ if (!ZF_) goto L_10303172;
  /* 10303167 inc dword ptr [0x1030b924] */ { const u32 m_ = (u32)(0x1030b924u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1030316d jmp 0x10303204 */ goto L_10303204;
L_10303172:;
  /* 10303172 call 0x1030482c */ esp -= 4; M32(esp) = 0x10303177u; SAVEALL; F_1030482c(c); ABI_CHECK(0x1030482cu, 0x10303172u); RETCHK(0x10303177u, 0x10303172u); LOADALL;
L_10303177:;
  /* 10303177 call 0x10304009 */ esp -= 4; M32(esp) = 0x1030317cu; SAVEALL; F_10304009(c); ABI_CHECK(0x10304009u, 0x10303177u); RETCHK(0x1030317cu, 0x10303177u); LOADALL;
  /* 1030317c jmp 0x1030311c */ goto L_1030311c;
L_1030317e:;
  /* 1030317e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303180 jne 0x103031ae */ if (!ZF_) goto L_103031ae;
  /* 10303182 cmp dword ptr [0x1030b924], eax */ { const u32 m_ = (u32)(0x1030b924u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303188 jle 0x103031f3 */ if ((ZF_|LT_)) goto L_103031f3;
  /* 1030318a dec dword ptr [0x1030b924] */ { const u32 m_ = (u32)(0x1030b924u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10303190 cmp dword ptr [0x1030b98c], eax */ { const u32 m_ = (u32)(0x1030b98cu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303196 jne 0x1030319d */ if (!ZF_) goto L_1030319d;
  /* 10303198 call 0x10304564 */ esp -= 4; M32(esp) = 0x1030319du; SAVEALL; F_10304564(c); ABI_CHECK(0x10304564u, 0x10303198u); RETCHK(0x1030319du, 0x10303198u); LOADALL;
L_1030319d:;
  /* 1030319d call 0x1030482c */ esp -= 4; M32(esp) = 0x103031a2u; SAVEALL; F_1030482c(c); ABI_CHECK(0x1030482cu, 0x1030319du); RETCHK(0x103031a2u, 0x1030319du); LOADALL;
  /* 103031a2 call 0x10304009 */ esp -= 4; M32(esp) = 0x103031a7u; SAVEALL; F_10304009(c); ABI_CHECK(0x10304009u, 0x103031a2u); RETCHK(0x103031a7u, 0x103031a2u); LOADALL;
  /* 103031a7 call 0x10304d62 */ esp -= 4; M32(esp) = 0x103031acu; SAVEALL; F_10304d62(c); ABI_CHECK(0x10304d62u, 0x103031a7u); RETCHK(0x103031acu, 0x103031a7u); LOADALL;
  /* 103031ac jmp 0x10303204 */ goto L_10303204;
L_103031ae:;
  /* 103031ae cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103031b1 jne 0x103031f7 */ if (!ZF_) goto L_103031f7;
  /* 103031b3 push 0x8c */ { u32 v_ = 0x8cu; esp -= 4; M32(esp) = v_; }
  /* 103031b8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 103031ba call 0x10304573 */ esp -= 4; M32(esp) = 0x103031bfu; SAVEALL; F_10304573(c); ABI_CHECK(0x10304573u, 0x103031bau); RETCHK(0x103031bfu, 0x103031bau); LOADALL;
  /* 103031bf mov esi, eax */ { esi = (u32)(eax); }
  /* 103031c1 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103031c3 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103031c4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103031c5 je 0x103031f3 */ if (ZF_) goto L_103031f3;
  /* 103031c7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103031c8 push dword ptr [0x1030b068] */ { const u32 m_ = (u32)(0x1030b068u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103031ce call dword ptr [0x1030b944] */ { const u32 m_ = (u32)(0x1030b944u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103031d4u; SAVEALL; call_ind(c, t_); RETCHK(0x103031d4u, 0x103031ceu); LOADALL; }
  /* 103031d4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103031d6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103031d7 je 0x103031ed */ if (ZF_) goto L_103031ed;
  /* 103031d9 call 0x10304026 */ esp -= 4; M32(esp) = 0x103031deu; SAVEALL; F_10304026(c); ABI_CHECK(0x10304026u, 0x103031d9u); RETCHK(0x103031deu, 0x103031d9u); LOADALL;
  /* 103031de pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103031df call dword ptr [0x1030900c] */ { const u32 m_ = (u32)(0x1030900cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103031e5u; SAVEALL; call_ind(c, t_); RETCHK(0x103031e5u, 0x103031dfu); LOADALL; }
  /* 103031e5 or dword ptr [esi + 4], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103031e9 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 103031eb jmp 0x10303204 */ goto L_10303204;
L_103031ed:;
  /* 103031ed call 0x10303326 */ esp -= 4; M32(esp) = 0x103031f2u; SAVEALL; F_10303326(c); ABI_CHECK(0x10303326u, 0x103031edu); RETCHK(0x103031f2u, 0x103031edu); LOADALL;
  /* 103031f2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_103031f3:;
  /* 103031f3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103031f5 jmp 0x10303207 */ goto L_10303207;
L_103031f7:;
  /* 103031f7 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103031fa jne 0x10303204 */ if (!ZF_) goto L_10303204;
  /* 103031fc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 103031fe call 0x103041f1 */ esp -= 4; M32(esp) = 0x10303203u; SAVEALL; F_103041f1(c); ABI_CHECK(0x103041f1u, 0x103031feu); RETCHK(0x10303203u, 0x103031feu); LOADALL;
  /* 10303203 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10303204:;
  /* 10303204 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10303206 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_10303207:;
  /* 10303207 lea esp, [ebp - 4] */ esp = (u32)((u32)(ebp + 0xfffffffcu));
  /* 1030320a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030320b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1030320c ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_1030320f(CPU *c) {
  NATIVE_HOOK(0x1030320fu) REGS; LOADALL;
L_1030320f:;
  /* 1030320f push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10303211 push 0x10309168 */ { u32 v_ = 0x10309168u; esp -= 4; M32(esp) = v_; }
  /* 10303216 call 0x10303548 */ esp -= 4; M32(esp) = 0x1030321bu; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x10303216u); RETCHK(0x1030321bu, 0x10303216u); LOADALL;
  /* 1030321b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1030321d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1030321e mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10303221 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 10303224 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10303226 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303228 jne 0x10303236 */ if (!ZF_) goto L_10303236;
  /* 1030322a cmp dword ptr [0x1030b924], edi */ { const u32 m_ = (u32)(0x1030b924u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303230 je 0x103032e9 */ if (ZF_) goto L_103032e9;
L_10303236:;
  /* 10303236 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 10303239 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030323b je 0x10303242 */ if (ZF_) goto L_10303242;
  /* 1030323d cmp esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303240 jne 0x10303273 */ if (!ZF_) goto L_10303273;
L_10303242:;
  /* 10303242 mov eax, dword ptr [0x1030c178] */ { const u32 m_ = (u32)(0x1030c178u); eax = (u32)(M32(m_)); }
  /* 10303247 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303249 je 0x10303257 */ if (ZF_) goto L_10303257;
  /* 1030324b push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030324e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030324f push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303252 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10303254u; SAVEALL; call_ind(c, t_); RETCHK(0x10303254u, 0x10303252u); LOADALL; }
  /* 10303254 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_10303257:;
  /* 10303257 cmp dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030325a je 0x103032e5 */ if (ZF_) goto L_103032e5;
  /* 10303260 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303263 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303264 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303267 call 0x1030308e */ esp -= 4; M32(esp) = 0x1030326cu; SAVEALL; F_1030308e(c); ABI_CHECK(0x1030308eu, 0x10303267u); RETCHK(0x1030326cu, 0x10303267u); LOADALL;
  /* 1030326c mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 1030326f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303271 je 0x103032e5 */ if (ZF_) goto L_103032e5;
L_10303273:;
  /* 10303273 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 10303276 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10303277 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303278 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030327b call 0x10301000 */ esp -= 4; M32(esp) = 0x10303280u; SAVEALL; F_10301000(c); ABI_CHECK(0x10301000u, 0x1030327bu); RETCHK(0x10303280u, 0x1030327bu); LOADALL;
  /* 10303280 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10303283 cmp esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303286 jne 0x10303296 */ if (!ZF_) goto L_10303296;
  /* 10303288 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030328a jne 0x10303296 */ if (!ZF_) goto L_10303296;
  /* 1030328c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1030328d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030328e push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303291 call 0x1030308e */ esp -= 4; M32(esp) = 0x10303296u; SAVEALL; F_1030308e(c); ABI_CHECK(0x1030308eu, 0x10303291u); RETCHK(0x10303296u, 0x10303291u); LOADALL;
L_10303296:;
  /* 10303296 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303298 je 0x1030329f */ if (ZF_) goto L_1030329f;
  /* 1030329a cmp esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030329d jne 0x103032c8 */ if (!ZF_) goto L_103032c8;
L_1030329f:;
  /* 1030329f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103032a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103032a1 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103032a4 call 0x1030308e */ esp -= 4; M32(esp) = 0x103032a9u; SAVEALL; F_1030308e(c); ABI_CHECK(0x1030308eu, 0x103032a4u); RETCHK(0x103032a9u, 0x103032a4u); LOADALL;
  /* 103032a9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103032ab jne 0x103032b0 */ if (!ZF_) goto L_103032b0;
  /* 103032ad mov dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edi); }
L_103032b0:;
  /* 103032b0 cmp dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103032b3 je 0x103032c8 */ if (ZF_) goto L_103032c8;
  /* 103032b5 mov eax, dword ptr [0x1030c178] */ { const u32 m_ = (u32)(0x1030c178u); eax = (u32)(M32(m_)); }
  /* 103032ba cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103032bc je 0x103032c8 */ if (ZF_) goto L_103032c8;
  /* 103032be push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103032bf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103032c0 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103032c3 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x103032c5u; SAVEALL; call_ind(c, t_); RETCHK(0x103032c5u, 0x103032c3u); LOADALL; }
  /* 103032c5 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_103032c8:;
  /* 103032c8 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103032cc mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 103032cf jmp 0x103032eb */ goto L_103032eb;
L_103032e5:;
  /* 103032e5 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_103032e9:;
  /* 103032e9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_103032eb:;
  /* 103032eb call 0x10303583 */ esp -= 4; M32(esp) = 0x103032f0u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x103032ebu); RETCHK(0x103032f0u, 0x103032ebu); LOADALL;
  /* 103032f0 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_103032d1(CPU *c) {
  NATIVE_HOOK(0x103032d1u) REGS; LOADALL;
L_103032d1:;
  /* 103032d1 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 103032d4 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 103032d6 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 103032d8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103032d9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103032da call 0x10304f91 */ esp -= 4; M32(esp) = 0x103032dfu; SAVEALL; F_10304f91(c); ABI_CHECK(0x10304f91u, 0x103032dau); RETCHK(0x103032dfu, 0x103032dau); LOADALL;
  /* 103032df pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103032e0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103032e1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103032e2(CPU *c) {
  NATIVE_HOOK(0x103032e2u) REGS; LOADALL;
L_103032e2:;
  /* 103032e2 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 103032e5 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103032e9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103032eb call 0x10303583 */ esp -= 4; M32(esp) = 0x103032f0u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x103032ebu); RETCHK(0x103032f0u, 0x103032ebu); LOADALL;
  /* 103032f0 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_103032f3(CPU *c) {
  NATIVE_HOOK(0x103032f3u) REGS; LOADALL;
L_103032f3:;
  /* 103032f3 mov eax, dword ptr [0x1030b930] */ { const u32 m_ = (u32)(0x1030b930u); eax = (u32)(M32(m_)); }
  /* 103032f8 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103032fb je 0x1030330a */ if (ZF_) goto L_1030330a;
  /* 103032fd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103032ff jne 0x1030330f */ if (!ZF_) goto L_1030330f;
  /* 10303301 cmp dword ptr [0x1030b934], 1 */ { const u32 m_ = (u32)(0x1030b934u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303308 jne 0x1030330f */ if (!ZF_) goto L_1030330f;
L_1030330a:;
  /* 1030330a call 0x10305123 */ esp -= 4; M32(esp) = 0x1030330fu; SAVEALL; F_10305123(c); ABI_CHECK(0x10305123u, 0x1030330au); RETCHK(0x1030330fu, 0x1030330au); LOADALL;
L_1030330f:;
  /* 1030330f push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303313 call 0x10304fac */ esp -= 4; M32(esp) = 0x10303318u; SAVEALL; F_10304fac(c); ABI_CHECK(0x10304facu, 0x10303313u); RETCHK(0x10303318u, 0x10303313u); LOADALL;
  /* 10303318 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 1030331d call dword ptr [0x1030b060] */ { const u32 m_ = (u32)(0x1030b060u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10303323u; SAVEALL; call_ind(c, t_); RETCHK(0x10303323u, 0x1030331du); LOADALL; }
  /* 10303323 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303324 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303325 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10303326(CPU *c) {
  NATIVE_HOOK(0x10303326u) REGS; LOADALL;
L_10303326:;
  /* 10303326 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 10303328 push 0x10309178 */ { u32 v_ = 0x10309178u; esp -= 4; M32(esp) = v_; }
  /* 1030332d call 0x10303548 */ esp -= 4; M32(esp) = 0x10303332u; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x1030332du); RETCHK(0x10303332u, 0x1030332du); LOADALL;
  /* 10303332 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10303335 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303337 je 0x10303391 */ if (ZF_) goto L_10303391;
  /* 10303339 cmp dword ptr [0x1030c040], 3 */ { const u32 m_ = (u32)(0x1030c040u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303340 jne 0x10303382 */ if (!ZF_) goto L_10303382;
  /* 10303342 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10303344 call 0x103052af */ esp -= 4; M32(esp) = 0x10303349u; SAVEALL; F_103052af(c); ABI_CHECK(0x103052afu, 0x10303344u); RETCHK(0x10303349u, 0x10303344u); LOADALL;
  /* 10303349 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030334a and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1030334e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030334f call 0x10305328 */ esp -= 4; M32(esp) = 0x10303354u; SAVEALL; F_10305328(c); ABI_CHECK(0x10305328u, 0x1030334fu); RETCHK(0x10303354u, 0x1030334fu); LOADALL;
  /* 10303354 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303355 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10303358 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030335a je 0x10303365 */ if (ZF_) goto L_10303365;
  /* 1030335c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030335d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030335e call 0x10305353 */ esp -= 4; M32(esp) = 0x10303363u; SAVEALL; F_10305353(c); ABI_CHECK(0x10305353u, 0x1030335eu); RETCHK(0x10303363u, 0x1030335eu); LOADALL;
  /* 10303363 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303364 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_10303365:;
  /* 10303365 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10303369 call 0x10303379 */ esp -= 4; M32(esp) = 0x1030336eu; SAVEALL; F_10303379(c); ABI_CHECK(0x10303379u, 0x10303369u); RETCHK(0x1030336eu, 0x10303369u); LOADALL;
  /* 1030336e cmp dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303372 jne 0x10303391 */ if (!ZF_) goto L_10303391;
  /* 10303374 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303377 jmp 0x10303383 */ goto L_10303383;
L_10303382:;
  /* 10303382 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_10303383:;
  /* 10303383 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10303385 push dword ptr [0x1030c03c] */ { const u32 m_ = (u32)(0x1030c03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030338b call dword ptr [0x10309018] */ { const u32 m_ = (u32)(0x10309018u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10303391u; SAVEALL; call_ind(c, t_); RETCHK(0x10303391u, 0x1030338bu); LOADALL; }
L_10303391:;
  /* 10303391 call 0x10303583 */ esp -= 4; M32(esp) = 0x10303396u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10303391u); RETCHK(0x10303396u, 0x10303391u); LOADALL;
  /* 10303396 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10303379(CPU *c) {
  NATIVE_HOOK(0x10303379u) REGS; LOADALL;
L_10303379:;
  /* 10303379 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 1030337b call 0x103051fa */ esp -= 4; M32(esp) = 0x10303380u; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x1030337bu); RETCHK(0x10303380u, 0x1030337bu); LOADALL;
  /* 10303380 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303381 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10303397(CPU *c) {
  NATIVE_HOOK(0x10303397u) REGS; LOADALL;
L_10303397:;
  /* 10303397 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10303398 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1030339a sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1030339d mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 103033a2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103033a4 je 0x103033ad */ if (ZF_) goto L_103033ad;
  /* 103033a6 cmp eax, 0xbb40e64e */ { u32 a_ = eax, b_ = 0xbb40e64eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103033ab jne 0x103033fb */ if (!ZF_) goto L_103033fb;
L_103033ad:;
  /* 103033ad push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103033ae lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 103033b1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103033b2 call dword ptr [0x10309028] */ { const u32 m_ = (u32)(0x10309028u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103033b8u; SAVEALL; call_ind(c, t_); RETCHK(0x103033b8u, 0x103033b2u); LOADALL; }
  /* 103033b8 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 103033bb xor esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 103033be call dword ptr [0x10309024] */ { const u32 m_ = (u32)(0x10309024u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103033c4u; SAVEALL; call_ind(c, t_); RETCHK(0x103033c4u, 0x103033beu); LOADALL; }
  /* 103033c4 xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 103033c6 call dword ptr [0x1030900c] */ { const u32 m_ = (u32)(0x1030900cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103033ccu; SAVEALL; call_ind(c, t_); RETCHK(0x103033ccu, 0x103033c6u); LOADALL; }
  /* 103033cc xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 103033ce call dword ptr [0x10309020] */ { const u32 m_ = (u32)(0x10309020u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103033d4u; SAVEALL; call_ind(c, t_); RETCHK(0x103033d4u, 0x103033ceu); LOADALL; }
  /* 103033d4 xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 103033d6 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 103033d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103033da call dword ptr [0x1030901c] */ { const u32 m_ = (u32)(0x1030901cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x103033e0u; SAVEALL; call_ind(c, t_); RETCHK(0x103033e0u, 0x103033dau); LOADALL; }
  /* 103033e0 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 103033e3 xor eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103033e6 xor esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 103033e8 mov dword ptr [0x1030b040], esi */ { const u32 m_ = (u32)(0x1030b040u); M32(m_) = (u32)(esi); }
  /* 103033ee jne 0x103033fa */ if (!ZF_) goto L_103033fa;
  /* 103033f0 mov dword ptr [0x1030b040], 0xbb40e64e */ { const u32 m_ = (u32)(0x1030b040u); M32(m_) = (u32)(0xbb40e64eu); }
L_103033fa:;
  /* 103033fa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_103033fb:;
  /* 103033fb leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 103033fc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103033fd(CPU *c) {
  NATIVE_HOOK(0x103033fdu) REGS; LOADALL;
L_103033fd:;
  /* 103033fd push 0x118 */ { u32 v_ = 0x118u; esp -= 4; M32(esp) = v_; }
  /* 10303402 push 0x10309370 */ { u32 v_ = 0x10309370u; esp -= 4; M32(esp) = v_; }
  /* 10303407 call 0x10303548 */ esp -= 4; M32(esp) = 0x1030340cu; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x10303407u); RETCHK(0x1030340cu, 0x10303407u); LOADALL;
  /* 1030340c mov eax, dword ptr [0x1030b040] */ { const u32 m_ = (u32)(0x1030b040u); eax = (u32)(M32(m_)); }
  /* 10303411 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10303414 mov eax, dword ptr [0x1030b938] */ { const u32 m_ = (u32)(0x1030b938u); eax = (u32)(M32(m_)); }
  /* 10303419 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 1030341b cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030341d je 0x1030343e */ if (ZF_) goto L_1030343e;
  /* 1030341f mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 10303422 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303425 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303428 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x1030342au; SAVEALL; call_ind(c, t_); RETCHK(0x1030342au, 0x10303428u); LOADALL; }
  /* 1030342a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030342b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030342c or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10303430 jmp 0x1030353d */ goto L_1030353d;
L_1030343e:;
  /* 1030343e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10303441 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10303442 je 0x1030345a */ if (ZF_) goto L_1030345a;
  /* 10303444 mov edi, 0x1030934c */ { edi = (u32)(0x1030934cu); }
  /* 10303449 mov dword ptr [ebp - 0x128], 0x10309298 */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M32(m_) = (u32)(0x10309298u); }
  /* 10303453 mov esi, 0xd4 */ { esi = (u32)(0xd4u); }
  /* 10303458 jmp 0x1030346e */ goto L_1030346e;
L_1030345a:;
  /* 1030345a mov edi, 0x10309278 */ { edi = (u32)(0x10309278u); }
  /* 1030345f mov dword ptr [ebp - 0x128], 0x103091d8 */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M32(m_) = (u32)(0x103091d8u); }
  /* 10303469 mov esi, 0xb9 */ { esi = (u32)(0xb9u); }
L_1030346e:;
  /* 1030346e mov byte ptr [ebp - 0x20], cl */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10303471 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 10303476 lea eax, [ebp - 0x124] */ eax = (u32)((u32)(ebp + 0xfffffedcu));
  /* 1030347c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030347d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1030347e call dword ptr [0x1030902c] */ { const u32 m_ = (u32)(0x1030902cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10303484u; SAVEALL; call_ind(c, t_); RETCHK(0x10303484u, 0x1030347eu); LOADALL; }
  /* 10303484 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303486 jne 0x1030349b */ if (!ZF_) goto L_1030349b;
  /* 10303488 push 0x103091c0 */ { u32 v_ = 0x103091c0u; esp -= 4; M32(esp) = v_; }
  /* 1030348d lea eax, [ebp - 0x124] */ eax = (u32)((u32)(ebp + 0xfffffedcu));
  /* 10303493 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10303494 call 0x10305f00 */ esp -= 4; M32(esp) = 0x10303499u; SAVEALL; F_10305f00(c); ABI_CHECK(0x10305f00u, 0x10303494u); RETCHK(0x10303499u, 0x10303494u); LOADALL;
  /* 10303499 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030349a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_1030349b:;
  /* 1030349b lea ebx, [ebp - 0x124] */ ebx = (u32)((u32)(ebp + 0xfffffedcu));
  /* 103034a1 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 103034a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103034a4 call 0x10306000 */ esp -= 4; M32(esp) = 0x103034a9u; SAVEALL; F_10306000(c); ABI_CHECK(0x10306000u, 0x103034a4u); RETCHK(0x103034a9u, 0x103034a4u); LOADALL;
  /* 103034a9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103034aa add eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103034ad cmp eax, 0x3c */ { u32 a_ = eax, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103034b0 jbe 0x103034d7 */ if ((CF_|ZF_)) goto L_103034d7;
  /* 103034b2 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 103034b4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 103034b5 call 0x10306000 */ esp -= 4; M32(esp) = 0x103034bau; SAVEALL; F_10306000(c); ABI_CHECK(0x10306000u, 0x103034b5u); RETCHK(0x103034bau, 0x103034b5u); LOADALL;
  /* 103034ba mov ebx, eax */ { ebx = (u32)(eax); }
  /* 103034bc lea eax, [ebp - 0x124] */ eax = (u32)((u32)(ebp + 0xfffffedcu));
  /* 103034c2 sub eax, 0x31 */ { u32 a_ = eax, b_ = 0x31u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103034c5 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 103034c7 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 103034c9 push 0x103091bc */ { u32 v_ = 0x103091bcu; esp -= 4; M32(esp) = v_; }
  /* 103034ce push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103034cf call 0x10302a90 */ esp -= 4; M32(esp) = 0x103034d4u; SAVEALL; F_10302a90(c); ABI_CHECK(0x10302a90u, 0x103034cfu); RETCHK(0x103034d4u, 0x103034cfu); LOADALL;
  /* 103034d4 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_103034d7:;
  /* 103034d7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103034d8 call 0x10306000 */ esp -= 4; M32(esp) = 0x103034ddu; SAVEALL; F_10306000(c); ABI_CHECK(0x10306000u, 0x103034d8u); RETCHK(0x103034ddu, 0x103034d8u); LOADALL;
  /* 103034dd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103034de lea eax, [eax + esi + 0xc] */ eax = (u32)((u32)(eax + esi + 0xcu));
  /* 103034e2 add eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103034e5 and eax, 0xfffffffc */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103034e8 call 0x10304df0 */ esp -= 4; M32(esp) = 0x103034edu; SAVEALL; F_10304df0(c); ABI_CHECK(0x10304df0u, 0x103034e8u); RETCHK(0x103034edu, 0x103034e8u); LOADALL;
  /* 103034ed mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 103034f0 mov esi, esp */ { esi = (u32)(esp); }
  /* 103034f2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103034f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103034f4 call 0x10305f00 */ esp -= 4; M32(esp) = 0x103034f9u; SAVEALL; F_10305f00(c); ABI_CHECK(0x10305f00u, 0x103034f4u); RETCHK(0x103034f9u, 0x103034f4u); LOADALL;
  /* 103034f9 mov edi, 0x103091b8 */ { edi = (u32)(0x103091b8u); }
  /* 103034fe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103034ff push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303500 call 0x10305f10 */ esp -= 4; M32(esp) = 0x10303505u; SAVEALL; F_10305f10(c); ABI_CHECK(0x10305f10u, 0x10303500u); RETCHK(0x10303505u, 0x10303500u); LOADALL;
  /* 10303505 push 0x103091ac */ { u32 v_ = 0x103091acu; esp -= 4; M32(esp) = v_; }
  /* 1030350a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1030350b call 0x10305f10 */ esp -= 4; M32(esp) = 0x10303510u; SAVEALL; F_10305f10(c); ABI_CHECK(0x10305f10u, 0x1030350bu); RETCHK(0x10303510u, 0x1030350bu); LOADALL;
  /* 10303510 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10303511 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303512 call 0x10305f10 */ esp -= 4; M32(esp) = 0x10303517u; SAVEALL; F_10305f10(c); ABI_CHECK(0x10305f10u, 0x10303512u); RETCHK(0x10303517u, 0x10303512u); LOADALL;
  /* 10303517 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10303518 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303519 call 0x10305f10 */ esp -= 4; M32(esp) = 0x1030351eu; SAVEALL; F_10305f10(c); ABI_CHECK(0x10305f10u, 0x10303519u); RETCHK(0x1030351eu, 0x10303519u); LOADALL;
  /* 1030351e push dword ptr [ebp - 0x128] */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303524 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303525 call 0x10305f10 */ esp -= 4; M32(esp) = 0x1030352au; SAVEALL; F_10305f10(c); ABI_CHECK(0x10305f10u, 0x10303525u); RETCHK(0x1030352au, 0x10303525u); LOADALL;
  /* 1030352a push 0x12010 */ { u32 v_ = 0x12010u; esp -= 4; M32(esp) = v_; }
  /* 1030352f push 0x10309184 */ { u32 v_ = 0x10309184u; esp -= 4; M32(esp) = v_; }
  /* 10303534 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303535 call 0x10305e03 */ esp -= 4; M32(esp) = 0x1030353au; SAVEALL; F_10305e03(c); ABI_CHECK(0x10305e03u, 0x10303535u); RETCHK(0x1030353au, 0x10303535u); LOADALL;
  /* 1030353a add esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_1030353d:;
  /* 1030353d push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 1030353f call 0x10304553 */ esp -= 4; M32(esp) = 0x10303544u; SAVEALL; F_10304553(c); ABI_CHECK(0x10304553u, 0x1030353fu); RETCHK(0x10303544u, 0x1030353fu); LOADALL;
  /* 10303544 int3 */ TRAP(0x10303544u, "int3");
}

void F_10303435(CPU *c) {
  NATIVE_HOOK(0x10303435u) REGS; LOADALL;
L_10303435:;
  /* 10303435 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10303437 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10303438 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10303439(CPU *c) {
  NATIVE_HOOK(0x10303439u) REGS; LOADALL;
  goto L_10303439;
L_1030342c:;
  /* 1030342c or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10303430 jmp 0x1030353d */ goto L_1030353d;
L_10303439:;
  /* 10303439 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 1030343c jmp 0x1030342c */ goto L_1030342c;
L_1030353d:;
  /* 1030353d push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 1030353f call 0x10304553 */ esp -= 4; M32(esp) = 0x10303544u; SAVEALL; F_10304553(c); ABI_CHECK(0x10304553u, 0x1030353fu); RETCHK(0x10303544u, 0x1030353fu); LOADALL;
  /* 10303544 int3 */ TRAP(0x10303544u, "int3");
}

void F_10303548(CPU *c) {
  NATIVE_HOOK(0x10303548u) REGS; LOADALL;
L_10303548:;
  /* 10303548 push 0x1030359c */ { u32 v_ = 0x1030359cu; esp -= 4; M32(esp) = v_; }
  /* 1030354d mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10303553 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10303554 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10303558 mov dword ptr [esp + 0x10], ebp */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebp); }
  /* 1030355c lea ebp, [esp + 0x10] */ ebp = (u32)((u32)(esp + 0x10u));
  /* 10303560 sub esp, eax */ { u32 a_ = esp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10303562 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10303563 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303564 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10303565 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 10303568 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 1030356b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030356c mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 1030356f mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 10303576 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 10303579 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 1030357c mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 10303582 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10303583(CPU *c) {
  NATIVE_HOOK(0x10303583u) REGS; LOADALL;
L_10303583:;
  /* 10303583 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 10303586 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 1030358d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030358e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030358f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10303590 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10303591 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 10303592 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10303593 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030359c(CPU *c) {
  NATIVE_HOOK(0x1030359cu) REGS; LOADALL;
L_1030359c:;
  /* 1030359c push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1030359d mov ebp, esp */ { ebp = (u32)(esp); }
  /* 1030359f sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 103035a2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103035a3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103035a4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 103035a5 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 103035a6 cld */ c->df = 0;
  /* 103035a7 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 103035aa mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103035ad test dword ptr [eax + 4], 6 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103035b4 jne 0x10303665 */ if (!ZF_) goto L_10303665;
  /* 103035ba mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 103035bd mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 103035c0 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 103035c3 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 103035c6 mov dword ptr [ebx - 4], eax */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 103035c9 mov esi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); esi = (u32)(M32(m_)); }
  /* 103035cc mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 103035cf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 103035d0 call 0x1030608b */ esp -= 4; M32(esp) = 0x103035d5u; SAVEALL; F_1030608b(c); ABI_CHECK(0x1030608bu, 0x103035d0u); RETCHK(0x103035d5u, 0x103035d0u); LOADALL;
  /* 103035d5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 103035d8 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103035da je 0x10303657 */ if (ZF_) goto L_10303657;
L_103035dc:;
  /* 103035dc cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103035df je 0x1030365e */ if (ZF_) goto L_1030365e;
  /* 103035e1 lea ecx, [esi + esi*2] */ ecx = (u32)((u32)(esi + esi * 2u));
  /* 103035e4 mov eax, dword ptr [edi + ecx*4 + 4] */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x4u); eax = (u32)(M32(m_)); }
  /* 103035e8 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103035ea je 0x10303645 */ if (ZF_) goto L_10303645;
  /* 103035ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103035ed push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 103035ee lea ebp, [ebx + 0x10] */ ebp = (u32)((u32)(ebx + 0x10u));
  /* 103035f1 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 103035f3 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 103035f5 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 103035f7 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 103035f9 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 103035fb call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x103035fdu; SAVEALL; call_ind(c, t_); RETCHK(0x103035fdu, 0x103035fbu); LOADALL; }
  /* 103035fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 103035fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103035ff mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10303602 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10303604 je 0x10303645 */ if (ZF_) goto L_10303645;
  /* 10303606 js 0x10303650 */ if (SF_) goto L_10303650;
  /* 10303608 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 1030360b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1030360c call 0x10302fa0 */ esp -= 4; M32(esp) = 0x10303611u; SAVEALL; F_10302fa0(c); ABI_CHECK(0x10302fa0u, 0x1030360cu); RETCHK(0x10303611u, 0x1030360cu); LOADALL;
  /* 10303611 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10303614 lea ebp, [ebx + 0x10] */ ebp = (u32)((u32)(ebx + 0x10u));
  /* 10303617 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303618 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10303619 call 0x10302fe2 */ esp -= 4; M32(esp) = 0x1030361eu; SAVEALL; F_10302fe2(c); ABI_CHECK(0x10302fe2u, 0x10303619u); RETCHK(0x1030361eu, 0x10303619u); LOADALL;
  /* 1030361e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10303621 lea ecx, [esi + esi*2] */ ecx = (u32)((u32)(esi + esi * 2u));
  /* 10303624 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 10303626 mov eax, dword ptr [edi + ecx*4 + 8] */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030362a call 0x10303076 */ esp -= 4; M32(esp) = 0x1030362fu; SAVEALL; F_10303076(c); ABI_CHECK(0x10303076u, 0x1030362au); RETCHK(0x1030362fu, 0x1030362au); LOADALL;
  /* 1030362f mov eax, dword ptr [edi + ecx*4] */ { const u32 m_ = (u32)(edi + ecx * 4u); eax = (u32)(M32(m_)); }
  /* 10303632 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 10303635 mov eax, dword ptr [edi + ecx*4 + 8] */ { const u32 m_ = (u32)(edi + ecx * 4u + 0x8u); eax = (u32)(M32(m_)); }
  /* 10303639 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 1030363b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 1030363d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 1030363f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10303641 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10303643 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x10303645u; SAVEALL; call_ind(c, t_); RETCHK(0x10303645u, 0x10303643u); LOADALL; }
L_10303645:;
  /* 10303645 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 10303648 lea ecx, [esi + esi*2] */ ecx = (u32)((u32)(esi + esi * 2u));
  /* 1030364b mov esi, dword ptr [edi + ecx*4] */ { const u32 m_ = (u32)(edi + ecx * 4u); esi = (u32)(M32(m_)); }
  /* 1030364e jmp 0x103035dc */ goto L_103035dc;
L_10303650:;
  /* 10303650 mov eax, 0 */ { eax = (u32)(0x0u); }
  /* 10303655 jmp 0x1030367a */ goto L_1030367a;
L_10303657:;
  /* 10303657 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 1030365a or dword ptr [eax + 4], 8 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_1030365e:;
  /* 1030365e mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 10303663 jmp 0x1030367a */ goto L_1030367a;
L_10303665:;
  /* 10303665 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10303666 lea ebp, [ebx + 0x10] */ ebp = (u32)((u32)(ebx + 0x10u));
  /* 10303669 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 1030366b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1030366c call 0x10302fe2 */ esp -= 4; M32(esp) = 0x10303671u; SAVEALL; F_10302fe2(c); ABI_CHECK(0x10302fe2u, 0x1030366cu); RETCHK(0x10303671u, 0x1030366cu); LOADALL;
  /* 10303671 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10303674 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10303675 mov eax, 1 */ { eax = (u32)(0x1u); }
L_1030367a:;
  /* 1030367a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1030367b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1030367c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1030367d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1030367e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10303680 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10303681 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030369d(CPU *c) {
  NATIVE_HOOK(0x1030369du) REGS; LOADALL;
L_1030369d:;
  /* 1030369d push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 1030369f push 0x10309380 */ { u32 v_ = 0x10309380u; esp -= 4; M32(esp) = v_; }
  /* 103036a4 call 0x10303548 */ esp -= 4; M32(esp) = 0x103036a9u; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x103036a4u); RETCHK(0x103036a9u, 0x103036a4u); LOADALL;
  /* 103036a9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 103036ac cmp dword ptr [0x1030c040], 3 */ { const u32 m_ = (u32)(0x1030c040u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103036b3 jne 0x103036e3 */ if (!ZF_) goto L_103036e3;
  /* 103036b5 cmp esi, dword ptr [0x1030c02c] */ { const u32 m_ = (u32)(0x1030c02cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103036bb ja 0x103036e3 */ if (!(CF_|ZF_)) goto L_103036e3;
  /* 103036bd push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 103036bf call 0x103052af */ esp -= 4; M32(esp) = 0x103036c4u; SAVEALL; F_103052af(c); ABI_CHECK(0x103052afu, 0x103036bfu); RETCHK(0x103036c4u, 0x103036bfu); LOADALL;
  /* 103036c4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103036c5 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103036c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103036ca call 0x10305b07 */ esp -= 4; M32(esp) = 0x103036cfu; SAVEALL; F_10305b07(c); ABI_CHECK(0x10305b07u, 0x103036cau); RETCHK(0x103036cfu, 0x103036cau); LOADALL;
  /* 103036cf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 103036d0 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 103036d3 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103036d7 call 0x1030370f */ esp -= 4; M32(esp) = 0x103036dcu; SAVEALL; F_1030370f(c); ABI_CHECK(0x1030370fu, 0x103036d7u); RETCHK(0x103036dcu, 0x103036d7u); LOADALL;
  /* 103036dc mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 103036df test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103036e1 jne 0x10303706 */ if (!ZF_) goto L_10303706;
L_103036e3:;
  /* 103036e3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103036e5 jne 0x103036e8 */ if (!ZF_) goto L_103036e8;
  /* 103036e7 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_103036e8:;
  /* 103036e8 cmp dword ptr [0x1030c040], 1 */ { const u32 m_ = (u32)(0x1030c040u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103036ef je 0x103036f7 */ if (ZF_) goto L_103036f7;
  /* 103036f1 add esi, 0xf */ { u32 a_ = esi, b_ = 0xfu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 103036f4 and esi, 0xfffffff0 */ { u32 a_ = esi, b_ = 0xfffffff0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_103036f7:;
  /* 103036f7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103036f8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 103036fa push dword ptr [0x1030c03c] */ { const u32 m_ = (u32)(0x1030c03cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303700 call dword ptr [0x10309030] */ { const u32 m_ = (u32)(0x10309030u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10303706u; SAVEALL; call_ind(c, t_); RETCHK(0x10303706u, 0x10303700u); LOADALL; }
L_10303706:;
  /* 10303706 call 0x10303583 */ esp -= 4; M32(esp) = 0x1030370bu; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10303706u); RETCHK(0x1030370bu, 0x10303706u); LOADALL;
  /* 1030370b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030370c(CPU *c) {
  NATIVE_HOOK(0x1030370cu) REGS; LOADALL;
L_1030370c:;
  /* 1030370c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 1030370f push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10303711 call 0x103051fa */ esp -= 4; M32(esp) = 0x10303716u; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x10303711u); RETCHK(0x10303716u, 0x10303711u); LOADALL;
  /* 10303716 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303717 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030370f(CPU *c) {
  NATIVE_HOOK(0x1030370fu) REGS; LOADALL;
L_1030370f:;
  /* 1030370f push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 10303711 call 0x103051fa */ esp -= 4; M32(esp) = 0x10303716u; SAVEALL; F_103051fa(c); ABI_CHECK(0x103051fau, 0x10303711u); RETCHK(0x10303716u, 0x10303711u); LOADALL;
  /* 10303716 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303717 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10303718(CPU *c) {
  NATIVE_HOOK(0x10303718u) REGS; LOADALL;
L_10303718:;
  /* 10303718 cmp dword ptr [esp + 4], -0x20 */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = M32(m_), b_ = 0xffffffe0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030371d ja 0x10303741 */ if (!(CF_|ZF_)) goto L_10303741;
L_1030371f:;
  /* 1030371f push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303723 call 0x1030369d */ esp -= 4; M32(esp) = 0x10303728u; SAVEALL; F_1030369d(c); ABI_CHECK(0x1030369du, 0x10303723u); RETCHK(0x10303728u, 0x10303723u); LOADALL;
  /* 10303728 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030372a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030372b jne 0x10303743 */ if (!ZF_) goto L_10303743;
  /* 1030372d cmp dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303731 je 0x10303743 */ if (ZF_) goto L_10303743;
  /* 10303733 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303737 call 0x103062b4 */ esp -= 4; M32(esp) = 0x1030373cu; SAVEALL; F_103062b4(c); ABI_CHECK(0x103062b4u, 0x10303737u); RETCHK(0x1030373cu, 0x10303737u); LOADALL;
  /* 1030373c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030373e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030373f jne 0x1030371f */ if (!ZF_) goto L_1030371f;
L_10303741:;
  /* 10303741 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_10303743:;
  /* 10303743 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10303744(CPU *c) {
  NATIVE_HOOK(0x10303744u) REGS; LOADALL;
L_10303744:;
  /* 10303744 push dword ptr [0x1030bc60] */ { const u32 m_ = (u32)(0x1030bc60u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030374a push dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030374e call 0x10303718 */ esp -= 4; M32(esp) = 0x10303753u; SAVEALL; F_10303718(c); ABI_CHECK(0x10303718u, 0x1030374eu); RETCHK(0x10303753u, 0x1030374eu); LOADALL;
  /* 10303753 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303754 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303755 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10303756(CPU *c) {
  NATIVE_HOOK(0x10303756u) REGS; LOADALL;
L_10303756:;
  /* 10303756 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 10303759 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1030375b je 0x103037a1 */ if (ZF_) goto L_103037a1;
  /* 1030375d lea edx, [eax + 8] */ edx = (u32)((u32)(eax + 0x8u));
  /* 10303760 cmp byte ptr [edx], 0 */ { const u32 m_ = (u32)(edx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10303763 je 0x103037a1 */ if (ZF_) goto L_103037a1;
  /* 10303765 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10303768 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030376a je 0x1030377c */ if (ZF_) goto L_1030377c;
  /* 1030376c add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1030376f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10303770 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10303771 call 0x10306340 */ esp -= 4; M32(esp) = 0x10303776u; SAVEALL; F_10306340(c); ABI_CHECK(0x10306340u, 0x10303771u); RETCHK(0x10303776u, 0x10303771u); LOADALL;
  /* 10303776 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10303778 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303779 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1030377a jne 0x1030379e */ if (!ZF_) goto L_1030379e;
L_1030377c:;
  /* 1030377c test byte ptr [edi], 2 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1030377f je 0x10303786 */ if (ZF_) goto L_10303786;
  /* 10303781 test byte ptr [esi], 8 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10303784 je 0x1030379e */ if (ZF_) goto L_1030379e;
L_10303786:;
  /* 10303786 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 1030378a mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 1030378c test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1030378e je 0x10303795 */ if (ZF_) goto L_10303795;
  /* 10303790 test byte ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10303793 je 0x1030379e */ if (ZF_) goto L_1030379e;
L_10303795:;
  /* 10303795 test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10303797 je 0x103037a1 */ if (ZF_) goto L_103037a1;
  /* 10303799 test byte ptr [esi], 2 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1030379c jne 0x103037a1 */ if (!ZF_) goto L_103037a1;
L_1030379e:;
  /* 1030379e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103037a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103037a1:;
  /* 103037a1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103037a3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103037a4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103037a5(CPU *c) {
  NATIVE_HOOK(0x103037a5u) REGS; LOADALL;
L_103037a5:;
  /* 103037a5 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 103037a7 cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103037ad je 0x103037b2 */ if (ZF_) goto L_103037b2;
  /* 103037af xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103037b1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_103037b2:;
  /* 103037b2 call 0x10304039 */ esp -= 4; M32(esp) = 0x103037b7u; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x103037b2u); RETCHK(0x103037b7u, 0x103037b2u); LOADALL;
  /* 103037b7 and dword ptr [eax + 0x84], 0 */ { const u32 m_ = (u32)(eax + 0x84u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103037be jmp 0x1030430f */ SAVEALL; F_1030430f(c); return;
}

void F_103037c3(CPU *c) {
  NATIVE_HOOK(0x103037c3u) REGS; LOADALL;
L_103037c3:;
  /* 103037c3 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 103037c5 push 0x10309390 */ { u32 v_ = 0x10309390u; esp -= 4; M32(esp) = v_; }
  /* 103037ca call 0x10303548 */ esp -= 4; M32(esp) = 0x103037cfu; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x103037cau); RETCHK(0x103037cfu, 0x103037cau); LOADALL;
  /* 103037cf mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 103037d2 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 103037d5 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 103037d8 call 0x10304039 */ esp -= 4; M32(esp) = 0x103037ddu; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x103037d8u); RETCHK(0x103037ddu, 0x103037d8u); LOADALL;
  /* 103037dd add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103037e2 inc dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 103037e4 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103037e8 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
L_103037eb:;
  /* 103037eb cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103037ee je 0x10303854 */ if (ZF_) goto L_10303854;
  /* 103037f0 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103037f3 jle 0x103037fa */ if ((ZF_|LT_)) goto L_103037fa;
  /* 103037f5 cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103037f8 jl 0x103037ff */ if (LT_) goto L_103037ff;
L_103037fa:;
  /* 103037fa call 0x10304344 */ esp -= 4; M32(esp) = 0x103037ffu; SAVEALL; F_10304344(c); ABI_CHECK(0x10304344u, 0x103037fau); RETCHK(0x103037ffu, 0x103037fau); LOADALL;
L_103037ff:;
  /* 103037ff mov eax, esi */ { eax = (u32)(esi); }
  /* 10303801 shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10303804 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10303807 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10303809 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 1030380b mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 1030380e mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 10303815 cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303819 je 0x10303830 */ if (ZF_) goto L_10303830;
  /* 1030381b mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 1030381e push 0x103 */ { u32 v_ = 0x103u; esp -= 4; M32(esp) = v_; }
  /* 10303823 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10303824 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10303827 push dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030382b call 0x10304380 */ esp -= 4; M32(esp) = 0x10303830u; SAVEALL; F_10304380(c); ABI_CHECK(0x10304380u, 0x1030382bu); RETCHK(0x10303830u, 0x1030382bu); LOADALL;
L_10303830:;
  /* 10303830 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10303834 jmp 0x1030384f */ goto L_1030384f;
L_1030384f:;
  /* 1030384f mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 10303852 jmp 0x103037eb */ goto L_103037eb;
L_10303854:;
  /* 10303854 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10303858 call 0x10303876 */ esp -= 4; M32(esp) = 0x1030385du; SAVEALL; F_10303876(c); ABI_CHECK(0x10303876u, 0x10303858u); RETCHK(0x1030385du, 0x10303858u); LOADALL;
  /* 1030385d cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303860 je 0x10303867 */ if (ZF_) goto L_10303867;
  /* 10303862 call 0x10304344 */ esp -= 4; M32(esp) = 0x10303867u; SAVEALL; F_10304344(c); ABI_CHECK(0x10304344u, 0x10303862u); RETCHK(0x10303867u, 0x10303862u); LOADALL;
L_10303867:;
  /* 10303867 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 1030386a call 0x10303583 */ esp -= 4; M32(esp) = 0x1030386fu; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x1030386au); RETCHK(0x1030386fu, 0x1030386au); LOADALL;
  /* 1030386f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10303836(CPU *c) {
  NATIVE_HOOK(0x10303836u) REGS; LOADALL;
L_10303836:;
  /* 10303836 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10303839 call 0x103037a5 */ esp -= 4; M32(esp) = 0x1030383eu; SAVEALL; F_103037a5(c); ABI_CHECK(0x103037a5u, 0x10303839u); RETCHK(0x1030383eu, 0x10303839u); LOADALL;
  /* 1030383e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1030383f(CPU *c) {
  NATIVE_HOOK(0x1030383fu) REGS; LOADALL;
  goto L_1030383f;
L_103037eb:;
  /* 103037eb cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103037ee je 0x10303854 */ if (ZF_) goto L_10303854;
  /* 103037f0 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103037f3 jle 0x103037fa */ if ((ZF_|LT_)) goto L_103037fa;
  /* 103037f5 cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103037f8 jl 0x103037ff */ if (LT_) goto L_103037ff;
L_103037fa:;
  /* 103037fa call 0x10304344 */ esp -= 4; M32(esp) = 0x103037ffu; SAVEALL; F_10304344(c); ABI_CHECK(0x10304344u, 0x103037fau); RETCHK(0x103037ffu, 0x103037fau); LOADALL;
L_103037ff:;
  /* 103037ff mov eax, esi */ { eax = (u32)(esi); }
  /* 10303801 shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 10303804 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10303807 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10303809 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 1030380b mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 1030380e mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 10303815 cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303819 je 0x10303830 */ if (ZF_) goto L_10303830;
  /* 1030381b mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 1030381e push 0x103 */ { u32 v_ = 0x103u; esp -= 4; M32(esp) = v_; }
  /* 10303823 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10303824 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10303827 push dword ptr [ecx + eax + 4] */ { const u32 m_ = (u32)(ecx + eax + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030382b call 0x10304380 */ esp -= 4; M32(esp) = 0x10303830u; SAVEALL; F_10304380(c); ABI_CHECK(0x10304380u, 0x1030382bu); RETCHK(0x10303830u, 0x1030382bu); LOADALL;
L_10303830:;
  /* 10303830 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10303834 jmp 0x1030384f */ goto L_1030384f;
L_1030383f:;
  /* 1030383f mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 10303842 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10303846 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10303849 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 1030384c mov esi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); esi = (u32)(M32(m_)); }
L_1030384f:;
  /* 1030384f mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 10303852 jmp 0x103037eb */ goto L_103037eb;
L_10303854:;
  /* 10303854 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10303858 call 0x10303876 */ esp -= 4; M32(esp) = 0x1030385du; SAVEALL; F_10303876(c); ABI_CHECK(0x10303876u, 0x10303858u); RETCHK(0x1030385du, 0x10303858u); LOADALL;
  /* 1030385d cmp esi, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303860 je 0x10303867 */ if (ZF_) goto L_10303867;
  /* 10303862 call 0x10304344 */ esp -= 4; M32(esp) = 0x10303867u; SAVEALL; F_10304344(c); ABI_CHECK(0x10304344u, 0x10303862u); RETCHK(0x10303867u, 0x10303862u); LOADALL;
L_10303867:;
  /* 10303867 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 1030386a call 0x10303583 */ esp -= 4; M32(esp) = 0x1030386fu; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x1030386au); RETCHK(0x1030386fu, 0x1030386au); LOADALL;
  /* 1030386f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10303870(CPU *c) {
  NATIVE_HOOK(0x10303870u) REGS; LOADALL;
L_10303870:;
  /* 10303870 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 10303873 mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 10303876 call 0x10304039 */ esp -= 4; M32(esp) = 0x1030387bu; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10303876u); RETCHK(0x1030387bu, 0x10303876u); LOADALL;
  /* 1030387b cmp dword ptr [eax + 0x84], 0 */ { const u32 m_ = (u32)(eax + 0x84u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303882 jle 0x10303890 */ if ((ZF_|LT_)) goto L_10303890;
  /* 10303884 call 0x10304039 */ esp -= 4; M32(esp) = 0x10303889u; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10303884u); RETCHK(0x10303889u, 0x10303884u); LOADALL;
  /* 10303889 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1030388e dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10303890:;
  /* 10303890 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10303876(CPU *c) {
  NATIVE_HOOK(0x10303876u) REGS; LOADALL;
L_10303876:;
  /* 10303876 call 0x10304039 */ esp -= 4; M32(esp) = 0x1030387bu; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10303876u); RETCHK(0x1030387bu, 0x10303876u); LOADALL;
  /* 1030387b cmp dword ptr [eax + 0x84], 0 */ { const u32 m_ = (u32)(eax + 0x84u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303882 jle 0x10303890 */ if ((ZF_|LT_)) goto L_10303890;
  /* 10303884 call 0x10304039 */ esp -= 4; M32(esp) = 0x10303889u; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10303884u); RETCHK(0x10303889u, 0x10303884u); LOADALL;
  /* 10303889 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1030388e dec dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_10303890:;
  /* 10303890 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10303891(CPU *c) {
  NATIVE_HOOK(0x10303891u) REGS; LOADALL;
L_10303891:;
  /* 10303891 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 10303893 push 0x103093a8 */ { u32 v_ = 0x103093a8u; esp -= 4; M32(esp) = v_; }
  /* 10303898 call 0x10303548 */ esp -= 4; M32(esp) = 0x1030389du; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x10303898u); RETCHK(0x1030389du, 0x10303898u); LOADALL;
  /* 1030389d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 103038a0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103038a2 je 0x103038bf */ if (ZF_) goto L_103038bf;
  /* 103038a4 mov ecx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 103038a7 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 103038aa test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 103038ac je 0x103038bf */ if (ZF_) goto L_103038bf;
  /* 103038ae and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 103038b2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 103038b3 push dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 103038b6 call 0x10302bf2 */ esp -= 4; M32(esp) = 0x103038bbu; SAVEALL; F_10302bf2(c); ABI_CHECK(0x10302bf2u, 0x103038b6u); RETCHK(0x103038bbu, 0x103038b6u); LOADALL;
  /* 103038bb or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
L_103038bf:;
  /* 103038bf call 0x10303583 */ esp -= 4; M32(esp) = 0x103038c4u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x103038bfu); RETCHK(0x103038c4u, 0x103038bfu); LOADALL;
  /* 103038c4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103038c5(CPU *c) {
  NATIVE_HOOK(0x103038c5u) REGS; LOADALL;
L_103038c5:;
  /* 103038c5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 103038c7 cmp byte ptr [ebp + 0xc], al */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 103038ca setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 103038cd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103038ce(CPU *c) {
  NATIVE_HOOK(0x103038ceu) REGS; LOADALL;
L_103038ce:;
  /* 103038ce mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 103038d1 jmp 0x1030430f */ SAVEALL; F_1030430f(c); return;
}

void F_103038d6(CPU *c) {
  NATIVE_HOOK(0x103038d6u) REGS; LOADALL;
L_103038d6:;
  /* 103038d6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 103038d7 mov esi, eax */ { esi = (u32)(eax); }
  /* 103038d9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 103038db add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 103038dd cmp dword ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103038e1 jl 0x103038f3 */ if (LT_) goto L_103038f3;
  /* 103038e3 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 103038e6 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 103038e9 mov esi, dword ptr [edx + esi] */ { const u32 m_ = (u32)(edx + esi); esi = (u32)(M32(m_)); }
  /* 103038ec mov ecx, dword ptr [esi + ecx] */ { const u32 m_ = (u32)(esi + ecx); ecx = (u32)(M32(m_)); }
  /* 103038ef add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 103038f1 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_103038f3:;
  /* 103038f3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 103038f4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103038f5(CPU *c) {
  NATIVE_HOOK(0x103038f5u) REGS; LOADALL;
L_103038f5:;
  /* 103038f5 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 103038f7 push 0x103093b8 */ { u32 v_ = 0x103093b8u; esp -= 4; M32(esp) = v_; }
  /* 103038fc call 0x10303548 */ esp -= 4; M32(esp) = 0x10303901u; SAVEALL; F_10303548(c); ABI_CHECK(0x10303548u, 0x103038fcu); RETCHK(0x10303901u, 0x103038fcu); LOADALL;
  /* 10303901 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10303903 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10303906 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10303909 mov dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 1030390c and dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10303910 mov eax, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 10303913 mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 10303916 push dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303919 lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 1030391c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1030391d call 0x10302eaf */ esp -= 4; M32(esp) = 0x10303922u; SAVEALL; F_10302eaf(c); ABI_CHECK(0x10302eafu, 0x1030391du); RETCHK(0x10303922u, 0x1030391du); LOADALL;
  /* 10303922 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303923 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10303924 mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 10303927 call 0x10304039 */ esp -= 4; M32(esp) = 0x1030392cu; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10303927u); RETCHK(0x1030392cu, 0x10303927u); LOADALL;
  /* 1030392c mov eax, dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); eax = (u32)(M32(m_)); }
  /* 1030392f mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 10303932 call 0x10304039 */ esp -= 4; M32(esp) = 0x10303937u; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10303932u); RETCHK(0x10303937u, 0x10303932u); LOADALL;
  /* 10303937 mov eax, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); eax = (u32)(M32(m_)); }
  /* 1030393d mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 10303940 call 0x10304039 */ esp -= 4; M32(esp) = 0x10303945u; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10303940u); RETCHK(0x10303945u, 0x10303940u); LOADALL;
  /* 10303945 mov dword ptr [eax + 0x7c], esi */ { const u32 m_ = (u32)(eax + 0x7cu); M32(m_) = (u32)(esi); }
  /* 10303948 call 0x10304039 */ esp -= 4; M32(esp) = 0x1030394du; SAVEALL; F_10304039(c); ABI_CHECK(0x10304039u, 0x10303948u); RETCHK(0x1030394du, 0x10303948u); LOADALL;
  /* 1030394d mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10303950 mov dword ptr [eax + 0x80], ecx */ { const u32 m_ = (u32)(eax + 0x80u); M32(m_) = (u32)(ecx); }
  /* 10303956 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1030395a mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 10303961 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303964 push dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 10303967 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10303968 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 1030396b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1030396c call 0x10302f44 */ esp -= 4; M32(esp) = 0x10303971u; SAVEALL; F_10302f44(c); ABI_CHECK(0x10302f44u, 0x1030396cu); RETCHK(0x10303971u, 0x1030396cu); LOADALL;
  /* 10303971 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10303974 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 10303977 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 1030397b jmp 0x10303a2f */ goto L_10303a2f;
L_10303a2f:;
  /* 10303a2f or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10303a33 call 0x10303a4a */ esp -= 4; M32(esp) = 0x10303a38u; SAVEALL; F_10303a4a(c); ABI_CHECK(0x10303a4au, 0x10303a33u); RETCHK(0x10303a38u, 0x10303a33u); LOADALL;
  /* 10303a38 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 10303a3b call 0x10303583 */ esp -= 4; M32(esp) = 0x10303a40u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10303a3bu); RETCHK(0x10303a40u, 0x10303a3bu); LOADALL;
  /* 10303a40 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10303980(CPU *c) {
  NATIVE_HOOK(0x10303980u) REGS; LOADALL;
L_10303980:;
  /* 10303980 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 10303983 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 10303985 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 10303988 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 1030398b cmp dword ptr [eax], 0xe06d7363 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0xe06d7363u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303991 jne 0x103039c4 */ if (!ZF_) goto L_103039c4;
  /* 10303993 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 10303996 cmp dword ptr [eax + 0x10], 3 */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1030399a jne 0x103039c4 */ if (!ZF_) goto L_103039c4;
  /* 1030399c mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 1030399f cmp dword ptr [eax + 0x14], 0x19930520 */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = 0x19930520u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103039a6 je 0x103039b4 */ if (ZF_) goto L_103039b4;
  /* 103039a8 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 103039ab cmp dword ptr [eax + 0x14], 0x19930521 */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = 0x19930521u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103039b2 jne 0x103039c4 */ if (!ZF_) goto L_103039c4;
L_103039b4:;
  /* 103039b4 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 103039b7 cmp dword ptr [eax + 0x1c], 0 */ { const u32 m_ = (u32)(eax + 0x1cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103039bb mov dword ptr [ebp - 0x24], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x1u); }
  /* 103039c2 je 0x103039cb */ if (ZF_) goto L_103039cb;
L_103039c4:;
  /* 103039c4 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
L_103039cb:;
  /* 103039cb mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 103039ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_103039cf(CPU *c) {
  NATIVE_HOOK(0x103039cfu) REGS; LOADALL;
L_103039cf:;
  /* 103039cf mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 103039d2 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 103039d5 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 103039d8 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 103039db mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 103039de mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 103039e1 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 103039e4 mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 103039e7 mov dword ptr [ebp - 0x2c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edx); }
  /* 103039ea xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_103039ec:;
  /* 103039ec mov dword ptr [ebp - 0x34], edx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edx); }
  /* 103039ef cmp edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 103039f2 jae 0x10303a18 */ if (!CF_) goto L_10303a18;
  /* 103039f4 lea esi, [edx + edx*4] */ esi = (u32)((u32)(edx + edx * 4u));
  /* 103039f7 mov ebx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ebx = (u32)(M32(m_)); }
  /* 103039fa lea esi, [ebx + esi*4] */ esi = (u32)((u32)(ebx + esi * 4u));
  /* 103039fd mov ebx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 10303a00 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303a02 jle 0x10303a41 */ if ((ZF_|LT_)) goto L_10303a41;
  /* 10303a04 cmp eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10303a07 jg 0x10303a41 */ if (!(ZF_|LT_)) goto L_10303a41;
  /* 10303a09 lea eax, [ebx + 1] */ eax = (u32)((u32)(ebx + 0x1u));
  /* 10303a0c mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 10303a0f mov edx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); edx = (u32)(M32(m_)); }
  /* 10303a12 mov eax, dword ptr [edx + eax*8] */ { const u32 m_ = (u32)(edx + eax * 8u); eax = (u32)(M32(m_)); }
  /* 10303a15 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
L_10303a18:;
  /* 10303a18 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10303a19 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10303a1a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10303a1c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10303a1d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10303a1e call 0x103037c3 */ esp -= 4; M32(esp) = 0x10303a23u; SAVEALL; F_103037c3(c); ABI_CHECK(0x103037c3u, 0x10303a1eu); RETCHK(0x10303a23u, 0x10303a1eu); LOADALL;
  /* 10303a23 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10303a26 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 10303a29 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 10303a2c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10303a2f or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10303a33 call 0x10303a4a */ esp -= 4; M32(esp) = 0x10303a38u; SAVEALL; F_10303a4a(c); ABI_CHECK(0x10303a4au, 0x10303a33u); RETCHK(0x10303a38u, 0x10303a33u); LOADALL;
  /* 10303a38 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 10303a3b call 0x10303583 */ esp -= 4; M32(esp) = 0x10303a40u; SAVEALL; F_10303583(c); ABI_CHECK(0x10303583u, 0x10303a3bu); RETCHK(0x10303a40u, 0x10303a3bu); LOADALL;
  /* 10303a40 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_10303a41:;
  /* 10303a41 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10303a42 jmp 0x103039ec */ goto L_103039ec;
}

void F_10303a44(CPU *c) {
  NATIVE_HOOK(0x10303a44u) REGS; LOADALL;
L_10303a44:;
  /* 10303a44 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10303a47 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
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
