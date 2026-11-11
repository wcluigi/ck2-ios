#include "funcs.h"

void F_0050bf30(CPU *c) {
  NATIVE_HOOK(0x50bf30u) REGS; LOADALL;
L_0050bf30:;
  /* 0050bf30 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050bf31 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050bf32 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0050bf34 mov eax, dword ptr [edi + 0x19c] */ { const u32 m_ = (u32)(edi + 0x19cu); eax = (u32)(M32(m_)); }
  /* 0050bf3a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050bf3c je 0x50bf6b */ if (ZF_) goto L_0050bf6b;
  /* 0050bf3e lea eax, [edi + 0x188] */ eax = (u32)((u32)(edi + 0x188u));
  /* 0050bf44 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050bf45 call 0x5075d0 */ esp -= 4; M32(esp) = 0x50bf4au; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x50bf45u); RETCHK(0x50bf4au, 0x50bf45u); LOADALL;
  /* 0050bf4a mov esi, eax */ { esi = (u32)(eax); }
  /* 0050bf4c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050bf4e je 0x50bf6b */ if (ZF_) goto L_0050bf6b;
  /* 0050bf50 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050bf52 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050bf54 call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50bf57u; SAVEALL; call_ind(c, t_); RETCHK(0x50bf57u, 0x50bf54u); LOADALL; }
  /* 0050bf57 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050bf59 je 0x50bf6b */ if (ZF_) goto L_0050bf6b;
  /* 0050bf5b call 0x518bb0 */ esp -= 4; M32(esp) = 0x50bf60u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x50bf5bu); RETCHK(0x50bf60u, 0x50bf5bu); LOADALL;
  /* 0050bf60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050bf61 call 0x5179b0 */ esp -= 4; M32(esp) = 0x50bf66u; SAVEALL; F_005179b0(c); ABI_CHECK(0x5179b0u, 0x50bf61u); RETCHK(0x50bf66u, 0x50bf61u); LOADALL;
  /* 0050bf66 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050bf67 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050bf69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050bf6a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050bf6b:;
  /* 0050bf6b mov esi, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); esi = (u32)(M32(m_)); }
  /* 0050bf6e mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 0050bf70 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050bf72 je 0x50bf8a */ if (ZF_) goto L_0050bf8a;
L_0050bf74:;
  /* 0050bf74 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050bf77 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050bf7a mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050bf7c call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50bf7fu; SAVEALL; call_ind(c, t_); RETCHK(0x50bf7fu, 0x50bf7cu); LOADALL; }
  /* 0050bf7f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050bf81 jne 0x50bf8c */ if (!ZF_) goto L_0050bf8c;
  /* 0050bf83 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0050bf86 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050bf88 jne 0x50bf74 */ if (!ZF_) goto L_0050bf74;
L_0050bf8a:;
  /* 0050bf8a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050bf8c:;
  /* 0050bf8c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050bf8d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050bf8e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050bf90(CPU *c) {
  NATIVE_HOOK(0x50bf90u) REGS; LOADALL;
L_0050bf90:;
  /* 0050bf90 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050bf91 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050bf93 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050bf95 call dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50bf98u; SAVEALL; call_ind(c, t_); RETCHK(0x50bf98u, 0x50bf95u); LOADALL; }
  /* 0050bf98 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050bf9a jne 0x50bfb2 */ if (!ZF_) goto L_0050bfb2;
  /* 0050bf9c call 0x518bb0 */ esp -= 4; M32(esp) = 0x50bfa1u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x50bf9cu); RETCHK(0x50bfa1u, 0x50bf9cu); LOADALL;
  /* 0050bfa1 call 0x5180e0 */ esp -= 4; M32(esp) = 0x50bfa6u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x50bfa1u); RETCHK(0x50bfa6u, 0x50bfa1u); LOADALL;
  /* 0050bfa6 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050bfa8 je 0x50bfb2 */ if (ZF_) goto L_0050bfb2;
  /* 0050bfaa mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0050bfac mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050bfae pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050bfaf jmp dword ptr [edx + 0x50] */ { const u32 m_ = (u32)(edx + 0x50u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0050bfb2:;
  /* 0050bfb2 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050bfb4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050bfb5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050bfc0(CPU *c) {
  NATIVE_HOOK(0x50bfc0u) REGS; LOADALL;
L_0050bfc0:;
  /* 0050bfc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050bfc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050bfc3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050bfc6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050bfc7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050bfc8 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050bfca push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050bfcc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050bfcd lea ecx, [ebx + 0x20] */ ecx = (u32)((u32)(ebx + 0x20u));
  /* 0050bfd0 call 0x404140 */ esp -= 4; M32(esp) = 0x50bfd5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50bfd0u); RETCHK(0x50bfd5u, 0x50bfd0u); LOADALL;
  /* 0050bfd5 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0050bfd8 lea ecx, [ebx + 0x44] */ ecx = (u32)((u32)(ebx + 0x44u));
  /* 0050bfdb lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0050bfde call 0x52cee0 */ esp -= 4; M32(esp) = 0x50bfe3u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x50bfdeu); RETCHK(0x50bfe3u, 0x50bfdeu); LOADALL;
  /* 0050bfe3 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0050bfe6 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050bfe8 je 0x50c0d2 */ if (ZF_) goto L_0050c0d2;
  /* 0050bfee mov edi, 0x63e71c */ { edi = (u32)(0x63e71cu); }
  /* 0050bff3 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0050bff8 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0050bffa repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 0050bffc je 0x50c0d2 */ if (ZF_) goto L_0050c0d2;
  /* 0050c002 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0050c004 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50c009u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50c004u); RETCHK(0x50c009u, 0x50c004u); LOADALL;
  /* 0050c009 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0050c00b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050c00e cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c010 je 0x50c01d */ if (ZF_) goto L_0050c01d;
  /* 0050c012 mov dword ptr [eax], 0x64d178 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64d178u); }
  /* 0050c018 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 0050c01b jmp 0x50c01f */ goto L_0050c01f;
L_0050c01d:;
  /* 0050c01d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050c01f:;
  /* 0050c01f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c021 mov dword ptr [ebx + 0x1c4], eax */ { const u32 m_ = (u32)(ebx + 0x1c4u); M32(m_) = (u32)(eax); }
  /* 0050c027 je 0x50c089 */ if (ZF_) goto L_0050c089;
  /* 0050c029 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0050c02c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050c02d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050c02e call 0x529310 */ esp -= 4; M32(esp) = 0x50c033u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x50c02eu); RETCHK(0x50c033u, 0x50c02eu); LOADALL;
  /* 0050c033 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050c035 jne 0x50c04d */ if (!ZF_) goto L_0050c04d;
  /* 0050c037 mov ecx, dword ptr [ebx + 0x1c4] */ { const u32 m_ = (u32)(ebx + 0x1c4u); ecx = (u32)(M32(m_)); }
  /* 0050c03d cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c03f je 0x50c047 */ if (ZF_) goto L_0050c047;
  /* 0050c041 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050c043 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050c045 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c047u; SAVEALL; call_ind(c, t_); RETCHK(0x50c047u, 0x50c045u); LOADALL; }
L_0050c047:;
  /* 0050c047 mov dword ptr [ebx + 0x1c4], edi */ { const u32 m_ = (u32)(ebx + 0x1c4u); M32(m_) = (u32)(edi); }
L_0050c04d:;
  /* 0050c04d push 0x94 */ { u32 v_ = 0x94u; esp -= 4; M32(esp) = v_; }
  /* 0050c052 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50c057u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50c052u); RETCHK(0x50c057u, 0x50c052u); LOADALL;
  /* 0050c057 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050c05a cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c05c je 0x50c067 */ if (ZF_) goto L_0050c067;
  /* 0050c05e mov esi, eax */ { esi = (u32)(eax); }
  /* 0050c060 call 0x5267c0 */ esp -= 4; M32(esp) = 0x50c065u; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x50c060u); RETCHK(0x50c065u, 0x50c060u); LOADALL;
  /* 0050c065 jmp 0x50c069 */ goto L_0050c069;
L_0050c067:;
  /* 0050c067 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050c069:;
  /* 0050c069 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c06b mov ecx, dword ptr [ebx + 0x1c4] */ { const u32 m_ = (u32)(ebx + 0x1c4u); ecx = (u32)(M32(m_)); }
  /* 0050c071 mov dword ptr [ebx + 0x1c8], eax */ { const u32 m_ = (u32)(ebx + 0x1c8u); M32(m_) = (u32)(eax); }
  /* 0050c077 jne 0x50c093 */ if (!ZF_) goto L_0050c093;
  /* 0050c079 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c07b je 0x50c083 */ if (ZF_) goto L_0050c083;
  /* 0050c07d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050c07f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050c081 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c083u; SAVEALL; call_ind(c, t_); RETCHK(0x50c083u, 0x50c081u); LOADALL; }
L_0050c083:;
  /* 0050c083 mov dword ptr [ebx + 0x1c4], edi */ { const u32 m_ = (u32)(ebx + 0x1c4u); M32(m_) = (u32)(edi); }
L_0050c089:;
  /* 0050c089 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050c08a xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050c08c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c08d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050c08f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c090 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0050c093:;
  /* 0050c093 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c095 je 0x50c0e0 */ if (ZF_) goto L_0050c0e0;
  /* 0050c097 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0050c09a cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c09c je 0x50c0a5 */ if (ZF_) goto L_0050c0a5;
  /* 0050c09e mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
  /* 0050c0a0 mov edx, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); edx = (u32)(M32(m_)); }
  /* 0050c0a3 jmp 0x50c0a7 */ goto L_0050c0a7;
L_0050c0a5:;
  /* 0050c0a5 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_0050c0a7:;
  /* 0050c0a7 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0050c0aa cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c0ac je 0x50c0b5 */ if (ZF_) goto L_0050c0b5;
  /* 0050c0ae mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 0050c0b0 mov ecx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0050c0b3 jmp 0x50c0b7 */ goto L_0050c0b7;
L_0050c0b5:;
  /* 0050c0b5 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_0050c0b7:;
  /* 0050c0b7 mov esi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); esi = (u32)(M32(m_)); }
  /* 0050c0b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c0ba push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050c0bb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050c0bc lea eax, [ebx + 0x44] */ eax = (u32)((u32)(ebx + 0x44u));
  /* 0050c0bf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c0c0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050c0c2 call dword ptr [esi + 0xe0] */ { const u32 m_ = (u32)(esi + 0xe0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c0c8u; SAVEALL; call_ind(c, t_); RETCHK(0x50c0c8u, 0x50c0c2u); LOADALL; }
  /* 0050c0c8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050c0c9 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050c0cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c0cc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050c0ce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c0cf ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0050c0d2:;
  /* 0050c0d2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050c0d4 mov dword ptr [ebx + 0x1c8], eax */ { const u32 m_ = (u32)(ebx + 0x1c8u); M32(m_) = (u32)(eax); }
  /* 0050c0da mov dword ptr [ebx + 0x1c4], eax */ { const u32 m_ = (u32)(ebx + 0x1c4u); M32(m_) = (u32)(eax); }
L_0050c0e0:;
  /* 0050c0e0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050c0e1 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050c0e3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c0e4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050c0e6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c0e7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050c0f0(CPU *c) {
  NATIVE_HOOK(0x50c0f0u) REGS; LOADALL;
L_0050c0f0:;
  /* 0050c0f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050c0f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050c0f3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050c0f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c0f5 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050c0f7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050c0f8 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 0050c0fb jmp 0x50c100 */ goto L_0050c100;
L_0050c100:;
  /* 0050c100 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050c102 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050c103 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050c105 jne 0x50c100 */ if (!ZF_) goto L_0050c100;
  /* 0050c107 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0050c10a sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050c10c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c10d lea edi, [ebx + 0x20] */ edi = (u32)((u32)(ebx + 0x20u));
  /* 0050c110 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050c111 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050c113 call 0x404420 */ esp -= 4; M32(esp) = 0x50c118u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50c113u); RETCHK(0x50c118u, 0x50c113u); LOADALL;
  /* 0050c118 call 0x518bb0 */ esp -= 4; M32(esp) = 0x50c11du; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x50c118u); RETCHK(0x50c11du, 0x50c118u); LOADALL;
  /* 0050c11d call 0x518240 */ esp -= 4; M32(esp) = 0x50c122u; SAVEALL; F_00518240(c); ABI_CHECK(0x518240u, 0x50c11du); RETCHK(0x50c122u, 0x50c11du); LOADALL;
  /* 0050c122 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050c124 mov eax, 0x6427b8 */ { eax = (u32)(0x6427b8u); }
  /* 0050c129 call 0x560ba0 */ esp -= 4; M32(esp) = 0x50c12eu; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x50c129u); RETCHK(0x50c12eu, 0x50c129u); LOADALL;
  /* 0050c12e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050c130 mov eax, 0x651228 */ { eax = (u32)(0x651228u); }
  /* 0050c135 call 0x560ba0 */ esp -= 4; M32(esp) = 0x50c13au; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x50c135u); RETCHK(0x50c13au, 0x50c135u); LOADALL;
  /* 0050c13a mov esi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); esi = (u32)(M32(m_)); }
  /* 0050c13d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c13f je 0x50c17e */ if (ZF_) goto L_0050c17e;
L_0050c141:;
  /* 0050c141 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050c143 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050c145 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c148u; SAVEALL; call_ind(c, t_); RETCHK(0x50c148u, 0x50c145u); LOADALL; }
  /* 0050c148 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c149 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 0050c14e call 0x560ed0 */ esp -= 4; M32(esp) = 0x50c153u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50c14eu); RETCHK(0x50c153u, 0x50c14eu); LOADALL;
  /* 0050c153 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050c155 lea ebx, [ecx + 1] */ ebx = (u32)((u32)(ecx + 0x1u));
L_0050c158:;
  /* 0050c158 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050c15a inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050c15b test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050c15d jne 0x50c158 */ if (!ZF_) goto L_0050c158;
  /* 0050c15f sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050c161 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050c162 mov ecx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0050c165 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c166 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050c167 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050c169 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050c16b call 0x405de0 */ esp -= 4; M32(esp) = 0x50c170u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x50c16bu); RETCHK(0x50c170u, 0x50c16bu); LOADALL;
  /* 0050c170 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c172 je 0x50c17b */ if (ZF_) goto L_0050c17b;
  /* 0050c174 mov esi, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); esi = (u32)(M32(m_)); }
  /* 0050c177 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c179 jne 0x50c141 */ if (!ZF_) goto L_0050c141;
L_0050c17b:;
  /* 0050c17b mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_0050c17e:;
  /* 0050c17e fild dword ptr [0x7a595c] */ { const u32 m_ = (u32)(0x7a595cu); FPUSH((double)(s32)M32(m_)); }
  /* 0050c184 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050c185 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050c187 fmul dword ptr [0x6570fc] */ { const u32 m_ = (u32)(0x6570fcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050c18d fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050c190 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c191 call 0x506f40 */ esp -= 4; M32(esp) = 0x50c196u; SAVEALL; F_00506f40(c); ABI_CHECK(0x506f40u, 0x50c191u); RETCHK(0x50c196u, 0x50c191u); LOADALL;
  /* 0050c196 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050c199 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0050c19b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c19c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050c19e call dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c1a1u; SAVEALL; call_ind(c, t_); RETCHK(0x50c1a1u, 0x50c19eu); LOADALL; }
  /* 0050c1a1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050c1a2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c1a3 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050c1a5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050c1a6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c1a7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050c1b0(CPU *c) {
  NATIVE_HOOK(0x50c1b0u) REGS; LOADALL;
L_0050c1b0:;
  /* 0050c1b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050c1b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050c1b3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050c1b6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050c1b7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c1b8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050c1b9 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0050c1bb mov eax, dword ptr [edi + 0x19c] */ { const u32 m_ = (u32)(edi + 0x19cu); eax = (u32)(M32(m_)); }
  /* 0050c1c1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050c1c3 lea esi, [edi + 0x188] */ esi = (u32)((u32)(edi + 0x188u));
  /* 0050c1c9 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0050c1ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c1cf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050c1d1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050c1d3 mov dword ptr [ebp - 8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edi); }
  /* 0050c1d6 call 0x405de0 */ esp -= 4; M32(esp) = 0x50c1dbu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x50c1d6u); RETCHK(0x50c1dbu, 0x50c1d6u); LOADALL;
  /* 0050c1db test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c1dd je 0x50c21a */ if (ZF_) goto L_0050c21a;
  /* 0050c1df call 0x518bb0 */ esp -= 4; M32(esp) = 0x50c1e4u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x50c1dfu); RETCHK(0x50c1e4u, 0x50c1dfu); LOADALL;
  /* 0050c1e4 call 0x5180e0 */ esp -= 4; M32(esp) = 0x50c1e9u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x50c1e4u); RETCHK(0x50c1e9u, 0x50c1e4u); LOADALL;
  /* 0050c1e9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050c1eb call 0x508d10 */ esp -= 4; M32(esp) = 0x50c1f0u; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x50c1ebu); RETCHK(0x50c1f0u, 0x50c1ebu); LOADALL;
  /* 0050c1f0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c1f2 mov dword ptr [edi + 0x1c0], eax */ { const u32 m_ = (u32)(edi + 0x1c0u); M32(m_) = (u32)(eax); }
  /* 0050c1f8 jne 0x50c21a */ if (!ZF_) goto L_0050c21a;
  /* 0050c1fa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c1fb mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050c1fd call 0x5075d0 */ esp -= 4; M32(esp) = 0x50c202u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x50c1fdu); RETCHK(0x50c202u, 0x50c1fdu); LOADALL;
  /* 0050c202 mov esi, eax */ { esi = (u32)(eax); }
  /* 0050c204 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c206 je 0x50c21a */ if (ZF_) goto L_0050c21a;
  /* 0050c208 call 0x518bb0 */ esp -= 4; M32(esp) = 0x50c20du; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x50c208u); RETCHK(0x50c20du, 0x50c208u); LOADALL;
  /* 0050c20d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c20e call 0x5179b0 */ esp -= 4; M32(esp) = 0x50c213u; SAVEALL; F_005179b0(c); ABI_CHECK(0x5179b0u, 0x50c20eu); RETCHK(0x50c213u, 0x50c20eu); LOADALL;
  /* 0050c213 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050c215 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050c217 call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c21au; SAVEALL; call_ind(c, t_); RETCHK(0x50c21au, 0x50c217u); LOADALL; }
L_0050c21a:;
  /* 0050c21a mov ebx, dword ptr [edi + 0x64] */ { const u32 m_ = (u32)(edi + 0x64u); ebx = (u32)(M32(m_)); }
  /* 0050c21d mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0050c21f cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c221 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0050c224 je 0x50c28a */ if (ZF_) goto L_0050c28a;
L_0050c226:;
  /* 0050c226 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050c229 mov edi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edi = (u32)(M32(m_)); }
  /* 0050c22c mov ecx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0050c22f push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0050c231 lea esi, [edi + 4] */ esi = (u32)((u32)(edi + 0x4u));
  /* 0050c234 push 0x651000 */ { u32 v_ = 0x651000u; esp -= 4; M32(esp) = v_; }
  /* 0050c239 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050c23a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050c23c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050c23e call 0x405de0 */ esp -= 4; M32(esp) = 0x50c243u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x50c23eu); RETCHK(0x50c243u, 0x50c23eu); LOADALL;
  /* 0050c243 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c245 je 0x50c25f */ if (ZF_) goto L_0050c25f;
  /* 0050c247 mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 0050c24a push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0050c24c push 0x6505d4 */ { u32 v_ = 0x6505d4u; esp -= 4; M32(esp) = v_; }
  /* 0050c251 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050c252 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050c254 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050c256 call 0x405de0 */ esp -= 4; M32(esp) = 0x50c25bu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x50c256u); RETCHK(0x50c25bu, 0x50c256u); LOADALL;
  /* 0050c25b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c25d jne 0x50c27f */ if (!ZF_) goto L_0050c27f;
L_0050c25f:;
  /* 0050c25f mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0050c261 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050c263 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c266u; SAVEALL; call_ind(c, t_); RETCHK(0x50c266u, 0x50c263u); LOADALL; }
  /* 0050c266 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050c268 je 0x50c27f */ if (ZF_) goto L_0050c27f;
  /* 0050c26a mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0050c26c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050c26e call dword ptr [edx + 0x44] */ { const u32 m_ = (u32)(edx + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c271u; SAVEALL; call_ind(c, t_); RETCHK(0x50c271u, 0x50c26eu); LOADALL; }
  /* 0050c271 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050c273 je 0x50c27f */ if (ZF_) goto L_0050c27f;
  /* 0050c275 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0050c277 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050c279 call dword ptr [eax + 0xe4] */ { const u32 m_ = (u32)(eax + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c27fu; SAVEALL; call_ind(c, t_); RETCHK(0x50c27fu, 0x50c279u); LOADALL; }
L_0050c27f:;
  /* 0050c27f mov ebx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0050c282 cmp dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c285 jne 0x50c226 */ if (!ZF_) goto L_0050c226;
  /* 0050c287 mov edi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edi = (u32)(M32(m_)); }
L_0050c28a:;
  /* 0050c28a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050c28c call 0x5083b0 */ esp -= 4; M32(esp) = 0x50c291u; SAVEALL; F_005083b0(c); ABI_CHECK(0x5083b0u, 0x50c28cu); RETCHK(0x50c291u, 0x50c28cu); LOADALL;
  /* 0050c291 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050c292 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c293 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050c294 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050c296 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c297 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050c2a0(CPU *c) {
  NATIVE_HOOK(0x50c2a0u) REGS; LOADALL;
L_0050c2a0:;
  /* 0050c2a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c2a1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050c2a3 call 0x5083e0 */ esp -= 4; M32(esp) = 0x50c2a8u; SAVEALL; F_005083e0(c); ABI_CHECK(0x5083e0u, 0x50c2a3u); RETCHK(0x50c2a8u, 0x50c2a3u); LOADALL;
  /* 0050c2a8 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050c2aa push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050c2ac mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050c2ae call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c2b1u; SAVEALL; call_ind(c, t_); RETCHK(0x50c2b1u, 0x50c2aeu); LOADALL; }
  /* 0050c2b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c2b2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050c2c0(CPU *c) {
  NATIVE_HOOK(0x50c2c0u) REGS; LOADALL;
L_0050c2c0:;
  /* 0050c2c0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050c2c2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050c2c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c2c5 add ecx, 0x188 */ { u32 a_ = ecx, b_ = 0x188u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050c2cb call 0x404140 */ esp -= 4; M32(esp) = 0x50c2d0u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50c2cbu); RETCHK(0x50c2d0u, 0x50c2cbu); LOADALL;
  /* 0050c2d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050c2e0(CPU *c) {
  NATIVE_HOOK(0x50c2e0u) REGS; LOADALL;
L_0050c2e0:;
  /* 0050c2e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050c2e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050c2e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050c2e4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050c2e6 mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0050c2e9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050c2eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c2ec mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0050c2ef mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0050c2f6 mov byte ptr [esi + 4], al */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0050c2f9 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050c2fc add eax, 0x188 */ { u32 a_ = eax, b_ = 0x188u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050c301 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c302 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050c304 call 0x404140 */ esp -= 4; M32(esp) = 0x50c309u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50c304u); RETCHK(0x50c309u, 0x50c304u); LOADALL;
  /* 0050c309 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050c30b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050c30d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c30e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050c320(CPU *c) {
  NATIVE_HOOK(0x50c320u) REGS; LOADALL;
L_0050c320:;
  /* 0050c320 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050c322 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050c324 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c325 add ecx, 0x1a4 */ { u32 a_ = ecx, b_ = 0x1a4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050c32b call 0x404140 */ esp -= 4; M32(esp) = 0x50c330u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50c32bu); RETCHK(0x50c330u, 0x50c32bu); LOADALL;
  /* 0050c330 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050c340(CPU *c) {
  NATIVE_HOOK(0x50c340u) REGS; LOADALL;
L_0050c340:;
  /* 0050c340 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050c341 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050c343 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0050c346 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c348 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c349 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050c34a je 0x50c485 */ if (ZF_) goto L_0050c485;
  /* 0050c350 mov edi, 0x63e71c */ { edi = (u32)(0x63e71cu); }
  /* 0050c355 mov esi, edx */ { esi = (u32)(edx); }
  /* 0050c357 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0050c35c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050c35e repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 0050c360 je 0x50c485 */ if (ZF_) goto L_0050c485;
  /* 0050c366 mov edi, dword ptr [ebx + 0x1c4] */ { const u32 m_ = (u32)(ebx + 0x1c4u); edi = (u32)(M32(m_)); }
  /* 0050c36c test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c36e je 0x50c3bb */ if (ZF_) goto L_0050c3bb;
  /* 0050c370 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050c373 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050c376 mov esi, edx */ { esi = (u32)(edx); }
L_0050c378:;
  /* 0050c378 mov cl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050c37a mov dl, cl */ { edx = (edx & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 0050c37c cmp cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = (ecx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0050c37e jne 0x50c39c */ if (!ZF_) goto L_0050c39c;
  /* 0050c380 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050c382 je 0x50c398 */ if (ZF_) goto L_0050c398;
  /* 0050c384 mov cl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050c387 mov dl, cl */ { edx = (edx & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 0050c389 cmp cl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); u32 a_ = (ecx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0050c38c jne 0x50c39c */ if (!ZF_) goto L_0050c39c;
  /* 0050c38e add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0050c391 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050c394 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050c396 jne 0x50c378 */ if (!ZF_) goto L_0050c378;
L_0050c398:;
  /* 0050c398 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050c39a jmp 0x50c3a1 */ goto L_0050c3a1;
L_0050c39c:;
  /* 0050c39c sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0050c39e sbb eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
L_0050c3a1:;
  /* 0050c3a1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c3a3 je 0x50c49f */ if (ZF_) goto L_0050c49f;
  /* 0050c3a9 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0050c3ab push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050c3ad mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050c3af call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c3b1u; SAVEALL; call_ind(c, t_); RETCHK(0x50c3b1u, 0x50c3afu); LOADALL; }
  /* 0050c3b1 mov dword ptr [ebx + 0x1c4], 0 */ { const u32 m_ = (u32)(ebx + 0x1c4u); M32(m_) = (u32)(0x0u); }
L_0050c3bb:;
  /* 0050c3bb push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0050c3bd call 0x5fe934 */ esp -= 4; M32(esp) = 0x50c3c2u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50c3bdu); RETCHK(0x50c3c2u, 0x50c3bdu); LOADALL;
  /* 0050c3c2 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0050c3c4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050c3c7 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c3c9 je 0x50c3d6 */ if (ZF_) goto L_0050c3d6;
  /* 0050c3cb mov dword ptr [eax], 0x64d178 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64d178u); }
  /* 0050c3d1 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 0050c3d4 jmp 0x50c3d8 */ goto L_0050c3d8;
L_0050c3d6:;
  /* 0050c3d6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050c3d8:;
  /* 0050c3d8 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c3da mov dword ptr [ebx + 0x1c4], eax */ { const u32 m_ = (u32)(ebx + 0x1c4u); M32(m_) = (u32)(eax); }
  /* 0050c3e0 je 0x50c406 */ if (ZF_) goto L_0050c406;
  /* 0050c3e2 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050c3e5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050c3e6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050c3e7 call 0x529310 */ esp -= 4; M32(esp) = 0x50c3ecu; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x50c3e7u); RETCHK(0x50c3ecu, 0x50c3e7u); LOADALL;
  /* 0050c3ec test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050c3ee jne 0x50c40e */ if (!ZF_) goto L_0050c40e;
  /* 0050c3f0 mov ecx, dword ptr [ebx + 0x1c4] */ { const u32 m_ = (u32)(ebx + 0x1c4u); ecx = (u32)(M32(m_)); }
  /* 0050c3f6 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c3f8 je 0x50c400 */ if (ZF_) goto L_0050c400;
  /* 0050c3fa mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050c3fc push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050c3fe call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c400u; SAVEALL; call_ind(c, t_); RETCHK(0x50c400u, 0x50c3feu); LOADALL; }
L_0050c400:;
  /* 0050c400 mov dword ptr [ebx + 0x1c4], edi */ { const u32 m_ = (u32)(ebx + 0x1c4u); M32(m_) = (u32)(edi); }
L_0050c406:;
  /* 0050c406 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050c407 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050c409 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c40a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c40b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0050c40e:;
  /* 0050c40e cmp dword ptr [ebx + 0x1c8], edi */ { const u32 m_ = (u32)(ebx + 0x1c8u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c414 jne 0x50c43c */ if (!ZF_) goto L_0050c43c;
  /* 0050c416 push 0x94 */ { u32 v_ = 0x94u; esp -= 4; M32(esp) = v_; }
  /* 0050c41b call 0x5fe934 */ esp -= 4; M32(esp) = 0x50c420u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50c41bu); RETCHK(0x50c420u, 0x50c41bu); LOADALL;
  /* 0050c420 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050c423 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c425 je 0x50c430 */ if (ZF_) goto L_0050c430;
  /* 0050c427 mov esi, eax */ { esi = (u32)(eax); }
  /* 0050c429 call 0x5267c0 */ esp -= 4; M32(esp) = 0x50c42eu; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x50c429u); RETCHK(0x50c42eu, 0x50c429u); LOADALL;
  /* 0050c42e jmp 0x50c432 */ goto L_0050c432;
L_0050c430:;
  /* 0050c430 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050c432:;
  /* 0050c432 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c434 mov dword ptr [ebx + 0x1c8], eax */ { const u32 m_ = (u32)(ebx + 0x1c8u); M32(m_) = (u32)(eax); }
  /* 0050c43a je 0x50c406 */ if (ZF_) goto L_0050c406;
L_0050c43c:;
  /* 0050c43c mov eax, dword ptr [ebx + 0x1c4] */ { const u32 m_ = (u32)(ebx + 0x1c4u); eax = (u32)(M32(m_)); }
  /* 0050c442 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c444 je 0x50c49f */ if (ZF_) goto L_0050c49f;
  /* 0050c446 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0050c449 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c44b je 0x50c454 */ if (ZF_) goto L_0050c454;
  /* 0050c44d mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 0050c44f mov ecx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0050c452 jmp 0x50c456 */ goto L_0050c456;
L_0050c454:;
  /* 0050c454 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_0050c456:;
  /* 0050c456 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050c459 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c45b je 0x50c464 */ if (ZF_) goto L_0050c464;
  /* 0050c45d mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0050c45f mov eax, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050c462 jmp 0x50c466 */ goto L_0050c466;
L_0050c464:;
  /* 0050c464 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050c466:;
  /* 0050c466 mov esi, dword ptr [ebx + 0x1c8] */ { const u32 m_ = (u32)(ebx + 0x1c8u); esi = (u32)(M32(m_)); }
  /* 0050c46c mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0050c46e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c46f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050c470 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c471 lea eax, [ebx + 0x44] */ eax = (u32)((u32)(ebx + 0x44u));
  /* 0050c474 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c475 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050c477 call dword ptr [edx + 0xe0] */ { const u32 m_ = (u32)(edx + 0xe0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c47du; SAVEALL; call_ind(c, t_); RETCHK(0x50c47du, 0x50c477u); LOADALL; }
  /* 0050c47d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050c47e mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050c480 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c481 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c482 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0050c485:;
  /* 0050c485 mov ecx, dword ptr [ebx + 0x1c4] */ { const u32 m_ = (u32)(ebx + 0x1c4u); ecx = (u32)(M32(m_)); }
  /* 0050c48b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c48d je 0x50c49f */ if (ZF_) goto L_0050c49f;
  /* 0050c48f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050c491 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050c493 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c495u; SAVEALL; call_ind(c, t_); RETCHK(0x50c495u, 0x50c493u); LOADALL; }
  /* 0050c495 mov dword ptr [ebx + 0x1c4], 0 */ { const u32 m_ = (u32)(ebx + 0x1c4u); M32(m_) = (u32)(0x0u); }
L_0050c49f:;
  /* 0050c49f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050c4a0 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050c4a2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c4a3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c4a4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050c4b0(CPU *c) {
  NATIVE_HOOK(0x50c4b0u) REGS; LOADALL;
L_0050c4b0:;
  /* 0050c4b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c4b1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050c4b3 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050c4b5 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c4b8u; SAVEALL; call_ind(c, t_); RETCHK(0x50c4b8u, 0x50c4b5u); LOADALL; }
  /* 0050c4b8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050c4ba je 0x50c4c7 */ if (ZF_) goto L_0050c4c7;
  /* 0050c4bc mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050c4be mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050c4c0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c4c1 jmp dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0050c4c7:;
  /* 0050c4c7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c4c8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050c4d0(CPU *c) {
  NATIVE_HOOK(0x50c4d0u) REGS; LOADALL;
L_0050c4d0:;
  /* 0050c4d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050c4d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050c4d3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050c4d6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050c4d7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c4d8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050c4da mov bl, byte ptr [esi + 0x3e] */ { const u32 m_ = (u32)(esi + 0x3eu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050c4dd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c4de call 0x507300 */ esp -= 4; M32(esp) = 0x50c4e3u; SAVEALL; F_00507300(c); ABI_CHECK(0x507300u, 0x50c4deu); RETCHK(0x50c4e3u, 0x50c4deu); LOADALL;
  /* 0050c4e3 mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050c4e6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050c4e8 je 0x50c4fe */ if (ZF_) goto L_0050c4fe;
  /* 0050c4ea test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050c4ec jne 0x50c543 */ if (!ZF_) goto L_0050c543;
  /* 0050c4ee mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050c4f0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050c4f2 call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c4f8u; SAVEALL; call_ind(c, t_); RETCHK(0x50c4f8u, 0x50c4f2u); LOADALL; }
  /* 0050c4f8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c4f9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050c4fa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c4fb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0050c4fe:;
  /* 0050c4fe test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050c500 je 0x50c543 */ if (ZF_) goto L_0050c543;
  /* 0050c502 call 0x518bb0 */ esp -= 4; M32(esp) = 0x50c507u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x50c502u); RETCHK(0x50c507u, 0x50c502u); LOADALL;
  /* 0050c507 call 0x5180e0 */ esp -= 4; M32(esp) = 0x50c50cu; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x50c507u); RETCHK(0x50c50cu, 0x50c507u); LOADALL;
  /* 0050c50c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050c50e call 0x508d10 */ esp -= 4; M32(esp) = 0x50c513u; SAVEALL; F_00508d10(c); ABI_CHECK(0x508d10u, 0x50c50eu); RETCHK(0x50c513u, 0x50c50eu); LOADALL;
  /* 0050c513 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050c515 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c517 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0050c519 je 0x50c543 */ if (ZF_) goto L_0050c543;
  /* 0050c51b jmp 0x50c520 */ goto L_0050c520;
L_0050c520:;
  /* 0050c520 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050c522 call 0x507890 */ esp -= 4; M32(esp) = 0x50c527u; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x50c522u); RETCHK(0x50c527u, 0x50c522u); LOADALL;
  /* 0050c527 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c529 je 0x50c53e */ if (ZF_) goto L_0050c53e;
  /* 0050c52b mov eax, edx */ { eax = (u32)(edx); }
  /* 0050c52d call 0x507890 */ esp -= 4; M32(esp) = 0x50c532u; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x50c52du); RETCHK(0x50c532u, 0x50c52du); LOADALL;
  /* 0050c532 mov edx, eax */ { edx = (u32)(eax); }
  /* 0050c534 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c536 jne 0x50c520 */ if (!ZF_) goto L_0050c520;
  /* 0050c538 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c539 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050c53a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c53b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0050c53e:;
  /* 0050c53e mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050c540 call dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c543u; SAVEALL; call_ind(c, t_); RETCHK(0x50c543u, 0x50c540u); LOADALL; }
L_0050c543:;
  /* 0050c543 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c544 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050c545 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c546 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050c550(CPU *c) {
  NATIVE_HOOK(0x50c550u) REGS; LOADALL;
L_0050c550:;
  /* 0050c550 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050c551 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050c553 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050c556 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c557 mov esi, dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); esi = (u32)(M32(m_)); }
  /* 0050c55d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050c55e mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0050c560 cmp dword ptr [edi + 0x184], 0x3e8 */ { const u32 m_ = (u32)(edi + 0x184u); u32 a_ = M32(m_), b_ = 0x3e8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c56a jle 0x50c588 */ if ((ZF_|LT_)) goto L_0050c588;
  /* 0050c56c call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x50c56eu; SAVEALL; call_ind(c, t_); RETCHK(0x50c56eu, 0x50c56cu); LOADALL; }
  /* 0050c56e sub eax, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050c574 mov dword ptr [edi + 0x184], eax */ { const u32 m_ = (u32)(edi + 0x184u); M32(m_) = (u32)(eax); }
  /* 0050c57a call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x50c57cu; SAVEALL; call_ind(c, t_); RETCHK(0x50c57cu, 0x50c57au); LOADALL; }
  /* 0050c57c mov dword ptr [edi + 0x180], eax */ { const u32 m_ = (u32)(edi + 0x180u); M32(m_) = (u32)(eax); }
  /* 0050c582 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050c583 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c584 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050c586 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c587 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050c588:;
  /* 0050c588 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x50c58au; SAVEALL; call_ind(c, t_); RETCHK(0x50c58au, 0x50c588u); LOADALL; }
  /* 0050c58a sub eax, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050c590 mov dword ptr [edi + 0x184], eax */ { const u32 m_ = (u32)(edi + 0x184u); M32(m_) = (u32)(eax); }
  /* 0050c596 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x50c598u; SAVEALL; call_ind(c, t_); RETCHK(0x50c598u, 0x50c596u); LOADALL; }
  /* 0050c598 mov dword ptr [edi + 0x180], eax */ { const u32 m_ = (u32)(edi + 0x180u); M32(m_) = (u32)(eax); }
  /* 0050c59e mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 0050c5a4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c5a6 je 0x50c640 */ if (ZF_) goto L_0050c640;
  /* 0050c5ac lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 0050c5af lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0050c5b2 call 0x52cea0 */ esp -= 4; M32(esp) = 0x50c5b7u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x50c5b2u); RETCHK(0x50c5b7u, 0x50c5b2u); LOADALL;
  /* 0050c5b7 mov eax, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0050c5ba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c5bb lea esi, [ebp - 0x18] */ esi = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0050c5be call 0x52cf90 */ esp -= 4; M32(esp) = 0x50c5c3u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x50c5beu); RETCHK(0x50c5c3u, 0x50c5beu); LOADALL;
  /* 0050c5c3 mov eax, dword ptr [edi + 0x1c4] */ { const u32 m_ = (u32)(edi + 0x1c4u); eax = (u32)(M32(m_)); }
  /* 0050c5c9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050c5cc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c5ce je 0x50c640 */ if (ZF_) goto L_0050c640;
  /* 0050c5d0 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 0050c5d6 call 0x5267f0 */ esp -= 4; M32(esp) = 0x50c5dbu; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x50c5d6u); RETCHK(0x50c5dbu, 0x50c5d6u); LOADALL;
  /* 0050c5db fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0050c5de fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050c5e1 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050c5e7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050c5e9 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050c5ec je 0x50c5f6 */ if (ZF_) goto L_0050c5f6;
  /* 0050c5ee fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050c5f0 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 0050c5f3 fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050c5f6:;
  /* 0050c5f6 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050c5f9 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0050c5fc fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050c5ff fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050c605 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050c607 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050c60a je 0x50c614 */ if (ZF_) goto L_0050c614;
  /* 0050c60c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050c60e fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 0050c611 fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050c614:;
  /* 0050c614 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0050c617 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050c61a mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0050c61d mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0050c620 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0050c625 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0050c62a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050c62c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050c62e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050c62f mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0050c632 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050c633 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c634 mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 0050c63a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050c63b call 0x526a10 */ esp -= 4; M32(esp) = 0x50c640u; SAVEALL; F_00526a10(c); ABI_CHECK(0x526a10u, 0x50c63bu); RETCHK(0x50c640u, 0x50c63bu); LOADALL;
L_0050c640:;
  /* 0050c640 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050c641 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c642 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050c644 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c645 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050c650(CPU *c) {
  NATIVE_HOOK(0x50c650u) REGS; LOADALL;
L_0050c650:;
  /* 0050c650 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c651 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050c653 mov edx, dword ptr [esi + 0x1c8] */ { const u32 m_ = (u32)(esi + 0x1c8u); edx = (u32)(M32(m_)); }
  /* 0050c659 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c65b je 0x50c677 */ if (ZF_) goto L_0050c677;
  /* 0050c65d mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0050c65f call 0x5267e0 */ esp -= 4; M32(esp) = 0x50c664u; SAVEALL; F_005267e0(c); ABI_CHECK(0x5267e0u, 0x50c65fu); RETCHK(0x50c664u, 0x50c65fu); LOADALL;
  /* 0050c664 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050c665 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50c66au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50c665u); RETCHK(0x50c66au, 0x50c665u); LOADALL;
  /* 0050c66a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050c66d mov dword ptr [esi + 0x1c8], 0 */ { const u32 m_ = (u32)(esi + 0x1c8u); M32(m_) = (u32)(0x0u); }
L_0050c677:;
  /* 0050c677 mov ecx, dword ptr [esi + 0x1c4] */ { const u32 m_ = (u32)(esi + 0x1c4u); ecx = (u32)(M32(m_)); }
  /* 0050c67d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c67f je 0x50c691 */ if (ZF_) goto L_0050c691;
  /* 0050c681 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050c683 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050c685 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c687u; SAVEALL; call_ind(c, t_); RETCHK(0x50c687u, 0x50c685u); LOADALL; }
  /* 0050c687 mov dword ptr [esi + 0x1c4], 0 */ { const u32 m_ = (u32)(esi + 0x1c4u); M32(m_) = (u32)(0x0u); }
L_0050c691:;
  /* 0050c691 mov eax, dword ptr [esi + 0x6c] */ { const u32 m_ = (u32)(esi + 0x6cu); eax = (u32)(M32(m_)); }
  /* 0050c694 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c696 je 0x50c69f */ if (ZF_) goto L_0050c69f;
  /* 0050c698 mov dword ptr [esi + 0x6c], 0 */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(0x0u); }
L_0050c69f:;
  /* 0050c69f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c6a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050c6b0(CPU *c) {
  NATIVE_HOOK(0x50c6b0u) REGS; LOADALL;
L_0050c6b0:;
  /* 0050c6b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050c6b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050c6b3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050c6b4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050c6b5 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0050c6b8 mov edx, dword ptr [ebx + 0x64] */ { const u32 m_ = (u32)(ebx + 0x64u); edx = (u32)(M32(m_)); }
  /* 0050c6bb mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 0050c6bd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c6be mov esi, eax */ { esi = (u32)(eax); }
  /* 0050c6c0 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050c6c2 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c6c4 je 0x50c752 */ if (ZF_) goto L_0050c752;
  /* 0050c6ca push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050c6cb jmp 0x50c6d0 */ goto L_0050c6d0;
L_0050c6d0:;
  /* 0050c6d0 cmp dword ptr [ecx + 8], esi */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c6d3 je 0x50c6e4 */ if (ZF_) goto L_0050c6e4;
  /* 0050c6d5 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 0050c6d7 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c6d9 jne 0x50c6d0 */ if (!ZF_) goto L_0050c6d0;
  /* 0050c6db pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050c6dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c6dd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050c6de mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050c6e0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c6e1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0050c6e4:;
  /* 0050c6e4 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0050c6e7 add ebx, 0x60 */ { u32 a_ = ebx, b_ = 0x60u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0050c6ea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c6eb mov edi, ebx */ { edi = (u32)(ebx); }
  /* 0050c6ed mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0050c6f0 call 0x508aa0 */ esp -= 4; M32(esp) = 0x50c6f5u; SAVEALL; F_00508aa0(c); ABI_CHECK(0x508aa0u, 0x50c6f0u); RETCHK(0x50c6f5u, 0x50c6f0u); LOADALL;
  /* 0050c6f5 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0050c6f8 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c6fa je 0x50c725 */ if (ZF_) goto L_0050c725;
  /* 0050c6fc mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050c6ff mov ecx, dword ptr [ecx + 0x64] */ { const u32 m_ = (u32)(ecx + 0x64u); ecx = (u32)(M32(m_)); }
  /* 0050c702 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050c704 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c706 je 0x50c74f */ if (ZF_) goto L_0050c74f;
L_0050c708:;
  /* 0050c708 cmp dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c70b je 0x50c71e */ if (ZF_) goto L_0050c71e;
  /* 0050c70d mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0050c70f cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c711 jne 0x50c708 */ if (!ZF_) goto L_0050c708;
  /* 0050c713 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050c714 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c715 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050c717 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050c718 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050c71a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c71b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0050c71e:;
  /* 0050c71e mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0050c721 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0050c723 jmp 0x50c72b */ goto L_0050c72b;
L_0050c725:;
  /* 0050c725 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0050c728 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
L_0050c72b:;
  /* 0050c72b mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050c72e lea edx, [ebp + 8] */ edx = (u32)((u32)(ebp + 0x8u));
  /* 0050c731 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050c732 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c733 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c734 call 0x508af0 */ esp -= 4; M32(esp) = 0x50c739u; SAVEALL; F_00508af0(c); ABI_CHECK(0x508af0u, 0x50c734u); RETCHK(0x50c739u, 0x50c734u); LOADALL;
  /* 0050c739 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0050c73b mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0050c740 mov edi, eax */ { edi = (u32)(eax); }
  /* 0050c742 call 0x518d90 */ esp -= 4; M32(esp) = 0x50c747u; SAVEALL; F_00518d90(c); ABI_CHECK(0x518d90u, 0x50c742u); RETCHK(0x50c747u, 0x50c742u); LOADALL;
  /* 0050c747 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 0050c74a mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0050c74d mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
L_0050c74f:;
  /* 0050c74f mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050c751 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0050c752:;
  /* 0050c752 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c753 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050c754 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050c756 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c757 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050c760(CPU *c) {
  NATIVE_HOOK(0x50c760u) REGS; LOADALL;
L_0050c760:;
  /* 0050c760 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050c761 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050c763 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c764 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050c766 call 0x5075d0 */ esp -= 4; M32(esp) = 0x50c76bu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x50c766u); RETCHK(0x50c76bu, 0x50c766u); LOADALL;
  /* 0050c76b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050c76e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050c76f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c770 call 0x50c6b0 */ esp -= 4; M32(esp) = 0x50c775u; SAVEALL; F_0050c6b0(c); ABI_CHECK(0x50c6b0u, 0x50c770u); RETCHK(0x50c775u, 0x50c770u); LOADALL;
  /* 0050c775 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c776 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050c780(CPU *c) {
  NATIVE_HOOK(0x50c780u) REGS; LOADALL;
L_0050c780:;
  /* 0050c780 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050c781 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050c783 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050c784 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c785 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050c786 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0050c789 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050c78a mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0050c78c call 0x507650 */ esp -= 4; M32(esp) = 0x50c791u; SAVEALL; F_00507650(c); ABI_CHECK(0x507650u, 0x50c78cu); RETCHK(0x50c791u, 0x50c78cu); LOADALL;
  /* 0050c791 mov esi, eax */ { esi = (u32)(eax); }
  /* 0050c793 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c795 je 0x50c7ae */ if (ZF_) goto L_0050c7ae;
  /* 0050c797 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050c799 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050c79b call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c79eu; SAVEALL; call_ind(c, t_); RETCHK(0x50c79eu, 0x50c79bu); LOADALL; }
  /* 0050c79e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050c7a0 je 0x50c7ae */ if (ZF_) goto L_0050c7ae;
  /* 0050c7a2 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050c7a5 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050c7a7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050c7a8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c7a9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050c7ab call dword ptr [edx + 0x6c] */ { const u32 m_ = (u32)(edx + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50c7aeu; SAVEALL; call_ind(c, t_); RETCHK(0x50c7aeu, 0x50c7abu); LOADALL; }
L_0050c7ae:;
  /* 0050c7ae pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050c7af pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c7b0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050c7b1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c7b2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050c7c0(CPU *c) {
  NATIVE_HOOK(0x50c7c0u) REGS; LOADALL;
L_0050c7c0:;
  /* 0050c7c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050c7c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050c7c3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050c7c6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050c7c8 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0050c7cb mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0050c7ce mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050c7d1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c7d2 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050c7d4 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0050c7d7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c7d9 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0050c7dc mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0050c7df mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0050c7e2 mov dword ptr [ebp - 0x18], 0x20 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x20u); }
  /* 0050c7e9 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0050c7ec je 0x50c7f6 */ if (ZF_) goto L_0050c7f6;
  /* 0050c7ee lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0050c7f1 call 0x508540 */ esp -= 4; M32(esp) = 0x50c7f6u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x50c7f1u); RETCHK(0x50c7f6u, 0x50c7f1u); LOADALL;
L_0050c7f6:;
  /* 0050c7f6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050c7f8 call 0x507dd0 */ esp -= 4; M32(esp) = 0x50c7fdu; SAVEALL; F_00507dd0(c); ABI_CHECK(0x507dd0u, 0x50c7f8u); RETCHK(0x50c7fdu, 0x50c7f8u); LOADALL;
  /* 0050c7fd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c7fe mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050c800 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c801 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050c810(CPU *c) {
  NATIVE_HOOK(0x50c810u) REGS; LOADALL;
L_0050c810:;
  /* 0050c810 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050c811 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050c813 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050c816 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050c818 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0050c81b mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0050c81e mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050c821 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c822 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050c824 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0050c827 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c829 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0050c82c mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0050c82f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0050c832 mov dword ptr [ebp - 0x18], 0x21 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x21u); }
  /* 0050c839 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0050c83c je 0x50c846 */ if (ZF_) goto L_0050c846;
  /* 0050c83e lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0050c841 call 0x508540 */ esp -= 4; M32(esp) = 0x50c846u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x50c841u); RETCHK(0x50c846u, 0x50c841u); LOADALL;
L_0050c846:;
  /* 0050c846 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050c848 call 0x507e90 */ esp -= 4; M32(esp) = 0x50c84du; SAVEALL; F_00507e90(c); ABI_CHECK(0x507e90u, 0x50c848u); RETCHK(0x50c84du, 0x50c848u); LOADALL;
  /* 0050c84d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c84e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050c850 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c851 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050c860(CPU *c) {
  NATIVE_HOOK(0x50c860u) REGS; LOADALL;
L_0050c860:;
  /* 0050c860 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050c861 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050c863 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050c865 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0050c86a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050c870 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c871 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050c878 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050c879 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050c87a push 0x50c8e0 */ { u32 v_ = 0x50c8e0u; esp -= 4; M32(esp) = v_; }
  /* 0050c87f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050c882 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050c884 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0050c886 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050c889 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0050c88c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050c88e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050c88f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0050c892 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0050c899 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0050c89c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c89d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050c8a0 call 0x404140 */ esp -= 4; M32(esp) = 0x50c8a5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50c8a0u); RETCHK(0x50c8a5u, 0x50c8a0u); LOADALL;
  /* 0050c8a5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050c8a8 call 0x405c00 */ esp -= 4; M32(esp) = 0x50c8adu; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x50c8a8u); RETCHK(0x50c8adu, 0x50c8a8u); LOADALL;
  /* 0050c8ad mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050c8af call 0x405c80 */ esp -= 4; M32(esp) = 0x50c8b4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x50c8afu); RETCHK(0x50c8b4u, 0x50c8afu); LOADALL;
  /* 0050c8b4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050c8b8 jb 0x50c8c6 */ if (CF_) goto L_0050c8c6;
  /* 0050c8ba mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0050c8bd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050c8be call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50c8c3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50c8beu); RETCHK(0x50c8c3u, 0x50c8beu); LOADALL;
  /* 0050c8c3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050c8c6:;
  /* 0050c8c6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050c8c9 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050c8cb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050c8d2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050c8d3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050c8d5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c8d6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_0050c8e0(CPU *c) {
  NATIVE_HOOK(0x50c8e0u) REGS; LOADALL;
L_0050c8e0:;
  /* 0050c8e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050c8e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050c8e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050c8e5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0050c8ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050c8f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c8f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050c8f8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050c8f9 push 0x1cc */ { u32 v_ = 0x1ccu; esp -= 4; M32(esp) = v_; }
  /* 0050c8fe call 0x5fe934 */ esp -= 4; M32(esp) = 0x50c903u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50c8feu); RETCHK(0x50c903u, 0x50c8feu); LOADALL;
  /* 0050c903 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050c906 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050c909 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050c90b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050c912 je 0x50c92a */ if (ZF_) goto L_0050c92a;
  /* 0050c914 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050c916 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c917 call 0x50bb70 */ esp -= 4; M32(esp) = 0x50c91cu; SAVEALL; F_0050bb70(c); ABI_CHECK(0x50bb70u, 0x50c917u); RETCHK(0x50c91cu, 0x50c917u); LOADALL;
  /* 0050c91c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050c91f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050c926 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050c928 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c929 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050c92a:;
  /* 0050c92a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050c92d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050c92f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050c936 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050c938 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c939 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050c940(CPU *c) {
  NATIVE_HOOK(0x50c940u) REGS; LOADALL;
L_0050c940:;
  /* 0050c940 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050c941 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050c943 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050c949 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050c94b push 0x61de86 */ { u32 v_ = 0x61de86u; esp -= 4; M32(esp) = v_; }
  /* 0050c950 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c951 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050c954 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050c95b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c95c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050c95f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050c960 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050c961 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c962 call 0x506b60 */ esp -= 4; M32(esp) = 0x50c967u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x50c962u); RETCHK(0x50c967u, 0x50c962u); LOADALL;
  /* 0050c967 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050c96e lea edi, [esi + 0x180] */ edi = (u32)((u32)(esi + 0x180u));
  /* 0050c974 mov dword ptr [esi], 0x651238 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x651238u); }
  /* 0050c97a call 0x5275b0 */ esp -= 4; M32(esp) = 0x50c97fu; SAVEALL; F_005275b0(c); ABI_CHECK(0x5275b0u, 0x50c97au); RETCHK(0x50c97fu, 0x50c97au); LOADALL;
  /* 0050c97f push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0050c981 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0050c985 push 0x65131c */ { u32 v_ = 0x65131cu; esp -= 4; M32(esp) = v_; }
  /* 0050c98a lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0050c98d mov byte ptr [esi + 0x3c], 0 */ { const u32 m_ = (u32)(esi + 0x3cu); M8(m_) = (u8)(0x0u); }
  /* 0050c991 call 0x404420 */ esp -= 4; M32(esp) = 0x50c996u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50c991u); RETCHK(0x50c996u, 0x50c991u); LOADALL;
  /* 0050c996 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050c999 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050c99a mov eax, esi */ { eax = (u32)(esi); }
  /* 0050c99c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050c9a3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c9a4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050c9a6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c9a7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050c9b0(CPU *c) {
  NATIVE_HOOK(0x50c9b0u) REGS; LOADALL;
L_0050c9b0:;
  /* 0050c9b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050c9b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050c9b3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c9b4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050c9b6 call 0x50c9e0 */ esp -= 4; M32(esp) = 0x50c9bbu; SAVEALL; F_0050c9e0(c); ABI_CHECK(0x50c9e0u, 0x50c9b6u); RETCHK(0x50c9bbu, 0x50c9b6u); LOADALL;
  /* 0050c9bb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050c9bf je 0x50c9ca */ if (ZF_) goto L_0050c9ca;
  /* 0050c9c1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c9c2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50c9c7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50c9c2u); RETCHK(0x50c9c7u, 0x50c9c2u); LOADALL;
  /* 0050c9c7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050c9ca:;
  /* 0050c9ca mov eax, esi */ { eax = (u32)(esi); }
  /* 0050c9cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c9cd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050c9ce ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050c9e0(CPU *c) {
  NATIVE_HOOK(0x50c9e0u) REGS; LOADALL;
L_0050c9e0:;
  /* 0050c9e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050c9e1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050c9e3 lea ecx, [esi + 0x180] */ ecx = (u32)((u32)(esi + 0x180u));
  /* 0050c9e9 mov dword ptr [esi], 0x651238 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x651238u); }
  /* 0050c9ef call 0x527610 */ esp -= 4; M32(esp) = 0x50c9f4u; SAVEALL; F_00527610(c); ABI_CHECK(0x527610u, 0x50c9efu); RETCHK(0x50c9f4u, 0x50c9efu); LOADALL;
  /* 0050c9f4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050c9f6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050c9f7 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0050ca00(CPU *c) {
  NATIVE_HOOK(0x50ca00u) REGS; LOADALL;
L_0050ca00:;
  /* 0050ca00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050ca01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050ca03 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050ca05 push 0x624328 */ { u32 v_ = 0x624328u; esp -= 4; M32(esp) = v_; }
  /* 0050ca0a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050ca10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ca11 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050ca18 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050ca1b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050ca1c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0050ca1e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050ca21 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050ca23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050ca24 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050ca25 jne 0x50ca3c */ if (!ZF_) goto L_0050ca3c;
  /* 0050ca27 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050ca29 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050ca2c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050ca33 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050ca34 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050ca35 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050ca36 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050ca38 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050ca39 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0050ca3c:;
  /* 0050ca3c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050ca3e call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50ca41u; SAVEALL; call_ind(c, t_); RETCHK(0x50ca41u, 0x50ca3eu); LOADALL; }
  /* 0050ca41 push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 0050ca46 mov edi, eax */ { edi = (u32)(eax); }
  /* 0050ca48 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50ca4du; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50ca48u); RETCHK(0x50ca4du, 0x50ca48u); LOADALL;
  /* 0050ca4d mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050ca50 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050ca53 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 0050ca58 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050ca5a fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050ca5d call 0x560fd0 */ esp -= 4; M32(esp) = 0x50ca62u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50ca5du); RETCHK(0x50ca62u, 0x50ca5du); LOADALL;
  /* 0050ca62 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050ca65 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050ca68 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 0050ca6d mov eax, edi */ { eax = (u32)(edi); }
  /* 0050ca6f fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050ca72 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50ca77u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50ca72u); RETCHK(0x50ca77u, 0x50ca72u); LOADALL;
  /* 0050ca77 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050ca7a fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050ca7d push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 0050ca82 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050ca84 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050ca87 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050ca8a call 0x560fd0 */ esp -= 4; M32(esp) = 0x50ca8fu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50ca8au); RETCHK(0x50ca8fu, 0x50ca8au); LOADALL;
  /* 0050ca8f mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050ca92 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050ca95 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0050ca98 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050ca9a fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050ca9d fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050caa0 je 0x50caae */ if (ZF_) goto L_0050caae;
  /* 0050caa2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050caa3 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050caa6 call 0x52d060 */ esp -= 4; M32(esp) = 0x50caabu; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x50caa6u); RETCHK(0x50caabu, 0x50caa6u); LOADALL;
  /* 0050caab add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050caae:;
  /* 0050caae push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050caaf mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 0050cab4 call 0x560ed0 */ esp -= 4; M32(esp) = 0x50cab9u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50cab4u); RETCHK(0x50cab9u, 0x50cab4u); LOADALL;
  /* 0050cab9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050cabb mov dword ptr [ebp - 0x20], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xfu); }
  /* 0050cac2 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 0050cac9 mov byte ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)(0x0u); }
  /* 0050cacd lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
L_0050cad0:;
  /* 0050cad0 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050cad2 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050cad3 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050cad5 jne 0x50cad0 */ if (!ZF_) goto L_0050cad0;
  /* 0050cad7 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050cad9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050cada push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050cadb lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0050cade call 0x404420 */ esp -= 4; M32(esp) = 0x50cae3u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50cadeu); RETCHK(0x50cae3u, 0x50cadeu); LOADALL;
  /* 0050cae3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050cae4 mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 0050cae9 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050caf0 call 0x560ed0 */ esp -= 4; M32(esp) = 0x50caf5u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50caf0u); RETCHK(0x50caf5u, 0x50caf0u); LOADALL;
  /* 0050caf5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050caf6 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050caf9 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050cafc mov eax, esp */ { eax = (u32)(esp); }
  /* 0050cafe mov dword ptr [ebp + 8], esp */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esp); }
  /* 0050cb01 call 0x52cea0 */ esp -= 4; M32(esp) = 0x50cb06u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x50cb01u); RETCHK(0x50cb06u, 0x50cb01u); LOADALL;
  /* 0050cb06 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0050cb09 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0050cb0b call 0x50cb40 */ esp -= 4; M32(esp) = 0x50cb10u; SAVEALL; F_0050cb40(c); ABI_CHECK(0x50cb40u, 0x50cb0bu); RETCHK(0x50cb10u, 0x50cb0bu); LOADALL;
  /* 0050cb10 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0050cb12 cmp dword ptr [ebp - 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050cb16 jb 0x50cb24 */ if (CF_) goto L_0050cb24;
  /* 0050cb18 mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 0050cb1b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050cb1c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50cb21u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50cb1cu); RETCHK(0x50cb21u, 0x50cb1cu); LOADALL;
  /* 0050cb21 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050cb24:;
  /* 0050cb24 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050cb27 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050cb28 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050cb29 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 0050cb2b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050cb32 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050cb33 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050cb35 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050cb36 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050cb40(CPU *c) {
  NATIVE_HOOK(0x50cb40u) REGS; LOADALL;
L_0050cb40:;
  /* 0050cb40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050cb41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050cb43 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050cb46 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050cb48 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050cb4a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050cb4b lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 0050cb4e call 0x404140 */ esp -= 4; M32(esp) = 0x50cb53u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50cb4eu); RETCHK(0x50cb53u, 0x50cb4eu); LOADALL;
  /* 0050cb53 lea ecx, [esi + 0x44] */ ecx = (u32)((u32)(esi + 0x44u));
  /* 0050cb56 lea edx, [ebp + 8] */ edx = (u32)((u32)(ebp + 0x8u));
  /* 0050cb59 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0050cb5c call 0x52cee0 */ esp -= 4; M32(esp) = 0x50cb61u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x50cb5cu); RETCHK(0x50cb61u, 0x50cb5cu); LOADALL;
  /* 0050cb61 mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0050cb64 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050cb65 lea edx, [esi + 0x180] */ edx = (u32)((u32)(esi + 0x180u));
  /* 0050cb6b mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0050cb70 call 0x527630 */ esp -= 4; M32(esp) = 0x50cb75u; SAVEALL; F_00527630(c); ABI_CHECK(0x527630u, 0x50cb70u); RETCHK(0x50cb75u, 0x50cb70u); LOADALL;
  /* 0050cb75 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050cb77 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0050cb7a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050cb7c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050cb7d ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_0050cb80(CPU *c) {
  NATIVE_HOOK(0x50cb80u) REGS; LOADALL;
L_0050cb80:;
  /* 0050cb80 mov eax, dword ptr [ecx + 0x180] */ { const u32 m_ = (u32)(ecx + 0x180u); eax = (u32)(M32(m_)); }
  /* 0050cb86 add ecx, 0x180 */ { u32 a_ = ecx, b_ = 0x180u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050cb8c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050cb8e call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50cb91u; SAVEALL; call_ind(c, t_); RETCHK(0x50cb91u, 0x50cb8eu); LOADALL; }
  /* 0050cb91 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050cba0(CPU *c) {
  NATIVE_HOOK(0x50cba0u) REGS; LOADALL;
L_0050cba0:;
  /* 0050cba0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050cba1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050cba3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050cba5 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0050cbaa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050cbb0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050cbb1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050cbb8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050cbb9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050cbba push 0x50cc20 */ { u32 v_ = 0x50cc20u; esp -= 4; M32(esp) = v_; }
  /* 0050cbbf sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050cbc2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050cbc4 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0050cbc6 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050cbc9 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0050cbcc push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050cbce push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050cbcf lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0050cbd2 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0050cbd9 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0050cbdc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050cbdd mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050cbe0 call 0x404140 */ esp -= 4; M32(esp) = 0x50cbe5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50cbe0u); RETCHK(0x50cbe5u, 0x50cbe0u); LOADALL;
  /* 0050cbe5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050cbe8 call 0x405c00 */ esp -= 4; M32(esp) = 0x50cbedu; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x50cbe8u); RETCHK(0x50cbedu, 0x50cbe8u); LOADALL;
  /* 0050cbed mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050cbef call 0x405c80 */ esp -= 4; M32(esp) = 0x50cbf4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x50cbefu); RETCHK(0x50cbf4u, 0x50cbefu); LOADALL;
  /* 0050cbf4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050cbf8 jb 0x50cc06 */ if (CF_) goto L_0050cc06;
  /* 0050cbfa mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0050cbfd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050cbfe call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50cc03u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50cbfeu); RETCHK(0x50cc03u, 0x50cbfeu); LOADALL;
  /* 0050cc03 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050cc06:;
  /* 0050cc06 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050cc09 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050cc0b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050cc12 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050cc13 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050cc15 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050cc16 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_0050cc20(CPU *c) {
  NATIVE_HOOK(0x50cc20u) REGS; LOADALL;
L_0050cc20:;
  /* 0050cc20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050cc21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050cc23 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050cc25 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0050cc2a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050cc30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050cc31 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050cc38 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050cc39 push 0x22c */ { u32 v_ = 0x22cu; esp -= 4; M32(esp) = v_; }
  /* 0050cc3e call 0x5fe934 */ esp -= 4; M32(esp) = 0x50cc43u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50cc3eu); RETCHK(0x50cc43u, 0x50cc3eu); LOADALL;
  /* 0050cc43 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050cc46 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050cc49 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050cc4b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050cc52 je 0x50cc6a */ if (ZF_) goto L_0050cc6a;
  /* 0050cc54 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050cc56 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050cc57 call 0x50c940 */ esp -= 4; M32(esp) = 0x50cc5cu; SAVEALL; F_0050c940(c); ABI_CHECK(0x50c940u, 0x50cc57u); RETCHK(0x50cc5cu, 0x50cc57u); LOADALL;
  /* 0050cc5c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050cc5f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050cc66 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050cc68 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050cc69 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050cc6a:;
  /* 0050cc6a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050cc6d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050cc6f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050cc76 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050cc78 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050cc79 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050cc80(CPU *c) {
  NATIVE_HOOK(0x50cc80u) REGS; LOADALL;
L_0050cc80:;
  /* 0050cc80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050cc81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050cc83 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050cc89 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050cc8b push 0x61de62 */ { u32 v_ = 0x61de62u; esp -= 4; M32(esp) = v_; }
  /* 0050cc90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050cc91 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050cc94 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050cc9b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050cc9c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050cc9d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050cca0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050cca1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050cca2 call 0x506b60 */ esp -= 4; M32(esp) = 0x50cca7u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x50cca2u); RETCHK(0x50cca7u, 0x50cca2u); LOADALL;
  /* 0050cca7 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050cca9 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050ccac mov dword ptr [esi], 0x651328 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x651328u); }
  /* 0050ccb2 mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 0050ccb7 mov dword ptr [esi + 0x1b0], eax */ { const u32 m_ = (u32)(esi + 0x1b0u); M32(m_) = (u32)(eax); }
  /* 0050ccbd mov dword ptr [esi + 0x1ac], ebx */ { const u32 m_ = (u32)(esi + 0x1acu); M32(m_) = (u32)(ebx); }
  /* 0050ccc3 mov byte ptr [esi + 0x19c], bl */ { const u32 m_ = (u32)(esi + 0x19cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050ccc9 mov dword ptr [esi + 0x1cc], eax */ { const u32 m_ = (u32)(esi + 0x1ccu); M32(m_) = (u32)(eax); }
  /* 0050cccf mov dword ptr [esi + 0x1c8], ebx */ { const u32 m_ = (u32)(esi + 0x1c8u); M32(m_) = (u32)(ebx); }
  /* 0050ccd5 mov byte ptr [esi + 0x1b8], bl */ { const u32 m_ = (u32)(esi + 0x1b8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050ccdb mov dword ptr [esi + 0x1e8], eax */ { const u32 m_ = (u32)(esi + 0x1e8u); M32(m_) = (u32)(eax); }
  /* 0050cce1 mov dword ptr [esi + 0x1e4], ebx */ { const u32 m_ = (u32)(esi + 0x1e4u); M32(m_) = (u32)(ebx); }
  /* 0050cce7 mov byte ptr [esi + 0x1d4], bl */ { const u32 m_ = (u32)(esi + 0x1d4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050cced push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0050ccef push 0x6514a0 */ { u32 v_ = 0x6514a0u; esp -= 4; M32(esp) = v_; }
  /* 0050ccf4 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0050ccf7 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0050ccfb call 0x404420 */ esp -= 4; M32(esp) = 0x50cd00u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50ccfbu); RETCHK(0x50cd00u, 0x50ccfbu); LOADALL;
  /* 0050cd00 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050cd03 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0050cd08 mov dword ptr [esi + 0x1f0], eax */ { const u32 m_ = (u32)(esi + 0x1f0u); M32(m_) = (u32)(eax); }
  /* 0050cd0e mov dword ptr [esi + 0x1f4], eax */ { const u32 m_ = (u32)(esi + 0x1f4u); M32(m_) = (u32)(eax); }
  /* 0050cd14 mov byte ptr [esi + 0x3c], al */ { const u32 m_ = (u32)(esi + 0x3cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0050cd17 mov dword ptr [esi + 0x180], ebx */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(ebx); }
  /* 0050cd1d mov dword ptr [esi + 0x184], ebx */ { const u32 m_ = (u32)(esi + 0x184u); M32(m_) = (u32)(ebx); }
  /* 0050cd23 mov dword ptr [esi + 0x1ec], ebx */ { const u32 m_ = (u32)(esi + 0x1ecu); M32(m_) = (u32)(ebx); }
  /* 0050cd29 mov byte ptr [esi + 0x1f8], bl */ { const u32 m_ = (u32)(esi + 0x1f8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050cd2f mov dword ptr [esi + 0x1fc], ebx */ { const u32 m_ = (u32)(esi + 0x1fcu); M32(m_) = (u32)(ebx); }
  /* 0050cd35 mov dword ptr [esi + 0x200], ebx */ { const u32 m_ = (u32)(esi + 0x200u); M32(m_) = (u32)(ebx); }
  /* 0050cd3b mov eax, esi */ { eax = (u32)(esi); }
  /* 0050cd3d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050cd3e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050cd45 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050cd46 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050cd48 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050cd49 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050cd50(CPU *c) {
  NATIVE_HOOK(0x50cd50u) REGS; LOADALL;
L_0050cd50:;
  /* 0050cd50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050cd51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050cd53 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050cd54 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050cd56 call 0x50cd80 */ esp -= 4; M32(esp) = 0x50cd5bu; SAVEALL; F_0050cd80(c); ABI_CHECK(0x50cd80u, 0x50cd56u); RETCHK(0x50cd5bu, 0x50cd56u); LOADALL;
  /* 0050cd5b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050cd5f je 0x50cd6a */ if (ZF_) goto L_0050cd6a;
  /* 0050cd61 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050cd62 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50cd67u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50cd62u); RETCHK(0x50cd67u, 0x50cd62u); LOADALL;
  /* 0050cd67 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050cd6a:;
  /* 0050cd6a mov eax, esi */ { eax = (u32)(esi); }
  /* 0050cd6c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050cd6d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050cd6e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050cd80(CPU *c) {
  NATIVE_HOOK(0x50cd80u) REGS; LOADALL;
L_0050cd80:;
  /* 0050cd80 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050cd81 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050cd82 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050cd84 mov dword ptr [esi], 0x651328 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x651328u); }
  /* 0050cd8a cmp dword ptr [esi + 0x1e8], 0x10 */ { const u32 m_ = (u32)(esi + 0x1e8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050cd91 jb 0x50cda2 */ if (CF_) goto L_0050cda2;
  /* 0050cd93 mov eax, dword ptr [esi + 0x1d4] */ { const u32 m_ = (u32)(esi + 0x1d4u); eax = (u32)(M32(m_)); }
  /* 0050cd99 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050cd9a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50cd9fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50cd9au); RETCHK(0x50cd9fu, 0x50cd9au); LOADALL;
  /* 0050cd9f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050cda2:;
  /* 0050cda2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050cda4 mov dword ptr [esi + 0x1e8], 0xf */ { const u32 m_ = (u32)(esi + 0x1e8u); M32(m_) = (u32)(0xfu); }
  /* 0050cdae mov dword ptr [esi + 0x1e4], ebx */ { const u32 m_ = (u32)(esi + 0x1e4u); M32(m_) = (u32)(ebx); }
  /* 0050cdb4 mov byte ptr [esi + 0x1d4], bl */ { const u32 m_ = (u32)(esi + 0x1d4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050cdba cmp dword ptr [esi + 0x1cc], 0x10 */ { const u32 m_ = (u32)(esi + 0x1ccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050cdc1 jb 0x50cdd2 */ if (CF_) goto L_0050cdd2;
  /* 0050cdc3 mov ecx, dword ptr [esi + 0x1b8] */ { const u32 m_ = (u32)(esi + 0x1b8u); ecx = (u32)(M32(m_)); }
  /* 0050cdc9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050cdca call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50cdcfu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50cdcau); RETCHK(0x50cdcfu, 0x50cdcau); LOADALL;
  /* 0050cdcf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050cdd2:;
  /* 0050cdd2 mov dword ptr [esi + 0x1cc], 0xf */ { const u32 m_ = (u32)(esi + 0x1ccu); M32(m_) = (u32)(0xfu); }
  /* 0050cddc mov dword ptr [esi + 0x1c8], ebx */ { const u32 m_ = (u32)(esi + 0x1c8u); M32(m_) = (u32)(ebx); }
  /* 0050cde2 mov byte ptr [esi + 0x1b8], bl */ { const u32 m_ = (u32)(esi + 0x1b8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050cde8 cmp dword ptr [esi + 0x1b0], 0x10 */ { const u32 m_ = (u32)(esi + 0x1b0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050cdef jb 0x50ce00 */ if (CF_) goto L_0050ce00;
  /* 0050cdf1 mov edx, dword ptr [esi + 0x19c] */ { const u32 m_ = (u32)(esi + 0x19cu); edx = (u32)(M32(m_)); }
  /* 0050cdf7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050cdf8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50cdfdu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50cdf8u); RETCHK(0x50cdfdu, 0x50cdf8u); LOADALL;
  /* 0050cdfd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050ce00:;
  /* 0050ce00 mov dword ptr [esi + 0x1ac], ebx */ { const u32 m_ = (u32)(esi + 0x1acu); M32(m_) = (u32)(ebx); }
  /* 0050ce06 mov dword ptr [esi + 0x1b0], 0xf */ { const u32 m_ = (u32)(esi + 0x1b0u); M32(m_) = (u32)(0xfu); }
  /* 0050ce10 mov byte ptr [esi + 0x19c], bl */ { const u32 m_ = (u32)(esi + 0x19cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050ce16 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050ce18 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050ce19 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050ce1a jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0050ce20(CPU *c) {
  NATIVE_HOOK(0x50ce20u) REGS; LOADALL;
L_0050ce20:;
  /* 0050ce20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050ce21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050ce23 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050ce26 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050ce27 push 0x651490 */ { u32 v_ = 0x651490u; esp -= 4; M32(esp) = v_; }
  /* 0050ce2c mov byte ptr [esi + 0x10], 0 */ { const u32 m_ = (u32)(esi + 0x10u); M8(m_) = (u8)(0x0u); }
  /* 0050ce30 call dword ptr [0x62e198] */ { const u32 m_ = (u32)(0x62e198u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50ce36u; SAVEALL; call_ind(c, t_); RETCHK(0x50ce36u, 0x50ce30u); LOADALL; }
  /* 0050ce36 mov edi, eax */ { edi = (u32)(eax); }
  /* 0050ce38 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050ce3a je 0x50cea8 */ if (ZF_) goto L_0050cea8;
  /* 0050ce3c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050ce3d mov ebx, dword ptr [0x62e19c] */ { const u32 m_ = (u32)(0x62e19cu); ebx = (u32)(M32(m_)); }
  /* 0050ce43 push 0x65147c */ { u32 v_ = 0x65147cu; esp -= 4; M32(esp) = v_; }
  /* 0050ce48 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050ce49 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x50ce4bu; SAVEALL; call_ind(c, t_); RETCHK(0x50ce4bu, 0x50ce49u); LOADALL; }
  /* 0050ce4b push 0x651464 */ { u32 v_ = 0x651464u; esp -= 4; M32(esp) = v_; }
  /* 0050ce50 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050ce51 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0050ce53 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x50ce55u; SAVEALL; call_ind(c, t_); RETCHK(0x50ce55u, 0x50ce53u); LOADALL; }
  /* 0050ce55 push 0x651454 */ { u32 v_ = 0x651454u; esp -= 4; M32(esp) = v_; }
  /* 0050ce5a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050ce5b mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0050ce5e call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x50ce60u; SAVEALL; call_ind(c, t_); RETCHK(0x50ce60u, 0x50ce5eu); LOADALL; }
  /* 0050ce60 push 0x651444 */ { u32 v_ = 0x651444u; esp -= 4; M32(esp) = v_; }
  /* 0050ce65 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050ce66 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050ce69 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x50ce6bu; SAVEALL; call_ind(c, t_); RETCHK(0x50ce6bu, 0x50ce69u); LOADALL; }
  /* 0050ce6b mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0050ce6e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050ce70 mov ecx, 0xc */ { ecx = (u32)(0xcu); }
  /* 0050ce75 lea edi, [ebp - 0x30] */ edi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0050ce78 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0050ce7a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ce7b mov dword ptr [ebp - 0x30], 0x30 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0x30u); }
  /* 0050ce82 call dword ptr [0x62e160] */ { const u32 m_ = (u32)(0x62e160u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50ce88u; SAVEALL; call_ind(c, t_); RETCHK(0x50ce88u, 0x50ce82u); LOADALL; }
  /* 0050ce88 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 0050ce8b lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0050ce8e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ce8f mov dword ptr [ebp - 0x28], 0x50ceb0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x50ceb0u); }
  /* 0050ce96 mov dword ptr [ebp - 8], 0x651434 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x651434u); }
  /* 0050ce9d call dword ptr [0x62e504] */ { const u32 m_ = (u32)(0x62e504u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50cea3u; SAVEALL; call_ind(c, t_); RETCHK(0x50cea3u, 0x50ce9du); LOADALL; }
  /* 0050cea3 mov byte ptr [esi + 0x10], 1 */ { const u32 m_ = (u32)(esi + 0x10u); M8(m_) = (u8)(0x1u); }
  /* 0050cea7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0050cea8:;
  /* 0050cea8 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050ceaa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050ceab mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050cead pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050ceae ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050ceb0(CPU *c) {
  NATIVE_HOOK(0x50ceb0u) REGS; LOADALL;
L_0050ceb0:;
  /* 0050ceb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050ceb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050ceb3 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0050ceb6 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0050ceb8 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0050ceb9 je 0x50cf1c */ if (ZF_) goto L_0050cf1c;
  /* 0050cebb dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0050cebc je 0x50cf00 */ if (ZF_) goto L_0050cf00;
  /* 0050cebe sub eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050cec1 je 0x50ceda */ if (ZF_) goto L_0050ceda;
  /* 0050cec3 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0050cec6 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0050cec9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ceca mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050cecd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050cece push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050cecf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ced0 call dword ptr [0x62e508] */ { const u32 m_ = (u32)(0x62e508u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50ced6u; SAVEALL; call_ind(c, t_); RETCHK(0x50ced6u, 0x50ced0u); LOADALL; }
  /* 0050ced6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050ced7 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_0050ceda:;
  /* 0050ceda mov al, byte ptr [0x7a810c] */ { const u32 m_ = (u32)(0x7a810cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050cedf test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050cee1 je 0x50cefa */ if (ZF_) goto L_0050cefa;
  /* 0050cee3 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0050cee6 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050cee8 movzx edx, ax */ { edx = (u32)((eax & 0xffffu)); }
  /* 0050ceeb mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050ceee shr ecx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0050cef1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050cef2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050cef3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050cef4 call dword ptr [0x7a8108] */ { const u32 m_ = (u32)(0x7a8108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50cefau; SAVEALL; call_ind(c, t_); RETCHK(0x50cefau, 0x50cef4u); LOADALL; }
L_0050cefa:;
  /* 0050cefa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050cefc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050cefd ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_0050cf00:;
  /* 0050cf00 mov al, byte ptr [0x7a810c] */ { const u32 m_ = (u32)(0x7a810cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050cf05 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050cf07 je 0x50cf13 */ if (ZF_) goto L_0050cf13;
  /* 0050cf09 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050cf0c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050cf0d call dword ptr [0x7a8100] */ { const u32 m_ = (u32)(0x7a8100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50cf13u; SAVEALL; call_ind(c, t_); RETCHK(0x50cf13u, 0x50cf0du); LOADALL; }
L_0050cf13:;
  /* 0050cf13 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0050cf18 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050cf19 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_0050cf1c:;
  /* 0050cf1c mov al, byte ptr [0x7a810c] */ { const u32 m_ = (u32)(0x7a810cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050cf21 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050cf23 je 0x50cefa */ if (ZF_) goto L_0050cefa;
  /* 0050cf25 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0050cf28 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050cf29 call dword ptr [0x7a80fc] */ { const u32 m_ = (u32)(0x7a80fcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50cf2fu; SAVEALL; call_ind(c, t_); RETCHK(0x50cf2fu, 0x50cf29u); LOADALL; }
  /* 0050cf2f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050cf31 je 0x50cefa */ if (ZF_) goto L_0050cefa;
  /* 0050cf33 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050cf36 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050cf37 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0050cf40(CPU *c) {
  NATIVE_HOOK(0x50cf40u) REGS; LOADALL;
L_0050cf40:;
  /* 0050cf40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050cf41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050cf43 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050cf46 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050cf47 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050cf48 mov esi, eax */ { esi = (u32)(eax); }
  /* 0050cf4a mov eax, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); eax = (u32)(M32(m_)); }
  /* 0050cf50 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050cf52 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050cf53 mov dword ptr [esi + 0x1ec], 1 */ { const u32 m_ = (u32)(esi + 0x1ecu); M32(m_) = (u32)(0x1u); }
  /* 0050cf5d je 0x50cf76 */ if (ZF_) goto L_0050cf76;
  /* 0050cf5f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050cf61 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050cf63 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0050cf65 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050cf66 call dword ptr [0x62e4d8] */ { const u32 m_ = (u32)(0x62e4d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50cf6cu; SAVEALL; call_ind(c, t_); RETCHK(0x50cf6cu, 0x50cf66u); LOADALL; }
  /* 0050cf6c mov dword ptr [esi + 0x184], 0 */ { const u32 m_ = (u32)(esi + 0x184u); M32(m_) = (u32)(0x0u); }
L_0050cf76:;
  /* 0050cf76 fld dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); FPUSH((double)MF32(m_)); }
  /* 0050cf7c call 0x61b154 */ esp -= 4; M32(esp) = 0x50cf81u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50cf7cu); RETCHK(0x50cf81u, 0x50cf7cu); LOADALL;
  /* 0050cf81 fld dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); FPUSH((double)MF32(m_)); }
  /* 0050cf87 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050cf89 call 0x61b154 */ esp -= 4; M32(esp) = 0x50cf8eu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50cf89u); RETCHK(0x50cf8eu, 0x50cf89u); LOADALL;
  /* 0050cf8e fld dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); FPUSH((double)MF32(m_)); }
  /* 0050cf94 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050cf97 call 0x61b154 */ esp -= 4; M32(esp) = 0x50cf9cu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50cf97u); RETCHK(0x50cf9cu, 0x50cf97u); LOADALL;
  /* 0050cf9c fld dword ptr [esi + 0x190] */ { const u32 m_ = (u32)(esi + 0x190u); FPUSH((double)MF32(m_)); }
  /* 0050cfa2 mov edi, eax */ { edi = (u32)(eax); }
  /* 0050cfa4 call 0x61b154 */ esp -= 4; M32(esp) = 0x50cfa9u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50cfa4u); RETCHK(0x50cfa9u, 0x50cfa4u); LOADALL;
  /* 0050cfa9 mov cl, byte ptr [0x7a810c] */ { const u32 m_ = (u32)(0x7a810cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050cfaf test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050cfb1 je 0x50d01b */ if (ZF_) goto L_0050d01b;
  /* 0050cfb3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050cfb6 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0050cfb9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050cfbb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050cfbc mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0050cfbf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050cfc1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050cfc2 sub edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0050cfc4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050cfc5 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050cfc7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050cfc8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050cfc9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050cfca push 0x80000000 */ { u32 v_ = 0x80000000u; esp -= 4; M32(esp) = v_; }
  /* 0050cfcf push 0x651428 */ { u32 v_ = 0x651428u; esp -= 4; M32(esp) = v_; }
  /* 0050cfd4 push 0x651434 */ { u32 v_ = 0x651434u; esp -= 4; M32(esp) = v_; }
  /* 0050cfd9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050cfdb call dword ptr [0x62e50c] */ { const u32 m_ = (u32)(0x62e50cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50cfe1u; SAVEALL; call_ind(c, t_); RETCHK(0x50cfe1u, 0x50cfdbu); LOADALL; }
  /* 0050cfe1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050cfe3 mov dword ptr [esi + 0x184], eax */ { const u32 m_ = (u32)(esi + 0x184u); M32(m_) = (u32)(eax); }
  /* 0050cfe9 je 0x50d01b */ if (ZF_) goto L_0050d01b;
  /* 0050cfeb cmp dword ptr [esi + 0x1b0], 0x10 */ { const u32 m_ = (u32)(esi + 0x1b0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050cff2 jb 0x50d00d */ if (CF_) goto L_0050d00d;
  /* 0050cff4 mov esi, dword ptr [esi + 0x19c] */ { const u32 m_ = (u32)(esi + 0x19cu); esi = (u32)(M32(m_)); }
  /* 0050cffa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050cffb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050cffc call dword ptr [0x7a8104] */ { const u32 m_ = (u32)(0x7a8104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d002u; SAVEALL; call_ind(c, t_); RETCHK(0x50d002u, 0x50cffcu); LOADALL; }
  /* 0050d002 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050d003 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050d004 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050d006 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050d007 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050d009 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050d00a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0050d00d:;
  /* 0050d00d add esi, 0x19c */ { u32 a_ = esi, b_ = 0x19cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0050d013 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050d014 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d015 call dword ptr [0x7a8104] */ { const u32 m_ = (u32)(0x7a8104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d01bu; SAVEALL; call_ind(c, t_); RETCHK(0x50d01bu, 0x50d015u); LOADALL; }
L_0050d01b:;
  /* 0050d01b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050d01c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050d01d mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050d01f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050d020 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050d022 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050d023 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050d030(CPU *c) {
  NATIVE_HOOK(0x50d030u) REGS; LOADALL;
L_0050d030:;
  /* 0050d030 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050d031 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050d033 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050d036 fld dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); FPUSH((double)MF32(m_)); }
  /* 0050d03c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050d03d mov edi, eax */ { edi = (u32)(eax); }
  /* 0050d03f mov dword ptr [esi + 0x180], edi */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(edi); }
  /* 0050d045 call 0x61b154 */ esp -= 4; M32(esp) = 0x50d04au; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50d045u); RETCHK(0x50d04au, 0x50d045u); LOADALL;
  /* 0050d04a fld dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); FPUSH((double)MF32(m_)); }
  /* 0050d050 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0050d053 call 0x61b154 */ esp -= 4; M32(esp) = 0x50d058u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50d053u); RETCHK(0x50d058u, 0x50d053u); LOADALL;
  /* 0050d058 fld dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); FPUSH((double)MF32(m_)); }
  /* 0050d05e mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050d061 call 0x61b154 */ esp -= 4; M32(esp) = 0x50d066u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50d061u); RETCHK(0x50d066u, 0x50d061u); LOADALL;
  /* 0050d066 fld dword ptr [esi + 0x190] */ { const u32 m_ = (u32)(esi + 0x190u); FPUSH((double)MF32(m_)); }
  /* 0050d06c mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0050d06f call 0x61b154 */ esp -= 4; M32(esp) = 0x50d074u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50d06fu); RETCHK(0x50d074u, 0x50d06fu); LOADALL;
  /* 0050d074 jmp 0x62d952 */ goto L_0062d952;
L_0050d079:;
  /* 0050d079 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0050d07c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d07d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050d07f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050d080 call dword ptr [0x62e510] */ { const u32 m_ = (u32)(0x62e510u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d086u; SAVEALL; call_ind(c, t_); RETCHK(0x50d086u, 0x50d080u); LOADALL; }
  /* 0050d086 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 0050d089 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050d08c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050d08d fstp dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050d093 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050d094 fild dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)(s32)M32(m_)); }
  /* 0050d097 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050d099 fstp dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050d09f fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0050d0a2 fstp dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050d0a8 fild dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050d0ab fstp dword ptr [esi + 0x190] */ { const u32 m_ = (u32)(esi + 0x190u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050d0b1 call 0x50cf40 */ esp -= 4; M32(esp) = 0x50d0b6u; SAVEALL; F_0050cf40(c); ABI_CHECK(0x50cf40u, 0x50d0b1u); RETCHK(0x50d0b6u, 0x50d0b1u); LOADALL;
  /* 0050d0b6 mov eax, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0050d0b9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050d0bb je 0x50d0f9 */ if (ZF_) goto L_0050d0f9;
  /* 0050d0bd mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050d0bf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050d0c0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050d0c2 call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d0c5u; SAVEALL; call_ind(c, t_); RETCHK(0x50d0c5u, 0x50d0c2u); LOADALL; }
  /* 0050d0c5 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0050d0c8 mov edi, eax */ { edi = (u32)(eax); }
  /* 0050d0ca mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050d0cc call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d0cfu; SAVEALL; call_ind(c, t_); RETCHK(0x50d0cfu, 0x50d0ccu); LOADALL; }
  /* 0050d0cf fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 0050d0d1 fsub dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050d0d3 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050d0d5 mov edi, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); edi = (u32)(M32(m_)); }
  /* 0050d0d8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050d0da fstp dword ptr [esi + 0x1fc] */ { const u32 m_ = (u32)(esi + 0x1fcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050d0e0 call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d0e3u; SAVEALL; call_ind(c, t_); RETCHK(0x50d0e3u, 0x50d0e0u); LOADALL; }
  /* 0050d0e3 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050d0e5 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0050d0e7 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050d0e9 call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d0ecu; SAVEALL; call_ind(c, t_); RETCHK(0x50d0ecu, 0x50d0e9u); LOADALL; }
  /* 0050d0ec fld dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0050d0ef fsub dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050d0f2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050d0f3 fstp dword ptr [esi + 0x200] */ { const u32 m_ = (u32)(esi + 0x200u); MF32(m_) = (float)ST(0); FPOP(); }
L_0050d0f9:;
  /* 0050d0f9 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0050d0fe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050d0ff mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050d101 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050d102 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0062d952:;
  /* 0062d952 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0062d955 call 0x62d8f4 */ esp -= 4; M32(esp) = 0x62d95au; SAVEALL; F_0062d8f4(c); ABI_CHECK(0x62d8f4u, 0x62d955u); RETCHK(0x62d95au, 0x62d955u); LOADALL;
  /* 0062d95a push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0062d95c jmp 0x50d079 */ goto L_0050d079;
}

void F_0050d110(CPU *c) {
  NATIVE_HOOK(0x50d110u) REGS; LOADALL;
L_0050d110:;
  /* 0050d110 mov eax, dword ptr [ecx + 0x1ec] */ { const u32 m_ = (u32)(ecx + 0x1ecu); eax = (u32)(M32(m_)); }
  /* 0050d116 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050d118 je 0x50d128 */ if (ZF_) goto L_0050d128;
  /* 0050d11a mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050d11c call dword ptr [eax + 0xdc] */ { const u32 m_ = (u32)(eax + 0xdcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d122u; SAVEALL; call_ind(c, t_); RETCHK(0x50d122u, 0x50d11cu); LOADALL; }
  /* 0050d122 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0050d127 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050d128:;
  /* 0050d128 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050d12a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050d130(CPU *c) {
  NATIVE_HOOK(0x50d130u) REGS; LOADALL;
L_0050d130:;
  /* 0050d130 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050d131 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050d133 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050d135 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 0050d13a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050d140 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d141 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050d148 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050d14b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050d14c mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050d14e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050d151 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050d153 jne 0x50d168 */ if (!ZF_) goto L_0050d168;
  /* 0050d155 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050d157 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050d158 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050d15b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050d162 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050d164 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050d165 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0050d168:;
  /* 0050d168 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050d16a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050d16b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050d16c call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d16fu; SAVEALL; call_ind(c, t_); RETCHK(0x50d16fu, 0x50d16cu); LOADALL; }
  /* 0050d16f push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 0050d174 mov edi, eax */ { edi = (u32)(eax); }
  /* 0050d176 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50d17bu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50d176u); RETCHK(0x50d17bu, 0x50d176u); LOADALL;
  /* 0050d17b mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050d17e fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050d181 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 0050d186 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050d188 fstp dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050d18e call 0x560fd0 */ esp -= 4; M32(esp) = 0x50d193u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50d18eu); RETCHK(0x50d193u, 0x50d18eu); LOADALL;
  /* 0050d193 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050d196 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050d199 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 0050d19e mov eax, edi */ { eax = (u32)(edi); }
  /* 0050d1a0 fstp dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050d1a6 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50d1abu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50d1a6u); RETCHK(0x50d1abu, 0x50d1a6u); LOADALL;
  /* 0050d1ab mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050d1ae fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050d1b1 push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 0050d1b6 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050d1b8 fadd dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050d1be fstp dword ptr [esi + 0x190] */ { const u32 m_ = (u32)(esi + 0x190u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050d1c4 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50d1c9u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50d1c4u); RETCHK(0x50d1c9u, 0x50d1c4u); LOADALL;
  /* 0050d1c9 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050d1cc fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050d1cf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050d1d0 mov eax, 0x651424 */ { eax = (u32)(0x651424u); }
  /* 0050d1d5 fadd dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050d1db fstp dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050d1e1 call 0x560ed0 */ esp -= 4; M32(esp) = 0x50d1e6u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50d1e1u); RETCHK(0x50d1e6u, 0x50d1e1u); LOADALL;
  /* 0050d1e6 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050d1e8 lea ebx, [ecx + 1] */ ebx = (u32)((u32)(ecx + 0x1u));
  /* 0050d1eb jmp 0x50d1f0 */ goto L_0050d1f0;
L_0050d1f0:;
  /* 0050d1f0 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050d1f2 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050d1f3 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050d1f5 jne 0x50d1f0 */ if (!ZF_) goto L_0050d1f0;
  /* 0050d1f7 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050d1f9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050d1fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d1fb lea ecx, [esi + 0x198] */ ecx = (u32)((u32)(esi + 0x198u));
  /* 0050d201 call 0x404420 */ esp -= 4; M32(esp) = 0x50d206u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50d201u); RETCHK(0x50d206u, 0x50d201u); LOADALL;
  /* 0050d206 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050d207 mov eax, 0x65141c */ { eax = (u32)(0x65141cu); }
  /* 0050d20c call 0x560ed0 */ esp -= 4; M32(esp) = 0x50d211u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50d20cu); RETCHK(0x50d211u, 0x50d20cu); LOADALL;
  /* 0050d211 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050d213 je 0x50d22d */ if (ZF_) goto L_0050d22d;
  /* 0050d215 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050d217 lea ebx, [ecx + 1] */ ebx = (u32)((u32)(ecx + 0x1u));
  /* 0050d21a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0050d220:;
  /* 0050d220 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050d222 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050d223 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050d225 jne 0x50d220 */ if (!ZF_) goto L_0050d220;
  /* 0050d227 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050d229 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050d22a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d22b jmp 0x50d234 */ goto L_0050d234;
L_0050d22d:;
  /* 0050d22d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050d22f push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
L_0050d234:;
  /* 0050d234 lea ecx, [esi + 0x1b4] */ ecx = (u32)((u32)(esi + 0x1b4u));
  /* 0050d23a call 0x404420 */ esp -= 4; M32(esp) = 0x50d23fu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50d23au); RETCHK(0x50d23fu, 0x50d23au); LOADALL;
  /* 0050d23f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050d240 mov eax, 0x65140c */ { eax = (u32)(0x65140cu); }
  /* 0050d245 call 0x560ed0 */ esp -= 4; M32(esp) = 0x50d24au; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50d245u); RETCHK(0x50d24au, 0x50d245u); LOADALL;
  /* 0050d24a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050d24c lea ebx, [ecx + 1] */ ebx = (u32)((u32)(ecx + 0x1u));
  /* 0050d24f nop */ ;
L_0050d250:;
  /* 0050d250 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050d252 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050d253 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050d255 jne 0x50d250 */ if (!ZF_) goto L_0050d250;
  /* 0050d257 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050d259 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050d25a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d25b lea ecx, [esi + 0x1d0] */ ecx = (u32)((u32)(esi + 0x1d0u));
  /* 0050d261 call 0x404420 */ esp -= 4; M32(esp) = 0x50d266u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50d261u); RETCHK(0x50d266u, 0x50d261u); LOADALL;
  /* 0050d266 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050d267 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 0050d26c call 0x560ed0 */ esp -= 4; M32(esp) = 0x50d271u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50d26cu); RETCHK(0x50d271u, 0x50d26cu); LOADALL;
  /* 0050d271 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050d273 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050d275 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 0050d27c mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0050d27f mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050d282 lea edi, [ecx + 1] */ edi = (u32)((u32)(ecx + 0x1u));
L_0050d285:;
  /* 0050d285 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050d287 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050d288 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050d28a jne 0x50d285 */ if (!ZF_) goto L_0050d285;
  /* 0050d28c sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050d28e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050d28f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d290 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0050d293 call 0x404420 */ esp -= 4; M32(esp) = 0x50d298u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50d293u); RETCHK(0x50d298u, 0x50d293u); LOADALL;
  /* 0050d298 lea eax, [esi + 0x188] */ eax = (u32)((u32)(esi + 0x188u));
  /* 0050d29e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d29f lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0050d2a2 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050d2a5 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050d2a7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d2a8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050d2aa call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d2adu; SAVEALL; call_ind(c, t_); RETCHK(0x50d2adu, 0x50d2aau); LOADALL; }
  /* 0050d2ad mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0050d2af cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050d2b3 jb 0x50d2c1 */ if (CF_) goto L_0050d2c1;
  /* 0050d2b5 mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 0050d2b8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050d2b9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50d2beu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50d2b9u); RETCHK(0x50d2beu, 0x50d2b9u); LOADALL;
  /* 0050d2be add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050d2c1:;
  /* 0050d2c1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050d2c4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050d2c5 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 0050d2c7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050d2c8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050d2c9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050d2d0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050d2d2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050d2d3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050d2e0(CPU *c) {
  NATIVE_HOOK(0x50d2e0u) REGS; LOADALL;
L_0050d2e0:;
  /* 0050d2e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050d2e1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050d2e3 mov eax, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); eax = (u32)(M32(m_)); }
  /* 0050d2e9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050d2eb je 0x50d304 */ if (ZF_) goto L_0050d304;
  /* 0050d2ed push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050d2ef push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050d2f1 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 0050d2f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d2f4 call dword ptr [0x62e4d8] */ { const u32 m_ = (u32)(0x62e4d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d2fau; SAVEALL; call_ind(c, t_); RETCHK(0x50d2fau, 0x50d2f4u); LOADALL; }
  /* 0050d2fa mov dword ptr [esi + 0x184], 0 */ { const u32 m_ = (u32)(esi + 0x184u); M32(m_) = (u32)(0x0u); }
L_0050d304:;
  /* 0050d304 mov dword ptr [esi + 0x1ec], 0 */ { const u32 m_ = (u32)(esi + 0x1ecu); M32(m_) = (u32)(0x0u); }
  /* 0050d30e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050d30f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050d310(CPU *c) {
  NATIVE_HOOK(0x50d310u) REGS; LOADALL;
L_0050d310:;
  /* 0050d310 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050d311 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050d313 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050d314 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050d315 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050d317 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050d318 call 0x508500 */ esp -= 4; M32(esp) = 0x50d31du; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x50d318u); RETCHK(0x50d31du, 0x50d318u); LOADALL;
  /* 0050d31d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050d31f je 0x50d36d */ if (ZF_) goto L_0050d36d;
  /* 0050d321 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050d322 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050d324 call 0x507b00 */ esp -= 4; M32(esp) = 0x50d329u; SAVEALL; F_00507b00(c); ABI_CHECK(0x507b00u, 0x50d324u); RETCHK(0x50d329u, 0x50d324u); LOADALL;
  /* 0050d329 call 0x518bb0 */ esp -= 4; M32(esp) = 0x50d32eu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x50d329u); RETCHK(0x50d32eu, 0x50d329u); LOADALL;
  /* 0050d32e call 0x5180e0 */ esp -= 4; M32(esp) = 0x50d333u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x50d32eu); RETCHK(0x50d333u, 0x50d32eu); LOADALL;
  /* 0050d333 mov edi, dword ptr [eax + 0x1f4] */ { const u32 m_ = (u32)(eax + 0x1f4u); edi = (u32)(M32(m_)); }
  /* 0050d339 add eax, 0x1dc */ { u32 a_ = eax, b_ = 0x1dcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050d33e cmp edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050d341 lea edx, [eax + 4] */ edx = (u32)((u32)(eax + 0x4u));
  /* 0050d344 jb 0x50d34a */ if (CF_) goto L_0050d34a;
  /* 0050d346 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 0050d348 jmp 0x50d34c */ goto L_0050d34c;
L_0050d34a:;
  /* 0050d34a mov esi, edx */ { esi = (u32)(edx); }
L_0050d34c:;
  /* 0050d34c mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0050d34f add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050d351 cmp edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050d354 jb 0x50d358 */ if (CF_) goto L_0050d358;
  /* 0050d356 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
L_0050d358:;
  /* 0050d358 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050d359 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050d35a lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0050d35d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050d35e mov edi, eax */ { edi = (u32)(eax); }
  /* 0050d360 call 0x40cdc0 */ esp -= 4; M32(esp) = 0x50d365u; SAVEALL; F_0040cdc0(c); ABI_CHECK(0x40cdc0u, 0x50d360u); RETCHK(0x50d365u, 0x50d360u); LOADALL;
  /* 0050d365 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050d366 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050d368 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050d369 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050d36b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050d36c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050d36d:;
  /* 0050d36d xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050d36f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050d370 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050d372 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050d373 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050d380(CPU *c) {
  NATIVE_HOOK(0x50d380u) REGS; LOADALL;
L_0050d380:;
  /* 0050d380 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050d381 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050d383 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050d386 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050d387 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050d389 mov eax, dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); eax = (u32)(M32(m_)); }
  /* 0050d38f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050d391 je 0x50d6c8 */ if (ZF_) goto L_0050d6c8;
  /* 0050d397 mov al, byte ptr [esi + 0x1f8] */ { const u32 m_ = (u32)(esi + 0x1f8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050d39d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050d39f jne 0x50d3bf */ if (!ZF_) goto L_0050d3bf;
  /* 0050d3a1 mov cl, byte ptr [0x696e28] */ { const u32 m_ = (u32)(0x696e28u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050d3a7 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050d3a9 je 0x50d3bf */ if (ZF_) goto L_0050d3bf;
  /* 0050d3ab mov eax, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); eax = (u32)(M32(m_)); }
  /* 0050d3b1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050d3b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d3b4 call dword ptr [0x62e514] */ { const u32 m_ = (u32)(0x62e514u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d3bau; SAVEALL; call_ind(c, t_); RETCHK(0x50d3bau, 0x50d3b4u); LOADALL; }
  /* 0050d3ba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050d3bb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050d3bd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050d3be ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050d3bf:;
  /* 0050d3bf mov ecx, dword ptr [esi + 0x1f0] */ { const u32 m_ = (u32)(esi + 0x1f0u); ecx = (u32)(M32(m_)); }
  /* 0050d3c5 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050d3c7 jne 0x50d3dd */ if (!ZF_) goto L_0050d3dd;
  /* 0050d3c9 mov ecx, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); ecx = (u32)(M32(m_)); }
  /* 0050d3cf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050d3d1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050d3d2 call dword ptr [0x62e514] */ { const u32 m_ = (u32)(0x62e514u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d3d8u; SAVEALL; call_ind(c, t_); RETCHK(0x50d3d8u, 0x50d3d2u); LOADALL; }
  /* 0050d3d8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050d3d9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050d3db pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050d3dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050d3dd:;
  /* 0050d3dd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050d3df je 0x50d6b9 */ if (ZF_) goto L_0050d6b9;
  /* 0050d3e5 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0050d3e8 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050d3ea call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d3edu; SAVEALL; call_ind(c, t_); RETCHK(0x50d3edu, 0x50d3eau); LOADALL; }
  /* 0050d3ed fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0050d3f0 fadd dword ptr [esi + 0x200] */ { const u32 m_ = (u32)(esi + 0x200u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050d3f6 call 0x61b154 */ esp -= 4; M32(esp) = 0x50d3fbu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50d3f6u); RETCHK(0x50d3fbu, 0x50d3f6u); LOADALL;
  /* 0050d3fb mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0050d3fe mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0050d401 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050d403 call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d406u; SAVEALL; call_ind(c, t_); RETCHK(0x50d406u, 0x50d403u); LOADALL; }
  /* 0050d406 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0050d408 fadd dword ptr [esi + 0x1fc] */ { const u32 m_ = (u32)(esi + 0x1fcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050d40e call 0x61b154 */ esp -= 4; M32(esp) = 0x50d413u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50d40eu); RETCHK(0x50d413u, 0x50d40eu); LOADALL;
  /* 0050d413 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0050d416 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050d419 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050d41b call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d41eu; SAVEALL; call_ind(c, t_); RETCHK(0x50d41eu, 0x50d41bu); LOADALL; }
  /* 0050d41e fld dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0050d421 fadd dword ptr [esi + 0x200] */ { const u32 m_ = (u32)(esi + 0x200u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050d427 call 0x61b154 */ esp -= 4; M32(esp) = 0x50d42cu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50d427u); RETCHK(0x50d42cu, 0x50d427u); LOADALL;
  /* 0050d42c mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0050d42f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0050d432 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050d434 call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d437u; SAVEALL; call_ind(c, t_); RETCHK(0x50d437u, 0x50d434u); LOADALL; }
  /* 0050d437 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0050d43a fadd dword ptr [esi + 0x1fc] */ { const u32 m_ = (u32)(esi + 0x1fcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050d440 call 0x61b154 */ esp -= 4; M32(esp) = 0x50d445u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50d440u); RETCHK(0x50d445u, 0x50d440u); LOADALL;
  /* 0050d445 jmp 0x62d93c */ goto L_0062d93c;
L_0050d44b:;
  /* 0050d44b push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0050d44d lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0050d450 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050d451 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050d453 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050d454 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0050d457 call dword ptr [0x62e510] */ { const u32 m_ = (u32)(0x62e510u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d45du; SAVEALL; call_ind(c, t_); RETCHK(0x50d45du, 0x50d457u); LOADALL; }
  /* 0050d45d mov eax, dword ptr [0x9c0268] */ { const u32 m_ = (u32)(0x9c0268u); eax = (u32)(M32(m_)); }
  /* 0050d462 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050d464 jmp 0x50d646 */ goto L_0050d646;
L_0050d646:;
  /* 0050d646 fld dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); FPUSH((double)MF32(m_)); }
  /* 0050d64c fsub dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050d652 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050d658 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050d65a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050d65d je 0x50d66d */ if (ZF_) goto L_0050d66d;
  /* 0050d65f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050d661 fld dword ptr [esi + 0x18c] */ { const u32 m_ = (u32)(esi + 0x18cu); FPUSH((double)MF32(m_)); }
  /* 0050d667 fsub dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050d66d:;
  /* 0050d66d fld dword ptr [esi + 0x190] */ { const u32 m_ = (u32)(esi + 0x190u); FPUSH((double)MF32(m_)); }
  /* 0050d673 fsub dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050d679 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050d67f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050d681 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050d684 je 0x50d694 */ if (ZF_) goto L_0050d694;
  /* 0050d686 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050d688 fld dword ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); FPUSH((double)MF32(m_)); }
  /* 0050d68e fsub dword ptr [esi + 0x190] */ { const u32 m_ = (u32)(esi + 0x190u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050d694:;
  /* 0050d694 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0050d696 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050d698 call 0x61b154 */ esp -= 4; M32(esp) = 0x50d69du; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50d698u); RETCHK(0x50d69du, 0x50d698u); LOADALL;
  /* 0050d69d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d69e call 0x61b154 */ esp -= 4; M32(esp) = 0x50d6a3u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x50d69eu); RETCHK(0x50d6a3u, 0x50d69eu); LOADALL;
  /* 0050d6a3 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050d6a6 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 0050d6a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d6aa mov eax, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); eax = (u32)(M32(m_)); }
  /* 0050d6b0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050d6b1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050d6b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d6b3 call dword ptr [0x62e518] */ { const u32 m_ = (u32)(0x62e518u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d6b9u; SAVEALL; call_ind(c, t_); RETCHK(0x50d6b9u, 0x50d6b3u); LOADALL; }
L_0050d6b9:;
  /* 0050d6b9 call 0x9dffa8 */ esp -= 4; M32(esp) = 0x50d6beu; SAVEALL; F_009dffa8(c); ABI_CHECK(0x9dffa8u, 0x50d6b9u); RETCHK(0x50d6beu, 0x50d6b9u); LOADALL;
  /* 0050d6be nop */ ;
  /* 0050d6bf nop */ ;
  /* 0050d6c0 nop */ ;
  /* 0050d6c1 nop */ ;
  /* 0050d6c2 nop */ ;
  /* 0050d6c3 nop */ ;
  /* 0050d6c4 nop */ ;
  /* 0050d6c5 nop */ ;
  /* 0050d6c6 nop */ ;
  /* 0050d6c7 nop */ ;
L_0050d6c8:;
  /* 0050d6c8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050d6c9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050d6cb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050d6cc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062d93c:;
  /* 0062d93c mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0062d93f call 0x62d8f4 */ esp -= 4; M32(esp) = 0x62d944u; SAVEALL; F_0062d8f4(c); ABI_CHECK(0x62d8f4u, 0x62d93fu); RETCHK(0x62d944u, 0x62d93fu); LOADALL;
  /* 0062d944 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0062d947 mov edx, dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); edx = (u32)(M32(m_)); }
  /* 0062d94d jmp 0x50d44b */ goto L_0050d44b;
}

void F_0050d6d0(CPU *c) {
  NATIVE_HOOK(0x50d6d0u) REGS; LOADALL;
L_0050d6d0:;
  /* 0050d6d0 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050d6d2 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 0050d6d5 mov dword ptr [ecx + 0x1f0], eax */ { const u32 m_ = (u32)(ecx + 0x1f0u); M32(m_) = (u32)(eax); }
  /* 0050d6db jmp dword ptr [edx + 0xd4] */ { const u32 m_ = (u32)(edx + 0xd4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0050d6f0(CPU *c) {
  NATIVE_HOOK(0x50d6f0u) REGS; LOADALL;
L_0050d6f0:;
  /* 0050d6f0 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 0050d6f3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050d6f5 mov dword ptr [ecx + 0x1f0], eax */ { const u32 m_ = (u32)(ecx + 0x1f0u); M32(m_) = (u32)(eax); }
  /* 0050d6fb je 0x50d70d */ if (ZF_) goto L_0050d70d;
  /* 0050d6fd mov eax, dword ptr [ecx + 0x184] */ { const u32 m_ = (u32)(ecx + 0x184u); eax = (u32)(M32(m_)); }
  /* 0050d703 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0050d705 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d706 call dword ptr [0x62e514] */ { const u32 m_ = (u32)(0x62e514u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d70cu; SAVEALL; call_ind(c, t_); RETCHK(0x50d70cu, 0x50d706u); LOADALL; }
  /* 0050d70c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050d70d:;
  /* 0050d70d mov ecx, dword ptr [ecx + 0x184] */ { const u32 m_ = (u32)(ecx + 0x184u); ecx = (u32)(M32(m_)); }
  /* 0050d713 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050d715 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050d716 call dword ptr [0x62e514] */ { const u32 m_ = (u32)(0x62e514u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d71cu; SAVEALL; call_ind(c, t_); RETCHK(0x50d71cu, 0x50d716u); LOADALL; }
  /* 0050d71c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050d720(CPU *c) {
  NATIVE_HOOK(0x50d720u) REGS; LOADALL;
L_0050d720:;
  /* 0050d720 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 0050d723 mov dword ptr [ecx + 0x1f4], eax */ { const u32 m_ = (u32)(ecx + 0x1f4u); M32(m_) = (u32)(eax); }
  /* 0050d729 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050d730(CPU *c) {
  NATIVE_HOOK(0x50d730u) REGS; LOADALL;
L_0050d730:;
  /* 0050d730 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050d731 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050d733 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050d735 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0050d73a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050d740 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d741 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050d748 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050d749 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050d74a push 0x50d7b0 */ { u32 v_ = 0x50d7b0u; esp -= 4; M32(esp) = v_; }
  /* 0050d74f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050d752 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050d754 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0050d756 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050d759 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0050d75c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050d75e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050d75f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0050d762 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0050d769 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0050d76c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d76d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050d770 call 0x404140 */ esp -= 4; M32(esp) = 0x50d775u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50d770u); RETCHK(0x50d775u, 0x50d770u); LOADALL;
  /* 0050d775 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050d778 call 0x405c00 */ esp -= 4; M32(esp) = 0x50d77du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x50d778u); RETCHK(0x50d77du, 0x50d778u); LOADALL;
  /* 0050d77d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050d77f call 0x405c80 */ esp -= 4; M32(esp) = 0x50d784u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x50d77fu); RETCHK(0x50d784u, 0x50d77fu); LOADALL;
  /* 0050d784 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050d788 jb 0x50d796 */ if (CF_) goto L_0050d796;
  /* 0050d78a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0050d78d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050d78e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50d793u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50d78eu); RETCHK(0x50d793u, 0x50d78eu); LOADALL;
  /* 0050d793 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050d796:;
  /* 0050d796 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050d799 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050d79b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050d7a2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050d7a3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050d7a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050d7a6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_0050d7b0(CPU *c) {
  NATIVE_HOOK(0x50d7b0u) REGS; LOADALL;
L_0050d7b0:;
  /* 0050d7b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050d7b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050d7b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050d7b5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0050d7ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050d7c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d7c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050d7c8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050d7c9 push 0x204 */ { u32 v_ = 0x204u; esp -= 4; M32(esp) = v_; }
  /* 0050d7ce call 0x5fe934 */ esp -= 4; M32(esp) = 0x50d7d3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50d7ceu); RETCHK(0x50d7d3u, 0x50d7ceu); LOADALL;
  /* 0050d7d3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050d7d6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050d7d9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050d7db mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050d7e2 je 0x50d7fa */ if (ZF_) goto L_0050d7fa;
  /* 0050d7e4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050d7e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d7e7 call 0x50cc80 */ esp -= 4; M32(esp) = 0x50d7ecu; SAVEALL; F_0050cc80(c); ABI_CHECK(0x50cc80u, 0x50d7e7u); RETCHK(0x50d7ecu, 0x50d7e7u); LOADALL;
  /* 0050d7ec mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050d7ef mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050d7f6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050d7f8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050d7f9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050d7fa:;
  /* 0050d7fa mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050d7fd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050d7ff mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050d806 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050d808 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050d809 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050d810(CPU *c) {
  NATIVE_HOOK(0x50d810u) REGS; LOADALL;
L_0050d810:;
  /* 0050d810 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050d811 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050d813 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050d819 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050d81b push 0x61c968 */ { u32 v_ = 0x61c968u; esp -= 4; M32(esp) = v_; }
  /* 0050d820 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d821 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050d824 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050d82b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050d82c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050d82d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050d830 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d831 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050d832 call 0x506b60 */ esp -= 4; M32(esp) = 0x50d837u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x50d832u); RETCHK(0x50d837u, 0x50d832u); LOADALL;
  /* 0050d837 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050d839 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0050d83b mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050d83e push 0x6515a0 */ { u32 v_ = 0x6515a0u; esp -= 4; M32(esp) = v_; }
  /* 0050d843 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0050d846 mov dword ptr [esi], 0x6514b0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6514b0u); }
  /* 0050d84c call 0x404420 */ esp -= 4; M32(esp) = 0x50d851u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50d84cu); RETCHK(0x50d851u, 0x50d84cu); LOADALL;
  /* 0050d851 mov al, 0xff */ { eax = (eax & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 0050d853 mov ecx, 0x3f800000 */ { ecx = (u32)(0x3f800000u); }
  /* 0050d858 mov byte ptr [esi + 0x1af], al */ { const u32 m_ = (u32)(esi + 0x1afu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0050d85e mov byte ptr [esi + 0x1ad], al */ { const u32 m_ = (u32)(esi + 0x1adu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0050d864 mov byte ptr [esi + 0x1ae], al */ { const u32 m_ = (u32)(esi + 0x1aeu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0050d86a mov byte ptr [esi + 0x1ac], al */ { const u32 m_ = (u32)(esi + 0x1acu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0050d870 mov dword ptr [esi + 0x198], ebx */ { const u32 m_ = (u32)(esi + 0x198u); M32(m_) = (u32)(ebx); }
  /* 0050d876 mov dword ptr [esi + 0x194], ebx */ { const u32 m_ = (u32)(esi + 0x194u); M32(m_) = (u32)(ebx); }
  /* 0050d87c mov byte ptr [esi + 0x3c], bl */ { const u32 m_ = (u32)(esi + 0x3cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050d87f mov dword ptr [esi + 0x1a0], ebx */ { const u32 m_ = (u32)(esi + 0x1a0u); M32(m_) = (u32)(ebx); }
  /* 0050d885 mov dword ptr [esi + 0x19c], ebx */ { const u32 m_ = (u32)(esi + 0x19cu); M32(m_) = (u32)(ebx); }
  /* 0050d88b mov dword ptr [esi + 0x1a8], ecx */ { const u32 m_ = (u32)(esi + 0x1a8u); M32(m_) = (u32)(ecx); }
  /* 0050d891 mov dword ptr [esi + 0x1a4], ecx */ { const u32 m_ = (u32)(esi + 0x1a4u); M32(m_) = (u32)(ecx); }
  /* 0050d897 mov byte ptr [esi + 0x1b9], bl */ { const u32 m_ = (u32)(esi + 0x1b9u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050d89d mov dword ptr [esi + 0x1b0], ebx */ { const u32 m_ = (u32)(esi + 0x1b0u); M32(m_) = (u32)(ebx); }
  /* 0050d8a3 mov dword ptr [esi + 0x1b4], ecx */ { const u32 m_ = (u32)(esi + 0x1b4u); M32(m_) = (u32)(ecx); }
  /* 0050d8a9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050d8ac mov byte ptr [esi + 0x1b8], bl */ { const u32 m_ = (u32)(esi + 0x1b8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050d8b2 mov byte ptr [esi + 0x1ba], bl */ { const u32 m_ = (u32)(esi + 0x1bau); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050d8b8 mov dword ptr [esi + 0x180], ebx */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(ebx); }
  /* 0050d8be mov dword ptr [esi + 0x188], ebx */ { const u32 m_ = (u32)(esi + 0x188u); M32(m_) = (u32)(ebx); }
  /* 0050d8c4 mov dword ptr [esi + 0x190], ebx */ { const u32 m_ = (u32)(esi + 0x190u); M32(m_) = (u32)(ebx); }
  /* 0050d8ca mov byte ptr [esi + 0x3d], 1 */ { const u32 m_ = (u32)(esi + 0x3du); M8(m_) = (u8)(0x1u); }
  /* 0050d8ce mov eax, esi */ { eax = (u32)(esi); }
  /* 0050d8d0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050d8d1 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050d8d8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050d8d9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050d8db pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050d8dc ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050d8e0(CPU *c) {
  NATIVE_HOOK(0x50d8e0u) REGS; LOADALL;
L_0050d8e0:;
  /* 0050d8e0 mov dword ptr [ecx], 0x6514b0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x6514b0u); }
  /* 0050d8e6 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_0050d8f0(CPU *c) {
  NATIVE_HOOK(0x50d8f0u) REGS; LOADALL;
L_0050d8f0:;
  /* 0050d8f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050d8f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050d8f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050d8f5 push 0x624328 */ { u32 v_ = 0x624328u; esp -= 4; M32(esp) = v_; }
  /* 0050d8fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050d900 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d901 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050d908 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050d90b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050d90c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0050d90e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050d911 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050d913 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050d914 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050d915 jne 0x50d92c */ if (!ZF_) goto L_0050d92c;
  /* 0050d917 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050d919 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050d91c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050d923 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050d924 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050d925 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050d926 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050d928 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050d929 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0050d92c:;
  /* 0050d92c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050d92e call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50d931u; SAVEALL; call_ind(c, t_); RETCHK(0x50d931u, 0x50d92eu); LOADALL; }
  /* 0050d931 push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 0050d936 mov edi, eax */ { edi = (u32)(eax); }
  /* 0050d938 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50d93du; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50d938u); RETCHK(0x50d93du, 0x50d938u); LOADALL;
  /* 0050d93d mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050d940 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050d943 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 0050d948 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050d94a fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050d94d call 0x560fd0 */ esp -= 4; M32(esp) = 0x50d952u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50d94du); RETCHK(0x50d952u, 0x50d94du); LOADALL;
  /* 0050d952 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050d955 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050d958 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 0050d95d mov eax, edi */ { eax = (u32)(edi); }
  /* 0050d95f fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050d962 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50d967u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50d962u); RETCHK(0x50d967u, 0x50d962u); LOADALL;
  /* 0050d967 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050d96a fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050d96d push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 0050d972 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050d974 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050d977 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050d97a call 0x560fd0 */ esp -= 4; M32(esp) = 0x50d97fu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50d97au); RETCHK(0x50d97fu, 0x50d97au); LOADALL;
  /* 0050d97f mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050d982 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050d985 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0050d988 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050d98a fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050d98d fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050d990 je 0x50d99e */ if (ZF_) goto L_0050d99e;
  /* 0050d992 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d993 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050d996 call 0x52d060 */ esp -= 4; M32(esp) = 0x50d99bu; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x50d996u); RETCHK(0x50d99bu, 0x50d996u); LOADALL;
  /* 0050d99b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050d99e:;
  /* 0050d99e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050d99f mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 0050d9a4 call 0x560ed0 */ esp -= 4; M32(esp) = 0x50d9a9u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50d9a4u); RETCHK(0x50d9a9u, 0x50d9a4u); LOADALL;
  /* 0050d9a9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050d9ab mov dword ptr [ebp - 0x20], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xfu); }
  /* 0050d9b2 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 0050d9b9 mov byte ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)(0x0u); }
  /* 0050d9bd lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
L_0050d9c0:;
  /* 0050d9c0 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050d9c2 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050d9c3 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050d9c5 jne 0x50d9c0 */ if (!ZF_) goto L_0050d9c0;
  /* 0050d9c7 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050d9c9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050d9ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d9cb lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0050d9ce call 0x404420 */ esp -= 4; M32(esp) = 0x50d9d3u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50d9ceu); RETCHK(0x50d9d3u, 0x50d9ceu); LOADALL;
  /* 0050d9d3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050d9d5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050d9d6 mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 0050d9db mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050d9e2 call 0x560ed0 */ esp -= 4; M32(esp) = 0x50d9e7u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50d9e2u); RETCHK(0x50d9e7u, 0x50d9e2u); LOADALL;
  /* 0050d9e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050d9e8 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050d9eb lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050d9ee mov eax, esp */ { eax = (u32)(esp); }
  /* 0050d9f0 mov dword ptr [ebp + 8], esp */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esp); }
  /* 0050d9f3 call 0x52cea0 */ esp -= 4; M32(esp) = 0x50d9f8u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x50d9f3u); RETCHK(0x50d9f8u, 0x50d9f3u); LOADALL;
  /* 0050d9f8 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0050d9fb call 0x50da30 */ esp -= 4; M32(esp) = 0x50da00u; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x50d9fbu); RETCHK(0x50da00u, 0x50d9fbu); LOADALL;
  /* 0050da00 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0050da02 cmp dword ptr [ebp - 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050da06 jb 0x50da14 */ if (CF_) goto L_0050da14;
  /* 0050da08 mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 0050da0b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050da0c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50da11u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50da0cu); RETCHK(0x50da11u, 0x50da0cu); LOADALL;
  /* 0050da11 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050da14:;
  /* 0050da14 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050da17 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050da18 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050da19 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 0050da1b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050da22 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050da23 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050da25 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050da26 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050da30(CPU *c) {
  NATIVE_HOOK(0x50da30u) REGS; LOADALL;
L_0050da30:;
  /* 0050da30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050da31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050da33 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050da36 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050da37 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050da38 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050da3a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050da3c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050da3d lea ecx, [ebx + 0x20] */ ecx = (u32)((u32)(ebx + 0x20u));
  /* 0050da40 call 0x404140 */ esp -= 4; M32(esp) = 0x50da45u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50da40u); RETCHK(0x50da45u, 0x50da40u); LOADALL;
  /* 0050da45 lea ecx, [ebx + 0x44] */ ecx = (u32)((u32)(ebx + 0x44u));
  /* 0050da48 lea edx, [ebp + 8] */ edx = (u32)((u32)(ebp + 0x8u));
  /* 0050da4b lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0050da4e call 0x52cee0 */ esp -= 4; M32(esp) = 0x50da53u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x50da4eu); RETCHK(0x50da53u, 0x50da4eu); LOADALL;
  /* 0050da53 mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
  /* 0050da56 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050da58 je 0x50db89 */ if (ZF_) goto L_0050db89;
  /* 0050da5e mov edi, 0x63e71c */ { edi = (u32)(0x63e71cu); }
  /* 0050da63 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0050da68 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0050da6a repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 0050da6c je 0x50db89 */ if (ZF_) goto L_0050db89;
  /* 0050da72 push 0x94 */ { u32 v_ = 0x94u; esp -= 4; M32(esp) = v_; }
  /* 0050da77 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50da7cu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50da77u); RETCHK(0x50da7cu, 0x50da77u); LOADALL;
  /* 0050da7c xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0050da7e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050da81 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050da83 je 0x50da8e */ if (ZF_) goto L_0050da8e;
  /* 0050da85 mov esi, eax */ { esi = (u32)(eax); }
  /* 0050da87 call 0x5267c0 */ esp -= 4; M32(esp) = 0x50da8cu; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x50da87u); RETCHK(0x50da8cu, 0x50da87u); LOADALL;
  /* 0050da8c jmp 0x50da90 */ goto L_0050da90;
L_0050da8e:;
  /* 0050da8e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050da90:;
  /* 0050da90 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050da92 mov dword ptr [ebx + 0x198], eax */ { const u32 m_ = (u32)(ebx + 0x198u); M32(m_) = (u32)(eax); }
  /* 0050da98 je 0x50db34 */ if (ZF_) goto L_0050db34;
  /* 0050da9e push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0050daa0 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50daa5u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50daa0u); RETCHK(0x50daa5u, 0x50daa0u); LOADALL;
  /* 0050daa5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050daa8 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050daaa je 0x50dab7 */ if (ZF_) goto L_0050dab7;
  /* 0050daac mov dword ptr [eax], 0x64d178 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64d178u); }
  /* 0050dab2 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 0050dab5 jmp 0x50dab9 */ goto L_0050dab9;
L_0050dab7:;
  /* 0050dab7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050dab9:;
  /* 0050dab9 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050dabb mov dword ptr [ebx + 0x194], eax */ { const u32 m_ = (u32)(ebx + 0x194u); M32(m_) = (u32)(eax); }
  /* 0050dac1 jne 0x50daed */ if (!ZF_) goto L_0050daed;
  /* 0050dac3 mov edx, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); edx = (u32)(M32(m_)); }
  /* 0050dac9 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050dacb je 0x50dadd */ if (ZF_) goto L_0050dadd;
  /* 0050dacd mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0050dacf call 0x5267e0 */ esp -= 4; M32(esp) = 0x50dad4u; SAVEALL; F_005267e0(c); ABI_CHECK(0x5267e0u, 0x50dacfu); RETCHK(0x50dad4u, 0x50dacfu); LOADALL;
  /* 0050dad4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050dad5 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50dadau; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50dad5u); RETCHK(0x50dadau, 0x50dad5u); LOADALL;
  /* 0050dada add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050dadd:;
  /* 0050dadd mov dword ptr [ebx + 0x198], edi */ { const u32 m_ = (u32)(ebx + 0x198u); M32(m_) = (u32)(edi); }
  /* 0050dae3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050dae4 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050dae6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050dae7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050dae9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050daea ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
L_0050daed:;
  /* 0050daed mov ecx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0050daf0 mov edx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0050daf3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050daf4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050daf5 call 0x529310 */ esp -= 4; M32(esp) = 0x50dafau; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x50daf5u); RETCHK(0x50dafau, 0x50daf5u); LOADALL;
  /* 0050dafa test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050dafc jne 0x50db3e */ if (!ZF_) goto L_0050db3e;
  /* 0050dafe mov ecx, dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); ecx = (u32)(M32(m_)); }
  /* 0050db04 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050db06 je 0x50db0e */ if (ZF_) goto L_0050db0e;
  /* 0050db08 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050db0a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050db0c call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50db0eu; SAVEALL; call_ind(c, t_); RETCHK(0x50db0eu, 0x50db0cu); LOADALL; }
L_0050db0e:;
  /* 0050db0e mov edx, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); edx = (u32)(M32(m_)); }
  /* 0050db14 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050db16 je 0x50db28 */ if (ZF_) goto L_0050db28;
  /* 0050db18 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0050db1a call 0x5267e0 */ esp -= 4; M32(esp) = 0x50db1fu; SAVEALL; F_005267e0(c); ABI_CHECK(0x5267e0u, 0x50db1au); RETCHK(0x50db1fu, 0x50db1au); LOADALL;
  /* 0050db1f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050db20 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50db25u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50db20u); RETCHK(0x50db25u, 0x50db20u); LOADALL;
  /* 0050db25 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050db28:;
  /* 0050db28 mov dword ptr [ebx + 0x194], edi */ { const u32 m_ = (u32)(ebx + 0x194u); M32(m_) = (u32)(edi); }
  /* 0050db2e mov dword ptr [ebx + 0x198], edi */ { const u32 m_ = (u32)(ebx + 0x198u); M32(m_) = (u32)(edi); }
L_0050db34:;
  /* 0050db34 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050db35 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050db37 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050db38 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050db3a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050db3b ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
L_0050db3e:;
  /* 0050db3e mov eax, dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); eax = (u32)(M32(m_)); }
  /* 0050db44 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050db46 je 0x50db97 */ if (ZF_) goto L_0050db97;
  /* 0050db48 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0050db4b cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050db4d je 0x50db56 */ if (ZF_) goto L_0050db56;
  /* 0050db4f mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 0050db51 mov ecx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0050db54 jmp 0x50db58 */ goto L_0050db58;
L_0050db56:;
  /* 0050db56 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_0050db58:;
  /* 0050db58 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050db5b cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050db5d je 0x50db66 */ if (ZF_) goto L_0050db66;
  /* 0050db5f mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0050db61 mov eax, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050db64 jmp 0x50db68 */ goto L_0050db68;
L_0050db66:;
  /* 0050db66 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050db68:;
  /* 0050db68 mov esi, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); esi = (u32)(M32(m_)); }
  /* 0050db6e mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0050db70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050db71 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050db72 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050db73 lea eax, [ebx + 0x44] */ eax = (u32)((u32)(ebx + 0x44u));
  /* 0050db76 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050db77 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050db79 call dword ptr [edx + 0xe0] */ { const u32 m_ = (u32)(edx + 0xe0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50db7fu; SAVEALL; call_ind(c, t_); RETCHK(0x50db7fu, 0x50db79u); LOADALL; }
  /* 0050db7f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050db80 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050db82 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050db83 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050db85 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050db86 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
L_0050db89:;
  /* 0050db89 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050db8b mov dword ptr [ebx + 0x198], eax */ { const u32 m_ = (u32)(ebx + 0x198u); M32(m_) = (u32)(eax); }
  /* 0050db91 mov dword ptr [ebx + 0x194], eax */ { const u32 m_ = (u32)(ebx + 0x194u); M32(m_) = (u32)(eax); }
L_0050db97:;
  /* 0050db97 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050db98 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050db9a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050db9b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050db9d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050db9e ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0050dbb0(CPU *c) {
  NATIVE_HOOK(0x50dbb0u) REGS; LOADALL;
L_0050dbb0:;
  /* 0050dbb0 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050dbb2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050dbb3 jne 0x50dbbc */ if (!ZF_) goto L_0050dbbc;
  /* 0050dbb5 mov esi, edi */ { esi = (u32)(edi); }
  /* 0050dbb7 call 0x50e170 */ esp -= 4; M32(esp) = 0x50dbbcu; SAVEALL; F_0050e170(c); ABI_CHECK(0x50e170u, 0x50dbb7u); RETCHK(0x50dbbcu, 0x50dbb7u); LOADALL;
L_0050dbbc:;
  /* 0050dbbc mov al, byte ptr [edi + 0x1ba] */ { const u32 m_ = (u32)(edi + 0x1bau); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050dbc2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050dbc4 jne 0x50dbe0 */ if (!ZF_) goto L_0050dbe0;
  /* 0050dbc6 mov ecx, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); ecx = (u32)(M32(m_)); }
  /* 0050dbcc test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050dbce je 0x50dbe0 */ if (ZF_) goto L_0050dbe0;
  /* 0050dbd0 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050dbd2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050dbd4 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50dbd6u; SAVEALL; call_ind(c, t_); RETCHK(0x50dbd6u, 0x50dbd4u); LOADALL; }
  /* 0050dbd6 mov dword ptr [edi + 0x194], 0 */ { const u32 m_ = (u32)(edi + 0x194u); M32(m_) = (u32)(0x0u); }
L_0050dbe0:;
  /* 0050dbe0 mov eax, dword ptr [edi + 0x198] */ { const u32 m_ = (u32)(edi + 0x198u); eax = (u32)(M32(m_)); }
  /* 0050dbe6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050dbe8 mov dword ptr [edi + 0x194], ebx */ { const u32 m_ = (u32)(edi + 0x194u); M32(m_) = (u32)(ebx); }
  /* 0050dbee jne 0x50dc1a */ if (!ZF_) goto L_0050dc1a;
  /* 0050dbf0 push 0x94 */ { u32 v_ = 0x94u; esp -= 4; M32(esp) = v_; }
  /* 0050dbf5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50dbfau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50dbf5u); RETCHK(0x50dbfau, 0x50dbf5u); LOADALL;
  /* 0050dbfa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050dbfd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050dbff je 0x50dc0a */ if (ZF_) goto L_0050dc0a;
  /* 0050dc01 mov esi, eax */ { esi = (u32)(eax); }
  /* 0050dc03 call 0x5267c0 */ esp -= 4; M32(esp) = 0x50dc08u; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x50dc03u); RETCHK(0x50dc08u, 0x50dc03u); LOADALL;
  /* 0050dc08 jmp 0x50dc0c */ goto L_0050dc0c;
L_0050dc0a:;
  /* 0050dc0a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050dc0c:;
  /* 0050dc0c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050dc0e mov dword ptr [edi + 0x198], eax */ { const u32 m_ = (u32)(edi + 0x198u); M32(m_) = (u32)(eax); }
  /* 0050dc14 jne 0x50dc1a */ if (!ZF_) goto L_0050dc1a;
  /* 0050dc16 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050dc18 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050dc19 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050dc1a:;
  /* 0050dc1a mov eax, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); eax = (u32)(M32(m_)); }
  /* 0050dc20 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050dc22 mov byte ptr [edi + 0x1ba], 1 */ { const u32 m_ = (u32)(edi + 0x1bau); M8(m_) = (u8)(0x1u); }
  /* 0050dc29 je 0x50dc62 */ if (ZF_) goto L_0050dc62;
  /* 0050dc2b mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0050dc2e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050dc30 je 0x50dc39 */ if (ZF_) goto L_0050dc39;
  /* 0050dc32 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 0050dc34 mov ecx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0050dc37 jmp 0x50dc3b */ goto L_0050dc3b;
L_0050dc39:;
  /* 0050dc39 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_0050dc3b:;
  /* 0050dc3b mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050dc3e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050dc40 je 0x50dc49 */ if (ZF_) goto L_0050dc49;
  /* 0050dc42 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0050dc44 mov eax, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050dc47 jmp 0x50dc4b */ goto L_0050dc4b;
L_0050dc49:;
  /* 0050dc49 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050dc4b:;
  /* 0050dc4b mov esi, dword ptr [edi + 0x198] */ { const u32 m_ = (u32)(edi + 0x198u); esi = (u32)(M32(m_)); }
  /* 0050dc51 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0050dc53 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050dc54 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050dc55 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050dc56 lea eax, [edi + 0x44] */ eax = (u32)((u32)(edi + 0x44u));
  /* 0050dc59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050dc5a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050dc5c call dword ptr [edx + 0xe0] */ { const u32 m_ = (u32)(edx + 0xe0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50dc62u; SAVEALL; call_ind(c, t_); RETCHK(0x50dc62u, 0x50dc5cu); LOADALL; }
L_0050dc62:;
  /* 0050dc62 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050dc64 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050dc65 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050dc70(CPU *c) {
  NATIVE_HOOK(0x50dc70u) REGS; LOADALL;
L_0050dc70:;
  /* 0050dc70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050dc71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050dc73 mov al, byte ptr [ebx + 0x1ba] */ { const u32 m_ = (u32)(ebx + 0x1bau); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050dc79 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050dc7b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050dc7c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050dc7d jne 0x50dcf3 */ if (!ZF_) goto L_0050dcf3;
  /* 0050dc7f mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0050dc82 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050dc84 je 0x50dd0e */ if (ZF_) goto L_0050dd0e;
  /* 0050dc8a mov edi, 0x63e71c */ { edi = (u32)(0x63e71cu); }
  /* 0050dc8f mov esi, edx */ { esi = (u32)(edx); }
  /* 0050dc91 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0050dc96 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050dc98 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 0050dc9a je 0x50dd0e */ if (ZF_) goto L_0050dd0e;
  /* 0050dc9c mov edi, dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); edi = (u32)(M32(m_)); }
  /* 0050dca2 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050dca4 je 0x50dcf3 */ if (ZF_) goto L_0050dcf3;
  /* 0050dca6 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050dca9 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050dcac mov esi, edx */ { esi = (u32)(edx); }
  /* 0050dcae mov edi, edi */ { edi = (u32)(edi); }
L_0050dcb0:;
  /* 0050dcb0 mov dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050dcb2 mov cl, dl */ { ecx = (ecx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 0050dcb4 cmp dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = (edx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0050dcb6 jne 0x50dcd4 */ if (!ZF_) goto L_0050dcd4;
  /* 0050dcb8 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050dcba je 0x50dcd0 */ if (ZF_) goto L_0050dcd0;
  /* 0050dcbc mov dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050dcbf mov cl, dl */ { ecx = (ecx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 0050dcc1 cmp dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); u32 a_ = (edx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0050dcc4 jne 0x50dcd4 */ if (!ZF_) goto L_0050dcd4;
  /* 0050dcc6 add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0050dcc9 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050dccc test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050dcce jne 0x50dcb0 */ if (!ZF_) goto L_0050dcb0;
L_0050dcd0:;
  /* 0050dcd0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050dcd2 jmp 0x50dcd9 */ goto L_0050dcd9;
L_0050dcd4:;
  /* 0050dcd4 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0050dcd6 sbb eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
L_0050dcd9:;
  /* 0050dcd9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050dcdb je 0x50ddff */ if (ZF_) goto L_0050ddff;
  /* 0050dce1 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0050dce3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050dce5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050dce7 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50dce9u; SAVEALL; call_ind(c, t_); RETCHK(0x50dce9u, 0x50dce7u); LOADALL; }
  /* 0050dce9 mov dword ptr [ebx + 0x194], 0 */ { const u32 m_ = (u32)(ebx + 0x194u); M32(m_) = (u32)(0x0u); }
L_0050dcf3:;
  /* 0050dcf3 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0050dcf5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50dcfau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50dcf5u); RETCHK(0x50dcfau, 0x50dcf5u); LOADALL;
  /* 0050dcfa xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0050dcfc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050dcff cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050dd01 je 0x50dd34 */ if (ZF_) goto L_0050dd34;
  /* 0050dd03 mov dword ptr [eax], 0x64d178 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64d178u); }
  /* 0050dd09 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 0050dd0c jmp 0x50dd36 */ goto L_0050dd36;
L_0050dd0e:;
  /* 0050dd0e mov ecx, dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); ecx = (u32)(M32(m_)); }
  /* 0050dd14 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050dd16 je 0x50ddff */ if (ZF_) goto L_0050ddff;
  /* 0050dd1c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050dd1e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050dd20 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50dd22u; SAVEALL; call_ind(c, t_); RETCHK(0x50dd22u, 0x50dd20u); LOADALL; }
  /* 0050dd22 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050dd23 mov dword ptr [ebx + 0x194], 0 */ { const u32 m_ = (u32)(ebx + 0x194u); M32(m_) = (u32)(0x0u); }
  /* 0050dd2d mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050dd2f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050dd30 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050dd31 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0050dd34:;
  /* 0050dd34 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050dd36:;
  /* 0050dd36 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050dd38 mov dword ptr [ebx + 0x194], eax */ { const u32 m_ = (u32)(ebx + 0x194u); M32(m_) = (u32)(eax); }
  /* 0050dd3e je 0x50dd64 */ if (ZF_) goto L_0050dd64;
  /* 0050dd40 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050dd43 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050dd44 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050dd45 call 0x529310 */ esp -= 4; M32(esp) = 0x50dd4au; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x50dd45u); RETCHK(0x50dd4au, 0x50dd45u); LOADALL;
  /* 0050dd4a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050dd4c jne 0x50dd6c */ if (!ZF_) goto L_0050dd6c;
  /* 0050dd4e mov ecx, dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); ecx = (u32)(M32(m_)); }
  /* 0050dd54 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050dd56 je 0x50dd5e */ if (ZF_) goto L_0050dd5e;
  /* 0050dd58 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050dd5a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050dd5c call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50dd5eu; SAVEALL; call_ind(c, t_); RETCHK(0x50dd5eu, 0x50dd5cu); LOADALL; }
L_0050dd5e:;
  /* 0050dd5e mov dword ptr [ebx + 0x194], edi */ { const u32 m_ = (u32)(ebx + 0x194u); M32(m_) = (u32)(edi); }
L_0050dd64:;
  /* 0050dd64 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050dd65 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050dd67 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050dd68 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050dd69 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0050dd6c:;
  /* 0050dd6c cmp dword ptr [ebx + 0x198], edi */ { const u32 m_ = (u32)(ebx + 0x198u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050dd72 jne 0x50dd9a */ if (!ZF_) goto L_0050dd9a;
  /* 0050dd74 push 0x94 */ { u32 v_ = 0x94u; esp -= 4; M32(esp) = v_; }
  /* 0050dd79 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50dd7eu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50dd79u); RETCHK(0x50dd7eu, 0x50dd79u); LOADALL;
  /* 0050dd7e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050dd81 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050dd83 je 0x50dd8e */ if (ZF_) goto L_0050dd8e;
  /* 0050dd85 mov esi, eax */ { esi = (u32)(eax); }
  /* 0050dd87 call 0x5267c0 */ esp -= 4; M32(esp) = 0x50dd8cu; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x50dd87u); RETCHK(0x50dd8cu, 0x50dd87u); LOADALL;
  /* 0050dd8c jmp 0x50dd90 */ goto L_0050dd90;
L_0050dd8e:;
  /* 0050dd8e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050dd90:;
  /* 0050dd90 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050dd92 mov dword ptr [ebx + 0x198], eax */ { const u32 m_ = (u32)(ebx + 0x198u); M32(m_) = (u32)(eax); }
  /* 0050dd98 je 0x50dd64 */ if (ZF_) goto L_0050dd64;
L_0050dd9a:;
  /* 0050dd9a mov eax, 0x3f800000 */ { eax = (u32)(0x3f800000u); }
  /* 0050dd9f mov dword ptr [ebx + 0x1a8], eax */ { const u32 m_ = (u32)(ebx + 0x1a8u); M32(m_) = (u32)(eax); }
  /* 0050dda5 mov dword ptr [ebx + 0x1a4], eax */ { const u32 m_ = (u32)(ebx + 0x1a4u); M32(m_) = (u32)(eax); }
  /* 0050ddab mov eax, dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); eax = (u32)(M32(m_)); }
  /* 0050ddb1 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050ddb3 mov dword ptr [ebx + 0x1a0], edi */ { const u32 m_ = (u32)(ebx + 0x1a0u); M32(m_) = (u32)(edi); }
  /* 0050ddb9 mov dword ptr [ebx + 0x19c], edi */ { const u32 m_ = (u32)(ebx + 0x19cu); M32(m_) = (u32)(edi); }
  /* 0050ddbf mov byte ptr [ebx + 0x1ba], 0 */ { const u32 m_ = (u32)(ebx + 0x1bau); M8(m_) = (u8)(0x0u); }
  /* 0050ddc6 je 0x50ddff */ if (ZF_) goto L_0050ddff;
  /* 0050ddc8 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0050ddcb cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050ddcd je 0x50ddd6 */ if (ZF_) goto L_0050ddd6;
  /* 0050ddcf mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 0050ddd1 mov ecx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0050ddd4 jmp 0x50ddd8 */ goto L_0050ddd8;
L_0050ddd6:;
  /* 0050ddd6 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_0050ddd8:;
  /* 0050ddd8 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050dddb cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050dddd je 0x50dde6 */ if (ZF_) goto L_0050dde6;
  /* 0050dddf mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0050dde1 mov eax, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050dde4 jmp 0x50dde8 */ goto L_0050dde8;
L_0050dde6:;
  /* 0050dde6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050dde8:;
  /* 0050dde8 mov esi, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); esi = (u32)(M32(m_)); }
  /* 0050ddee mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0050ddf0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050ddf1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050ddf2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ddf3 lea eax, [ebx + 0x44] */ eax = (u32)((u32)(ebx + 0x44u));
  /* 0050ddf6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ddf7 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050ddf9 call dword ptr [edx + 0xe0] */ { const u32 m_ = (u32)(edx + 0xe0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50ddffu; SAVEALL; call_ind(c, t_); RETCHK(0x50ddffu, 0x50ddf9u); LOADALL; }
L_0050ddff:;
  /* 0050ddff pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050de00 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050de02 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050de03 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050de04 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050de10(CPU *c) {
  NATIVE_HOOK(0x50de10u) REGS; LOADALL;
L_0050de10:;
  /* 0050de10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050de11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050de13 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050de16 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0050de19 mov dword ptr [ecx + 0x19c], eax */ { const u32 m_ = (u32)(ecx + 0x19cu); M32(m_) = (u32)(eax); }
  /* 0050de1f mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0050de22 mov dword ptr [ecx + 0x1a0], edx */ { const u32 m_ = (u32)(ecx + 0x1a0u); M32(m_) = (u32)(edx); }
  /* 0050de28 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 0050de2b mov dword ptr [ecx + 0x1a4], eax */ { const u32 m_ = (u32)(ecx + 0x1a4u); M32(m_) = (u32)(eax); }
  /* 0050de31 mov dword ptr [ecx + 0x1a8], edx */ { const u32 m_ = (u32)(ecx + 0x1a8u); M32(m_) = (u32)(edx); }
  /* 0050de37 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050de38 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0050de40(CPU *c) {
  NATIVE_HOOK(0x50de40u) REGS; LOADALL;
L_0050de40:;
  /* 0050de40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050de41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050de43 mov dl, byte ptr [ecx + 0x1ac] */ { const u32 m_ = (u32)(ecx + 0x1acu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050de49 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050de4c mov byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0050de4e mov dl, byte ptr [ecx + 0x1ad] */ { const u32 m_ = (u32)(ecx + 0x1adu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050de54 mov byte ptr [eax + 1], dl */ { const u32 m_ = (u32)(eax + 0x1u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0050de57 mov dl, byte ptr [ecx + 0x1ae] */ { const u32 m_ = (u32)(ecx + 0x1aeu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050de5d mov byte ptr [eax + 2], dl */ { const u32 m_ = (u32)(eax + 0x2u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0050de60 mov cl, byte ptr [ecx + 0x1af] */ { const u32 m_ = (u32)(ecx + 0x1afu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050de66 mov byte ptr [eax + 3], cl */ { const u32 m_ = (u32)(eax + 0x3u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0050de69 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050de6a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050de70(CPU *c) {
  NATIVE_HOOK(0x50de70u) REGS; LOADALL;
L_0050de70:;
  /* 0050de70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050de71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050de73 mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050de76 mov byte ptr [ecx + 0x1b9], al */ { const u32 m_ = (u32)(ecx + 0x1b9u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0050de7c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050de7d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050de80(CPU *c) {
  NATIVE_HOOK(0x50de80u) REGS; LOADALL;
L_0050de80:;
  /* 0050de80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050de81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050de83 sub esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050de86 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050de87 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0050de89 mov eax, dword ptr [edi + 0x198] */ { const u32 m_ = (u32)(edi + 0x198u); eax = (u32)(M32(m_)); }
  /* 0050de8f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050de91 je 0x50e134 */ if (ZF_) goto L_0050e134;
  /* 0050de97 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050de98 lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 0050de9b lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050de9e call 0x52cea0 */ esp -= 4; M32(esp) = 0x50dea3u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x50de9eu); RETCHK(0x50dea3u, 0x50de9eu); LOADALL;
  /* 0050dea3 mov eax, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0050dea6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050dea7 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050deaa call 0x52cf90 */ esp -= 4; M32(esp) = 0x50deafu; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x50deaau); RETCHK(0x50deafu, 0x50deaau); LOADALL;
  /* 0050deaf mov eax, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); eax = (u32)(M32(m_)); }
  /* 0050deb5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050deb8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050deba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050debb je 0x50e134 */ if (ZF_) goto L_0050e134;
  /* 0050dec1 mov al, byte ptr [edi + 0x1b9] */ { const u32 m_ = (u32)(edi + 0x1b9u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050dec7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050dec9 je 0x50df00 */ if (ZF_) goto L_0050df00;
  /* 0050decb mov eax, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); eax = (u32)(M32(m_)); }
  /* 0050ded1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050ded3 je 0x50deef */ if (ZF_) goto L_0050deef;
  /* 0050ded5 mov ecx, dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); ecx = (u32)(M32(m_)); }
  /* 0050dedb mov edx, dword ptr [edi + 0x184] */ { const u32 m_ = (u32)(edi + 0x184u); edx = (u32)(M32(m_)); }
  /* 0050dee1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050dee2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050dee3 lea ecx, [edi + 0x1ac] */ ecx = (u32)((u32)(edi + 0x1acu));
  /* 0050dee9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050deea call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x50deecu; SAVEALL; call_ind(c, t_); RETCHK(0x50deecu, 0x50deeau); LOADALL; }
  /* 0050deec add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050deef:;
  /* 0050deef mov ecx, dword ptr [edi + 0x198] */ { const u32 m_ = (u32)(edi + 0x198u); ecx = (u32)(M32(m_)); }
  /* 0050def5 lea eax, [edi + 0x1ac] */ eax = (u32)((u32)(edi + 0x1acu));
  /* 0050defb call 0x526840 */ esp -= 4; M32(esp) = 0x50df00u; SAVEALL; F_00526840(c); ABI_CHECK(0x526840u, 0x50defbu); RETCHK(0x50df00u, 0x50defbu); LOADALL;
L_0050df00:;
  /* 0050df00 mov eax, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); eax = (u32)(M32(m_)); }
  /* 0050df06 mov ecx, dword ptr [edi + 0x198] */ { const u32 m_ = (u32)(edi + 0x198u); ecx = (u32)(M32(m_)); }
  /* 0050df0c call 0x5267f0 */ esp -= 4; M32(esp) = 0x50df11u; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x50df0cu); RETCHK(0x50df11u, 0x50df0cu); LOADALL;
  /* 0050df11 mov al, byte ptr [edi + 0x1b8] */ { const u32 m_ = (u32)(edi + 0x1b8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050df17 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050df19 je 0x50e003 */ if (ZF_) goto L_0050e003;
  /* 0050df1f fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 0050df22 mov ecx, dword ptr [edi + 0x198] */ { const u32 m_ = (u32)(edi + 0x198u); ecx = (u32)(M32(m_)); }
  /* 0050df28 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050df2b push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0050df30 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0050df35 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050df37 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050df3d fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0050df40 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050df42 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050df45 lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0050df48 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050df4e fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 0050df51 fsub st(2) */ ST(0) = FR(ST(0) - ST(2));
  /* 0050df53 fst dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); }
  /* 0050df56 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 0050df59 fsub st(2) */ ST(0) = FR(ST(0) - ST(2));
  /* 0050df5b fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0050df5d fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 0050df60 fmul dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050df66 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0050df68 fmul dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050df6e fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050df71 fadd st(4) */ ST(0) = FR(ST(0) + ST(4));
  /* 0050df73 fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050df76 fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 0050df79 fadd st(3) */ ST(0) = FR(ST(0) + ST(3));
  /* 0050df7b fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050df7e fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0050df81 fsub st(3) */ ST(0) = FR(ST(0) - ST(3));
  /* 0050df83 fst dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); }
  /* 0050df86 fxch st(2) */ { double t_ = ST(0); ST(0) = ST(2); ST(2) = t_; }
  /* 0050df88 fmul dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050df8e fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050df91 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0050df93 fmul dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050df99 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0050df9b fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 0050df9e fadd st(4) */ ST(0) = FR(ST(0) + ST(4));
  /* 0050dfa0 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050dfa3 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0050dfa5 fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 0050dfa7 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050dfaa fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 0050dfad fsub st(3) */ ST(0) = FR(ST(0) - ST(3));
  /* 0050dfaf fst dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); }
  /* 0050dfb2 fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 0050dfb5 fmul dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050dfbb fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0050dfbd fmul dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050dfc3 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050dfc6 fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 0050dfc8 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050dfcb fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 0050dfce fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0050dfd0 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050dfd3 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0050dfd6 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0050dfd9 fmul dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050dfdf fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050dfe2 fmul dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050dfe8 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 0050dfeb fadd st(3) */ ST(0) = FR(ST(0) + ST(3));
  /* 0050dfed fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050dff0 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 0050dff2 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050dff5 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050dff7 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050dff9 call 0x526c70 */ esp -= 4; M32(esp) = 0x50dffeu; SAVEALL; F_00526c70(c); ABI_CHECK(0x526c70u, 0x50dff9u); RETCHK(0x50dffeu, 0x50dff9u); LOADALL;
  /* 0050dffe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050dfff mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050e001 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e002 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050e003:;
  /* 0050e003 mov eax, dword ptr [edi + 0x1b0] */ { const u32 m_ = (u32)(edi + 0x1b0u); eax = (u32)(M32(m_)); }
  /* 0050e009 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050e00b mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0050e00e je 0x50e09e */ if (ZF_) goto L_0050e09e;
  /* 0050e014 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 0050e017 mov edx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edx = (u32)(M32(m_)); }
  /* 0050e01a fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050e01d mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0050e020 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0050e022 mov dword ptr [ebp - 0x3c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(edx); }
  /* 0050e025 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 0050e028 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050e02e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050e02f mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 0050e032 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0050e035 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050e038 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0050e03b mov dword ptr [ebp - 0x34], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ecx); }
  /* 0050e03e fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050e041 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0050e044 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050e045 mov dword ptr [ebp - 0x30], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(edx); }
  /* 0050e048 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050e04e mov edx, eax */ { edx = (u32)(eax); }
  /* 0050e050 mov dword ptr [ebp - 0x28], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ecx); }
  /* 0050e053 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050e056 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0050e059 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 0050e05c mov dword ptr [ebp - 0x24], edx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edx); }
  /* 0050e05f mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0050e062 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 0050e065 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0050e068 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050e06b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050e06c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050e06d push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0050e06f lea ebx, [ebp - 0x3c] */ ebx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0050e072 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 0050e075 call 0x5265e0 */ esp -= 4; M32(esp) = 0x50e07au; SAVEALL; F_005265e0(c); ABI_CHECK(0x5265e0u, 0x50e075u); RETCHK(0x50e07au, 0x50e075u); LOADALL;
  /* 0050e07a mov ecx, dword ptr [edi + 0x198] */ { const u32 m_ = (u32)(edi + 0x198u); ecx = (u32)(M32(m_)); }
  /* 0050e080 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050e083 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0050e088 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0050e08d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050e08f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050e091 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0050e093 call 0x526c70 */ esp -= 4; M32(esp) = 0x50e098u; SAVEALL; F_00526c70(c); ABI_CHECK(0x526c70u, 0x50e093u); RETCHK(0x50e098u, 0x50e093u); LOADALL;
  /* 0050e098 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050e099 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050e09a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050e09c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e09d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050e09e:;
  /* 0050e09e mov eax, dword ptr [edi + 0x188] */ { const u32 m_ = (u32)(edi + 0x188u); eax = (u32)(M32(m_)); }
  /* 0050e0a4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050e0a6 je 0x50e0d7 */ if (ZF_) goto L_0050e0d7;
  /* 0050e0a8 mov ecx, dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); ecx = (u32)(M32(m_)); }
  /* 0050e0ae mov edx, dword ptr [edi + 0x18c] */ { const u32 m_ = (u32)(edi + 0x18cu); edx = (u32)(M32(m_)); }
  /* 0050e0b4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050e0b5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050e0b6 lea ecx, [edi + 0x1a8] */ ecx = (u32)((u32)(edi + 0x1a8u));
  /* 0050e0bc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050e0bd lea edx, [edi + 0x1a4] */ edx = (u32)((u32)(edi + 0x1a4u));
  /* 0050e0c3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050e0c4 lea ecx, [edi + 0x1a0] */ ecx = (u32)((u32)(edi + 0x1a0u));
  /* 0050e0ca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050e0cb lea edx, [edi + 0x19c] */ edx = (u32)((u32)(edi + 0x19cu));
  /* 0050e0d1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050e0d2 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x50e0d4u; SAVEALL; call_ind(c, t_); RETCHK(0x50e0d4u, 0x50e0d2u); LOADALL; }
  /* 0050e0d4 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050e0d7:;
  /* 0050e0d7 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 0050e0da fsub dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050e0dd fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050e0e3 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050e0e5 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050e0e8 je 0x50e0f2 */ if (ZF_) goto L_0050e0f2;
  /* 0050e0ea fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050e0ec fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 0050e0ef fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050e0f2:;
  /* 0050e0f2 mov eax, dword ptr [edi + 0x1a8] */ { const u32 m_ = (u32)(edi + 0x1a8u); eax = (u32)(M32(m_)); }
  /* 0050e0f8 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050e0fb mov ecx, dword ptr [edi + 0x1a4] */ { const u32 m_ = (u32)(edi + 0x1a4u); ecx = (u32)(M32(m_)); }
  /* 0050e101 mov edx, dword ptr [edi + 0x1a0] */ { const u32 m_ = (u32)(edi + 0x1a0u); edx = (u32)(M32(m_)); }
  /* 0050e107 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e108 mov eax, dword ptr [edi + 0x19c] */ { const u32 m_ = (u32)(edi + 0x19cu); eax = (u32)(M32(m_)); }
  /* 0050e10e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050e10f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050e110 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e111 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050e114 call 0x40d9f0 */ esp -= 4; M32(esp) = 0x50e119u; SAVEALL; F_0040d9f0(c); ABI_CHECK(0x40d9f0u, 0x50e114u); RETCHK(0x50e119u, 0x50e114u); LOADALL;
  /* 0050e119 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 0050e11c mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 0050e11f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050e120 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0050e123 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050e126 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050e127 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050e128 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e129 mov eax, dword ptr [edi + 0x198] */ { const u32 m_ = (u32)(edi + 0x198u); eax = (u32)(M32(m_)); }
  /* 0050e12f call 0x526a10 */ esp -= 4; M32(esp) = 0x50e134u; SAVEALL; F_00526a10(c); ABI_CHECK(0x526a10u, 0x50e12fu); RETCHK(0x50e134u, 0x50e12fu); LOADALL;
L_0050e134:;
  /* 0050e134 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050e135 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050e137 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e138 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050e140(CPU *c) {
  NATIVE_HOOK(0x50e140u) REGS; LOADALL;
L_0050e140:;
  /* 0050e140 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050e141 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050e143 mov edx, dword ptr [esi + 0x198] */ { const u32 m_ = (u32)(esi + 0x198u); edx = (u32)(M32(m_)); }
  /* 0050e149 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050e14b je 0x50e167 */ if (ZF_) goto L_0050e167;
  /* 0050e14d mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0050e14f call 0x5267e0 */ esp -= 4; M32(esp) = 0x50e154u; SAVEALL; F_005267e0(c); ABI_CHECK(0x5267e0u, 0x50e14fu); RETCHK(0x50e154u, 0x50e14fu); LOADALL;
  /* 0050e154 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050e155 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50e15au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50e155u); RETCHK(0x50e15au, 0x50e155u); LOADALL;
  /* 0050e15a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050e15d mov dword ptr [esi + 0x198], 0 */ { const u32 m_ = (u32)(esi + 0x198u); M32(m_) = (u32)(0x0u); }
L_0050e167:;
  /* 0050e167 call 0x50e170 */ esp -= 4; M32(esp) = 0x50e16cu; SAVEALL; F_0050e170(c); ABI_CHECK(0x50e170u, 0x50e167u); RETCHK(0x50e16cu, 0x50e167u); LOADALL;
  /* 0050e16c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050e16d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050e170(CPU *c) {
  NATIVE_HOOK(0x50e170u) REGS; LOADALL;
L_0050e170:;
  /* 0050e170 mov al, byte ptr [esi + 0x1ba] */ { const u32 m_ = (u32)(esi + 0x1bau); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050e176 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050e178 jne 0x50e18a */ if (!ZF_) goto L_0050e18a;
  /* 0050e17a mov ecx, dword ptr [esi + 0x194] */ { const u32 m_ = (u32)(esi + 0x194u); ecx = (u32)(M32(m_)); }
  /* 0050e180 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050e182 je 0x50e194 */ if (ZF_) goto L_0050e194;
  /* 0050e184 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050e186 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050e188 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50e18au; SAVEALL; call_ind(c, t_); RETCHK(0x50e18au, 0x50e188u); LOADALL; }
L_0050e18a:;
  /* 0050e18a mov dword ptr [esi + 0x194], 0 */ { const u32 m_ = (u32)(esi + 0x194u); M32(m_) = (u32)(0x0u); }
L_0050e194:;
  /* 0050e194 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050e1a0(CPU *c) {
  NATIVE_HOOK(0x50e1a0u) REGS; LOADALL;
L_0050e1a0:;
  /* 0050e1a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050e1a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050e1a3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050e1a5 je 0x50e1b5 */ if (ZF_) goto L_0050e1b5;
  /* 0050e1a7 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050e1aa mov eax, dword ptr [eax + 0x198] */ { const u32 m_ = (u32)(eax + 0x198u); eax = (u32)(M32(m_)); }
  /* 0050e1b0 call 0x5275a0 */ esp -= 4; M32(esp) = 0x50e1b5u; SAVEALL; F_005275a0(c); ABI_CHECK(0x5275a0u, 0x50e1b0u); RETCHK(0x50e1b5u, 0x50e1b0u); LOADALL;
L_0050e1b5:;
  /* 0050e1b5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e1b6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050e1c0(CPU *c) {
  NATIVE_HOOK(0x50e1c0u) REGS; LOADALL;
L_0050e1c0:;
  /* 0050e1c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050e1c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050e1c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050e1c5 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0050e1ca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050e1d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e1d1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050e1d8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050e1d9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050e1da push 0x50e240 */ { u32 v_ = 0x50e240u; esp -= 4; M32(esp) = v_; }
  /* 0050e1df sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050e1e2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050e1e4 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0050e1e6 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050e1e9 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0050e1ec push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050e1ee push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050e1ef lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0050e1f2 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0050e1f9 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0050e1fc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e1fd mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050e200 call 0x404140 */ esp -= 4; M32(esp) = 0x50e205u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50e200u); RETCHK(0x50e205u, 0x50e200u); LOADALL;
  /* 0050e205 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050e208 call 0x405c00 */ esp -= 4; M32(esp) = 0x50e20du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x50e208u); RETCHK(0x50e20du, 0x50e208u); LOADALL;
  /* 0050e20d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050e20f call 0x405c80 */ esp -= 4; M32(esp) = 0x50e214u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x50e20fu); RETCHK(0x50e214u, 0x50e20fu); LOADALL;
  /* 0050e214 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050e218 jb 0x50e226 */ if (CF_) goto L_0050e226;
  /* 0050e21a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0050e21d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050e21e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50e223u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50e21eu); RETCHK(0x50e223u, 0x50e21eu); LOADALL;
  /* 0050e223 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050e226:;
  /* 0050e226 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050e229 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050e22b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050e232 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050e233 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050e235 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e236 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_0050e240(CPU *c) {
  NATIVE_HOOK(0x50e240u) REGS; LOADALL;
L_0050e240:;
  /* 0050e240 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050e241 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050e243 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050e245 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0050e24a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050e250 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e251 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050e258 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050e259 push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 0050e25e call 0x5fe934 */ esp -= 4; M32(esp) = 0x50e263u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50e25eu); RETCHK(0x50e263u, 0x50e25eu); LOADALL;
  /* 0050e263 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050e266 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050e269 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050e26b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050e272 je 0x50e28a */ if (ZF_) goto L_0050e28a;
  /* 0050e274 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050e276 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e277 call 0x50d810 */ esp -= 4; M32(esp) = 0x50e27cu; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x50e277u); RETCHK(0x50e27cu, 0x50e277u); LOADALL;
  /* 0050e27c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050e27f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050e286 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050e288 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e289 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050e28a:;
  /* 0050e28a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050e28d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050e28f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050e296 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050e298 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e299 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050e2a0(CPU *c) {
  NATIVE_HOOK(0x50e2a0u) REGS; LOADALL;
L_0050e2a0:;
  /* 0050e2a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050e2a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050e2a3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050e2a9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050e2ab push 0x6202a3 */ { u32 v_ = 0x6202a3u; esp -= 4; M32(esp) = v_; }
  /* 0050e2b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e2b1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050e2b4 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050e2bb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050e2bc mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050e2bf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e2c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050e2c1 call 0x50bb70 */ esp -= 4; M32(esp) = 0x50e2c6u; SAVEALL; F_0050bb70(c); ABI_CHECK(0x50bb70u, 0x50e2c1u); RETCHK(0x50e2c6u, 0x50e2c1u); LOADALL;
  /* 0050e2c6 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0050e2c8 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050e2cf push 0x6516a4 */ { u32 v_ = 0x6516a4u; esp -= 4; M32(esp) = v_; }
  /* 0050e2d4 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0050e2d7 mov dword ptr [esi], 0x6515a8 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6515a8u); }
  /* 0050e2dd call 0x404420 */ esp -= 4; M32(esp) = 0x50e2e2u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50e2ddu); RETCHK(0x50e2e2u, 0x50e2ddu); LOADALL;
  /* 0050e2e2 push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 0050e2e7 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50e2ecu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50e2e7u); RETCHK(0x50e2ecu, 0x50e2e7u); LOADALL;
  /* 0050e2ec add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050e2ef mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0050e2f2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050e2f4 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0050e2f8 je 0x50e303 */ if (ZF_) goto L_0050e303;
  /* 0050e2fa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050e2fb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e2fc call 0x50d810 */ esp -= 4; M32(esp) = 0x50e301u; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x50e2fcu); RETCHK(0x50e301u, 0x50e2fcu); LOADALL;
  /* 0050e301 jmp 0x50e305 */ goto L_0050e305;
L_0050e303:;
  /* 0050e303 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050e305:;
  /* 0050e305 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050e308 mov dword ptr [esi + 0x1cc], eax */ { const u32 m_ = (u32)(esi + 0x1ccu); M32(m_) = (u32)(eax); }
  /* 0050e30e mov eax, esi */ { eax = (u32)(esi); }
  /* 0050e310 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050e317 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050e318 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050e31a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e31b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050e320(CPU *c) {
  NATIVE_HOOK(0x50e320u) REGS; LOADALL;
L_0050e320:;
  /* 0050e320 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050e321 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050e323 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050e324 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050e326 call 0x50e350 */ esp -= 4; M32(esp) = 0x50e32bu; SAVEALL; F_0050e350(c); ABI_CHECK(0x50e350u, 0x50e326u); RETCHK(0x50e32bu, 0x50e326u); LOADALL;
  /* 0050e32b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050e32f je 0x50e33a */ if (ZF_) goto L_0050e33a;
  /* 0050e331 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050e332 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50e337u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50e332u); RETCHK(0x50e337u, 0x50e332u); LOADALL;
  /* 0050e337 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050e33a:;
  /* 0050e33a mov eax, esi */ { eax = (u32)(esi); }
  /* 0050e33c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050e33d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e33e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050e350(CPU *c) {
  NATIVE_HOOK(0x50e350u) REGS; LOADALL;
L_0050e350:;
  /* 0050e350 mov dword ptr [ecx], 0x6515a8 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x6515a8u); }
  /* 0050e356 jmp 0x50bc50 */ SAVEALL; F_0050bc50(c); return;
}

void F_0050e360(CPU *c) {
  NATIVE_HOOK(0x50e360u) REGS; LOADALL;
L_0050e360:;
  /* 0050e360 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050e361 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050e363 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050e365 push 0x624178 */ { u32 v_ = 0x624178u; esp -= 4; M32(esp) = v_; }
  /* 0050e36a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050e370 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e371 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050e378 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050e37b fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0050e37e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050e37f fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050e381 fst dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); }
  /* 0050e384 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0050e38a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050e38c test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050e38f jne 0x50e396 */ if (!ZF_) goto L_0050e396;
  /* 0050e391 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0050e394 jmp 0x50e39b */ goto L_0050e39b;
L_0050e396:;
  /* 0050e396 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 0050e398 fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050e39b:;
  /* 0050e39b fmul dword ptr [0x656ee0] */ { const u32 m_ = (u32)(0x656ee0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050e3a1 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050e3a4 fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0050e3a7 fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050e3aa fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050e3b0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050e3b2 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050e3b5 jne 0x50e3bb */ if (!ZF_) goto L_0050e3bb;
  /* 0050e3b7 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0050e3b9 jmp 0x50e3c1 */ goto L_0050e3c1;
L_0050e3bb:;
  /* 0050e3bb fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0050e3be fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050e3c1:;
  /* 0050e3c1 fmul dword ptr [0x656ee0] */ { const u32 m_ = (u32)(0x656ee0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050e3c7 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050e3ca fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050e3d0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050e3d2 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050e3d5 je 0x50e3df */ if (ZF_) goto L_0050e3df;
  /* 0050e3d7 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050e3d9 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0050e3dc fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050e3df:;
  /* 0050e3df fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0050e3e2 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0050e3e8 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050e3ea test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050e3ed jne 0x50e3f4 */ if (!ZF_) goto L_0050e3f4;
  /* 0050e3ef fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0050e3f2 jmp 0x50e3f9 */ goto L_0050e3f9;
L_0050e3f4:;
  /* 0050e3f4 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 0050e3f6 fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050e3f9:;
  /* 0050e3f9 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0050e3fc fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0050e3fe fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050e401 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0050e404 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050e407 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050e40b fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050e40e fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050e411 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e412 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050e413 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0050e416 call 0x52cec0 */ esp -= 4; M32(esp) = 0x50e41bu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x50e416u); RETCHK(0x50e41bu, 0x50e416u); LOADALL;
  /* 0050e41b mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0050e41e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050e421 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050e422 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050e423 mov ebx, edi */ { ebx = (u32)(edi); }
  /* 0050e425 call 0x50bfc0 */ esp -= 4; M32(esp) = 0x50e42au; SAVEALL; F_0050bfc0(c); ABI_CHECK(0x50bfc0u, 0x50e425u); RETCHK(0x50e42au, 0x50e425u); LOADALL;
  /* 0050e42a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050e42c jne 0x50e43f */ if (!ZF_) goto L_0050e43f;
  /* 0050e42e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050e431 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050e438 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050e439 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050e43b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e43c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0050e43f:;
  /* 0050e43f push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0050e441 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050e443 push 0x651698 */ { u32 v_ = 0x651698u; esp -= 4; M32(esp) = v_; }
  /* 0050e448 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0050e44b mov dword ptr [ebp - 0x2c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0xfu); }
  /* 0050e452 mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 0050e455 mov byte ptr [ebp - 0x40], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050e458 call 0x404420 */ esp -= 4; M32(esp) = 0x50e45du; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50e458u); RETCHK(0x50e45du, 0x50e458u); LOADALL;
  /* 0050e45d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050e45e push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0050e463 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050e466 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0050e469 mov eax, esp */ { eax = (u32)(esp); }
  /* 0050e46b mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050e46e mov dword ptr [ebp + 0xc], esp */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esp); }
  /* 0050e471 call 0x52cea0 */ esp -= 4; M32(esp) = 0x50e476u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x50e471u); RETCHK(0x50e476u, 0x50e471u); LOADALL;
  /* 0050e476 mov ebx, dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); ebx = (u32)(M32(m_)); }
  /* 0050e47c lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0050e47f call 0x50da30 */ esp -= 4; M32(esp) = 0x50e484u; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x50e47fu); RETCHK(0x50e484u, 0x50e47fu); LOADALL;
  /* 0050e484 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0050e486 mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 0050e489 neg bl */ { u32 a_ = (ebx & 0xffu); u32 r_ = (0u - a_) & 0xffu; ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETFC(OP_SUB, 0, a_, r_, 1); }
  /* 0050e48b sbb bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050e48d inc bl */ { u32 a_ = (ebx & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 0050e48f cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050e492 jb 0x50e4a0 */ if (CF_) goto L_0050e4a0;
  /* 0050e494 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 0050e497 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e498 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50e49du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50e498u); RETCHK(0x50e49du, 0x50e498u); LOADALL;
  /* 0050e49d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050e4a0:;
  /* 0050e4a0 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050e4a3 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050e4a5 sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 0050e4a8 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050e4af pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050e4b0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050e4b2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e4b3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050e4c0(CPU *c) {
  NATIVE_HOOK(0x50e4c0u) REGS; LOADALL;
L_0050e4c0:;
  /* 0050e4c0 jmp 0x50c650 */ SAVEALL; F_0050c650(c); return;
}

void F_0050e4d0(CPU *c) {
  NATIVE_HOOK(0x50e4d0u) REGS; LOADALL;
L_0050e4d0:;
  /* 0050e4d0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050e4d1 mov ebx, dword ptr [ecx + 0x1cc] */ { const u32 m_ = (u32)(ecx + 0x1ccu); ebx = (u32)(M32(m_)); }
  /* 0050e4d7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e4d8 call 0x50dc70 */ esp -= 4; M32(esp) = 0x50e4ddu; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x50e4d8u); RETCHK(0x50e4ddu, 0x50e4d8u); LOADALL;
  /* 0050e4dd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050e4de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050e4e0(CPU *c) {
  NATIVE_HOOK(0x50e4e0u) REGS; LOADALL;
L_0050e4e0:;
  /* 0050e4e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050e4e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050e4e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050e4e5 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0050e4ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050e4f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e4f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050e4f8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050e4f9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050e4fa push 0x50e560 */ { u32 v_ = 0x50e560u; esp -= 4; M32(esp) = v_; }
  /* 0050e4ff sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050e502 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050e504 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0050e506 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050e509 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0050e50c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050e50e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050e50f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0050e512 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0050e519 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0050e51c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e51d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050e520 call 0x404140 */ esp -= 4; M32(esp) = 0x50e525u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50e520u); RETCHK(0x50e525u, 0x50e520u); LOADALL;
  /* 0050e525 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050e528 call 0x405c00 */ esp -= 4; M32(esp) = 0x50e52du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x50e528u); RETCHK(0x50e52du, 0x50e528u); LOADALL;
  /* 0050e52d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050e52f call 0x405c80 */ esp -= 4; M32(esp) = 0x50e534u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x50e52fu); RETCHK(0x50e534u, 0x50e52fu); LOADALL;
  /* 0050e534 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050e538 jb 0x50e546 */ if (CF_) goto L_0050e546;
  /* 0050e53a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0050e53d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050e53e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50e543u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50e53eu); RETCHK(0x50e543u, 0x50e53eu); LOADALL;
  /* 0050e543 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050e546:;
  /* 0050e546 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050e549 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050e54b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050e552 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050e553 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050e555 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e556 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_0050e560(CPU *c) {
  NATIVE_HOOK(0x50e560u) REGS; LOADALL;
L_0050e560:;
  /* 0050e560 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050e561 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050e563 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050e565 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0050e56a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050e570 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e571 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050e578 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050e579 push 0x1d0 */ { u32 v_ = 0x1d0u; esp -= 4; M32(esp) = v_; }
  /* 0050e57e call 0x5fe934 */ esp -= 4; M32(esp) = 0x50e583u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50e57eu); RETCHK(0x50e583u, 0x50e57eu); LOADALL;
  /* 0050e583 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050e586 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050e589 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050e58b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050e592 je 0x50e5aa */ if (ZF_) goto L_0050e5aa;
  /* 0050e594 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050e596 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e597 call 0x50e2a0 */ esp -= 4; M32(esp) = 0x50e59cu; SAVEALL; F_0050e2a0(c); ABI_CHECK(0x50e2a0u, 0x50e597u); RETCHK(0x50e59cu, 0x50e597u); LOADALL;
  /* 0050e59c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050e59f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050e5a6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050e5a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e5a9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050e5aa:;
  /* 0050e5aa mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050e5ad xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050e5af mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050e5b6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050e5b8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e5b9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050e5c0(CPU *c) {
  NATIVE_HOOK(0x50e5c0u) REGS; LOADALL;
L_0050e5c0:;
  /* 0050e5c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050e5c1 mov esi, eax */ { esi = (u32)(eax); }
  /* 0050e5c3 mov eax, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050e5c9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050e5cb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050e5cc je 0x50e5e7 */ if (ZF_) goto L_0050e5e7;
  /* 0050e5ce mov ecx, dword ptr [esi + 0x26c] */ { const u32 m_ = (u32)(esi + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 0050e5d4 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050e5d6 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050e5db imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050e5dd sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050e5e0 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050e5e2 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050e5e5 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0050e5e7:;
  /* 0050e5e7 lea edi, [eax - 1] */ edi = (u32)((u32)(eax + 0xffffffffu));
  /* 0050e5ea call 0x421670 */ esp -= 4; M32(esp) = 0x50e5efu; SAVEALL; F_00421670(c); ABI_CHECK(0x421670u, 0x50e5eau); RETCHK(0x50e5efu, 0x50e5eau); LOADALL;
  /* 0050e5ef inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050e5f0 imul eax, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050e5f7 imul eax, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050e5fe dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0050e5ff cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050e601 jge 0x50e605 */ if (!LT_) goto L_0050e605;
  /* 0050e603 mov eax, edi */ { eax = (u32)(edi); }
L_0050e605:;
  /* 0050e605 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050e606 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050e607 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050e610(CPU *c) {
  NATIVE_HOOK(0x50e610u) REGS; LOADALL;
L_0050e610:;
  /* 0050e610 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050e611 mov esi, eax */ { esi = (u32)(eax); }
  /* 0050e613 call 0x421670 */ esp -= 4; M32(esp) = 0x50e618u; SAVEALL; F_00421670(c); ABI_CHECK(0x421670u, 0x50e613u); RETCHK(0x50e618u, 0x50e613u); LOADALL;
  /* 0050e618 imul eax, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050e61f imul eax, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050e626 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050e628 jl 0x50e63c */ if (LT_) goto L_0050e63c;
  /* 0050e62a mov eax, esi */ { eax = (u32)(esi); }
  /* 0050e62c call 0x50e5c0 */ esp -= 4; M32(esp) = 0x50e631u; SAVEALL; F_0050e5c0(c); ABI_CHECK(0x50e5c0u, 0x50e62cu); RETCHK(0x50e631u, 0x50e62cu); LOADALL;
  /* 0050e631 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050e633 jg 0x50e63c */ if (!(ZF_|LT_)) goto L_0050e63c;
  /* 0050e635 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0050e63a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050e63b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050e63c:;
  /* 0050e63c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050e63e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050e63f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050e640(CPU *c) {
  NATIVE_HOOK(0x50e640u) REGS; LOADALL;
L_0050e640:;
  /* 0050e640 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050e641 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050e643 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050e644 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050e645 mov esi, eax */ { esi = (u32)(eax); }
  /* 0050e647 call 0x421670 */ esp -= 4; M32(esp) = 0x50e64cu; SAVEALL; F_00421670(c); ABI_CHECK(0x421670u, 0x50e647u); RETCHK(0x50e64cu, 0x50e647u); LOADALL;
  /* 0050e64c imul eax, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050e653 imul eax, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050e65a cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050e65c jl 0x50e669 */ if (LT_) goto L_0050e669;
  /* 0050e65e mov eax, esi */ { eax = (u32)(esi); }
  /* 0050e660 call 0x50e5c0 */ esp -= 4; M32(esp) = 0x50e665u; SAVEALL; F_0050e5c0(c); ABI_CHECK(0x50e5c0u, 0x50e660u); RETCHK(0x50e665u, 0x50e660u); LOADALL;
  /* 0050e665 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050e667 jle 0x50e670 */ if ((ZF_|LT_)) goto L_0050e670;
L_0050e669:;
  /* 0050e669 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050e66b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050e66c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050e66e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e66f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050e670:;
  /* 0050e670 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0050e672 fld dword ptr [esi + 0x1e4] */ { const u32 m_ = (u32)(esi + 0x1e4u); FPUSH((double)MF32(m_)); }
  /* 0050e678 cdq */ edx = (u32)((s32)eax >> 31);
  /* 0050e679 fadd dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050e67f idiv dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, M32(m_), &q_, &r_, 0x50e67fu); eax = q_; edx = r_; }
  /* 0050e685 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0050e688 fimul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)(s32)M32(m_)); }
  /* 0050e68b fadd dword ptr [esi + 0x1f4] */ { const u32 m_ = (u32)(esi + 0x1f4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050e691 fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050e693 call 0x421670 */ esp -= 4; M32(esp) = 0x50e698u; SAVEALL; F_00421670(c); ABI_CHECK(0x421670u, 0x50e693u); RETCHK(0x50e698u, 0x50e693u); LOADALL;
  /* 0050e698 mov ecx, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 0050e69e mov edx, eax */ { edx = (u32)(eax); }
  /* 0050e6a0 imul edx, ecx */ { s64 p_ = (s64)(s32)edx * (s64)(s32)ecx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050e6a3 imul edx, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); s64 p_ = (s64)(s32)edx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050e6aa mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0050e6ac sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050e6ae cdq */ edx = (u32)((s32)eax >> 31);
  /* 0050e6af idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x50e6afu); eax = q_; edx = r_; }
  /* 0050e6b1 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0050e6b4 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0050e6b7 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050e6b9 fld dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); FPUSH((double)MF32(m_)); }
  /* 0050e6bf fadd dword ptr [esi + 0x1f0] */ { const u32 m_ = (u32)(esi + 0x1f0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050e6c5 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 0050e6c7 fadd dword ptr [esi + 0x1f8] */ { const u32 m_ = (u32)(esi + 0x1f8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050e6cd fstp dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050e6d0 fld dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); FPUSH((double)MF32(m_)); }
  /* 0050e6d6 fadd dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050e6d8 fstp dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050e6db fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0050e6de fadd dword ptr [esi + 0x1f0] */ { const u32 m_ = (u32)(esi + 0x1f0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050e6e4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050e6e5 fstp dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050e6e8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050e6ea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e6eb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050e6f0(CPU *c) {
  NATIVE_HOOK(0x50e6f0u) REGS; LOADALL;
L_0050e6f0:;
  /* 0050e6f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050e6f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050e6f3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050e6f9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050e6fb push 0x626838 */ { u32 v_ = 0x626838u; esp -= 4; M32(esp) = v_; }
  /* 0050e700 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e701 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050e708 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050e709 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050e70a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050e70d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050e70f mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0050e716 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0050e719 mov byte ptr [esi + 4], bl */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050e71c mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050e71f lea ecx, [esi + 0x30] */ ecx = (u32)((u32)(esi + 0x30u));
  /* 0050e722 mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 0050e725 mov dword ptr [esi + 0x24], ebx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ebx); }
  /* 0050e728 mov dword ptr [esi + 0x28], ebx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(ebx); }
  /* 0050e72b mov dword ptr [esi + 0x2c], ebx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 0050e72e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050e72f mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0050e736 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0050e739 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0050e73e mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050e741 call 0x404420 */ esp -= 4; M32(esp) = 0x50e746u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50e741u); RETCHK(0x50e746u, 0x50e741u); LOADALL;
  /* 0050e746 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050e749 mov dword ptr [esi + 0x60], ebx */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(ebx); }
  /* 0050e74c mov dword ptr [esi + 0x64], 0xf */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(0xfu); }
  /* 0050e753 mov byte ptr [esi + 0x50], bl */ { const u32 m_ = (u32)(esi + 0x50u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050e756 mov al, 0xff */ { eax = (eax & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 0050e758 mov byte ptr [esi + 0x23], al */ { const u32 m_ = (u32)(esi + 0x23u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0050e75b mov byte ptr [esi + 0x21], al */ { const u32 m_ = (u32)(esi + 0x21u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0050e75e mov byte ptr [esi + 0x22], al */ { const u32 m_ = (u32)(esi + 0x22u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0050e761 mov byte ptr [esi + 0x20], al */ { const u32 m_ = (u32)(esi + 0x20u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0050e764 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050e766 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050e767 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050e76e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050e76f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050e771 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e772 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050e780(CPU *c) {
  NATIVE_HOOK(0x50e780u) REGS; LOADALL;
L_0050e780:;
  /* 0050e780 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050e781 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050e783 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050e785 push 0x62027c */ { u32 v_ = 0x62027cu; esp -= 4; M32(esp) = v_; }
  /* 0050e78a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050e790 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e791 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050e798 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050e79b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050e79e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050e79f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050e7a0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050e7a1 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0050e7a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e7a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050e7a6 call 0x50bb70 */ esp -= 4; M32(esp) = 0x50e7abu; SAVEALL; F_0050bb70(c); ABI_CHECK(0x50bb70u, 0x50e7a6u); RETCHK(0x50e7abu, 0x50e7a6u); LOADALL;
  /* 0050e7ab xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050e7ad mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050e7b0 mov dword ptr [edi], 0x6516b0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x6516b0u); }
  /* 0050e7b6 mov eax, 0x64d178 */ { eax = (u32)(0x64d178u); }
  /* 0050e7bb mov dword ptr [edi + 0x1fc], eax */ { const u32 m_ = (u32)(edi + 0x1fcu); M32(m_) = (u32)(eax); }
  /* 0050e7c1 mov dword ptr [edi + 0x200], ebx */ { const u32 m_ = (u32)(edi + 0x200u); M32(m_) = (u32)(ebx); }
  /* 0050e7c7 mov dword ptr [edi + 0x204], eax */ { const u32 m_ = (u32)(edi + 0x204u); M32(m_) = (u32)(eax); }
  /* 0050e7cd mov dword ptr [edi + 0x208], ebx */ { const u32 m_ = (u32)(edi + 0x208u); M32(m_) = (u32)(ebx); }
  /* 0050e7d3 mov dword ptr [edi + 0x20c], eax */ { const u32 m_ = (u32)(edi + 0x20cu); M32(m_) = (u32)(eax); }
  /* 0050e7d9 mov dword ptr [edi + 0x210], ebx */ { const u32 m_ = (u32)(edi + 0x210u); M32(m_) = (u32)(ebx); }
  /* 0050e7df mov dword ptr [edi + 0x214], eax */ { const u32 m_ = (u32)(edi + 0x214u); M32(m_) = (u32)(eax); }
  /* 0050e7e5 mov dword ptr [edi + 0x218], ebx */ { const u32 m_ = (u32)(edi + 0x218u); M32(m_) = (u32)(ebx); }
  /* 0050e7eb mov dword ptr [edi + 0x21c], eax */ { const u32 m_ = (u32)(edi + 0x21cu); M32(m_) = (u32)(eax); }
  /* 0050e7f1 mov dword ptr [edi + 0x220], ebx */ { const u32 m_ = (u32)(edi + 0x220u); M32(m_) = (u32)(ebx); }
  /* 0050e7f7 mov dword ptr [edi + 0x224], eax */ { const u32 m_ = (u32)(edi + 0x224u); M32(m_) = (u32)(eax); }
  /* 0050e7fd mov dword ptr [edi + 0x228], ebx */ { const u32 m_ = (u32)(edi + 0x228u); M32(m_) = (u32)(ebx); }
  /* 0050e803 mov dword ptr [edi + 0x22c], eax */ { const u32 m_ = (u32)(edi + 0x22cu); M32(m_) = (u32)(eax); }
  /* 0050e809 mov dword ptr [edi + 0x230], ebx */ { const u32 m_ = (u32)(edi + 0x230u); M32(m_) = (u32)(ebx); }
  /* 0050e80f mov dword ptr [edi + 0x234], eax */ { const u32 m_ = (u32)(edi + 0x234u); M32(m_) = (u32)(eax); }
  /* 0050e815 mov dword ptr [edi + 0x238], ebx */ { const u32 m_ = (u32)(edi + 0x238u); M32(m_) = (u32)(ebx); }
  /* 0050e81b mov dword ptr [edi + 0x23c], eax */ { const u32 m_ = (u32)(edi + 0x23cu); M32(m_) = (u32)(eax); }
  /* 0050e821 mov dword ptr [edi + 0x240], ebx */ { const u32 m_ = (u32)(edi + 0x240u); M32(m_) = (u32)(ebx); }
  /* 0050e827 mov dword ptr [edi + 0x244], eax */ { const u32 m_ = (u32)(edi + 0x244u); M32(m_) = (u32)(eax); }
  /* 0050e82d mov dword ptr [edi + 0x248], ebx */ { const u32 m_ = (u32)(edi + 0x248u); M32(m_) = (u32)(ebx); }
  /* 0050e833 mov dword ptr [edi + 0x24c], eax */ { const u32 m_ = (u32)(edi + 0x24cu); M32(m_) = (u32)(eax); }
  /* 0050e839 mov dword ptr [edi + 0x250], ebx */ { const u32 m_ = (u32)(edi + 0x250u); M32(m_) = (u32)(ebx); }
  /* 0050e83f mov dword ptr [edi + 0x268], ebx */ { const u32 m_ = (u32)(edi + 0x268u); M32(m_) = (u32)(ebx); }
  /* 0050e845 mov dword ptr [edi + 0x26c], ebx */ { const u32 m_ = (u32)(edi + 0x26cu); M32(m_) = (u32)(ebx); }
  /* 0050e84b mov dword ptr [edi + 0x270], ebx */ { const u32 m_ = (u32)(edi + 0x270u); M32(m_) = (u32)(ebx); }
  /* 0050e851 lea esi, [edi + 0x274] */ esi = (u32)((u32)(edi + 0x274u));
  /* 0050e857 call 0x5267c0 */ esp -= 4; M32(esp) = 0x50e85cu; SAVEALL; F_005267c0(c); ABI_CHECK(0x5267c0u, 0x50e857u); RETCHK(0x50e85cu, 0x50e857u); LOADALL;
  /* 0050e85c lea esi, [edi + 0x31c] */ esi = (u32)((u32)(edi + 0x31cu));
  /* 0050e862 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0050e869 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0050e86c mov byte ptr [esi + 4], bl */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050e86f push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0050e871 push 0x6518d4 */ { u32 v_ = 0x6518d4u; esp -= 4; M32(esp) = v_; }
  /* 0050e876 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0050e879 mov byte ptr [ebp - 4], 0xe */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xeu); }
  /* 0050e87d call 0x404420 */ esp -= 4; M32(esp) = 0x50e882u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50e87du); RETCHK(0x50e882u, 0x50e87du); LOADALL;
  /* 0050e882 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050e883 mov dword ptr [edi + 0x1d8], ebx */ { const u32 m_ = (u32)(edi + 0x1d8u); M32(m_) = (u32)(ebx); }
  /* 0050e889 mov dword ptr [edi + 0x1dc], ebx */ { const u32 m_ = (u32)(edi + 0x1dcu); M32(m_) = (u32)(ebx); }
  /* 0050e88f mov dword ptr [edi + 0x1e0], 0xffffffff */ { const u32 m_ = (u32)(edi + 0x1e0u); M32(m_) = (u32)(0xffffffffu); }
  /* 0050e899 mov dword ptr [edi + 0x1f4], ebx */ { const u32 m_ = (u32)(edi + 0x1f4u); M32(m_) = (u32)(ebx); }
  /* 0050e89f mov dword ptr [edi + 0x1f8], ebx */ { const u32 m_ = (u32)(edi + 0x1f8u); M32(m_) = (u32)(ebx); }
  /* 0050e8a5 mov dword ptr [edi + 0x1e4], ebx */ { const u32 m_ = (u32)(edi + 0x1e4u); M32(m_) = (u32)(ebx); }
  /* 0050e8ab mov dword ptr [edi + 0x1e8], ebx */ { const u32 m_ = (u32)(edi + 0x1e8u); M32(m_) = (u32)(ebx); }
  /* 0050e8b1 mov dword ptr [edi + 0x1ec], ebx */ { const u32 m_ = (u32)(edi + 0x1ecu); M32(m_) = (u32)(ebx); }
  /* 0050e8b7 mov dword ptr [edi + 0x1f0], ebx */ { const u32 m_ = (u32)(edi + 0x1f0u); M32(m_) = (u32)(ebx); }
  /* 0050e8bd mov dword ptr [edi + 0x308], ebx */ { const u32 m_ = (u32)(edi + 0x308u); M32(m_) = (u32)(ebx); }
  /* 0050e8c3 mov dword ptr [edi + 0x310], ebx */ { const u32 m_ = (u32)(edi + 0x310u); M32(m_) = (u32)(ebx); }
  /* 0050e8c9 mov dword ptr [edi + 0x30c], ebx */ { const u32 m_ = (u32)(edi + 0x30cu); M32(m_) = (u32)(ebx); }
  /* 0050e8cf mov dword ptr [edi + 0x314], ebx */ { const u32 m_ = (u32)(edi + 0x314u); M32(m_) = (u32)(ebx); }
  /* 0050e8d5 mov byte ptr [edi + 0x319], bl */ { const u32 m_ = (u32)(edi + 0x319u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050e8db mov byte ptr [edi + 0x31a], bl */ { const u32 m_ = (u32)(edi + 0x31au); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050e8e1 mov dword ptr [edi + 0x1cc], 1 */ { const u32 m_ = (u32)(edi + 0x1ccu); M32(m_) = (u32)(0x1u); }
  /* 0050e8eb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050e8ec push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050e8ed push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050e8ee lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050e8f1 call 0x52cec0 */ esp -= 4; M32(esp) = 0x50e8f6u; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x50e8f1u); RETCHK(0x50e8f6u, 0x50e8f1u); LOADALL;
  /* 0050e8f6 lea eax, [edi + 0x274] */ eax = (u32)((u32)(edi + 0x274u));
  /* 0050e8fc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e8fd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050e8fe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050e8ff lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050e902 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050e903 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050e905 call 0x508960 */ esp -= 4; M32(esp) = 0x50e90au; SAVEALL; F_00508960(c); ABI_CHECK(0x508960u, 0x50e905u); RETCHK(0x50e90au, 0x50e905u); LOADALL;
  /* 0050e90a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050e90c je 0x50e915 */ if (ZF_) goto L_0050e915;
  /* 0050e90e mov byte ptr [edi + 0x338], 1 */ { const u32 m_ = (u32)(edi + 0x338u); M8(m_) = (u8)(0x1u); }
L_0050e915:;
  /* 0050e915 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0050e917 push 0x6518cc */ { u32 v_ = 0x6518ccu; esp -= 4; M32(esp) = v_; }
  /* 0050e91c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050e91e call 0x404420 */ esp -= 4; M32(esp) = 0x50e923u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50e91eu); RETCHK(0x50e923u, 0x50e91eu); LOADALL;
  /* 0050e923 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050e926 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050e928 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050e929 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050e92a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050e92b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050e932 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050e934 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e935 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050e940(CPU *c) {
  NATIVE_HOOK(0x50e940u) REGS; LOADALL;
L_0050e940:;
  /* 0050e940 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050e941 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050e943 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050e944 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050e946 call 0x50e970 */ esp -= 4; M32(esp) = 0x50e94bu; SAVEALL; F_0050e970(c); ABI_CHECK(0x50e970u, 0x50e946u); RETCHK(0x50e94bu, 0x50e946u); LOADALL;
  /* 0050e94b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050e94f je 0x50e95a */ if (ZF_) goto L_0050e95a;
  /* 0050e951 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050e952 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50e957u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50e952u); RETCHK(0x50e957u, 0x50e952u); LOADALL;
  /* 0050e957 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050e95a:;
  /* 0050e95a mov eax, esi */ { eax = (u32)(esi); }
  /* 0050e95c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050e95d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050e95e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050e970(CPU *c) {
  NATIVE_HOOK(0x50e970u) REGS; LOADALL;
L_0050e970:;
  /* 0050e970 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050e971 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050e972 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0050e974 mov dword ptr [edi], 0x6516b0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x6516b0u); }
  /* 0050e97a cmp dword ptr [edi + 0x334], 0x10 */ { const u32 m_ = (u32)(edi + 0x334u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050e981 jb 0x50e992 */ if (CF_) goto L_0050e992;
  /* 0050e983 mov eax, dword ptr [edi + 0x320] */ { const u32 m_ = (u32)(edi + 0x320u); eax = (u32)(M32(m_)); }
  /* 0050e989 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050e98a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50e98fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50e98au); RETCHK(0x50e98fu, 0x50e98au); LOADALL;
  /* 0050e98f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050e992:;
  /* 0050e992 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0050e994 mov dword ptr [edi + 0x334], 0xf */ { const u32 m_ = (u32)(edi + 0x334u); M32(m_) = (u32)(0xfu); }
  /* 0050e99e mov dword ptr [edi + 0x330], edx */ { const u32 m_ = (u32)(edi + 0x330u); M32(m_) = (u32)(edx); }
  /* 0050e9a4 lea ecx, [edi + 0x274] */ ecx = (u32)((u32)(edi + 0x274u));
  /* 0050e9aa mov byte ptr [edi + 0x320], dl */ { const u32 m_ = (u32)(edi + 0x320u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0050e9b0 call 0x5267e0 */ esp -= 4; M32(esp) = 0x50e9b5u; SAVEALL; F_005267e0(c); ABI_CHECK(0x5267e0u, 0x50e9b0u); RETCHK(0x50e9b5u, 0x50e9b0u); LOADALL;
  /* 0050e9b5 mov esi, dword ptr [edi + 0x268] */ { const u32 m_ = (u32)(edi + 0x268u); esi = (u32)(M32(m_)); }
  /* 0050e9bb cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050e9bd je 0x50e9ee */ if (ZF_) goto L_0050e9ee;
  /* 0050e9bf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050e9c0 mov ebx, dword ptr [edi + 0x26c] */ { const u32 m_ = (u32)(edi + 0x26cu); ebx = (u32)(M32(m_)); }
  /* 0050e9c6 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050e9c8 je 0x50e9dc */ if (ZF_) goto L_0050e9dc;
  /* 0050e9ca lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0050e9d0:;
  /* 0050e9d0 call 0x50f600 */ esp -= 4; M32(esp) = 0x50e9d5u; SAVEALL; F_0050f600(c); ABI_CHECK(0x50f600u, 0x50e9d0u); RETCHK(0x50e9d5u, 0x50e9d0u); LOADALL;
  /* 0050e9d5 add esi, 0x6c */ { u32 a_ = esi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0050e9d8 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050e9da jne 0x50e9d0 */ if (!ZF_) goto L_0050e9d0;
L_0050e9dc:;
  /* 0050e9dc mov ecx, dword ptr [edi + 0x268] */ { const u32 m_ = (u32)(edi + 0x268u); ecx = (u32)(M32(m_)); }
  /* 0050e9e2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050e9e3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50e9e8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50e9e3u); RETCHK(0x50e9e8u, 0x50e9e3u); LOADALL;
  /* 0050e9e8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050e9eb xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0050e9ed pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0050e9ee:;
  /* 0050e9ee lea ecx, [edi + 0x24c] */ ecx = (u32)((u32)(edi + 0x24cu));
  /* 0050e9f4 mov dword ptr [edi + 0x268], edx */ { const u32 m_ = (u32)(edi + 0x268u); M32(m_) = (u32)(edx); }
  /* 0050e9fa mov dword ptr [edi + 0x26c], edx */ { const u32 m_ = (u32)(edi + 0x26cu); M32(m_) = (u32)(edx); }
  /* 0050ea00 mov dword ptr [edi + 0x270], edx */ { const u32 m_ = (u32)(edi + 0x270u); M32(m_) = (u32)(edx); }
  /* 0050ea06 call 0x529300 */ esp -= 4; M32(esp) = 0x50ea0bu; SAVEALL; F_00529300(c); ABI_CHECK(0x529300u, 0x50ea06u); RETCHK(0x50ea0bu, 0x50ea06u); LOADALL;
  /* 0050ea0b lea ecx, [edi + 0x244] */ ecx = (u32)((u32)(edi + 0x244u));
  /* 0050ea11 call 0x529300 */ esp -= 4; M32(esp) = 0x50ea16u; SAVEALL; F_00529300(c); ABI_CHECK(0x529300u, 0x50ea11u); RETCHK(0x50ea16u, 0x50ea11u); LOADALL;
  /* 0050ea16 lea ecx, [edi + 0x23c] */ ecx = (u32)((u32)(edi + 0x23cu));
  /* 0050ea1c call 0x529300 */ esp -= 4; M32(esp) = 0x50ea21u; SAVEALL; F_00529300(c); ABI_CHECK(0x529300u, 0x50ea1cu); RETCHK(0x50ea21u, 0x50ea1cu); LOADALL;
  /* 0050ea21 lea ecx, [edi + 0x234] */ ecx = (u32)((u32)(edi + 0x234u));
  /* 0050ea27 call 0x529300 */ esp -= 4; M32(esp) = 0x50ea2cu; SAVEALL; F_00529300(c); ABI_CHECK(0x529300u, 0x50ea27u); RETCHK(0x50ea2cu, 0x50ea27u); LOADALL;
  /* 0050ea2c lea ecx, [edi + 0x22c] */ ecx = (u32)((u32)(edi + 0x22cu));
  /* 0050ea32 call 0x529300 */ esp -= 4; M32(esp) = 0x50ea37u; SAVEALL; F_00529300(c); ABI_CHECK(0x529300u, 0x50ea32u); RETCHK(0x50ea37u, 0x50ea32u); LOADALL;
  /* 0050ea37 lea ecx, [edi + 0x224] */ ecx = (u32)((u32)(edi + 0x224u));
  /* 0050ea3d call 0x529300 */ esp -= 4; M32(esp) = 0x50ea42u; SAVEALL; F_00529300(c); ABI_CHECK(0x529300u, 0x50ea3du); RETCHK(0x50ea42u, 0x50ea3du); LOADALL;
  /* 0050ea42 lea ecx, [edi + 0x21c] */ ecx = (u32)((u32)(edi + 0x21cu));
  /* 0050ea48 call 0x529300 */ esp -= 4; M32(esp) = 0x50ea4du; SAVEALL; F_00529300(c); ABI_CHECK(0x529300u, 0x50ea48u); RETCHK(0x50ea4du, 0x50ea48u); LOADALL;
  /* 0050ea4d lea ecx, [edi + 0x214] */ ecx = (u32)((u32)(edi + 0x214u));
  /* 0050ea53 call 0x529300 */ esp -= 4; M32(esp) = 0x50ea58u; SAVEALL; F_00529300(c); ABI_CHECK(0x529300u, 0x50ea53u); RETCHK(0x50ea58u, 0x50ea53u); LOADALL;
  /* 0050ea58 lea ecx, [edi + 0x20c] */ ecx = (u32)((u32)(edi + 0x20cu));
  /* 0050ea5e call 0x529300 */ esp -= 4; M32(esp) = 0x50ea63u; SAVEALL; F_00529300(c); ABI_CHECK(0x529300u, 0x50ea5eu); RETCHK(0x50ea63u, 0x50ea5eu); LOADALL;
  /* 0050ea63 lea ecx, [edi + 0x204] */ ecx = (u32)((u32)(edi + 0x204u));
  /* 0050ea69 call 0x529300 */ esp -= 4; M32(esp) = 0x50ea6eu; SAVEALL; F_00529300(c); ABI_CHECK(0x529300u, 0x50ea69u); RETCHK(0x50ea6eu, 0x50ea69u); LOADALL;
  /* 0050ea6e lea ecx, [edi + 0x1fc] */ ecx = (u32)((u32)(edi + 0x1fcu));
  /* 0050ea74 call 0x529300 */ esp -= 4; M32(esp) = 0x50ea79u; SAVEALL; F_00529300(c); ABI_CHECK(0x529300u, 0x50ea74u); RETCHK(0x50ea79u, 0x50ea74u); LOADALL;
  /* 0050ea79 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050ea7b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050ea7c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050ea7d jmp 0x50bc50 */ SAVEALL; F_0050bc50(c); return;
}

void F_0050ea90(CPU *c) {
  NATIVE_HOOK(0x50ea90u) REGS; LOADALL;
L_0050ea90:;
  /* 0050ea90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050ea91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050ea93 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050ea95 push 0x62121c */ { u32 v_ = 0x62121cu; esp -= 4; M32(esp) = v_; }
  /* 0050ea9a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050eaa0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050eaa1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050eaa8 sub esp, 0xd0 */ { u32 a_ = esp, b_ = 0xd0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050eaae mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0050eab3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050eab4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050eab5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050eab8 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050eabb mov eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0050eabe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050eabf mov edi, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); edi = (u32)(M32(m_)); }
  /* 0050eac2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050eac3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050eac6 lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 0050eac9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050eaca mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0050eacc call 0x50bfc0 */ esp -= 4; M32(esp) = 0x50ead1u; SAVEALL; F_0050bfc0(c); ABI_CHECK(0x50bfc0u, 0x50eaccu); RETCHK(0x50ead1u, 0x50eaccu); LOADALL;
  /* 0050ead1 fld dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0050ead4 fsub dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050ead7 mov eax, dword ptr [ebp + 0x30] */ { const u32 m_ = (u32)(ebp + 0x30u); eax = (u32)(M32(m_)); }
  /* 0050eada mov edx, dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 0050eadd mov ecx, dword ptr [ebp + 0x28] */ { const u32 m_ = (u32)(ebp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0050eae0 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050eae6 mov dword ptr [esi + 0x1f8], eax */ { const u32 m_ = (u32)(esi + 0x1f8u); M32(m_) = (u32)(eax); }
  /* 0050eaec mov eax, dword ptr [ebp + 0x38] */ { const u32 m_ = (u32)(ebp + 0x38u); eax = (u32)(M32(m_)); }
  /* 0050eaef mov dword ptr [esi + 0x1e8], eax */ { const u32 m_ = (u32)(esi + 0x1e8u); M32(m_) = (u32)(eax); }
  /* 0050eaf5 mov dword ptr [esi + 0x1f4], edx */ { const u32 m_ = (u32)(esi + 0x1f4u); M32(m_) = (u32)(edx); }
  /* 0050eafb mov edx, dword ptr [ebp + 0x34] */ { const u32 m_ = (u32)(ebp + 0x34u); edx = (u32)(M32(m_)); }
  /* 0050eafe fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050eb00 mov dword ptr [esi + 0x1d8], edi */ { const u32 m_ = (u32)(esi + 0x1d8u); M32(m_) = (u32)(edi); }
  /* 0050eb06 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050eb09 mov dword ptr [esi + 0x1dc], ecx */ { const u32 m_ = (u32)(esi + 0x1dcu); M32(m_) = (u32)(ecx); }
  /* 0050eb0f mov dword ptr [esi + 0x1e0], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(0xffffffffu); }
  /* 0050eb19 mov dword ptr [esi + 0x1e4], edx */ { const u32 m_ = (u32)(esi + 0x1e4u); M32(m_) = (u32)(edx); }
  /* 0050eb1f je 0x50eb29 */ if (ZF_) goto L_0050eb29;
  /* 0050eb21 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050eb23 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0050eb26 fsub dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050eb29:;
  /* 0050eb29 lea edx, [ecx - 1] */ edx = (u32)((u32)(ecx + 0xffffffffu));
  /* 0050eb2c mov dword ptr [ebp + 0x20], edx */ { const u32 m_ = (u32)(ebp + 0x20u); M32(m_) = (u32)(edx); }
  /* 0050eb2f fild dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); FPUSH((double)(s32)M32(m_)); }
  /* 0050eb32 fmul dword ptr [ebp + 0x34] */ { const u32 m_ = (u32)(ebp + 0x34u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050eb35 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0050eb37 fld dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0050eb3a fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 0050eb3c fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0050eb3e fidiv dword ptr [ebp + 0x28] */ { const u32 m_ = (u32)(ebp + 0x28u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 0050eb41 fst dword ptr [ebp + 0x34] */ { const u32 m_ = (u32)(ebp + 0x34u); MF32(m_) = (float)ST(0); }
  /* 0050eb44 fstp dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050eb4a fld dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0050eb4d fsub dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050eb50 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0050eb56 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050eb58 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050eb5b je 0x50eb65 */ if (ZF_) goto L_0050eb65;
  /* 0050eb5d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050eb5f fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0050eb62 fsub dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0050eb65:;
  /* 0050eb65 lea eax, [edi - 1] */ eax = (u32)((u32)(edi + 0xffffffffu));
  /* 0050eb68 mov dword ptr [ebp + 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0x2cu); M32(m_) = (u32)(eax); }
  /* 0050eb6b fild dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); FPUSH((double)(s32)M32(m_)); }
  /* 0050eb6e mov al, byte ptr [ebp + 0x3c] */ { const u32 m_ = (u32)(ebp + 0x3cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050eb71 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050eb73 mov byte ptr [esi + 0x318], al */ { const u32 m_ = (u32)(esi + 0x318u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0050eb79 fmul dword ptr [ebp + 0x38] */ { const u32 m_ = (u32)(ebp + 0x38u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050eb7c fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0050eb7e fld dword ptr [ebp + 0x30] */ { const u32 m_ = (u32)(ebp + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0050eb81 fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 0050eb83 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0050eb85 fidiv dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 0050eb88 fst dword ptr [esi + 0x1f0] */ { const u32 m_ = (u32)(esi + 0x1f0u); MF32(m_) = (float)ST(0); }
  /* 0050eb8e jne 0x50ec05 */ if (!ZF_) goto L_0050ec05;
  /* 0050eb90 fld dword ptr [0x6570e0] */ { const u32 m_ = (u32)(0x6570e0u); FPUSH((double)MF32(m_)); }
  /* 0050eb96 mov dword ptr [ebp - 0xc0], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff40u); M32(m_) = (u32)(0x0u); }
  /* 0050eba0 fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 0050eba2 mov dword ptr [ebp - 0xb8], 0x42440000 */ { const u32 m_ = (u32)(ebp + 0xffffff48u); M32(m_) = (u32)(0x42440000u); }
  /* 0050ebac fstp dword ptr [ebp - 0xbc] */ { const u32 m_ = (u32)(ebp + 0xffffff44u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050ebb2 fld dword ptr [ebp - 0xbc] */ { const u32 m_ = (u32)(ebp + 0xffffff44u); FPUSH((double)MF32(m_)); }
  /* 0050ebb8 fadd dword ptr [0x6570e0] */ { const u32 m_ = (u32)(0x6570e0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050ebbe fstp dword ptr [ebp - 0xb4] */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050ebc4 fld dword ptr [ebp + 0x34] */ { const u32 m_ = (u32)(ebp + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0050ebc7 fsub dword ptr [0x656dd4] */ { const u32 m_ = (u32)(0x656dd4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050ebcd fstp dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050ebd3 fsub dword ptr [0x6570d0] */ { const u32 m_ = (u32)(0x6570d0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050ebd9 fstp dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050ebdf fld dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); FPUSH((double)MF32(m_)); }
  /* 0050ebe5 fadd dword ptr [0x656dd4] */ { const u32 m_ = (u32)(0x656dd4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050ebeb fstp dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050ebf1 fld dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); FPUSH((double)MF32(m_)); }
  /* 0050ebf7 fadd dword ptr [0x6570d0] */ { const u32 m_ = (u32)(0x6570d0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050ebfd fstp dword ptr [ebp - 0x98] */ { const u32 m_ = (u32)(ebp + 0xffffff68u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050ec03 jmp 0x50ec5a */ goto L_0050ec5a;
L_0050ec05:;
  /* 0050ec05 mov edx, dword ptr [ebp + 0x34] */ { const u32 m_ = (u32)(ebp + 0x34u); edx = (u32)(M32(m_)); }
  /* 0050ec08 fst dword ptr [ebp - 0x98] */ { const u32 m_ = (u32)(ebp + 0xffffff68u); MF32(m_) = (float)ST(0); }
  /* 0050ec0e fstp dword ptr [ebp - 0xbc] */ { const u32 m_ = (u32)(ebp + 0xffffff44u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050ec14 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050ec16 mov dword ptr [ebp - 0xb8], eax */ { const u32 m_ = (u32)(ebp + 0xffffff48u); M32(m_) = (u32)(eax); }
  /* 0050ec1c fld dword ptr [ebp - 0xb8] */ { const u32 m_ = (u32)(ebp + 0xffffff48u); FPUSH((double)MF32(m_)); }
  /* 0050ec22 fsub dword ptr [0x6570e4] */ { const u32 m_ = (u32)(0x6570e4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0050ec28 mov dword ptr [ebp - 0xa4], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(0x0u); }
  /* 0050ec32 mov dword ptr [ebp - 0x9c], edx */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(edx); }
  /* 0050ec38 mov dword ptr [ebp - 0xa0], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(0x0u); }
  /* 0050ec42 fstp dword ptr [ebp - 0xc0] */ { const u32 m_ = (u32)(ebp + 0xffffff40u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050ec48 fld dword ptr [ebp - 0xbc] */ { const u32 m_ = (u32)(ebp + 0xffffff44u); FPUSH((double)MF32(m_)); }
  /* 0050ec4e fadd dword ptr [0x6570e0] */ { const u32 m_ = (u32)(0x6570e0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050ec54 fstp dword ptr [ebp - 0xb4] */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); MF32(m_) = (float)ST(0); FPOP(); }
L_0050ec5a:;
  /* 0050ec5a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050ec5c mov dword ptr [ebp - 0x5c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(0xfu); }
  /* 0050ec63 mov dword ptr [ebp - 0x60], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(ebx); }
  /* 0050ec66 mov byte ptr [ebp - 0x70], bl */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050ec69 imul edi, ecx */ { s64 p_ = (s64)(s32)edi * (s64)(s32)ecx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050ec6c mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0050ec6f xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0050ec71 mov dword ptr [ebp - 0x3b], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); M32(m_) = (u32)(edx); }
  /* 0050ec74 mov dword ptr [ebp - 0x37], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc9u); M32(m_) = (u32)(edx); }
  /* 0050ec77 mov dword ptr [ebp - 0x33], edx */ { const u32 m_ = (u32)(ebp + 0xffffffcdu); M32(m_) = (u32)(edx); }
  /* 0050ec7a mov word ptr [ebp - 0x2f], dx */ { const u32 m_ = (u32)(ebp + 0xffffffd1u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 0050ec7e shl edi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0050ec81 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050ec82 mov byte ptr [ebp - 0x3c], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050ec85 mov byte ptr [ebp - 0x2d], dl */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0050ec88 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x50ec8du; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x50ec88u); RETCHK(0x50ec8du, 0x50ec88u); LOADALL;
  /* 0050ec8d mov dword ptr [esi + 0x25c], eax */ { const u32 m_ = (u32)(esi + 0x25cu); M32(m_) = (u32)(eax); }
  /* 0050ec93 mov eax, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); eax = (u32)(M32(m_)); }
  /* 0050ec99 imul eax, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050eca0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050eca3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050eca5 mov dword ptr [ebp + 0x2c], ebx */ { const u32 m_ = (u32)(ebp + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 0050eca8 jle 0x50ee51 */ if ((ZF_|LT_)) goto L_0050ee51;
  /* 0050ecae mov eax, esi */ { eax = (u32)(esi); }
  /* 0050ecb0 call 0x5075c0 */ esp -= 4; M32(esp) = 0x50ecb5u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x50ecb0u); RETCHK(0x50ecb5u, 0x50ecb0u); LOADALL;
  /* 0050ecb5 mov dword ptr [ebp + 0x34], eax */ { const u32 m_ = (u32)(ebp + 0x34u); M32(m_) = (u32)(eax); }
  /* 0050ecb8 mov al, byte ptr [ebp + 0x3c] */ { const u32 m_ = (u32)(ebp + 0x3cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050ecbb xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0050ecbd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050ecbf sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 0050ecc2 mov dword ptr [ebp + 0x28], ecx */ { const u32 m_ = (u32)(ebp + 0x28u); M32(m_) = (u32)(ecx); }
  /* 0050ecc5 jmp 0x50ecd0 */ goto L_0050ecd0;
L_0050ecc7:;
  /* 0050ecc7 mov ebx, dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 0050ecca lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0050ecd0:;
  /* 0050ecd0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050ecd1 lea edx, [ebp - 0x3c] */ edx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0050ecd4 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0050ecd9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050ecda call 0x5fe9aa */ esp -= 4; M32(esp) = 0x50ecdfu; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x50ecdau); RETCHK(0x50ecdfu, 0x50ecdau); LOADALL;
  /* 0050ecdf push 0x2d4 */ { u32 v_ = 0x2d4u; esp -= 4; M32(esp) = v_; }
  /* 0050ece4 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50ece9u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50ece4u); RETCHK(0x50ece9u, 0x50ece4u); LOADALL;
  /* 0050ece9 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050ecec mov dword ptr [ebp - 0x94], eax */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(eax); }
  /* 0050ecf2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050ecf4 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0050ecf8 je 0x50ed03 */ if (ZF_) goto L_0050ed03;
  /* 0050ecfa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050ecfb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ecfc call 0x5221d0 */ esp -= 4; M32(esp) = 0x50ed01u; SAVEALL; F_005221d0(c); ABI_CHECK(0x5221d0u, 0x50ecfcu); RETCHK(0x50ed01u, 0x50ecfcu); LOADALL;
  /* 0050ed01 jmp 0x50ed05 */ goto L_0050ed05;
L_0050ed03:;
  /* 0050ed03 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050ed05:;
  /* 0050ed05 mov edx, dword ptr [ebp + 0x34] */ { const u32 m_ = (u32)(ebp + 0x34u); edx = (u32)(M32(m_)); }
  /* 0050ed08 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0050ed0c mov ecx, dword ptr [esi + 0x25c] */ { const u32 m_ = (u32)(esi + 0x25cu); ecx = (u32)(M32(m_)); }
  /* 0050ed12 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050ed13 mov edi, 0x646ed0 */ { edi = (u32)(0x646ed0u); }
  /* 0050ed18 lea esi, [ebp - 0x58] */ esi = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0050ed1b mov dword ptr [ecx + ebx*4], eax */ { const u32 m_ = (u32)(ecx + ebx * 4u); M32(m_) = (u32)(eax); }
  /* 0050ed1e call 0x4646d0 */ esp -= 4; M32(esp) = 0x50ed23u; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x50ed1eu); RETCHK(0x50ed23u, 0x50ed1eu); LOADALL;
  /* 0050ed23 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050ed26 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050ed28 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050ed2a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ed2b lea ecx, [ebp - 0x74] */ ecx = (u32)((u32)(ebp + 0xffffff8cu));
  /* 0050ed2e mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0050ed32 call 0x404140 */ esp -= 4; M32(esp) = 0x50ed37u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50ed32u); RETCHK(0x50ed37u, 0x50ed32u); LOADALL;
  /* 0050ed37 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0050ed3b cmp dword ptr [ebp - 0x40], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050ed3f jb 0x50ed4d */ if (CF_) goto L_0050ed4d;
  /* 0050ed41 mov eax, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); eax = (u32)(M32(m_)); }
  /* 0050ed44 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ed45 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50ed4au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50ed45u); RETCHK(0x50ed4au, 0x50ed45u); LOADALL;
  /* 0050ed4a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050ed4d:;
  /* 0050ed4d lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0050ed50 mov dword ptr [ebp - 0x40], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0xfu); }
  /* 0050ed57 mov dword ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x0u); }
  /* 0050ed5e mov byte ptr [ebp - 0x54], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M8(m_) = (u8)(0x0u); }
  /* 0050ed62 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
L_0050ed65:;
  /* 0050ed65 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050ed67 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050ed68 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050ed6a jne 0x50ed65 */ if (!ZF_) goto L_0050ed65;
  /* 0050ed6c sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050ed6e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ed6f lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0050ed72 lea ecx, [ebp - 0x74] */ ecx = (u32)((u32)(ebp + 0xffffff8cu));
  /* 0050ed75 call 0x40d260 */ esp -= 4; M32(esp) = 0x50ed7au; SAVEALL; F_0040d260(c); ABI_CHECK(0x40d260u, 0x50ed75u); RETCHK(0x50ed7au, 0x50ed75u); LOADALL;
  /* 0050ed7a mov ecx, dword ptr [ebp + 0x44] */ { const u32 m_ = (u32)(ebp + 0x44u); ecx = (u32)(M32(m_)); }
  /* 0050ed7d mov edx, dword ptr [ebp + 0x40] */ { const u32 m_ = (u32)(ebp + 0x40u); edx = (u32)(M32(m_)); }
  /* 0050ed80 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050ed81 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050ed83 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050ed84 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050ed87 lea ecx, [ebp - 0xa4] */ ecx = (u32)((u32)(ebp + 0xffffff5cu));
  /* 0050ed8d mov eax, esp */ { eax = (u32)(esp); }
  /* 0050ed8f mov dword ptr [ebp - 0x94], esp */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(esp); }
  /* 0050ed95 call 0x52cea0 */ esp -= 4; M32(esp) = 0x50ed9au; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x50ed95u); RETCHK(0x50ed9au, 0x50ed95u); LOADALL;
  /* 0050ed9a mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0050ed9d mov ecx, dword ptr [edi + 0x25c] */ { const u32 m_ = (u32)(edi + 0x25cu); ecx = (u32)(M32(m_)); }
  /* 0050eda3 mov ebx, dword ptr [ecx + ebx*4] */ { const u32 m_ = (u32)(ecx + ebx * 4u); ebx = (u32)(M32(m_)); }
  /* 0050eda6 lea eax, [ebp - 0x74] */ eax = (u32)((u32)(ebp + 0xffffff8cu));
  /* 0050eda9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050edaa call 0x5223f0 */ esp -= 4; M32(esp) = 0x50edafu; SAVEALL; F_005223f0(c); ABI_CHECK(0x5223f0u, 0x50edaau); RETCHK(0x50edafu, 0x50edaau); LOADALL;
  /* 0050edaf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050edb1 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0050edb6 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0050edb9 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0050edc0 mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 0050edc7 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0050edcb call 0x404420 */ esp -= 4; M32(esp) = 0x50edd0u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50edcbu); RETCHK(0x50edd0u, 0x50edcbu); LOADALL;
  /* 0050edd0 mov ebx, dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 0050edd3 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0050edd7 mov edx, dword ptr [edi + 0x25c] */ { const u32 m_ = (u32)(edi + 0x25cu); edx = (u32)(M32(m_)); }
  /* 0050eddd mov esi, dword ptr [edx + ebx*4] */ { const u32 m_ = (u32)(edx + ebx * 4u); esi = (u32)(M32(m_)); }
  /* 0050ede0 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0050ede3 call 0x5224b0 */ esp -= 4; M32(esp) = 0x50ede8u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x50ede3u); RETCHK(0x50ede8u, 0x50ede3u); LOADALL;
  /* 0050ede8 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0050edec cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050edf0 jb 0x50edfe */ if (CF_) goto L_0050edfe;
  /* 0050edf2 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0050edf5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050edf6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50edfbu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50edf6u); RETCHK(0x50edfbu, 0x50edf6u); LOADALL;
  /* 0050edfb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050edfe:;
  /* 0050edfe mov ecx, dword ptr [edi + 0x25c] */ { const u32 m_ = (u32)(edi + 0x25cu); ecx = (u32)(M32(m_)); }
  /* 0050ee04 mov eax, dword ptr [ecx + ebx*4] */ { const u32 m_ = (u32)(ecx + ebx * 4u); eax = (u32)(M32(m_)); }
  /* 0050ee07 mov edx, dword ptr [ebp + 0x28] */ { const u32 m_ = (u32)(ebp + 0x28u); edx = (u32)(M32(m_)); }
  /* 0050ee0a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050ee0d mov dword ptr [eax + 0x294], edx */ { const u32 m_ = (u32)(eax + 0x294u); M32(m_) = (u32)(edx); }
  /* 0050ee13 mov eax, dword ptr [edi + 0x25c] */ { const u32 m_ = (u32)(edi + 0x25cu); eax = (u32)(M32(m_)); }
  /* 0050ee19 mov eax, dword ptr [eax + ebx*4] */ { const u32 m_ = (u32)(eax + ebx * 4u); eax = (u32)(M32(m_)); }
  /* 0050ee1c mov dword ptr [eax + 0x298], 2 */ { const u32 m_ = (u32)(eax + 0x298u); M32(m_) = (u32)(0x2u); }
  /* 0050ee26 mov ecx, dword ptr [edi + 0x1dc] */ { const u32 m_ = (u32)(edi + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 0050ee2c imul ecx, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050ee33 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050ee34 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050ee36 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0050ee3d mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 0050ee44 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0050ee48 mov dword ptr [ebp + 0x2c], ebx */ { const u32 m_ = (u32)(ebp + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 0050ee4b jl 0x50ecc7 */ if (LT_) goto L_0050ecc7;
L_0050ee51:;
  /* 0050ee51 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050ee53 call 0x5075c0 */ esp -= 4; M32(esp) = 0x50ee58u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x50ee53u); RETCHK(0x50ee58u, 0x50ee53u); LOADALL;
  /* 0050ee58 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ee59 mov edi, 0x6518c4 */ { edi = (u32)(0x6518c4u); }
  /* 0050ee5e lea esi, [ebp - 0x90] */ esi = (u32)((u32)(ebp + 0xffffff70u));
  /* 0050ee64 mov dword ptr [ebp + 0x34], eax */ { const u32 m_ = (u32)(ebp + 0x34u); M32(m_) = (u32)(eax); }
  /* 0050ee67 call 0x4646d0 */ esp -= 4; M32(esp) = 0x50ee6cu; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x50ee67u); RETCHK(0x50ee6cu, 0x50ee67u); LOADALL;
  /* 0050ee6c push 0x2a0 */ { u32 v_ = 0x2a0u; esp -= 4; M32(esp) = v_; }
  /* 0050ee71 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 0050ee75 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50ee7au; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50ee75u); RETCHK(0x50ee7au, 0x50ee75u); LOADALL;
  /* 0050ee7a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050ee7d mov dword ptr [ebp - 0x94], eax */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(eax); }
  /* 0050ee83 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050ee85 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0050ee88 mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 0050ee8c je 0x50ee97 */ if (ZF_) goto L_0050ee97;
  /* 0050ee8e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050ee8f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ee90 call 0x505150 */ esp -= 4; M32(esp) = 0x50ee95u; SAVEALL; F_00505150(c); ABI_CHECK(0x505150u, 0x50ee90u); RETCHK(0x50ee95u, 0x50ee90u); LOADALL;
  /* 0050ee95 jmp 0x50ee99 */ goto L_0050ee99;
L_0050ee97:;
  /* 0050ee97 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050ee99:;
  /* 0050ee99 push 0x6518c0 */ { u32 v_ = 0x6518c0u; esp -= 4; M32(esp) = v_; }
  /* 0050ee9e lea ecx, [ebp - 0xc0] */ ecx = (u32)((u32)(ebp + 0xffffff40u));
  /* 0050eea4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050eea5 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 0050eea9 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 0050eeaf mov dword ptr [ebx + 0x258], eax */ { const u32 m_ = (u32)(ebx + 0x258u); M32(m_) = (u32)(eax); }
  /* 0050eeb5 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0050eeb7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050eeb8 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050eeba call dword ptr [edx + 0xe8] */ { const u32 m_ = (u32)(edx + 0xe8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50eec0u; SAVEALL; call_ind(c, t_); RETCHK(0x50eec0u, 0x50eebau); LOADALL; }
  /* 0050eec0 mov ecx, dword ptr [ebx + 0x258] */ { const u32 m_ = (u32)(ebx + 0x258u); ecx = (u32)(M32(m_)); }
  /* 0050eec6 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050eec8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050eeca call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50eecdu; SAVEALL; call_ind(c, t_); RETCHK(0x50eecdu, 0x50eecau); LOADALL; }
  /* 0050eecd mov al, byte ptr [ebp + 0x3c] */ { const u32 m_ = (u32)(ebp + 0x3cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050eed0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050eed2 jne 0x50f165 */ if (!ZF_) goto L_0050f165;
  /* 0050eed8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050eeda push 0x6518b8 */ { u32 v_ = 0x6518b8u; esp -= 4; M32(esp) = v_; }
  /* 0050eedf lea eax, [ebx + 0x22c] */ eax = (u32)((u32)(ebx + 0x22cu));
  /* 0050eee5 call 0x529310 */ esp -= 4; M32(esp) = 0x50eeeau; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x50eee5u); RETCHK(0x50eeeau, 0x50eee5u); LOADALL;
  /* 0050eeea push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050eeec push 0x6518ac */ { u32 v_ = 0x6518acu; esp -= 4; M32(esp) = v_; }
  /* 0050eef1 lea eax, [ebx + 0x234] */ eax = (u32)((u32)(ebx + 0x234u));
  /* 0050eef7 call 0x529310 */ esp -= 4; M32(esp) = 0x50eefcu; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x50eef7u); RETCHK(0x50eefcu, 0x50eef7u); LOADALL;
  /* 0050eefc push 0x22c */ { u32 v_ = 0x22cu; esp -= 4; M32(esp) = v_; }
  /* 0050ef01 mov dword ptr [ebp - 0xa4], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(0x0u); }
  /* 0050ef0b mov dword ptr [ebp - 0xa0], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(0x0u); }
  /* 0050ef15 mov dword ptr [ebp - 0x9c], 0x43370000 */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(0x43370000u); }
  /* 0050ef1f mov dword ptr [ebp - 0x98], 0x42dc0000 */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(0x42dc0000u); }
  /* 0050ef29 call 0x5fe934 */ esp -= 4; M32(esp) = 0x50ef2eu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50ef29u); RETCHK(0x50ef2eu, 0x50ef29u); LOADALL;
  /* 0050ef2e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050ef31 mov dword ptr [ebp - 0x94], eax */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(eax); }
  /* 0050ef37 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050ef39 mov byte ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x6u); }
  /* 0050ef3d je 0x50ef48 */ if (ZF_) goto L_0050ef48;
  /* 0050ef3f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050ef40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ef41 call 0x50c940 */ esp -= 4; M32(esp) = 0x50ef46u; SAVEALL; F_0050c940(c); ABI_CHECK(0x50c940u, 0x50ef41u); RETCHK(0x50ef46u, 0x50ef41u); LOADALL;
  /* 0050ef46 jmp 0x50ef4a */ goto L_0050ef4a;
L_0050ef48:;
  /* 0050ef48 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050ef4a:;
  /* 0050ef4a mov dword ptr [ebx + 0x254], eax */ { const u32 m_ = (u32)(ebx + 0x254u); M32(m_) = (u32)(eax); }
  /* 0050ef50 mov dword ptr [ebp - 0x40], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0xfu); }
  /* 0050ef57 mov dword ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x0u); }
  /* 0050ef5e mov byte ptr [ebp - 0x54], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M8(m_) = (u8)(0x0u); }
  /* 0050ef62 mov eax, dword ptr [ebp + 0x34] */ { const u32 m_ = (u32)(ebp + 0x34u); eax = (u32)(M32(m_)); }
  /* 0050ef65 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ef66 mov edi, 0x65131c */ { edi = (u32)(0x65131cu); }
  /* 0050ef6b lea esi, [ebp - 0xdc] */ esi = (u32)((u32)(ebp + 0xffffff24u));
  /* 0050ef71 mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 0050ef75 call 0x4646d0 */ esp -= 4; M32(esp) = 0x50ef7au; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x50ef75u); RETCHK(0x50ef7au, 0x50ef75u); LOADALL;
  /* 0050ef7a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050ef7d push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050ef7f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050ef81 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050ef82 lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0050ef85 mov byte ptr [ebp - 4], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x8u); }
  /* 0050ef89 call 0x404140 */ esp -= 4; M32(esp) = 0x50ef8eu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50ef89u); RETCHK(0x50ef8eu, 0x50ef89u); LOADALL;
  /* 0050ef8e mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 0050ef92 cmp dword ptr [ebp - 0xc4], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff3cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050ef99 jb 0x50efaa */ if (CF_) goto L_0050efaa;
  /* 0050ef9b mov ecx, dword ptr [ebp - 0xd8] */ { const u32 m_ = (u32)(ebp + 0xffffff28u); ecx = (u32)(M32(m_)); }
  /* 0050efa1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050efa2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50efa7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50efa2u); RETCHK(0x50efa7u, 0x50efa2u); LOADALL;
  /* 0050efa7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050efaa:;
  /* 0050efaa push 0x6518a4 */ { u32 v_ = 0x6518a4u; esp -= 4; M32(esp) = v_; }
  /* 0050efaf sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050efb2 lea ecx, [ebp - 0xa4] */ ecx = (u32)((u32)(ebp + 0xffffff5cu));
  /* 0050efb8 mov eax, esp */ { eax = (u32)(esp); }
  /* 0050efba mov dword ptr [ebp - 0x94], esp */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(esp); }
  /* 0050efc0 call 0x52cea0 */ esp -= 4; M32(esp) = 0x50efc5u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x50efc0u); RETCHK(0x50efc5u, 0x50efc0u); LOADALL;
  /* 0050efc5 mov esi, dword ptr [ebx + 0x254] */ { const u32 m_ = (u32)(ebx + 0x254u); esi = (u32)(M32(m_)); }
  /* 0050efcb lea eax, [ebp - 0x58] */ eax = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0050efce call 0x50cb40 */ esp -= 4; M32(esp) = 0x50efd3u; SAVEALL; F_0050cb40(c); ABI_CHECK(0x50cb40u, 0x50efceu); RETCHK(0x50efd3u, 0x50efceu); LOADALL;
  /* 0050efd3 mov ecx, dword ptr [ebx + 0x254] */ { const u32 m_ = (u32)(ebx + 0x254u); ecx = (u32)(M32(m_)); }
  /* 0050efd9 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050efdb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050efdd call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50efe0u; SAVEALL; call_ind(c, t_); RETCHK(0x50efe0u, 0x50efddu); LOADALL; }
  /* 0050efe0 push 0x2d4 */ { u32 v_ = 0x2d4u; esp -= 4; M32(esp) = v_; }
  /* 0050efe5 mov dword ptr [ebp - 0xa4], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(0x0u); }
  /* 0050efef mov dword ptr [ebp - 0xa0], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(0x0u); }
  /* 0050eff9 mov dword ptr [ebp - 0x9c], 0x437a0000 */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(0x437a0000u); }
  /* 0050f003 mov dword ptr [ebp - 0x98], 0x42b40000 */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(0x42b40000u); }
  /* 0050f00d call 0x5fe934 */ esp -= 4; M32(esp) = 0x50f012u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x50f00du); RETCHK(0x50f012u, 0x50f00du); LOADALL;
  /* 0050f012 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050f015 mov dword ptr [ebp - 0x94], eax */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(eax); }
  /* 0050f01b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f01d mov byte ptr [ebp - 4], 9 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x9u); }
  /* 0050f021 je 0x50f02c */ if (ZF_) goto L_0050f02c;
  /* 0050f023 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050f024 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f025 call 0x5221d0 */ esp -= 4; M32(esp) = 0x50f02au; SAVEALL; F_005221d0(c); ABI_CHECK(0x5221d0u, 0x50f025u); RETCHK(0x50f02au, 0x50f025u); LOADALL;
  /* 0050f02a jmp 0x50f02e */ goto L_0050f02e;
L_0050f02c:;
  /* 0050f02c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0050f02e:;
  /* 0050f02e mov dword ptr [ebx + 0x260], eax */ { const u32 m_ = (u32)(ebx + 0x260u); M32(m_) = (u32)(eax); }
  /* 0050f034 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0050f03b mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 0050f042 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0050f046 mov eax, dword ptr [ebp + 0x34] */ { const u32 m_ = (u32)(ebp + 0x34u); eax = (u32)(M32(m_)); }
  /* 0050f049 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f04a mov edi, 0x651898 */ { edi = (u32)(0x651898u); }
  /* 0050f04f lea esi, [ebp - 0xdc] */ esi = (u32)((u32)(ebp + 0xffffff24u));
  /* 0050f055 mov byte ptr [ebp - 4], 0xa */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xau); }
  /* 0050f059 call 0x4646d0 */ esp -= 4; M32(esp) = 0x50f05eu; SAVEALL; F_004646d0(c); ABI_CHECK(0x4646d0u, 0x50f059u); RETCHK(0x50f05eu, 0x50f059u); LOADALL;
  /* 0050f05e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050f061 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050f063 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050f065 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f066 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0050f069 mov byte ptr [ebp - 4], 0xb */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xbu); }
  /* 0050f06d call 0x404140 */ esp -= 4; M32(esp) = 0x50f072u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x50f06du); RETCHK(0x50f072u, 0x50f06du); LOADALL;
  /* 0050f072 mov byte ptr [ebp - 4], 0xa */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xau); }
  /* 0050f076 cmp dword ptr [ebp - 0xc4], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff3cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f07d jb 0x50f08e */ if (CF_) goto L_0050f08e;
  /* 0050f07f mov ecx, dword ptr [ebp - 0xd8] */ { const u32 m_ = (u32)(ebp + 0xffffff28u); ecx = (u32)(M32(m_)); }
  /* 0050f085 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050f086 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50f08bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50f086u); RETCHK(0x50f08bu, 0x50f086u); LOADALL;
  /* 0050f08b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050f08e:;
  /* 0050f08e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050f090 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050f092 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050f094 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050f097 lea ecx, [ebp - 0xa4] */ ecx = (u32)((u32)(ebp + 0xffffff5cu));
  /* 0050f09d mov eax, esp */ { eax = (u32)(esp); }
  /* 0050f09f mov dword ptr [ebp - 0x94], esp */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(esp); }
  /* 0050f0a5 call 0x52cea0 */ esp -= 4; M32(esp) = 0x50f0aau; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x50f0a5u); RETCHK(0x50f0aau, 0x50f0a5u); LOADALL;
  /* 0050f0aa mov ebx, dword ptr [ebx + 0x260] */ { const u32 m_ = (u32)(ebx + 0x260u); ebx = (u32)(M32(m_)); }
  /* 0050f0b0 lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0050f0b3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050f0b4 call 0x5223f0 */ esp -= 4; M32(esp) = 0x50f0b9u; SAVEALL; F_005223f0(c); ABI_CHECK(0x5223f0u, 0x50f0b4u); RETCHK(0x50f0b9u, 0x50f0b4u); LOADALL;
  /* 0050f0b9 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050f0bb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050f0bc push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0050f0c1 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0050f0c7 mov dword ptr [ebp - 0x98], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(0xfu); }
  /* 0050f0d1 mov dword ptr [ebp - 0x9c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(ebx); }
  /* 0050f0d7 mov byte ptr [ebp - 0xac], bl */ { const u32 m_ = (u32)(ebp + 0xffffff54u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050f0dd call 0x404420 */ esp -= 4; M32(esp) = 0x50f0e2u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50f0ddu); RETCHK(0x50f0e2u, 0x50f0ddu); LOADALL;
  /* 0050f0e2 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0050f0e5 mov byte ptr [ebp - 4], 0xc */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xcu); }
  /* 0050f0e9 mov esi, dword ptr [edi + 0x260] */ { const u32 m_ = (u32)(edi + 0x260u); esi = (u32)(M32(m_)); }
  /* 0050f0ef lea eax, [ebp - 0xb0] */ eax = (u32)((u32)(ebp + 0xffffff50u));
  /* 0050f0f5 call 0x5224b0 */ esp -= 4; M32(esp) = 0x50f0fau; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x50f0f5u); RETCHK(0x50f0fau, 0x50f0f5u); LOADALL;
  /* 0050f0fa mov byte ptr [ebp - 4], 0xa */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xau); }
  /* 0050f0fe mov eax, dword ptr [ebp - 0x98] */ { const u32 m_ = (u32)(ebp + 0xffffff68u); eax = (u32)(M32(m_)); }
  /* 0050f104 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0050f109 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f10b jb 0x50f11c */ if (CF_) goto L_0050f11c;
  /* 0050f10d mov eax, dword ptr [ebp - 0xac] */ { const u32 m_ = (u32)(ebp + 0xffffff54u); eax = (u32)(M32(m_)); }
  /* 0050f113 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f114 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50f119u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50f114u); RETCHK(0x50f119u, 0x50f114u); LOADALL;
  /* 0050f119 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050f11c:;
  /* 0050f11c mov ecx, dword ptr [edi + 0x260] */ { const u32 m_ = (u32)(edi + 0x260u); ecx = (u32)(M32(m_)); }
  /* 0050f122 mov dword ptr [ecx + 0x294], ebx */ { const u32 m_ = (u32)(ecx + 0x294u); M32(m_) = (u32)(ebx); }
  /* 0050f128 mov ecx, dword ptr [edi + 0x260] */ { const u32 m_ = (u32)(edi + 0x260u); ecx = (u32)(M32(m_)); }
  /* 0050f12e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050f130 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050f131 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50f134u; SAVEALL; call_ind(c, t_); RETCHK(0x50f134u, 0x50f131u); LOADALL; }
  /* 0050f134 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f137 jb 0x50f145 */ if (CF_) goto L_0050f145;
  /* 0050f139 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0050f13c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f13d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50f142u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50f13du); RETCHK(0x50f142u, 0x50f13du); LOADALL;
  /* 0050f142 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050f145:;
  /* 0050f145 cmp dword ptr [ebp - 0x40], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f148 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0050f14f mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0050f152 mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050f155 jb 0x50f16a */ if (CF_) goto L_0050f16a;
  /* 0050f157 mov ecx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); ecx = (u32)(M32(m_)); }
  /* 0050f15a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050f15b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50f160u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50f15bu); RETCHK(0x50f160u, 0x50f15bu); LOADALL;
  /* 0050f160 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050f163 jmp 0x50f16a */ goto L_0050f16a;
L_0050f165:;
  /* 0050f165 mov esi, 0x10 */ { esi = (u32)(0x10u); }
L_0050f16a:;
  /* 0050f16a cmp dword ptr [ebp - 0x78], esi */ { const u32 m_ = (u32)(ebp + 0xffffff88u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f16d jb 0x50f17e */ if (CF_) goto L_0050f17e;
  /* 0050f16f mov edx, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); edx = (u32)(M32(m_)); }
  /* 0050f175 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050f176 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50f17bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50f176u); RETCHK(0x50f17bu, 0x50f176u); LOADALL;
  /* 0050f17b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050f17e:;
  /* 0050f17e cmp dword ptr [ebp - 0x5c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f181 mov dword ptr [ebp - 0x78], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff88u); M32(m_) = (u32)(0xfu); }
  /* 0050f188 mov dword ptr [ebp - 0x7c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(0x0u); }
  /* 0050f18f mov byte ptr [ebp - 0x8c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M8(m_) = (u8)(0x0u); }
  /* 0050f196 jb 0x50f1a4 */ if (CF_) goto L_0050f1a4;
  /* 0050f198 mov eax, dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); eax = (u32)(M32(m_)); }
  /* 0050f19b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f19c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50f1a1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50f19cu); RETCHK(0x50f1a1u, 0x50f19cu); LOADALL;
  /* 0050f1a1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050f1a4:;
  /* 0050f1a4 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050f1a7 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050f1ae mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0050f1b1 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050f1b3 call 0x61af31 */ esp -= 4; M32(esp) = 0x50f1b8u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x50f1b3u); RETCHK(0x50f1b8u, 0x50f1b3u); LOADALL;
  /* 0050f1b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050f1b9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050f1ba pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050f1bb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050f1bd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050f1be ret 0x40 */ c->popped = M32(esp); esp += 68u; SAVEALL; return;
}

void F_0050f1d0(CPU *c) {
  NATIVE_HOOK(0x50f1d0u) REGS; LOADALL;
L_0050f1d0:;
  /* 0050f1d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050f1d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050f1d3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050f1d5 push 0x624348 */ { u32 v_ = 0x624348u; esp -= 4; M32(esp) = v_; }
  /* 0050f1da mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050f1e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f1e1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050f1e8 sub esp, 0x4c */ { u32 a_ = esp, b_ = 0x4cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050f1eb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050f1ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050f1ed mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050f1ef mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050f1f2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f1f4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050f1f5 mov dword ptr [ebp - 0x2c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(esi); }
  /* 0050f1f8 jne 0x50f20f */ if (!ZF_) goto L_0050f20f;
  /* 0050f1fa xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050f1fc mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050f1ff mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050f206 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050f207 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050f208 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050f209 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050f20b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050f20c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0050f20f:;
  /* 0050f20f mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050f211 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50f214u; SAVEALL; call_ind(c, t_); RETCHK(0x50f214u, 0x50f211u); LOADALL; }
  /* 0050f214 push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 0050f219 mov edi, eax */ { edi = (u32)(eax); }
  /* 0050f21b call 0x560fd0 */ esp -= 4; M32(esp) = 0x50f220u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50f21bu); RETCHK(0x50f220u, 0x50f21bu); LOADALL;
  /* 0050f220 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050f223 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050f226 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 0050f22b mov eax, edi */ { eax = (u32)(edi); }
  /* 0050f22d fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050f230 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50f235u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50f230u); RETCHK(0x50f235u, 0x50f230u); LOADALL;
  /* 0050f235 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050f238 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050f23b push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 0050f240 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050f242 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050f245 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50f24au; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50f245u); RETCHK(0x50f24au, 0x50f245u); LOADALL;
  /* 0050f24a mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050f24d fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050f250 push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 0050f255 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050f257 fadd dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050f25a fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050f25d call 0x560fd0 */ esp -= 4; M32(esp) = 0x50f262u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50f25du); RETCHK(0x50f262u, 0x50f25du); LOADALL;
  /* 0050f262 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0050f265 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0050f268 mov eax, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 0050f26b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f26d fadd dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050f270 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050f273 je 0x50f281 */ if (ZF_) goto L_0050f281;
  /* 0050f275 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f276 lea esi, [ebp - 0x3c] */ esi = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0050f279 call 0x52d060 */ esp -= 4; M32(esp) = 0x50f27eu; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x50f279u); RETCHK(0x50f27eu, 0x50f279u); LOADALL;
  /* 0050f27e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050f281:;
  /* 0050f281 push 0x65188c */ { u32 v_ = 0x65188cu; esp -= 4; M32(esp) = v_; }
  /* 0050f286 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050f288 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50f28du; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50f288u); RETCHK(0x50f28du, 0x50f288u); LOADALL;
  /* 0050f28d mov esi, eax */ { esi = (u32)(eax); }
  /* 0050f28f push 0x651880 */ { u32 v_ = 0x651880u; esp -= 4; M32(esp) = v_; }
  /* 0050f294 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050f296 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50f29bu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50f296u); RETCHK(0x50f29bu, 0x50f296u); LOADALL;
  /* 0050f29b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050f29d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050f29e mov eax, 0x651874 */ { eax = (u32)(0x651874u); }
  /* 0050f2a3 call 0x560ed0 */ esp -= 4; M32(esp) = 0x50f2a8u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50f2a3u); RETCHK(0x50f2a8u, 0x50f2a3u); LOADALL;
  /* 0050f2a8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f2a9 call 0x5fea82 */ esp -= 4; M32(esp) = 0x50f2aeu; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x50f2a9u); RETCHK(0x50f2aeu, 0x50f2a9u); LOADALL;
  /* 0050f2ae fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050f2b1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050f2b4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050f2b5 mov eax, 0x651864 */ { eax = (u32)(0x651864u); }
  /* 0050f2ba call 0x560ed0 */ esp -= 4; M32(esp) = 0x50f2bfu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50f2bau); RETCHK(0x50f2bfu, 0x50f2bau); LOADALL;
  /* 0050f2bf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f2c0 call 0x5fea82 */ esp -= 4; M32(esp) = 0x50f2c5u; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x50f2c0u); RETCHK(0x50f2c5u, 0x50f2c0u); LOADALL;
  /* 0050f2c5 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050f2c8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050f2cb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050f2cc mov eax, 0x651858 */ { eax = (u32)(0x651858u); }
  /* 0050f2d1 call 0x560ed0 */ esp -= 4; M32(esp) = 0x50f2d6u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50f2d1u); RETCHK(0x50f2d6u, 0x50f2d1u); LOADALL;
  /* 0050f2d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f2d7 call 0x5fea82 */ esp -= 4; M32(esp) = 0x50f2dcu; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x50f2d7u); RETCHK(0x50f2dcu, 0x50f2d7u); LOADALL;
  /* 0050f2dc fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050f2df add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050f2e2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050f2e3 mov eax, 0x65184c */ { eax = (u32)(0x65184cu); }
  /* 0050f2e8 call 0x560ed0 */ esp -= 4; M32(esp) = 0x50f2edu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50f2e8u); RETCHK(0x50f2edu, 0x50f2e8u); LOADALL;
  /* 0050f2ed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f2ee call 0x5fea82 */ esp -= 4; M32(esp) = 0x50f2f3u; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x50f2eeu); RETCHK(0x50f2f3u, 0x50f2eeu); LOADALL;
  /* 0050f2f3 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050f2f6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050f2f9 push 0x651840 */ { u32 v_ = 0x651840u; esp -= 4; M32(esp) = v_; }
  /* 0050f2fe mov eax, edi */ { eax = (u32)(edi); }
  /* 0050f300 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50f305u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50f300u); RETCHK(0x50f305u, 0x50f300u); LOADALL;
  /* 0050f305 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f307 setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0050f30a push 0x651838 */ { u32 v_ = 0x651838u; esp -= 4; M32(esp) = v_; }
  /* 0050f30f mov eax, edi */ { eax = (u32)(edi); }
  /* 0050f311 mov byte ptr [ebp - 0x18], cl */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0050f314 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50f319u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50f314u); RETCHK(0x50f319u, 0x50f314u); LOADALL;
  /* 0050f319 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0050f31c push 0x65182c */ { u32 v_ = 0x65182cu; esp -= 4; M32(esp) = v_; }
  /* 0050f321 mov eax, edi */ { eax = (u32)(edi); }
  /* 0050f323 call 0x560fd0 */ esp -= 4; M32(esp) = 0x50f328u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x50f323u); RETCHK(0x50f328u, 0x50f323u); LOADALL;
  /* 0050f328 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f32a setne dl */ { edx = (edx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0050f32d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050f32e mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 0050f333 mov byte ptr [ebp - 0x10], dl */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0050f336 call 0x560ed0 */ esp -= 4; M32(esp) = 0x50f33bu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50f336u); RETCHK(0x50f33bu, 0x50f336u); LOADALL;
  /* 0050f33b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050f33d lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
  /* 0050f340 mov dword ptr [ebp - 0x40], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0xfu); }
  /* 0050f347 mov dword ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x0u); }
  /* 0050f34e mov byte ptr [ebp - 0x54], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M8(m_) = (u8)(0x0u); }
  /* 0050f352 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
L_0050f355:;
  /* 0050f355 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050f357 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050f358 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050f35a jne 0x50f355 */ if (!ZF_) goto L_0050f355;
  /* 0050f35c sub ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050f35f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050f360 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f361 lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0050f364 call 0x404420 */ esp -= 4; M32(esp) = 0x50f369u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50f364u); RETCHK(0x50f369u, 0x50f364u); LOADALL;
  /* 0050f369 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0050f36c mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0050f36f mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 0050f372 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f373 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 0050f376 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050f377 mov ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ecx = (u32)(M32(m_)); }
  /* 0050f37a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050f37b mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 0050f37e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f37f mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0050f382 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050f383 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050f384 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f385 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050f386 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050f387 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050f388 mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 0050f38d mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050f394 call 0x560ed0 */ esp -= 4; M32(esp) = 0x50f399u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x50f394u); RETCHK(0x50f399u, 0x50f394u); LOADALL;
  /* 0050f399 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f39a sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050f39d lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0050f3a0 mov eax, esp */ { eax = (u32)(esp); }
  /* 0050f3a2 mov dword ptr [ebp + 8], esp */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esp); }
  /* 0050f3a5 call 0x52cea0 */ esp -= 4; M32(esp) = 0x50f3aau; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x50f3a5u); RETCHK(0x50f3aau, 0x50f3a5u); LOADALL;
  /* 0050f3aa mov edx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edx = (u32)(M32(m_)); }
  /* 0050f3ad lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0050f3b0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050f3b1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050f3b2 call 0x50ea90 */ esp -= 4; M32(esp) = 0x50f3b7u; SAVEALL; F_0050ea90(c); ABI_CHECK(0x50ea90u, 0x50f3b2u); RETCHK(0x50f3b7u, 0x50f3b2u); LOADALL;
  /* 0050f3b7 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 0050f3b9 cmp dword ptr [ebp - 0x40], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f3bd jb 0x50f3cb */ if (CF_) goto L_0050f3cb;
  /* 0050f3bf mov eax, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); eax = (u32)(M32(m_)); }
  /* 0050f3c2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f3c3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50f3c8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50f3c3u); RETCHK(0x50f3c8u, 0x50f3c3u); LOADALL;
  /* 0050f3c8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050f3cb:;
  /* 0050f3cb mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050f3ce pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050f3cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050f3d0 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 0050f3d2 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050f3d9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050f3da mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050f3dc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050f3dd ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050f3e0(CPU *c) {
  NATIVE_HOOK(0x50f3e0u) REGS; LOADALL;
L_0050f3e0:;
  /* 0050f3e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050f3e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050f3e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050f3e4 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0050f3e7 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f3e9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050f3ea push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050f3eb jl 0x50f428 */ if (LT_) goto L_0050f428;
  /* 0050f3ed mov eax, dword ptr [ecx + 0x1d8] */ { const u32 m_ = (u32)(ecx + 0x1d8u); eax = (u32)(M32(m_)); }
  /* 0050f3f3 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f3f5 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0050f3f8 jge 0x50f428 */ if (!LT_) goto L_0050f428;
  /* 0050f3fa mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0050f3fd test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f3ff jl 0x50f428 */ if (LT_) goto L_0050f428;
  /* 0050f401 mov edi, dword ptr [ecx + 0x1dc] */ { const u32 m_ = (u32)(ecx + 0x1dcu); edi = (u32)(M32(m_)); }
  /* 0050f407 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f409 jge 0x50f428 */ if (!LT_) goto L_0050f428;
  /* 0050f40b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050f40c mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050f40e call 0x421670 */ esp -= 4; M32(esp) = 0x50f413u; SAVEALL; F_00421670(c); ABI_CHECK(0x421670u, 0x50f40eu); RETCHK(0x50f413u, 0x50f40eu); LOADALL;
  /* 0050f413 imul eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f417 add eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050f41a imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f41d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050f41e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050f41f add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050f421 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050f422 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050f424 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050f425 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0050f428:;
  /* 0050f428 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050f429 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050f42c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050f42d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050f42f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050f430 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050f440(CPU *c) {
  NATIVE_HOOK(0x50f440u) REGS; LOADALL;
L_0050f440:;
  /* 0050f440 mov eax, dword ptr [ecx + 0x268] */ { const u32 m_ = (u32)(ecx + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050f446 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f448 jne 0x50f44b */ if (!ZF_) goto L_0050f44b;
  /* 0050f44a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050f44b:;
  /* 0050f44b mov ecx, dword ptr [ecx + 0x26c] */ { const u32 m_ = (u32)(ecx + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 0050f451 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050f453 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050f458 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f45a sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050f45d mov eax, edx */ { eax = (u32)(edx); }
  /* 0050f45f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050f462 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050f464 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050f470(CPU *c) {
  NATIVE_HOOK(0x50f470u) REGS; LOADALL;
L_0050f470:;
  /* 0050f470 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050f471 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050f473 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050f474 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050f477 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f479 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050f47a mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0050f47c jl 0x50f4f4 */ if (LT_) goto L_0050f4f4;
  /* 0050f47e mov eax, dword ptr [edi + 0x268] */ { const u32 m_ = (u32)(edi + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050f484 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f486 je 0x50f4f4 */ if (ZF_) goto L_0050f4f4;
  /* 0050f488 mov ecx, dword ptr [edi + 0x26c] */ { const u32 m_ = (u32)(edi + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 0050f48e sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050f490 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050f495 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f497 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050f49a mov eax, edx */ { eax = (u32)(edx); }
  /* 0050f49c shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050f49f add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050f4a1 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f4a3 jae 0x50f4f4 */ if (!CF_) goto L_0050f4f4;
  /* 0050f4a5 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0050f4a8 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050f4aa push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050f4ab lea ebx, [eax + 1] */ ebx = (u32)((u32)(eax + 0x1u));
  /* 0050f4ae mov edi, edi */ { edi = (u32)(edi); }
L_0050f4b0:;
  /* 0050f4b0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050f4b2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050f4b3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050f4b5 jne 0x50f4b0 */ if (!ZF_) goto L_0050f4b0;
  /* 0050f4b7 mov ecx, dword ptr [edi + 0x268] */ { const u32 m_ = (u32)(edi + 0x268u); ecx = (u32)(M32(m_)); }
  /* 0050f4bd imul esi, esi, 0x6c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f4c0 sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050f4c2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f4c3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050f4c4 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050f4c6 call 0x404420 */ esp -= 4; M32(esp) = 0x50f4cbu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50f4c6u); RETCHK(0x50f4cbu, 0x50f4c6u); LOADALL;
  /* 0050f4cb mov eax, dword ptr [edi + 0x268] */ { const u32 m_ = (u32)(edi + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050f4d1 mov ecx, dword ptr [eax + esi + 0x1c] */ { const u32 m_ = (u32)(eax + esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0050f4d5 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050f4d7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f4d9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050f4da je 0x50f4f4 */ if (ZF_) goto L_0050f4f4;
  /* 0050f4dc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050f4dd call 0x5ab020 */ esp -= 4; M32(esp) = 0x50f4e2u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x50f4ddu); RETCHK(0x50f4e2u, 0x50f4ddu); LOADALL;
  /* 0050f4e2 mov edi, dword ptr [edi + 0x268] */ { const u32 m_ = (u32)(edi + 0x268u); edi = (u32)(M32(m_)); }
  /* 0050f4e8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050f4eb add edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0050f4ed mov dword ptr [edi + 0x1c], 0 */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(0x0u); }
L_0050f4f4:;
  /* 0050f4f4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050f4f5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050f4f6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050f4f7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050f500(CPU *c) {
  NATIVE_HOOK(0x50f500u) REGS; LOADALL;
L_0050f500:;
  /* 0050f500 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050f501 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050f503 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050f506 mov edx, dword ptr [ecx + 0x268] */ { const u32 m_ = (u32)(ecx + 0x268u); edx = (u32)(M32(m_)); }
  /* 0050f50c imul eax, eax, 0x6c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f50f mov ecx, dword ptr [eax + edx + 0x18] */ { const u32 m_ = (u32)(eax + edx + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0050f513 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050f515 cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f518 jb 0x50f521 */ if (CF_) goto L_0050f521;
  /* 0050f51a mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050f51d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050f51e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0050f521:;
  /* 0050f521 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050f524 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050f525 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050f530(CPU *c) {
  NATIVE_HOOK(0x50f530u) REGS; LOADALL;
L_0050f530:;
  /* 0050f530 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050f531 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050f533 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0050f535 push 0x61de18 */ { u32 v_ = 0x61de18u; esp -= 4; M32(esp) = v_; }
  /* 0050f53a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0050f540 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f541 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0050f548 sub esp, 0x70 */ { u32 a_ = esp, b_ = 0x70u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050f54b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0050f550 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050f551 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0050f554 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050f555 lea eax, [ebp - 0x7c] */ eax = (u32)((u32)(ebp + 0xffffff84u));
  /* 0050f558 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f559 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0050f55b call 0x50e6f0 */ esp -= 4; M32(esp) = 0x50f560u; SAVEALL; F_0050e6f0(c); ABI_CHECK(0x50e6f0u, 0x50f55bu); RETCHK(0x50f560u, 0x50f55bu); LOADALL;
  /* 0050f560 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0050f563 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050f56a mov al, byte ptr [edi + 0x318] */ { const u32 m_ = (u32)(edi + 0x318u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050f570 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050f572 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050f574 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 0050f577 jne 0x50f590 */ if (!ZF_) goto L_0050f590;
  /* 0050f579 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0050f580:;
  /* 0050f580 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050f582 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050f583 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050f585 jne 0x50f580 */ if (!ZF_) goto L_0050f580;
  /* 0050f587 lea ecx, [ebp - 0x7c] */ ecx = (u32)((u32)(ebp + 0xffffff84u));
  /* 0050f58a jmp 0x50f59a */ goto L_0050f59a;
L_0050f590:;
  /* 0050f590 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050f592 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050f593 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050f595 jne 0x50f590 */ if (!ZF_) goto L_0050f590;
  /* 0050f597 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
L_0050f59a:;
  /* 0050f59a sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050f59c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f59d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050f59e call 0x404420 */ esp -= 4; M32(esp) = 0x50f5a3u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x50f59eu); RETCHK(0x50f5a3u, 0x50f59eu); LOADALL;
  /* 0050f5a3 mov cl, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050f5a6 mov byte ptr [ebp - 0x14], cl */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0050f5a9 lea esi, [edi + 0x264] */ esi = (u32)((u32)(edi + 0x264u));
  /* 0050f5af lea ecx, [ebp - 0x7c] */ ecx = (u32)((u32)(ebp + 0xffffff84u));
  /* 0050f5b2 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050f5b4 call 0x511b50 */ esp -= 4; M32(esp) = 0x50f5b9u; SAVEALL; F_00511b50(c); ABI_CHECK(0x511b50u, 0x50f5b4u); RETCHK(0x50f5b9u, 0x50f5b4u); LOADALL;
  /* 0050f5b9 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050f5bc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f5be jne 0x50f5c4 */ if (!ZF_) goto L_0050f5c4;
  /* 0050f5c0 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0050f5c2 jmp 0x50f5da */ goto L_0050f5da;
L_0050f5c4:;
  /* 0050f5c4 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050f5c7 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050f5c9 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050f5ce imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f5d0 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050f5d3 mov edi, edx */ { edi = (u32)(edx); }
  /* 0050f5d5 shr edi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0050f5d8 add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_0050f5da:;
  /* 0050f5da lea esi, [ebp - 0x7c] */ esi = (u32)((u32)(ebp + 0xffffff84u));
  /* 0050f5dd call 0x50f600 */ esp -= 4; M32(esp) = 0x50f5e2u; SAVEALL; F_0050f600(c); ABI_CHECK(0x50f600u, 0x50f5ddu); RETCHK(0x50f5e2u, 0x50f5ddu); LOADALL;
  /* 0050f5e2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0050f5e5 lea eax, [edi - 1] */ eax = (u32)((u32)(edi + 0xffffffffu));
  /* 0050f5e8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050f5e9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0050f5f0 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0050f5f3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050f5f4 call 0x61af31 */ esp -= 4; M32(esp) = 0x50f5f9u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x50f5f4u); RETCHK(0x50f5f9u, 0x50f5f4u); LOADALL;
  /* 0050f5f9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050f5fb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050f5fc ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050f600(CPU *c) {
  NATIVE_HOOK(0x50f600u) REGS; LOADALL;
L_0050f600:;
  /* 0050f600 cmp dword ptr [esi + 0x64], 0x10 */ { const u32 m_ = (u32)(esi + 0x64u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f604 jb 0x50f612 */ if (CF_) goto L_0050f612;
  /* 0050f606 mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 0050f609 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f60a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50f60fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50f60au); RETCHK(0x50f60fu, 0x50f60au); LOADALL;
  /* 0050f60f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050f612:;
  /* 0050f612 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050f613 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050f615 mov dword ptr [esi + 0x64], 0xf */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(0xfu); }
  /* 0050f61c mov dword ptr [esi + 0x60], ebx */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(ebx); }
  /* 0050f61f mov byte ptr [esi + 0x50], bl */ { const u32 m_ = (u32)(esi + 0x50u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050f622 cmp dword ptr [esi + 0x48], 0x10 */ { const u32 m_ = (u32)(esi + 0x48u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f626 jb 0x50f634 */ if (CF_) goto L_0050f634;
  /* 0050f628 mov ecx, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); ecx = (u32)(M32(m_)); }
  /* 0050f62b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050f62c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50f631u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50f62cu); RETCHK(0x50f631u, 0x50f62cu); LOADALL;
  /* 0050f631 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050f634:;
  /* 0050f634 mov dword ptr [esi + 0x48], 0xf */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(0xfu); }
  /* 0050f63b mov dword ptr [esi + 0x44], ebx */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(ebx); }
  /* 0050f63e mov byte ptr [esi + 0x34], bl */ { const u32 m_ = (u32)(esi + 0x34u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050f641 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f645 jb 0x50f653 */ if (CF_) goto L_0050f653;
  /* 0050f647 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0050f64a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050f64b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50f650u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50f64bu); RETCHK(0x50f650u, 0x50f64bu); LOADALL;
  /* 0050f650 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0050f653:;
  /* 0050f653 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0050f656 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0050f65d mov byte ptr [esi + 4], bl */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0050f660 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050f661 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050f670(CPU *c) {
  NATIVE_HOOK(0x50f670u) REGS; LOADALL;
L_0050f670:;
  /* 0050f670 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050f671 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050f673 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050f674 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0050f676 mov eax, dword ptr [ebx + 0x268] */ { const u32 m_ = (u32)(ebx + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050f67c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f67e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050f67f lea edi, [ebx + 0x264] */ edi = (u32)((u32)(ebx + 0x264u));
  /* 0050f685 je 0x50f703 */ if (ZF_) goto L_0050f703;
  /* 0050f687 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050f68a sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050f68c mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050f691 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f693 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050f696 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050f699 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050f69b shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050f69e add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050f6a0 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f6a2 jae 0x50f703 */ if (!CF_) goto L_0050f703;
  /* 0050f6a4 mov edx, dword ptr [ebx + 0x268] */ { const u32 m_ = (u32)(ebx + 0x268u); edx = (u32)(M32(m_)); }
  /* 0050f6aa imul ecx, ecx, 0x6c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f6ad add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050f6af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050f6b0 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050f6b2 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0050f6b5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f6b7 je 0x50f6c9 */ if (ZF_) goto L_0050f6c9;
  /* 0050f6b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f6ba call 0x5ab020 */ esp -= 4; M32(esp) = 0x50f6bfu; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x50f6bau); RETCHK(0x50f6bfu, 0x50f6bau); LOADALL;
  /* 0050f6bf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050f6c2 mov dword ptr [esi + 0x1c], 0 */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(0x0u); }
L_0050f6c9:;
  /* 0050f6c9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050f6ca lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0050f6cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f6ce call 0x511bd0 */ esp -= 4; M32(esp) = 0x50f6d3u; SAVEALL; F_00511bd0(c); ABI_CHECK(0x511bd0u, 0x50f6ceu); RETCHK(0x50f6d3u, 0x50f6ceu); LOADALL;
  /* 0050f6d3 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0050f6d6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f6d8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050f6d9 je 0x50f6f1 */ if (ZF_) goto L_0050f6f1;
  /* 0050f6db mov edi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edi = (u32)(M32(m_)); }
  /* 0050f6de sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0050f6e0 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050f6e5 imul edi */ { s64 p_ = (s64)(s32)eax * (s32)edi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f6e7 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050f6ea mov eax, edx */ { eax = (u32)(edx); }
  /* 0050f6ec shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050f6ef add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0050f6f1:;
  /* 0050f6f1 cmp dword ptr [ebx + 0x1e0], eax */ { const u32 m_ = (u32)(ebx + 0x1e0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f6f7 jb 0x50f703 */ if (CF_) goto L_0050f703;
  /* 0050f6f9 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0050f6fb mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0050f6fd call dword ptr [edx + 0x130] */ { const u32 m_ = (u32)(edx + 0x130u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50f703u; SAVEALL; call_ind(c, t_); RETCHK(0x50f703u, 0x50f6fdu); LOADALL; }
L_0050f703:;
  /* 0050f703 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050f704 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050f705 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050f706 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050f710(CPU *c) {
  NATIVE_HOOK(0x50f710u) REGS; LOADALL;
L_0050f710:;
  /* 0050f710 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050f711 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050f713 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050f714 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050f715 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050f716 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050f717 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0050f719 mov eax, dword ptr [edi + 0x268] */ { const u32 m_ = (u32)(edi + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050f71f xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050f721 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f723 je 0x50f7bf */ if (ZF_) goto L_0050f7bf;
  /* 0050f729 mov ecx, dword ptr [edi + 0x26c] */ { const u32 m_ = (u32)(edi + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 0050f72f sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050f731 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050f736 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f738 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050f73b mov eax, edx */ { eax = (u32)(edx); }
  /* 0050f73d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050f740 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050f742 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0050f745 je 0x50f7bf */ if (ZF_) goto L_0050f7bf;
  /* 0050f747 mov esi, dword ptr [edi + 0x268] */ { const u32 m_ = (u32)(edi + 0x268u); esi = (u32)(M32(m_)); }
  /* 0050f74d cmp esi, dword ptr [edi + 0x26c] */ { const u32 m_ = (u32)(edi + 0x26cu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f753 je 0x50f775 */ if (ZF_) goto L_0050f775;
L_0050f755:;
  /* 0050f755 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0050f758 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f75a je 0x50f768 */ if (ZF_) goto L_0050f768;
  /* 0050f75c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050f75d call 0x5ab020 */ esp -= 4; M32(esp) = 0x50f762u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x50f75du); RETCHK(0x50f762u, 0x50f75du); LOADALL;
  /* 0050f762 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050f765 mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
L_0050f768:;
  /* 0050f768 mov eax, dword ptr [edi + 0x26c] */ { const u32 m_ = (u32)(edi + 0x26cu); eax = (u32)(M32(m_)); }
  /* 0050f76e add esi, 0x6c */ { u32 a_ = esi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0050f771 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f773 jne 0x50f755 */ if (!ZF_) goto L_0050f755;
L_0050f775:;
  /* 0050f775 mov esi, dword ptr [edi + 0x268] */ { const u32 m_ = (u32)(edi + 0x268u); esi = (u32)(M32(m_)); }
  /* 0050f77b cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f77d je 0x50f7ad */ if (ZF_) goto L_0050f7ad;
  /* 0050f77f mov ebx, dword ptr [edi + 0x26c] */ { const u32 m_ = (u32)(edi + 0x26cu); ebx = (u32)(M32(m_)); }
  /* 0050f785 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f787 je 0x50f79c */ if (ZF_) goto L_0050f79c;
  /* 0050f789 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0050f790:;
  /* 0050f790 call 0x50f600 */ esp -= 4; M32(esp) = 0x50f795u; SAVEALL; F_0050f600(c); ABI_CHECK(0x50f600u, 0x50f790u); RETCHK(0x50f795u, 0x50f790u); LOADALL;
  /* 0050f795 add esi, 0x6c */ { u32 a_ = esi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0050f798 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f79a jne 0x50f790 */ if (!ZF_) goto L_0050f790;
L_0050f79c:;
  /* 0050f79c mov ecx, dword ptr [edi + 0x268] */ { const u32 m_ = (u32)(edi + 0x268u); ecx = (u32)(M32(m_)); }
  /* 0050f7a2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050f7a3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50f7a8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50f7a3u); RETCHK(0x50f7a8u, 0x50f7a3u); LOADALL;
  /* 0050f7a8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050f7ab xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0050f7ad:;
  /* 0050f7ad mov dword ptr [edi + 0x268], ebx */ { const u32 m_ = (u32)(edi + 0x268u); M32(m_) = (u32)(ebx); }
  /* 0050f7b3 mov dword ptr [edi + 0x26c], ebx */ { const u32 m_ = (u32)(edi + 0x26cu); M32(m_) = (u32)(ebx); }
  /* 0050f7b9 mov dword ptr [edi + 0x270], ebx */ { const u32 m_ = (u32)(edi + 0x270u); M32(m_) = (u32)(ebx); }
L_0050f7bf:;
  /* 0050f7bf mov edx, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); edx = (u32)(M32(m_)); }
  /* 0050f7c5 imul edx, dword ptr [edi + 0x1dc] */ { const u32 m_ = (u32)(edi + 0x1dcu); s64 p_ = (s64)(s32)edx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f7cc xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0050f7ce test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f7d0 mov dword ptr [edi + 0x1e0], 0xffffffff */ { const u32 m_ = (u32)(edi + 0x1e0u); M32(m_) = (u32)(0xffffffffu); }
  /* 0050f7da jle 0x50f801 */ if ((ZF_|LT_)) goto L_0050f801;
  /* 0050f7dc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0050f7e0:;
  /* 0050f7e0 mov eax, dword ptr [edi + 0x25c] */ { const u32 m_ = (u32)(edi + 0x25cu); eax = (u32)(M32(m_)); }
  /* 0050f7e6 mov ecx, dword ptr [eax + esi*4] */ { const u32 m_ = (u32)(eax + esi * 4u); ecx = (u32)(M32(m_)); }
  /* 0050f7e9 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050f7eb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050f7ec call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50f7efu; SAVEALL; call_ind(c, t_); RETCHK(0x50f7efu, 0x50f7ecu); LOADALL; }
  /* 0050f7ef mov eax, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); eax = (u32)(M32(m_)); }
  /* 0050f7f5 imul eax, dword ptr [edi + 0x1dc] */ { const u32 m_ = (u32)(edi + 0x1dcu); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f7fc inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050f7fd cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f7ff jl 0x50f7e0 */ if (LT_) goto L_0050f7e0;
L_0050f801:;
  /* 0050f801 mov al, byte ptr [edi + 0x318] */ { const u32 m_ = (u32)(edi + 0x318u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050f807 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050f809 jne 0x50f819 */ if (!ZF_) goto L_0050f819;
  /* 0050f80b mov edi, dword ptr [edi + 0x258] */ { const u32 m_ = (u32)(edi + 0x258u); edi = (u32)(M32(m_)); }
  /* 0050f811 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0050f813 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050f814 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0050f816 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50f819u; SAVEALL; call_ind(c, t_); RETCHK(0x50f819u, 0x50f816u); LOADALL; }
L_0050f819:;
  /* 0050f819 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050f81a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050f81b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050f81c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050f81e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050f81f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050f820(CPU *c) {
  NATIVE_HOOK(0x50f820u) REGS; LOADALL;
L_0050f820:;
  /* 0050f820 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050f821 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050f823 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050f824 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050f827 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f829 jl 0x50f863 */ if (LT_) goto L_0050f863;
  /* 0050f82b mov eax, dword ptr [ecx + 0x268] */ { const u32 m_ = (u32)(ecx + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050f831 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f833 je 0x50f863 */ if (ZF_) goto L_0050f863;
  /* 0050f835 mov edx, dword ptr [ecx + 0x26c] */ { const u32 m_ = (u32)(ecx + 0x26cu); edx = (u32)(M32(m_)); }
  /* 0050f83b sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0050f83d mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050f842 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f844 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050f847 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050f849 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050f84c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050f84e cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f850 jae 0x50f863 */ if (!CF_) goto L_0050f863;
  /* 0050f852 mov eax, dword ptr [ecx + 0x268] */ { const u32 m_ = (u32)(ecx + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050f858 imul esi, esi, 0x6c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f85b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0050f85d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050f860 mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
L_0050f863:;
  /* 0050f863 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050f864 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050f865 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050f870(CPU *c) {
  NATIVE_HOOK(0x50f870u) REGS; LOADALL;
L_0050f870:;
  /* 0050f870 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050f871 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050f873 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050f874 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050f877 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f879 jl 0x50f8b5 */ if (LT_) goto L_0050f8b5;
  /* 0050f87b mov eax, dword ptr [ecx + 0x268] */ { const u32 m_ = (u32)(ecx + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050f881 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f883 je 0x50f8b5 */ if (ZF_) goto L_0050f8b5;
  /* 0050f885 mov edx, dword ptr [ecx + 0x26c] */ { const u32 m_ = (u32)(ecx + 0x26cu); edx = (u32)(M32(m_)); }
  /* 0050f88b sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0050f88d mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050f892 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f894 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050f897 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050f899 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050f89c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050f89e cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f8a0 jae 0x50f8b5 */ if (!CF_) goto L_0050f8b5;
  /* 0050f8a2 mov eax, dword ptr [ecx + 0x268] */ { const u32 m_ = (u32)(ecx + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050f8a8 imul esi, esi, 0x6c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f8ab add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0050f8ad mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 0050f8b0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050f8b1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050f8b2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0050f8b5:;
  /* 0050f8b5 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050f8b8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050f8b9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050f8ba ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050f8c0(CPU *c) {
  NATIVE_HOOK(0x50f8c0u) REGS; LOADALL;
L_0050f8c0:;
  /* 0050f8c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050f8c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050f8c3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050f8c4 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050f8c7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f8c9 jl 0x50f903 */ if (LT_) goto L_0050f903;
  /* 0050f8cb mov eax, dword ptr [ecx + 0x268] */ { const u32 m_ = (u32)(ecx + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050f8d1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f8d3 je 0x50f903 */ if (ZF_) goto L_0050f903;
  /* 0050f8d5 mov edx, dword ptr [ecx + 0x26c] */ { const u32 m_ = (u32)(ecx + 0x26cu); edx = (u32)(M32(m_)); }
  /* 0050f8db sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0050f8dd mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050f8e2 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f8e4 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050f8e7 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050f8e9 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050f8ec add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050f8ee cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f8f0 jae 0x50f903 */ if (!CF_) goto L_0050f903;
  /* 0050f8f2 mov eax, dword ptr [ecx + 0x268] */ { const u32 m_ = (u32)(ecx + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050f8f8 imul esi, esi, 0x6c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f8fb add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0050f8fd mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050f900 mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
L_0050f903:;
  /* 0050f903 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050f904 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050f905 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050f910(CPU *c) {
  NATIVE_HOOK(0x50f910u) REGS; LOADALL;
L_0050f910:;
  /* 0050f910 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050f911 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050f913 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050f914 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050f917 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f919 jl 0x50f955 */ if (LT_) goto L_0050f955;
  /* 0050f91b mov eax, dword ptr [ecx + 0x268] */ { const u32 m_ = (u32)(ecx + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050f921 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f923 je 0x50f955 */ if (ZF_) goto L_0050f955;
  /* 0050f925 mov edx, dword ptr [ecx + 0x26c] */ { const u32 m_ = (u32)(ecx + 0x26cu); edx = (u32)(M32(m_)); }
  /* 0050f92b sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0050f92d mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050f932 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f934 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050f937 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050f939 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050f93c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050f93e cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f940 jae 0x50f955 */ if (!CF_) goto L_0050f955;
  /* 0050f942 mov eax, dword ptr [ecx + 0x268] */ { const u32 m_ = (u32)(ecx + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050f948 imul esi, esi, 0x6c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f94b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0050f94d mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 0050f950 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050f951 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050f952 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0050f955:;
  /* 0050f955 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050f958 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050f959 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050f95a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050f960(CPU *c) {
  NATIVE_HOOK(0x50f960u) REGS; LOADALL;
L_0050f960:;
  /* 0050f960 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050f961 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050f963 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050f964 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050f967 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f969 jl 0x50f9a3 */ if (LT_) goto L_0050f9a3;
  /* 0050f96b mov eax, dword ptr [ecx + 0x268] */ { const u32 m_ = (u32)(ecx + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050f971 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f973 je 0x50f9a3 */ if (ZF_) goto L_0050f9a3;
  /* 0050f975 mov edx, dword ptr [ecx + 0x26c] */ { const u32 m_ = (u32)(ecx + 0x26cu); edx = (u32)(M32(m_)); }
  /* 0050f97b sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0050f97d mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050f982 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f984 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050f987 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050f989 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050f98c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050f98e cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f990 jae 0x50f9a3 */ if (!CF_) goto L_0050f9a3;
  /* 0050f992 mov eax, dword ptr [ecx + 0x268] */ { const u32 m_ = (u32)(ecx + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050f998 imul esi, esi, 0x6c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f99b add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0050f99d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0050f9a0 mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
L_0050f9a3:;
  /* 0050f9a3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050f9a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050f9a5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050f9b0(CPU *c) {
  NATIVE_HOOK(0x50f9b0u) REGS; LOADALL;
L_0050f9b0:;
  /* 0050f9b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050f9b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050f9b3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050f9b4 mov al, 0xff */ { eax = (eax & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 0050f9b6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050f9b7 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0050f9ba test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f9bc mov byte ptr [ebp - 1], al */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0050f9bf mov byte ptr [ebp - 4], al */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0050f9c2 mov byte ptr [ebp - 3], al */ { const u32 m_ = (u32)(ebp + 0xfffffffdu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0050f9c5 mov byte ptr [ebp - 2], al */ { const u32 m_ = (u32)(ebp + 0xfffffffeu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0050f9c8 jl 0x50fa0c */ if (LT_) goto L_0050fa0c;
  /* 0050f9ca mov eax, dword ptr [ecx + 0x268] */ { const u32 m_ = (u32)(ecx + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050f9d0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050f9d2 je 0x50fa0c */ if (ZF_) goto L_0050fa0c;
  /* 0050f9d4 mov edx, dword ptr [ecx + 0x26c] */ { const u32 m_ = (u32)(ecx + 0x26cu); edx = (u32)(M32(m_)); }
  /* 0050f9da sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0050f9dc mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050f9e1 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f9e3 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050f9e6 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050f9e8 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050f9eb add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050f9ed cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050f9ef jae 0x50fa0c */ if (!CF_) goto L_0050fa0c;
  /* 0050f9f1 mov eax, dword ptr [ecx + 0x268] */ { const u32 m_ = (u32)(ecx + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050f9f7 imul esi, esi, 0x6c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050f9fa mov ecx, dword ptr [esi + eax + 0x20] */ { const u32 m_ = (u32)(esi + eax + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0050f9fe add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0050fa00 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050fa03 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0050fa05 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050fa06 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050fa08 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050fa09 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0050fa0c:;
  /* 0050fa0c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0050fa0f mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0050fa12 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0050fa14 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050fa15 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050fa17 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050fa18 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0050fa20(CPU *c) {
  NATIVE_HOOK(0x50fa20u) REGS; LOADALL;
L_0050fa20:;
  /* 0050fa20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050fa21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050fa23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050fa24 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0050fa27 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050fa2a jl 0x50fa61 */ if (LT_) goto L_0050fa61;
  /* 0050fa2c mov eax, dword ptr [ecx + 0x268] */ { const u32 m_ = (u32)(ecx + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050fa32 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050fa34 je 0x50fa61 */ if (ZF_) goto L_0050fa61;
  /* 0050fa36 mov edx, dword ptr [ecx + 0x26c] */ { const u32 m_ = (u32)(ecx + 0x26cu); edx = (u32)(M32(m_)); }
  /* 0050fa3c sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0050fa3e mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050fa43 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050fa45 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050fa48 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050fa4a shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050fa4d add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050fa4f cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050fa51 jae 0x50fa61 */ if (!CF_) goto L_0050fa61;
  /* 0050fa53 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050fa55 mov dword ptr [ecx + 0x1e0], esi */ { const u32 m_ = (u32)(ecx + 0x1e0u); M32(m_) = (u32)(esi); }
  /* 0050fa5b call dword ptr [eax + 0x13c] */ { const u32 m_ = (u32)(eax + 0x13cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50fa61u; SAVEALL; call_ind(c, t_); RETCHK(0x50fa61u, 0x50fa5bu); LOADALL; }
L_0050fa61:;
  /* 0050fa61 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050fa62 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050fa63 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050fa70(CPU *c) {
  NATIVE_HOOK(0x50fa70u) REGS; LOADALL;
L_0050fa70:;
  /* 0050fa70 mov eax, dword ptr [ecx + 0x1e0] */ { const u32 m_ = (u32)(ecx + 0x1e0u); eax = (u32)(M32(m_)); }
  /* 0050fa76 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050fa80(CPU *c) {
  NATIVE_HOOK(0x50fa80u) REGS; LOADALL;
L_0050fa80:;
  /* 0050fa80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050fa81 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050fa83 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050fa85 call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50fa88u; SAVEALL; call_ind(c, t_); RETCHK(0x50fa88u, 0x50fa85u); LOADALL; }
  /* 0050fa88 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050fa8a je 0x50fb35 */ if (ZF_) goto L_0050fb35;
  /* 0050fa90 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050fa92 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050fa94 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50fa97u; SAVEALL; call_ind(c, t_); RETCHK(0x50fa97u, 0x50fa94u); LOADALL; }
  /* 0050fa97 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050fa99 je 0x50fb35 */ if (ZF_) goto L_0050fb35;
  /* 0050fa9f call 0x5084b0 */ esp -= 4; M32(esp) = 0x50faa4u; SAVEALL; F_005084b0(c); ABI_CHECK(0x5084b0u, 0x50fa9fu); RETCHK(0x50faa4u, 0x50fa9fu); LOADALL;
  /* 0050faa4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050faa6 je 0x50fb35 */ if (ZF_) goto L_0050fb35;
  /* 0050faac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050faad call 0x508500 */ esp -= 4; M32(esp) = 0x50fab2u; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x50faadu); RETCHK(0x50fab2u, 0x50faadu); LOADALL;
  /* 0050fab2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050fab4 je 0x50faba */ if (ZF_) goto L_0050faba;
  /* 0050fab6 mov eax, esi */ { eax = (u32)(esi); }
  /* 0050fab8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050fab9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050faba:;
  /* 0050faba mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050fabc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050fabd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050fabe mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050fac0 call dword ptr [eax + 0x128] */ { const u32 m_ = (u32)(eax + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50fac6u; SAVEALL; call_ind(c, t_); RETCHK(0x50fac6u, 0x50fac0u); LOADALL; }
  /* 0050fac6 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050fac8 cmp ebx, -1 */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050facb je 0x50fb19 */ if (ZF_) goto L_0050fb19;
  /* 0050facd mov al, byte ptr [esi + 0x318] */ { const u32 m_ = (u32)(esi + 0x318u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050fad3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050fad5 jne 0x50faff */ if (!ZF_) goto L_0050faff;
  /* 0050fad7 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0050fad9 mov edi, esi */ { edi = (u32)(esi); }
  /* 0050fadb call 0x511870 */ esp -= 4; M32(esp) = 0x50fae0u; SAVEALL; F_00511870(c); ABI_CHECK(0x511870u, 0x50fadbu); RETCHK(0x50fae0u, 0x50fadbu); LOADALL;
  /* 0050fae0 test ah, 4 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050fae3 je 0x50faff */ if (ZF_) goto L_0050faff;
  /* 0050fae5 mov ecx, dword ptr [esi + 0x260] */ { const u32 m_ = (u32)(esi + 0x260u); ecx = (u32)(M32(m_)); }
  /* 0050faeb mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050faed push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050faef call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50faf2u; SAVEALL; call_ind(c, t_); RETCHK(0x50faf2u, 0x50faefu); LOADALL; }
  /* 0050faf2 mov ecx, dword ptr [esi + 0x254] */ { const u32 m_ = (u32)(esi + 0x254u); ecx = (u32)(M32(m_)); }
  /* 0050faf8 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050fafa push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050fafc call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50faffu; SAVEALL; call_ind(c, t_); RETCHK(0x50faffu, 0x50fafcu); LOADALL; }
L_0050faff:;
  /* 0050faff mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0050fb01 mov edi, esi */ { edi = (u32)(esi); }
  /* 0050fb03 call 0x511870 */ esp -= 4; M32(esp) = 0x50fb08u; SAVEALL; F_00511870(c); ABI_CHECK(0x511870u, 0x50fb03u); RETCHK(0x50fb08u, 0x50fb03u); LOADALL;
  /* 0050fb08 test al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050fb0a je 0x50fb19 */ if (ZF_) goto L_0050fb19;
  /* 0050fb0c mov ecx, dword ptr [esi + 0x258] */ { const u32 m_ = (u32)(esi + 0x258u); ecx = (u32)(M32(m_)); }
  /* 0050fb12 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050fb14 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050fb16 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50fb19u; SAVEALL; call_ind(c, t_); RETCHK(0x50fb19u, 0x50fb16u); LOADALL; }
L_0050fb19:;
  /* 0050fb19 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050fb1b call 0x507ac0 */ esp -= 4; M32(esp) = 0x50fb20u; SAVEALL; F_00507ac0(c); ABI_CHECK(0x507ac0u, 0x50fb1bu); RETCHK(0x50fb20u, 0x50fb1bu); LOADALL;
  /* 0050fb20 call 0x518bb0 */ esp -= 4; M32(esp) = 0x50fb25u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x50fb20u); RETCHK(0x50fb25u, 0x50fb20u); LOADALL;
  /* 0050fb25 call 0x5180e0 */ esp -= 4; M32(esp) = 0x50fb2au; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x50fb25u); RETCHK(0x50fb2au, 0x50fb25u); LOADALL;
  /* 0050fb2a mov edi, eax */ { edi = (u32)(eax); }
  /* 0050fb2c call 0x508d30 */ esp -= 4; M32(esp) = 0x50fb31u; SAVEALL; F_00508d30(c); ABI_CHECK(0x508d30u, 0x50fb2cu); RETCHK(0x50fb31u, 0x50fb2cu); LOADALL;
  /* 0050fb31 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050fb32 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050fb33 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050fb34 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050fb35:;
  /* 0050fb35 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050fb37 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050fb38 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050fb40(CPU *c) {
  NATIVE_HOOK(0x50fb40u) REGS; LOADALL;
L_0050fb40:;
  /* 0050fb40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050fb41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050fb43 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050fb44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050fb45 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050fb47 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050fb48 call 0x508500 */ esp -= 4; M32(esp) = 0x50fb4du; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x50fb48u); RETCHK(0x50fb4du, 0x50fb48u); LOADALL;
  /* 0050fb4d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050fb4f je 0x50fbd0 */ if (ZF_) goto L_0050fbd0;
  /* 0050fb51 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050fb52 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050fb53 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050fb55 call 0x507b00 */ esp -= 4; M32(esp) = 0x50fb5au; SAVEALL; F_00507b00(c); ABI_CHECK(0x507b00u, 0x50fb55u); RETCHK(0x50fb5au, 0x50fb55u); LOADALL;
  /* 0050fb5a call 0x518bb0 */ esp -= 4; M32(esp) = 0x50fb5fu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x50fb5au); RETCHK(0x50fb5fu, 0x50fb5au); LOADALL;
  /* 0050fb5f call 0x5180e0 */ esp -= 4; M32(esp) = 0x50fb64u; SAVEALL; F_005180e0(c); ABI_CHECK(0x5180e0u, 0x50fb5fu); RETCHK(0x50fb64u, 0x50fb5fu); LOADALL;
  /* 0050fb64 mov ebx, dword ptr [eax + 0x1f4] */ { const u32 m_ = (u32)(eax + 0x1f4u); ebx = (u32)(M32(m_)); }
  /* 0050fb6a add eax, 0x1dc */ { u32 a_ = eax, b_ = 0x1dcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050fb6f cmp ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050fb72 lea edx, [eax + 4] */ edx = (u32)((u32)(eax + 0x4u));
  /* 0050fb75 jb 0x50fb7b */ if (CF_) goto L_0050fb7b;
  /* 0050fb77 mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 0050fb79 jmp 0x50fb7d */ goto L_0050fb7d;
L_0050fb7b:;
  /* 0050fb7b mov edi, edx */ { edi = (u32)(edx); }
L_0050fb7d:;
  /* 0050fb7d mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0050fb80 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050fb82 cmp ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050fb85 jb 0x50fb89 */ if (CF_) goto L_0050fb89;
  /* 0050fb87 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
L_0050fb89:;
  /* 0050fb89 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050fb8a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0050fb8b lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0050fb8e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0050fb8f mov edi, eax */ { edi = (u32)(eax); }
  /* 0050fb91 call 0x40cdc0 */ esp -= 4; M32(esp) = 0x50fb96u; SAVEALL; F_0040cdc0(c); ABI_CHECK(0x40cdc0u, 0x50fb91u); RETCHK(0x50fb96u, 0x50fb91u); LOADALL;
  /* 0050fb96 mov al, byte ptr [esi + 0x318] */ { const u32 m_ = (u32)(esi + 0x318u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050fb9c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050fb9e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050fb9f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050fba0 jne 0x50fbbc */ if (!ZF_) goto L_0050fbbc;
  /* 0050fba2 mov ecx, dword ptr [esi + 0x260] */ { const u32 m_ = (u32)(esi + 0x260u); ecx = (u32)(M32(m_)); }
  /* 0050fba8 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050fbaa push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050fbac call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50fbafu; SAVEALL; call_ind(c, t_); RETCHK(0x50fbafu, 0x50fbacu); LOADALL; }
  /* 0050fbaf mov ecx, dword ptr [esi + 0x254] */ { const u32 m_ = (u32)(esi + 0x254u); ecx = (u32)(M32(m_)); }
  /* 0050fbb5 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0050fbb7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050fbb9 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50fbbcu; SAVEALL; call_ind(c, t_); RETCHK(0x50fbbcu, 0x50fbb9u); LOADALL; }
L_0050fbbc:;
  /* 0050fbbc mov ecx, dword ptr [esi + 0x258] */ { const u32 m_ = (u32)(esi + 0x258u); ecx = (u32)(M32(m_)); }
  /* 0050fbc2 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050fbc4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050fbc6 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50fbc9u; SAVEALL; call_ind(c, t_); RETCHK(0x50fbc9u, 0x50fbc6u); LOADALL; }
  /* 0050fbc9 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050fbcb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050fbcc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050fbce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050fbcf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050fbd0:;
  /* 0050fbd0 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0050fbd2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050fbd3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050fbd5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050fbd6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050fbe0(CPU *c) {
  NATIVE_HOOK(0x50fbe0u) REGS; LOADALL;
L_0050fbe0:;
  /* 0050fbe0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050fbe1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050fbe3 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050fbe6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050fbe7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050fbe8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050fbea mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050fbec push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050fbed mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0050fbf0 call dword ptr [eax + 0x128] */ { const u32 m_ = (u32)(eax + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50fbf6u; SAVEALL; call_ind(c, t_); RETCHK(0x50fbf6u, 0x50fbf0u); LOADALL; }
  /* 0050fbf6 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050fbf8 lea edi, [ebp - 0x1c] */ edi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0050fbfb mov eax, esi */ { eax = (u32)(esi); }
  /* 0050fbfd call 0x50e640 */ esp -= 4; M32(esp) = 0x50fc02u; SAVEALL; F_0050e640(c); ABI_CHECK(0x50e640u, 0x50fbfdu); RETCHK(0x50fc02u, 0x50fbfdu); LOADALL;
  /* 0050fc02 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050fc04 je 0x50fca6 */ if (ZF_) goto L_0050fca6;
  /* 0050fc0a mov al, byte ptr [esi + 0x318] */ { const u32 m_ = (u32)(esi + 0x318u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050fc10 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050fc12 jne 0x50fc8c */ if (!ZF_) goto L_0050fc8c;
  /* 0050fc14 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050fc15 mov esi, edi */ { esi = (u32)(edi); }
  /* 0050fc17 call 0x52cf90 */ esp -= 4; M32(esp) = 0x50fc1cu; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x50fc17u); RETCHK(0x50fc1cu, 0x50fc17u); LOADALL;
  /* 0050fc1c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050fc1f call 0x518bb0 */ esp -= 4; M32(esp) = 0x50fc24u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x50fc1fu); RETCHK(0x50fc24u, 0x50fc1fu); LOADALL;
  /* 0050fc24 lea esi, [ebp - 0xc] */ esi = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0050fc27 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0050fc2a call 0x517940 */ esp -= 4; M32(esp) = 0x50fc2fu; SAVEALL; F_00517940(c); ABI_CHECK(0x517940u, 0x50fc2au); RETCHK(0x50fc2fu, 0x50fc2au); LOADALL;
  /* 0050fc2f fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0050fc32 fcomp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0050fc35 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050fc37 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050fc3a jne 0x50fc63 */ if (!ZF_) goto L_0050fc63;
  /* 0050fc3c fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0050fc3f fcomp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0050fc42 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050fc44 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050fc47 jp 0x50fc63 */ if (PF_) goto L_0050fc63;
  /* 0050fc49 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0050fc4c fcomp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0050fc4f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050fc51 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050fc54 jne 0x50fc63 */ if (!ZF_) goto L_0050fc63;
  /* 0050fc56 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0050fc59 fcomp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0050fc5c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050fc5e test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050fc61 jnp 0x50fc89 */ if (!PF_) goto L_0050fc89;
L_0050fc63:;
  /* 0050fc63 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 0050fc66 lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0050fc69 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050fc6c fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050fc72 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050fc75 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0050fc78 fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050fc7b fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0050fc81 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050fc84 call 0x517970 */ esp -= 4; M32(esp) = 0x50fc89u; SAVEALL; F_00517970(c); ABI_CHECK(0x517970u, 0x50fc84u); RETCHK(0x50fc89u, 0x50fc84u); LOADALL;
L_0050fc89:;
  /* 0050fc89 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
L_0050fc8c:;
  /* 0050fc8c mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0050fc8e mov edi, esi */ { edi = (u32)(esi); }
  /* 0050fc90 call 0x511870 */ esp -= 4; M32(esp) = 0x50fc95u; SAVEALL; F_00511870(c); ABI_CHECK(0x511870u, 0x50fc90u); RETCHK(0x50fc95u, 0x50fc90u); LOADALL;
  /* 0050fc95 test al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050fc97 je 0x50fca6 */ if (ZF_) goto L_0050fca6;
  /* 0050fc99 mov ecx, dword ptr [esi + 0x258] */ { const u32 m_ = (u32)(esi + 0x258u); ecx = (u32)(M32(m_)); }
  /* 0050fc9f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0050fca1 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0050fca3 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50fca6u; SAVEALL; call_ind(c, t_); RETCHK(0x50fca6u, 0x50fca3u); LOADALL; }
L_0050fca6:;
  /* 0050fca6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050fca7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050fca8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050fca9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050fcab pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050fcac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050fcb0(CPU *c) {
  NATIVE_HOOK(0x50fcb0u) REGS; LOADALL;
L_0050fcb0:;
  /* 0050fcb0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050fcb1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050fcb2 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050fcb4 mov eax, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050fcba test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050fcbc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050fcbd jne 0x50fcc3 */ if (!ZF_) goto L_0050fcc3;
  /* 0050fcbf xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0050fcc1 jmp 0x50fcdc */ goto L_0050fcdc;
L_0050fcc3:;
  /* 0050fcc3 mov ecx, dword ptr [esi + 0x26c] */ { const u32 m_ = (u32)(esi + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 0050fcc9 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050fccb mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050fcd0 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050fcd2 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050fcd5 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 0050fcd7 shr ebx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0050fcda add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
L_0050fcdc:;
  /* 0050fcdc mov edi, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); edi = (u32)(M32(m_)); }
  /* 0050fce2 call 0x421670 */ esp -= 4; M32(esp) = 0x50fce7u; SAVEALL; F_00421670(c); ABI_CHECK(0x421670u, 0x50fce2u); RETCHK(0x50fce7u, 0x50fce2u); LOADALL;
  /* 0050fce7 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0050fce9 mov eax, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); eax = (u32)(M32(m_)); }
  /* 0050fcef inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050fcf0 imul ecx, edi */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050fcf3 imul ecx, eax */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050fcf6 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050fcf8 jae 0x50fd77 */ if (!CF_) goto L_0050fd77;
  /* 0050fcfa mov edx, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); edx = (u32)(M32(m_)); }
  /* 0050fd00 imul edi, eax */ { s64 p_ = (s64)(s32)edi * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050fd03 mov eax, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050fd09 add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0050fd0b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050fd0d je 0x50fd2c */ if (ZF_) goto L_0050fd2c;
  /* 0050fd0f mov ecx, dword ptr [esi + 0x26c] */ { const u32 m_ = (u32)(esi + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 0050fd15 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050fd17 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050fd1c imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050fd1e sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050fd21 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050fd23 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050fd26 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050fd28 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050fd2a jb 0x50fd66 */ if (CF_) goto L_0050fd66;
L_0050fd2c:;
  /* 0050fd2c mov eax, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050fd32 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050fd34 jne 0x50fd4a */ if (!ZF_) goto L_0050fd4a;
  /* 0050fd36 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050fd38 lea edi, [eax - 1] */ edi = (u32)((u32)(eax + 0xffffffffu));
  /* 0050fd3b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050fd3c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050fd3e call dword ptr [edx + 0x124] */ { const u32 m_ = (u32)(edx + 0x124u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50fd44u; SAVEALL; call_ind(c, t_); RETCHK(0x50fd44u, 0x50fd3eu); LOADALL; }
  /* 0050fd44 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050fd45 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050fd46 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050fd48 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050fd49 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050fd4a:;
  /* 0050fd4a mov ecx, dword ptr [esi + 0x26c] */ { const u32 m_ = (u32)(esi + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 0050fd50 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050fd52 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050fd57 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050fd59 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050fd5c mov eax, edx */ { eax = (u32)(edx); }
  /* 0050fd5e shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050fd61 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050fd63 lea edi, [eax - 1] */ edi = (u32)((u32)(eax + 0xffffffffu));
L_0050fd66:;
  /* 0050fd66 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050fd68 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050fd69 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050fd6b call dword ptr [edx + 0x124] */ { const u32 m_ = (u32)(edx + 0x124u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50fd71u; SAVEALL; call_ind(c, t_); RETCHK(0x50fd71u, 0x50fd6bu); LOADALL; }
  /* 0050fd71 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050fd72 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050fd73 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050fd75 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050fd76 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050fd77:;
  /* 0050fd77 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050fd79 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050fd7b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050fd7d call dword ptr [eax + 0x124] */ { const u32 m_ = (u32)(eax + 0x124u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50fd83u; SAVEALL; call_ind(c, t_); RETCHK(0x50fd83u, 0x50fd7du); LOADALL; }
  /* 0050fd83 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050fd84 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050fd85 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050fd87 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050fd88 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050fd90(CPU *c) {
  NATIVE_HOOK(0x50fd90u) REGS; LOADALL;
L_0050fd90:;
  /* 0050fd90 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050fd91 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050fd92 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050fd94 mov ebx, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); ebx = (u32)(M32(m_)); }
  /* 0050fd9a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050fd9b mov edi, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); edi = (u32)(M32(m_)); }
  /* 0050fda1 call 0x421670 */ esp -= 4; M32(esp) = 0x50fda6u; SAVEALL; F_00421670(c); ABI_CHECK(0x421670u, 0x50fda1u); RETCHK(0x50fda6u, 0x50fda1u); LOADALL;
  /* 0050fda6 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0050fda7 imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050fdaa imul edi, ebx */ { s64 p_ = (s64)(s32)edi * (s64)(s32)ebx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050fdad imul eax, ebx */ { s64 p_ = (s64)(s32)eax * (s64)(s32)ebx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050fdb0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050fdb2 mov eax, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); eax = (u32)(M32(m_)); }
  /* 0050fdb8 jl 0x50fdd1 */ if (LT_) goto L_0050fdd1;
  /* 0050fdba sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050fdbc jns 0x50fe0b */ if (!SF_) goto L_0050fe0b;
  /* 0050fdbe mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050fdc0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050fdc2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050fdc4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050fdc5 call dword ptr [edx + 0x124] */ { const u32 m_ = (u32)(edx + 0x124u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50fdcbu; SAVEALL; call_ind(c, t_); RETCHK(0x50fdcbu, 0x50fdc5u); LOADALL; }
  /* 0050fdcb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050fdcc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050fdcd mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050fdcf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050fdd0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050fdd1:;
  /* 0050fdd1 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050fdd3 jns 0x50fe0b */ if (!SF_) goto L_0050fe0b;
  /* 0050fdd5 mov eax, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050fddb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050fddd jne 0x50fdf1 */ if (!ZF_) goto L_0050fdf1;
  /* 0050fddf mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050fde1 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0050fde2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050fde4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050fde5 call dword ptr [edx + 0x124] */ { const u32 m_ = (u32)(edx + 0x124u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50fdebu; SAVEALL; call_ind(c, t_); RETCHK(0x50fdebu, 0x50fde5u); LOADALL; }
  /* 0050fdeb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050fdec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050fded mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050fdef pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050fdf0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0050fdf1:;
  /* 0050fdf1 mov ecx, dword ptr [esi + 0x26c] */ { const u32 m_ = (u32)(esi + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 0050fdf7 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050fdf9 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050fdfe imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050fe00 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050fe03 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050fe05 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050fe08 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050fe0a dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_0050fe0b:;
  /* 0050fe0b mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050fe0d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050fe0f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050fe10 call dword ptr [edx + 0x124] */ { const u32 m_ = (u32)(edx + 0x124u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50fe16u; SAVEALL; call_ind(c, t_); RETCHK(0x50fe16u, 0x50fe10u); LOADALL; }
  /* 0050fe16 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050fe17 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050fe18 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0050fe1a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050fe1b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0050fe20(CPU *c) {
  NATIVE_HOOK(0x50fe20u) REGS; LOADALL;
L_0050fe20:;
  /* 0050fe20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050fe21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050fe23 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050fe26 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050fe27 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050fe28 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050fe29 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050fe2b call 0x421670 */ esp -= 4; M32(esp) = 0x50fe30u; SAVEALL; F_00421670(c); ABI_CHECK(0x421670u, 0x50fe2bu); RETCHK(0x50fe30u, 0x50fe2bu); LOADALL;
  /* 0050fe30 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0050fe32 imul ebx, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); s64 p_ = (s64)(s32)ebx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050fe39 imul ebx, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); s64 p_ = (s64)(s32)ebx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050fe40 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050fe42 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0050fe44 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0050fe47 call 0x52ce60 */ esp -= 4; M32(esp) = 0x50fe4cu; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x50fe47u); RETCHK(0x50fe4cu, 0x50fe47u); LOADALL;
  /* 0050fe4c lea edi, [ebp - 0x10] */ edi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0050fe4f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050fe51 call 0x52cf40 */ esp -= 4; M32(esp) = 0x50fe56u; SAVEALL; F_0052cf40(c); ABI_CHECK(0x52cf40u, 0x50fe51u); RETCHK(0x50fe56u, 0x50fe51u); LOADALL;
  /* 0050fe56 mov eax, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); eax = (u32)(M32(m_)); }
  /* 0050fe5c fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0050fe5f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050fe61 fadd dword ptr [esi + 0x1f8] */ { const u32 m_ = (u32)(esi + 0x1f8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050fe67 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 0050fe6e jle 0x50ff95 */ if ((ZF_|LT_)) goto L_0050ff95;
  /* 0050fe74 jmp 0x50fe80 */ goto L_0050fe80;
L_0050fe80:;
  /* 0050fe80 mov eax, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); eax = (u32)(M32(m_)); }
  /* 0050fe86 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050fe88 je 0x50ff95 */ if (ZF_) goto L_0050ff95;
  /* 0050fe8e mov ecx, dword ptr [esi + 0x26c] */ { const u32 m_ = (u32)(esi + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 0050fe94 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050fe96 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050fe9b imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050fe9d sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050fea0 mov eax, edx */ { eax = (u32)(edx); }
  /* 0050fea2 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050fea5 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050fea7 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050fea9 jae 0x50ff95 */ if (!CF_) goto L_0050ff95;
  /* 0050feaf mov eax, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); eax = (u32)(M32(m_)); }
  /* 0050feb5 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0050feb8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050feba fadd dword ptr [esi + 0x1f4] */ { const u32 m_ = (u32)(esi + 0x1f4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050fec0 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0050fec7 jle 0x50ff70 */ if ((ZF_|LT_)) goto L_0050ff70;
  /* 0050fecd mov edi, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); edi = (u32)(M32(m_)); }
L_0050fed3:;
  /* 0050fed3 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0050fed5 je 0x50ff70 */ if (ZF_) goto L_0050ff70;
  /* 0050fedb mov ecx, dword ptr [esi + 0x26c] */ { const u32 m_ = (u32)(esi + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 0050fee1 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0050fee3 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0050fee8 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050feea sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0050feed mov eax, edx */ { eax = (u32)(edx); }
  /* 0050feef shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0050fef2 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050fef4 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050fef6 jae 0x50ff70 */ if (!CF_) goto L_0050ff70;
  /* 0050fef8 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0050fefb fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0050fefd fadd dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050ff03 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 0050ff05 fadd dword ptr [esi + 0x1f0] */ { const u32 m_ = (u32)(esi + 0x1f0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050ff0b fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0050ff0e fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 0050ff10 fcomp st(2) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(2)); FPOP();
  /* 0050ff12 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050ff14 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050ff17 jne 0x50ff4a */ if (!ZF_) goto L_0050ff4a;
  /* 0050ff19 fcomp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0050ff1b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050ff1d test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050ff20 jne 0x50ff4c */ if (!ZF_) goto L_0050ff4c;
  /* 0050ff22 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0050ff25 fcomp st(2) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(2)); FPOP();
  /* 0050ff27 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050ff29 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050ff2c jne 0x50ff4c */ if (!ZF_) goto L_0050ff4c;
  /* 0050ff2e fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0050ff31 fcomp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0050ff34 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0050ff36 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050ff39 jp 0x50ff4c */ if (PF_) goto L_0050ff4c;
  /* 0050ff3b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050ff3c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050ff3e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050ff3f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050ff41 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0050ff43 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050ff44 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050ff46 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050ff47 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0050ff4a:;
  /* 0050ff4a fstp st(0) */ ST(0) = ST(0); FPOP();
L_0050ff4c:;
  /* 0050ff4c fld dword ptr [esi + 0x1e4] */ { const u32 m_ = (u32)(esi + 0x1e4u); FPUSH((double)MF32(m_)); }
  /* 0050ff52 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0050ff55 fadd dword ptr [esi + 0x1ec] */ { const u32 m_ = (u32)(esi + 0x1ecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050ff5b mov ecx, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 0050ff61 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050ff62 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050ff63 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050ff65 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0050ff67 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0050ff6a jl 0x50fed3 */ if (LT_) goto L_0050fed3;
L_0050ff70:;
  /* 0050ff70 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0050ff73 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050ff75 fld dword ptr [esi + 0x1f0] */ { const u32 m_ = (u32)(esi + 0x1f0u); FPUSH((double)MF32(m_)); }
  /* 0050ff7b mov ecx, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 0050ff81 fadd dword ptr [esi + 0x1e8] */ { const u32 m_ = (u32)(esi + 0x1e8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0050ff87 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0050ff88 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050ff8a mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0050ff8d faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0050ff8f jl 0x50fe80 */ if (LT_) goto L_0050fe80;
L_0050ff95:;
  /* 0050ff95 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0050ff96 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0050ff98 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0050ff99 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0050ff9c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0050ff9d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0050ff9f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0050ffa0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0050ffb0(CPU *c) {
  NATIVE_HOOK(0x50ffb0u) REGS; LOADALL;
L_0050ffb0:;
  /* 0050ffb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0050ffb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0050ffb3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0050ffb6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050ffb7 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0050ffba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0050ffbb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050ffbc mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0050ffbf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050ffc0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0050ffc1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0050ffc3 call 0x50c780 */ esp -= 4; M32(esp) = 0x50ffc8u; SAVEALL; F_0050c780(c); ABI_CHECK(0x50c780u, 0x50ffc3u); RETCHK(0x50ffc8u, 0x50ffc3u); LOADALL;
  /* 0050ffc8 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0050ffca mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050ffcc call dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50ffcfu; SAVEALL; call_ind(c, t_); RETCHK(0x50ffcfu, 0x50ffccu); LOADALL; }
  /* 0050ffcf mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0050ffd1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0050ffd2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0050ffd4 call dword ptr [edx + 0x134] */ { const u32 m_ = (u32)(edx + 0x134u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x50ffdau; SAVEALL; call_ind(c, t_); RETCHK(0x50ffdau, 0x50ffd4u); LOADALL; }
  /* 0050ffda mov edi, eax */ { edi = (u32)(eax); }
  /* 0050ffdc cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0050ffdf je 0x51002e */ if (ZF_) goto L_0051002e;
  /* 0050ffe1 mov edx, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); edx = (u32)(M32(m_)); }
  /* 0050ffe7 imul eax, eax, 0x6c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0050ffea mov cl, byte ptr [eax + edx + 0x68] */ { const u32 m_ = (u32)(eax + edx + 0x68u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0050ffee add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0050fff0 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0050fff2 je 0x51002e */ if (ZF_) goto L_0051002e;
  /* 0050fff4 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0050fff7 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0050fffa mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 00510001 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 00510004 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 00510007 call 0x508540 */ esp -= 4; M32(esp) = 0x51000cu; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x510007u); RETCHK(0x51000cu, 0x510007u); LOADALL;
  /* 0051000c cmp edi, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510012 je 0x510028 */ if (ZF_) goto L_00510028;
  /* 00510014 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00510016 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00510017 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00510019 call dword ptr [eax + 0x124] */ { const u32 m_ = (u32)(eax + 0x124u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51001fu; SAVEALL; call_ind(c, t_); RETCHK(0x51001fu, 0x510019u); LOADALL; }
  /* 0051001f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00510020 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00510021 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00510022 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00510024 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00510025 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00510028:;
  /* 00510028 inc dword ptr [esi + 0x314] */ { const u32 m_ = (u32)(esi + 0x314u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_0051002e:;
  /* 0051002e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051002f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00510030 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00510031 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00510033 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00510034 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00510040(CPU *c) {
  NATIVE_HOOK(0x510040u) REGS; LOADALL;
L_00510040:;
  /* 00510040 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00510041 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00510043 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00510046 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00510049 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051004a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051004b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051004c mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0051004f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00510050 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00510052 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00510053 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00510056 call 0x507f80 */ esp -= 4; M32(esp) = 0x51005bu; SAVEALL; F_00507f80(c); ABI_CHECK(0x507f80u, 0x510056u); RETCHK(0x51005bu, 0x510056u); LOADALL;
  /* 0051005b mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0051005d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051005e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00510060 call dword ptr [edx + 0x134] */ { const u32 m_ = (u32)(edx + 0x134u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x510066u; SAVEALL; call_ind(c, t_); RETCHK(0x510066u, 0x510060u); LOADALL; }
  /* 00510066 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00510068 cmp ebx, -1 */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051006b je 0x510197 */ if (ZF_) goto L_00510197;
  /* 00510071 mov edx, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); edx = (u32)(M32(m_)); }
  /* 00510077 imul eax, eax, 0x6c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0051007a mov cl, byte ptr [eax + edx + 0x68] */ { const u32 m_ = (u32)(eax + edx + 0x68u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051007e add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00510080 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510082 je 0x510197 */ if (ZF_) goto L_00510197;
  /* 00510088 cmp dword ptr [esi + 0x314], 1 */ { const u32 m_ = (u32)(esi + 0x314u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051008f jle 0x510197 */ if ((ZF_|LT_)) goto L_00510197;
  /* 00510095 mov al, byte ptr [esi + 0x31a] */ { const u32 m_ = (u32)(esi + 0x31au); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051009b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051009d je 0x510128 */ if (ZF_) goto L_00510128;
  /* 005100a3 lea edi, [ebp - 0x14] */ edi = (u32)((u32)(ebp + 0xffffffecu));
  /* 005100a6 mov eax, esi */ { eax = (u32)(esi); }
  /* 005100a8 call 0x50e640 */ esp -= 4; M32(esp) = 0x5100adu; SAVEALL; F_0050e640(c); ABI_CHECK(0x50e640u, 0x5100a8u); RETCHK(0x5100adu, 0x5100a8u); LOADALL;
  /* 005100ad push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005100ae mov esi, edi */ { esi = (u32)(edi); }
  /* 005100b0 call 0x52cf90 */ esp -= 4; M32(esp) = 0x5100b5u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x5100b0u); RETCHK(0x5100b5u, 0x5100b0u); LOADALL;
  /* 005100b5 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005100b8 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005100ba add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005100bd fcomp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005100c0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005100c2 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005100c5 jne 0x510197 */ if (!ZF_) goto L_00510197;
  /* 005100cb fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005100cd fcomp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005100d0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005100d2 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005100d5 jp 0x510197 */ if (PF_) goto L_00510197;
  /* 005100db fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005100de fcomp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005100e1 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005100e3 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005100e6 jne 0x510197 */ if (!ZF_) goto L_00510197;
  /* 005100ec fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005100ef fcomp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005100f2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005100f4 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005100f7 jp 0x510197 */ if (PF_) goto L_00510197;
  /* 005100fd mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00510100 mov ecx, dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00510103 lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00510106 mov dword ptr [ebp - 0x1c], 0x12 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x12u); }
  /* 0051010d mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00510110 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00510113 mov dword ptr [ebp - 0x10], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x1u); }
  /* 0051011a call 0x508540 */ esp -= 4; M32(esp) = 0x51011fu; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x51011au); RETCHK(0x51011fu, 0x51011au); LOADALL;
  /* 0051011f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00510120 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00510121 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00510122 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00510124 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00510125 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00510128:;
  /* 00510128 mov ecx, dword ptr [esi + 0x258] */ { const u32 m_ = (u32)(esi + 0x258u); ecx = (u32)(M32(m_)); }
  /* 0051012e mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00510130 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00510133 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00510134 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x510137u; SAVEALL; call_ind(c, t_); RETCHK(0x510137u, 0x510134u); LOADALL; }
  /* 00510137 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00510138 lea esi, [ebp - 0x14] */ esi = (u32)((u32)(ebp + 0xffffffecu));
  /* 0051013b call 0x52cf90 */ esp -= 4; M32(esp) = 0x510140u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x51013bu); RETCHK(0x510140u, 0x51013bu); LOADALL;
  /* 00510140 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 00510142 fcomp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00510145 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00510148 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051014a test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051014d jne 0x510197 */ if (!ZF_) goto L_00510197;
  /* 0051014f fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 00510151 fcomp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00510154 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510156 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510159 jp 0x510197 */ if (PF_) goto L_00510197;
  /* 0051015b fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0051015e fcomp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00510161 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510163 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510166 jne 0x510197 */ if (!ZF_) goto L_00510197;
  /* 00510168 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0051016b fcomp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0051016e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510170 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510173 jp 0x510197 */ if (PF_) goto L_00510197;
  /* 00510175 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00510178 mov ecx, dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0051017b lea edx, [ebp - 0x34] */ edx = (u32)((u32)(ebp + 0xffffffccu));
  /* 0051017e mov dword ptr [ebp - 0x34], 0x12 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x12u); }
  /* 00510185 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 00510188 mov dword ptr [ebp - 0x2c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ebx); }
  /* 0051018b mov dword ptr [ebp - 0x28], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x1u); }
  /* 00510192 call 0x508540 */ esp -= 4; M32(esp) = 0x510197u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x510192u); RETCHK(0x510197u, 0x510192u); LOADALL;
L_00510197:;
  /* 00510197 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00510198 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00510199 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051019a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051019c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051019d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00510050(CPU *c) {
  NATIVE_HOOK(0x510050u) REGS; LOADALL;
L_00510050:;
  /* 00510050 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00510052 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00510053 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00510056 call 0x507f80 */ esp -= 4; M32(esp) = 0x51005bu; SAVEALL; F_00507f80(c); ABI_CHECK(0x507f80u, 0x510056u); RETCHK(0x51005bu, 0x510056u); LOADALL;
  /* 0051005b mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0051005d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051005e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00510060 call dword ptr [edx + 0x134] */ { const u32 m_ = (u32)(edx + 0x134u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x510066u; SAVEALL; call_ind(c, t_); RETCHK(0x510066u, 0x510060u); LOADALL; }
  /* 00510066 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00510068 cmp ebx, -1 */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051006b je 0x510197 */ if (ZF_) goto L_00510197;
  /* 00510071 mov edx, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); edx = (u32)(M32(m_)); }
  /* 00510077 imul eax, eax, 0x6c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0051007a mov cl, byte ptr [eax + edx + 0x68] */ { const u32 m_ = (u32)(eax + edx + 0x68u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051007e add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00510080 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510082 je 0x510197 */ if (ZF_) goto L_00510197;
  /* 00510088 cmp dword ptr [esi + 0x314], 1 */ { const u32 m_ = (u32)(esi + 0x314u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051008f jle 0x510197 */ if ((ZF_|LT_)) goto L_00510197;
  /* 00510095 mov al, byte ptr [esi + 0x31a] */ { const u32 m_ = (u32)(esi + 0x31au); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051009b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051009d je 0x510128 */ if (ZF_) goto L_00510128;
  /* 005100a3 lea edi, [ebp - 0x14] */ edi = (u32)((u32)(ebp + 0xffffffecu));
  /* 005100a6 mov eax, esi */ { eax = (u32)(esi); }
  /* 005100a8 call 0x50e640 */ esp -= 4; M32(esp) = 0x5100adu; SAVEALL; F_0050e640(c); ABI_CHECK(0x50e640u, 0x5100a8u); RETCHK(0x5100adu, 0x5100a8u); LOADALL;
  /* 005100ad push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005100ae mov esi, edi */ { esi = (u32)(edi); }
  /* 005100b0 call 0x52cf90 */ esp -= 4; M32(esp) = 0x5100b5u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x5100b0u); RETCHK(0x5100b5u, 0x5100b0u); LOADALL;
  /* 005100b5 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005100b8 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005100ba add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005100bd fcomp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005100c0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005100c2 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005100c5 jne 0x510197 */ if (!ZF_) goto L_00510197;
  /* 005100cb fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005100cd fcomp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005100d0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005100d2 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005100d5 jp 0x510197 */ if (PF_) goto L_00510197;
  /* 005100db fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005100de fcomp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005100e1 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005100e3 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005100e6 jne 0x510197 */ if (!ZF_) goto L_00510197;
  /* 005100ec fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005100ef fcomp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005100f2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005100f4 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005100f7 jp 0x510197 */ if (PF_) goto L_00510197;
  /* 005100fd mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00510100 mov ecx, dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00510103 lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00510106 mov dword ptr [ebp - 0x1c], 0x12 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x12u); }
  /* 0051010d mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00510110 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00510113 mov dword ptr [ebp - 0x10], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x1u); }
  /* 0051011a call 0x508540 */ esp -= 4; M32(esp) = 0x51011fu; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x51011au); RETCHK(0x51011fu, 0x51011au); LOADALL;
  /* 0051011f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00510120 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00510121 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00510122 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00510124 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00510125 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00510128:;
  /* 00510128 mov ecx, dword ptr [esi + 0x258] */ { const u32 m_ = (u32)(esi + 0x258u); ecx = (u32)(M32(m_)); }
  /* 0051012e mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00510130 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00510133 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00510134 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x510137u; SAVEALL; call_ind(c, t_); RETCHK(0x510137u, 0x510134u); LOADALL; }
  /* 00510137 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00510138 lea esi, [ebp - 0x14] */ esi = (u32)((u32)(ebp + 0xffffffecu));
  /* 0051013b call 0x52cf90 */ esp -= 4; M32(esp) = 0x510140u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x51013bu); RETCHK(0x510140u, 0x51013bu); LOADALL;
  /* 00510140 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 00510142 fcomp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00510145 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00510148 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051014a test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051014d jne 0x510197 */ if (!ZF_) goto L_00510197;
  /* 0051014f fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 00510151 fcomp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00510154 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510156 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510159 jp 0x510197 */ if (PF_) goto L_00510197;
  /* 0051015b fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0051015e fcomp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00510161 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510163 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510166 jne 0x510197 */ if (!ZF_) goto L_00510197;
  /* 00510168 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0051016b fcomp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0051016e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510170 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510173 jp 0x510197 */ if (PF_) goto L_00510197;
  /* 00510175 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00510178 mov ecx, dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0051017b lea edx, [ebp - 0x34] */ edx = (u32)((u32)(ebp + 0xffffffccu));
  /* 0051017e mov dword ptr [ebp - 0x34], 0x12 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x12u); }
  /* 00510185 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 00510188 mov dword ptr [ebp - 0x2c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ebx); }
  /* 0051018b mov dword ptr [ebp - 0x28], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x1u); }
  /* 00510192 call 0x508540 */ esp -= 4; M32(esp) = 0x510197u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x510192u); RETCHK(0x510197u, 0x510192u); LOADALL;
L_00510197:;
  /* 00510197 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00510198 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00510199 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051019a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051019c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051019d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0051005a(CPU *c) {
  NATIVE_HOOK(0x51005au) REGS; LOADALL;
L_0051005a:;
  /* 0051005a dec dword ptr [ebx - 0x3174a8ea] */ { const u32 m_ = (u32)(ebx + 0xce8b5716u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00510060 call dword ptr [edx + 0x134] */ { const u32 m_ = (u32)(edx + 0x134u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x510066u; SAVEALL; call_ind(c, t_); RETCHK(0x510066u, 0x510060u); LOADALL; }
  /* 00510066 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00510068 cmp ebx, -1 */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051006b je 0x510197 */ if (ZF_) goto L_00510197;
  /* 00510071 mov edx, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); edx = (u32)(M32(m_)); }
  /* 00510077 imul eax, eax, 0x6c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0051007a mov cl, byte ptr [eax + edx + 0x68] */ { const u32 m_ = (u32)(eax + edx + 0x68u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051007e add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00510080 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510082 je 0x510197 */ if (ZF_) goto L_00510197;
  /* 00510088 cmp dword ptr [esi + 0x314], 1 */ { const u32 m_ = (u32)(esi + 0x314u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051008f jle 0x510197 */ if ((ZF_|LT_)) goto L_00510197;
  /* 00510095 mov al, byte ptr [esi + 0x31a] */ { const u32 m_ = (u32)(esi + 0x31au); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051009b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051009d je 0x510128 */ if (ZF_) goto L_00510128;
  /* 005100a3 lea edi, [ebp - 0x14] */ edi = (u32)((u32)(ebp + 0xffffffecu));
  /* 005100a6 mov eax, esi */ { eax = (u32)(esi); }
  /* 005100a8 call 0x50e640 */ esp -= 4; M32(esp) = 0x5100adu; SAVEALL; F_0050e640(c); ABI_CHECK(0x50e640u, 0x5100a8u); RETCHK(0x5100adu, 0x5100a8u); LOADALL;
  /* 005100ad push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005100ae mov esi, edi */ { esi = (u32)(edi); }
  /* 005100b0 call 0x52cf90 */ esp -= 4; M32(esp) = 0x5100b5u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x5100b0u); RETCHK(0x5100b5u, 0x5100b0u); LOADALL;
  /* 005100b5 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005100b8 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005100ba add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005100bd fcomp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005100c0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005100c2 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005100c5 jne 0x510197 */ if (!ZF_) goto L_00510197;
  /* 005100cb fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 005100cd fcomp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005100d0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005100d2 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005100d5 jp 0x510197 */ if (PF_) goto L_00510197;
  /* 005100db fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005100de fcomp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005100e1 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005100e3 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005100e6 jne 0x510197 */ if (!ZF_) goto L_00510197;
  /* 005100ec fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005100ef fcomp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005100f2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005100f4 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005100f7 jp 0x510197 */ if (PF_) goto L_00510197;
  /* 005100fd mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00510100 mov ecx, dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00510103 lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00510106 mov dword ptr [ebp - 0x1c], 0x12 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x12u); }
  /* 0051010d mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00510110 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00510113 mov dword ptr [ebp - 0x10], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x1u); }
  /* 0051011a call 0x508540 */ esp -= 4; M32(esp) = 0x51011fu; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x51011au); RETCHK(0x51011fu, 0x51011au); LOADALL;
  /* 0051011f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00510120 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00510121 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00510122 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00510124 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00510125 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00510128:;
  /* 00510128 mov ecx, dword ptr [esi + 0x258] */ { const u32 m_ = (u32)(esi + 0x258u); ecx = (u32)(M32(m_)); }
  /* 0051012e mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00510130 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00510133 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00510134 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x510137u; SAVEALL; call_ind(c, t_); RETCHK(0x510137u, 0x510134u); LOADALL; }
  /* 00510137 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00510138 lea esi, [ebp - 0x14] */ esi = (u32)((u32)(ebp + 0xffffffecu));
  /* 0051013b call 0x52cf90 */ esp -= 4; M32(esp) = 0x510140u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x51013bu); RETCHK(0x510140u, 0x51013bu); LOADALL;
  /* 00510140 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 00510142 fcomp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00510145 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00510148 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051014a test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051014d jne 0x510197 */ if (!ZF_) goto L_00510197;
  /* 0051014f fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 00510151 fcomp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00510154 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510156 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510159 jp 0x510197 */ if (PF_) goto L_00510197;
  /* 0051015b fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0051015e fcomp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00510161 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510163 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510166 jne 0x510197 */ if (!ZF_) goto L_00510197;
  /* 00510168 fld dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0051016b fcomp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0051016e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510170 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510173 jp 0x510197 */ if (PF_) goto L_00510197;
  /* 00510175 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00510178 mov ecx, dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0051017b lea edx, [ebp - 0x34] */ edx = (u32)((u32)(ebp + 0xffffffccu));
  /* 0051017e mov dword ptr [ebp - 0x34], 0x12 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x12u); }
  /* 00510185 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 00510188 mov dword ptr [ebp - 0x2c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ebx); }
  /* 0051018b mov dword ptr [ebp - 0x28], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x1u); }
  /* 00510192 call 0x508540 */ esp -= 4; M32(esp) = 0x510197u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x510192u); RETCHK(0x510197u, 0x510192u); LOADALL;
L_00510197:;
  /* 00510197 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00510198 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00510199 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051019a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051019c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051019d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005100f8(CPU *c) {
  NATIVE_HOOK(0x5100f8u) REGS; LOADALL;
L_005100f8:;
  /* 005100f8 mov bl, byte ptr [edx - 0x75000000] */ { const u32 m_ = (u32)(edx + 0x8b000000u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005100fe inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005100ff cld */ c->df = 0;
  /* 00510100 mov ecx, dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00510103 lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00510106 mov dword ptr [ebp - 0x1c], 0x12 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x12u); }
  /* 0051010d mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00510110 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00510113 mov dword ptr [ebp - 0x10], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x1u); }
  /* 0051011a call 0x508540 */ esp -= 4; M32(esp) = 0x51011fu; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x51011au); RETCHK(0x51011fu, 0x51011au); LOADALL;
  /* 0051011f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00510120 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00510121 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00510122 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00510124 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00510125 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005101a0(CPU *c) {
  NATIVE_HOOK(0x5101a0u) REGS; LOADALL;
L_005101a0:;
  /* 005101a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005101a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005101a3 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005101a6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005101a7 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005101aa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005101ab push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005101ac mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 005101af push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005101b0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005101b1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005101b3 call 0x507da0 */ esp -= 4; M32(esp) = 0x5101b8u; SAVEALL; F_00507da0(c); ABI_CHECK(0x507da0u, 0x5101b3u); RETCHK(0x5101b8u, 0x5101b3u); LOADALL;
  /* 005101b8 cmp dword ptr [esi + 0x1e0], -1 */ { const u32 m_ = (u32)(esi + 0x1e0u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005101bf je 0x510211 */ if (ZF_) goto L_00510211;
  /* 005101c1 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005101c3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005101c4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005101c6 call dword ptr [eax + 0x134] */ { const u32 m_ = (u32)(eax + 0x134u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5101ccu; SAVEALL; call_ind(c, t_); RETCHK(0x5101ccu, 0x5101c6u); LOADALL; }
  /* 005101cc mov edi, eax */ { edi = (u32)(eax); }
  /* 005101ce cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005101d1 je 0x510211 */ if (ZF_) goto L_00510211;
  /* 005101d3 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005101d6 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005101d9 mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 005101e0 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 005101e3 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 005101e6 call 0x508540 */ esp -= 4; M32(esp) = 0x5101ebu; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x5101e6u); RETCHK(0x5101ebu, 0x5101e6u); LOADALL;
  /* 005101eb cmp edi, dword ptr [0x68a6b0] */ { const u32 m_ = (u32)(0x68a6b0u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005101f1 je 0x510211 */ if (ZF_) goto L_00510211;
  /* 005101f3 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005101f6 lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 005101f9 mov dword ptr [0x68a6b0], edi */ { const u32 m_ = (u32)(0x68a6b0u); M32(m_) = (u32)(edi); }
  /* 005101ff mov dword ptr [ebp - 0x30], 0xd */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xdu); }
  /* 00510206 mov dword ptr [ebp - 0x2c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(esi); }
  /* 00510209 mov dword ptr [ebp - 0x28], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edi); }
  /* 0051020c call 0x508540 */ esp -= 4; M32(esp) = 0x510211u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x51020cu); RETCHK(0x510211u, 0x51020cu); LOADALL;
L_00510211:;
  /* 00510211 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00510212 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00510213 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00510214 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00510216 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00510217 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00510220(CPU *c) {
  NATIVE_HOOK(0x510220u) REGS; LOADALL;
L_00510220:;
  /* 00510220 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00510221 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00510223 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00510226 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00510227 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00510228 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051022a mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0051022c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051022d call dword ptr [eax + 0x128] */ { const u32 m_ = (u32)(eax + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x510233u; SAVEALL; call_ind(c, t_); RETCHK(0x510233u, 0x51022du); LOADALL; }
  /* 00510233 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00510236 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00510238 lea eax, [edi - 0xd] */ eax = (u32)((u32)(edi + 0xfffffff3u));
  /* 0051023b cmp eax, 0x1b */ { u32 a_ = eax, b_ = 0x1bu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051023e ja 0x5103af */ if (!(CF_|ZF_)) goto L_005103af;
  /* 00510244 movzx ecx, byte ptr [eax + 0x5103e8] */ { const u32 m_ = (u32)(eax + 0x5103e8u); ecx = (u32)(M8(m_)); }
  /* 0051024b jmp dword ptr [ecx*4 + 0x5103c8] */ { const u32 m_ = (u32)(ecx * 4u + 0x5103c8u); u32 t_ = M32(m_); switch (t_) { case 0x510252u: goto L_00510252; case 0x51029au: goto L_0051029a; case 0x5102e0u: goto L_005102e0; case 0x5102e9u: goto L_005102e9; case 0x510320u: goto L_00510320; case 0x51032cu: goto L_0051032c; case 0x510364u: goto L_00510364; case 0x5103afu: goto L_005103af; default: SAVEALL; call_ind(c, t_); return; } }
L_00510252:;
  /* 00510252 sub ebx, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00510258 js 0x5103af */ if (SF_) goto L_005103af;
  /* 0051025e mov edx, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); edx = (u32)(M32(m_)); }
  /* 00510264 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00510266 imul eax, eax, 0x6c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510269 mov cl, byte ptr [eax + edx + 0x68] */ { const u32 m_ = (u32)(eax + edx + 0x68u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051026d add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051026f test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510271 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00510273 jne 0x510286 */ if (!ZF_) goto L_00510286;
  /* 00510275 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00510278 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0051027b mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 0051027e mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00510281 jmp 0x510344 */ goto L_00510344;
L_00510286:;
  /* 00510286 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00510288 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00510289 call dword ptr [edx + 0x124] */ { const u32 m_ = (u32)(edx + 0x124u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51028fu; SAVEALL; call_ind(c, t_); RETCHK(0x51028fu, 0x510289u); LOADALL; }
  /* 0051028f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00510290 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00510291 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00510293 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00510294 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00510296 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00510297 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0051029a:;
  /* 0051029a mov edx, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); edx = (u32)(M32(m_)); }
  /* 005102a0 lea ecx, [esi + 0x264] */ ecx = (u32)((u32)(esi + 0x264u));
  /* 005102a6 add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005102a8 call 0x4245c0 */ esp -= 4; M32(esp) = 0x5102adu; SAVEALL; F_004245c0(c); ABI_CHECK(0x4245c0u, 0x5102a8u); RETCHK(0x5102adu, 0x5102a8u); LOADALL;
  /* 005102ad cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005102af jae 0x5103af */ if (!CF_) goto L_005103af;
  /* 005102b5 mov edx, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); edx = (u32)(M32(m_)); }
  /* 005102bb mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005102bd imul eax, eax, 0x6c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005102c0 mov cl, byte ptr [eax + edx + 0x68] */ { const u32 m_ = (u32)(eax + edx + 0x68u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005102c4 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005102c6 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005102c8 je 0x510312 */ if (ZF_) goto L_00510312;
L_005102ca:;
  /* 005102ca mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005102cc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005102cd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005102cf call dword ptr [edx + 0x124] */ { const u32 m_ = (u32)(edx + 0x124u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5102d5u; SAVEALL; call_ind(c, t_); RETCHK(0x5102d5u, 0x5102cfu); LOADALL; }
  /* 005102d5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005102d6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005102d7 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005102d9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005102da mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005102dc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005102dd ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005102e0:;
  /* 005102e0 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005102e1 js 0x5103af */ if (SF_) goto L_005103af;
  /* 005102e7 jmp 0x5102fd */ goto L_005102fd;
L_005102e9:;
  /* 005102e9 lea ecx, [esi + 0x264] */ ecx = (u32)((u32)(esi + 0x264u));
  /* 005102ef inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005102f0 call 0x4245c0 */ esp -= 4; M32(esp) = 0x5102f5u; SAVEALL; F_004245c0(c); ABI_CHECK(0x4245c0u, 0x5102f0u); RETCHK(0x5102f5u, 0x5102f0u); LOADALL;
  /* 005102f5 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005102f7 jae 0x5103af */ if (!CF_) goto L_005103af;
L_005102fd:;
  /* 005102fd mov edx, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); edx = (u32)(M32(m_)); }
  /* 00510303 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00510305 imul eax, eax, 0x6c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510308 mov cl, byte ptr [eax + edx + 0x68] */ { const u32 m_ = (u32)(eax + edx + 0x68u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051030c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051030e test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510310 jne 0x5102ca */ if (!ZF_) goto L_005102ca;
L_00510312:;
  /* 00510312 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00510315 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00510318 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0051031b mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 0051031e jmp 0x510342 */ goto L_00510342;
L_00510320:;
  /* 00510320 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00510322 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00510324 call dword ptr [eax + 0x130] */ { const u32 m_ = (u32)(eax + 0x130u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x51032au; SAVEALL; call_ind(c, t_); RETCHK(0x51032au, 0x510324u); LOADALL; }
  /* 0051032a jmp 0x510336 */ goto L_00510336;
L_0051032c:;
  /* 0051032c mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0051032e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00510330 call dword ptr [eax + 0x12c] */ { const u32 m_ = (u32)(eax + 0x12cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x510336u; SAVEALL; call_ind(c, t_); RETCHK(0x510336u, 0x510330u); LOADALL; }
L_00510336:;
  /* 00510336 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00510339 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0051033c mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 0051033f mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
L_00510342:;
  /* 00510342 mov ecx, esi */ { ecx = (u32)(esi); }
L_00510344:;
  /* 00510344 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00510347 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0051034a mov dword ptr [ebp - 0x18], 3 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x3u); }
  /* 00510351 mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 00510354 call 0x508540 */ esp -= 4; M32(esp) = 0x510359u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x510354u); RETCHK(0x510359u, 0x510354u); LOADALL;
  /* 00510359 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051035a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051035b mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0051035d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051035e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00510360 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00510361 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00510364:;
  /* 00510364 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00510366 mov eax, esi */ { eax = (u32)(esi); }
  /* 00510368 call 0x50e610 */ esp -= 4; M32(esp) = 0x51036du; SAVEALL; F_0050e610(c); ABI_CHECK(0x50e610u, 0x510368u); RETCHK(0x51036du, 0x510368u); LOADALL;
  /* 0051036d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051036f je 0x5103ac */ if (ZF_) goto L_005103ac;
  /* 00510371 mov eax, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); eax = (u32)(M32(m_)); }
  /* 00510377 mov edi, esi */ { edi = (u32)(esi); }
  /* 00510379 call 0x511870 */ esp -= 4; M32(esp) = 0x51037eu; SAVEALL; F_00511870(c); ABI_CHECK(0x511870u, 0x510379u); RETCHK(0x51037eu, 0x510379u); LOADALL;
  /* 0051037e test al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510380 je 0x5103ac */ if (ZF_) goto L_005103ac;
  /* 00510382 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00510385 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00510388 mov dword ptr [ebp - 0x18], 0x12 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x12u); }
  /* 0051038f mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 00510392 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 00510395 mov dword ptr [ebp - 0xc], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x1u); }
  /* 0051039c call 0x508540 */ esp -= 4; M32(esp) = 0x5103a1u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x51039cu); RETCHK(0x5103a1u, 0x51039cu); LOADALL;
  /* 005103a1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005103a2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005103a3 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005103a5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005103a6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005103a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005103a9 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005103ac:;
  /* 005103ac mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
L_005103af:;
  /* 005103af mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005103b2 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005103b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005103b6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005103b7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005103b8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005103ba call 0x508230 */ esp -= 4; M32(esp) = 0x5103bfu; SAVEALL; F_00508230(c); ABI_CHECK(0x508230u, 0x5103bau); RETCHK(0x5103bfu, 0x5103bau); LOADALL;
  /* 005103bf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005103c0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005103c1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005103c2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005103c4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005103c5 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00510410(CPU *c) {
  NATIVE_HOOK(0x510410u) REGS; LOADALL;
L_00510410:;
  /* 00510410 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00510411 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00510413 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00510415 push 0x62019b */ { u32 v_ = 0x62019bu; esp -= 4; M32(esp) = v_; }
  /* 0051041a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00510420 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00510421 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00510428 sub esp, 0x7c */ { u32 a_ = esp, b_ = 0x7cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051042b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051042c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051042d mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051042f mov eax, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); eax = (u32)(M32(m_)); }
  /* 00510435 imul eax, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0051043c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051043d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0051043f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00510441 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 00510444 jle 0x510472 */ if ((ZF_|LT_)) goto L_00510472;
  /* 00510446 jmp 0x510450 */ goto L_00510450;
L_00510450:;
  /* 00510450 mov ecx, dword ptr [esi + 0x25c] */ { const u32 m_ = (u32)(esi + 0x25cu); ecx = (u32)(M32(m_)); }
  /* 00510456 mov ecx, dword ptr [ecx + edi*4] */ { const u32 m_ = (u32)(ecx + edi * 4u); ecx = (u32)(M32(m_)); }
  /* 00510459 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0051045b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051045d call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x510460u; SAVEALL; call_ind(c, t_); RETCHK(0x510460u, 0x51045du); LOADALL; }
  /* 00510460 mov eax, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); eax = (u32)(M32(m_)); }
  /* 00510466 imul eax, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0051046d inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051046e cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510470 jl 0x510450 */ if (LT_) goto L_00510450;
L_00510472:;
  /* 00510472 mov ecx, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); ecx = (u32)(M32(m_)); }
  /* 00510478 mov dword ptr [ebp - 0x64], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(ecx); }
  /* 0051047b mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 0051047e lea edx, [ebp - 0x6c] */ edx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00510481 mov dword ptr [ebp - 0x6c], 7 */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(0x7u); }
  /* 00510488 mov dword ptr [ebp - 0x68], esi */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(esi); }
  /* 0051048b mov dword ptr [ebp - 0x60], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(0x0u); }
  /* 00510492 call 0x508540 */ esp -= 4; M32(esp) = 0x510497u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x510492u); RETCHK(0x510497u, 0x510492u); LOADALL;
  /* 00510497 mov ebx, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); ebx = (u32)(M32(m_)); }
  /* 0051049d lea edi, [ebp - 0x44] */ edi = (u32)((u32)(ebp + 0xffffffbcu));
  /* 005104a0 mov eax, esi */ { eax = (u32)(esi); }
  /* 005104a2 call 0x50e640 */ esp -= 4; M32(esp) = 0x5104a7u; SAVEALL; F_0050e640(c); ABI_CHECK(0x50e640u, 0x5104a2u); RETCHK(0x5104a7u, 0x5104a2u); LOADALL;
  /* 005104a7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005104a9 jne 0x5104c9 */ if (!ZF_) goto L_005104c9;
  /* 005104ab mov ecx, dword ptr [esi + 0x258] */ { const u32 m_ = (u32)(esi + 0x258u); ecx = (u32)(M32(m_)); }
  /* 005104b1 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005104b3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005104b5 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5104b8u; SAVEALL; call_ind(c, t_); RETCHK(0x5104b8u, 0x5104b5u); LOADALL; }
  /* 005104b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005104b9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005104ba pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005104bb mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005104be mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005104c5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005104c7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005104c8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005104c9:;
  /* 005104c9 mov al, byte ptr [esi + 0x318] */ { const u32 m_ = (u32)(esi + 0x318u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005104cf test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005104d1 jne 0x5107e1 */ if (!ZF_) goto L_005107e1;
  /* 005104d7 fld dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)MF32(m_)); }
  /* 005104da mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005104dc fadd dword ptr [0x656db4] */ { const u32 m_ = (u32)(0x656db4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005104e2 mov edi, esi */ { edi = (u32)(esi); }
  /* 005104e4 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005104e7 fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 005104ea fsub dword ptr [0x6570cc] */ { const u32 m_ = (u32)(0x6570ccu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005104f0 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005104f3 call 0x5118c0 */ esp -= 4; M32(esp) = 0x5104f8u; SAVEALL; F_005118c0(c); ABI_CHECK(0x5118c0u, 0x5104f3u); RETCHK(0x5104f8u, 0x5104f3u); LOADALL;
  /* 005104f8 mov ecx, dword ptr [esi + 0x260] */ { const u32 m_ = (u32)(esi + 0x260u); ecx = (u32)(M32(m_)); }
  /* 005104fe lea edx, [ebp - 0x54] */ edx = (u32)((u32)(ebp + 0xffffffacu));
  /* 00510501 mov edi, eax */ { edi = (u32)(eax); }
  /* 00510503 mov dword ptr [ebp - 0x54], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0x0u); }
  /* 0051050a mov dword ptr [ebp - 0x50], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x0u); }
  /* 00510511 mov dword ptr [ebp - 0x4c], 0x437a0000 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(0x437a0000u); }
  /* 00510518 mov dword ptr [ebp - 0x48], 0x42b40000 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x42b40000u); }
  /* 0051051f mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00510521 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00510522 call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x510525u; SAVEALL; call_ind(c, t_); RETCHK(0x510525u, 0x510522u); LOADALL; }
  /* 00510525 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00510527 mov eax, edi */ { eax = (u32)(edi); }
  /* 00510529 mov dword ptr [ebp - 0x70], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(0xfu); }
  /* 00510530 mov dword ptr [ebp - 0x74], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(ebx); }
  /* 00510533 mov byte ptr [ebp - 0x84], bl */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00510539 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0051053c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00510540:;
  /* 00510540 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00510542 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00510543 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510545 jne 0x510540 */ if (!ZF_) goto L_00510540;
  /* 00510547 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00510549 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051054a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051054b lea ecx, [ebp - 0x88] */ ecx = (u32)((u32)(ebp + 0xffffff78u));
  /* 00510551 call 0x404420 */ esp -= 4; M32(esp) = 0x510556u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x510551u); RETCHK(0x510556u, 0x510551u); LOADALL;
  /* 00510556 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00510559 mov esi, dword ptr [esi + 0x260] */ { const u32 m_ = (u32)(esi + 0x260u); esi = (u32)(M32(m_)); }
  /* 0051055f lea eax, [ebp - 0x88] */ eax = (u32)((u32)(ebp + 0xffffff78u));
  /* 00510565 call 0x5224b0 */ esp -= 4; M32(esp) = 0x51056au; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x510565u); RETCHK(0x51056au, 0x510565u); LOADALL;
  /* 0051056a mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00510571 cmp dword ptr [ebp - 0x70], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff90u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510575 jb 0x510586 */ if (CF_) goto L_00510586;
  /* 00510577 mov eax, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); eax = (u32)(M32(m_)); }
  /* 0051057d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051057e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x510583u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51057eu); RETCHK(0x510583u, 0x51057eu); LOADALL;
  /* 00510583 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00510586:;
  /* 00510586 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 00510589 mov eax, dword ptr [esi + 0x260] */ { const u32 m_ = (u32)(esi + 0x260u); eax = (u32)(M32(m_)); }
  /* 0051058f mov ecx, dword ptr [eax + 0x28c] */ { const u32 m_ = (u32)(eax + 0x28cu); ecx = (u32)(M32(m_)); }
  /* 00510595 mov edx, dword ptr [eax + 0x290] */ { const u32 m_ = (u32)(eax + 0x290u); edx = (u32)(M32(m_)); }
  /* 0051059b mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0051059d mov dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ecx); }
  /* 005105a0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005105a2 mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 005105a5 call dword ptr [eax + 0x128] */ { const u32 m_ = (u32)(eax + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5105abu; SAVEALL; call_ind(c, t_); RETCHK(0x5105abu, 0x5105a5u); LOADALL; }
  /* 005105ab mov edi, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); edi = (u32)(M32(m_)); }
  /* 005105b1 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005105b3 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005105b6 jl 0x5105f7 */ if (LT_) goto L_005105f7;
  /* 005105b8 mov eax, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); eax = (u32)(M32(m_)); }
  /* 005105be cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005105c0 jne 0x5105c6 */ if (!ZF_) goto L_005105c6;
  /* 005105c2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005105c4 jmp 0x5105df */ goto L_005105df;
L_005105c6:;
  /* 005105c6 mov ecx, dword ptr [esi + 0x26c] */ { const u32 m_ = (u32)(esi + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 005105cc sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005105ce mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 005105d3 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005105d5 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005105d8 mov eax, edx */ { eax = (u32)(edx); }
  /* 005105da shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005105dd add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_005105df:;
  /* 005105df cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005105e1 jge 0x5105f7 */ if (!LT_) goto L_005105f7;
  /* 005105e3 mov ecx, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 005105e9 imul ecx, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005105f0 mov eax, edi */ { eax = (u32)(edi); }
  /* 005105f2 cdq */ edx = (u32)((s32)eax >> 31);
  /* 005105f3 idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x5105f3u); eax = q_; edx = r_; }
  /* 005105f5 jmp 0x5105f9 */ goto L_005105f9;
L_005105f7:;
  /* 005105f7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005105f9:;
  /* 005105f9 mov ebx, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); ebx = (u32)(M32(m_)); }
  /* 005105ff mov edi, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); edi = (u32)(M32(m_)); }
  /* 00510605 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00510607 imul ecx, edi */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0051060a mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0051060c imul edx, eax */ { s64 p_ = (s64)(s32)edx * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0051060f mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00510612 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00510614 cmp ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510617 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0051061a jle 0x51067a */ if ((ZF_|LT_)) goto L_0051067a;
  /* 0051061c lea edx, [ebx - 1] */ edx = (u32)((u32)(ebx + 0xffffffffu));
  /* 0051061f imul edx, edi */ { s64 p_ = (s64)(s32)edx * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510622 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510624 jl 0x51067a */ if (LT_) goto L_0051067a;
  /* 00510626 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00510627 idiv edi */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, edi, &q_, &r_, 0x510627u); eax = q_; edx = r_; }
  /* 00510629 lea eax, [ebx - 1] */ eax = (u32)((u32)(ebx + 0xffffffffu));
  /* 0051062c cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051062e je 0x510677 */ if (ZF_) goto L_00510677;
  /* 00510630 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00510633 lea eax, [ecx - 1] */ eax = (u32)((u32)(ecx + 0xffffffffu));
  /* 00510636 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510638 jge 0x510677 */ if (!LT_) goto L_00510677;
  /* 0051063a fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 0051063d mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 00510640 fsub dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00510646 mov dword ptr [ebp - 0x34], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ecx); }
  /* 00510649 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051064c fild dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)(s32)M32(m_)); }
  /* 0051064f fld dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)MF32(m_)); }
  /* 00510652 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 00510654 fadd dword ptr [0x656ed4] */ { const u32 m_ = (u32)(0x656ed4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051065a fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
L_0051065d:;
  /* 0051065d fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 00510660 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510663 fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 00510666 fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00510669 fsub dword ptr [0x656ed4] */ { const u32 m_ = (u32)(0x656ed4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051066f fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510672 jmp 0x51071b */ goto L_0051071b;
L_00510677:;
  /* 00510677 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
L_0051067a:;
  /* 0051067a cdq */ edx = (u32)((s32)eax >> 31);
  /* 0051067b idiv edi */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, edi, &q_, &r_, 0x51067bu); eax = q_; edx = r_; }
  /* 0051067d dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0051067e cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510680 jne 0x5106b1 */ if (!ZF_) goto L_005106b1;
  /* 00510682 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00510685 lea edx, [ecx - 1] */ edx = (u32)((u32)(ecx + 0xffffffffu));
  /* 00510688 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051068a jge 0x5106b1 */ if (!LT_) goto L_005106b1;
  /* 0051068c fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 0051068f mov eax, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); eax = (u32)(M32(m_)); }
  /* 00510692 fadd dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510698 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 0051069b fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051069e fild dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)(s32)M32(m_)); }
  /* 005106a1 fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 005106a4 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 005106a6 fsub dword ptr [0x656ed4] */ { const u32 m_ = (u32)(0x656ed4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005106ac fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005106af jmp 0x510709 */ goto L_00510709;
L_005106b1:;
  /* 005106b1 cmp ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005106b4 jle 0x5106e6 */ if ((ZF_|LT_)) goto L_005106e6;
  /* 005106b6 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 005106b9 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005106ba cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005106bc jne 0x5106e6 */ if (!ZF_) goto L_005106e6;
  /* 005106be fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 005106c1 mov ecx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ecx = (u32)(M32(m_)); }
  /* 005106c4 fsub dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005106ca mov dword ptr [ebp - 0x2c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ecx); }
  /* 005106cd fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005106d0 fild dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)(s32)M32(m_)); }
  /* 005106d3 fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 005106d6 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 005106d8 fsub dword ptr [0x656ed4] */ { const u32 m_ = (u32)(0x656ed4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005106de fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005106e1 jmp 0x51065d */ goto L_0051065d;
L_005106e6:;
  /* 005106e6 fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 005106e9 mov edx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); edx = (u32)(M32(m_)); }
  /* 005106ec fadd dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005106f2 mov dword ptr [ebp - 0x34], edx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edx); }
  /* 005106f5 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005106f8 fild dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)(s32)M32(m_)); }
  /* 005106fb fld dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)MF32(m_)); }
  /* 005106fe fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 00510700 fadd dword ptr [0x656ed4] */ { const u32 m_ = (u32)(0x656ed4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510706 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
L_00510709:;
  /* 00510709 fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 0051070c fst dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); }
  /* 0051070f fadd dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510712 fadd dword ptr [0x656ed4] */ { const u32 m_ = (u32)(0x656ed4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510718 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
L_0051071b:;
  /* 0051071b mov eax, dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); eax = (u32)(M32(m_)); }
  /* 00510721 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00510723 jne 0x510792 */ if (!ZF_) goto L_00510792;
  /* 00510725 fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 00510728 fsub dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051072b fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00510731 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510733 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510736 je 0x510740 */ if (ZF_) goto L_00510740;
  /* 00510738 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051073a fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 0051073d fsub dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00510740:;
  /* 00510740 fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 00510743 fsub dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00510746 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051074c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051074e test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510751 je 0x51075b */ if (ZF_) goto L_0051075b;
  /* 00510753 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00510755 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 00510758 fsub dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051075b:;
  /* 0051075b mov eax, dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 00510761 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00510763 mov ecx, dword ptr [esi + 0x1d4] */ { const u32 m_ = (u32)(esi + 0x1d4u); ecx = (u32)(M32(m_)); }
  /* 00510769 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0051076c fadd dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051076f mov dword ptr [ebp - 0x30], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ecx); }
  /* 00510772 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510775 fadd dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510778 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051077b fld dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); FPUSH((double)MF32(m_)); }
  /* 00510781 fadd dword ptr [0x656ea4] */ { const u32 m_ = (u32)(0x656ea4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510787 fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051078a fld dword ptr [esi + 0x1d4] */ { const u32 m_ = (u32)(esi + 0x1d4u); FPUSH((double)MF32(m_)); }
  /* 00510790 jmp 0x5107a1 */ goto L_005107a1;
L_00510792:;
  /* 00510792 fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 00510795 fadd dword ptr [0x656ea4] */ { const u32 m_ = (u32)(0x656ea4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051079b fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051079e fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
L_005107a1:;
  /* 005107a1 fadd dword ptr [0x656ea4] */ { const u32 m_ = (u32)(0x656ea4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005107a7 mov ecx, dword ptr [esi + 0x254] */ { const u32 m_ = (u32)(esi + 0x254u); ecx = (u32)(M32(m_)); }
  /* 005107ad lea eax, [ebp - 0x34] */ eax = (u32)((u32)(ebp + 0xffffffccu));
  /* 005107b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005107b1 fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005107b4 fadd dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005107b7 fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005107ba fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 005107bd fadd dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005107c0 fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005107c3 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005107c5 call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5107c8u; SAVEALL; call_ind(c, t_); RETCHK(0x5107c8u, 0x5107c5u); LOADALL; }
  /* 005107c8 mov esi, dword ptr [esi + 0x260] */ { const u32 m_ = (u32)(esi + 0x260u); esi = (u32)(M32(m_)); }
  /* 005107ce mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005107d0 lea eax, [ebp - 0x54] */ eax = (u32)((u32)(ebp + 0xffffffacu));
  /* 005107d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005107d4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005107d6 call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5107d9u; SAVEALL; call_ind(c, t_); RETCHK(0x5107d9u, 0x5107d6u); LOADALL; }
  /* 005107d9 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 005107dc jmp 0x5108af */ goto L_005108af;
L_005107e1:;
  /* 005107e1 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005107e3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005107e5 call dword ptr [edx + 0x128] */ { const u32 m_ = (u32)(edx + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5107ebu; SAVEALL; call_ind(c, t_); RETCHK(0x5107ebu, 0x5107e5u); LOADALL; }
  /* 005107eb mov edi, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); edi = (u32)(M32(m_)); }
  /* 005107f1 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005107f3 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005107f5 jl 0x510832 */ if (LT_) goto L_00510832;
  /* 005107f7 mov eax, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); eax = (u32)(M32(m_)); }
  /* 005107fd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005107ff je 0x51081a */ if (ZF_) goto L_0051081a;
  /* 00510801 mov ecx, dword ptr [esi + 0x26c] */ { const u32 m_ = (u32)(esi + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 00510807 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00510809 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0051080e imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510810 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00510813 mov eax, edx */ { eax = (u32)(edx); }
  /* 00510815 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00510818 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051081a:;
  /* 0051081a cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051081c jge 0x510832 */ if (!LT_) goto L_00510832;
  /* 0051081e mov ecx, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 00510824 imul ecx, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0051082b mov eax, edi */ { eax = (u32)(edi); }
  /* 0051082d cdq */ edx = (u32)((s32)eax >> 31);
  /* 0051082e idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x51082eu); eax = q_; edx = r_; }
  /* 00510830 jmp 0x510834 */ goto L_00510834;
L_00510832:;
  /* 00510832 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00510834:;
  /* 00510834 fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 00510837 mov edx, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); edx = (u32)(M32(m_)); }
  /* 0051083d fsub dword ptr [0x6570e4] */ { const u32 m_ = (u32)(0x6570e4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00510843 imul edx, eax */ { s64 p_ = (s64)(s32)edx * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510846 fsub dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051084c fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051084f fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 00510852 fsub dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00510855 imul edx, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); s64 p_ = (s64)(s32)edx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0051085c fst dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); }
  /* 0051085f fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00510865 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510867 sub ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00510869 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051086c mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0051086f jne 0x510876 */ if (!ZF_) goto L_00510876;
  /* 00510871 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00510874 jmp 0x51087c */ goto L_0051087c;
L_00510876:;
  /* 00510876 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 00510879 fsub dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051087c:;
  /* 0051087c fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0051087f fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00510885 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510887 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051088a jne 0x510891 */ if (!ZF_) goto L_00510891;
  /* 0051088c fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0051088f jmp 0x510897 */ goto L_00510897;
L_00510891:;
  /* 00510891 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 00510894 fsub dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00510897:;
  /* 00510897 fsub dword ptr [0x6570e0] */ { const u32 m_ = (u32)(0x6570e0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051089d fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005108a3 fild dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)(s32)M32(m_)); }
  /* 005108a6 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 005108a8 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 005108aa fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005108ad fstp st(0) */ ST(0) = ST(0); FPOP();
L_005108af:;
  /* 005108af mov ecx, dword ptr [esi + 0x258] */ { const u32 m_ = (u32)(esi + 0x258u); ecx = (u32)(M32(m_)); }
  /* 005108b5 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005108b7 lea edx, [ebp - 0x24] */ edx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 005108ba push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005108bb call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5108beu; SAVEALL; call_ind(c, t_); RETCHK(0x5108beu, 0x5108bbu); LOADALL; }
  /* 005108be mov eax, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); eax = (u32)(M32(m_)); }
  /* 005108c4 mov edi, esi */ { edi = (u32)(esi); }
  /* 005108c6 call 0x511870 */ esp -= 4; M32(esp) = 0x5108cbu; SAVEALL; F_00511870(c); ABI_CHECK(0x511870u, 0x5108c6u); RETCHK(0x5108cbu, 0x5108c6u); LOADALL;
  /* 005108cb test al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005108cd mov ecx, dword ptr [esi + 0x258] */ { const u32 m_ = (u32)(esi + 0x258u); ecx = (u32)(M32(m_)); }
  /* 005108d3 je 0x5108de */ if (ZF_) goto L_005108de;
  /* 005108d5 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005108d7 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005108d9 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5108dcu; SAVEALL; call_ind(c, t_); RETCHK(0x5108dcu, 0x5108d9u); LOADALL; }
  /* 005108dc jmp 0x5108e5 */ goto L_005108e5;
L_005108de:;
  /* 005108de mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005108e0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005108e2 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5108e5u; SAVEALL; call_ind(c, t_); RETCHK(0x5108e5u, 0x5108e2u); LOADALL; }
L_005108e5:;
  /* 005108e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005108e6 call 0x508500 */ esp -= 4; M32(esp) = 0x5108ebu; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x5108e6u); RETCHK(0x5108ebu, 0x5108e6u); LOADALL;
  /* 005108eb test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005108ed je 0x510923 */ if (ZF_) goto L_00510923;
  /* 005108ef fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 005108f2 lea edi, [ebp - 0x1c] */ edi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 005108f5 fadd dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005108f8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005108fa fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00510900 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510903 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 00510906 fadd dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510909 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0051090f fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510912 call 0x52cf40 */ esp -= 4; M32(esp) = 0x510917u; SAVEALL; F_0052cf40(c); ABI_CHECK(0x52cf40u, 0x510912u); RETCHK(0x510917u, 0x510912u); LOADALL;
  /* 00510917 call 0x518bb0 */ esp -= 4; M32(esp) = 0x51091cu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x510917u); RETCHK(0x51091cu, 0x510917u); LOADALL;
  /* 0051091c mov eax, edi */ { eax = (u32)(edi); }
  /* 0051091e call 0x517970 */ esp -= 4; M32(esp) = 0x510923u; SAVEALL; F_00517970(c); ABI_CHECK(0x517970u, 0x51091eu); RETCHK(0x510923u, 0x51091eu); LOADALL;
L_00510923:;
  /* 00510923 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00510926 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00510927 mov dword ptr [esi + 0x314], 1 */ { const u32 m_ = (u32)(esi + 0x314u); M32(m_) = (u32)(0x1u); }
  /* 00510931 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00510932 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00510933 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0051093a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051093c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051093d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00510940(CPU *c) {
  NATIVE_HOOK(0x510940u) REGS; LOADALL;
L_00510940:;
  /* 00510940 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00510941 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00510943 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00510944 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00510945 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00510946 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00510948 mov eax, dword ptr [edi + 0x268] */ { const u32 m_ = (u32)(edi + 0x268u); eax = (u32)(M32(m_)); }
  /* 0051094e xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00510950 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510952 je 0x5109f0 */ if (ZF_) goto L_005109f0;
  /* 00510958 mov ecx, dword ptr [edi + 0x26c] */ { const u32 m_ = (u32)(edi + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 0051095e sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00510960 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 00510965 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510967 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0051096a mov eax, edx */ { eax = (u32)(edx); }
  /* 0051096c shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0051096f add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00510971 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00510974 je 0x5109f0 */ if (ZF_) goto L_005109f0;
  /* 00510976 mov eax, dword ptr [edi + 0x26c] */ { const u32 m_ = (u32)(edi + 0x26cu); eax = (u32)(M32(m_)); }
  /* 0051097c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051097d mov esi, dword ptr [edi + 0x268] */ { const u32 m_ = (u32)(edi + 0x268u); esi = (u32)(M32(m_)); }
  /* 00510983 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510985 je 0x5109a7 */ if (ZF_) goto L_005109a7;
L_00510987:;
  /* 00510987 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0051098a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051098c je 0x51099a */ if (ZF_) goto L_0051099a;
  /* 0051098e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051098f call 0x5ab020 */ esp -= 4; M32(esp) = 0x510994u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x51098fu); RETCHK(0x510994u, 0x51098fu); LOADALL;
  /* 00510994 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00510997 mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
L_0051099a:;
  /* 0051099a mov eax, dword ptr [edi + 0x26c] */ { const u32 m_ = (u32)(edi + 0x26cu); eax = (u32)(M32(m_)); }
  /* 005109a0 add esi, 0x6c */ { u32 a_ = esi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005109a3 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005109a5 jne 0x510987 */ if (!ZF_) goto L_00510987;
L_005109a7:;
  /* 005109a7 mov esi, dword ptr [edi + 0x268] */ { const u32 m_ = (u32)(edi + 0x268u); esi = (u32)(M32(m_)); }
  /* 005109ad cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005109af je 0x5109dd */ if (ZF_) goto L_005109dd;
  /* 005109b1 mov ebx, dword ptr [edi + 0x26c] */ { const u32 m_ = (u32)(edi + 0x26cu); ebx = (u32)(M32(m_)); }
  /* 005109b7 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005109b9 je 0x5109cc */ if (ZF_) goto L_005109cc;
  /* 005109bb jmp 0x5109c0 */ goto L_005109c0;
L_005109c0:;
  /* 005109c0 call 0x50f600 */ esp -= 4; M32(esp) = 0x5109c5u; SAVEALL; F_0050f600(c); ABI_CHECK(0x50f600u, 0x5109c0u); RETCHK(0x5109c5u, 0x5109c0u); LOADALL;
  /* 005109c5 add esi, 0x6c */ { u32 a_ = esi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005109c8 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005109ca jne 0x5109c0 */ if (!ZF_) goto L_005109c0;
L_005109cc:;
  /* 005109cc mov ecx, dword ptr [edi + 0x268] */ { const u32 m_ = (u32)(edi + 0x268u); ecx = (u32)(M32(m_)); }
  /* 005109d2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005109d3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5109d8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5109d3u); RETCHK(0x5109d8u, 0x5109d3u); LOADALL;
  /* 005109d8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005109db xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_005109dd:;
  /* 005109dd mov dword ptr [edi + 0x268], ebx */ { const u32 m_ = (u32)(edi + 0x268u); M32(m_) = (u32)(ebx); }
  /* 005109e3 mov dword ptr [edi + 0x26c], ebx */ { const u32 m_ = (u32)(edi + 0x26cu); M32(m_) = (u32)(ebx); }
  /* 005109e9 mov dword ptr [edi + 0x270], ebx */ { const u32 m_ = (u32)(edi + 0x270u); M32(m_) = (u32)(ebx); }
  /* 005109ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_005109f0:;
  /* 005109f0 mov eax, dword ptr [edi + 0x25c] */ { const u32 m_ = (u32)(edi + 0x25cu); eax = (u32)(M32(m_)); }
  /* 005109f6 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005109f8 mov dword ptr [edi + 0x1e0], 0xffffffff */ { const u32 m_ = (u32)(edi + 0x1e0u); M32(m_) = (u32)(0xffffffffu); }
  /* 00510a02 je 0x510a13 */ if (ZF_) goto L_00510a13;
  /* 00510a04 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00510a05 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x510a0au; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x510a05u); RETCHK(0x510a0au, 0x510a05u); LOADALL;
  /* 00510a0a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00510a0d mov dword ptr [edi + 0x25c], ebx */ { const u32 m_ = (u32)(edi + 0x25cu); M32(m_) = (u32)(ebx); }
L_00510a13:;
  /* 00510a13 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00510a15 call 0x50c650 */ esp -= 4; M32(esp) = 0x510a1au; SAVEALL; F_0050c650(c); ABI_CHECK(0x50c650u, 0x510a15u); RETCHK(0x510a1au, 0x510a15u); LOADALL;
  /* 00510a1a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00510a1b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00510a1c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00510a1e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00510a1f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00510a20(CPU *c) {
  NATIVE_HOOK(0x510a20u) REGS; LOADALL;
L_00510a20:;
  /* 00510a20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00510a21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00510a23 sub esp, 0x90 */ { u32 a_ = esp, b_ = 0x90u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00510a29 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00510a2a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00510a2b mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00510a2d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00510a2e mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 00510a31 call 0x50c550 */ esp -= 4; M32(esp) = 0x510a36u; SAVEALL; F_0050c550(c); ABI_CHECK(0x50c550u, 0x510a31u); RETCHK(0x510a36u, 0x510a31u); LOADALL;
  /* 00510a36 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00510a38 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00510a3a lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00510a3d call 0x52ce60 */ esp -= 4; M32(esp) = 0x510a42u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x510a3du); RETCHK(0x510a42u, 0x510a3du); LOADALL;
  /* 00510a42 lea edi, [ebp - 0x50] */ edi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00510a45 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00510a47 call 0x52cf40 */ esp -= 4; M32(esp) = 0x510a4cu; SAVEALL; F_0052cf40(c); ABI_CHECK(0x52cf40u, 0x510a47u); RETCHK(0x510a4cu, 0x510a47u); LOADALL;
  /* 00510a4c mov edi, dword ptr [ebx + 0x1d8] */ { const u32 m_ = (u32)(ebx + 0x1d8u); edi = (u32)(M32(m_)); }
  /* 00510a52 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00510a54 call 0x421670 */ esp -= 4; M32(esp) = 0x510a59u; SAVEALL; F_00421670(c); ABI_CHECK(0x421670u, 0x510a54u); RETCHK(0x510a59u, 0x510a54u); LOADALL;
  /* 00510a59 fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 00510a5c imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510a5f fadd dword ptr [ebx + 0x1f8] */ { const u32 m_ = (u32)(ebx + 0x1f8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510a65 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510a68 imul eax, dword ptr [ebx + 0x1dc] */ { const u32 m_ = (u32)(ebx + 0x1dcu); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510a6f mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 00510a72 mov al, byte ptr [ebx + 0x318] */ { const u32 m_ = (u32)(ebx + 0x318u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00510a78 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510a7a mov dword ptr [ebp - 0x40], 0x7fffffff */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x7fffffffu); }
  /* 00510a81 mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 00510a88 jne 0x51140b */ if (!ZF_) goto L_0051140b;
  /* 00510a8e test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00510a90 jle 0x511396 */ if ((ZF_|LT_)) goto L_00511396;
  /* 00510a96 jmp 0x510aa0 */ goto L_00510aa0;
L_00510aa0:;
  /* 00510aa0 mov eax, dword ptr [ebx + 0x268] */ { const u32 m_ = (u32)(ebx + 0x268u); eax = (u32)(M32(m_)); }
  /* 00510aa6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00510aa8 je 0x511396 */ if (ZF_) goto L_00511396;
  /* 00510aae mov ecx, dword ptr [ebx + 0x26c] */ { const u32 m_ = (u32)(ebx + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 00510ab4 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00510ab6 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 00510abb imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510abd mov ecx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ecx = (u32)(M32(m_)); }
  /* 00510ac0 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00510ac3 mov eax, edx */ { eax = (u32)(edx); }
  /* 00510ac5 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00510ac8 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00510aca cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510acc jae 0x511396 */ if (!CF_) goto L_00511396;
  /* 00510ad2 fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 00510ad5 mov eax, dword ptr [ebx + 0x1dc] */ { const u32 m_ = (u32)(ebx + 0x1dcu); eax = (u32)(M32(m_)); }
  /* 00510adb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00510add fadd dword ptr [ebx + 0x1f4] */ { const u32 m_ = (u32)(ebx + 0x1f4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510ae3 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 00510aea fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510aed jle 0x51136f */ if ((ZF_|LT_)) goto L_0051136f;
  /* 00510af3 jmp 0x510b00 */ goto L_00510b00;
L_00510b00:;
  /* 00510b00 mov eax, dword ptr [ebx + 0x268] */ { const u32 m_ = (u32)(ebx + 0x268u); eax = (u32)(M32(m_)); }
  /* 00510b06 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00510b08 je 0x51136f */ if (ZF_) goto L_0051136f;
  /* 00510b0e mov ecx, dword ptr [ebx + 0x26c] */ { const u32 m_ = (u32)(ebx + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 00510b14 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00510b16 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 00510b1b imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510b1d mov ecx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ecx = (u32)(M32(m_)); }
  /* 00510b20 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00510b23 mov eax, edx */ { eax = (u32)(edx); }
  /* 00510b25 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00510b28 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00510b2a cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510b2c jae 0x51136f */ if (!CF_) goto L_0051136f;
  /* 00510b32 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00510b35 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00510b37 fadd dword ptr [ebx + 0x1ec] */ { const u32 m_ = (u32)(ebx + 0x1ecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510b3d mov ecx, dword ptr [ebx + 0x268] */ { const u32 m_ = (u32)(ebx + 0x268u); ecx = (u32)(M32(m_)); }
  /* 00510b43 imul edi, edi, 0x6c */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510b46 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510b49 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00510b4c fadd dword ptr [ebx + 0x1f0] */ { const u32 m_ = (u32)(ebx + 0x1f0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510b52 mov al, byte ptr [edi + ecx + 0x2c] */ { const u32 m_ = (u32)(edi + ecx + 0x2cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00510b56 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00510b58 test al, 0x40 */ { u32 a_ = (eax & 0xffu), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510b5a mov dword ptr [ebp - 0x20], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edi); }
  /* 00510b5d je 0x510b65 */ if (ZF_) goto L_00510b65;
  /* 00510b5f fsub dword ptr [0x6570dc] */ { const u32 m_ = (u32)(0x6570dcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00510b65:;
  /* 00510b65 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00510b68 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510b6b lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
  /* 00510b6e lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 00510b74 call 0x52cee0 */ esp -= 4; M32(esp) = 0x510b79u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x510b74u); RETCHK(0x510b79u, 0x510b74u); LOADALL;
  /* 00510b79 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 00510b7c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00510b7e je 0x510d04 */ if (ZF_) goto L_00510d04;
  /* 00510b84 mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00510b87 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00510b89 jne 0x510ba5 */ if (!ZF_) goto L_00510ba5;
  /* 00510b8b cmp dword ptr [edi + 0x18], 0x10 */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510b8f jb 0x510b96 */ if (CF_) goto L_00510b96;
  /* 00510b91 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00510b94 jmp 0x510b99 */ goto L_00510b99;
L_00510b96:;
  /* 00510b96 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
L_00510b99:;
  /* 00510b99 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00510b9a call 0x5ab540 */ esp -= 4; M32(esp) = 0x510b9fu; SAVEALL; F_005ab540(c); ABI_CHECK(0x5ab540u, 0x510b9au); RETCHK(0x510b9fu, 0x510b9au); LOADALL;
  /* 00510b9f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00510ba2 mov dword ptr [edi + 0x1c], eax */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(eax); }
L_00510ba5:;
  /* 00510ba5 mov ecx, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 00510ba8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00510baa je 0x510d04 */ if (ZF_) goto L_00510d04;
  /* 00510bb0 fild dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 00510bb3 fild dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 00510bb6 fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 00510bb9 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00510bbc fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00510bbf fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00510bc5 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510bc7 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510bca jne 0x510bd0 */ if (!ZF_) goto L_00510bd0;
  /* 00510bcc fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00510bce jmp 0x510bd6 */ goto L_00510bd6;
L_00510bd0:;
  /* 00510bd0 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00510bd3 fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00510bd6:;
  /* 00510bd6 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 00510bd8 fsub dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00510bde fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00510be0 fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 00510be2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510be4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510be7 jne 0x510c45 */ if (!ZF_) goto L_00510c45;
  /* 00510be9 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00510bec fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00510bef fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00510bf5 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510bf7 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510bfa je 0x510c04 */ if (ZF_) goto L_00510c04;
  /* 00510bfc fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00510bfe fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00510c01 fsub dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00510c04:;
  /* 00510c04 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 00510c06 fsub dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00510c0c fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 00510c0e fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 00510c10 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510c12 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510c15 jne 0x510c45 */ if (!ZF_) goto L_00510c45;
  /* 00510c17 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00510c19 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00510c1b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00510c1d fild dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 00510c20 fld dword ptr [ebx + 0x1ec] */ { const u32 m_ = (u32)(ebx + 0x1ecu); FPUSH((double)MF32(m_)); }
  /* 00510c26 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 00510c28 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00510c2e fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510c31 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510c34 fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510c37 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510c3a fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00510c3d fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510c40 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510c43 jmp 0x510cb6 */ goto L_00510cb6;
L_00510c45:;
  /* 00510c45 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00510c4b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510c4d test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510c50 je 0x510c5a */ if (ZF_) goto L_00510c5a;
  /* 00510c52 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00510c54 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00510c57 fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00510c5a:;
  /* 00510c5a fdiv st(2) */ ST(0) = FR(ST(0) / ST(2));
  /* 00510c5c fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510c5f fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00510c62 fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00510c65 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00510c6b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510c6d test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510c70 je 0x510c7a */ if (ZF_) goto L_00510c7a;
  /* 00510c72 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00510c74 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00510c77 fsub dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00510c7a:;
  /* 00510c7a fdiv st(1) */ ST(0) = FR(ST(0) / ST(1));
  /* 00510c7c fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00510c7f fcomp st(1) */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP();
  /* 00510c81 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00510c83 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510c86 jp 0x510c8d */ if (PF_) goto L_00510c8d;
  /* 00510c88 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00510c8a fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
L_00510c8d:;
  /* 00510c8d mov eax, dword ptr [ebx + 0x2fc] */ { const u32 m_ = (u32)(ebx + 0x2fcu); eax = (u32)(M32(m_)); }
  /* 00510c93 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00510c95 fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 00510c97 mov dword ptr [ebp - 0x40], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(eax); }
  /* 00510c9a mov dword ptr [ebx + 0x2f8], 2 */ { const u32 m_ = (u32)(ebx + 0x2f8u); M32(m_) = (u32)(0x2u); }
  /* 00510ca4 fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510ca7 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510caa fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00510cac fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510caf fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510cb2 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00510cb4 fstp st(0) */ ST(0) = ST(0); FPOP();
L_00510cb6:;
  /* 00510cb6 mov edx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 00510cb9 mov ecx, dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 00510cbc mov edi, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); edi = (u32)(M32(m_)); }
  /* 00510cbf lea esi, [ebx + 0x274] */ esi = (u32)((u32)(ebx + 0x274u));
  /* 00510cc5 mov eax, esi */ { eax = (u32)(esi); }
  /* 00510cc7 call 0x526830 */ esp -= 4; M32(esp) = 0x510cccu; SAVEALL; F_00526830(c); ABI_CHECK(0x526830u, 0x510cc7u); RETCHK(0x510cccu, 0x510cc7u); LOADALL;
  /* 00510ccc lea eax, [edx + 0x20] */ eax = (u32)((u32)(edx + 0x20u));
  /* 00510ccf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00510cd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00510cd1 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00510cd3 mov edx, eax */ { edx = (u32)(eax); }
  /* 00510cd5 call 0x526890 */ esp -= 4; M32(esp) = 0x510cdau; SAVEALL; F_00526890(c); ABI_CHECK(0x526890u, 0x510cd5u); RETCHK(0x510cdau, 0x510cd5u); LOADALL;
  /* 00510cda push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00510cdf push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00510ce4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00510ce6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00510ce8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00510ce9 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00510cec call 0x500ca0 */ esp -= 4; M32(esp) = 0x510cf1u; SAVEALL; F_00500ca0(c); ABI_CHECK(0x500ca0u, 0x510cecu); RETCHK(0x510cf1u, 0x510cecu); LOADALL;
  /* 00510cf1 cmp edi, 2 */ { u32 a_ = edi, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510cf4 je 0x510cfb */ if (ZF_) goto L_00510cfb;
  /* 00510cf6 cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510cf9 jne 0x510d01 */ if (!ZF_) goto L_00510d01;
L_00510cfb:;
  /* 00510cfb mov dword ptr [ebx + 0x2f8], edi */ { const u32 m_ = (u32)(ebx + 0x2f8u); M32(m_) = (u32)(edi); }
L_00510d01:;
  /* 00510d01 mov edi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edi = (u32)(M32(m_)); }
L_00510d04:;
  /* 00510d04 mov eax, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00510d07 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510d09 je 0x510d2f */ if (ZF_) goto L_00510d2f;
  /* 00510d0b mov eax, dword ptr [ebx + 0x208] */ { const u32 m_ = (u32)(ebx + 0x208u); eax = (u32)(M32(m_)); }
  /* 00510d11 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00510d13 jne 0x510d27 */ if (!ZF_) goto L_00510d27;
  /* 00510d15 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00510d17 push 0x651820 */ { u32 v_ = 0x651820u; esp -= 4; M32(esp) = v_; }
  /* 00510d1c lea eax, [ebx + 0x204] */ eax = (u32)((u32)(ebx + 0x204u));
  /* 00510d22 call 0x529310 */ esp -= 4; M32(esp) = 0x510d27u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x510d22u); RETCHK(0x510d27u, 0x510d22u); LOADALL;
L_00510d27:;
  /* 00510d27 lea eax, [ebx + 0x204] */ eax = (u32)((u32)(ebx + 0x204u));
  /* 00510d2d jmp 0x510d7d */ goto L_00510d7d;
L_00510d2f:;
  /* 00510d2f test al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510d31 je 0x510d57 */ if (ZF_) goto L_00510d57;
  /* 00510d33 mov eax, dword ptr [ebx + 0x210] */ { const u32 m_ = (u32)(ebx + 0x210u); eax = (u32)(M32(m_)); }
  /* 00510d39 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00510d3b jne 0x510d4f */ if (!ZF_) goto L_00510d4f;
  /* 00510d3d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00510d3f push 0x651810 */ { u32 v_ = 0x651810u; esp -= 4; M32(esp) = v_; }
  /* 00510d44 lea eax, [ebx + 0x20c] */ eax = (u32)((u32)(ebx + 0x20cu));
  /* 00510d4a call 0x529310 */ esp -= 4; M32(esp) = 0x510d4fu; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x510d4au); RETCHK(0x510d4fu, 0x510d4au); LOADALL;
L_00510d4f:;
  /* 00510d4f lea eax, [ebx + 0x20c] */ eax = (u32)((u32)(ebx + 0x20cu));
  /* 00510d55 jmp 0x510d7d */ goto L_00510d7d;
L_00510d57:;
  /* 00510d57 test al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510d59 je 0x510d9f */ if (ZF_) goto L_00510d9f;
  /* 00510d5b mov eax, dword ptr [ebx + 0x218] */ { const u32 m_ = (u32)(ebx + 0x218u); eax = (u32)(M32(m_)); }
  /* 00510d61 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00510d63 jne 0x510d77 */ if (!ZF_) goto L_00510d77;
  /* 00510d65 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00510d67 push 0x651804 */ { u32 v_ = 0x651804u; esp -= 4; M32(esp) = v_; }
  /* 00510d6c lea eax, [ebx + 0x214] */ eax = (u32)((u32)(ebx + 0x214u));
  /* 00510d72 call 0x529310 */ esp -= 4; M32(esp) = 0x510d77u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x510d72u); RETCHK(0x510d77u, 0x510d72u); LOADALL;
L_00510d77:;
  /* 00510d77 lea eax, [ebx + 0x214] */ eax = (u32)((u32)(ebx + 0x214u));
L_00510d7d:;
  /* 00510d7d lea ecx, [ebx + 0x274] */ ecx = (u32)((u32)(ebx + 0x274u));
  /* 00510d83 call 0x5267f0 */ esp -= 4; M32(esp) = 0x510d88u; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x510d83u); RETCHK(0x510d88u, 0x510d83u); LOADALL;
  /* 00510d88 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00510d8d push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00510d92 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00510d94 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00510d96 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00510d97 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00510d9a call 0x5050e0 */ esp -= 4; M32(esp) = 0x510d9fu; SAVEALL; F_005050e0(c); ABI_CHECK(0x5050e0u, 0x510d9au); RETCHK(0x510d9fu, 0x510d9au); LOADALL;
L_00510d9f:;
  /* 00510d9f test byte ptr [edi + 0x2c], 8 */ { const u32 m_ = (u32)(edi + 0x2cu); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510da3 je 0x510e4f */ if (ZF_) goto L_00510e4f;
  /* 00510da9 mov eax, dword ptr [ebx + 0x220] */ { const u32 m_ = (u32)(ebx + 0x220u); eax = (u32)(M32(m_)); }
  /* 00510daf xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00510db1 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510db3 jne 0x510dc6 */ if (!ZF_) goto L_00510dc6;
  /* 00510db5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00510db6 push 0x651800 */ { u32 v_ = 0x651800u; esp -= 4; M32(esp) = v_; }
  /* 00510dbb lea eax, [ebx + 0x21c] */ eax = (u32)((u32)(ebx + 0x21cu));
  /* 00510dc1 call 0x529310 */ esp -= 4; M32(esp) = 0x510dc6u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x510dc1u); RETCHK(0x510dc6u, 0x510dc1u); LOADALL;
L_00510dc6:;
  /* 00510dc6 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00510dc9 lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
  /* 00510dcc lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00510dcf call 0x52cee0 */ esp -= 4; M32(esp) = 0x510dd4u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x510dcfu); RETCHK(0x510dd4u, 0x510dcfu); LOADALL;
  /* 00510dd4 fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 00510dd7 fadd dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510ddd mov ecx, dword ptr [ebx + 0x220] */ { const u32 m_ = (u32)(ebx + 0x220u); ecx = (u32)(M32(m_)); }
  /* 00510de3 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510de5 lea eax, [ebx + 0x21c] */ eax = (u32)((u32)(ebx + 0x21cu));
  /* 00510deb fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510dee fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 00510df1 fsub dword ptr [0x656ea0] */ { const u32 m_ = (u32)(0x656ea0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00510df7 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510dfa je 0x510e06 */ if (ZF_) goto L_00510e06;
  /* 00510dfc mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 00510dfe mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 00510e01 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 00510e04 jmp 0x510e09 */ goto L_00510e09;
L_00510e06:;
  /* 00510e06 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
L_00510e09:;
  /* 00510e09 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00510e0c mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00510e0f cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510e11 fadd dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510e14 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510e17 je 0x510e23 */ if (ZF_) goto L_00510e23;
  /* 00510e19 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 00510e1b mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 00510e1e mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 00510e21 jmp 0x510e26 */ goto L_00510e26;
L_00510e23:;
  /* 00510e23 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
L_00510e26:;
  /* 00510e26 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00510e29 lea ecx, [ebx + 0x274] */ ecx = (u32)((u32)(ebx + 0x274u));
  /* 00510e2f fsubr dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 00510e32 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510e35 call 0x5267f0 */ esp -= 4; M32(esp) = 0x510e3au; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x510e35u); RETCHK(0x510e3au, 0x510e35u); LOADALL;
  /* 00510e3a push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00510e3f push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00510e44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00510e45 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00510e46 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00510e47 lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00510e4a call 0x5050e0 */ esp -= 4; M32(esp) = 0x510e4fu; SAVEALL; F_005050e0(c); ABI_CHECK(0x5050e0u, 0x510e4au); RETCHK(0x510e4fu, 0x510e4au); LOADALL;
L_00510e4f:;
  /* 00510e4f test byte ptr [edi + 0x2c], 0x40 */ { const u32 m_ = (u32)(edi + 0x2cu); u32 a_ = M8(m_), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510e53 je 0x510fdd */ if (ZF_) goto L_00510fdd;
  /* 00510e59 mov esi, dword ptr [ebx + 0x1e0] */ { const u32 m_ = (u32)(ebx + 0x1e0u); esi = (u32)(M32(m_)); }
  /* 00510e5f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00510e61 jl 0x510e9e */ if (LT_) goto L_00510e9e;
  /* 00510e63 mov eax, dword ptr [ebx + 0x268] */ { const u32 m_ = (u32)(ebx + 0x268u); eax = (u32)(M32(m_)); }
  /* 00510e69 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00510e6b je 0x510e86 */ if (ZF_) goto L_00510e86;
  /* 00510e6d mov ecx, dword ptr [ebx + 0x26c] */ { const u32 m_ = (u32)(ebx + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 00510e73 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00510e75 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 00510e7a imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510e7c sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00510e7f mov eax, edx */ { eax = (u32)(edx); }
  /* 00510e81 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00510e84 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00510e86:;
  /* 00510e86 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510e88 jge 0x510e9e */ if (!LT_) goto L_00510e9e;
  /* 00510e8a mov ecx, dword ptr [ebx + 0x1dc] */ { const u32 m_ = (u32)(ebx + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 00510e90 imul ecx, dword ptr [ebx + 0x1d8] */ { const u32 m_ = (u32)(ebx + 0x1d8u); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510e97 mov eax, esi */ { eax = (u32)(esi); }
  /* 00510e99 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00510e9a idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x510e9au); eax = q_; edx = r_; }
  /* 00510e9c jmp 0x510ea0 */ goto L_00510ea0;
L_00510e9e:;
  /* 00510e9e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00510ea0:;
  /* 00510ea0 mov edx, dword ptr [ebx + 0x1dc] */ { const u32 m_ = (u32)(ebx + 0x1dcu); edx = (u32)(M32(m_)); }
  /* 00510ea6 imul edx, eax */ { s64 p_ = (s64)(s32)edx * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510ea9 imul edx, dword ptr [ebx + 0x1d8] */ { const u32 m_ = (u32)(ebx + 0x1d8u); s64 p_ = (s64)(s32)edx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510eb0 cmp dword ptr [ebp - 0x2c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510eb3 jl 0x510fdd */ if (LT_) goto L_00510fdd;
  /* 00510eb9 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00510ebb call 0x50e5c0 */ esp -= 4; M32(esp) = 0x510ec0u; SAVEALL; F_0050e5c0(c); ABI_CHECK(0x50e5c0u, 0x510ebbu); RETCHK(0x510ec0u, 0x510ebbu); LOADALL;
  /* 00510ec0 mov ecx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ecx = (u32)(M32(m_)); }
  /* 00510ec3 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510ec5 jg 0x510fdd */ if (!(ZF_|LT_)) goto L_00510fdd;
  /* 00510ecb mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 00510ece lea edi, [ebp - 0x70] */ edi = (u32)((u32)(ebp + 0xffffff90u));
  /* 00510ed1 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00510ed3 mov eax, esi */ { eax = (u32)(esi); }
  /* 00510ed5 call 0x50e640 */ esp -= 4; M32(esp) = 0x510edau; SAVEALL; F_0050e640(c); ABI_CHECK(0x50e640u, 0x510ed5u); RETCHK(0x510edau, 0x510ed5u); LOADALL;
  /* 00510eda fld dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); FPUSH((double)MF32(m_)); }
  /* 00510edd fsub dword ptr [0x656dd4] */ { const u32 m_ = (u32)(0x656dd4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00510ee3 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00510ee6 lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
  /* 00510ee9 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00510eec fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510eef fld dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); FPUSH((double)MF32(m_)); }
  /* 00510ef2 fsub dword ptr [0x6570d0] */ { const u32 m_ = (u32)(0x6570d0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00510ef8 fstp dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510efb call 0x52cee0 */ esp -= 4; M32(esp) = 0x510f00u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x510efbu); RETCHK(0x510f00u, 0x510efbu); LOADALL;
  /* 00510f00 fld dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); FPUSH((double)MF32(m_)); }
  /* 00510f03 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00510f05 fsub dword ptr [0x6570d8] */ { const u32 m_ = (u32)(0x6570d8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00510f0b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00510f0d fstp dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510f10 fld dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); FPUSH((double)MF32(m_)); }
  /* 00510f13 fadd dword ptr [0x656db4] */ { const u32 m_ = (u32)(0x656db4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510f19 fstp dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00510f1c call dword ptr [eax + 0x128] */ { const u32 m_ = (u32)(eax + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x510f22u; SAVEALL; call_ind(c, t_); RETCHK(0x510f22u, 0x510f1cu); LOADALL; }
  /* 00510f22 mov edi, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); edi = (u32)(M32(m_)); }
  /* 00510f28 mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 00510f2b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00510f2d imul ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510f31 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00510f33 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00510f35 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 00510f38 call 0x421670 */ esp -= 4; M32(esp) = 0x510f3du; SAVEALL; F_00421670(c); ABI_CHECK(0x421670u, 0x510f38u); RETCHK(0x510f3du, 0x510f38u); LOADALL;
  /* 00510f3d imul eax, edi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510f40 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00510f43 mov edi, esi */ { edi = (u32)(esi); }
  /* 00510f45 imul eax, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510f4c sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00510f4e cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00510f50 jne 0x510f85 */ if (!ZF_) goto L_00510f85;
  /* 00510f52 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00510f54 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00510f56 call dword ptr [eax + 0x128] */ { const u32 m_ = (u32)(eax + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x510f5cu; SAVEALL; call_ind(c, t_); RETCHK(0x510f5cu, 0x510f56u); LOADALL; }
  /* 00510f5c mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00510f5e call 0x421670 */ esp -= 4; M32(esp) = 0x510f63u; SAVEALL; F_00421670(c); ABI_CHECK(0x421670u, 0x510f5eu); RETCHK(0x510f63u, 0x510f5eu); LOADALL;
  /* 00510f63 imul eax, dword ptr [edi + 0x1dc] */ { const u32 m_ = (u32)(edi + 0x1dcu); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510f6a imul eax, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510f71 mov ecx, dword ptr [edi + 0x25c] */ { const u32 m_ = (u32)(edi + 0x25cu); ecx = (u32)(M32(m_)); }
  /* 00510f77 sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00510f79 mov ecx, dword ptr [ecx + ebx*4] */ { const u32 m_ = (u32)(ecx + ebx * 4u); ecx = (u32)(M32(m_)); }
  /* 00510f7c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00510f7e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00510f80 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x510f83u; SAVEALL; call_ind(c, t_); RETCHK(0x510f83u, 0x510f80u); LOADALL; }
  /* 00510f83 jmp 0x510fd7 */ goto L_00510fd7;
L_00510f85:;
  /* 00510f85 mov edx, dword ptr [edi + 0x25c] */ { const u32 m_ = (u32)(edi + 0x25cu); edx = (u32)(M32(m_)); }
  /* 00510f8b mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 00510f8e mov esi, dword ptr [edx + ecx*4] */ { const u32 m_ = (u32)(edx + ecx * 4u); esi = (u32)(M32(m_)); }
  /* 00510f91 add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00510f94 call 0x5224b0 */ esp -= 4; M32(esp) = 0x510f99u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x510f94u); RETCHK(0x510f99u, 0x510f94u); LOADALL;
  /* 00510f99 mov eax, dword ptr [edi + 0x1dc] */ { const u32 m_ = (u32)(edi + 0x1dcu); eax = (u32)(M32(m_)); }
  /* 00510f9f mov esi, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); esi = (u32)(M32(m_)); }
  /* 00510fa2 mov ebx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ebx = (u32)(M32(m_)); }
  /* 00510fa5 imul eax, esi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)esi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510fa8 mov ecx, dword ptr [edi + 0x25c] */ { const u32 m_ = (u32)(edi + 0x25cu); ecx = (u32)(M32(m_)); }
  /* 00510fae add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00510fb0 mov ecx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); ecx = (u32)(M32(m_)); }
  /* 00510fb3 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00510fb5 lea eax, [ebp - 0x48] */ eax = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00510fb8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00510fb9 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x510fbcu; SAVEALL; call_ind(c, t_); RETCHK(0x510fbcu, 0x510fb9u); LOADALL; }
  /* 00510fbc mov ecx, dword ptr [edi + 0x1dc] */ { const u32 m_ = (u32)(edi + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 00510fc2 mov edx, dword ptr [edi + 0x25c] */ { const u32 m_ = (u32)(edi + 0x25cu); edx = (u32)(M32(m_)); }
  /* 00510fc8 imul ecx, esi */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)esi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00510fcb add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00510fcd mov ecx, dword ptr [edx + ecx*4] */ { const u32 m_ = (u32)(edx + ecx * 4u); ecx = (u32)(M32(m_)); }
  /* 00510fd0 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00510fd2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00510fd4 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x510fd7u; SAVEALL; call_ind(c, t_); RETCHK(0x510fd7u, 0x510fd4u); LOADALL; }
L_00510fd7:;
  /* 00510fd7 mov ebx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ebx = (u32)(M32(m_)); }
  /* 00510fda mov edi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edi = (u32)(M32(m_)); }
L_00510fdd:;
  /* 00510fdd mov al, byte ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00510fe0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00510fe2 jns 0x511094 */ if (!SF_) goto L_00511094;
  /* 00510fe8 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00510feb lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
  /* 00510fee lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00510ff1 call 0x52cee0 */ esp -= 4; M32(esp) = 0x510ff6u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x510ff1u); RETCHK(0x510ff6u, 0x510ff1u); LOADALL;
  /* 00510ff6 fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 00510ff9 fadd dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00510fff mov eax, dword ptr [ebx + 0x230] */ { const u32 m_ = (u32)(ebx + 0x230u); eax = (u32)(M32(m_)); }
  /* 00511005 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00511007 lea esi, [ebx + 0x22c] */ esi = (u32)((u32)(ebx + 0x22cu));
  /* 0051100d fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00511010 fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 00511013 fadd dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00511019 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051101c je 0x511025 */ if (ZF_) goto L_00511025;
  /* 0051101e mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00511020 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 00511023 jmp 0x511027 */ goto L_00511027;
L_00511025:;
  /* 00511025 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00511027:;
  /* 00511027 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00511028 and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0051102b add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051102d sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00511030 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00511033 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00511036 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00511038 fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 0051103b fadd dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051103e fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00511041 je 0x51104d */ if (ZF_) goto L_0051104d;
  /* 00511043 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00511045 mov eax, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); eax = (u32)(M32(m_)); }
  /* 00511048 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0051104b jmp 0x511054 */ goto L_00511054;
L_0051104d:;
  /* 0051104d mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
L_00511054:;
  /* 00511054 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00511057 lea ecx, [ebx + 0x274] */ ecx = (u32)((u32)(ebx + 0x274u));
  /* 0051105d mov eax, esi */ { eax = (u32)(esi); }
  /* 0051105f fadd dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00511062 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00511065 call 0x5267f0 */ esp -= 4; M32(esp) = 0x51106au; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x511065u); RETCHK(0x51106au, 0x511065u); LOADALL;
  /* 0051106a fld dword ptr [ebx + 0x308] */ { const u32 m_ = (u32)(ebx + 0x308u); FPUSH((double)MF32(m_)); }
  /* 00511070 mov edx, dword ptr [ebx + 0x308] */ { const u32 m_ = (u32)(ebx + 0x308u); edx = (u32)(M32(m_)); }
  /* 00511076 fadd dword ptr [0x656e54] */ { const u32 m_ = (u32)(0x656e54u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051107c push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00511081 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511082 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00511085 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00511087 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00511088 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511089 lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0051108c call 0x5050e0 */ esp -= 4; M32(esp) = 0x511091u; SAVEALL; F_005050e0(c); ABI_CHECK(0x5050e0u, 0x51108cu); RETCHK(0x511091u, 0x51108cu); LOADALL;
  /* 00511091 mov edi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edi = (u32)(M32(m_)); }
L_00511094:;
  /* 00511094 mov eax, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00511097 test ah, 8 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051109a je 0x51114c */ if (ZF_) goto L_0051114c;
  /* 005110a0 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 005110a3 lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
  /* 005110a6 lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 005110a9 call 0x52cee0 */ esp -= 4; M32(esp) = 0x5110aeu; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x5110a9u); RETCHK(0x5110aeu, 0x5110a9u); LOADALL;
  /* 005110ae fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 005110b1 fadd dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005110b7 mov eax, dword ptr [ebx + 0x238] */ { const u32 m_ = (u32)(ebx + 0x238u); eax = (u32)(M32(m_)); }
  /* 005110bd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005110bf lea esi, [ebx + 0x234] */ esi = (u32)((u32)(ebx + 0x234u));
  /* 005110c5 fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005110c8 fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 005110cb fadd dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005110d1 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005110d4 je 0x5110dd */ if (ZF_) goto L_005110dd;
  /* 005110d6 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005110d8 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 005110db jmp 0x5110df */ goto L_005110df;
L_005110dd:;
  /* 005110dd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005110df:;
  /* 005110df cdq */ edx = (u32)((s32)eax >> 31);
  /* 005110e0 and edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005110e3 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005110e5 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005110e8 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 005110eb mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005110ee test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005110f0 fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 005110f3 fadd dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005110f6 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005110f9 je 0x511105 */ if (ZF_) goto L_00511105;
  /* 005110fb mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005110fd mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 00511100 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 00511103 jmp 0x51110c */ goto L_0051110c;
L_00511105:;
  /* 00511105 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
L_0051110c:;
  /* 0051110c fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0051110f lea ecx, [ebx + 0x274] */ ecx = (u32)((u32)(ebx + 0x274u));
  /* 00511115 mov eax, esi */ { eax = (u32)(esi); }
  /* 00511117 fadd dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051111a fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051111d call 0x5267f0 */ esp -= 4; M32(esp) = 0x511122u; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x51111du); RETCHK(0x511122u, 0x51111du); LOADALL;
  /* 00511122 fld dword ptr [ebx + 0x308] */ { const u32 m_ = (u32)(ebx + 0x308u); FPUSH((double)MF32(m_)); }
  /* 00511128 mov eax, dword ptr [ebx + 0x308] */ { const u32 m_ = (u32)(ebx + 0x308u); eax = (u32)(M32(m_)); }
  /* 0051112e fadd dword ptr [0x656e54] */ { const u32 m_ = (u32)(0x656e54u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00511134 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00511139 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051113a fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051113d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051113f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511140 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511141 lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00511144 call 0x5050e0 */ esp -= 4; M32(esp) = 0x511149u; SAVEALL; F_005050e0(c); ABI_CHECK(0x5050e0u, 0x511144u); RETCHK(0x511149u, 0x511144u); LOADALL;
  /* 00511149 mov edi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edi = (u32)(M32(m_)); }
L_0051114c:;
  /* 0051114c call 0x9de000 */ esp -= 4; M32(esp) = 0x511151u; SAVEALL; F_009de000(c); ABI_CHECK(0x9de000u, 0x51114cu); RETCHK(0x511151u, 0x51114cu); LOADALL;
  /* 00511151 nop */ ;
  /* 00511152 je 0x511242 */ if (ZF_) goto L_00511242;
  /* 00511158 mov eax, dword ptr [ebx + 0x240] */ { const u32 m_ = (u32)(ebx + 0x240u); eax = (u32)(M32(m_)); }
  /* 0051115e xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00511160 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511162 jne 0x511175 */ if (!ZF_) goto L_00511175;
  /* 00511164 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00511165 push 0x647420 */ { u32 v_ = 0x647420u; esp -= 4; M32(esp) = v_; }
  /* 0051116a lea eax, [ebx + 0x23c] */ eax = (u32)((u32)(ebx + 0x23cu));
  /* 00511170 call 0x529310 */ esp -= 4; M32(esp) = 0x511175u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x511170u); RETCHK(0x511175u, 0x511170u); LOADALL;
L_00511175:;
  /* 00511175 lea edx, [ebp - 0x90] */ edx = (u32)((u32)(ebp + 0xffffff70u));
  /* 0051117b lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0051117e lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00511181 call 0x52cee0 */ esp -= 4; M32(esp) = 0x511186u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x511181u); RETCHK(0x511186u, 0x511181u); LOADALL;
  /* 00511186 fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 00511189 mov ecx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ecx = (u32)(M32(m_)); }
  /* 0051118c fadd dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00511192 lea eax, [ebx + 0x23c] */ eax = (u32)((u32)(ebx + 0x23cu));
  /* 00511198 mov dword ptr [ebp - 0x38], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ecx); }
  /* 0051119b mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0051119e fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005111a1 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005111a3 je 0x5111af */ if (ZF_) goto L_005111af;
  /* 005111a5 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005111a7 mov ecx, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005111aa mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 005111ad jmp 0x5111b2 */ goto L_005111b2;
L_005111af:;
  /* 005111af mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
L_005111b2:;
  /* 005111b2 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 005111b5 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005111b8 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005111ba fadd dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005111bd fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005111c0 je 0x5111cc */ if (ZF_) goto L_005111cc;
  /* 005111c2 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005111c4 mov ecx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005111c7 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 005111ca jmp 0x5111cf */ goto L_005111cf;
L_005111cc:;
  /* 005111cc mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
L_005111cf:;
  /* 005111cf fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 005111d2 lea ecx, [ebx + 0x274] */ ecx = (u32)((u32)(ebx + 0x274u));
  /* 005111d8 fadd dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005111db fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005111de call 0x5267f0 */ esp -= 4; M32(esp) = 0x5111e3u; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x5111deu); RETCHK(0x5111e3u, 0x5111deu); LOADALL;
  /* 005111e3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005111e4 call 0x508500 */ esp -= 4; M32(esp) = 0x5111e9u; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x5111e4u); RETCHK(0x5111e9u, 0x5111e4u); LOADALL;
  /* 005111e9 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005111eb je 0x511225 */ if (ZF_) goto L_00511225;
  /* 005111ed mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 005111ef mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005111f1 call dword ptr [edx + 0x128] */ { const u32 m_ = (u32)(edx + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5111f7u; SAVEALL; call_ind(c, t_); RETCHK(0x5111f7u, 0x5111f1u); LOADALL; }
  /* 005111f7 mov edi, dword ptr [ebx + 0x1dc] */ { const u32 m_ = (u32)(ebx + 0x1dcu); edi = (u32)(M32(m_)); }
  /* 005111fd mov esi, ebx */ { esi = (u32)(ebx); }
  /* 005111ff mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00511202 call 0x421670 */ esp -= 4; M32(esp) = 0x511207u; SAVEALL; F_00421670(c); ABI_CHECK(0x421670u, 0x511202u); RETCHK(0x511207u, 0x511202u); LOADALL;
  /* 00511207 mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 0051120a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0051120c mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0051120f imul ecx, edi */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511212 imul edi, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); s64 p_ = (s64)(s32)edi * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511216 imul ecx, dword ptr [ebx + 0x1d8] */ { const u32 m_ = (u32)(ebx + 0x1d8u); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0051121d sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051121f add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00511221 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511223 je 0x511242 */ if (ZF_) goto L_00511242;
L_00511225:;
  /* 00511225 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0051122a push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0051122f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00511231 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00511233 lea eax, [ebx + 0x274] */ eax = (u32)((u32)(ebx + 0x274u));
  /* 00511239 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051123a lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0051123d call 0x5050e0 */ esp -= 4; M32(esp) = 0x511242u; SAVEALL; F_005050e0(c); ABI_CHECK(0x5050e0u, 0x51123du); RETCHK(0x511242u, 0x51123du); LOADALL;
L_00511242:;
  /* 00511242 mov edx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 00511245 mov eax, dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00511248 test ah, 2 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051124b je 0x51133e */ if (ZF_) goto L_0051133e;
  /* 00511251 mov eax, dword ptr [ebx + 0x248] */ { const u32 m_ = (u32)(ebx + 0x248u); eax = (u32)(M32(m_)); }
  /* 00511257 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00511259 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051125b jne 0x51126e */ if (!ZF_) goto L_0051126e;
  /* 0051125d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051125e push 0x6517f8 */ { u32 v_ = 0x6517f8u; esp -= 4; M32(esp) = v_; }
  /* 00511263 lea eax, [ebx + 0x244] */ eax = (u32)((u32)(ebx + 0x244u));
  /* 00511269 call 0x529310 */ esp -= 4; M32(esp) = 0x51126eu; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x511269u); RETCHK(0x51126eu, 0x511269u); LOADALL;
L_0051126e:;
  /* 0051126e lea edx, [ebp - 0x90] */ edx = (u32)((u32)(ebp + 0xffffff70u));
  /* 00511274 lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
  /* 00511277 lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0051127a call 0x52cee0 */ esp -= 4; M32(esp) = 0x51127fu; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x51127au); RETCHK(0x51127fu, 0x51127au); LOADALL;
  /* 0051127f fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 00511282 mov eax, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 00511285 fadd dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051128b mov ecx, dword ptr [ebx + 0x248] */ { const u32 m_ = (u32)(ebx + 0x248u); ecx = (u32)(M32(m_)); }
  /* 00511291 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511293 mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 00511296 fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00511299 lea eax, [ebx + 0x244] */ eax = (u32)((u32)(ebx + 0x244u));
  /* 0051129f je 0x5112ab */ if (ZF_) goto L_005112ab;
  /* 005112a1 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005112a3 mov edx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); edx = (u32)(M32(m_)); }
  /* 005112a6 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 005112a9 jmp 0x5112ae */ goto L_005112ae;
L_005112ab:;
  /* 005112ab mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
L_005112ae:;
  /* 005112ae fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 005112b1 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005112b4 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005112b6 fadd dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005112b9 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005112bc je 0x5112c8 */ if (ZF_) goto L_005112c8;
  /* 005112be mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005112c0 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005112c3 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 005112c6 jmp 0x5112cb */ goto L_005112cb;
L_005112c8:;
  /* 005112c8 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
L_005112cb:;
  /* 005112cb fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 005112ce lea ecx, [ebx + 0x274] */ ecx = (u32)((u32)(ebx + 0x274u));
  /* 005112d4 fadd dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005112d7 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005112da call 0x5267f0 */ esp -= 4; M32(esp) = 0x5112dfu; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x5112dau); RETCHK(0x5112dfu, 0x5112dau); LOADALL;
  /* 005112df push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005112e0 call 0x508500 */ esp -= 4; M32(esp) = 0x5112e5u; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x5112e0u); RETCHK(0x5112e5u, 0x5112e0u); LOADALL;
  /* 005112e5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005112e7 je 0x511321 */ if (ZF_) goto L_00511321;
  /* 005112e9 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 005112eb mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005112ed call dword ptr [eax + 0x128] */ { const u32 m_ = (u32)(eax + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5112f3u; SAVEALL; call_ind(c, t_); RETCHK(0x5112f3u, 0x5112edu); LOADALL; }
  /* 005112f3 mov edi, dword ptr [ebx + 0x1dc] */ { const u32 m_ = (u32)(ebx + 0x1dcu); edi = (u32)(M32(m_)); }
  /* 005112f9 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 005112fb mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 005112fe call 0x421670 */ esp -= 4; M32(esp) = 0x511303u; SAVEALL; F_00421670(c); ABI_CHECK(0x421670u, 0x5112feu); RETCHK(0x511303u, 0x5112feu); LOADALL;
  /* 00511303 mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 00511306 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00511308 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0051130b imul ecx, edi */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)edi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0051130e imul edi, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); s64 p_ = (s64)(s32)edi * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511312 imul ecx, dword ptr [ebx + 0x1d8] */ { const u32 m_ = (u32)(ebx + 0x1d8u); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511319 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051131b add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0051131d cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051131f je 0x51133e */ if (ZF_) goto L_0051133e;
L_00511321:;
  /* 00511321 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00511326 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0051132b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051132d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051132f lea eax, [ebx + 0x274] */ eax = (u32)((u32)(ebx + 0x274u));
  /* 00511335 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511336 lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00511339 call 0x5050e0 */ esp -= 4; M32(esp) = 0x51133eu; SAVEALL; F_005050e0(c); ABI_CHECK(0x5050e0u, 0x511339u); RETCHK(0x51133eu, 0x511339u); LOADALL;
L_0051133e:;
  /* 0051133e fld dword ptr [ebp - 0x90] */ { const u32 m_ = (u32)(ebp + 0xffffff70u); FPUSH((double)MF32(m_)); }
  /* 00511344 mov esi, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); esi = (u32)(M32(m_)); }
  /* 00511347 fadd dword ptr [ebx + 0x1e4] */ { const u32 m_ = (u32)(ebx + 0x1e4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051134d mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 00511350 mov ecx, dword ptr [ebx + 0x1dc] */ { const u32 m_ = (u32)(ebx + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 00511356 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00511357 fadd dword ptr [ebx + 0x1ec] */ { const u32 m_ = (u32)(ebx + 0x1ecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051135d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051135e cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511360 mov dword ptr [ebp - 0x2c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(esi); }
  /* 00511363 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00511366 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 00511369 jl 0x510b00 */ if (LT_) goto L_00510b00;
L_0051136f:;
  /* 0051136f fld dword ptr [ebx + 0x1f0] */ { const u32 m_ = (u32)(ebx + 0x1f0u); FPUSH((double)MF32(m_)); }
  /* 00511375 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00511378 fadd dword ptr [ebx + 0x1e8] */ { const u32 m_ = (u32)(ebx + 0x1e8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051137e mov ecx, dword ptr [ebx + 0x1d8] */ { const u32 m_ = (u32)(ebx + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 00511384 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00511385 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511387 fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051138a mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 0051138d fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00511390 jl 0x510aa0 */ if (LT_) goto L_00510aa0;
L_00511396:;
  /* 00511396 mov eax, dword ptr [ebx + 0x1e0] */ { const u32 m_ = (u32)(ebx + 0x1e0u); eax = (u32)(M32(m_)); }
  /* 0051139c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051139f je 0x5113be */ if (ZF_) goto L_005113be;
  /* 005113a1 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 005113a3 call 0x511870 */ esp -= 4; M32(esp) = 0x5113a8u; SAVEALL; F_00511870(c); ABI_CHECK(0x511870u, 0x5113a3u); RETCHK(0x5113a8u, 0x5113a3u); LOADALL;
  /* 005113a8 test ah, 4 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005113ab je 0x5113be */ if (ZF_) goto L_005113be;
  /* 005113ad mov ecx, dword ptr [ebx + 0x260] */ { const u32 m_ = (u32)(ebx + 0x260u); ecx = (u32)(M32(m_)); }
  /* 005113b3 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005113b5 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005113b7 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5113bau; SAVEALL; call_ind(c, t_); RETCHK(0x5113bau, 0x5113b7u); LOADALL; }
  /* 005113ba push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005113bc jmp 0x5113cd */ goto L_005113cd;
L_005113be:;
  /* 005113be mov ecx, dword ptr [ebx + 0x260] */ { const u32 m_ = (u32)(ebx + 0x260u); ecx = (u32)(M32(m_)); }
  /* 005113c4 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005113c6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005113c8 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5113cbu; SAVEALL; call_ind(c, t_); RETCHK(0x5113cbu, 0x5113c8u); LOADALL; }
  /* 005113cb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
L_005113cd:;
  /* 005113cd mov ecx, dword ptr [ebx + 0x254] */ { const u32 m_ = (u32)(ebx + 0x254u); ecx = (u32)(M32(m_)); }
  /* 005113d3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005113d5 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5113d8u; SAVEALL; call_ind(c, t_); RETCHK(0x5113d8u, 0x5113d5u); LOADALL; }
  /* 005113d8 mov eax, dword ptr [ebx + 0x200] */ { const u32 m_ = (u32)(ebx + 0x200u); eax = (u32)(M32(m_)); }
  /* 005113de test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005113e0 jne 0x5116b4 */ if (!ZF_) goto L_005116b4;
  /* 005113e6 cmp dword ptr [ebx + 0x334], 0x10 */ { const u32 m_ = (u32)(ebx + 0x334u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005113ed jb 0x5113fd */ if (CF_) goto L_005113fd;
  /* 005113ef mov eax, dword ptr [ebx + 0x320] */ { const u32 m_ = (u32)(ebx + 0x320u); eax = (u32)(M32(m_)); }
  /* 005113f5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005113f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005113f8 jmp 0x5116a9 */ goto L_005116a9;
L_005113fd:;
  /* 005113fd lea eax, [ebx + 0x320] */ eax = (u32)((u32)(ebx + 0x320u));
  /* 00511403 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00511405 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511406 jmp 0x5116a9 */ goto L_005116a9;
L_0051140b:;
  /* 0051140b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051140d jle 0x511698 */ if ((ZF_|LT_)) goto L_00511698;
  /* 00511413 mov edi, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edi = (u32)(M32(m_)); }
  /* 00511416 jmp 0x511420 */ goto L_00511420;
L_00511420:;
  /* 00511420 mov eax, dword ptr [ebx + 0x268] */ { const u32 m_ = (u32)(ebx + 0x268u); eax = (u32)(M32(m_)); }
  /* 00511426 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00511428 je 0x511698 */ if (ZF_) goto L_00511698;
  /* 0051142e mov ecx, dword ptr [ebx + 0x26c] */ { const u32 m_ = (u32)(ebx + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 00511434 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00511436 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0051143b imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0051143d sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00511440 mov eax, edx */ { eax = (u32)(edx); }
  /* 00511442 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00511445 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00511447 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511449 jae 0x511698 */ if (!CF_) goto L_00511698;
  /* 0051144f fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 00511452 mov eax, dword ptr [ebx + 0x1dc] */ { const u32 m_ = (u32)(ebx + 0x1dcu); eax = (u32)(M32(m_)); }
  /* 00511458 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051145a fadd dword ptr [ebx + 0x1f4] */ { const u32 m_ = (u32)(ebx + 0x1f4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00511460 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 00511467 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051146a jle 0x511671 */ if ((ZF_|LT_)) goto L_00511671;
  /* 00511470 mov esi, edi */ { esi = (u32)(edi); }
  /* 00511472 imul esi, esi, 0x6c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511475 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00511478 jmp 0x511480 */ goto L_00511480;
L_0051147a:;
  /* 0051147a mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 0051147d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00511480:;
  /* 00511480 mov eax, dword ptr [ebx + 0x268] */ { const u32 m_ = (u32)(ebx + 0x268u); eax = (u32)(M32(m_)); }
  /* 00511486 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00511488 je 0x511671 */ if (ZF_) goto L_00511671;
  /* 0051148e mov ecx, dword ptr [ebx + 0x26c] */ { const u32 m_ = (u32)(ebx + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 00511494 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00511496 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0051149b imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0051149d sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005114a0 mov eax, edx */ { eax = (u32)(edx); }
  /* 005114a2 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005114a5 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005114a7 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005114a9 jae 0x511671 */ if (!CF_) goto L_00511671;
  /* 005114af fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 005114b2 mov eax, dword ptr [ebx + 0x268] */ { const u32 m_ = (u32)(ebx + 0x268u); eax = (u32)(M32(m_)); }
  /* 005114b8 fadd dword ptr [ebx + 0x1ec] */ { const u32 m_ = (u32)(ebx + 0x1ecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005114be mov ecx, dword ptr [eax + esi + 0x44] */ { const u32 m_ = (u32)(eax + esi + 0x44u); ecx = (u32)(M32(m_)); }
  /* 005114c2 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005114c4 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005114c6 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005114c9 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 005114cc fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 005114cf fadd dword ptr [ebx + 0x1f0] */ { const u32 m_ = (u32)(ebx + 0x1f0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005114d5 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005114d8 je 0x51163d */ if (ZF_) goto L_0051163d;
  /* 005114de mov esi, dword ptr [ebx + 0x1e0] */ { const u32 m_ = (u32)(ebx + 0x1e0u); esi = (u32)(M32(m_)); }
  /* 005114e4 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005114e6 jl 0x511523 */ if (LT_) goto L_00511523;
  /* 005114e8 mov eax, dword ptr [ebx + 0x268] */ { const u32 m_ = (u32)(ebx + 0x268u); eax = (u32)(M32(m_)); }
  /* 005114ee test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005114f0 je 0x51150b */ if (ZF_) goto L_0051150b;
  /* 005114f2 mov ecx, dword ptr [ebx + 0x26c] */ { const u32 m_ = (u32)(ebx + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 005114f8 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005114fa mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 005114ff imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511501 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00511504 mov eax, edx */ { eax = (u32)(edx); }
  /* 00511506 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00511509 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0051150b:;
  /* 0051150b cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051150d jge 0x511523 */ if (!LT_) goto L_00511523;
  /* 0051150f mov ecx, dword ptr [ebx + 0x1dc] */ { const u32 m_ = (u32)(ebx + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 00511515 imul ecx, dword ptr [ebx + 0x1d8] */ { const u32 m_ = (u32)(ebx + 0x1d8u); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0051151c mov eax, esi */ { eax = (u32)(esi); }
  /* 0051151e cdq */ edx = (u32)((s32)eax >> 31);
  /* 0051151f idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x51151fu); eax = q_; edx = r_; }
  /* 00511521 jmp 0x511525 */ goto L_00511525;
L_00511523:;
  /* 00511523 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00511525:;
  /* 00511525 mov esi, dword ptr [ebx + 0x1dc] */ { const u32 m_ = (u32)(ebx + 0x1dcu); esi = (u32)(M32(m_)); }
  /* 0051152b imul eax, esi */ { s64 p_ = (s64)(s32)eax * (s64)(s32)esi; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0051152e imul eax, dword ptr [ebx + 0x1d8] */ { const u32 m_ = (u32)(ebx + 0x1d8u); s64 p_ = (s64)(s32)eax * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511535 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511537 jl 0x51163d */ if (LT_) goto L_0051163d;
  /* 0051153d mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0051153f call 0x50e5c0 */ esp -= 4; M32(esp) = 0x511544u; SAVEALL; F_0050e5c0(c); ABI_CHECK(0x50e5c0u, 0x51153fu); RETCHK(0x511544u, 0x51153fu); LOADALL;
  /* 00511544 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511546 jg 0x51163d */ if (!(ZF_|LT_)) goto L_0051163d;
  /* 0051154c mov ebx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ebx = (u32)(M32(m_)); }
  /* 0051154f mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 00511552 lea edi, [ebp - 0x70] */ edi = (u32)((u32)(ebp + 0xffffff90u));
  /* 00511555 call 0x50e640 */ esp -= 4; M32(esp) = 0x51155au; SAVEALL; F_0050e640(c); ABI_CHECK(0x50e640u, 0x511555u); RETCHK(0x51155au, 0x511555u); LOADALL;
  /* 0051155a mov eax, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); eax = (u32)(M32(m_)); }
  /* 0051155d mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00511560 mov edx, dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); edx = (u32)(M32(m_)); }
  /* 00511563 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 00511566 mov al, byte ptr [ecx + 0x68] */ { const u32 m_ = (u32)(ecx + 0x68u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00511569 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051156b mov dword ptr [ebp - 0x48], edx */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(edx); }
  /* 0051156e je 0x5115a2 */ if (ZF_) goto L_005115a2;
  /* 00511570 mov ebx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ebx = (u32)(M32(m_)); }
  /* 00511573 mov edi, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edi = (u32)(M32(m_)); }
  /* 00511576 imul esi, ebx */ { s64 p_ = (s64)(s32)esi * (s64)(s32)ebx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511579 mov al, 0xff */ { eax = (eax & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 0051157b add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051157d mov edi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edi = (u32)(M32(m_)); }
  /* 00511580 mov edx, dword ptr [edi + 0x25c] */ { const u32 m_ = (u32)(edi + 0x25cu); edx = (u32)(M32(m_)); }
  /* 00511586 mov byte ptr [ebp - 0x1d], al */ { const u32 m_ = (u32)(ebp + 0xffffffe3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00511589 mov byte ptr [ebp - 0x20], al */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0051158c mov byte ptr [ebp - 0x1f], al */ { const u32 m_ = (u32)(ebp + 0xffffffe1u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0051158f mov byte ptr [ebp - 0x1e], al */ { const u32 m_ = (u32)(ebp + 0xffffffe2u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00511592 mov esi, dword ptr [edx + esi*4] */ { const u32 m_ = (u32)(edx + esi * 4u); esi = (u32)(M32(m_)); }
  /* 00511595 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00511597 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0051159a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051159b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0051159d call dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5115a0u; SAVEALL; call_ind(c, t_); RETCHK(0x5115a0u, 0x51159du); LOADALL; }
  /* 005115a0 jmp 0x5115d6 */ goto L_005115d6;
L_005115a2:;
  /* 005115a2 imul esi, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); s64 p_ = (s64)(s32)esi * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005115a6 add esi, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005115a9 mov edx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edx = (u32)(M32(m_)); }
  /* 005115ac mov eax, dword ptr [edx + 0x25c] */ { const u32 m_ = (u32)(edx + 0x25cu); eax = (u32)(M32(m_)); }
  /* 005115b2 mov byte ptr [ebp - 0x3d], 0xff */ { const u32 m_ = (u32)(ebp + 0xffffffc3u); M8(m_) = (u8)(0xffu); }
  /* 005115b6 mov byte ptr [ebp - 0x40], 0x64 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)(0x64u); }
  /* 005115ba mov byte ptr [ebp - 0x3f], 0x8c */ { const u32 m_ = (u32)(ebp + 0xffffffc1u); M8(m_) = (u8)(0x8cu); }
  /* 005115be mov byte ptr [ebp - 0x3e], 0xa0 */ { const u32 m_ = (u32)(ebp + 0xffffffc2u); M8(m_) = (u8)(0xa0u); }
  /* 005115c2 mov esi, dword ptr [eax + esi*4] */ { const u32 m_ = (u32)(eax + esi * 4u); esi = (u32)(M32(m_)); }
  /* 005115c5 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005115c7 lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 005115ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005115cb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005115cd call dword ptr [edx + 0x60] */ { const u32 m_ = (u32)(edx + 0x60u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5115d0u; SAVEALL; call_ind(c, t_); RETCHK(0x5115d0u, 0x5115cdu); LOADALL; }
  /* 005115d0 mov ebx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ebx = (u32)(M32(m_)); }
  /* 005115d3 mov edi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edi = (u32)(M32(m_)); }
L_005115d6:;
  /* 005115d6 mov ecx, dword ptr [edi + 0x1dc] */ { const u32 m_ = (u32)(edi + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 005115dc mov esi, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); esi = (u32)(M32(m_)); }
  /* 005115df imul ecx, ebx */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)ebx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005115e2 mov edx, dword ptr [edi + 0x25c] */ { const u32 m_ = (u32)(edi + 0x25cu); edx = (u32)(M32(m_)); }
  /* 005115e8 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005115ea mov ecx, dword ptr [edx + ecx*4] */ { const u32 m_ = (u32)(edx + ecx * 4u); ecx = (u32)(M32(m_)); }
  /* 005115ed mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005115ef lea edx, [ebp - 0x48] */ edx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 005115f2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005115f3 call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5115f6u; SAVEALL; call_ind(c, t_); RETCHK(0x5115f6u, 0x5115f3u); LOADALL; }
  /* 005115f6 mov ecx, dword ptr [edi + 0x1dc] */ { const u32 m_ = (u32)(edi + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 005115fc mov edx, dword ptr [edi + 0x25c] */ { const u32 m_ = (u32)(edi + 0x25cu); edx = (u32)(M32(m_)); }
  /* 00511602 imul ecx, ebx */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)ebx; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511605 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00511608 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051160a mov esi, dword ptr [edx + ecx*4] */ { const u32 m_ = (u32)(edx + ecx * 4u); esi = (u32)(M32(m_)); }
  /* 0051160d add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00511610 call 0x5224b0 */ esp -= 4; M32(esp) = 0x511615u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x511610u); RETCHK(0x511615u, 0x511610u); LOADALL;
  /* 00511615 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 00511618 mov ecx, dword ptr [eax + 0x1dc] */ { const u32 m_ = (u32)(eax + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 0051161e imul ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); s64 p_ = (s64)(s32)ecx * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511622 mov esi, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); esi = (u32)(M32(m_)); }
  /* 00511625 mov edx, dword ptr [eax + 0x25c] */ { const u32 m_ = (u32)(eax + 0x25cu); edx = (u32)(M32(m_)); }
  /* 0051162b add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051162d mov ecx, dword ptr [edx + ecx*4] */ { const u32 m_ = (u32)(edx + ecx * 4u); ecx = (u32)(M32(m_)); }
  /* 00511630 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00511632 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00511634 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x511637u; SAVEALL; call_ind(c, t_); RETCHK(0x511637u, 0x511634u); LOADALL; }
  /* 00511637 mov ebx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ebx = (u32)(M32(m_)); }
  /* 0051163a mov edi, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edi = (u32)(M32(m_)); }
L_0051163d:;
  /* 0051163d fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00511640 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 00511643 fadd dword ptr [ebx + 0x1e4] */ { const u32 m_ = (u32)(ebx + 0x1e4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00511649 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 0051164c mov ecx, dword ptr [ebx + 0x1dc] */ { const u32 m_ = (u32)(ebx + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 00511652 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00511653 fadd dword ptr [ebx + 0x1ec] */ { const u32 m_ = (u32)(ebx + 0x1ecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00511659 add esi, 0x6c */ { u32 a_ = esi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051165c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0051165d cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051165f fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00511662 mov dword ptr [ebp - 0x2c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(edi); }
  /* 00511665 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00511668 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 0051166b jl 0x51147a */ if (LT_) goto L_0051147a;
L_00511671:;
  /* 00511671 fld dword ptr [ebx + 0x1f0] */ { const u32 m_ = (u32)(ebx + 0x1f0u); FPUSH((double)MF32(m_)); }
  /* 00511677 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0051167a fadd dword ptr [ebx + 0x1e8] */ { const u32 m_ = (u32)(ebx + 0x1e8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00511680 mov ecx, dword ptr [ebx + 0x1d8] */ { const u32 m_ = (u32)(ebx + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 00511686 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00511687 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511689 fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0051168c mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 0051168f fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00511692 jl 0x511420 */ if (LT_) goto L_00511420;
L_00511698:;
  /* 00511698 mov eax, dword ptr [ebx + 0x200] */ { const u32 m_ = (u32)(ebx + 0x200u); eax = (u32)(M32(m_)); }
  /* 0051169e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005116a0 jne 0x5116b4 */ if (!ZF_) goto L_005116b4;
  /* 005116a2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005116a4 push 0x6517f0 */ { u32 v_ = 0x6517f0u; esp -= 4; M32(esp) = v_; }
L_005116a9:;
  /* 005116a9 lea eax, [ebx + 0x1fc] */ eax = (u32)((u32)(ebx + 0x1fcu));
  /* 005116af call 0x529310 */ esp -= 4; M32(esp) = 0x5116b4u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x5116afu); RETCHK(0x5116b4u, 0x5116afu); LOADALL;
L_005116b4:;
  /* 005116b4 mov al, byte ptr [ebx + 0x319] */ { const u32 m_ = (u32)(ebx + 0x319u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005116ba test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005116bc je 0x511793 */ if (ZF_) goto L_00511793;
  /* 005116c2 mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 005116c5 mov ebx, dword ptr [ebx + 0x1e0] */ { const u32 m_ = (u32)(ebx + 0x1e0u); ebx = (u32)(M32(m_)); }
  /* 005116cb lea edi, [ebp - 0x14] */ edi = (u32)((u32)(ebp + 0xffffffecu));
  /* 005116ce mov eax, esi */ { eax = (u32)(esi); }
  /* 005116d0 call 0x50e640 */ esp -= 4; M32(esp) = 0x5116d5u; SAVEALL; F_0050e640(c); ABI_CHECK(0x50e640u, 0x5116d0u); RETCHK(0x5116d5u, 0x5116d0u); LOADALL;
  /* 005116d5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005116d7 je 0x511818 */ if (ZF_) goto L_00511818;
  /* 005116dd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005116de mov esi, edi */ { esi = (u32)(edi); }
  /* 005116e0 call 0x52cf90 */ esp -= 4; M32(esp) = 0x5116e5u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x5116e0u); RETCHK(0x5116e5u, 0x5116e0u); LOADALL;
  /* 005116e5 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 005116e8 fsub dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005116ee mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 005116f1 lea ecx, [eax + 0x274] */ ecx = (u32)((u32)(eax + 0x274u));
  /* 005116f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005116fa fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005116fd add eax, 0x1fc */ { u32 a_ = eax, b_ = 0x1fcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00511702 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00511705 fsub dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051170b fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051170e fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00511711 fadd dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00511717 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051171a fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0051171d fadd dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00511723 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00511726 call 0x5267f0 */ esp -= 4; M32(esp) = 0x51172bu; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x511726u); RETCHK(0x51172bu, 0x511726u); LOADALL;
  /* 0051172b fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0051172e fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00511731 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00511737 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00511739 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051173c je 0x511746 */ if (ZF_) goto L_00511746;
  /* 0051173e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00511740 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00511743 fsub dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00511746:;
  /* 00511746 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00511749 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 0051174c fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051174f fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00511755 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00511757 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051175a je 0x511764 */ if (ZF_) goto L_00511764;
  /* 0051175c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051175e fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00511761 fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00511764:;
  /* 00511764 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 00511767 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051176a mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0051176d push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00511772 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00511777 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00511779 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051177b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051177c mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 0051177f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511780 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00511783 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00511784 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511785 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00511787 call 0x526a10 */ esp -= 4; M32(esp) = 0x51178cu; SAVEALL; F_00526a10(c); ABI_CHECK(0x526a10u, 0x511787u); RETCHK(0x51178cu, 0x511787u); LOADALL;
  /* 0051178c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051178d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051178e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051178f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00511791 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00511792 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00511793:;
  /* 00511793 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00511794 call 0x508500 */ esp -= 4; M32(esp) = 0x511799u; SAVEALL; F_00508500(c); ABI_CHECK(0x508500u, 0x511794u); RETCHK(0x511799u, 0x511794u); LOADALL;
  /* 00511799 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051179b je 0x511818 */ if (ZF_) goto L_00511818;
  /* 0051179d mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 005117a0 mov ebx, dword ptr [ebx + 0x1e0] */ { const u32 m_ = (u32)(ebx + 0x1e0u); ebx = (u32)(M32(m_)); }
  /* 005117a6 lea edi, [ebp - 0x14] */ edi = (u32)((u32)(ebp + 0xffffffecu));
  /* 005117a9 mov eax, esi */ { eax = (u32)(esi); }
  /* 005117ab call 0x50e640 */ esp -= 4; M32(esp) = 0x5117b0u; SAVEALL; F_0050e640(c); ABI_CHECK(0x50e640u, 0x5117abu); RETCHK(0x5117b0u, 0x5117abu); LOADALL;
  /* 005117b0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005117b2 je 0x511818 */ if (ZF_) goto L_00511818;
  /* 005117b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005117b5 mov esi, edi */ { esi = (u32)(edi); }
  /* 005117b7 call 0x52cf90 */ esp -= 4; M32(esp) = 0x5117bcu; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x5117b7u); RETCHK(0x5117bcu, 0x5117b7u); LOADALL;
  /* 005117bc fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 005117bf fsub dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005117c5 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 005117c8 lea ecx, [eax + 0x274] */ ecx = (u32)((u32)(eax + 0x274u));
  /* 005117ce add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005117d1 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005117d4 add eax, 0x1fc */ { u32 a_ = eax, b_ = 0x1fcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005117d9 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 005117dc fsub dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005117e2 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005117e5 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 005117e8 fadd dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005117ee fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005117f1 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 005117f4 fadd dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005117fa fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005117fd call 0x5267f0 */ esp -= 4; M32(esp) = 0x511802u; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x5117fdu); RETCHK(0x511802u, 0x5117fdu); LOADALL;
  /* 00511802 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00511807 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0051180c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051180e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00511810 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511811 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00511813 call 0x5050e0 */ esp -= 4; M32(esp) = 0x511818u; SAVEALL; F_005050e0(c); ABI_CHECK(0x5050e0u, 0x511813u); RETCHK(0x511818u, 0x511813u); LOADALL;
L_00511818:;
  /* 00511818 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00511819 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051181a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051181b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051181d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051181e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00511820(CPU *c) {
  NATIVE_HOOK(0x511820u) REGS; LOADALL;
L_00511820:;
  /* 00511820 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00511821 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00511823 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00511825 jl 0x51185f */ if (LT_) goto L_0051185f;
  /* 00511827 mov eax, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); eax = (u32)(M32(m_)); }
  /* 0051182d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051182f je 0x51185f */ if (ZF_) goto L_0051185f;
  /* 00511831 mov edx, dword ptr [esi + 0x26c] */ { const u32 m_ = (u32)(esi + 0x26cu); edx = (u32)(M32(m_)); }
  /* 00511837 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00511839 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0051183e imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511840 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00511843 mov eax, edx */ { eax = (u32)(edx); }
  /* 00511845 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00511848 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051184a cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051184c jae 0x51185f */ if (!CF_) goto L_0051185f;
  /* 0051184e mov eax, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); eax = (u32)(M32(m_)); }
  /* 00511854 imul ecx, ecx, 0x6c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511857 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00511859 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051185c mov dword ptr [ecx + 0x2c], eax */ { const u32 m_ = (u32)(ecx + 0x2cu); M32(m_) = (u32)(eax); }
L_0051185f:;
  /* 0051185f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00511860 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00511870(CPU *c) {
  NATIVE_HOOK(0x511870u) REGS; LOADALL;
L_00511870:;
  /* 00511870 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00511871 mov esi, eax */ { esi = (u32)(eax); }
  /* 00511873 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00511875 jl 0x5118ae */ if (LT_) goto L_005118ae;
  /* 00511877 mov eax, dword ptr [edi + 0x268] */ { const u32 m_ = (u32)(edi + 0x268u); eax = (u32)(M32(m_)); }
  /* 0051187d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051187f je 0x5118ae */ if (ZF_) goto L_005118ae;
  /* 00511881 mov ecx, dword ptr [edi + 0x26c] */ { const u32 m_ = (u32)(edi + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 00511887 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00511889 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0051188e imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511890 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00511893 mov eax, edx */ { eax = (u32)(edx); }
  /* 00511895 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00511898 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051189a cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051189c jae 0x5118ae */ if (!CF_) goto L_005118ae;
  /* 0051189e mov eax, dword ptr [edi + 0x268] */ { const u32 m_ = (u32)(edi + 0x268u); eax = (u32)(M32(m_)); }
  /* 005118a4 imul esi, esi, 0x6c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005118a7 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005118a9 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005118ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005118ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005118ae:;
  /* 005118ae or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005118b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005118b2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005118c0(CPU *c) {
  NATIVE_HOOK(0x5118c0u) REGS; LOADALL;
L_005118c0:;
  /* 005118c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005118c1 mov esi, eax */ { esi = (u32)(eax); }
  /* 005118c3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005118c5 jl 0x51190c */ if (LT_) goto L_0051190c;
  /* 005118c7 mov eax, dword ptr [edi + 0x268] */ { const u32 m_ = (u32)(edi + 0x268u); eax = (u32)(M32(m_)); }
  /* 005118cd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005118cf je 0x51190c */ if (ZF_) goto L_0051190c;
  /* 005118d1 mov ecx, dword ptr [edi + 0x26c] */ { const u32 m_ = (u32)(edi + 0x26cu); ecx = (u32)(M32(m_)); }
  /* 005118d7 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005118d9 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 005118de imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005118e0 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005118e3 mov eax, edx */ { eax = (u32)(edx); }
  /* 005118e5 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005118e8 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005118ea cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005118ec jae 0x51190c */ if (!CF_) goto L_0051190c;
  /* 005118ee mov ecx, dword ptr [edi + 0x268] */ { const u32 m_ = (u32)(edi + 0x268u); ecx = (u32)(M32(m_)); }
  /* 005118f4 imul esi, esi, 0x6c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005118f7 mov eax, dword ptr [esi + ecx + 0x64] */ { const u32 m_ = (u32)(esi + ecx + 0x64u); eax = (u32)(M32(m_)); }
  /* 005118fb add esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005118fd cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511900 jb 0x511907 */ if (CF_) goto L_00511907;
  /* 00511902 mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 00511905 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00511906 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00511907:;
  /* 00511907 lea eax, [esi + 0x50] */ eax = (u32)((u32)(esi + 0x50u));
  /* 0051190a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051190b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051190c:;
  /* 0051190c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051190e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051190f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00511910(CPU *c) {
  NATIVE_HOOK(0x511910u) REGS; LOADALL;
L_00511910:;
  /* 00511910 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00511912 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00511913 mov esi, eax */ { esi = (u32)(eax); }
  /* 00511915 jl 0x511963 */ if (LT_) goto L_00511963;
  /* 00511917 mov eax, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); eax = (u32)(M32(m_)); }
  /* 0051191d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051191f je 0x511963 */ if (ZF_) goto L_00511963;
  /* 00511921 mov edx, dword ptr [esi + 0x26c] */ { const u32 m_ = (u32)(esi + 0x26cu); edx = (u32)(M32(m_)); }
  /* 00511927 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00511929 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 0051192e imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511930 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00511933 mov eax, edx */ { eax = (u32)(edx); }
  /* 00511935 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00511938 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051193a cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051193c jae 0x511963 */ if (!CF_) goto L_00511963;
  /* 0051193e mov eax, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); eax = (u32)(M32(m_)); }
  /* 00511944 imul ecx, ecx, 0x6c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511947 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00511949 mov eax, edi */ { eax = (u32)(edi); }
  /* 0051194b lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 0051194e mov edi, edi */ { edi = (u32)(edi); }
L_00511950:;
  /* 00511950 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00511952 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00511953 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00511955 jne 0x511950 */ if (!ZF_) goto L_00511950;
  /* 00511957 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00511959 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051195a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051195b add ecx, 0x4c */ { u32 a_ = ecx, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0051195e call 0x404420 */ esp -= 4; M32(esp) = 0x511963u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x51195eu); RETCHK(0x511963u, 0x51195eu); LOADALL;
L_00511963:;
  /* 00511963 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00511964 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00511970(CPU *c) {
  NATIVE_HOOK(0x511970u) REGS; LOADALL;
L_00511970:;
  /* 00511970 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00511971 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00511973 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00511976 mov eax, dword ptr [ecx + 0x268] */ { const u32 m_ = (u32)(ecx + 0x268u); eax = (u32)(M32(m_)); }
  /* 0051197c imul edx, edx, 0x6c */ { s64 p_ = (s64)(s32)edx * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0051197f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00511980 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00511983 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00511985 mov eax, esi */ { eax = (u32)(esi); }
  /* 00511987 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00511988 lea edi, [eax + 1] */ edi = (u32)((u32)(eax + 0x1u));
  /* 0051198b jmp 0x511990 */ goto L_00511990;
L_00511990:;
  /* 00511990 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00511992 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00511993 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00511995 jne 0x511990 */ if (!ZF_) goto L_00511990;
  /* 00511997 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00511999 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051199a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051199b lea ecx, [edx + 0x30] */ ecx = (u32)((u32)(edx + 0x30u));
  /* 0051199e call 0x404420 */ esp -= 4; M32(esp) = 0x5119a3u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x51199eu); RETCHK(0x5119a3u, 0x51199eu); LOADALL;
  /* 005119a3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005119a4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005119a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005119a6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005119b0(CPU *c) {
  NATIVE_HOOK(0x5119b0u) REGS; LOADALL;
L_005119b0:;
  /* 005119b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005119b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005119b3 fld dword ptr [ecx + 0x30c] */ { const u32 m_ = (u32)(ecx + 0x30cu); FPUSH((double)MF32(m_)); }
  /* 005119b9 fcomp dword ptr [0x656e58] */ { const u32 m_ = (u32)(0x656e58u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005119bf fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005119c1 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005119c4 jne 0x511a06 */ if (!ZF_) goto L_00511a06;
  /* 005119c6 mov eax, dword ptr [ecx + 0x310] */ { const u32 m_ = (u32)(ecx + 0x310u); eax = (u32)(M32(m_)); }
  /* 005119cc xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005119ce cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005119d1 mov dword ptr [ecx + 0x30c], edx */ { const u32 m_ = (u32)(ecx + 0x30cu); M32(m_) = (u32)(edx); }
  /* 005119d7 jge 0x5119f6 */ if (!LT_) goto L_005119f6;
  /* 005119d9 fld dword ptr [ecx + 0x308] */ { const u32 m_ = (u32)(ecx + 0x308u); FPUSH((double)MF32(m_)); }
  /* 005119df inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005119e0 fadd dword ptr [0x656e54] */ { const u32 m_ = (u32)(0x656e54u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005119e6 mov dword ptr [ecx + 0x310], eax */ { const u32 m_ = (u32)(ecx + 0x310u); M32(m_) = (u32)(eax); }
  /* 005119ec fstp dword ptr [ecx + 0x308] */ { const u32 m_ = (u32)(ecx + 0x308u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005119f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005119f3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005119f6:;
  /* 005119f6 mov dword ptr [ecx + 0x308], edx */ { const u32 m_ = (u32)(ecx + 0x308u); M32(m_) = (u32)(edx); }
  /* 005119fc mov dword ptr [ecx + 0x310], edx */ { const u32 m_ = (u32)(ecx + 0x310u); M32(m_) = (u32)(edx); }
  /* 00511a02 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00511a03 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00511a06:;
  /* 00511a06 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00511a09 fadd dword ptr [ecx + 0x30c] */ { const u32 m_ = (u32)(ecx + 0x30cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00511a0f fstp dword ptr [ecx + 0x30c] */ { const u32 m_ = (u32)(ecx + 0x30cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00511a15 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00511a16 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00511a20(CPU *c) {
  NATIVE_HOOK(0x511a20u) REGS; LOADALL;
L_00511a20:;
  /* 00511a20 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 00511a23 mov dword ptr [ecx + 0x1cc], eax */ { const u32 m_ = (u32)(ecx + 0x1ccu); M32(m_) = (u32)(eax); }
  /* 00511a29 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00511a30(CPU *c) {
  NATIVE_HOOK(0x511a30u) REGS; LOADALL;
L_00511a30:;
  /* 00511a30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00511a31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00511a33 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00511a36 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00511a39 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00511a3c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511a3d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511a3e lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00511a41 call 0x52ce60 */ esp -= 4; M32(esp) = 0x511a46u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x511a41u); RETCHK(0x511a46u, 0x511a41u); LOADALL;
  /* 00511a46 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00511a49 add ecx, 0x1d0 */ { u32 a_ = ecx, b_ = 0x1d0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00511a4f call 0x52ce90 */ esp -= 4; M32(esp) = 0x511a54u; SAVEALL; F_0052ce90(c); ABI_CHECK(0x52ce90u, 0x511a4fu); RETCHK(0x511a54u, 0x511a4fu); LOADALL;
  /* 00511a54 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00511a56 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00511a57 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00511a60(CPU *c) {
  NATIVE_HOOK(0x511a60u) REGS; LOADALL;
L_00511a60:;
  /* 00511a60 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00511a62 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00511a64 call dword ptr [eax + 0x128] */ { const u32 m_ = (u32)(eax + 0x128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x511a6au; SAVEALL; call_ind(c, t_); RETCHK(0x511a6au, 0x511a64u); LOADALL; }
  /* 00511a6a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511a6d je 0x511a87 */ if (ZF_) goto L_00511a87;
  /* 00511a6f mov edx, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); edx = (u32)(M32(m_)); }
  /* 00511a75 imul eax, eax, 0x6c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511a78 mov ecx, dword ptr [eax + edx + 0x2c] */ { const u32 m_ = (u32)(eax + edx + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00511a7c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00511a7e or ecx, 0x400 */ { u32 a_ = ecx, b_ = 0x400u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00511a84 mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
L_00511a87:;
  /* 00511a87 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00511a90(CPU *c) {
  NATIVE_HOOK(0x511a90u) REGS; LOADALL;
L_00511a90:;
  /* 00511a90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00511a91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00511a93 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00511a96 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00511a97 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00511a99 mov al, byte ptr [esi + 0x318] */ { const u32 m_ = (u32)(esi + 0x318u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00511a9f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00511aa1 jne 0x511b04 */ if (!ZF_) goto L_00511b04;
  /* 00511aa3 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00511aa6 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00511aa8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511aa9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00511aab call dword ptr [eax + 0x134] */ { const u32 m_ = (u32)(eax + 0x134u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x511ab1u; SAVEALL; call_ind(c, t_); RETCHK(0x511ab1u, 0x511aabu); LOADALL; }
  /* 00511ab1 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511ab4 je 0x511b04 */ if (ZF_) goto L_00511b04;
  /* 00511ab6 mov ecx, dword ptr [esi + 0x268] */ { const u32 m_ = (u32)(esi + 0x268u); ecx = (u32)(M32(m_)); }
  /* 00511abc mov edx, eax */ { edx = (u32)(eax); }
  /* 00511abe imul edx, edx, 0x6c */ { s64 p_ = (s64)(s32)edx * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511ac1 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00511ac3 mov dl, byte ptr [ecx + 0x68] */ { const u32 m_ = (u32)(ecx + 0x68u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00511ac6 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00511ac8 je 0x511b04 */ if (ZF_) goto L_00511b04;
  /* 00511aca mov dl, byte ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00511acd mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00511ad0 test dl, 0x20 */ { u32 a_ = (edx & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00511ad3 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 00511ad6 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00511ad9 je 0x511af8 */ if (ZF_) goto L_00511af8;
  /* 00511adb mov dword ptr [ebp - 0x18], 0x12 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x12u); }
  /* 00511ae2 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00511ae5 mov dword ptr [ebp - 0xc], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x1u); }
  /* 00511aec call 0x508540 */ esp -= 4; M32(esp) = 0x511af1u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x511aecu); RETCHK(0x511af1u, 0x511aecu); LOADALL;
  /* 00511af1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00511af2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00511af4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00511af5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00511af8:;
  /* 00511af8 mov dword ptr [ebp - 0x18], 0x19 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x19u); }
  /* 00511aff call 0x508540 */ esp -= 4; M32(esp) = 0x511b04u; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x511affu); RETCHK(0x511b04u, 0x511affu); LOADALL;
L_00511b04:;
  /* 00511b04 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00511b05 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00511b07 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00511b08 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00511b50(CPU *c) {
  NATIVE_HOOK(0x511b50u) REGS; LOADALL;
L_00511b50:;
  /* 00511b50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00511b51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00511b53 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511b54 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00511b55 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00511b56 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00511b57 mov edi, eax */ { edi = (u32)(eax); }
  /* 00511b59 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 00511b5c test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00511b5e jne 0x511b64 */ if (!ZF_) goto L_00511b64;
  /* 00511b60 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00511b62 jmp 0x511b7a */ goto L_00511b7a;
L_00511b64:;
  /* 00511b64 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00511b67 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00511b69 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 00511b6e imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511b70 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00511b73 mov esi, edx */ { esi = (u32)(edx); }
  /* 00511b75 shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00511b78 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_00511b7a:;
  /* 00511b7a test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00511b7c je 0x511bba */ if (ZF_) goto L_00511bba;
  /* 00511b7e mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 00511b81 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00511b83 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 00511b88 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511b8a sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00511b8d mov eax, edx */ { eax = (u32)(edx); }
  /* 00511b8f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00511b92 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00511b94 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511b96 jae 0x511bba */ if (!CF_) goto L_00511bba;
  /* 00511b98 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00511b9b mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 00511b9e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511b9f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00511ba0 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 00511ba5 call 0x512220 */ esp -= 4; M32(esp) = 0x511baau; SAVEALL; F_00512220(c); ABI_CHECK(0x512220u, 0x511ba5u); RETCHK(0x511baau, 0x511ba5u); LOADALL;
  /* 00511baa add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00511bad add esi, 0x6c */ { u32 a_ = esi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00511bb0 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 00511bb3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00511bb4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00511bb5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00511bb6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00511bb8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00511bb9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00511bba:;
  /* 00511bba mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00511bbd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511bbe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511bbf lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00511bc2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511bc3 call 0x511ca0 */ esp -= 4; M32(esp) = 0x511bc8u; SAVEALL; F_00511ca0(c); ABI_CHECK(0x511ca0u, 0x511bc3u); RETCHK(0x511bc8u, 0x511bc3u); LOADALL;
  /* 00511bc8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00511bc9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00511bca pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00511bcb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00511bcd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00511bce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00511bd0(CPU *c) {
  NATIVE_HOOK(0x511bd0u) REGS; LOADALL;
L_00511bd0:;
  /* 00511bd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00511bd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00511bd3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00511bd6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00511bd7 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00511bda push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00511bdb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511bdc mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00511bdf lea ecx, [eax + 0x6c] */ ecx = (u32)((u32)(eax + 0x6cu));
  /* 00511be2 call 0x5121b0 */ esp -= 4; M32(esp) = 0x511be7u; SAVEALL; F_005121b0(c); ABI_CHECK(0x5121b0u, 0x511be2u); RETCHK(0x511be7u, 0x511be2u); LOADALL;
  /* 00511be7 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00511bea lea esi, [ebx - 0x6c] */ esi = (u32)((u32)(ebx + 0xffffff94u));
  /* 00511bed add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00511bf0 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511bf2 je 0x511c00 */ if (ZF_) goto L_00511c00;
L_00511bf4:;
  /* 00511bf4 call 0x50f600 */ esp -= 4; M32(esp) = 0x511bf9u; SAVEALL; F_0050f600(c); ABI_CHECK(0x50f600u, 0x511bf4u); RETCHK(0x511bf9u, 0x511bf4u); LOADALL;
  /* 00511bf9 add esi, 0x6c */ { u32 a_ = esi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00511bfc cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511bfe jne 0x511bf4 */ if (!ZF_) goto L_00511bf4;
L_00511c00:;
  /* 00511c00 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00511c03 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00511c06 add eax, -0x6c */ { u32 a_ = eax, b_ = 0xffffff94u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00511c09 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00511c0c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00511c0f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00511c10 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00511c12 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00511c13 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00511c14 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00511c20(CPU *c) {
  NATIVE_HOOK(0x511c20u) REGS; LOADALL;
L_00511c20:;
  /* 00511c20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00511c21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00511c23 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00511c25 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 00511c2a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00511c30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511c31 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00511c38 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511c39 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00511c3a push 0x511d20 */ { u32 v_ = 0x511d20u; esp -= 4; M32(esp) = v_; }
  /* 00511c3f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00511c42 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00511c44 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00511c46 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00511c49 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00511c4c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00511c4e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00511c4f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00511c52 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00511c59 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00511c5c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511c5d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00511c60 call 0x404140 */ esp -= 4; M32(esp) = 0x511c65u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x511c60u); RETCHK(0x511c65u, 0x511c60u); LOADALL;
  /* 00511c65 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00511c68 call 0x405c00 */ esp -= 4; M32(esp) = 0x511c6du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x511c68u); RETCHK(0x511c6du, 0x511c68u); LOADALL;
  /* 00511c6d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00511c6f call 0x405c80 */ esp -= 4; M32(esp) = 0x511c74u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x511c6fu); RETCHK(0x511c74u, 0x511c6fu); LOADALL;
  /* 00511c74 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511c78 jb 0x511c86 */ if (CF_) goto L_00511c86;
  /* 00511c7a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00511c7d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511c7e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x511c83u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x511c7eu); RETCHK(0x511c83u, 0x511c7eu); LOADALL;
  /* 00511c83 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00511c86:;
  /* 00511c86 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00511c89 mov eax, esi */ { eax = (u32)(esi); }
  /* 00511c8b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00511c92 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00511c93 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00511c95 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00511c96 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00511ca0(CPU *c) {
  NATIVE_HOOK(0x511ca0u) REGS; LOADALL;
L_00511ca0:;
  /* 00511ca0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00511ca1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00511ca3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00511ca4 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 00511ca7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00511ca8 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00511cab test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00511cad je 0x511cca */ if (ZF_) goto L_00511cca;
  /* 00511caf mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00511cb2 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00511cb4 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 00511cb9 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511cbb sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00511cbe mov eax, edx */ { eax = (u32)(edx); }
  /* 00511cc0 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00511cc3 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00511cc5 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 00511cc8 jne 0x511cce */ if (!ZF_) goto L_00511cce;
L_00511cca:;
  /* 00511cca xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00511ccc jmp 0x511ce3 */ goto L_00511ce3;
L_00511cce:;
  /* 00511cce mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00511cd0 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00511cd2 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 00511cd7 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511cd9 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00511cdc mov esi, edx */ { esi = (u32)(edx); }
  /* 00511cde shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00511ce1 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_00511ce3:;
  /* 00511ce3 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00511ce6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00511ce8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00511ce9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00511cea call 0x511d80 */ esp -= 4; M32(esp) = 0x511cefu; SAVEALL; F_00511d80(c); ABI_CHECK(0x511d80u, 0x511ceau); RETCHK(0x511cefu, 0x511ceau); LOADALL;
  /* 00511cef imul esi, esi, 0x6c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511cf2 add esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00511cf5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00511cf8 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 00511cfa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00511cfb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00511cfc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00511cfd ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00511d00(CPU *c) {
  NATIVE_HOOK(0x511d00u) REGS; LOADALL;
L_00511d00:;
  /* 00511d00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00511d01 mov esi, eax */ { esi = (u32)(eax); }
  /* 00511d03 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511d05 je 0x511d13 */ if (ZF_) goto L_00511d13;
L_00511d07:;
  /* 00511d07 call 0x50f600 */ esp -= 4; M32(esp) = 0x511d0cu; SAVEALL; F_0050f600(c); ABI_CHECK(0x50f600u, 0x511d07u); RETCHK(0x511d0cu, 0x511d07u); LOADALL;
  /* 00511d0c add esi, 0x6c */ { u32 a_ = esi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00511d0f cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511d11 jne 0x511d07 */ if (!ZF_) goto L_00511d07;
L_00511d13:;
  /* 00511d13 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00511d14 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00511d20(CPU *c) {
  NATIVE_HOOK(0x511d20u) REGS; LOADALL;
L_00511d20:;
  /* 00511d20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00511d21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00511d23 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00511d25 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 00511d2a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00511d30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511d31 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00511d38 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511d39 push 0x33c */ { u32 v_ = 0x33cu; esp -= 4; M32(esp) = v_; }
  /* 00511d3e call 0x5fe934 */ esp -= 4; M32(esp) = 0x511d43u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x511d3eu); RETCHK(0x511d43u, 0x511d3eu); LOADALL;
  /* 00511d43 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00511d46 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00511d49 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00511d4b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00511d52 je 0x511d6a */ if (ZF_) goto L_00511d6a;
  /* 00511d54 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00511d56 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511d57 call 0x50e780 */ esp -= 4; M32(esp) = 0x511d5cu; SAVEALL; F_0050e780(c); ABI_CHECK(0x50e780u, 0x511d57u); RETCHK(0x511d5cu, 0x511d57u); LOADALL;
  /* 00511d5c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00511d5f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00511d66 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00511d68 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00511d69 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00511d6a:;
  /* 00511d6a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00511d6d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00511d6f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00511d76 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00511d78 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00511d79 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00511d80(CPU *c) {
  NATIVE_HOOK(0x511d80u) REGS; LOADALL;
L_00511d80:;
  /* 00511d80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00511d81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00511d83 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00511d85 push 0x61ddf8 */ { u32 v_ = 0x61ddf8u; esp -= 4; M32(esp) = v_; }
  /* 00511d8a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00511d90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511d91 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00511d98 sub esp, 0x7c */ { u32 a_ = esp, b_ = 0x7cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00511d9b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00511da0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00511da1 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00511da4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00511da5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00511da8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00511da9 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00511dac lea eax, [ebp - 0x80] */ eax = (u32)((u32)(ebp + 0xffffff80u));
  /* 00511daf mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00511db2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511db3 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00511db5 call 0x512090 */ esp -= 4; M32(esp) = 0x511dbau; SAVEALL; F_00512090(c); ABI_CHECK(0x512090u, 0x511db5u); RETCHK(0x511dbau, 0x511db5u); LOADALL;
  /* 00511dba xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00511dbc mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00511dbf mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 00511dc2 cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511dc4 je 0x511ddc */ if (ZF_) goto L_00511ddc;
  /* 00511dc6 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00511dc9 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00511dcb mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 00511dd0 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511dd2 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00511dd5 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00511dd7 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00511dda add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00511ddc:;
  /* 00511ddc test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00511dde je 0x512061 */ if (ZF_) goto L_00512061;
  /* 00511de4 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00511de6 jne 0x511dec */ if (!ZF_) goto L_00511dec;
  /* 00511de8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00511dea jmp 0x511e02 */ goto L_00511e02;
L_00511dec:;
  /* 00511dec mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00511def sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00511df1 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 00511df6 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511df8 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00511dfb mov eax, edx */ { eax = (u32)(edx); }
  /* 00511dfd shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00511e00 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00511e02:;
  /* 00511e02 mov edx, 0x25ed097 */ { edx = (u32)(0x25ed097u); }
  /* 00511e07 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00511e09 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511e0b jae 0x511e12 */ if (!CF_) goto L_00511e12;
  /* 00511e0d call 0x49ac70 */ esp -= 4; M32(esp) = 0x511e12u; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x511e0du); RETCHK(0x511e12u, 0x511e0du); LOADALL;
L_00511e12:;
  /* 00511e12 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00511e14 jne 0x511e1a */ if (!ZF_) goto L_00511e1a;
  /* 00511e16 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00511e18 jmp 0x511e30 */ goto L_00511e30;
L_00511e1a:;
  /* 00511e1a mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00511e1d sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00511e1f mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 00511e24 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511e26 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00511e29 mov eax, edx */ { eax = (u32)(edx); }
  /* 00511e2b shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00511e2e add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00511e30:;
  /* 00511e30 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00511e32 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511e34 jae 0x511f6f */ if (!CF_) goto L_00511f6f;
  /* 00511e3a mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00511e3c shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00511e3e mov edx, 0x25ed097 */ { edx = (u32)(0x25ed097u); }
  /* 00511e43 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00511e45 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511e47 jae 0x511e4d */ if (!CF_) goto L_00511e4d;
  /* 00511e49 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00511e4b jmp 0x511e4f */ goto L_00511e4f;
L_00511e4d:;
  /* 00511e4d add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00511e4f:;
  /* 00511e4f test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00511e51 jne 0x511e57 */ if (!ZF_) goto L_00511e57;
  /* 00511e53 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00511e55 jmp 0x511e6d */ goto L_00511e6d;
L_00511e57:;
  /* 00511e57 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00511e5a sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00511e5c mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 00511e61 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511e63 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00511e66 mov eax, edx */ { eax = (u32)(edx); }
  /* 00511e68 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00511e6b add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00511e6d:;
  /* 00511e6d add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00511e6f cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511e71 jae 0x511e7e */ if (!CF_) goto L_00511e7e;
  /* 00511e73 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00511e75 call 0x4245c0 */ esp -= 4; M32(esp) = 0x511e7au; SAVEALL; F_004245c0(c); ABI_CHECK(0x4245c0u, 0x511e75u); RETCHK(0x511e7au, 0x511e75u); LOADALL;
  /* 00511e7a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00511e7c add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00511e7e:;
  /* 00511e7e imul ecx, ecx, 0x6c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511e81 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511e82 mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00511e85 call 0x5fe934 */ esp -= 4; M32(esp) = 0x511e8au; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x511e85u); RETCHK(0x511e8au, 0x511e85u); LOADALL;
  /* 00511e8a mov edi, eax */ { edi = (u32)(eax); }
  /* 00511e8c mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00511e90 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00511e93 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00511e96 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00511e99 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511e9a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00511e9b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00511e9c mov dword ptr [ebp - 0x84], edi */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(edi); }
  /* 00511ea2 mov dword ptr [ebp - 0x88], edi */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(edi); }
  /* 00511ea8 call 0x512320 */ esp -= 4; M32(esp) = 0x511eadu; SAVEALL; F_00512320(c); ABI_CHECK(0x512320u, 0x511ea8u); RETCHK(0x511eadu, 0x511ea8u); LOADALL;
  /* 00511ead mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00511eb0 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00511eb3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511eb4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511eb5 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00511eb8 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00511eba mov dword ptr [ebp - 0x88], eax */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(eax); }
  /* 00511ec0 call 0x512220 */ esp -= 4; M32(esp) = 0x511ec5u; SAVEALL; F_00512220(c); ABI_CHECK(0x512220u, 0x511ec0u); RETCHK(0x511ec5u, 0x511ec0u); LOADALL;
  /* 00511ec5 mov ecx, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); ecx = (u32)(M32(m_)); }
  /* 00511ecb mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00511ece mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00511ed0 imul edx, edx, 0x6c */ { s64 p_ = (s64)(s32)edx * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511ed3 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00511ed5 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00511ed8 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00511edb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00511edc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511edd mov dword ptr [ebp - 0x88], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(ecx); }
  /* 00511ee3 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00511ee6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511ee7 call 0x512320 */ esp -= 4; M32(esp) = 0x511eecu; SAVEALL; F_00512320(c); ABI_CHECK(0x512320u, 0x511ee7u); RETCHK(0x511eecu, 0x511ee7u); LOADALL;
  /* 00511eec mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00511eef add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00511ef2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00511ef4 jne 0x511efa */ if (!ZF_) goto L_00511efa;
  /* 00511ef6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00511ef8 jmp 0x511f10 */ goto L_00511f10;
L_00511efa:;
  /* 00511efa mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00511efd sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00511eff mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 00511f04 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511f06 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00511f09 mov eax, edx */ { eax = (u32)(edx); }
  /* 00511f0b shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00511f0e add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00511f10:;
  /* 00511f10 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00511f12 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00511f14 je 0x511f32 */ if (ZF_) goto L_00511f32;
  /* 00511f16 mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 00511f19 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00511f1b call 0x511d00 */ esp -= 4; M32(esp) = 0x511f20u; SAVEALL; F_00511d00(c); ABI_CHECK(0x511d00u, 0x511f1bu); RETCHK(0x511f20u, 0x511f1bu); LOADALL;
  /* 00511f20 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00511f23 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511f24 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x511f29u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x511f24u); RETCHK(0x511f29u, 0x511f24u); LOADALL;
  /* 00511f29 mov edi, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); edi = (u32)(M32(m_)); }
  /* 00511f2f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00511f32:;
  /* 00511f32 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00511f35 imul ebx, ebx, 0x6c */ { s64 p_ = (s64)(s32)ebx * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511f38 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00511f3a add ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00511f3c mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00511f3f mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00511f42 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 00511f45 jmp 0x512061 */ goto L_00512061;
L_00511f6f:;
  /* 00511f6f mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00511f72 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00511f75 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00511f77 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00511f79 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 00511f7e imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511f80 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00511f83 mov eax, edx */ { eax = (u32)(edx); }
  /* 00511f85 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00511f88 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00511f8a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00511f8c imul edi, edi, 0x6c */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511f8f cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511f91 mov dword ptr [ebp - 0x84], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(ecx); }
  /* 00511f97 jae 0x512029 */ if (!CF_) goto L_00512029;
  /* 00511f9d mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00511fa0 lea eax, [edi + edx] */ eax = (u32)((u32)(edi + edx));
  /* 00511fa3 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00511fa6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00511fa7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511fa8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511fa9 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00511fac call 0x512320 */ esp -= 4; M32(esp) = 0x511fb1u; SAVEALL; F_00512320(c); ABI_CHECK(0x512320u, 0x511facu); RETCHK(0x511fb1u, 0x511facu); LOADALL;
  /* 00511fb1 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 00511fb5 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00511fb8 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00511fbb mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00511fbd sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00511fbf mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 00511fc4 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511fc6 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00511fc9 mov eax, edx */ { eax = (u32)(edx); }
  /* 00511fcb shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00511fce add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00511fd0 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00511fd3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00511fd4 sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00511fd6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511fd7 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00511fda mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00511fdc call 0x512220 */ esp -= 4; M32(esp) = 0x511fe1u; SAVEALL; F_00512220(c); ABI_CHECK(0x512220u, 0x511fdcu); RETCHK(0x511fe1u, 0x511fdcu); LOADALL;
  /* 00511fe1 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00511fe8 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00511feb mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00511fee add ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00511ff0 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00511ff3 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00511ff5 sub esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00511ff7 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00511ffa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00511ffb lea edi, [ebp - 0x80] */ edi = (u32)((u32)(ebp + 0xffffff80u));
  /* 00511ffe call 0x512140 */ esp -= 4; M32(esp) = 0x512003u; SAVEALL; F_00512140(c); ABI_CHECK(0x512140u, 0x511ffeu); RETCHK(0x512003u, 0x511ffeu); LOADALL;
  /* 00512003 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00512006 jmp 0x512061 */ goto L_00512061;
L_00512029:;
  /* 00512029 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051202c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051202d mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0051202f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00512030 sub ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00512032 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00512033 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00512035 call 0x512320 */ esp -= 4; M32(esp) = 0x51203au; SAVEALL; F_00512320(c); ABI_CHECK(0x512320u, 0x512035u); RETCHK(0x51203au, 0x512035u); LOADALL;
  /* 0051203a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051203d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051203e mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00512041 mov eax, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); eax = (u32)(M32(m_)); }
  /* 00512047 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00512049 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0051204c call 0x5122b0 */ esp -= 4; M32(esp) = 0x512051u; SAVEALL; F_005122b0(c); ABI_CHECK(0x5122b0u, 0x51204cu); RETCHK(0x512051u, 0x51204cu); LOADALL;
  /* 00512051 add edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00512053 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00512054 lea edi, [ebp - 0x80] */ edi = (u32)((u32)(ebp + 0xffffff80u));
  /* 00512057 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00512059 call 0x512140 */ esp -= 4; M32(esp) = 0x51205eu; SAVEALL; F_00512140(c); ABI_CHECK(0x512140u, 0x512059u); RETCHK(0x51205eu, 0x512059u); LOADALL;
  /* 0051205e add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00512061:;
  /* 00512061 lea esi, [ebp - 0x80] */ esi = (u32)((u32)(ebp + 0xffffff80u));
  /* 00512064 call 0x50f600 */ esp -= 4; M32(esp) = 0x512069u; SAVEALL; F_0050f600(c); ABI_CHECK(0x50f600u, 0x512064u); RETCHK(0x512069u, 0x512064u); LOADALL;
  /* 00512069 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051206c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00512073 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00512076 call 0x61af31 */ esp -= 4; M32(esp) = 0x51207bu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x512076u); RETCHK(0x51207bu, 0x512076u); LOADALL;
  /* 0051207b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051207c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051207d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051207e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00512080 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00512081 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00511f4a(CPU *c) {
  NATIVE_HOOK(0x511f4au) REGS; LOADALL;
L_00511f4a:;
  /* 00511f4a mov esi, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); esi = (u32)(M32(m_)); }
  /* 00511f50 mov edi, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); edi = (u32)(M32(m_)); }
  /* 00511f56 mov eax, esi */ { eax = (u32)(esi); }
  /* 00511f58 call 0x511d00 */ esp -= 4; M32(esp) = 0x511f5du; SAVEALL; F_00511d00(c); ABI_CHECK(0x511d00u, 0x511f58u); RETCHK(0x511f5du, 0x511f58u); LOADALL;
  /* 00511f5d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00511f5e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x511f63u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x511f5eu); RETCHK(0x511f63u, 0x511f5eu); LOADALL;
  /* 00511f63 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00511f66 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00511f68 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00511f6a call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 00511f6f mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00511f72 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00511f75 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00511f77 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00511f79 mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 00511f7e imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511f80 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00511f83 mov eax, edx */ { eax = (u32)(edx); }
  /* 00511f85 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00511f88 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00511f8a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00511f8c imul edi, edi, 0x6c */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511f8f cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511f91 mov dword ptr [ebp - 0x84], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(ecx); }
  /* 00511f97 jae 0x512029 */ if (!CF_) goto L_00512029;
  /* 00511f9d mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00511fa0 lea eax, [edi + edx] */ eax = (u32)((u32)(edi + edx));
  /* 00511fa3 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00511fa6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00511fa7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511fa8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511fa9 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00511fac call 0x512320 */ esp -= 4; M32(esp) = 0x511fb1u; SAVEALL; F_00512320(c); ABI_CHECK(0x512320u, 0x511facu); RETCHK(0x511fb1u, 0x511facu); LOADALL;
  /* 00511fb1 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 00511fb5 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00511fb8 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00511fbb mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00511fbd sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00511fbf mov eax, 0x4bda12f7 */ { eax = (u32)(0x4bda12f7u); }
  /* 00511fc4 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00511fc6 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00511fc9 mov eax, edx */ { eax = (u32)(edx); }
  /* 00511fcb shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00511fce add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00511fd0 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00511fd3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00511fd4 sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00511fd6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00511fd7 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00511fda mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00511fdc call 0x512220 */ esp -= 4; M32(esp) = 0x511fe1u; SAVEALL; F_00512220(c); ABI_CHECK(0x512220u, 0x511fdcu); RETCHK(0x511fe1u, 0x511fdcu); LOADALL;
  /* 00511fe1 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00511fe8 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00511feb mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00511fee add ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00511ff0 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00511ff3 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00511ff5 sub esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00511ff7 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00511ffa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00511ffb lea edi, [ebp - 0x80] */ edi = (u32)((u32)(ebp + 0xffffff80u));
  /* 00511ffe call 0x512140 */ esp -= 4; M32(esp) = 0x512003u; SAVEALL; F_00512140(c); ABI_CHECK(0x512140u, 0x511ffeu); RETCHK(0x512003u, 0x511ffeu); LOADALL;
  /* 00512003 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00512006 jmp 0x512061 */ goto L_00512061;
L_00512029:;
  /* 00512029 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051202c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051202d mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0051202f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00512030 sub ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00512032 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00512033 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00512035 call 0x512320 */ esp -= 4; M32(esp) = 0x51203au; SAVEALL; F_00512320(c); ABI_CHECK(0x512320u, 0x512035u); RETCHK(0x51203au, 0x512035u); LOADALL;
  /* 0051203a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051203d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051203e mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00512041 mov eax, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); eax = (u32)(M32(m_)); }
  /* 00512047 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00512049 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0051204c call 0x5122b0 */ esp -= 4; M32(esp) = 0x512051u; SAVEALL; F_005122b0(c); ABI_CHECK(0x5122b0u, 0x51204cu); RETCHK(0x512051u, 0x51204cu); LOADALL;
  /* 00512051 add edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00512053 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00512054 lea edi, [ebp - 0x80] */ edi = (u32)((u32)(ebp + 0xffffff80u));
  /* 00512057 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00512059 call 0x512140 */ esp -= 4; M32(esp) = 0x51205eu; SAVEALL; F_00512140(c); ABI_CHECK(0x512140u, 0x512059u); RETCHK(0x51205eu, 0x512059u); LOADALL;
  /* 0051205e add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00512061:;
  /* 00512061 lea esi, [ebp - 0x80] */ esi = (u32)((u32)(ebp + 0xffffff80u));
  /* 00512064 call 0x50f600 */ esp -= 4; M32(esp) = 0x512069u; SAVEALL; F_0050f600(c); ABI_CHECK(0x50f600u, 0x512064u); RETCHK(0x512069u, 0x512064u); LOADALL;
  /* 00512069 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051206c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00512073 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00512076 call 0x61af31 */ esp -= 4; M32(esp) = 0x51207bu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x512076u); RETCHK(0x51207bu, 0x512076u); LOADALL;
  /* 0051207b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051207c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051207d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051207e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00512080 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00512081 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00512008(CPU *c) {
  NATIVE_HOOK(0x512008u) REGS; LOADALL;
L_00512008:;
  /* 00512008 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0051200b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0051200e imul eax, eax, 0x6c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x6cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00512011 mov edi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 00512014 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00512017 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00512019 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0051201b call 0x511d00 */ esp -= 4; M32(esp) = 0x512020u; SAVEALL; F_00511d00(c); ABI_CHECK(0x511d00u, 0x51201bu); RETCHK(0x512020u, 0x51201bu); LOADALL;
  /* 00512020 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00512022 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00512024 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 00512029 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051202c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051202d mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0051202f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00512030 sub ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00512032 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00512033 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00512035 call 0x512320 */ esp -= 4; M32(esp) = 0x51203au; SAVEALL; F_00512320(c); ABI_CHECK(0x512320u, 0x512035u); RETCHK(0x51203au, 0x512035u); LOADALL;
  /* 0051203a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051203d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051203e mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00512041 mov eax, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); eax = (u32)(M32(m_)); }
  /* 00512047 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00512049 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0051204c call 0x5122b0 */ esp -= 4; M32(esp) = 0x512051u; SAVEALL; F_005122b0(c); ABI_CHECK(0x5122b0u, 0x51204cu); RETCHK(0x512051u, 0x51204cu); LOADALL;
  /* 00512051 add edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00512053 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00512054 lea edi, [ebp - 0x80] */ edi = (u32)((u32)(ebp + 0xffffff80u));
  /* 00512057 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00512059 call 0x512140 */ esp -= 4; M32(esp) = 0x51205eu; SAVEALL; F_00512140(c); ABI_CHECK(0x512140u, 0x512059u); RETCHK(0x51205eu, 0x512059u); LOADALL;
  /* 0051205e add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00512061 lea esi, [ebp - 0x80] */ esi = (u32)((u32)(ebp + 0xffffff80u));
  /* 00512064 call 0x50f600 */ esp -= 4; M32(esp) = 0x512069u; SAVEALL; F_0050f600(c); ABI_CHECK(0x50f600u, 0x512064u); RETCHK(0x512069u, 0x512064u); LOADALL;
  /* 00512069 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051206c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00512073 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00512076 call 0x61af31 */ esp -= 4; M32(esp) = 0x51207bu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x512076u); RETCHK(0x51207bu, 0x512076u); LOADALL;
  /* 0051207b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051207c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051207d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051207e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00512080 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00512081 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00512090(CPU *c) {
  NATIVE_HOOK(0x512090u) REGS; LOADALL;
L_00512090:;
  /* 00512090 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00512091 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00512093 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00512099 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051209b push 0x61bb83 */ { u32 v_ = 0x61bb83u; esp -= 4; M32(esp) = v_; }
  /* 005120a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005120a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005120a8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005120a9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005120aa mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005120ad xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005120af push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005120b1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005120b2 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 005120b9 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 005120bc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005120bd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005120bf mov byte ptr [esi + 4], bl */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005120c2 call 0x404140 */ esp -= 4; M32(esp) = 0x5120c7u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5120c2u); RETCHK(0x5120c7u, 0x5120c2u); LOADALL;
  /* 005120c7 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005120ca mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005120cd mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005120d0 mov ecx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005120d3 mov dword ptr [esi + 0x20], ecx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 005120d6 mov edx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (u32)(M32(m_)); }
  /* 005120d9 mov dword ptr [esi + 0x24], edx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(edx); }
  /* 005120dc mov eax, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (u32)(M32(m_)); }
  /* 005120df mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
  /* 005120e2 mov ecx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 005120e5 mov dword ptr [esi + 0x2c], ecx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 005120e8 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005120ea lea ecx, [esi + 0x30] */ ecx = (u32)((u32)(esi + 0x30u));
  /* 005120ed push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005120ee lea edx, [edi + 0x30] */ edx = (u32)((u32)(edi + 0x30u));
  /* 005120f1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 005120f8 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 005120fb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005120fc mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005120ff call 0x404140 */ esp -= 4; M32(esp) = 0x512104u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5120ffu); RETCHK(0x512104u, 0x5120ffu); LOADALL;
  /* 00512104 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00512106 lea ecx, [esi + 0x4c] */ ecx = (u32)((u32)(esi + 0x4cu));
  /* 00512109 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0051210d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051210e lea eax, [edi + 0x4c] */ eax = (u32)((u32)(edi + 0x4cu));
  /* 00512111 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00512118 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0051211b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051211c mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051211f call 0x404140 */ esp -= 4; M32(esp) = 0x512124u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x51211fu); RETCHK(0x512124u, 0x51211fu); LOADALL;
  /* 00512124 mov cl, byte ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00512127 mov byte ptr [esi + 0x68], cl */ { const u32 m_ = (u32)(esi + 0x68u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0051212a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051212d mov eax, esi */ { eax = (u32)(esi); }
  /* 0051212f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00512130 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00512137 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00512138 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051213a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051213b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00512140(CPU *c) {
  NATIVE_HOOK(0x512140u) REGS; LOADALL;
L_00512140:;
  /* 00512140 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00512141 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00512143 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00512144 mov esi, eax */ { esi = (u32)(eax); }
  /* 00512146 cmp esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512149 je 0x5121a8 */ if (ZF_) goto L_005121a8;
  /* 0051214b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051214c lea ebx, [edi + 0x30] */ ebx = (u32)((u32)(edi + 0x30u));
  /* 0051214f nop */ ;
L_00512150:;
  /* 00512150 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00512152 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00512154 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00512155 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00512157 call 0x404140 */ esp -= 4; M32(esp) = 0x51215cu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x512157u); RETCHK(0x51215cu, 0x512157u); LOADALL;
  /* 0051215c mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0051215f mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00512162 mov ecx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 00512165 mov dword ptr [esi + 0x24], ecx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ecx); }
  /* 00512168 mov edx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edx = (u32)(M32(m_)); }
  /* 0051216b mov dword ptr [esi + 0x28], edx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(edx); }
  /* 0051216e mov eax, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00512171 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00512173 mov dword ptr [esi + 0x2c], eax */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 00512176 mov ecx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00512179 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051217b mov dword ptr [esi + 0x20], ecx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0051217e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051217f lea ecx, [esi + 0x30] */ ecx = (u32)((u32)(esi + 0x30u));
  /* 00512182 call 0x404140 */ esp -= 4; M32(esp) = 0x512187u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x512182u); RETCHK(0x512187u, 0x512182u); LOADALL;
  /* 00512187 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00512189 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051218b lea eax, [edi + 0x4c] */ eax = (u32)((u32)(edi + 0x4cu));
  /* 0051218e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051218f lea ecx, [esi + 0x4c] */ ecx = (u32)((u32)(esi + 0x4cu));
  /* 00512192 call 0x404140 */ esp -= 4; M32(esp) = 0x512197u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x512192u); RETCHK(0x512197u, 0x512192u); LOADALL;
  /* 00512197 mov dl, byte ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051219a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0051219d mov byte ptr [esi + 0x68], dl */ { const u32 m_ = (u32)(esi + 0x68u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 005121a0 add esi, 0x6c */ { u32 a_ = esi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005121a3 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005121a5 jne 0x512150 */ if (!ZF_) goto L_00512150;
  /* 005121a7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_005121a8:;
  /* 005121a8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005121a9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005121aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005121b0(CPU *c) {
  NATIVE_HOOK(0x5121b0u) REGS; LOADALL;
L_005121b0:;
  /* 005121b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005121b1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005121b3 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005121b5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005121b6 mov edi, eax */ { edi = (u32)(eax); }
  /* 005121b8 je 0x51221a */ if (ZF_) goto L_0051221a;
  /* 005121ba lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_005121c0:;
  /* 005121c0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005121c2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005121c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005121c5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005121c7 call 0x404140 */ esp -= 4; M32(esp) = 0x5121ccu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5121c7u); RETCHK(0x5121ccu, 0x5121c7u); LOADALL;
  /* 005121cc mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005121cf mov dword ptr [edi + 0x1c], eax */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005121d2 mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 005121d5 mov dword ptr [edi + 0x24], ecx */ { const u32 m_ = (u32)(edi + 0x24u); M32(m_) = (u32)(ecx); }
  /* 005121d8 mov edx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); edx = (u32)(M32(m_)); }
  /* 005121db mov dword ptr [edi + 0x28], edx */ { const u32 m_ = (u32)(edi + 0x28u); M32(m_) = (u32)(edx); }
  /* 005121de mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005121e1 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005121e3 mov dword ptr [edi + 0x2c], eax */ { const u32 m_ = (u32)(edi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 005121e6 mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005121e9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005121eb lea edx, [esi + 0x30] */ edx = (u32)((u32)(esi + 0x30u));
  /* 005121ee mov dword ptr [edi + 0x20], ecx */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 005121f1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005121f2 lea ecx, [edi + 0x30] */ ecx = (u32)((u32)(edi + 0x30u));
  /* 005121f5 call 0x404140 */ esp -= 4; M32(esp) = 0x5121fau; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5121f5u); RETCHK(0x5121fau, 0x5121f5u); LOADALL;
  /* 005121fa push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005121fc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005121fe lea eax, [esi + 0x4c] */ eax = (u32)((u32)(esi + 0x4cu));
  /* 00512201 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512202 lea ecx, [edi + 0x4c] */ ecx = (u32)((u32)(edi + 0x4cu));
  /* 00512205 call 0x404140 */ esp -= 4; M32(esp) = 0x51220au; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x512205u); RETCHK(0x51220au, 0x512205u); LOADALL;
  /* 0051220a mov cl, byte ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0051220d mov byte ptr [edi + 0x68], cl */ { const u32 m_ = (u32)(edi + 0x68u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00512210 add esi, 0x6c */ { u32 a_ = esi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00512213 add edi, 0x6c */ { u32 a_ = edi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00512216 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512218 jne 0x5121c0 */ if (!ZF_) goto L_005121c0;
L_0051221a:;
  /* 0051221a mov eax, edi */ { eax = (u32)(edi); }
  /* 0051221c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051221d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051221e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00512220(CPU *c) {
  NATIVE_HOOK(0x512220u) REGS; LOADALL;
L_00512220:;
  /* 00512220 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00512221 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00512223 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00512225 push 0x61c851 */ { u32 v_ = 0x61c851u; esp -= 4; M32(esp) = v_; }
  /* 0051222a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00512230 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512231 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00512238 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051223b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051223c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051223d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00512240 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00512241 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00512244 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00512246 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 00512248 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0051224b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
L_00512252:;
  /* 00512252 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512254 jbe 0x512295 */ if ((CF_|ZF_)) goto L_00512295;
  /* 00512256 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 00512259 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051225b mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0051225f je 0x512267 */ if (ZF_) goto L_00512267;
  /* 00512261 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00512262 call 0x512090 */ esp -= 4; M32(esp) = 0x512267u; SAVEALL; F_00512090(c); ABI_CHECK(0x512090u, 0x512262u); RETCHK(0x512267u, 0x512262u); LOADALL;
L_00512267:;
  /* 00512267 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00512268 add esi, 0x6c */ { u32 a_ = esi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051226b mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0051226f mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 00512272 jmp 0x512252 */ goto L_00512252;
L_00512295:;
  /* 00512295 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00512298 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00512299 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051229a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005122a1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005122a2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005122a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005122a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00512274(CPU *c) {
  NATIVE_HOOK(0x512274u) REGS; LOADALL;
L_00512274:;
  /* 00512274 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 00512277 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0051227a cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051227c je 0x51228c */ if (ZF_) goto L_0051228c;
  /* 0051227e mov edi, edi */ { edi = (u32)(edi); }
L_00512280:;
  /* 00512280 call 0x50f600 */ esp -= 4; M32(esp) = 0x512285u; SAVEALL; F_0050f600(c); ABI_CHECK(0x50f600u, 0x512280u); RETCHK(0x512285u, 0x512280u); LOADALL;
  /* 00512285 add esi, 0x6c */ { u32 a_ = esi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00512288 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051228a jne 0x512280 */ if (!ZF_) goto L_00512280;
L_0051228c:;
  /* 0051228c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0051228e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00512290 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 00512295 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00512298 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00512299 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051229a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005122a1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005122a2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005122a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005122a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005122b0(CPU *c) {
  NATIVE_HOOK(0x5122b0u) REGS; LOADALL;
L_005122b0:;
  /* 005122b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005122b1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005122b3 cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005122b5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005122b6 mov edi, eax */ { edi = (u32)(eax); }
  /* 005122b8 je 0x51231a */ if (ZF_) goto L_0051231a;
  /* 005122ba lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_005122c0:;
  /* 005122c0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005122c2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005122c4 sub esi, 0x6c */ { u32 a_ = esi, b_ = 0x6cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005122c7 sub edi, 0x6c */ { u32 a_ = edi, b_ = 0x6cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005122ca push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005122cb mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005122cd call 0x404140 */ esp -= 4; M32(esp) = 0x5122d2u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5122cdu); RETCHK(0x5122d2u, 0x5122cdu); LOADALL;
  /* 005122d2 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005122d5 mov dword ptr [edi + 0x1c], eax */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005122d8 mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 005122db mov dword ptr [edi + 0x24], ecx */ { const u32 m_ = (u32)(edi + 0x24u); M32(m_) = (u32)(ecx); }
  /* 005122de mov edx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); edx = (u32)(M32(m_)); }
  /* 005122e1 mov dword ptr [edi + 0x28], edx */ { const u32 m_ = (u32)(edi + 0x28u); M32(m_) = (u32)(edx); }
  /* 005122e4 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005122e7 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005122e9 mov dword ptr [edi + 0x2c], eax */ { const u32 m_ = (u32)(edi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 005122ec mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005122ef push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005122f1 lea edx, [esi + 0x30] */ edx = (u32)((u32)(esi + 0x30u));
  /* 005122f4 mov dword ptr [edi + 0x20], ecx */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 005122f7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005122f8 lea ecx, [edi + 0x30] */ ecx = (u32)((u32)(edi + 0x30u));
  /* 005122fb call 0x404140 */ esp -= 4; M32(esp) = 0x512300u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5122fbu); RETCHK(0x512300u, 0x5122fbu); LOADALL;
  /* 00512300 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00512302 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00512304 lea eax, [esi + 0x4c] */ eax = (u32)((u32)(esi + 0x4cu));
  /* 00512307 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512308 lea ecx, [edi + 0x4c] */ ecx = (u32)((u32)(edi + 0x4cu));
  /* 0051230b call 0x404140 */ esp -= 4; M32(esp) = 0x512310u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x51230bu); RETCHK(0x512310u, 0x51230bu); LOADALL;
  /* 00512310 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512312 mov cl, byte ptr [esi + 0x68] */ { const u32 m_ = (u32)(esi + 0x68u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00512315 mov byte ptr [edi + 0x68], cl */ { const u32 m_ = (u32)(edi + 0x68u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00512318 jne 0x5122c0 */ if (!ZF_) goto L_005122c0;
L_0051231a:;
  /* 0051231a mov eax, edi */ { eax = (u32)(edi); }
  /* 0051231c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051231d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051231e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00512320(CPU *c) {
  NATIVE_HOOK(0x512320u) REGS; LOADALL;
L_00512320:;
  /* 00512320 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00512321 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00512323 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00512325 push 0x61dde1 */ { u32 v_ = 0x61dde1u; esp -= 4; M32(esp) = v_; }
  /* 0051232a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00512330 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512331 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00512338 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051233b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051233c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051233d mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00512340 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00512341 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00512343 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00512346 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00512348 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0051234b mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0051234e mov edi, edi */ { edi = (u32)(edi); }
L_00512350:;
  /* 00512350 cmp edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512353 je 0x512395 */ if (ZF_) goto L_00512395;
  /* 00512355 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 00512358 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051235a mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0051235e je 0x512366 */ if (ZF_) goto L_00512366;
  /* 00512360 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00512361 call 0x512090 */ esp -= 4; M32(esp) = 0x512366u; SAVEALL; F_00512090(c); ABI_CHECK(0x512090u, 0x512361u); RETCHK(0x512366u, 0x512361u); LOADALL;
L_00512366:;
  /* 00512366 add esi, 0x6c */ { u32 a_ = esi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00512369 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0051236c mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 0051236f add edi, 0x6c */ { u32 a_ = edi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00512372 jmp 0x512350 */ goto L_00512350;
L_00512395:;
  /* 00512395 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00512398 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00512399 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051239b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051239c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005123a3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005123a4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005123a6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005123a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00512374(CPU *c) {
  NATIVE_HOOK(0x512374u) REGS; LOADALL;
L_00512374:;
  /* 00512374 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 00512377 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0051237a cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051237c je 0x51238c */ if (ZF_) goto L_0051238c;
  /* 0051237e mov edi, edi */ { edi = (u32)(edi); }
L_00512380:;
  /* 00512380 call 0x50f600 */ esp -= 4; M32(esp) = 0x512385u; SAVEALL; F_0050f600(c); ABI_CHECK(0x50f600u, 0x512380u); RETCHK(0x512385u, 0x512380u); LOADALL;
  /* 00512385 add esi, 0x6c */ { u32 a_ = esi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00512388 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051238a jne 0x512380 */ if (!ZF_) goto L_00512380;
L_0051238c:;
  /* 0051238c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0051238e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051238f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00512390 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 00512395 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00512398 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00512399 mov eax, esi */ { eax = (u32)(esi); }
  /* 0051239b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051239c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005123a3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005123a4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005123a6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005123a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005123b0(CPU *c) {
  NATIVE_HOOK(0x5123b0u) REGS; LOADALL;
L_005123b0:;
  /* 005123b0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005123b2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005123b3 call 0x50d810 */ esp -= 4; M32(esp) = 0x5123b8u; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x5123b3u); RETCHK(0x5123b8u, 0x5123b3u); LOADALL;
  /* 005123b8 mov dword ptr [esi], 0x6518e8 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6518e8u); }
  /* 005123be mov eax, esi */ { eax = (u32)(esi); }
  /* 005123c0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005123d0(CPU *c) {
  NATIVE_HOOK(0x5123d0u) REGS; LOADALL;
L_005123d0:;
  /* 005123d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005123d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005123d3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005123d4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005123d6 call 0x512400 */ esp -= 4; M32(esp) = 0x5123dbu; SAVEALL; F_00512400(c); ABI_CHECK(0x512400u, 0x5123d6u); RETCHK(0x5123dbu, 0x5123d6u); LOADALL;
  /* 005123db test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005123df je 0x5123ea */ if (ZF_) goto L_005123ea;
  /* 005123e1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005123e2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5123e7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5123e2u); RETCHK(0x5123e7u, 0x5123e2u); LOADALL;
  /* 005123e7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005123ea:;
  /* 005123ea mov eax, esi */ { eax = (u32)(esi); }
  /* 005123ec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005123ed pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005123ee ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00512400(CPU *c) {
  NATIVE_HOOK(0x512400u) REGS; LOADALL;
L_00512400:;
  /* 00512400 mov dword ptr [ecx], 0x6518e8 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x6518e8u); }
  /* 00512406 jmp 0x50d8e0 */ SAVEALL; F_0050d8e0(c); return;
}

void F_00512410(CPU *c) {
  NATIVE_HOOK(0x512410u) REGS; LOADALL;
L_00512410:;
  /* 00512410 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00512411 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00512413 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00512416 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00512418 mov dword ptr [ecx + 0x1bc], edx */ { const u32 m_ = (u32)(ecx + 0x1bcu); M32(m_) = (u32)(edx); }
  /* 0051241e mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00512421 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00512422 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 00512424 mov dword ptr [ecx + 0x1cc], esi */ { const u32 m_ = (u32)(ecx + 0x1ccu); M32(m_) = (u32)(esi); }
  /* 0051242a mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 0051242d mov dword ptr [ecx + 0x1c0], esi */ { const u32 m_ = (u32)(ecx + 0x1c0u); M32(m_) = (u32)(esi); }
  /* 00512433 mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00512436 mov dword ptr [ecx + 0x1d0], esi */ { const u32 m_ = (u32)(ecx + 0x1d0u); M32(m_) = (u32)(esi); }
  /* 0051243c mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051243f mov dword ptr [ecx + 0x1c4], esi */ { const u32 m_ = (u32)(ecx + 0x1c4u); M32(m_) = (u32)(esi); }
  /* 00512445 mov esi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); esi = (u32)(M32(m_)); }
  /* 00512448 mov dword ptr [ecx + 0x1d4], esi */ { const u32 m_ = (u32)(ecx + 0x1d4u); M32(m_) = (u32)(esi); }
  /* 0051244e mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 00512451 mov dword ptr [ecx + 0x1c8], eax */ { const u32 m_ = (u32)(ecx + 0x1c8u); M32(m_) = (u32)(eax); }
  /* 00512457 mov edx, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); edx = (u32)(M32(m_)); }
  /* 0051245a mov dword ptr [ecx + 0x1d8], edx */ { const u32 m_ = (u32)(ecx + 0x1d8u); M32(m_) = (u32)(edx); }
  /* 00512460 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00512461 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00512462 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00512470(CPU *c) {
  NATIVE_HOOK(0x512470u) REGS; LOADALL;
L_00512470:;
  /* 00512470 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00512471 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00512473 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00512476 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00512478 mov dword ptr [ecx + 0x1dc], edx */ { const u32 m_ = (u32)(ecx + 0x1dcu); M32(m_) = (u32)(edx); }
  /* 0051247e mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 00512481 mov dword ptr [ecx + 0x1e0], edx */ { const u32 m_ = (u32)(ecx + 0x1e0u); M32(m_) = (u32)(edx); }
  /* 00512487 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0051248a mov dword ptr [ecx + 0x1e4], edx */ { const u32 m_ = (u32)(ecx + 0x1e4u); M32(m_) = (u32)(edx); }
  /* 00512490 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 00512493 mov dword ptr [ecx + 0x1e8], edx */ { const u32 m_ = (u32)(ecx + 0x1e8u); M32(m_) = (u32)(edx); }
  /* 00512499 mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 0051249c mov dword ptr [ecx + 0x1ec], edx */ { const u32 m_ = (u32)(ecx + 0x1ecu); M32(m_) = (u32)(edx); }
  /* 005124a2 mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 005124a5 mov dword ptr [ecx + 0x1f0], edx */ { const u32 m_ = (u32)(ecx + 0x1f0u); M32(m_) = (u32)(edx); }
  /* 005124ab mov edx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edx = (u32)(M32(m_)); }
  /* 005124ae mov dword ptr [ecx + 0x1f4], edx */ { const u32 m_ = (u32)(ecx + 0x1f4u); M32(m_) = (u32)(edx); }
  /* 005124b4 mov eax, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005124b7 mov dword ptr [ecx + 0x1f8], eax */ { const u32 m_ = (u32)(ecx + 0x1f8u); M32(m_) = (u32)(eax); }
  /* 005124bd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005124be ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005124d0(CPU *c) {
  NATIVE_HOOK(0x5124d0u) REGS; LOADALL;
L_005124d0:;
  /* 005124d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005124d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005124d3 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005124d6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005124d7 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005124d9 mov eax, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); eax = (u32)(M32(m_)); }
  /* 005124df test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005124e1 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005124e4 je 0x512539 */ if (ZF_) goto L_00512539;
  /* 005124e6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005124e7 lea ecx, [ebx + 0x44] */ ecx = (u32)((u32)(ebx + 0x44u));
  /* 005124ea lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 005124ed call 0x52cea0 */ esp -= 4; M32(esp) = 0x5124f2u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x5124edu); RETCHK(0x5124f2u, 0x5124edu); LOADALL;
  /* 005124f2 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 005124f5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005124f6 lea esi, [ebp - 0x14] */ esi = (u32)((u32)(ebp + 0xffffffecu));
  /* 005124f9 call 0x52cf90 */ esp -= 4; M32(esp) = 0x5124feu; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x5124f9u); RETCHK(0x5124feu, 0x5124f9u); LOADALL;
  /* 005124fe mov eax, dword ptr [ebx + 0x194] */ { const u32 m_ = (u32)(ebx + 0x194u); eax = (u32)(M32(m_)); }
  /* 00512504 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00512507 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051250a je 0x512539 */ if (ZF_) goto L_00512539;
  /* 0051250c mov ecx, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); ecx = (u32)(M32(m_)); }
  /* 00512512 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00512513 call 0x5267f0 */ esp -= 4; M32(esp) = 0x512518u; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x512513u); RETCHK(0x512518u, 0x512513u); LOADALL;
  /* 00512518 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0051251b lea edi, [ebx + 0x1cc] */ edi = (u32)((u32)(ebx + 0x1ccu));
  /* 00512521 lea eax, [ecx + 0x1dc] */ eax = (u32)((u32)(ecx + 0x1dcu));
  /* 00512527 mov ecx, dword ptr [ecx + 0x198] */ { const u32 m_ = (u32)(ecx + 0x198u); ecx = (u32)(M32(m_)); }
  /* 0051252d add ebx, 0x1bc */ { u32 a_ = ebx, b_ = 0x1bcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00512533 call 0x526cc0 */ esp -= 4; M32(esp) = 0x512538u; SAVEALL; F_00526cc0(c); ABI_CHECK(0x526cc0u, 0x512533u); RETCHK(0x512538u, 0x512533u); LOADALL;
  /* 00512538 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00512539:;
  /* 00512539 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051253a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051253c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051253d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00512540(CPU *c) {
  NATIVE_HOOK(0x512540u) REGS; LOADALL;
L_00512540:;
  /* 00512540 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00512541 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00512543 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00512545 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0051254a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00512550 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512551 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00512558 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00512559 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051255a push 0x5125c0 */ { u32 v_ = 0x5125c0u; esp -= 4; M32(esp) = v_; }
  /* 0051255f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00512562 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00512564 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00512566 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00512569 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0051256c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051256e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051256f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00512572 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00512579 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0051257c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051257d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00512580 call 0x404140 */ esp -= 4; M32(esp) = 0x512585u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x512580u); RETCHK(0x512585u, 0x512580u); LOADALL;
  /* 00512585 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00512588 call 0x405c00 */ esp -= 4; M32(esp) = 0x51258du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x512588u); RETCHK(0x51258du, 0x512588u); LOADALL;
  /* 0051258d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0051258f call 0x405c80 */ esp -= 4; M32(esp) = 0x512594u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x51258fu); RETCHK(0x512594u, 0x51258fu); LOADALL;
  /* 00512594 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512598 jb 0x5125a6 */ if (CF_) goto L_005125a6;
  /* 0051259a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0051259d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0051259e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5125a3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51259eu); RETCHK(0x5125a3u, 0x51259eu); LOADALL;
  /* 005125a3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005125a6:;
  /* 005125a6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005125a9 mov eax, esi */ { eax = (u32)(esi); }
  /* 005125ab mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005125b2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005125b3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005125b5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005125b6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_005125c0(CPU *c) {
  NATIVE_HOOK(0x5125c0u) REGS; LOADALL;
L_005125c0:;
  /* 005125c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005125c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005125c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005125c5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 005125ca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005125d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005125d1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005125d8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005125d9 push 0x1fc */ { u32 v_ = 0x1fcu; esp -= 4; M32(esp) = v_; }
  /* 005125de call 0x5fe934 */ esp -= 4; M32(esp) = 0x5125e3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5125deu); RETCHK(0x5125e3u, 0x5125deu); LOADALL;
  /* 005125e3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005125e6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005125e9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005125eb mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005125f2 je 0x51260b */ if (ZF_) goto L_0051260b;
  /* 005125f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005125f5 mov esi, eax */ { esi = (u32)(eax); }
  /* 005125f7 call 0x5123b0 */ esp -= 4; M32(esp) = 0x5125fcu; SAVEALL; F_005123b0(c); ABI_CHECK(0x5123b0u, 0x5125f7u); RETCHK(0x5125fcu, 0x5125f7u); LOADALL;
  /* 005125fc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005125fd mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00512600 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00512607 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00512609 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051260a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0051260b:;
  /* 0051260b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051260e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00512610 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00512617 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00512619 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051261a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00512620(CPU *c) {
  NATIVE_HOOK(0x512620u) REGS; LOADALL;
L_00512620:;
  /* 00512620 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00512621 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00512623 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00512629 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0051262b push 0x620184 */ { u32 v_ = 0x620184u; esp -= 4; M32(esp) = v_; }
  /* 00512630 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512631 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00512634 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0051263b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051263c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0051263f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512640 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00512641 call 0x50bb70 */ esp -= 4; M32(esp) = 0x512646u; SAVEALL; F_0050bb70(c); ABI_CHECK(0x50bb70u, 0x512641u); RETCHK(0x512646u, 0x512641u); LOADALL;
  /* 00512646 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00512648 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0051264b mov dword ptr [esi], 0x6519e8 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6519e8u); }
  /* 00512651 mov dword ptr [esi + 0x1d0], eax */ { const u32 m_ = (u32)(esi + 0x1d0u); M32(m_) = (u32)(eax); }
  /* 00512657 mov dword ptr [esi + 0x1d4], eax */ { const u32 m_ = (u32)(esi + 0x1d4u); M32(m_) = (u32)(eax); }
  /* 0051265d mov dword ptr [esi + 0x1d8], eax */ { const u32 m_ = (u32)(esi + 0x1d8u); M32(m_) = (u32)(eax); }
  /* 00512663 mov dword ptr [esi + 0x1e0], eax */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(eax); }
  /* 00512669 mov dword ptr [esi + 0x1e4], eax */ { const u32 m_ = (u32)(esi + 0x1e4u); M32(m_) = (u32)(eax); }
  /* 0051266f mov dword ptr [esi + 0x1e8], eax */ { const u32 m_ = (u32)(esi + 0x1e8u); M32(m_) = (u32)(eax); }
  /* 00512675 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00512677 push 0x651b28 */ { u32 v_ = 0x651b28u; esp -= 4; M32(esp) = v_; }
  /* 0051267c lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0051267f mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00512683 call 0x404420 */ esp -= 4; M32(esp) = 0x512688u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x512683u); RETCHK(0x512688u, 0x512683u); LOADALL;
  /* 00512688 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0051268b mov eax, esi */ { eax = (u32)(esi); }
  /* 0051268d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00512694 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00512695 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00512697 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00512698 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005126a0(CPU *c) {
  NATIVE_HOOK(0x5126a0u) REGS; LOADALL;
L_005126a0:;
  /* 005126a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005126a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005126a3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005126a4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005126a6 call 0x5126d0 */ esp -= 4; M32(esp) = 0x5126abu; SAVEALL; F_005126d0(c); ABI_CHECK(0x5126d0u, 0x5126a6u); RETCHK(0x5126abu, 0x5126a6u); LOADALL;
  /* 005126ab test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005126af je 0x5126ba */ if (ZF_) goto L_005126ba;
  /* 005126b1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005126b2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5126b7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5126b2u); RETCHK(0x5126b7u, 0x5126b2u); LOADALL;
  /* 005126b7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005126ba:;
  /* 005126ba mov eax, esi */ { eax = (u32)(esi); }
  /* 005126bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005126bd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005126be ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005126d0(CPU *c) {
  NATIVE_HOOK(0x5126d0u) REGS; LOADALL;
L_005126d0:;
  /* 005126d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005126d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005126d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005126d4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005126d5 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005126d7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005126d8 mov dword ptr [ebx], 0x6519e8 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x6519e8u); }
  /* 005126de mov eax, dword ptr [ebx + 0x1e0] */ { const u32 m_ = (u32)(ebx + 0x1e0u); eax = (u32)(M32(m_)); }
  /* 005126e4 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005126e6 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005126e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005126e9 je 0x5126f4 */ if (ZF_) goto L_005126f4;
  /* 005126eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005126ec call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5126f1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5126ecu); RETCHK(0x5126f1u, 0x5126ecu); LOADALL;
  /* 005126f1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005126f4:;
  /* 005126f4 mov dword ptr [ebx + 0x1e0], esi */ { const u32 m_ = (u32)(ebx + 0x1e0u); M32(m_) = (u32)(esi); }
  /* 005126fa mov dword ptr [ebx + 0x1e4], esi */ { const u32 m_ = (u32)(ebx + 0x1e4u); M32(m_) = (u32)(esi); }
  /* 00512700 mov dword ptr [ebx + 0x1e8], esi */ { const u32 m_ = (u32)(ebx + 0x1e8u); M32(m_) = (u32)(esi); }
  /* 00512706 mov edi, dword ptr [ebx + 0x1d0] */ { const u32 m_ = (u32)(ebx + 0x1d0u); edi = (u32)(M32(m_)); }
  /* 0051270c cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051270e je 0x512760 */ if (ZF_) goto L_00512760;
  /* 00512710 mov eax, dword ptr [ebx + 0x1d4] */ { const u32 m_ = (u32)(ebx + 0x1d4u); eax = (u32)(M32(m_)); }
  /* 00512716 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512718 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0051271b je 0x512751 */ if (ZF_) goto L_00512751;
  /* 0051271d lea esi, [edi + 0x1c] */ esi = (u32)((u32)(edi + 0x1cu));
L_00512720:;
  /* 00512720 cmp dword ptr [esi], 0x10 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512723 jb 0x512734 */ if (CF_) goto L_00512734;
  /* 00512725 mov eax, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00512728 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512729 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51272eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x512729u); RETCHK(0x51272eu, 0x512729u); LOADALL;
  /* 0051272e mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00512731 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00512734:;
  /* 00512734 mov dword ptr [esi], 0xf */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xfu); }
  /* 0051273a mov dword ptr [esi - 4], 0 */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00512741 mov byte ptr [esi - 0x14], 0 */ { const u32 m_ = (u32)(esi + 0xffffffecu); M8(m_) = (u8)(0x0u); }
  /* 00512745 add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00512748 add esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051274b cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051274d jne 0x512720 */ if (!ZF_) goto L_00512720;
  /* 0051274f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_00512751:;
  /* 00512751 mov ecx, dword ptr [ebx + 0x1d0] */ { const u32 m_ = (u32)(ebx + 0x1d0u); ecx = (u32)(M32(m_)); }
  /* 00512757 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00512758 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x51275du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x512758u); RETCHK(0x51275du, 0x512758u); LOADALL;
  /* 0051275d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00512760:;
  /* 00512760 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00512762 mov dword ptr [ebx + 0x1d0], esi */ { const u32 m_ = (u32)(ebx + 0x1d0u); M32(m_) = (u32)(esi); }
  /* 00512768 mov dword ptr [ebx + 0x1d4], esi */ { const u32 m_ = (u32)(ebx + 0x1d4u); M32(m_) = (u32)(esi); }
  /* 0051276e mov dword ptr [ebx + 0x1d8], esi */ { const u32 m_ = (u32)(ebx + 0x1d8u); M32(m_) = (u32)(esi); }
  /* 00512774 call 0x50bc50 */ esp -= 4; M32(esp) = 0x512779u; SAVEALL; F_0050bc50(c); ABI_CHECK(0x50bc50u, 0x512774u); RETCHK(0x512779u, 0x512774u); LOADALL;
  /* 00512779 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051277a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051277b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0051277c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0051277e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0051277f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00512780(CPU *c) {
  NATIVE_HOOK(0x512780u) REGS; LOADALL;
L_00512780:;
  /* 00512780 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00512781 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00512783 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00512785 push 0x621183 */ { u32 v_ = 0x621183u; esp -= 4; M32(esp) = v_; }
  /* 0051278a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00512790 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512791 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00512798 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051279b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051279e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0051279f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005127a0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005127a1 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005127a4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005127a6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005127a8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005127a9 mov ebx, edi */ { ebx = (u32)(edi); }
  /* 005127ab call 0x50bfc0 */ esp -= 4; M32(esp) = 0x5127b0u; SAVEALL; F_0050bfc0(c); ABI_CHECK(0x50bfc0u, 0x5127abu); RETCHK(0x5127b0u, 0x5127abu); LOADALL;
  /* 005127b0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005127b2 jne 0x5127c7 */ if (!ZF_) goto L_005127c7;
  /* 005127b4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005127b5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005127b6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005127b7 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005127ba mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005127c1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005127c3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005127c4 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
L_005127c7:;
  /* 005127c7 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005127ca mov cl, byte ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005127cd test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005127cf mov dword ptr [edi + 0x1f0], eax */ { const u32 m_ = (u32)(edi + 0x1f0u); M32(m_) = (u32)(eax); }
  /* 005127d5 mov dword ptr [edi + 0x1ec], 0xffffffff */ { const u32 m_ = (u32)(edi + 0x1ecu); M32(m_) = (u32)(0xffffffffu); }
  /* 005127df mov byte ptr [edi + 0x1f4], cl */ { const u32 m_ = (u32)(edi + 0x1f4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005127e5 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005127e8 fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005127ea mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005127ed mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005127ef mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 005127f2 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005127f8 mov dword ptr [ebp - 0x24], edx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edx); }
  /* 005127fb fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005127fd je 0x51285c */ if (ZF_) goto L_0051285c;
  /* 005127ff test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00512802 je 0x51280b */ if (ZF_) goto L_0051280b;
  /* 00512804 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00512806 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00512808 fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051280b:;
  /* 0051280b fild dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 0051280e fdivr st(1) */ ST(0) = FR(ST(1) / ST(0));
  /* 00512810 fstp dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00512813 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00512815 fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00512818 fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051281b fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00512821 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00512823 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00512826 jne 0x51282d */ if (!ZF_) goto L_0051282d;
  /* 00512828 fst dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); MF32(m_) = (float)ST(0); }
  /* 0051282b jmp 0x512836 */ goto L_00512836;
L_0051282d:;
  /* 0051282d fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00512830 fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00512833 fstp dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
L_00512836:;
  /* 00512836 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051283c mov dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x0u); }
  /* 00512843 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00512845 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00512848 jne 0x51284f */ if (!ZF_) goto L_0051284f;
  /* 0051284a fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051284d jmp 0x5128b1 */ goto L_005128b1;
L_0051284f:;
  /* 0051284f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00512851 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00512854 fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00512857 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0051285a jmp 0x5128b1 */ goto L_005128b1;
L_0051285c:;
  /* 0051285c test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051285f jne 0x512866 */ if (!ZF_) goto L_00512866;
  /* 00512861 fst dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); }
  /* 00512864 jmp 0x51286e */ goto L_0051286e;
L_00512866:;
  /* 00512866 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00512868 fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051286b fstp dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
L_0051286e:;
  /* 0051286e fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00512871 fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00512874 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051287a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051287c test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051287f je 0x512889 */ if (ZF_) goto L_00512889;
  /* 00512881 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00512883 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00512886 fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00512889:;
  /* 00512889 fild dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 0051288c mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
  /* 00512893 fdivr st(1) */ ST(0) = FR(ST(1) / ST(0));
  /* 00512895 fstp dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00512898 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0051289a fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005128a0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005128a2 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005128a5 je 0x5128ae */ if (ZF_) goto L_005128ae;
  /* 005128a7 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005128a9 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 005128ab fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005128ae:;
  /* 005128ae fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
L_005128b1:;
  /* 005128b1 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005128b4 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005128b6 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005128b8 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 005128bb jle 0x5129d9 */ if ((ZF_|LT_)) goto L_005129d9;
  /* 005128c1 lea ebx, [edi + 0x1dc] */ ebx = (u32)((u32)(edi + 0x1dcu));
  /* 005128c7 jmp 0x5128d1 */ goto L_005128d1;
L_005128c9:;
  /* 005128c9 mov cl, byte ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005128cc mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005128cf xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_005128d1:;
  /* 005128d1 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005128d3 fild dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)(s32)M32(m_)); }
  /* 005128d6 je 0x5128e9 */ if (ZF_) goto L_005128e9;
  /* 005128d8 fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005128db fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005128de fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005128e1 fadd dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005128e4 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005128e7 jmp 0x5128f8 */ goto L_005128f8;
L_005128e9:;
  /* 005128e9 fmul dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005128ec fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005128ef fld dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 005128f2 fadd dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005128f5 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
L_005128f8:;
  /* 005128f8 push 0x1d0 */ { u32 v_ = 0x1d0u; esp -= 4; M32(esp) = v_; }
  /* 005128fd call 0x5fe934 */ esp -= 4; M32(esp) = 0x512902u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5128fdu); RETCHK(0x512902u, 0x5128fdu); LOADALL;
  /* 00512902 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00512905 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00512908 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051290a mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0051290d je 0x51291a */ if (ZF_) goto L_0051291a;
  /* 0051290f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00512910 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00512911 call 0x50e2a0 */ esp -= 4; M32(esp) = 0x512916u; SAVEALL; F_0050e2a0(c); ABI_CHECK(0x50e2a0u, 0x512911u); RETCHK(0x512916u, 0x512911u); LOADALL;
  /* 00512916 mov edi, eax */ { edi = (u32)(eax); }
  /* 00512918 jmp 0x51291c */ goto L_0051291c;
L_0051291a:;
  /* 0051291a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_0051291c:;
  /* 0051291c mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00512923 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00512925 push 0x651b20 */ { u32 v_ = 0x651b20u; esp -= 4; M32(esp) = v_; }
  /* 0051292a lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0051292d mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 00512930 mov dword ptr [ebp - 0x28], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0xfu); }
  /* 00512937 mov dword ptr [ebp - 0x2c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(esi); }
  /* 0051293a mov byte ptr [ebp - 0x3c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M8(m_) = (u8)(0x0u); }
  /* 0051293e call 0x404420 */ esp -= 4; M32(esp) = 0x512943u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x51293eu); RETCHK(0x512943u, 0x51293eu); LOADALL;
  /* 00512943 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00512946 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00512947 lea edx, [ebp - 0x40] */ edx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0051294a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0051294b lea esi, [ebp - 0x24] */ esi = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0051294e mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00512955 call 0x50e360 */ esp -= 4; M32(esp) = 0x51295au; SAVEALL; F_0050e360(c); ABI_CHECK(0x50e360u, 0x512955u); RETCHK(0x51295au, 0x512955u); LOADALL;
  /* 0051295a mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00512961 cmp dword ptr [ebp - 0x28], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00512965 jb 0x512973 */ if (CF_) goto L_00512973;
  /* 00512967 mov eax, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); eax = (u32)(M32(m_)); }
  /* 0051296a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051296b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x512970u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x51296bu); RETCHK(0x512970u, 0x51296bu); LOADALL;
  /* 00512970 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00512973:;
  /* 00512973 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00512976 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00512978 mov dword ptr [ebp - 0x28], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0xfu); }
  /* 0051297f mov dword ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x0u); }
  /* 00512986 mov byte ptr [ebp - 0x3c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M8(m_) = (u8)(0x0u); }
  /* 0051298a jne 0x512990 */ if (!ZF_) goto L_00512990;
  /* 0051298c xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0051298e jmp 0x512998 */ goto L_00512998;
L_00512990:;
  /* 00512990 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00512993 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00512995 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
L_00512998:;
  /* 00512998 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051299a je 0x5129b5 */ if (ZF_) goto L_005129b5;
  /* 0051299c mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0051299f sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005129a1 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005129a4 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005129a6 jae 0x5129b5 */ if (!CF_) goto L_005129b5;
  /* 005129a8 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005129ab mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 005129ad add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005129b0 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 005129b3 jmp 0x5129c7 */ goto L_005129c7;
L_005129b5:;
  /* 005129b5 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005129b8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005129b9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005129ba lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 005129bd mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 005129c2 call 0x4d2620 */ esp -= 4; M32(esp) = 0x5129c7u; SAVEALL; F_004d2620(c); ABI_CHECK(0x4d2620u, 0x5129c2u); RETCHK(0x5129c7u, 0x5129c2u); LOADALL;
L_005129c7:;
  /* 005129c7 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 005129ca mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005129cd inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005129ce cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005129d0 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005129d3 jl 0x5128c9 */ if (LT_) goto L_005128c9;
L_005129d9:;
  /* 005129d9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005129dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005129dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005129de mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005129e0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005129e1 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005129e8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005129ea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005129eb ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

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
